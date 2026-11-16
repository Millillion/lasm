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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
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
lean_object* v___f_284_; lean_object* v___f_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___f_284_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_285_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_285_, 0, v_f_282_);
lean_closure_set(v___f_285_, 1, v___f_284_);
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = l_Lasm_JS_Function_ofFn(v___f_285_, v___x_286_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_295_ == 0)
{
v___x_290_ = v___x_287_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_287_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
v_a_296_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_287_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_287_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___boxed(lean_object* v_f_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn(v_f_304_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0(lean_object* v_f_307_, lean_object* v_args_308_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_unsigned_to_nat(0u);
v___x_311_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1(v_args_308_, v___x_310_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_311_, 1);
v___x_313_ = lean_unsigned_to_nat(1u);
v___x_314_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__0(v_args_308_, v___x_313_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; lean_object* v___x_316_; 
v_a_315_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_a_315_);
lean_dec_ref_known(v___x_314_, 1);
v___x_316_ = lean_apply_3(v_f_307_, v_a_312_, v_a_315_, lean_box(0));
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_324_; 
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_324_ == 0)
{
lean_object* v_unused_325_; 
v_unused_325_ = lean_ctor_get(v___x_316_, 0);
lean_dec(v_unused_325_);
v___x_318_ = v___x_316_;
v_isShared_319_ = v_isSharedCheck_324_;
goto v_resetjp_317_;
}
else
{
lean_dec(v___x_316_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_324_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_320_ = lean_box(0);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v___x_320_);
v___x_322_ = v___x_318_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_320_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
else
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
v_a_326_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_333_ == 0)
{
v___x_328_ = v___x_316_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_316_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_a_326_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
else
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_341_; 
lean_dec(v_a_312_);
lean_dec_ref(v_f_307_);
v_a_334_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_341_ == 0)
{
v___x_336_ = v___x_314_;
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_314_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_337_ == 0)
{
v___x_339_ = v___x_336_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_a_334_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
else
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_349_; 
lean_dec_ref(v_f_307_);
v_a_342_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_349_ == 0)
{
v___x_344_ = v___x_311_;
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_311_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_347_; 
if (v_isShared_345_ == 0)
{
v___x_347_ = v___x_344_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_a_342_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0___boxed(lean_object* v_f_350_, lean_object* v_args_351_, lean_object* v___y_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0(v_f_350_, v_args_351_);
lean_dec_ref(v_args_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn(lean_object* v_f_354_){
_start:
{
lean_object* v___f_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___f_356_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_356_, 0, v_f_354_);
v___x_357_ = lean_unsigned_to_nat(0u);
v___x_358_ = l_Lasm_JS_Function_ofSyncFn(v___f_356_, v___x_357_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
v_a_359_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_358_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_358_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
else
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
v_a_367_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_374_ == 0)
{
v___x_369_ = v___x_358_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_358_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_367_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___boxed(lean_object* v_f_375_, lean_object* v_a_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn(v_f_375_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1(lean_object* v_f_385_, lean_object* v___f_386_, lean_object* v_x_387_){
_start:
{
lean_object* v___x_389_; uint8_t v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_389_ = lean_unsigned_to_nat(0u);
v___x_390_ = 0;
v___x_391_ = lean_apply_1(v_f_385_, lean_box(0));
v___x_392_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_389_, v___x_390_, v___x_391_, v___f_386_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1___boxed(lean_object* v_f_393_, lean_object* v___f_394_, lean_object* v_x_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1(v_f_393_, v___f_394_, v_x_395_);
lean_dec_ref(v_x_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn(lean_object* v_f_398_){
_start:
{
lean_object* v___f_400_; lean_object* v___f_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___f_400_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_401_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_401_, 0, v_f_398_);
lean_closure_set(v___f_401_, 1, v___f_400_);
v___x_402_ = lean_unsigned_to_nat(0u);
v___x_403_ = l_Lasm_JS_Function_ofFn(v___f_401_, v___x_402_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_411_ == 0)
{
v___x_406_ = v___x_403_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_403_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_404_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
else
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
v_a_412_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_403_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_403_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___boxed(lean_object* v_f_420_, lean_object* v_a_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn(v_f_420_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0(lean_object* v_f_423_, lean_object* v_x_424_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = lean_apply_1(v_f_423_, lean_box(0));
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_434_; 
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_434_ == 0)
{
lean_object* v_unused_435_; 
v_unused_435_ = lean_ctor_get(v___x_426_, 0);
lean_dec(v_unused_435_);
v___x_428_ = v___x_426_;
v_isShared_429_ = v_isSharedCheck_434_;
goto v_resetjp_427_;
}
else
{
lean_dec(v___x_426_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_434_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_430_; lean_object* v___x_432_; 
v___x_430_ = lean_box(0);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 0, v___x_430_);
v___x_432_ = v___x_428_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_430_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
v_a_436_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_426_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_426_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0___boxed(lean_object* v_f_444_, lean_object* v_x_445_, lean_object* v___y_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0(v_f_444_, v_x_445_);
lean_dec_ref(v_x_445_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn(lean_object* v_f_448_){
_start:
{
lean_object* v___f_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___f_450_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_450_, 0, v_f_448_);
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = l_Lasm_JS_Function_ofSyncFn(v___f_450_, v___x_451_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_460_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_460_ == 0)
{
v___x_455_ = v___x_452_;
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v___x_452_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_458_; 
if (v_isShared_456_ == 0)
{
v___x_458_ = v___x_455_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_a_453_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
else
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
v_a_461_ = lean_ctor_get(v___x_452_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___x_452_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_452_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_461_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___boxed(lean_object* v_f_469_, lean_object* v_a_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn(v_f_469_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__1(lean_object* v_f_479_, lean_object* v___f_480_, lean_object* v_x_481_){
_start:
{
if (lean_obj_tag(v_x_481_) == 0)
{
lean_object* v___x_483_; 
lean_dec_ref(v___f_480_);
lean_dec_ref(v_f_479_);
v___x_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_483_, 0, v_x_481_);
return v___x_483_;
}
else
{
lean_object* v_a_484_; lean_object* v___x_485_; uint8_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v_a_484_ = lean_ctor_get(v_x_481_, 0);
lean_inc(v_a_484_);
lean_dec_ref_known(v_x_481_, 1);
v___x_485_ = lean_unsigned_to_nat(0u);
v___x_486_ = 0;
v___x_487_ = lean_apply_2(v_f_479_, v_a_484_, lean_box(0));
v___x_488_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_485_, v___x_486_, v___x_487_, v___f_480_);
return v___x_488_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__1___boxed(lean_object* v_f_489_, lean_object* v___f_490_, lean_object* v_x_491_, lean_object* v___y_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__1(v_f_489_, v___f_490_, v_x_491_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__0(lean_object* v___f_494_, lean_object* v_args_495_){
_start:
{
lean_object* v___x_497_; uint8_t v___x_498_; lean_object* v_val_500_; lean_object* v___x_503_; lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
v___x_497_ = lean_unsigned_to_nat(0u);
v___x_498_ = 0;
v___x_503_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_495_, v___x_497_);
v_a_504_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_511_ == 0)
{
v___x_506_ = v___x_503_;
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_503_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
v___jp_499_:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_501_, 0, v_val_500_);
v___x_502_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_497_, v___x_498_, v___x_501_, v___f_494_);
return v___x_502_;
}
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
lean_ctor_set_tag(v___x_506_, 1);
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
v_val_500_ = v___x_509_;
goto v___jp_499_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__0___boxed(lean_object* v___f_512_, lean_object* v_args_513_, lean_object* v___y_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__0(v___f_512_, v_args_513_);
lean_dec_ref(v_args_513_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn(lean_object* v_f_516_){
_start:
{
lean_object* v___f_518_; lean_object* v___f_519_; lean_object* v___f_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___f_518_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_519_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_519_, 0, v_f_516_);
lean_closure_set(v___f_519_, 1, v___f_518_);
v___f_520_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_520_, 0, v___f_519_);
v___x_521_ = lean_unsigned_to_nat(0u);
v___x_522_ = l_Lasm_JS_Function_ofFn(v___f_520_, v___x_521_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
v_a_523_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_522_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_522_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
else
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_538_; 
v_a_531_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_538_ == 0)
{
v___x_533_ = v___x_522_;
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___x_522_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_536_; 
if (v_isShared_534_ == 0)
{
v___x_536_ = v___x_533_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_a_531_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn___boxed(lean_object* v_f_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Lasm_JS_Node_ChildProcess_ErrorListener_ofFn(v_f_539_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___lam__0(lean_object* v_f_542_, lean_object* v_args_543_){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v_a_547_; lean_object* v___x_548_; 
v___x_545_ = lean_unsigned_to_nat(0u);
v___x_546_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_543_, v___x_545_);
v_a_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_a_547_);
lean_dec_ref(v___x_546_);
v___x_548_ = lean_apply_2(v_f_542_, v_a_547_, lean_box(0));
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_556_; 
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_556_ == 0)
{
lean_object* v_unused_557_; 
v_unused_557_ = lean_ctor_get(v___x_548_, 0);
lean_dec(v_unused_557_);
v___x_550_ = v___x_548_;
v_isShared_551_ = v_isSharedCheck_556_;
goto v_resetjp_549_;
}
else
{
lean_dec(v___x_548_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_556_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_552_; lean_object* v___x_554_; 
v___x_552_ = lean_box(0);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 0, v___x_552_);
v___x_554_ = v___x_550_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_552_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
else
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
v_a_558_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_548_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_548_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___lam__0___boxed(lean_object* v_f_566_, lean_object* v_args_567_, lean_object* v___y_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___lam__0(v_f_566_, v_args_567_);
lean_dec_ref(v_args_567_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn(lean_object* v_f_570_){
_start:
{
lean_object* v___f_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___f_572_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_572_, 0, v_f_570_);
v___x_573_ = lean_unsigned_to_nat(0u);
v___x_574_ = l_Lasm_JS_Function_ofSyncFn(v___f_572_, v___x_573_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_582_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_575_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
else
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_590_; 
v_a_583_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_590_ == 0)
{
v___x_585_ = v___x_574_;
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_574_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn___boxed(lean_object* v_f_591_, lean_object* v_a_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lasm_JS_Node_ChildProcess_ErrorListener_ofSyncFn(v_f_591_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofFn(lean_object* v_f_601_){
_start:
{
lean_object* v___f_603_; lean_object* v___f_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___f_603_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_604_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_604_, 0, v_f_601_);
lean_closure_set(v___f_604_, 1, v___f_603_);
v___x_605_ = lean_unsigned_to_nat(0u);
v___x_606_ = l_Lasm_JS_Function_ofFn(v___f_604_, v___x_605_);
if (lean_obj_tag(v___x_606_) == 0)
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
v_a_607_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_606_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_606_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
else
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
v_a_615_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_606_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_606_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofFn___boxed(lean_object* v_f_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lasm_JS_Node_ChildProcess_ExitListener_ofFn(v_f_623_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofSyncFn(lean_object* v_f_626_){
_start:
{
lean_object* v___f_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___f_628_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_628_, 0, v_f_626_);
v___x_629_ = lean_unsigned_to_nat(0u);
v___x_630_ = l_Lasm_JS_Function_ofSyncFn(v___f_628_, v___x_629_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_638_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_638_ == 0)
{
v___x_633_ = v___x_630_;
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_630_);
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
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
v_a_639_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_630_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_630_);
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
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_ExitListener_ofSyncFn___boxed(lean_object* v_f_647_, lean_object* v_a_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Lasm_JS_Node_ChildProcess_ExitListener_ofSyncFn(v_f_647_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__1(lean_object* v_f_657_, lean_object* v_a_658_, lean_object* v___f_659_, lean_object* v_x_660_){
_start:
{
if (lean_obj_tag(v_x_660_) == 0)
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_670_; 
lean_dec_ref(v___f_659_);
lean_dec(v_a_658_);
lean_dec_ref(v_f_657_);
v_a_662_ = lean_ctor_get(v_x_660_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v_x_660_);
if (v_isSharedCheck_670_ == 0)
{
v___x_664_ = v_x_660_;
v_isShared_665_ = v_isSharedCheck_670_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v_x_660_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_670_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_669_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_668_; 
v___x_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
return v___x_668_;
}
}
}
else
{
lean_object* v_a_671_; lean_object* v___x_672_; uint8_t v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v_a_671_ = lean_ctor_get(v_x_660_, 0);
lean_inc(v_a_671_);
lean_dec_ref_known(v_x_660_, 1);
v___x_672_ = lean_unsigned_to_nat(0u);
v___x_673_ = 0;
v___x_674_ = lean_apply_3(v_f_657_, v_a_658_, v_a_671_, lean_box(0));
v___x_675_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_672_, v___x_673_, v___x_674_, v___f_659_);
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__1___boxed(lean_object* v_f_676_, lean_object* v_a_677_, lean_object* v___f_678_, lean_object* v_x_679_, lean_object* v___y_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__1(v_f_676_, v_a_677_, v___f_678_, v_x_679_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg(lean_object* v_d_682_){
_start:
{
switch(lean_obj_tag(v_d_682_))
{
case 1:
{
goto v___jp_684_;
}
case 0:
{
goto v___jp_684_;
}
default: 
{
lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_687_, 0, v_d_682_);
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
return v___x_688_;
}
}
v___jp_684_:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = lean_box(0);
v___x_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
return v___x_686_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg___boxed(lean_object* v_d_689_, lean_object* v_a_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg(v_d_689_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(lean_object* v_args_692_, lean_object* v_i_693_){
_start:
{
lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_695_ = lean_array_get_size(v_args_692_);
v___x_696_ = lean_nat_dec_lt(v_i_693_, v___x_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = lean_box(0);
v___x_698_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg(v___x_697_);
return v___x_698_;
}
else
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = lean_array_fget_borrowed(v_args_692_, v_i_693_);
lean_inc(v___x_699_);
v___x_700_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg(v___x_699_);
return v___x_700_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0___boxed(lean_object* v_args_701_, lean_object* v_i_702_, lean_object* v_a_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(v_args_701_, v_i_702_);
lean_dec(v_i_702_);
lean_dec_ref(v_args_701_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0(lean_object* v_f_705_, lean_object* v___f_706_, lean_object* v_args_707_, lean_object* v_x_708_){
_start:
{
if (lean_obj_tag(v_x_708_) == 0)
{
lean_object* v___x_710_; 
lean_dec_ref(v___f_706_);
lean_dec_ref(v_f_705_);
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v_x_708_);
return v___x_710_;
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_728_; 
v_a_711_ = lean_ctor_get(v_x_708_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v_x_708_);
if (v_isSharedCheck_728_ == 0)
{
v___x_713_ = v_x_708_;
v_isShared_714_ = v_isSharedCheck_728_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v_x_708_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_728_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___f_715_; lean_object* v___x_716_; lean_object* v___x_717_; uint8_t v___x_718_; lean_object* v_val_720_; lean_object* v___x_723_; lean_object* v_a_724_; lean_object* v___x_726_; 
v___f_715_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_715_, 0, v_f_705_);
lean_closure_set(v___f_715_, 1, v_a_711_);
lean_closure_set(v___f_715_, 2, v___f_706_);
v___x_716_ = lean_unsigned_to_nat(1u);
v___x_717_ = lean_unsigned_to_nat(0u);
v___x_718_ = 0;
v___x_723_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(v_args_707_, v___x_716_);
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref(v___x_723_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v_a_724_);
v___x_726_ = v___x_713_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_724_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v___jp_719_:
{
lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_721_, 0, v_val_720_);
v___x_722_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_717_, v___x_718_, v___x_721_, v___f_715_);
return v___x_722_;
}
v_reusejp_725_:
{
v_val_720_ = v___x_726_;
goto v___jp_719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0___boxed(lean_object* v_f_729_, lean_object* v___f_730_, lean_object* v_args_731_, lean_object* v_x_732_, lean_object* v___y_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0(v_f_729_, v___f_730_, v_args_731_, v_x_732_);
lean_dec_ref(v_args_731_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2(lean_object* v_f_735_, lean_object* v___f_736_, lean_object* v_args_737_){
_start:
{
lean_object* v___f_739_; lean_object* v___x_740_; uint8_t v___x_741_; lean_object* v_val_743_; lean_object* v___x_746_; lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_inc_ref(v_args_737_);
v___f_739_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_739_, 0, v_f_735_);
lean_closure_set(v___f_739_, 1, v___f_736_);
lean_closure_set(v___f_739_, 2, v_args_737_);
v___x_740_ = lean_unsigned_to_nat(0u);
v___x_741_ = 0;
v___x_746_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_737_, v___x_740_);
lean_dec_ref(v_args_737_);
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
v___jp_742_:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_744_, 0, v_val_743_);
v___x_745_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_740_, v___x_741_, v___x_744_, v___f_739_);
return v___x_745_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
lean_ctor_set_tag(v___x_749_, 1);
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
v_val_743_ = v___x_752_;
goto v___jp_742_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2___boxed(lean_object* v_f_755_, lean_object* v___f_756_, lean_object* v_args_757_, lean_object* v___y_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2(v_f_755_, v___f_756_, v_args_757_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn(lean_object* v_f_760_){
_start:
{
lean_object* v___f_762_; lean_object* v___f_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___f_762_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_763_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_763_, 0, v_f_760_);
lean_closure_set(v___f_763_, 1, v___f_762_);
v___x_764_ = lean_unsigned_to_nat(0u);
v___x_765_ = l_Lasm_JS_Function_ofFn(v___f_763_, v___x_764_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_765_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_765_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_766_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
v_a_774_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_765_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_765_);
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
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn___boxed(lean_object* v_f_782_, lean_object* v_a_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofFn(v_f_782_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0(lean_object* v_context_785_, lean_object* v_d_786_){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___redArg(v_d_786_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0___boxed(lean_object* v_context_789_, lean_object* v_d_790_, lean_object* v_a_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0_spec__0(v_context_789_, v_d_790_);
lean_dec_ref(v_context_789_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0(lean_object* v_f_793_, lean_object* v_args_794_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v_a_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v_a_801_; lean_object* v___x_802_; 
v___x_796_ = lean_unsigned_to_nat(0u);
v___x_797_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_794_, v___x_796_);
v_a_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_a_798_);
lean_dec_ref(v___x_797_);
v___x_799_ = lean_unsigned_to_nat(1u);
v___x_800_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_MessageListener_ofFn_spec__0(v_args_794_, v___x_799_);
v_a_801_ = lean_ctor_get(v___x_800_, 0);
lean_inc(v_a_801_);
lean_dec_ref(v___x_800_);
v___x_802_ = lean_apply_3(v_f_793_, v_a_798_, v_a_801_, lean_box(0));
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_810_; 
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_810_ == 0)
{
lean_object* v_unused_811_; 
v_unused_811_ = lean_ctor_get(v___x_802_, 0);
lean_dec(v_unused_811_);
v___x_804_ = v___x_802_;
v_isShared_805_ = v_isSharedCheck_810_;
goto v_resetjp_803_;
}
else
{
lean_dec(v___x_802_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_810_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_806_; lean_object* v___x_808_; 
v___x_806_ = lean_box(0);
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 0, v___x_806_);
v___x_808_ = v___x_804_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v___x_806_);
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
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
v_a_812_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_802_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_802_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0___boxed(lean_object* v_f_820_, lean_object* v_args_821_, lean_object* v___y_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0(v_f_820_, v_args_821_);
lean_dec_ref(v_args_821_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn(lean_object* v_f_824_){
_start:
{
lean_object* v___f_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___f_826_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_826_, 0, v_f_824_);
v___x_827_ = lean_unsigned_to_nat(0u);
v___x_828_ = l_Lasm_JS_Function_ofSyncFn(v___f_826_, v___x_827_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
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
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
v_a_837_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_828_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_828_);
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
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn___boxed(lean_object* v_f_845_, lean_object* v_a_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lasm_JS_Node_ChildProcess_MessageListener_ofSyncFn(v_f_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofFn(lean_object* v_f_855_){
_start:
{
lean_object* v___f_857_; lean_object* v___f_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___f_857_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_CloseListener_ofFn___closed__0));
v___f_858_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_858_, 0, v_f_855_);
lean_closure_set(v___f_858_, 1, v___f_857_);
v___x_859_ = lean_unsigned_to_nat(0u);
v___x_860_ = l_Lasm_JS_Function_ofFn(v___f_858_, v___x_859_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_868_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_868_ == 0)
{
v___x_863_ = v___x_860_;
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_860_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_a_861_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
v_a_869_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_860_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_860_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofFn___boxed(lean_object* v_f_877_, lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lasm_JS_Node_ChildProcess_SpawnListener_ofFn(v_f_877_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofSyncFn(lean_object* v_f_880_){
_start:
{
lean_object* v___f_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___f_882_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_ChildProcess_DisconnectListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_882_, 0, v_f_880_);
v___x_883_ = lean_unsigned_to_nat(0u);
v___x_884_ = l_Lasm_JS_Function_ofSyncFn(v___f_882_, v___x_883_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_892_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_892_ == 0)
{
v___x_887_ = v___x_884_;
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_884_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_890_; 
if (v_isShared_888_ == 0)
{
v___x_890_ = v___x_887_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_a_885_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
else
{
lean_object* v_a_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_900_; 
v_a_893_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_900_ == 0)
{
v___x_895_ = v___x_884_;
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_a_893_);
lean_dec(v___x_884_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_898_; 
if (v_isShared_896_ == 0)
{
v___x_898_ = v___x_895_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_a_893_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_SpawnListener_ofSyncFn___boxed(lean_object* v_f_901_, lean_object* v_a_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_Lasm_JS_Node_ChildProcess_SpawnListener_ofSyncFn(v_f_901_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx(lean_object* v_x_904_){
_start:
{
if (lean_obj_tag(v_x_904_) == 0)
{
lean_object* v___x_905_; 
v___x_905_ = lean_unsigned_to_nat(0u);
return v___x_905_;
}
else
{
lean_object* v___x_906_; 
v___x_906_ = lean_unsigned_to_nat(1u);
return v___x_906_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx___boxed(lean_object* v_x_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx(v_x_907_);
lean_dec_ref(v_x_907_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(lean_object* v_t_909_, lean_object* v_k_910_){
_start:
{
if (lean_obj_tag(v_t_909_) == 0)
{
double v_value_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_value_911_ = lean_ctor_get_float(v_t_909_, 0);
lean_dec_ref_known(v_t_909_, 0);
v___x_912_ = lean_box_float(v_value_911_);
v___x_913_ = lean_apply_1(v_k_910_, v___x_912_);
return v___x_913_;
}
else
{
lean_object* v_value_914_; lean_object* v___x_915_; 
v_value_914_ = lean_ctor_get(v_t_909_, 0);
lean_inc_ref(v_value_914_);
lean_dec_ref_known(v_t_909_, 1);
v___x_915_ = lean_apply_1(v_k_910_, v_value_914_);
return v___x_915_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(lean_object* v_motive_916_, lean_object* v_ctorIdx_917_, lean_object* v_t_918_, lean_object* v_h_919_, lean_object* v_k_920_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_918_, v_k_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___boxed(lean_object* v_motive_922_, lean_object* v_ctorIdx_923_, lean_object* v_t_924_, lean_object* v_h_925_, lean_object* v_k_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(v_motive_922_, v_ctorIdx_923_, v_t_924_, v_h_925_, v_k_926_);
lean_dec(v_ctorIdx_923_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim___redArg(lean_object* v_t_928_, lean_object* v_double_929_){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_928_, v_double_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim(lean_object* v_motive_931_, lean_object* v_t_932_, lean_object* v_h_933_, lean_object* v_double_934_){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_932_, v_double_934_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim___redArg(lean_object* v_t_936_, lean_object* v_domString_937_){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_936_, v_domString_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim(lean_object* v_motive_939_, lean_object* v_t_940_, lean_object* v_h_941_, lean_object* v_domString_942_){
_start:
{
lean_object* v___x_943_; 
v___x_943_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_940_, v_domString_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMString___lam__0(lean_object* v_x_944_){
_start:
{
if (lean_obj_tag(v_x_944_) == 0)
{
double v_value_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
v_value_945_ = lean_ctor_get_float(v_x_944_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v_x_944_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v_x_944_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_dec(v_x_944_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
lean_ctor_set_tag(v___x_947_, 3);
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_951_, 0, v_value_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
else
{
lean_object* v_value_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
v_value_953_ = lean_ctor_get(v_x_944_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v_x_944_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v_x_944_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_value_953_);
lean_dec(v_x_944_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
lean_ctor_set_tag(v___x_955_, 4);
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_value_953_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(double v_value_963_){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_964_, 0, v_value_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0___boxed(lean_object* v_value_965_){
_start:
{
double v_value_boxed_966_; lean_object* v_res_967_; 
v_value_boxed_966_ = lean_unbox_float(v_value_965_);
lean_dec_ref(v_value_965_);
v_res_967_ = l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(v_value_boxed_966_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___lam__0(lean_object* v_value_970_){
_start:
{
lean_object* v___x_971_; 
v___x_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_971_, 0, v_value_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx(lean_object* v_x_974_){
_start:
{
if (lean_obj_tag(v_x_974_) == 0)
{
lean_object* v___x_975_; 
v___x_975_ = lean_unsigned_to_nat(0u);
return v___x_975_;
}
else
{
lean_object* v___x_976_; 
v___x_976_ = lean_unsigned_to_nat(1u);
return v___x_976_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx___boxed(lean_object* v_x_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx(v_x_977_);
lean_dec_ref(v_x_977_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(lean_object* v_t_979_, lean_object* v_k_980_){
_start:
{
if (lean_obj_tag(v_t_979_) == 0)
{
uint8_t v_value_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v_value_981_ = lean_ctor_get_uint8(v_t_979_, 0);
lean_dec_ref_known(v_t_979_, 0);
v___x_982_ = lean_box(v_value_981_);
v___x_983_ = lean_apply_1(v_k_980_, v___x_982_);
return v___x_983_;
}
else
{
lean_object* v_value_984_; lean_object* v___x_985_; 
v_value_984_ = lean_ctor_get(v_t_979_, 0);
lean_inc_ref(v_value_984_);
lean_dec_ref_known(v_t_979_, 1);
v___x_985_ = lean_apply_1(v_k_980_, v_value_984_);
return v___x_985_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(lean_object* v_motive_986_, lean_object* v_ctorIdx_987_, lean_object* v_t_988_, lean_object* v_h_989_, lean_object* v_k_990_){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_988_, v_k_990_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___boxed(lean_object* v_motive_992_, lean_object* v_ctorIdx_993_, lean_object* v_t_994_, lean_object* v_h_995_, lean_object* v_k_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(v_motive_992_, v_ctorIdx_993_, v_t_994_, v_h_995_, v_k_996_);
lean_dec(v_ctorIdx_993_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim___redArg(lean_object* v_t_998_, lean_object* v_boolean_999_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_998_, v_boolean_999_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim(lean_object* v_motive_1001_, lean_object* v_t_1002_, lean_object* v_h_1003_, lean_object* v_boolean_1004_){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_1002_, v_boolean_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim___redArg(lean_object* v_t_1006_, lean_object* v_domString_1007_){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_1006_, v_domString_1007_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim(lean_object* v_motive_1009_, lean_object* v_t_1010_, lean_object* v_h_1011_, lean_object* v_domString_1012_){
_start:
{
lean_object* v___x_1013_; 
v___x_1013_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_1010_, v_domString_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString___lam__0(lean_object* v_x_1014_){
_start:
{
if (lean_obj_tag(v_x_1014_) == 0)
{
uint8_t v_value_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
v_value_1015_ = lean_ctor_get_uint8(v_x_1014_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v_x_1014_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v_x_1014_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_dec(v_x_1014_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
lean_ctor_set_tag(v___x_1017_, 2);
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1021_, 0, v_value_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
else
{
lean_object* v_value_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
v_value_1023_ = lean_ctor_get(v_x_1014_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v_x_1014_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1025_ = v_x_1014_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_value_1023_);
lean_dec(v_x_1014_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
lean_ctor_set_tag(v___x_1025_, 4);
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_value_1023_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(uint8_t v_value_1033_){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1034_, 0, v_value_1033_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0___boxed(lean_object* v_value_1035_){
_start:
{
uint8_t v_value_boxed_1036_; lean_object* v_res_1037_; 
v_value_boxed_1036_ = lean_unbox(v_value_1035_);
v_res_1037_ = l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(v_value_boxed_1036_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___lam__0(lean_object* v_value_1040_){
_start:
{
lean_object* v___x_1041_; 
v___x_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1041_, 0, v_value_1040_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0(lean_object* v___f_1056_, lean_object* v___x_1057_, lean_object* v___f_1058_, lean_object* v___f_1059_, lean_object* v___f_1060_, lean_object* v___f_1061_, lean_object* v___f_1062_, lean_object* v___f_1063_, lean_object* v_d_1064_){
_start:
{
lean_object* v_cwd_1065_; lean_object* v_env_1066_; lean_object* v_encoding_1067_; lean_object* v_timeout_1068_; lean_object* v_maxBuffer_1069_; lean_object* v_killSignal_1070_; lean_object* v_uid_1071_; lean_object* v_gid_1072_; lean_object* v_windowsHide_1073_; lean_object* v_windowsVerbatimArguments_1074_; lean_object* v_shell_1075_; lean_object* v_signal_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v_cwd_1065_ = lean_ctor_get(v_d_1064_, 0);
lean_inc(v_cwd_1065_);
v_env_1066_ = lean_ctor_get(v_d_1064_, 1);
lean_inc(v_env_1066_);
v_encoding_1067_ = lean_ctor_get(v_d_1064_, 2);
lean_inc(v_encoding_1067_);
v_timeout_1068_ = lean_ctor_get(v_d_1064_, 3);
lean_inc(v_timeout_1068_);
v_maxBuffer_1069_ = lean_ctor_get(v_d_1064_, 4);
lean_inc(v_maxBuffer_1069_);
v_killSignal_1070_ = lean_ctor_get(v_d_1064_, 5);
lean_inc(v_killSignal_1070_);
v_uid_1071_ = lean_ctor_get(v_d_1064_, 6);
lean_inc(v_uid_1071_);
v_gid_1072_ = lean_ctor_get(v_d_1064_, 7);
lean_inc(v_gid_1072_);
v_windowsHide_1073_ = lean_ctor_get(v_d_1064_, 8);
lean_inc(v_windowsHide_1073_);
v_windowsVerbatimArguments_1074_ = lean_ctor_get(v_d_1064_, 9);
lean_inc(v_windowsVerbatimArguments_1074_);
v_shell_1075_ = lean_ctor_get(v_d_1064_, 10);
lean_inc(v_shell_1075_);
v_signal_1076_ = lean_ctor_get(v_d_1064_, 11);
lean_inc(v_signal_1076_);
lean_dec_ref(v_d_1064_);
v___x_1077_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_1078_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1056_, v_cwd_1065_);
v___x_1079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1077_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1));
v___x_1081_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1057_, v_env_1066_);
v___x_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1080_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__2));
v___x_1084_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1058_, v_encoding_1067_);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1083_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3));
lean_inc_ref_n(v___f_1059_, 3);
v___x_1087_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1059_, v_timeout_1068_);
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__4));
v___x_1090_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1059_, v_maxBuffer_1069_);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5));
v___x_1093_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1060_, v_killSignal_1070_);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1092_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6));
v___x_1096_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1059_, v_uid_1071_);
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7));
v___x_1099_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1059_, v_gid_1072_);
v___x_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8));
lean_inc_ref(v___f_1061_);
v___x_1102_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1061_, v_windowsHide_1073_);
v___x_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1101_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9));
v___x_1105_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1061_, v_windowsVerbatimArguments_1074_);
v___x_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1104_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10));
v___x_1108_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1062_, v_shell_1075_);
v___x_1109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1107_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11));
v___x_1111_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1063_, v_signal_1076_);
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1110_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
v___x_1113_ = lean_unsigned_to_nat(12u);
v___x_1114_ = lean_mk_empty_array_with_capacity(v___x_1113_);
v___x_1115_ = lean_array_push(v___x_1114_, v___x_1079_);
v___x_1116_ = lean_array_push(v___x_1115_, v___x_1082_);
v___x_1117_ = lean_array_push(v___x_1116_, v___x_1085_);
v___x_1118_ = lean_array_push(v___x_1117_, v___x_1088_);
v___x_1119_ = lean_array_push(v___x_1118_, v___x_1091_);
v___x_1120_ = lean_array_push(v___x_1119_, v___x_1094_);
v___x_1121_ = lean_array_push(v___x_1120_, v___x_1097_);
v___x_1122_ = lean_array_push(v___x_1121_, v___x_1100_);
v___x_1123_ = lean_array_push(v___x_1122_, v___x_1103_);
v___x_1124_ = lean_array_push(v___x_1123_, v___x_1106_);
v___x_1125_ = lean_array_push(v___x_1124_, v___x_1109_);
v___x_1126_ = lean_array_push(v___x_1125_, v___x_1112_);
v___x_1127_ = l_Lasm_JS_Web_Support_fields(v___x_1126_);
lean_dec_ref(v___x_1126_);
return v___x_1127_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2(void){
_start:
{
lean_object* v___f_1130_; lean_object* v___x_1131_; 
v___f_1130_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1));
v___x_1131_ = l_Lasm_JS_Web_instToJSRecord___redArg(v___f_1130_);
return v___x_1131_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__7(void){
_start:
{
lean_object* v___f_1136_; lean_object* v___f_1137_; lean_object* v___f_1138_; lean_object* v___f_1139_; lean_object* v___f_1140_; lean_object* v___f_1141_; lean_object* v___x_1142_; lean_object* v___f_1143_; lean_object* v___f_1144_; 
v___f_1136_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__6));
v___f_1137_ = ((lean_object*)(l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0));
v___f_1138_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__5));
v___f_1139_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__4));
v___f_1140_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__3));
v___f_1141_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1));
v___x_1142_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2, &l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2_once, _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2);
v___f_1143_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0));
v___f_1144_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0), 9, 8);
lean_closure_set(v___f_1144_, 0, v___f_1143_);
lean_closure_set(v___f_1144_, 1, v___x_1142_);
lean_closure_set(v___f_1144_, 2, v___f_1141_);
lean_closure_set(v___f_1144_, 3, v___f_1140_);
lean_closure_set(v___f_1144_, 4, v___f_1139_);
lean_closure_set(v___f_1144_, 5, v___f_1138_);
lean_closure_set(v___f_1144_, 6, v___f_1137_);
lean_closure_set(v___f_1144_, 7, v___f_1136_);
return v___f_1144_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions(void){
_start:
{
lean_object* v___f_1145_; 
v___f_1145_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__7, &l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__7_once, _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__7);
return v___f_1145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0(lean_object* v___x_1148_, lean_object* v_d_1149_){
_start:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1150_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0));
lean_inc_ref(v___x_1148_);
v___x_1151_ = l_Lasm_JS_readField___redArg(v___x_1148_, v_d_1149_, v___x_1150_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
lean_dec_ref(v___x_1148_);
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1151_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1151_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
else
{
lean_object* v_a_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v_a_1160_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1160_);
lean_dec_ref_known(v___x_1151_, 1);
v___x_1161_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1));
v___x_1162_ = l_Lasm_JS_readField___redArg(v___x_1148_, v_d_1149_, v___x_1161_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1170_; 
lean_dec(v_a_1160_);
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1165_ = v___x_1162_;
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1162_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1168_; 
if (v_isShared_1166_ == 0)
{
v___x_1168_ = v___x_1165_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_a_1163_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1179_; 
v_a_1171_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1173_ = v___x_1162_;
v_isShared_1174_ = v_isSharedCheck_1179_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1162_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1179_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1175_, 0, v_a_1160_);
lean_ctor_set(v___x_1175_, 1, v_a_1171_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 0, v___x_1175_);
v___x_1177_ = v___x_1173_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___boxed(lean_object* v___x_1180_, lean_object* v_d_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0(v___x_1180_, v_d_1181_);
lean_dec(v_d_1181_);
return v_res_1182_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0(void){
_start:
{
lean_object* v___x_1183_; lean_object* v___f_1184_; 
v___x_1183_ = l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array;
v___f_1184_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1184_, 0, v___x_1183_);
return v___f_1184_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2(void){
_start:
{
uint8_t v___x_1186_; lean_object* v___x_1187_; lean_object* v___f_1188_; lean_object* v___x_1189_; 
v___x_1186_ = 0;
v___x_1187_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__1));
v___f_1188_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0, &l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0_once, _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__0);
v___x_1189_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1189_, 0, v___f_1188_);
lean_ctor_set(v___x_1189_, 1, v___x_1187_);
lean_ctor_set_uint8(v___x_1189_, sizeof(void*)*2, v___x_1186_);
return v___x_1189_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult(void){
_start:
{
lean_object* v___x_1190_; 
v___x_1190_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2, &l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2_once, _init_l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__2);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx(lean_object* v_x_1191_){
_start:
{
if (lean_obj_tag(v_x_1191_) == 0)
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_unsigned_to_nat(0u);
return v___x_1192_;
}
else
{
lean_object* v___x_1193_; 
v___x_1193_ = lean_unsigned_to_nat(1u);
return v___x_1193_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx___boxed(lean_object* v_x_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx(v_x_1194_);
lean_dec_ref(v_x_1194_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(lean_object* v_t_1196_, lean_object* v_k_1197_){
_start:
{
lean_object* v_value_1198_; lean_object* v___x_1199_; 
v_value_1198_ = lean_ctor_get(v_t_1196_, 0);
lean_inc_ref(v_value_1198_);
lean_dec_ref(v_t_1196_);
v___x_1199_ = lean_apply_1(v_k_1197_, v_value_1198_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim(lean_object* v_motive_1200_, lean_object* v_ctorIdx_1201_, lean_object* v_t_1202_, lean_object* v_h_1203_, lean_object* v_k_1204_){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1202_, v_k_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___boxed(lean_object* v_motive_1206_, lean_object* v_ctorIdx_1207_, lean_object* v_t_1208_, lean_object* v_h_1209_, lean_object* v_k_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim(v_motive_1206_, v_ctorIdx_1207_, v_t_1208_, v_h_1209_, v_k_1210_);
lean_dec(v_ctorIdx_1207_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim___redArg(lean_object* v_t_1212_, lean_object* v_sequence_1213_){
_start:
{
lean_object* v___x_1214_; 
v___x_1214_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1212_, v_sequence_1213_);
return v___x_1214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim(lean_object* v_motive_1215_, lean_object* v_t_1216_, lean_object* v_h_1217_, lean_object* v_sequence_1218_){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1216_, v_sequence_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim___redArg(lean_object* v_t_1220_, lean_object* v_domString_1221_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1220_, v_domString_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim(lean_object* v_motive_1223_, lean_object* v_t_1224_, lean_object* v_h_1225_, lean_object* v_domString_1226_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_1224_, v_domString_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0(lean_object* v_x_1228_){
_start:
{
lean_inc(v_x_1228_);
return v_x_1228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0___boxed(lean_object* v_x_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0(v_x_1229_);
lean_dec(v_x_1229_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1(lean_object* v___f_1250_, lean_object* v_x_1251_){
_start:
{
if (lean_obj_tag(v_x_1251_) == 0)
{
lean_object* v_value_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1263_; 
v_value_1252_ = lean_ctor_get(v_x_1251_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v_x_1251_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1254_ = v_x_1251_;
v_isShared_1255_ = v_isSharedCheck_1263_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_value_1252_);
lean_dec(v_x_1251_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1263_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1256_; size_t v_sz_1257_; size_t v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1261_; 
v___x_1256_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__9));
v_sz_1257_ = lean_array_size(v_value_1252_);
v___x_1258_ = ((size_t)0ULL);
v___x_1259_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1256_, v___f_1250_, v_sz_1257_, v___x_1258_, v_value_1252_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set_tag(v___x_1254_, 7);
lean_ctor_set(v___x_1254_, 0, v___x_1259_);
v___x_1261_ = v___x_1254_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v___x_1259_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
else
{
lean_object* v_value_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_dec_ref(v___f_1250_);
v_value_1264_ = lean_ctor_get(v_x_1251_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v_x_1251_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v_x_1251_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_value_1264_);
lean_dec(v_x_1251_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
lean_ctor_set_tag(v___x_1266_, 4);
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_value_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString___lam__0(lean_object* v_value_1276_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1277_, 0, v_value_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString___lam__0(lean_object* v_value_1280_){
_start:
{
lean_object* v___x_1281_; 
v___x_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1281_, 0, v_value_1280_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0(lean_object* v___f_1288_, lean_object* v___x_1289_, lean_object* v___f_1290_, lean_object* v___x_1291_, lean_object* v___f_1292_, lean_object* v___f_1293_, lean_object* v___f_1294_, lean_object* v___f_1295_, lean_object* v___f_1296_, lean_object* v_d_1297_){
_start:
{
lean_object* v_cwd_1298_; lean_object* v_env_1299_; lean_object* v_argv0_1300_; lean_object* v_stdio_1301_; lean_object* v_detached_1302_; lean_object* v_uid_1303_; lean_object* v_gid_1304_; lean_object* v_serialization_1305_; lean_object* v_shell_1306_; lean_object* v_windowsVerbatimArguments_1307_; lean_object* v_windowsHide_1308_; lean_object* v_signal_1309_; lean_object* v_timeout_1310_; lean_object* v_killSignal_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
v_cwd_1298_ = lean_ctor_get(v_d_1297_, 0);
lean_inc(v_cwd_1298_);
v_env_1299_ = lean_ctor_get(v_d_1297_, 1);
lean_inc(v_env_1299_);
v_argv0_1300_ = lean_ctor_get(v_d_1297_, 2);
lean_inc(v_argv0_1300_);
v_stdio_1301_ = lean_ctor_get(v_d_1297_, 3);
lean_inc(v_stdio_1301_);
v_detached_1302_ = lean_ctor_get(v_d_1297_, 4);
lean_inc(v_detached_1302_);
v_uid_1303_ = lean_ctor_get(v_d_1297_, 5);
lean_inc(v_uid_1303_);
v_gid_1304_ = lean_ctor_get(v_d_1297_, 6);
lean_inc(v_gid_1304_);
v_serialization_1305_ = lean_ctor_get(v_d_1297_, 7);
lean_inc(v_serialization_1305_);
v_shell_1306_ = lean_ctor_get(v_d_1297_, 8);
lean_inc(v_shell_1306_);
v_windowsVerbatimArguments_1307_ = lean_ctor_get(v_d_1297_, 9);
lean_inc(v_windowsVerbatimArguments_1307_);
v_windowsHide_1308_ = lean_ctor_get(v_d_1297_, 10);
lean_inc(v_windowsHide_1308_);
v_signal_1309_ = lean_ctor_get(v_d_1297_, 11);
lean_inc(v_signal_1309_);
v_timeout_1310_ = lean_ctor_get(v_d_1297_, 12);
lean_inc(v_timeout_1310_);
v_killSignal_1311_ = lean_ctor_get(v_d_1297_, 13);
lean_inc(v_killSignal_1311_);
lean_dec_ref(v_d_1297_);
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_1313_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1288_, v_cwd_1298_);
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1));
v___x_1316_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1289_, v_env_1299_);
v___x_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1315_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0));
lean_inc_ref(v___f_1290_);
v___x_1319_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1290_, v_argv0_1300_);
v___x_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1318_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__1));
v___x_1322_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1291_, v_stdio_1301_);
v___x_1323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__2));
lean_inc_ref_n(v___f_1292_, 2);
v___x_1325_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1292_, v_detached_1302_);
v___x_1326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6));
lean_inc_ref_n(v___f_1293_, 2);
v___x_1328_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1293_, v_uid_1303_);
v___x_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1327_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7));
v___x_1331_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1293_, v_gid_1304_);
v___x_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
v___x_1333_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__3));
v___x_1334_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1290_, v_serialization_1305_);
v___x_1335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1333_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
v___x_1336_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10));
v___x_1337_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1294_, v_shell_1306_);
v___x_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1336_);
lean_ctor_set(v___x_1338_, 1, v___x_1337_);
v___x_1339_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9));
v___x_1340_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1292_, v_windowsVerbatimArguments_1307_);
v___x_1341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1339_);
lean_ctor_set(v___x_1341_, 1, v___x_1340_);
v___x_1342_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8));
v___x_1343_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1292_, v_windowsHide_1308_);
v___x_1344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1342_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
v___x_1345_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11));
v___x_1346_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1295_, v_signal_1309_);
v___x_1347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1345_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
v___x_1348_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3));
v___x_1349_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1293_, v_timeout_1310_);
v___x_1350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1348_);
lean_ctor_set(v___x_1350_, 1, v___x_1349_);
v___x_1351_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5));
v___x_1352_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1296_, v_killSignal_1311_);
v___x_1353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1351_);
lean_ctor_set(v___x_1353_, 1, v___x_1352_);
v___x_1354_ = lean_unsigned_to_nat(14u);
v___x_1355_ = lean_mk_empty_array_with_capacity(v___x_1354_);
v___x_1356_ = lean_array_push(v___x_1355_, v___x_1314_);
v___x_1357_ = lean_array_push(v___x_1356_, v___x_1317_);
v___x_1358_ = lean_array_push(v___x_1357_, v___x_1320_);
v___x_1359_ = lean_array_push(v___x_1358_, v___x_1323_);
v___x_1360_ = lean_array_push(v___x_1359_, v___x_1326_);
v___x_1361_ = lean_array_push(v___x_1360_, v___x_1329_);
v___x_1362_ = lean_array_push(v___x_1361_, v___x_1332_);
v___x_1363_ = lean_array_push(v___x_1362_, v___x_1335_);
v___x_1364_ = lean_array_push(v___x_1363_, v___x_1338_);
v___x_1365_ = lean_array_push(v___x_1364_, v___x_1341_);
v___x_1366_ = lean_array_push(v___x_1365_, v___x_1344_);
v___x_1367_ = lean_array_push(v___x_1366_, v___x_1347_);
v___x_1368_ = lean_array_push(v___x_1367_, v___x_1350_);
v___x_1369_ = lean_array_push(v___x_1368_, v___x_1353_);
v___x_1370_ = l_Lasm_JS_Web_Support_fields(v___x_1369_);
lean_dec_ref(v___x_1369_);
return v___x_1370_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0(void){
_start:
{
lean_object* v___f_1371_; lean_object* v___f_1372_; lean_object* v___f_1373_; lean_object* v___f_1374_; lean_object* v___f_1375_; lean_object* v___x_1376_; lean_object* v___f_1377_; lean_object* v___x_1378_; lean_object* v___f_1379_; lean_object* v___f_1380_; 
v___f_1371_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__4));
v___f_1372_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__6));
v___f_1373_ = ((lean_object*)(l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0));
v___f_1374_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__3));
v___f_1375_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__5));
v___x_1376_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString));
v___f_1377_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__1));
v___x_1378_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2, &l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2_once, _init_l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__2);
v___f_1379_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___closed__0));
v___f_1380_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0), 10, 9);
lean_closure_set(v___f_1380_, 0, v___f_1379_);
lean_closure_set(v___f_1380_, 1, v___x_1378_);
lean_closure_set(v___f_1380_, 2, v___f_1377_);
lean_closure_set(v___f_1380_, 3, v___x_1376_);
lean_closure_set(v___f_1380_, 4, v___f_1375_);
lean_closure_set(v___f_1380_, 5, v___f_1374_);
lean_closure_set(v___f_1380_, 6, v___f_1373_);
lean_closure_set(v___f_1380_, 7, v___f_1372_);
lean_closure_set(v___f_1380_, 8, v___f_1371_);
return v___f_1380_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSChild__processSpawnOptions(void){
_start:
{
lean_object* v___f_1381_; 
v___f_1381_ = lean_obj_once(&l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0, &l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0_once, _init_l_Lasm_JS_Node_instToJSChild__processSpawnOptions___closed__0);
return v___f_1381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0(lean_object* v___x_1382_, lean_object* v___x_1383_){
_start:
{
lean_object* v___x_1385_; 
v___x_1385_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v___x_1382_, v___x_1383_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0___boxed(lean_object* v___x_1386_, lean_object* v___x_1387_, lean_object* v___y_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_Lasm_JS_Node_ChildProcess_cast_x3f___lam__0(v___x_1386_, v___x_1387_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f(lean_object* v_v_1398_){
_start:
{
lean_object* v___f_1400_; lean_object* v___x_1401_; 
v___f_1400_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__3));
lean_inc(v_v_1398_);
v___x_1401_ = l_Lasm_JS_Web_Support_isInstance(v___f_1400_, v_v_1398_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v_a_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1415_; 
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1404_ = v___x_1401_;
v_isShared_1405_ = v_isSharedCheck_1415_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_a_1402_);
lean_dec(v___x_1401_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1415_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
uint8_t v___x_1406_; 
v___x_1406_ = lean_unbox(v_a_1402_);
lean_dec(v_a_1402_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; lean_object* v___x_1409_; 
lean_dec(v_v_1398_);
v___x_1407_ = lean_box(0);
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 0, v___x_1407_);
v___x_1409_ = v___x_1404_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
else
{
lean_object* v___x_1411_; lean_object* v___x_1413_; 
v___x_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1411_, 0, v_v_1398_);
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 0, v___x_1411_);
v___x_1413_ = v___x_1404_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
else
{
lean_object* v_a_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1423_; 
lean_dec(v_v_1398_);
v_a_1416_ = lean_ctor_get(v___x_1401_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1418_ = v___x_1401_;
v_isShared_1419_ = v_isSharedCheck_1423_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_a_1416_);
lean_dec(v___x_1401_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1423_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1421_; 
if (v_isShared_1419_ == 0)
{
v___x_1421_ = v___x_1418_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v_a_1416_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
return v___x_1421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_cast_x3f___boxed(lean_object* v_v_1424_, lean_object* v_a_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Lasm_JS_Node_ChildProcess_cast_x3f(v_v_1424_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(lean_object* v_context_1427_, lean_object* v_bytes_1428_){
_start:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1428_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; lean_object* v___x_1432_; 
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
lean_inc(v_a_1431_);
lean_dec_ref_known(v___x_1430_, 1);
v___x_1432_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1(v_context_1427_, v_a_1431_);
return v___x_1432_;
}
else
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1440_; 
v_a_1433_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1435_ = v___x_1430_;
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1430_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1438_; 
if (v_isShared_1436_ == 0)
{
v___x_1438_ = v___x_1435_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1433_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0___boxed(lean_object* v_context_1441_, lean_object* v_bytes_1442_, lean_object* v_a_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v_context_1441_, v_bytes_1442_);
lean_dec_ref(v_bytes_1442_);
lean_dec_ref(v_context_1441_);
return v_res_1444_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1445_; uint64_t v___x_1446_; 
v___x_1445_ = 0;
v___x_1446_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1445_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(lean_object* v_o_1448_, lean_object* v_key_1449_){
_start:
{
lean_object* v_k_1451_; lean_object* v___x_1452_; 
v_k_1451_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1451_, 0, v_key_1449_);
v___x_1452_ = l_Lasm_JS_Wire_encodeIO(v_k_1451_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; uint32_t v___x_1454_; uint32_t v___x_1455_; uint64_t v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1452_, 1);
v___x_1454_ = 203;
v___x_1455_ = lasm_js_value_handle(v_o_1448_);
v___x_1456_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1457_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1458_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1458_, 0, v_o_1448_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = lean_unsigned_to_nat(2u);
v___x_1460_ = lean_mk_empty_array_with_capacity(v___x_1459_);
lean_inc_ref(v_k_1451_);
v___x_1461_ = lean_array_push(v___x_1460_, v_k_1451_);
v___x_1462_ = lean_array_push(v___x_1461_, v___x_1458_);
v___x_1463_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1462_);
v___x_1464_ = lasm_js_call(v___x_1454_, v___x_1455_, v___x_1456_, v_a_1453_, v___x_1463_);
lean_dec_ref_known(v___x_1463_, 1);
lean_dec(v_a_1453_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1464_, 1);
v___x_1466_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1467_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1451_);
v___x_1468_ = lean_string_append(v___x_1466_, v___x_1467_);
lean_dec_ref(v___x_1467_);
v___x_1469_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v___x_1468_, v_a_1465_);
lean_dec(v_a_1465_);
lean_dec_ref(v___x_1468_);
return v___x_1469_;
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_dec_ref_known(v_k_1451_, 1);
v_a_1470_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1464_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1464_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
else
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
lean_dec_ref_known(v_k_1451_, 1);
lean_dec(v_o_1448_);
v_a_1478_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1452_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1452_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___boxed(lean_object* v_o_1486_, lean_object* v_key_1487_, lean_object* v_a_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_o_1486_, v_key_1487_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode(lean_object* v_self_1491_){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_exitCode___closed__0));
v___x_1494_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_1491_, v___x_1493_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode___boxed(lean_object* v_self_1495_, lean_object* v_a_1496_){
_start:
{
lean_object* v_res_1497_; 
v_res_1497_ = l_Lasm_JS_Node_ChildProcess_exitCode(v_self_1495_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed(lean_object* v_self_1499_){
_start:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_killed___closed__0));
v___x_1502_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1499_, v___x_1501_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed___boxed(lean_object* v_self_1503_, lean_object* v_a_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lasm_JS_Node_ChildProcess_killed(v_self_1503_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid(lean_object* v_self_1507_){
_start:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1509_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_pid___closed__0));
v___x_1510_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_1507_, v___x_1509_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid___boxed(lean_object* v_self_1511_, lean_object* v_a_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Lasm_JS_Node_ChildProcess_pid(v_self_1511_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(lean_object* v_o_1514_, lean_object* v_key_1515_){
_start:
{
lean_object* v_k_1517_; lean_object* v___x_1518_; 
v_k_1517_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1517_, 0, v_key_1515_);
v___x_1518_ = l_Lasm_JS_Wire_encodeIO(v_k_1517_);
if (lean_obj_tag(v___x_1518_) == 0)
{
lean_object* v_a_1519_; uint32_t v___x_1520_; uint32_t v___x_1521_; uint64_t v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
lean_inc(v_a_1519_);
lean_dec_ref_known(v___x_1518_, 1);
v___x_1520_ = 203;
v___x_1521_ = lasm_js_value_handle(v_o_1514_);
v___x_1522_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1523_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1524_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1524_, 0, v_o_1514_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
v___x_1525_ = lean_unsigned_to_nat(2u);
v___x_1526_ = lean_mk_empty_array_with_capacity(v___x_1525_);
lean_inc_ref(v_k_1517_);
v___x_1527_ = lean_array_push(v___x_1526_, v_k_1517_);
v___x_1528_ = lean_array_push(v___x_1527_, v___x_1524_);
v___x_1529_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1528_);
v___x_1530_ = lasm_js_call(v___x_1520_, v___x_1521_, v___x_1522_, v_a_1519_, v___x_1529_);
lean_dec_ref_known(v___x_1529_, 1);
lean_dec(v_a_1519_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1530_, 1);
v___x_1532_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1533_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1517_);
v___x_1534_ = lean_string_append(v___x_1532_, v___x_1533_);
lean_dec_ref(v___x_1533_);
v___x_1535_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_1534_, v_a_1531_);
lean_dec(v_a_1531_);
lean_dec_ref(v___x_1534_);
return v___x_1535_;
}
else
{
lean_object* v_a_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1543_; 
lean_dec_ref_known(v_k_1517_, 1);
v_a_1536_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1543_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1538_ = v___x_1530_;
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_a_1536_);
lean_dec(v___x_1530_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1541_; 
if (v_isShared_1539_ == 0)
{
v___x_1541_ = v___x_1538_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_a_1536_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
else
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1551_; 
lean_dec_ref_known(v_k_1517_, 1);
lean_dec(v_o_1514_);
v_a_1544_ = lean_ctor_get(v___x_1518_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1518_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1546_ = v___x_1518_;
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1518_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1544_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0___boxed(lean_object* v_o_1552_, lean_object* v_key_1553_, lean_object* v_a_1554_){
_start:
{
lean_object* v_res_1555_; 
v_res_1555_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(v_o_1552_, v_key_1553_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode(lean_object* v_self_1557_){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1559_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_signalCode___closed__0));
v___x_1560_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(v_self_1557_, v___x_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode___boxed(lean_object* v_self_1561_, lean_object* v_a_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lasm_JS_Node_ChildProcess_signalCode(v_self_1561_);
return v_res_1563_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1566_ = lean_string_utf8_byte_size(v___x_1565_);
return v___x_1566_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; uint8_t v___x_1569_; 
v___x_1567_ = lean_unsigned_to_nat(0u);
v___x_1568_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1);
v___x_1569_ = lean_nat_dec_eq(v___x_1568_, v___x_1567_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(lean_object* v_context_1571_, lean_object* v_d_1572_){
_start:
{
lean_object* v___y_1578_; lean_object* v___y_1579_; 
switch(lean_obj_tag(v_d_1572_))
{
case 1:
{
goto v___jp_1574_;
}
case 0:
{
goto v___jp_1574_;
}
default: 
{
if (lean_obj_tag(v_d_1572_) == 9)
{
lean_object* v_value_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v_value_1583_ = lean_ctor_get(v_d_1572_, 0);
lean_inc(v_value_1583_);
lean_dec_ref_known(v_d_1572_, 2);
v___x_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1584_, 0, v_value_1583_);
v___x_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
return v___x_1585_;
}
else
{
lean_object* v___x_1586_; lean_object* v_received_1588_; 
v___x_1586_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
if (lean_obj_tag(v_d_1572_) == 9)
{
lean_object* v_value_1602_; lean_object* v_description_1603_; uint8_t v___x_1604_; 
v_value_1602_ = lean_ctor_get(v_d_1572_, 0);
v_description_1603_ = lean_ctor_get(v_d_1572_, 1);
v___x_1604_ = lean_string_dec_eq(v_description_1603_, v___x_1586_);
if (v___x_1604_ == 0)
{
goto v___jp_1600_;
}
else
{
uint32_t v___x_1605_; uint64_t v___x_1606_; lean_object* v___x_1607_; uint32_t v___x_1608_; lean_object* v___x_1609_; 
lean_inc_n(v_value_1602_, 2);
lean_dec_ref_known(v_d_1572_, 2);
v___x_1605_ = 206;
v___x_1606_ = 0ULL;
v___x_1607_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1607_, 0, v_value_1602_);
lean_ctor_set(v___x_1607_, 1, v___x_1586_);
v___x_1608_ = lasm_js_value_handle(v_value_1602_);
lean_dec(v_value_1602_);
v___x_1609_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1605_, v___x_1606_, v___x_1607_, v___x_1608_);
lean_dec_ref_known(v___x_1607_, 2);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v_a_1610_; uint8_t v___x_1611_; 
v_a_1610_ = lean_ctor_get(v___x_1609_, 0);
lean_inc(v_a_1610_);
lean_dec_ref_known(v___x_1609_, 1);
v___x_1611_ = lean_string_validate_utf8(v_a_1610_);
if (v___x_1611_ == 0)
{
lean_object* v___x_1612_; lean_object* v___x_1613_; 
lean_dec(v_a_1610_);
v___x_1612_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_1613_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1612_);
v_received_1588_ = v___x_1613_;
goto v___jp_1587_;
}
else
{
lean_object* v___x_1614_; 
v___x_1614_ = lean_string_from_utf8_unchecked(v_a_1610_);
v_received_1588_ = v___x_1614_;
goto v___jp_1587_;
}
}
else
{
lean_object* v___x_1615_; 
lean_dec_ref_known(v___x_1609_, 1);
v___x_1615_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v_received_1588_ = v___x_1615_;
goto v___jp_1587_;
}
}
}
else
{
goto v___jp_1600_;
}
v___jp_1587_:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; uint8_t v___x_1598_; 
v___x_1589_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_1590_ = lean_string_append(v___x_1589_, v_context_1571_);
v___x_1591_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_1592_ = lean_string_append(v___x_1590_, v___x_1591_);
v___x_1593_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__0));
v___x_1594_ = lean_string_append(v___x_1592_, v___x_1593_);
v___x_1595_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_1596_ = lean_string_append(v___x_1594_, v___x_1595_);
v___x_1597_ = lean_string_append(v___x_1596_, v_received_1588_);
lean_dec_ref(v_received_1588_);
v___x_1598_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_1598_ == 0)
{
lean_object* v___x_1599_; 
v___x_1599_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___y_1578_ = v___x_1597_;
v___y_1579_ = v___x_1599_;
goto v___jp_1577_;
}
else
{
v___y_1578_ = v___x_1597_;
v___y_1579_ = v___x_1586_;
goto v___jp_1577_;
}
}
v___jp_1600_:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_Lasm_JS_Data_describe(v_d_1572_);
v_received_1588_ = v___x_1601_;
goto v___jp_1587_;
}
}
}
}
v___jp_1574_:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1575_ = lean_box(0);
v___x_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
return v___x_1576_;
}
v___jp_1577_:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1580_ = lean_string_append(v___y_1578_, v___y_1579_);
v___x_1581_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1580_);
v___x_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1581_);
return v___x_1582_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1616_, lean_object* v_d_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_1616_, v_d_1617_);
lean_dec_ref(v_context_1616_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(lean_object* v_context_1620_, lean_object* v_bytes_1621_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1621_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1625_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1625_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_1620_, v_a_1624_);
return v___x_1625_;
}
else
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1633_; 
v_a_1626_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1628_ = v___x_1623_;
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1623_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
if (v_isShared_1629_ == 0)
{
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_a_1626_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0___boxed(lean_object* v_context_1634_, lean_object* v_bytes_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v_context_1634_, v_bytes_1635_);
lean_dec_ref(v_bytes_1635_);
lean_dec_ref(v_context_1634_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(lean_object* v_o_1638_, lean_object* v_key_1639_){
_start:
{
lean_object* v_k_1641_; lean_object* v___x_1642_; 
v_k_1641_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1641_, 0, v_key_1639_);
v___x_1642_ = l_Lasm_JS_Wire_encodeIO(v_k_1641_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; uint32_t v___x_1644_; uint32_t v___x_1645_; uint64_t v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_a_1643_);
lean_dec_ref_known(v___x_1642_, 1);
v___x_1644_ = 203;
v___x_1645_ = lasm_js_value_handle(v_o_1638_);
v___x_1646_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1647_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1648_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1648_, 0, v_o_1638_);
lean_ctor_set(v___x_1648_, 1, v___x_1647_);
v___x_1649_ = lean_unsigned_to_nat(2u);
v___x_1650_ = lean_mk_empty_array_with_capacity(v___x_1649_);
lean_inc_ref(v_k_1641_);
v___x_1651_ = lean_array_push(v___x_1650_, v_k_1641_);
v___x_1652_ = lean_array_push(v___x_1651_, v___x_1648_);
v___x_1653_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1652_);
v___x_1654_ = lasm_js_call(v___x_1644_, v___x_1645_, v___x_1646_, v_a_1643_, v___x_1653_);
lean_dec_ref_known(v___x_1653_, 1);
lean_dec(v_a_1643_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1657_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1641_);
v___x_1658_ = lean_string_append(v___x_1656_, v___x_1657_);
lean_dec_ref(v___x_1657_);
v___x_1659_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v___x_1658_, v_a_1655_);
lean_dec(v_a_1655_);
lean_dec_ref(v___x_1658_);
return v___x_1659_;
}
else
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
lean_dec_ref_known(v_k_1641_, 1);
v_a_1660_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1654_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1654_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
lean_dec_ref_known(v_k_1641_, 1);
lean_dec(v_o_1638_);
v_a_1668_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1642_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1642_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0___boxed(lean_object* v_o_1676_, lean_object* v_key_1677_, lean_object* v_a_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_o_1676_, v_key_1677_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr(lean_object* v_self_1680_){
_start:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1682_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1));
v___x_1683_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_1680_, v___x_1682_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr___boxed(lean_object* v_self_1684_, lean_object* v_a_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lasm_JS_Node_ChildProcess_stderr(v_self_1684_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(lean_object* v_context_1688_, lean_object* v_d_1689_){
_start:
{
lean_object* v___y_1695_; lean_object* v___y_1696_; 
switch(lean_obj_tag(v_d_1689_))
{
case 1:
{
goto v___jp_1691_;
}
case 0:
{
goto v___jp_1691_;
}
default: 
{
if (lean_obj_tag(v_d_1689_) == 9)
{
lean_object* v_value_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; 
v_value_1700_ = lean_ctor_get(v_d_1689_, 0);
lean_inc(v_value_1700_);
lean_dec_ref_known(v_d_1689_, 2);
v___x_1701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1701_, 0, v_value_1700_);
v___x_1702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1701_);
return v___x_1702_;
}
else
{
lean_object* v___x_1703_; lean_object* v_received_1705_; 
v___x_1703_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
if (lean_obj_tag(v_d_1689_) == 9)
{
lean_object* v_value_1719_; lean_object* v_description_1720_; uint8_t v___x_1721_; 
v_value_1719_ = lean_ctor_get(v_d_1689_, 0);
v_description_1720_ = lean_ctor_get(v_d_1689_, 1);
v___x_1721_ = lean_string_dec_eq(v_description_1720_, v___x_1703_);
if (v___x_1721_ == 0)
{
goto v___jp_1717_;
}
else
{
uint32_t v___x_1722_; uint64_t v___x_1723_; lean_object* v___x_1724_; uint32_t v___x_1725_; lean_object* v___x_1726_; 
lean_inc_n(v_value_1719_, 2);
lean_dec_ref_known(v_d_1689_, 2);
v___x_1722_ = 206;
v___x_1723_ = 0ULL;
v___x_1724_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1724_, 0, v_value_1719_);
lean_ctor_set(v___x_1724_, 1, v___x_1703_);
v___x_1725_ = lasm_js_value_handle(v_value_1719_);
lean_dec(v_value_1719_);
v___x_1726_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1722_, v___x_1723_, v___x_1724_, v___x_1725_);
lean_dec_ref_known(v___x_1724_, 2);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; uint8_t v___x_1728_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1726_, 1);
v___x_1728_ = lean_string_validate_utf8(v_a_1727_);
if (v___x_1728_ == 0)
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
lean_dec(v_a_1727_);
v___x_1729_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_1730_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1729_);
v_received_1705_ = v___x_1730_;
goto v___jp_1704_;
}
else
{
lean_object* v___x_1731_; 
v___x_1731_ = lean_string_from_utf8_unchecked(v_a_1727_);
v_received_1705_ = v___x_1731_;
goto v___jp_1704_;
}
}
else
{
lean_object* v___x_1732_; 
lean_dec_ref_known(v___x_1726_, 1);
v___x_1732_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v_received_1705_ = v___x_1732_;
goto v___jp_1704_;
}
}
}
else
{
goto v___jp_1717_;
}
v___jp_1704_:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; 
v___x_1706_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_1707_ = lean_string_append(v___x_1706_, v_context_1688_);
v___x_1708_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_1709_ = lean_string_append(v___x_1707_, v___x_1708_);
v___x_1710_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___closed__0));
v___x_1711_ = lean_string_append(v___x_1709_, v___x_1710_);
v___x_1712_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_1713_ = lean_string_append(v___x_1711_, v___x_1712_);
v___x_1714_ = lean_string_append(v___x_1713_, v_received_1705_);
lean_dec_ref(v_received_1705_);
v___x_1715_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; 
v___x_1716_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___y_1695_ = v___x_1714_;
v___y_1696_ = v___x_1716_;
goto v___jp_1694_;
}
else
{
v___y_1695_ = v___x_1714_;
v___y_1696_ = v___x_1703_;
goto v___jp_1694_;
}
}
v___jp_1717_:
{
lean_object* v___x_1718_; 
v___x_1718_ = l_Lasm_JS_Data_describe(v_d_1689_);
v_received_1705_ = v___x_1718_;
goto v___jp_1704_;
}
}
}
}
v___jp_1691_:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1692_ = lean_box(0);
v___x_1693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1692_);
return v___x_1693_;
}
v___jp_1694_:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1697_ = lean_string_append(v___y_1695_, v___y_1696_);
v___x_1698_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
v___x_1699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1698_);
return v___x_1699_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1733_, lean_object* v_d_1734_, lean_object* v_a_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_1733_, v_d_1734_);
lean_dec_ref(v_context_1733_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(lean_object* v_context_1737_, lean_object* v_bytes_1738_){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1738_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1742_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_a_1741_);
lean_dec_ref_known(v___x_1740_, 1);
v___x_1742_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_1737_, v_a_1741_);
return v___x_1742_;
}
else
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
v_a_1743_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1740_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1740_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0___boxed(lean_object* v_context_1751_, lean_object* v_bytes_1752_, lean_object* v_a_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v_context_1751_, v_bytes_1752_);
lean_dec_ref(v_bytes_1752_);
lean_dec_ref(v_context_1751_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(lean_object* v_o_1755_, lean_object* v_key_1756_){
_start:
{
lean_object* v_k_1758_; lean_object* v___x_1759_; 
v_k_1758_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1758_, 0, v_key_1756_);
v___x_1759_ = l_Lasm_JS_Wire_encodeIO(v_k_1758_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; uint32_t v___x_1761_; uint32_t v___x_1762_; uint64_t v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
lean_inc(v_a_1760_);
lean_dec_ref_known(v___x_1759_, 1);
v___x_1761_ = 203;
v___x_1762_ = lasm_js_value_handle(v_o_1755_);
v___x_1763_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_1764_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1765_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1765_, 0, v_o_1755_);
lean_ctor_set(v___x_1765_, 1, v___x_1764_);
v___x_1766_ = lean_unsigned_to_nat(2u);
v___x_1767_ = lean_mk_empty_array_with_capacity(v___x_1766_);
lean_inc_ref(v_k_1758_);
v___x_1768_ = lean_array_push(v___x_1767_, v_k_1758_);
v___x_1769_ = lean_array_push(v___x_1768_, v___x_1765_);
v___x_1770_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1770_, 0, v___x_1769_);
v___x_1771_ = lasm_js_call(v___x_1761_, v___x_1762_, v___x_1763_, v_a_1760_, v___x_1770_);
lean_dec_ref_known(v___x_1770_, 1);
lean_dec(v_a_1760_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref_known(v___x_1771_, 1);
v___x_1773_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_1774_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1758_);
v___x_1775_ = lean_string_append(v___x_1773_, v___x_1774_);
lean_dec_ref(v___x_1774_);
v___x_1776_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v___x_1775_, v_a_1772_);
lean_dec(v_a_1772_);
lean_dec_ref(v___x_1775_);
return v___x_1776_;
}
else
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
lean_dec_ref_known(v_k_1758_, 1);
v_a_1777_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1771_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1771_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
else
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1792_; 
lean_dec_ref_known(v_k_1758_, 1);
lean_dec(v_o_1755_);
v_a_1785_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1787_ = v___x_1759_;
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v___x_1759_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_a_1785_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0___boxed(lean_object* v_o_1793_, lean_object* v_key_1794_, lean_object* v_a_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_o_1793_, v_key_1794_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin(lean_object* v_self_1798_){
_start:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1800_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_stdin___closed__0));
v___x_1801_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_self_1798_, v___x_1800_);
return v___x_1801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin___boxed(lean_object* v_self_1802_, lean_object* v_a_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l_Lasm_JS_Node_ChildProcess_stdin(v_self_1802_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout(lean_object* v_self_1805_){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1807_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0));
v___x_1808_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_1805_, v___x_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout___boxed(lean_object* v_self_1809_, lean_object* v_a_1810_){
_start:
{
lean_object* v_res_1811_; 
v_res_1811_ = l_Lasm_JS_Node_ChildProcess_stdout(v_self_1809_);
return v_res_1811_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3(void){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1816_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__2));
v___x_1817_ = lean_unsigned_to_nat(2u);
v___x_1818_ = lean_mk_empty_array_with_capacity(v___x_1817_);
v___x_1819_ = lean_array_push(v___x_1818_, v___x_1816_);
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onClose(lean_object* v_self_1820_, lean_object* v_listener_1821_){
_start:
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1823_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_1824_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1825_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1825_, 0, v_listener_1821_);
lean_ctor_set(v___x_1825_, 1, v___x_1824_);
v___x_1826_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onClose___closed__3, &l_Lasm_JS_Node_ChildProcess_onClose___closed__3_once, _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3);
v___x_1827_ = lean_array_push(v___x_1826_, v___x_1825_);
v___x_1828_ = l_Lasm_JS_Web_Support_args(v___x_1827_);
v___x_1829_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1820_, v___x_1823_, v___x_1828_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1837_; 
v_a_1830_ = lean_ctor_get(v___x_1829_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1832_ = v___x_1829_;
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_dec(v___x_1829_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1835_; 
if (v_isShared_1833_ == 0)
{
v___x_1835_ = v___x_1832_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v_a_1830_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
v_a_1838_ = lean_ctor_get(v___x_1829_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1829_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1829_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1838_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onClose___boxed(lean_object* v_self_1846_, lean_object* v_listener_1847_, lean_object* v_a_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lasm_JS_Node_ChildProcess_onClose(v_self_1846_, v_listener_1847_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceClose(lean_object* v_self_1851_, lean_object* v_listener_1852_){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1854_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_1855_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1856_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1856_, 0, v_listener_1852_);
lean_ctor_set(v___x_1856_, 1, v___x_1855_);
v___x_1857_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onClose___closed__3, &l_Lasm_JS_Node_ChildProcess_onClose___closed__3_once, _init_l_Lasm_JS_Node_ChildProcess_onClose___closed__3);
v___x_1858_ = lean_array_push(v___x_1857_, v___x_1856_);
v___x_1859_ = l_Lasm_JS_Web_Support_args(v___x_1858_);
v___x_1860_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1851_, v___x_1854_, v___x_1859_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1868_; 
v_a_1861_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1863_ = v___x_1860_;
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1860_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
lean_object* v___x_1866_; 
if (v_isShared_1864_ == 0)
{
v___x_1866_ = v___x_1863_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_a_1861_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
else
{
lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1876_; 
v_a_1869_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1871_ = v___x_1860_;
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v___x_1860_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1876_;
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
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_a_1869_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceClose___boxed(lean_object* v_self_1877_, lean_object* v_listener_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l_Lasm_JS_Node_ChildProcess_onceClose(v_self_1877_, v_listener_1878_);
return v_res_1880_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2(void){
_start:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1884_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__1));
v___x_1885_ = lean_unsigned_to_nat(2u);
v___x_1886_ = lean_mk_empty_array_with_capacity(v___x_1885_);
v___x_1887_ = lean_array_push(v___x_1886_, v___x_1884_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect(lean_object* v_self_1888_, lean_object* v_listener_1889_){
_start:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1891_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_1892_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1893_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1893_, 0, v_listener_1889_);
lean_ctor_set(v___x_1893_, 1, v___x_1892_);
v___x_1894_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2, &l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2);
v___x_1895_ = lean_array_push(v___x_1894_, v___x_1893_);
v___x_1896_ = l_Lasm_JS_Web_Support_args(v___x_1895_);
v___x_1897_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1888_, v___x_1891_, v___x_1896_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1905_; 
v_a_1898_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1900_ = v___x_1897_;
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1897_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1903_; 
if (v_isShared_1901_ == 0)
{
v___x_1903_ = v___x_1900_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_a_1898_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
else
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
v_a_1906_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1897_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1897_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onDisconnect___boxed(lean_object* v_self_1914_, lean_object* v_listener_1915_, lean_object* v_a_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lasm_JS_Node_ChildProcess_onDisconnect(v_self_1914_, v_listener_1915_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceDisconnect(lean_object* v_self_1918_, lean_object* v_listener_1919_){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1921_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_1922_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1923_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1923_, 0, v_listener_1919_);
lean_ctor_set(v___x_1923_, 1, v___x_1922_);
v___x_1924_ = lean_unsigned_to_nat(2u);
v___x_1925_ = lean_mk_empty_array_with_capacity(v___x_1924_);
lean_dec_ref(v___x_1925_);
v___x_1926_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2, &l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onDisconnect___closed__2);
v___x_1927_ = lean_array_push(v___x_1926_, v___x_1923_);
v___x_1928_ = l_Lasm_JS_Web_Support_args(v___x_1927_);
v___x_1929_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1918_, v___x_1921_, v___x_1928_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1929_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1929_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
else
{
lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1945_; 
v_a_1938_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1940_ = v___x_1929_;
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1929_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1943_; 
if (v_isShared_1941_ == 0)
{
v___x_1943_ = v___x_1940_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1938_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceDisconnect___boxed(lean_object* v_self_1946_, lean_object* v_listener_1947_, lean_object* v_a_1948_){
_start:
{
lean_object* v_res_1949_; 
v_res_1949_ = l_Lasm_JS_Node_ChildProcess_onceDisconnect(v_self_1946_, v_listener_1947_);
return v_res_1949_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2(void){
_start:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1953_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onError___closed__1));
v___x_1954_ = lean_unsigned_to_nat(2u);
v___x_1955_ = lean_mk_empty_array_with_capacity(v___x_1954_);
v___x_1956_ = lean_array_push(v___x_1955_, v___x_1953_);
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onError(lean_object* v_self_1957_, lean_object* v_listener_1958_){
_start:
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1960_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_1961_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1962_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1962_, 0, v_listener_1958_);
lean_ctor_set(v___x_1962_, 1, v___x_1961_);
v___x_1963_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onError___closed__2, &l_Lasm_JS_Node_ChildProcess_onError___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2);
v___x_1964_ = lean_array_push(v___x_1963_, v___x_1962_);
v___x_1965_ = l_Lasm_JS_Web_Support_args(v___x_1964_);
v___x_1966_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1957_, v___x_1960_, v___x_1965_);
if (lean_obj_tag(v___x_1966_) == 0)
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
v_a_1967_ = lean_ctor_get(v___x_1966_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1966_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1966_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1966_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
else
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
v_a_1975_ = lean_ctor_get(v___x_1966_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1966_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1977_ = v___x_1966_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1966_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1975_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onError___boxed(lean_object* v_self_1983_, lean_object* v_listener_1984_, lean_object* v_a_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = l_Lasm_JS_Node_ChildProcess_onError(v_self_1983_, v_listener_1984_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceError(lean_object* v_self_1987_, lean_object* v_listener_1988_){
_start:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1990_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_1991_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1992_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1992_, 0, v_listener_1988_);
lean_ctor_set(v___x_1992_, 1, v___x_1991_);
v___x_1993_ = lean_unsigned_to_nat(2u);
v___x_1994_ = lean_mk_empty_array_with_capacity(v___x_1993_);
lean_dec_ref(v___x_1994_);
v___x_1995_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onError___closed__2, &l_Lasm_JS_Node_ChildProcess_onError___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onError___closed__2);
v___x_1996_ = lean_array_push(v___x_1995_, v___x_1992_);
v___x_1997_ = l_Lasm_JS_Web_Support_args(v___x_1996_);
v___x_1998_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1987_, v___x_1990_, v___x_1997_);
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1998_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1998_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_a_1999_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
else
{
lean_object* v_a_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2014_; 
v_a_2007_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2009_ = v___x_1998_;
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_a_2007_);
lean_dec(v___x_1998_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_a_2007_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceError___boxed(lean_object* v_self_2015_, lean_object* v_listener_2016_, lean_object* v_a_2017_){
_start:
{
lean_object* v_res_2018_; 
v_res_2018_ = l_Lasm_JS_Node_ChildProcess_onceError(v_self_2015_, v_listener_2016_);
return v_res_2018_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2(void){
_start:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2022_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onExit___closed__1));
v___x_2023_ = lean_unsigned_to_nat(2u);
v___x_2024_ = lean_mk_empty_array_with_capacity(v___x_2023_);
v___x_2025_ = lean_array_push(v___x_2024_, v___x_2022_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onExit(lean_object* v_self_2026_, lean_object* v_listener_2027_){
_start:
{
lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2029_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2030_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2031_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2031_, 0, v_listener_2027_);
lean_ctor_set(v___x_2031_, 1, v___x_2030_);
v___x_2032_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onExit___closed__2, &l_Lasm_JS_Node_ChildProcess_onExit___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2);
v___x_2033_ = lean_array_push(v___x_2032_, v___x_2031_);
v___x_2034_ = l_Lasm_JS_Web_Support_args(v___x_2033_);
v___x_2035_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2026_, v___x_2029_, v___x_2034_);
if (lean_obj_tag(v___x_2035_) == 0)
{
lean_object* v_a_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2043_; 
v_a_2036_ = lean_ctor_get(v___x_2035_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2038_ = v___x_2035_;
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_a_2036_);
lean_dec(v___x_2035_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2041_; 
if (v_isShared_2039_ == 0)
{
v___x_2041_ = v___x_2038_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_a_2036_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
return v___x_2041_;
}
}
}
else
{
lean_object* v_a_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2051_; 
v_a_2044_ = lean_ctor_get(v___x_2035_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2046_ = v___x_2035_;
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_a_2044_);
lean_dec(v___x_2035_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2049_; 
if (v_isShared_2047_ == 0)
{
v___x_2049_ = v___x_2046_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_a_2044_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
return v___x_2049_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onExit___boxed(lean_object* v_self_2052_, lean_object* v_listener_2053_, lean_object* v_a_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l_Lasm_JS_Node_ChildProcess_onExit(v_self_2052_, v_listener_2053_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceExit(lean_object* v_self_2056_, lean_object* v_listener_2057_){
_start:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2059_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2060_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2061_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2061_, 0, v_listener_2057_);
lean_ctor_set(v___x_2061_, 1, v___x_2060_);
v___x_2062_ = lean_unsigned_to_nat(2u);
v___x_2063_ = lean_mk_empty_array_with_capacity(v___x_2062_);
lean_dec_ref(v___x_2063_);
v___x_2064_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onExit___closed__2, &l_Lasm_JS_Node_ChildProcess_onExit___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onExit___closed__2);
v___x_2065_ = lean_array_push(v___x_2064_, v___x_2061_);
v___x_2066_ = l_Lasm_JS_Web_Support_args(v___x_2065_);
v___x_2067_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2056_, v___x_2059_, v___x_2066_);
if (lean_obj_tag(v___x_2067_) == 0)
{
lean_object* v_a_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2075_; 
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2070_ = v___x_2067_;
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_a_2068_);
lean_dec(v___x_2067_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___x_2073_; 
if (v_isShared_2071_ == 0)
{
v___x_2073_ = v___x_2070_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_a_2068_);
v___x_2073_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
return v___x_2073_;
}
}
}
else
{
lean_object* v_a_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2083_; 
v_a_2076_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2078_ = v___x_2067_;
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_a_2076_);
lean_dec(v___x_2067_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___x_2081_; 
if (v_isShared_2079_ == 0)
{
v___x_2081_ = v___x_2078_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_a_2076_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
return v___x_2081_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceExit___boxed(lean_object* v_self_2084_, lean_object* v_listener_2085_, lean_object* v_a_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Lasm_JS_Node_ChildProcess_onceExit(v_self_2084_, v_listener_2085_);
return v_res_2087_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2(void){
_start:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2091_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onMessage___closed__1));
v___x_2092_ = lean_unsigned_to_nat(2u);
v___x_2093_ = lean_mk_empty_array_with_capacity(v___x_2092_);
v___x_2094_ = lean_array_push(v___x_2093_, v___x_2091_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onMessage(lean_object* v_self_2095_, lean_object* v_listener_2096_){
_start:
{
lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2098_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2099_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2100_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2100_, 0, v_listener_2096_);
lean_ctor_set(v___x_2100_, 1, v___x_2099_);
v___x_2101_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onMessage___closed__2, &l_Lasm_JS_Node_ChildProcess_onMessage___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2);
v___x_2102_ = lean_array_push(v___x_2101_, v___x_2100_);
v___x_2103_ = l_Lasm_JS_Web_Support_args(v___x_2102_);
v___x_2104_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2095_, v___x_2098_, v___x_2103_);
if (lean_obj_tag(v___x_2104_) == 0)
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
v_a_2105_ = lean_ctor_get(v___x_2104_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2104_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2104_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
else
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2120_; 
v_a_2113_ = lean_ctor_get(v___x_2104_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2115_ = v___x_2104_;
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2104_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2118_; 
if (v_isShared_2116_ == 0)
{
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onMessage___boxed(lean_object* v_self_2121_, lean_object* v_listener_2122_, lean_object* v_a_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_Lasm_JS_Node_ChildProcess_onMessage(v_self_2121_, v_listener_2122_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceMessage(lean_object* v_self_2125_, lean_object* v_listener_2126_){
_start:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2128_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2129_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2130_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2130_, 0, v_listener_2126_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = lean_unsigned_to_nat(2u);
v___x_2132_ = lean_mk_empty_array_with_capacity(v___x_2131_);
lean_dec_ref(v___x_2132_);
v___x_2133_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onMessage___closed__2, &l_Lasm_JS_Node_ChildProcess_onMessage___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onMessage___closed__2);
v___x_2134_ = lean_array_push(v___x_2133_, v___x_2130_);
v___x_2135_ = l_Lasm_JS_Web_Support_args(v___x_2134_);
v___x_2136_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2125_, v___x_2128_, v___x_2135_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2136_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2136_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2137_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
else
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
v_a_2145_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___x_2136_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2136_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceMessage___boxed(lean_object* v_self_2153_, lean_object* v_listener_2154_, lean_object* v_a_2155_){
_start:
{
lean_object* v_res_2156_; 
v_res_2156_ = l_Lasm_JS_Node_ChildProcess_onceMessage(v_self_2153_, v_listener_2154_);
return v_res_2156_;
}
}
static lean_object* _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2(void){
_start:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2160_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onSpawn___closed__1));
v___x_2161_ = lean_unsigned_to_nat(2u);
v___x_2162_ = lean_mk_empty_array_with_capacity(v___x_2161_);
v___x_2163_ = lean_array_push(v___x_2162_, v___x_2160_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn(lean_object* v_self_2164_, lean_object* v_listener_2165_){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2167_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onClose___closed__0));
v___x_2168_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2169_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2169_, 0, v_listener_2165_);
lean_ctor_set(v___x_2169_, 1, v___x_2168_);
v___x_2170_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2, &l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2);
v___x_2171_ = lean_array_push(v___x_2170_, v___x_2169_);
v___x_2172_ = l_Lasm_JS_Web_Support_args(v___x_2171_);
v___x_2173_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2164_, v___x_2167_, v___x_2172_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2181_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2176_ = v___x_2173_;
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2173_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2179_; 
if (v_isShared_2177_ == 0)
{
v___x_2179_ = v___x_2176_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v_a_2174_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
v_a_2182_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2173_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2173_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onSpawn___boxed(lean_object* v_self_2190_, lean_object* v_listener_2191_, lean_object* v_a_2192_){
_start:
{
lean_object* v_res_2193_; 
v_res_2193_ = l_Lasm_JS_Node_ChildProcess_onSpawn(v_self_2190_, v_listener_2191_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceSpawn(lean_object* v_self_2194_, lean_object* v_listener_2195_){
_start:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2197_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_onceClose___closed__0));
v___x_2198_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2199_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2199_, 0, v_listener_2195_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
v___x_2200_ = lean_unsigned_to_nat(2u);
v___x_2201_ = lean_mk_empty_array_with_capacity(v___x_2200_);
lean_dec_ref(v___x_2201_);
v___x_2202_ = lean_obj_once(&l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2, &l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2_once, _init_l_Lasm_JS_Node_ChildProcess_onSpawn___closed__2);
v___x_2203_ = lean_array_push(v___x_2202_, v___x_2199_);
v___x_2204_ = l_Lasm_JS_Web_Support_args(v___x_2203_);
v___x_2205_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2194_, v___x_2197_, v___x_2204_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2205_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2205_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
else
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
v_a_2214_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2205_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2205_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_onceSpawn___boxed(lean_object* v_self_2222_, lean_object* v_listener_2223_, lean_object* v_a_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lasm_JS_Node_ChildProcess_onceSpawn(v_self_2222_, v_listener_2223_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(lean_object* v_x_2226_){
_start:
{
if (lean_obj_tag(v_x_2226_) == 0)
{
lean_object* v___x_2227_; 
v___x_2227_ = lean_box(0);
return v___x_2227_;
}
else
{
lean_object* v_val_2228_; 
v_val_2228_ = lean_ctor_get(v_x_2226_, 0);
lean_inc(v_val_2228_);
lean_dec_ref_known(v_x_2226_, 1);
if (lean_obj_tag(v_val_2228_) == 0)
{
double v_value_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2236_; 
v_value_2229_ = lean_ctor_get_float(v_val_2228_, 0);
v_isSharedCheck_2236_ = !lean_is_exclusive(v_val_2228_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2231_ = v_val_2228_;
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
else
{
lean_dec(v_val_2228_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2234_; 
if (v_isShared_2232_ == 0)
{
lean_ctor_set_tag(v___x_2231_, 3);
v___x_2234_ = v___x_2231_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2235_, 0, v_value_2229_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
else
{
lean_object* v_value_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2244_; 
v_value_2237_ = lean_ctor_get(v_val_2228_, 0);
v_isSharedCheck_2244_ = !lean_is_exclusive(v_val_2228_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2239_ = v_val_2228_;
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_value_2237_);
lean_dec(v_val_2228_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v___x_2242_; 
if (v_isShared_2240_ == 0)
{
lean_ctor_set_tag(v___x_2239_, 4);
v___x_2242_ = v___x_2239_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_value_2237_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill(lean_object* v_self_2246_, lean_object* v_signal_2247_){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2249_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_kill___closed__0));
v___x_2250_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(v_signal_2247_);
v___x_2251_ = lean_unsigned_to_nat(1u);
v___x_2252_ = lean_mk_empty_array_with_capacity(v___x_2251_);
v___x_2253_ = lean_array_push(v___x_2252_, v___x_2250_);
v___x_2254_ = l_Lasm_JS_Web_Support_args(v___x_2253_);
v___x_2255_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_2246_, v___x_2249_, v___x_2254_);
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill___boxed(lean_object* v_self_2256_, lean_object* v_signal_2257_, lean_object* v_a_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l_Lasm_JS_Node_ChildProcess_kill(v_self_2256_, v_signal_2257_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(lean_object* v_x_2260_){
_start:
{
if (lean_obj_tag(v_x_2260_) == 0)
{
lean_object* v___x_2261_; 
v___x_2261_ = lean_box(0);
return v___x_2261_;
}
else
{
lean_object* v_val_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2272_; 
v_val_2262_ = lean_ctor_get(v_x_2260_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v_x_2260_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2264_ = v_x_2260_;
v_isShared_2265_ = v_isSharedCheck_2272_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_val_2262_);
lean_dec(v_x_2260_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2272_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
size_t v_sz_2266_; size_t v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2270_; 
v_sz_2266_ = lean_array_size(v_val_2262_);
v___x_2267_ = ((size_t)0ULL);
v___x_2268_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_2266_, v___x_2267_, v_val_2262_);
if (v_isShared_2265_ == 0)
{
lean_ctor_set_tag(v___x_2264_, 8);
lean_ctor_set(v___x_2264_, 0, v___x_2268_);
v___x_2270_ = v___x_2264_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v___x_2268_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(lean_object* v_x_2273_){
_start:
{
if (lean_obj_tag(v_x_2273_) == 0)
{
lean_object* v___x_2274_; 
v___x_2274_ = lean_box(0);
return v___x_2274_;
}
else
{
lean_object* v_val_2275_; 
v_val_2275_ = lean_ctor_get(v_x_2273_, 0);
lean_inc(v_val_2275_);
lean_dec_ref_known(v_x_2273_, 1);
if (lean_obj_tag(v_val_2275_) == 0)
{
lean_object* v_value_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2283_; 
v_value_2276_ = lean_ctor_get(v_val_2275_, 0);
v_isSharedCheck_2283_ = !lean_is_exclusive(v_val_2275_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2278_ = v_val_2275_;
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_value_2276_);
lean_dec(v_val_2275_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2281_; 
if (v_isShared_2279_ == 0)
{
lean_ctor_set_tag(v___x_2278_, 4);
v___x_2281_ = v___x_2278_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_value_2276_);
v___x_2281_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
return v___x_2281_;
}
}
}
else
{
lean_object* v_value_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v_value_2284_ = lean_ctor_get(v_val_2275_, 0);
lean_inc(v_value_2284_);
lean_dec_ref_known(v_val_2275_, 1);
v___x_2285_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2286_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2286_, 0, v_value_2284_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
return v___x_2286_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(lean_object* v_x_2287_){
_start:
{
if (lean_obj_tag(v_x_2287_) == 0)
{
lean_object* v___x_2288_; 
v___x_2288_ = lean_box(0);
return v___x_2288_;
}
else
{
lean_object* v_val_2289_; 
v_val_2289_ = lean_ctor_get(v_x_2287_, 0);
lean_inc(v_val_2289_);
lean_dec_ref_known(v_x_2287_, 1);
if (lean_obj_tag(v_val_2289_) == 0)
{
uint8_t v_value_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2297_; 
v_value_2290_ = lean_ctor_get_uint8(v_val_2289_, 0);
v_isSharedCheck_2297_ = !lean_is_exclusive(v_val_2289_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2292_ = v_val_2289_;
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
else
{
lean_dec(v_val_2289_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2295_; 
if (v_isShared_2293_ == 0)
{
lean_ctor_set_tag(v___x_2292_, 2);
v___x_2295_ = v___x_2292_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2296_, 0, v_value_2290_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
else
{
lean_object* v_value_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
v_value_2298_ = lean_ctor_get(v_val_2289_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v_val_2289_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v_val_2289_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_value_2298_);
lean_dec(v_val_2289_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set_tag(v___x_2300_, 4);
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_value_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1(lean_object* v_x_2306_){
_start:
{
if (lean_obj_tag(v_x_2306_) == 0)
{
lean_object* v___x_2307_; 
v___x_2307_ = lean_box(0);
return v___x_2307_;
}
else
{
lean_object* v_val_2308_; lean_object* v_cwd_2309_; lean_object* v_env_2310_; lean_object* v_encoding_2311_; lean_object* v_timeout_2312_; lean_object* v_maxBuffer_2313_; lean_object* v_killSignal_2314_; lean_object* v_uid_2315_; lean_object* v_gid_2316_; lean_object* v_windowsHide_2317_; lean_object* v_windowsVerbatimArguments_2318_; lean_object* v_shell_2319_; lean_object* v_signal_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v_val_2308_ = lean_ctor_get(v_x_2306_, 0);
lean_inc(v_val_2308_);
lean_dec_ref_known(v_x_2306_, 1);
v_cwd_2309_ = lean_ctor_get(v_val_2308_, 0);
lean_inc(v_cwd_2309_);
v_env_2310_ = lean_ctor_get(v_val_2308_, 1);
lean_inc(v_env_2310_);
v_encoding_2311_ = lean_ctor_get(v_val_2308_, 2);
lean_inc(v_encoding_2311_);
v_timeout_2312_ = lean_ctor_get(v_val_2308_, 3);
lean_inc(v_timeout_2312_);
v_maxBuffer_2313_ = lean_ctor_get(v_val_2308_, 4);
lean_inc(v_maxBuffer_2313_);
v_killSignal_2314_ = lean_ctor_get(v_val_2308_, 5);
lean_inc(v_killSignal_2314_);
v_uid_2315_ = lean_ctor_get(v_val_2308_, 6);
lean_inc(v_uid_2315_);
v_gid_2316_ = lean_ctor_get(v_val_2308_, 7);
lean_inc(v_gid_2316_);
v_windowsHide_2317_ = lean_ctor_get(v_val_2308_, 8);
lean_inc(v_windowsHide_2317_);
v_windowsVerbatimArguments_2318_ = lean_ctor_get(v_val_2308_, 9);
lean_inc(v_windowsVerbatimArguments_2318_);
v_shell_2319_ = lean_ctor_get(v_val_2308_, 10);
lean_inc(v_shell_2319_);
v_signal_2320_ = lean_ctor_get(v_val_2308_, 11);
lean_inc(v_signal_2320_);
lean_dec(v_val_2308_);
v___x_2321_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_2322_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(v_cwd_2309_);
v___x_2323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2321_);
lean_ctor_set(v___x_2323_, 1, v___x_2322_);
v___x_2324_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1));
v___x_2325_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(v_env_2310_);
v___x_2326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2324_);
lean_ctor_set(v___x_2326_, 1, v___x_2325_);
v___x_2327_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__2));
v___x_2328_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_2311_);
v___x_2329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2327_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
v___x_2330_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3));
v___x_2331_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_timeout_2312_);
v___x_2332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2330_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
v___x_2333_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__4));
v___x_2334_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxBuffer_2313_);
v___x_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2333_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
v___x_2336_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5));
v___x_2337_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_2314_);
v___x_2338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2336_);
lean_ctor_set(v___x_2338_, 1, v___x_2337_);
v___x_2339_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6));
v___x_2340_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_uid_2315_);
v___x_2341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2339_);
lean_ctor_set(v___x_2341_, 1, v___x_2340_);
v___x_2342_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7));
v___x_2343_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_gid_2316_);
v___x_2344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2342_);
lean_ctor_set(v___x_2344_, 1, v___x_2343_);
v___x_2345_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8));
v___x_2346_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_2317_);
lean_dec(v_windowsHide_2317_);
v___x_2347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2345_);
lean_ctor_set(v___x_2347_, 1, v___x_2346_);
v___x_2348_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9));
v___x_2349_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_2318_);
lean_dec(v_windowsVerbatimArguments_2318_);
v___x_2350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2348_);
lean_ctor_set(v___x_2350_, 1, v___x_2349_);
v___x_2351_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10));
v___x_2352_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_shell_2319_);
v___x_2353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2351_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
v___x_2354_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11));
v___x_2355_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2320_);
lean_dec(v_signal_2320_);
v___x_2356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2354_);
lean_ctor_set(v___x_2356_, 1, v___x_2355_);
v___x_2357_ = lean_unsigned_to_nat(12u);
v___x_2358_ = lean_mk_empty_array_with_capacity(v___x_2357_);
v___x_2359_ = lean_array_push(v___x_2358_, v___x_2323_);
v___x_2360_ = lean_array_push(v___x_2359_, v___x_2326_);
v___x_2361_ = lean_array_push(v___x_2360_, v___x_2329_);
v___x_2362_ = lean_array_push(v___x_2361_, v___x_2332_);
v___x_2363_ = lean_array_push(v___x_2362_, v___x_2335_);
v___x_2364_ = lean_array_push(v___x_2363_, v___x_2338_);
v___x_2365_ = lean_array_push(v___x_2364_, v___x_2341_);
v___x_2366_ = lean_array_push(v___x_2365_, v___x_2344_);
v___x_2367_ = lean_array_push(v___x_2366_, v___x_2347_);
v___x_2368_ = lean_array_push(v___x_2367_, v___x_2350_);
v___x_2369_ = lean_array_push(v___x_2368_, v___x_2353_);
v___x_2370_ = lean_array_push(v___x_2369_, v___x_2356_);
v___x_2371_ = l_Lasm_JS_Web_Support_fields(v___x_2370_);
lean_dec_ref(v___x_2370_);
return v___x_2371_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(lean_object* v_x_2372_){
_start:
{
if (lean_obj_tag(v_x_2372_) == 0)
{
lean_object* v___x_2373_; 
v___x_2373_ = lean_box(0);
return v___x_2373_;
}
else
{
lean_object* v_val_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2384_; 
v_val_2374_ = lean_ctor_get(v_x_2372_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v_x_2372_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2376_ = v_x_2372_;
v_isShared_2377_ = v_isSharedCheck_2384_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_val_2374_);
lean_dec(v_x_2372_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2384_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
size_t v_sz_2378_; size_t v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2382_; 
v_sz_2378_ = lean_array_size(v_val_2374_);
v___x_2379_ = ((size_t)0ULL);
v___x_2380_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2378_, v___x_2379_, v_val_2374_);
if (v_isShared_2377_ == 0)
{
lean_ctor_set_tag(v___x_2376_, 7);
lean_ctor_set(v___x_2376_, 0, v___x_2380_);
v___x_2382_ = v___x_2376_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v___x_2380_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1(lean_object* v___f_2394_, lean_object* v_x_2395_){
_start:
{
if (lean_obj_tag(v_x_2395_) == 0)
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2405_; 
lean_dec_ref(v___f_2394_);
v_a_2397_ = lean_ctor_get(v_x_2395_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v_x_2395_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2399_ = v_x_2395_;
v_isShared_2400_ = v_isSharedCheck_2405_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v_x_2395_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2405_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2402_; 
if (v_isShared_2400_ == 0)
{
v___x_2402_ = v___x_2399_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2397_);
v___x_2402_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
lean_object* v___x_2403_; 
v___x_2403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2402_);
return v___x_2403_;
}
}
}
else
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2431_; 
v_a_2406_ = lean_ctor_get(v_x_2395_, 0);
v_isSharedCheck_2431_ = !lean_is_exclusive(v_x_2395_);
if (v_isSharedCheck_2431_ == 0)
{
v___x_2408_ = v_x_2395_;
v_isShared_2409_ = v_isSharedCheck_2431_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v_x_2395_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2431_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
uint8_t v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v_val_2419_; lean_object* v___x_2422_; 
v___x_2410_ = 0;
v___x_2411_ = lean_unsigned_to_nat(1u);
v___x_2412_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__3));
v___x_2413_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2414_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2414_, 0, v_a_2406_);
lean_ctor_set(v___x_2414_, 1, v___x_2413_);
v___x_2415_ = lean_mk_empty_array_with_capacity(v___x_2411_);
v___x_2416_ = lean_array_push(v___x_2415_, v___x_2414_);
v___x_2417_ = lean_unsigned_to_nat(0u);
v___x_2422_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2412_, v___x_2416_, v___x_2410_);
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v_a_2423_; lean_object* v___x_2425_; 
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2423_);
lean_dec_ref_known(v___x_2422_, 1);
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 0, v_a_2423_);
v___x_2425_ = v___x_2408_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_a_2423_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
v_val_2419_ = v___x_2425_;
goto v___jp_2418_;
}
}
else
{
lean_object* v_a_2427_; lean_object* v___x_2429_; 
v_a_2427_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2427_);
lean_dec_ref_known(v___x_2422_, 1);
if (v_isShared_2409_ == 0)
{
lean_ctor_set_tag(v___x_2408_, 0);
lean_ctor_set(v___x_2408_, 0, v_a_2427_);
v___x_2429_ = v___x_2408_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v_a_2427_);
v___x_2429_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
v_val_2419_ = v___x_2429_;
goto v___jp_2418_;
}
}
v___jp_2418_:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2420_, 0, v_val_2419_);
v___x_2421_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2417_, v___x_2410_, v___x_2420_, v___f_2394_);
return v___x_2421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___boxed(lean_object* v___f_2432_, lean_object* v_x_2433_, lean_object* v___y_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1(v___f_2432_, v_x_2433_);
return v_res_2435_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(uint8_t v_await_2436_, uint64_t v_extra_2437_){
_start:
{
uint64_t v___x_2438_; uint64_t v___y_2440_; 
v___x_2438_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
if (v_await_2436_ == 0)
{
uint64_t v___x_2443_; 
v___x_2443_ = 0ULL;
v___y_2440_ = v___x_2443_;
goto v___jp_2439_;
}
else
{
uint64_t v___x_2444_; 
v___x_2444_ = 2ULL;
v___y_2440_ = v___x_2444_;
goto v___jp_2439_;
}
v___jp_2439_:
{
uint64_t v___x_2441_; uint64_t v___x_2442_; 
v___x_2441_ = lean_uint64_lor(v___x_2438_, v___y_2440_);
v___x_2442_ = lean_uint64_lor(v___x_2441_, v_extra_2437_);
return v___x_2442_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6___boxed(lean_object* v_await_2445_, lean_object* v_extra_2446_){
_start:
{
uint8_t v_await_boxed_2447_; uint64_t v_extra_boxed_2448_; uint64_t v_res_2449_; lean_object* v_r_2450_; 
v_await_boxed_2447_ = lean_unbox(v_await_2445_);
v_extra_boxed_2448_ = lean_unbox_uint64(v_extra_2446_);
lean_dec_ref(v_extra_2446_);
v_res_2449_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(v_await_boxed_2447_, v_extra_boxed_2448_);
v_r_2450_ = lean_box_uint64(v_res_2449_);
return v_r_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7(lean_object* v___f_2451_, lean_object* v_a_2452_, uint32_t v_op_2453_, uint64_t v_flags_2454_, lean_object* v_payload_2455_, lean_object* v_x_2456_){
_start:
{
if (lean_obj_tag(v_x_2456_) == 0)
{
lean_object* v___x_2458_; 
lean_dec_ref(v___f_2451_);
v___x_2458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2458_, 0, v_x_2456_);
return v___x_2458_;
}
else
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2479_; 
v_a_2459_ = lean_ctor_get(v_x_2456_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v_x_2456_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2461_ = v_x_2456_;
v_isShared_2462_ = v_isSharedCheck_2479_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v_x_2456_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2479_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
uint32_t v___x_2463_; lean_object* v___x_2464_; uint8_t v___x_2465_; lean_object* v_val_2467_; lean_object* v___x_2470_; 
v___x_2463_ = 0;
v___x_2464_ = lean_unsigned_to_nat(0u);
v___x_2465_ = 0;
v___x_2470_ = lasm_js_call_into(v_a_2452_, v_op_2453_, v___x_2463_, v_flags_2454_, v_a_2459_, v_payload_2455_);
lean_dec(v_a_2459_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v_a_2471_; lean_object* v___x_2473_; 
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2471_);
lean_dec_ref_known(v___x_2470_, 1);
if (v_isShared_2462_ == 0)
{
lean_ctor_set(v___x_2461_, 0, v_a_2471_);
v___x_2473_ = v___x_2461_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_a_2471_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
v_val_2467_ = v___x_2473_;
goto v___jp_2466_;
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; 
v_a_2475_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2470_, 1);
if (v_isShared_2462_ == 0)
{
lean_ctor_set_tag(v___x_2461_, 0);
lean_ctor_set(v___x_2461_, 0, v_a_2475_);
v___x_2477_ = v___x_2461_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2475_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
v_val_2467_ = v___x_2477_;
goto v___jp_2466_;
}
}
v___jp_2466_:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2468_, 0, v_val_2467_);
v___x_2469_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2464_, v___x_2465_, v___x_2468_, v___f_2451_);
return v___x_2469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7___boxed(lean_object* v___f_2480_, lean_object* v_a_2481_, lean_object* v_op_2482_, lean_object* v_flags_2483_, lean_object* v_payload_2484_, lean_object* v_x_2485_, lean_object* v___y_2486_){
_start:
{
uint32_t v_op_boxed_2487_; uint64_t v_flags_boxed_2488_; lean_object* v_res_2489_; 
v_op_boxed_2487_ = lean_unbox_uint32(v_op_2482_);
lean_dec(v_op_2482_);
v_flags_boxed_2488_ = lean_unbox_uint64(v_flags_2483_);
lean_dec_ref(v_flags_2483_);
v_res_2489_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7(v___f_2480_, v_a_2481_, v_op_boxed_2487_, v_flags_boxed_2488_, v_payload_2484_, v_x_2485_);
lean_dec(v_payload_2484_);
lean_dec(v_a_2481_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5(lean_object* v___x_2490_, uint8_t v___x_2491_, lean_object* v___f_2492_, lean_object* v_a_2493_, uint32_t v_op_2494_, uint64_t v_flags_2495_, lean_object* v_payload_2496_, lean_object* v_x_2497_){
_start:
{
lean_object* v_val_2500_; 
if (lean_obj_tag(v_x_2497_) == 0)
{
lean_object* v___x_2503_; 
lean_dec_ref(v___f_2492_);
lean_dec(v___x_2490_);
v___x_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2503_, 0, v_x_2497_);
return v___x_2503_;
}
else
{
lean_object* v_a_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2518_; 
v_a_2504_ = lean_ctor_get(v_x_2497_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v_x_2497_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2506_ = v_x_2497_;
v_isShared_2507_ = v_isSharedCheck_2518_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_a_2504_);
lean_dec(v_x_2497_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2518_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
uint32_t v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = 0;
v___x_2509_ = lasm_js_call_into(v_a_2493_, v_op_2494_, v___x_2508_, v_flags_2495_, v_a_2504_, v_payload_2496_);
lean_dec(v_a_2504_);
if (lean_obj_tag(v___x_2509_) == 0)
{
lean_object* v_a_2510_; lean_object* v___x_2512_; 
v_a_2510_ = lean_ctor_get(v___x_2509_, 0);
lean_inc(v_a_2510_);
lean_dec_ref_known(v___x_2509_, 1);
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v_a_2510_);
v___x_2512_ = v___x_2506_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2510_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
v_val_2500_ = v___x_2512_;
goto v___jp_2499_;
}
}
else
{
lean_object* v_a_2514_; lean_object* v___x_2516_; 
v_a_2514_ = lean_ctor_get(v___x_2509_, 0);
lean_inc(v_a_2514_);
lean_dec_ref_known(v___x_2509_, 1);
if (v_isShared_2507_ == 0)
{
lean_ctor_set_tag(v___x_2506_, 0);
lean_ctor_set(v___x_2506_, 0, v_a_2514_);
v___x_2516_ = v___x_2506_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2514_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
v_val_2500_ = v___x_2516_;
goto v___jp_2499_;
}
}
}
}
v___jp_2499_:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2501_, 0, v_val_2500_);
v___x_2502_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2490_, v___x_2491_, v___x_2501_, v___f_2492_);
return v___x_2502_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5___boxed(lean_object* v___x_2519_, lean_object* v___x_2520_, lean_object* v___f_2521_, lean_object* v_a_2522_, lean_object* v_op_2523_, lean_object* v_flags_2524_, lean_object* v_payload_2525_, lean_object* v_x_2526_, lean_object* v___y_2527_){
_start:
{
uint8_t v___x_2046__boxed_2528_; uint32_t v_op_boxed_2529_; uint64_t v_flags_boxed_2530_; lean_object* v_res_2531_; 
v___x_2046__boxed_2528_ = lean_unbox(v___x_2520_);
v_op_boxed_2529_ = lean_unbox_uint32(v_op_2523_);
lean_dec(v_op_2523_);
v_flags_boxed_2530_ = lean_unbox_uint64(v_flags_2524_);
lean_dec_ref(v_flags_2524_);
v_res_2531_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5(v___x_2519_, v___x_2046__boxed_2528_, v___f_2521_, v_a_2522_, v_op_boxed_2529_, v_flags_boxed_2530_, v_payload_2525_, v_x_2526_);
lean_dec(v_payload_2525_);
lean_dec(v_a_2522_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3(lean_object* v_a_2532_, lean_object* v_x_2533_){
_start:
{
if (lean_obj_tag(v_x_2533_) == 0)
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2543_; 
v_a_2535_ = lean_ctor_get(v_x_2533_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v_x_2533_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2537_ = v_x_2533_;
v_isShared_2538_ = v_isSharedCheck_2543_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v_x_2533_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2543_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
lean_object* v___x_2541_; 
v___x_2541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2540_);
return v___x_2541_;
}
}
}
else
{
lean_object* v___x_2544_; 
lean_dec_ref_known(v_x_2533_, 1);
v___x_2544_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2532_);
return v___x_2544_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed(lean_object* v_a_2545_, lean_object* v_x_2546_, lean_object* v___y_2547_){
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3(v_a_2545_, v_x_2546_);
lean_dec(v_a_2545_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6(lean_object* v_failurePrefix_2549_, uint32_t v_op_2550_, uint64_t v_flags_2551_, lean_object* v_payload_2552_, lean_object* v___f_2553_, lean_object* v___f_2554_, lean_object* v___f_2555_, lean_object* v_x_2556_){
_start:
{
if (lean_obj_tag(v_x_2556_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2566_; 
lean_dec_ref(v___f_2555_);
lean_dec_ref(v___f_2554_);
lean_dec_ref(v___f_2553_);
lean_dec(v_payload_2552_);
v_a_2558_ = lean_ctor_get(v_x_2556_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v_x_2556_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2560_ = v_x_2556_;
v_isShared_2561_ = v_isSharedCheck_2566_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v_x_2556_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2566_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
lean_object* v___x_2564_; 
v___x_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2563_);
return v___x_2564_;
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2613_; 
v_a_2567_ = lean_ctor_get(v_x_2556_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v_x_2556_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2569_ = v_x_2556_;
v_isShared_2570_ = v_isSharedCheck_2613_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v_x_2556_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2613_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; uint8_t v___x_2573_; 
v___x_2571_ = lean_string_utf8_byte_size(v_failurePrefix_2549_);
v___x_2572_ = lean_unsigned_to_nat(0u);
v___x_2573_ = lean_nat_dec_eq(v___x_2571_, v___x_2572_);
if (v___x_2573_ == 0)
{
lean_object* v___f_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___f_2578_; lean_object* v_val_2580_; lean_object* v___x_2585_; 
lean_dec_ref(v___f_2555_);
lean_inc(v_a_2567_);
v___f_2574_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2574_, 0, v_a_2567_);
v___x_2575_ = lean_box(v___x_2573_);
v___x_2576_ = lean_box_uint32(v_op_2550_);
v___x_2577_ = lean_box_uint64(v_flags_2551_);
lean_inc(v_payload_2552_);
v___f_2578_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2578_, 0, v___x_2572_);
lean_closure_set(v___f_2578_, 1, v___x_2575_);
lean_closure_set(v___f_2578_, 2, v___f_2574_);
lean_closure_set(v___f_2578_, 3, v_a_2567_);
lean_closure_set(v___f_2578_, 4, v___x_2576_);
lean_closure_set(v___f_2578_, 5, v___x_2577_);
lean_closure_set(v___f_2578_, 6, v_payload_2552_);
v___x_2585_ = l_Lasm_JS_Wire_encodeIO(v_payload_2552_);
lean_dec(v_payload_2552_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v___x_2588_; 
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
lean_inc(v_a_2586_);
lean_dec_ref_known(v___x_2585_, 1);
if (v_isShared_2570_ == 0)
{
lean_ctor_set(v___x_2569_, 0, v_a_2586_);
v___x_2588_ = v___x_2569_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v_a_2586_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
v_val_2580_ = v___x_2588_;
goto v___jp_2579_;
}
}
else
{
lean_object* v_a_2590_; lean_object* v___x_2592_; 
v_a_2590_ = lean_ctor_get(v___x_2585_, 0);
lean_inc(v_a_2590_);
lean_dec_ref_known(v___x_2585_, 1);
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
lean_ctor_set(v___x_2569_, 0, v_a_2590_);
v___x_2592_ = v___x_2569_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_a_2590_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
v_val_2580_ = v___x_2592_;
goto v___jp_2579_;
}
}
v___jp_2579_:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2581_, 0, v_val_2580_);
v___x_2582_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2572_, v___x_2573_, v___x_2581_, v___f_2578_);
v___x_2583_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2572_, v___x_2573_, v___x_2582_, v___f_2553_);
v___x_2584_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2572_, v___x_2573_, v___x_2583_, v___f_2554_);
return v___x_2584_;
}
}
else
{
lean_object* v___f_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___f_2597_; uint8_t v___x_2598_; lean_object* v_val_2600_; lean_object* v___x_2604_; 
lean_dec_ref(v___f_2554_);
lean_dec_ref(v___f_2553_);
lean_inc(v_a_2567_);
v___f_2594_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2594_, 0, v_a_2567_);
v___x_2595_ = lean_box_uint32(v_op_2550_);
v___x_2596_ = lean_box_uint64(v_flags_2551_);
lean_inc(v_payload_2552_);
v___f_2597_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2597_, 0, v___f_2594_);
lean_closure_set(v___f_2597_, 1, v_a_2567_);
lean_closure_set(v___f_2597_, 2, v___x_2595_);
lean_closure_set(v___f_2597_, 3, v___x_2596_);
lean_closure_set(v___f_2597_, 4, v_payload_2552_);
v___x_2598_ = 0;
v___x_2604_ = l_Lasm_JS_Wire_encodeIO(v_payload_2552_);
lean_dec(v_payload_2552_);
if (lean_obj_tag(v___x_2604_) == 0)
{
lean_object* v_a_2605_; lean_object* v___x_2607_; 
v_a_2605_ = lean_ctor_get(v___x_2604_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v___x_2604_, 1);
if (v_isShared_2570_ == 0)
{
lean_ctor_set(v___x_2569_, 0, v_a_2605_);
v___x_2607_ = v___x_2569_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_a_2605_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
v_val_2600_ = v___x_2607_;
goto v___jp_2599_;
}
}
else
{
lean_object* v_a_2609_; lean_object* v___x_2611_; 
v_a_2609_ = lean_ctor_get(v___x_2604_, 0);
lean_inc(v_a_2609_);
lean_dec_ref_known(v___x_2604_, 1);
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
lean_ctor_set(v___x_2569_, 0, v_a_2609_);
v___x_2611_ = v___x_2569_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2609_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
v_val_2600_ = v___x_2611_;
goto v___jp_2599_;
}
}
v___jp_2599_:
{
lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2601_, 0, v_val_2600_);
v___x_2602_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2572_, v___x_2598_, v___x_2601_, v___f_2597_);
v___x_2603_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2572_, v___x_2598_, v___x_2602_, v___f_2555_);
return v___x_2603_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6___boxed(lean_object* v_failurePrefix_2614_, lean_object* v_op_2615_, lean_object* v_flags_2616_, lean_object* v_payload_2617_, lean_object* v___f_2618_, lean_object* v___f_2619_, lean_object* v___f_2620_, lean_object* v_x_2621_, lean_object* v___y_2622_){
_start:
{
uint32_t v_op_boxed_2623_; uint64_t v_flags_boxed_2624_; lean_object* v_res_2625_; 
v_op_boxed_2623_ = lean_unbox_uint32(v_op_2615_);
lean_dec(v_op_2615_);
v_flags_boxed_2624_ = lean_unbox_uint64(v_flags_2616_);
lean_dec_ref(v_flags_2616_);
v_res_2625_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6(v_failurePrefix_2614_, v_op_boxed_2623_, v_flags_boxed_2624_, v_payload_2617_, v___f_2618_, v___f_2619_, v___f_2620_, v_x_2621_);
lean_dec_ref(v_failurePrefix_2614_);
return v_res_2625_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8(lean_object* v___f_2626_, lean_object* v_x_2627_){
_start:
{
if (lean_obj_tag(v_x_2627_) == 0)
{
lean_object* v_a_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2637_; 
lean_dec_ref(v___f_2626_);
v_a_2629_ = lean_ctor_get(v_x_2627_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v_x_2627_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2631_ = v_x_2627_;
v_isShared_2632_ = v_isSharedCheck_2637_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_a_2629_);
lean_dec(v_x_2627_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2637_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2634_; 
if (v_isShared_2632_ == 0)
{
v___x_2634_ = v___x_2631_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_a_2629_);
v___x_2634_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
lean_object* v___x_2635_; 
v___x_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2634_);
return v___x_2635_;
}
}
}
else
{
lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2649_; 
v_isSharedCheck_2649_ = !lean_is_exclusive(v_x_2627_);
if (v_isSharedCheck_2649_ == 0)
{
lean_object* v_unused_2650_; 
v_unused_2650_ = lean_ctor_get(v_x_2627_, 0);
lean_dec(v_unused_2650_);
v___x_2639_ = v_x_2627_;
v_isShared_2640_ = v_isSharedCheck_2649_;
goto v_resetjp_2638_;
}
else
{
lean_dec(v_x_2627_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2649_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2641_; uint8_t v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2645_; 
v___x_2641_ = lean_unsigned_to_nat(0u);
v___x_2642_ = 0;
v___x_2643_ = lean_io_promise_new();
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v___x_2643_);
v___x_2645_ = v___x_2639_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v___x_2643_);
v___x_2645_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2645_);
v___x_2647_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2641_, v___x_2642_, v___x_2646_, v___f_2626_);
return v___x_2647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8___boxed(lean_object* v___f_2651_, lean_object* v_x_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v_res_2654_; 
v_res_2654_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8(v___f_2651_, v_x_2652_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(lean_object* v_d_2662_, lean_object* v_key_2663_){
_start:
{
if (lean_obj_tag(v_d_2662_) == 8)
{
lean_object* v___x_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2709_; 
v___x_2664_ = l_Lasm_JS_Data_field(v_d_2662_, v_key_2663_);
v_isSharedCheck_2709_ = !lean_is_exclusive(v_d_2662_);
if (v_isSharedCheck_2709_ == 0)
{
lean_object* v_unused_2710_; 
v_unused_2710_ = lean_ctor_get(v_d_2662_, 0);
lean_dec(v_unused_2710_);
v___x_2666_ = v_d_2662_;
v_isShared_2667_ = v_isSharedCheck_2709_;
goto v_resetjp_2665_;
}
else
{
lean_dec(v_d_2662_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2709_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
switch(lean_obj_tag(v___x_2664_))
{
case 4:
{
lean_object* v_s_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2678_; 
v_s_2668_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2678_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2670_ = v___x_2664_;
v_isShared_2671_ = v_isSharedCheck_2678_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_s_2668_);
lean_dec(v___x_2664_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2678_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
lean_ctor_set_tag(v___x_2670_, 0);
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v_s_2668_);
v___x_2673_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2675_; 
if (v_isShared_2667_ == 0)
{
lean_ctor_set_tag(v___x_2666_, 1);
lean_ctor_set(v___x_2666_, 0, v___x_2673_);
v___x_2675_ = v___x_2666_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v___x_2673_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
case 6:
{
lean_object* v_b_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2689_; 
v_b_2679_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2681_ = v___x_2664_;
v_isShared_2682_ = v_isSharedCheck_2689_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_b_2679_);
lean_dec(v___x_2664_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2689_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2684_; 
if (v_isShared_2682_ == 0)
{
lean_ctor_set_tag(v___x_2681_, 1);
v___x_2684_ = v___x_2681_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_b_2679_);
v___x_2684_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
lean_object* v___x_2686_; 
if (v_isShared_2667_ == 0)
{
lean_ctor_set_tag(v___x_2666_, 1);
lean_ctor_set(v___x_2666_, 0, v___x_2684_);
v___x_2686_ = v___x_2666_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2684_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
default: 
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; uint8_t v___x_2700_; 
v___x_2690_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__0));
v___x_2691_ = lean_string_append(v___x_2690_, v_key_2663_);
v___x_2692_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__1));
v___x_2693_ = lean_string_append(v___x_2691_, v___x_2692_);
v___x_2694_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__2));
v___x_2695_ = lean_string_append(v___x_2693_, v___x_2694_);
v___x_2696_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__3));
v___x_2697_ = lean_string_append(v___x_2695_, v___x_2696_);
v___x_2698_ = l_Lasm_JS_Data_describe(v___x_2664_);
v___x_2699_ = lean_string_append(v___x_2697_, v___x_2698_);
lean_dec_ref(v___x_2698_);
v___x_2700_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_2700_ == 0)
{
lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2704_; 
v___x_2701_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___x_2702_ = lean_string_append(v___x_2699_, v___x_2701_);
if (v_isShared_2667_ == 0)
{
lean_ctor_set_tag(v___x_2666_, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2702_);
v___x_2704_ = v___x_2666_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v___x_2702_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
else
{
lean_object* v___x_2707_; 
if (v_isShared_2667_ == 0)
{
lean_ctor_set_tag(v___x_2666_, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2699_);
v___x_2707_ = v___x_2666_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v___x_2699_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
}
}
}
else
{
lean_object* v___x_2711_; 
lean_dec(v_d_2662_);
v___x_2711_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__5));
return v___x_2711_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___boxed(lean_object* v_d_2712_, lean_object* v_key_2713_){
_start:
{
lean_object* v_res_2714_; 
v_res_2714_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_2712_, v_key_2713_);
lean_dec_ref(v_key_2713_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(lean_object* v_context_2715_, lean_object* v_d_2716_){
_start:
{
lean_object* v___y_2719_; lean_object* v___y_2720_; lean_object* v___y_2725_; lean_object* v_received_2726_; lean_object* v___y_2745_; lean_object* v_a_2748_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2772_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__0));
lean_inc(v_d_2716_);
v___x_2773_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_2716_, v___x_2772_);
if (lean_obj_tag(v___x_2773_) == 0)
{
lean_object* v_a_2774_; 
v_a_2774_ = lean_ctor_get(v___x_2773_, 0);
lean_inc(v_a_2774_);
lean_dec_ref_known(v___x_2773_, 1);
v_a_2748_ = v_a_2774_;
goto v___jp_2747_;
}
else
{
lean_object* v_a_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
v_a_2775_ = lean_ctor_get(v___x_2773_, 0);
lean_inc(v_a_2775_);
lean_dec_ref_known(v___x_2773_, 1);
v___x_2776_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___lam__0___closed__1));
lean_inc(v_d_2716_);
v___x_2777_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_2716_, v___x_2776_);
if (lean_obj_tag(v___x_2777_) == 0)
{
lean_object* v_a_2778_; 
lean_dec(v_a_2775_);
v_a_2778_ = lean_ctor_get(v___x_2777_, 0);
lean_inc(v_a_2778_);
lean_dec_ref_known(v___x_2777_, 1);
v_a_2748_ = v_a_2778_;
goto v___jp_2747_;
}
else
{
lean_object* v_a_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2787_; 
lean_dec(v_d_2716_);
v_a_2779_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2781_ = v___x_2777_;
v_isShared_2782_ = v_isSharedCheck_2787_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_a_2779_);
lean_dec(v___x_2777_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2787_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2783_; lean_object* v___x_2785_; 
v___x_2783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2783_, 0, v_a_2775_);
lean_ctor_set(v___x_2783_, 1, v_a_2779_);
if (v_isShared_2782_ == 0)
{
lean_ctor_set_tag(v___x_2781_, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2783_);
v___x_2785_ = v___x_2781_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v___x_2783_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
v___jp_2718_:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2721_ = lean_string_append(v___y_2719_, v___y_2720_);
lean_dec_ref(v___y_2720_);
v___x_2722_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2721_);
v___x_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2722_);
return v___x_2723_;
}
v___jp_2724_:
{
lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; uint8_t v___x_2738_; 
v___x_2727_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__0));
v___x_2728_ = lean_string_append(v___x_2727_, v_context_2715_);
v___x_2729_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__1));
v___x_2730_ = lean_string_append(v___x_2728_, v___x_2729_);
v___x_2731_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSChild__processExecFileResult___closed__1));
v___x_2732_ = lean_string_append(v___x_2730_, v___x_2731_);
v___x_2733_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__3));
v___x_2734_ = lean_string_append(v___x_2732_, v___x_2733_);
v___x_2735_ = lean_string_append(v___x_2734_, v_received_2726_);
lean_dec_ref(v_received_2726_);
v___x_2736_ = lean_string_utf8_byte_size(v___y_2725_);
v___x_2737_ = lean_unsigned_to_nat(0u);
v___x_2738_ = lean_nat_dec_eq(v___x_2736_, v___x_2737_);
if (v___x_2738_ == 0)
{
lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2739_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__4));
v___x_2740_ = lean_string_append(v___x_2739_, v___y_2725_);
lean_dec_ref(v___y_2725_);
v___x_2741_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__5));
v___x_2742_ = lean_string_append(v___x_2740_, v___x_2741_);
v___y_2719_ = v___x_2735_;
v___y_2720_ = v___x_2742_;
goto v___jp_2718_;
}
else
{
lean_object* v___x_2743_; 
lean_dec_ref(v___y_2725_);
v___x_2743_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___y_2719_ = v___x_2735_;
v___y_2720_ = v___x_2743_;
goto v___jp_2718_;
}
}
v___jp_2744_:
{
lean_object* v___x_2746_; 
v___x_2746_ = l_Lasm_JS_Data_describe(v_d_2716_);
v___y_2725_ = v___y_2745_;
v_received_2726_ = v___x_2746_;
goto v___jp_2724_;
}
v___jp_2747_:
{
if (lean_obj_tag(v_d_2716_) == 9)
{
lean_object* v_value_2749_; lean_object* v_description_2750_; lean_object* v___x_2751_; uint8_t v___x_2752_; 
v_value_2749_ = lean_ctor_get(v_d_2716_, 0);
v_description_2750_ = lean_ctor_get(v_d_2716_, 1);
v___x_2751_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2752_ = lean_string_dec_eq(v_description_2750_, v___x_2751_);
if (v___x_2752_ == 0)
{
v___y_2745_ = v_a_2748_;
goto v___jp_2744_;
}
else
{
lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2769_; 
lean_inc(v_value_2749_);
v_isSharedCheck_2769_ = !lean_is_exclusive(v_d_2716_);
if (v_isSharedCheck_2769_ == 0)
{
lean_object* v_unused_2770_; lean_object* v_unused_2771_; 
v_unused_2770_ = lean_ctor_get(v_d_2716_, 1);
lean_dec(v_unused_2770_);
v_unused_2771_ = lean_ctor_get(v_d_2716_, 0);
lean_dec(v_unused_2771_);
v___x_2754_ = v_d_2716_;
v_isShared_2755_ = v_isSharedCheck_2769_;
goto v_resetjp_2753_;
}
else
{
lean_dec(v_d_2716_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2769_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
uint32_t v___x_2756_; uint64_t v___x_2757_; lean_object* v___x_2759_; 
v___x_2756_ = 206;
v___x_2757_ = 0ULL;
lean_inc(v_value_2749_);
if (v_isShared_2755_ == 0)
{
lean_ctor_set(v___x_2754_, 1, v___x_2751_);
v___x_2759_ = v___x_2754_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_value_2749_);
lean_ctor_set(v_reuseFailAlloc_2768_, 1, v___x_2751_);
v___x_2759_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
uint32_t v___x_2760_; lean_object* v___x_2761_; 
v___x_2760_ = lasm_js_value_handle(v_value_2749_);
lean_dec(v_value_2749_);
v___x_2761_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2756_, v___x_2757_, v___x_2759_, v___x_2760_);
lean_dec_ref(v___x_2759_);
if (lean_obj_tag(v___x_2761_) == 0)
{
lean_object* v_a_2762_; uint8_t v___x_2763_; 
v_a_2762_ = lean_ctor_get(v___x_2761_, 0);
lean_inc(v_a_2762_);
lean_dec_ref_known(v___x_2761_, 1);
v___x_2763_ = lean_string_validate_utf8(v_a_2762_);
if (v___x_2763_ == 0)
{
lean_object* v___x_2764_; lean_object* v___x_2765_; 
lean_dec(v_a_2762_);
v___x_2764_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__9);
v___x_2765_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2764_);
v___y_2725_ = v_a_2748_;
v_received_2726_ = v___x_2765_;
goto v___jp_2724_;
}
else
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_string_from_utf8_unchecked(v_a_2762_);
v___y_2725_ = v_a_2748_;
v_received_2726_ = v___x_2766_;
goto v___jp_2724_;
}
}
else
{
lean_object* v___x_2767_; 
lean_dec_ref_known(v___x_2761_, 1);
v___x_2767_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_ChildProcess_CloseListener_ofFn_spec__1_spec__1___closed__10));
v___y_2725_ = v_a_2748_;
v_received_2726_ = v___x_2767_;
goto v___jp_2724_;
}
}
}
}
}
else
{
v___y_2745_ = v_a_2748_;
goto v___jp_2744_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8___boxed(lean_object* v_context_2788_, lean_object* v_d_2789_, lean_object* v_a_2790_){
_start:
{
lean_object* v_res_2791_; 
v_res_2791_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(v_context_2788_, v_d_2789_);
lean_dec_ref(v_context_2788_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0(lean_object* v_context_2792_, lean_object* v_x_2793_){
_start:
{
lean_object* v_val_2796_; 
if (lean_obj_tag(v_x_2793_) == 0)
{
lean_object* v_a_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2806_; 
v_a_2798_ = lean_ctor_get(v_x_2793_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v_x_2793_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2800_ = v_x_2793_;
v_isShared_2801_ = v_isSharedCheck_2806_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_a_2798_);
lean_dec(v_x_2793_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2806_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
lean_object* v___x_2803_; 
if (v_isShared_2801_ == 0)
{
v___x_2803_ = v___x_2800_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v_a_2798_);
v___x_2803_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
lean_object* v___x_2804_; 
v___x_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2803_);
return v___x_2804_;
}
}
}
else
{
lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2820_; 
v_a_2807_ = lean_ctor_get(v_x_2793_, 0);
v_isSharedCheck_2820_ = !lean_is_exclusive(v_x_2793_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2809_ = v_x_2793_;
v_isShared_2810_ = v_isSharedCheck_2820_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_dec(v_x_2793_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2820_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2811_; 
v___x_2811_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(v_context_2792_, v_a_2807_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; lean_object* v___x_2814_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2812_);
lean_dec_ref_known(v___x_2811_, 1);
if (v_isShared_2810_ == 0)
{
lean_ctor_set(v___x_2809_, 0, v_a_2812_);
v___x_2814_ = v___x_2809_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_a_2812_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
v_val_2796_ = v___x_2814_;
goto v___jp_2795_;
}
}
else
{
lean_object* v_a_2816_; lean_object* v___x_2818_; 
v_a_2816_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2816_);
lean_dec_ref_known(v___x_2811_, 1);
if (v_isShared_2810_ == 0)
{
lean_ctor_set_tag(v___x_2809_, 0);
lean_ctor_set(v___x_2809_, 0, v_a_2816_);
v___x_2818_ = v___x_2809_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_a_2816_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
v_val_2796_ = v___x_2818_;
goto v___jp_2795_;
}
}
}
}
v___jp_2795_:
{
lean_object* v___x_2797_; 
v___x_2797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2797_, 0, v_val_2796_);
return v___x_2797_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0___boxed(lean_object* v_context_2821_, lean_object* v_x_2822_, lean_object* v___y_2823_){
_start:
{
lean_object* v_res_2824_; 
v_res_2824_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0(v_context_2821_, v_x_2822_);
lean_dec_ref(v_context_2821_);
return v_res_2824_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1(lean_object* v___f_2825_, lean_object* v_bytes_2826_){
_start:
{
lean_object* v___x_2828_; uint8_t v___x_2829_; lean_object* v_val_2831_; lean_object* v___x_2834_; 
v___x_2828_ = lean_unsigned_to_nat(0u);
v___x_2829_ = 0;
v___x_2834_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2826_);
if (lean_obj_tag(v___x_2834_) == 0)
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2842_; 
v_a_2835_ = lean_ctor_get(v___x_2834_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2837_ = v___x_2834_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2834_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2838_ == 0)
{
lean_ctor_set_tag(v___x_2837_, 1);
v___x_2840_ = v___x_2837_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_a_2835_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
v_val_2831_ = v___x_2840_;
goto v___jp_2830_;
}
}
}
else
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2850_; 
v_a_2843_ = lean_ctor_get(v___x_2834_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2845_ = v___x_2834_;
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2834_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2848_; 
if (v_isShared_2846_ == 0)
{
lean_ctor_set_tag(v___x_2845_, 0);
v___x_2848_ = v___x_2845_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_a_2843_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
v_val_2831_ = v___x_2848_;
goto v___jp_2830_;
}
}
}
v___jp_2830_:
{
lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___x_2832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2832_, 0, v_val_2831_);
v___x_2833_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2828_, v___x_2829_, v___x_2832_, v___f_2825_);
return v___x_2833_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1___boxed(lean_object* v___f_2851_, lean_object* v_bytes_2852_, lean_object* v___y_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1(v___f_2851_, v_bytes_2852_);
lean_dec_ref(v_bytes_2852_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4(lean_object* v_failurePrefix_2855_, lean_object* v_x_2856_){
_start:
{
if (lean_obj_tag(v_x_2856_) == 0)
{
lean_object* v_a_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2869_; 
v_a_2858_ = lean_ctor_get(v_x_2856_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v_x_2856_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2860_ = v_x_2856_;
v_isShared_2861_ = v_isSharedCheck_2869_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_a_2858_);
lean_dec(v_x_2856_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2869_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2866_; 
v___x_2862_ = lean_io_error_to_string(v_a_2858_);
v___x_2863_ = lean_string_append(v_failurePrefix_2855_, v___x_2862_);
lean_dec_ref(v___x_2862_);
v___x_2864_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2863_);
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 0, v___x_2864_);
v___x_2866_ = v___x_2860_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v___x_2864_);
v___x_2866_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
lean_object* v___x_2867_; 
v___x_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2866_);
return v___x_2867_;
}
}
}
else
{
lean_object* v___x_2870_; 
lean_dec_ref(v_failurePrefix_2855_);
v___x_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2870_, 0, v_x_2856_);
return v___x_2870_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4___boxed(lean_object* v_failurePrefix_2871_, lean_object* v_x_2872_, lean_object* v___y_2873_){
_start:
{
lean_object* v_res_2874_; 
v_res_2874_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4(v_failurePrefix_2871_, v_x_2872_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2(lean_object* v___f_2875_, lean_object* v_x_2876_){
_start:
{
if (lean_obj_tag(v_x_2876_) == 0)
{
lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2886_; 
lean_dec_ref(v___f_2875_);
v_a_2878_ = lean_ctor_get(v_x_2876_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v_x_2876_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2880_ = v_x_2876_;
v_isShared_2881_ = v_isSharedCheck_2886_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_dec(v_x_2876_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2886_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2883_; 
if (v_isShared_2881_ == 0)
{
v___x_2883_ = v___x_2880_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2878_);
v___x_2883_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
lean_object* v___x_2884_; 
v___x_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2883_);
return v___x_2884_;
}
}
}
else
{
lean_object* v_a_2887_; lean_object* v___x_2888_; 
v_a_2887_ = lean_ctor_get(v_x_2876_, 0);
lean_inc(v_a_2887_);
lean_dec_ref_known(v_x_2876_, 1);
v___x_2888_ = lean_apply_2(v___f_2875_, v_a_2887_, lean_box(0));
return v___x_2888_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2___boxed(lean_object* v___f_2889_, lean_object* v_x_2890_, lean_object* v___y_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2(v___f_2889_, v_x_2890_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(lean_object* v_context_2893_, uint32_t v_op_2894_, uint64_t v_flags_2895_, lean_object* v_payload_2896_, lean_object* v_failurePrefix_2897_){
_start:
{
lean_object* v___f_2899_; lean_object* v___f_2900_; lean_object* v___f_2901_; lean_object* v___f_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___f_2905_; lean_object* v___f_2906_; lean_object* v___x_2907_; uint8_t v___x_2908_; lean_object* v_val_2910_; lean_object* v___x_2913_; 
v___f_2899_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2899_, 0, v_context_2893_);
v___f_2900_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2900_, 0, v___f_2899_);
v___f_2901_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2901_, 0, v___f_2900_);
lean_inc_ref(v_failurePrefix_2897_);
v___f_2902_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2902_, 0, v_failurePrefix_2897_);
v___x_2903_ = lean_box_uint32(v_op_2894_);
v___x_2904_ = lean_box_uint64(v_flags_2895_);
lean_inc_ref(v___f_2901_);
v___f_2905_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2905_, 0, v_failurePrefix_2897_);
lean_closure_set(v___f_2905_, 1, v___x_2903_);
lean_closure_set(v___f_2905_, 2, v___x_2904_);
lean_closure_set(v___f_2905_, 3, v_payload_2896_);
lean_closure_set(v___f_2905_, 4, v___f_2902_);
lean_closure_set(v___f_2905_, 5, v___f_2901_);
lean_closure_set(v___f_2905_, 6, v___f_2901_);
v___f_2906_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2906_, 0, v___f_2905_);
v___x_2907_ = lean_unsigned_to_nat(0u);
v___x_2908_ = 0;
v___x_2913_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2913_) == 0)
{
lean_object* v_a_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2921_; 
v_a_2914_ = lean_ctor_get(v___x_2913_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v___x_2913_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2916_ = v___x_2913_;
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_a_2914_);
lean_dec(v___x_2913_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
lean_object* v___x_2919_; 
if (v_isShared_2917_ == 0)
{
lean_ctor_set_tag(v___x_2916_, 1);
v___x_2919_ = v___x_2916_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_a_2914_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
v_val_2910_ = v___x_2919_;
goto v___jp_2909_;
}
}
}
else
{
lean_object* v_a_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2929_; 
v_a_2922_ = lean_ctor_get(v___x_2913_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v___x_2913_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2924_ = v___x_2913_;
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_a_2922_);
lean_dec(v___x_2913_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v___x_2927_; 
if (v_isShared_2925_ == 0)
{
lean_ctor_set_tag(v___x_2924_, 0);
v___x_2927_ = v___x_2924_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_a_2922_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
v_val_2910_ = v___x_2927_;
goto v___jp_2909_;
}
}
}
v___jp_2909_:
{
lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2911_, 0, v_val_2910_);
v___x_2912_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2907_, v___x_2908_, v___x_2911_, v___f_2906_);
return v___x_2912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___boxed(lean_object* v_context_2930_, lean_object* v_op_2931_, lean_object* v_flags_2932_, lean_object* v_payload_2933_, lean_object* v_failurePrefix_2934_, lean_object* v_a_2935_){
_start:
{
uint32_t v_op_boxed_2936_; uint64_t v_flags_boxed_2937_; lean_object* v_res_2938_; 
v_op_boxed_2936_ = lean_unbox_uint32(v_op_2931_);
lean_dec(v_op_2931_);
v_flags_boxed_2937_ = lean_unbox_uint64(v_flags_2932_);
lean_dec_ref(v_flags_2932_);
v_res_2938_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(v_context_2930_, v_op_boxed_2936_, v_flags_boxed_2937_, v_payload_2933_, v_failurePrefix_2934_);
return v_res_2938_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1(void){
_start:
{
uint64_t v___x_2940_; uint8_t v___x_2941_; uint64_t v___x_2942_; 
v___x_2940_ = 0ULL;
v___x_2941_ = 0;
v___x_2942_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(v___x_2941_, v___x_2940_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(lean_object* v_f_2943_, lean_object* v_args_2944_, lean_object* v_this_2945_){
_start:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; uint32_t v___x_2950_; uint64_t v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2947_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_2948_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2948_, 0, v_f_2943_);
lean_ctor_set(v___x_2948_, 1, v___x_2947_);
v___x_2949_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__0));
v___x_2950_ = 205;
v___x_2951_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1, &l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1);
v___x_2952_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2952_, 0, v_args_2944_);
v___x_2953_ = lean_unsigned_to_nat(3u);
v___x_2954_ = lean_mk_empty_array_with_capacity(v___x_2953_);
v___x_2955_ = lean_array_push(v___x_2954_, v___x_2948_);
v___x_2956_ = lean_array_push(v___x_2955_, v_this_2945_);
v___x_2957_ = lean_array_push(v___x_2956_, v___x_2952_);
v___x_2958_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2958_, 0, v___x_2957_);
v___x_2959_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(v___x_2949_, v___x_2950_, v___x_2951_, v___x_2958_, v___x_2947_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___boxed(lean_object* v_f_2960_, lean_object* v_args_2961_, lean_object* v_this_2962_, lean_object* v___y_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(v_f_2960_, v_args_2961_, v_this_2962_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0(lean_object* v_args_2965_, lean_object* v_x_2966_){
_start:
{
if (lean_obj_tag(v_x_2966_) == 0)
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2976_; 
lean_dec_ref(v_args_2965_);
v_a_2968_ = lean_ctor_get(v_x_2966_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v_x_2966_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2970_ = v_x_2966_;
v_isShared_2971_ = v_isSharedCheck_2976_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v_x_2966_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2976_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
if (v_isShared_2971_ == 0)
{
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v_a_2968_);
v___x_2973_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
lean_object* v___x_2974_; 
v___x_2974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
return v___x_2974_;
}
}
}
else
{
lean_object* v_a_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; 
v_a_2977_ = lean_ctor_get(v_x_2966_, 0);
lean_inc(v_a_2977_);
lean_dec_ref_known(v_x_2966_, 1);
v___x_2978_ = lean_box(0);
v___x_2979_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(v_a_2977_, v_args_2965_, v___x_2978_);
return v___x_2979_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0___boxed(lean_object* v_args_2980_, lean_object* v_x_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0(v_args_2980_, v_x_2981_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(lean_object* v_module_2985_, lean_object* v_path_2986_, lean_object* v_args_2987_){
_start:
{
lean_object* v___f_2989_; lean_object* v___f_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; uint8_t v___x_2995_; lean_object* v_val_2997_; lean_object* v___x_3000_; 
v___f_2989_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2989_, 0, v_args_2987_);
v___f_2990_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2990_, 0, v___f_2989_);
v___x_2991_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___closed__0));
v___x_2992_ = lean_unsigned_to_nat(0u);
v___x_2993_ = lean_box(0);
v___x_2994_ = l_String_splitOnAux(v_path_2986_, v___x_2991_, v___x_2992_, v___x_2992_, v___x_2992_, v___x_2993_);
v___x_2995_ = 0;
v___x_3000_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v_module_2985_, v___x_2994_);
if (lean_obj_tag(v___x_3000_) == 0)
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3008_; 
v_a_3001_ = lean_ctor_get(v___x_3000_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_3003_ = v___x_3000_;
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_3000_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
lean_ctor_set_tag(v___x_3003_, 1);
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_a_3001_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
v_val_2997_ = v___x_3006_;
goto v___jp_2996_;
}
}
}
else
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3016_; 
v_a_3009_ = lean_ctor_get(v___x_3000_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3011_ = v___x_3000_;
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_3000_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3014_; 
if (v_isShared_3012_ == 0)
{
lean_ctor_set_tag(v___x_3011_, 0);
v___x_3014_ = v___x_3011_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_a_3009_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
v_val_2997_ = v___x_3014_;
goto v___jp_2996_;
}
}
}
v___jp_2996_:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2998_, 0, v_val_2997_);
v___x_2999_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2992_, v___x_2995_, v___x_2998_, v___f_2990_);
return v___x_2999_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___boxed(lean_object* v_module_3017_, lean_object* v_path_3018_, lean_object* v_args_3019_, lean_object* v_a_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(v_module_3017_, v_path_3018_, v_args_3019_);
lean_dec_ref(v_path_3018_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile(lean_object* v_file_3023_, lean_object* v_args_3024_, lean_object* v_options_3025_){
_start:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3027_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_cast_x3f___closed__0));
v___x_3028_ = ((lean_object*)(l_Lasm_JS_Node_child__process_execFile___closed__0));
v___x_3029_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3029_, 0, v_file_3023_);
v___x_3030_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(v_args_3024_);
v___x_3031_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1(v_options_3025_);
v___x_3032_ = lean_unsigned_to_nat(3u);
v___x_3033_ = lean_mk_empty_array_with_capacity(v___x_3032_);
v___x_3034_ = lean_array_push(v___x_3033_, v___x_3029_);
v___x_3035_ = lean_array_push(v___x_3034_, v___x_3030_);
v___x_3036_ = lean_array_push(v___x_3035_, v___x_3031_);
v___x_3037_ = l_Lasm_JS_Web_Support_args(v___x_3036_);
v___x_3038_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(v___x_3027_, v___x_3028_, v___x_3037_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile___boxed(lean_object* v_file_3039_, lean_object* v_args_3040_, lean_object* v_options_3041_, lean_object* v_a_3042_){
_start:
{
lean_object* v_res_3043_; 
v_res_3043_ = l_Lasm_JS_Node_child__process_execFile(v_file_3039_, v_args_3040_, v_options_3041_);
return v_res_3043_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(lean_object* v_x_3044_){
_start:
{
if (lean_obj_tag(v_x_3044_) == 0)
{
lean_object* v___x_3045_; 
v___x_3045_ = lean_box(0);
return v___x_3045_;
}
else
{
lean_object* v_val_3046_; 
v_val_3046_ = lean_ctor_get(v_x_3044_, 0);
lean_inc(v_val_3046_);
lean_dec_ref_known(v_x_3044_, 1);
if (lean_obj_tag(v_val_3046_) == 0)
{
lean_object* v_value_3047_; lean_object* v___x_3049_; uint8_t v_isShared_3050_; uint8_t v_isSharedCheck_3057_; 
v_value_3047_ = lean_ctor_get(v_val_3046_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v_val_3046_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3049_ = v_val_3046_;
v_isShared_3050_ = v_isSharedCheck_3057_;
goto v_resetjp_3048_;
}
else
{
lean_inc(v_value_3047_);
lean_dec(v_val_3046_);
v___x_3049_ = lean_box(0);
v_isShared_3050_ = v_isSharedCheck_3057_;
goto v_resetjp_3048_;
}
v_resetjp_3048_:
{
size_t v_sz_3051_; size_t v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3055_; 
v_sz_3051_ = lean_array_size(v_value_3047_);
v___x_3052_ = ((size_t)0ULL);
v___x_3053_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_3051_, v___x_3052_, v_value_3047_);
if (v_isShared_3050_ == 0)
{
lean_ctor_set_tag(v___x_3049_, 7);
lean_ctor_set(v___x_3049_, 0, v___x_3053_);
v___x_3055_ = v___x_3049_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3053_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
else
{
lean_object* v_value_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3065_; 
v_value_3058_ = lean_ctor_get(v_val_3046_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v_val_3046_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3060_ = v_val_3046_;
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_value_3058_);
lean_dec(v_val_3046_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3063_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set_tag(v___x_3060_, 4);
v___x_3063_ = v___x_3060_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_value_3058_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(lean_object* v_x_3066_){
_start:
{
if (lean_obj_tag(v_x_3066_) == 0)
{
lean_object* v___x_3067_; 
v___x_3067_ = lean_box(0);
return v___x_3067_;
}
else
{
lean_object* v_val_3068_; lean_object* v_cwd_3069_; lean_object* v_env_3070_; lean_object* v_argv0_3071_; lean_object* v_stdio_3072_; lean_object* v_detached_3073_; lean_object* v_uid_3074_; lean_object* v_gid_3075_; lean_object* v_serialization_3076_; lean_object* v_shell_3077_; lean_object* v_windowsVerbatimArguments_3078_; lean_object* v_windowsHide_3079_; lean_object* v_signal_3080_; lean_object* v_timeout_3081_; lean_object* v_killSignal_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; 
v_val_3068_ = lean_ctor_get(v_x_3066_, 0);
lean_inc(v_val_3068_);
lean_dec_ref_known(v_x_3066_, 1);
v_cwd_3069_ = lean_ctor_get(v_val_3068_, 0);
lean_inc(v_cwd_3069_);
v_env_3070_ = lean_ctor_get(v_val_3068_, 1);
lean_inc(v_env_3070_);
v_argv0_3071_ = lean_ctor_get(v_val_3068_, 2);
lean_inc(v_argv0_3071_);
v_stdio_3072_ = lean_ctor_get(v_val_3068_, 3);
lean_inc(v_stdio_3072_);
v_detached_3073_ = lean_ctor_get(v_val_3068_, 4);
lean_inc(v_detached_3073_);
v_uid_3074_ = lean_ctor_get(v_val_3068_, 5);
lean_inc(v_uid_3074_);
v_gid_3075_ = lean_ctor_get(v_val_3068_, 6);
lean_inc(v_gid_3075_);
v_serialization_3076_ = lean_ctor_get(v_val_3068_, 7);
lean_inc(v_serialization_3076_);
v_shell_3077_ = lean_ctor_get(v_val_3068_, 8);
lean_inc(v_shell_3077_);
v_windowsVerbatimArguments_3078_ = lean_ctor_get(v_val_3068_, 9);
lean_inc(v_windowsVerbatimArguments_3078_);
v_windowsHide_3079_ = lean_ctor_get(v_val_3068_, 10);
lean_inc(v_windowsHide_3079_);
v_signal_3080_ = lean_ctor_get(v_val_3068_, 11);
lean_inc(v_signal_3080_);
v_timeout_3081_ = lean_ctor_get(v_val_3068_, 12);
lean_inc(v_timeout_3081_);
v_killSignal_3082_ = lean_ctor_get(v_val_3068_, 13);
lean_inc(v_killSignal_3082_);
lean_dec(v_val_3068_);
v___x_3083_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__0));
v___x_3084_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(v_cwd_3069_);
v___x_3085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3083_);
lean_ctor_set(v___x_3085_, 1, v___x_3084_);
v___x_3086_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__1));
v___x_3087_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(v_env_3070_);
v___x_3088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3088_, 0, v___x_3086_);
lean_ctor_set(v___x_3088_, 1, v___x_3087_);
v___x_3089_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__0));
v___x_3090_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_argv0_3071_);
v___x_3091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3089_);
lean_ctor_set(v___x_3091_, 1, v___x_3090_);
v___x_3092_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__1));
v___x_3093_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(v_stdio_3072_);
v___x_3094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3094_, 0, v___x_3092_);
lean_ctor_set(v___x_3094_, 1, v___x_3093_);
v___x_3095_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__2));
v___x_3096_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_detached_3073_);
lean_dec(v_detached_3073_);
v___x_3097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3095_);
lean_ctor_set(v___x_3097_, 1, v___x_3096_);
v___x_3098_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__6));
v___x_3099_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_uid_3074_);
v___x_3100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3098_);
lean_ctor_set(v___x_3100_, 1, v___x_3099_);
v___x_3101_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__7));
v___x_3102_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_gid_3075_);
v___x_3103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3103_, 0, v___x_3101_);
lean_ctor_set(v___x_3103_, 1, v___x_3102_);
v___x_3104_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processSpawnOptions___lam__0___closed__3));
v___x_3105_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_serialization_3076_);
v___x_3106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3106_, 0, v___x_3104_);
lean_ctor_set(v___x_3106_, 1, v___x_3105_);
v___x_3107_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__10));
v___x_3108_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_shell_3077_);
v___x_3109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3107_);
lean_ctor_set(v___x_3109_, 1, v___x_3108_);
v___x_3110_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__9));
v___x_3111_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_3078_);
lean_dec(v_windowsVerbatimArguments_3078_);
v___x_3112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3110_);
lean_ctor_set(v___x_3112_, 1, v___x_3111_);
v___x_3113_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__8));
v___x_3114_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_3079_);
lean_dec(v_windowsHide_3079_);
v___x_3115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3113_);
lean_ctor_set(v___x_3115_, 1, v___x_3114_);
v___x_3116_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__11));
v___x_3117_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_3080_);
lean_dec(v_signal_3080_);
v___x_3118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3116_);
lean_ctor_set(v___x_3118_, 1, v___x_3117_);
v___x_3119_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__3));
v___x_3120_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_timeout_3081_);
v___x_3121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3119_);
lean_ctor_set(v___x_3121_, 1, v___x_3120_);
v___x_3122_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChild__processExecFileOptions___lam__0___closed__5));
v___x_3123_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_3082_);
v___x_3124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3122_);
lean_ctor_set(v___x_3124_, 1, v___x_3123_);
v___x_3125_ = lean_unsigned_to_nat(14u);
v___x_3126_ = lean_mk_empty_array_with_capacity(v___x_3125_);
v___x_3127_ = lean_array_push(v___x_3126_, v___x_3085_);
v___x_3128_ = lean_array_push(v___x_3127_, v___x_3088_);
v___x_3129_ = lean_array_push(v___x_3128_, v___x_3091_);
v___x_3130_ = lean_array_push(v___x_3129_, v___x_3094_);
v___x_3131_ = lean_array_push(v___x_3130_, v___x_3097_);
v___x_3132_ = lean_array_push(v___x_3131_, v___x_3100_);
v___x_3133_ = lean_array_push(v___x_3132_, v___x_3103_);
v___x_3134_ = lean_array_push(v___x_3133_, v___x_3106_);
v___x_3135_ = lean_array_push(v___x_3134_, v___x_3109_);
v___x_3136_ = lean_array_push(v___x_3135_, v___x_3112_);
v___x_3137_ = lean_array_push(v___x_3136_, v___x_3115_);
v___x_3138_ = lean_array_push(v___x_3137_, v___x_3118_);
v___x_3139_ = lean_array_push(v___x_3138_, v___x_3121_);
v___x_3140_ = lean_array_push(v___x_3139_, v___x_3124_);
v___x_3141_ = l_Lasm_JS_Web_Support_fields(v___x_3140_);
lean_dec_ref(v___x_3140_);
return v___x_3141_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn(lean_object* v_command_3149_, lean_object* v_args_3150_, lean_object* v_options_3151_){
_start:
{
uint8_t v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3153_ = 0;
v___x_3154_ = lean_unsigned_to_nat(3u);
v___x_3155_ = ((lean_object*)(l_Lasm_JS_Node_child__process_spawn___closed__1));
v___x_3156_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3156_, 0, v_command_3149_);
v___x_3157_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(v_args_3150_);
v___x_3158_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(v_options_3151_);
v___x_3159_ = lean_mk_empty_array_with_capacity(v___x_3154_);
v___x_3160_ = lean_array_push(v___x_3159_, v___x_3156_);
v___x_3161_ = lean_array_push(v___x_3160_, v___x_3157_);
v___x_3162_ = lean_array_push(v___x_3161_, v___x_3158_);
v___x_3163_ = l_Lasm_JS_Web_Support_args(v___x_3162_);
v___x_3164_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_3155_, v___x_3163_, v___x_3153_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
v_a_3165_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v___x_3164_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3164_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
else
{
lean_object* v_a_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3180_; 
v_a_3173_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3175_ = v___x_3164_;
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_a_3173_);
lean_dec(v___x_3164_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3178_; 
if (v_isShared_3176_ == 0)
{
v___x_3178_ = v___x_3175_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_a_3173_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn___boxed(lean_object* v_command_3181_, lean_object* v_args_3182_, lean_object* v_options_3183_, lean_object* v_a_3184_){
_start:
{
lean_object* v_res_3185_; 
v_res_3185_ = l_Lasm_JS_Node_child__process_spawn(v_command_3181_, v_args_3182_, v_options_3183_);
return v_res_3185_;
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
