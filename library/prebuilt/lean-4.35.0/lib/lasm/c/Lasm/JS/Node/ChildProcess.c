// Lean compiler output
// Module: Lasm.JS.Node.ChildProcess
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Node.Events public import Lasm.JS.Node.Stream public import Lasm.JS.Node.Buffer public import Lasm.JS.Node.Fs
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
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1_spec__2(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSRecord___redArg(lean_object*);
lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array;
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDoubleOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDoubleOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDoubleOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSDoubleOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSBooleanOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringBooleanOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cwd"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "env"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "encoding"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timeout"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "maxBuffer"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "killSignal"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "uid"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gid"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "windowsHide"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "windowsVerbatimArguments"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "shell"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__3_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__4_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__5 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__5_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__6 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__6_value;
static lean_once_cell_t l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__7;
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
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "argv0"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stdio"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "detached"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "serialization"};
static const lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_signalCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "signalCode"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_signalCode___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_signalCode___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_ChildProcess_kill___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kill"};
static const lean_object* l_Lasm_JS_Node_ChildProcess_kill___closed__0 = (const lean_object*)&l_Lasm_JS_Node_ChildProcess_kill___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.Support.promisified"};
static const lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "node:util"};
static const lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "promisify"};
static const lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__1_value),((lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.DOMStringOrUint8Array"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "call"};
static const lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_child__process_execFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "node:child_process"};
static const lean_object* l_Lasm_JS_Node_child__process_execFile___closed__0 = (const lean_object*)&l_Lasm_JS_Node_child__process_execFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_child__process_execFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "execFile"};
static const lean_object* l_Lasm_JS_Node_child__process_execFile___closed__1 = (const lean_object*)&l_Lasm_JS_Node_child__process_execFile___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_child__process_spawn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.child_process.spawn"};
static const lean_object* l_Lasm_JS_Node_child__process_spawn___closed__0 = (const lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_child__process_spawn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__0_value),((lean_object*)&l_Lasm_JS_Node_child__process_execFile___closed__0_value),((lean_object*)&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_child__process_spawn___closed__1 = (const lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg(lean_object* v_d_674_){
_start:
{
switch(lean_obj_tag(v_d_674_))
{
case 1:
{
goto v___jp_676_;
}
case 0:
{
goto v___jp_676_;
}
default: 
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_679_, 0, v_d_674_);
v___x_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
return v___x_680_;
}
}
v___jp_676_:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_box(0);
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
return v___x_678_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg___boxed(lean_object* v_d_681_, lean_object* v_a_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg(v_d_681_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(lean_object* v_args_684_, lean_object* v_i_685_){
_start:
{
lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_687_ = lean_array_get_size(v_args_684_);
v___x_688_ = lean_nat_dec_lt(v_i_685_, v___x_687_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = lean_box(0);
v___x_690_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg(v___x_689_);
return v___x_690_;
}
else
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_array_fget_borrowed(v_args_684_, v_i_685_);
lean_inc(v___x_691_);
v___x_692_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg(v___x_691_);
return v___x_692_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0___boxed(lean_object* v_args_693_, lean_object* v_i_694_, lean_object* v_a_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(v_args_693_, v_i_694_);
lean_dec(v_i_694_);
lean_dec_ref(v_args_693_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0(lean_object* v_f_697_, lean_object* v___f_698_, lean_object* v_args_699_, lean_object* v_x_700_){
_start:
{
if (lean_obj_tag(v_x_700_) == 0)
{
lean_object* v___x_702_; 
lean_dec_ref(v___f_698_);
lean_dec_ref(v_f_697_);
v___x_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_702_, 0, v_x_700_);
return v___x_702_;
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_720_; 
v_a_703_ = lean_ctor_get(v_x_700_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v_x_700_);
if (v_isSharedCheck_720_ == 0)
{
v___x_705_ = v_x_700_;
v_isShared_706_ = v_isSharedCheck_720_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v_x_700_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_720_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___f_707_; lean_object* v___x_708_; lean_object* v___x_709_; uint8_t v___x_710_; lean_object* v_val_712_; lean_object* v___x_715_; lean_object* v_a_716_; lean_object* v___x_718_; 
v___f_707_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_707_, 0, v_f_697_);
lean_closure_set(v___f_707_, 1, v_a_703_);
lean_closure_set(v___f_707_, 2, v___f_698_);
v___x_708_ = lean_unsigned_to_nat(1u);
v___x_709_ = lean_unsigned_to_nat(0u);
v___x_710_ = 0;
v___x_715_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(v_args_699_, v___x_708_);
v_a_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_716_);
lean_dec_ref(v___x_715_);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 0, v_a_716_);
v___x_718_ = v___x_705_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_716_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v___jp_711_:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_713_, 0, v_val_712_);
v___x_714_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_709_, v___x_710_, v___x_713_, v___f_707_);
return v___x_714_;
}
v_reusejp_717_:
{
v_val_712_ = v___x_718_;
goto v___jp_711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0___boxed(lean_object* v_f_721_, lean_object* v___f_722_, lean_object* v_args_723_, lean_object* v_x_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0(v_f_721_, v___f_722_, v_args_723_, v_x_724_);
lean_dec_ref(v_args_723_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2(lean_object* v_f_727_, lean_object* v___f_728_, lean_object* v_args_729_){
_start:
{
lean_object* v___f_731_; lean_object* v___x_732_; uint8_t v___x_733_; lean_object* v_val_735_; lean_object* v___x_738_; lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_inc_ref(v_args_729_);
v___f_731_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_731_, 0, v_f_727_);
lean_closure_set(v___f_731_, 1, v___f_728_);
lean_closure_set(v___f_731_, 2, v_args_729_);
v___x_732_ = lean_unsigned_to_nat(0u);
v___x_733_ = 0;
v___x_738_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_729_, v___x_732_);
lean_dec_ref(v_args_729_);
v_a_739_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_738_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_738_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v___jp_734_:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v_val_735_);
v___x_737_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_732_, v___x_733_, v___x_736_, v___f_731_);
return v___x_737_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
lean_ctor_set_tag(v___x_741_, 1);
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
v_val_735_ = v___x_744_;
goto v___jp_734_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2___boxed(lean_object* v_f_747_, lean_object* v___f_748_, lean_object* v_args_749_, lean_object* v___y_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2(v_f_747_, v___f_748_, v_args_749_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn(lean_object* v_f_752_){
_start:
{
lean_object* v___f_754_; lean_object* v___f_755_; lean_object* v___x_756_; 
v___f_754_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_755_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_755_, 0, v_f_752_);
lean_closure_set(v___f_755_, 1, v___f_754_);
v___x_756_ = l_Lasm_JS_Function_ofFn(v___f_755_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_756_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_756_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
v_a_765_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_756_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_756_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___boxed(lean_object* v_f_773_, lean_object* v_a_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn(v_f_773_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0(lean_object* v_context_776_, lean_object* v_d_777_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg(v_d_777_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___boxed(lean_object* v_context_780_, lean_object* v_d_781_, lean_object* v_a_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0(v_context_780_, v_d_781_);
lean_dec_ref(v_context_780_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0(lean_object* v_f_784_, lean_object* v_args_785_){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v_a_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v_a_792_; lean_object* v___x_793_; 
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_785_, v___x_787_);
v_a_789_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_789_);
lean_dec_ref(v___x_788_);
v___x_790_ = lean_unsigned_to_nat(1u);
v___x_791_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(v_args_785_, v___x_790_);
v_a_792_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_a_792_);
lean_dec_ref(v___x_791_);
v___x_793_ = lean_apply_3(v_f_784_, v_a_789_, v_a_792_, lean_box(0));
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_801_; 
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_801_ == 0)
{
lean_object* v_unused_802_; 
v_unused_802_ = lean_ctor_get(v___x_793_, 0);
lean_dec(v_unused_802_);
v___x_795_ = v___x_793_;
v_isShared_796_ = v_isSharedCheck_801_;
goto v_resetjp_794_;
}
else
{
lean_dec(v___x_793_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_801_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_797_; lean_object* v___x_799_; 
v___x_797_ = lean_box(0);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_797_);
v___x_799_ = v___x_795_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_797_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
else
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_810_; 
v_a_803_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_810_ == 0)
{
v___x_805_ = v___x_793_;
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_793_);
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
v_reuseFailAlloc_809_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0___boxed(lean_object* v_f_811_, lean_object* v_args_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0(v_f_811_, v_args_812_);
lean_dec_ref(v_args_812_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn(lean_object* v_f_815_){
_start:
{
lean_object* v___f_817_; lean_object* v___x_818_; 
v___f_817_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_817_, 0, v_f_815_);
v___x_818_ = l_Lasm_JS_Function_ofSyncFn(v___f_817_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_818_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_818_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
else
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
v_a_827_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_818_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_818_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___boxed(lean_object* v_f_835_, lean_object* v_a_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn(v_f_835_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofFn(lean_object* v_f_845_){
_start:
{
lean_object* v___f_847_; lean_object* v___f_848_; lean_object* v___x_849_; 
v___f_847_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_848_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_848_, 0, v_f_845_);
lean_closure_set(v___f_848_, 1, v___f_847_);
v___x_849_ = l_Lasm_JS_Function_ofFn(v___f_848_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_849_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_849_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
v_a_858_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_849_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_849_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofFn___boxed(lean_object* v_f_866_, lean_object* v_a_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lasm_JS_Node_ChildProcess_SpawnListener_ofFn(v_f_866_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofSyncFn(lean_object* v_f_869_){
_start:
{
lean_object* v___f_871_; lean_object* v___x_872_; 
v___f_871_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_871_, 0, v_f_869_);
v___x_872_ = l_Lasm_JS_Function_ofSyncFn(v___f_871_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
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
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
v_a_881_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_872_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_872_);
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
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofSyncFn___boxed(lean_object* v_f_889_, lean_object* v_a_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Lasm_JS_Node_ChildProcess_SpawnListener_ofSyncFn(v_f_889_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx(lean_object* v_x_892_){
_start:
{
if (lean_obj_tag(v_x_892_) == 0)
{
lean_object* v___x_893_; 
v___x_893_ = lean_unsigned_to_nat(0u);
return v___x_893_;
}
else
{
lean_object* v___x_894_; 
v___x_894_ = lean_unsigned_to_nat(1u);
return v___x_894_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx___boxed(lean_object* v_x_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx(v_x_895_);
lean_dec_ref(v_x_895_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(lean_object* v_t_897_, lean_object* v_k_898_){
_start:
{
if (lean_obj_tag(v_t_897_) == 0)
{
double v_value_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v_value_899_ = lean_ctor_get_float(v_t_897_, 0);
lean_dec_ref_known(v_t_897_, 0);
v___x_900_ = lean_box_float(v_value_899_);
v___x_901_ = lean_apply_1(v_k_898_, v___x_900_);
return v___x_901_;
}
else
{
lean_object* v_value_902_; lean_object* v___x_903_; 
v_value_902_ = lean_ctor_get(v_t_897_, 0);
lean_inc_ref(v_value_902_);
lean_dec_ref_known(v_t_897_, 1);
v___x_903_ = lean_apply_1(v_k_898_, v_value_902_);
return v___x_903_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(lean_object* v_motive_904_, lean_object* v_ctorIdx_905_, lean_object* v_t_906_, lean_object* v_h_907_, lean_object* v_k_908_){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_906_, v_k_908_);
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___boxed(lean_object* v_motive_910_, lean_object* v_ctorIdx_911_, lean_object* v_t_912_, lean_object* v_h_913_, lean_object* v_k_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(v_motive_910_, v_ctorIdx_911_, v_t_912_, v_h_913_, v_k_914_);
lean_dec(v_ctorIdx_911_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim___redArg(lean_object* v_t_916_, lean_object* v_double_917_){
_start:
{
lean_object* v___x_918_; 
v___x_918_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_916_, v_double_917_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim(lean_object* v_motive_919_, lean_object* v_t_920_, lean_object* v_h_921_, lean_object* v_double_922_){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_920_, v_double_922_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim___redArg(lean_object* v_t_924_, lean_object* v_domString_925_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_924_, v_domString_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim(lean_object* v_motive_927_, lean_object* v_t_928_, lean_object* v_h_929_, lean_object* v_domString_930_){
_start:
{
lean_object* v___x_931_; 
v___x_931_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_928_, v_domString_930_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMString___lam__0(lean_object* v_x_932_){
_start:
{
if (lean_obj_tag(v_x_932_) == 0)
{
double v_value_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
v_value_933_ = lean_ctor_get_float(v_x_932_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v_x_932_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v_x_932_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_dec(v_x_932_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
lean_ctor_set_tag(v___x_935_, 3);
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_939_, 0, v_value_933_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
else
{
lean_object* v_value_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
v_value_941_ = lean_ctor_get(v_x_932_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v_x_932_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v_x_932_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_value_941_);
lean_dec(v_x_932_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set_tag(v___x_943_, 4);
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_value_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(double v_value_951_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_952_, 0, v_value_951_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0___boxed(lean_object* v_value_953_){
_start:
{
double v_value_boxed_954_; lean_object* v_res_955_; 
v_value_boxed_954_ = lean_unbox_float(v_value_953_);
lean_dec_ref(v_value_953_);
v_res_955_ = l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(v_value_boxed_954_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___lam__0(lean_object* v_value_958_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_959_, 0, v_value_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx(lean_object* v_x_962_){
_start:
{
if (lean_obj_tag(v_x_962_) == 0)
{
lean_object* v___x_963_; 
v___x_963_ = lean_unsigned_to_nat(0u);
return v___x_963_;
}
else
{
lean_object* v___x_964_; 
v___x_964_ = lean_unsigned_to_nat(1u);
return v___x_964_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx___boxed(lean_object* v_x_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx(v_x_965_);
lean_dec_ref(v_x_965_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(lean_object* v_t_967_, lean_object* v_k_968_){
_start:
{
if (lean_obj_tag(v_t_967_) == 0)
{
uint8_t v_value_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v_value_969_ = lean_ctor_get_uint8(v_t_967_, 0);
lean_dec_ref_known(v_t_967_, 0);
v___x_970_ = lean_box(v_value_969_);
v___x_971_ = lean_apply_1(v_k_968_, v___x_970_);
return v___x_971_;
}
else
{
lean_object* v_value_972_; lean_object* v___x_973_; 
v_value_972_ = lean_ctor_get(v_t_967_, 0);
lean_inc_ref(v_value_972_);
lean_dec_ref_known(v_t_967_, 1);
v___x_973_ = lean_apply_1(v_k_968_, v_value_972_);
return v___x_973_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(lean_object* v_motive_974_, lean_object* v_ctorIdx_975_, lean_object* v_t_976_, lean_object* v_h_977_, lean_object* v_k_978_){
_start:
{
lean_object* v___x_979_; 
v___x_979_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_976_, v_k_978_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___boxed(lean_object* v_motive_980_, lean_object* v_ctorIdx_981_, lean_object* v_t_982_, lean_object* v_h_983_, lean_object* v_k_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(v_motive_980_, v_ctorIdx_981_, v_t_982_, v_h_983_, v_k_984_);
lean_dec(v_ctorIdx_981_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim___redArg(lean_object* v_t_986_, lean_object* v_boolean_987_){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_986_, v_boolean_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim(lean_object* v_motive_989_, lean_object* v_t_990_, lean_object* v_h_991_, lean_object* v_boolean_992_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_990_, v_boolean_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim___redArg(lean_object* v_t_994_, lean_object* v_domString_995_){
_start:
{
lean_object* v___x_996_; 
v___x_996_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_994_, v_domString_995_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim(lean_object* v_motive_997_, lean_object* v_t_998_, lean_object* v_h_999_, lean_object* v_domString_1000_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_998_, v_domString_1000_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString___lam__0(lean_object* v_x_1002_){
_start:
{
if (lean_obj_tag(v_x_1002_) == 0)
{
uint8_t v_value_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
v_value_1003_ = lean_ctor_get_uint8(v_x_1002_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_x_1002_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v_x_1002_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_dec(v_x_1002_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
lean_ctor_set_tag(v___x_1005_, 2);
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1009_, 0, v_value_1003_);
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
lean_object* v_value_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
v_value_1011_ = lean_ctor_get(v_x_1002_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_x_1002_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v_x_1002_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_value_1011_);
lean_dec(v_x_1002_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
lean_ctor_set_tag(v___x_1013_, 4);
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_value_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(uint8_t v_value_1021_){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1022_, 0, v_value_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0___boxed(lean_object* v_value_1023_){
_start:
{
uint8_t v_value_boxed_1024_; lean_object* v_res_1025_; 
v_value_boxed_1024_ = lean_unbox(v_value_1023_);
v_res_1025_ = l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(v_value_boxed_1024_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___lam__0(lean_object* v_value_1028_){
_start:
{
lean_object* v___x_1029_; 
v___x_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1029_, 0, v_value_1028_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0(lean_object* v___f_1044_, lean_object* v___x_1045_, lean_object* v___f_1046_, lean_object* v___f_1047_, lean_object* v___f_1048_, lean_object* v___f_1049_, lean_object* v___f_1050_, lean_object* v___f_1051_, lean_object* v_d_1052_){
_start:
{
lean_object* v_cwd_1053_; lean_object* v_env_1054_; lean_object* v_encoding_1055_; lean_object* v_timeout_1056_; lean_object* v_maxBuffer_1057_; lean_object* v_killSignal_1058_; lean_object* v_uid_1059_; lean_object* v_gid_1060_; lean_object* v_windowsHide_1061_; lean_object* v_windowsVerbatimArguments_1062_; lean_object* v_shell_1063_; lean_object* v_signal_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v_cwd_1053_ = lean_ctor_get(v_d_1052_, 0);
lean_inc(v_cwd_1053_);
v_env_1054_ = lean_ctor_get(v_d_1052_, 1);
lean_inc(v_env_1054_);
v_encoding_1055_ = lean_ctor_get(v_d_1052_, 2);
lean_inc(v_encoding_1055_);
v_timeout_1056_ = lean_ctor_get(v_d_1052_, 3);
lean_inc(v_timeout_1056_);
v_maxBuffer_1057_ = lean_ctor_get(v_d_1052_, 4);
lean_inc(v_maxBuffer_1057_);
v_killSignal_1058_ = lean_ctor_get(v_d_1052_, 5);
lean_inc(v_killSignal_1058_);
v_uid_1059_ = lean_ctor_get(v_d_1052_, 6);
lean_inc(v_uid_1059_);
v_gid_1060_ = lean_ctor_get(v_d_1052_, 7);
lean_inc(v_gid_1060_);
v_windowsHide_1061_ = lean_ctor_get(v_d_1052_, 8);
lean_inc(v_windowsHide_1061_);
v_windowsVerbatimArguments_1062_ = lean_ctor_get(v_d_1052_, 9);
lean_inc(v_windowsVerbatimArguments_1062_);
v_shell_1063_ = lean_ctor_get(v_d_1052_, 10);
lean_inc(v_shell_1063_);
v_signal_1064_ = lean_ctor_get(v_d_1052_, 11);
lean_inc(v_signal_1064_);
lean_dec_ref(v_d_1052_);
v___x_1065_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_1066_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1044_, v_cwd_1053_);
v___x_1067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1));
v___x_1069_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1045_, v_env_1054_);
v___x_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1068_);
lean_ctor_set(v___x_1070_, 1, v___x_1069_);
v___x_1071_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__2));
v___x_1072_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1046_, v_encoding_1055_);
v___x_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1071_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3));
lean_inc_ref_n(v___f_1047_, 3);
v___x_1075_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1047_, v_timeout_1056_);
v___x_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1074_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
v___x_1077_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__4));
v___x_1078_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1047_, v_maxBuffer_1057_);
v___x_1079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1077_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5));
v___x_1081_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1048_, v_killSignal_1058_);
v___x_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1080_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6));
v___x_1084_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1047_, v_uid_1059_);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1083_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7));
v___x_1087_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1047_, v_gid_1060_);
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8));
lean_inc_ref(v___f_1049_);
v___x_1090_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1049_, v_windowsHide_1061_);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9));
v___x_1093_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1049_, v_windowsVerbatimArguments_1062_);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1092_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10));
v___x_1096_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1050_, v_shell_1063_);
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11));
v___x_1099_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1051_, v_signal_1064_);
v___x_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = lean_unsigned_to_nat(12u);
v___x_1102_ = lean_mk_empty_array_with_capacity(v___x_1101_);
v___x_1103_ = lean_array_push(v___x_1102_, v___x_1067_);
v___x_1104_ = lean_array_push(v___x_1103_, v___x_1070_);
v___x_1105_ = lean_array_push(v___x_1104_, v___x_1073_);
v___x_1106_ = lean_array_push(v___x_1105_, v___x_1076_);
v___x_1107_ = lean_array_push(v___x_1106_, v___x_1079_);
v___x_1108_ = lean_array_push(v___x_1107_, v___x_1082_);
v___x_1109_ = lean_array_push(v___x_1108_, v___x_1085_);
v___x_1110_ = lean_array_push(v___x_1109_, v___x_1088_);
v___x_1111_ = lean_array_push(v___x_1110_, v___x_1091_);
v___x_1112_ = lean_array_push(v___x_1111_, v___x_1094_);
v___x_1113_ = lean_array_push(v___x_1112_, v___x_1097_);
v___x_1114_ = lean_array_push(v___x_1113_, v___x_1100_);
v___x_1115_ = l_Lasm_JS_Web_Support_fields(v___x_1114_);
lean_dec_ref(v___x_1114_);
return v___x_1115_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2(void){
_start:
{
lean_object* v___f_1118_; lean_object* v___x_1119_; 
v___f_1118_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1));
v___x_1119_ = l_Lasm_JS_Web_instToJSRecord___redArg(v___f_1118_);
return v___x_1119_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__7(void){
_start:
{
lean_object* v___f_1124_; lean_object* v___f_1125_; lean_object* v___f_1126_; lean_object* v___f_1127_; lean_object* v___f_1128_; lean_object* v___f_1129_; lean_object* v___x_1130_; lean_object* v___f_1131_; lean_object* v___f_1132_; 
v___f_1124_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__6));
v___f_1125_ = ((lean_object*)(l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0));
v___f_1126_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__5));
v___f_1127_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__4));
v___f_1128_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__3));
v___f_1129_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1));
v___x_1130_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2, &l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2_once, _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2);
v___f_1131_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0));
v___f_1132_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0), 9, 8);
lean_closure_set(v___f_1132_, 0, v___f_1131_);
lean_closure_set(v___f_1132_, 1, v___x_1130_);
lean_closure_set(v___f_1132_, 2, v___f_1129_);
lean_closure_set(v___f_1132_, 3, v___f_1128_);
lean_closure_set(v___f_1132_, 4, v___f_1127_);
lean_closure_set(v___f_1132_, 5, v___f_1126_);
lean_closure_set(v___f_1132_, 6, v___f_1125_);
lean_closure_set(v___f_1132_, 7, v___f_1124_);
return v___f_1132_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions(void){
_start:
{
lean_object* v___f_1133_; 
v___f_1133_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__7, &l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__7_once, _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__7);
return v___f_1133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0(lean_object* v___x_1136_, lean_object* v_d_1137_){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0));
lean_inc_ref(v___x_1136_);
v___x_1139_ = l_Lasm_JS_readField___redArg(v___x_1136_, v_d_1137_, v___x_1138_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
lean_dec_ref(v___x_1136_);
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1142_ = v___x_1139_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1139_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1143_ == 0)
{
v___x_1145_ = v___x_1142_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_a_1140_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
else
{
lean_object* v_a_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v_a_1148_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_a_1148_);
lean_dec_ref_known(v___x_1139_, 1);
v___x_1149_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1));
v___x_1150_ = l_Lasm_JS_readField___redArg(v___x_1136_, v_d_1137_, v___x_1149_);
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
lean_dec(v_a_1148_);
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1150_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1150_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1167_; 
v_a_1159_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1161_ = v___x_1150_;
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1150_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1163_, 0, v_a_1148_);
lean_ctor_set(v___x_1163_, 1, v_a_1159_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 0, v___x_1163_);
v___x_1165_ = v___x_1161_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1163_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___boxed(lean_object* v___x_1168_, lean_object* v_d_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0(v___x_1168_, v_d_1169_);
lean_dec(v_d_1169_);
return v_res_1170_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0(void){
_start:
{
lean_object* v___x_1171_; lean_object* v___f_1172_; 
v___x_1171_ = l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array;
v___f_1172_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1172_, 0, v___x_1171_);
return v___f_1172_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2(void){
_start:
{
uint8_t v___x_1174_; lean_object* v___x_1175_; lean_object* v___f_1176_; lean_object* v___x_1177_; 
v___x_1174_ = 0;
v___x_1175_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__1));
v___f_1176_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0, &l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0_once, _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0);
v___x_1177_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1177_, 0, v___f_1176_);
lean_ctor_set(v___x_1177_, 1, v___x_1175_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*2, v___x_1174_);
return v___x_1177_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult(void){
_start:
{
lean_object* v___x_1178_; 
v___x_1178_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2, &l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2_once, _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx(lean_object* v_x_1179_){
_start:
{
if (lean_obj_tag(v_x_1179_) == 0)
{
lean_object* v___x_1180_; 
v___x_1180_ = lean_unsigned_to_nat(0u);
return v___x_1180_;
}
else
{
lean_object* v___x_1181_; 
v___x_1181_ = lean_unsigned_to_nat(1u);
return v___x_1181_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx___boxed(lean_object* v_x_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx(v_x_1182_);
lean_dec_ref(v_x_1182_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(lean_object* v_t_1184_, lean_object* v_k_1185_){
_start:
{
lean_object* v_value_1186_; lean_object* v___x_1187_; 
v_value_1186_ = lean_ctor_get(v_t_1184_, 0);
lean_inc_ref(v_value_1186_);
lean_dec_ref(v_t_1184_);
v___x_1187_ = lean_apply_1(v_k_1185_, v_value_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim(lean_object* v_motive_1188_, lean_object* v_ctorIdx_1189_, lean_object* v_t_1190_, lean_object* v_h_1191_, lean_object* v_k_1192_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1190_, v_k_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___boxed(lean_object* v_motive_1194_, lean_object* v_ctorIdx_1195_, lean_object* v_t_1196_, lean_object* v_h_1197_, lean_object* v_k_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim(v_motive_1194_, v_ctorIdx_1195_, v_t_1196_, v_h_1197_, v_k_1198_);
lean_dec(v_ctorIdx_1195_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim___redArg(lean_object* v_t_1200_, lean_object* v_sequence_1201_){
_start:
{
lean_object* v___x_1202_; 
v___x_1202_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1200_, v_sequence_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim(lean_object* v_motive_1203_, lean_object* v_t_1204_, lean_object* v_h_1205_, lean_object* v_sequence_1206_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1204_, v_sequence_1206_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim___redArg(lean_object* v_t_1208_, lean_object* v_domString_1209_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1208_, v_domString_1209_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim(lean_object* v_motive_1211_, lean_object* v_t_1212_, lean_object* v_h_1213_, lean_object* v_domString_1214_){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1212_, v_domString_1214_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0(lean_object* v_x_1216_){
_start:
{
lean_inc(v_x_1216_);
return v_x_1216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0___boxed(lean_object* v_x_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0(v_x_1217_);
lean_dec(v_x_1217_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1(lean_object* v___f_1238_, lean_object* v_x_1239_){
_start:
{
if (lean_obj_tag(v_x_1239_) == 0)
{
lean_object* v_value_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1251_; 
v_value_1240_ = lean_ctor_get(v_x_1239_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v_x_1239_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1242_ = v_x_1239_;
v_isShared_1243_ = v_isSharedCheck_1251_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_value_1240_);
lean_dec(v_x_1239_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1251_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1244_; size_t v_sz_1245_; size_t v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
v___x_1244_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__9));
v_sz_1245_ = lean_array_size(v_value_1240_);
v___x_1246_ = ((size_t)0ULL);
v___x_1247_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1244_, v___f_1238_, v_sz_1245_, v___x_1246_, v_value_1240_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set_tag(v___x_1242_, 7);
lean_ctor_set(v___x_1242_, 0, v___x_1247_);
v___x_1249_ = v___x_1242_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v___x_1247_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
else
{
lean_object* v_value_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
lean_dec_ref(v___f_1238_);
v_value_1252_ = lean_ctor_get(v_x_1239_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v_x_1239_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v_x_1239_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_value_1252_);
lean_dec(v_x_1239_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set_tag(v___x_1254_, 4);
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_value_1252_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString___lam__0(lean_object* v_value_1264_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1265_, 0, v_value_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString___lam__0(lean_object* v_value_1268_){
_start:
{
lean_object* v___x_1269_; 
v___x_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1269_, 0, v_value_1268_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0(lean_object* v___f_1276_, lean_object* v___x_1277_, lean_object* v___f_1278_, lean_object* v___x_1279_, lean_object* v___f_1280_, lean_object* v___f_1281_, lean_object* v___f_1282_, lean_object* v___f_1283_, lean_object* v___f_1284_, lean_object* v_d_1285_){
_start:
{
lean_object* v_cwd_1286_; lean_object* v_env_1287_; lean_object* v_argv0_1288_; lean_object* v_stdio_1289_; lean_object* v_detached_1290_; lean_object* v_uid_1291_; lean_object* v_gid_1292_; lean_object* v_serialization_1293_; lean_object* v_shell_1294_; lean_object* v_windowsVerbatimArguments_1295_; lean_object* v_windowsHide_1296_; lean_object* v_signal_1297_; lean_object* v_timeout_1298_; lean_object* v_killSignal_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v_cwd_1286_ = lean_ctor_get(v_d_1285_, 0);
lean_inc(v_cwd_1286_);
v_env_1287_ = lean_ctor_get(v_d_1285_, 1);
lean_inc(v_env_1287_);
v_argv0_1288_ = lean_ctor_get(v_d_1285_, 2);
lean_inc(v_argv0_1288_);
v_stdio_1289_ = lean_ctor_get(v_d_1285_, 3);
lean_inc(v_stdio_1289_);
v_detached_1290_ = lean_ctor_get(v_d_1285_, 4);
lean_inc(v_detached_1290_);
v_uid_1291_ = lean_ctor_get(v_d_1285_, 5);
lean_inc(v_uid_1291_);
v_gid_1292_ = lean_ctor_get(v_d_1285_, 6);
lean_inc(v_gid_1292_);
v_serialization_1293_ = lean_ctor_get(v_d_1285_, 7);
lean_inc(v_serialization_1293_);
v_shell_1294_ = lean_ctor_get(v_d_1285_, 8);
lean_inc(v_shell_1294_);
v_windowsVerbatimArguments_1295_ = lean_ctor_get(v_d_1285_, 9);
lean_inc(v_windowsVerbatimArguments_1295_);
v_windowsHide_1296_ = lean_ctor_get(v_d_1285_, 10);
lean_inc(v_windowsHide_1296_);
v_signal_1297_ = lean_ctor_get(v_d_1285_, 11);
lean_inc(v_signal_1297_);
v_timeout_1298_ = lean_ctor_get(v_d_1285_, 12);
lean_inc(v_timeout_1298_);
v_killSignal_1299_ = lean_ctor_get(v_d_1285_, 13);
lean_inc(v_killSignal_1299_);
lean_dec_ref(v_d_1285_);
v___x_1300_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_1301_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1276_, v_cwd_1286_);
v___x_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1300_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
v___x_1303_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1));
v___x_1304_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1277_, v_env_1287_);
v___x_1305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1303_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
v___x_1306_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0));
lean_inc_ref(v___f_1278_);
v___x_1307_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1278_, v_argv0_1288_);
v___x_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__1));
v___x_1310_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1279_, v_stdio_1289_);
v___x_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1309_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__2));
lean_inc_ref_n(v___f_1280_, 2);
v___x_1313_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1280_, v_detached_1290_);
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6));
lean_inc_ref_n(v___f_1281_, 2);
v___x_1316_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1281_, v_uid_1291_);
v___x_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1315_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7));
v___x_1319_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1281_, v_gid_1292_);
v___x_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1318_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__3));
v___x_1322_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1278_, v_serialization_1293_);
v___x_1323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10));
v___x_1325_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1282_, v_shell_1294_);
v___x_1326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9));
v___x_1328_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1280_, v_windowsVerbatimArguments_1295_);
v___x_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1327_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8));
v___x_1331_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1280_, v_windowsHide_1296_);
v___x_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
v___x_1333_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11));
v___x_1334_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1283_, v_signal_1297_);
v___x_1335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1333_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
v___x_1336_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3));
v___x_1337_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1281_, v_timeout_1298_);
v___x_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1336_);
lean_ctor_set(v___x_1338_, 1, v___x_1337_);
v___x_1339_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5));
v___x_1340_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1284_, v_killSignal_1299_);
v___x_1341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1339_);
lean_ctor_set(v___x_1341_, 1, v___x_1340_);
v___x_1342_ = lean_unsigned_to_nat(14u);
v___x_1343_ = lean_mk_empty_array_with_capacity(v___x_1342_);
v___x_1344_ = lean_array_push(v___x_1343_, v___x_1302_);
v___x_1345_ = lean_array_push(v___x_1344_, v___x_1305_);
v___x_1346_ = lean_array_push(v___x_1345_, v___x_1308_);
v___x_1347_ = lean_array_push(v___x_1346_, v___x_1311_);
v___x_1348_ = lean_array_push(v___x_1347_, v___x_1314_);
v___x_1349_ = lean_array_push(v___x_1348_, v___x_1317_);
v___x_1350_ = lean_array_push(v___x_1349_, v___x_1320_);
v___x_1351_ = lean_array_push(v___x_1350_, v___x_1323_);
v___x_1352_ = lean_array_push(v___x_1351_, v___x_1326_);
v___x_1353_ = lean_array_push(v___x_1352_, v___x_1329_);
v___x_1354_ = lean_array_push(v___x_1353_, v___x_1332_);
v___x_1355_ = lean_array_push(v___x_1354_, v___x_1335_);
v___x_1356_ = lean_array_push(v___x_1355_, v___x_1338_);
v___x_1357_ = lean_array_push(v___x_1356_, v___x_1341_);
v___x_1358_ = l_Lasm_JS_Web_Support_fields(v___x_1357_);
lean_dec_ref(v___x_1357_);
return v___x_1358_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0(void){
_start:
{
lean_object* v___f_1359_; lean_object* v___f_1360_; lean_object* v___f_1361_; lean_object* v___f_1362_; lean_object* v___f_1363_; lean_object* v___x_1364_; lean_object* v___f_1365_; lean_object* v___x_1366_; lean_object* v___f_1367_; lean_object* v___f_1368_; 
v___f_1359_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__4));
v___f_1360_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__6));
v___f_1361_ = ((lean_object*)(l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0));
v___f_1362_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__3));
v___f_1363_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__5));
v___x_1364_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString));
v___f_1365_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1));
v___x_1366_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2, &l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2_once, _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2);
v___f_1367_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0));
v___f_1368_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0), 10, 9);
lean_closure_set(v___f_1368_, 0, v___f_1367_);
lean_closure_set(v___f_1368_, 1, v___x_1366_);
lean_closure_set(v___f_1368_, 2, v___f_1365_);
lean_closure_set(v___f_1368_, 3, v___x_1364_);
lean_closure_set(v___f_1368_, 4, v___f_1363_);
lean_closure_set(v___f_1368_, 5, v___f_1362_);
lean_closure_set(v___f_1368_, 6, v___f_1361_);
lean_closure_set(v___f_1368_, 7, v___f_1360_);
lean_closure_set(v___f_1368_, 8, v___f_1359_);
return v___f_1368_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processSpawnOptions(void){
_start:
{
lean_object* v___f_1369_; 
v___f_1369_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0, &l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0_once, _init_l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0);
return v___f_1369_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(lean_object* v_context_1370_, lean_object* v_bytes_1371_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1371_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_object* v_a_1374_; lean_object* v___x_1375_; 
v_a_1374_ = lean_ctor_get(v___x_1373_, 0);
lean_inc(v_a_1374_);
lean_dec_ref_known(v___x_1373_, 1);
v___x_1375_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1(v_context_1370_, v_a_1374_);
return v___x_1375_;
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
v_a_1376_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1373_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1373_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0___boxed(lean_object* v_context_1384_, lean_object* v_bytes_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v_context_1384_, v_bytes_1385_);
lean_dec_ref(v_bytes_1385_);
lean_dec_ref(v_context_1384_);
return v_res_1387_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1388_; uint64_t v___x_1389_; 
v___x_1388_ = 0;
v___x_1389_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1388_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(lean_object* v_o_1391_, lean_object* v_key_1392_){
_start:
{
lean_object* v_k_1394_; lean_object* v___x_1395_; 
v_k_1394_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1394_, 0, v_key_1392_);
v___x_1395_ = l_Lasm_JS_Wire_encodeIO(v_k_1394_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_a_1396_; uint32_t v___x_1397_; uint32_t v___x_1398_; uint64_t v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
lean_inc(v_a_1396_);
lean_dec_ref_known(v___x_1395_, 1);
v___x_1397_ = 203;
v___x_1398_ = lasm_js_value_handle(v_o_1391_);
v___x_1399_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1400_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1401_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1401_, 0, v_o_1391_);
lean_ctor_set(v___x_1401_, 1, v___x_1400_);
v___x_1402_ = lean_unsigned_to_nat(2u);
v___x_1403_ = lean_mk_empty_array_with_capacity(v___x_1402_);
lean_inc_ref(v_k_1394_);
v___x_1404_ = lean_array_push(v___x_1403_, v_k_1394_);
v___x_1405_ = lean_array_push(v___x_1404_, v___x_1401_);
v___x_1406_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1405_);
v___x_1407_ = lasm_js_call(v___x_1397_, v___x_1398_, v___x_1399_, v_a_1396_, v___x_1406_);
lean_dec_ref_known(v___x_1406_, 1);
lean_dec(v_a_1396_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_a_1408_);
lean_dec_ref_known(v___x_1407_, 1);
v___x_1409_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1410_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1394_);
v___x_1411_ = lean_string_append(v___x_1409_, v___x_1410_);
lean_dec_ref(v___x_1410_);
v___x_1412_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v___x_1411_, v_a_1408_);
lean_dec(v_a_1408_);
lean_dec_ref(v___x_1411_);
return v___x_1412_;
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
lean_dec_ref_known(v_k_1394_, 1);
v_a_1413_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1407_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1407_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_dec_ref_known(v_k_1394_, 1);
lean_dec(v_o_1391_);
v_a_1421_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1395_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1395_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___boxed(lean_object* v_o_1429_, lean_object* v_key_1430_, lean_object* v_a_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_o_1429_, v_key_1430_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode(lean_object* v_self_1434_){
_start:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_exitCode___closed__0));
v___x_1437_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_1434_, v___x_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode___boxed(lean_object* v_self_1438_, lean_object* v_a_1439_){
_start:
{
lean_object* v_res_1440_; 
v_res_1440_ = l_Lasm_JS_Node_ChildProcess_exitCode(v_self_1438_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed(lean_object* v_self_1442_){
_start:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1444_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_killed___closed__0));
v___x_1445_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1442_, v___x_1444_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed___boxed(lean_object* v_self_1446_, lean_object* v_a_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l_Lasm_JS_Node_ChildProcess_killed(v_self_1446_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid(lean_object* v_self_1450_){
_start:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1452_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_pid___closed__0));
v___x_1453_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_1450_, v___x_1452_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid___boxed(lean_object* v_self_1454_, lean_object* v_a_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = l_Lasm_JS_Node_ChildProcess_pid(v_self_1454_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(lean_object* v_o_1457_, lean_object* v_key_1458_){
_start:
{
lean_object* v_k_1460_; lean_object* v___x_1461_; 
v_k_1460_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1460_, 0, v_key_1458_);
v___x_1461_ = l_Lasm_JS_Wire_encodeIO(v_k_1460_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v_a_1462_; uint32_t v___x_1463_; uint32_t v___x_1464_; uint64_t v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
lean_inc(v_a_1462_);
lean_dec_ref_known(v___x_1461_, 1);
v___x_1463_ = 203;
v___x_1464_ = lasm_js_value_handle(v_o_1457_);
v___x_1465_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1466_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1467_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1467_, 0, v_o_1457_);
lean_ctor_set(v___x_1467_, 1, v___x_1466_);
v___x_1468_ = lean_unsigned_to_nat(2u);
v___x_1469_ = lean_mk_empty_array_with_capacity(v___x_1468_);
lean_inc_ref(v_k_1460_);
v___x_1470_ = lean_array_push(v___x_1469_, v_k_1460_);
v___x_1471_ = lean_array_push(v___x_1470_, v___x_1467_);
v___x_1472_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1472_, 0, v___x_1471_);
v___x_1473_ = lasm_js_call(v___x_1463_, v___x_1464_, v___x_1465_, v_a_1462_, v___x_1472_);
lean_dec_ref_known(v___x_1472_, 1);
lean_dec(v_a_1462_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_a_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_a_1474_);
lean_dec_ref_known(v___x_1473_, 1);
v___x_1475_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1476_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1460_);
v___x_1477_ = lean_string_append(v___x_1475_, v___x_1476_);
lean_dec_ref(v___x_1476_);
v___x_1478_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_1477_, v_a_1474_);
lean_dec(v_a_1474_);
lean_dec_ref(v___x_1477_);
return v___x_1478_;
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref_known(v_k_1460_, 1);
v_a_1479_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1473_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1473_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec_ref_known(v_k_1460_, 1);
lean_dec(v_o_1457_);
v_a_1487_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1461_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1461_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0___boxed(lean_object* v_o_1495_, lean_object* v_key_1496_, lean_object* v_a_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(v_o_1495_, v_key_1496_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode(lean_object* v_self_1500_){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_signalCode___closed__0));
v___x_1503_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(v_self_1500_, v___x_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode___boxed(lean_object* v_self_1504_, lean_object* v_a_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lasm_JS_Node_ChildProcess_signalCode(v_self_1504_);
return v_res_1506_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1509_ = lean_string_utf8_byte_size(v___x_1508_);
return v___x_1509_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; uint8_t v___x_1512_; 
v___x_1510_ = lean_unsigned_to_nat(0u);
v___x_1511_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1);
v___x_1512_ = lean_nat_dec_eq(v___x_1511_, v___x_1510_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(lean_object* v_context_1514_, lean_object* v_d_1515_){
_start:
{
lean_object* v___y_1521_; lean_object* v___y_1522_; 
switch(lean_obj_tag(v_d_1515_))
{
case 1:
{
goto v___jp_1517_;
}
case 0:
{
goto v___jp_1517_;
}
default: 
{
if (lean_obj_tag(v_d_1515_) == 9)
{
lean_object* v_value_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v_value_1526_ = lean_ctor_get(v_d_1515_, 0);
lean_inc(v_value_1526_);
lean_dec_ref_known(v_d_1515_, 2);
v___x_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1527_, 0, v_value_1526_);
v___x_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
return v___x_1528_;
}
else
{
lean_object* v___x_1529_; lean_object* v_received_1531_; 
v___x_1529_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
if (lean_obj_tag(v_d_1515_) == 9)
{
lean_object* v_value_1545_; lean_object* v_description_1546_; uint8_t v___x_1547_; 
v_value_1545_ = lean_ctor_get(v_d_1515_, 0);
v_description_1546_ = lean_ctor_get(v_d_1515_, 1);
v___x_1547_ = lean_string_dec_eq(v_description_1546_, v___x_1529_);
if (v___x_1547_ == 0)
{
goto v___jp_1543_;
}
else
{
uint32_t v___x_1548_; uint64_t v___x_1549_; lean_object* v___x_1550_; uint32_t v___x_1551_; lean_object* v___x_1552_; 
lean_inc_n(v_value_1545_, 2);
lean_dec_ref_known(v_d_1515_, 2);
v___x_1548_ = 206;
v___x_1549_ = 0ULL;
v___x_1550_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1550_, 0, v_value_1545_);
lean_ctor_set(v___x_1550_, 1, v___x_1529_);
v___x_1551_ = lasm_js_value_handle(v_value_1545_);
lean_dec(v_value_1545_);
v___x_1552_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1548_, v___x_1549_, v___x_1550_, v___x_1551_);
lean_dec_ref_known(v___x_1550_, 2);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_a_1553_; uint8_t v___x_1554_; 
v_a_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_a_1553_);
lean_dec_ref_known(v___x_1552_, 1);
v___x_1554_ = lean_string_validate_utf8(v_a_1553_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; lean_object* v___x_1556_; 
lean_dec(v_a_1553_);
v___x_1555_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_1556_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1555_);
v_received_1531_ = v___x_1556_;
goto v___jp_1530_;
}
else
{
lean_object* v___x_1557_; 
v___x_1557_ = lean_string_from_utf8_unchecked(v_a_1553_);
v_received_1531_ = v___x_1557_;
goto v___jp_1530_;
}
}
else
{
lean_object* v___x_1558_; 
lean_dec_ref_known(v___x_1552_, 1);
v___x_1558_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v_received_1531_ = v___x_1558_;
goto v___jp_1530_;
}
}
}
else
{
goto v___jp_1543_;
}
v___jp_1530_:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; uint8_t v___x_1541_; 
v___x_1532_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_1533_ = lean_string_append(v___x_1532_, v_context_1514_);
v___x_1534_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_1535_ = lean_string_append(v___x_1533_, v___x_1534_);
v___x_1536_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__0));
v___x_1537_ = lean_string_append(v___x_1535_, v___x_1536_);
v___x_1538_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_1539_ = lean_string_append(v___x_1537_, v___x_1538_);
v___x_1540_ = lean_string_append(v___x_1539_, v_received_1531_);
lean_dec_ref(v_received_1531_);
v___x_1541_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_1541_ == 0)
{
lean_object* v___x_1542_; 
v___x_1542_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___y_1521_ = v___x_1540_;
v___y_1522_ = v___x_1542_;
goto v___jp_1520_;
}
else
{
v___y_1521_ = v___x_1540_;
v___y_1522_ = v___x_1529_;
goto v___jp_1520_;
}
}
v___jp_1543_:
{
lean_object* v___x_1544_; 
v___x_1544_ = l_Lasm_JS_Data_describe(v_d_1515_);
v_received_1531_ = v___x_1544_;
goto v___jp_1530_;
}
}
}
}
v___jp_1517_:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1518_ = lean_box(0);
v___x_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1518_);
return v___x_1519_;
}
v___jp_1520_:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1523_ = lean_string_append(v___y_1521_, v___y_1522_);
v___x_1524_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1523_);
v___x_1525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
return v___x_1525_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1559_, lean_object* v_d_1560_, lean_object* v_a_1561_){
_start:
{
lean_object* v_res_1562_; 
v_res_1562_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_1559_, v_d_1560_);
lean_dec_ref(v_context_1559_);
return v_res_1562_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(lean_object* v_context_1563_, lean_object* v_bytes_1564_){
_start:
{
lean_object* v___x_1566_; 
v___x_1566_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1564_);
if (lean_obj_tag(v___x_1566_) == 0)
{
lean_object* v_a_1567_; lean_object* v___x_1568_; 
v_a_1567_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_a_1567_);
lean_dec_ref_known(v___x_1566_, 1);
v___x_1568_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_1563_, v_a_1567_);
return v___x_1568_;
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
v_a_1569_ = lean_ctor_get(v___x_1566_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___x_1566_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1566_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0___boxed(lean_object* v_context_1577_, lean_object* v_bytes_1578_, lean_object* v_a_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v_context_1577_, v_bytes_1578_);
lean_dec_ref(v_bytes_1578_);
lean_dec_ref(v_context_1577_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(lean_object* v_o_1581_, lean_object* v_key_1582_){
_start:
{
lean_object* v_k_1584_; lean_object* v___x_1585_; 
v_k_1584_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1584_, 0, v_key_1582_);
v___x_1585_ = l_Lasm_JS_Wire_encodeIO(v_k_1584_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; uint32_t v___x_1587_; uint32_t v___x_1588_; uint64_t v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1585_, 1);
v___x_1587_ = 203;
v___x_1588_ = lasm_js_value_handle(v_o_1581_);
v___x_1589_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1590_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1591_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1591_, 0, v_o_1581_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = lean_unsigned_to_nat(2u);
v___x_1593_ = lean_mk_empty_array_with_capacity(v___x_1592_);
lean_inc_ref(v_k_1584_);
v___x_1594_ = lean_array_push(v___x_1593_, v_k_1584_);
v___x_1595_ = lean_array_push(v___x_1594_, v___x_1591_);
v___x_1596_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1595_);
v___x_1597_ = lasm_js_call(v___x_1587_, v___x_1588_, v___x_1589_, v_a_1586_, v___x_1596_);
lean_dec_ref_known(v___x_1596_, 1);
lean_dec(v_a_1586_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_a_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
lean_inc(v_a_1598_);
lean_dec_ref_known(v___x_1597_, 1);
v___x_1599_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1600_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1584_);
v___x_1601_ = lean_string_append(v___x_1599_, v___x_1600_);
lean_dec_ref(v___x_1600_);
v___x_1602_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v___x_1601_, v_a_1598_);
lean_dec(v_a_1598_);
lean_dec_ref(v___x_1601_);
return v___x_1602_;
}
else
{
lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
lean_dec_ref_known(v_k_1584_, 1);
v_a_1603_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1605_ = v___x_1597_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_dec(v___x_1597_);
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
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
lean_dec_ref_known(v_k_1584_, 1);
lean_dec(v_o_1581_);
v_a_1611_ = lean_ctor_get(v___x_1585_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1613_ = v___x_1585_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1585_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0___boxed(lean_object* v_o_1619_, lean_object* v_key_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_o_1619_, v_key_1620_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr(lean_object* v_self_1623_){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1));
v___x_1626_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_1623_, v___x_1625_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr___boxed(lean_object* v_self_1627_, lean_object* v_a_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l_Lasm_JS_Node_ChildProcess_stderr(v_self_1627_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(lean_object* v_context_1631_, lean_object* v_d_1632_){
_start:
{
lean_object* v___y_1638_; lean_object* v___y_1639_; 
switch(lean_obj_tag(v_d_1632_))
{
case 1:
{
goto v___jp_1634_;
}
case 0:
{
goto v___jp_1634_;
}
default: 
{
if (lean_obj_tag(v_d_1632_) == 9)
{
lean_object* v_value_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v_value_1643_ = lean_ctor_get(v_d_1632_, 0);
lean_inc(v_value_1643_);
lean_dec_ref_known(v_d_1632_, 2);
v___x_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1644_, 0, v_value_1643_);
v___x_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1644_);
return v___x_1645_;
}
else
{
lean_object* v___x_1646_; lean_object* v_received_1648_; 
v___x_1646_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
if (lean_obj_tag(v_d_1632_) == 9)
{
lean_object* v_value_1662_; lean_object* v_description_1663_; uint8_t v___x_1664_; 
v_value_1662_ = lean_ctor_get(v_d_1632_, 0);
v_description_1663_ = lean_ctor_get(v_d_1632_, 1);
v___x_1664_ = lean_string_dec_eq(v_description_1663_, v___x_1646_);
if (v___x_1664_ == 0)
{
goto v___jp_1660_;
}
else
{
uint32_t v___x_1665_; uint64_t v___x_1666_; lean_object* v___x_1667_; uint32_t v___x_1668_; lean_object* v___x_1669_; 
lean_inc_n(v_value_1662_, 2);
lean_dec_ref_known(v_d_1632_, 2);
v___x_1665_ = 206;
v___x_1666_ = 0ULL;
v___x_1667_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1667_, 0, v_value_1662_);
lean_ctor_set(v___x_1667_, 1, v___x_1646_);
v___x_1668_ = lasm_js_value_handle(v_value_1662_);
lean_dec(v_value_1662_);
v___x_1669_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1665_, v___x_1666_, v___x_1667_, v___x_1668_);
lean_dec_ref_known(v___x_1667_, 2);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; uint8_t v___x_1671_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1670_);
lean_dec_ref_known(v___x_1669_, 1);
v___x_1671_ = lean_string_validate_utf8(v_a_1670_);
if (v___x_1671_ == 0)
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
lean_dec(v_a_1670_);
v___x_1672_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_1673_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1672_);
v_received_1648_ = v___x_1673_;
goto v___jp_1647_;
}
else
{
lean_object* v___x_1674_; 
v___x_1674_ = lean_string_from_utf8_unchecked(v_a_1670_);
v_received_1648_ = v___x_1674_;
goto v___jp_1647_;
}
}
else
{
lean_object* v___x_1675_; 
lean_dec_ref_known(v___x_1669_, 1);
v___x_1675_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v_received_1648_ = v___x_1675_;
goto v___jp_1647_;
}
}
}
else
{
goto v___jp_1660_;
}
v___jp_1647_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; uint8_t v___x_1658_; 
v___x_1649_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_1650_ = lean_string_append(v___x_1649_, v_context_1631_);
v___x_1651_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_1652_ = lean_string_append(v___x_1650_, v___x_1651_);
v___x_1653_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___closed__0));
v___x_1654_ = lean_string_append(v___x_1652_, v___x_1653_);
v___x_1655_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_1656_ = lean_string_append(v___x_1654_, v___x_1655_);
v___x_1657_ = lean_string_append(v___x_1656_, v_received_1648_);
lean_dec_ref(v_received_1648_);
v___x_1658_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_1658_ == 0)
{
lean_object* v___x_1659_; 
v___x_1659_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___y_1638_ = v___x_1657_;
v___y_1639_ = v___x_1659_;
goto v___jp_1637_;
}
else
{
v___y_1638_ = v___x_1657_;
v___y_1639_ = v___x_1646_;
goto v___jp_1637_;
}
}
v___jp_1660_:
{
lean_object* v___x_1661_; 
v___x_1661_ = l_Lasm_JS_Data_describe(v_d_1632_);
v_received_1648_ = v___x_1661_;
goto v___jp_1647_;
}
}
}
}
v___jp_1634_:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = lean_box(0);
v___x_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1635_);
return v___x_1636_;
}
v___jp_1637_:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1640_ = lean_string_append(v___y_1638_, v___y_1639_);
v___x_1641_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
v___x_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1641_);
return v___x_1642_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1676_, lean_object* v_d_1677_, lean_object* v_a_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_1676_, v_d_1677_);
lean_dec_ref(v_context_1676_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(lean_object* v_context_1680_, lean_object* v_bytes_1681_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1681_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; lean_object* v___x_1685_; 
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1684_);
lean_dec_ref_known(v___x_1683_, 1);
v___x_1685_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_1680_, v_a_1684_);
return v___x_1685_;
}
else
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
v_a_1686_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1688_ = v___x_1683_;
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1683_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1689_ == 0)
{
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0___boxed(lean_object* v_context_1694_, lean_object* v_bytes_1695_, lean_object* v_a_1696_){
_start:
{
lean_object* v_res_1697_; 
v_res_1697_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v_context_1694_, v_bytes_1695_);
lean_dec_ref(v_bytes_1695_);
lean_dec_ref(v_context_1694_);
return v_res_1697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(lean_object* v_o_1698_, lean_object* v_key_1699_){
_start:
{
lean_object* v_k_1701_; lean_object* v___x_1702_; 
v_k_1701_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1701_, 0, v_key_1699_);
v___x_1702_ = l_Lasm_JS_Wire_encodeIO(v_k_1701_);
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v_a_1703_; uint32_t v___x_1704_; uint32_t v___x_1705_; uint64_t v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v_a_1703_ = lean_ctor_get(v___x_1702_, 0);
lean_inc(v_a_1703_);
lean_dec_ref_known(v___x_1702_, 1);
v___x_1704_ = 203;
v___x_1705_ = lasm_js_value_handle(v_o_1698_);
v___x_1706_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1707_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1708_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1708_, 0, v_o_1698_);
lean_ctor_set(v___x_1708_, 1, v___x_1707_);
v___x_1709_ = lean_unsigned_to_nat(2u);
v___x_1710_ = lean_mk_empty_array_with_capacity(v___x_1709_);
lean_inc_ref(v_k_1701_);
v___x_1711_ = lean_array_push(v___x_1710_, v_k_1701_);
v___x_1712_ = lean_array_push(v___x_1711_, v___x_1708_);
v___x_1713_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1712_);
v___x_1714_ = lasm_js_call(v___x_1704_, v___x_1705_, v___x_1706_, v_a_1703_, v___x_1713_);
lean_dec_ref_known(v___x_1713_, 1);
lean_dec(v_a_1703_);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v_a_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v_a_1715_ = lean_ctor_get(v___x_1714_, 0);
lean_inc(v_a_1715_);
lean_dec_ref_known(v___x_1714_, 1);
v___x_1716_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1717_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1701_);
v___x_1718_ = lean_string_append(v___x_1716_, v___x_1717_);
lean_dec_ref(v___x_1717_);
v___x_1719_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v___x_1718_, v_a_1715_);
lean_dec(v_a_1715_);
lean_dec_ref(v___x_1718_);
return v___x_1719_;
}
else
{
lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1727_; 
lean_dec_ref_known(v_k_1701_, 1);
v_a_1720_ = lean_ctor_get(v___x_1714_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1722_ = v___x_1714_;
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v___x_1714_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_a_1720_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
}
else
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1735_; 
lean_dec_ref_known(v_k_1701_, 1);
lean_dec(v_o_1698_);
v_a_1728_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1735_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1730_ = v___x_1702_;
v_isShared_1731_ = v_isSharedCheck_1735_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v___x_1702_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1735_;
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
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_a_1728_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0___boxed(lean_object* v_o_1736_, lean_object* v_key_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_o_1736_, v_key_1737_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin(lean_object* v_self_1741_){
_start:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_stdin___closed__0));
v___x_1744_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_self_1741_, v___x_1743_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin___boxed(lean_object* v_self_1745_, lean_object* v_a_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l_Lasm_JS_Node_ChildProcess_stdin(v_self_1745_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout(lean_object* v_self_1748_){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1750_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0));
v___x_1751_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_1748_, v___x_1750_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout___boxed(lean_object* v_self_1752_, lean_object* v_a_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l_Lasm_JS_Node_ChildProcess_stdout(v_self_1752_);
return v_res_1754_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3(void){
_start:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1759_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__2));
v___x_1760_ = lean_unsigned_to_nat(2u);
v___x_1761_ = lean_mk_empty_array_with_capacity(v___x_1760_);
v___x_1762_ = lean_array_push(v___x_1761_, v___x_1759_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onClose(lean_object* v_self_1763_, lean_object* v_listener_1764_){
_start:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1766_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_1767_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1768_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1768_, 0, v_listener_1764_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
v___x_1769_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onClose___closed__3, &l_Lasm_JS_Node_ChildProcess_onClose___closed__3_once, _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3);
v___x_1770_ = lean_array_push(v___x_1769_, v___x_1768_);
v___x_1771_ = l_Lasm_JS_Web_Support_args(v___x_1770_);
v___x_1772_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1763_, v___x_1766_, v___x_1771_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1780_; 
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1775_ = v___x_1772_;
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1772_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1776_ == 0)
{
v___x_1778_ = v___x_1775_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1773_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
v_a_1781_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1783_ = v___x_1772_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1772_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_a_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onClose___boxed(lean_object* v_self_1789_, lean_object* v_listener_1790_, lean_object* v_a_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l_Lasm_JS_Node_ChildProcess_onClose(v_self_1789_, v_listener_1790_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceClose(lean_object* v_self_1794_, lean_object* v_listener_1795_){
_start:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1797_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_1798_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1799_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1799_, 0, v_listener_1795_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
v___x_1800_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onClose___closed__3, &l_Lasm_JS_Node_ChildProcess_onClose___closed__3_once, _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3);
v___x_1801_ = lean_array_push(v___x_1800_, v___x_1799_);
v___x_1802_ = l_Lasm_JS_Web_Support_args(v___x_1801_);
v___x_1803_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1794_, v___x_1797_, v___x_1802_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v___x_1803_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1803_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_a_1804_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
v_a_1812_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1803_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1803_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceClose___boxed(lean_object* v_self_1820_, lean_object* v_listener_1821_, lean_object* v_a_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Lasm_JS_Node_ChildProcess_onceClose(v_self_1820_, v_listener_1821_);
return v_res_1823_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2(void){
_start:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1827_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__1));
v___x_1828_ = lean_unsigned_to_nat(2u);
v___x_1829_ = lean_mk_empty_array_with_capacity(v___x_1828_);
v___x_1830_ = lean_array_push(v___x_1829_, v___x_1827_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect(lean_object* v_self_1831_, lean_object* v_listener_1832_){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1834_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_1835_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1836_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1836_, 0, v_listener_1832_);
lean_ctor_set(v___x_1836_, 1, v___x_1835_);
v___x_1837_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2, &l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2);
v___x_1838_ = lean_array_push(v___x_1837_, v___x_1836_);
v___x_1839_ = l_Lasm_JS_Web_Support_args(v___x_1838_);
v___x_1840_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1831_, v___x_1834_, v___x_1839_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1840_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1840_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
v_a_1849_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1840_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1840_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1854_; 
if (v_isShared_1852_ == 0)
{
v___x_1854_ = v___x_1851_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1849_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect___boxed(lean_object* v_self_1857_, lean_object* v_listener_1858_, lean_object* v_a_1859_){
_start:
{
lean_object* v_res_1860_; 
v_res_1860_ = l_Lasm_JS_Node_ChildProcess_onDisconnect(v_self_1857_, v_listener_1858_);
return v_res_1860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceDisconnect(lean_object* v_self_1861_, lean_object* v_listener_1862_){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1864_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_1865_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1866_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1866_, 0, v_listener_1862_);
lean_ctor_set(v___x_1866_, 1, v___x_1865_);
v___x_1867_ = lean_unsigned_to_nat(2u);
v___x_1868_ = lean_mk_empty_array_with_capacity(v___x_1867_);
lean_dec_ref(v___x_1868_);
v___x_1869_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2, &l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2);
v___x_1870_ = lean_array_push(v___x_1869_, v___x_1866_);
v___x_1871_ = l_Lasm_JS_Web_Support_args(v___x_1870_);
v___x_1872_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1861_, v___x_1864_, v___x_1871_);
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1880_; 
v_a_1873_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1875_ = v___x_1872_;
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1872_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1878_; 
if (v_isShared_1876_ == 0)
{
v___x_1878_ = v___x_1875_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1873_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
else
{
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1888_; 
v_a_1881_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1883_ = v___x_1872_;
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1872_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1886_; 
if (v_isShared_1884_ == 0)
{
v___x_1886_ = v___x_1883_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_a_1881_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceDisconnect___boxed(lean_object* v_self_1889_, lean_object* v_listener_1890_, lean_object* v_a_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l_Lasm_JS_Node_ChildProcess_onceDisconnect(v_self_1889_, v_listener_1890_);
return v_res_1892_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2(void){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1896_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onError___closed__1));
v___x_1897_ = lean_unsigned_to_nat(2u);
v___x_1898_ = lean_mk_empty_array_with_capacity(v___x_1897_);
v___x_1899_ = lean_array_push(v___x_1898_, v___x_1896_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onError(lean_object* v_self_1900_, lean_object* v_listener_1901_){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1903_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_1904_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1905_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1905_, 0, v_listener_1901_);
lean_ctor_set(v___x_1905_, 1, v___x_1904_);
v___x_1906_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onError___closed__2, &l_Lasm_JS_Node_ChildProcess_onError___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2);
v___x_1907_ = lean_array_push(v___x_1906_, v___x_1905_);
v___x_1908_ = l_Lasm_JS_Web_Support_args(v___x_1907_);
v___x_1909_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1900_, v___x_1903_, v___x_1908_);
if (lean_obj_tag(v___x_1909_) == 0)
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
v_a_1910_ = lean_ctor_get(v___x_1909_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1909_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1909_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1909_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
v_a_1918_ = lean_ctor_get(v___x_1909_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1909_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1909_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1909_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onError___boxed(lean_object* v_self_1926_, lean_object* v_listener_1927_, lean_object* v_a_1928_){
_start:
{
lean_object* v_res_1929_; 
v_res_1929_ = l_Lasm_JS_Node_ChildProcess_onError(v_self_1926_, v_listener_1927_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceError(lean_object* v_self_1930_, lean_object* v_listener_1931_){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1933_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_1934_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1935_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1935_, 0, v_listener_1931_);
lean_ctor_set(v___x_1935_, 1, v___x_1934_);
v___x_1936_ = lean_unsigned_to_nat(2u);
v___x_1937_ = lean_mk_empty_array_with_capacity(v___x_1936_);
lean_dec_ref(v___x_1937_);
v___x_1938_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onError___closed__2, &l_Lasm_JS_Node_ChildProcess_onError___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2);
v___x_1939_ = lean_array_push(v___x_1938_, v___x_1935_);
v___x_1940_ = l_Lasm_JS_Web_Support_args(v___x_1939_);
v___x_1941_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1930_, v___x_1933_, v___x_1940_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1941_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1941_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
v_a_1950_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1941_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1941_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceError___boxed(lean_object* v_self_1958_, lean_object* v_listener_1959_, lean_object* v_a_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l_Lasm_JS_Node_ChildProcess_onceError(v_self_1958_, v_listener_1959_);
return v_res_1961_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2(void){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1965_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onExit___closed__1));
v___x_1966_ = lean_unsigned_to_nat(2u);
v___x_1967_ = lean_mk_empty_array_with_capacity(v___x_1966_);
v___x_1968_ = lean_array_push(v___x_1967_, v___x_1965_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onExit(lean_object* v_self_1969_, lean_object* v_listener_1970_){
_start:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1972_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_1973_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1974_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1974_, 0, v_listener_1970_);
lean_ctor_set(v___x_1974_, 1, v___x_1973_);
v___x_1975_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onExit___closed__2, &l_Lasm_JS_Node_ChildProcess_onExit___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2);
v___x_1976_ = lean_array_push(v___x_1975_, v___x_1974_);
v___x_1977_ = l_Lasm_JS_Web_Support_args(v___x_1976_);
v___x_1978_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1969_, v___x_1972_, v___x_1977_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1986_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_1986_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1981_ = v___x_1978_;
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1978_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1982_ == 0)
{
v___x_1984_ = v___x_1981_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_a_1979_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
v_a_1987_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1989_ = v___x_1978_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_dec(v___x_1978_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1990_ == 0)
{
v___x_1992_ = v___x_1989_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_a_1987_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onExit___boxed(lean_object* v_self_1995_, lean_object* v_listener_1996_, lean_object* v_a_1997_){
_start:
{
lean_object* v_res_1998_; 
v_res_1998_ = l_Lasm_JS_Node_ChildProcess_onExit(v_self_1995_, v_listener_1996_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceExit(lean_object* v_self_1999_, lean_object* v_listener_2000_){
_start:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2002_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2003_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2004_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2004_, 0, v_listener_2000_);
lean_ctor_set(v___x_2004_, 1, v___x_2003_);
v___x_2005_ = lean_unsigned_to_nat(2u);
v___x_2006_ = lean_mk_empty_array_with_capacity(v___x_2005_);
lean_dec_ref(v___x_2006_);
v___x_2007_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onExit___closed__2, &l_Lasm_JS_Node_ChildProcess_onExit___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2);
v___x_2008_ = lean_array_push(v___x_2007_, v___x_2004_);
v___x_2009_ = l_Lasm_JS_Web_Support_args(v___x_2008_);
v___x_2010_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1999_, v___x_2002_, v___x_2009_);
if (lean_obj_tag(v___x_2010_) == 0)
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
v_a_2011_ = lean_ctor_get(v___x_2010_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_2010_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_2010_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_2010_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
else
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2026_; 
v_a_2019_ = lean_ctor_get(v___x_2010_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_2010_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2021_ = v___x_2010_;
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_2010_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2024_; 
if (v_isShared_2022_ == 0)
{
v___x_2024_ = v___x_2021_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v_a_2019_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceExit___boxed(lean_object* v_self_2027_, lean_object* v_listener_2028_, lean_object* v_a_2029_){
_start:
{
lean_object* v_res_2030_; 
v_res_2030_ = l_Lasm_JS_Node_ChildProcess_onceExit(v_self_2027_, v_listener_2028_);
return v_res_2030_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2(void){
_start:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2034_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onMessage___closed__1));
v___x_2035_ = lean_unsigned_to_nat(2u);
v___x_2036_ = lean_mk_empty_array_with_capacity(v___x_2035_);
v___x_2037_ = lean_array_push(v___x_2036_, v___x_2034_);
return v___x_2037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onMessage(lean_object* v_self_2038_, lean_object* v_listener_2039_){
_start:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; 
v___x_2041_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2042_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2043_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2043_, 0, v_listener_2039_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
v___x_2044_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onMessage___closed__2, &l_Lasm_JS_Node_ChildProcess_onMessage___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2);
v___x_2045_ = lean_array_push(v___x_2044_, v___x_2043_);
v___x_2046_ = l_Lasm_JS_Web_Support_args(v___x_2045_);
v___x_2047_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2038_, v___x_2041_, v___x_2046_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v_a_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2055_; 
v_a_2048_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2050_ = v___x_2047_;
v_isShared_2051_ = v_isSharedCheck_2055_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_a_2048_);
lean_dec(v___x_2047_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2055_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2053_; 
if (v_isShared_2051_ == 0)
{
v___x_2053_ = v___x_2050_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_a_2048_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
}
else
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
v_a_2056_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v___x_2047_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2047_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_a_2056_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onMessage___boxed(lean_object* v_self_2064_, lean_object* v_listener_2065_, lean_object* v_a_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_Lasm_JS_Node_ChildProcess_onMessage(v_self_2064_, v_listener_2065_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceMessage(lean_object* v_self_2068_, lean_object* v_listener_2069_){
_start:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2071_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2072_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2073_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2073_, 0, v_listener_2069_);
lean_ctor_set(v___x_2073_, 1, v___x_2072_);
v___x_2074_ = lean_unsigned_to_nat(2u);
v___x_2075_ = lean_mk_empty_array_with_capacity(v___x_2074_);
lean_dec_ref(v___x_2075_);
v___x_2076_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onMessage___closed__2, &l_Lasm_JS_Node_ChildProcess_onMessage___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2);
v___x_2077_ = lean_array_push(v___x_2076_, v___x_2073_);
v___x_2078_ = l_Lasm_JS_Web_Support_args(v___x_2077_);
v___x_2079_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2068_, v___x_2071_, v___x_2078_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_2079_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_2079_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
else
{
lean_object* v_a_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2095_; 
v_a_2088_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2090_ = v___x_2079_;
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_a_2088_);
lean_dec(v___x_2079_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2093_; 
if (v_isShared_2091_ == 0)
{
v___x_2093_ = v___x_2090_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_a_2088_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceMessage___boxed(lean_object* v_self_2096_, lean_object* v_listener_2097_, lean_object* v_a_2098_){
_start:
{
lean_object* v_res_2099_; 
v_res_2099_ = l_Lasm_JS_Node_ChildProcess_onceMessage(v_self_2096_, v_listener_2097_);
return v_res_2099_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2(void){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2103_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onSpawn___closed__1));
v___x_2104_ = lean_unsigned_to_nat(2u);
v___x_2105_ = lean_mk_empty_array_with_capacity(v___x_2104_);
v___x_2106_ = lean_array_push(v___x_2105_, v___x_2103_);
return v___x_2106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn(lean_object* v_self_2107_, lean_object* v_listener_2108_){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2110_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2111_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2112_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2112_, 0, v_listener_2108_);
lean_ctor_set(v___x_2112_, 1, v___x_2111_);
v___x_2113_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2, &l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2);
v___x_2114_ = lean_array_push(v___x_2113_, v___x_2112_);
v___x_2115_ = l_Lasm_JS_Web_Support_args(v___x_2114_);
v___x_2116_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2107_, v___x_2110_, v___x_2115_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2124_; 
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2119_ = v___x_2116_;
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_a_2117_);
lean_dec(v___x_2116_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2122_; 
if (v_isShared_2120_ == 0)
{
v___x_2122_ = v___x_2119_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2117_);
v___x_2122_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
return v___x_2122_;
}
}
}
else
{
lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2132_; 
v_a_2125_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2132_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2127_ = v___x_2116_;
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2116_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2130_; 
if (v_isShared_2128_ == 0)
{
v___x_2130_ = v___x_2127_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v_a_2125_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn___boxed(lean_object* v_self_2133_, lean_object* v_listener_2134_, lean_object* v_a_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l_Lasm_JS_Node_ChildProcess_onSpawn(v_self_2133_, v_listener_2134_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceSpawn(lean_object* v_self_2137_, lean_object* v_listener_2138_){
_start:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___x_2140_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2141_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2142_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2142_, 0, v_listener_2138_);
lean_ctor_set(v___x_2142_, 1, v___x_2141_);
v___x_2143_ = lean_unsigned_to_nat(2u);
v___x_2144_ = lean_mk_empty_array_with_capacity(v___x_2143_);
lean_dec_ref(v___x_2144_);
v___x_2145_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2, &l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2);
v___x_2146_ = lean_array_push(v___x_2145_, v___x_2142_);
v___x_2147_ = l_Lasm_JS_Web_Support_args(v___x_2146_);
v___x_2148_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2137_, v___x_2140_, v___x_2147_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2151_ = v___x_2148_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_a_2149_);
lean_dec(v___x_2148_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_a_2149_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
}
else
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2164_; 
v_a_2157_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2159_ = v___x_2148_;
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2148_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2160_ == 0)
{
v___x_2162_ = v___x_2159_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_a_2157_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceSpawn___boxed(lean_object* v_self_2165_, lean_object* v_listener_2166_, lean_object* v_a_2167_){
_start:
{
lean_object* v_res_2168_; 
v_res_2168_ = l_Lasm_JS_Node_ChildProcess_onceSpawn(v_self_2165_, v_listener_2166_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(lean_object* v_x_2169_){
_start:
{
if (lean_obj_tag(v_x_2169_) == 0)
{
lean_object* v___x_2170_; 
v___x_2170_ = lean_box(0);
return v___x_2170_;
}
else
{
lean_object* v_val_2171_; 
v_val_2171_ = lean_ctor_get(v_x_2169_, 0);
lean_inc(v_val_2171_);
lean_dec_ref_known(v_x_2169_, 1);
if (lean_obj_tag(v_val_2171_) == 0)
{
double v_value_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
v_value_2172_ = lean_ctor_get_float(v_val_2171_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v_val_2171_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v_val_2171_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_dec(v_val_2171_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
lean_ctor_set_tag(v___x_2174_, 3);
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2178_, 0, v_value_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
else
{
lean_object* v_value_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
v_value_2180_ = lean_ctor_get(v_val_2171_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v_val_2171_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v_val_2171_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_value_2180_);
lean_dec(v_val_2171_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
lean_ctor_set_tag(v___x_2182_, 4);
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_value_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill(lean_object* v_self_2189_, lean_object* v_signal_2190_){
_start:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2192_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_kill___closed__0));
v___x_2193_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(v_signal_2190_);
v___x_2194_ = lean_unsigned_to_nat(1u);
v___x_2195_ = lean_mk_empty_array_with_capacity(v___x_2194_);
v___x_2196_ = lean_array_push(v___x_2195_, v___x_2193_);
v___x_2197_ = l_Lasm_JS_Web_Support_args(v___x_2196_);
v___x_2198_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2189_, v___x_2192_, v___x_2197_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill___boxed(lean_object* v_self_2199_, lean_object* v_signal_2200_, lean_object* v_a_2201_){
_start:
{
lean_object* v_res_2202_; 
v_res_2202_ = l_Lasm_JS_Node_ChildProcess_kill(v_self_2199_, v_signal_2200_);
return v_res_2202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(lean_object* v_x_2203_){
_start:
{
if (lean_obj_tag(v_x_2203_) == 0)
{
lean_object* v___x_2204_; 
v___x_2204_ = lean_box(0);
return v___x_2204_;
}
else
{
lean_object* v_val_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2215_; 
v_val_2205_ = lean_ctor_get(v_x_2203_, 0);
v_isSharedCheck_2215_ = !lean_is_exclusive(v_x_2203_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2207_ = v_x_2203_;
v_isShared_2208_ = v_isSharedCheck_2215_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_val_2205_);
lean_dec(v_x_2203_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2215_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
size_t v_sz_2209_; size_t v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2213_; 
v_sz_2209_ = lean_array_size(v_val_2205_);
v___x_2210_ = ((size_t)0ULL);
v___x_2211_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_2209_, v___x_2210_, v_val_2205_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set_tag(v___x_2207_, 8);
lean_ctor_set(v___x_2207_, 0, v___x_2211_);
v___x_2213_ = v___x_2207_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v___x_2211_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(lean_object* v_x_2216_){
_start:
{
if (lean_obj_tag(v_x_2216_) == 0)
{
lean_object* v___x_2217_; 
v___x_2217_ = lean_box(0);
return v___x_2217_;
}
else
{
lean_object* v_val_2218_; 
v_val_2218_ = lean_ctor_get(v_x_2216_, 0);
lean_inc(v_val_2218_);
lean_dec_ref_known(v_x_2216_, 1);
if (lean_obj_tag(v_val_2218_) == 0)
{
lean_object* v_value_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2226_; 
v_value_2219_ = lean_ctor_get(v_val_2218_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v_val_2218_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2221_ = v_val_2218_;
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_value_2219_);
lean_dec(v_val_2218_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2222_ == 0)
{
lean_ctor_set_tag(v___x_2221_, 4);
v___x_2224_ = v___x_2221_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_value_2219_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
else
{
lean_object* v_value_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v_value_2227_ = lean_ctor_get(v_val_2218_, 0);
lean_inc(v_value_2227_);
lean_dec_ref_known(v_val_2218_, 1);
v___x_2228_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2229_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2229_, 0, v_value_2227_);
lean_ctor_set(v___x_2229_, 1, v___x_2228_);
return v___x_2229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(lean_object* v_x_2230_){
_start:
{
if (lean_obj_tag(v_x_2230_) == 0)
{
lean_object* v___x_2231_; 
v___x_2231_ = lean_box(0);
return v___x_2231_;
}
else
{
lean_object* v_val_2232_; 
v_val_2232_ = lean_ctor_get(v_x_2230_, 0);
lean_inc(v_val_2232_);
lean_dec_ref_known(v_x_2230_, 1);
if (lean_obj_tag(v_val_2232_) == 0)
{
uint8_t v_value_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2240_; 
v_value_2233_ = lean_ctor_get_uint8(v_val_2232_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v_val_2232_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2235_ = v_val_2232_;
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
else
{
lean_dec(v_val_2232_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2238_; 
if (v_isShared_2236_ == 0)
{
lean_ctor_set_tag(v___x_2235_, 2);
v___x_2238_ = v___x_2235_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2239_, 0, v_value_2233_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
}
else
{
lean_object* v_value_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2248_; 
v_value_2241_ = lean_ctor_get(v_val_2232_, 0);
v_isSharedCheck_2248_ = !lean_is_exclusive(v_val_2232_);
if (v_isSharedCheck_2248_ == 0)
{
v___x_2243_ = v_val_2232_;
v_isShared_2244_ = v_isSharedCheck_2248_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_value_2241_);
lean_dec(v_val_2232_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2248_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v___x_2246_; 
if (v_isShared_2244_ == 0)
{
lean_ctor_set_tag(v___x_2243_, 4);
v___x_2246_ = v___x_2243_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2247_; 
v_reuseFailAlloc_2247_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2247_, 0, v_value_2241_);
v___x_2246_ = v_reuseFailAlloc_2247_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
return v___x_2246_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1(lean_object* v_x_2249_){
_start:
{
if (lean_obj_tag(v_x_2249_) == 0)
{
lean_object* v___x_2250_; 
v___x_2250_ = lean_box(0);
return v___x_2250_;
}
else
{
lean_object* v_val_2251_; lean_object* v_cwd_2252_; lean_object* v_env_2253_; lean_object* v_encoding_2254_; lean_object* v_timeout_2255_; lean_object* v_maxBuffer_2256_; lean_object* v_killSignal_2257_; lean_object* v_uid_2258_; lean_object* v_gid_2259_; lean_object* v_windowsHide_2260_; lean_object* v_windowsVerbatimArguments_2261_; lean_object* v_shell_2262_; lean_object* v_signal_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; 
v_val_2251_ = lean_ctor_get(v_x_2249_, 0);
lean_inc(v_val_2251_);
lean_dec_ref_known(v_x_2249_, 1);
v_cwd_2252_ = lean_ctor_get(v_val_2251_, 0);
lean_inc(v_cwd_2252_);
v_env_2253_ = lean_ctor_get(v_val_2251_, 1);
lean_inc(v_env_2253_);
v_encoding_2254_ = lean_ctor_get(v_val_2251_, 2);
lean_inc(v_encoding_2254_);
v_timeout_2255_ = lean_ctor_get(v_val_2251_, 3);
lean_inc(v_timeout_2255_);
v_maxBuffer_2256_ = lean_ctor_get(v_val_2251_, 4);
lean_inc(v_maxBuffer_2256_);
v_killSignal_2257_ = lean_ctor_get(v_val_2251_, 5);
lean_inc(v_killSignal_2257_);
v_uid_2258_ = lean_ctor_get(v_val_2251_, 6);
lean_inc(v_uid_2258_);
v_gid_2259_ = lean_ctor_get(v_val_2251_, 7);
lean_inc(v_gid_2259_);
v_windowsHide_2260_ = lean_ctor_get(v_val_2251_, 8);
lean_inc(v_windowsHide_2260_);
v_windowsVerbatimArguments_2261_ = lean_ctor_get(v_val_2251_, 9);
lean_inc(v_windowsVerbatimArguments_2261_);
v_shell_2262_ = lean_ctor_get(v_val_2251_, 10);
lean_inc(v_shell_2262_);
v_signal_2263_ = lean_ctor_get(v_val_2251_, 11);
lean_inc(v_signal_2263_);
lean_dec(v_val_2251_);
v___x_2264_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_2265_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(v_cwd_2252_);
v___x_2266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2264_);
lean_ctor_set(v___x_2266_, 1, v___x_2265_);
v___x_2267_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1));
v___x_2268_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(v_env_2253_);
v___x_2269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2267_);
lean_ctor_set(v___x_2269_, 1, v___x_2268_);
v___x_2270_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__2));
v___x_2271_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_2254_);
v___x_2272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2270_);
lean_ctor_set(v___x_2272_, 1, v___x_2271_);
v___x_2273_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3));
v___x_2274_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_timeout_2255_);
lean_dec(v_timeout_2255_);
v___x_2275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2273_);
lean_ctor_set(v___x_2275_, 1, v___x_2274_);
v___x_2276_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__4));
v___x_2277_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_maxBuffer_2256_);
lean_dec(v_maxBuffer_2256_);
v___x_2278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2276_);
lean_ctor_set(v___x_2278_, 1, v___x_2277_);
v___x_2279_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5));
v___x_2280_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_2257_);
v___x_2281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2279_);
lean_ctor_set(v___x_2281_, 1, v___x_2280_);
v___x_2282_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6));
v___x_2283_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_uid_2258_);
lean_dec(v_uid_2258_);
v___x_2284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2282_);
lean_ctor_set(v___x_2284_, 1, v___x_2283_);
v___x_2285_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7));
v___x_2286_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_gid_2259_);
lean_dec(v_gid_2259_);
v___x_2287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2285_);
lean_ctor_set(v___x_2287_, 1, v___x_2286_);
v___x_2288_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8));
v___x_2289_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_2260_);
lean_dec(v_windowsHide_2260_);
v___x_2290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2288_);
lean_ctor_set(v___x_2290_, 1, v___x_2289_);
v___x_2291_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9));
v___x_2292_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_2261_);
lean_dec(v_windowsVerbatimArguments_2261_);
v___x_2293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2291_);
lean_ctor_set(v___x_2293_, 1, v___x_2292_);
v___x_2294_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10));
v___x_2295_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_shell_2262_);
v___x_2296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2294_);
lean_ctor_set(v___x_2296_, 1, v___x_2295_);
v___x_2297_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11));
v___x_2298_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2263_);
lean_dec(v_signal_2263_);
v___x_2299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2297_);
lean_ctor_set(v___x_2299_, 1, v___x_2298_);
v___x_2300_ = lean_unsigned_to_nat(12u);
v___x_2301_ = lean_mk_empty_array_with_capacity(v___x_2300_);
v___x_2302_ = lean_array_push(v___x_2301_, v___x_2266_);
v___x_2303_ = lean_array_push(v___x_2302_, v___x_2269_);
v___x_2304_ = lean_array_push(v___x_2303_, v___x_2272_);
v___x_2305_ = lean_array_push(v___x_2304_, v___x_2275_);
v___x_2306_ = lean_array_push(v___x_2305_, v___x_2278_);
v___x_2307_ = lean_array_push(v___x_2306_, v___x_2281_);
v___x_2308_ = lean_array_push(v___x_2307_, v___x_2284_);
v___x_2309_ = lean_array_push(v___x_2308_, v___x_2287_);
v___x_2310_ = lean_array_push(v___x_2309_, v___x_2290_);
v___x_2311_ = lean_array_push(v___x_2310_, v___x_2293_);
v___x_2312_ = lean_array_push(v___x_2311_, v___x_2296_);
v___x_2313_ = lean_array_push(v___x_2312_, v___x_2299_);
v___x_2314_ = l_Lasm_JS_Web_Support_fields(v___x_2313_);
lean_dec_ref(v___x_2313_);
return v___x_2314_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(lean_object* v_x_2315_){
_start:
{
if (lean_obj_tag(v_x_2315_) == 0)
{
lean_object* v___x_2316_; 
v___x_2316_ = lean_box(0);
return v___x_2316_;
}
else
{
lean_object* v_val_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2327_; 
v_val_2317_ = lean_ctor_get(v_x_2315_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v_x_2315_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2319_ = v_x_2315_;
v_isShared_2320_ = v_isSharedCheck_2327_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_val_2317_);
lean_dec(v_x_2315_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2327_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
size_t v_sz_2321_; size_t v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2325_; 
v_sz_2321_ = lean_array_size(v_val_2317_);
v___x_2322_ = ((size_t)0ULL);
v___x_2323_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2321_, v___x_2322_, v_val_2317_);
if (v_isShared_2320_ == 0)
{
lean_ctor_set_tag(v___x_2319_, 7);
lean_ctor_set(v___x_2319_, 0, v___x_2323_);
v___x_2325_ = v___x_2319_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v___x_2323_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1(lean_object* v___f_2337_, lean_object* v_x_2338_){
_start:
{
if (lean_obj_tag(v_x_2338_) == 0)
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2348_; 
lean_dec_ref(v___f_2337_);
v_a_2340_ = lean_ctor_get(v_x_2338_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v_x_2338_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2342_ = v_x_2338_;
v_isShared_2343_ = v_isSharedCheck_2348_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v_x_2338_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2348_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2343_ == 0)
{
v___x_2345_ = v___x_2342_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_a_2340_);
v___x_2345_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
lean_object* v___x_2346_; 
v___x_2346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2346_, 0, v___x_2345_);
return v___x_2346_;
}
}
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2374_; 
v_a_2349_ = lean_ctor_get(v_x_2338_, 0);
v_isSharedCheck_2374_ = !lean_is_exclusive(v_x_2338_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2351_ = v_x_2338_;
v_isShared_2352_ = v_isSharedCheck_2374_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v_x_2338_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2374_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
uint8_t v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v_val_2362_; lean_object* v___x_2365_; 
v___x_2353_ = 0;
v___x_2354_ = lean_unsigned_to_nat(1u);
v___x_2355_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__3));
v___x_2356_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2357_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2357_, 0, v_a_2349_);
lean_ctor_set(v___x_2357_, 1, v___x_2356_);
v___x_2358_ = lean_mk_empty_array_with_capacity(v___x_2354_);
v___x_2359_ = lean_array_push(v___x_2358_, v___x_2357_);
v___x_2360_ = lean_unsigned_to_nat(0u);
v___x_2365_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2355_, v___x_2359_, v___x_2353_);
if (lean_obj_tag(v___x_2365_) == 0)
{
lean_object* v_a_2366_; lean_object* v___x_2368_; 
v_a_2366_ = lean_ctor_get(v___x_2365_, 0);
lean_inc(v_a_2366_);
lean_dec_ref_known(v___x_2365_, 1);
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 0, v_a_2366_);
v___x_2368_ = v___x_2351_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_a_2366_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
v_val_2362_ = v___x_2368_;
goto v___jp_2361_;
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; 
v_a_2370_ = lean_ctor_get(v___x_2365_, 0);
lean_inc(v_a_2370_);
lean_dec_ref_known(v___x_2365_, 1);
if (v_isShared_2352_ == 0)
{
lean_ctor_set_tag(v___x_2351_, 0);
lean_ctor_set(v___x_2351_, 0, v_a_2370_);
v___x_2372_ = v___x_2351_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v_a_2370_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
v_val_2362_ = v___x_2372_;
goto v___jp_2361_;
}
}
v___jp_2361_:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2363_, 0, v_val_2362_);
v___x_2364_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2360_, v___x_2353_, v___x_2363_, v___f_2337_);
return v___x_2364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___boxed(lean_object* v___f_2375_, lean_object* v_x_2376_, lean_object* v___y_2377_){
_start:
{
lean_object* v_res_2378_; 
v_res_2378_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1(v___f_2375_, v_x_2376_);
return v_res_2378_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(uint8_t v_await_2379_, uint64_t v_extra_2380_){
_start:
{
uint64_t v___x_2381_; uint64_t v___y_2383_; 
v___x_2381_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
if (v_await_2379_ == 0)
{
uint64_t v___x_2386_; 
v___x_2386_ = 0ULL;
v___y_2383_ = v___x_2386_;
goto v___jp_2382_;
}
else
{
uint64_t v___x_2387_; 
v___x_2387_ = 2ULL;
v___y_2383_ = v___x_2387_;
goto v___jp_2382_;
}
v___jp_2382_:
{
uint64_t v___x_2384_; uint64_t v___x_2385_; 
v___x_2384_ = lean_uint64_lor(v___x_2381_, v___y_2383_);
v___x_2385_ = lean_uint64_lor(v___x_2384_, v_extra_2380_);
return v___x_2385_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6___boxed(lean_object* v_await_2388_, lean_object* v_extra_2389_){
_start:
{
uint8_t v_await_boxed_2390_; uint64_t v_extra_boxed_2391_; uint64_t v_res_2392_; lean_object* v_r_2393_; 
v_await_boxed_2390_ = lean_unbox(v_await_2388_);
v_extra_boxed_2391_ = lean_unbox_uint64(v_extra_2389_);
lean_dec_ref(v_extra_2389_);
v_res_2392_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(v_await_boxed_2390_, v_extra_boxed_2391_);
v_r_2393_ = lean_box_uint64(v_res_2392_);
return v_r_2393_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7(lean_object* v___f_2394_, lean_object* v_a_2395_, uint32_t v_op_2396_, uint64_t v_flags_2397_, lean_object* v_payload_2398_, lean_object* v_x_2399_){
_start:
{
if (lean_obj_tag(v_x_2399_) == 0)
{
lean_object* v___x_2401_; 
lean_dec_ref(v___f_2394_);
v___x_2401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2401_, 0, v_x_2399_);
return v___x_2401_;
}
else
{
lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2422_; 
v_a_2402_ = lean_ctor_get(v_x_2399_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v_x_2399_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2404_ = v_x_2399_;
v_isShared_2405_ = v_isSharedCheck_2422_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v_x_2399_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2422_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
uint32_t v___x_2406_; lean_object* v___x_2407_; uint8_t v___x_2408_; lean_object* v_val_2410_; lean_object* v___x_2413_; 
v___x_2406_ = 0;
v___x_2407_ = lean_unsigned_to_nat(0u);
v___x_2408_ = 0;
v___x_2413_ = lasm_js_call_into(v_a_2395_, v_op_2396_, v___x_2406_, v_flags_2397_, v_a_2402_, v_payload_2398_);
lean_dec(v_a_2402_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2416_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2414_);
lean_dec_ref_known(v___x_2413_, 1);
if (v_isShared_2405_ == 0)
{
lean_ctor_set(v___x_2404_, 0, v_a_2414_);
v___x_2416_ = v___x_2404_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2414_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
v_val_2410_ = v___x_2416_;
goto v___jp_2409_;
}
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; 
v_a_2418_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2418_);
lean_dec_ref_known(v___x_2413_, 1);
if (v_isShared_2405_ == 0)
{
lean_ctor_set_tag(v___x_2404_, 0);
lean_ctor_set(v___x_2404_, 0, v_a_2418_);
v___x_2420_ = v___x_2404_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2418_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
v_val_2410_ = v___x_2420_;
goto v___jp_2409_;
}
}
v___jp_2409_:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2411_, 0, v_val_2410_);
v___x_2412_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2407_, v___x_2408_, v___x_2411_, v___f_2394_);
return v___x_2412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7___boxed(lean_object* v___f_2423_, lean_object* v_a_2424_, lean_object* v_op_2425_, lean_object* v_flags_2426_, lean_object* v_payload_2427_, lean_object* v_x_2428_, lean_object* v___y_2429_){
_start:
{
uint32_t v_op_boxed_2430_; uint64_t v_flags_boxed_2431_; lean_object* v_res_2432_; 
v_op_boxed_2430_ = lean_unbox_uint32(v_op_2425_);
lean_dec(v_op_2425_);
v_flags_boxed_2431_ = lean_unbox_uint64(v_flags_2426_);
lean_dec_ref(v_flags_2426_);
v_res_2432_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7(v___f_2423_, v_a_2424_, v_op_boxed_2430_, v_flags_boxed_2431_, v_payload_2427_, v_x_2428_);
lean_dec(v_payload_2427_);
lean_dec(v_a_2424_);
return v_res_2432_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5(lean_object* v___x_2433_, uint8_t v___x_2434_, lean_object* v___f_2435_, lean_object* v_a_2436_, uint32_t v_op_2437_, uint64_t v_flags_2438_, lean_object* v_payload_2439_, lean_object* v_x_2440_){
_start:
{
lean_object* v_val_2443_; 
if (lean_obj_tag(v_x_2440_) == 0)
{
lean_object* v___x_2446_; 
lean_dec_ref(v___f_2435_);
lean_dec(v___x_2433_);
v___x_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2446_, 0, v_x_2440_);
return v___x_2446_;
}
else
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2461_; 
v_a_2447_ = lean_ctor_get(v_x_2440_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v_x_2440_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2449_ = v_x_2440_;
v_isShared_2450_ = v_isSharedCheck_2461_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v_x_2440_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2461_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
uint32_t v___x_2451_; lean_object* v___x_2452_; 
v___x_2451_ = 0;
v___x_2452_ = lasm_js_call_into(v_a_2436_, v_op_2437_, v___x_2451_, v_flags_2438_, v_a_2447_, v_payload_2439_);
lean_dec(v_a_2447_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v_a_2453_; lean_object* v___x_2455_; 
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
lean_inc(v_a_2453_);
lean_dec_ref_known(v___x_2452_, 1);
if (v_isShared_2450_ == 0)
{
lean_ctor_set(v___x_2449_, 0, v_a_2453_);
v___x_2455_ = v___x_2449_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_a_2453_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
v_val_2443_ = v___x_2455_;
goto v___jp_2442_;
}
}
else
{
lean_object* v_a_2457_; lean_object* v___x_2459_; 
v_a_2457_ = lean_ctor_get(v___x_2452_, 0);
lean_inc(v_a_2457_);
lean_dec_ref_known(v___x_2452_, 1);
if (v_isShared_2450_ == 0)
{
lean_ctor_set_tag(v___x_2449_, 0);
lean_ctor_set(v___x_2449_, 0, v_a_2457_);
v___x_2459_ = v___x_2449_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_a_2457_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
v_val_2443_ = v___x_2459_;
goto v___jp_2442_;
}
}
}
}
v___jp_2442_:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2444_, 0, v_val_2443_);
v___x_2445_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2433_, v___x_2434_, v___x_2444_, v___f_2435_);
return v___x_2445_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5___boxed(lean_object* v___x_2462_, lean_object* v___x_2463_, lean_object* v___f_2464_, lean_object* v_a_2465_, lean_object* v_op_2466_, lean_object* v_flags_2467_, lean_object* v_payload_2468_, lean_object* v_x_2469_, lean_object* v___y_2470_){
_start:
{
uint8_t v___x_2046__boxed_2471_; uint32_t v_op_boxed_2472_; uint64_t v_flags_boxed_2473_; lean_object* v_res_2474_; 
v___x_2046__boxed_2471_ = lean_unbox(v___x_2463_);
v_op_boxed_2472_ = lean_unbox_uint32(v_op_2466_);
lean_dec(v_op_2466_);
v_flags_boxed_2473_ = lean_unbox_uint64(v_flags_2467_);
lean_dec_ref(v_flags_2467_);
v_res_2474_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5(v___x_2462_, v___x_2046__boxed_2471_, v___f_2464_, v_a_2465_, v_op_boxed_2472_, v_flags_boxed_2473_, v_payload_2468_, v_x_2469_);
lean_dec(v_payload_2468_);
lean_dec(v_a_2465_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3(lean_object* v_a_2475_, lean_object* v_x_2476_){
_start:
{
if (lean_obj_tag(v_x_2476_) == 0)
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2486_; 
v_a_2478_ = lean_ctor_get(v_x_2476_, 0);
v_isSharedCheck_2486_ = !lean_is_exclusive(v_x_2476_);
if (v_isSharedCheck_2486_ == 0)
{
v___x_2480_ = v_x_2476_;
v_isShared_2481_ = v_isSharedCheck_2486_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v_x_2476_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2486_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2483_; 
if (v_isShared_2481_ == 0)
{
v___x_2483_ = v___x_2480_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_a_2478_);
v___x_2483_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
lean_object* v___x_2484_; 
v___x_2484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2483_);
return v___x_2484_;
}
}
}
else
{
lean_object* v___x_2487_; 
lean_dec_ref_known(v_x_2476_, 1);
v___x_2487_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2475_);
return v___x_2487_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed(lean_object* v_a_2488_, lean_object* v_x_2489_, lean_object* v___y_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3(v_a_2488_, v_x_2489_);
lean_dec(v_a_2488_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6(lean_object* v_failurePrefix_2492_, uint32_t v_op_2493_, uint64_t v_flags_2494_, lean_object* v_payload_2495_, lean_object* v___f_2496_, lean_object* v___f_2497_, lean_object* v___f_2498_, lean_object* v_x_2499_){
_start:
{
if (lean_obj_tag(v_x_2499_) == 0)
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2509_; 
lean_dec_ref(v___f_2498_);
lean_dec_ref(v___f_2497_);
lean_dec_ref(v___f_2496_);
lean_dec(v_payload_2495_);
v_a_2501_ = lean_ctor_get(v_x_2499_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v_x_2499_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2503_ = v_x_2499_;
v_isShared_2504_ = v_isSharedCheck_2509_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v_x_2499_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2509_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2506_; 
if (v_isShared_2504_ == 0)
{
v___x_2506_ = v___x_2503_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v_a_2501_);
v___x_2506_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
lean_object* v___x_2507_; 
v___x_2507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2506_);
return v___x_2507_;
}
}
}
else
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2556_; 
v_a_2510_ = lean_ctor_get(v_x_2499_, 0);
v_isSharedCheck_2556_ = !lean_is_exclusive(v_x_2499_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2512_ = v_x_2499_;
v_isShared_2513_ = v_isSharedCheck_2556_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v_x_2499_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2556_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; uint8_t v___x_2516_; 
v___x_2514_ = lean_string_utf8_byte_size(v_failurePrefix_2492_);
v___x_2515_ = lean_unsigned_to_nat(0u);
v___x_2516_ = lean_nat_dec_eq(v___x_2514_, v___x_2515_);
if (v___x_2516_ == 0)
{
lean_object* v___f_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___f_2521_; lean_object* v_val_2523_; lean_object* v___x_2528_; 
lean_dec_ref(v___f_2498_);
lean_inc(v_a_2510_);
v___f_2517_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2517_, 0, v_a_2510_);
v___x_2518_ = lean_box(v___x_2516_);
v___x_2519_ = lean_box_uint32(v_op_2493_);
v___x_2520_ = lean_box_uint64(v_flags_2494_);
lean_inc(v_payload_2495_);
v___f_2521_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2521_, 0, v___x_2515_);
lean_closure_set(v___f_2521_, 1, v___x_2518_);
lean_closure_set(v___f_2521_, 2, v___f_2517_);
lean_closure_set(v___f_2521_, 3, v_a_2510_);
lean_closure_set(v___f_2521_, 4, v___x_2519_);
lean_closure_set(v___f_2521_, 5, v___x_2520_);
lean_closure_set(v___f_2521_, 6, v_payload_2495_);
v___x_2528_ = l_Lasm_JS_Wire_encodeIO(v_payload_2495_);
lean_dec(v_payload_2495_);
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2529_; lean_object* v___x_2531_; 
v_a_2529_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2529_);
lean_dec_ref_known(v___x_2528_, 1);
if (v_isShared_2513_ == 0)
{
lean_ctor_set(v___x_2512_, 0, v_a_2529_);
v___x_2531_ = v___x_2512_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2529_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
v_val_2523_ = v___x_2531_;
goto v___jp_2522_;
}
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2535_; 
v_a_2533_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2528_, 1);
if (v_isShared_2513_ == 0)
{
lean_ctor_set_tag(v___x_2512_, 0);
lean_ctor_set(v___x_2512_, 0, v_a_2533_);
v___x_2535_ = v___x_2512_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_a_2533_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
v_val_2523_ = v___x_2535_;
goto v___jp_2522_;
}
}
v___jp_2522_:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2524_, 0, v_val_2523_);
v___x_2525_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2515_, v___x_2516_, v___x_2524_, v___f_2521_);
v___x_2526_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2515_, v___x_2516_, v___x_2525_, v___f_2496_);
v___x_2527_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2515_, v___x_2516_, v___x_2526_, v___f_2497_);
return v___x_2527_;
}
}
else
{
lean_object* v___f_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___f_2540_; uint8_t v___x_2541_; lean_object* v_val_2543_; lean_object* v___x_2547_; 
lean_dec_ref(v___f_2497_);
lean_dec_ref(v___f_2496_);
lean_inc(v_a_2510_);
v___f_2537_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2537_, 0, v_a_2510_);
v___x_2538_ = lean_box_uint32(v_op_2493_);
v___x_2539_ = lean_box_uint64(v_flags_2494_);
lean_inc(v_payload_2495_);
v___f_2540_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2540_, 0, v___f_2537_);
lean_closure_set(v___f_2540_, 1, v_a_2510_);
lean_closure_set(v___f_2540_, 2, v___x_2538_);
lean_closure_set(v___f_2540_, 3, v___x_2539_);
lean_closure_set(v___f_2540_, 4, v_payload_2495_);
v___x_2541_ = 0;
v___x_2547_ = l_Lasm_JS_Wire_encodeIO(v_payload_2495_);
lean_dec(v_payload_2495_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_a_2548_; lean_object* v___x_2550_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref_known(v___x_2547_, 1);
if (v_isShared_2513_ == 0)
{
lean_ctor_set(v___x_2512_, 0, v_a_2548_);
v___x_2550_ = v___x_2512_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v_a_2548_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
v_val_2543_ = v___x_2550_;
goto v___jp_2542_;
}
}
else
{
lean_object* v_a_2552_; lean_object* v___x_2554_; 
v_a_2552_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2547_, 1);
if (v_isShared_2513_ == 0)
{
lean_ctor_set_tag(v___x_2512_, 0);
lean_ctor_set(v___x_2512_, 0, v_a_2552_);
v___x_2554_ = v___x_2512_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_a_2552_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
v_val_2543_ = v___x_2554_;
goto v___jp_2542_;
}
}
v___jp_2542_:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v_val_2543_);
v___x_2545_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2515_, v___x_2541_, v___x_2544_, v___f_2540_);
v___x_2546_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2515_, v___x_2541_, v___x_2545_, v___f_2498_);
return v___x_2546_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6___boxed(lean_object* v_failurePrefix_2557_, lean_object* v_op_2558_, lean_object* v_flags_2559_, lean_object* v_payload_2560_, lean_object* v___f_2561_, lean_object* v___f_2562_, lean_object* v___f_2563_, lean_object* v_x_2564_, lean_object* v___y_2565_){
_start:
{
uint32_t v_op_boxed_2566_; uint64_t v_flags_boxed_2567_; lean_object* v_res_2568_; 
v_op_boxed_2566_ = lean_unbox_uint32(v_op_2558_);
lean_dec(v_op_2558_);
v_flags_boxed_2567_ = lean_unbox_uint64(v_flags_2559_);
lean_dec_ref(v_flags_2559_);
v_res_2568_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6(v_failurePrefix_2557_, v_op_boxed_2566_, v_flags_boxed_2567_, v_payload_2560_, v___f_2561_, v___f_2562_, v___f_2563_, v_x_2564_);
lean_dec_ref(v_failurePrefix_2557_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8(lean_object* v___f_2569_, lean_object* v_x_2570_){
_start:
{
if (lean_obj_tag(v_x_2570_) == 0)
{
lean_object* v_a_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2580_; 
lean_dec_ref(v___f_2569_);
v_a_2572_ = lean_ctor_get(v_x_2570_, 0);
v_isSharedCheck_2580_ = !lean_is_exclusive(v_x_2570_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2574_ = v_x_2570_;
v_isShared_2575_ = v_isSharedCheck_2580_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_a_2572_);
lean_dec(v_x_2570_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2580_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2579_; 
v_reuseFailAlloc_2579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2579_, 0, v_a_2572_);
v___x_2577_ = v_reuseFailAlloc_2579_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
lean_object* v___x_2578_; 
v___x_2578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2577_);
return v___x_2578_;
}
}
}
else
{
lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2592_; 
v_isSharedCheck_2592_ = !lean_is_exclusive(v_x_2570_);
if (v_isSharedCheck_2592_ == 0)
{
lean_object* v_unused_2593_; 
v_unused_2593_ = lean_ctor_get(v_x_2570_, 0);
lean_dec(v_unused_2593_);
v___x_2582_ = v_x_2570_;
v_isShared_2583_ = v_isSharedCheck_2592_;
goto v_resetjp_2581_;
}
else
{
lean_dec(v_x_2570_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2592_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2584_; uint8_t v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2588_; 
v___x_2584_ = lean_unsigned_to_nat(0u);
v___x_2585_ = 0;
v___x_2586_ = lean_io_promise_new();
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 0, v___x_2586_);
v___x_2588_ = v___x_2582_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v___x_2586_);
v___x_2588_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2588_);
v___x_2590_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2584_, v___x_2585_, v___x_2589_, v___f_2569_);
return v___x_2590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8___boxed(lean_object* v___f_2594_, lean_object* v_x_2595_, lean_object* v___y_2596_){
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8(v___f_2594_, v_x_2595_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(lean_object* v_d_2605_, lean_object* v_key_2606_){
_start:
{
if (lean_obj_tag(v_d_2605_) == 8)
{
lean_object* v___x_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2652_; 
v___x_2607_ = l_Lasm_JS_Data_field(v_d_2605_, v_key_2606_);
v_isSharedCheck_2652_ = !lean_is_exclusive(v_d_2605_);
if (v_isSharedCheck_2652_ == 0)
{
lean_object* v_unused_2653_; 
v_unused_2653_ = lean_ctor_get(v_d_2605_, 0);
lean_dec(v_unused_2653_);
v___x_2609_ = v_d_2605_;
v_isShared_2610_ = v_isSharedCheck_2652_;
goto v_resetjp_2608_;
}
else
{
lean_dec(v_d_2605_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2652_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
switch(lean_obj_tag(v___x_2607_))
{
case 4:
{
lean_object* v_s_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2621_; 
v_s_2611_ = lean_ctor_get(v___x_2607_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2613_ = v___x_2607_;
v_isShared_2614_ = v_isSharedCheck_2621_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_s_2611_);
lean_dec(v___x_2607_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2621_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
lean_ctor_set_tag(v___x_2613_, 0);
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v_s_2611_);
v___x_2616_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
lean_object* v___x_2618_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set_tag(v___x_2609_, 1);
lean_ctor_set(v___x_2609_, 0, v___x_2616_);
v___x_2618_ = v___x_2609_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v___x_2616_);
v___x_2618_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
return v___x_2618_;
}
}
}
}
case 6:
{
lean_object* v_b_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2632_; 
v_b_2622_ = lean_ctor_get(v___x_2607_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2624_ = v___x_2607_;
v_isShared_2625_ = v_isSharedCheck_2632_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_b_2622_);
lean_dec(v___x_2607_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2632_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
lean_object* v___x_2627_; 
if (v_isShared_2625_ == 0)
{
lean_ctor_set_tag(v___x_2624_, 1);
v___x_2627_ = v___x_2624_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_b_2622_);
v___x_2627_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
lean_object* v___x_2629_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set_tag(v___x_2609_, 1);
lean_ctor_set(v___x_2609_, 0, v___x_2627_);
v___x_2629_ = v___x_2609_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v___x_2627_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
default: 
{
lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; uint8_t v___x_2643_; 
v___x_2633_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__0));
v___x_2634_ = lean_string_append(v___x_2633_, v_key_2606_);
v___x_2635_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__1));
v___x_2636_ = lean_string_append(v___x_2634_, v___x_2635_);
v___x_2637_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__2));
v___x_2638_ = lean_string_append(v___x_2636_, v___x_2637_);
v___x_2639_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__3));
v___x_2640_ = lean_string_append(v___x_2638_, v___x_2639_);
v___x_2641_ = l_Lasm_JS_Data_describe(v___x_2607_);
v___x_2642_ = lean_string_append(v___x_2640_, v___x_2641_);
lean_dec_ref(v___x_2641_);
v___x_2643_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2647_; 
v___x_2644_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___x_2645_ = lean_string_append(v___x_2642_, v___x_2644_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set_tag(v___x_2609_, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2645_);
v___x_2647_ = v___x_2609_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v___x_2645_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
else
{
lean_object* v___x_2650_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set_tag(v___x_2609_, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2642_);
v___x_2650_ = v___x_2609_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v___x_2642_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
}
}
}
else
{
lean_object* v___x_2654_; 
lean_dec(v_d_2605_);
v___x_2654_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__5));
return v___x_2654_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___boxed(lean_object* v_d_2655_, lean_object* v_key_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_2655_, v_key_2656_);
lean_dec_ref(v_key_2656_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(lean_object* v_context_2658_, lean_object* v_d_2659_){
_start:
{
lean_object* v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2668_; lean_object* v_received_2669_; lean_object* v___y_2688_; lean_object* v_a_2691_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2715_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0));
lean_inc(v_d_2659_);
v___x_2716_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_2659_, v___x_2715_);
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v_a_2717_; 
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
lean_inc(v_a_2717_);
lean_dec_ref_known(v___x_2716_, 1);
v_a_2691_ = v_a_2717_;
goto v___jp_2690_;
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v_a_2718_ = lean_ctor_get(v___x_2716_, 0);
lean_inc(v_a_2718_);
lean_dec_ref_known(v___x_2716_, 1);
v___x_2719_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1));
lean_inc(v_d_2659_);
v___x_2720_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_2659_, v___x_2719_);
if (lean_obj_tag(v___x_2720_) == 0)
{
lean_object* v_a_2721_; 
lean_dec(v_a_2718_);
v_a_2721_ = lean_ctor_get(v___x_2720_, 0);
lean_inc(v_a_2721_);
lean_dec_ref_known(v___x_2720_, 1);
v_a_2691_ = v_a_2721_;
goto v___jp_2690_;
}
else
{
lean_object* v_a_2722_; lean_object* v___x_2724_; uint8_t v_isShared_2725_; uint8_t v_isSharedCheck_2730_; 
lean_dec(v_d_2659_);
v_a_2722_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2724_ = v___x_2720_;
v_isShared_2725_ = v_isSharedCheck_2730_;
goto v_resetjp_2723_;
}
else
{
lean_inc(v_a_2722_);
lean_dec(v___x_2720_);
v___x_2724_ = lean_box(0);
v_isShared_2725_ = v_isSharedCheck_2730_;
goto v_resetjp_2723_;
}
v_resetjp_2723_:
{
lean_object* v___x_2726_; lean_object* v___x_2728_; 
v___x_2726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2726_, 0, v_a_2718_);
lean_ctor_set(v___x_2726_, 1, v_a_2722_);
if (v_isShared_2725_ == 0)
{
lean_ctor_set_tag(v___x_2724_, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2726_);
v___x_2728_ = v___x_2724_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v___x_2726_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
v___jp_2661_:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; 
v___x_2664_ = lean_string_append(v___y_2662_, v___y_2663_);
lean_dec_ref(v___y_2663_);
v___x_2665_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2664_);
v___x_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2665_);
return v___x_2666_;
}
v___jp_2667_:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; 
v___x_2670_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_2671_ = lean_string_append(v___x_2670_, v_context_2658_);
v___x_2672_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_2673_ = lean_string_append(v___x_2671_, v___x_2672_);
v___x_2674_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__1));
v___x_2675_ = lean_string_append(v___x_2673_, v___x_2674_);
v___x_2676_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_2677_ = lean_string_append(v___x_2675_, v___x_2676_);
v___x_2678_ = lean_string_append(v___x_2677_, v_received_2669_);
lean_dec_ref(v_received_2669_);
v___x_2679_ = lean_string_utf8_byte_size(v___y_2668_);
v___x_2680_ = lean_unsigned_to_nat(0u);
v___x_2681_ = lean_nat_dec_eq(v___x_2679_, v___x_2680_);
if (v___x_2681_ == 0)
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2682_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__4));
v___x_2683_ = lean_string_append(v___x_2682_, v___y_2668_);
lean_dec_ref(v___y_2668_);
v___x_2684_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__5));
v___x_2685_ = lean_string_append(v___x_2683_, v___x_2684_);
v___y_2662_ = v___x_2678_;
v___y_2663_ = v___x_2685_;
goto v___jp_2661_;
}
else
{
lean_object* v___x_2686_; 
lean_dec_ref(v___y_2668_);
v___x_2686_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___y_2662_ = v___x_2678_;
v___y_2663_ = v___x_2686_;
goto v___jp_2661_;
}
}
v___jp_2687_:
{
lean_object* v___x_2689_; 
v___x_2689_ = l_Lasm_JS_Data_describe(v_d_2659_);
v___y_2668_ = v___y_2688_;
v_received_2669_ = v___x_2689_;
goto v___jp_2667_;
}
v___jp_2690_:
{
if (lean_obj_tag(v_d_2659_) == 9)
{
lean_object* v_value_2692_; lean_object* v_description_2693_; lean_object* v___x_2694_; uint8_t v___x_2695_; 
v_value_2692_ = lean_ctor_get(v_d_2659_, 0);
v_description_2693_ = lean_ctor_get(v_d_2659_, 1);
v___x_2694_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2695_ = lean_string_dec_eq(v_description_2693_, v___x_2694_);
if (v___x_2695_ == 0)
{
v___y_2688_ = v_a_2691_;
goto v___jp_2687_;
}
else
{
lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2712_; 
lean_inc(v_value_2692_);
v_isSharedCheck_2712_ = !lean_is_exclusive(v_d_2659_);
if (v_isSharedCheck_2712_ == 0)
{
lean_object* v_unused_2713_; lean_object* v_unused_2714_; 
v_unused_2713_ = lean_ctor_get(v_d_2659_, 1);
lean_dec(v_unused_2713_);
v_unused_2714_ = lean_ctor_get(v_d_2659_, 0);
lean_dec(v_unused_2714_);
v___x_2697_ = v_d_2659_;
v_isShared_2698_ = v_isSharedCheck_2712_;
goto v_resetjp_2696_;
}
else
{
lean_dec(v_d_2659_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2712_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
uint32_t v___x_2699_; uint64_t v___x_2700_; lean_object* v___x_2702_; 
v___x_2699_ = 206;
v___x_2700_ = 0ULL;
lean_inc(v_value_2692_);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 1, v___x_2694_);
v___x_2702_ = v___x_2697_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v_value_2692_);
lean_ctor_set(v_reuseFailAlloc_2711_, 1, v___x_2694_);
v___x_2702_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
uint32_t v___x_2703_; lean_object* v___x_2704_; 
v___x_2703_ = lasm_js_value_handle(v_value_2692_);
lean_dec(v_value_2692_);
v___x_2704_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2699_, v___x_2700_, v___x_2702_, v___x_2703_);
lean_dec_ref(v___x_2702_);
if (lean_obj_tag(v___x_2704_) == 0)
{
lean_object* v_a_2705_; uint8_t v___x_2706_; 
v_a_2705_ = lean_ctor_get(v___x_2704_, 0);
lean_inc(v_a_2705_);
lean_dec_ref_known(v___x_2704_, 1);
v___x_2706_ = lean_string_validate_utf8(v_a_2705_);
if (v___x_2706_ == 0)
{
lean_object* v___x_2707_; lean_object* v___x_2708_; 
lean_dec(v_a_2705_);
v___x_2707_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_2708_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2707_);
v___y_2668_ = v_a_2691_;
v_received_2669_ = v___x_2708_;
goto v___jp_2667_;
}
else
{
lean_object* v___x_2709_; 
v___x_2709_ = lean_string_from_utf8_unchecked(v_a_2705_);
v___y_2668_ = v_a_2691_;
v_received_2669_ = v___x_2709_;
goto v___jp_2667_;
}
}
else
{
lean_object* v___x_2710_; 
lean_dec_ref_known(v___x_2704_, 1);
v___x_2710_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v___y_2668_ = v_a_2691_;
v_received_2669_ = v___x_2710_;
goto v___jp_2667_;
}
}
}
}
}
else
{
v___y_2688_ = v_a_2691_;
goto v___jp_2687_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8___boxed(lean_object* v_context_2731_, lean_object* v_d_2732_, lean_object* v_a_2733_){
_start:
{
lean_object* v_res_2734_; 
v_res_2734_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(v_context_2731_, v_d_2732_);
lean_dec_ref(v_context_2731_);
return v_res_2734_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0(lean_object* v_context_2735_, lean_object* v_x_2736_){
_start:
{
lean_object* v_val_2739_; 
if (lean_obj_tag(v_x_2736_) == 0)
{
lean_object* v_a_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2749_; 
v_a_2741_ = lean_ctor_get(v_x_2736_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v_x_2736_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2743_ = v_x_2736_;
v_isShared_2744_ = v_isSharedCheck_2749_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_a_2741_);
lean_dec(v_x_2736_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2749_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v___x_2746_; 
if (v_isShared_2744_ == 0)
{
v___x_2746_ = v___x_2743_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2741_);
v___x_2746_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
lean_object* v___x_2747_; 
v___x_2747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2746_);
return v___x_2747_;
}
}
}
else
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2763_; 
v_a_2750_ = lean_ctor_get(v_x_2736_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v_x_2736_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2752_ = v_x_2736_;
v_isShared_2753_ = v_isSharedCheck_2763_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v_x_2736_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2763_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2754_; 
v___x_2754_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(v_context_2735_, v_a_2750_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; lean_object* v___x_2757_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
lean_inc(v_a_2755_);
lean_dec_ref_known(v___x_2754_, 1);
if (v_isShared_2753_ == 0)
{
lean_ctor_set(v___x_2752_, 0, v_a_2755_);
v___x_2757_ = v___x_2752_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_a_2755_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
v_val_2739_ = v___x_2757_;
goto v___jp_2738_;
}
}
else
{
lean_object* v_a_2759_; lean_object* v___x_2761_; 
v_a_2759_ = lean_ctor_get(v___x_2754_, 0);
lean_inc(v_a_2759_);
lean_dec_ref_known(v___x_2754_, 1);
if (v_isShared_2753_ == 0)
{
lean_ctor_set_tag(v___x_2752_, 0);
lean_ctor_set(v___x_2752_, 0, v_a_2759_);
v___x_2761_ = v___x_2752_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2759_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
v_val_2739_ = v___x_2761_;
goto v___jp_2738_;
}
}
}
}
v___jp_2738_:
{
lean_object* v___x_2740_; 
v___x_2740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2740_, 0, v_val_2739_);
return v___x_2740_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0___boxed(lean_object* v_context_2764_, lean_object* v_x_2765_, lean_object* v___y_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0(v_context_2764_, v_x_2765_);
lean_dec_ref(v_context_2764_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1(lean_object* v___f_2768_, lean_object* v_bytes_2769_){
_start:
{
lean_object* v___x_2771_; uint8_t v___x_2772_; lean_object* v_val_2774_; lean_object* v___x_2777_; 
v___x_2771_ = lean_unsigned_to_nat(0u);
v___x_2772_ = 0;
v___x_2777_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2769_);
if (lean_obj_tag(v___x_2777_) == 0)
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2785_; 
v_a_2778_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2785_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2785_ == 0)
{
v___x_2780_ = v___x_2777_;
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_a_2778_);
lean_dec(v___x_2777_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2783_; 
if (v_isShared_2781_ == 0)
{
lean_ctor_set_tag(v___x_2780_, 1);
v___x_2783_ = v___x_2780_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v_a_2778_);
v___x_2783_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
v_val_2774_ = v___x_2783_;
goto v___jp_2773_;
}
}
}
else
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2793_; 
v_a_2786_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2788_ = v___x_2777_;
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v___x_2777_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2791_; 
if (v_isShared_2789_ == 0)
{
lean_ctor_set_tag(v___x_2788_, 0);
v___x_2791_ = v___x_2788_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_a_2786_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
v_val_2774_ = v___x_2791_;
goto v___jp_2773_;
}
}
}
v___jp_2773_:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2775_, 0, v_val_2774_);
v___x_2776_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2771_, v___x_2772_, v___x_2775_, v___f_2768_);
return v___x_2776_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1___boxed(lean_object* v___f_2794_, lean_object* v_bytes_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v_res_2797_; 
v_res_2797_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1(v___f_2794_, v_bytes_2795_);
lean_dec_ref(v_bytes_2795_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4(lean_object* v_failurePrefix_2798_, lean_object* v_x_2799_){
_start:
{
if (lean_obj_tag(v_x_2799_) == 0)
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2812_; 
v_a_2801_ = lean_ctor_get(v_x_2799_, 0);
v_isSharedCheck_2812_ = !lean_is_exclusive(v_x_2799_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2803_ = v_x_2799_;
v_isShared_2804_ = v_isSharedCheck_2812_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v_x_2799_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2812_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2809_; 
v___x_2805_ = lean_io_error_to_string(v_a_2801_);
v___x_2806_ = lean_string_append(v_failurePrefix_2798_, v___x_2805_);
lean_dec_ref(v___x_2805_);
v___x_2807_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2806_);
if (v_isShared_2804_ == 0)
{
lean_ctor_set(v___x_2803_, 0, v___x_2807_);
v___x_2809_ = v___x_2803_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v___x_2807_);
v___x_2809_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
lean_object* v___x_2810_; 
v___x_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2810_, 0, v___x_2809_);
return v___x_2810_;
}
}
}
else
{
lean_object* v___x_2813_; 
lean_dec_ref(v_failurePrefix_2798_);
v___x_2813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2813_, 0, v_x_2799_);
return v___x_2813_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4___boxed(lean_object* v_failurePrefix_2814_, lean_object* v_x_2815_, lean_object* v___y_2816_){
_start:
{
lean_object* v_res_2817_; 
v_res_2817_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4(v_failurePrefix_2814_, v_x_2815_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2(lean_object* v___f_2818_, lean_object* v_x_2819_){
_start:
{
if (lean_obj_tag(v_x_2819_) == 0)
{
lean_object* v_a_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2829_; 
lean_dec_ref(v___f_2818_);
v_a_2821_ = lean_ctor_get(v_x_2819_, 0);
v_isSharedCheck_2829_ = !lean_is_exclusive(v_x_2819_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2823_ = v_x_2819_;
v_isShared_2824_ = v_isSharedCheck_2829_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_a_2821_);
lean_dec(v_x_2819_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2829_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v_a_2821_);
v___x_2826_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
lean_object* v___x_2827_; 
v___x_2827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2826_);
return v___x_2827_;
}
}
}
else
{
lean_object* v_a_2830_; lean_object* v___x_2831_; 
v_a_2830_ = lean_ctor_get(v_x_2819_, 0);
lean_inc(v_a_2830_);
lean_dec_ref_known(v_x_2819_, 1);
v___x_2831_ = lean_apply_2(v___f_2818_, v_a_2830_, lean_box(0));
return v___x_2831_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2___boxed(lean_object* v___f_2832_, lean_object* v_x_2833_, lean_object* v___y_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2(v___f_2832_, v_x_2833_);
return v_res_2835_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(lean_object* v_context_2836_, uint32_t v_op_2837_, uint64_t v_flags_2838_, lean_object* v_payload_2839_, lean_object* v_failurePrefix_2840_){
_start:
{
lean_object* v___f_2842_; lean_object* v___f_2843_; lean_object* v___f_2844_; lean_object* v___f_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___f_2848_; lean_object* v___f_2849_; lean_object* v___x_2850_; uint8_t v___x_2851_; lean_object* v_val_2853_; lean_object* v___x_2856_; 
v___f_2842_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2842_, 0, v_context_2836_);
v___f_2843_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2843_, 0, v___f_2842_);
v___f_2844_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2844_, 0, v___f_2843_);
lean_inc_ref(v_failurePrefix_2840_);
v___f_2845_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2845_, 0, v_failurePrefix_2840_);
v___x_2846_ = lean_box_uint32(v_op_2837_);
v___x_2847_ = lean_box_uint64(v_flags_2838_);
lean_inc_ref(v___f_2844_);
v___f_2848_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2848_, 0, v_failurePrefix_2840_);
lean_closure_set(v___f_2848_, 1, v___x_2846_);
lean_closure_set(v___f_2848_, 2, v___x_2847_);
lean_closure_set(v___f_2848_, 3, v_payload_2839_);
lean_closure_set(v___f_2848_, 4, v___f_2845_);
lean_closure_set(v___f_2848_, 5, v___f_2844_);
lean_closure_set(v___f_2848_, 6, v___f_2844_);
v___f_2849_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2849_, 0, v___f_2848_);
v___x_2850_ = lean_unsigned_to_nat(0u);
v___x_2851_ = 0;
v___x_2856_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2856_) == 0)
{
lean_object* v_a_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2864_; 
v_a_2857_ = lean_ctor_get(v___x_2856_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2856_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2859_ = v___x_2856_;
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_a_2857_);
lean_dec(v___x_2856_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2862_; 
if (v_isShared_2860_ == 0)
{
lean_ctor_set_tag(v___x_2859_, 1);
v___x_2862_ = v___x_2859_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_a_2857_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
v_val_2853_ = v___x_2862_;
goto v___jp_2852_;
}
}
}
else
{
lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2872_; 
v_a_2865_ = lean_ctor_get(v___x_2856_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2856_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2867_ = v___x_2856_;
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_dec(v___x_2856_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2870_; 
if (v_isShared_2868_ == 0)
{
lean_ctor_set_tag(v___x_2867_, 0);
v___x_2870_ = v___x_2867_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_a_2865_);
v___x_2870_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
v_val_2853_ = v___x_2870_;
goto v___jp_2852_;
}
}
}
v___jp_2852_:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2854_, 0, v_val_2853_);
v___x_2855_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2850_, v___x_2851_, v___x_2854_, v___f_2849_);
return v___x_2855_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___boxed(lean_object* v_context_2873_, lean_object* v_op_2874_, lean_object* v_flags_2875_, lean_object* v_payload_2876_, lean_object* v_failurePrefix_2877_, lean_object* v_a_2878_){
_start:
{
uint32_t v_op_boxed_2879_; uint64_t v_flags_boxed_2880_; lean_object* v_res_2881_; 
v_op_boxed_2879_ = lean_unbox_uint32(v_op_2874_);
lean_dec(v_op_2874_);
v_flags_boxed_2880_ = lean_unbox_uint64(v_flags_2875_);
lean_dec_ref(v_flags_2875_);
v_res_2881_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(v_context_2873_, v_op_boxed_2879_, v_flags_boxed_2880_, v_payload_2876_, v_failurePrefix_2877_);
return v_res_2881_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1(void){
_start:
{
uint64_t v___x_2883_; uint8_t v___x_2884_; uint64_t v___x_2885_; 
v___x_2883_ = 0ULL;
v___x_2884_ = 0;
v___x_2885_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(v___x_2884_, v___x_2883_);
return v___x_2885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(lean_object* v_f_2886_, lean_object* v_args_2887_, lean_object* v_this_2888_){
_start:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; uint32_t v___x_2893_; uint64_t v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
v___x_2890_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2891_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2891_, 0, v_f_2886_);
lean_ctor_set(v___x_2891_, 1, v___x_2890_);
v___x_2892_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__0));
v___x_2893_ = 205;
v___x_2894_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1, &l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1);
v___x_2895_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2895_, 0, v_args_2887_);
v___x_2896_ = lean_unsigned_to_nat(3u);
v___x_2897_ = lean_mk_empty_array_with_capacity(v___x_2896_);
v___x_2898_ = lean_array_push(v___x_2897_, v___x_2891_);
v___x_2899_ = lean_array_push(v___x_2898_, v_this_2888_);
v___x_2900_ = lean_array_push(v___x_2899_, v___x_2895_);
v___x_2901_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2900_);
v___x_2902_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(v___x_2892_, v___x_2893_, v___x_2894_, v___x_2901_, v___x_2890_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___boxed(lean_object* v_f_2903_, lean_object* v_args_2904_, lean_object* v_this_2905_, lean_object* v___y_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(v_f_2903_, v_args_2904_, v_this_2905_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0(lean_object* v_args_2908_, lean_object* v_x_2909_){
_start:
{
if (lean_obj_tag(v_x_2909_) == 0)
{
lean_object* v_a_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2919_; 
lean_dec_ref(v_args_2908_);
v_a_2911_ = lean_ctor_get(v_x_2909_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v_x_2909_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2913_ = v_x_2909_;
v_isShared_2914_ = v_isSharedCheck_2919_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_a_2911_);
lean_dec(v_x_2909_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2919_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2916_; 
if (v_isShared_2914_ == 0)
{
v___x_2916_ = v___x_2913_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2911_);
v___x_2916_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
lean_object* v___x_2917_; 
v___x_2917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2916_);
return v___x_2917_;
}
}
}
else
{
lean_object* v_a_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
v_a_2920_ = lean_ctor_get(v_x_2909_, 0);
lean_inc(v_a_2920_);
lean_dec_ref_known(v_x_2909_, 1);
v___x_2921_ = lean_box(0);
v___x_2922_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(v_a_2920_, v_args_2908_, v___x_2921_);
return v___x_2922_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0___boxed(lean_object* v_args_2923_, lean_object* v_x_2924_, lean_object* v___y_2925_){
_start:
{
lean_object* v_res_2926_; 
v_res_2926_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0(v_args_2923_, v_x_2924_);
return v_res_2926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(lean_object* v_module_2928_, lean_object* v_path_2929_, lean_object* v_args_2930_){
_start:
{
lean_object* v___f_2932_; lean_object* v___f_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; uint8_t v___x_2938_; lean_object* v_val_2940_; lean_object* v___x_2943_; 
v___f_2932_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2932_, 0, v_args_2930_);
v___f_2933_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2933_, 0, v___f_2932_);
v___x_2934_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___closed__0));
v___x_2935_ = lean_unsigned_to_nat(0u);
v___x_2936_ = lean_box(0);
v___x_2937_ = l_String_splitOnAux(v_path_2929_, v___x_2934_, v___x_2935_, v___x_2935_, v___x_2935_, v___x_2936_);
v___x_2938_ = 0;
v___x_2943_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v_module_2928_, v___x_2937_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v_a_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2951_; 
v_a_2944_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2946_ = v___x_2943_;
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_a_2944_);
lean_dec(v___x_2943_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v___x_2949_; 
if (v_isShared_2947_ == 0)
{
lean_ctor_set_tag(v___x_2946_, 1);
v___x_2949_ = v___x_2946_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_a_2944_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
v_val_2940_ = v___x_2949_;
goto v___jp_2939_;
}
}
}
else
{
lean_object* v_a_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2959_; 
v_a_2952_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_2959_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2954_ = v___x_2943_;
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_a_2952_);
lean_dec(v___x_2943_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2957_; 
if (v_isShared_2955_ == 0)
{
lean_ctor_set_tag(v___x_2954_, 0);
v___x_2957_ = v___x_2954_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v_a_2952_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
v_val_2940_ = v___x_2957_;
goto v___jp_2939_;
}
}
}
v___jp_2939_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2941_, 0, v_val_2940_);
v___x_2942_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2935_, v___x_2938_, v___x_2941_, v___f_2933_);
return v___x_2942_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___boxed(lean_object* v_module_2960_, lean_object* v_path_2961_, lean_object* v_args_2962_, lean_object* v_a_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(v_module_2960_, v_path_2961_, v_args_2962_);
lean_dec_ref(v_path_2961_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile(lean_object* v_file_2967_, lean_object* v_args_2968_, lean_object* v_options_2969_){
_start:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2971_ = ((lean_object*)(l_Lasm_JS_Node_child__process_execFile___closed__0));
v___x_2972_ = ((lean_object*)(l_Lasm_JS_Node_child__process_execFile___closed__1));
v___x_2973_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2973_, 0, v_file_2967_);
v___x_2974_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(v_args_2968_);
v___x_2975_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1(v_options_2969_);
v___x_2976_ = lean_unsigned_to_nat(3u);
v___x_2977_ = lean_mk_empty_array_with_capacity(v___x_2976_);
v___x_2978_ = lean_array_push(v___x_2977_, v___x_2973_);
v___x_2979_ = lean_array_push(v___x_2978_, v___x_2974_);
v___x_2980_ = lean_array_push(v___x_2979_, v___x_2975_);
v___x_2981_ = l_Lasm_JS_Web_Support_args(v___x_2980_);
v___x_2982_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(v___x_2971_, v___x_2972_, v___x_2981_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile___boxed(lean_object* v_file_2983_, lean_object* v_args_2984_, lean_object* v_options_2985_, lean_object* v_a_2986_){
_start:
{
lean_object* v_res_2987_; 
v_res_2987_ = l_Lasm_JS_Node_child__process_execFile(v_file_2983_, v_args_2984_, v_options_2985_);
return v_res_2987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(lean_object* v_x_2988_){
_start:
{
if (lean_obj_tag(v_x_2988_) == 0)
{
lean_object* v___x_2989_; 
v___x_2989_ = lean_box(0);
return v___x_2989_;
}
else
{
lean_object* v_val_2990_; 
v_val_2990_ = lean_ctor_get(v_x_2988_, 0);
lean_inc(v_val_2990_);
lean_dec_ref_known(v_x_2988_, 1);
if (lean_obj_tag(v_val_2990_) == 0)
{
lean_object* v_value_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_3001_; 
v_value_2991_ = lean_ctor_get(v_val_2990_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v_val_2990_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2993_ = v_val_2990_;
v_isShared_2994_ = v_isSharedCheck_3001_;
goto v_resetjp_2992_;
}
else
{
lean_inc(v_value_2991_);
lean_dec(v_val_2990_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_3001_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
size_t v_sz_2995_; size_t v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2999_; 
v_sz_2995_ = lean_array_size(v_value_2991_);
v___x_2996_ = ((size_t)0ULL);
v___x_2997_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_2995_, v___x_2996_, v_value_2991_);
if (v_isShared_2994_ == 0)
{
lean_ctor_set_tag(v___x_2993_, 7);
lean_ctor_set(v___x_2993_, 0, v___x_2997_);
v___x_2999_ = v___x_2993_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3000_, 0, v___x_2997_);
v___x_2999_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
return v___x_2999_;
}
}
}
else
{
lean_object* v_value_3002_; lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3009_; 
v_value_3002_ = lean_ctor_get(v_val_2990_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v_val_2990_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_3004_ = v_val_2990_;
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
else
{
lean_inc(v_value_3002_);
lean_dec(v_val_2990_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v___x_3007_; 
if (v_isShared_3005_ == 0)
{
lean_ctor_set_tag(v___x_3004_, 4);
v___x_3007_ = v___x_3004_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_value_3002_);
v___x_3007_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
return v___x_3007_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(lean_object* v_x_3010_){
_start:
{
if (lean_obj_tag(v_x_3010_) == 0)
{
lean_object* v___x_3011_; 
v___x_3011_ = lean_box(0);
return v___x_3011_;
}
else
{
lean_object* v_val_3012_; lean_object* v_cwd_3013_; lean_object* v_env_3014_; lean_object* v_argv0_3015_; lean_object* v_stdio_3016_; lean_object* v_detached_3017_; lean_object* v_uid_3018_; lean_object* v_gid_3019_; lean_object* v_serialization_3020_; lean_object* v_shell_3021_; lean_object* v_windowsVerbatimArguments_3022_; lean_object* v_windowsHide_3023_; lean_object* v_signal_3024_; lean_object* v_timeout_3025_; lean_object* v_killSignal_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; 
v_val_3012_ = lean_ctor_get(v_x_3010_, 0);
lean_inc(v_val_3012_);
lean_dec_ref_known(v_x_3010_, 1);
v_cwd_3013_ = lean_ctor_get(v_val_3012_, 0);
lean_inc(v_cwd_3013_);
v_env_3014_ = lean_ctor_get(v_val_3012_, 1);
lean_inc(v_env_3014_);
v_argv0_3015_ = lean_ctor_get(v_val_3012_, 2);
lean_inc(v_argv0_3015_);
v_stdio_3016_ = lean_ctor_get(v_val_3012_, 3);
lean_inc(v_stdio_3016_);
v_detached_3017_ = lean_ctor_get(v_val_3012_, 4);
lean_inc(v_detached_3017_);
v_uid_3018_ = lean_ctor_get(v_val_3012_, 5);
lean_inc(v_uid_3018_);
v_gid_3019_ = lean_ctor_get(v_val_3012_, 6);
lean_inc(v_gid_3019_);
v_serialization_3020_ = lean_ctor_get(v_val_3012_, 7);
lean_inc(v_serialization_3020_);
v_shell_3021_ = lean_ctor_get(v_val_3012_, 8);
lean_inc(v_shell_3021_);
v_windowsVerbatimArguments_3022_ = lean_ctor_get(v_val_3012_, 9);
lean_inc(v_windowsVerbatimArguments_3022_);
v_windowsHide_3023_ = lean_ctor_get(v_val_3012_, 10);
lean_inc(v_windowsHide_3023_);
v_signal_3024_ = lean_ctor_get(v_val_3012_, 11);
lean_inc(v_signal_3024_);
v_timeout_3025_ = lean_ctor_get(v_val_3012_, 12);
lean_inc(v_timeout_3025_);
v_killSignal_3026_ = lean_ctor_get(v_val_3012_, 13);
lean_inc(v_killSignal_3026_);
lean_dec(v_val_3012_);
v___x_3027_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_3028_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(v_cwd_3013_);
v___x_3029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3029_, 0, v___x_3027_);
lean_ctor_set(v___x_3029_, 1, v___x_3028_);
v___x_3030_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1));
v___x_3031_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(v_env_3014_);
v___x_3032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3030_);
lean_ctor_set(v___x_3032_, 1, v___x_3031_);
v___x_3033_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0));
v___x_3034_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_argv0_3015_);
v___x_3035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3033_);
lean_ctor_set(v___x_3035_, 1, v___x_3034_);
v___x_3036_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__1));
v___x_3037_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(v_stdio_3016_);
v___x_3038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3036_);
lean_ctor_set(v___x_3038_, 1, v___x_3037_);
v___x_3039_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__2));
v___x_3040_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_detached_3017_);
lean_dec(v_detached_3017_);
v___x_3041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3039_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
v___x_3042_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6));
v___x_3043_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_uid_3018_);
lean_dec(v_uid_3018_);
v___x_3044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3042_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v___x_3045_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7));
v___x_3046_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_gid_3019_);
lean_dec(v_gid_3019_);
v___x_3047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3045_);
lean_ctor_set(v___x_3047_, 1, v___x_3046_);
v___x_3048_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__3));
v___x_3049_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_serialization_3020_);
v___x_3050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3048_);
lean_ctor_set(v___x_3050_, 1, v___x_3049_);
v___x_3051_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10));
v___x_3052_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_shell_3021_);
v___x_3053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3053_, 0, v___x_3051_);
lean_ctor_set(v___x_3053_, 1, v___x_3052_);
v___x_3054_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9));
v___x_3055_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_3022_);
lean_dec(v_windowsVerbatimArguments_3022_);
v___x_3056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3054_);
lean_ctor_set(v___x_3056_, 1, v___x_3055_);
v___x_3057_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8));
v___x_3058_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_3023_);
lean_dec(v_windowsHide_3023_);
v___x_3059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3057_);
lean_ctor_set(v___x_3059_, 1, v___x_3058_);
v___x_3060_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11));
v___x_3061_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_3024_);
lean_dec(v_signal_3024_);
v___x_3062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3060_);
lean_ctor_set(v___x_3062_, 1, v___x_3061_);
v___x_3063_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3));
v___x_3064_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_timeout_3025_);
lean_dec(v_timeout_3025_);
v___x_3065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3063_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
v___x_3066_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5));
v___x_3067_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_3026_);
v___x_3068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3066_);
lean_ctor_set(v___x_3068_, 1, v___x_3067_);
v___x_3069_ = lean_unsigned_to_nat(14u);
v___x_3070_ = lean_mk_empty_array_with_capacity(v___x_3069_);
v___x_3071_ = lean_array_push(v___x_3070_, v___x_3029_);
v___x_3072_ = lean_array_push(v___x_3071_, v___x_3032_);
v___x_3073_ = lean_array_push(v___x_3072_, v___x_3035_);
v___x_3074_ = lean_array_push(v___x_3073_, v___x_3038_);
v___x_3075_ = lean_array_push(v___x_3074_, v___x_3041_);
v___x_3076_ = lean_array_push(v___x_3075_, v___x_3044_);
v___x_3077_ = lean_array_push(v___x_3076_, v___x_3047_);
v___x_3078_ = lean_array_push(v___x_3077_, v___x_3050_);
v___x_3079_ = lean_array_push(v___x_3078_, v___x_3053_);
v___x_3080_ = lean_array_push(v___x_3079_, v___x_3056_);
v___x_3081_ = lean_array_push(v___x_3080_, v___x_3059_);
v___x_3082_ = lean_array_push(v___x_3081_, v___x_3062_);
v___x_3083_ = lean_array_push(v___x_3082_, v___x_3065_);
v___x_3084_ = lean_array_push(v___x_3083_, v___x_3068_);
v___x_3085_ = l_Lasm_JS_Web_Support_fields(v___x_3084_);
lean_dec_ref(v___x_3084_);
return v___x_3085_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn(lean_object* v_command_3093_, lean_object* v_args_3094_, lean_object* v_options_3095_){
_start:
{
uint8_t v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; 
v___x_3097_ = 0;
v___x_3098_ = lean_unsigned_to_nat(3u);
v___x_3099_ = ((lean_object*)(l_Lasm_JS_Node_child__process_spawn___closed__1));
v___x_3100_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3100_, 0, v_command_3093_);
v___x_3101_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(v_args_3094_);
v___x_3102_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(v_options_3095_);
v___x_3103_ = lean_mk_empty_array_with_capacity(v___x_3098_);
v___x_3104_ = lean_array_push(v___x_3103_, v___x_3100_);
v___x_3105_ = lean_array_push(v___x_3104_, v___x_3101_);
v___x_3106_ = lean_array_push(v___x_3105_, v___x_3102_);
v___x_3107_ = l_Lasm_JS_Web_Support_args(v___x_3106_);
v___x_3108_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_3099_, v___x_3107_, v___x_3097_);
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v_a_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3116_; 
v_a_3109_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3116_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3111_ = v___x_3108_;
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_a_3109_);
lean_dec(v___x_3108_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3114_; 
if (v_isShared_3112_ == 0)
{
v___x_3114_ = v___x_3111_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v_a_3109_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
return v___x_3114_;
}
}
}
else
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3124_; 
v_a_3117_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3119_ = v___x_3108_;
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_3108_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3122_; 
if (v_isShared_3120_ == 0)
{
v___x_3122_ = v___x_3119_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_a_3117_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn___boxed(lean_object* v_command_3125_, lean_object* v_args_3126_, lean_object* v_options_3127_, lean_object* v_a_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_Lasm_JS_Node_child__process_spawn(v_command_3125_, v_args_3126_, v_options_3127_);
return v_res_3129_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Events(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Stream(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Buffer(uint8_t builtin);
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
res = initialize_Lasm_JS_Node_Fs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instToJSChild__processExecFileOptions = _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSChild__processExecFileOptions);
l_Lasm_JS_Node_instFromJSChild__processExecFileResult = _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSChild__processExecFileResult);
l_Lasm_JS_Node_instToJSChild__processSpawnOptions = _init_l_Lasm_JS_Node_instToJSChild__processSpawnOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSChild__processSpawnOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
