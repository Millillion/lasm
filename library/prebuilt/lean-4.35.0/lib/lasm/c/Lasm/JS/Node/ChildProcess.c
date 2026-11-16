// Lean compiler output
// Module: Lasm.JS.Node.ChildProcess
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Node.Events public import Lasm.JS.Node.Stream public import Lasm.JS.Node.Buffer public import Lasm.JS.Node.Net public import Lasm.JS.Node.Process public import Lasm.JS.Node.Fs
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
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_glob_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSRecord___redArg(lean_object*);
lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_net_Socket_end_spec__0(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___redArg(lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_stream_Readable_readableEncoding_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array;
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChildProcess___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSChildProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSChildProcess___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChildProcess___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcess___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChildProcess = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcess___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSChildProcess___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcess___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChildProcess___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChildProcess___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSChildProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSChildProcess___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcess___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSChildProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.ChildProcess"};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcess___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSChildProcess___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcess___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSChildProcess = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeChildProcessEventEmitter___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeChildProcessEventEmitter___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeChildProcessEventEmitter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeChildProcessEventEmitter___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeChildProcessEventEmitter___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeChildProcessEventEmitter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeChildProcessEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instCoeChildProcessEventEmitter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChildProcessCloseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcess___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSChildProcessCloseListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Node.ChildProcess.CloseListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessCloseListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessCloseListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSChildProcessCloseListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessCloseListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessCloseListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessCloseListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSChildProcessCloseListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessCloseListener___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Option (Int)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChildProcessDisconnectListener = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcess___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSChildProcessDisconnectListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lasm.JS.Node.ChildProcess.DisconnectListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessDisconnectListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessDisconnectListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSChildProcessDisconnectListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessDisconnectListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessDisconnectListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessDisconnectListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSChildProcessDisconnectListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessDisconnectListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChildProcessErrorListener = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcess___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSChildProcessErrorListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Node.ChildProcess.ErrorListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessErrorListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessErrorListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSChildProcessErrorListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessErrorListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessErrorListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessErrorListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSChildProcessErrorListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessErrorListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChildProcessExitListener = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcess___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSChildProcessExitListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Node.ChildProcess.ExitListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessExitListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessExitListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSChildProcessExitListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessExitListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessExitListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessExitListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSChildProcessExitListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessExitListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChildProcessMessageListener = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcess___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSChildProcessMessageListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Node.ChildProcess.MessageListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessMessageListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessMessageListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSChildProcessMessageListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessMessageListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessMessageListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessMessageListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSChildProcessMessageListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessMessageListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChildProcessSpawnListener = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcess___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSChildProcessSpawnListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Node.ChildProcess.SpawnListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessSpawnListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessSpawnListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSChildProcessSpawnListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcess___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessSpawnListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSChildProcessSpawnListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessSpawnListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSChildProcessSpawnListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSChildProcessSpawnListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_instToJSChildProcessSendOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "keepOpen"};
static const lean_object* l_Lasm_JS_Node_instToJSChildProcessSendOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcessSendOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChildProcessSendOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSChildProcessSendOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChildProcessSendOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cwd"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "env"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "encoding"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "shell"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timeout"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "maxBuffer"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "killSignal"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "uid"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gid"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "windowsHide"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__2_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__3_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__4_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0, .m_arity = 7, .m_num_fixed = 6, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__2_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__3_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__4_value),((lean_object*)&l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__5 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__5_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__5_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "windowsVerbatimArguments"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSBooleanOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions;
static const lean_string_object l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stdout"};
static const lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stderr"};
static const lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0;
static const lean_string_object l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Node.child_process.ExecFileResult"};
static const lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__1_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__2_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__3_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__4_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__5 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__5_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__6 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__7 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__7_value),((lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__2_value),((lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__3_value),((lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__4_value),((lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__5_value)}};
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__8 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__8_value),((lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__6_value)}};
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__9 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "detached"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "execPath"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "execArgv"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "serialization"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "silent"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stdio"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__0;
static lean_once_cell_t l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processForkOptions;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "argv0"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSequenceOfAny___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrSequenceOfAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrSequenceOfAny___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSequenceOfAny___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrSequenceOfAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSequenceOfAny = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrSequenceOfAny___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSequenceOfAny___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrSequenceOfAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrSequenceOfAny___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSequenceOfAny___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrSequenceOfAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSequenceOfAny = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrSequenceOfAny___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataDOMStringOrSequenceOfAny___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeArrayDataDOMStringOrSequenceOfAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeArrayDataDOMStringOrSequenceOfAny___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeArrayDataDOMStringOrSequenceOfAny___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayDataDOMStringOrSequenceOfAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeArrayDataDOMStringOrSequenceOfAny = (const lean_object*)&l_Lasm_JS_Node_instCoeArrayDataDOMStringOrSequenceOfAny___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "input"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*8, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0, .m_arity = 9, .m_num_fixed = 8, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrSequenceOfAny___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__3_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__4_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecSyncOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecSyncOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSChild__processExecSyncOptions___lam__0, .m_arity = 8, .m_num_fixed = 7, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrSequenceOfAny___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__3_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__4_value),((lean_object*)&l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecSyncOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecSyncOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChild__processExecSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecSyncOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnSyncOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processSpawnSyncOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*8, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSChild__processSpawnSyncOptions___lam__0, .m_arity = 9, .m_num_fixed = 8, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrSequenceOfAny___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__3_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__4_value),((lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnSyncOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processSpawnSyncOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnSyncOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processSpawnSyncOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "node:child_process"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ChildProcess"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_channel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "channel"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_channel___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_channel___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_channel(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_channel___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_connected___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "connected"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_connected___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_connected___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_connected(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_connected___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_exitCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exitCode"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_exitCode___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_exitCode___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_killed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "killed"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_killed___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_killed___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_pid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pid"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_pid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_pid___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_signalCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "signalCode"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_signalCode___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_signalCode___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_spawnargs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "spawnargs"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_spawnargs___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_spawnargs___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_spawnargs(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_spawnargs___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_spawnfile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "spawnfile"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_spawnfile___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_spawnfile___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_spawnfile(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_spawnfile___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Option (Lasm.JS.Node.stream.Readable)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Option (Lasm.JS.Node.stream.Writable)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_stdin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stdin"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_stdin___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_stdin___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdio(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdio___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_onClose___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "on"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onClose___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onClose___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_ChildProcess_onClose___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onClose___closed__1 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onClose___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_ChildProcess_onClose___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_ChildProcess_onClose___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onClose___closed__2 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onClose___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Node_ChildProcess_onClose___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_ChildProcess_onClose___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onClose(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onClose___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_onceClose___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "once"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onceClose___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onceClose___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceClose(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceClose___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "disconnect"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__1 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceDisconnect(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceDisconnect___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_onError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onError___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_ChildProcess_onError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_ChildProcess_onError___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onError___closed__1 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onError___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_ChildProcess_onError___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_ChildProcess_onError___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onError___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceError___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_onExit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exit"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onExit___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onExit___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_ChildProcess_onExit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_ChildProcess_onExit___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onExit___closed__1 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onExit___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_ChildProcess_onExit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_ChildProcess_onExit___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onExit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onExit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceExit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceExit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_onMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onMessage___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onMessage___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_ChildProcess_onMessage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_ChildProcess_onMessage___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onMessage___closed__1 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onMessage___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_ChildProcess_onMessage___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_ChildProcess_onMessage___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onMessage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onMessage___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceMessage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceMessage___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_onSpawn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "spawn"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_ChildProcess_onSpawn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn___closed__1 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceSpawn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceSpawn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_JS_Node_ChildProcess_disconnect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Node_ChildProcess_disconnect___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_disconnect___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Node_ChildProcess_disconnect___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_ChildProcess_disconnect___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_disconnect(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_disconnect___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_kill___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kill"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_kill___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_kill___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_ref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ref"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_ref___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_ref___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ref___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_send_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_send_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_send___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "send"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_send___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_send___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_send(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_unref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unref"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_unref___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_unref___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_unref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_unref___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_exec_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_child__process_exec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Node.child_process.exec"};
static const lean_object* l_Lasm_JS_Node_child__process_exec___closed__0 = (const lean_object*)&l_Lasm_JS_Node_child__process_exec___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_child__process_exec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exec"};
static const lean_object* l_Lasm_JS_Node_child__process_exec___closed__1 = (const lean_object*)&l_Lasm_JS_Node_child__process_exec___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_child__process_exec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_child__process_exec___closed__0_value),((lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_child__process_exec___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_child__process_exec___closed__2 = (const lean_object*)&l_Lasm_JS_Node_child__process_exec___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_exec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_exec___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__4(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.DOMStringOrUint8Array"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "call"};
static const lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.Support.promisified"};
static const lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "node:util"};
static const lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "promisify"};
static const lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__1_value),((lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_child__process_execFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "execFile"};
static const lean_object* l_Lasm_JS_Node_child__process_execFile___closed__0 = (const lean_object*)&l_Lasm_JS_Node_child__process_execFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_fork_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_fork_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_child__process_fork___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Node.child_process.fork"};
static const lean_object* l_Lasm_JS_Node_child__process_fork___closed__0 = (const lean_object*)&l_Lasm_JS_Node_child__process_fork___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_child__process_fork___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fork"};
static const lean_object* l_Lasm_JS_Node_child__process_fork___closed__1 = (const lean_object*)&l_Lasm_JS_Node_child__process_fork___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_child__process_fork___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_child__process_fork___closed__0_value),((lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_child__process_fork___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_child__process_fork___closed__2 = (const lean_object*)&l_Lasm_JS_Node_child__process_fork___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_fork(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_fork___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_child__process_spawn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.child_process.spawn"};
static const lean_object* l_Lasm_JS_Node_child__process_spawn___closed__0 = (const lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_child__process_spawn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__0_value),((lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_child__process_spawn___closed__1 = (const lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Option (Lasm.JS.Node.Uint8ArrayOrDOMString)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFileSync_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFileSync_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_child__process_execFileSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Node.child_process.execFileSync"};
static const lean_object* l_Lasm_JS_Node_child__process_execFileSync___closed__0 = (const lean_object*)&l_Lasm_JS_Node_child__process_execFileSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_child__process_execFileSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "execFileSync"};
static const lean_object* l_Lasm_JS_Node_child__process_execFileSync___closed__1 = (const lean_object*)&l_Lasm_JS_Node_child__process_execFileSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_child__process_execFileSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_child__process_execFileSync___closed__0_value),((lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_child__process_execFileSync___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_child__process_execFileSync___closed__2 = (const lean_object*)&l_Lasm_JS_Node_child__process_execFileSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFileSync(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFileSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execSync_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_child__process_execSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Node.child_process.execSync"};
static const lean_object* l_Lasm_JS_Node_child__process_execSync___closed__0 = (const lean_object*)&l_Lasm_JS_Node_child__process_execSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_child__process_execSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "execSync"};
static const lean_object* l_Lasm_JS_Node_child__process_execSync___closed__1 = (const lean_object*)&l_Lasm_JS_Node_child__process_execSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_child__process_execSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_child__process_execSync___closed__0_value),((lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_child__process_execSync___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_child__process_execSync___closed__2 = (const lean_object*)&l_Lasm_JS_Node_child__process_execSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execSync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execSync___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawnSync_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_child__process_spawnSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Node.child_process.spawnSync"};
static const lean_object* l_Lasm_JS_Node_child__process_spawnSync___closed__0 = (const lean_object*)&l_Lasm_JS_Node_child__process_spawnSync___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_child__process_spawnSync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "spawnSync"};
static const lean_object* l_Lasm_JS_Node_child__process_spawnSync___closed__1 = (const lean_object*)&l_Lasm_JS_Node_child__process_spawnSync___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_child__process_spawnSync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_child__process_spawnSync___closed__0_value),((lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_child__process_spawnSync___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_child__process_spawnSync___closed__2 = (const lean_object*)&l_Lasm_JS_Node_child__process_spawnSync___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawnSync(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawnSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChildProcess___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChildProcess___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChildProcess___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChildProcess___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Node_instFromJSChildProcess___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeChildProcessEventEmitter___lam__0(lean_object* v_self_22_){
_start:
{
lean_inc(v_self_22_);
return v_self_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeChildProcessEventEmitter___lam__0___boxed(lean_object* v_self_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_JS_Node_instCoeChildProcessEventEmitter___lam__0(v_self_23_);
lean_dec(v_self_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0(lean_object* v_x_38_){
_start:
{
if (lean_obj_tag(v_x_38_) == 0)
{
lean_object* v_a_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_48_; 
v_a_40_ = lean_ctor_get(v_x_38_, 0);
v_isSharedCheck_48_ = !lean_is_exclusive(v_x_38_);
if (v_isSharedCheck_48_ == 0)
{
v___x_42_ = v_x_38_;
v_isShared_43_ = v_isSharedCheck_48_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_a_40_);
lean_dec(v_x_38_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_48_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_45_; 
if (v_isShared_43_ == 0)
{
v___x_45_ = v___x_42_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_a_40_);
v___x_45_ = v_reuseFailAlloc_47_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
lean_object* v___x_46_; 
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
return v___x_46_;
}
}
}
else
{
lean_object* v___x_49_; 
lean_dec_ref_known(v_x_38_, 1);
v___x_49_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0___closed__1));
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0___boxed(lean_object* v_x_50_, lean_object* v___y_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__0(v_x_50_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__1(lean_object* v_f_53_, lean_object* v_a_54_, lean_object* v___f_55_, lean_object* v_x_56_){
_start:
{
if (lean_obj_tag(v_x_56_) == 0)
{
lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_66_; 
lean_dec_ref(v___f_55_);
lean_dec(v_a_54_);
lean_dec_ref(v_f_53_);
v_a_58_ = lean_ctor_get(v_x_56_, 0);
v_isSharedCheck_66_ = !lean_is_exclusive(v_x_56_);
if (v_isSharedCheck_66_ == 0)
{
v___x_60_ = v_x_56_;
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v_x_56_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v_a_58_);
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
else
{
lean_object* v_a_67_; lean_object* v___x_68_; uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v_a_67_ = lean_ctor_get(v_x_56_, 0);
lean_inc(v_a_67_);
lean_dec_ref_known(v_x_56_, 1);
v___x_68_ = lean_unsigned_to_nat(0u);
v___x_69_ = 0;
v___x_70_ = lean_apply_3(v_f_53_, v_a_54_, v_a_67_, lean_box(0));
v___x_71_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_68_, v___x_69_, v___x_70_, v___f_55_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__1___boxed(lean_object* v_f_72_, lean_object* v_a_73_, lean_object* v___f_74_, lean_object* v_x_75_, lean_object* v___y_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__1(v_f_72_, v_a_73_, v___f_74_, v_x_75_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0(lean_object* v_args_79_, lean_object* v_i_80_){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; 
v___x_82_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0___closed__0));
v___x_83_ = lean_unsigned_to_nat(1u);
v___x_84_ = lean_nat_add(v_i_80_, v___x_83_);
v___x_85_ = l_Nat_reprFast(v___x_84_);
v___x_86_ = lean_string_append(v___x_82_, v___x_85_);
lean_dec_ref(v___x_85_);
v___x_87_ = lean_array_get_size(v_args_79_);
v___x_88_ = lean_nat_dec_lt(v_i_80_, v___x_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_box(0);
v___x_90_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v___x_86_, v___x_89_);
lean_dec_ref(v___x_86_);
return v___x_90_;
}
else
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_array_fget_borrowed(v_args_79_, v_i_80_);
lean_inc(v___x_91_);
v___x_92_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(v___x_86_, v___x_91_);
lean_dec_ref(v___x_86_);
return v___x_92_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0___boxed(lean_object* v_args_93_, lean_object* v_i_94_, lean_object* v_a_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0(v_args_93_, v_i_94_);
lean_dec(v_i_94_);
lean_dec_ref(v_args_93_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__2(lean_object* v_f_97_, lean_object* v___f_98_, lean_object* v_args_99_, lean_object* v_x_100_){
_start:
{
if (lean_obj_tag(v_x_100_) == 0)
{
lean_object* v_a_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_110_; 
lean_dec_ref(v___f_98_);
lean_dec_ref(v_f_97_);
v_a_102_ = lean_ctor_get(v_x_100_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v_x_100_);
if (v_isSharedCheck_110_ == 0)
{
v___x_104_ = v_x_100_;
v_isShared_105_ = v_isSharedCheck_110_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_a_102_);
lean_dec(v_x_100_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_110_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_107_; 
if (v_isShared_105_ == 0)
{
v___x_107_ = v___x_104_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_a_102_);
v___x_107_ = v_reuseFailAlloc_109_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
lean_object* v___x_108_; 
v___x_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
return v___x_108_;
}
}
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_132_; 
v_a_111_ = lean_ctor_get(v_x_100_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v_x_100_);
if (v_isSharedCheck_132_ == 0)
{
v___x_113_ = v_x_100_;
v_isShared_114_ = v_isSharedCheck_132_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v_x_100_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_132_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___f_115_; lean_object* v___x_116_; lean_object* v___x_117_; uint8_t v___x_118_; lean_object* v_val_120_; lean_object* v___x_123_; 
v___f_115_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_115_, 0, v_f_97_);
lean_closure_set(v___f_115_, 1, v_a_111_);
lean_closure_set(v___f_115_, 2, v___f_98_);
v___x_116_ = lean_unsigned_to_nat(1u);
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = 0;
v___x_123_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0(v_args_99_, v___x_116_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_object* v_a_124_; lean_object* v___x_126_; 
v_a_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc(v_a_124_);
lean_dec_ref_known(v___x_123_, 1);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v_a_124_);
v___x_126_ = v___x_113_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_124_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
v_val_120_ = v___x_126_;
goto v___jp_119_;
}
}
else
{
lean_object* v_a_128_; lean_object* v___x_130_; 
v_a_128_ = lean_ctor_get(v___x_123_, 0);
lean_inc(v_a_128_);
lean_dec_ref_known(v___x_123_, 1);
if (v_isShared_114_ == 0)
{
lean_ctor_set_tag(v___x_113_, 0);
lean_ctor_set(v___x_113_, 0, v_a_128_);
v___x_130_ = v___x_113_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_a_128_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
v_val_120_ = v___x_130_;
goto v___jp_119_;
}
}
v___jp_119_:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_121_, 0, v_val_120_);
v___x_122_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_117_, v___x_118_, v___x_121_, v___f_115_);
return v___x_122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__2___boxed(lean_object* v_f_133_, lean_object* v___f_134_, lean_object* v_args_135_, lean_object* v_x_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__2(v_f_133_, v___f_134_, v_args_135_, v_x_136_);
lean_dec_ref(v_args_135_);
return v_res_138_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_148_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__8));
v___x_149_ = lean_unsigned_to_nat(46u);
v___x_150_ = lean_unsigned_to_nat(193u);
v___x_151_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__7));
v___x_152_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__6));
v___x_153_ = l_mkPanicMessageWithDecl(v___x_152_, v___x_151_, v___x_150_, v___x_149_, v___x_148_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1(lean_object* v_context_156_, lean_object* v_d_157_){
_start:
{
lean_object* v___y_163_; lean_object* v___y_164_; lean_object* v___y_169_; lean_object* v_received_170_; lean_object* v___y_189_; lean_object* v_a_192_; lean_object* v_a_217_; 
switch(lean_obj_tag(v_d_157_))
{
case 1:
{
goto v___jp_159_;
}
case 0:
{
goto v___jp_159_;
}
default: 
{
switch(lean_obj_tag(v_d_157_))
{
case 3:
{
double v_n_220_; lean_object* v___x_221_; 
v_n_220_ = lean_ctor_get_float(v_d_157_, 0);
v___x_221_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_220_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v___x_222_; 
v___x_222_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__11));
v_a_192_ = v___x_222_;
goto v___jp_191_;
}
else
{
lean_object* v_val_223_; 
lean_dec_ref_known(v_d_157_, 0);
v_val_223_ = lean_ctor_get(v___x_221_, 0);
lean_inc(v_val_223_);
lean_dec_ref_known(v___x_221_, 1);
v_a_217_ = v_val_223_;
goto v___jp_216_;
}
}
case 5:
{
lean_object* v_i_224_; 
v_i_224_ = lean_ctor_get(v_d_157_, 0);
lean_inc(v_i_224_);
lean_dec_ref_known(v_d_157_, 1);
v_a_217_ = v_i_224_;
goto v___jp_216_;
}
default: 
{
lean_object* v___x_225_; 
v___x_225_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v_a_192_ = v___x_225_;
goto v___jp_191_;
}
}
}
}
v___jp_159_:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_box(0);
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
v___jp_162_:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_165_ = lean_string_append(v___y_163_, v___y_164_);
lean_dec_ref(v___y_164_);
v___x_166_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
v___x_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
return v___x_167_;
}
v___jp_168_:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_171_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_172_ = lean_string_append(v___x_171_, v_context_156_);
v___x_173_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_174_ = lean_string_append(v___x_172_, v___x_173_);
v___x_175_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__2));
v___x_176_ = lean_string_append(v___x_174_, v___x_175_);
v___x_177_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_178_ = lean_string_append(v___x_176_, v___x_177_);
v___x_179_ = lean_string_append(v___x_178_, v_received_170_);
lean_dec_ref(v_received_170_);
v___x_180_ = lean_string_utf8_byte_size(v___y_169_);
v___x_181_ = lean_unsigned_to_nat(0u);
v___x_182_ = lean_nat_dec_eq(v___x_180_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_183_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__4));
v___x_184_ = lean_string_append(v___x_183_, v___y_169_);
v___x_185_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__5));
v___x_186_ = lean_string_append(v___x_184_, v___x_185_);
v___y_163_ = v___x_179_;
v___y_164_ = v___x_186_;
goto v___jp_162_;
}
else
{
lean_object* v___x_187_; 
v___x_187_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___y_163_ = v___x_179_;
v___y_164_ = v___x_187_;
goto v___jp_162_;
}
}
v___jp_188_:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lasm_JS_Data_describe(v_d_157_);
v___y_169_ = v___y_189_;
v_received_170_ = v___x_190_;
goto v___jp_168_;
}
v___jp_191_:
{
if (lean_obj_tag(v_d_157_) == 9)
{
lean_object* v_value_193_; lean_object* v_description_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v_value_193_ = lean_ctor_get(v_d_157_, 0);
v_description_194_ = lean_ctor_get(v_d_157_, 1);
v___x_195_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_196_ = lean_string_dec_eq(v_description_194_, v___x_195_);
if (v___x_196_ == 0)
{
v___y_189_ = v_a_192_;
goto v___jp_188_;
}
else
{
lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_213_; 
lean_inc(v_value_193_);
v_isSharedCheck_213_ = !lean_is_exclusive(v_d_157_);
if (v_isSharedCheck_213_ == 0)
{
lean_object* v_unused_214_; lean_object* v_unused_215_; 
v_unused_214_ = lean_ctor_get(v_d_157_, 1);
lean_dec(v_unused_214_);
v_unused_215_ = lean_ctor_get(v_d_157_, 0);
lean_dec(v_unused_215_);
v___x_198_ = v_d_157_;
v_isShared_199_ = v_isSharedCheck_213_;
goto v_resetjp_197_;
}
else
{
lean_dec(v_d_157_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_213_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
uint32_t v___x_200_; uint64_t v___x_201_; lean_object* v___x_203_; 
v___x_200_ = 206;
v___x_201_ = 0ULL;
lean_inc(v_value_193_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v___x_195_);
v___x_203_ = v___x_198_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_value_193_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v___x_195_);
v___x_203_ = v_reuseFailAlloc_212_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
uint32_t v___x_204_; lean_object* v___x_205_; 
v___x_204_ = lasm_js_value_handle(v_value_193_);
lean_dec(v_value_193_);
v___x_205_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_200_, v___x_201_, v___x_203_, v___x_204_);
lean_dec_ref(v___x_203_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; uint8_t v___x_207_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
lean_inc(v_a_206_);
lean_dec_ref_known(v___x_205_, 1);
v___x_207_ = lean_string_validate_utf8(v_a_206_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; lean_object* v___x_209_; 
lean_dec(v_a_206_);
v___x_208_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_209_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_208_);
v___y_169_ = v_a_192_;
v_received_170_ = v___x_209_;
goto v___jp_168_;
}
else
{
lean_object* v___x_210_; 
v___x_210_ = lean_string_from_utf8_unchecked(v_a_206_);
v___y_169_ = v_a_192_;
v_received_170_ = v___x_210_;
goto v___jp_168_;
}
}
else
{
lean_object* v___x_211_; 
lean_dec_ref_known(v___x_205_, 1);
v___x_211_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v___y_169_ = v_a_192_;
v_received_170_ = v___x_211_;
goto v___jp_168_;
}
}
}
}
}
else
{
v___y_189_ = v_a_192_;
goto v___jp_188_;
}
}
v___jp_216_:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_218_, 0, v_a_217_);
v___x_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___boxed(lean_object* v_context_226_, lean_object* v_d_227_, lean_object* v_a_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1(v_context_226_, v_d_227_);
lean_dec_ref(v_context_226_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1(lean_object* v_args_230_, lean_object* v_i_231_){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_233_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0___closed__0));
v___x_234_ = lean_unsigned_to_nat(1u);
v___x_235_ = lean_nat_add(v_i_231_, v___x_234_);
v___x_236_ = l_Nat_reprFast(v___x_235_);
v___x_237_ = lean_string_append(v___x_233_, v___x_236_);
lean_dec_ref(v___x_236_);
v___x_238_ = lean_array_get_size(v_args_230_);
v___x_239_ = lean_nat_dec_lt(v_i_231_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = lean_box(0);
v___x_241_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1(v___x_237_, v___x_240_);
lean_dec_ref(v___x_237_);
return v___x_241_;
}
else
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_array_fget_borrowed(v_args_230_, v_i_231_);
lean_inc(v___x_242_);
v___x_243_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1(v___x_237_, v___x_242_);
lean_dec_ref(v___x_237_);
return v___x_243_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1___boxed(lean_object* v_args_244_, lean_object* v_i_245_, lean_object* v_a_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1(v_args_244_, v_i_245_);
lean_dec(v_i_245_);
lean_dec_ref(v_args_244_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__3(lean_object* v_f_248_, lean_object* v___f_249_, lean_object* v_args_250_){
_start:
{
lean_object* v___f_252_; lean_object* v___x_253_; uint8_t v___x_254_; lean_object* v_val_256_; lean_object* v___x_259_; 
lean_inc_ref(v_args_250_);
v___f_252_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_252_, 0, v_f_248_);
lean_closure_set(v___f_252_, 1, v___f_249_);
lean_closure_set(v___f_252_, 2, v_args_250_);
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = 0;
v___x_259_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1(v_args_250_, v___x_253_);
lean_dec_ref(v_args_250_);
if (lean_obj_tag(v___x_259_) == 0)
{
lean_object* v_a_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_267_; 
v_a_260_ = lean_ctor_get(v___x_259_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_267_ == 0)
{
v___x_262_ = v___x_259_;
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_a_260_);
lean_dec(v___x_259_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_265_; 
if (v_isShared_263_ == 0)
{
lean_ctor_set_tag(v___x_262_, 1);
v___x_265_ = v___x_262_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_a_260_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
v_val_256_ = v___x_265_;
goto v___jp_255_;
}
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
v_a_268_ = lean_ctor_get(v___x_259_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_259_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_259_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
lean_ctor_set_tag(v___x_270_, 0);
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
v_val_256_ = v___x_273_;
goto v___jp_255_;
}
}
}
v___jp_255_:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_257_, 0, v_val_256_);
v___x_258_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_253_, v___x_254_, v___x_257_, v___f_252_);
return v___x_258_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__3___boxed(lean_object* v_f_276_, lean_object* v___f_277_, lean_object* v_args_278_, lean_object* v___y_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__3(v_f_276_, v___f_277_, v_args_278_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn(lean_object* v_f_282_){
_start:
{
lean_object* v___f_284_; lean_object* v___f_285_; lean_object* v___x_286_; 
v___f_284_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_285_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_285_, 0, v_f_282_);
lean_closure_set(v___f_285_, 1, v___f_284_);
v___x_286_ = l_Lasm_JS_Function_ofFn(v___f_285_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_286_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_286_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
else
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_302_; 
v_a_295_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_302_ == 0)
{
v___x_297_ = v___x_286_;
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v___x_286_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_300_; 
if (v_isShared_298_ == 0)
{
v___x_300_ = v___x_297_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_295_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___boxed(lean_object* v_f_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn(v_f_303_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0(lean_object* v_f_306_, lean_object* v_args_307_){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = lean_unsigned_to_nat(0u);
v___x_310_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1(v_args_307_, v___x_309_);
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v_a_311_ = lean_ctor_get(v___x_310_, 0);
lean_inc(v_a_311_);
lean_dec_ref_known(v___x_310_, 1);
v___x_312_ = lean_unsigned_to_nat(1u);
v___x_313_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0(v_args_307_, v___x_312_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; lean_object* v___x_315_; 
v_a_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_a_314_);
lean_dec_ref_known(v___x_313_, 1);
v___x_315_ = lean_apply_3(v_f_306_, v_a_311_, v_a_314_, lean_box(0));
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_323_; 
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_323_ == 0)
{
lean_object* v_unused_324_; 
v_unused_324_ = lean_ctor_get(v___x_315_, 0);
lean_dec(v_unused_324_);
v___x_317_ = v___x_315_;
v_isShared_318_ = v_isSharedCheck_323_;
goto v_resetjp_316_;
}
else
{
lean_dec(v___x_315_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_323_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_319_; lean_object* v___x_321_; 
v___x_319_ = lean_box(0);
if (v_isShared_318_ == 0)
{
lean_ctor_set(v___x_317_, 0, v___x_319_);
v___x_321_ = v___x_317_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_319_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
v_a_325_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_315_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_315_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
else
{
lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_340_; 
lean_dec(v_a_311_);
lean_dec_ref(v_f_306_);
v_a_333_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_340_ == 0)
{
v___x_335_ = v___x_313_;
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_313_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_338_; 
if (v_isShared_336_ == 0)
{
v___x_338_ = v___x_335_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_a_333_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
}
else
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
lean_dec_ref(v_f_306_);
v_a_341_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_310_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_310_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0___boxed(lean_object* v_f_349_, lean_object* v_args_350_, lean_object* v___y_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0(v_f_349_, v_args_350_);
lean_dec_ref(v_args_350_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn(lean_object* v_f_353_){
_start:
{
lean_object* v___f_355_; lean_object* v___x_356_; 
v___f_355_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_355_, 0, v_f_353_);
v___x_356_ = l_Lasm_JS_Function_ofSyncFn(v___f_355_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_364_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_364_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_360_ == 0)
{
v___x_362_ = v___x_359_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_357_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
else
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
v_a_365_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_356_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_356_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___boxed(lean_object* v_f_373_, lean_object* v_a_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn(v_f_373_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1(lean_object* v_f_383_, lean_object* v___f_384_, lean_object* v_x_385_){
_start:
{
lean_object* v___x_387_; uint8_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_387_ = lean_unsigned_to_nat(0u);
v___x_388_ = 0;
v___x_389_ = lean_apply_1(v_f_383_, lean_box(0));
v___x_390_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_387_, v___x_388_, v___x_389_, v___f_384_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1___boxed(lean_object* v_f_391_, lean_object* v___f_392_, lean_object* v_x_393_, lean_object* v___y_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1(v_f_391_, v___f_392_, v_x_393_);
lean_dec_ref(v_x_393_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn(lean_object* v_f_396_){
_start:
{
lean_object* v___f_398_; lean_object* v___f_399_; lean_object* v___x_400_; 
v___f_398_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_399_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_399_, 0, v_f_396_);
lean_closure_set(v___f_399_, 1, v___f_398_);
v___x_400_ = l_Lasm_JS_Function_ofFn(v___f_399_);
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
v_a_401_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_400_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_400_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
else
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
v_a_409_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_416_ == 0)
{
v___x_411_ = v___x_400_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_400_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_409_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___boxed(lean_object* v_f_417_, lean_object* v_a_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn(v_f_417_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0(lean_object* v_f_420_, lean_object* v_x_421_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = lean_apply_1(v_f_420_, lean_box(0));
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_431_; 
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_431_ == 0)
{
lean_object* v_unused_432_; 
v_unused_432_ = lean_ctor_get(v___x_423_, 0);
lean_dec(v_unused_432_);
v___x_425_ = v___x_423_;
v_isShared_426_ = v_isSharedCheck_431_;
goto v_resetjp_424_;
}
else
{
lean_dec(v___x_423_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_431_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_427_ = lean_box(0);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 0, v___x_427_);
v___x_429_ = v___x_425_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
v_a_433_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_423_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_423_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0___boxed(lean_object* v_f_441_, lean_object* v_x_442_, lean_object* v___y_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0(v_f_441_, v_x_442_);
lean_dec_ref(v_x_442_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn(lean_object* v_f_445_){
_start:
{
lean_object* v___f_447_; lean_object* v___x_448_; 
v___f_447_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_447_, 0, v_f_445_);
v___x_448_ = l_Lasm_JS_Function_ofSyncFn(v___f_447_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_456_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_456_ == 0)
{
v___x_451_ = v___x_448_;
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_448_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_449_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
v_a_457_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_448_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_448_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___boxed(lean_object* v_f_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn(v_f_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__1(lean_object* v_f_475_, lean_object* v___f_476_, lean_object* v_x_477_){
_start:
{
if (lean_obj_tag(v_x_477_) == 0)
{
lean_object* v___x_479_; 
lean_dec_ref(v___f_476_);
lean_dec_ref(v_f_475_);
v___x_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_479_, 0, v_x_477_);
return v___x_479_;
}
else
{
lean_object* v_a_480_; lean_object* v___x_481_; uint8_t v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_a_480_ = lean_ctor_get(v_x_477_, 0);
lean_inc(v_a_480_);
lean_dec_ref_known(v_x_477_, 1);
v___x_481_ = lean_unsigned_to_nat(0u);
v___x_482_ = 0;
v___x_483_ = lean_apply_2(v_f_475_, v_a_480_, lean_box(0));
v___x_484_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_481_, v___x_482_, v___x_483_, v___f_476_);
return v___x_484_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__1___boxed(lean_object* v_f_485_, lean_object* v___f_486_, lean_object* v_x_487_, lean_object* v___y_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__1(v_f_485_, v___f_486_, v_x_487_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__0(lean_object* v___f_490_, lean_object* v_args_491_){
_start:
{
lean_object* v___x_493_; uint8_t v___x_494_; lean_object* v_val_496_; lean_object* v___x_499_; lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
v___x_493_ = lean_unsigned_to_nat(0u);
v___x_494_ = 0;
v___x_499_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_491_, v___x_493_);
v_a_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_507_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
v___jp_495_:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_497_, 0, v_val_496_);
v___x_498_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_493_, v___x_494_, v___x_497_, v___f_490_);
return v___x_498_;
}
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
lean_ctor_set_tag(v___x_502_, 1);
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_500_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
v_val_496_ = v___x_505_;
goto v___jp_495_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__0___boxed(lean_object* v___f_508_, lean_object* v_args_509_, lean_object* v___y_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__0(v___f_508_, v_args_509_);
lean_dec_ref(v_args_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn(lean_object* v_f_512_){
_start:
{
lean_object* v___f_514_; lean_object* v___f_515_; lean_object* v___f_516_; lean_object* v___x_517_; 
v___f_514_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_515_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_515_, 0, v_f_512_);
lean_closure_set(v___f_515_, 1, v___f_514_);
v___f_516_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_516_, 0, v___f_515_);
v___x_517_ = l_Lasm_JS_Function_ofFn(v___f_516_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
v_a_518_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_517_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_517_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
v_a_526_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_517_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_517_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___boxed(lean_object* v_f_534_, lean_object* v_a_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn(v_f_534_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___lam__0(lean_object* v_f_537_, lean_object* v_args_538_){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v_a_542_; lean_object* v___x_543_; 
v___x_540_ = lean_unsigned_to_nat(0u);
v___x_541_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_538_, v___x_540_);
v_a_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_a_542_);
lean_dec_ref(v___x_541_);
v___x_543_ = lean_apply_2(v_f_537_, v_a_542_, lean_box(0));
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_551_; 
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_551_ == 0)
{
lean_object* v_unused_552_; 
v_unused_552_ = lean_ctor_get(v___x_543_, 0);
lean_dec(v_unused_552_);
v___x_545_ = v___x_543_;
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
else
{
lean_dec(v___x_543_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_547_ = lean_box(0);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 0, v___x_547_);
v___x_549_ = v___x_545_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
else
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
v_a_553_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___x_543_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_543_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___lam__0___boxed(lean_object* v_f_561_, lean_object* v_args_562_, lean_object* v___y_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___lam__0(v_f_561_, v_args_562_);
lean_dec_ref(v_args_562_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn(lean_object* v_f_565_){
_start:
{
lean_object* v___f_567_; lean_object* v___x_568_; 
v___f_567_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_567_, 0, v_f_565_);
v___x_568_ = l_Lasm_JS_Function_ofSyncFn(v___f_567_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v___x_568_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_568_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_a_569_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
else
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
v_a_577_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_568_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_568_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___boxed(lean_object* v_f_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn(v_f_585_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofFn(lean_object* v_f_595_){
_start:
{
lean_object* v___f_597_; lean_object* v___f_598_; lean_object* v___x_599_; 
v___f_597_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_598_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_598_, 0, v_f_595_);
lean_closure_set(v___f_598_, 1, v___f_597_);
v___x_599_ = l_Lasm_JS_Function_ofFn(v___f_598_);
if (lean_obj_tag(v___x_599_) == 0)
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
v_a_600_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_599_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_599_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
else
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
v_a_608_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_615_ == 0)
{
v___x_610_ = v___x_599_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_599_);
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
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofFn___boxed(lean_object* v_f_616_, lean_object* v_a_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lasm_JS_Node_ChildProcess_ExitListener_ofFn(v_f_616_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofSyncFn(lean_object* v_f_619_){
_start:
{
lean_object* v___f_621_; lean_object* v___x_622_; 
v___f_621_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_621_, 0, v_f_619_);
v___x_622_ = l_Lasm_JS_Function_ofSyncFn(v___f_621_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
v_a_623_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_622_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_622_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
else
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_638_; 
v_a_631_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_638_ == 0)
{
v___x_633_ = v___x_622_;
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_622_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_636_; 
if (v_isShared_634_ == 0)
{
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_a_631_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofSyncFn___boxed(lean_object* v_f_639_, lean_object* v_a_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = l_Lasm_JS_Node_ChildProcess_ExitListener_ofSyncFn(v_f_639_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__1(lean_object* v_f_649_, lean_object* v_a_650_, lean_object* v___f_651_, lean_object* v_x_652_){
_start:
{
if (lean_obj_tag(v_x_652_) == 0)
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_662_; 
lean_dec_ref(v___f_651_);
lean_dec(v_a_650_);
lean_dec_ref(v_f_649_);
v_a_654_ = lean_ctor_get(v_x_652_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v_x_652_);
if (v_isSharedCheck_662_ == 0)
{
v___x_656_ = v_x_652_;
v_isShared_657_ = v_isSharedCheck_662_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v_x_652_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_662_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_661_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
lean_object* v___x_660_; 
v___x_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
return v___x_660_;
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_664_; uint8_t v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v_a_663_ = lean_ctor_get(v_x_652_, 0);
lean_inc(v_a_663_);
lean_dec_ref_known(v_x_652_, 1);
v___x_664_ = lean_unsigned_to_nat(0u);
v___x_665_ = 0;
v___x_666_ = lean_apply_3(v_f_649_, v_a_650_, v_a_663_, lean_box(0));
v___x_667_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_664_, v___x_665_, v___x_666_, v___f_651_);
return v___x_667_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__1___boxed(lean_object* v_f_668_, lean_object* v_a_669_, lean_object* v___f_670_, lean_object* v_x_671_, lean_object* v___y_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__1(v_f_668_, v_a_669_, v___f_670_, v_x_671_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(lean_object* v_args_674_, lean_object* v_i_675_){
_start:
{
lean_object* v___x_677_; uint8_t v___x_678_; 
v___x_677_ = lean_array_get_size(v_args_674_);
v___x_678_ = lean_nat_dec_lt(v_i_675_, v___x_677_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_box(0);
v___x_680_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___redArg(v___x_679_);
return v___x_680_;
}
else
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_array_fget_borrowed(v_args_674_, v_i_675_);
lean_inc(v___x_681_);
v___x_682_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___redArg(v___x_681_);
return v___x_682_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0___boxed(lean_object* v_args_683_, lean_object* v_i_684_, lean_object* v_a_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(v_args_683_, v_i_684_);
lean_dec(v_i_684_);
lean_dec_ref(v_args_683_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0(lean_object* v_f_687_, lean_object* v___f_688_, lean_object* v_args_689_, lean_object* v_x_690_){
_start:
{
if (lean_obj_tag(v_x_690_) == 0)
{
lean_object* v___x_692_; 
lean_dec_ref(v___f_688_);
lean_dec_ref(v_f_687_);
v___x_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_692_, 0, v_x_690_);
return v___x_692_;
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_710_; 
v_a_693_ = lean_ctor_get(v_x_690_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v_x_690_);
if (v_isSharedCheck_710_ == 0)
{
v___x_695_ = v_x_690_;
v_isShared_696_ = v_isSharedCheck_710_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v_x_690_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_710_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___f_697_; lean_object* v___x_698_; lean_object* v___x_699_; uint8_t v___x_700_; lean_object* v_val_702_; lean_object* v___x_705_; lean_object* v_a_706_; lean_object* v___x_708_; 
v___f_697_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_697_, 0, v_f_687_);
lean_closure_set(v___f_697_, 1, v_a_693_);
lean_closure_set(v___f_697_, 2, v___f_688_);
v___x_698_ = lean_unsigned_to_nat(1u);
v___x_699_ = lean_unsigned_to_nat(0u);
v___x_700_ = 0;
v___x_705_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(v_args_689_, v___x_698_);
v_a_706_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_a_706_);
lean_dec_ref(v___x_705_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v_a_706_);
v___x_708_ = v___x_695_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_706_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v___jp_701_:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_703_, 0, v_val_702_);
v___x_704_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_699_, v___x_700_, v___x_703_, v___f_697_);
return v___x_704_;
}
v_reusejp_707_:
{
v_val_702_ = v___x_708_;
goto v___jp_701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0___boxed(lean_object* v_f_711_, lean_object* v___f_712_, lean_object* v_args_713_, lean_object* v_x_714_, lean_object* v___y_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0(v_f_711_, v___f_712_, v_args_713_, v_x_714_);
lean_dec_ref(v_args_713_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2(lean_object* v_f_717_, lean_object* v___f_718_, lean_object* v_args_719_){
_start:
{
lean_object* v___f_721_; lean_object* v___x_722_; uint8_t v___x_723_; lean_object* v_val_725_; lean_object* v___x_728_; lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
lean_inc_ref(v_args_719_);
v___f_721_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_721_, 0, v_f_717_);
lean_closure_set(v___f_721_, 1, v___f_718_);
lean_closure_set(v___f_721_, 2, v_args_719_);
v___x_722_ = lean_unsigned_to_nat(0u);
v___x_723_ = 0;
v___x_728_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_719_, v___x_722_);
lean_dec_ref(v_args_719_);
v_a_729_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_736_ == 0)
{
v___x_731_ = v___x_728_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_728_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v___jp_724_:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_726_, 0, v_val_725_);
v___x_727_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_722_, v___x_723_, v___x_726_, v___f_721_);
return v___x_727_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
lean_ctor_set_tag(v___x_731_, 1);
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_729_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
v_val_725_ = v___x_734_;
goto v___jp_724_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2___boxed(lean_object* v_f_737_, lean_object* v___f_738_, lean_object* v_args_739_, lean_object* v___y_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2(v_f_737_, v___f_738_, v_args_739_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn(lean_object* v_f_742_){
_start:
{
lean_object* v___f_744_; lean_object* v___f_745_; lean_object* v___x_746_; 
v___f_744_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_745_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_745_, 0, v_f_742_);
lean_closure_set(v___f_745_, 1, v___f_744_);
v___x_746_ = l_Lasm_JS_Function_ofFn(v___f_745_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
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
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
v_a_755_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_746_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_746_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___boxed(lean_object* v_f_763_, lean_object* v_a_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn(v_f_763_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0(lean_object* v_f_766_, lean_object* v_args_767_){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v_a_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v_a_774_; lean_object* v___x_775_; 
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_767_, v___x_769_);
v_a_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_771_);
lean_dec_ref(v___x_770_);
v___x_772_ = lean_unsigned_to_nat(1u);
v___x_773_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(v_args_767_, v___x_772_);
v_a_774_ = lean_ctor_get(v___x_773_, 0);
lean_inc(v_a_774_);
lean_dec_ref(v___x_773_);
v___x_775_ = lean_apply_3(v_f_766_, v_a_771_, v_a_774_, lean_box(0));
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_783_; 
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_783_ == 0)
{
lean_object* v_unused_784_; 
v_unused_784_ = lean_ctor_get(v___x_775_, 0);
lean_dec(v_unused_784_);
v___x_777_ = v___x_775_;
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
else
{
lean_dec(v___x_775_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_779_ = lean_box(0);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 0, v___x_779_);
v___x_781_ = v___x_777_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
v_a_785_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_775_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_775_);
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
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0___boxed(lean_object* v_f_793_, lean_object* v_args_794_, lean_object* v___y_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0(v_f_793_, v_args_794_);
lean_dec_ref(v_args_794_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn(lean_object* v_f_797_){
_start:
{
lean_object* v___f_799_; lean_object* v___x_800_; 
v___f_799_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_799_, 0, v_f_797_);
v___x_800_ = l_Lasm_JS_Function_ofSyncFn(v___f_799_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
v_a_801_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_800_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_800_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_801_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
v_a_809_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v___x_800_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_800_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_814_; 
if (v_isShared_812_ == 0)
{
v___x_814_ = v___x_811_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_a_809_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___boxed(lean_object* v_f_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn(v_f_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofFn(lean_object* v_f_827_){
_start:
{
lean_object* v___f_829_; lean_object* v___f_830_; lean_object* v___x_831_; 
v___f_829_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_830_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_830_, 0, v_f_827_);
lean_closure_set(v___f_830_, 1, v___f_829_);
v___x_831_ = l_Lasm_JS_Function_ofFn(v___f_830_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_object* v_a_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_839_; 
v_a_832_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_839_ == 0)
{
v___x_834_ = v___x_831_;
v_isShared_835_ = v_isSharedCheck_839_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_a_832_);
lean_dec(v___x_831_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_839_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_837_; 
if (v_isShared_835_ == 0)
{
v___x_837_ = v___x_834_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_a_832_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
}
else
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
v_a_840_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_831_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_831_);
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
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofFn___boxed(lean_object* v_f_848_, lean_object* v_a_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Lasm_JS_Node_ChildProcess_SpawnListener_ofFn(v_f_848_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofSyncFn(lean_object* v_f_851_){
_start:
{
lean_object* v___f_853_; lean_object* v___x_854_; 
v___f_853_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_853_, 0, v_f_851_);
v___x_854_ = l_Lasm_JS_Function_ofSyncFn(v___f_853_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_854_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_854_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
v_a_863_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_854_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_854_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_863_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofSyncFn___boxed(lean_object* v_f_871_, lean_object* v_a_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lasm_JS_Node_ChildProcess_SpawnListener_ofSyncFn(v_f_871_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChildProcessSendOptions___lam__0(lean_object* v___f_875_, lean_object* v_d_876_){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_877_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcessSendOptions___lam__0___closed__0));
v___x_878_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_875_, v_d_876_);
v___x_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_877_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = lean_unsigned_to_nat(1u);
v___x_881_ = lean_mk_empty_array_with_capacity(v___x_880_);
v___x_882_ = lean_array_push(v___x_881_, v___x_879_);
v___x_883_ = l_Lasm_JS_Web_Support_fields(v___x_882_);
lean_dec_ref(v___x_882_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0(lean_object* v___f_899_, lean_object* v___f_900_, lean_object* v___f_901_, lean_object* v___f_902_, lean_object* v___f_903_, lean_object* v___f_904_, lean_object* v_d_905_){
_start:
{
lean_object* v_cwd_906_; lean_object* v_env_907_; lean_object* v_encoding_908_; lean_object* v_shell_909_; lean_object* v_signal_910_; lean_object* v_timeout_911_; lean_object* v_maxBuffer_912_; lean_object* v_killSignal_913_; lean_object* v_uid_914_; lean_object* v_gid_915_; lean_object* v_windowsHide_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v_cwd_906_ = lean_ctor_get(v_d_905_, 0);
lean_inc(v_cwd_906_);
v_env_907_ = lean_ctor_get(v_d_905_, 1);
lean_inc(v_env_907_);
v_encoding_908_ = lean_ctor_get(v_d_905_, 2);
lean_inc(v_encoding_908_);
v_shell_909_ = lean_ctor_get(v_d_905_, 3);
lean_inc(v_shell_909_);
v_signal_910_ = lean_ctor_get(v_d_905_, 4);
lean_inc(v_signal_910_);
v_timeout_911_ = lean_ctor_get(v_d_905_, 5);
lean_inc(v_timeout_911_);
v_maxBuffer_912_ = lean_ctor_get(v_d_905_, 6);
lean_inc(v_maxBuffer_912_);
v_killSignal_913_ = lean_ctor_get(v_d_905_, 7);
lean_inc(v_killSignal_913_);
v_uid_914_ = lean_ctor_get(v_d_905_, 8);
lean_inc(v_uid_914_);
v_gid_915_ = lean_ctor_get(v_d_905_, 9);
lean_inc(v_gid_915_);
v_windowsHide_916_ = lean_ctor_get(v_d_905_, 10);
lean_inc(v_windowsHide_916_);
lean_dec_ref(v_d_905_);
v___x_917_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_918_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_899_, v_cwd_906_);
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_917_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___x_920_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
lean_ctor_set(v___x_921_, 1, v_env_907_);
v___x_922_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2));
lean_inc_ref(v___f_900_);
v___x_923_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_900_, v_encoding_908_);
v___x_924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_922_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
v___x_925_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
v___x_926_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_900_, v_shell_909_);
v___x_927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_925_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__4));
v___x_929_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_901_, v_signal_910_);
v___x_930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_928_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
v___x_931_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
lean_inc_ref_n(v___f_902_, 3);
v___x_932_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_902_, v_timeout_911_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6));
v___x_935_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_902_, v_maxBuffer_912_);
v___x_936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_936_, 0, v___x_934_);
lean_ctor_set(v___x_936_, 1, v___x_935_);
v___x_937_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_938_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_903_, v_killSignal_913_);
v___x_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_939_, 0, v___x_937_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
v___x_940_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
v___x_941_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_902_, v_uid_914_);
v___x_942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_940_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_944_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_902_, v_gid_915_);
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_943_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
v___x_946_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_947_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_904_, v_windowsHide_916_);
v___x_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_946_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = lean_unsigned_to_nat(11u);
v___x_950_ = lean_mk_empty_array_with_capacity(v___x_949_);
v___x_951_ = lean_array_push(v___x_950_, v___x_919_);
v___x_952_ = lean_array_push(v___x_951_, v___x_921_);
v___x_953_ = lean_array_push(v___x_952_, v___x_924_);
v___x_954_ = lean_array_push(v___x_953_, v___x_927_);
v___x_955_ = lean_array_push(v___x_954_, v___x_930_);
v___x_956_ = lean_array_push(v___x_955_, v___x_933_);
v___x_957_ = lean_array_push(v___x_956_, v___x_936_);
v___x_958_ = lean_array_push(v___x_957_, v___x_939_);
v___x_959_ = lean_array_push(v___x_958_, v___x_942_);
v___x_960_ = lean_array_push(v___x_959_, v___x_945_);
v___x_961_ = lean_array_push(v___x_960_, v___x_948_);
v___x_962_ = l_Lasm_JS_Web_Support_fields(v___x_961_);
lean_dec_ref(v___x_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0(lean_object* v___f_977_, lean_object* v___x_978_, lean_object* v___f_979_, lean_object* v___f_980_, lean_object* v___f_981_, lean_object* v___f_982_, lean_object* v___f_983_, lean_object* v___f_984_, lean_object* v_d_985_){
_start:
{
lean_object* v_cwd_986_; lean_object* v_env_987_; lean_object* v_encoding_988_; lean_object* v_timeout_989_; lean_object* v_maxBuffer_990_; lean_object* v_killSignal_991_; lean_object* v_uid_992_; lean_object* v_gid_993_; lean_object* v_windowsHide_994_; lean_object* v_windowsVerbatimArguments_995_; lean_object* v_shell_996_; lean_object* v_signal_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v_cwd_986_ = lean_ctor_get(v_d_985_, 0);
lean_inc(v_cwd_986_);
v_env_987_ = lean_ctor_get(v_d_985_, 1);
lean_inc(v_env_987_);
v_encoding_988_ = lean_ctor_get(v_d_985_, 2);
lean_inc(v_encoding_988_);
v_timeout_989_ = lean_ctor_get(v_d_985_, 3);
lean_inc(v_timeout_989_);
v_maxBuffer_990_ = lean_ctor_get(v_d_985_, 4);
lean_inc(v_maxBuffer_990_);
v_killSignal_991_ = lean_ctor_get(v_d_985_, 5);
lean_inc(v_killSignal_991_);
v_uid_992_ = lean_ctor_get(v_d_985_, 6);
lean_inc(v_uid_992_);
v_gid_993_ = lean_ctor_get(v_d_985_, 7);
lean_inc(v_gid_993_);
v_windowsHide_994_ = lean_ctor_get(v_d_985_, 8);
lean_inc(v_windowsHide_994_);
v_windowsVerbatimArguments_995_ = lean_ctor_get(v_d_985_, 9);
lean_inc(v_windowsVerbatimArguments_995_);
v_shell_996_ = lean_ctor_get(v_d_985_, 10);
lean_inc(v_shell_996_);
v_signal_997_ = lean_ctor_get(v_d_985_, 11);
lean_inc(v_signal_997_);
lean_dec_ref(v_d_985_);
v___x_998_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_999_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_977_, v_cwd_986_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_1002_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_978_, v_env_987_);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1001_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2));
v___x_1005_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_979_, v_encoding_988_);
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
lean_inc_ref_n(v___f_980_, 3);
v___x_1008_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_980_, v_timeout_989_);
v___x_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1007_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6));
v___x_1011_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_980_, v_maxBuffer_990_);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1010_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
v___x_1013_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_1014_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_981_, v_killSignal_991_);
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
v___x_1017_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_980_, v_uid_992_);
v___x_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1016_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_1020_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_980_, v_gid_993_);
v___x_1021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1019_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
v___x_1022_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
lean_inc_ref(v___f_982_);
v___x_1023_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_982_, v_windowsHide_994_);
v___x_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v___x_1025_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_1026_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_982_, v_windowsVerbatimArguments_995_);
v___x_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1025_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
v___x_1028_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
v___x_1029_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_983_, v_shell_996_);
v___x_1030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1028_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___x_1031_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__4));
v___x_1032_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_984_, v_signal_997_);
v___x_1033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1031_);
lean_ctor_set(v___x_1033_, 1, v___x_1032_);
v___x_1034_ = lean_unsigned_to_nat(12u);
v___x_1035_ = lean_mk_empty_array_with_capacity(v___x_1034_);
v___x_1036_ = lean_array_push(v___x_1035_, v___x_1000_);
v___x_1037_ = lean_array_push(v___x_1036_, v___x_1003_);
v___x_1038_ = lean_array_push(v___x_1037_, v___x_1006_);
v___x_1039_ = lean_array_push(v___x_1038_, v___x_1009_);
v___x_1040_ = lean_array_push(v___x_1039_, v___x_1012_);
v___x_1041_ = lean_array_push(v___x_1040_, v___x_1015_);
v___x_1042_ = lean_array_push(v___x_1041_, v___x_1018_);
v___x_1043_ = lean_array_push(v___x_1042_, v___x_1021_);
v___x_1044_ = lean_array_push(v___x_1043_, v___x_1024_);
v___x_1045_ = lean_array_push(v___x_1044_, v___x_1027_);
v___x_1046_ = lean_array_push(v___x_1045_, v___x_1030_);
v___x_1047_ = lean_array_push(v___x_1046_, v___x_1033_);
v___x_1048_ = l_Lasm_JS_Web_Support_fields(v___x_1047_);
lean_dec_ref(v___x_1047_);
return v___x_1048_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0(void){
_start:
{
lean_object* v___f_1049_; lean_object* v___x_1050_; 
v___f_1049_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1));
v___x_1050_ = l_Lasm_JS_Web_instToJSRecord___redArg(v___f_1049_);
return v___x_1050_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2(void){
_start:
{
lean_object* v___f_1052_; lean_object* v___f_1053_; lean_object* v___f_1054_; lean_object* v___f_1055_; lean_object* v___f_1056_; lean_object* v___f_1057_; lean_object* v___x_1058_; lean_object* v___f_1059_; lean_object* v___f_1060_; 
v___f_1052_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__2));
v___f_1053_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1));
v___f_1054_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__0));
v___f_1055_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__4));
v___f_1056_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__3));
v___f_1057_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1));
v___x_1058_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0, &l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0_once, _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0);
v___f_1059_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__0));
v___f_1060_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0), 9, 8);
lean_closure_set(v___f_1060_, 0, v___f_1059_);
lean_closure_set(v___f_1060_, 1, v___x_1058_);
lean_closure_set(v___f_1060_, 2, v___f_1057_);
lean_closure_set(v___f_1060_, 3, v___f_1056_);
lean_closure_set(v___f_1060_, 4, v___f_1055_);
lean_closure_set(v___f_1060_, 5, v___f_1054_);
lean_closure_set(v___f_1060_, 6, v___f_1053_);
lean_closure_set(v___f_1060_, 7, v___f_1052_);
return v___f_1060_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions(void){
_start:
{
lean_object* v___f_1061_; 
v___f_1061_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2, &l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2_once, _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2);
return v___f_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0(lean_object* v___x_1064_, lean_object* v_d_1065_){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0));
lean_inc_ref(v___x_1064_);
v___x_1067_ = l_Lasm_JS_readField___redArg(v___x_1064_, v_d_1065_, v___x_1066_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec_ref(v___x_1064_);
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1067_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1067_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v_a_1076_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1067_, 1);
v___x_1077_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1));
v___x_1078_ = l_Lasm_JS_readField___redArg(v___x_1064_, v_d_1065_, v___x_1077_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
lean_dec(v_a_1076_);
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1078_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1078_);
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
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1095_; 
v_a_1087_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1089_ = v___x_1078_;
v_isShared_1090_ = v_isSharedCheck_1095_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1078_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1095_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1091_; lean_object* v___x_1093_; 
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v_a_1076_);
lean_ctor_set(v___x_1091_, 1, v_a_1087_);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 0, v___x_1091_);
v___x_1093_ = v___x_1089_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___boxed(lean_object* v___x_1096_, lean_object* v_d_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0(v___x_1096_, v_d_1097_);
lean_dec(v_d_1097_);
return v_res_1098_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0(void){
_start:
{
lean_object* v___x_1099_; lean_object* v___f_1100_; 
v___x_1099_ = l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array;
v___f_1100_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1100_, 0, v___x_1099_);
return v___f_1100_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2(void){
_start:
{
uint8_t v___x_1102_; lean_object* v___x_1103_; lean_object* v___f_1104_; lean_object* v___x_1105_; 
v___x_1102_ = 0;
v___x_1103_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__1));
v___f_1104_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0, &l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0_once, _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0);
v___x_1105_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1105_, 0, v___f_1104_);
lean_ctor_set(v___x_1105_, 1, v___x_1103_);
lean_ctor_set_uint8(v___x_1105_, sizeof(void*)*2, v___x_1102_);
return v___x_1105_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult(void){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2, &l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2_once, _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2);
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx(lean_object* v_x_1107_){
_start:
{
if (lean_obj_tag(v_x_1107_) == 0)
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_unsigned_to_nat(0u);
return v___x_1108_;
}
else
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_unsigned_to_nat(1u);
return v___x_1109_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx___boxed(lean_object* v_x_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx(v_x_1110_);
lean_dec_ref(v_x_1110_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(lean_object* v_t_1112_, lean_object* v_k_1113_){
_start:
{
lean_object* v_value_1114_; lean_object* v___x_1115_; 
v_value_1114_ = lean_ctor_get(v_t_1112_, 0);
lean_inc_ref(v_value_1114_);
lean_dec_ref(v_t_1112_);
v___x_1115_ = lean_apply_1(v_k_1113_, v_value_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim(lean_object* v_motive_1116_, lean_object* v_ctorIdx_1117_, lean_object* v_t_1118_, lean_object* v_h_1119_, lean_object* v_k_1120_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1118_, v_k_1120_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___boxed(lean_object* v_motive_1122_, lean_object* v_ctorIdx_1123_, lean_object* v_t_1124_, lean_object* v_h_1125_, lean_object* v_k_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim(v_motive_1122_, v_ctorIdx_1123_, v_t_1124_, v_h_1125_, v_k_1126_);
lean_dec(v_ctorIdx_1123_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim___redArg(lean_object* v_t_1128_, lean_object* v_sequence_1129_){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1128_, v_sequence_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim(lean_object* v_motive_1131_, lean_object* v_t_1132_, lean_object* v_h_1133_, lean_object* v_sequence_1134_){
_start:
{
lean_object* v___x_1135_; 
v___x_1135_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1132_, v_sequence_1134_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim___redArg(lean_object* v_t_1136_, lean_object* v_domString_1137_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1136_, v_domString_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim(lean_object* v_motive_1139_, lean_object* v_t_1140_, lean_object* v_h_1141_, lean_object* v_domString_1142_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1140_, v_domString_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0(lean_object* v_x_1144_){
_start:
{
lean_inc(v_x_1144_);
return v_x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0___boxed(lean_object* v_x_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0(v_x_1145_);
lean_dec(v_x_1145_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1(lean_object* v___f_1166_, lean_object* v_x_1167_){
_start:
{
if (lean_obj_tag(v_x_1167_) == 0)
{
lean_object* v_value_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1179_; 
v_value_1168_ = lean_ctor_get(v_x_1167_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v_x_1167_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1170_ = v_x_1167_;
v_isShared_1171_ = v_isSharedCheck_1179_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_value_1168_);
lean_dec(v_x_1167_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1179_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; size_t v_sz_1173_; size_t v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1172_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__9));
v_sz_1173_ = lean_array_size(v_value_1168_);
v___x_1174_ = ((size_t)0ULL);
v___x_1175_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1172_, v___f_1166_, v_sz_1173_, v___x_1174_, v_value_1168_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set_tag(v___x_1170_, 7);
lean_ctor_set(v___x_1170_, 0, v___x_1175_);
v___x_1177_ = v___x_1170_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
else
{
lean_object* v_value_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1187_; 
lean_dec_ref(v___f_1166_);
v_value_1180_ = lean_ctor_get(v_x_1167_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v_x_1167_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1182_ = v_x_1167_;
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_value_1180_);
lean_dec(v_x_1167_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
lean_ctor_set_tag(v___x_1182_, 4);
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_value_1180_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString___lam__0(lean_object* v_value_1192_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1193_, 0, v_value_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString___lam__0(lean_object* v_value_1196_){
_start:
{
lean_object* v___x_1197_; 
v___x_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1197_, 0, v_value_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0(lean_object* v___f_1206_, lean_object* v___f_1207_, lean_object* v___f_1208_, lean_object* v___x_1209_, lean_object* v___f_1210_, lean_object* v___f_1211_, lean_object* v___f_1212_, lean_object* v___x_1213_, lean_object* v_d_1214_){
_start:
{
lean_object* v_cwd_1215_; lean_object* v_detached_1216_; lean_object* v_env_1217_; lean_object* v_execPath_1218_; lean_object* v_execArgv_1219_; lean_object* v_gid_1220_; lean_object* v_serialization_1221_; lean_object* v_signal_1222_; lean_object* v_killSignal_1223_; lean_object* v_silent_1224_; lean_object* v_stdio_1225_; lean_object* v_uid_1226_; lean_object* v_windowsHide_1227_; lean_object* v_windowsVerbatimArguments_1228_; lean_object* v_timeout_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v_cwd_1215_ = lean_ctor_get(v_d_1214_, 0);
lean_inc(v_cwd_1215_);
v_detached_1216_ = lean_ctor_get(v_d_1214_, 1);
lean_inc(v_detached_1216_);
v_env_1217_ = lean_ctor_get(v_d_1214_, 2);
lean_inc(v_env_1217_);
v_execPath_1218_ = lean_ctor_get(v_d_1214_, 3);
lean_inc(v_execPath_1218_);
v_execArgv_1219_ = lean_ctor_get(v_d_1214_, 4);
lean_inc(v_execArgv_1219_);
v_gid_1220_ = lean_ctor_get(v_d_1214_, 5);
lean_inc(v_gid_1220_);
v_serialization_1221_ = lean_ctor_get(v_d_1214_, 6);
lean_inc(v_serialization_1221_);
v_signal_1222_ = lean_ctor_get(v_d_1214_, 7);
lean_inc(v_signal_1222_);
v_killSignal_1223_ = lean_ctor_get(v_d_1214_, 8);
lean_inc(v_killSignal_1223_);
v_silent_1224_ = lean_ctor_get(v_d_1214_, 9);
lean_inc(v_silent_1224_);
v_stdio_1225_ = lean_ctor_get(v_d_1214_, 10);
lean_inc(v_stdio_1225_);
v_uid_1226_ = lean_ctor_get(v_d_1214_, 11);
lean_inc(v_uid_1226_);
v_windowsHide_1227_ = lean_ctor_get(v_d_1214_, 12);
lean_inc(v_windowsHide_1227_);
v_windowsVerbatimArguments_1228_ = lean_ctor_get(v_d_1214_, 13);
lean_inc(v_windowsVerbatimArguments_1228_);
v_timeout_1229_ = lean_ctor_get(v_d_1214_, 14);
lean_inc(v_timeout_1229_);
lean_dec_ref(v_d_1214_);
v___x_1230_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_1231_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1206_, v_cwd_1215_);
v___x_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1230_);
lean_ctor_set(v___x_1232_, 1, v___x_1231_);
v___x_1233_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1207_, 3);
v___x_1234_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1207_, v_detached_1216_);
v___x_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1233_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v___x_1236_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_1237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1236_);
lean_ctor_set(v___x_1237_, 1, v_env_1217_);
v___x_1238_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__1));
lean_inc_ref(v___f_1208_);
v___x_1239_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1208_, v_execPath_1218_);
v___x_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1238_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__2));
v___x_1242_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1209_, v_execArgv_1219_);
v___x_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1241_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
v___x_1244_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
lean_inc_ref_n(v___f_1210_, 2);
v___x_1245_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1210_, v_gid_1220_);
v___x_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__3));
v___x_1248_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1208_, v_serialization_1221_);
v___x_1249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1247_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
v___x_1250_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__4));
v___x_1251_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1211_, v_signal_1222_);
v___x_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1250_);
lean_ctor_set(v___x_1252_, 1, v___x_1251_);
v___x_1253_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_1254_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1212_, v_killSignal_1223_);
v___x_1255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1253_);
lean_ctor_set(v___x_1255_, 1, v___x_1254_);
v___x_1256_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__4));
v___x_1257_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1207_, v_silent_1224_);
v___x_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1256_);
lean_ctor_set(v___x_1258_, 1, v___x_1257_);
v___x_1259_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5));
v___x_1260_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1213_, v_stdio_1225_);
v___x_1261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1259_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
v___x_1262_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
v___x_1263_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1210_, v_uid_1226_);
v___x_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1262_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
v___x_1265_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_1266_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1207_, v_windowsHide_1227_);
v___x_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1265_);
lean_ctor_set(v___x_1267_, 1, v___x_1266_);
v___x_1268_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_1269_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1207_, v_windowsVerbatimArguments_1228_);
v___x_1270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1268_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
v___x_1271_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_1272_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1210_, v_timeout_1229_);
v___x_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1271_);
lean_ctor_set(v___x_1273_, 1, v___x_1272_);
v___x_1274_ = lean_unsigned_to_nat(15u);
v___x_1275_ = lean_mk_empty_array_with_capacity(v___x_1274_);
v___x_1276_ = lean_array_push(v___x_1275_, v___x_1232_);
v___x_1277_ = lean_array_push(v___x_1276_, v___x_1235_);
v___x_1278_ = lean_array_push(v___x_1277_, v___x_1237_);
v___x_1279_ = lean_array_push(v___x_1278_, v___x_1240_);
v___x_1280_ = lean_array_push(v___x_1279_, v___x_1243_);
v___x_1281_ = lean_array_push(v___x_1280_, v___x_1246_);
v___x_1282_ = lean_array_push(v___x_1281_, v___x_1249_);
v___x_1283_ = lean_array_push(v___x_1282_, v___x_1252_);
v___x_1284_ = lean_array_push(v___x_1283_, v___x_1255_);
v___x_1285_ = lean_array_push(v___x_1284_, v___x_1258_);
v___x_1286_ = lean_array_push(v___x_1285_, v___x_1261_);
v___x_1287_ = lean_array_push(v___x_1286_, v___x_1264_);
v___x_1288_ = lean_array_push(v___x_1287_, v___x_1267_);
v___x_1289_ = lean_array_push(v___x_1288_, v___x_1270_);
v___x_1290_ = lean_array_push(v___x_1289_, v___x_1273_);
v___x_1291_ = l_Lasm_JS_Web_Support_fields(v___x_1290_);
lean_dec_ref(v___x_1290_);
return v___x_1291_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__0(void){
_start:
{
lean_object* v___f_1292_; lean_object* v___x_1293_; 
v___f_1292_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1));
v___x_1293_ = l_Lasm_JS_instToJSArray___redArg(v___f_1292_);
return v___x_1293_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__1(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___f_1295_; lean_object* v___f_1296_; lean_object* v___f_1297_; lean_object* v___x_1298_; lean_object* v___f_1299_; lean_object* v___f_1300_; lean_object* v___f_1301_; lean_object* v___f_1302_; 
v___x_1294_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString));
v___f_1295_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__4));
v___f_1296_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__2));
v___f_1297_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__3));
v___x_1298_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__0, &l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__0_once, _init_l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__0);
v___f_1299_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1));
v___f_1300_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__0));
v___f_1301_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__0));
v___f_1302_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0), 9, 8);
lean_closure_set(v___f_1302_, 0, v___f_1301_);
lean_closure_set(v___f_1302_, 1, v___f_1300_);
lean_closure_set(v___f_1302_, 2, v___f_1299_);
lean_closure_set(v___f_1302_, 3, v___x_1298_);
lean_closure_set(v___f_1302_, 4, v___f_1297_);
lean_closure_set(v___f_1302_, 5, v___f_1296_);
lean_closure_set(v___f_1302_, 6, v___f_1295_);
lean_closure_set(v___f_1302_, 7, v___x_1294_);
return v___f_1302_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processForkOptions(void){
_start:
{
lean_object* v___f_1303_; 
v___f_1303_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__1, &l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__1_once, _init_l_Lasm_JS_Node_instToJSChild__processForkOptions___closed__1);
return v___f_1303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0(lean_object* v___f_1305_, lean_object* v___x_1306_, lean_object* v___f_1307_, lean_object* v___x_1308_, lean_object* v___f_1309_, lean_object* v___f_1310_, lean_object* v___f_1311_, lean_object* v___f_1312_, lean_object* v___f_1313_, lean_object* v_d_1314_){
_start:
{
lean_object* v_cwd_1315_; lean_object* v_env_1316_; lean_object* v_argv0_1317_; lean_object* v_stdio_1318_; lean_object* v_detached_1319_; lean_object* v_uid_1320_; lean_object* v_gid_1321_; lean_object* v_serialization_1322_; lean_object* v_shell_1323_; lean_object* v_windowsVerbatimArguments_1324_; lean_object* v_windowsHide_1325_; lean_object* v_signal_1326_; lean_object* v_timeout_1327_; lean_object* v_killSignal_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v_cwd_1315_ = lean_ctor_get(v_d_1314_, 0);
lean_inc(v_cwd_1315_);
v_env_1316_ = lean_ctor_get(v_d_1314_, 1);
lean_inc(v_env_1316_);
v_argv0_1317_ = lean_ctor_get(v_d_1314_, 2);
lean_inc(v_argv0_1317_);
v_stdio_1318_ = lean_ctor_get(v_d_1314_, 3);
lean_inc(v_stdio_1318_);
v_detached_1319_ = lean_ctor_get(v_d_1314_, 4);
lean_inc(v_detached_1319_);
v_uid_1320_ = lean_ctor_get(v_d_1314_, 5);
lean_inc(v_uid_1320_);
v_gid_1321_ = lean_ctor_get(v_d_1314_, 6);
lean_inc(v_gid_1321_);
v_serialization_1322_ = lean_ctor_get(v_d_1314_, 7);
lean_inc(v_serialization_1322_);
v_shell_1323_ = lean_ctor_get(v_d_1314_, 8);
lean_inc(v_shell_1323_);
v_windowsVerbatimArguments_1324_ = lean_ctor_get(v_d_1314_, 9);
lean_inc(v_windowsVerbatimArguments_1324_);
v_windowsHide_1325_ = lean_ctor_get(v_d_1314_, 10);
lean_inc(v_windowsHide_1325_);
v_signal_1326_ = lean_ctor_get(v_d_1314_, 11);
lean_inc(v_signal_1326_);
v_timeout_1327_ = lean_ctor_get(v_d_1314_, 12);
lean_inc(v_timeout_1327_);
v_killSignal_1328_ = lean_ctor_get(v_d_1314_, 13);
lean_inc(v_killSignal_1328_);
lean_dec_ref(v_d_1314_);
v___x_1329_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_1330_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1305_, v_cwd_1315_);
v___x_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1329_);
lean_ctor_set(v___x_1331_, 1, v___x_1330_);
v___x_1332_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_1333_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1306_, v_env_1316_);
v___x_1334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1332_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0));
lean_inc_ref(v___f_1307_);
v___x_1336_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1307_, v_argv0_1317_);
v___x_1337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1335_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
v___x_1338_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5));
v___x_1339_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1308_, v_stdio_1318_);
v___x_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
lean_ctor_set(v___x_1340_, 1, v___x_1339_);
v___x_1341_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1309_, 2);
v___x_1342_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1309_, v_detached_1319_);
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
lean_inc_ref_n(v___f_1310_, 2);
v___x_1345_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1310_, v_uid_1320_);
v___x_1346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1344_);
lean_ctor_set(v___x_1346_, 1, v___x_1345_);
v___x_1347_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_1348_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1310_, v_gid_1321_);
v___x_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__3));
v___x_1351_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1307_, v_serialization_1322_);
v___x_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1350_);
lean_ctor_set(v___x_1352_, 1, v___x_1351_);
v___x_1353_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
v___x_1354_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1311_, v_shell_1323_);
v___x_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1353_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
v___x_1356_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_1357_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1309_, v_windowsVerbatimArguments_1324_);
v___x_1358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1356_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_1360_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1309_, v_windowsHide_1325_);
v___x_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1359_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v___x_1362_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__4));
v___x_1363_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1312_, v_signal_1326_);
v___x_1364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1362_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
v___x_1365_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_1366_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1310_, v_timeout_1327_);
v___x_1367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1365_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
v___x_1368_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_1369_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1313_, v_killSignal_1328_);
v___x_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1368_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
v___x_1371_ = lean_unsigned_to_nat(14u);
v___x_1372_ = lean_mk_empty_array_with_capacity(v___x_1371_);
v___x_1373_ = lean_array_push(v___x_1372_, v___x_1331_);
v___x_1374_ = lean_array_push(v___x_1373_, v___x_1334_);
v___x_1375_ = lean_array_push(v___x_1374_, v___x_1337_);
v___x_1376_ = lean_array_push(v___x_1375_, v___x_1340_);
v___x_1377_ = lean_array_push(v___x_1376_, v___x_1343_);
v___x_1378_ = lean_array_push(v___x_1377_, v___x_1346_);
v___x_1379_ = lean_array_push(v___x_1378_, v___x_1349_);
v___x_1380_ = lean_array_push(v___x_1379_, v___x_1352_);
v___x_1381_ = lean_array_push(v___x_1380_, v___x_1355_);
v___x_1382_ = lean_array_push(v___x_1381_, v___x_1358_);
v___x_1383_ = lean_array_push(v___x_1382_, v___x_1361_);
v___x_1384_ = lean_array_push(v___x_1383_, v___x_1364_);
v___x_1385_ = lean_array_push(v___x_1384_, v___x_1367_);
v___x_1386_ = lean_array_push(v___x_1385_, v___x_1370_);
v___x_1387_ = l_Lasm_JS_Web_Support_fields(v___x_1386_);
lean_dec_ref(v___x_1386_);
return v___x_1387_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0(void){
_start:
{
lean_object* v___f_1388_; lean_object* v___f_1389_; lean_object* v___f_1390_; lean_object* v___f_1391_; lean_object* v___f_1392_; lean_object* v___x_1393_; lean_object* v___f_1394_; lean_object* v___x_1395_; lean_object* v___f_1396_; lean_object* v___f_1397_; 
v___f_1388_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__4));
v___f_1389_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__2));
v___f_1390_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1));
v___f_1391_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__3));
v___f_1392_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcessSendOptions___closed__0));
v___x_1393_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString));
v___f_1394_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__1));
v___x_1395_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0, &l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0_once, _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0);
v___f_1396_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___closed__0));
v___f_1397_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0), 10, 9);
lean_closure_set(v___f_1397_, 0, v___f_1396_);
lean_closure_set(v___f_1397_, 1, v___x_1395_);
lean_closure_set(v___f_1397_, 2, v___f_1394_);
lean_closure_set(v___f_1397_, 3, v___x_1393_);
lean_closure_set(v___f_1397_, 4, v___f_1392_);
lean_closure_set(v___f_1397_, 5, v___f_1391_);
lean_closure_set(v___f_1397_, 6, v___f_1390_);
lean_closure_set(v___f_1397_, 7, v___f_1389_);
lean_closure_set(v___f_1397_, 8, v___f_1388_);
return v___f_1397_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processSpawnOptions(void){
_start:
{
lean_object* v___f_1398_; 
v___f_1398_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0, &l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0_once, _init_l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0);
return v___f_1398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorIdx(lean_object* v_x_1399_){
_start:
{
if (lean_obj_tag(v_x_1399_) == 0)
{
lean_object* v___x_1400_; 
v___x_1400_ = lean_unsigned_to_nat(0u);
return v___x_1400_;
}
else
{
lean_object* v___x_1401_; 
v___x_1401_ = lean_unsigned_to_nat(1u);
return v___x_1401_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorIdx___boxed(lean_object* v_x_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorIdx(v_x_1402_);
lean_dec_ref(v_x_1402_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim___redArg(lean_object* v_t_1404_, lean_object* v_k_1405_){
_start:
{
lean_object* v_value_1406_; lean_object* v___x_1407_; 
v_value_1406_ = lean_ctor_get(v_t_1404_, 0);
lean_inc_ref(v_value_1406_);
lean_dec_ref(v_t_1404_);
v___x_1407_ = lean_apply_1(v_k_1405_, v_value_1406_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim(lean_object* v_motive_1408_, lean_object* v_ctorIdx_1409_, lean_object* v_t_1410_, lean_object* v_h_1411_, lean_object* v_k_1412_){
_start:
{
lean_object* v___x_1413_; 
v___x_1413_ = l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim___redArg(v_t_1410_, v_k_1412_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim___boxed(lean_object* v_motive_1414_, lean_object* v_ctorIdx_1415_, lean_object* v_t_1416_, lean_object* v_h_1417_, lean_object* v_k_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim(v_motive_1414_, v_ctorIdx_1415_, v_t_1416_, v_h_1417_, v_k_1418_);
lean_dec(v_ctorIdx_1415_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_domString_elim___redArg(lean_object* v_t_1420_, lean_object* v_domString_1421_){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim___redArg(v_t_1420_, v_domString_1421_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_domString_elim(lean_object* v_motive_1423_, lean_object* v_t_1424_, lean_object* v_h_1425_, lean_object* v_domString_1426_){
_start:
{
lean_object* v___x_1427_; 
v___x_1427_ = l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim___redArg(v_t_1424_, v_domString_1426_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_sequence_elim___redArg(lean_object* v_t_1428_, lean_object* v_sequence_1429_){
_start:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim___redArg(v_t_1428_, v_sequence_1429_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSequenceOfAny_sequence_elim(lean_object* v_motive_1431_, lean_object* v_t_1432_, lean_object* v_h_1433_, lean_object* v_sequence_1434_){
_start:
{
lean_object* v___x_1435_; 
v___x_1435_ = l_Lasm_JS_Node_DOMStringOrSequenceOfAny_ctorElim___redArg(v_t_1432_, v_sequence_1434_);
return v___x_1435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSequenceOfAny___lam__1(lean_object* v___f_1436_, lean_object* v_x_1437_){
_start:
{
if (lean_obj_tag(v_x_1437_) == 0)
{
lean_object* v_value_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec_ref(v___f_1436_);
v_value_1438_ = lean_ctor_get(v_x_1437_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v_x_1437_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_value_1438_);
lean_dec(v_x_1437_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
lean_ctor_set_tag(v___x_1440_, 4);
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_value_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
else
{
lean_object* v_value_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1457_; 
v_value_1446_ = lean_ctor_get(v_x_1437_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1448_ = v_x_1437_;
v_isShared_1449_ = v_isSharedCheck_1457_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_value_1446_);
lean_dec(v_x_1437_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1457_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; size_t v_sz_1451_; size_t v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1455_; 
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__9));
v_sz_1451_ = lean_array_size(v_value_1446_);
v___x_1452_ = ((size_t)0ULL);
v___x_1453_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1450_, v___f_1436_, v_sz_1451_, v___x_1452_, v_value_1446_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set_tag(v___x_1448_, 7);
lean_ctor_set(v___x_1448_, 0, v___x_1453_);
v___x_1455_ = v___x_1448_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(7, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSequenceOfAny___lam__0(lean_object* v_value_1461_){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1462_, 0, v_value_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataDOMStringOrSequenceOfAny___lam__0(lean_object* v_value_1465_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1466_, 0, v_value_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0(lean_object* v___f_1470_, lean_object* v___f_1471_, lean_object* v___x_1472_, lean_object* v___f_1473_, lean_object* v___f_1474_, lean_object* v___f_1475_, lean_object* v___f_1476_, lean_object* v___f_1477_, lean_object* v_d_1478_){
_start:
{
lean_object* v_cwd_1479_; lean_object* v_input_1480_; lean_object* v_stdio_1481_; lean_object* v_env_1482_; lean_object* v_uid_1483_; lean_object* v_gid_1484_; lean_object* v_timeout_1485_; lean_object* v_killSignal_1486_; lean_object* v_maxBuffer_1487_; lean_object* v_encoding_1488_; lean_object* v_windowsHide_1489_; lean_object* v_shell_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v_cwd_1479_ = lean_ctor_get(v_d_1478_, 0);
lean_inc(v_cwd_1479_);
v_input_1480_ = lean_ctor_get(v_d_1478_, 1);
lean_inc(v_input_1480_);
v_stdio_1481_ = lean_ctor_get(v_d_1478_, 2);
lean_inc(v_stdio_1481_);
v_env_1482_ = lean_ctor_get(v_d_1478_, 3);
lean_inc(v_env_1482_);
v_uid_1483_ = lean_ctor_get(v_d_1478_, 4);
lean_inc(v_uid_1483_);
v_gid_1484_ = lean_ctor_get(v_d_1478_, 5);
lean_inc(v_gid_1484_);
v_timeout_1485_ = lean_ctor_get(v_d_1478_, 6);
lean_inc(v_timeout_1485_);
v_killSignal_1486_ = lean_ctor_get(v_d_1478_, 7);
lean_inc(v_killSignal_1486_);
v_maxBuffer_1487_ = lean_ctor_get(v_d_1478_, 8);
lean_inc(v_maxBuffer_1487_);
v_encoding_1488_ = lean_ctor_get(v_d_1478_, 9);
lean_inc(v_encoding_1488_);
v_windowsHide_1489_ = lean_ctor_get(v_d_1478_, 10);
lean_inc(v_windowsHide_1489_);
v_shell_1490_ = lean_ctor_get(v_d_1478_, 11);
lean_inc(v_shell_1490_);
lean_dec_ref(v_d_1478_);
v___x_1491_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_1492_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1470_, v_cwd_1479_);
v___x_1493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1491_);
lean_ctor_set(v___x_1493_, 1, v___x_1492_);
v___x_1494_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0___closed__0));
v___x_1495_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1471_, v_input_1480_);
v___x_1496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1494_);
lean_ctor_set(v___x_1496_, 1, v___x_1495_);
v___x_1497_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5));
v___x_1498_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1472_, v_stdio_1481_);
v___x_1499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1497_);
lean_ctor_set(v___x_1499_, 1, v___x_1498_);
v___x_1500_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_1501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
lean_ctor_set(v___x_1501_, 1, v_env_1482_);
v___x_1502_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
lean_inc_ref_n(v___f_1473_, 3);
v___x_1503_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1473_, v_uid_1483_);
v___x_1504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1502_);
lean_ctor_set(v___x_1504_, 1, v___x_1503_);
v___x_1505_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_1506_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1473_, v_gid_1484_);
v___x_1507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1505_);
lean_ctor_set(v___x_1507_, 1, v___x_1506_);
v___x_1508_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_1509_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1473_, v_timeout_1485_);
v___x_1510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1508_);
lean_ctor_set(v___x_1510_, 1, v___x_1509_);
v___x_1511_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_1512_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1474_, v_killSignal_1486_);
v___x_1513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1511_);
lean_ctor_set(v___x_1513_, 1, v___x_1512_);
v___x_1514_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6));
v___x_1515_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1473_, v_maxBuffer_1487_);
v___x_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1514_);
lean_ctor_set(v___x_1516_, 1, v___x_1515_);
v___x_1517_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2));
v___x_1518_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1475_, v_encoding_1488_);
v___x_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1517_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_1521_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1476_, v_windowsHide_1489_);
v___x_1522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1520_);
lean_ctor_set(v___x_1522_, 1, v___x_1521_);
v___x_1523_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
v___x_1524_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1477_, v_shell_1490_);
v___x_1525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1523_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
v___x_1526_ = lean_unsigned_to_nat(12u);
v___x_1527_ = lean_mk_empty_array_with_capacity(v___x_1526_);
v___x_1528_ = lean_array_push(v___x_1527_, v___x_1493_);
v___x_1529_ = lean_array_push(v___x_1528_, v___x_1496_);
v___x_1530_ = lean_array_push(v___x_1529_, v___x_1499_);
v___x_1531_ = lean_array_push(v___x_1530_, v___x_1501_);
v___x_1532_ = lean_array_push(v___x_1531_, v___x_1504_);
v___x_1533_ = lean_array_push(v___x_1532_, v___x_1507_);
v___x_1534_ = lean_array_push(v___x_1533_, v___x_1510_);
v___x_1535_ = lean_array_push(v___x_1534_, v___x_1513_);
v___x_1536_ = lean_array_push(v___x_1535_, v___x_1516_);
v___x_1537_ = lean_array_push(v___x_1536_, v___x_1519_);
v___x_1538_ = lean_array_push(v___x_1537_, v___x_1522_);
v___x_1539_ = lean_array_push(v___x_1538_, v___x_1525_);
v___x_1540_ = l_Lasm_JS_Web_Support_fields(v___x_1539_);
lean_dec_ref(v___x_1539_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecSyncOptions___lam__0(lean_object* v___f_1552_, lean_object* v___f_1553_, lean_object* v___x_1554_, lean_object* v___f_1555_, lean_object* v___f_1556_, lean_object* v___f_1557_, lean_object* v___f_1558_, lean_object* v_d_1559_){
_start:
{
lean_object* v_cwd_1560_; lean_object* v_input_1561_; lean_object* v_stdio_1562_; lean_object* v_env_1563_; lean_object* v_shell_1564_; lean_object* v_uid_1565_; lean_object* v_gid_1566_; lean_object* v_timeout_1567_; lean_object* v_killSignal_1568_; lean_object* v_maxBuffer_1569_; lean_object* v_encoding_1570_; lean_object* v_windowsHide_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v_cwd_1560_ = lean_ctor_get(v_d_1559_, 0);
lean_inc(v_cwd_1560_);
v_input_1561_ = lean_ctor_get(v_d_1559_, 1);
lean_inc(v_input_1561_);
v_stdio_1562_ = lean_ctor_get(v_d_1559_, 2);
lean_inc(v_stdio_1562_);
v_env_1563_ = lean_ctor_get(v_d_1559_, 3);
lean_inc(v_env_1563_);
v_shell_1564_ = lean_ctor_get(v_d_1559_, 4);
lean_inc(v_shell_1564_);
v_uid_1565_ = lean_ctor_get(v_d_1559_, 5);
lean_inc(v_uid_1565_);
v_gid_1566_ = lean_ctor_get(v_d_1559_, 6);
lean_inc(v_gid_1566_);
v_timeout_1567_ = lean_ctor_get(v_d_1559_, 7);
lean_inc(v_timeout_1567_);
v_killSignal_1568_ = lean_ctor_get(v_d_1559_, 8);
lean_inc(v_killSignal_1568_);
v_maxBuffer_1569_ = lean_ctor_get(v_d_1559_, 9);
lean_inc(v_maxBuffer_1569_);
v_encoding_1570_ = lean_ctor_get(v_d_1559_, 10);
lean_inc(v_encoding_1570_);
v_windowsHide_1571_ = lean_ctor_get(v_d_1559_, 11);
lean_inc(v_windowsHide_1571_);
lean_dec_ref(v_d_1559_);
v___x_1572_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_1573_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1552_, v_cwd_1560_);
v___x_1574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1572_);
lean_ctor_set(v___x_1574_, 1, v___x_1573_);
v___x_1575_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0___closed__0));
v___x_1576_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1553_, v_input_1561_);
v___x_1577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1575_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5));
v___x_1579_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1554_, v_stdio_1562_);
v___x_1580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1578_);
lean_ctor_set(v___x_1580_, 1, v___x_1579_);
v___x_1581_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_1582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1581_);
lean_ctor_set(v___x_1582_, 1, v_env_1563_);
v___x_1583_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
lean_inc_ref(v___f_1555_);
v___x_1584_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1555_, v_shell_1564_);
v___x_1585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1583_);
lean_ctor_set(v___x_1585_, 1, v___x_1584_);
v___x_1586_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
lean_inc_ref_n(v___f_1556_, 3);
v___x_1587_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1556_, v_uid_1565_);
v___x_1588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1586_);
lean_ctor_set(v___x_1588_, 1, v___x_1587_);
v___x_1589_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_1590_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1556_, v_gid_1566_);
v___x_1591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1589_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_1593_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1556_, v_timeout_1567_);
v___x_1594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1592_);
lean_ctor_set(v___x_1594_, 1, v___x_1593_);
v___x_1595_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_1596_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1557_, v_killSignal_1568_);
v___x_1597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1595_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v___x_1598_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6));
v___x_1599_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1556_, v_maxBuffer_1569_);
v___x_1600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1598_);
lean_ctor_set(v___x_1600_, 1, v___x_1599_);
v___x_1601_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2));
v___x_1602_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1555_, v_encoding_1570_);
v___x_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1603_, 0, v___x_1601_);
lean_ctor_set(v___x_1603_, 1, v___x_1602_);
v___x_1604_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_1605_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1558_, v_windowsHide_1571_);
v___x_1606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1604_);
lean_ctor_set(v___x_1606_, 1, v___x_1605_);
v___x_1607_ = lean_unsigned_to_nat(12u);
v___x_1608_ = lean_mk_empty_array_with_capacity(v___x_1607_);
v___x_1609_ = lean_array_push(v___x_1608_, v___x_1574_);
v___x_1610_ = lean_array_push(v___x_1609_, v___x_1577_);
v___x_1611_ = lean_array_push(v___x_1610_, v___x_1580_);
v___x_1612_ = lean_array_push(v___x_1611_, v___x_1582_);
v___x_1613_ = lean_array_push(v___x_1612_, v___x_1585_);
v___x_1614_ = lean_array_push(v___x_1613_, v___x_1588_);
v___x_1615_ = lean_array_push(v___x_1614_, v___x_1591_);
v___x_1616_ = lean_array_push(v___x_1615_, v___x_1594_);
v___x_1617_ = lean_array_push(v___x_1616_, v___x_1597_);
v___x_1618_ = lean_array_push(v___x_1617_, v___x_1600_);
v___x_1619_ = lean_array_push(v___x_1618_, v___x_1603_);
v___x_1620_ = lean_array_push(v___x_1619_, v___x_1606_);
v___x_1621_ = l_Lasm_JS_Web_Support_fields(v___x_1620_);
lean_dec_ref(v___x_1620_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnSyncOptions___lam__0(lean_object* v___f_1631_, lean_object* v___f_1632_, lean_object* v___f_1633_, lean_object* v___x_1634_, lean_object* v___f_1635_, lean_object* v___f_1636_, lean_object* v___f_1637_, lean_object* v___f_1638_, lean_object* v_d_1639_){
_start:
{
lean_object* v_cwd_1640_; lean_object* v_input_1641_; lean_object* v_argv0_1642_; lean_object* v_stdio_1643_; lean_object* v_env_1644_; lean_object* v_uid_1645_; lean_object* v_gid_1646_; lean_object* v_timeout_1647_; lean_object* v_killSignal_1648_; lean_object* v_maxBuffer_1649_; lean_object* v_encoding_1650_; lean_object* v_shell_1651_; lean_object* v_windowsVerbatimArguments_1652_; lean_object* v_windowsHide_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v_cwd_1640_ = lean_ctor_get(v_d_1639_, 0);
lean_inc(v_cwd_1640_);
v_input_1641_ = lean_ctor_get(v_d_1639_, 1);
lean_inc(v_input_1641_);
v_argv0_1642_ = lean_ctor_get(v_d_1639_, 2);
lean_inc(v_argv0_1642_);
v_stdio_1643_ = lean_ctor_get(v_d_1639_, 3);
lean_inc(v_stdio_1643_);
v_env_1644_ = lean_ctor_get(v_d_1639_, 4);
lean_inc(v_env_1644_);
v_uid_1645_ = lean_ctor_get(v_d_1639_, 5);
lean_inc(v_uid_1645_);
v_gid_1646_ = lean_ctor_get(v_d_1639_, 6);
lean_inc(v_gid_1646_);
v_timeout_1647_ = lean_ctor_get(v_d_1639_, 7);
lean_inc(v_timeout_1647_);
v_killSignal_1648_ = lean_ctor_get(v_d_1639_, 8);
lean_inc(v_killSignal_1648_);
v_maxBuffer_1649_ = lean_ctor_get(v_d_1639_, 9);
lean_inc(v_maxBuffer_1649_);
v_encoding_1650_ = lean_ctor_get(v_d_1639_, 10);
lean_inc(v_encoding_1650_);
v_shell_1651_ = lean_ctor_get(v_d_1639_, 11);
lean_inc(v_shell_1651_);
v_windowsVerbatimArguments_1652_ = lean_ctor_get(v_d_1639_, 12);
lean_inc(v_windowsVerbatimArguments_1652_);
v_windowsHide_1653_ = lean_ctor_get(v_d_1639_, 13);
lean_inc(v_windowsHide_1653_);
lean_dec_ref(v_d_1639_);
v___x_1654_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_1655_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1631_, v_cwd_1640_);
v___x_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
v___x_1657_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0___closed__0));
v___x_1658_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1632_, v_input_1641_);
v___x_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1657_);
lean_ctor_set(v___x_1659_, 1, v___x_1658_);
v___x_1660_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0));
lean_inc_ref(v___f_1633_);
v___x_1661_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1633_, v_argv0_1642_);
v___x_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1660_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5));
v___x_1664_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1634_, v_stdio_1643_);
v___x_1665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1663_);
lean_ctor_set(v___x_1665_, 1, v___x_1664_);
v___x_1666_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_1667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1666_);
lean_ctor_set(v___x_1667_, 1, v_env_1644_);
v___x_1668_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
lean_inc_ref_n(v___f_1635_, 3);
v___x_1669_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1635_, v_uid_1645_);
v___x_1670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1668_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
v___x_1671_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_1672_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1635_, v_gid_1646_);
v___x_1673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1671_);
lean_ctor_set(v___x_1673_, 1, v___x_1672_);
v___x_1674_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_1675_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1635_, v_timeout_1647_);
v___x_1676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1674_);
lean_ctor_set(v___x_1676_, 1, v___x_1675_);
v___x_1677_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_1678_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1636_, v_killSignal_1648_);
v___x_1679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1677_);
lean_ctor_set(v___x_1679_, 1, v___x_1678_);
v___x_1680_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6));
v___x_1681_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1635_, v_maxBuffer_1649_);
v___x_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1680_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
v___x_1683_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2));
v___x_1684_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1633_, v_encoding_1650_);
v___x_1685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1683_);
lean_ctor_set(v___x_1685_, 1, v___x_1684_);
v___x_1686_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
v___x_1687_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1637_, v_shell_1651_);
v___x_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1686_);
lean_ctor_set(v___x_1688_, 1, v___x_1687_);
v___x_1689_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
lean_inc_ref(v___f_1638_);
v___x_1690_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1638_, v_windowsVerbatimArguments_1652_);
v___x_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1689_);
lean_ctor_set(v___x_1691_, 1, v___x_1690_);
v___x_1692_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_1693_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1638_, v_windowsHide_1653_);
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1692_);
lean_ctor_set(v___x_1694_, 1, v___x_1693_);
v___x_1695_ = lean_unsigned_to_nat(14u);
v___x_1696_ = lean_mk_empty_array_with_capacity(v___x_1695_);
v___x_1697_ = lean_array_push(v___x_1696_, v___x_1656_);
v___x_1698_ = lean_array_push(v___x_1697_, v___x_1659_);
v___x_1699_ = lean_array_push(v___x_1698_, v___x_1662_);
v___x_1700_ = lean_array_push(v___x_1699_, v___x_1665_);
v___x_1701_ = lean_array_push(v___x_1700_, v___x_1667_);
v___x_1702_ = lean_array_push(v___x_1701_, v___x_1670_);
v___x_1703_ = lean_array_push(v___x_1702_, v___x_1673_);
v___x_1704_ = lean_array_push(v___x_1703_, v___x_1676_);
v___x_1705_ = lean_array_push(v___x_1704_, v___x_1679_);
v___x_1706_ = lean_array_push(v___x_1705_, v___x_1682_);
v___x_1707_ = lean_array_push(v___x_1706_, v___x_1685_);
v___x_1708_ = lean_array_push(v___x_1707_, v___x_1688_);
v___x_1709_ = lean_array_push(v___x_1708_, v___x_1691_);
v___x_1710_ = lean_array_push(v___x_1709_, v___x_1694_);
v___x_1711_ = l_Lasm_JS_Web_Support_fields(v___x_1710_);
lean_dec_ref(v___x_1710_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0(lean_object* v___x_1722_, lean_object* v___x_1723_){
_start:
{
lean_object* v___x_1725_; 
v___x_1725_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_1722_, v___x_1723_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0___boxed(lean_object* v___x_1726_, lean_object* v___x_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0(v___x_1726_, v___x_1727_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f(lean_object* v_v_1738_){
_start:
{
lean_object* v___f_1740_; lean_object* v___x_1741_; 
v___f_1740_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__3));
lean_inc(v_v_1738_);
v___x_1741_ = l_Lasm_JS_Web_Support_isInstance(v___f_1740_, v_v_1738_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1755_; 
v_a_1742_ = lean_ctor_get(v___x_1741_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1744_ = v___x_1741_;
v_isShared_1745_ = v_isSharedCheck_1755_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1741_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1755_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
uint8_t v___x_1746_; 
v___x_1746_ = lean_unbox(v_a_1742_);
lean_dec(v_a_1742_);
if (v___x_1746_ == 0)
{
lean_object* v___x_1747_; lean_object* v___x_1749_; 
lean_dec(v_v_1738_);
v___x_1747_ = lean_box(0);
if (v_isShared_1745_ == 0)
{
lean_ctor_set(v___x_1744_, 0, v___x_1747_);
v___x_1749_ = v___x_1744_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v___x_1747_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
else
{
lean_object* v___x_1751_; lean_object* v___x_1753_; 
v___x_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1751_, 0, v_v_1738_);
if (v_isShared_1745_ == 0)
{
lean_ctor_set(v___x_1744_, 0, v___x_1751_);
v___x_1753_ = v___x_1744_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v___x_1751_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
}
}
else
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1763_; 
lean_dec(v_v_1738_);
v_a_1756_ = lean_ctor_get(v___x_1741_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1758_ = v___x_1741_;
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1741_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1761_; 
if (v_isShared_1759_ == 0)
{
v___x_1761_ = v___x_1758_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_a_1756_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___boxed(lean_object* v_v_1764_, lean_object* v_a_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l_Lasm_JS_Node_ChildProcess_cast_x3f(v_v_1764_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_channel(lean_object* v_self_1768_){
_start:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1770_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_channel___closed__0));
v___x_1771_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_1768_, v___x_1770_);
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_channel___boxed(lean_object* v_self_1772_, lean_object* v_a_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l_Lasm_JS_Node_ChildProcess_channel(v_self_1772_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_connected(lean_object* v_self_1776_){
_start:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1778_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_connected___closed__0));
v___x_1779_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1776_, v___x_1778_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_connected___boxed(lean_object* v_self_1780_, lean_object* v_a_1781_){
_start:
{
lean_object* v_res_1782_; 
v_res_1782_ = l_Lasm_JS_Node_ChildProcess_connected(v_self_1780_);
return v_res_1782_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(lean_object* v_context_1783_, lean_object* v_bytes_1784_){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1784_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; lean_object* v___x_1788_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_a_1787_);
lean_dec_ref_known(v___x_1786_, 1);
v___x_1788_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1(v_context_1783_, v_a_1787_);
return v___x_1788_;
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1796_; 
v_a_1789_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1791_ = v___x_1786_;
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1786_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_a_1789_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0___boxed(lean_object* v_context_1797_, lean_object* v_bytes_1798_, lean_object* v_a_1799_){
_start:
{
lean_object* v_res_1800_; 
v_res_1800_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v_context_1797_, v_bytes_1798_);
lean_dec_ref(v_bytes_1798_);
lean_dec_ref(v_context_1797_);
return v_res_1800_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1801_; uint64_t v___x_1802_; 
v___x_1801_ = 0;
v___x_1802_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(lean_object* v_o_1804_, lean_object* v_key_1805_){
_start:
{
lean_object* v_k_1807_; lean_object* v___x_1808_; 
v_k_1807_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1807_, 0, v_key_1805_);
v___x_1808_ = l_Lasm_JS_Wire_encodeIO(v_k_1807_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v_a_1809_; uint32_t v___x_1810_; uint32_t v___x_1811_; uint64_t v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v_a_1809_ = lean_ctor_get(v___x_1808_, 0);
lean_inc(v_a_1809_);
lean_dec_ref_known(v___x_1808_, 1);
v___x_1810_ = 203;
v___x_1811_ = lasm_js_value_handle(v_o_1804_);
v___x_1812_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1813_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1814_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1814_, 0, v_o_1804_);
lean_ctor_set(v___x_1814_, 1, v___x_1813_);
v___x_1815_ = lean_unsigned_to_nat(2u);
v___x_1816_ = lean_mk_empty_array_with_capacity(v___x_1815_);
lean_inc_ref(v_k_1807_);
v___x_1817_ = lean_array_push(v___x_1816_, v_k_1807_);
v___x_1818_ = lean_array_push(v___x_1817_, v___x_1814_);
v___x_1819_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1818_);
v___x_1820_ = lasm_js_call(v___x_1810_, v___x_1811_, v___x_1812_, v_a_1809_, v___x_1819_);
lean_dec_ref_known(v___x_1819_, 1);
lean_dec(v_a_1809_);
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1821_);
lean_dec_ref_known(v___x_1820_, 1);
v___x_1822_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1823_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1807_);
v___x_1824_ = lean_string_append(v___x_1822_, v___x_1823_);
lean_dec_ref(v___x_1823_);
v___x_1825_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v___x_1824_, v_a_1821_);
lean_dec(v_a_1821_);
lean_dec_ref(v___x_1824_);
return v___x_1825_;
}
else
{
lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1833_; 
lean_dec_ref_known(v_k_1807_, 1);
v_a_1826_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1828_ = v___x_1820_;
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v___x_1820_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1831_; 
if (v_isShared_1829_ == 0)
{
v___x_1831_ = v___x_1828_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1826_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
}
}
else
{
lean_object* v_a_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1841_; 
lean_dec_ref_known(v_k_1807_, 1);
lean_dec(v_o_1804_);
v_a_1834_ = lean_ctor_get(v___x_1808_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1836_ = v___x_1808_;
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_a_1834_);
lean_dec(v___x_1808_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1839_; 
if (v_isShared_1837_ == 0)
{
v___x_1839_ = v___x_1836_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_a_1834_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
return v___x_1839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___boxed(lean_object* v_o_1842_, lean_object* v_key_1843_, lean_object* v_a_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_o_1842_, v_key_1843_);
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode(lean_object* v_self_1847_){
_start:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1849_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_exitCode___closed__0));
v___x_1850_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_1847_, v___x_1849_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode___boxed(lean_object* v_self_1851_, lean_object* v_a_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l_Lasm_JS_Node_ChildProcess_exitCode(v_self_1851_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed(lean_object* v_self_1855_){
_start:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1857_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_killed___closed__0));
v___x_1858_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1855_, v___x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed___boxed(lean_object* v_self_1859_, lean_object* v_a_1860_){
_start:
{
lean_object* v_res_1861_; 
v_res_1861_ = l_Lasm_JS_Node_ChildProcess_killed(v_self_1859_);
return v_res_1861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid(lean_object* v_self_1863_){
_start:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_pid___closed__0));
v___x_1866_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_1863_, v___x_1865_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid___boxed(lean_object* v_self_1867_, lean_object* v_a_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Lasm_JS_Node_ChildProcess_pid(v_self_1867_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode(lean_object* v_self_1871_){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1873_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_signalCode___closed__0));
v___x_1874_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_stream_Readable_readableEncoding_spec__0(v_self_1871_, v___x_1873_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode___boxed(lean_object* v_self_1875_, lean_object* v_a_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Lasm_JS_Node_ChildProcess_signalCode(v_self_1875_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0_spec__0(lean_object* v_context_1878_, lean_object* v_bytes_1879_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1879_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1883_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1882_);
lean_dec_ref_known(v___x_1881_, 1);
v___x_1883_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_1878_, v_a_1882_);
return v___x_1883_;
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
v_a_1884_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1881_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1881_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0_spec__0___boxed(lean_object* v_context_1892_, lean_object* v_bytes_1893_, lean_object* v_a_1894_){
_start:
{
lean_object* v_res_1895_; 
v_res_1895_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0_spec__0(v_context_1892_, v_bytes_1893_);
lean_dec_ref(v_bytes_1893_);
lean_dec_ref(v_context_1892_);
return v_res_1895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0(lean_object* v_o_1896_, lean_object* v_key_1897_){
_start:
{
lean_object* v_k_1899_; lean_object* v___x_1900_; 
v_k_1899_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1899_, 0, v_key_1897_);
v___x_1900_ = l_Lasm_JS_Wire_encodeIO(v_k_1899_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1901_; uint32_t v___x_1902_; uint32_t v___x_1903_; uint64_t v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_a_1901_);
lean_dec_ref_known(v___x_1900_, 1);
v___x_1902_ = 203;
v___x_1903_ = lasm_js_value_handle(v_o_1896_);
v___x_1904_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1905_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1906_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1906_, 0, v_o_1896_);
lean_ctor_set(v___x_1906_, 1, v___x_1905_);
v___x_1907_ = lean_unsigned_to_nat(2u);
v___x_1908_ = lean_mk_empty_array_with_capacity(v___x_1907_);
lean_inc_ref(v_k_1899_);
v___x_1909_ = lean_array_push(v___x_1908_, v_k_1899_);
v___x_1910_ = lean_array_push(v___x_1909_, v___x_1906_);
v___x_1911_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1910_);
v___x_1912_ = lasm_js_call(v___x_1902_, v___x_1903_, v___x_1904_, v_a_1901_, v___x_1911_);
lean_dec_ref_known(v___x_1911_, 1);
lean_dec(v_a_1901_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1912_, 1);
v___x_1914_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1915_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1899_);
v___x_1916_ = lean_string_append(v___x_1914_, v___x_1915_);
lean_dec_ref(v___x_1915_);
v___x_1917_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0_spec__0(v___x_1916_, v_a_1913_);
lean_dec(v_a_1913_);
lean_dec_ref(v___x_1916_);
return v___x_1917_;
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
lean_dec_ref_known(v_k_1899_, 1);
v_a_1918_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1912_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1912_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_a_1918_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
else
{
lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1933_; 
lean_dec_ref_known(v_k_1899_, 1);
lean_dec(v_o_1896_);
v_a_1926_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1928_ = v___x_1900_;
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_dec(v___x_1900_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1931_; 
if (v_isShared_1929_ == 0)
{
v___x_1931_ = v___x_1928_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_a_1926_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0___boxed(lean_object* v_o_1934_, lean_object* v_key_1935_, lean_object* v_a_1936_){
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0(v_o_1934_, v_key_1935_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_spawnargs(lean_object* v_self_1939_){
_start:
{
lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1941_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_spawnargs___closed__0));
v___x_1942_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0(v_self_1939_, v___x_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_spawnargs___boxed(lean_object* v_self_1943_, lean_object* v_a_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lasm_JS_Node_ChildProcess_spawnargs(v_self_1943_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_spawnfile(lean_object* v_self_1947_){
_start:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1949_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_spawnfile___closed__0));
v___x_1950_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1947_, v___x_1949_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_spawnfile___boxed(lean_object* v_self_1951_, lean_object* v_a_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l_Lasm_JS_Node_ChildProcess_spawnfile(v_self_1951_);
return v_res_1953_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1955_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1956_ = lean_string_utf8_byte_size(v___x_1955_);
return v___x_1956_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; uint8_t v___x_1959_; 
v___x_1957_ = lean_unsigned_to_nat(0u);
v___x_1958_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1);
v___x_1959_ = lean_nat_dec_eq(v___x_1958_, v___x_1957_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(lean_object* v_context_1961_, lean_object* v_d_1962_){
_start:
{
lean_object* v___y_1968_; lean_object* v___y_1969_; 
switch(lean_obj_tag(v_d_1962_))
{
case 1:
{
goto v___jp_1964_;
}
case 0:
{
goto v___jp_1964_;
}
default: 
{
if (lean_obj_tag(v_d_1962_) == 9)
{
lean_object* v_value_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v_value_1973_ = lean_ctor_get(v_d_1962_, 0);
lean_inc(v_value_1973_);
lean_dec_ref_known(v_d_1962_, 2);
v___x_1974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1974_, 0, v_value_1973_);
v___x_1975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1974_);
return v___x_1975_;
}
else
{
lean_object* v___x_1976_; lean_object* v_received_1978_; 
v___x_1976_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
if (lean_obj_tag(v_d_1962_) == 9)
{
lean_object* v_value_1992_; lean_object* v_description_1993_; uint8_t v___x_1994_; 
v_value_1992_ = lean_ctor_get(v_d_1962_, 0);
v_description_1993_ = lean_ctor_get(v_d_1962_, 1);
v___x_1994_ = lean_string_dec_eq(v_description_1993_, v___x_1976_);
if (v___x_1994_ == 0)
{
goto v___jp_1990_;
}
else
{
uint32_t v___x_1995_; uint64_t v___x_1996_; lean_object* v___x_1997_; uint32_t v___x_1998_; lean_object* v___x_1999_; 
lean_inc_n(v_value_1992_, 2);
lean_dec_ref_known(v_d_1962_, 2);
v___x_1995_ = 206;
v___x_1996_ = 0ULL;
v___x_1997_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1997_, 0, v_value_1992_);
lean_ctor_set(v___x_1997_, 1, v___x_1976_);
v___x_1998_ = lasm_js_value_handle(v_value_1992_);
lean_dec(v_value_1992_);
v___x_1999_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1995_, v___x_1996_, v___x_1997_, v___x_1998_);
lean_dec_ref_known(v___x_1997_, 2);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_a_2000_; uint8_t v___x_2001_; 
v_a_2000_ = lean_ctor_get(v___x_1999_, 0);
lean_inc(v_a_2000_);
lean_dec_ref_known(v___x_1999_, 1);
v___x_2001_ = lean_string_validate_utf8(v_a_2000_);
if (v___x_2001_ == 0)
{
lean_object* v___x_2002_; lean_object* v___x_2003_; 
lean_dec(v_a_2000_);
v___x_2002_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_2003_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2002_);
v_received_1978_ = v___x_2003_;
goto v___jp_1977_;
}
else
{
lean_object* v___x_2004_; 
v___x_2004_ = lean_string_from_utf8_unchecked(v_a_2000_);
v_received_1978_ = v___x_2004_;
goto v___jp_1977_;
}
}
else
{
lean_object* v___x_2005_; 
lean_dec_ref_known(v___x_1999_, 1);
v___x_2005_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v_received_1978_ = v___x_2005_;
goto v___jp_1977_;
}
}
}
else
{
goto v___jp_1990_;
}
v___jp_1977_:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; uint8_t v___x_1988_; 
v___x_1979_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_1980_ = lean_string_append(v___x_1979_, v_context_1961_);
v___x_1981_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_1982_ = lean_string_append(v___x_1980_, v___x_1981_);
v___x_1983_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__0));
v___x_1984_ = lean_string_append(v___x_1982_, v___x_1983_);
v___x_1985_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_1986_ = lean_string_append(v___x_1984_, v___x_1985_);
v___x_1987_ = lean_string_append(v___x_1986_, v_received_1978_);
lean_dec_ref(v_received_1978_);
v___x_1988_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_1988_ == 0)
{
lean_object* v___x_1989_; 
v___x_1989_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___y_1968_ = v___x_1987_;
v___y_1969_ = v___x_1989_;
goto v___jp_1967_;
}
else
{
v___y_1968_ = v___x_1987_;
v___y_1969_ = v___x_1976_;
goto v___jp_1967_;
}
}
v___jp_1990_:
{
lean_object* v___x_1991_; 
v___x_1991_ = l_Lasm_JS_Data_describe(v_d_1962_);
v_received_1978_ = v___x_1991_;
goto v___jp_1977_;
}
}
}
}
v___jp_1964_:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1965_ = lean_box(0);
v___x_1966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1965_);
return v___x_1966_;
}
v___jp_1967_:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1970_ = lean_string_append(v___y_1968_, v___y_1969_);
v___x_1971_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1970_);
v___x_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1972_, 0, v___x_1971_);
return v___x_1972_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2006_, lean_object* v_d_2007_, lean_object* v_a_2008_){
_start:
{
lean_object* v_res_2009_; 
v_res_2009_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_2006_, v_d_2007_);
lean_dec_ref(v_context_2006_);
return v_res_2009_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(lean_object* v_context_2010_, lean_object* v_bytes_2011_){
_start:
{
lean_object* v___x_2013_; 
v___x_2013_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2011_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v_a_2014_; lean_object* v___x_2015_; 
v_a_2014_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_a_2014_);
lean_dec_ref_known(v___x_2013_, 1);
v___x_2015_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_2010_, v_a_2014_);
return v___x_2015_;
}
else
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2023_; 
v_a_2016_ = lean_ctor_get(v___x_2013_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_2013_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2018_ = v___x_2013_;
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_2013_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2019_ == 0)
{
v___x_2021_ = v___x_2018_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2016_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0___boxed(lean_object* v_context_2024_, lean_object* v_bytes_2025_, lean_object* v_a_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v_context_2024_, v_bytes_2025_);
lean_dec_ref(v_bytes_2025_);
lean_dec_ref(v_context_2024_);
return v_res_2027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(lean_object* v_o_2028_, lean_object* v_key_2029_){
_start:
{
lean_object* v_k_2031_; lean_object* v___x_2032_; 
v_k_2031_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2031_, 0, v_key_2029_);
v___x_2032_ = l_Lasm_JS_Wire_encodeIO(v_k_2031_);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v_a_2033_; uint32_t v___x_2034_; uint32_t v___x_2035_; uint64_t v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
v_a_2033_ = lean_ctor_get(v___x_2032_, 0);
lean_inc(v_a_2033_);
lean_dec_ref_known(v___x_2032_, 1);
v___x_2034_ = 203;
v___x_2035_ = lasm_js_value_handle(v_o_2028_);
v___x_2036_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_2037_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2038_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2038_, 0, v_o_2028_);
lean_ctor_set(v___x_2038_, 1, v___x_2037_);
v___x_2039_ = lean_unsigned_to_nat(2u);
v___x_2040_ = lean_mk_empty_array_with_capacity(v___x_2039_);
lean_inc_ref(v_k_2031_);
v___x_2041_ = lean_array_push(v___x_2040_, v_k_2031_);
v___x_2042_ = lean_array_push(v___x_2041_, v___x_2038_);
v___x_2043_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
v___x_2044_ = lasm_js_call(v___x_2034_, v___x_2035_, v___x_2036_, v_a_2033_, v___x_2043_);
lean_dec_ref_known(v___x_2043_, 1);
lean_dec(v_a_2033_);
if (lean_obj_tag(v___x_2044_) == 0)
{
lean_object* v_a_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; 
v_a_2045_ = lean_ctor_get(v___x_2044_, 0);
lean_inc(v_a_2045_);
lean_dec_ref_known(v___x_2044_, 1);
v___x_2046_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_2047_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2031_);
v___x_2048_ = lean_string_append(v___x_2046_, v___x_2047_);
lean_dec_ref(v___x_2047_);
v___x_2049_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v___x_2048_, v_a_2045_);
lean_dec(v_a_2045_);
lean_dec_ref(v___x_2048_);
return v___x_2049_;
}
else
{
lean_object* v_a_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2057_; 
lean_dec_ref_known(v_k_2031_, 1);
v_a_2050_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2052_ = v___x_2044_;
v_isShared_2053_ = v_isSharedCheck_2057_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_a_2050_);
lean_dec(v___x_2044_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2057_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
lean_object* v___x_2055_; 
if (v_isShared_2053_ == 0)
{
v___x_2055_ = v___x_2052_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_a_2050_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
}
else
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
lean_dec_ref_known(v_k_2031_, 1);
lean_dec(v_o_2028_);
v_a_2058_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2060_ = v___x_2032_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2032_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2058_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0___boxed(lean_object* v_o_2066_, lean_object* v_key_2067_, lean_object* v_a_2068_){
_start:
{
lean_object* v_res_2069_; 
v_res_2069_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_o_2066_, v_key_2067_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr(lean_object* v_self_2070_){
_start:
{
lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2072_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1));
v___x_2073_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_2070_, v___x_2072_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr___boxed(lean_object* v_self_2074_, lean_object* v_a_2075_){
_start:
{
lean_object* v_res_2076_; 
v_res_2076_ = l_Lasm_JS_Node_ChildProcess_stderr(v_self_2074_);
return v_res_2076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(lean_object* v_context_2078_, lean_object* v_d_2079_){
_start:
{
lean_object* v___y_2085_; lean_object* v___y_2086_; 
switch(lean_obj_tag(v_d_2079_))
{
case 1:
{
goto v___jp_2081_;
}
case 0:
{
goto v___jp_2081_;
}
default: 
{
if (lean_obj_tag(v_d_2079_) == 9)
{
lean_object* v_value_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v_value_2090_ = lean_ctor_get(v_d_2079_, 0);
lean_inc(v_value_2090_);
lean_dec_ref_known(v_d_2079_, 2);
v___x_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2091_, 0, v_value_2090_);
v___x_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
return v___x_2092_;
}
else
{
lean_object* v___x_2093_; lean_object* v_received_2095_; 
v___x_2093_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
if (lean_obj_tag(v_d_2079_) == 9)
{
lean_object* v_value_2109_; lean_object* v_description_2110_; uint8_t v___x_2111_; 
v_value_2109_ = lean_ctor_get(v_d_2079_, 0);
v_description_2110_ = lean_ctor_get(v_d_2079_, 1);
v___x_2111_ = lean_string_dec_eq(v_description_2110_, v___x_2093_);
if (v___x_2111_ == 0)
{
goto v___jp_2107_;
}
else
{
uint32_t v___x_2112_; uint64_t v___x_2113_; lean_object* v___x_2114_; uint32_t v___x_2115_; lean_object* v___x_2116_; 
lean_inc_n(v_value_2109_, 2);
lean_dec_ref_known(v_d_2079_, 2);
v___x_2112_ = 206;
v___x_2113_ = 0ULL;
v___x_2114_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2114_, 0, v_value_2109_);
lean_ctor_set(v___x_2114_, 1, v___x_2093_);
v___x_2115_ = lasm_js_value_handle(v_value_2109_);
lean_dec(v_value_2109_);
v___x_2116_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2112_, v___x_2113_, v___x_2114_, v___x_2115_);
lean_dec_ref_known(v___x_2114_, 2);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; uint8_t v___x_2118_; 
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc(v_a_2117_);
lean_dec_ref_known(v___x_2116_, 1);
v___x_2118_ = lean_string_validate_utf8(v_a_2117_);
if (v___x_2118_ == 0)
{
lean_object* v___x_2119_; lean_object* v___x_2120_; 
lean_dec(v_a_2117_);
v___x_2119_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_2120_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2119_);
v_received_2095_ = v___x_2120_;
goto v___jp_2094_;
}
else
{
lean_object* v___x_2121_; 
v___x_2121_ = lean_string_from_utf8_unchecked(v_a_2117_);
v_received_2095_ = v___x_2121_;
goto v___jp_2094_;
}
}
else
{
lean_object* v___x_2122_; 
lean_dec_ref_known(v___x_2116_, 1);
v___x_2122_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v_received_2095_ = v___x_2122_;
goto v___jp_2094_;
}
}
}
else
{
goto v___jp_2107_;
}
v___jp_2094_:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; uint8_t v___x_2105_; 
v___x_2096_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_2097_ = lean_string_append(v___x_2096_, v_context_2078_);
v___x_2098_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_2099_ = lean_string_append(v___x_2097_, v___x_2098_);
v___x_2100_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___closed__0));
v___x_2101_ = lean_string_append(v___x_2099_, v___x_2100_);
v___x_2102_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_2103_ = lean_string_append(v___x_2101_, v___x_2102_);
v___x_2104_ = lean_string_append(v___x_2103_, v_received_2095_);
lean_dec_ref(v_received_2095_);
v___x_2105_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_2105_ == 0)
{
lean_object* v___x_2106_; 
v___x_2106_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___y_2085_ = v___x_2104_;
v___y_2086_ = v___x_2106_;
goto v___jp_2084_;
}
else
{
v___y_2085_ = v___x_2104_;
v___y_2086_ = v___x_2093_;
goto v___jp_2084_;
}
}
v___jp_2107_:
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lasm_JS_Data_describe(v_d_2079_);
v_received_2095_ = v___x_2108_;
goto v___jp_2094_;
}
}
}
}
v___jp_2081_:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___x_2082_ = lean_box(0);
v___x_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2082_);
return v___x_2083_;
}
v___jp_2084_:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2087_ = lean_string_append(v___y_2085_, v___y_2086_);
v___x_2088_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2087_);
v___x_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2088_);
return v___x_2089_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2123_, lean_object* v_d_2124_, lean_object* v_a_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_2123_, v_d_2124_);
lean_dec_ref(v_context_2123_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(lean_object* v_context_2127_, lean_object* v_bytes_2128_){
_start:
{
lean_object* v___x_2130_; 
v___x_2130_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2128_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; lean_object* v___x_2132_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2130_, 1);
v___x_2132_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_2127_, v_a_2131_);
return v___x_2132_;
}
else
{
lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2140_; 
v_a_2133_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_2135_ = v___x_2130_;
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___x_2130_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2138_; 
if (v_isShared_2136_ == 0)
{
v___x_2138_ = v___x_2135_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v_a_2133_);
v___x_2138_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
return v___x_2138_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0___boxed(lean_object* v_context_2141_, lean_object* v_bytes_2142_, lean_object* v_a_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v_context_2141_, v_bytes_2142_);
lean_dec_ref(v_bytes_2142_);
lean_dec_ref(v_context_2141_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(lean_object* v_o_2145_, lean_object* v_key_2146_){
_start:
{
lean_object* v_k_2148_; lean_object* v___x_2149_; 
v_k_2148_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2148_, 0, v_key_2146_);
v___x_2149_ = l_Lasm_JS_Wire_encodeIO(v_k_2148_);
if (lean_obj_tag(v___x_2149_) == 0)
{
lean_object* v_a_2150_; uint32_t v___x_2151_; uint32_t v___x_2152_; uint64_t v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v_a_2150_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_a_2150_);
lean_dec_ref_known(v___x_2149_, 1);
v___x_2151_ = 203;
v___x_2152_ = lasm_js_value_handle(v_o_2145_);
v___x_2153_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_2154_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2155_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2155_, 0, v_o_2145_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
v___x_2156_ = lean_unsigned_to_nat(2u);
v___x_2157_ = lean_mk_empty_array_with_capacity(v___x_2156_);
lean_inc_ref(v_k_2148_);
v___x_2158_ = lean_array_push(v___x_2157_, v_k_2148_);
v___x_2159_ = lean_array_push(v___x_2158_, v___x_2155_);
v___x_2160_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2159_);
v___x_2161_ = lasm_js_call(v___x_2151_, v___x_2152_, v___x_2153_, v_a_2150_, v___x_2160_);
lean_dec_ref_known(v___x_2160_, 1);
lean_dec(v_a_2150_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2162_);
lean_dec_ref_known(v___x_2161_, 1);
v___x_2163_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_2164_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2148_);
v___x_2165_ = lean_string_append(v___x_2163_, v___x_2164_);
lean_dec_ref(v___x_2164_);
v___x_2166_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v___x_2165_, v_a_2162_);
lean_dec(v_a_2162_);
lean_dec_ref(v___x_2165_);
return v___x_2166_;
}
else
{
lean_object* v_a_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2174_; 
lean_dec_ref_known(v_k_2148_, 1);
v_a_2167_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2169_ = v___x_2161_;
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_a_2167_);
lean_dec(v___x_2161_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2172_; 
if (v_isShared_2170_ == 0)
{
v___x_2172_ = v___x_2169_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_a_2167_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
}
else
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2182_; 
lean_dec_ref_known(v_k_2148_, 1);
lean_dec(v_o_2145_);
v_a_2175_ = lean_ctor_get(v___x_2149_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2177_ = v___x_2149_;
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2149_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0___boxed(lean_object* v_o_2183_, lean_object* v_key_2184_, lean_object* v_a_2185_){
_start:
{
lean_object* v_res_2186_; 
v_res_2186_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_o_2183_, v_key_2184_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin(lean_object* v_self_2188_){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___x_2190_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_stdin___closed__0));
v___x_2191_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_self_2188_, v___x_2190_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin___boxed(lean_object* v_self_2192_, lean_object* v_a_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l_Lasm_JS_Node_ChildProcess_stdin(v_self_2192_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdio(lean_object* v_self_2195_){
_start:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2197_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5));
v___x_2198_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_spawnargs_spec__0(v_self_2195_, v___x_2197_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdio___boxed(lean_object* v_self_2199_, lean_object* v_a_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Lasm_JS_Node_ChildProcess_stdio(v_self_2199_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout(lean_object* v_self_2202_){
_start:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0));
v___x_2205_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_2202_, v___x_2204_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout___boxed(lean_object* v_self_2206_, lean_object* v_a_2207_){
_start:
{
lean_object* v_res_2208_; 
v_res_2208_ = l_Lasm_JS_Node_ChildProcess_stdout(v_self_2206_);
return v_res_2208_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3(void){
_start:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2213_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__2));
v___x_2214_ = lean_unsigned_to_nat(2u);
v___x_2215_ = lean_mk_empty_array_with_capacity(v___x_2214_);
v___x_2216_ = lean_array_push(v___x_2215_, v___x_2213_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onClose(lean_object* v_self_2217_, lean_object* v_listener_2218_){
_start:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2220_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2221_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2222_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2222_, 0, v_listener_2218_);
lean_ctor_set(v___x_2222_, 1, v___x_2221_);
v___x_2223_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onClose___closed__3, &l_Lasm_JS_Node_ChildProcess_onClose___closed__3_once, _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3);
v___x_2224_ = lean_array_push(v___x_2223_, v___x_2222_);
v___x_2225_ = l_Lasm_JS_Web_Support_args(v___x_2224_);
v___x_2226_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2217_, v___x_2220_, v___x_2225_);
if (lean_obj_tag(v___x_2226_) == 0)
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
v_a_2227_ = lean_ctor_get(v___x_2226_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2226_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2226_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2226_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
v_a_2235_ = lean_ctor_get(v___x_2226_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2226_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2226_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2226_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onClose___boxed(lean_object* v_self_2243_, lean_object* v_listener_2244_, lean_object* v_a_2245_){
_start:
{
lean_object* v_res_2246_; 
v_res_2246_ = l_Lasm_JS_Node_ChildProcess_onClose(v_self_2243_, v_listener_2244_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceClose(lean_object* v_self_2248_, lean_object* v_listener_2249_){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2251_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2252_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2253_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2253_, 0, v_listener_2249_);
lean_ctor_set(v___x_2253_, 1, v___x_2252_);
v___x_2254_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onClose___closed__3, &l_Lasm_JS_Node_ChildProcess_onClose___closed__3_once, _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3);
v___x_2255_ = lean_array_push(v___x_2254_, v___x_2253_);
v___x_2256_ = l_Lasm_JS_Web_Support_args(v___x_2255_);
v___x_2257_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2248_, v___x_2251_, v___x_2256_);
if (lean_obj_tag(v___x_2257_) == 0)
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
v_a_2258_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2260_ = v___x_2257_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2257_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
if (v_isShared_2261_ == 0)
{
v___x_2263_ = v___x_2260_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2258_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
else
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2273_; 
v_a_2266_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2268_ = v___x_2257_;
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v___x_2257_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
if (v_isShared_2269_ == 0)
{
v___x_2271_ = v___x_2268_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_a_2266_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceClose___boxed(lean_object* v_self_2274_, lean_object* v_listener_2275_, lean_object* v_a_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lasm_JS_Node_ChildProcess_onceClose(v_self_2274_, v_listener_2275_);
return v_res_2277_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2(void){
_start:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2281_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__1));
v___x_2282_ = lean_unsigned_to_nat(2u);
v___x_2283_ = lean_mk_empty_array_with_capacity(v___x_2282_);
v___x_2284_ = lean_array_push(v___x_2283_, v___x_2281_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect(lean_object* v_self_2285_, lean_object* v_listener_2286_){
_start:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2288_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2289_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2290_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2290_, 0, v_listener_2286_);
lean_ctor_set(v___x_2290_, 1, v___x_2289_);
v___x_2291_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2, &l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2);
v___x_2292_ = lean_array_push(v___x_2291_, v___x_2290_);
v___x_2293_ = l_Lasm_JS_Web_Support_args(v___x_2292_);
v___x_2294_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2285_, v___x_2288_, v___x_2293_);
if (lean_obj_tag(v___x_2294_) == 0)
{
lean_object* v_a_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2302_; 
v_a_2295_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2302_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2297_ = v___x_2294_;
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_a_2295_);
lean_dec(v___x_2294_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2300_; 
if (v_isShared_2298_ == 0)
{
v___x_2300_ = v___x_2297_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_a_2295_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
else
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
v_a_2303_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2305_ = v___x_2294_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___x_2294_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2303_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect___boxed(lean_object* v_self_2311_, lean_object* v_listener_2312_, lean_object* v_a_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Lasm_JS_Node_ChildProcess_onDisconnect(v_self_2311_, v_listener_2312_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceDisconnect(lean_object* v_self_2315_, lean_object* v_listener_2316_){
_start:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2318_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2319_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2320_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2320_, 0, v_listener_2316_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
v___x_2321_ = lean_unsigned_to_nat(2u);
v___x_2322_ = lean_mk_empty_array_with_capacity(v___x_2321_);
lean_dec_ref(v___x_2322_);
v___x_2323_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2, &l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2);
v___x_2324_ = lean_array_push(v___x_2323_, v___x_2320_);
v___x_2325_ = l_Lasm_JS_Web_Support_args(v___x_2324_);
v___x_2326_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2315_, v___x_2318_, v___x_2325_);
if (lean_obj_tag(v___x_2326_) == 0)
{
lean_object* v_a_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2334_; 
v_a_2327_ = lean_ctor_get(v___x_2326_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2326_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2329_ = v___x_2326_;
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_a_2327_);
lean_dec(v___x_2326_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2332_; 
if (v_isShared_2330_ == 0)
{
v___x_2332_ = v___x_2329_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v_a_2327_);
v___x_2332_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
return v___x_2332_;
}
}
}
else
{
lean_object* v_a_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2342_; 
v_a_2335_ = lean_ctor_get(v___x_2326_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2326_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2337_ = v___x_2326_;
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_a_2335_);
lean_dec(v___x_2326_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v___x_2340_; 
if (v_isShared_2338_ == 0)
{
v___x_2340_ = v___x_2337_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_a_2335_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceDisconnect___boxed(lean_object* v_self_2343_, lean_object* v_listener_2344_, lean_object* v_a_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l_Lasm_JS_Node_ChildProcess_onceDisconnect(v_self_2343_, v_listener_2344_);
return v_res_2346_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2(void){
_start:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; 
v___x_2350_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onError___closed__1));
v___x_2351_ = lean_unsigned_to_nat(2u);
v___x_2352_ = lean_mk_empty_array_with_capacity(v___x_2351_);
v___x_2353_ = lean_array_push(v___x_2352_, v___x_2350_);
return v___x_2353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onError(lean_object* v_self_2354_, lean_object* v_listener_2355_){
_start:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2357_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2358_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2359_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2359_, 0, v_listener_2355_);
lean_ctor_set(v___x_2359_, 1, v___x_2358_);
v___x_2360_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onError___closed__2, &l_Lasm_JS_Node_ChildProcess_onError___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2);
v___x_2361_ = lean_array_push(v___x_2360_, v___x_2359_);
v___x_2362_ = l_Lasm_JS_Web_Support_args(v___x_2361_);
v___x_2363_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2354_, v___x_2357_, v___x_2362_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2371_; 
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2366_ = v___x_2363_;
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___x_2363_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2369_; 
if (v_isShared_2367_ == 0)
{
v___x_2369_ = v___x_2366_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_a_2364_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
else
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2379_; 
v_a_2372_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2374_ = v___x_2363_;
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2363_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2377_; 
if (v_isShared_2375_ == 0)
{
v___x_2377_ = v___x_2374_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_a_2372_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
return v___x_2377_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onError___boxed(lean_object* v_self_2380_, lean_object* v_listener_2381_, lean_object* v_a_2382_){
_start:
{
lean_object* v_res_2383_; 
v_res_2383_ = l_Lasm_JS_Node_ChildProcess_onError(v_self_2380_, v_listener_2381_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceError(lean_object* v_self_2384_, lean_object* v_listener_2385_){
_start:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2387_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2388_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2389_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2389_, 0, v_listener_2385_);
lean_ctor_set(v___x_2389_, 1, v___x_2388_);
v___x_2390_ = lean_unsigned_to_nat(2u);
v___x_2391_ = lean_mk_empty_array_with_capacity(v___x_2390_);
lean_dec_ref(v___x_2391_);
v___x_2392_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onError___closed__2, &l_Lasm_JS_Node_ChildProcess_onError___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2);
v___x_2393_ = lean_array_push(v___x_2392_, v___x_2389_);
v___x_2394_ = l_Lasm_JS_Web_Support_args(v___x_2393_);
v___x_2395_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2384_, v___x_2387_, v___x_2394_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2403_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
v_isSharedCheck_2403_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2398_ = v___x_2395_;
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_a_2396_);
lean_dec(v___x_2395_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2401_; 
if (v_isShared_2399_ == 0)
{
v___x_2401_ = v___x_2398_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v_a_2396_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
}
else
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2411_; 
v_a_2404_ = lean_ctor_get(v___x_2395_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2406_ = v___x_2395_;
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2395_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2409_; 
if (v_isShared_2407_ == 0)
{
v___x_2409_ = v___x_2406_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_a_2404_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceError___boxed(lean_object* v_self_2412_, lean_object* v_listener_2413_, lean_object* v_a_2414_){
_start:
{
lean_object* v_res_2415_; 
v_res_2415_ = l_Lasm_JS_Node_ChildProcess_onceError(v_self_2412_, v_listener_2413_);
return v_res_2415_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2(void){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
v___x_2419_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onExit___closed__1));
v___x_2420_ = lean_unsigned_to_nat(2u);
v___x_2421_ = lean_mk_empty_array_with_capacity(v___x_2420_);
v___x_2422_ = lean_array_push(v___x_2421_, v___x_2419_);
return v___x_2422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onExit(lean_object* v_self_2423_, lean_object* v_listener_2424_){
_start:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2426_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2427_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2428_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2428_, 0, v_listener_2424_);
lean_ctor_set(v___x_2428_, 1, v___x_2427_);
v___x_2429_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onExit___closed__2, &l_Lasm_JS_Node_ChildProcess_onExit___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2);
v___x_2430_ = lean_array_push(v___x_2429_, v___x_2428_);
v___x_2431_ = l_Lasm_JS_Web_Support_args(v___x_2430_);
v___x_2432_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2423_, v___x_2426_, v___x_2431_);
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v_a_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2440_; 
v_a_2433_ = lean_ctor_get(v___x_2432_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2435_ = v___x_2432_;
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_a_2433_);
lean_dec(v___x_2432_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2438_; 
if (v_isShared_2436_ == 0)
{
v___x_2438_ = v___x_2435_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_a_2433_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2448_; 
v_a_2441_ = lean_ctor_get(v___x_2432_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2443_ = v___x_2432_;
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2432_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2446_; 
if (v_isShared_2444_ == 0)
{
v___x_2446_ = v___x_2443_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_a_2441_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onExit___boxed(lean_object* v_self_2449_, lean_object* v_listener_2450_, lean_object* v_a_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l_Lasm_JS_Node_ChildProcess_onExit(v_self_2449_, v_listener_2450_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceExit(lean_object* v_self_2453_, lean_object* v_listener_2454_){
_start:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2456_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2457_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2458_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2458_, 0, v_listener_2454_);
lean_ctor_set(v___x_2458_, 1, v___x_2457_);
v___x_2459_ = lean_unsigned_to_nat(2u);
v___x_2460_ = lean_mk_empty_array_with_capacity(v___x_2459_);
lean_dec_ref(v___x_2460_);
v___x_2461_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onExit___closed__2, &l_Lasm_JS_Node_ChildProcess_onExit___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2);
v___x_2462_ = lean_array_push(v___x_2461_, v___x_2458_);
v___x_2463_ = l_Lasm_JS_Web_Support_args(v___x_2462_);
v___x_2464_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2453_, v___x_2456_, v___x_2463_);
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2472_; 
v_a_2465_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2467_ = v___x_2464_;
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2464_);
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
v_reuseFailAlloc_2471_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2480_; 
v_a_2473_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2480_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2480_ == 0)
{
v___x_2475_ = v___x_2464_;
v_isShared_2476_ = v_isSharedCheck_2480_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_a_2473_);
lean_dec(v___x_2464_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2480_;
goto v_resetjp_2474_;
}
v_resetjp_2474_:
{
lean_object* v___x_2478_; 
if (v_isShared_2476_ == 0)
{
v___x_2478_ = v___x_2475_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v_a_2473_);
v___x_2478_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
return v___x_2478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceExit___boxed(lean_object* v_self_2481_, lean_object* v_listener_2482_, lean_object* v_a_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_Lasm_JS_Node_ChildProcess_onceExit(v_self_2481_, v_listener_2482_);
return v_res_2484_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2(void){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2488_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onMessage___closed__1));
v___x_2489_ = lean_unsigned_to_nat(2u);
v___x_2490_ = lean_mk_empty_array_with_capacity(v___x_2489_);
v___x_2491_ = lean_array_push(v___x_2490_, v___x_2488_);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onMessage(lean_object* v_self_2492_, lean_object* v_listener_2493_){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2495_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2496_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2497_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2497_, 0, v_listener_2493_);
lean_ctor_set(v___x_2497_, 1, v___x_2496_);
v___x_2498_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onMessage___closed__2, &l_Lasm_JS_Node_ChildProcess_onMessage___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2);
v___x_2499_ = lean_array_push(v___x_2498_, v___x_2497_);
v___x_2500_ = l_Lasm_JS_Web_Support_args(v___x_2499_);
v___x_2501_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2492_, v___x_2495_, v___x_2500_);
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v_a_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2509_; 
v_a_2502_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2504_ = v___x_2501_;
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_a_2502_);
lean_dec(v___x_2501_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2507_; 
if (v_isShared_2505_ == 0)
{
v___x_2507_ = v___x_2504_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v_a_2502_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
}
}
}
else
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2517_; 
v_a_2510_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2512_ = v___x_2501_;
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2501_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2515_; 
if (v_isShared_2513_ == 0)
{
v___x_2515_ = v___x_2512_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_a_2510_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onMessage___boxed(lean_object* v_self_2518_, lean_object* v_listener_2519_, lean_object* v_a_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l_Lasm_JS_Node_ChildProcess_onMessage(v_self_2518_, v_listener_2519_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceMessage(lean_object* v_self_2522_, lean_object* v_listener_2523_){
_start:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2525_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2526_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2527_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2527_, 0, v_listener_2523_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = lean_unsigned_to_nat(2u);
v___x_2529_ = lean_mk_empty_array_with_capacity(v___x_2528_);
lean_dec_ref(v___x_2529_);
v___x_2530_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onMessage___closed__2, &l_Lasm_JS_Node_ChildProcess_onMessage___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2);
v___x_2531_ = lean_array_push(v___x_2530_, v___x_2527_);
v___x_2532_ = l_Lasm_JS_Web_Support_args(v___x_2531_);
v___x_2533_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2522_, v___x_2525_, v___x_2532_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2541_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2536_ = v___x_2533_;
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
else
{
lean_inc(v_a_2534_);
lean_dec(v___x_2533_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2539_; 
if (v_isShared_2537_ == 0)
{
v___x_2539_ = v___x_2536_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_a_2534_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
else
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2549_; 
v_a_2542_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2544_ = v___x_2533_;
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2533_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_a_2542_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceMessage___boxed(lean_object* v_self_2550_, lean_object* v_listener_2551_, lean_object* v_a_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Lasm_JS_Node_ChildProcess_onceMessage(v_self_2550_, v_listener_2551_);
return v_res_2553_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2(void){
_start:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2557_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onSpawn___closed__1));
v___x_2558_ = lean_unsigned_to_nat(2u);
v___x_2559_ = lean_mk_empty_array_with_capacity(v___x_2558_);
v___x_2560_ = lean_array_push(v___x_2559_, v___x_2557_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn(lean_object* v_self_2561_, lean_object* v_listener_2562_){
_start:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2564_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2565_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2566_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2566_, 0, v_listener_2562_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
v___x_2567_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2, &l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2);
v___x_2568_ = lean_array_push(v___x_2567_, v___x_2566_);
v___x_2569_ = l_Lasm_JS_Web_Support_args(v___x_2568_);
v___x_2570_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2561_, v___x_2564_, v___x_2569_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2578_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2573_ = v___x_2570_;
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_a_2571_);
lean_dec(v___x_2570_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v___x_2576_; 
if (v_isShared_2574_ == 0)
{
v___x_2576_ = v___x_2573_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2571_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
}
else
{
lean_object* v_a_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2586_; 
v_a_2579_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2581_ = v___x_2570_;
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_a_2579_);
lean_dec(v___x_2570_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v___x_2584_; 
if (v_isShared_2582_ == 0)
{
v___x_2584_ = v___x_2581_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_a_2579_);
v___x_2584_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
return v___x_2584_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn___boxed(lean_object* v_self_2587_, lean_object* v_listener_2588_, lean_object* v_a_2589_){
_start:
{
lean_object* v_res_2590_; 
v_res_2590_ = l_Lasm_JS_Node_ChildProcess_onSpawn(v_self_2587_, v_listener_2588_);
return v_res_2590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceSpawn(lean_object* v_self_2591_, lean_object* v_listener_2592_){
_start:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v___x_2594_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2595_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2596_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2596_, 0, v_listener_2592_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
v___x_2597_ = lean_unsigned_to_nat(2u);
v___x_2598_ = lean_mk_empty_array_with_capacity(v___x_2597_);
lean_dec_ref(v___x_2598_);
v___x_2599_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2, &l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2);
v___x_2600_ = lean_array_push(v___x_2599_, v___x_2596_);
v___x_2601_ = l_Lasm_JS_Web_Support_args(v___x_2600_);
v___x_2602_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2591_, v___x_2594_, v___x_2601_);
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2602_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2602_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2603_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
v_a_2611_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2602_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2602_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceSpawn___boxed(lean_object* v_self_2619_, lean_object* v_listener_2620_, lean_object* v_a_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Lasm_JS_Node_ChildProcess_onceSpawn(v_self_2619_, v_listener_2620_);
return v_res_2622_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_disconnect___closed__1(void){
_start:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2625_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_disconnect___closed__0));
v___x_2626_ = l_Lasm_JS_Web_Support_args(v___x_2625_);
return v___x_2626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_disconnect(lean_object* v_self_2627_){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2629_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__0));
v___x_2630_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_disconnect___closed__1, &l_Lasm_JS_Node_ChildProcess_disconnect___closed__1_once, _init_l_Lasm_JS_Node_ChildProcess_disconnect___closed__1);
v___x_2631_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2627_, v___x_2629_, v___x_2630_);
return v___x_2631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_disconnect___boxed(lean_object* v_self_2632_, lean_object* v_a_2633_){
_start:
{
lean_object* v_res_2634_; 
v_res_2634_ = l_Lasm_JS_Node_ChildProcess_disconnect(v_self_2632_);
return v_res_2634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(lean_object* v_x_2635_){
_start:
{
if (lean_obj_tag(v_x_2635_) == 0)
{
lean_object* v___x_2636_; 
v___x_2636_ = lean_box(0);
return v___x_2636_;
}
else
{
lean_object* v_val_2637_; 
v_val_2637_ = lean_ctor_get(v_x_2635_, 0);
lean_inc(v_val_2637_);
lean_dec_ref_known(v_x_2635_, 1);
if (lean_obj_tag(v_val_2637_) == 0)
{
double v_value_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
v_value_2638_ = lean_ctor_get_float(v_val_2637_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v_val_2637_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2640_ = v_val_2637_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_dec(v_val_2637_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2641_ == 0)
{
lean_ctor_set_tag(v___x_2640_, 3);
v___x_2643_ = v___x_2640_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2644_, 0, v_value_2638_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
else
{
lean_object* v_value_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2653_; 
v_value_2646_ = lean_ctor_get(v_val_2637_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v_val_2637_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2648_ = v_val_2637_;
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_value_2646_);
lean_dec(v_val_2637_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2651_; 
if (v_isShared_2649_ == 0)
{
lean_ctor_set_tag(v___x_2648_, 4);
v___x_2651_ = v___x_2648_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v_value_2646_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill(lean_object* v_self_2655_, lean_object* v_signal_2656_){
_start:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2658_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_kill___closed__0));
v___x_2659_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(v_signal_2656_);
v___x_2660_ = lean_unsigned_to_nat(1u);
v___x_2661_ = lean_mk_empty_array_with_capacity(v___x_2660_);
v___x_2662_ = lean_array_push(v___x_2661_, v___x_2659_);
v___x_2663_ = l_Lasm_JS_Web_Support_args(v___x_2662_);
v___x_2664_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_2655_, v___x_2658_, v___x_2663_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill___boxed(lean_object* v_self_2665_, lean_object* v_signal_2666_, lean_object* v_a_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l_Lasm_JS_Node_ChildProcess_kill(v_self_2665_, v_signal_2666_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ref(lean_object* v_self_2670_){
_start:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; 
v___x_2672_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_ref___closed__0));
v___x_2673_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_disconnect___closed__1, &l_Lasm_JS_Node_ChildProcess_disconnect___closed__1_once, _init_l_Lasm_JS_Node_ChildProcess_disconnect___closed__1);
v___x_2674_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2670_, v___x_2672_, v___x_2673_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ref___boxed(lean_object* v_self_2675_, lean_object* v_a_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Lasm_JS_Node_ChildProcess_ref(v_self_2675_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_send_spec__0(lean_object* v_x_2678_){
_start:
{
if (lean_obj_tag(v_x_2678_) == 0)
{
lean_object* v___x_2679_; 
v___x_2679_ = lean_box(0);
return v___x_2679_;
}
else
{
lean_object* v_val_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; 
v_val_2680_ = lean_ctor_get(v_x_2678_, 0);
v___x_2681_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcessSendOptions___lam__0___closed__0));
v___x_2682_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_2680_);
v___x_2683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2681_);
lean_ctor_set(v___x_2683_, 1, v___x_2682_);
v___x_2684_ = lean_unsigned_to_nat(1u);
v___x_2685_ = lean_mk_empty_array_with_capacity(v___x_2684_);
v___x_2686_ = lean_array_push(v___x_2685_, v___x_2683_);
v___x_2687_ = l_Lasm_JS_Web_Support_fields(v___x_2686_);
lean_dec_ref(v___x_2686_);
return v___x_2687_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_send_spec__0___boxed(lean_object* v_x_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_send_spec__0(v_x_2688_);
lean_dec(v_x_2688_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_send(lean_object* v_self_2691_, lean_object* v_message_2692_, lean_object* v_sendHandle_2693_, lean_object* v_options_2694_){
_start:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; 
v___x_2696_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_send___closed__0));
v___x_2697_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_send_spec__0(v_options_2694_);
v___x_2698_ = lean_unsigned_to_nat(3u);
v___x_2699_ = lean_mk_empty_array_with_capacity(v___x_2698_);
v___x_2700_ = lean_array_push(v___x_2699_, v_message_2692_);
v___x_2701_ = lean_array_push(v___x_2700_, v_sendHandle_2693_);
v___x_2702_ = lean_array_push(v___x_2701_, v___x_2697_);
v___x_2703_ = l_Lasm_JS_Web_Support_args(v___x_2702_);
v___x_2704_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_2691_, v___x_2696_, v___x_2703_);
return v___x_2704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_send___boxed(lean_object* v_self_2705_, lean_object* v_message_2706_, lean_object* v_sendHandle_2707_, lean_object* v_options_2708_, lean_object* v_a_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l_Lasm_JS_Node_ChildProcess_send(v_self_2705_, v_message_2706_, v_sendHandle_2707_, v_options_2708_);
lean_dec(v_options_2708_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_unref(lean_object* v_self_2712_){
_start:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2714_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_unref___closed__0));
v___x_2715_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_disconnect___closed__1, &l_Lasm_JS_Node_ChildProcess_disconnect___closed__1_once, _init_l_Lasm_JS_Node_ChildProcess_disconnect___closed__1);
v___x_2716_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2712_, v___x_2714_, v___x_2715_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_unref___boxed(lean_object* v_self_2717_, lean_object* v_a_2718_){
_start:
{
lean_object* v_res_2719_; 
v_res_2719_ = l_Lasm_JS_Node_ChildProcess_unref(v_self_2717_);
return v_res_2719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_exec_spec__0(lean_object* v_x_2720_){
_start:
{
if (lean_obj_tag(v_x_2720_) == 0)
{
lean_object* v___x_2721_; 
v___x_2721_ = lean_box(0);
return v___x_2721_;
}
else
{
lean_object* v_val_2722_; lean_object* v_cwd_2723_; lean_object* v_env_2724_; lean_object* v_encoding_2725_; lean_object* v_shell_2726_; lean_object* v_signal_2727_; lean_object* v_timeout_2728_; lean_object* v_maxBuffer_2729_; lean_object* v_killSignal_2730_; lean_object* v_uid_2731_; lean_object* v_gid_2732_; lean_object* v_windowsHide_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v_val_2722_ = lean_ctor_get(v_x_2720_, 0);
lean_inc(v_val_2722_);
lean_dec_ref_known(v_x_2720_, 1);
v_cwd_2723_ = lean_ctor_get(v_val_2722_, 0);
lean_inc(v_cwd_2723_);
v_env_2724_ = lean_ctor_get(v_val_2722_, 1);
lean_inc(v_env_2724_);
v_encoding_2725_ = lean_ctor_get(v_val_2722_, 2);
lean_inc(v_encoding_2725_);
v_shell_2726_ = lean_ctor_get(v_val_2722_, 3);
lean_inc(v_shell_2726_);
v_signal_2727_ = lean_ctor_get(v_val_2722_, 4);
lean_inc(v_signal_2727_);
v_timeout_2728_ = lean_ctor_get(v_val_2722_, 5);
lean_inc(v_timeout_2728_);
v_maxBuffer_2729_ = lean_ctor_get(v_val_2722_, 6);
lean_inc(v_maxBuffer_2729_);
v_killSignal_2730_ = lean_ctor_get(v_val_2722_, 7);
lean_inc(v_killSignal_2730_);
v_uid_2731_ = lean_ctor_get(v_val_2722_, 8);
lean_inc(v_uid_2731_);
v_gid_2732_ = lean_ctor_get(v_val_2722_, 9);
lean_inc(v_gid_2732_);
v_windowsHide_2733_ = lean_ctor_get(v_val_2722_, 10);
lean_inc(v_windowsHide_2733_);
lean_dec(v_val_2722_);
v___x_2734_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_2735_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_glob_spec__0_spec__0(v_cwd_2723_);
v___x_2736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2736_, 0, v___x_2734_);
lean_ctor_set(v___x_2736_, 1, v___x_2735_);
v___x_2737_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_2738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2737_);
lean_ctor_set(v___x_2738_, 1, v_env_2724_);
v___x_2739_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2));
v___x_2740_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_2725_);
v___x_2741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2739_);
lean_ctor_set(v___x_2741_, 1, v___x_2740_);
v___x_2742_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
v___x_2743_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_shell_2726_);
v___x_2744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2742_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
v___x_2745_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__4));
v___x_2746_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2727_);
lean_dec(v_signal_2727_);
v___x_2747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2745_);
lean_ctor_set(v___x_2747_, 1, v___x_2746_);
v___x_2748_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_2749_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_timeout_2728_);
v___x_2750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2748_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
v___x_2751_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6));
v___x_2752_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxBuffer_2729_);
v___x_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2751_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
v___x_2754_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_2755_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_2730_);
v___x_2756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2756_, 0, v___x_2754_);
lean_ctor_set(v___x_2756_, 1, v___x_2755_);
v___x_2757_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
v___x_2758_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_uid_2731_);
v___x_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2757_);
lean_ctor_set(v___x_2759_, 1, v___x_2758_);
v___x_2760_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_2761_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_gid_2732_);
v___x_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2762_, 0, v___x_2760_);
lean_ctor_set(v___x_2762_, 1, v___x_2761_);
v___x_2763_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_2764_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_2733_);
lean_dec(v_windowsHide_2733_);
v___x_2765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2763_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = lean_unsigned_to_nat(11u);
v___x_2767_ = lean_mk_empty_array_with_capacity(v___x_2766_);
v___x_2768_ = lean_array_push(v___x_2767_, v___x_2736_);
v___x_2769_ = lean_array_push(v___x_2768_, v___x_2738_);
v___x_2770_ = lean_array_push(v___x_2769_, v___x_2741_);
v___x_2771_ = lean_array_push(v___x_2770_, v___x_2744_);
v___x_2772_ = lean_array_push(v___x_2771_, v___x_2747_);
v___x_2773_ = lean_array_push(v___x_2772_, v___x_2750_);
v___x_2774_ = lean_array_push(v___x_2773_, v___x_2753_);
v___x_2775_ = lean_array_push(v___x_2774_, v___x_2756_);
v___x_2776_ = lean_array_push(v___x_2775_, v___x_2759_);
v___x_2777_ = lean_array_push(v___x_2776_, v___x_2762_);
v___x_2778_ = lean_array_push(v___x_2777_, v___x_2765_);
v___x_2779_ = l_Lasm_JS_Web_Support_fields(v___x_2778_);
lean_dec_ref(v___x_2778_);
return v___x_2779_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_exec(lean_object* v_command_2788_, lean_object* v_options_2789_){
_start:
{
uint8_t v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2791_ = 0;
v___x_2792_ = lean_unsigned_to_nat(2u);
v___x_2793_ = ((lean_object*)(l_Lasm_JS_Node_child__process_exec___closed__2));
v___x_2794_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2794_, 0, v_command_2788_);
v___x_2795_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_exec_spec__0(v_options_2789_);
v___x_2796_ = lean_mk_empty_array_with_capacity(v___x_2792_);
v___x_2797_ = lean_array_push(v___x_2796_, v___x_2794_);
v___x_2798_ = lean_array_push(v___x_2797_, v___x_2795_);
v___x_2799_ = l_Lasm_JS_Web_Support_args(v___x_2798_);
v___x_2800_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2793_, v___x_2799_, v___x_2791_);
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2808_; 
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2803_ = v___x_2800_;
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2800_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2806_; 
if (v_isShared_2804_ == 0)
{
v___x_2806_ = v___x_2803_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v_a_2801_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
}
else
{
lean_object* v_a_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2816_; 
v_a_2809_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2816_ == 0)
{
v___x_2811_ = v___x_2800_;
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_a_2809_);
lean_dec(v___x_2800_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2814_; 
if (v_isShared_2812_ == 0)
{
v___x_2814_ = v___x_2811_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_a_2809_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_exec___boxed(lean_object* v_command_2817_, lean_object* v_options_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v_res_2820_; 
v_res_2820_ = l_Lasm_JS_Node_child__process_exec(v_command_2817_, v_options_2818_);
return v_res_2820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0_spec__1(lean_object* v_x_2821_){
_start:
{
if (lean_obj_tag(v_x_2821_) == 0)
{
lean_object* v___x_2822_; 
v___x_2822_ = lean_box(0);
return v___x_2822_;
}
else
{
lean_object* v_val_2823_; 
v_val_2823_ = lean_ctor_get(v_x_2821_, 0);
lean_inc(v_val_2823_);
lean_dec_ref_known(v_x_2821_, 1);
if (lean_obj_tag(v_val_2823_) == 0)
{
uint8_t v_value_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2831_; 
v_value_2824_ = lean_ctor_get_uint8(v_val_2823_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v_val_2823_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2826_ = v_val_2823_;
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
else
{
lean_dec(v_val_2823_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2829_; 
if (v_isShared_2827_ == 0)
{
lean_ctor_set_tag(v___x_2826_, 2);
v___x_2829_ = v___x_2826_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2830_, 0, v_value_2824_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
else
{
lean_object* v_value_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2839_; 
v_value_2832_ = lean_ctor_get(v_val_2823_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v_val_2823_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2834_ = v_val_2823_;
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_value_2832_);
lean_dec(v_val_2823_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2837_; 
if (v_isShared_2835_ == 0)
{
lean_ctor_set_tag(v___x_2834_, 4);
v___x_2837_ = v___x_2834_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_value_2832_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0_spec__0(lean_object* v_x_2840_){
_start:
{
if (lean_obj_tag(v_x_2840_) == 0)
{
lean_object* v___x_2841_; 
v___x_2841_ = lean_box(0);
return v___x_2841_;
}
else
{
lean_object* v_val_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2852_; 
v_val_2842_ = lean_ctor_get(v_x_2840_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v_x_2840_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2844_ = v_x_2840_;
v_isShared_2845_ = v_isSharedCheck_2852_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_val_2842_);
lean_dec(v_x_2840_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2852_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
size_t v_sz_2846_; size_t v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2850_; 
v_sz_2846_ = lean_array_size(v_val_2842_);
v___x_2847_ = ((size_t)0ULL);
v___x_2848_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_2846_, v___x_2847_, v_val_2842_);
if (v_isShared_2845_ == 0)
{
lean_ctor_set_tag(v___x_2844_, 8);
lean_ctor_set(v___x_2844_, 0, v___x_2848_);
v___x_2850_ = v___x_2844_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v___x_2848_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(lean_object* v_x_2853_){
_start:
{
if (lean_obj_tag(v_x_2853_) == 0)
{
lean_object* v___x_2854_; 
v___x_2854_ = lean_box(0);
return v___x_2854_;
}
else
{
lean_object* v_val_2855_; lean_object* v_cwd_2856_; lean_object* v_env_2857_; lean_object* v_encoding_2858_; lean_object* v_timeout_2859_; lean_object* v_maxBuffer_2860_; lean_object* v_killSignal_2861_; lean_object* v_uid_2862_; lean_object* v_gid_2863_; lean_object* v_windowsHide_2864_; lean_object* v_windowsVerbatimArguments_2865_; lean_object* v_shell_2866_; lean_object* v_signal_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v_val_2855_ = lean_ctor_get(v_x_2853_, 0);
lean_inc(v_val_2855_);
lean_dec_ref_known(v_x_2853_, 1);
v_cwd_2856_ = lean_ctor_get(v_val_2855_, 0);
lean_inc(v_cwd_2856_);
v_env_2857_ = lean_ctor_get(v_val_2855_, 1);
lean_inc(v_env_2857_);
v_encoding_2858_ = lean_ctor_get(v_val_2855_, 2);
lean_inc(v_encoding_2858_);
v_timeout_2859_ = lean_ctor_get(v_val_2855_, 3);
lean_inc(v_timeout_2859_);
v_maxBuffer_2860_ = lean_ctor_get(v_val_2855_, 4);
lean_inc(v_maxBuffer_2860_);
v_killSignal_2861_ = lean_ctor_get(v_val_2855_, 5);
lean_inc(v_killSignal_2861_);
v_uid_2862_ = lean_ctor_get(v_val_2855_, 6);
lean_inc(v_uid_2862_);
v_gid_2863_ = lean_ctor_get(v_val_2855_, 7);
lean_inc(v_gid_2863_);
v_windowsHide_2864_ = lean_ctor_get(v_val_2855_, 8);
lean_inc(v_windowsHide_2864_);
v_windowsVerbatimArguments_2865_ = lean_ctor_get(v_val_2855_, 9);
lean_inc(v_windowsVerbatimArguments_2865_);
v_shell_2866_ = lean_ctor_get(v_val_2855_, 10);
lean_inc(v_shell_2866_);
v_signal_2867_ = lean_ctor_get(v_val_2855_, 11);
lean_inc(v_signal_2867_);
lean_dec(v_val_2855_);
v___x_2868_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_2869_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_glob_spec__0_spec__0(v_cwd_2856_);
v___x_2870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2870_, 0, v___x_2868_);
lean_ctor_set(v___x_2870_, 1, v___x_2869_);
v___x_2871_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_2872_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0_spec__0(v_env_2857_);
v___x_2873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2873_, 0, v___x_2871_);
lean_ctor_set(v___x_2873_, 1, v___x_2872_);
v___x_2874_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2));
v___x_2875_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_2858_);
v___x_2876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2874_);
lean_ctor_set(v___x_2876_, 1, v___x_2875_);
v___x_2877_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_2878_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_timeout_2859_);
v___x_2879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2877_);
lean_ctor_set(v___x_2879_, 1, v___x_2878_);
v___x_2880_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6));
v___x_2881_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxBuffer_2860_);
v___x_2882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2880_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
v___x_2883_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_2884_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_2861_);
v___x_2885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2883_);
lean_ctor_set(v___x_2885_, 1, v___x_2884_);
v___x_2886_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
v___x_2887_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_uid_2862_);
v___x_2888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2886_);
lean_ctor_set(v___x_2888_, 1, v___x_2887_);
v___x_2889_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_2890_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_gid_2863_);
v___x_2891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2889_);
lean_ctor_set(v___x_2891_, 1, v___x_2890_);
v___x_2892_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_2893_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_2864_);
lean_dec(v_windowsHide_2864_);
v___x_2894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2892_);
lean_ctor_set(v___x_2894_, 1, v___x_2893_);
v___x_2895_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_2896_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_2865_);
lean_dec(v_windowsVerbatimArguments_2865_);
v___x_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2895_);
lean_ctor_set(v___x_2897_, 1, v___x_2896_);
v___x_2898_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
v___x_2899_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0_spec__1(v_shell_2866_);
v___x_2900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2898_);
lean_ctor_set(v___x_2900_, 1, v___x_2899_);
v___x_2901_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__4));
v___x_2902_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2867_);
lean_dec(v_signal_2867_);
v___x_2903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2901_);
lean_ctor_set(v___x_2903_, 1, v___x_2902_);
v___x_2904_ = lean_unsigned_to_nat(12u);
v___x_2905_ = lean_mk_empty_array_with_capacity(v___x_2904_);
v___x_2906_ = lean_array_push(v___x_2905_, v___x_2870_);
v___x_2907_ = lean_array_push(v___x_2906_, v___x_2873_);
v___x_2908_ = lean_array_push(v___x_2907_, v___x_2876_);
v___x_2909_ = lean_array_push(v___x_2908_, v___x_2879_);
v___x_2910_ = lean_array_push(v___x_2909_, v___x_2882_);
v___x_2911_ = lean_array_push(v___x_2910_, v___x_2885_);
v___x_2912_ = lean_array_push(v___x_2911_, v___x_2888_);
v___x_2913_ = lean_array_push(v___x_2912_, v___x_2891_);
v___x_2914_ = lean_array_push(v___x_2913_, v___x_2894_);
v___x_2915_ = lean_array_push(v___x_2914_, v___x_2897_);
v___x_2916_ = lean_array_push(v___x_2915_, v___x_2900_);
v___x_2917_ = lean_array_push(v___x_2916_, v___x_2903_);
v___x_2918_ = l_Lasm_JS_Web_Support_fields(v___x_2917_);
lean_dec_ref(v___x_2917_);
return v___x_2918_;
}
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__4(uint8_t v_await_2919_, uint64_t v_extra_2920_){
_start:
{
uint64_t v___x_2921_; uint64_t v___y_2923_; 
v___x_2921_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
if (v_await_2919_ == 0)
{
uint64_t v___x_2926_; 
v___x_2926_ = 0ULL;
v___y_2923_ = v___x_2926_;
goto v___jp_2922_;
}
else
{
uint64_t v___x_2927_; 
v___x_2927_ = 2ULL;
v___y_2923_ = v___x_2927_;
goto v___jp_2922_;
}
v___jp_2922_:
{
uint64_t v___x_2924_; uint64_t v___x_2925_; 
v___x_2924_ = lean_uint64_lor(v___x_2921_, v___y_2923_);
v___x_2925_ = lean_uint64_lor(v___x_2924_, v_extra_2920_);
return v___x_2925_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__4___boxed(lean_object* v_await_2928_, lean_object* v_extra_2929_){
_start:
{
uint8_t v_await_boxed_2930_; uint64_t v_extra_boxed_2931_; uint64_t v_res_2932_; lean_object* v_r_2933_; 
v_await_boxed_2930_ = lean_unbox(v_await_2928_);
v_extra_boxed_2931_ = lean_unbox_uint64(v_extra_2929_);
lean_dec_ref(v_extra_2929_);
v_res_2932_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__4(v_await_boxed_2930_, v_extra_boxed_2931_);
v_r_2933_ = lean_box_uint64(v_res_2932_);
return v_r_2933_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__4(lean_object* v_failurePrefix_2934_, lean_object* v_x_2935_){
_start:
{
if (lean_obj_tag(v_x_2935_) == 0)
{
lean_object* v_a_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2948_; 
v_a_2937_ = lean_ctor_get(v_x_2935_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v_x_2935_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2939_ = v_x_2935_;
v_isShared_2940_ = v_isSharedCheck_2948_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_a_2937_);
lean_dec(v_x_2935_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2948_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2945_; 
v___x_2941_ = lean_io_error_to_string(v_a_2937_);
v___x_2942_ = lean_string_append(v_failurePrefix_2934_, v___x_2941_);
lean_dec_ref(v___x_2941_);
v___x_2943_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2942_);
if (v_isShared_2940_ == 0)
{
lean_ctor_set(v___x_2939_, 0, v___x_2943_);
v___x_2945_ = v___x_2939_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v___x_2943_);
v___x_2945_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
lean_object* v___x_2946_; 
v___x_2946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2945_);
return v___x_2946_;
}
}
}
else
{
lean_object* v___x_2949_; 
lean_dec_ref(v_failurePrefix_2934_);
v___x_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2949_, 0, v_x_2935_);
return v___x_2949_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__4___boxed(lean_object* v_failurePrefix_2950_, lean_object* v_x_2951_, lean_object* v___y_2952_){
_start:
{
lean_object* v_res_2953_; 
v_res_2953_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__4(v_failurePrefix_2950_, v_x_2951_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__8(lean_object* v___f_2954_, lean_object* v_x_2955_){
_start:
{
if (lean_obj_tag(v_x_2955_) == 0)
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2965_; 
lean_dec_ref(v___f_2954_);
v_a_2957_ = lean_ctor_get(v_x_2955_, 0);
v_isSharedCheck_2965_ = !lean_is_exclusive(v_x_2955_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2959_ = v_x_2955_;
v_isShared_2960_ = v_isSharedCheck_2965_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v_x_2955_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2965_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2962_; 
if (v_isShared_2960_ == 0)
{
v___x_2962_ = v___x_2959_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_a_2957_);
v___x_2962_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
lean_object* v___x_2963_; 
v___x_2963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2962_);
return v___x_2963_;
}
}
}
else
{
lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_2977_; 
v_isSharedCheck_2977_ = !lean_is_exclusive(v_x_2955_);
if (v_isSharedCheck_2977_ == 0)
{
lean_object* v_unused_2978_; 
v_unused_2978_ = lean_ctor_get(v_x_2955_, 0);
lean_dec(v_unused_2978_);
v___x_2967_ = v_x_2955_;
v_isShared_2968_ = v_isSharedCheck_2977_;
goto v_resetjp_2966_;
}
else
{
lean_dec(v_x_2955_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_2977_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v___x_2969_; uint8_t v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2973_; 
v___x_2969_ = lean_unsigned_to_nat(0u);
v___x_2970_ = 0;
v___x_2971_ = lean_io_promise_new();
if (v_isShared_2968_ == 0)
{
lean_ctor_set(v___x_2967_, 0, v___x_2971_);
v___x_2973_ = v___x_2967_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v___x_2971_);
v___x_2973_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
v___x_2975_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2969_, v___x_2970_, v___x_2974_, v___f_2954_);
return v___x_2975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__8___boxed(lean_object* v___f_2979_, lean_object* v_x_2980_, lean_object* v___y_2981_){
_start:
{
lean_object* v_res_2982_; 
v_res_2982_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__8(v___f_2979_, v_x_2980_);
return v_res_2982_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__1(lean_object* v___f_2983_, lean_object* v_bytes_2984_){
_start:
{
lean_object* v___x_2986_; uint8_t v___x_2987_; lean_object* v_val_2989_; lean_object* v___x_2992_; 
v___x_2986_ = lean_unsigned_to_nat(0u);
v___x_2987_ = 0;
v___x_2992_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2984_);
if (lean_obj_tag(v___x_2992_) == 0)
{
lean_object* v_a_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3000_; 
v_a_2993_ = lean_ctor_get(v___x_2992_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2992_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2995_ = v___x_2992_;
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_a_2993_);
lean_dec(v___x_2992_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2998_; 
if (v_isShared_2996_ == 0)
{
lean_ctor_set_tag(v___x_2995_, 1);
v___x_2998_ = v___x_2995_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_a_2993_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
v_val_2989_ = v___x_2998_;
goto v___jp_2988_;
}
}
}
else
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3008_; 
v_a_3001_ = lean_ctor_get(v___x_2992_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2992_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_3003_ = v___x_2992_;
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_2992_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
lean_ctor_set_tag(v___x_3003_, 0);
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_a_3001_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
v_val_2989_ = v___x_3006_;
goto v___jp_2988_;
}
}
}
v___jp_2988_:
{
lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2990_, 0, v_val_2989_);
v___x_2991_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2986_, v___x_2987_, v___x_2990_, v___f_2983_);
return v___x_2991_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__1___boxed(lean_object* v___f_3009_, lean_object* v_bytes_3010_, lean_object* v___y_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__1(v___f_3009_, v_bytes_3010_);
lean_dec_ref(v_bytes_3010_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__7(lean_object* v___f_3013_, lean_object* v_a_3014_, uint32_t v_op_3015_, uint64_t v_flags_3016_, lean_object* v_payload_3017_, lean_object* v_x_3018_){
_start:
{
if (lean_obj_tag(v_x_3018_) == 0)
{
lean_object* v___x_3020_; 
lean_dec_ref(v___f_3013_);
v___x_3020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3020_, 0, v_x_3018_);
return v___x_3020_;
}
else
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3041_; 
v_a_3021_ = lean_ctor_get(v_x_3018_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v_x_3018_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3023_ = v_x_3018_;
v_isShared_3024_ = v_isSharedCheck_3041_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v_x_3018_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3041_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
uint32_t v___x_3025_; lean_object* v___x_3026_; uint8_t v___x_3027_; lean_object* v_val_3029_; lean_object* v___x_3032_; 
v___x_3025_ = 0;
v___x_3026_ = lean_unsigned_to_nat(0u);
v___x_3027_ = 0;
v___x_3032_ = lasm_js_call_into(v_a_3014_, v_op_3015_, v___x_3025_, v_flags_3016_, v_a_3021_, v_payload_3017_);
lean_dec(v_a_3021_);
if (lean_obj_tag(v___x_3032_) == 0)
{
lean_object* v_a_3033_; lean_object* v___x_3035_; 
v_a_3033_ = lean_ctor_get(v___x_3032_, 0);
lean_inc(v_a_3033_);
lean_dec_ref_known(v___x_3032_, 1);
if (v_isShared_3024_ == 0)
{
lean_ctor_set(v___x_3023_, 0, v_a_3033_);
v___x_3035_ = v___x_3023_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_a_3033_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
v_val_3029_ = v___x_3035_;
goto v___jp_3028_;
}
}
else
{
lean_object* v_a_3037_; lean_object* v___x_3039_; 
v_a_3037_ = lean_ctor_get(v___x_3032_, 0);
lean_inc(v_a_3037_);
lean_dec_ref_known(v___x_3032_, 1);
if (v_isShared_3024_ == 0)
{
lean_ctor_set_tag(v___x_3023_, 0);
lean_ctor_set(v___x_3023_, 0, v_a_3037_);
v___x_3039_ = v___x_3023_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v_a_3037_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
v_val_3029_ = v___x_3039_;
goto v___jp_3028_;
}
}
v___jp_3028_:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3030_, 0, v_val_3029_);
v___x_3031_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3026_, v___x_3027_, v___x_3030_, v___f_3013_);
return v___x_3031_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__7___boxed(lean_object* v___f_3042_, lean_object* v_a_3043_, lean_object* v_op_3044_, lean_object* v_flags_3045_, lean_object* v_payload_3046_, lean_object* v_x_3047_, lean_object* v___y_3048_){
_start:
{
uint32_t v_op_boxed_3049_; uint64_t v_flags_boxed_3050_; lean_object* v_res_3051_; 
v_op_boxed_3049_ = lean_unbox_uint32(v_op_3044_);
lean_dec(v_op_3044_);
v_flags_boxed_3050_ = lean_unbox_uint64(v_flags_3045_);
lean_dec_ref(v_flags_3045_);
v_res_3051_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__7(v___f_3042_, v_a_3043_, v_op_boxed_3049_, v_flags_boxed_3050_, v_payload_3046_, v_x_3047_);
lean_dec(v_payload_3046_);
lean_dec(v_a_3043_);
return v_res_3051_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__5(lean_object* v___x_3052_, uint8_t v___x_3053_, lean_object* v___f_3054_, lean_object* v_a_3055_, uint32_t v_op_3056_, uint64_t v_flags_3057_, lean_object* v_payload_3058_, lean_object* v_x_3059_){
_start:
{
lean_object* v_val_3062_; 
if (lean_obj_tag(v_x_3059_) == 0)
{
lean_object* v___x_3065_; 
lean_dec_ref(v___f_3054_);
lean_dec(v___x_3052_);
v___x_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3065_, 0, v_x_3059_);
return v___x_3065_;
}
else
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3080_; 
v_a_3066_ = lean_ctor_get(v_x_3059_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v_x_3059_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3068_ = v_x_3059_;
v_isShared_3069_ = v_isSharedCheck_3080_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v_x_3059_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3080_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
uint32_t v___x_3070_; lean_object* v___x_3071_; 
v___x_3070_ = 0;
v___x_3071_ = lasm_js_call_into(v_a_3055_, v_op_3056_, v___x_3070_, v_flags_3057_, v_a_3066_, v_payload_3058_);
lean_dec(v_a_3066_);
if (lean_obj_tag(v___x_3071_) == 0)
{
lean_object* v_a_3072_; lean_object* v___x_3074_; 
v_a_3072_ = lean_ctor_get(v___x_3071_, 0);
lean_inc(v_a_3072_);
lean_dec_ref_known(v___x_3071_, 1);
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 0, v_a_3072_);
v___x_3074_ = v___x_3068_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_a_3072_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
v_val_3062_ = v___x_3074_;
goto v___jp_3061_;
}
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; 
v_a_3076_ = lean_ctor_get(v___x_3071_, 0);
lean_inc(v_a_3076_);
lean_dec_ref_known(v___x_3071_, 1);
if (v_isShared_3069_ == 0)
{
lean_ctor_set_tag(v___x_3068_, 0);
lean_ctor_set(v___x_3068_, 0, v_a_3076_);
v___x_3078_ = v___x_3068_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3076_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
v_val_3062_ = v___x_3078_;
goto v___jp_3061_;
}
}
}
}
v___jp_3061_:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3063_, 0, v_val_3062_);
v___x_3064_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3052_, v___x_3053_, v___x_3063_, v___f_3054_);
return v___x_3064_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__5___boxed(lean_object* v___x_3081_, lean_object* v___x_3082_, lean_object* v___f_3083_, lean_object* v_a_3084_, lean_object* v_op_3085_, lean_object* v_flags_3086_, lean_object* v_payload_3087_, lean_object* v_x_3088_, lean_object* v___y_3089_){
_start:
{
uint8_t v___x_1963__boxed_3090_; uint32_t v_op_boxed_3091_; uint64_t v_flags_boxed_3092_; lean_object* v_res_3093_; 
v___x_1963__boxed_3090_ = lean_unbox(v___x_3082_);
v_op_boxed_3091_ = lean_unbox_uint32(v_op_3085_);
lean_dec(v_op_3085_);
v_flags_boxed_3092_ = lean_unbox_uint64(v_flags_3086_);
lean_dec_ref(v_flags_3086_);
v_res_3093_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__5(v___x_3081_, v___x_1963__boxed_3090_, v___f_3083_, v_a_3084_, v_op_boxed_3091_, v_flags_boxed_3092_, v_payload_3087_, v_x_3088_);
lean_dec(v_payload_3087_);
lean_dec(v_a_3084_);
return v_res_3093_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__3(lean_object* v_a_3094_, lean_object* v_x_3095_){
_start:
{
if (lean_obj_tag(v_x_3095_) == 0)
{
lean_object* v_a_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3105_; 
v_a_3097_ = lean_ctor_get(v_x_3095_, 0);
v_isSharedCheck_3105_ = !lean_is_exclusive(v_x_3095_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3099_ = v_x_3095_;
v_isShared_3100_ = v_isSharedCheck_3105_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_a_3097_);
lean_dec(v_x_3095_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3105_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3102_; 
if (v_isShared_3100_ == 0)
{
v___x_3102_ = v___x_3099_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v_a_3097_);
v___x_3102_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
lean_object* v___x_3103_; 
v___x_3103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3103_, 0, v___x_3102_);
return v___x_3103_;
}
}
}
else
{
lean_object* v___x_3106_; 
lean_dec_ref_known(v_x_3095_, 1);
v___x_3106_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3094_);
return v___x_3106_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__3___boxed(lean_object* v_a_3107_, lean_object* v_x_3108_, lean_object* v___y_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__3(v_a_3107_, v_x_3108_);
lean_dec(v_a_3107_);
return v_res_3110_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__6(lean_object* v_failurePrefix_3111_, uint32_t v_op_3112_, uint64_t v_flags_3113_, lean_object* v_payload_3114_, lean_object* v___f_3115_, lean_object* v___f_3116_, lean_object* v___f_3117_, lean_object* v_x_3118_){
_start:
{
if (lean_obj_tag(v_x_3118_) == 0)
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3128_; 
lean_dec_ref(v___f_3117_);
lean_dec_ref(v___f_3116_);
lean_dec_ref(v___f_3115_);
lean_dec(v_payload_3114_);
v_a_3120_ = lean_ctor_get(v_x_3118_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_x_3118_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3122_ = v_x_3118_;
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v_x_3118_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3120_);
v___x_3125_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
lean_object* v___x_3126_; 
v___x_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
return v___x_3126_;
}
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3175_; 
v_a_3129_ = lean_ctor_get(v_x_3118_, 0);
v_isSharedCheck_3175_ = !lean_is_exclusive(v_x_3118_);
if (v_isSharedCheck_3175_ == 0)
{
v___x_3131_ = v_x_3118_;
v_isShared_3132_ = v_isSharedCheck_3175_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v_x_3118_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3175_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; uint8_t v___x_3135_; 
v___x_3133_ = lean_string_utf8_byte_size(v_failurePrefix_3111_);
v___x_3134_ = lean_unsigned_to_nat(0u);
v___x_3135_ = lean_nat_dec_eq(v___x_3133_, v___x_3134_);
if (v___x_3135_ == 0)
{
lean_object* v___f_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___f_3140_; lean_object* v_val_3142_; lean_object* v___x_3147_; 
lean_dec_ref(v___f_3117_);
lean_inc(v_a_3129_);
v___f_3136_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3136_, 0, v_a_3129_);
v___x_3137_ = lean_box(v___x_3135_);
v___x_3138_ = lean_box_uint32(v_op_3112_);
v___x_3139_ = lean_box_uint64(v_flags_3113_);
lean_inc(v_payload_3114_);
v___f_3140_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3140_, 0, v___x_3134_);
lean_closure_set(v___f_3140_, 1, v___x_3137_);
lean_closure_set(v___f_3140_, 2, v___f_3136_);
lean_closure_set(v___f_3140_, 3, v_a_3129_);
lean_closure_set(v___f_3140_, 4, v___x_3138_);
lean_closure_set(v___f_3140_, 5, v___x_3139_);
lean_closure_set(v___f_3140_, 6, v_payload_3114_);
v___x_3147_ = l_Lasm_JS_Wire_encodeIO(v_payload_3114_);
lean_dec(v_payload_3114_);
if (lean_obj_tag(v___x_3147_) == 0)
{
lean_object* v_a_3148_; lean_object* v___x_3150_; 
v_a_3148_ = lean_ctor_get(v___x_3147_, 0);
lean_inc(v_a_3148_);
lean_dec_ref_known(v___x_3147_, 1);
if (v_isShared_3132_ == 0)
{
lean_ctor_set(v___x_3131_, 0, v_a_3148_);
v___x_3150_ = v___x_3131_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3148_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
v_val_3142_ = v___x_3150_;
goto v___jp_3141_;
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; 
v_a_3152_ = lean_ctor_get(v___x_3147_, 0);
lean_inc(v_a_3152_);
lean_dec_ref_known(v___x_3147_, 1);
if (v_isShared_3132_ == 0)
{
lean_ctor_set_tag(v___x_3131_, 0);
lean_ctor_set(v___x_3131_, 0, v_a_3152_);
v___x_3154_ = v___x_3131_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3152_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
v_val_3142_ = v___x_3154_;
goto v___jp_3141_;
}
}
v___jp_3141_:
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3143_, 0, v_val_3142_);
v___x_3144_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3134_, v___x_3135_, v___x_3143_, v___f_3140_);
v___x_3145_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3134_, v___x_3135_, v___x_3144_, v___f_3115_);
v___x_3146_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3134_, v___x_3135_, v___x_3145_, v___f_3116_);
return v___x_3146_;
}
}
else
{
lean_object* v___f_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___f_3159_; uint8_t v___x_3160_; lean_object* v_val_3162_; lean_object* v___x_3166_; 
lean_dec_ref(v___f_3116_);
lean_dec_ref(v___f_3115_);
lean_inc(v_a_3129_);
v___f_3156_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3156_, 0, v_a_3129_);
v___x_3157_ = lean_box_uint32(v_op_3112_);
v___x_3158_ = lean_box_uint64(v_flags_3113_);
lean_inc(v_payload_3114_);
v___f_3159_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3159_, 0, v___f_3156_);
lean_closure_set(v___f_3159_, 1, v_a_3129_);
lean_closure_set(v___f_3159_, 2, v___x_3157_);
lean_closure_set(v___f_3159_, 3, v___x_3158_);
lean_closure_set(v___f_3159_, 4, v_payload_3114_);
v___x_3160_ = 0;
v___x_3166_ = l_Lasm_JS_Wire_encodeIO(v_payload_3114_);
lean_dec(v_payload_3114_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_a_3167_; lean_object* v___x_3169_; 
v_a_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3167_);
lean_dec_ref_known(v___x_3166_, 1);
if (v_isShared_3132_ == 0)
{
lean_ctor_set(v___x_3131_, 0, v_a_3167_);
v___x_3169_ = v___x_3131_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v_a_3167_);
v___x_3169_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
v_val_3162_ = v___x_3169_;
goto v___jp_3161_;
}
}
else
{
lean_object* v_a_3171_; lean_object* v___x_3173_; 
v_a_3171_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3171_);
lean_dec_ref_known(v___x_3166_, 1);
if (v_isShared_3132_ == 0)
{
lean_ctor_set_tag(v___x_3131_, 0);
lean_ctor_set(v___x_3131_, 0, v_a_3171_);
v___x_3173_ = v___x_3131_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v_a_3171_);
v___x_3173_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
v_val_3162_ = v___x_3173_;
goto v___jp_3161_;
}
}
v___jp_3161_:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; 
v___x_3163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3163_, 0, v_val_3162_);
v___x_3164_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3134_, v___x_3160_, v___x_3163_, v___f_3159_);
v___x_3165_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3134_, v___x_3160_, v___x_3164_, v___f_3117_);
return v___x_3165_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__6___boxed(lean_object* v_failurePrefix_3176_, lean_object* v_op_3177_, lean_object* v_flags_3178_, lean_object* v_payload_3179_, lean_object* v___f_3180_, lean_object* v___f_3181_, lean_object* v___f_3182_, lean_object* v_x_3183_, lean_object* v___y_3184_){
_start:
{
uint32_t v_op_boxed_3185_; uint64_t v_flags_boxed_3186_; lean_object* v_res_3187_; 
v_op_boxed_3185_ = lean_unbox_uint32(v_op_3177_);
lean_dec(v_op_3177_);
v_flags_boxed_3186_ = lean_unbox_uint64(v_flags_3178_);
lean_dec_ref(v_flags_3178_);
v_res_3187_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__6(v_failurePrefix_3176_, v_op_boxed_3185_, v_flags_boxed_3186_, v_payload_3179_, v___f_3180_, v___f_3181_, v___f_3182_, v_x_3183_);
lean_dec_ref(v_failurePrefix_3176_);
return v_res_3187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7(lean_object* v_d_3195_, lean_object* v_key_3196_){
_start:
{
if (lean_obj_tag(v_d_3195_) == 8)
{
lean_object* v___x_3197_; lean_object* v___x_3199_; uint8_t v_isShared_3200_; uint8_t v_isSharedCheck_3242_; 
v___x_3197_ = l_Lasm_JS_Data_field(v_d_3195_, v_key_3196_);
v_isSharedCheck_3242_ = !lean_is_exclusive(v_d_3195_);
if (v_isSharedCheck_3242_ == 0)
{
lean_object* v_unused_3243_; 
v_unused_3243_ = lean_ctor_get(v_d_3195_, 0);
lean_dec(v_unused_3243_);
v___x_3199_ = v_d_3195_;
v_isShared_3200_ = v_isSharedCheck_3242_;
goto v_resetjp_3198_;
}
else
{
lean_dec(v_d_3195_);
v___x_3199_ = lean_box(0);
v_isShared_3200_ = v_isSharedCheck_3242_;
goto v_resetjp_3198_;
}
v_resetjp_3198_:
{
switch(lean_obj_tag(v___x_3197_))
{
case 4:
{
lean_object* v_s_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3211_; 
v_s_3201_ = lean_ctor_get(v___x_3197_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3203_ = v___x_3197_;
v_isShared_3204_ = v_isSharedCheck_3211_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_s_3201_);
lean_dec(v___x_3197_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3211_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3206_; 
if (v_isShared_3204_ == 0)
{
lean_ctor_set_tag(v___x_3203_, 0);
v___x_3206_ = v___x_3203_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v_s_3201_);
v___x_3206_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
lean_object* v___x_3208_; 
if (v_isShared_3200_ == 0)
{
lean_ctor_set_tag(v___x_3199_, 1);
lean_ctor_set(v___x_3199_, 0, v___x_3206_);
v___x_3208_ = v___x_3199_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v___x_3206_);
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
case 6:
{
lean_object* v_b_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3222_; 
v_b_3212_ = lean_ctor_get(v___x_3197_, 0);
v_isSharedCheck_3222_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3214_ = v___x_3197_;
v_isShared_3215_ = v_isSharedCheck_3222_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_b_3212_);
lean_dec(v___x_3197_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3222_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3217_; 
if (v_isShared_3215_ == 0)
{
lean_ctor_set_tag(v___x_3214_, 1);
v___x_3217_ = v___x_3214_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v_b_3212_);
v___x_3217_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
lean_object* v___x_3219_; 
if (v_isShared_3200_ == 0)
{
lean_ctor_set_tag(v___x_3199_, 1);
lean_ctor_set(v___x_3199_, 0, v___x_3217_);
v___x_3219_ = v___x_3199_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v___x_3217_);
v___x_3219_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
return v___x_3219_;
}
}
}
}
default: 
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; uint8_t v___x_3233_; 
v___x_3223_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__0));
v___x_3224_ = lean_string_append(v___x_3223_, v_key_3196_);
v___x_3225_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__1));
v___x_3226_ = lean_string_append(v___x_3224_, v___x_3225_);
v___x_3227_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__2));
v___x_3228_ = lean_string_append(v___x_3226_, v___x_3227_);
v___x_3229_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__3));
v___x_3230_ = lean_string_append(v___x_3228_, v___x_3229_);
v___x_3231_ = l_Lasm_JS_Data_describe(v___x_3197_);
v___x_3232_ = lean_string_append(v___x_3230_, v___x_3231_);
lean_dec_ref(v___x_3231_);
v___x_3233_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_3233_ == 0)
{
lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3237_; 
v___x_3234_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___x_3235_ = lean_string_append(v___x_3232_, v___x_3234_);
if (v_isShared_3200_ == 0)
{
lean_ctor_set_tag(v___x_3199_, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3235_);
v___x_3237_ = v___x_3199_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v___x_3235_);
v___x_3237_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
return v___x_3237_;
}
}
else
{
lean_object* v___x_3240_; 
if (v_isShared_3200_ == 0)
{
lean_ctor_set_tag(v___x_3199_, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3232_);
v___x_3240_ = v___x_3199_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v___x_3232_);
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
}
else
{
lean_object* v___x_3244_; 
lean_dec(v_d_3195_);
v___x_3244_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___closed__5));
return v___x_3244_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7___boxed(lean_object* v_d_3245_, lean_object* v_key_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7(v_d_3245_, v_key_3246_);
lean_dec_ref(v_key_3246_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6(lean_object* v_context_3248_, lean_object* v_d_3249_){
_start:
{
lean_object* v___y_3252_; lean_object* v___y_3253_; lean_object* v___y_3258_; lean_object* v_received_3259_; lean_object* v___y_3278_; lean_object* v_a_3281_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3305_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0));
lean_inc(v_d_3249_);
v___x_3306_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7(v_d_3249_, v___x_3305_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v_a_3307_; 
v_a_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_a_3307_);
lean_dec_ref_known(v___x_3306_, 1);
v_a_3281_ = v_a_3307_;
goto v___jp_3280_;
}
else
{
lean_object* v_a_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v_a_3308_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_a_3308_);
lean_dec_ref_known(v___x_3306_, 1);
v___x_3309_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1));
lean_inc(v_d_3249_);
v___x_3310_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6_spec__7(v_d_3249_, v___x_3309_);
if (lean_obj_tag(v___x_3310_) == 0)
{
lean_object* v_a_3311_; 
lean_dec(v_a_3308_);
v_a_3311_ = lean_ctor_get(v___x_3310_, 0);
lean_inc(v_a_3311_);
lean_dec_ref_known(v___x_3310_, 1);
v_a_3281_ = v_a_3311_;
goto v___jp_3280_;
}
else
{
lean_object* v_a_3312_; lean_object* v___x_3314_; uint8_t v_isShared_3315_; uint8_t v_isSharedCheck_3320_; 
lean_dec(v_d_3249_);
v_a_3312_ = lean_ctor_get(v___x_3310_, 0);
v_isSharedCheck_3320_ = !lean_is_exclusive(v___x_3310_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3314_ = v___x_3310_;
v_isShared_3315_ = v_isSharedCheck_3320_;
goto v_resetjp_3313_;
}
else
{
lean_inc(v_a_3312_);
lean_dec(v___x_3310_);
v___x_3314_ = lean_box(0);
v_isShared_3315_ = v_isSharedCheck_3320_;
goto v_resetjp_3313_;
}
v_resetjp_3313_:
{
lean_object* v___x_3316_; lean_object* v___x_3318_; 
v___x_3316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3316_, 0, v_a_3308_);
lean_ctor_set(v___x_3316_, 1, v_a_3312_);
if (v_isShared_3315_ == 0)
{
lean_ctor_set_tag(v___x_3314_, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3316_);
v___x_3318_ = v___x_3314_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v___x_3316_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
return v___x_3318_;
}
}
}
}
v___jp_3251_:
{
lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3254_ = lean_string_append(v___y_3252_, v___y_3253_);
lean_dec_ref(v___y_3253_);
v___x_3255_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3254_);
v___x_3256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3255_);
return v___x_3256_;
}
v___jp_3257_:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; uint8_t v___x_3271_; 
v___x_3260_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_3261_ = lean_string_append(v___x_3260_, v_context_3248_);
v___x_3262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_3263_ = lean_string_append(v___x_3261_, v___x_3262_);
v___x_3264_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__1));
v___x_3265_ = lean_string_append(v___x_3263_, v___x_3264_);
v___x_3266_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_3267_ = lean_string_append(v___x_3265_, v___x_3266_);
v___x_3268_ = lean_string_append(v___x_3267_, v_received_3259_);
lean_dec_ref(v_received_3259_);
v___x_3269_ = lean_string_utf8_byte_size(v___y_3258_);
v___x_3270_ = lean_unsigned_to_nat(0u);
v___x_3271_ = lean_nat_dec_eq(v___x_3269_, v___x_3270_);
if (v___x_3271_ == 0)
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; 
v___x_3272_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__4));
v___x_3273_ = lean_string_append(v___x_3272_, v___y_3258_);
lean_dec_ref(v___y_3258_);
v___x_3274_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__5));
v___x_3275_ = lean_string_append(v___x_3273_, v___x_3274_);
v___y_3252_ = v___x_3268_;
v___y_3253_ = v___x_3275_;
goto v___jp_3251_;
}
else
{
lean_object* v___x_3276_; 
lean_dec_ref(v___y_3258_);
v___x_3276_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___y_3252_ = v___x_3268_;
v___y_3253_ = v___x_3276_;
goto v___jp_3251_;
}
}
v___jp_3277_:
{
lean_object* v___x_3279_; 
v___x_3279_ = l_Lasm_JS_Data_describe(v_d_3249_);
v___y_3258_ = v___y_3278_;
v_received_3259_ = v___x_3279_;
goto v___jp_3257_;
}
v___jp_3280_:
{
if (lean_obj_tag(v_d_3249_) == 9)
{
lean_object* v_value_3282_; lean_object* v_description_3283_; lean_object* v___x_3284_; uint8_t v___x_3285_; 
v_value_3282_ = lean_ctor_get(v_d_3249_, 0);
v_description_3283_ = lean_ctor_get(v_d_3249_, 1);
v___x_3284_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_3285_ = lean_string_dec_eq(v_description_3283_, v___x_3284_);
if (v___x_3285_ == 0)
{
v___y_3278_ = v_a_3281_;
goto v___jp_3277_;
}
else
{
lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3302_; 
lean_inc(v_value_3282_);
v_isSharedCheck_3302_ = !lean_is_exclusive(v_d_3249_);
if (v_isSharedCheck_3302_ == 0)
{
lean_object* v_unused_3303_; lean_object* v_unused_3304_; 
v_unused_3303_ = lean_ctor_get(v_d_3249_, 1);
lean_dec(v_unused_3303_);
v_unused_3304_ = lean_ctor_get(v_d_3249_, 0);
lean_dec(v_unused_3304_);
v___x_3287_ = v_d_3249_;
v_isShared_3288_ = v_isSharedCheck_3302_;
goto v_resetjp_3286_;
}
else
{
lean_dec(v_d_3249_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3302_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
uint32_t v___x_3289_; uint64_t v___x_3290_; lean_object* v___x_3292_; 
v___x_3289_ = 206;
v___x_3290_ = 0ULL;
lean_inc(v_value_3282_);
if (v_isShared_3288_ == 0)
{
lean_ctor_set(v___x_3287_, 1, v___x_3284_);
v___x_3292_ = v___x_3287_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3301_; 
v_reuseFailAlloc_3301_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3301_, 0, v_value_3282_);
lean_ctor_set(v_reuseFailAlloc_3301_, 1, v___x_3284_);
v___x_3292_ = v_reuseFailAlloc_3301_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
uint32_t v___x_3293_; lean_object* v___x_3294_; 
v___x_3293_ = lasm_js_value_handle(v_value_3282_);
lean_dec(v_value_3282_);
v___x_3294_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3289_, v___x_3290_, v___x_3292_, v___x_3293_);
lean_dec_ref(v___x_3292_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v_a_3295_; uint8_t v___x_3296_; 
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_a_3295_);
lean_dec_ref_known(v___x_3294_, 1);
v___x_3296_ = lean_string_validate_utf8(v_a_3295_);
if (v___x_3296_ == 0)
{
lean_object* v___x_3297_; lean_object* v___x_3298_; 
lean_dec(v_a_3295_);
v___x_3297_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_3298_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3297_);
v___y_3258_ = v_a_3281_;
v_received_3259_ = v___x_3298_;
goto v___jp_3257_;
}
else
{
lean_object* v___x_3299_; 
v___x_3299_ = lean_string_from_utf8_unchecked(v_a_3295_);
v___y_3258_ = v_a_3281_;
v_received_3259_ = v___x_3299_;
goto v___jp_3257_;
}
}
else
{
lean_object* v___x_3300_; 
lean_dec_ref_known(v___x_3294_, 1);
v___x_3300_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v___y_3258_ = v_a_3281_;
v_received_3259_ = v___x_3300_;
goto v___jp_3257_;
}
}
}
}
}
else
{
v___y_3278_ = v_a_3281_;
goto v___jp_3277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6___boxed(lean_object* v_context_3321_, lean_object* v_d_3322_, lean_object* v_a_3323_){
_start:
{
lean_object* v_res_3324_; 
v_res_3324_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6(v_context_3321_, v_d_3322_);
lean_dec_ref(v_context_3321_);
return v_res_3324_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__0(lean_object* v_context_3325_, lean_object* v_x_3326_){
_start:
{
lean_object* v_val_3329_; 
if (lean_obj_tag(v_x_3326_) == 0)
{
lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3339_; 
v_a_3331_ = lean_ctor_get(v_x_3326_, 0);
v_isSharedCheck_3339_ = !lean_is_exclusive(v_x_3326_);
if (v_isSharedCheck_3339_ == 0)
{
v___x_3333_ = v_x_3326_;
v_isShared_3334_ = v_isSharedCheck_3339_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v_x_3326_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3339_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3334_ == 0)
{
v___x_3336_ = v___x_3333_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v_a_3331_);
v___x_3336_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
lean_object* v___x_3337_; 
v___x_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3337_, 0, v___x_3336_);
return v___x_3337_;
}
}
}
else
{
lean_object* v_a_3340_; lean_object* v___x_3342_; uint8_t v_isShared_3343_; uint8_t v_isSharedCheck_3353_; 
v_a_3340_ = lean_ctor_get(v_x_3326_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v_x_3326_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3342_ = v_x_3326_;
v_isShared_3343_ = v_isSharedCheck_3353_;
goto v_resetjp_3341_;
}
else
{
lean_inc(v_a_3340_);
lean_dec(v_x_3326_);
v___x_3342_ = lean_box(0);
v_isShared_3343_ = v_isSharedCheck_3353_;
goto v_resetjp_3341_;
}
v_resetjp_3341_:
{
lean_object* v___x_3344_; 
v___x_3344_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5_spec__6(v_context_3325_, v_a_3340_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v_a_3345_; lean_object* v___x_3347_; 
v_a_3345_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_a_3345_);
lean_dec_ref_known(v___x_3344_, 1);
if (v_isShared_3343_ == 0)
{
lean_ctor_set(v___x_3342_, 0, v_a_3345_);
v___x_3347_ = v___x_3342_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_a_3345_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
v_val_3329_ = v___x_3347_;
goto v___jp_3328_;
}
}
else
{
lean_object* v_a_3349_; lean_object* v___x_3351_; 
v_a_3349_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_a_3349_);
lean_dec_ref_known(v___x_3344_, 1);
if (v_isShared_3343_ == 0)
{
lean_ctor_set_tag(v___x_3342_, 0);
lean_ctor_set(v___x_3342_, 0, v_a_3349_);
v___x_3351_ = v___x_3342_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_a_3349_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
v_val_3329_ = v___x_3351_;
goto v___jp_3328_;
}
}
}
}
v___jp_3328_:
{
lean_object* v___x_3330_; 
v___x_3330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3330_, 0, v_val_3329_);
return v___x_3330_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__0___boxed(lean_object* v_context_3354_, lean_object* v_x_3355_, lean_object* v___y_3356_){
_start:
{
lean_object* v_res_3357_; 
v_res_3357_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__0(v_context_3354_, v_x_3355_);
lean_dec_ref(v_context_3354_);
return v_res_3357_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__2(lean_object* v___f_3358_, lean_object* v_x_3359_){
_start:
{
if (lean_obj_tag(v_x_3359_) == 0)
{
lean_object* v_a_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3369_; 
lean_dec_ref(v___f_3358_);
v_a_3361_ = lean_ctor_get(v_x_3359_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v_x_3359_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3363_ = v_x_3359_;
v_isShared_3364_ = v_isSharedCheck_3369_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_a_3361_);
lean_dec(v_x_3359_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3369_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3366_; 
if (v_isShared_3364_ == 0)
{
v___x_3366_ = v___x_3363_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_a_3361_);
v___x_3366_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
lean_object* v___x_3367_; 
v___x_3367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3367_, 0, v___x_3366_);
return v___x_3367_;
}
}
}
else
{
lean_object* v_a_3370_; lean_object* v___x_3371_; 
v_a_3370_ = lean_ctor_get(v_x_3359_, 0);
lean_inc(v_a_3370_);
lean_dec_ref_known(v_x_3359_, 1);
v___x_3371_ = lean_apply_2(v___f_3358_, v_a_3370_, lean_box(0));
return v___x_3371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__2___boxed(lean_object* v___f_3372_, lean_object* v_x_3373_, lean_object* v___y_3374_){
_start:
{
lean_object* v_res_3375_; 
v_res_3375_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__2(v___f_3372_, v_x_3373_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5(lean_object* v_context_3376_, uint32_t v_op_3377_, uint64_t v_flags_3378_, lean_object* v_payload_3379_, lean_object* v_failurePrefix_3380_){
_start:
{
lean_object* v___f_3382_; lean_object* v___f_3383_; lean_object* v___f_3384_; lean_object* v___f_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___f_3388_; lean_object* v___f_3389_; lean_object* v___x_3390_; uint8_t v___x_3391_; lean_object* v_val_3393_; lean_object* v___x_3396_; 
v___f_3382_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3382_, 0, v_context_3376_);
v___f_3383_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3383_, 0, v___f_3382_);
v___f_3384_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3384_, 0, v___f_3383_);
lean_inc_ref(v_failurePrefix_3380_);
v___f_3385_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3385_, 0, v_failurePrefix_3380_);
v___x_3386_ = lean_box_uint32(v_op_3377_);
v___x_3387_ = lean_box_uint64(v_flags_3378_);
lean_inc_ref(v___f_3384_);
v___f_3388_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3388_, 0, v_failurePrefix_3380_);
lean_closure_set(v___f_3388_, 1, v___x_3386_);
lean_closure_set(v___f_3388_, 2, v___x_3387_);
lean_closure_set(v___f_3388_, 3, v_payload_3379_);
lean_closure_set(v___f_3388_, 4, v___f_3385_);
lean_closure_set(v___f_3388_, 5, v___f_3384_);
lean_closure_set(v___f_3388_, 6, v___f_3384_);
v___f_3389_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3389_, 0, v___f_3388_);
v___x_3390_ = lean_unsigned_to_nat(0u);
v___x_3391_ = 0;
v___x_3396_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3396_) == 0)
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3404_; 
v_a_3397_ = lean_ctor_get(v___x_3396_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3399_ = v___x_3396_;
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3396_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
lean_ctor_set_tag(v___x_3399_, 1);
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
v_val_3393_ = v___x_3402_;
goto v___jp_3392_;
}
}
}
else
{
lean_object* v_a_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3412_; 
v_a_3405_ = lean_ctor_get(v___x_3396_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3407_ = v___x_3396_;
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_a_3405_);
lean_dec(v___x_3396_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___x_3410_; 
if (v_isShared_3408_ == 0)
{
lean_ctor_set_tag(v___x_3407_, 0);
v___x_3410_ = v___x_3407_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_a_3405_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
v_val_3393_ = v___x_3410_;
goto v___jp_3392_;
}
}
}
v___jp_3392_:
{
lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3394_, 0, v_val_3393_);
v___x_3395_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3390_, v___x_3391_, v___x_3394_, v___f_3389_);
return v___x_3395_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5___boxed(lean_object* v_context_3413_, lean_object* v_op_3414_, lean_object* v_flags_3415_, lean_object* v_payload_3416_, lean_object* v_failurePrefix_3417_, lean_object* v_a_3418_){
_start:
{
uint32_t v_op_boxed_3419_; uint64_t v_flags_boxed_3420_; lean_object* v_res_3421_; 
v_op_boxed_3419_ = lean_unbox_uint32(v_op_3414_);
lean_dec(v_op_3414_);
v_flags_boxed_3420_ = lean_unbox_uint64(v_flags_3415_);
lean_dec_ref(v_flags_3415_);
v_res_3421_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5(v_context_3413_, v_op_boxed_3419_, v_flags_boxed_3420_, v_payload_3416_, v_failurePrefix_3417_);
return v_res_3421_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___closed__1(void){
_start:
{
uint64_t v___x_3423_; uint8_t v___x_3424_; uint64_t v___x_3425_; 
v___x_3423_ = 0ULL;
v___x_3424_ = 0;
v___x_3425_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__4(v___x_3424_, v___x_3423_);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(lean_object* v_f_3426_, lean_object* v_args_3427_, lean_object* v_this_3428_){
_start:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; uint32_t v___x_3433_; uint64_t v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v___x_3430_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_3431_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3431_, 0, v_f_3426_);
lean_ctor_set(v___x_3431_, 1, v___x_3430_);
v___x_3432_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___closed__0));
v___x_3433_ = 205;
v___x_3434_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___closed__1, &l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___closed__1);
v___x_3435_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3435_, 0, v_args_3427_);
v___x_3436_ = lean_unsigned_to_nat(3u);
v___x_3437_ = lean_mk_empty_array_with_capacity(v___x_3436_);
v___x_3438_ = lean_array_push(v___x_3437_, v___x_3431_);
v___x_3439_ = lean_array_push(v___x_3438_, v_this_3428_);
v___x_3440_ = lean_array_push(v___x_3439_, v___x_3435_);
v___x_3441_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3440_);
v___x_3442_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3_spec__5(v___x_3432_, v___x_3433_, v___x_3434_, v___x_3441_, v___x_3430_);
return v___x_3442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3___boxed(lean_object* v_f_3443_, lean_object* v_args_3444_, lean_object* v_this_3445_, lean_object* v___y_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_f_3443_, v_args_3444_, v_this_3445_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__0(lean_object* v_args_3448_, lean_object* v_x_3449_){
_start:
{
if (lean_obj_tag(v_x_3449_) == 0)
{
lean_object* v_a_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3459_; 
lean_dec_ref(v_args_3448_);
v_a_3451_ = lean_ctor_get(v_x_3449_, 0);
v_isSharedCheck_3459_ = !lean_is_exclusive(v_x_3449_);
if (v_isSharedCheck_3459_ == 0)
{
v___x_3453_ = v_x_3449_;
v_isShared_3454_ = v_isSharedCheck_3459_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_a_3451_);
lean_dec(v_x_3449_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3459_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v___x_3456_; 
if (v_isShared_3454_ == 0)
{
v___x_3456_ = v___x_3453_;
goto v_reusejp_3455_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v_a_3451_);
v___x_3456_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3455_;
}
v_reusejp_3455_:
{
lean_object* v___x_3457_; 
v___x_3457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3456_);
return v___x_3457_;
}
}
}
else
{
lean_object* v_a_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v_a_3460_ = lean_ctor_get(v_x_3449_, 0);
lean_inc(v_a_3460_);
lean_dec_ref_known(v_x_3449_, 1);
v___x_3461_ = lean_box(0);
v___x_3462_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_a_3460_, v_args_3448_, v___x_3461_);
return v___x_3462_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__0___boxed(lean_object* v_args_3463_, lean_object* v_x_3464_, lean_object* v___y_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__0(v_args_3463_, v_x_3464_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1(lean_object* v___f_3476_, lean_object* v_x_3477_){
_start:
{
if (lean_obj_tag(v_x_3477_) == 0)
{
lean_object* v_a_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3487_; 
lean_dec_ref(v___f_3476_);
v_a_3479_ = lean_ctor_get(v_x_3477_, 0);
v_isSharedCheck_3487_ = !lean_is_exclusive(v_x_3477_);
if (v_isSharedCheck_3487_ == 0)
{
v___x_3481_ = v_x_3477_;
v_isShared_3482_ = v_isSharedCheck_3487_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_a_3479_);
lean_dec(v_x_3477_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3487_;
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
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v_a_3479_);
v___x_3484_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
lean_object* v___x_3485_; 
v___x_3485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3485_, 0, v___x_3484_);
return v___x_3485_;
}
}
}
else
{
lean_object* v_a_3488_; lean_object* v___x_3490_; uint8_t v_isShared_3491_; uint8_t v_isSharedCheck_3513_; 
v_a_3488_ = lean_ctor_get(v_x_3477_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v_x_3477_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3490_ = v_x_3477_;
v_isShared_3491_ = v_isSharedCheck_3513_;
goto v_resetjp_3489_;
}
else
{
lean_inc(v_a_3488_);
lean_dec(v_x_3477_);
v___x_3490_ = lean_box(0);
v_isShared_3491_ = v_isSharedCheck_3513_;
goto v_resetjp_3489_;
}
v_resetjp_3489_:
{
uint8_t v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v_val_3501_; lean_object* v___x_3504_; 
v___x_3492_ = 0;
v___x_3493_ = lean_unsigned_to_nat(1u);
v___x_3494_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___closed__3));
v___x_3495_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_3496_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3496_, 0, v_a_3488_);
lean_ctor_set(v___x_3496_, 1, v___x_3495_);
v___x_3497_ = lean_mk_empty_array_with_capacity(v___x_3493_);
v___x_3498_ = lean_array_push(v___x_3497_, v___x_3496_);
v___x_3499_ = lean_unsigned_to_nat(0u);
v___x_3504_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_3494_, v___x_3498_, v___x_3492_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3505_; lean_object* v___x_3507_; 
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
lean_inc(v_a_3505_);
lean_dec_ref_known(v___x_3504_, 1);
if (v_isShared_3491_ == 0)
{
lean_ctor_set(v___x_3490_, 0, v_a_3505_);
v___x_3507_ = v___x_3490_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_a_3505_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
v_val_3501_ = v___x_3507_;
goto v___jp_3500_;
}
}
else
{
lean_object* v_a_3509_; lean_object* v___x_3511_; 
v_a_3509_ = lean_ctor_get(v___x_3504_, 0);
lean_inc(v_a_3509_);
lean_dec_ref_known(v___x_3504_, 1);
if (v_isShared_3491_ == 0)
{
lean_ctor_set_tag(v___x_3490_, 0);
lean_ctor_set(v___x_3490_, 0, v_a_3509_);
v___x_3511_ = v___x_3490_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3509_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
v_val_3501_ = v___x_3511_;
goto v___jp_3500_;
}
}
v___jp_3500_:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3502_, 0, v_val_3501_);
v___x_3503_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3499_, v___x_3492_, v___x_3502_, v___f_3476_);
return v___x_3503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___boxed(lean_object* v___f_3514_, lean_object* v_x_3515_, lean_object* v___y_3516_){
_start:
{
lean_object* v_res_3517_; 
v_res_3517_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1(v___f_3514_, v_x_3515_);
return v_res_3517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1(lean_object* v_module_3519_, lean_object* v_path_3520_, lean_object* v_args_3521_){
_start:
{
lean_object* v___f_3523_; lean_object* v___f_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; uint8_t v___x_3529_; lean_object* v_val_3531_; lean_object* v___x_3534_; 
v___f_3523_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3523_, 0, v_args_3521_);
v___f_3524_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3524_, 0, v___f_3523_);
v___x_3525_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___closed__0));
v___x_3526_ = lean_unsigned_to_nat(0u);
v___x_3527_ = lean_box(0);
v___x_3528_ = l_String_splitOnAux(v_path_3520_, v___x_3525_, v___x_3526_, v___x_3526_, v___x_3526_, v___x_3527_);
v___x_3529_ = 0;
v___x_3534_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v_module_3519_, v___x_3528_);
if (lean_obj_tag(v___x_3534_) == 0)
{
lean_object* v_a_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3542_; 
v_a_3535_ = lean_ctor_get(v___x_3534_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3534_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3537_ = v___x_3534_;
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_a_3535_);
lean_dec(v___x_3534_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v___x_3540_; 
if (v_isShared_3538_ == 0)
{
lean_ctor_set_tag(v___x_3537_, 1);
v___x_3540_ = v___x_3537_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_a_3535_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
v_val_3531_ = v___x_3540_;
goto v___jp_3530_;
}
}
}
else
{
lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3550_; 
v_a_3543_ = lean_ctor_get(v___x_3534_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3534_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3545_ = v___x_3534_;
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_dec(v___x_3534_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3548_; 
if (v_isShared_3546_ == 0)
{
lean_ctor_set_tag(v___x_3545_, 0);
v___x_3548_ = v___x_3545_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3543_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
v_val_3531_ = v___x_3548_;
goto v___jp_3530_;
}
}
}
v___jp_3530_:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3532_, 0, v_val_3531_);
v___x_3533_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3526_, v___x_3529_, v___x_3532_, v___f_3524_);
return v___x_3533_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1___boxed(lean_object* v_module_3551_, lean_object* v_path_3552_, lean_object* v_args_3553_, lean_object* v_a_3554_){
_start:
{
lean_object* v_res_3555_; 
v_res_3555_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1(v_module_3551_, v_path_3552_, v_args_3553_);
lean_dec_ref(v_path_3552_);
return v_res_3555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile(lean_object* v_file_3557_, lean_object* v_args_3558_, lean_object* v_options_3559_){
_start:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; 
v___x_3561_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0));
v___x_3562_ = ((lean_object*)(l_Lasm_JS_Node_child__process_execFile___closed__0));
v___x_3563_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3563_, 0, v_file_3557_);
v___x_3564_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(v_args_3558_);
v___x_3565_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(v_options_3559_);
v___x_3566_ = lean_unsigned_to_nat(3u);
v___x_3567_ = lean_mk_empty_array_with_capacity(v___x_3566_);
v___x_3568_ = lean_array_push(v___x_3567_, v___x_3563_);
v___x_3569_ = lean_array_push(v___x_3568_, v___x_3564_);
v___x_3570_ = lean_array_push(v___x_3569_, v___x_3565_);
v___x_3571_ = l_Lasm_JS_Web_Support_args(v___x_3570_);
v___x_3572_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__1(v___x_3561_, v___x_3562_, v___x_3571_);
return v___x_3572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile___boxed(lean_object* v_file_3573_, lean_object* v_args_3574_, lean_object* v_options_3575_, lean_object* v_a_3576_){
_start:
{
lean_object* v_res_3577_; 
v_res_3577_ = l_Lasm_JS_Node_child__process_execFile(v_file_3573_, v_args_3574_, v_options_3575_);
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_fork_spec__0_spec__0(lean_object* v_x_3578_){
_start:
{
if (lean_obj_tag(v_x_3578_) == 0)
{
lean_object* v___x_3579_; 
v___x_3579_ = lean_box(0);
return v___x_3579_;
}
else
{
lean_object* v_val_3580_; 
v_val_3580_ = lean_ctor_get(v_x_3578_, 0);
lean_inc(v_val_3580_);
lean_dec_ref_known(v_x_3578_, 1);
if (lean_obj_tag(v_val_3580_) == 0)
{
lean_object* v_value_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3591_; 
v_value_3581_ = lean_ctor_get(v_val_3580_, 0);
v_isSharedCheck_3591_ = !lean_is_exclusive(v_val_3580_);
if (v_isSharedCheck_3591_ == 0)
{
v___x_3583_ = v_val_3580_;
v_isShared_3584_ = v_isSharedCheck_3591_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_value_3581_);
lean_dec(v_val_3580_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3591_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
size_t v_sz_3585_; size_t v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3589_; 
v_sz_3585_ = lean_array_size(v_value_3581_);
v___x_3586_ = ((size_t)0ULL);
v___x_3587_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_3585_, v___x_3586_, v_value_3581_);
if (v_isShared_3584_ == 0)
{
lean_ctor_set_tag(v___x_3583_, 7);
lean_ctor_set(v___x_3583_, 0, v___x_3587_);
v___x_3589_ = v___x_3583_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v___x_3587_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
return v___x_3589_;
}
}
}
else
{
lean_object* v_value_3592_; lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3599_; 
v_value_3592_ = lean_ctor_get(v_val_3580_, 0);
v_isSharedCheck_3599_ = !lean_is_exclusive(v_val_3580_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3594_ = v_val_3580_;
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
else
{
lean_inc(v_value_3592_);
lean_dec(v_val_3580_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
lean_object* v___x_3597_; 
if (v_isShared_3595_ == 0)
{
lean_ctor_set_tag(v___x_3594_, 4);
v___x_3597_ = v___x_3594_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v_value_3592_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
return v___x_3597_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_fork_spec__0(lean_object* v_x_3600_){
_start:
{
if (lean_obj_tag(v_x_3600_) == 0)
{
lean_object* v___x_3601_; 
v___x_3601_ = lean_box(0);
return v___x_3601_;
}
else
{
lean_object* v_val_3602_; lean_object* v_cwd_3603_; lean_object* v_detached_3604_; lean_object* v_env_3605_; lean_object* v_execPath_3606_; lean_object* v_execArgv_3607_; lean_object* v_gid_3608_; lean_object* v_serialization_3609_; lean_object* v_signal_3610_; lean_object* v_killSignal_3611_; lean_object* v_silent_3612_; lean_object* v_stdio_3613_; lean_object* v_uid_3614_; lean_object* v_windowsHide_3615_; lean_object* v_windowsVerbatimArguments_3616_; lean_object* v_timeout_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; 
v_val_3602_ = lean_ctor_get(v_x_3600_, 0);
lean_inc(v_val_3602_);
lean_dec_ref_known(v_x_3600_, 1);
v_cwd_3603_ = lean_ctor_get(v_val_3602_, 0);
lean_inc(v_cwd_3603_);
v_detached_3604_ = lean_ctor_get(v_val_3602_, 1);
lean_inc(v_detached_3604_);
v_env_3605_ = lean_ctor_get(v_val_3602_, 2);
lean_inc(v_env_3605_);
v_execPath_3606_ = lean_ctor_get(v_val_3602_, 3);
lean_inc(v_execPath_3606_);
v_execArgv_3607_ = lean_ctor_get(v_val_3602_, 4);
lean_inc(v_execArgv_3607_);
v_gid_3608_ = lean_ctor_get(v_val_3602_, 5);
lean_inc(v_gid_3608_);
v_serialization_3609_ = lean_ctor_get(v_val_3602_, 6);
lean_inc(v_serialization_3609_);
v_signal_3610_ = lean_ctor_get(v_val_3602_, 7);
lean_inc(v_signal_3610_);
v_killSignal_3611_ = lean_ctor_get(v_val_3602_, 8);
lean_inc(v_killSignal_3611_);
v_silent_3612_ = lean_ctor_get(v_val_3602_, 9);
lean_inc(v_silent_3612_);
v_stdio_3613_ = lean_ctor_get(v_val_3602_, 10);
lean_inc(v_stdio_3613_);
v_uid_3614_ = lean_ctor_get(v_val_3602_, 11);
lean_inc(v_uid_3614_);
v_windowsHide_3615_ = lean_ctor_get(v_val_3602_, 12);
lean_inc(v_windowsHide_3615_);
v_windowsVerbatimArguments_3616_ = lean_ctor_get(v_val_3602_, 13);
lean_inc(v_windowsVerbatimArguments_3616_);
v_timeout_3617_ = lean_ctor_get(v_val_3602_, 14);
lean_inc(v_timeout_3617_);
lean_dec(v_val_3602_);
v___x_3618_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_3619_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_glob_spec__0_spec__0(v_cwd_3603_);
v___x_3620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3620_, 0, v___x_3618_);
lean_ctor_set(v___x_3620_, 1, v___x_3619_);
v___x_3621_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__0));
v___x_3622_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_detached_3604_);
lean_dec(v_detached_3604_);
v___x_3623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3621_);
lean_ctor_set(v___x_3623_, 1, v___x_3622_);
v___x_3624_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_3625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3624_);
lean_ctor_set(v___x_3625_, 1, v_env_3605_);
v___x_3626_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__1));
v___x_3627_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_execPath_3606_);
v___x_3628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3626_);
lean_ctor_set(v___x_3628_, 1, v___x_3627_);
v___x_3629_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__2));
v___x_3630_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(v_execArgv_3607_);
v___x_3631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3631_, 0, v___x_3629_);
lean_ctor_set(v___x_3631_, 1, v___x_3630_);
v___x_3632_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_3633_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_gid_3608_);
v___x_3634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3634_, 0, v___x_3632_);
lean_ctor_set(v___x_3634_, 1, v___x_3633_);
v___x_3635_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__3));
v___x_3636_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_serialization_3609_);
v___x_3637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3637_, 0, v___x_3635_);
lean_ctor_set(v___x_3637_, 1, v___x_3636_);
v___x_3638_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__4));
v___x_3639_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_3610_);
lean_dec(v_signal_3610_);
v___x_3640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3640_, 0, v___x_3638_);
lean_ctor_set(v___x_3640_, 1, v___x_3639_);
v___x_3641_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_3642_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_3611_);
v___x_3643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3643_, 0, v___x_3641_);
lean_ctor_set(v___x_3643_, 1, v___x_3642_);
v___x_3644_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__4));
v___x_3645_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_silent_3612_);
lean_dec(v_silent_3612_);
v___x_3646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3646_, 0, v___x_3644_);
lean_ctor_set(v___x_3646_, 1, v___x_3645_);
v___x_3647_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5));
v___x_3648_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_fork_spec__0_spec__0(v_stdio_3613_);
v___x_3649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3649_, 0, v___x_3647_);
lean_ctor_set(v___x_3649_, 1, v___x_3648_);
v___x_3650_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
v___x_3651_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_uid_3614_);
v___x_3652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3652_, 0, v___x_3650_);
lean_ctor_set(v___x_3652_, 1, v___x_3651_);
v___x_3653_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_3654_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_3615_);
lean_dec(v_windowsHide_3615_);
v___x_3655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3655_, 0, v___x_3653_);
lean_ctor_set(v___x_3655_, 1, v___x_3654_);
v___x_3656_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_3657_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_3616_);
lean_dec(v_windowsVerbatimArguments_3616_);
v___x_3658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3658_, 0, v___x_3656_);
lean_ctor_set(v___x_3658_, 1, v___x_3657_);
v___x_3659_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_3660_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_timeout_3617_);
v___x_3661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3661_, 0, v___x_3659_);
lean_ctor_set(v___x_3661_, 1, v___x_3660_);
v___x_3662_ = lean_unsigned_to_nat(15u);
v___x_3663_ = lean_mk_empty_array_with_capacity(v___x_3662_);
v___x_3664_ = lean_array_push(v___x_3663_, v___x_3620_);
v___x_3665_ = lean_array_push(v___x_3664_, v___x_3623_);
v___x_3666_ = lean_array_push(v___x_3665_, v___x_3625_);
v___x_3667_ = lean_array_push(v___x_3666_, v___x_3628_);
v___x_3668_ = lean_array_push(v___x_3667_, v___x_3631_);
v___x_3669_ = lean_array_push(v___x_3668_, v___x_3634_);
v___x_3670_ = lean_array_push(v___x_3669_, v___x_3637_);
v___x_3671_ = lean_array_push(v___x_3670_, v___x_3640_);
v___x_3672_ = lean_array_push(v___x_3671_, v___x_3643_);
v___x_3673_ = lean_array_push(v___x_3672_, v___x_3646_);
v___x_3674_ = lean_array_push(v___x_3673_, v___x_3649_);
v___x_3675_ = lean_array_push(v___x_3674_, v___x_3652_);
v___x_3676_ = lean_array_push(v___x_3675_, v___x_3655_);
v___x_3677_ = lean_array_push(v___x_3676_, v___x_3658_);
v___x_3678_ = lean_array_push(v___x_3677_, v___x_3661_);
v___x_3679_ = l_Lasm_JS_Web_Support_fields(v___x_3678_);
lean_dec_ref(v___x_3678_);
return v___x_3679_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_fork(lean_object* v_modulePath_3688_, lean_object* v_args_3689_, lean_object* v_options_3690_){
_start:
{
uint8_t v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___y_3696_; 
v___x_3692_ = 0;
v___x_3693_ = lean_unsigned_to_nat(3u);
v___x_3694_ = ((lean_object*)(l_Lasm_JS_Node_child__process_fork___closed__2));
if (lean_obj_tag(v_modulePath_3688_) == 0)
{
lean_object* v_value_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3728_; 
v_value_3721_ = lean_ctor_get(v_modulePath_3688_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v_modulePath_3688_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3723_ = v_modulePath_3688_;
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_value_3721_);
lean_dec(v_modulePath_3688_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3726_; 
if (v_isShared_3724_ == 0)
{
lean_ctor_set_tag(v___x_3723_, 4);
v___x_3726_ = v___x_3723_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_value_3721_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
v___y_3696_ = v___x_3726_;
goto v___jp_3695_;
}
}
}
else
{
lean_object* v_value_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
v_value_3729_ = lean_ctor_get(v_modulePath_3688_, 0);
lean_inc(v_value_3729_);
lean_dec_ref_known(v_modulePath_3688_, 1);
v___x_3730_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_3731_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3731_, 0, v_value_3729_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
v___y_3696_ = v___x_3731_;
goto v___jp_3695_;
}
v___jp_3695_:
{
lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; 
v___x_3697_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(v_args_3689_);
v___x_3698_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_fork_spec__0(v_options_3690_);
v___x_3699_ = lean_mk_empty_array_with_capacity(v___x_3693_);
v___x_3700_ = lean_array_push(v___x_3699_, v___y_3696_);
v___x_3701_ = lean_array_push(v___x_3700_, v___x_3697_);
v___x_3702_ = lean_array_push(v___x_3701_, v___x_3698_);
v___x_3703_ = l_Lasm_JS_Web_Support_args(v___x_3702_);
v___x_3704_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_3694_, v___x_3703_, v___x_3692_);
if (lean_obj_tag(v___x_3704_) == 0)
{
lean_object* v_a_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3712_; 
v_a_3705_ = lean_ctor_get(v___x_3704_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3707_ = v___x_3704_;
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_a_3705_);
lean_dec(v___x_3704_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v___x_3710_; 
if (v_isShared_3708_ == 0)
{
v___x_3710_ = v___x_3707_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_a_3705_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
else
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3720_; 
v_a_3713_ = lean_ctor_get(v___x_3704_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3715_ = v___x_3704_;
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3704_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3718_; 
if (v_isShared_3716_ == 0)
{
v___x_3718_ = v___x_3715_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v_a_3713_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_fork___boxed(lean_object* v_modulePath_3732_, lean_object* v_args_3733_, lean_object* v_options_3734_, lean_object* v_a_3735_){
_start:
{
lean_object* v_res_3736_; 
v_res_3736_ = l_Lasm_JS_Node_child__process_fork(v_modulePath_3732_, v_args_3733_, v_options_3734_);
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(lean_object* v_x_3737_){
_start:
{
if (lean_obj_tag(v_x_3737_) == 0)
{
lean_object* v___x_3738_; 
v___x_3738_ = lean_box(0);
return v___x_3738_;
}
else
{
lean_object* v_val_3739_; lean_object* v_cwd_3740_; lean_object* v_env_3741_; lean_object* v_argv0_3742_; lean_object* v_stdio_3743_; lean_object* v_detached_3744_; lean_object* v_uid_3745_; lean_object* v_gid_3746_; lean_object* v_serialization_3747_; lean_object* v_shell_3748_; lean_object* v_windowsVerbatimArguments_3749_; lean_object* v_windowsHide_3750_; lean_object* v_signal_3751_; lean_object* v_timeout_3752_; lean_object* v_killSignal_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
v_val_3739_ = lean_ctor_get(v_x_3737_, 0);
lean_inc(v_val_3739_);
lean_dec_ref_known(v_x_3737_, 1);
v_cwd_3740_ = lean_ctor_get(v_val_3739_, 0);
lean_inc(v_cwd_3740_);
v_env_3741_ = lean_ctor_get(v_val_3739_, 1);
lean_inc(v_env_3741_);
v_argv0_3742_ = lean_ctor_get(v_val_3739_, 2);
lean_inc(v_argv0_3742_);
v_stdio_3743_ = lean_ctor_get(v_val_3739_, 3);
lean_inc(v_stdio_3743_);
v_detached_3744_ = lean_ctor_get(v_val_3739_, 4);
lean_inc(v_detached_3744_);
v_uid_3745_ = lean_ctor_get(v_val_3739_, 5);
lean_inc(v_uid_3745_);
v_gid_3746_ = lean_ctor_get(v_val_3739_, 6);
lean_inc(v_gid_3746_);
v_serialization_3747_ = lean_ctor_get(v_val_3739_, 7);
lean_inc(v_serialization_3747_);
v_shell_3748_ = lean_ctor_get(v_val_3739_, 8);
lean_inc(v_shell_3748_);
v_windowsVerbatimArguments_3749_ = lean_ctor_get(v_val_3739_, 9);
lean_inc(v_windowsVerbatimArguments_3749_);
v_windowsHide_3750_ = lean_ctor_get(v_val_3739_, 10);
lean_inc(v_windowsHide_3750_);
v_signal_3751_ = lean_ctor_get(v_val_3739_, 11);
lean_inc(v_signal_3751_);
v_timeout_3752_ = lean_ctor_get(v_val_3739_, 12);
lean_inc(v_timeout_3752_);
v_killSignal_3753_ = lean_ctor_get(v_val_3739_, 13);
lean_inc(v_killSignal_3753_);
lean_dec(v_val_3739_);
v___x_3754_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_3755_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_glob_spec__0_spec__0(v_cwd_3740_);
v___x_3756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3754_);
lean_ctor_set(v___x_3756_, 1, v___x_3755_);
v___x_3757_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_3758_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0_spec__0(v_env_3741_);
v___x_3759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3759_, 0, v___x_3757_);
lean_ctor_set(v___x_3759_, 1, v___x_3758_);
v___x_3760_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0));
v___x_3761_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_argv0_3742_);
v___x_3762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3760_);
lean_ctor_set(v___x_3762_, 1, v___x_3761_);
v___x_3763_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5));
v___x_3764_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_fork_spec__0_spec__0(v_stdio_3743_);
v___x_3765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3765_, 0, v___x_3763_);
lean_ctor_set(v___x_3765_, 1, v___x_3764_);
v___x_3766_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__0));
v___x_3767_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_detached_3744_);
lean_dec(v_detached_3744_);
v___x_3768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3766_);
lean_ctor_set(v___x_3768_, 1, v___x_3767_);
v___x_3769_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
v___x_3770_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_uid_3745_);
v___x_3771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3771_, 0, v___x_3769_);
lean_ctor_set(v___x_3771_, 1, v___x_3770_);
v___x_3772_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_3773_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_gid_3746_);
v___x_3774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3772_);
lean_ctor_set(v___x_3774_, 1, v___x_3773_);
v___x_3775_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__3));
v___x_3776_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_serialization_3747_);
v___x_3777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3775_);
lean_ctor_set(v___x_3777_, 1, v___x_3776_);
v___x_3778_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
v___x_3779_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0_spec__1(v_shell_3748_);
v___x_3780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3780_, 0, v___x_3778_);
lean_ctor_set(v___x_3780_, 1, v___x_3779_);
v___x_3781_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_3782_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_3749_);
lean_dec(v_windowsVerbatimArguments_3749_);
v___x_3783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3781_);
lean_ctor_set(v___x_3783_, 1, v___x_3782_);
v___x_3784_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_3785_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_3750_);
lean_dec(v_windowsHide_3750_);
v___x_3786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3786_, 0, v___x_3784_);
lean_ctor_set(v___x_3786_, 1, v___x_3785_);
v___x_3787_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__4));
v___x_3788_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_3751_);
lean_dec(v_signal_3751_);
v___x_3789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3787_);
lean_ctor_set(v___x_3789_, 1, v___x_3788_);
v___x_3790_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_3791_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_timeout_3752_);
v___x_3792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3792_, 0, v___x_3790_);
lean_ctor_set(v___x_3792_, 1, v___x_3791_);
v___x_3793_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_3794_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_3753_);
v___x_3795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3793_);
lean_ctor_set(v___x_3795_, 1, v___x_3794_);
v___x_3796_ = lean_unsigned_to_nat(14u);
v___x_3797_ = lean_mk_empty_array_with_capacity(v___x_3796_);
v___x_3798_ = lean_array_push(v___x_3797_, v___x_3756_);
v___x_3799_ = lean_array_push(v___x_3798_, v___x_3759_);
v___x_3800_ = lean_array_push(v___x_3799_, v___x_3762_);
v___x_3801_ = lean_array_push(v___x_3800_, v___x_3765_);
v___x_3802_ = lean_array_push(v___x_3801_, v___x_3768_);
v___x_3803_ = lean_array_push(v___x_3802_, v___x_3771_);
v___x_3804_ = lean_array_push(v___x_3803_, v___x_3774_);
v___x_3805_ = lean_array_push(v___x_3804_, v___x_3777_);
v___x_3806_ = lean_array_push(v___x_3805_, v___x_3780_);
v___x_3807_ = lean_array_push(v___x_3806_, v___x_3783_);
v___x_3808_ = lean_array_push(v___x_3807_, v___x_3786_);
v___x_3809_ = lean_array_push(v___x_3808_, v___x_3789_);
v___x_3810_ = lean_array_push(v___x_3809_, v___x_3792_);
v___x_3811_ = lean_array_push(v___x_3810_, v___x_3795_);
v___x_3812_ = l_Lasm_JS_Web_Support_fields(v___x_3811_);
lean_dec_ref(v___x_3811_);
return v___x_3812_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn(lean_object* v_command_3820_, lean_object* v_args_3821_, lean_object* v_options_3822_){
_start:
{
uint8_t v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3824_ = 0;
v___x_3825_ = lean_unsigned_to_nat(3u);
v___x_3826_ = ((lean_object*)(l_Lasm_JS_Node_child__process_spawn___closed__1));
v___x_3827_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3827_, 0, v_command_3820_);
v___x_3828_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(v_args_3821_);
v___x_3829_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(v_options_3822_);
v___x_3830_ = lean_mk_empty_array_with_capacity(v___x_3825_);
v___x_3831_ = lean_array_push(v___x_3830_, v___x_3827_);
v___x_3832_ = lean_array_push(v___x_3831_, v___x_3828_);
v___x_3833_ = lean_array_push(v___x_3832_, v___x_3829_);
v___x_3834_ = l_Lasm_JS_Web_Support_args(v___x_3833_);
v___x_3835_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_3826_, v___x_3834_, v___x_3824_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3843_; 
v_a_3836_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3838_ = v___x_3835_;
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v___x_3835_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3841_; 
if (v_isShared_3839_ == 0)
{
v___x_3841_ = v___x_3838_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_a_3836_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
else
{
lean_object* v_a_3844_; lean_object* v___x_3846_; uint8_t v_isShared_3847_; uint8_t v_isSharedCheck_3851_; 
v_a_3844_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3846_ = v___x_3835_;
v_isShared_3847_ = v_isSharedCheck_3851_;
goto v_resetjp_3845_;
}
else
{
lean_inc(v_a_3844_);
lean_dec(v___x_3835_);
v___x_3846_ = lean_box(0);
v_isShared_3847_ = v_isSharedCheck_3851_;
goto v_resetjp_3845_;
}
v_resetjp_3845_:
{
lean_object* v___x_3849_; 
if (v_isShared_3847_ == 0)
{
v___x_3849_ = v___x_3846_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v_a_3844_);
v___x_3849_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
return v___x_3849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn___boxed(lean_object* v_command_3852_, lean_object* v_args_3853_, lean_object* v_options_3854_, lean_object* v_a_3855_){
_start:
{
lean_object* v_res_3856_; 
v_res_3856_ = l_Lasm_JS_Node_child__process_spawn(v_command_3852_, v_args_3853_, v_options_3854_);
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1_spec__2(lean_object* v_context_3858_, lean_object* v_d_3859_){
_start:
{
lean_object* v_a_3865_; lean_object* v___y_3869_; lean_object* v___y_3870_; 
switch(lean_obj_tag(v_d_3859_))
{
case 1:
{
goto v___jp_3861_;
}
case 0:
{
goto v___jp_3861_;
}
default: 
{
switch(lean_obj_tag(v_d_3859_))
{
case 6:
{
lean_object* v_b_3874_; lean_object* v___x_3875_; 
v_b_3874_ = lean_ctor_get(v_d_3859_, 0);
lean_inc_ref(v_b_3874_);
lean_dec_ref_known(v_d_3859_, 1);
v___x_3875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3875_, 0, v_b_3874_);
v_a_3865_ = v___x_3875_;
goto v___jp_3864_;
}
case 4:
{
lean_object* v_s_3876_; lean_object* v___x_3877_; 
v_s_3876_ = lean_ctor_get(v_d_3859_, 0);
lean_inc_ref(v_s_3876_);
lean_dec_ref_known(v_d_3859_, 1);
v___x_3877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3877_, 0, v_s_3876_);
v_a_3865_ = v___x_3877_;
goto v___jp_3864_;
}
default: 
{
lean_object* v___x_3878_; lean_object* v_received_3880_; 
v___x_3878_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
if (lean_obj_tag(v_d_3859_) == 9)
{
lean_object* v_value_3894_; lean_object* v_description_3895_; uint8_t v___x_3896_; 
v_value_3894_ = lean_ctor_get(v_d_3859_, 0);
v_description_3895_ = lean_ctor_get(v_d_3859_, 1);
v___x_3896_ = lean_string_dec_eq(v_description_3895_, v___x_3878_);
if (v___x_3896_ == 0)
{
goto v___jp_3892_;
}
else
{
uint32_t v___x_3897_; uint64_t v___x_3898_; lean_object* v___x_3899_; uint32_t v___x_3900_; lean_object* v___x_3901_; 
lean_inc_n(v_value_3894_, 2);
lean_dec_ref_known(v_d_3859_, 2);
v___x_3897_ = 206;
v___x_3898_ = 0ULL;
v___x_3899_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3899_, 0, v_value_3894_);
lean_ctor_set(v___x_3899_, 1, v___x_3878_);
v___x_3900_ = lasm_js_value_handle(v_value_3894_);
lean_dec(v_value_3894_);
v___x_3901_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3897_, v___x_3898_, v___x_3899_, v___x_3900_);
lean_dec_ref_known(v___x_3899_, 2);
if (lean_obj_tag(v___x_3901_) == 0)
{
lean_object* v_a_3902_; uint8_t v___x_3903_; 
v_a_3902_ = lean_ctor_get(v___x_3901_, 0);
lean_inc(v_a_3902_);
lean_dec_ref_known(v___x_3901_, 1);
v___x_3903_ = lean_string_validate_utf8(v_a_3902_);
if (v___x_3903_ == 0)
{
lean_object* v___x_3904_; lean_object* v___x_3905_; 
lean_dec(v_a_3902_);
v___x_3904_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_3905_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3904_);
v_received_3880_ = v___x_3905_;
goto v___jp_3879_;
}
else
{
lean_object* v___x_3906_; 
v___x_3906_ = lean_string_from_utf8_unchecked(v_a_3902_);
v_received_3880_ = v___x_3906_;
goto v___jp_3879_;
}
}
else
{
lean_object* v___x_3907_; 
lean_dec_ref_known(v___x_3901_, 1);
v___x_3907_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v_received_3880_ = v___x_3907_;
goto v___jp_3879_;
}
}
}
else
{
goto v___jp_3892_;
}
v___jp_3879_:
{
lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; uint8_t v___x_3890_; 
v___x_3881_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_3882_ = lean_string_append(v___x_3881_, v_context_3858_);
v___x_3883_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_3884_ = lean_string_append(v___x_3882_, v___x_3883_);
v___x_3885_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1_spec__2___closed__0));
v___x_3886_ = lean_string_append(v___x_3884_, v___x_3885_);
v___x_3887_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_3888_ = lean_string_append(v___x_3886_, v___x_3887_);
v___x_3889_ = lean_string_append(v___x_3888_, v_received_3880_);
lean_dec_ref(v_received_3880_);
v___x_3890_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_3890_ == 0)
{
lean_object* v___x_3891_; 
v___x_3891_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___y_3869_ = v___x_3889_;
v___y_3870_ = v___x_3891_;
goto v___jp_3868_;
}
else
{
v___y_3869_ = v___x_3889_;
v___y_3870_ = v___x_3878_;
goto v___jp_3868_;
}
}
v___jp_3892_:
{
lean_object* v___x_3893_; 
v___x_3893_ = l_Lasm_JS_Data_describe(v_d_3859_);
v_received_3880_ = v___x_3893_;
goto v___jp_3879_;
}
}
}
}
}
v___jp_3861_:
{
lean_object* v___x_3862_; lean_object* v___x_3863_; 
v___x_3862_ = lean_box(0);
v___x_3863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3863_, 0, v___x_3862_);
return v___x_3863_;
}
v___jp_3864_:
{
lean_object* v___x_3866_; lean_object* v___x_3867_; 
v___x_3866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3866_, 0, v_a_3865_);
v___x_3867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3867_, 0, v___x_3866_);
return v___x_3867_;
}
v___jp_3868_:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
v___x_3871_ = lean_string_append(v___y_3869_, v___y_3870_);
v___x_3872_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3872_, 0, v___x_3871_);
v___x_3873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3873_, 0, v___x_3872_);
return v___x_3873_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1_spec__2___boxed(lean_object* v_context_3908_, lean_object* v_d_3909_, lean_object* v_a_3910_){
_start:
{
lean_object* v_res_3911_; 
v_res_3911_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1_spec__2(v_context_3908_, v_d_3909_);
lean_dec_ref(v_context_3908_);
return v_res_3911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1(lean_object* v_b_3913_, lean_object* v_args_3914_, uint8_t v_await_3915_){
_start:
{
uint64_t v___y_3918_; uint64_t v___y_3919_; uint64_t v___x_3962_; uint64_t v___y_3964_; 
v___x_3962_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
if (v_await_3915_ == 0)
{
uint64_t v___x_3969_; 
v___x_3969_ = 0ULL;
v___y_3964_ = v___x_3969_;
goto v___jp_3963_;
}
else
{
uint64_t v___x_3970_; 
v___x_3970_ = 2ULL;
v___y_3964_ = v___x_3970_;
goto v___jp_3963_;
}
v___jp_3917_:
{
uint64_t v_flags_3920_; uint32_t v___x_3921_; lean_object* v___x_3922_; uint32_t v___x_3923_; lean_object* v___x_3924_; 
v_flags_3920_ = lean_uint64_lor(v___y_3918_, v___y_3919_);
v___x_3921_ = 214;
v___x_3922_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3913_, v_args_3914_);
v___x_3923_ = 0;
v___x_3924_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3921_, v_flags_3920_, v___x_3922_, v___x_3923_);
lean_dec(v___x_3922_);
if (lean_obj_tag(v___x_3924_) == 0)
{
if (lean_obj_tag(v___x_3924_) == 0)
{
lean_object* v_a_3925_; lean_object* v___x_3926_; 
v_a_3925_ = lean_ctor_get(v___x_3924_, 0);
lean_inc(v_a_3925_);
lean_dec_ref_known(v___x_3924_, 1);
v___x_3926_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3925_);
lean_dec(v_a_3925_);
if (lean_obj_tag(v___x_3926_) == 0)
{
lean_object* v_a_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; 
v_a_3927_ = lean_ctor_get(v___x_3926_, 0);
lean_inc(v_a_3927_);
lean_dec_ref_known(v___x_3926_, 1);
v___x_3928_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3913_);
v___x_3929_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1_spec__2(v___x_3928_, v_a_3927_);
lean_dec_ref(v___x_3928_);
return v___x_3929_;
}
else
{
lean_object* v_a_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3937_; 
v_a_3930_ = lean_ctor_get(v___x_3926_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v___x_3926_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3932_ = v___x_3926_;
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_a_3930_);
lean_dec(v___x_3926_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3935_; 
if (v_isShared_3933_ == 0)
{
v___x_3935_ = v___x_3932_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_a_3930_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
}
else
{
lean_object* v_a_3938_; lean_object* v___x_3940_; uint8_t v_isShared_3941_; uint8_t v_isSharedCheck_3945_; 
v_a_3938_ = lean_ctor_get(v___x_3924_, 0);
v_isSharedCheck_3945_ = !lean_is_exclusive(v___x_3924_);
if (v_isSharedCheck_3945_ == 0)
{
v___x_3940_ = v___x_3924_;
v_isShared_3941_ = v_isSharedCheck_3945_;
goto v_resetjp_3939_;
}
else
{
lean_inc(v_a_3938_);
lean_dec(v___x_3924_);
v___x_3940_ = lean_box(0);
v_isShared_3941_ = v_isSharedCheck_3945_;
goto v_resetjp_3939_;
}
v_resetjp_3939_:
{
lean_object* v___x_3943_; 
if (v_isShared_3941_ == 0)
{
lean_ctor_set_tag(v___x_3940_, 1);
v___x_3943_ = v___x_3940_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3944_; 
v_reuseFailAlloc_3944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3944_, 0, v_a_3938_);
v___x_3943_ = v_reuseFailAlloc_3944_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
return v___x_3943_;
}
}
}
}
else
{
lean_object* v_a_3946_; lean_object* v___x_3948_; uint8_t v_isShared_3949_; uint8_t v_isSharedCheck_3961_; 
v_a_3946_ = lean_ctor_get(v___x_3924_, 0);
v_isSharedCheck_3961_ = !lean_is_exclusive(v___x_3924_);
if (v_isSharedCheck_3961_ == 0)
{
v___x_3948_ = v___x_3924_;
v_isShared_3949_ = v_isSharedCheck_3961_;
goto v_resetjp_3947_;
}
else
{
lean_inc(v_a_3946_);
lean_dec(v___x_3924_);
v___x_3948_ = lean_box(0);
v_isShared_3949_ = v_isSharedCheck_3961_;
goto v_resetjp_3947_;
}
v_resetjp_3947_:
{
lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3959_; 
v___x_3950_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_3951_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3913_);
v___x_3952_ = lean_string_append(v___x_3950_, v___x_3951_);
lean_dec_ref(v___x_3951_);
v___x_3953_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1___closed__0));
v___x_3954_ = lean_string_append(v___x_3952_, v___x_3953_);
v___x_3955_ = lean_io_error_to_string(v_a_3946_);
v___x_3956_ = lean_string_append(v___x_3954_, v___x_3955_);
lean_dec_ref(v___x_3955_);
v___x_3957_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3956_);
if (v_isShared_3949_ == 0)
{
lean_ctor_set(v___x_3948_, 0, v___x_3957_);
v___x_3959_ = v___x_3948_;
goto v_reusejp_3958_;
}
else
{
lean_object* v_reuseFailAlloc_3960_; 
v_reuseFailAlloc_3960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3960_, 0, v___x_3957_);
v___x_3959_ = v_reuseFailAlloc_3960_;
goto v_reusejp_3958_;
}
v_reusejp_3958_:
{
return v___x_3959_;
}
}
}
}
v___jp_3963_:
{
uint8_t v_construct_3965_; uint64_t v___x_3966_; 
v_construct_3965_ = lean_ctor_get_uint8(v_b_3913_, sizeof(void*)*4);
v___x_3966_ = lean_uint64_lor(v___x_3962_, v___y_3964_);
if (v_construct_3965_ == 0)
{
uint64_t v___x_3967_; 
v___x_3967_ = 0ULL;
v___y_3918_ = v___x_3966_;
v___y_3919_ = v___x_3967_;
goto v___jp_3917_;
}
else
{
uint64_t v___x_3968_; 
v___x_3968_ = 4ULL;
v___y_3918_ = v___x_3966_;
v___y_3919_ = v___x_3968_;
goto v___jp_3917_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1___boxed(lean_object* v_b_3971_, lean_object* v_args_3972_, lean_object* v_await_3973_, lean_object* v_a_3974_){
_start:
{
uint8_t v_await_boxed_3975_; lean_object* v_res_3976_; 
v_await_boxed_3975_ = lean_unbox(v_await_3973_);
v_res_3976_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1(v_b_3971_, v_args_3972_, v_await_boxed_3975_);
lean_dec_ref(v_b_3971_);
return v_res_3976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFileSync_spec__0_spec__0(lean_object* v_x_3977_){
_start:
{
if (lean_obj_tag(v_x_3977_) == 0)
{
lean_object* v___x_3978_; 
v___x_3978_ = lean_box(0);
return v___x_3978_;
}
else
{
lean_object* v_val_3979_; 
v_val_3979_ = lean_ctor_get(v_x_3977_, 0);
lean_inc(v_val_3979_);
lean_dec_ref_known(v_x_3977_, 1);
if (lean_obj_tag(v_val_3979_) == 0)
{
lean_object* v_value_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_3987_; 
v_value_3980_ = lean_ctor_get(v_val_3979_, 0);
v_isSharedCheck_3987_ = !lean_is_exclusive(v_val_3979_);
if (v_isSharedCheck_3987_ == 0)
{
v___x_3982_ = v_val_3979_;
v_isShared_3983_ = v_isSharedCheck_3987_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_value_3980_);
lean_dec(v_val_3979_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_3987_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v___x_3985_; 
if (v_isShared_3983_ == 0)
{
lean_ctor_set_tag(v___x_3982_, 4);
v___x_3985_ = v___x_3982_;
goto v_reusejp_3984_;
}
else
{
lean_object* v_reuseFailAlloc_3986_; 
v_reuseFailAlloc_3986_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3986_, 0, v_value_3980_);
v___x_3985_ = v_reuseFailAlloc_3986_;
goto v_reusejp_3984_;
}
v_reusejp_3984_:
{
return v___x_3985_;
}
}
}
else
{
lean_object* v_value_3988_; lean_object* v___x_3990_; uint8_t v_isShared_3991_; uint8_t v_isSharedCheck_3998_; 
v_value_3988_ = lean_ctor_get(v_val_3979_, 0);
v_isSharedCheck_3998_ = !lean_is_exclusive(v_val_3979_);
if (v_isSharedCheck_3998_ == 0)
{
v___x_3990_ = v_val_3979_;
v_isShared_3991_ = v_isSharedCheck_3998_;
goto v_resetjp_3989_;
}
else
{
lean_inc(v_value_3988_);
lean_dec(v_val_3979_);
v___x_3990_ = lean_box(0);
v_isShared_3991_ = v_isSharedCheck_3998_;
goto v_resetjp_3989_;
}
v_resetjp_3989_:
{
size_t v_sz_3992_; size_t v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3996_; 
v_sz_3992_ = lean_array_size(v_value_3988_);
v___x_3993_ = ((size_t)0ULL);
v___x_3994_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_3992_, v___x_3993_, v_value_3988_);
if (v_isShared_3991_ == 0)
{
lean_ctor_set_tag(v___x_3990_, 7);
lean_ctor_set(v___x_3990_, 0, v___x_3994_);
v___x_3996_ = v___x_3990_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v___x_3994_);
v___x_3996_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
return v___x_3996_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFileSync_spec__0(lean_object* v_x_3999_){
_start:
{
if (lean_obj_tag(v_x_3999_) == 0)
{
lean_object* v___x_4000_; 
v___x_4000_ = lean_box(0);
return v___x_4000_;
}
else
{
lean_object* v_val_4001_; lean_object* v_cwd_4002_; lean_object* v_input_4003_; lean_object* v_stdio_4004_; lean_object* v_env_4005_; lean_object* v_uid_4006_; lean_object* v_gid_4007_; lean_object* v_timeout_4008_; lean_object* v_killSignal_4009_; lean_object* v_maxBuffer_4010_; lean_object* v_encoding_4011_; lean_object* v_windowsHide_4012_; lean_object* v_shell_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; 
v_val_4001_ = lean_ctor_get(v_x_3999_, 0);
lean_inc(v_val_4001_);
lean_dec_ref_known(v_x_3999_, 1);
v_cwd_4002_ = lean_ctor_get(v_val_4001_, 0);
lean_inc(v_cwd_4002_);
v_input_4003_ = lean_ctor_get(v_val_4001_, 1);
lean_inc(v_input_4003_);
v_stdio_4004_ = lean_ctor_get(v_val_4001_, 2);
lean_inc(v_stdio_4004_);
v_env_4005_ = lean_ctor_get(v_val_4001_, 3);
lean_inc(v_env_4005_);
v_uid_4006_ = lean_ctor_get(v_val_4001_, 4);
lean_inc(v_uid_4006_);
v_gid_4007_ = lean_ctor_get(v_val_4001_, 5);
lean_inc(v_gid_4007_);
v_timeout_4008_ = lean_ctor_get(v_val_4001_, 6);
lean_inc(v_timeout_4008_);
v_killSignal_4009_ = lean_ctor_get(v_val_4001_, 7);
lean_inc(v_killSignal_4009_);
v_maxBuffer_4010_ = lean_ctor_get(v_val_4001_, 8);
lean_inc(v_maxBuffer_4010_);
v_encoding_4011_ = lean_ctor_get(v_val_4001_, 9);
lean_inc(v_encoding_4011_);
v_windowsHide_4012_ = lean_ctor_get(v_val_4001_, 10);
lean_inc(v_windowsHide_4012_);
v_shell_4013_ = lean_ctor_get(v_val_4001_, 11);
lean_inc(v_shell_4013_);
lean_dec(v_val_4001_);
v___x_4014_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_4015_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_glob_spec__0_spec__0(v_cwd_4002_);
v___x_4016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4016_, 0, v___x_4014_);
lean_ctor_set(v___x_4016_, 1, v___x_4015_);
v___x_4017_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0___closed__0));
v___x_4018_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_net_Socket_end_spec__0(v_input_4003_);
v___x_4019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4019_, 0, v___x_4017_);
lean_ctor_set(v___x_4019_, 1, v___x_4018_);
v___x_4020_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5));
v___x_4021_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFileSync_spec__0_spec__0(v_stdio_4004_);
v___x_4022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4022_, 0, v___x_4020_);
lean_ctor_set(v___x_4022_, 1, v___x_4021_);
v___x_4023_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_4024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4024_, 0, v___x_4023_);
lean_ctor_set(v___x_4024_, 1, v_env_4005_);
v___x_4025_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
v___x_4026_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_uid_4006_);
v___x_4027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4027_, 0, v___x_4025_);
lean_ctor_set(v___x_4027_, 1, v___x_4026_);
v___x_4028_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_4029_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_gid_4007_);
v___x_4030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4030_, 0, v___x_4028_);
lean_ctor_set(v___x_4030_, 1, v___x_4029_);
v___x_4031_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_4032_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_timeout_4008_);
v___x_4033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4031_);
lean_ctor_set(v___x_4033_, 1, v___x_4032_);
v___x_4034_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_4035_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_4009_);
v___x_4036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4036_, 0, v___x_4034_);
lean_ctor_set(v___x_4036_, 1, v___x_4035_);
v___x_4037_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6));
v___x_4038_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxBuffer_4010_);
v___x_4039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4039_, 0, v___x_4037_);
lean_ctor_set(v___x_4039_, 1, v___x_4038_);
v___x_4040_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2));
v___x_4041_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_4011_);
v___x_4042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4042_, 0, v___x_4040_);
lean_ctor_set(v___x_4042_, 1, v___x_4041_);
v___x_4043_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_4044_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_4012_);
lean_dec(v_windowsHide_4012_);
v___x_4045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4045_, 0, v___x_4043_);
lean_ctor_set(v___x_4045_, 1, v___x_4044_);
v___x_4046_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
v___x_4047_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0_spec__1(v_shell_4013_);
v___x_4048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4048_, 0, v___x_4046_);
lean_ctor_set(v___x_4048_, 1, v___x_4047_);
v___x_4049_ = lean_unsigned_to_nat(12u);
v___x_4050_ = lean_mk_empty_array_with_capacity(v___x_4049_);
v___x_4051_ = lean_array_push(v___x_4050_, v___x_4016_);
v___x_4052_ = lean_array_push(v___x_4051_, v___x_4019_);
v___x_4053_ = lean_array_push(v___x_4052_, v___x_4022_);
v___x_4054_ = lean_array_push(v___x_4053_, v___x_4024_);
v___x_4055_ = lean_array_push(v___x_4054_, v___x_4027_);
v___x_4056_ = lean_array_push(v___x_4055_, v___x_4030_);
v___x_4057_ = lean_array_push(v___x_4056_, v___x_4033_);
v___x_4058_ = lean_array_push(v___x_4057_, v___x_4036_);
v___x_4059_ = lean_array_push(v___x_4058_, v___x_4039_);
v___x_4060_ = lean_array_push(v___x_4059_, v___x_4042_);
v___x_4061_ = lean_array_push(v___x_4060_, v___x_4045_);
v___x_4062_ = lean_array_push(v___x_4061_, v___x_4048_);
v___x_4063_ = l_Lasm_JS_Web_Support_fields(v___x_4062_);
lean_dec_ref(v___x_4062_);
return v___x_4063_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFileSync(lean_object* v_file_4072_, lean_object* v_args_4073_, lean_object* v_options_4074_){
_start:
{
uint8_t v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4076_ = 0;
v___x_4077_ = lean_unsigned_to_nat(3u);
v___x_4078_ = ((lean_object*)(l_Lasm_JS_Node_child__process_execFileSync___closed__2));
v___x_4079_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4079_, 0, v_file_4072_);
v___x_4080_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(v_args_4073_);
v___x_4081_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFileSync_spec__0(v_options_4074_);
v___x_4082_ = lean_mk_empty_array_with_capacity(v___x_4077_);
v___x_4083_ = lean_array_push(v___x_4082_, v___x_4079_);
v___x_4084_ = lean_array_push(v___x_4083_, v___x_4080_);
v___x_4085_ = lean_array_push(v___x_4084_, v___x_4081_);
v___x_4086_ = l_Lasm_JS_Web_Support_args(v___x_4085_);
v___x_4087_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1(v___x_4078_, v___x_4086_, v___x_4076_);
return v___x_4087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFileSync___boxed(lean_object* v_file_4088_, lean_object* v_args_4089_, lean_object* v_options_4090_, lean_object* v_a_4091_){
_start:
{
lean_object* v_res_4092_; 
v_res_4092_ = l_Lasm_JS_Node_child__process_execFileSync(v_file_4088_, v_args_4089_, v_options_4090_);
return v_res_4092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execSync_spec__0(lean_object* v_x_4093_){
_start:
{
if (lean_obj_tag(v_x_4093_) == 0)
{
lean_object* v___x_4094_; 
v___x_4094_ = lean_box(0);
return v___x_4094_;
}
else
{
lean_object* v_val_4095_; lean_object* v_cwd_4096_; lean_object* v_input_4097_; lean_object* v_stdio_4098_; lean_object* v_env_4099_; lean_object* v_shell_4100_; lean_object* v_uid_4101_; lean_object* v_gid_4102_; lean_object* v_timeout_4103_; lean_object* v_killSignal_4104_; lean_object* v_maxBuffer_4105_; lean_object* v_encoding_4106_; lean_object* v_windowsHide_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; 
v_val_4095_ = lean_ctor_get(v_x_4093_, 0);
lean_inc(v_val_4095_);
lean_dec_ref_known(v_x_4093_, 1);
v_cwd_4096_ = lean_ctor_get(v_val_4095_, 0);
lean_inc(v_cwd_4096_);
v_input_4097_ = lean_ctor_get(v_val_4095_, 1);
lean_inc(v_input_4097_);
v_stdio_4098_ = lean_ctor_get(v_val_4095_, 2);
lean_inc(v_stdio_4098_);
v_env_4099_ = lean_ctor_get(v_val_4095_, 3);
lean_inc(v_env_4099_);
v_shell_4100_ = lean_ctor_get(v_val_4095_, 4);
lean_inc(v_shell_4100_);
v_uid_4101_ = lean_ctor_get(v_val_4095_, 5);
lean_inc(v_uid_4101_);
v_gid_4102_ = lean_ctor_get(v_val_4095_, 6);
lean_inc(v_gid_4102_);
v_timeout_4103_ = lean_ctor_get(v_val_4095_, 7);
lean_inc(v_timeout_4103_);
v_killSignal_4104_ = lean_ctor_get(v_val_4095_, 8);
lean_inc(v_killSignal_4104_);
v_maxBuffer_4105_ = lean_ctor_get(v_val_4095_, 9);
lean_inc(v_maxBuffer_4105_);
v_encoding_4106_ = lean_ctor_get(v_val_4095_, 10);
lean_inc(v_encoding_4106_);
v_windowsHide_4107_ = lean_ctor_get(v_val_4095_, 11);
lean_inc(v_windowsHide_4107_);
lean_dec(v_val_4095_);
v___x_4108_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_4109_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_glob_spec__0_spec__0(v_cwd_4096_);
v___x_4110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4110_, 0, v___x_4108_);
lean_ctor_set(v___x_4110_, 1, v___x_4109_);
v___x_4111_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0___closed__0));
v___x_4112_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_net_Socket_end_spec__0(v_input_4097_);
v___x_4113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4113_, 0, v___x_4111_);
lean_ctor_set(v___x_4113_, 1, v___x_4112_);
v___x_4114_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5));
v___x_4115_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFileSync_spec__0_spec__0(v_stdio_4098_);
v___x_4116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4114_);
lean_ctor_set(v___x_4116_, 1, v___x_4115_);
v___x_4117_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_4118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4118_, 0, v___x_4117_);
lean_ctor_set(v___x_4118_, 1, v_env_4099_);
v___x_4119_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
v___x_4120_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_shell_4100_);
v___x_4121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4121_, 0, v___x_4119_);
lean_ctor_set(v___x_4121_, 1, v___x_4120_);
v___x_4122_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
v___x_4123_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_uid_4101_);
v___x_4124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4124_, 0, v___x_4122_);
lean_ctor_set(v___x_4124_, 1, v___x_4123_);
v___x_4125_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_4126_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_gid_4102_);
v___x_4127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4127_, 0, v___x_4125_);
lean_ctor_set(v___x_4127_, 1, v___x_4126_);
v___x_4128_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_4129_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_timeout_4103_);
v___x_4130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4128_);
lean_ctor_set(v___x_4130_, 1, v___x_4129_);
v___x_4131_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_4132_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_4104_);
v___x_4133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4133_, 0, v___x_4131_);
lean_ctor_set(v___x_4133_, 1, v___x_4132_);
v___x_4134_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6));
v___x_4135_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxBuffer_4105_);
v___x_4136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4136_, 0, v___x_4134_);
lean_ctor_set(v___x_4136_, 1, v___x_4135_);
v___x_4137_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2));
v___x_4138_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_4106_);
v___x_4139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4139_, 0, v___x_4137_);
lean_ctor_set(v___x_4139_, 1, v___x_4138_);
v___x_4140_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_4141_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_4107_);
lean_dec(v_windowsHide_4107_);
v___x_4142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4142_, 0, v___x_4140_);
lean_ctor_set(v___x_4142_, 1, v___x_4141_);
v___x_4143_ = lean_unsigned_to_nat(12u);
v___x_4144_ = lean_mk_empty_array_with_capacity(v___x_4143_);
v___x_4145_ = lean_array_push(v___x_4144_, v___x_4110_);
v___x_4146_ = lean_array_push(v___x_4145_, v___x_4113_);
v___x_4147_ = lean_array_push(v___x_4146_, v___x_4116_);
v___x_4148_ = lean_array_push(v___x_4147_, v___x_4118_);
v___x_4149_ = lean_array_push(v___x_4148_, v___x_4121_);
v___x_4150_ = lean_array_push(v___x_4149_, v___x_4124_);
v___x_4151_ = lean_array_push(v___x_4150_, v___x_4127_);
v___x_4152_ = lean_array_push(v___x_4151_, v___x_4130_);
v___x_4153_ = lean_array_push(v___x_4152_, v___x_4133_);
v___x_4154_ = lean_array_push(v___x_4153_, v___x_4136_);
v___x_4155_ = lean_array_push(v___x_4154_, v___x_4139_);
v___x_4156_ = lean_array_push(v___x_4155_, v___x_4142_);
v___x_4157_ = l_Lasm_JS_Web_Support_fields(v___x_4156_);
lean_dec_ref(v___x_4156_);
return v___x_4157_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execSync(lean_object* v_command_4166_, lean_object* v_options_4167_){
_start:
{
uint8_t v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; 
v___x_4169_ = 0;
v___x_4170_ = lean_unsigned_to_nat(2u);
v___x_4171_ = ((lean_object*)(l_Lasm_JS_Node_child__process_execSync___closed__2));
v___x_4172_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4172_, 0, v_command_4166_);
v___x_4173_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execSync_spec__0(v_options_4167_);
v___x_4174_ = lean_mk_empty_array_with_capacity(v___x_4170_);
v___x_4175_ = lean_array_push(v___x_4174_, v___x_4172_);
v___x_4176_ = lean_array_push(v___x_4175_, v___x_4173_);
v___x_4177_ = l_Lasm_JS_Web_Support_args(v___x_4176_);
v___x_4178_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_child__process_execFileSync_spec__1(v___x_4171_, v___x_4177_, v___x_4169_);
return v___x_4178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execSync___boxed(lean_object* v_command_4179_, lean_object* v_options_4180_, lean_object* v_a_4181_){
_start:
{
lean_object* v_res_4182_; 
v_res_4182_ = l_Lasm_JS_Node_child__process_execSync(v_command_4179_, v_options_4180_);
return v_res_4182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawnSync_spec__0(lean_object* v_x_4183_){
_start:
{
if (lean_obj_tag(v_x_4183_) == 0)
{
lean_object* v___x_4184_; 
v___x_4184_ = lean_box(0);
return v___x_4184_;
}
else
{
lean_object* v_val_4185_; lean_object* v_cwd_4186_; lean_object* v_input_4187_; lean_object* v_argv0_4188_; lean_object* v_stdio_4189_; lean_object* v_env_4190_; lean_object* v_uid_4191_; lean_object* v_gid_4192_; lean_object* v_timeout_4193_; lean_object* v_killSignal_4194_; lean_object* v_maxBuffer_4195_; lean_object* v_encoding_4196_; lean_object* v_shell_4197_; lean_object* v_windowsVerbatimArguments_4198_; lean_object* v_windowsHide_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; 
v_val_4185_ = lean_ctor_get(v_x_4183_, 0);
lean_inc(v_val_4185_);
lean_dec_ref_known(v_x_4183_, 1);
v_cwd_4186_ = lean_ctor_get(v_val_4185_, 0);
lean_inc(v_cwd_4186_);
v_input_4187_ = lean_ctor_get(v_val_4185_, 1);
lean_inc(v_input_4187_);
v_argv0_4188_ = lean_ctor_get(v_val_4185_, 2);
lean_inc(v_argv0_4188_);
v_stdio_4189_ = lean_ctor_get(v_val_4185_, 3);
lean_inc(v_stdio_4189_);
v_env_4190_ = lean_ctor_get(v_val_4185_, 4);
lean_inc(v_env_4190_);
v_uid_4191_ = lean_ctor_get(v_val_4185_, 5);
lean_inc(v_uid_4191_);
v_gid_4192_ = lean_ctor_get(v_val_4185_, 6);
lean_inc(v_gid_4192_);
v_timeout_4193_ = lean_ctor_get(v_val_4185_, 7);
lean_inc(v_timeout_4193_);
v_killSignal_4194_ = lean_ctor_get(v_val_4185_, 8);
lean_inc(v_killSignal_4194_);
v_maxBuffer_4195_ = lean_ctor_get(v_val_4185_, 9);
lean_inc(v_maxBuffer_4195_);
v_encoding_4196_ = lean_ctor_get(v_val_4185_, 10);
lean_inc(v_encoding_4196_);
v_shell_4197_ = lean_ctor_get(v_val_4185_, 11);
lean_inc(v_shell_4197_);
v_windowsVerbatimArguments_4198_ = lean_ctor_get(v_val_4185_, 12);
lean_inc(v_windowsVerbatimArguments_4198_);
v_windowsHide_4199_ = lean_ctor_get(v_val_4185_, 13);
lean_inc(v_windowsHide_4199_);
lean_dec(v_val_4185_);
v___x_4200_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__0));
v___x_4201_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_glob_spec__0_spec__0(v_cwd_4186_);
v___x_4202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4202_, 0, v___x_4200_);
lean_ctor_set(v___x_4202_, 1, v___x_4201_);
v___x_4203_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileSyncOptions___lam__0___closed__0));
v___x_4204_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_net_Socket_end_spec__0(v_input_4187_);
v___x_4205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4205_, 0, v___x_4203_);
lean_ctor_set(v___x_4205_, 1, v___x_4204_);
v___x_4206_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0));
v___x_4207_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_argv0_4188_);
v___x_4208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4208_, 0, v___x_4206_);
lean_ctor_set(v___x_4208_, 1, v___x_4207_);
v___x_4209_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processForkOptions___lam__0___closed__5));
v___x_4210_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFileSync_spec__0_spec__0(v_stdio_4189_);
v___x_4211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4211_, 0, v___x_4209_);
lean_ctor_set(v___x_4211_, 1, v___x_4210_);
v___x_4212_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__1));
v___x_4213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4213_, 0, v___x_4212_);
lean_ctor_set(v___x_4213_, 1, v_env_4190_);
v___x_4214_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__8));
v___x_4215_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_uid_4191_);
v___x_4216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4216_, 0, v___x_4214_);
lean_ctor_set(v___x_4216_, 1, v___x_4215_);
v___x_4217_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__9));
v___x_4218_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_gid_4192_);
v___x_4219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4219_, 0, v___x_4217_);
lean_ctor_set(v___x_4219_, 1, v___x_4218_);
v___x_4220_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__5));
v___x_4221_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_timeout_4193_);
v___x_4222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4222_, 0, v___x_4220_);
lean_ctor_set(v___x_4222_, 1, v___x_4221_);
v___x_4223_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__7));
v___x_4224_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_4194_);
v___x_4225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4225_, 0, v___x_4223_);
lean_ctor_set(v___x_4225_, 1, v___x_4224_);
v___x_4226_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__6));
v___x_4227_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxBuffer_4195_);
v___x_4228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4228_, 0, v___x_4226_);
lean_ctor_set(v___x_4228_, 1, v___x_4227_);
v___x_4229_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__2));
v___x_4230_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_encoding_4196_);
v___x_4231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4231_, 0, v___x_4229_);
lean_ctor_set(v___x_4231_, 1, v___x_4230_);
v___x_4232_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__3));
v___x_4233_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0_spec__1(v_shell_4197_);
v___x_4234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4234_, 0, v___x_4232_);
lean_ctor_set(v___x_4234_, 1, v___x_4233_);
v___x_4235_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_4236_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_4198_);
lean_dec(v_windowsVerbatimArguments_4198_);
v___x_4237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4237_, 0, v___x_4235_);
lean_ctor_set(v___x_4237_, 1, v___x_4236_);
v___x_4238_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecOptions___lam__0___closed__10));
v___x_4239_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_4199_);
lean_dec(v_windowsHide_4199_);
v___x_4240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4238_);
lean_ctor_set(v___x_4240_, 1, v___x_4239_);
v___x_4241_ = lean_unsigned_to_nat(14u);
v___x_4242_ = lean_mk_empty_array_with_capacity(v___x_4241_);
v___x_4243_ = lean_array_push(v___x_4242_, v___x_4202_);
v___x_4244_ = lean_array_push(v___x_4243_, v___x_4205_);
v___x_4245_ = lean_array_push(v___x_4244_, v___x_4208_);
v___x_4246_ = lean_array_push(v___x_4245_, v___x_4211_);
v___x_4247_ = lean_array_push(v___x_4246_, v___x_4213_);
v___x_4248_ = lean_array_push(v___x_4247_, v___x_4216_);
v___x_4249_ = lean_array_push(v___x_4248_, v___x_4219_);
v___x_4250_ = lean_array_push(v___x_4249_, v___x_4222_);
v___x_4251_ = lean_array_push(v___x_4250_, v___x_4225_);
v___x_4252_ = lean_array_push(v___x_4251_, v___x_4228_);
v___x_4253_ = lean_array_push(v___x_4252_, v___x_4231_);
v___x_4254_ = lean_array_push(v___x_4253_, v___x_4234_);
v___x_4255_ = lean_array_push(v___x_4254_, v___x_4237_);
v___x_4256_ = lean_array_push(v___x_4255_, v___x_4240_);
v___x_4257_ = l_Lasm_JS_Web_Support_fields(v___x_4256_);
lean_dec_ref(v___x_4256_);
return v___x_4257_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawnSync(lean_object* v_command_4266_, lean_object* v_args_4267_, lean_object* v_options_4268_){
_start:
{
uint8_t v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; 
v___x_4270_ = 0;
v___x_4271_ = lean_unsigned_to_nat(3u);
v___x_4272_ = ((lean_object*)(l_Lasm_JS_Node_child__process_spawnSync___closed__2));
v___x_4273_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4273_, 0, v_command_4266_);
v___x_4274_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(v_args_4267_);
v___x_4275_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawnSync_spec__0(v_options_4268_);
v___x_4276_ = lean_mk_empty_array_with_capacity(v___x_4271_);
v___x_4277_ = lean_array_push(v___x_4276_, v___x_4273_);
v___x_4278_ = lean_array_push(v___x_4277_, v___x_4274_);
v___x_4279_ = lean_array_push(v___x_4278_, v___x_4275_);
v___x_4280_ = l_Lasm_JS_Web_Support_args(v___x_4279_);
v___x_4281_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(v___x_4272_, v___x_4280_, v___x_4270_);
return v___x_4281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawnSync___boxed(lean_object* v_command_4282_, lean_object* v_args_4283_, lean_object* v_options_4284_, lean_object* v_a_4285_){
_start:
{
lean_object* v_res_4286_; 
v_res_4286_ = l_Lasm_JS_Node_child__process_spawnSync(v_command_4282_, v_args_4283_, v_options_4284_);
return v_res_4286_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Events(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Stream(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Buffer(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Net(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Process(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Fs(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_ChildProcess(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Events(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Buffer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Process(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Fs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instToJSChild__processExecFileOptions = _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSChild__processExecFileOptions);
l_Lasm_JS_Node_instFromJSChild__processExecFileResult = _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSChild__processExecFileResult);
l_Lasm_JS_Node_instToJSChild__processForkOptions = _init_l_Lasm_JS_Node_instToJSChild__processForkOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSChild__processForkOptions);
l_Lasm_JS_Node_instToJSChild__processSpawnOptions = _init_l_Lasm_JS_Node_instToJSChild__processSpawnOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSChild__processSpawnOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
