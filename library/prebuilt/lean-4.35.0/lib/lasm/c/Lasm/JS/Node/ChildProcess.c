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
lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
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
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSRecord___redArg(lean_object*);
lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
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
static const lean_closure_object l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
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
static const lean_string_object l_Lasm_JS_Node_child__process_execFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "execFile"};
static const lean_object* l_Lasm_JS_Node_child__process_execFile___closed__0 = (const lean_object*)&l_Lasm_JS_Node_child__process_execFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_child__process_spawn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.child_process.spawn"};
static const lean_object* l_Lasm_JS_Node_child__process_spawn___closed__0 = (const lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_child__process_spawn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__0_value),((lean_object*)&l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0(lean_object* v___x_1370_, lean_object* v___x_1371_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v___x_1370_, v___x_1371_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0___boxed(lean_object* v___x_1374_, lean_object* v___x_1375_, lean_object* v___y_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0(v___x_1374_, v___x_1375_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f(lean_object* v_v_1386_){
_start:
{
lean_object* v___f_1388_; lean_object* v___x_1389_; 
v___f_1388_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__3));
lean_inc(v_v_1386_);
v___x_1389_ = l_Lasm_JS_Web_Support_isInstance(v___f_1388_, v_v_1386_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1403_; 
v_a_1390_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1392_ = v___x_1389_;
v_isShared_1393_ = v_isSharedCheck_1403_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___x_1389_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1403_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
uint8_t v___x_1394_; 
v___x_1394_ = lean_unbox(v_a_1390_);
lean_dec(v_a_1390_);
if (v___x_1394_ == 0)
{
lean_object* v___x_1395_; lean_object* v___x_1397_; 
lean_dec(v_v_1386_);
v___x_1395_ = lean_box(0);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 0, v___x_1395_);
v___x_1397_ = v___x_1392_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v___x_1395_);
v___x_1397_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
return v___x_1397_;
}
}
else
{
lean_object* v___x_1399_; lean_object* v___x_1401_; 
v___x_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1399_, 0, v_v_1386_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 0, v___x_1399_);
v___x_1401_ = v___x_1392_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v___x_1399_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_dec(v_v_1386_);
v_a_1404_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1389_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1389_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___boxed(lean_object* v_v_1412_, lean_object* v_a_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l_Lasm_JS_Node_ChildProcess_cast_x3f(v_v_1412_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(lean_object* v_context_1415_, lean_object* v_bytes_1416_){
_start:
{
lean_object* v___x_1418_; 
v___x_1418_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1416_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v___x_1420_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v___x_1418_, 1);
v___x_1420_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1(v_context_1415_, v_a_1419_);
return v___x_1420_;
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
v_a_1421_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1418_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1418_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0___boxed(lean_object* v_context_1429_, lean_object* v_bytes_1430_, lean_object* v_a_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v_context_1429_, v_bytes_1430_);
lean_dec_ref(v_bytes_1430_);
lean_dec_ref(v_context_1429_);
return v_res_1432_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1433_; uint64_t v___x_1434_; 
v___x_1433_ = 0;
v___x_1434_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(lean_object* v_o_1436_, lean_object* v_key_1437_){
_start:
{
lean_object* v_k_1439_; lean_object* v___x_1440_; 
v_k_1439_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1439_, 0, v_key_1437_);
v___x_1440_ = l_Lasm_JS_Wire_encodeIO(v_k_1439_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; uint32_t v___x_1442_; uint32_t v___x_1443_; uint64_t v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v___x_1440_, 1);
v___x_1442_ = 203;
v___x_1443_ = lasm_js_value_handle(v_o_1436_);
v___x_1444_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1445_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1446_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1446_, 0, v_o_1436_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = lean_unsigned_to_nat(2u);
v___x_1448_ = lean_mk_empty_array_with_capacity(v___x_1447_);
lean_inc_ref(v_k_1439_);
v___x_1449_ = lean_array_push(v___x_1448_, v_k_1439_);
v___x_1450_ = lean_array_push(v___x_1449_, v___x_1446_);
v___x_1451_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1450_);
v___x_1452_ = lasm_js_call(v___x_1442_, v___x_1443_, v___x_1444_, v_a_1441_, v___x_1451_);
lean_dec_ref_known(v___x_1451_, 1);
lean_dec(v_a_1441_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1452_, 1);
v___x_1454_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1455_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1439_);
v___x_1456_ = lean_string_append(v___x_1454_, v___x_1455_);
lean_dec_ref(v___x_1455_);
v___x_1457_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v___x_1456_, v_a_1453_);
lean_dec(v_a_1453_);
lean_dec_ref(v___x_1456_);
return v___x_1457_;
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec_ref_known(v_k_1439_, 1);
v_a_1458_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1452_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1452_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec_ref_known(v_k_1439_, 1);
lean_dec(v_o_1436_);
v_a_1466_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1440_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1440_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1471_; 
if (v_isShared_1469_ == 0)
{
v___x_1471_ = v___x_1468_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1466_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___boxed(lean_object* v_o_1474_, lean_object* v_key_1475_, lean_object* v_a_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_o_1474_, v_key_1475_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode(lean_object* v_self_1479_){
_start:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1481_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_exitCode___closed__0));
v___x_1482_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_1479_, v___x_1481_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode___boxed(lean_object* v_self_1483_, lean_object* v_a_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = l_Lasm_JS_Node_ChildProcess_exitCode(v_self_1483_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed(lean_object* v_self_1487_){
_start:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1489_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_killed___closed__0));
v___x_1490_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1487_, v___x_1489_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed___boxed(lean_object* v_self_1491_, lean_object* v_a_1492_){
_start:
{
lean_object* v_res_1493_; 
v_res_1493_ = l_Lasm_JS_Node_ChildProcess_killed(v_self_1491_);
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid(lean_object* v_self_1495_){
_start:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1497_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_pid___closed__0));
v___x_1498_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_1495_, v___x_1497_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid___boxed(lean_object* v_self_1499_, lean_object* v_a_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Lasm_JS_Node_ChildProcess_pid(v_self_1499_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(lean_object* v_o_1502_, lean_object* v_key_1503_){
_start:
{
lean_object* v_k_1505_; lean_object* v___x_1506_; 
v_k_1505_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1505_, 0, v_key_1503_);
v___x_1506_ = l_Lasm_JS_Wire_encodeIO(v_k_1505_);
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v_a_1507_; uint32_t v___x_1508_; uint32_t v___x_1509_; uint64_t v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v_a_1507_ = lean_ctor_get(v___x_1506_, 0);
lean_inc(v_a_1507_);
lean_dec_ref_known(v___x_1506_, 1);
v___x_1508_ = 203;
v___x_1509_ = lasm_js_value_handle(v_o_1502_);
v___x_1510_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1511_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1512_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1512_, 0, v_o_1502_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = lean_unsigned_to_nat(2u);
v___x_1514_ = lean_mk_empty_array_with_capacity(v___x_1513_);
lean_inc_ref(v_k_1505_);
v___x_1515_ = lean_array_push(v___x_1514_, v_k_1505_);
v___x_1516_ = lean_array_push(v___x_1515_, v___x_1512_);
v___x_1517_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1516_);
v___x_1518_ = lasm_js_call(v___x_1508_, v___x_1509_, v___x_1510_, v_a_1507_, v___x_1517_);
lean_dec_ref_known(v___x_1517_, 1);
lean_dec(v_a_1507_);
if (lean_obj_tag(v___x_1518_) == 0)
{
lean_object* v_a_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
lean_inc(v_a_1519_);
lean_dec_ref_known(v___x_1518_, 1);
v___x_1520_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1521_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1505_);
v___x_1522_ = lean_string_append(v___x_1520_, v___x_1521_);
lean_dec_ref(v___x_1521_);
v___x_1523_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_1522_, v_a_1519_);
lean_dec(v_a_1519_);
lean_dec_ref(v___x_1522_);
return v___x_1523_;
}
else
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1531_; 
lean_dec_ref_known(v_k_1505_, 1);
v_a_1524_ = lean_ctor_get(v___x_1518_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1518_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1526_ = v___x_1518_;
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v___x_1518_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_a_1524_);
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
else
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
lean_dec_ref_known(v_k_1505_, 1);
lean_dec(v_o_1502_);
v_a_1532_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1506_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1506_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0___boxed(lean_object* v_o_1540_, lean_object* v_key_1541_, lean_object* v_a_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(v_o_1540_, v_key_1541_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode(lean_object* v_self_1545_){
_start:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; 
v___x_1547_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_signalCode___closed__0));
v___x_1548_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(v_self_1545_, v___x_1547_);
return v___x_1548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode___boxed(lean_object* v_self_1549_, lean_object* v_a_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lasm_JS_Node_ChildProcess_signalCode(v_self_1549_);
return v_res_1551_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1554_ = lean_string_utf8_byte_size(v___x_1553_);
return v___x_1554_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; uint8_t v___x_1557_; 
v___x_1555_ = lean_unsigned_to_nat(0u);
v___x_1556_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1);
v___x_1557_ = lean_nat_dec_eq(v___x_1556_, v___x_1555_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(lean_object* v_context_1559_, lean_object* v_d_1560_){
_start:
{
lean_object* v___y_1566_; lean_object* v___y_1567_; 
switch(lean_obj_tag(v_d_1560_))
{
case 1:
{
goto v___jp_1562_;
}
case 0:
{
goto v___jp_1562_;
}
default: 
{
if (lean_obj_tag(v_d_1560_) == 9)
{
lean_object* v_value_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v_value_1571_ = lean_ctor_get(v_d_1560_, 0);
lean_inc(v_value_1571_);
lean_dec_ref_known(v_d_1560_, 2);
v___x_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1572_, 0, v_value_1571_);
v___x_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
return v___x_1573_;
}
else
{
lean_object* v___x_1574_; lean_object* v_received_1576_; 
v___x_1574_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
if (lean_obj_tag(v_d_1560_) == 9)
{
lean_object* v_value_1590_; lean_object* v_description_1591_; uint8_t v___x_1592_; 
v_value_1590_ = lean_ctor_get(v_d_1560_, 0);
v_description_1591_ = lean_ctor_get(v_d_1560_, 1);
v___x_1592_ = lean_string_dec_eq(v_description_1591_, v___x_1574_);
if (v___x_1592_ == 0)
{
goto v___jp_1588_;
}
else
{
uint32_t v___x_1593_; uint64_t v___x_1594_; lean_object* v___x_1595_; uint32_t v___x_1596_; lean_object* v___x_1597_; 
lean_inc_n(v_value_1590_, 2);
lean_dec_ref_known(v_d_1560_, 2);
v___x_1593_ = 206;
v___x_1594_ = 0ULL;
v___x_1595_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1595_, 0, v_value_1590_);
lean_ctor_set(v___x_1595_, 1, v___x_1574_);
v___x_1596_ = lasm_js_value_handle(v_value_1590_);
lean_dec(v_value_1590_);
v___x_1597_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1593_, v___x_1594_, v___x_1595_, v___x_1596_);
lean_dec_ref_known(v___x_1595_, 2);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_a_1598_; uint8_t v___x_1599_; 
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
lean_inc(v_a_1598_);
lean_dec_ref_known(v___x_1597_, 1);
v___x_1599_ = lean_string_validate_utf8(v_a_1598_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; lean_object* v___x_1601_; 
lean_dec(v_a_1598_);
v___x_1600_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_1601_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1600_);
v_received_1576_ = v___x_1601_;
goto v___jp_1575_;
}
else
{
lean_object* v___x_1602_; 
v___x_1602_ = lean_string_from_utf8_unchecked(v_a_1598_);
v_received_1576_ = v___x_1602_;
goto v___jp_1575_;
}
}
else
{
lean_object* v___x_1603_; 
lean_dec_ref_known(v___x_1597_, 1);
v___x_1603_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v_received_1576_ = v___x_1603_;
goto v___jp_1575_;
}
}
}
else
{
goto v___jp_1588_;
}
v___jp_1575_:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; uint8_t v___x_1586_; 
v___x_1577_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_1578_ = lean_string_append(v___x_1577_, v_context_1559_);
v___x_1579_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_1580_ = lean_string_append(v___x_1578_, v___x_1579_);
v___x_1581_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__0));
v___x_1582_ = lean_string_append(v___x_1580_, v___x_1581_);
v___x_1583_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_1584_ = lean_string_append(v___x_1582_, v___x_1583_);
v___x_1585_ = lean_string_append(v___x_1584_, v_received_1576_);
lean_dec_ref(v_received_1576_);
v___x_1586_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_1586_ == 0)
{
lean_object* v___x_1587_; 
v___x_1587_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___y_1566_ = v___x_1585_;
v___y_1567_ = v___x_1587_;
goto v___jp_1565_;
}
else
{
v___y_1566_ = v___x_1585_;
v___y_1567_ = v___x_1574_;
goto v___jp_1565_;
}
}
v___jp_1588_:
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Lasm_JS_Data_describe(v_d_1560_);
v_received_1576_ = v___x_1589_;
goto v___jp_1575_;
}
}
}
}
v___jp_1562_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1563_ = lean_box(0);
v___x_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
return v___x_1564_;
}
v___jp_1565_:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1568_ = lean_string_append(v___y_1566_, v___y_1567_);
v___x_1569_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
v___x_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1569_);
return v___x_1570_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1604_, lean_object* v_d_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_1604_, v_d_1605_);
lean_dec_ref(v_context_1604_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(lean_object* v_context_1608_, lean_object* v_bytes_1609_){
_start:
{
lean_object* v___x_1611_; 
v___x_1611_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1609_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_object* v_a_1612_; lean_object* v___x_1613_; 
v_a_1612_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_a_1612_);
lean_dec_ref_known(v___x_1611_, 1);
v___x_1613_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_1608_, v_a_1612_);
return v___x_1613_;
}
else
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1621_; 
v_a_1614_ = lean_ctor_get(v___x_1611_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1611_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1616_ = v___x_1611_;
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1611_);
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
v_reuseFailAlloc_1620_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0___boxed(lean_object* v_context_1622_, lean_object* v_bytes_1623_, lean_object* v_a_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v_context_1622_, v_bytes_1623_);
lean_dec_ref(v_bytes_1623_);
lean_dec_ref(v_context_1622_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(lean_object* v_o_1626_, lean_object* v_key_1627_){
_start:
{
lean_object* v_k_1629_; lean_object* v___x_1630_; 
v_k_1629_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1629_, 0, v_key_1627_);
v___x_1630_ = l_Lasm_JS_Wire_encodeIO(v_k_1629_);
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v_a_1631_; uint32_t v___x_1632_; uint32_t v___x_1633_; uint64_t v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_a_1631_);
lean_dec_ref_known(v___x_1630_, 1);
v___x_1632_ = 203;
v___x_1633_ = lasm_js_value_handle(v_o_1626_);
v___x_1634_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1635_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1636_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1636_, 0, v_o_1626_);
lean_ctor_set(v___x_1636_, 1, v___x_1635_);
v___x_1637_ = lean_unsigned_to_nat(2u);
v___x_1638_ = lean_mk_empty_array_with_capacity(v___x_1637_);
lean_inc_ref(v_k_1629_);
v___x_1639_ = lean_array_push(v___x_1638_, v_k_1629_);
v___x_1640_ = lean_array_push(v___x_1639_, v___x_1636_);
v___x_1641_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
v___x_1642_ = lasm_js_call(v___x_1632_, v___x_1633_, v___x_1634_, v_a_1631_, v___x_1641_);
lean_dec_ref_known(v___x_1641_, 1);
lean_dec(v_a_1631_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_a_1643_);
lean_dec_ref_known(v___x_1642_, 1);
v___x_1644_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1645_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1629_);
v___x_1646_ = lean_string_append(v___x_1644_, v___x_1645_);
lean_dec_ref(v___x_1645_);
v___x_1647_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v___x_1646_, v_a_1643_);
lean_dec(v_a_1643_);
lean_dec_ref(v___x_1646_);
return v___x_1647_;
}
else
{
lean_object* v_a_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1655_; 
lean_dec_ref_known(v_k_1629_, 1);
v_a_1648_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1650_ = v___x_1642_;
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_a_1648_);
lean_dec(v___x_1642_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1653_; 
if (v_isShared_1651_ == 0)
{
v___x_1653_ = v___x_1650_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_a_1648_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
}
}
else
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
lean_dec_ref_known(v_k_1629_, 1);
lean_dec(v_o_1626_);
v_a_1656_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1630_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1630_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0___boxed(lean_object* v_o_1664_, lean_object* v_key_1665_, lean_object* v_a_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_o_1664_, v_key_1665_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr(lean_object* v_self_1668_){
_start:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1670_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1));
v___x_1671_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_1668_, v___x_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr___boxed(lean_object* v_self_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l_Lasm_JS_Node_ChildProcess_stderr(v_self_1672_);
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(lean_object* v_context_1676_, lean_object* v_d_1677_){
_start:
{
lean_object* v___y_1683_; lean_object* v___y_1684_; 
switch(lean_obj_tag(v_d_1677_))
{
case 1:
{
goto v___jp_1679_;
}
case 0:
{
goto v___jp_1679_;
}
default: 
{
if (lean_obj_tag(v_d_1677_) == 9)
{
lean_object* v_value_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v_value_1688_ = lean_ctor_get(v_d_1677_, 0);
lean_inc(v_value_1688_);
lean_dec_ref_known(v_d_1677_, 2);
v___x_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1689_, 0, v_value_1688_);
v___x_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1689_);
return v___x_1690_;
}
else
{
lean_object* v___x_1691_; lean_object* v_received_1693_; 
v___x_1691_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
if (lean_obj_tag(v_d_1677_) == 9)
{
lean_object* v_value_1707_; lean_object* v_description_1708_; uint8_t v___x_1709_; 
v_value_1707_ = lean_ctor_get(v_d_1677_, 0);
v_description_1708_ = lean_ctor_get(v_d_1677_, 1);
v___x_1709_ = lean_string_dec_eq(v_description_1708_, v___x_1691_);
if (v___x_1709_ == 0)
{
goto v___jp_1705_;
}
else
{
uint32_t v___x_1710_; uint64_t v___x_1711_; lean_object* v___x_1712_; uint32_t v___x_1713_; lean_object* v___x_1714_; 
lean_inc_n(v_value_1707_, 2);
lean_dec_ref_known(v_d_1677_, 2);
v___x_1710_ = 206;
v___x_1711_ = 0ULL;
v___x_1712_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1712_, 0, v_value_1707_);
lean_ctor_set(v___x_1712_, 1, v___x_1691_);
v___x_1713_ = lasm_js_value_handle(v_value_1707_);
lean_dec(v_value_1707_);
v___x_1714_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1710_, v___x_1711_, v___x_1712_, v___x_1713_);
lean_dec_ref_known(v___x_1712_, 2);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v_a_1715_; uint8_t v___x_1716_; 
v_a_1715_ = lean_ctor_get(v___x_1714_, 0);
lean_inc(v_a_1715_);
lean_dec_ref_known(v___x_1714_, 1);
v___x_1716_ = lean_string_validate_utf8(v_a_1715_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
lean_dec(v_a_1715_);
v___x_1717_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_1718_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1717_);
v_received_1693_ = v___x_1718_;
goto v___jp_1692_;
}
else
{
lean_object* v___x_1719_; 
v___x_1719_ = lean_string_from_utf8_unchecked(v_a_1715_);
v_received_1693_ = v___x_1719_;
goto v___jp_1692_;
}
}
else
{
lean_object* v___x_1720_; 
lean_dec_ref_known(v___x_1714_, 1);
v___x_1720_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v_received_1693_ = v___x_1720_;
goto v___jp_1692_;
}
}
}
else
{
goto v___jp_1705_;
}
v___jp_1692_:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; uint8_t v___x_1703_; 
v___x_1694_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_1695_ = lean_string_append(v___x_1694_, v_context_1676_);
v___x_1696_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_1697_ = lean_string_append(v___x_1695_, v___x_1696_);
v___x_1698_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___closed__0));
v___x_1699_ = lean_string_append(v___x_1697_, v___x_1698_);
v___x_1700_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_1701_ = lean_string_append(v___x_1699_, v___x_1700_);
v___x_1702_ = lean_string_append(v___x_1701_, v_received_1693_);
lean_dec_ref(v_received_1693_);
v___x_1703_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_1703_ == 0)
{
lean_object* v___x_1704_; 
v___x_1704_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___y_1683_ = v___x_1702_;
v___y_1684_ = v___x_1704_;
goto v___jp_1682_;
}
else
{
v___y_1683_ = v___x_1702_;
v___y_1684_ = v___x_1691_;
goto v___jp_1682_;
}
}
v___jp_1705_:
{
lean_object* v___x_1706_; 
v___x_1706_ = l_Lasm_JS_Data_describe(v_d_1677_);
v_received_1693_ = v___x_1706_;
goto v___jp_1692_;
}
}
}
}
v___jp_1679_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1680_ = lean_box(0);
v___x_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
return v___x_1681_;
}
v___jp_1682_:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1685_ = lean_string_append(v___y_1683_, v___y_1684_);
v___x_1686_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
v___x_1687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1686_);
return v___x_1687_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1721_, lean_object* v_d_1722_, lean_object* v_a_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_1721_, v_d_1722_);
lean_dec_ref(v_context_1721_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(lean_object* v_context_1725_, lean_object* v_bytes_1726_){
_start:
{
lean_object* v___x_1728_; 
v___x_1728_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1726_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v___x_1730_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_a_1729_);
lean_dec_ref_known(v___x_1728_, 1);
v___x_1730_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_1725_, v_a_1729_);
return v___x_1730_;
}
else
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1738_; 
v_a_1731_ = lean_ctor_get(v___x_1728_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1733_ = v___x_1728_;
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1728_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1731_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0___boxed(lean_object* v_context_1739_, lean_object* v_bytes_1740_, lean_object* v_a_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v_context_1739_, v_bytes_1740_);
lean_dec_ref(v_bytes_1740_);
lean_dec_ref(v_context_1739_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(lean_object* v_o_1743_, lean_object* v_key_1744_){
_start:
{
lean_object* v_k_1746_; lean_object* v___x_1747_; 
v_k_1746_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1746_, 0, v_key_1744_);
v___x_1747_ = l_Lasm_JS_Wire_encodeIO(v_k_1746_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; uint32_t v___x_1749_; uint32_t v___x_1750_; uint64_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
lean_inc(v_a_1748_);
lean_dec_ref_known(v___x_1747_, 1);
v___x_1749_ = 203;
v___x_1750_ = lasm_js_value_handle(v_o_1743_);
v___x_1751_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1752_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1753_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1753_, 0, v_o_1743_);
lean_ctor_set(v___x_1753_, 1, v___x_1752_);
v___x_1754_ = lean_unsigned_to_nat(2u);
v___x_1755_ = lean_mk_empty_array_with_capacity(v___x_1754_);
lean_inc_ref(v_k_1746_);
v___x_1756_ = lean_array_push(v___x_1755_, v_k_1746_);
v___x_1757_ = lean_array_push(v___x_1756_, v___x_1753_);
v___x_1758_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1758_, 0, v___x_1757_);
v___x_1759_ = lasm_js_call(v___x_1749_, v___x_1750_, v___x_1751_, v_a_1748_, v___x_1758_);
lean_dec_ref_known(v___x_1758_, 1);
lean_dec(v_a_1748_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
lean_inc(v_a_1760_);
lean_dec_ref_known(v___x_1759_, 1);
v___x_1761_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1762_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1746_);
v___x_1763_ = lean_string_append(v___x_1761_, v___x_1762_);
lean_dec_ref(v___x_1762_);
v___x_1764_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v___x_1763_, v_a_1760_);
lean_dec(v_a_1760_);
lean_dec_ref(v___x_1763_);
return v___x_1764_;
}
else
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1772_; 
lean_dec_ref_known(v_k_1746_, 1);
v_a_1765_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1767_ = v___x_1759_;
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1759_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1770_; 
if (v_isShared_1768_ == 0)
{
v___x_1770_ = v___x_1767_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1765_);
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
else
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1780_; 
lean_dec_ref_known(v_k_1746_, 1);
lean_dec(v_o_1743_);
v_a_1773_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1775_ = v___x_1747_;
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1747_);
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
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0___boxed(lean_object* v_o_1781_, lean_object* v_key_1782_, lean_object* v_a_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_o_1781_, v_key_1782_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin(lean_object* v_self_1786_){
_start:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1788_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_stdin___closed__0));
v___x_1789_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_self_1786_, v___x_1788_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin___boxed(lean_object* v_self_1790_, lean_object* v_a_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l_Lasm_JS_Node_ChildProcess_stdin(v_self_1790_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout(lean_object* v_self_1793_){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0));
v___x_1796_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_1793_, v___x_1795_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout___boxed(lean_object* v_self_1797_, lean_object* v_a_1798_){
_start:
{
lean_object* v_res_1799_; 
v_res_1799_ = l_Lasm_JS_Node_ChildProcess_stdout(v_self_1797_);
return v_res_1799_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3(void){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1804_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__2));
v___x_1805_ = lean_unsigned_to_nat(2u);
v___x_1806_ = lean_mk_empty_array_with_capacity(v___x_1805_);
v___x_1807_ = lean_array_push(v___x_1806_, v___x_1804_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onClose(lean_object* v_self_1808_, lean_object* v_listener_1809_){
_start:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1811_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_1812_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1813_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1813_, 0, v_listener_1809_);
lean_ctor_set(v___x_1813_, 1, v___x_1812_);
v___x_1814_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onClose___closed__3, &l_Lasm_JS_Node_ChildProcess_onClose___closed__3_once, _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3);
v___x_1815_ = lean_array_push(v___x_1814_, v___x_1813_);
v___x_1816_ = l_Lasm_JS_Web_Support_args(v___x_1815_);
v___x_1817_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1808_, v___x_1811_, v___x_1816_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
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
lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1833_; 
v_a_1826_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1828_ = v___x_1817_;
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v___x_1817_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onClose___boxed(lean_object* v_self_1834_, lean_object* v_listener_1835_, lean_object* v_a_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l_Lasm_JS_Node_ChildProcess_onClose(v_self_1834_, v_listener_1835_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceClose(lean_object* v_self_1839_, lean_object* v_listener_1840_){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1842_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_1843_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1844_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1844_, 0, v_listener_1840_);
lean_ctor_set(v___x_1844_, 1, v___x_1843_);
v___x_1845_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onClose___closed__3, &l_Lasm_JS_Node_ChildProcess_onClose___closed__3_once, _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3);
v___x_1846_ = lean_array_push(v___x_1845_, v___x_1844_);
v___x_1847_ = l_Lasm_JS_Web_Support_args(v___x_1846_);
v___x_1848_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1839_, v___x_1842_, v___x_1847_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
v_a_1849_ = lean_ctor_get(v___x_1848_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1848_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1848_);
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
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
v_a_1857_ = lean_ctor_get(v___x_1848_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1859_ = v___x_1848_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1848_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1857_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceClose___boxed(lean_object* v_self_1865_, lean_object* v_listener_1866_, lean_object* v_a_1867_){
_start:
{
lean_object* v_res_1868_; 
v_res_1868_ = l_Lasm_JS_Node_ChildProcess_onceClose(v_self_1865_, v_listener_1866_);
return v_res_1868_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2(void){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1872_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__1));
v___x_1873_ = lean_unsigned_to_nat(2u);
v___x_1874_ = lean_mk_empty_array_with_capacity(v___x_1873_);
v___x_1875_ = lean_array_push(v___x_1874_, v___x_1872_);
return v___x_1875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect(lean_object* v_self_1876_, lean_object* v_listener_1877_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1879_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_1880_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1881_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1881_, 0, v_listener_1877_);
lean_ctor_set(v___x_1881_, 1, v___x_1880_);
v___x_1882_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2, &l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2);
v___x_1883_ = lean_array_push(v___x_1882_, v___x_1881_);
v___x_1884_ = l_Lasm_JS_Web_Support_args(v___x_1883_);
v___x_1885_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1876_, v___x_1879_, v___x_1884_);
if (lean_obj_tag(v___x_1885_) == 0)
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1885_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1885_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
else
{
lean_object* v_a_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1901_; 
v_a_1894_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1896_ = v___x_1885_;
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_a_1894_);
lean_dec(v___x_1885_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1899_; 
if (v_isShared_1897_ == 0)
{
v___x_1899_ = v___x_1896_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_a_1894_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect___boxed(lean_object* v_self_1902_, lean_object* v_listener_1903_, lean_object* v_a_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l_Lasm_JS_Node_ChildProcess_onDisconnect(v_self_1902_, v_listener_1903_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceDisconnect(lean_object* v_self_1906_, lean_object* v_listener_1907_){
_start:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1909_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_1910_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1911_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1911_, 0, v_listener_1907_);
lean_ctor_set(v___x_1911_, 1, v___x_1910_);
v___x_1912_ = lean_unsigned_to_nat(2u);
v___x_1913_ = lean_mk_empty_array_with_capacity(v___x_1912_);
lean_dec_ref(v___x_1913_);
v___x_1914_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2, &l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2);
v___x_1915_ = lean_array_push(v___x_1914_, v___x_1911_);
v___x_1916_ = l_Lasm_JS_Web_Support_args(v___x_1915_);
v___x_1917_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1906_, v___x_1909_, v___x_1916_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1917_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1917_);
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
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1933_; 
v_a_1926_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1928_ = v___x_1917_;
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_dec(v___x_1917_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceDisconnect___boxed(lean_object* v_self_1934_, lean_object* v_listener_1935_, lean_object* v_a_1936_){
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = l_Lasm_JS_Node_ChildProcess_onceDisconnect(v_self_1934_, v_listener_1935_);
return v_res_1937_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2(void){
_start:
{
lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1941_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onError___closed__1));
v___x_1942_ = lean_unsigned_to_nat(2u);
v___x_1943_ = lean_mk_empty_array_with_capacity(v___x_1942_);
v___x_1944_ = lean_array_push(v___x_1943_, v___x_1941_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onError(lean_object* v_self_1945_, lean_object* v_listener_1946_){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1948_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_1949_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1950_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1950_, 0, v_listener_1946_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
v___x_1951_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onError___closed__2, &l_Lasm_JS_Node_ChildProcess_onError___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2);
v___x_1952_ = lean_array_push(v___x_1951_, v___x_1950_);
v___x_1953_ = l_Lasm_JS_Web_Support_args(v___x_1952_);
v___x_1954_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1945_, v___x_1948_, v___x_1953_);
if (lean_obj_tag(v___x_1954_) == 0)
{
lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1962_; 
v_a_1955_ = lean_ctor_get(v___x_1954_, 0);
v_isSharedCheck_1962_ = !lean_is_exclusive(v___x_1954_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1957_ = v___x_1954_;
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_dec(v___x_1954_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1960_; 
if (v_isShared_1958_ == 0)
{
v___x_1960_ = v___x_1957_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_a_1955_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
}
else
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1970_; 
v_a_1963_ = lean_ctor_get(v___x_1954_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1954_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1965_ = v___x_1954_;
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1954_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1966_ == 0)
{
v___x_1968_ = v___x_1965_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_a_1963_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onError___boxed(lean_object* v_self_1971_, lean_object* v_listener_1972_, lean_object* v_a_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Lasm_JS_Node_ChildProcess_onError(v_self_1971_, v_listener_1972_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceError(lean_object* v_self_1975_, lean_object* v_listener_1976_){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1978_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_1979_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1980_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1980_, 0, v_listener_1976_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
v___x_1981_ = lean_unsigned_to_nat(2u);
v___x_1982_ = lean_mk_empty_array_with_capacity(v___x_1981_);
lean_dec_ref(v___x_1982_);
v___x_1983_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onError___closed__2, &l_Lasm_JS_Node_ChildProcess_onError___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2);
v___x_1984_ = lean_array_push(v___x_1983_, v___x_1980_);
v___x_1985_ = l_Lasm_JS_Web_Support_args(v___x_1984_);
v___x_1986_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1975_, v___x_1978_, v___x_1985_);
if (lean_obj_tag(v___x_1986_) == 0)
{
lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
v_a_1987_ = lean_ctor_get(v___x_1986_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1989_ = v___x_1986_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_dec(v___x_1986_);
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
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2002_; 
v_a_1995_ = lean_ctor_get(v___x_1986_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1997_ = v___x_1986_;
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1986_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_2000_; 
if (v_isShared_1998_ == 0)
{
v___x_2000_ = v___x_1997_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceError___boxed(lean_object* v_self_2003_, lean_object* v_listener_2004_, lean_object* v_a_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l_Lasm_JS_Node_ChildProcess_onceError(v_self_2003_, v_listener_2004_);
return v_res_2006_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2(void){
_start:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2010_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onExit___closed__1));
v___x_2011_ = lean_unsigned_to_nat(2u);
v___x_2012_ = lean_mk_empty_array_with_capacity(v___x_2011_);
v___x_2013_ = lean_array_push(v___x_2012_, v___x_2010_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onExit(lean_object* v_self_2014_, lean_object* v_listener_2015_){
_start:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2017_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2018_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2019_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2019_, 0, v_listener_2015_);
lean_ctor_set(v___x_2019_, 1, v___x_2018_);
v___x_2020_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onExit___closed__2, &l_Lasm_JS_Node_ChildProcess_onExit___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2);
v___x_2021_ = lean_array_push(v___x_2020_, v___x_2019_);
v___x_2022_ = l_Lasm_JS_Web_Support_args(v___x_2021_);
v___x_2023_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2014_, v___x_2017_, v___x_2022_);
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2031_; 
v_a_2024_ = lean_ctor_get(v___x_2023_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_2023_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2026_ = v___x_2023_;
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_2023_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2029_; 
if (v_isShared_2027_ == 0)
{
v___x_2029_ = v___x_2026_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_a_2024_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
else
{
lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2039_; 
v_a_2032_ = lean_ctor_get(v___x_2023_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2023_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2034_ = v___x_2023_;
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v___x_2023_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2037_; 
if (v_isShared_2035_ == 0)
{
v___x_2037_ = v___x_2034_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v_a_2032_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onExit___boxed(lean_object* v_self_2040_, lean_object* v_listener_2041_, lean_object* v_a_2042_){
_start:
{
lean_object* v_res_2043_; 
v_res_2043_ = l_Lasm_JS_Node_ChildProcess_onExit(v_self_2040_, v_listener_2041_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceExit(lean_object* v_self_2044_, lean_object* v_listener_2045_){
_start:
{
lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2047_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2048_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2049_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2049_, 0, v_listener_2045_);
lean_ctor_set(v___x_2049_, 1, v___x_2048_);
v___x_2050_ = lean_unsigned_to_nat(2u);
v___x_2051_ = lean_mk_empty_array_with_capacity(v___x_2050_);
lean_dec_ref(v___x_2051_);
v___x_2052_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onExit___closed__2, &l_Lasm_JS_Node_ChildProcess_onExit___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2);
v___x_2053_ = lean_array_push(v___x_2052_, v___x_2049_);
v___x_2054_ = l_Lasm_JS_Web_Support_args(v___x_2053_);
v___x_2055_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2044_, v___x_2047_, v___x_2054_);
if (lean_obj_tag(v___x_2055_) == 0)
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
v_a_2056_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v___x_2055_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2055_);
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
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2071_; 
v_a_2064_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2066_ = v___x_2055_;
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_a_2064_);
lean_dec(v___x_2055_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2069_; 
if (v_isShared_2067_ == 0)
{
v___x_2069_ = v___x_2066_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_a_2064_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceExit___boxed(lean_object* v_self_2072_, lean_object* v_listener_2073_, lean_object* v_a_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l_Lasm_JS_Node_ChildProcess_onceExit(v_self_2072_, v_listener_2073_);
return v_res_2075_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2(void){
_start:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2079_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onMessage___closed__1));
v___x_2080_ = lean_unsigned_to_nat(2u);
v___x_2081_ = lean_mk_empty_array_with_capacity(v___x_2080_);
v___x_2082_ = lean_array_push(v___x_2081_, v___x_2079_);
return v___x_2082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onMessage(lean_object* v_self_2083_, lean_object* v_listener_2084_){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2086_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2087_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2088_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2088_, 0, v_listener_2084_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onMessage___closed__2, &l_Lasm_JS_Node_ChildProcess_onMessage___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2);
v___x_2090_ = lean_array_push(v___x_2089_, v___x_2088_);
v___x_2091_ = l_Lasm_JS_Web_Support_args(v___x_2090_);
v___x_2092_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2083_, v___x_2086_, v___x_2091_);
if (lean_obj_tag(v___x_2092_) == 0)
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
v_a_2093_ = lean_ctor_get(v___x_2092_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2092_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2092_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
else
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
v_a_2101_ = lean_ctor_get(v___x_2092_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2092_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2092_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onMessage___boxed(lean_object* v_self_2109_, lean_object* v_listener_2110_, lean_object* v_a_2111_){
_start:
{
lean_object* v_res_2112_; 
v_res_2112_ = l_Lasm_JS_Node_ChildProcess_onMessage(v_self_2109_, v_listener_2110_);
return v_res_2112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceMessage(lean_object* v_self_2113_, lean_object* v_listener_2114_){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2116_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2117_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2118_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2118_, 0, v_listener_2114_);
lean_ctor_set(v___x_2118_, 1, v___x_2117_);
v___x_2119_ = lean_unsigned_to_nat(2u);
v___x_2120_ = lean_mk_empty_array_with_capacity(v___x_2119_);
lean_dec_ref(v___x_2120_);
v___x_2121_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onMessage___closed__2, &l_Lasm_JS_Node_ChildProcess_onMessage___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2);
v___x_2122_ = lean_array_push(v___x_2121_, v___x_2118_);
v___x_2123_ = l_Lasm_JS_Web_Support_args(v___x_2122_);
v___x_2124_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2113_, v___x_2116_, v___x_2123_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2132_; 
v_a_2125_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2132_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2127_ = v___x_2124_;
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2124_);
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
v_reuseFailAlloc_2131_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2140_; 
v_a_2133_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_2135_ = v___x_2124_;
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___x_2124_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceMessage___boxed(lean_object* v_self_2141_, lean_object* v_listener_2142_, lean_object* v_a_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Lasm_JS_Node_ChildProcess_onceMessage(v_self_2141_, v_listener_2142_);
return v_res_2144_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2(void){
_start:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2148_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onSpawn___closed__1));
v___x_2149_ = lean_unsigned_to_nat(2u);
v___x_2150_ = lean_mk_empty_array_with_capacity(v___x_2149_);
v___x_2151_ = lean_array_push(v___x_2150_, v___x_2148_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn(lean_object* v_self_2152_, lean_object* v_listener_2153_){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2155_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2156_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2157_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2157_, 0, v_listener_2153_);
lean_ctor_set(v___x_2157_, 1, v___x_2156_);
v___x_2158_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2, &l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2);
v___x_2159_ = lean_array_push(v___x_2158_, v___x_2157_);
v___x_2160_ = l_Lasm_JS_Web_Support_args(v___x_2159_);
v___x_2161_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2152_, v___x_2155_, v___x_2160_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___x_2161_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2161_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
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
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
v_a_2170_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v___x_2161_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2161_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
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
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn___boxed(lean_object* v_self_2178_, lean_object* v_listener_2179_, lean_object* v_a_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l_Lasm_JS_Node_ChildProcess_onSpawn(v_self_2178_, v_listener_2179_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceSpawn(lean_object* v_self_2182_, lean_object* v_listener_2183_){
_start:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2185_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2186_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2187_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2187_, 0, v_listener_2183_);
lean_ctor_set(v___x_2187_, 1, v___x_2186_);
v___x_2188_ = lean_unsigned_to_nat(2u);
v___x_2189_ = lean_mk_empty_array_with_capacity(v___x_2188_);
lean_dec_ref(v___x_2189_);
v___x_2190_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2, &l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2);
v___x_2191_ = lean_array_push(v___x_2190_, v___x_2187_);
v___x_2192_ = l_Lasm_JS_Web_Support_args(v___x_2191_);
v___x_2193_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2182_, v___x_2185_, v___x_2192_);
if (lean_obj_tag(v___x_2193_) == 0)
{
lean_object* v_a_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2201_; 
v_a_2194_ = lean_ctor_get(v___x_2193_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2193_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2196_ = v___x_2193_;
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_a_2194_);
lean_dec(v___x_2193_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2199_; 
if (v_isShared_2197_ == 0)
{
v___x_2199_ = v___x_2196_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_a_2194_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
else
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2209_; 
v_a_2202_ = lean_ctor_get(v___x_2193_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2193_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2204_ = v___x_2193_;
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2193_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceSpawn___boxed(lean_object* v_self_2210_, lean_object* v_listener_2211_, lean_object* v_a_2212_){
_start:
{
lean_object* v_res_2213_; 
v_res_2213_ = l_Lasm_JS_Node_ChildProcess_onceSpawn(v_self_2210_, v_listener_2211_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(lean_object* v_x_2214_){
_start:
{
if (lean_obj_tag(v_x_2214_) == 0)
{
lean_object* v___x_2215_; 
v___x_2215_ = lean_box(0);
return v___x_2215_;
}
else
{
lean_object* v_val_2216_; 
v_val_2216_ = lean_ctor_get(v_x_2214_, 0);
lean_inc(v_val_2216_);
lean_dec_ref_known(v_x_2214_, 1);
if (lean_obj_tag(v_val_2216_) == 0)
{
double v_value_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2224_; 
v_value_2217_ = lean_ctor_get_float(v_val_2216_, 0);
v_isSharedCheck_2224_ = !lean_is_exclusive(v_val_2216_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2219_ = v_val_2216_;
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
else
{
lean_dec(v_val_2216_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2222_; 
if (v_isShared_2220_ == 0)
{
lean_ctor_set_tag(v___x_2219_, 3);
v___x_2222_ = v___x_2219_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2223_, 0, v_value_2217_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
}
else
{
lean_object* v_value_2225_; lean_object* v___x_2227_; uint8_t v_isShared_2228_; uint8_t v_isSharedCheck_2232_; 
v_value_2225_ = lean_ctor_get(v_val_2216_, 0);
v_isSharedCheck_2232_ = !lean_is_exclusive(v_val_2216_);
if (v_isSharedCheck_2232_ == 0)
{
v___x_2227_ = v_val_2216_;
v_isShared_2228_ = v_isSharedCheck_2232_;
goto v_resetjp_2226_;
}
else
{
lean_inc(v_value_2225_);
lean_dec(v_val_2216_);
v___x_2227_ = lean_box(0);
v_isShared_2228_ = v_isSharedCheck_2232_;
goto v_resetjp_2226_;
}
v_resetjp_2226_:
{
lean_object* v___x_2230_; 
if (v_isShared_2228_ == 0)
{
lean_ctor_set_tag(v___x_2227_, 4);
v___x_2230_ = v___x_2227_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v_value_2225_);
v___x_2230_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
return v___x_2230_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill(lean_object* v_self_2234_, lean_object* v_signal_2235_){
_start:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2237_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_kill___closed__0));
v___x_2238_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(v_signal_2235_);
v___x_2239_ = lean_unsigned_to_nat(1u);
v___x_2240_ = lean_mk_empty_array_with_capacity(v___x_2239_);
v___x_2241_ = lean_array_push(v___x_2240_, v___x_2238_);
v___x_2242_ = l_Lasm_JS_Web_Support_args(v___x_2241_);
v___x_2243_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_2234_, v___x_2237_, v___x_2242_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill___boxed(lean_object* v_self_2244_, lean_object* v_signal_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l_Lasm_JS_Node_ChildProcess_kill(v_self_2244_, v_signal_2245_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(lean_object* v_x_2248_){
_start:
{
if (lean_obj_tag(v_x_2248_) == 0)
{
lean_object* v___x_2249_; 
v___x_2249_ = lean_box(0);
return v___x_2249_;
}
else
{
lean_object* v_val_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2260_; 
v_val_2250_ = lean_ctor_get(v_x_2248_, 0);
v_isSharedCheck_2260_ = !lean_is_exclusive(v_x_2248_);
if (v_isSharedCheck_2260_ == 0)
{
v___x_2252_ = v_x_2248_;
v_isShared_2253_ = v_isSharedCheck_2260_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_val_2250_);
lean_dec(v_x_2248_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2260_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
size_t v_sz_2254_; size_t v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2258_; 
v_sz_2254_ = lean_array_size(v_val_2250_);
v___x_2255_ = ((size_t)0ULL);
v___x_2256_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_2254_, v___x_2255_, v_val_2250_);
if (v_isShared_2253_ == 0)
{
lean_ctor_set_tag(v___x_2252_, 8);
lean_ctor_set(v___x_2252_, 0, v___x_2256_);
v___x_2258_ = v___x_2252_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2256_);
v___x_2258_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
return v___x_2258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(lean_object* v_x_2261_){
_start:
{
if (lean_obj_tag(v_x_2261_) == 0)
{
lean_object* v___x_2262_; 
v___x_2262_ = lean_box(0);
return v___x_2262_;
}
else
{
lean_object* v_val_2263_; 
v_val_2263_ = lean_ctor_get(v_x_2261_, 0);
lean_inc(v_val_2263_);
lean_dec_ref_known(v_x_2261_, 1);
if (lean_obj_tag(v_val_2263_) == 0)
{
lean_object* v_value_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2271_; 
v_value_2264_ = lean_ctor_get(v_val_2263_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v_val_2263_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2266_ = v_val_2263_;
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_value_2264_);
lean_dec(v_val_2263_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2269_; 
if (v_isShared_2267_ == 0)
{
lean_ctor_set_tag(v___x_2266_, 4);
v___x_2269_ = v___x_2266_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_value_2264_);
v___x_2269_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
return v___x_2269_;
}
}
}
else
{
lean_object* v_value_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v_value_2272_ = lean_ctor_get(v_val_2263_, 0);
lean_inc(v_value_2272_);
lean_dec_ref_known(v_val_2263_, 1);
v___x_2273_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2274_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2274_, 0, v_value_2272_);
lean_ctor_set(v___x_2274_, 1, v___x_2273_);
return v___x_2274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(lean_object* v_x_2275_){
_start:
{
if (lean_obj_tag(v_x_2275_) == 0)
{
lean_object* v___x_2276_; 
v___x_2276_ = lean_box(0);
return v___x_2276_;
}
else
{
lean_object* v_val_2277_; 
v_val_2277_ = lean_ctor_get(v_x_2275_, 0);
lean_inc(v_val_2277_);
lean_dec_ref_known(v_x_2275_, 1);
if (lean_obj_tag(v_val_2277_) == 0)
{
uint8_t v_value_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2285_; 
v_value_2278_ = lean_ctor_get_uint8(v_val_2277_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v_val_2277_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2280_ = v_val_2277_;
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
else
{
lean_dec(v_val_2277_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2283_; 
if (v_isShared_2281_ == 0)
{
lean_ctor_set_tag(v___x_2280_, 2);
v___x_2283_ = v___x_2280_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2284_, 0, v_value_2278_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
else
{
lean_object* v_value_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
v_value_2286_ = lean_ctor_get(v_val_2277_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v_val_2277_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v_val_2277_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_value_2286_);
lean_dec(v_val_2277_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2291_; 
if (v_isShared_2289_ == 0)
{
lean_ctor_set_tag(v___x_2288_, 4);
v___x_2291_ = v___x_2288_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_value_2286_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1(lean_object* v_x_2294_){
_start:
{
if (lean_obj_tag(v_x_2294_) == 0)
{
lean_object* v___x_2295_; 
v___x_2295_ = lean_box(0);
return v___x_2295_;
}
else
{
lean_object* v_val_2296_; lean_object* v_cwd_2297_; lean_object* v_env_2298_; lean_object* v_encoding_2299_; lean_object* v_timeout_2300_; lean_object* v_maxBuffer_2301_; lean_object* v_killSignal_2302_; lean_object* v_uid_2303_; lean_object* v_gid_2304_; lean_object* v_windowsHide_2305_; lean_object* v_windowsVerbatimArguments_2306_; lean_object* v_shell_2307_; lean_object* v_signal_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v_val_2296_ = lean_ctor_get(v_x_2294_, 0);
lean_inc(v_val_2296_);
lean_dec_ref_known(v_x_2294_, 1);
v_cwd_2297_ = lean_ctor_get(v_val_2296_, 0);
lean_inc(v_cwd_2297_);
v_env_2298_ = lean_ctor_get(v_val_2296_, 1);
lean_inc(v_env_2298_);
v_encoding_2299_ = lean_ctor_get(v_val_2296_, 2);
lean_inc(v_encoding_2299_);
v_timeout_2300_ = lean_ctor_get(v_val_2296_, 3);
lean_inc(v_timeout_2300_);
v_maxBuffer_2301_ = lean_ctor_get(v_val_2296_, 4);
lean_inc(v_maxBuffer_2301_);
v_killSignal_2302_ = lean_ctor_get(v_val_2296_, 5);
lean_inc(v_killSignal_2302_);
v_uid_2303_ = lean_ctor_get(v_val_2296_, 6);
lean_inc(v_uid_2303_);
v_gid_2304_ = lean_ctor_get(v_val_2296_, 7);
lean_inc(v_gid_2304_);
v_windowsHide_2305_ = lean_ctor_get(v_val_2296_, 8);
lean_inc(v_windowsHide_2305_);
v_windowsVerbatimArguments_2306_ = lean_ctor_get(v_val_2296_, 9);
lean_inc(v_windowsVerbatimArguments_2306_);
v_shell_2307_ = lean_ctor_get(v_val_2296_, 10);
lean_inc(v_shell_2307_);
v_signal_2308_ = lean_ctor_get(v_val_2296_, 11);
lean_inc(v_signal_2308_);
lean_dec(v_val_2296_);
v___x_2309_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_2310_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(v_cwd_2297_);
v___x_2311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2309_);
lean_ctor_set(v___x_2311_, 1, v___x_2310_);
v___x_2312_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1));
v___x_2313_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(v_env_2298_);
v___x_2314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2312_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
v___x_2315_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__2));
v___x_2316_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_2299_);
v___x_2317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2315_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
v___x_2318_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3));
v___x_2319_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_timeout_2300_);
v___x_2320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2318_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
v___x_2321_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__4));
v___x_2322_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxBuffer_2301_);
v___x_2323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2321_);
lean_ctor_set(v___x_2323_, 1, v___x_2322_);
v___x_2324_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5));
v___x_2325_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_2302_);
v___x_2326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2324_);
lean_ctor_set(v___x_2326_, 1, v___x_2325_);
v___x_2327_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6));
v___x_2328_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_uid_2303_);
v___x_2329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2327_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
v___x_2330_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7));
v___x_2331_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_gid_2304_);
v___x_2332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2330_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
v___x_2333_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8));
v___x_2334_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_2305_);
lean_dec(v_windowsHide_2305_);
v___x_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2333_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
v___x_2336_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9));
v___x_2337_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_2306_);
lean_dec(v_windowsVerbatimArguments_2306_);
v___x_2338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2336_);
lean_ctor_set(v___x_2338_, 1, v___x_2337_);
v___x_2339_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10));
v___x_2340_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_shell_2307_);
v___x_2341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2339_);
lean_ctor_set(v___x_2341_, 1, v___x_2340_);
v___x_2342_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11));
v___x_2343_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2308_);
lean_dec(v_signal_2308_);
v___x_2344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2342_);
lean_ctor_set(v___x_2344_, 1, v___x_2343_);
v___x_2345_ = lean_unsigned_to_nat(12u);
v___x_2346_ = lean_mk_empty_array_with_capacity(v___x_2345_);
v___x_2347_ = lean_array_push(v___x_2346_, v___x_2311_);
v___x_2348_ = lean_array_push(v___x_2347_, v___x_2314_);
v___x_2349_ = lean_array_push(v___x_2348_, v___x_2317_);
v___x_2350_ = lean_array_push(v___x_2349_, v___x_2320_);
v___x_2351_ = lean_array_push(v___x_2350_, v___x_2323_);
v___x_2352_ = lean_array_push(v___x_2351_, v___x_2326_);
v___x_2353_ = lean_array_push(v___x_2352_, v___x_2329_);
v___x_2354_ = lean_array_push(v___x_2353_, v___x_2332_);
v___x_2355_ = lean_array_push(v___x_2354_, v___x_2335_);
v___x_2356_ = lean_array_push(v___x_2355_, v___x_2338_);
v___x_2357_ = lean_array_push(v___x_2356_, v___x_2341_);
v___x_2358_ = lean_array_push(v___x_2357_, v___x_2344_);
v___x_2359_ = l_Lasm_JS_Web_Support_fields(v___x_2358_);
lean_dec_ref(v___x_2358_);
return v___x_2359_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(lean_object* v_x_2360_){
_start:
{
if (lean_obj_tag(v_x_2360_) == 0)
{
lean_object* v___x_2361_; 
v___x_2361_ = lean_box(0);
return v___x_2361_;
}
else
{
lean_object* v_val_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2372_; 
v_val_2362_ = lean_ctor_get(v_x_2360_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v_x_2360_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2364_ = v_x_2360_;
v_isShared_2365_ = v_isSharedCheck_2372_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_val_2362_);
lean_dec(v_x_2360_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2372_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
size_t v_sz_2366_; size_t v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2370_; 
v_sz_2366_ = lean_array_size(v_val_2362_);
v___x_2367_ = ((size_t)0ULL);
v___x_2368_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2366_, v___x_2367_, v_val_2362_);
if (v_isShared_2365_ == 0)
{
lean_ctor_set_tag(v___x_2364_, 7);
lean_ctor_set(v___x_2364_, 0, v___x_2368_);
v___x_2370_ = v___x_2364_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v___x_2368_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1(lean_object* v___f_2382_, lean_object* v_x_2383_){
_start:
{
if (lean_obj_tag(v_x_2383_) == 0)
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2393_; 
lean_dec_ref(v___f_2382_);
v_a_2385_ = lean_ctor_get(v_x_2383_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v_x_2383_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2387_ = v_x_2383_;
v_isShared_2388_ = v_isSharedCheck_2393_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v_x_2383_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2393_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
if (v_isShared_2388_ == 0)
{
v___x_2390_ = v___x_2387_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2385_);
v___x_2390_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
lean_object* v___x_2391_; 
v___x_2391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2390_);
return v___x_2391_;
}
}
}
else
{
lean_object* v_a_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2419_; 
v_a_2394_ = lean_ctor_get(v_x_2383_, 0);
v_isSharedCheck_2419_ = !lean_is_exclusive(v_x_2383_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2396_ = v_x_2383_;
v_isShared_2397_ = v_isSharedCheck_2419_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_a_2394_);
lean_dec(v_x_2383_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2419_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
uint8_t v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v_val_2407_; lean_object* v___x_2410_; 
v___x_2398_ = 0;
v___x_2399_ = lean_unsigned_to_nat(1u);
v___x_2400_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__3));
v___x_2401_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2402_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2402_, 0, v_a_2394_);
lean_ctor_set(v___x_2402_, 1, v___x_2401_);
v___x_2403_ = lean_mk_empty_array_with_capacity(v___x_2399_);
v___x_2404_ = lean_array_push(v___x_2403_, v___x_2402_);
v___x_2405_ = lean_unsigned_to_nat(0u);
v___x_2410_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2400_, v___x_2404_, v___x_2398_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2411_; lean_object* v___x_2413_; 
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
lean_inc(v_a_2411_);
lean_dec_ref_known(v___x_2410_, 1);
if (v_isShared_2397_ == 0)
{
lean_ctor_set(v___x_2396_, 0, v_a_2411_);
v___x_2413_ = v___x_2396_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v_a_2411_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
v_val_2407_ = v___x_2413_;
goto v___jp_2406_;
}
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; 
v_a_2415_ = lean_ctor_get(v___x_2410_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2410_, 1);
if (v_isShared_2397_ == 0)
{
lean_ctor_set_tag(v___x_2396_, 0);
lean_ctor_set(v___x_2396_, 0, v_a_2415_);
v___x_2417_ = v___x_2396_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_a_2415_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
v_val_2407_ = v___x_2417_;
goto v___jp_2406_;
}
}
v___jp_2406_:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2408_, 0, v_val_2407_);
v___x_2409_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2405_, v___x_2398_, v___x_2408_, v___f_2382_);
return v___x_2409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___boxed(lean_object* v___f_2420_, lean_object* v_x_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1(v___f_2420_, v_x_2421_);
return v_res_2423_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(uint8_t v_await_2424_, uint64_t v_extra_2425_){
_start:
{
uint64_t v___x_2426_; uint64_t v___y_2428_; 
v___x_2426_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
if (v_await_2424_ == 0)
{
uint64_t v___x_2431_; 
v___x_2431_ = 0ULL;
v___y_2428_ = v___x_2431_;
goto v___jp_2427_;
}
else
{
uint64_t v___x_2432_; 
v___x_2432_ = 2ULL;
v___y_2428_ = v___x_2432_;
goto v___jp_2427_;
}
v___jp_2427_:
{
uint64_t v___x_2429_; uint64_t v___x_2430_; 
v___x_2429_ = lean_uint64_lor(v___x_2426_, v___y_2428_);
v___x_2430_ = lean_uint64_lor(v___x_2429_, v_extra_2425_);
return v___x_2430_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6___boxed(lean_object* v_await_2433_, lean_object* v_extra_2434_){
_start:
{
uint8_t v_await_boxed_2435_; uint64_t v_extra_boxed_2436_; uint64_t v_res_2437_; lean_object* v_r_2438_; 
v_await_boxed_2435_ = lean_unbox(v_await_2433_);
v_extra_boxed_2436_ = lean_unbox_uint64(v_extra_2434_);
lean_dec_ref(v_extra_2434_);
v_res_2437_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(v_await_boxed_2435_, v_extra_boxed_2436_);
v_r_2438_ = lean_box_uint64(v_res_2437_);
return v_r_2438_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7(lean_object* v___f_2439_, lean_object* v_a_2440_, uint32_t v_op_2441_, uint64_t v_flags_2442_, lean_object* v_payload_2443_, lean_object* v_x_2444_){
_start:
{
if (lean_obj_tag(v_x_2444_) == 0)
{
lean_object* v___x_2446_; 
lean_dec_ref(v___f_2439_);
v___x_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2446_, 0, v_x_2444_);
return v___x_2446_;
}
else
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2467_; 
v_a_2447_ = lean_ctor_get(v_x_2444_, 0);
v_isSharedCheck_2467_ = !lean_is_exclusive(v_x_2444_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2449_ = v_x_2444_;
v_isShared_2450_ = v_isSharedCheck_2467_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v_x_2444_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2467_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
uint32_t v___x_2451_; lean_object* v___x_2452_; uint8_t v___x_2453_; lean_object* v_val_2455_; lean_object* v___x_2458_; 
v___x_2451_ = 0;
v___x_2452_ = lean_unsigned_to_nat(0u);
v___x_2453_ = 0;
v___x_2458_ = lasm_js_call_into(v_a_2440_, v_op_2441_, v___x_2451_, v_flags_2442_, v_a_2447_, v_payload_2443_);
lean_dec(v_a_2447_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; lean_object* v___x_2461_; 
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2459_);
lean_dec_ref_known(v___x_2458_, 1);
if (v_isShared_2450_ == 0)
{
lean_ctor_set(v___x_2449_, 0, v_a_2459_);
v___x_2461_ = v___x_2449_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v_a_2459_);
v___x_2461_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
v_val_2455_ = v___x_2461_;
goto v___jp_2454_;
}
}
else
{
lean_object* v_a_2463_; lean_object* v___x_2465_; 
v_a_2463_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2463_);
lean_dec_ref_known(v___x_2458_, 1);
if (v_isShared_2450_ == 0)
{
lean_ctor_set_tag(v___x_2449_, 0);
lean_ctor_set(v___x_2449_, 0, v_a_2463_);
v___x_2465_ = v___x_2449_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_a_2463_);
v___x_2465_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
v_val_2455_ = v___x_2465_;
goto v___jp_2454_;
}
}
v___jp_2454_:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2456_, 0, v_val_2455_);
v___x_2457_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2452_, v___x_2453_, v___x_2456_, v___f_2439_);
return v___x_2457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7___boxed(lean_object* v___f_2468_, lean_object* v_a_2469_, lean_object* v_op_2470_, lean_object* v_flags_2471_, lean_object* v_payload_2472_, lean_object* v_x_2473_, lean_object* v___y_2474_){
_start:
{
uint32_t v_op_boxed_2475_; uint64_t v_flags_boxed_2476_; lean_object* v_res_2477_; 
v_op_boxed_2475_ = lean_unbox_uint32(v_op_2470_);
lean_dec(v_op_2470_);
v_flags_boxed_2476_ = lean_unbox_uint64(v_flags_2471_);
lean_dec_ref(v_flags_2471_);
v_res_2477_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7(v___f_2468_, v_a_2469_, v_op_boxed_2475_, v_flags_boxed_2476_, v_payload_2472_, v_x_2473_);
lean_dec(v_payload_2472_);
lean_dec(v_a_2469_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5(lean_object* v___x_2478_, uint8_t v___x_2479_, lean_object* v___f_2480_, lean_object* v_a_2481_, uint32_t v_op_2482_, uint64_t v_flags_2483_, lean_object* v_payload_2484_, lean_object* v_x_2485_){
_start:
{
lean_object* v_val_2488_; 
if (lean_obj_tag(v_x_2485_) == 0)
{
lean_object* v___x_2491_; 
lean_dec_ref(v___f_2480_);
lean_dec(v___x_2478_);
v___x_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2491_, 0, v_x_2485_);
return v___x_2491_;
}
else
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2506_; 
v_a_2492_ = lean_ctor_get(v_x_2485_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v_x_2485_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2494_ = v_x_2485_;
v_isShared_2495_ = v_isSharedCheck_2506_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v_x_2485_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2506_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
uint32_t v___x_2496_; lean_object* v___x_2497_; 
v___x_2496_ = 0;
v___x_2497_ = lasm_js_call_into(v_a_2481_, v_op_2482_, v___x_2496_, v_flags_2483_, v_a_2492_, v_payload_2484_);
lean_dec(v_a_2492_);
if (lean_obj_tag(v___x_2497_) == 0)
{
lean_object* v_a_2498_; lean_object* v___x_2500_; 
v_a_2498_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_a_2498_);
lean_dec_ref_known(v___x_2497_, 1);
if (v_isShared_2495_ == 0)
{
lean_ctor_set(v___x_2494_, 0, v_a_2498_);
v___x_2500_ = v___x_2494_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2498_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
v_val_2488_ = v___x_2500_;
goto v___jp_2487_;
}
}
else
{
lean_object* v_a_2502_; lean_object* v___x_2504_; 
v_a_2502_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_a_2502_);
lean_dec_ref_known(v___x_2497_, 1);
if (v_isShared_2495_ == 0)
{
lean_ctor_set_tag(v___x_2494_, 0);
lean_ctor_set(v___x_2494_, 0, v_a_2502_);
v___x_2504_ = v___x_2494_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v_a_2502_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
v_val_2488_ = v___x_2504_;
goto v___jp_2487_;
}
}
}
}
v___jp_2487_:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2489_, 0, v_val_2488_);
v___x_2490_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2478_, v___x_2479_, v___x_2489_, v___f_2480_);
return v___x_2490_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5___boxed(lean_object* v___x_2507_, lean_object* v___x_2508_, lean_object* v___f_2509_, lean_object* v_a_2510_, lean_object* v_op_2511_, lean_object* v_flags_2512_, lean_object* v_payload_2513_, lean_object* v_x_2514_, lean_object* v___y_2515_){
_start:
{
uint8_t v___x_2046__boxed_2516_; uint32_t v_op_boxed_2517_; uint64_t v_flags_boxed_2518_; lean_object* v_res_2519_; 
v___x_2046__boxed_2516_ = lean_unbox(v___x_2508_);
v_op_boxed_2517_ = lean_unbox_uint32(v_op_2511_);
lean_dec(v_op_2511_);
v_flags_boxed_2518_ = lean_unbox_uint64(v_flags_2512_);
lean_dec_ref(v_flags_2512_);
v_res_2519_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5(v___x_2507_, v___x_2046__boxed_2516_, v___f_2509_, v_a_2510_, v_op_boxed_2517_, v_flags_boxed_2518_, v_payload_2513_, v_x_2514_);
lean_dec(v_payload_2513_);
lean_dec(v_a_2510_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3(lean_object* v_a_2520_, lean_object* v_x_2521_){
_start:
{
if (lean_obj_tag(v_x_2521_) == 0)
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2531_; 
v_a_2523_ = lean_ctor_get(v_x_2521_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v_x_2521_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2525_ = v_x_2521_;
v_isShared_2526_ = v_isSharedCheck_2531_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v_x_2521_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2531_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
lean_object* v___x_2529_; 
v___x_2529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2528_);
return v___x_2529_;
}
}
}
else
{
lean_object* v___x_2532_; 
lean_dec_ref_known(v_x_2521_, 1);
v___x_2532_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2520_);
return v___x_2532_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed(lean_object* v_a_2533_, lean_object* v_x_2534_, lean_object* v___y_2535_){
_start:
{
lean_object* v_res_2536_; 
v_res_2536_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3(v_a_2533_, v_x_2534_);
lean_dec(v_a_2533_);
return v_res_2536_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6(lean_object* v_failurePrefix_2537_, uint32_t v_op_2538_, uint64_t v_flags_2539_, lean_object* v_payload_2540_, lean_object* v___f_2541_, lean_object* v___f_2542_, lean_object* v___f_2543_, lean_object* v_x_2544_){
_start:
{
if (lean_obj_tag(v_x_2544_) == 0)
{
lean_object* v_a_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2554_; 
lean_dec_ref(v___f_2543_);
lean_dec_ref(v___f_2542_);
lean_dec_ref(v___f_2541_);
lean_dec(v_payload_2540_);
v_a_2546_ = lean_ctor_get(v_x_2544_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v_x_2544_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2548_ = v_x_2544_;
v_isShared_2549_ = v_isSharedCheck_2554_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_a_2546_);
lean_dec(v_x_2544_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2554_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v___x_2551_; 
if (v_isShared_2549_ == 0)
{
v___x_2551_ = v___x_2548_;
goto v_reusejp_2550_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2546_);
v___x_2551_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2550_;
}
v_reusejp_2550_:
{
lean_object* v___x_2552_; 
v___x_2552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2551_);
return v___x_2552_;
}
}
}
else
{
lean_object* v_a_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2601_; 
v_a_2555_ = lean_ctor_get(v_x_2544_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v_x_2544_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2557_ = v_x_2544_;
v_isShared_2558_ = v_isSharedCheck_2601_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_a_2555_);
lean_dec(v_x_2544_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2601_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; uint8_t v___x_2561_; 
v___x_2559_ = lean_string_utf8_byte_size(v_failurePrefix_2537_);
v___x_2560_ = lean_unsigned_to_nat(0u);
v___x_2561_ = lean_nat_dec_eq(v___x_2559_, v___x_2560_);
if (v___x_2561_ == 0)
{
lean_object* v___f_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___f_2566_; lean_object* v_val_2568_; lean_object* v___x_2573_; 
lean_dec_ref(v___f_2543_);
lean_inc(v_a_2555_);
v___f_2562_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2562_, 0, v_a_2555_);
v___x_2563_ = lean_box(v___x_2561_);
v___x_2564_ = lean_box_uint32(v_op_2538_);
v___x_2565_ = lean_box_uint64(v_flags_2539_);
lean_inc(v_payload_2540_);
v___f_2566_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2566_, 0, v___x_2560_);
lean_closure_set(v___f_2566_, 1, v___x_2563_);
lean_closure_set(v___f_2566_, 2, v___f_2562_);
lean_closure_set(v___f_2566_, 3, v_a_2555_);
lean_closure_set(v___f_2566_, 4, v___x_2564_);
lean_closure_set(v___f_2566_, 5, v___x_2565_);
lean_closure_set(v___f_2566_, 6, v_payload_2540_);
v___x_2573_ = l_Lasm_JS_Wire_encodeIO(v_payload_2540_);
lean_dec(v_payload_2540_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2576_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_a_2574_);
lean_dec_ref_known(v___x_2573_, 1);
if (v_isShared_2558_ == 0)
{
lean_ctor_set(v___x_2557_, 0, v_a_2574_);
v___x_2576_ = v___x_2557_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2574_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
v_val_2568_ = v___x_2576_;
goto v___jp_2567_;
}
}
else
{
lean_object* v_a_2578_; lean_object* v___x_2580_; 
v_a_2578_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_a_2578_);
lean_dec_ref_known(v___x_2573_, 1);
if (v_isShared_2558_ == 0)
{
lean_ctor_set_tag(v___x_2557_, 0);
lean_ctor_set(v___x_2557_, 0, v_a_2578_);
v___x_2580_ = v___x_2557_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2578_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
v_val_2568_ = v___x_2580_;
goto v___jp_2567_;
}
}
v___jp_2567_:
{
lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2569_, 0, v_val_2568_);
v___x_2570_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2560_, v___x_2561_, v___x_2569_, v___f_2566_);
v___x_2571_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2560_, v___x_2561_, v___x_2570_, v___f_2541_);
v___x_2572_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2560_, v___x_2561_, v___x_2571_, v___f_2542_);
return v___x_2572_;
}
}
else
{
lean_object* v___f_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___f_2585_; uint8_t v___x_2586_; lean_object* v_val_2588_; lean_object* v___x_2592_; 
lean_dec_ref(v___f_2542_);
lean_dec_ref(v___f_2541_);
lean_inc(v_a_2555_);
v___f_2582_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2582_, 0, v_a_2555_);
v___x_2583_ = lean_box_uint32(v_op_2538_);
v___x_2584_ = lean_box_uint64(v_flags_2539_);
lean_inc(v_payload_2540_);
v___f_2585_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2585_, 0, v___f_2582_);
lean_closure_set(v___f_2585_, 1, v_a_2555_);
lean_closure_set(v___f_2585_, 2, v___x_2583_);
lean_closure_set(v___f_2585_, 3, v___x_2584_);
lean_closure_set(v___f_2585_, 4, v_payload_2540_);
v___x_2586_ = 0;
v___x_2592_ = l_Lasm_JS_Wire_encodeIO(v_payload_2540_);
lean_dec(v_payload_2540_);
if (lean_obj_tag(v___x_2592_) == 0)
{
lean_object* v_a_2593_; lean_object* v___x_2595_; 
v_a_2593_ = lean_ctor_get(v___x_2592_, 0);
lean_inc(v_a_2593_);
lean_dec_ref_known(v___x_2592_, 1);
if (v_isShared_2558_ == 0)
{
lean_ctor_set(v___x_2557_, 0, v_a_2593_);
v___x_2595_ = v___x_2557_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_a_2593_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
v_val_2588_ = v___x_2595_;
goto v___jp_2587_;
}
}
else
{
lean_object* v_a_2597_; lean_object* v___x_2599_; 
v_a_2597_ = lean_ctor_get(v___x_2592_, 0);
lean_inc(v_a_2597_);
lean_dec_ref_known(v___x_2592_, 1);
if (v_isShared_2558_ == 0)
{
lean_ctor_set_tag(v___x_2557_, 0);
lean_ctor_set(v___x_2557_, 0, v_a_2597_);
v___x_2599_ = v___x_2557_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_a_2597_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
v_val_2588_ = v___x_2599_;
goto v___jp_2587_;
}
}
v___jp_2587_:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2589_, 0, v_val_2588_);
v___x_2590_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2560_, v___x_2586_, v___x_2589_, v___f_2585_);
v___x_2591_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2560_, v___x_2586_, v___x_2590_, v___f_2543_);
return v___x_2591_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6___boxed(lean_object* v_failurePrefix_2602_, lean_object* v_op_2603_, lean_object* v_flags_2604_, lean_object* v_payload_2605_, lean_object* v___f_2606_, lean_object* v___f_2607_, lean_object* v___f_2608_, lean_object* v_x_2609_, lean_object* v___y_2610_){
_start:
{
uint32_t v_op_boxed_2611_; uint64_t v_flags_boxed_2612_; lean_object* v_res_2613_; 
v_op_boxed_2611_ = lean_unbox_uint32(v_op_2603_);
lean_dec(v_op_2603_);
v_flags_boxed_2612_ = lean_unbox_uint64(v_flags_2604_);
lean_dec_ref(v_flags_2604_);
v_res_2613_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6(v_failurePrefix_2602_, v_op_boxed_2611_, v_flags_boxed_2612_, v_payload_2605_, v___f_2606_, v___f_2607_, v___f_2608_, v_x_2609_);
lean_dec_ref(v_failurePrefix_2602_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8(lean_object* v___f_2614_, lean_object* v_x_2615_){
_start:
{
if (lean_obj_tag(v_x_2615_) == 0)
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2625_; 
lean_dec_ref(v___f_2614_);
v_a_2617_ = lean_ctor_get(v_x_2615_, 0);
v_isSharedCheck_2625_ = !lean_is_exclusive(v_x_2615_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2619_ = v_x_2615_;
v_isShared_2620_ = v_isSharedCheck_2625_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v_x_2615_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2625_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_a_2617_);
v___x_2622_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
lean_object* v___x_2623_; 
v___x_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
return v___x_2623_;
}
}
}
else
{
lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2637_; 
v_isSharedCheck_2637_ = !lean_is_exclusive(v_x_2615_);
if (v_isSharedCheck_2637_ == 0)
{
lean_object* v_unused_2638_; 
v_unused_2638_ = lean_ctor_get(v_x_2615_, 0);
lean_dec(v_unused_2638_);
v___x_2627_ = v_x_2615_;
v_isShared_2628_ = v_isSharedCheck_2637_;
goto v_resetjp_2626_;
}
else
{
lean_dec(v_x_2615_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2637_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2629_; uint8_t v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2633_; 
v___x_2629_ = lean_unsigned_to_nat(0u);
v___x_2630_ = 0;
v___x_2631_ = lean_io_promise_new();
if (v_isShared_2628_ == 0)
{
lean_ctor_set(v___x_2627_, 0, v___x_2631_);
v___x_2633_ = v___x_2627_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v___x_2631_);
v___x_2633_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2633_);
v___x_2635_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2629_, v___x_2630_, v___x_2634_, v___f_2614_);
return v___x_2635_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8___boxed(lean_object* v___f_2639_, lean_object* v_x_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8(v___f_2639_, v_x_2640_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(lean_object* v_d_2650_, lean_object* v_key_2651_){
_start:
{
if (lean_obj_tag(v_d_2650_) == 8)
{
lean_object* v___x_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2697_; 
v___x_2652_ = l_Lasm_JS_Data_field(v_d_2650_, v_key_2651_);
v_isSharedCheck_2697_ = !lean_is_exclusive(v_d_2650_);
if (v_isSharedCheck_2697_ == 0)
{
lean_object* v_unused_2698_; 
v_unused_2698_ = lean_ctor_get(v_d_2650_, 0);
lean_dec(v_unused_2698_);
v___x_2654_ = v_d_2650_;
v_isShared_2655_ = v_isSharedCheck_2697_;
goto v_resetjp_2653_;
}
else
{
lean_dec(v_d_2650_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2697_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
switch(lean_obj_tag(v___x_2652_))
{
case 4:
{
lean_object* v_s_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2666_; 
v_s_2656_ = lean_ctor_get(v___x_2652_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2652_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2658_ = v___x_2652_;
v_isShared_2659_ = v_isSharedCheck_2666_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_s_2656_);
lean_dec(v___x_2652_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2666_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2661_; 
if (v_isShared_2659_ == 0)
{
lean_ctor_set_tag(v___x_2658_, 0);
v___x_2661_ = v___x_2658_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_s_2656_);
v___x_2661_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
lean_object* v___x_2663_; 
if (v_isShared_2655_ == 0)
{
lean_ctor_set_tag(v___x_2654_, 1);
lean_ctor_set(v___x_2654_, 0, v___x_2661_);
v___x_2663_ = v___x_2654_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v___x_2661_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
}
case 6:
{
lean_object* v_b_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2677_; 
v_b_2667_ = lean_ctor_get(v___x_2652_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2652_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2669_ = v___x_2652_;
v_isShared_2670_ = v_isSharedCheck_2677_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_b_2667_);
lean_dec(v___x_2652_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2677_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
lean_ctor_set_tag(v___x_2669_, 1);
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_b_2667_);
v___x_2672_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
lean_object* v___x_2674_; 
if (v_isShared_2655_ == 0)
{
lean_ctor_set_tag(v___x_2654_, 1);
lean_ctor_set(v___x_2654_, 0, v___x_2672_);
v___x_2674_ = v___x_2654_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v___x_2672_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
}
default: 
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; uint8_t v___x_2688_; 
v___x_2678_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__0));
v___x_2679_ = lean_string_append(v___x_2678_, v_key_2651_);
v___x_2680_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__1));
v___x_2681_ = lean_string_append(v___x_2679_, v___x_2680_);
v___x_2682_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__2));
v___x_2683_ = lean_string_append(v___x_2681_, v___x_2682_);
v___x_2684_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__3));
v___x_2685_ = lean_string_append(v___x_2683_, v___x_2684_);
v___x_2686_ = l_Lasm_JS_Data_describe(v___x_2652_);
v___x_2687_ = lean_string_append(v___x_2685_, v___x_2686_);
lean_dec_ref(v___x_2686_);
v___x_2688_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_2688_ == 0)
{
lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2692_; 
v___x_2689_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___x_2690_ = lean_string_append(v___x_2687_, v___x_2689_);
if (v_isShared_2655_ == 0)
{
lean_ctor_set_tag(v___x_2654_, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2690_);
v___x_2692_ = v___x_2654_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v___x_2690_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
return v___x_2692_;
}
}
else
{
lean_object* v___x_2695_; 
if (v_isShared_2655_ == 0)
{
lean_ctor_set_tag(v___x_2654_, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2687_);
v___x_2695_ = v___x_2654_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2687_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
}
}
}
else
{
lean_object* v___x_2699_; 
lean_dec(v_d_2650_);
v___x_2699_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__5));
return v___x_2699_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___boxed(lean_object* v_d_2700_, lean_object* v_key_2701_){
_start:
{
lean_object* v_res_2702_; 
v_res_2702_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_2700_, v_key_2701_);
lean_dec_ref(v_key_2701_);
return v_res_2702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(lean_object* v_context_2703_, lean_object* v_d_2704_){
_start:
{
lean_object* v___y_2707_; lean_object* v___y_2708_; lean_object* v___y_2713_; lean_object* v_received_2714_; lean_object* v___y_2733_; lean_object* v_a_2736_; lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2760_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0));
lean_inc(v_d_2704_);
v___x_2761_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_2704_, v___x_2760_);
if (lean_obj_tag(v___x_2761_) == 0)
{
lean_object* v_a_2762_; 
v_a_2762_ = lean_ctor_get(v___x_2761_, 0);
lean_inc(v_a_2762_);
lean_dec_ref_known(v___x_2761_, 1);
v_a_2736_ = v_a_2762_;
goto v___jp_2735_;
}
else
{
lean_object* v_a_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v_a_2763_ = lean_ctor_get(v___x_2761_, 0);
lean_inc(v_a_2763_);
lean_dec_ref_known(v___x_2761_, 1);
v___x_2764_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1));
lean_inc(v_d_2704_);
v___x_2765_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_2704_, v___x_2764_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; 
lean_dec(v_a_2763_);
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v___x_2765_, 1);
v_a_2736_ = v_a_2766_;
goto v___jp_2735_;
}
else
{
lean_object* v_a_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2775_; 
lean_dec(v_d_2704_);
v_a_2767_ = lean_ctor_get(v___x_2765_, 0);
v_isSharedCheck_2775_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2775_ == 0)
{
v___x_2769_ = v___x_2765_;
v_isShared_2770_ = v_isSharedCheck_2775_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_a_2767_);
lean_dec(v___x_2765_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2775_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2771_; lean_object* v___x_2773_; 
v___x_2771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2771_, 0, v_a_2763_);
lean_ctor_set(v___x_2771_, 1, v_a_2767_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set_tag(v___x_2769_, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2771_);
v___x_2773_ = v___x_2769_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v___x_2771_);
v___x_2773_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
return v___x_2773_;
}
}
}
}
v___jp_2706_:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v___x_2709_ = lean_string_append(v___y_2707_, v___y_2708_);
lean_dec_ref(v___y_2708_);
v___x_2710_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2710_, 0, v___x_2709_);
v___x_2711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2710_);
return v___x_2711_;
}
v___jp_2712_:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; uint8_t v___x_2726_; 
v___x_2715_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_2716_ = lean_string_append(v___x_2715_, v_context_2703_);
v___x_2717_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_2718_ = lean_string_append(v___x_2716_, v___x_2717_);
v___x_2719_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__1));
v___x_2720_ = lean_string_append(v___x_2718_, v___x_2719_);
v___x_2721_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_2722_ = lean_string_append(v___x_2720_, v___x_2721_);
v___x_2723_ = lean_string_append(v___x_2722_, v_received_2714_);
lean_dec_ref(v_received_2714_);
v___x_2724_ = lean_string_utf8_byte_size(v___y_2713_);
v___x_2725_ = lean_unsigned_to_nat(0u);
v___x_2726_ = lean_nat_dec_eq(v___x_2724_, v___x_2725_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2727_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__4));
v___x_2728_ = lean_string_append(v___x_2727_, v___y_2713_);
lean_dec_ref(v___y_2713_);
v___x_2729_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__5));
v___x_2730_ = lean_string_append(v___x_2728_, v___x_2729_);
v___y_2707_ = v___x_2723_;
v___y_2708_ = v___x_2730_;
goto v___jp_2706_;
}
else
{
lean_object* v___x_2731_; 
lean_dec_ref(v___y_2713_);
v___x_2731_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___y_2707_ = v___x_2723_;
v___y_2708_ = v___x_2731_;
goto v___jp_2706_;
}
}
v___jp_2732_:
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Lasm_JS_Data_describe(v_d_2704_);
v___y_2713_ = v___y_2733_;
v_received_2714_ = v___x_2734_;
goto v___jp_2712_;
}
v___jp_2735_:
{
if (lean_obj_tag(v_d_2704_) == 9)
{
lean_object* v_value_2737_; lean_object* v_description_2738_; lean_object* v___x_2739_; uint8_t v___x_2740_; 
v_value_2737_ = lean_ctor_get(v_d_2704_, 0);
v_description_2738_ = lean_ctor_get(v_d_2704_, 1);
v___x_2739_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2740_ = lean_string_dec_eq(v_description_2738_, v___x_2739_);
if (v___x_2740_ == 0)
{
v___y_2733_ = v_a_2736_;
goto v___jp_2732_;
}
else
{
lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2757_; 
lean_inc(v_value_2737_);
v_isSharedCheck_2757_ = !lean_is_exclusive(v_d_2704_);
if (v_isSharedCheck_2757_ == 0)
{
lean_object* v_unused_2758_; lean_object* v_unused_2759_; 
v_unused_2758_ = lean_ctor_get(v_d_2704_, 1);
lean_dec(v_unused_2758_);
v_unused_2759_ = lean_ctor_get(v_d_2704_, 0);
lean_dec(v_unused_2759_);
v___x_2742_ = v_d_2704_;
v_isShared_2743_ = v_isSharedCheck_2757_;
goto v_resetjp_2741_;
}
else
{
lean_dec(v_d_2704_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2757_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
uint32_t v___x_2744_; uint64_t v___x_2745_; lean_object* v___x_2747_; 
v___x_2744_ = 206;
v___x_2745_ = 0ULL;
lean_inc(v_value_2737_);
if (v_isShared_2743_ == 0)
{
lean_ctor_set(v___x_2742_, 1, v___x_2739_);
v___x_2747_ = v___x_2742_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_value_2737_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v___x_2739_);
v___x_2747_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
uint32_t v___x_2748_; lean_object* v___x_2749_; 
v___x_2748_ = lasm_js_value_handle(v_value_2737_);
lean_dec(v_value_2737_);
v___x_2749_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2744_, v___x_2745_, v___x_2747_, v___x_2748_);
lean_dec_ref(v___x_2747_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; uint8_t v___x_2751_; 
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
lean_inc(v_a_2750_);
lean_dec_ref_known(v___x_2749_, 1);
v___x_2751_ = lean_string_validate_utf8(v_a_2750_);
if (v___x_2751_ == 0)
{
lean_object* v___x_2752_; lean_object* v___x_2753_; 
lean_dec(v_a_2750_);
v___x_2752_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_2753_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2752_);
v___y_2713_ = v_a_2736_;
v_received_2714_ = v___x_2753_;
goto v___jp_2712_;
}
else
{
lean_object* v___x_2754_; 
v___x_2754_ = lean_string_from_utf8_unchecked(v_a_2750_);
v___y_2713_ = v_a_2736_;
v_received_2714_ = v___x_2754_;
goto v___jp_2712_;
}
}
else
{
lean_object* v___x_2755_; 
lean_dec_ref_known(v___x_2749_, 1);
v___x_2755_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v___y_2713_ = v_a_2736_;
v_received_2714_ = v___x_2755_;
goto v___jp_2712_;
}
}
}
}
}
else
{
v___y_2733_ = v_a_2736_;
goto v___jp_2732_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8___boxed(lean_object* v_context_2776_, lean_object* v_d_2777_, lean_object* v_a_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(v_context_2776_, v_d_2777_);
lean_dec_ref(v_context_2776_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0(lean_object* v_context_2780_, lean_object* v_x_2781_){
_start:
{
lean_object* v_val_2784_; 
if (lean_obj_tag(v_x_2781_) == 0)
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2794_; 
v_a_2786_ = lean_ctor_get(v_x_2781_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v_x_2781_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2788_ = v_x_2781_;
v_isShared_2789_ = v_isSharedCheck_2794_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v_x_2781_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2794_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2791_; 
if (v_isShared_2789_ == 0)
{
v___x_2791_ = v___x_2788_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_a_2786_);
v___x_2791_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
lean_object* v___x_2792_; 
v___x_2792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2792_, 0, v___x_2791_);
return v___x_2792_;
}
}
}
else
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2808_; 
v_a_2795_ = lean_ctor_get(v_x_2781_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v_x_2781_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2797_ = v_x_2781_;
v_isShared_2798_ = v_isSharedCheck_2808_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v_x_2781_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2808_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2799_; 
v___x_2799_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(v_context_2780_, v_a_2795_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_a_2800_; lean_object* v___x_2802_; 
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_a_2800_);
lean_dec_ref_known(v___x_2799_, 1);
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v_a_2800_);
v___x_2802_ = v___x_2797_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v_a_2800_);
v___x_2802_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
v_val_2784_ = v___x_2802_;
goto v___jp_2783_;
}
}
else
{
lean_object* v_a_2804_; lean_object* v___x_2806_; 
v_a_2804_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_a_2804_);
lean_dec_ref_known(v___x_2799_, 1);
if (v_isShared_2798_ == 0)
{
lean_ctor_set_tag(v___x_2797_, 0);
lean_ctor_set(v___x_2797_, 0, v_a_2804_);
v___x_2806_ = v___x_2797_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v_a_2804_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
v_val_2784_ = v___x_2806_;
goto v___jp_2783_;
}
}
}
}
v___jp_2783_:
{
lean_object* v___x_2785_; 
v___x_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2785_, 0, v_val_2784_);
return v___x_2785_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0___boxed(lean_object* v_context_2809_, lean_object* v_x_2810_, lean_object* v___y_2811_){
_start:
{
lean_object* v_res_2812_; 
v_res_2812_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0(v_context_2809_, v_x_2810_);
lean_dec_ref(v_context_2809_);
return v_res_2812_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1(lean_object* v___f_2813_, lean_object* v_bytes_2814_){
_start:
{
lean_object* v___x_2816_; uint8_t v___x_2817_; lean_object* v_val_2819_; lean_object* v___x_2822_; 
v___x_2816_ = lean_unsigned_to_nat(0u);
v___x_2817_ = 0;
v___x_2822_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2814_);
if (lean_obj_tag(v___x_2822_) == 0)
{
lean_object* v_a_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
v_a_2823_ = lean_ctor_get(v___x_2822_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2822_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2825_ = v___x_2822_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_a_2823_);
lean_dec(v___x_2822_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
lean_ctor_set_tag(v___x_2825_, 1);
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_a_2823_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
v_val_2819_ = v___x_2828_;
goto v___jp_2818_;
}
}
}
else
{
lean_object* v_a_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2838_; 
v_a_2831_ = lean_ctor_get(v___x_2822_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2822_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2833_ = v___x_2822_;
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_a_2831_);
lean_dec(v___x_2822_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2836_; 
if (v_isShared_2834_ == 0)
{
lean_ctor_set_tag(v___x_2833_, 0);
v___x_2836_ = v___x_2833_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_a_2831_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
v_val_2819_ = v___x_2836_;
goto v___jp_2818_;
}
}
}
v___jp_2818_:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; 
v___x_2820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2820_, 0, v_val_2819_);
v___x_2821_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2816_, v___x_2817_, v___x_2820_, v___f_2813_);
return v___x_2821_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1___boxed(lean_object* v___f_2839_, lean_object* v_bytes_2840_, lean_object* v___y_2841_){
_start:
{
lean_object* v_res_2842_; 
v_res_2842_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1(v___f_2839_, v_bytes_2840_);
lean_dec_ref(v_bytes_2840_);
return v_res_2842_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4(lean_object* v_failurePrefix_2843_, lean_object* v_x_2844_){
_start:
{
if (lean_obj_tag(v_x_2844_) == 0)
{
lean_object* v_a_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2857_; 
v_a_2846_ = lean_ctor_get(v_x_2844_, 0);
v_isSharedCheck_2857_ = !lean_is_exclusive(v_x_2844_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2848_ = v_x_2844_;
v_isShared_2849_ = v_isSharedCheck_2857_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_a_2846_);
lean_dec(v_x_2844_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2857_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2854_; 
v___x_2850_ = lean_io_error_to_string(v_a_2846_);
v___x_2851_ = lean_string_append(v_failurePrefix_2843_, v___x_2850_);
lean_dec_ref(v___x_2850_);
v___x_2852_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2851_);
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 0, v___x_2852_);
v___x_2854_ = v___x_2848_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2852_);
v___x_2854_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
lean_object* v___x_2855_; 
v___x_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2854_);
return v___x_2855_;
}
}
}
else
{
lean_object* v___x_2858_; 
lean_dec_ref(v_failurePrefix_2843_);
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v_x_2844_);
return v___x_2858_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4___boxed(lean_object* v_failurePrefix_2859_, lean_object* v_x_2860_, lean_object* v___y_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4(v_failurePrefix_2859_, v_x_2860_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2(lean_object* v___f_2863_, lean_object* v_x_2864_){
_start:
{
if (lean_obj_tag(v_x_2864_) == 0)
{
lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2874_; 
lean_dec_ref(v___f_2863_);
v_a_2866_ = lean_ctor_get(v_x_2864_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v_x_2864_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2868_ = v_x_2864_;
v_isShared_2869_ = v_isSharedCheck_2874_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v_x_2864_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2874_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2866_);
v___x_2871_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
lean_object* v___x_2872_; 
v___x_2872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2872_, 0, v___x_2871_);
return v___x_2872_;
}
}
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2876_; 
v_a_2875_ = lean_ctor_get(v_x_2864_, 0);
lean_inc(v_a_2875_);
lean_dec_ref_known(v_x_2864_, 1);
v___x_2876_ = lean_apply_2(v___f_2863_, v_a_2875_, lean_box(0));
return v___x_2876_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2___boxed(lean_object* v___f_2877_, lean_object* v_x_2878_, lean_object* v___y_2879_){
_start:
{
lean_object* v_res_2880_; 
v_res_2880_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2(v___f_2877_, v_x_2878_);
return v_res_2880_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(lean_object* v_context_2881_, uint32_t v_op_2882_, uint64_t v_flags_2883_, lean_object* v_payload_2884_, lean_object* v_failurePrefix_2885_){
_start:
{
lean_object* v___f_2887_; lean_object* v___f_2888_; lean_object* v___f_2889_; lean_object* v___f_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___f_2893_; lean_object* v___f_2894_; lean_object* v___x_2895_; uint8_t v___x_2896_; lean_object* v_val_2898_; lean_object* v___x_2901_; 
v___f_2887_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2887_, 0, v_context_2881_);
v___f_2888_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2888_, 0, v___f_2887_);
v___f_2889_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2889_, 0, v___f_2888_);
lean_inc_ref(v_failurePrefix_2885_);
v___f_2890_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2890_, 0, v_failurePrefix_2885_);
v___x_2891_ = lean_box_uint32(v_op_2882_);
v___x_2892_ = lean_box_uint64(v_flags_2883_);
lean_inc_ref(v___f_2889_);
v___f_2893_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2893_, 0, v_failurePrefix_2885_);
lean_closure_set(v___f_2893_, 1, v___x_2891_);
lean_closure_set(v___f_2893_, 2, v___x_2892_);
lean_closure_set(v___f_2893_, 3, v_payload_2884_);
lean_closure_set(v___f_2893_, 4, v___f_2890_);
lean_closure_set(v___f_2893_, 5, v___f_2889_);
lean_closure_set(v___f_2893_, 6, v___f_2889_);
v___f_2894_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2894_, 0, v___f_2893_);
v___x_2895_ = lean_unsigned_to_nat(0u);
v___x_2896_ = 0;
v___x_2901_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2901_) == 0)
{
lean_object* v_a_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2909_; 
v_a_2902_ = lean_ctor_get(v___x_2901_, 0);
v_isSharedCheck_2909_ = !lean_is_exclusive(v___x_2901_);
if (v_isSharedCheck_2909_ == 0)
{
v___x_2904_ = v___x_2901_;
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_a_2902_);
lean_dec(v___x_2901_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___x_2907_; 
if (v_isShared_2905_ == 0)
{
lean_ctor_set_tag(v___x_2904_, 1);
v___x_2907_ = v___x_2904_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v_a_2902_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
v_val_2898_ = v___x_2907_;
goto v___jp_2897_;
}
}
}
else
{
lean_object* v_a_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_2917_; 
v_a_2910_ = lean_ctor_get(v___x_2901_, 0);
v_isSharedCheck_2917_ = !lean_is_exclusive(v___x_2901_);
if (v_isSharedCheck_2917_ == 0)
{
v___x_2912_ = v___x_2901_;
v_isShared_2913_ = v_isSharedCheck_2917_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_a_2910_);
lean_dec(v___x_2901_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_2917_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
lean_object* v___x_2915_; 
if (v_isShared_2913_ == 0)
{
lean_ctor_set_tag(v___x_2912_, 0);
v___x_2915_ = v___x_2912_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v_a_2910_);
v___x_2915_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
v_val_2898_ = v___x_2915_;
goto v___jp_2897_;
}
}
}
v___jp_2897_:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2899_, 0, v_val_2898_);
v___x_2900_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2895_, v___x_2896_, v___x_2899_, v___f_2894_);
return v___x_2900_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___boxed(lean_object* v_context_2918_, lean_object* v_op_2919_, lean_object* v_flags_2920_, lean_object* v_payload_2921_, lean_object* v_failurePrefix_2922_, lean_object* v_a_2923_){
_start:
{
uint32_t v_op_boxed_2924_; uint64_t v_flags_boxed_2925_; lean_object* v_res_2926_; 
v_op_boxed_2924_ = lean_unbox_uint32(v_op_2919_);
lean_dec(v_op_2919_);
v_flags_boxed_2925_ = lean_unbox_uint64(v_flags_2920_);
lean_dec_ref(v_flags_2920_);
v_res_2926_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(v_context_2918_, v_op_boxed_2924_, v_flags_boxed_2925_, v_payload_2921_, v_failurePrefix_2922_);
return v_res_2926_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1(void){
_start:
{
uint64_t v___x_2928_; uint8_t v___x_2929_; uint64_t v___x_2930_; 
v___x_2928_ = 0ULL;
v___x_2929_ = 0;
v___x_2930_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(v___x_2929_, v___x_2928_);
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(lean_object* v_f_2931_, lean_object* v_args_2932_, lean_object* v_this_2933_){
_start:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; uint32_t v___x_2938_; uint64_t v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2935_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2936_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2936_, 0, v_f_2931_);
lean_ctor_set(v___x_2936_, 1, v___x_2935_);
v___x_2937_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__0));
v___x_2938_ = 205;
v___x_2939_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1, &l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1);
v___x_2940_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2940_, 0, v_args_2932_);
v___x_2941_ = lean_unsigned_to_nat(3u);
v___x_2942_ = lean_mk_empty_array_with_capacity(v___x_2941_);
v___x_2943_ = lean_array_push(v___x_2942_, v___x_2936_);
v___x_2944_ = lean_array_push(v___x_2943_, v_this_2933_);
v___x_2945_ = lean_array_push(v___x_2944_, v___x_2940_);
v___x_2946_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2945_);
v___x_2947_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(v___x_2937_, v___x_2938_, v___x_2939_, v___x_2946_, v___x_2935_);
return v___x_2947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___boxed(lean_object* v_f_2948_, lean_object* v_args_2949_, lean_object* v_this_2950_, lean_object* v___y_2951_){
_start:
{
lean_object* v_res_2952_; 
v_res_2952_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(v_f_2948_, v_args_2949_, v_this_2950_);
return v_res_2952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0(lean_object* v_args_2953_, lean_object* v_x_2954_){
_start:
{
if (lean_obj_tag(v_x_2954_) == 0)
{
lean_object* v_a_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2964_; 
lean_dec_ref(v_args_2953_);
v_a_2956_ = lean_ctor_get(v_x_2954_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v_x_2954_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2958_ = v_x_2954_;
v_isShared_2959_ = v_isSharedCheck_2964_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_a_2956_);
lean_dec(v_x_2954_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2964_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2961_; 
if (v_isShared_2959_ == 0)
{
v___x_2961_ = v___x_2958_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v_a_2956_);
v___x_2961_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
lean_object* v___x_2962_; 
v___x_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
return v___x_2962_;
}
}
}
else
{
lean_object* v_a_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; 
v_a_2965_ = lean_ctor_get(v_x_2954_, 0);
lean_inc(v_a_2965_);
lean_dec_ref_known(v_x_2954_, 1);
v___x_2966_ = lean_box(0);
v___x_2967_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(v_a_2965_, v_args_2953_, v___x_2966_);
return v___x_2967_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0___boxed(lean_object* v_args_2968_, lean_object* v_x_2969_, lean_object* v___y_2970_){
_start:
{
lean_object* v_res_2971_; 
v_res_2971_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0(v_args_2968_, v_x_2969_);
return v_res_2971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(lean_object* v_module_2973_, lean_object* v_path_2974_, lean_object* v_args_2975_){
_start:
{
lean_object* v___f_2977_; lean_object* v___f_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; uint8_t v___x_2983_; lean_object* v_val_2985_; lean_object* v___x_2988_; 
v___f_2977_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2977_, 0, v_args_2975_);
v___f_2978_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2978_, 0, v___f_2977_);
v___x_2979_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___closed__0));
v___x_2980_ = lean_unsigned_to_nat(0u);
v___x_2981_ = lean_box(0);
v___x_2982_ = l_String_splitOnAux(v_path_2974_, v___x_2979_, v___x_2980_, v___x_2980_, v___x_2980_, v___x_2981_);
v___x_2983_ = 0;
v___x_2988_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v_module_2973_, v___x_2982_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2996_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2991_ = v___x_2988_;
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2988_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2994_; 
if (v_isShared_2992_ == 0)
{
lean_ctor_set_tag(v___x_2991_, 1);
v___x_2994_ = v___x_2991_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2989_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
v_val_2985_ = v___x_2994_;
goto v___jp_2984_;
}
}
}
else
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3004_; 
v_a_2997_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3004_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3004_ == 0)
{
v___x_2999_ = v___x_2988_;
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v___x_2988_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3002_; 
if (v_isShared_3000_ == 0)
{
lean_ctor_set_tag(v___x_2999_, 0);
v___x_3002_ = v___x_2999_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v_a_2997_);
v___x_3002_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
v_val_2985_ = v___x_3002_;
goto v___jp_2984_;
}
}
}
v___jp_2984_:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2986_, 0, v_val_2985_);
v___x_2987_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2980_, v___x_2983_, v___x_2986_, v___f_2978_);
return v___x_2987_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___boxed(lean_object* v_module_3005_, lean_object* v_path_3006_, lean_object* v_args_3007_, lean_object* v_a_3008_){
_start:
{
lean_object* v_res_3009_; 
v_res_3009_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(v_module_3005_, v_path_3006_, v_args_3007_);
lean_dec_ref(v_path_3006_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile(lean_object* v_file_3011_, lean_object* v_args_3012_, lean_object* v_options_3013_){
_start:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3015_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0));
v___x_3016_ = ((lean_object*)(l_Lasm_JS_Node_child__process_execFile___closed__0));
v___x_3017_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3017_, 0, v_file_3011_);
v___x_3018_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(v_args_3012_);
v___x_3019_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1(v_options_3013_);
v___x_3020_ = lean_unsigned_to_nat(3u);
v___x_3021_ = lean_mk_empty_array_with_capacity(v___x_3020_);
v___x_3022_ = lean_array_push(v___x_3021_, v___x_3017_);
v___x_3023_ = lean_array_push(v___x_3022_, v___x_3018_);
v___x_3024_ = lean_array_push(v___x_3023_, v___x_3019_);
v___x_3025_ = l_Lasm_JS_Web_Support_args(v___x_3024_);
v___x_3026_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(v___x_3015_, v___x_3016_, v___x_3025_);
return v___x_3026_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile___boxed(lean_object* v_file_3027_, lean_object* v_args_3028_, lean_object* v_options_3029_, lean_object* v_a_3030_){
_start:
{
lean_object* v_res_3031_; 
v_res_3031_ = l_Lasm_JS_Node_child__process_execFile(v_file_3027_, v_args_3028_, v_options_3029_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(lean_object* v_x_3032_){
_start:
{
if (lean_obj_tag(v_x_3032_) == 0)
{
lean_object* v___x_3033_; 
v___x_3033_ = lean_box(0);
return v___x_3033_;
}
else
{
lean_object* v_val_3034_; 
v_val_3034_ = lean_ctor_get(v_x_3032_, 0);
lean_inc(v_val_3034_);
lean_dec_ref_known(v_x_3032_, 1);
if (lean_obj_tag(v_val_3034_) == 0)
{
lean_object* v_value_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3045_; 
v_value_3035_ = lean_ctor_get(v_val_3034_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v_val_3034_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3037_ = v_val_3034_;
v_isShared_3038_ = v_isSharedCheck_3045_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_value_3035_);
lean_dec(v_val_3034_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3045_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
size_t v_sz_3039_; size_t v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3043_; 
v_sz_3039_ = lean_array_size(v_value_3035_);
v___x_3040_ = ((size_t)0ULL);
v___x_3041_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_3039_, v___x_3040_, v_value_3035_);
if (v_isShared_3038_ == 0)
{
lean_ctor_set_tag(v___x_3037_, 7);
lean_ctor_set(v___x_3037_, 0, v___x_3041_);
v___x_3043_ = v___x_3037_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v___x_3041_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
else
{
lean_object* v_value_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3053_; 
v_value_3046_ = lean_ctor_get(v_val_3034_, 0);
v_isSharedCheck_3053_ = !lean_is_exclusive(v_val_3034_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3048_ = v_val_3034_;
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_value_3046_);
lean_dec(v_val_3034_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3051_; 
if (v_isShared_3049_ == 0)
{
lean_ctor_set_tag(v___x_3048_, 4);
v___x_3051_ = v___x_3048_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_value_3046_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(lean_object* v_x_3054_){
_start:
{
if (lean_obj_tag(v_x_3054_) == 0)
{
lean_object* v___x_3055_; 
v___x_3055_ = lean_box(0);
return v___x_3055_;
}
else
{
lean_object* v_val_3056_; lean_object* v_cwd_3057_; lean_object* v_env_3058_; lean_object* v_argv0_3059_; lean_object* v_stdio_3060_; lean_object* v_detached_3061_; lean_object* v_uid_3062_; lean_object* v_gid_3063_; lean_object* v_serialization_3064_; lean_object* v_shell_3065_; lean_object* v_windowsVerbatimArguments_3066_; lean_object* v_windowsHide_3067_; lean_object* v_signal_3068_; lean_object* v_timeout_3069_; lean_object* v_killSignal_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; 
v_val_3056_ = lean_ctor_get(v_x_3054_, 0);
lean_inc(v_val_3056_);
lean_dec_ref_known(v_x_3054_, 1);
v_cwd_3057_ = lean_ctor_get(v_val_3056_, 0);
lean_inc(v_cwd_3057_);
v_env_3058_ = lean_ctor_get(v_val_3056_, 1);
lean_inc(v_env_3058_);
v_argv0_3059_ = lean_ctor_get(v_val_3056_, 2);
lean_inc(v_argv0_3059_);
v_stdio_3060_ = lean_ctor_get(v_val_3056_, 3);
lean_inc(v_stdio_3060_);
v_detached_3061_ = lean_ctor_get(v_val_3056_, 4);
lean_inc(v_detached_3061_);
v_uid_3062_ = lean_ctor_get(v_val_3056_, 5);
lean_inc(v_uid_3062_);
v_gid_3063_ = lean_ctor_get(v_val_3056_, 6);
lean_inc(v_gid_3063_);
v_serialization_3064_ = lean_ctor_get(v_val_3056_, 7);
lean_inc(v_serialization_3064_);
v_shell_3065_ = lean_ctor_get(v_val_3056_, 8);
lean_inc(v_shell_3065_);
v_windowsVerbatimArguments_3066_ = lean_ctor_get(v_val_3056_, 9);
lean_inc(v_windowsVerbatimArguments_3066_);
v_windowsHide_3067_ = lean_ctor_get(v_val_3056_, 10);
lean_inc(v_windowsHide_3067_);
v_signal_3068_ = lean_ctor_get(v_val_3056_, 11);
lean_inc(v_signal_3068_);
v_timeout_3069_ = lean_ctor_get(v_val_3056_, 12);
lean_inc(v_timeout_3069_);
v_killSignal_3070_ = lean_ctor_get(v_val_3056_, 13);
lean_inc(v_killSignal_3070_);
lean_dec(v_val_3056_);
v___x_3071_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_3072_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(v_cwd_3057_);
v___x_3073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3071_);
lean_ctor_set(v___x_3073_, 1, v___x_3072_);
v___x_3074_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1));
v___x_3075_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(v_env_3058_);
v___x_3076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3074_);
lean_ctor_set(v___x_3076_, 1, v___x_3075_);
v___x_3077_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0));
v___x_3078_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_argv0_3059_);
v___x_3079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3079_, 0, v___x_3077_);
lean_ctor_set(v___x_3079_, 1, v___x_3078_);
v___x_3080_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__1));
v___x_3081_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(v_stdio_3060_);
v___x_3082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3080_);
lean_ctor_set(v___x_3082_, 1, v___x_3081_);
v___x_3083_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__2));
v___x_3084_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_detached_3061_);
lean_dec(v_detached_3061_);
v___x_3085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3083_);
lean_ctor_set(v___x_3085_, 1, v___x_3084_);
v___x_3086_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6));
v___x_3087_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_uid_3062_);
v___x_3088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3088_, 0, v___x_3086_);
lean_ctor_set(v___x_3088_, 1, v___x_3087_);
v___x_3089_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7));
v___x_3090_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_gid_3063_);
v___x_3091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3089_);
lean_ctor_set(v___x_3091_, 1, v___x_3090_);
v___x_3092_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__3));
v___x_3093_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_serialization_3064_);
v___x_3094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3094_, 0, v___x_3092_);
lean_ctor_set(v___x_3094_, 1, v___x_3093_);
v___x_3095_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10));
v___x_3096_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_shell_3065_);
v___x_3097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3095_);
lean_ctor_set(v___x_3097_, 1, v___x_3096_);
v___x_3098_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9));
v___x_3099_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_3066_);
lean_dec(v_windowsVerbatimArguments_3066_);
v___x_3100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3098_);
lean_ctor_set(v___x_3100_, 1, v___x_3099_);
v___x_3101_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8));
v___x_3102_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_3067_);
lean_dec(v_windowsHide_3067_);
v___x_3103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3103_, 0, v___x_3101_);
lean_ctor_set(v___x_3103_, 1, v___x_3102_);
v___x_3104_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11));
v___x_3105_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_3068_);
lean_dec(v_signal_3068_);
v___x_3106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3106_, 0, v___x_3104_);
lean_ctor_set(v___x_3106_, 1, v___x_3105_);
v___x_3107_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3));
v___x_3108_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_timeout_3069_);
v___x_3109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3107_);
lean_ctor_set(v___x_3109_, 1, v___x_3108_);
v___x_3110_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5));
v___x_3111_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_3070_);
v___x_3112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3110_);
lean_ctor_set(v___x_3112_, 1, v___x_3111_);
v___x_3113_ = lean_unsigned_to_nat(14u);
v___x_3114_ = lean_mk_empty_array_with_capacity(v___x_3113_);
v___x_3115_ = lean_array_push(v___x_3114_, v___x_3073_);
v___x_3116_ = lean_array_push(v___x_3115_, v___x_3076_);
v___x_3117_ = lean_array_push(v___x_3116_, v___x_3079_);
v___x_3118_ = lean_array_push(v___x_3117_, v___x_3082_);
v___x_3119_ = lean_array_push(v___x_3118_, v___x_3085_);
v___x_3120_ = lean_array_push(v___x_3119_, v___x_3088_);
v___x_3121_ = lean_array_push(v___x_3120_, v___x_3091_);
v___x_3122_ = lean_array_push(v___x_3121_, v___x_3094_);
v___x_3123_ = lean_array_push(v___x_3122_, v___x_3097_);
v___x_3124_ = lean_array_push(v___x_3123_, v___x_3100_);
v___x_3125_ = lean_array_push(v___x_3124_, v___x_3103_);
v___x_3126_ = lean_array_push(v___x_3125_, v___x_3106_);
v___x_3127_ = lean_array_push(v___x_3126_, v___x_3109_);
v___x_3128_ = lean_array_push(v___x_3127_, v___x_3112_);
v___x_3129_ = l_Lasm_JS_Web_Support_fields(v___x_3128_);
lean_dec_ref(v___x_3128_);
return v___x_3129_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn(lean_object* v_command_3137_, lean_object* v_args_3138_, lean_object* v_options_3139_){
_start:
{
uint8_t v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; 
v___x_3141_ = 0;
v___x_3142_ = lean_unsigned_to_nat(3u);
v___x_3143_ = ((lean_object*)(l_Lasm_JS_Node_child__process_spawn___closed__1));
v___x_3144_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3144_, 0, v_command_3137_);
v___x_3145_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(v_args_3138_);
v___x_3146_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(v_options_3139_);
v___x_3147_ = lean_mk_empty_array_with_capacity(v___x_3142_);
v___x_3148_ = lean_array_push(v___x_3147_, v___x_3144_);
v___x_3149_ = lean_array_push(v___x_3148_, v___x_3145_);
v___x_3150_ = lean_array_push(v___x_3149_, v___x_3146_);
v___x_3151_ = l_Lasm_JS_Web_Support_args(v___x_3150_);
v___x_3152_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_3143_, v___x_3151_, v___x_3141_);
if (lean_obj_tag(v___x_3152_) == 0)
{
lean_object* v_a_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3160_; 
v_a_3153_ = lean_ctor_get(v___x_3152_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3152_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3155_ = v___x_3152_;
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_a_3153_);
lean_dec(v___x_3152_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3158_; 
if (v_isShared_3156_ == 0)
{
v___x_3158_ = v___x_3155_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v_a_3153_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
else
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3168_; 
v_a_3161_ = lean_ctor_get(v___x_3152_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3152_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3163_ = v___x_3152_;
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3152_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3166_; 
if (v_isShared_3164_ == 0)
{
v___x_3166_ = v___x_3163_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3161_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn___boxed(lean_object* v_command_3169_, lean_object* v_args_3170_, lean_object* v_options_3171_, lean_object* v_a_3172_){
_start:
{
lean_object* v_res_3173_; 
v_res_3173_ = l_Lasm_JS_Node_child__process_spawn(v_command_3169_, v_args_3170_, v_options_3171_);
return v_res_3173_;
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
