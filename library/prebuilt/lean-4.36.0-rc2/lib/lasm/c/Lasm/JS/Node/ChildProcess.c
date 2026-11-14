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
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSRecord___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0(lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx___impl___boxed(lean_object*);
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
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cwd"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "env"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "encoding"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timeout"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "maxBuffer"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "killSignal"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "uid"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gid"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "windowsHide"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "windowsVerbatimArguments"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "shell"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__10_value;
static const lean_string_object l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSExecFileOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSExecFileOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_instToJSExecFileOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___closed__2;
static const lean_closure_object l_Lasm_JS_Node_instToJSExecFileOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___closed__3_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSExecFileOptions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___closed__4_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSExecFileOptions___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___closed__5 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___closed__5_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSExecFileOptions___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___closed__6 = (const lean_object*)&l_Lasm_JS_Node_instToJSExecFileOptions___closed__6_value;
static lean_once_cell_t l_Lasm_JS_Node_instToJSExecFileOptions___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___closed__7;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSExecFileOptions;
static const lean_string_object l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stdout"};
static const lean_object* l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stderr"};
static const lean_object* l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSExecFileResult___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Node_instFromJSExecFileResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instFromJSExecFileResult___closed__0;
static const lean_string_object l_Lasm_JS_Node_instFromJSExecFileResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Node.child_process.ExecFileResult"};
static const lean_object* l_Lasm_JS_Node_instFromJSExecFileResult___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSExecFileResult___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_instFromJSExecFileResult___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instFromJSExecFileResult___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSExecFileResult;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx___impl___boxed(lean_object*);
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
static const lean_string_object l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "argv0"};
static const lean_object* l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stdio"};
static const lean_object* l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "detached"};
static const lean_object* l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "serialization"};
static const lean_object* l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSpawnOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Node_instToJSSpawnOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSSpawnOptions___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSpawnOptions;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Option (Int)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__10_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Node_child__process_spawn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "spawn"};
static const lean_object* l_Lasm_JS_Node_child__process_spawn___closed__1 = (const lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_child__process_spawn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__0_value),((lean_object*)&l_Lasm_JS_Node_child__process_execFile___closed__0_value),((lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_child__process_spawn___closed__2 = (const lean_object*)&l_Lasm_JS_Node_child__process_spawn___closed__2_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx___impl(lean_object* v_x_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_obj_tag_nat(v_x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx___impl___boxed(lean_object* v_x_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx___impl(v_x_29_);
lean_dec_ref(v_x_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(lean_object* v_t_31_, lean_object* v_k_32_){
_start:
{
if (lean_obj_tag(v_t_31_) == 0)
{
double v_value_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_value_33_ = lean_ctor_get_float(v_t_31_, 0);
lean_dec_ref_known(v_t_31_, 0);
v___x_34_ = lean_box_float(v_value_33_);
v___x_35_ = lean_apply_1(v_k_32_, v___x_34_);
return v___x_35_;
}
else
{
lean_object* v_value_36_; lean_object* v___x_37_; 
v_value_36_ = lean_ctor_get(v_t_31_, 0);
lean_inc_ref(v_value_36_);
lean_dec_ref_known(v_t_31_, 1);
v___x_37_ = lean_apply_1(v_k_32_, v_value_36_);
return v___x_37_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(lean_object* v_motive_38_, lean_object* v_ctorIdx_39_, lean_object* v_t_40_, lean_object* v_h_41_, lean_object* v_k_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_40_, v_k_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___boxed(lean_object* v_motive_44_, lean_object* v_ctorIdx_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_k_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(v_motive_44_, v_ctorIdx_45_, v_t_46_, v_h_47_, v_k_48_);
lean_dec(v_ctorIdx_45_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim___redArg(lean_object* v_t_50_, lean_object* v_double_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_50_, v_double_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim(lean_object* v_motive_53_, lean_object* v_t_54_, lean_object* v_h_55_, lean_object* v_double_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_54_, v_double_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim___redArg(lean_object* v_t_58_, lean_object* v_domString_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_58_, v_domString_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim(lean_object* v_motive_61_, lean_object* v_t_62_, lean_object* v_h_63_, lean_object* v_domString_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_62_, v_domString_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMString___lam__0(lean_object* v_x_66_){
_start:
{
if (lean_obj_tag(v_x_66_) == 0)
{
double v_value_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_74_; 
v_value_67_ = lean_ctor_get_float(v_x_66_, 0);
v_isSharedCheck_74_ = !lean_is_exclusive(v_x_66_);
if (v_isSharedCheck_74_ == 0)
{
v___x_69_ = v_x_66_;
v_isShared_70_ = v_isSharedCheck_74_;
goto v_resetjp_68_;
}
else
{
lean_dec(v_x_66_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_74_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_72_; 
if (v_isShared_70_ == 0)
{
lean_ctor_set_tag(v___x_69_, 3);
v___x_72_ = v___x_69_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_73_, 0, v_value_67_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
return v___x_72_;
}
}
}
else
{
lean_object* v_value_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_82_; 
v_value_75_ = lean_ctor_get(v_x_66_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v_x_66_);
if (v_isSharedCheck_82_ == 0)
{
v___x_77_ = v_x_66_;
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_value_75_);
lean_dec(v_x_66_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_80_; 
if (v_isShared_78_ == 0)
{
lean_ctor_set_tag(v___x_77_, 4);
v___x_80_ = v___x_77_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_value_75_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(double v_value_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_86_, 0, v_value_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0___boxed(lean_object* v_value_87_){
_start:
{
double v_value_boxed_88_; lean_object* v_res_89_; 
v_value_boxed_88_ = lean_unbox_float(v_value_87_);
lean_dec_ref(v_value_87_);
v_res_89_ = l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(v_value_boxed_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___lam__0(lean_object* v_value_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_93_, 0, v_value_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx___impl(lean_object* v_x_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_obj_tag_nat(v_x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx___impl___boxed(lean_object* v_x_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx___impl(v_x_98_);
lean_dec_ref(v_x_98_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(lean_object* v_t_100_, lean_object* v_k_101_){
_start:
{
if (lean_obj_tag(v_t_100_) == 0)
{
uint8_t v_value_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_value_102_ = lean_ctor_get_uint8(v_t_100_, 0);
lean_dec_ref_known(v_t_100_, 0);
v___x_103_ = lean_box(v_value_102_);
v___x_104_ = lean_apply_1(v_k_101_, v___x_103_);
return v___x_104_;
}
else
{
lean_object* v_value_105_; lean_object* v___x_106_; 
v_value_105_ = lean_ctor_get(v_t_100_, 0);
lean_inc_ref(v_value_105_);
lean_dec_ref_known(v_t_100_, 1);
v___x_106_ = lean_apply_1(v_k_101_, v_value_105_);
return v___x_106_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(lean_object* v_motive_107_, lean_object* v_ctorIdx_108_, lean_object* v_t_109_, lean_object* v_h_110_, lean_object* v_k_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_109_, v_k_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___boxed(lean_object* v_motive_113_, lean_object* v_ctorIdx_114_, lean_object* v_t_115_, lean_object* v_h_116_, lean_object* v_k_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(v_motive_113_, v_ctorIdx_114_, v_t_115_, v_h_116_, v_k_117_);
lean_dec(v_ctorIdx_114_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim___redArg(lean_object* v_t_119_, lean_object* v_boolean_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_119_, v_boolean_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim(lean_object* v_motive_122_, lean_object* v_t_123_, lean_object* v_h_124_, lean_object* v_boolean_125_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_123_, v_boolean_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim___redArg(lean_object* v_t_127_, lean_object* v_domString_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_127_, v_domString_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim(lean_object* v_motive_130_, lean_object* v_t_131_, lean_object* v_h_132_, lean_object* v_domString_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_131_, v_domString_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString___lam__0(lean_object* v_x_135_){
_start:
{
if (lean_obj_tag(v_x_135_) == 0)
{
uint8_t v_value_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
v_value_136_ = lean_ctor_get_uint8(v_x_135_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v_x_135_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v_x_135_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_dec(v_x_135_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
lean_ctor_set_tag(v___x_138_, 2);
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_142_, 0, v_value_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
else
{
lean_object* v_value_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_151_; 
v_value_144_ = lean_ctor_get(v_x_135_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v_x_135_);
if (v_isSharedCheck_151_ == 0)
{
v___x_146_ = v_x_135_;
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_value_144_);
lean_dec(v_x_135_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
lean_ctor_set_tag(v___x_146_, 4);
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_value_144_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(uint8_t v_value_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_155_, 0, v_value_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0___boxed(lean_object* v_value_156_){
_start:
{
uint8_t v_value_boxed_157_; lean_object* v_res_158_; 
v_value_boxed_157_ = lean_unbox(v_value_156_);
v_res_158_ = l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(v_value_boxed_157_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___lam__0(lean_object* v_value_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_162_, 0, v_value_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0(lean_object* v___f_177_, lean_object* v___x_178_, lean_object* v___f_179_, lean_object* v___f_180_, lean_object* v___f_181_, lean_object* v___f_182_, lean_object* v___f_183_, lean_object* v___f_184_, lean_object* v_d_185_){
_start:
{
lean_object* v_cwd_186_; lean_object* v_env_187_; lean_object* v_encoding_188_; lean_object* v_timeout_189_; lean_object* v_maxBuffer_190_; lean_object* v_killSignal_191_; lean_object* v_uid_192_; lean_object* v_gid_193_; lean_object* v_windowsHide_194_; lean_object* v_windowsVerbatimArguments_195_; lean_object* v_shell_196_; lean_object* v_signal_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v_cwd_186_ = lean_ctor_get(v_d_185_, 0);
lean_inc(v_cwd_186_);
v_env_187_ = lean_ctor_get(v_d_185_, 1);
lean_inc(v_env_187_);
v_encoding_188_ = lean_ctor_get(v_d_185_, 2);
lean_inc(v_encoding_188_);
v_timeout_189_ = lean_ctor_get(v_d_185_, 3);
lean_inc(v_timeout_189_);
v_maxBuffer_190_ = lean_ctor_get(v_d_185_, 4);
lean_inc(v_maxBuffer_190_);
v_killSignal_191_ = lean_ctor_get(v_d_185_, 5);
lean_inc(v_killSignal_191_);
v_uid_192_ = lean_ctor_get(v_d_185_, 6);
lean_inc(v_uid_192_);
v_gid_193_ = lean_ctor_get(v_d_185_, 7);
lean_inc(v_gid_193_);
v_windowsHide_194_ = lean_ctor_get(v_d_185_, 8);
lean_inc(v_windowsHide_194_);
v_windowsVerbatimArguments_195_ = lean_ctor_get(v_d_185_, 9);
lean_inc(v_windowsVerbatimArguments_195_);
v_shell_196_ = lean_ctor_get(v_d_185_, 10);
lean_inc(v_shell_196_);
v_signal_197_ = lean_ctor_get(v_d_185_, 11);
lean_inc(v_signal_197_);
lean_dec_ref(v_d_185_);
v___x_198_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__0));
v___x_199_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_177_, v_cwd_186_);
v___x_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_198_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__1));
v___x_202_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_178_, v_env_187_);
v___x_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_201_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
v___x_204_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__2));
v___x_205_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_179_, v_encoding_188_);
v___x_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_204_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__3));
lean_inc_ref_n(v___f_180_, 3);
v___x_208_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_180_, v_timeout_189_);
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__4));
v___x_211_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_180_, v_maxBuffer_190_);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_210_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__5));
v___x_214_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_181_, v_killSignal_191_);
v___x_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__6));
v___x_217_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_180_, v_uid_192_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__7));
v___x_220_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_180_, v_gid_193_);
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__8));
lean_inc_ref(v___f_182_);
v___x_223_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_182_, v_windowsHide_194_);
v___x_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__9));
v___x_226_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_182_, v_windowsVerbatimArguments_195_);
v___x_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_225_);
lean_ctor_set(v___x_227_, 1, v___x_226_);
v___x_228_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__10));
v___x_229_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_183_, v_shell_196_);
v___x_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_228_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__11));
v___x_232_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_184_, v_signal_197_);
v___x_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
v___x_234_ = lean_unsigned_to_nat(12u);
v___x_235_ = lean_mk_empty_array_with_capacity(v___x_234_);
v___x_236_ = lean_array_push(v___x_235_, v___x_200_);
v___x_237_ = lean_array_push(v___x_236_, v___x_203_);
v___x_238_ = lean_array_push(v___x_237_, v___x_206_);
v___x_239_ = lean_array_push(v___x_238_, v___x_209_);
v___x_240_ = lean_array_push(v___x_239_, v___x_212_);
v___x_241_ = lean_array_push(v___x_240_, v___x_215_);
v___x_242_ = lean_array_push(v___x_241_, v___x_218_);
v___x_243_ = lean_array_push(v___x_242_, v___x_221_);
v___x_244_ = lean_array_push(v___x_243_, v___x_224_);
v___x_245_ = lean_array_push(v___x_244_, v___x_227_);
v___x_246_ = lean_array_push(v___x_245_, v___x_230_);
v___x_247_ = lean_array_push(v___x_246_, v___x_233_);
v___x_248_ = l_Lasm_JS_Web_Support_fields(v___x_247_);
lean_dec_ref(v___x_247_);
return v___x_248_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSExecFileOptions___closed__2(void){
_start:
{
lean_object* v___f_251_; lean_object* v___x_252_; 
v___f_251_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__1));
v___x_252_ = l_Lasm_JS_Web_instToJSRecord___redArg(v___f_251_);
return v___x_252_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSExecFileOptions___closed__7(void){
_start:
{
lean_object* v___f_257_; lean_object* v___f_258_; lean_object* v___f_259_; lean_object* v___f_260_; lean_object* v___f_261_; lean_object* v___f_262_; lean_object* v___x_263_; lean_object* v___f_264_; lean_object* v___f_265_; 
v___f_257_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__6));
v___f_258_ = ((lean_object*)(l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0));
v___f_259_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__5));
v___f_260_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__4));
v___f_261_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__3));
v___f_262_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__1));
v___x_263_ = lean_obj_once(&l_Lasm_JS_Node_instToJSExecFileOptions___closed__2, &l_Lasm_JS_Node_instToJSExecFileOptions___closed__2_once, _init_l_Lasm_JS_Node_instToJSExecFileOptions___closed__2);
v___f_264_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__0));
v___f_265_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0), 9, 8);
lean_closure_set(v___f_265_, 0, v___f_264_);
lean_closure_set(v___f_265_, 1, v___x_263_);
lean_closure_set(v___f_265_, 2, v___f_262_);
lean_closure_set(v___f_265_, 3, v___f_261_);
lean_closure_set(v___f_265_, 4, v___f_260_);
lean_closure_set(v___f_265_, 5, v___f_259_);
lean_closure_set(v___f_265_, 6, v___f_258_);
lean_closure_set(v___f_265_, 7, v___f_257_);
return v___f_265_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSExecFileOptions(void){
_start:
{
lean_object* v___f_266_; 
v___f_266_ = lean_obj_once(&l_Lasm_JS_Node_instToJSExecFileOptions___closed__7, &l_Lasm_JS_Node_instToJSExecFileOptions___closed__7_once, _init_l_Lasm_JS_Node_instToJSExecFileOptions___closed__7);
return v___f_266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSExecFileResult___lam__0(lean_object* v___x_269_, lean_object* v_d_270_){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__0));
lean_inc_ref(v___x_269_);
v___x_272_ = l_Lasm_JS_readField___redArg(v___x_269_, v_d_270_, v___x_271_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
lean_dec_ref(v___x_269_);
v_a_273_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_272_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_272_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v_a_281_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_272_, 1);
v___x_282_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__1));
v___x_283_ = l_Lasm_JS_readField___redArg(v___x_269_, v_d_270_, v___x_282_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_291_; 
lean_dec(v_a_281_);
v_a_284_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_291_ == 0)
{
v___x_286_ = v___x_283_;
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___x_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_289_; 
if (v_isShared_287_ == 0)
{
v___x_289_ = v___x_286_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_a_284_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_300_; 
v_a_292_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_300_ == 0)
{
v___x_294_ = v___x_283_;
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_283_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v_a_281_);
lean_ctor_set(v___x_296_, 1, v_a_292_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 0, v___x_296_);
v___x_298_ = v___x_294_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_296_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___boxed(lean_object* v___x_301_, lean_object* v_d_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lasm_JS_Node_instFromJSExecFileResult___lam__0(v___x_301_, v_d_302_);
lean_dec(v_d_302_);
return v_res_303_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSExecFileResult___closed__0(void){
_start:
{
lean_object* v___x_304_; lean_object* v___f_305_; 
v___x_304_ = l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array;
v___f_305_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___boxed), 2, 1);
lean_closure_set(v___f_305_, 0, v___x_304_);
return v___f_305_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSExecFileResult___closed__2(void){
_start:
{
uint8_t v___x_307_; lean_object* v___x_308_; lean_object* v___f_309_; lean_object* v___x_310_; 
v___x_307_ = 0;
v___x_308_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___closed__1));
v___f_309_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSExecFileResult___closed__0, &l_Lasm_JS_Node_instFromJSExecFileResult___closed__0_once, _init_l_Lasm_JS_Node_instFromJSExecFileResult___closed__0);
v___x_310_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_310_, 0, v___f_309_);
lean_ctor_set(v___x_310_, 1, v___x_308_);
lean_ctor_set_uint8(v___x_310_, sizeof(void*)*2, v___x_307_);
return v___x_310_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSExecFileResult(void){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSExecFileResult___closed__2, &l_Lasm_JS_Node_instFromJSExecFileResult___closed__2_once, _init_l_Lasm_JS_Node_instFromJSExecFileResult___closed__2);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx___impl(lean_object* v_x_312_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = lean_obj_tag_nat(v_x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx___impl___boxed(lean_object* v_x_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx___impl(v_x_314_);
lean_dec_ref(v_x_314_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(lean_object* v_t_316_, lean_object* v_k_317_){
_start:
{
lean_object* v_value_318_; lean_object* v___x_319_; 
v_value_318_ = lean_ctor_get(v_t_316_, 0);
lean_inc_ref(v_value_318_);
lean_dec_ref(v_t_316_);
v___x_319_ = lean_apply_1(v_k_317_, v_value_318_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim(lean_object* v_motive_320_, lean_object* v_ctorIdx_321_, lean_object* v_t_322_, lean_object* v_h_323_, lean_object* v_k_324_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_322_, v_k_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___boxed(lean_object* v_motive_326_, lean_object* v_ctorIdx_327_, lean_object* v_t_328_, lean_object* v_h_329_, lean_object* v_k_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim(v_motive_326_, v_ctorIdx_327_, v_t_328_, v_h_329_, v_k_330_);
lean_dec(v_ctorIdx_327_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim___redArg(lean_object* v_t_332_, lean_object* v_sequence_333_){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_332_, v_sequence_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim(lean_object* v_motive_335_, lean_object* v_t_336_, lean_object* v_h_337_, lean_object* v_sequence_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_336_, v_sequence_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim___redArg(lean_object* v_t_340_, lean_object* v_domString_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_340_, v_domString_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim(lean_object* v_motive_343_, lean_object* v_t_344_, lean_object* v_h_345_, lean_object* v_domString_346_){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_344_, v_domString_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0(lean_object* v_x_348_){
_start:
{
lean_inc(v_x_348_);
return v_x_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0___boxed(lean_object* v_x_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0(v_x_349_);
lean_dec(v_x_349_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1(lean_object* v___f_370_, lean_object* v_x_371_){
_start:
{
if (lean_obj_tag(v_x_371_) == 0)
{
lean_object* v_value_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_383_; 
v_value_372_ = lean_ctor_get(v_x_371_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v_x_371_);
if (v_isSharedCheck_383_ == 0)
{
v___x_374_ = v_x_371_;
v_isShared_375_ = v_isSharedCheck_383_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_value_372_);
lean_dec(v_x_371_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_383_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_376_; size_t v_sz_377_; size_t v___x_378_; lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_376_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__9));
v_sz_377_ = lean_array_size(v_value_372_);
v___x_378_ = ((size_t)0ULL);
v___x_379_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_376_, v___f_370_, v_sz_377_, v___x_378_, v_value_372_);
if (v_isShared_375_ == 0)
{
lean_ctor_set_tag(v___x_374_, 7);
lean_ctor_set(v___x_374_, 0, v___x_379_);
v___x_381_ = v___x_374_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
else
{
lean_object* v_value_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
lean_dec_ref(v___f_370_);
v_value_384_ = lean_ctor_get(v_x_371_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v_x_371_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v_x_371_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_value_384_);
lean_dec(v_x_371_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
lean_ctor_set_tag(v___x_386_, 4);
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_value_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString___lam__0(lean_object* v_value_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_397_, 0, v_value_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString___lam__0(lean_object* v_value_400_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_401_, 0, v_value_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSpawnOptions___lam__0(lean_object* v___f_408_, lean_object* v___x_409_, lean_object* v___f_410_, lean_object* v___x_411_, lean_object* v___f_412_, lean_object* v___f_413_, lean_object* v___f_414_, lean_object* v___f_415_, lean_object* v___f_416_, lean_object* v_d_417_){
_start:
{
lean_object* v_cwd_418_; lean_object* v_env_419_; lean_object* v_argv0_420_; lean_object* v_stdio_421_; lean_object* v_detached_422_; lean_object* v_uid_423_; lean_object* v_gid_424_; lean_object* v_serialization_425_; lean_object* v_shell_426_; lean_object* v_windowsVerbatimArguments_427_; lean_object* v_windowsHide_428_; lean_object* v_signal_429_; lean_object* v_timeout_430_; lean_object* v_killSignal_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v_cwd_418_ = lean_ctor_get(v_d_417_, 0);
lean_inc(v_cwd_418_);
v_env_419_ = lean_ctor_get(v_d_417_, 1);
lean_inc(v_env_419_);
v_argv0_420_ = lean_ctor_get(v_d_417_, 2);
lean_inc(v_argv0_420_);
v_stdio_421_ = lean_ctor_get(v_d_417_, 3);
lean_inc(v_stdio_421_);
v_detached_422_ = lean_ctor_get(v_d_417_, 4);
lean_inc(v_detached_422_);
v_uid_423_ = lean_ctor_get(v_d_417_, 5);
lean_inc(v_uid_423_);
v_gid_424_ = lean_ctor_get(v_d_417_, 6);
lean_inc(v_gid_424_);
v_serialization_425_ = lean_ctor_get(v_d_417_, 7);
lean_inc(v_serialization_425_);
v_shell_426_ = lean_ctor_get(v_d_417_, 8);
lean_inc(v_shell_426_);
v_windowsVerbatimArguments_427_ = lean_ctor_get(v_d_417_, 9);
lean_inc(v_windowsVerbatimArguments_427_);
v_windowsHide_428_ = lean_ctor_get(v_d_417_, 10);
lean_inc(v_windowsHide_428_);
v_signal_429_ = lean_ctor_get(v_d_417_, 11);
lean_inc(v_signal_429_);
v_timeout_430_ = lean_ctor_get(v_d_417_, 12);
lean_inc(v_timeout_430_);
v_killSignal_431_ = lean_ctor_get(v_d_417_, 13);
lean_inc(v_killSignal_431_);
lean_dec_ref(v_d_417_);
v___x_432_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__0));
v___x_433_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_408_, v_cwd_418_);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_432_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v___x_435_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__1));
v___x_436_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_409_, v_env_419_);
v___x_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__0));
lean_inc_ref(v___f_410_);
v___x_439_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_410_, v_argv0_420_);
v___x_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_438_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__1));
v___x_442_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_411_, v_stdio_421_);
v___x_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_441_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
v___x_444_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__2));
lean_inc_ref_n(v___f_412_, 2);
v___x_445_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_412_, v_detached_422_);
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_444_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
v___x_447_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__6));
lean_inc_ref_n(v___f_413_, 2);
v___x_448_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_413_, v_uid_423_);
v___x_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_449_, 0, v___x_447_);
lean_ctor_set(v___x_449_, 1, v___x_448_);
v___x_450_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__7));
v___x_451_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_413_, v_gid_424_);
v___x_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_450_);
lean_ctor_set(v___x_452_, 1, v___x_451_);
v___x_453_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__3));
v___x_454_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_410_, v_serialization_425_);
v___x_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_453_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
v___x_456_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__10));
v___x_457_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_414_, v_shell_426_);
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_456_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___x_459_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__9));
v___x_460_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_412_, v_windowsVerbatimArguments_427_);
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_459_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
v___x_462_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__8));
v___x_463_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_412_, v_windowsHide_428_);
v___x_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__11));
v___x_466_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_415_, v_signal_429_);
v___x_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_467_, 0, v___x_465_);
lean_ctor_set(v___x_467_, 1, v___x_466_);
v___x_468_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__3));
v___x_469_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_413_, v_timeout_430_);
v___x_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_468_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__5));
v___x_472_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_416_, v_killSignal_431_);
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = lean_unsigned_to_nat(14u);
v___x_475_ = lean_mk_empty_array_with_capacity(v___x_474_);
v___x_476_ = lean_array_push(v___x_475_, v___x_434_);
v___x_477_ = lean_array_push(v___x_476_, v___x_437_);
v___x_478_ = lean_array_push(v___x_477_, v___x_440_);
v___x_479_ = lean_array_push(v___x_478_, v___x_443_);
v___x_480_ = lean_array_push(v___x_479_, v___x_446_);
v___x_481_ = lean_array_push(v___x_480_, v___x_449_);
v___x_482_ = lean_array_push(v___x_481_, v___x_452_);
v___x_483_ = lean_array_push(v___x_482_, v___x_455_);
v___x_484_ = lean_array_push(v___x_483_, v___x_458_);
v___x_485_ = lean_array_push(v___x_484_, v___x_461_);
v___x_486_ = lean_array_push(v___x_485_, v___x_464_);
v___x_487_ = lean_array_push(v___x_486_, v___x_467_);
v___x_488_ = lean_array_push(v___x_487_, v___x_470_);
v___x_489_ = lean_array_push(v___x_488_, v___x_473_);
v___x_490_ = l_Lasm_JS_Web_Support_fields(v___x_489_);
lean_dec_ref(v___x_489_);
return v___x_490_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSSpawnOptions___closed__0(void){
_start:
{
lean_object* v___f_491_; lean_object* v___f_492_; lean_object* v___f_493_; lean_object* v___f_494_; lean_object* v___f_495_; lean_object* v___x_496_; lean_object* v___f_497_; lean_object* v___x_498_; lean_object* v___f_499_; lean_object* v___f_500_; 
v___f_491_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__4));
v___f_492_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__6));
v___f_493_ = ((lean_object*)(l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0));
v___f_494_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__3));
v___f_495_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__5));
v___x_496_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString));
v___f_497_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__1));
v___x_498_ = lean_obj_once(&l_Lasm_JS_Node_instToJSExecFileOptions___closed__2, &l_Lasm_JS_Node_instToJSExecFileOptions___closed__2_once, _init_l_Lasm_JS_Node_instToJSExecFileOptions___closed__2);
v___f_499_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__0));
v___f_500_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0), 10, 9);
lean_closure_set(v___f_500_, 0, v___f_499_);
lean_closure_set(v___f_500_, 1, v___x_498_);
lean_closure_set(v___f_500_, 2, v___f_497_);
lean_closure_set(v___f_500_, 3, v___x_496_);
lean_closure_set(v___f_500_, 4, v___f_495_);
lean_closure_set(v___f_500_, 5, v___f_494_);
lean_closure_set(v___f_500_, 6, v___f_493_);
lean_closure_set(v___f_500_, 7, v___f_492_);
lean_closure_set(v___f_500_, 8, v___f_491_);
return v___f_500_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSSpawnOptions(void){
_start:
{
lean_object* v___f_501_; 
v___f_501_ = lean_obj_once(&l_Lasm_JS_Node_instToJSSpawnOptions___closed__0, &l_Lasm_JS_Node_instToJSSpawnOptions___closed__0_once, _init_l_Lasm_JS_Node_instToJSSpawnOptions___closed__0);
return v___f_501_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_511_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__8));
v___x_512_ = lean_unsigned_to_nat(46u);
v___x_513_ = lean_unsigned_to_nat(193u);
v___x_514_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__7));
v___x_515_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__6));
v___x_516_ = l_mkPanicMessageWithDecl(v___x_515_, v___x_514_, v___x_513_, v___x_512_, v___x_511_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1(lean_object* v_context_519_, lean_object* v_d_520_){
_start:
{
lean_object* v___y_526_; lean_object* v___y_527_; lean_object* v___y_532_; lean_object* v_received_533_; lean_object* v___y_552_; lean_object* v_a_555_; lean_object* v_a_580_; 
switch(lean_obj_tag(v_d_520_))
{
case 1:
{
goto v___jp_522_;
}
case 0:
{
goto v___jp_522_;
}
default: 
{
switch(lean_obj_tag(v_d_520_))
{
case 3:
{
double v_n_583_; lean_object* v___x_584_; 
v_n_583_ = lean_ctor_get_float(v_d_520_, 0);
v___x_584_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_583_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v___x_585_; 
v___x_585_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__11));
v_a_555_ = v___x_585_;
goto v___jp_554_;
}
else
{
lean_object* v_val_586_; 
lean_dec_ref_known(v_d_520_, 0);
v_val_586_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_val_586_);
lean_dec_ref_known(v___x_584_, 1);
v_a_580_ = v_val_586_;
goto v___jp_579_;
}
}
case 5:
{
lean_object* v_i_587_; 
v_i_587_ = lean_ctor_get(v_d_520_, 0);
lean_inc(v_i_587_);
lean_dec_ref_known(v_d_520_, 1);
v_a_580_ = v_i_587_;
goto v___jp_579_;
}
default: 
{
lean_object* v___x_588_; 
v___x_588_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v_a_555_ = v___x_588_;
goto v___jp_554_;
}
}
}
}
v___jp_522_:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_box(0);
v___x_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
return v___x_524_;
}
v___jp_525_:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_528_ = lean_string_append(v___y_526_, v___y_527_);
lean_dec_ref(v___y_527_);
v___x_529_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
v___x_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
return v___x_530_;
}
v___jp_531_:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_534_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__0));
v___x_535_ = lean_string_append(v___x_534_, v_context_519_);
v___x_536_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__1));
v___x_537_ = lean_string_append(v___x_535_, v___x_536_);
v___x_538_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__2));
v___x_539_ = lean_string_append(v___x_537_, v___x_538_);
v___x_540_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__3));
v___x_541_ = lean_string_append(v___x_539_, v___x_540_);
v___x_542_ = lean_string_append(v___x_541_, v_received_533_);
lean_dec_ref(v_received_533_);
v___x_543_ = lean_string_utf8_byte_size(v___y_532_);
v___x_544_ = lean_unsigned_to_nat(0u);
v___x_545_ = lean_nat_dec_eq(v___x_543_, v___x_544_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_546_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__4));
v___x_547_ = lean_string_append(v___x_546_, v___y_532_);
v___x_548_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__5));
v___x_549_ = lean_string_append(v___x_547_, v___x_548_);
v___y_526_ = v___x_542_;
v___y_527_ = v___x_549_;
goto v___jp_525_;
}
else
{
lean_object* v___x_550_; 
v___x_550_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___y_526_ = v___x_542_;
v___y_527_ = v___x_550_;
goto v___jp_525_;
}
}
v___jp_551_:
{
lean_object* v___x_553_; 
v___x_553_ = l_Lasm_JS_Data_describe(v_d_520_);
v___y_532_ = v___y_552_;
v_received_533_ = v___x_553_;
goto v___jp_531_;
}
v___jp_554_:
{
if (lean_obj_tag(v_d_520_) == 9)
{
lean_object* v_value_556_; lean_object* v_description_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v_value_556_ = lean_ctor_get(v_d_520_, 0);
v_description_557_ = lean_ctor_get(v_d_520_, 1);
v___x_558_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_559_ = lean_string_dec_eq(v_description_557_, v___x_558_);
if (v___x_559_ == 0)
{
v___y_552_ = v_a_555_;
goto v___jp_551_;
}
else
{
lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_576_; 
lean_inc(v_value_556_);
v_isSharedCheck_576_ = !lean_is_exclusive(v_d_520_);
if (v_isSharedCheck_576_ == 0)
{
lean_object* v_unused_577_; lean_object* v_unused_578_; 
v_unused_577_ = lean_ctor_get(v_d_520_, 1);
lean_dec(v_unused_577_);
v_unused_578_ = lean_ctor_get(v_d_520_, 0);
lean_dec(v_unused_578_);
v___x_561_ = v_d_520_;
v_isShared_562_ = v_isSharedCheck_576_;
goto v_resetjp_560_;
}
else
{
lean_dec(v_d_520_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_576_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
uint32_t v___x_563_; uint64_t v___x_564_; lean_object* v___x_566_; 
v___x_563_ = 206;
v___x_564_ = 0ULL;
lean_inc(v_value_556_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 1, v___x_558_);
v___x_566_ = v___x_561_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_value_556_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v___x_558_);
v___x_566_ = v_reuseFailAlloc_575_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
uint32_t v___x_567_; lean_object* v___x_568_; 
v___x_567_ = lasm_js_value_handle(v_value_556_);
lean_dec(v_value_556_);
v___x_568_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_563_, v___x_564_, v___x_566_, v___x_567_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; uint8_t v___x_570_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_568_, 1);
v___x_570_ = lean_string_validate_utf8(v_a_569_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; lean_object* v___x_572_; 
lean_dec(v_a_569_);
v___x_571_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9);
v___x_572_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_571_);
v___y_532_ = v_a_555_;
v_received_533_ = v___x_572_;
goto v___jp_531_;
}
else
{
lean_object* v___x_573_; 
v___x_573_ = lean_string_from_utf8_unchecked(v_a_569_);
v___y_532_ = v_a_555_;
v_received_533_ = v___x_573_;
goto v___jp_531_;
}
}
else
{
lean_object* v___x_574_; 
lean_dec_ref_known(v___x_568_, 1);
v___x_574_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__10));
v___y_532_ = v_a_555_;
v_received_533_ = v___x_574_;
goto v___jp_531_;
}
}
}
}
}
else
{
v___y_552_ = v_a_555_;
goto v___jp_551_;
}
}
v___jp_579_:
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_581_, 0, v_a_580_);
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___boxed(lean_object* v_context_589_, lean_object* v_d_590_, lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1(v_context_589_, v_d_590_);
lean_dec_ref(v_context_589_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(lean_object* v_context_593_, lean_object* v_bytes_594_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_594_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v_a_597_; lean_object* v___x_598_; 
v_a_597_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_a_597_);
lean_dec_ref_known(v___x_596_, 1);
v___x_598_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1(v_context_593_, v_a_597_);
return v___x_598_;
}
else
{
lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_606_; 
v_a_599_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_606_ == 0)
{
v___x_601_ = v___x_596_;
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___x_596_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_604_; 
if (v_isShared_602_ == 0)
{
v___x_604_ = v___x_601_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_a_599_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0___boxed(lean_object* v_context_607_, lean_object* v_bytes_608_, lean_object* v_a_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v_context_607_, v_bytes_608_);
lean_dec_ref(v_bytes_608_);
lean_dec_ref(v_context_607_);
return v_res_610_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0(void){
_start:
{
uint8_t v___x_611_; uint64_t v___x_612_; 
v___x_611_ = 0;
v___x_612_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(lean_object* v_o_614_, lean_object* v_key_615_){
_start:
{
lean_object* v_k_617_; lean_object* v___x_618_; 
v_k_617_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_617_, 0, v_key_615_);
lean_inc_ref(v_k_617_);
v___x_618_ = l_Lasm_JS_Wire_encodeIO(v_k_617_);
if (lean_obj_tag(v___x_618_) == 0)
{
lean_object* v_a_619_; uint32_t v___x_620_; uint32_t v___x_621_; uint64_t v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v_a_619_ = lean_ctor_get(v___x_618_, 0);
lean_inc(v_a_619_);
lean_dec_ref_known(v___x_618_, 1);
v___x_620_ = 203;
v___x_621_ = lasm_js_value_handle(v_o_614_);
v___x_622_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_623_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_624_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_624_, 0, v_o_614_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = lean_unsigned_to_nat(2u);
v___x_626_ = lean_mk_empty_array_with_capacity(v___x_625_);
lean_inc_ref(v_k_617_);
v___x_627_ = lean_array_push(v___x_626_, v_k_617_);
v___x_628_ = lean_array_push(v___x_627_, v___x_624_);
v___x_629_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
v___x_630_ = lasm_js_call(v___x_620_, v___x_621_, v___x_622_, v_a_619_, v___x_629_);
lean_dec_ref_known(v___x_629_, 1);
lean_dec(v_a_619_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v___x_630_, 1);
v___x_632_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_633_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_617_);
v___x_634_ = lean_string_append(v___x_632_, v___x_633_);
lean_dec_ref(v___x_633_);
v___x_635_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v___x_634_, v_a_631_);
lean_dec(v_a_631_);
lean_dec_ref(v___x_634_);
return v___x_635_;
}
else
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
lean_dec_ref_known(v_k_617_, 1);
v_a_636_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_630_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_630_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
lean_dec_ref_known(v_k_617_, 1);
lean_dec(v_o_614_);
v_a_644_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_618_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_618_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___boxed(lean_object* v_o_652_, lean_object* v_key_653_, lean_object* v_a_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_o_652_, v_key_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode(lean_object* v_self_657_){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_exitCode___closed__0));
v___x_660_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_657_, v___x_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode___boxed(lean_object* v_self_661_, lean_object* v_a_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l_Lasm_JS_Node_ChildProcess_exitCode(v_self_661_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed(lean_object* v_self_665_){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_killed___closed__0));
v___x_668_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_665_, v___x_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed___boxed(lean_object* v_self_669_, lean_object* v_a_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_Lasm_JS_Node_ChildProcess_killed(v_self_669_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid(lean_object* v_self_673_){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_675_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_pid___closed__0));
v___x_676_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_673_, v___x_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid___boxed(lean_object* v_self_677_, lean_object* v_a_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lasm_JS_Node_ChildProcess_pid(v_self_677_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(lean_object* v_o_680_, lean_object* v_key_681_){
_start:
{
lean_object* v_k_683_; lean_object* v___x_684_; 
v_k_683_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_683_, 0, v_key_681_);
lean_inc_ref(v_k_683_);
v___x_684_ = l_Lasm_JS_Wire_encodeIO(v_k_683_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; uint32_t v___x_686_; uint32_t v___x_687_; uint64_t v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc(v_a_685_);
lean_dec_ref_known(v___x_684_, 1);
v___x_686_ = 203;
v___x_687_ = lasm_js_value_handle(v_o_680_);
v___x_688_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_689_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_690_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_690_, 0, v_o_680_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v___x_691_ = lean_unsigned_to_nat(2u);
v___x_692_ = lean_mk_empty_array_with_capacity(v___x_691_);
lean_inc_ref(v_k_683_);
v___x_693_ = lean_array_push(v___x_692_, v_k_683_);
v___x_694_ = lean_array_push(v___x_693_, v___x_690_);
v___x_695_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
v___x_696_ = lasm_js_call(v___x_686_, v___x_687_, v___x_688_, v_a_685_, v___x_695_);
lean_dec_ref_known(v___x_695_, 1);
lean_dec(v_a_685_);
if (lean_obj_tag(v___x_696_) == 0)
{
lean_object* v_a_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v_a_697_ = lean_ctor_get(v___x_696_, 0);
lean_inc(v_a_697_);
lean_dec_ref_known(v___x_696_, 1);
v___x_698_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_699_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_683_);
v___x_700_ = lean_string_append(v___x_698_, v___x_699_);
lean_dec_ref(v___x_699_);
v___x_701_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_700_, v_a_697_);
lean_dec(v_a_697_);
lean_dec_ref(v___x_700_);
return v___x_701_;
}
else
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_709_; 
lean_dec_ref_known(v_k_683_, 1);
v_a_702_ = lean_ctor_get(v___x_696_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_709_ == 0)
{
v___x_704_ = v___x_696_;
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_696_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_705_ == 0)
{
v___x_707_ = v___x_704_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_a_702_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_717_; 
lean_dec_ref_known(v_k_683_, 1);
lean_dec(v_o_680_);
v_a_710_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_717_ == 0)
{
v___x_712_ = v___x_684_;
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_684_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_715_; 
if (v_isShared_713_ == 0)
{
v___x_715_ = v___x_712_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_a_710_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0___boxed(lean_object* v_o_718_, lean_object* v_key_719_, lean_object* v_a_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(v_o_718_, v_key_719_);
return v_res_721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode(lean_object* v_self_723_){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_signalCode___closed__0));
v___x_726_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(v_self_723_, v___x_725_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode___boxed(lean_object* v_self_727_, lean_object* v_a_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lasm_JS_Node_ChildProcess_signalCode(v_self_727_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(lean_object* v_context_731_, lean_object* v_d_732_){
_start:
{
lean_object* v_received_738_; 
switch(lean_obj_tag(v_d_732_))
{
case 1:
{
goto v___jp_734_;
}
case 0:
{
goto v___jp_734_;
}
default: 
{
if (lean_obj_tag(v_d_732_) == 9)
{
lean_object* v_value_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v_value_752_ = lean_ctor_get(v_d_732_, 0);
lean_inc(v_value_752_);
lean_dec_ref_known(v_d_732_, 2);
v___x_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_753_, 0, v_value_752_);
v___x_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
return v___x_754_;
}
else
{
if (lean_obj_tag(v_d_732_) == 9)
{
lean_object* v_value_755_; lean_object* v_description_756_; lean_object* v___x_757_; uint8_t v___x_758_; 
v_value_755_ = lean_ctor_get(v_d_732_, 0);
v_description_756_ = lean_ctor_get(v_d_732_, 1);
v___x_757_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_758_ = lean_string_dec_eq(v_description_756_, v___x_757_);
if (v___x_758_ == 0)
{
goto v___jp_750_;
}
else
{
uint32_t v___x_759_; uint64_t v___x_760_; lean_object* v___x_761_; uint32_t v___x_762_; lean_object* v___x_763_; 
lean_inc_n(v_value_755_, 2);
lean_dec_ref_known(v_d_732_, 2);
v___x_759_ = 206;
v___x_760_ = 0ULL;
v___x_761_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_761_, 0, v_value_755_);
lean_ctor_set(v___x_761_, 1, v___x_757_);
v___x_762_ = lasm_js_value_handle(v_value_755_);
lean_dec(v_value_755_);
v___x_763_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_759_, v___x_760_, v___x_761_, v___x_762_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; uint8_t v___x_765_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_a_764_);
lean_dec_ref_known(v___x_763_, 1);
v___x_765_ = lean_string_validate_utf8(v_a_764_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; lean_object* v___x_767_; 
lean_dec(v_a_764_);
v___x_766_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9);
v___x_767_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_766_);
v_received_738_ = v___x_767_;
goto v___jp_737_;
}
else
{
lean_object* v___x_768_; 
v___x_768_ = lean_string_from_utf8_unchecked(v_a_764_);
v_received_738_ = v___x_768_;
goto v___jp_737_;
}
}
else
{
lean_object* v___x_769_; 
lean_dec_ref_known(v___x_763_, 1);
v___x_769_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__10));
v_received_738_ = v___x_769_;
goto v___jp_737_;
}
}
}
else
{
goto v___jp_750_;
}
}
}
}
v___jp_734_:
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = lean_box(0);
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
return v___x_736_;
}
v___jp_737_:
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_739_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__0));
v___x_740_ = lean_string_append(v___x_739_, v_context_731_);
v___x_741_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__1));
v___x_742_ = lean_string_append(v___x_740_, v___x_741_);
v___x_743_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__0));
v___x_744_ = lean_string_append(v___x_742_, v___x_743_);
v___x_745_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__3));
v___x_746_ = lean_string_append(v___x_744_, v___x_745_);
v___x_747_ = lean_string_append(v___x_746_, v_received_738_);
lean_dec_ref(v_received_738_);
v___x_748_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
v___x_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
return v___x_749_;
}
v___jp_750_:
{
lean_object* v___x_751_; 
v___x_751_ = l_Lasm_JS_Data_describe(v_d_732_);
v_received_738_ = v___x_751_;
goto v___jp_737_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___boxed(lean_object* v_context_770_, lean_object* v_d_771_, lean_object* v_a_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_770_, v_d_771_);
lean_dec_ref(v_context_770_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(lean_object* v_context_774_, lean_object* v_bytes_775_){
_start:
{
lean_object* v___x_777_; 
v___x_777_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_775_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v___x_779_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_a_778_);
lean_dec_ref_known(v___x_777_, 1);
v___x_779_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_774_, v_a_778_);
return v___x_779_;
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
v_a_780_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_777_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_777_);
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
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0___boxed(lean_object* v_context_788_, lean_object* v_bytes_789_, lean_object* v_a_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v_context_788_, v_bytes_789_);
lean_dec_ref(v_bytes_789_);
lean_dec_ref(v_context_788_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(lean_object* v_o_792_, lean_object* v_key_793_){
_start:
{
lean_object* v_k_795_; lean_object* v___x_796_; 
v_k_795_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_795_, 0, v_key_793_);
lean_inc_ref(v_k_795_);
v___x_796_ = l_Lasm_JS_Wire_encodeIO(v_k_795_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v_a_797_; uint32_t v___x_798_; uint32_t v___x_799_; uint64_t v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v_a_797_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v___x_796_, 1);
v___x_798_ = 203;
v___x_799_ = lasm_js_value_handle(v_o_792_);
v___x_800_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_801_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_802_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_802_, 0, v_o_792_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v___x_803_ = lean_unsigned_to_nat(2u);
v___x_804_ = lean_mk_empty_array_with_capacity(v___x_803_);
lean_inc_ref(v_k_795_);
v___x_805_ = lean_array_push(v___x_804_, v_k_795_);
v___x_806_ = lean_array_push(v___x_805_, v___x_802_);
v___x_807_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_807_, 0, v___x_806_);
v___x_808_ = lasm_js_call(v___x_798_, v___x_799_, v___x_800_, v_a_797_, v___x_807_);
lean_dec_ref_known(v___x_807_, 1);
lean_dec(v_a_797_);
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v_a_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_a_809_);
lean_dec_ref_known(v___x_808_, 1);
v___x_810_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_811_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_795_);
v___x_812_ = lean_string_append(v___x_810_, v___x_811_);
lean_dec_ref(v___x_811_);
v___x_813_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v___x_812_, v_a_809_);
lean_dec(v_a_809_);
lean_dec_ref(v___x_812_);
return v___x_813_;
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_dec_ref_known(v_k_795_, 1);
v_a_814_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_808_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_808_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_dec_ref_known(v_k_795_, 1);
lean_dec(v_o_792_);
v_a_822_ = lean_ctor_get(v___x_796_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_796_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_796_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0___boxed(lean_object* v_o_830_, lean_object* v_key_831_, lean_object* v_a_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_o_830_, v_key_831_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr(lean_object* v_self_834_){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__1));
v___x_837_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_834_, v___x_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr___boxed(lean_object* v_self_838_, lean_object* v_a_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lasm_JS_Node_ChildProcess_stderr(v_self_838_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(lean_object* v_context_842_, lean_object* v_d_843_){
_start:
{
lean_object* v_received_849_; 
switch(lean_obj_tag(v_d_843_))
{
case 1:
{
goto v___jp_845_;
}
case 0:
{
goto v___jp_845_;
}
default: 
{
if (lean_obj_tag(v_d_843_) == 9)
{
lean_object* v_value_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v_value_863_ = lean_ctor_get(v_d_843_, 0);
lean_inc(v_value_863_);
lean_dec_ref_known(v_d_843_, 2);
v___x_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_864_, 0, v_value_863_);
v___x_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_865_, 0, v___x_864_);
return v___x_865_;
}
else
{
if (lean_obj_tag(v_d_843_) == 9)
{
lean_object* v_value_866_; lean_object* v_description_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v_value_866_ = lean_ctor_get(v_d_843_, 0);
v_description_867_ = lean_ctor_get(v_d_843_, 1);
v___x_868_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_869_ = lean_string_dec_eq(v_description_867_, v___x_868_);
if (v___x_869_ == 0)
{
goto v___jp_861_;
}
else
{
uint32_t v___x_870_; uint64_t v___x_871_; lean_object* v___x_872_; uint32_t v___x_873_; lean_object* v___x_874_; 
lean_inc_n(v_value_866_, 2);
lean_dec_ref_known(v_d_843_, 2);
v___x_870_ = 206;
v___x_871_ = 0ULL;
v___x_872_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_872_, 0, v_value_866_);
lean_ctor_set(v___x_872_, 1, v___x_868_);
v___x_873_ = lasm_js_value_handle(v_value_866_);
lean_dec(v_value_866_);
v___x_874_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_870_, v___x_871_, v___x_872_, v___x_873_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; uint8_t v___x_876_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_874_, 1);
v___x_876_ = lean_string_validate_utf8(v_a_875_);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; lean_object* v___x_878_; 
lean_dec(v_a_875_);
v___x_877_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9);
v___x_878_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_877_);
v_received_849_ = v___x_878_;
goto v___jp_848_;
}
else
{
lean_object* v___x_879_; 
v___x_879_ = lean_string_from_utf8_unchecked(v_a_875_);
v_received_849_ = v___x_879_;
goto v___jp_848_;
}
}
else
{
lean_object* v___x_880_; 
lean_dec_ref_known(v___x_874_, 1);
v___x_880_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__10));
v_received_849_ = v___x_880_;
goto v___jp_848_;
}
}
}
else
{
goto v___jp_861_;
}
}
}
}
v___jp_845_:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = lean_box(0);
v___x_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
return v___x_847_;
}
v___jp_848_:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_850_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__0));
v___x_851_ = lean_string_append(v___x_850_, v_context_842_);
v___x_852_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__1));
v___x_853_ = lean_string_append(v___x_851_, v___x_852_);
v___x_854_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___closed__0));
v___x_855_ = lean_string_append(v___x_853_, v___x_854_);
v___x_856_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__3));
v___x_857_ = lean_string_append(v___x_855_, v___x_856_);
v___x_858_ = lean_string_append(v___x_857_, v_received_849_);
lean_dec_ref(v_received_849_);
v___x_859_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
v___x_860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_860_, 0, v___x_859_);
return v___x_860_;
}
v___jp_861_:
{
lean_object* v___x_862_; 
v___x_862_ = l_Lasm_JS_Data_describe(v_d_843_);
v_received_849_ = v___x_862_;
goto v___jp_848_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___boxed(lean_object* v_context_881_, lean_object* v_d_882_, lean_object* v_a_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_881_, v_d_882_);
lean_dec_ref(v_context_881_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(lean_object* v_context_885_, lean_object* v_bytes_886_){
_start:
{
lean_object* v___x_888_; 
v___x_888_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_886_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_890_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_888_, 1);
v___x_890_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_885_, v_a_889_);
return v___x_890_;
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
v_a_891_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_888_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_888_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0___boxed(lean_object* v_context_899_, lean_object* v_bytes_900_, lean_object* v_a_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v_context_899_, v_bytes_900_);
lean_dec_ref(v_bytes_900_);
lean_dec_ref(v_context_899_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(lean_object* v_o_903_, lean_object* v_key_904_){
_start:
{
lean_object* v_k_906_; lean_object* v___x_907_; 
v_k_906_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_906_, 0, v_key_904_);
lean_inc_ref(v_k_906_);
v___x_907_ = l_Lasm_JS_Wire_encodeIO(v_k_906_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_a_908_; uint32_t v___x_909_; uint32_t v___x_910_; uint64_t v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v_a_908_ = lean_ctor_get(v___x_907_, 0);
lean_inc(v_a_908_);
lean_dec_ref_known(v___x_907_, 1);
v___x_909_ = 203;
v___x_910_ = lasm_js_value_handle(v_o_903_);
v___x_911_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_912_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_913_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_913_, 0, v_o_903_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = lean_unsigned_to_nat(2u);
v___x_915_ = lean_mk_empty_array_with_capacity(v___x_914_);
lean_inc_ref(v_k_906_);
v___x_916_ = lean_array_push(v___x_915_, v_k_906_);
v___x_917_ = lean_array_push(v___x_916_, v___x_913_);
v___x_918_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
v___x_919_ = lasm_js_call(v___x_909_, v___x_910_, v___x_911_, v_a_908_, v___x_918_);
lean_dec_ref_known(v___x_918_, 1);
lean_dec(v_a_908_);
if (lean_obj_tag(v___x_919_) == 0)
{
lean_object* v_a_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_a_920_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_919_, 1);
v___x_921_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_922_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_906_);
v___x_923_ = lean_string_append(v___x_921_, v___x_922_);
lean_dec_ref(v___x_922_);
v___x_924_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v___x_923_, v_a_920_);
lean_dec(v_a_920_);
lean_dec_ref(v___x_923_);
return v___x_924_;
}
else
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
lean_dec_ref_known(v_k_906_, 1);
v_a_925_ = lean_ctor_get(v___x_919_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_919_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_919_);
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
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
lean_dec_ref_known(v_k_906_, 1);
lean_dec(v_o_903_);
v_a_933_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v___x_907_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_907_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_933_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0___boxed(lean_object* v_o_941_, lean_object* v_key_942_, lean_object* v_a_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_o_941_, v_key_942_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin(lean_object* v_self_946_){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_948_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_stdin___closed__0));
v___x_949_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_self_946_, v___x_948_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin___boxed(lean_object* v_self_950_, lean_object* v_a_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lasm_JS_Node_ChildProcess_stdin(v_self_950_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout(lean_object* v_self_953_){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__0));
v___x_956_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_953_, v___x_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout___boxed(lean_object* v_self_957_, lean_object* v_a_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l_Lasm_JS_Node_ChildProcess_stdout(v_self_957_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(lean_object* v_x_960_){
_start:
{
if (lean_obj_tag(v_x_960_) == 0)
{
lean_object* v___x_961_; 
v___x_961_ = lean_box(0);
return v___x_961_;
}
else
{
lean_object* v_val_962_; 
v_val_962_ = lean_ctor_get(v_x_960_, 0);
lean_inc(v_val_962_);
lean_dec_ref_known(v_x_960_, 1);
if (lean_obj_tag(v_val_962_) == 0)
{
double v_value_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
v_value_963_ = lean_ctor_get_float(v_val_962_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v_val_962_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v_val_962_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_dec(v_val_962_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
lean_ctor_set_tag(v___x_965_, 3);
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_969_, 0, v_value_963_);
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
lean_object* v_value_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
v_value_971_ = lean_ctor_get(v_val_962_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v_val_962_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v_val_962_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_value_971_);
lean_dec(v_val_962_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
lean_ctor_set_tag(v___x_973_, 4);
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_value_971_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill(lean_object* v_self_980_, lean_object* v_signal_981_){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_983_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_kill___closed__0));
v___x_984_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(v_signal_981_);
v___x_985_ = lean_unsigned_to_nat(1u);
v___x_986_ = lean_mk_empty_array_with_capacity(v___x_985_);
v___x_987_ = lean_array_push(v___x_986_, v___x_984_);
v___x_988_ = l_Lasm_JS_Web_Support_args(v___x_987_);
v___x_989_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_980_, v___x_983_, v___x_988_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill___boxed(lean_object* v_self_990_, lean_object* v_signal_991_, lean_object* v_a_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_Lasm_JS_Node_ChildProcess_kill(v_self_990_, v_signal_991_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(lean_object* v_x_994_){
_start:
{
if (lean_obj_tag(v_x_994_) == 0)
{
lean_object* v___x_995_; 
v___x_995_ = lean_box(0);
return v___x_995_;
}
else
{
lean_object* v_val_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1006_; 
v_val_996_ = lean_ctor_get(v_x_994_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_x_994_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_998_ = v_x_994_;
v_isShared_999_ = v_isSharedCheck_1006_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_val_996_);
lean_dec(v_x_994_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1006_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
size_t v_sz_1000_; size_t v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1004_; 
v_sz_1000_ = lean_array_size(v_val_996_);
v___x_1001_ = ((size_t)0ULL);
v___x_1002_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_1000_, v___x_1001_, v_val_996_);
if (v_isShared_999_ == 0)
{
lean_ctor_set_tag(v___x_998_, 8);
lean_ctor_set(v___x_998_, 0, v___x_1002_);
v___x_1004_ = v___x_998_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1002_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(lean_object* v_x_1007_){
_start:
{
if (lean_obj_tag(v_x_1007_) == 0)
{
lean_object* v___x_1008_; 
v___x_1008_ = lean_box(0);
return v___x_1008_;
}
else
{
lean_object* v_val_1009_; 
v_val_1009_ = lean_ctor_get(v_x_1007_, 0);
lean_inc(v_val_1009_);
lean_dec_ref_known(v_x_1007_, 1);
if (lean_obj_tag(v_val_1009_) == 0)
{
lean_object* v_value_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
v_value_1010_ = lean_ctor_get(v_val_1009_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_val_1009_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v_val_1009_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_value_1010_);
lean_dec(v_val_1009_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
lean_ctor_set_tag(v___x_1012_, 4);
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_value_1010_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
else
{
lean_object* v_value_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v_value_1018_ = lean_ctor_get(v_val_1009_, 0);
lean_inc(v_value_1018_);
lean_dec_ref_known(v_val_1009_, 1);
v___x_1019_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1020_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1020_, 0, v_value_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
return v___x_1020_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(lean_object* v_x_1021_){
_start:
{
if (lean_obj_tag(v_x_1021_) == 0)
{
lean_object* v___x_1022_; 
v___x_1022_ = lean_box(0);
return v___x_1022_;
}
else
{
lean_object* v_val_1023_; 
v_val_1023_ = lean_ctor_get(v_x_1021_, 0);
lean_inc(v_val_1023_);
lean_dec_ref_known(v_x_1021_, 1);
if (lean_obj_tag(v_val_1023_) == 0)
{
uint8_t v_value_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
v_value_1024_ = lean_ctor_get_uint8(v_val_1023_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v_val_1023_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v_val_1023_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_dec(v_val_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
lean_ctor_set_tag(v___x_1026_, 2);
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1030_, 0, v_value_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
else
{
lean_object* v_value_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
v_value_1032_ = lean_ctor_get(v_val_1023_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v_val_1023_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1034_ = v_val_1023_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_value_1032_);
lean_dec(v_val_1023_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
lean_ctor_set_tag(v___x_1034_, 4);
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_value_1032_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1(lean_object* v_x_1040_){
_start:
{
if (lean_obj_tag(v_x_1040_) == 0)
{
lean_object* v___x_1041_; 
v___x_1041_ = lean_box(0);
return v___x_1041_;
}
else
{
lean_object* v_val_1042_; lean_object* v_cwd_1043_; lean_object* v_env_1044_; lean_object* v_encoding_1045_; lean_object* v_timeout_1046_; lean_object* v_maxBuffer_1047_; lean_object* v_killSignal_1048_; lean_object* v_uid_1049_; lean_object* v_gid_1050_; lean_object* v_windowsHide_1051_; lean_object* v_windowsVerbatimArguments_1052_; lean_object* v_shell_1053_; lean_object* v_signal_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v_val_1042_ = lean_ctor_get(v_x_1040_, 0);
lean_inc(v_val_1042_);
lean_dec_ref_known(v_x_1040_, 1);
v_cwd_1043_ = lean_ctor_get(v_val_1042_, 0);
lean_inc(v_cwd_1043_);
v_env_1044_ = lean_ctor_get(v_val_1042_, 1);
lean_inc(v_env_1044_);
v_encoding_1045_ = lean_ctor_get(v_val_1042_, 2);
lean_inc(v_encoding_1045_);
v_timeout_1046_ = lean_ctor_get(v_val_1042_, 3);
lean_inc(v_timeout_1046_);
v_maxBuffer_1047_ = lean_ctor_get(v_val_1042_, 4);
lean_inc(v_maxBuffer_1047_);
v_killSignal_1048_ = lean_ctor_get(v_val_1042_, 5);
lean_inc(v_killSignal_1048_);
v_uid_1049_ = lean_ctor_get(v_val_1042_, 6);
lean_inc(v_uid_1049_);
v_gid_1050_ = lean_ctor_get(v_val_1042_, 7);
lean_inc(v_gid_1050_);
v_windowsHide_1051_ = lean_ctor_get(v_val_1042_, 8);
lean_inc(v_windowsHide_1051_);
v_windowsVerbatimArguments_1052_ = lean_ctor_get(v_val_1042_, 9);
lean_inc(v_windowsVerbatimArguments_1052_);
v_shell_1053_ = lean_ctor_get(v_val_1042_, 10);
lean_inc(v_shell_1053_);
v_signal_1054_ = lean_ctor_get(v_val_1042_, 11);
lean_inc(v_signal_1054_);
lean_dec(v_val_1042_);
v___x_1055_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__0));
v___x_1056_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(v_cwd_1043_);
v___x_1057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1055_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__1));
v___x_1059_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(v_env_1044_);
v___x_1060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1058_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__2));
v___x_1062_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_1045_);
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1061_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__3));
v___x_1065_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_timeout_1046_);
lean_dec(v_timeout_1046_);
v___x_1066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1064_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
v___x_1067_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__4));
v___x_1068_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_maxBuffer_1047_);
lean_dec(v_maxBuffer_1047_);
v___x_1069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1067_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__5));
v___x_1071_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_1048_);
v___x_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1070_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
v___x_1073_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__6));
v___x_1074_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_uid_1049_);
lean_dec(v_uid_1049_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1073_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__7));
v___x_1077_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_gid_1050_);
lean_dec(v_gid_1050_);
v___x_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1076_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__8));
v___x_1080_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_1051_);
lean_dec(v_windowsHide_1051_);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1079_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__9));
v___x_1083_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_1052_);
lean_dec(v_windowsVerbatimArguments_1052_);
v___x_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1082_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
v___x_1085_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__10));
v___x_1086_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_shell_1053_);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__11));
v___x_1089_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_1054_);
lean_dec(v_signal_1054_);
v___x_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1088_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = lean_unsigned_to_nat(12u);
v___x_1092_ = lean_mk_empty_array_with_capacity(v___x_1091_);
v___x_1093_ = lean_array_push(v___x_1092_, v___x_1057_);
v___x_1094_ = lean_array_push(v___x_1093_, v___x_1060_);
v___x_1095_ = lean_array_push(v___x_1094_, v___x_1063_);
v___x_1096_ = lean_array_push(v___x_1095_, v___x_1066_);
v___x_1097_ = lean_array_push(v___x_1096_, v___x_1069_);
v___x_1098_ = lean_array_push(v___x_1097_, v___x_1072_);
v___x_1099_ = lean_array_push(v___x_1098_, v___x_1075_);
v___x_1100_ = lean_array_push(v___x_1099_, v___x_1078_);
v___x_1101_ = lean_array_push(v___x_1100_, v___x_1081_);
v___x_1102_ = lean_array_push(v___x_1101_, v___x_1084_);
v___x_1103_ = lean_array_push(v___x_1102_, v___x_1087_);
v___x_1104_ = lean_array_push(v___x_1103_, v___x_1090_);
v___x_1105_ = l_Lasm_JS_Web_Support_fields(v___x_1104_);
lean_dec_ref(v___x_1104_);
return v___x_1105_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(lean_object* v_x_1106_){
_start:
{
if (lean_obj_tag(v_x_1106_) == 0)
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_box(0);
return v___x_1107_;
}
else
{
lean_object* v_val_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1118_; 
v_val_1108_ = lean_ctor_get(v_x_1106_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_x_1106_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1110_ = v_x_1106_;
v_isShared_1111_ = v_isSharedCheck_1118_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_val_1108_);
lean_dec(v_x_1106_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1118_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
size_t v_sz_1112_; size_t v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
v_sz_1112_ = lean_array_size(v_val_1108_);
v___x_1113_ = ((size_t)0ULL);
v___x_1114_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_1112_, v___x_1113_, v_val_1108_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set_tag(v___x_1110_, 7);
lean_ctor_set(v___x_1110_, 0, v___x_1114_);
v___x_1116_ = v___x_1110_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1(lean_object* v___f_1128_, lean_object* v_x_1129_){
_start:
{
if (lean_obj_tag(v_x_1129_) == 0)
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1139_; 
lean_dec_ref(v___f_1128_);
v_a_1131_ = lean_ctor_get(v_x_1129_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_x_1129_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1133_ = v_x_1129_;
v_isShared_1134_ = v_isSharedCheck_1139_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v_x_1129_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1139_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
lean_object* v___x_1137_; 
v___x_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
return v___x_1137_;
}
}
}
else
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1165_; 
v_a_1140_ = lean_ctor_get(v_x_1129_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v_x_1129_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1142_ = v_x_1129_;
v_isShared_1143_ = v_isSharedCheck_1165_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v_x_1129_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1165_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
uint8_t v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v_val_1153_; lean_object* v___x_1156_; 
v___x_1144_ = 0;
v___x_1145_ = lean_unsigned_to_nat(1u);
v___x_1146_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__3));
v___x_1147_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1148_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1148_, 0, v_a_1140_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = lean_mk_empty_array_with_capacity(v___x_1145_);
v___x_1150_ = lean_array_push(v___x_1149_, v___x_1148_);
v___x_1151_ = lean_unsigned_to_nat(0u);
v___x_1156_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1146_, v___x_1150_, v___x_1144_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v___x_1159_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1157_);
lean_dec_ref_known(v___x_1156_, 1);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 0, v_a_1157_);
v___x_1159_ = v___x_1142_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1157_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
v_val_1153_ = v___x_1159_;
goto v___jp_1152_;
}
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1163_; 
v_a_1161_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1161_);
lean_dec_ref_known(v___x_1156_, 1);
if (v_isShared_1143_ == 0)
{
lean_ctor_set_tag(v___x_1142_, 0);
lean_ctor_set(v___x_1142_, 0, v_a_1161_);
v___x_1163_ = v___x_1142_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1161_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
v_val_1153_ = v___x_1163_;
goto v___jp_1152_;
}
}
v___jp_1152_:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1154_, 0, v_val_1153_);
v___x_1155_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1151_, v___x_1144_, v___x_1154_, v___f_1128_);
return v___x_1155_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___boxed(lean_object* v___f_1166_, lean_object* v_x_1167_, lean_object* v___y_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1(v___f_1166_, v_x_1167_);
return v_res_1169_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(uint8_t v_await_1170_, uint64_t v_extra_1171_){
_start:
{
uint64_t v___x_1172_; uint64_t v___y_1174_; 
v___x_1172_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
if (v_await_1170_ == 0)
{
uint64_t v___x_1177_; 
v___x_1177_ = 0ULL;
v___y_1174_ = v___x_1177_;
goto v___jp_1173_;
}
else
{
uint64_t v___x_1178_; 
v___x_1178_ = 2ULL;
v___y_1174_ = v___x_1178_;
goto v___jp_1173_;
}
v___jp_1173_:
{
uint64_t v___x_1175_; uint64_t v___x_1176_; 
v___x_1175_ = lean_uint64_lor(v___x_1172_, v___y_1174_);
v___x_1176_ = lean_uint64_lor(v___x_1175_, v_extra_1171_);
return v___x_1176_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6___boxed(lean_object* v_await_1179_, lean_object* v_extra_1180_){
_start:
{
uint8_t v_await_boxed_1181_; uint64_t v_extra_boxed_1182_; uint64_t v_res_1183_; lean_object* v_r_1184_; 
v_await_boxed_1181_ = lean_unbox(v_await_1179_);
v_extra_boxed_1182_ = lean_unbox_uint64(v_extra_1180_);
lean_dec_ref(v_extra_1180_);
v_res_1183_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(v_await_boxed_1181_, v_extra_boxed_1182_);
v_r_1184_ = lean_box_uint64(v_res_1183_);
return v_r_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7(lean_object* v___f_1185_, lean_object* v_a_1186_, uint32_t v_op_1187_, uint64_t v_flags_1188_, lean_object* v_payload_1189_, lean_object* v_x_1190_){
_start:
{
if (lean_obj_tag(v_x_1190_) == 0)
{
lean_object* v___x_1192_; 
lean_dec_ref(v___f_1185_);
v___x_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1192_, 0, v_x_1190_);
return v___x_1192_;
}
else
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1213_; 
v_a_1193_ = lean_ctor_get(v_x_1190_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v_x_1190_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1195_ = v_x_1190_;
v_isShared_1196_ = v_isSharedCheck_1213_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v_x_1190_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1213_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
uint32_t v___x_1197_; lean_object* v___x_1198_; uint8_t v___x_1199_; lean_object* v_val_1201_; lean_object* v___x_1204_; 
v___x_1197_ = 0;
v___x_1198_ = lean_unsigned_to_nat(0u);
v___x_1199_ = 0;
v___x_1204_ = lasm_js_call_into(v_a_1186_, v_op_1187_, v___x_1197_, v_flags_1188_, v_a_1193_, v_payload_1189_);
lean_dec(v_a_1193_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1204_, 1);
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 0, v_a_1205_);
v___x_1207_ = v___x_1195_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1205_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
v_val_1201_ = v___x_1207_;
goto v___jp_1200_;
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; 
v_a_1209_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1204_, 1);
if (v_isShared_1196_ == 0)
{
lean_ctor_set_tag(v___x_1195_, 0);
lean_ctor_set(v___x_1195_, 0, v_a_1209_);
v___x_1211_ = v___x_1195_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
v_val_1201_ = v___x_1211_;
goto v___jp_1200_;
}
}
v___jp_1200_:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1202_, 0, v_val_1201_);
v___x_1203_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1198_, v___x_1199_, v___x_1202_, v___f_1185_);
return v___x_1203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7___boxed(lean_object* v___f_1214_, lean_object* v_a_1215_, lean_object* v_op_1216_, lean_object* v_flags_1217_, lean_object* v_payload_1218_, lean_object* v_x_1219_, lean_object* v___y_1220_){
_start:
{
uint32_t v_op_boxed_1221_; uint64_t v_flags_boxed_1222_; lean_object* v_res_1223_; 
v_op_boxed_1221_ = lean_unbox_uint32(v_op_1216_);
lean_dec(v_op_1216_);
v_flags_boxed_1222_ = lean_unbox_uint64(v_flags_1217_);
lean_dec_ref(v_flags_1217_);
v_res_1223_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7(v___f_1214_, v_a_1215_, v_op_boxed_1221_, v_flags_boxed_1222_, v_payload_1218_, v_x_1219_);
lean_dec(v_payload_1218_);
lean_dec(v_a_1215_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5(lean_object* v___x_1224_, uint8_t v___x_1225_, lean_object* v___f_1226_, lean_object* v_a_1227_, uint32_t v_op_1228_, uint64_t v_flags_1229_, lean_object* v_payload_1230_, lean_object* v_x_1231_){
_start:
{
lean_object* v_val_1234_; 
if (lean_obj_tag(v_x_1231_) == 0)
{
lean_object* v___x_1237_; 
lean_dec_ref(v___f_1226_);
lean_dec(v___x_1224_);
v___x_1237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1237_, 0, v_x_1231_);
return v___x_1237_;
}
else
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1252_; 
v_a_1238_ = lean_ctor_get(v_x_1231_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v_x_1231_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1240_ = v_x_1231_;
v_isShared_1241_ = v_isSharedCheck_1252_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v_x_1231_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1252_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
uint32_t v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = 0;
v___x_1243_ = lasm_js_call_into(v_a_1227_, v_op_1228_, v___x_1242_, v_flags_1229_, v_a_1238_, v_payload_1230_);
lean_dec(v_a_1238_);
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v___x_1246_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_a_1244_);
lean_dec_ref_known(v___x_1243_, 1);
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 0, v_a_1244_);
v___x_1246_ = v___x_1240_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1244_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
v_val_1234_ = v___x_1246_;
goto v___jp_1233_;
}
}
else
{
lean_object* v_a_1248_; lean_object* v___x_1250_; 
v_a_1248_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_a_1248_);
lean_dec_ref_known(v___x_1243_, 1);
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 0);
lean_ctor_set(v___x_1240_, 0, v_a_1248_);
v___x_1250_ = v___x_1240_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1248_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
v_val_1234_ = v___x_1250_;
goto v___jp_1233_;
}
}
}
}
v___jp_1233_:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v_val_1234_);
v___x_1236_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1224_, v___x_1225_, v___x_1235_, v___f_1226_);
return v___x_1236_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5___boxed(lean_object* v___x_1253_, lean_object* v___x_1254_, lean_object* v___f_1255_, lean_object* v_a_1256_, lean_object* v_op_1257_, lean_object* v_flags_1258_, lean_object* v_payload_1259_, lean_object* v_x_1260_, lean_object* v___y_1261_){
_start:
{
uint8_t v___x_2046__boxed_1262_; uint32_t v_op_boxed_1263_; uint64_t v_flags_boxed_1264_; lean_object* v_res_1265_; 
v___x_2046__boxed_1262_ = lean_unbox(v___x_1254_);
v_op_boxed_1263_ = lean_unbox_uint32(v_op_1257_);
lean_dec(v_op_1257_);
v_flags_boxed_1264_ = lean_unbox_uint64(v_flags_1258_);
lean_dec_ref(v_flags_1258_);
v_res_1265_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5(v___x_1253_, v___x_2046__boxed_1262_, v___f_1255_, v_a_1256_, v_op_boxed_1263_, v_flags_boxed_1264_, v_payload_1259_, v_x_1260_);
lean_dec(v_payload_1259_);
lean_dec(v_a_1256_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3(lean_object* v_a_1266_, lean_object* v_x_1267_){
_start:
{
if (lean_obj_tag(v_x_1267_) == 0)
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1277_; 
v_a_1269_ = lean_ctor_get(v_x_1267_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v_x_1267_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1271_ = v_x_1267_;
v_isShared_1272_ = v_isSharedCheck_1277_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v_x_1267_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1277_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1269_);
v___x_1274_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
lean_object* v___x_1275_; 
v___x_1275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
return v___x_1275_;
}
}
}
else
{
lean_object* v___x_1278_; 
lean_dec_ref_known(v_x_1267_, 1);
v___x_1278_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1266_);
return v___x_1278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed(lean_object* v_a_1279_, lean_object* v_x_1280_, lean_object* v___y_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3(v_a_1279_, v_x_1280_);
lean_dec(v_a_1279_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6(lean_object* v_failurePrefix_1283_, uint32_t v_op_1284_, uint64_t v_flags_1285_, lean_object* v_payload_1286_, lean_object* v___f_1287_, lean_object* v___f_1288_, lean_object* v___f_1289_, lean_object* v_x_1290_){
_start:
{
if (lean_obj_tag(v_x_1290_) == 0)
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1300_; 
lean_dec_ref(v___f_1289_);
lean_dec_ref(v___f_1288_);
lean_dec_ref(v___f_1287_);
lean_dec(v_payload_1286_);
v_a_1292_ = lean_ctor_get(v_x_1290_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_x_1290_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1294_ = v_x_1290_;
v_isShared_1295_ = v_isSharedCheck_1300_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v_x_1290_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1300_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1292_);
v___x_1297_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
lean_object* v___x_1298_; 
v___x_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
return v___x_1298_;
}
}
}
else
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1347_; 
v_a_1301_ = lean_ctor_get(v_x_1290_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v_x_1290_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1303_ = v_x_1290_;
v_isShared_1304_ = v_isSharedCheck_1347_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v_x_1290_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1347_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; 
v___x_1305_ = lean_string_utf8_byte_size(v_failurePrefix_1283_);
v___x_1306_ = lean_unsigned_to_nat(0u);
v___x_1307_ = lean_nat_dec_eq(v___x_1305_, v___x_1306_);
if (v___x_1307_ == 0)
{
lean_object* v___f_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___f_1312_; lean_object* v_val_1314_; lean_object* v___x_1319_; 
lean_dec_ref(v___f_1289_);
lean_inc(v_a_1301_);
v___f_1308_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1308_, 0, v_a_1301_);
v___x_1309_ = lean_box(v___x_1307_);
v___x_1310_ = lean_box_uint32(v_op_1284_);
v___x_1311_ = lean_box_uint64(v_flags_1285_);
lean_inc(v_payload_1286_);
v___f_1312_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1312_, 0, v___x_1306_);
lean_closure_set(v___f_1312_, 1, v___x_1309_);
lean_closure_set(v___f_1312_, 2, v___f_1308_);
lean_closure_set(v___f_1312_, 3, v_a_1301_);
lean_closure_set(v___f_1312_, 4, v___x_1310_);
lean_closure_set(v___f_1312_, 5, v___x_1311_);
lean_closure_set(v___f_1312_, 6, v_payload_1286_);
v___x_1319_ = l_Lasm_JS_Wire_encodeIO(v_payload_1286_);
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_object* v_a_1320_; lean_object* v___x_1322_; 
v_a_1320_ = lean_ctor_get(v___x_1319_, 0);
lean_inc(v_a_1320_);
lean_dec_ref_known(v___x_1319_, 1);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v_a_1320_);
v___x_1322_ = v___x_1303_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1320_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
v_val_1314_ = v___x_1322_;
goto v___jp_1313_;
}
}
else
{
lean_object* v_a_1324_; lean_object* v___x_1326_; 
v_a_1324_ = lean_ctor_get(v___x_1319_, 0);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1319_, 1);
if (v_isShared_1304_ == 0)
{
lean_ctor_set_tag(v___x_1303_, 0);
lean_ctor_set(v___x_1303_, 0, v_a_1324_);
v___x_1326_ = v___x_1303_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_a_1324_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
v_val_1314_ = v___x_1326_;
goto v___jp_1313_;
}
}
v___jp_1313_:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1315_, 0, v_val_1314_);
v___x_1316_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1306_, v___x_1307_, v___x_1315_, v___f_1312_);
v___x_1317_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1306_, v___x_1307_, v___x_1316_, v___f_1287_);
v___x_1318_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1306_, v___x_1307_, v___x_1317_, v___f_1288_);
return v___x_1318_;
}
}
else
{
lean_object* v___f_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___f_1331_; uint8_t v___x_1332_; lean_object* v_val_1334_; lean_object* v___x_1338_; 
lean_dec_ref(v___f_1288_);
lean_dec_ref(v___f_1287_);
lean_inc(v_a_1301_);
v___f_1328_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1328_, 0, v_a_1301_);
v___x_1329_ = lean_box_uint32(v_op_1284_);
v___x_1330_ = lean_box_uint64(v_flags_1285_);
lean_inc(v_payload_1286_);
v___f_1331_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1331_, 0, v___f_1328_);
lean_closure_set(v___f_1331_, 1, v_a_1301_);
lean_closure_set(v___f_1331_, 2, v___x_1329_);
lean_closure_set(v___f_1331_, 3, v___x_1330_);
lean_closure_set(v___f_1331_, 4, v_payload_1286_);
v___x_1332_ = 0;
v___x_1338_ = l_Lasm_JS_Wire_encodeIO(v_payload_1286_);
if (lean_obj_tag(v___x_1338_) == 0)
{
lean_object* v_a_1339_; lean_object* v___x_1341_; 
v_a_1339_ = lean_ctor_get(v___x_1338_, 0);
lean_inc(v_a_1339_);
lean_dec_ref_known(v___x_1338_, 1);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v_a_1339_);
v___x_1341_ = v___x_1303_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_a_1339_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
v_val_1334_ = v___x_1341_;
goto v___jp_1333_;
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; 
v_a_1343_ = lean_ctor_get(v___x_1338_, 0);
lean_inc(v_a_1343_);
lean_dec_ref_known(v___x_1338_, 1);
if (v_isShared_1304_ == 0)
{
lean_ctor_set_tag(v___x_1303_, 0);
lean_ctor_set(v___x_1303_, 0, v_a_1343_);
v___x_1345_ = v___x_1303_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
v_val_1334_ = v___x_1345_;
goto v___jp_1333_;
}
}
v___jp_1333_:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1335_, 0, v_val_1334_);
v___x_1336_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1306_, v___x_1332_, v___x_1335_, v___f_1331_);
v___x_1337_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1306_, v___x_1332_, v___x_1336_, v___f_1289_);
return v___x_1337_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6___boxed(lean_object* v_failurePrefix_1348_, lean_object* v_op_1349_, lean_object* v_flags_1350_, lean_object* v_payload_1351_, lean_object* v___f_1352_, lean_object* v___f_1353_, lean_object* v___f_1354_, lean_object* v_x_1355_, lean_object* v___y_1356_){
_start:
{
uint32_t v_op_boxed_1357_; uint64_t v_flags_boxed_1358_; lean_object* v_res_1359_; 
v_op_boxed_1357_ = lean_unbox_uint32(v_op_1349_);
lean_dec(v_op_1349_);
v_flags_boxed_1358_ = lean_unbox_uint64(v_flags_1350_);
lean_dec_ref(v_flags_1350_);
v_res_1359_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6(v_failurePrefix_1348_, v_op_boxed_1357_, v_flags_boxed_1358_, v_payload_1351_, v___f_1352_, v___f_1353_, v___f_1354_, v_x_1355_);
lean_dec_ref(v_failurePrefix_1348_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8(lean_object* v___f_1360_, lean_object* v_x_1361_){
_start:
{
if (lean_obj_tag(v_x_1361_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1371_; 
lean_dec_ref(v___f_1360_);
v_a_1363_ = lean_ctor_get(v_x_1361_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v_x_1361_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1365_ = v_x_1361_;
v_isShared_1366_ = v_isSharedCheck_1371_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v_x_1361_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1371_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
lean_object* v___x_1369_; 
v___x_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1368_);
return v___x_1369_;
}
}
}
else
{
lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1383_; 
v_isSharedCheck_1383_ = !lean_is_exclusive(v_x_1361_);
if (v_isSharedCheck_1383_ == 0)
{
lean_object* v_unused_1384_; 
v_unused_1384_ = lean_ctor_get(v_x_1361_, 0);
lean_dec(v_unused_1384_);
v___x_1373_ = v_x_1361_;
v_isShared_1374_ = v_isSharedCheck_1383_;
goto v_resetjp_1372_;
}
else
{
lean_dec(v_x_1361_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1383_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1375_; uint8_t v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1379_; 
v___x_1375_ = lean_unsigned_to_nat(0u);
v___x_1376_ = 0;
v___x_1377_ = lean_io_promise_new();
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 0, v___x_1377_);
v___x_1379_ = v___x_1373_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v___x_1377_);
v___x_1379_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
v___x_1381_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1375_, v___x_1376_, v___x_1380_, v___f_1360_);
return v___x_1381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8___boxed(lean_object* v___f_1385_, lean_object* v_x_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8(v___f_1385_, v_x_1386_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(lean_object* v_d_1396_, lean_object* v_key_1397_){
_start:
{
if (lean_obj_tag(v_d_1396_) == 8)
{
lean_object* v___x_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1437_; 
v___x_1398_ = l_Lasm_JS_Data_field(v_d_1396_, v_key_1397_);
v_isSharedCheck_1437_ = !lean_is_exclusive(v_d_1396_);
if (v_isSharedCheck_1437_ == 0)
{
lean_object* v_unused_1438_; 
v_unused_1438_ = lean_ctor_get(v_d_1396_, 0);
lean_dec(v_unused_1438_);
v___x_1400_ = v_d_1396_;
v_isShared_1401_ = v_isSharedCheck_1437_;
goto v_resetjp_1399_;
}
else
{
lean_dec(v_d_1396_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1437_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
switch(lean_obj_tag(v___x_1398_))
{
case 4:
{
lean_object* v_s_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1412_; 
v_s_1402_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1404_ = v___x_1398_;
v_isShared_1405_ = v_isSharedCheck_1412_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_s_1402_);
lean_dec(v___x_1398_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1412_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1407_; 
if (v_isShared_1405_ == 0)
{
lean_ctor_set_tag(v___x_1404_, 0);
v___x_1407_ = v___x_1404_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_s_1402_);
v___x_1407_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1409_; 
if (v_isShared_1401_ == 0)
{
lean_ctor_set_tag(v___x_1400_, 1);
lean_ctor_set(v___x_1400_, 0, v___x_1407_);
v___x_1409_ = v___x_1400_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
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
case 6:
{
lean_object* v_b_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1423_; 
v_b_1413_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1415_ = v___x_1398_;
v_isShared_1416_ = v_isSharedCheck_1423_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_b_1413_);
lean_dec(v___x_1398_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1423_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
lean_ctor_set_tag(v___x_1415_, 1);
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v_b_1413_);
v___x_1418_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
lean_object* v___x_1420_; 
if (v_isShared_1401_ == 0)
{
lean_ctor_set_tag(v___x_1400_, 1);
lean_ctor_set(v___x_1400_, 0, v___x_1418_);
v___x_1420_ = v___x_1400_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
default: 
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1435_; 
v___x_1424_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__0));
v___x_1425_ = lean_string_append(v___x_1424_, v_key_1397_);
v___x_1426_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__1));
v___x_1427_ = lean_string_append(v___x_1425_, v___x_1426_);
v___x_1428_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__2));
v___x_1429_ = lean_string_append(v___x_1427_, v___x_1428_);
v___x_1430_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__3));
v___x_1431_ = lean_string_append(v___x_1429_, v___x_1430_);
v___x_1432_ = l_Lasm_JS_Data_describe(v___x_1398_);
v___x_1433_ = lean_string_append(v___x_1431_, v___x_1432_);
lean_dec_ref(v___x_1432_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set_tag(v___x_1400_, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1433_);
v___x_1435_ = v___x_1400_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___x_1433_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
}
else
{
lean_object* v___x_1439_; 
lean_dec(v_d_1396_);
v___x_1439_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__5));
return v___x_1439_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___boxed(lean_object* v_d_1440_, lean_object* v_key_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_1440_, v_key_1441_);
lean_dec_ref(v_key_1441_);
return v_res_1442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(lean_object* v_context_1443_, lean_object* v_d_1444_){
_start:
{
lean_object* v___y_1447_; lean_object* v___y_1448_; lean_object* v___y_1453_; lean_object* v_received_1454_; lean_object* v___y_1473_; lean_object* v_a_1476_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1500_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__0));
lean_inc(v_d_1444_);
v___x_1501_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_1444_, v___x_1500_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v_a_1476_ = v_a_1502_;
goto v___jp_1475_;
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v_a_1503_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1503_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1504_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__1));
lean_inc(v_d_1444_);
v___x_1505_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_1444_, v___x_1504_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; 
lean_dec(v_a_1503_);
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
lean_dec_ref_known(v___x_1505_, 1);
v_a_1476_ = v_a_1506_;
goto v___jp_1475_;
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1515_; 
lean_dec(v_d_1444_);
v_a_1507_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1509_ = v___x_1505_;
v_isShared_1510_ = v_isSharedCheck_1515_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1505_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1515_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1511_; lean_object* v___x_1513_; 
v___x_1511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1511_, 0, v_a_1503_);
lean_ctor_set(v___x_1511_, 1, v_a_1507_);
if (v_isShared_1510_ == 0)
{
lean_ctor_set_tag(v___x_1509_, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1511_);
v___x_1513_ = v___x_1509_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v___x_1511_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
v___jp_1446_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1449_ = lean_string_append(v___y_1447_, v___y_1448_);
lean_dec_ref(v___y_1448_);
v___x_1450_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1449_);
v___x_1451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1450_);
return v___x_1451_;
}
v___jp_1452_:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; uint8_t v___x_1466_; 
v___x_1455_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__0));
v___x_1456_ = lean_string_append(v___x_1455_, v_context_1443_);
v___x_1457_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__1));
v___x_1458_ = lean_string_append(v___x_1456_, v___x_1457_);
v___x_1459_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___closed__1));
v___x_1460_ = lean_string_append(v___x_1458_, v___x_1459_);
v___x_1461_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__3));
v___x_1462_ = lean_string_append(v___x_1460_, v___x_1461_);
v___x_1463_ = lean_string_append(v___x_1462_, v_received_1454_);
lean_dec_ref(v_received_1454_);
v___x_1464_ = lean_string_utf8_byte_size(v___y_1453_);
v___x_1465_ = lean_unsigned_to_nat(0u);
v___x_1466_ = lean_nat_dec_eq(v___x_1464_, v___x_1465_);
if (v___x_1466_ == 0)
{
lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1467_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__4));
v___x_1468_ = lean_string_append(v___x_1467_, v___y_1453_);
lean_dec_ref(v___y_1453_);
v___x_1469_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__5));
v___x_1470_ = lean_string_append(v___x_1468_, v___x_1469_);
v___y_1447_ = v___x_1463_;
v___y_1448_ = v___x_1470_;
goto v___jp_1446_;
}
else
{
lean_object* v___x_1471_; 
lean_dec_ref(v___y_1453_);
v___x_1471_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___y_1447_ = v___x_1463_;
v___y_1448_ = v___x_1471_;
goto v___jp_1446_;
}
}
v___jp_1472_:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lasm_JS_Data_describe(v_d_1444_);
v___y_1453_ = v___y_1473_;
v_received_1454_ = v___x_1474_;
goto v___jp_1452_;
}
v___jp_1475_:
{
if (lean_obj_tag(v_d_1444_) == 9)
{
lean_object* v_value_1477_; lean_object* v_description_1478_; lean_object* v___x_1479_; uint8_t v___x_1480_; 
v_value_1477_ = lean_ctor_get(v_d_1444_, 0);
v_description_1478_ = lean_ctor_get(v_d_1444_, 1);
v___x_1479_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1480_ = lean_string_dec_eq(v_description_1478_, v___x_1479_);
if (v___x_1480_ == 0)
{
v___y_1473_ = v_a_1476_;
goto v___jp_1472_;
}
else
{
lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1497_; 
lean_inc(v_value_1477_);
v_isSharedCheck_1497_ = !lean_is_exclusive(v_d_1444_);
if (v_isSharedCheck_1497_ == 0)
{
lean_object* v_unused_1498_; lean_object* v_unused_1499_; 
v_unused_1498_ = lean_ctor_get(v_d_1444_, 1);
lean_dec(v_unused_1498_);
v_unused_1499_ = lean_ctor_get(v_d_1444_, 0);
lean_dec(v_unused_1499_);
v___x_1482_ = v_d_1444_;
v_isShared_1483_ = v_isSharedCheck_1497_;
goto v_resetjp_1481_;
}
else
{
lean_dec(v_d_1444_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1497_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
uint32_t v___x_1484_; uint64_t v___x_1485_; lean_object* v___x_1487_; 
v___x_1484_ = 206;
v___x_1485_ = 0ULL;
lean_inc(v_value_1477_);
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 1, v___x_1479_);
v___x_1487_ = v___x_1482_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_value_1477_);
lean_ctor_set(v_reuseFailAlloc_1496_, 1, v___x_1479_);
v___x_1487_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
uint32_t v___x_1488_; lean_object* v___x_1489_; 
v___x_1488_ = lasm_js_value_handle(v_value_1477_);
lean_dec(v_value_1477_);
v___x_1489_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1484_, v___x_1485_, v___x_1487_, v___x_1488_);
if (lean_obj_tag(v___x_1489_) == 0)
{
lean_object* v_a_1490_; uint8_t v___x_1491_; 
v_a_1490_ = lean_ctor_get(v___x_1489_, 0);
lean_inc(v_a_1490_);
lean_dec_ref_known(v___x_1489_, 1);
v___x_1491_ = lean_string_validate_utf8(v_a_1490_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_dec(v_a_1490_);
v___x_1492_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9);
v___x_1493_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1492_);
v___y_1453_ = v_a_1476_;
v_received_1454_ = v___x_1493_;
goto v___jp_1452_;
}
else
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_string_from_utf8_unchecked(v_a_1490_);
v___y_1453_ = v_a_1476_;
v_received_1454_ = v___x_1494_;
goto v___jp_1452_;
}
}
else
{
lean_object* v___x_1495_; 
lean_dec_ref_known(v___x_1489_, 1);
v___x_1495_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__10));
v___y_1453_ = v_a_1476_;
v_received_1454_ = v___x_1495_;
goto v___jp_1452_;
}
}
}
}
}
else
{
v___y_1473_ = v_a_1476_;
goto v___jp_1472_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8___boxed(lean_object* v_context_1516_, lean_object* v_d_1517_, lean_object* v_a_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(v_context_1516_, v_d_1517_);
lean_dec_ref(v_context_1516_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0(lean_object* v_context_1520_, lean_object* v_x_1521_){
_start:
{
lean_object* v_val_1524_; 
if (lean_obj_tag(v_x_1521_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1534_; 
v_a_1526_ = lean_ctor_get(v_x_1521_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v_x_1521_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1528_ = v_x_1521_;
v_isShared_1529_ = v_isSharedCheck_1534_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v_x_1521_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1534_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1531_; 
if (v_isShared_1529_ == 0)
{
v___x_1531_ = v___x_1528_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_a_1526_);
v___x_1531_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
lean_object* v___x_1532_; 
v___x_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1531_);
return v___x_1532_;
}
}
}
else
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1548_; 
v_a_1535_ = lean_ctor_get(v_x_1521_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v_x_1521_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1537_ = v_x_1521_;
v_isShared_1538_ = v_isSharedCheck_1548_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v_x_1521_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1548_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1539_; 
v___x_1539_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(v_context_1520_, v_a_1535_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v___x_1542_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v___x_1539_, 1);
if (v_isShared_1538_ == 0)
{
lean_ctor_set(v___x_1537_, 0, v_a_1540_);
v___x_1542_ = v___x_1537_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_a_1540_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
v_val_1524_ = v___x_1542_;
goto v___jp_1523_;
}
}
else
{
lean_object* v_a_1544_; lean_object* v___x_1546_; 
v_a_1544_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_a_1544_);
lean_dec_ref_known(v___x_1539_, 1);
if (v_isShared_1538_ == 0)
{
lean_ctor_set_tag(v___x_1537_, 0);
lean_ctor_set(v___x_1537_, 0, v_a_1544_);
v___x_1546_ = v___x_1537_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v_a_1544_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
v_val_1524_ = v___x_1546_;
goto v___jp_1523_;
}
}
}
}
v___jp_1523_:
{
lean_object* v___x_1525_; 
v___x_1525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1525_, 0, v_val_1524_);
return v___x_1525_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0___boxed(lean_object* v_context_1549_, lean_object* v_x_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0(v_context_1549_, v_x_1550_);
lean_dec_ref(v_context_1549_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1(lean_object* v___f_1553_, lean_object* v_bytes_1554_){
_start:
{
lean_object* v___x_1556_; uint8_t v___x_1557_; lean_object* v_val_1559_; lean_object* v___x_1562_; 
v___x_1556_ = lean_unsigned_to_nat(0u);
v___x_1557_ = 0;
v___x_1562_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1554_);
if (lean_obj_tag(v___x_1562_) == 0)
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
v_a_1563_ = lean_ctor_get(v___x_1562_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v___x_1562_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v___x_1562_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
lean_ctor_set_tag(v___x_1565_, 1);
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1563_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
v_val_1559_ = v___x_1568_;
goto v___jp_1558_;
}
}
}
else
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1578_; 
v_a_1571_ = lean_ctor_get(v___x_1562_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1573_ = v___x_1562_;
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1562_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1576_; 
if (v_isShared_1574_ == 0)
{
lean_ctor_set_tag(v___x_1573_, 0);
v___x_1576_ = v___x_1573_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
v_val_1559_ = v___x_1576_;
goto v___jp_1558_;
}
}
}
v___jp_1558_:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1560_, 0, v_val_1559_);
v___x_1561_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1556_, v___x_1557_, v___x_1560_, v___f_1553_);
return v___x_1561_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1___boxed(lean_object* v___f_1579_, lean_object* v_bytes_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1(v___f_1579_, v_bytes_1580_);
lean_dec_ref(v_bytes_1580_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4(lean_object* v_failurePrefix_1583_, lean_object* v_x_1584_){
_start:
{
if (lean_obj_tag(v_x_1584_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1597_; 
v_a_1586_ = lean_ctor_get(v_x_1584_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1588_ = v_x_1584_;
v_isShared_1589_ = v_isSharedCheck_1597_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v_x_1584_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1597_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1594_; 
v___x_1590_ = lean_io_error_to_string(v_a_1586_);
v___x_1591_ = lean_string_append(v_failurePrefix_1583_, v___x_1590_);
lean_dec_ref(v___x_1590_);
v___x_1592_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1591_);
if (v_isShared_1589_ == 0)
{
lean_ctor_set(v___x_1588_, 0, v___x_1592_);
v___x_1594_ = v___x_1588_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v___x_1592_);
v___x_1594_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1595_; 
v___x_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1594_);
return v___x_1595_;
}
}
}
else
{
lean_object* v___x_1598_; 
lean_dec_ref(v_failurePrefix_1583_);
v___x_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1598_, 0, v_x_1584_);
return v___x_1598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4___boxed(lean_object* v_failurePrefix_1599_, lean_object* v_x_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4(v_failurePrefix_1599_, v_x_1600_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2(lean_object* v___f_1603_, lean_object* v_x_1604_){
_start:
{
if (lean_obj_tag(v_x_1604_) == 0)
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1614_; 
lean_dec_ref(v___f_1603_);
v_a_1606_ = lean_ctor_get(v_x_1604_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v_x_1604_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1608_ = v_x_1604_;
v_isShared_1609_ = v_isSharedCheck_1614_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v_x_1604_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1614_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
lean_object* v___x_1612_; 
v___x_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1611_);
return v___x_1612_;
}
}
}
else
{
lean_object* v_a_1615_; lean_object* v___x_1616_; 
v_a_1615_ = lean_ctor_get(v_x_1604_, 0);
lean_inc(v_a_1615_);
lean_dec_ref_known(v_x_1604_, 1);
v___x_1616_ = lean_apply_2(v___f_1603_, v_a_1615_, lean_box(0));
return v___x_1616_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2___boxed(lean_object* v___f_1617_, lean_object* v_x_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2(v___f_1617_, v_x_1618_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(lean_object* v_context_1621_, uint32_t v_op_1622_, uint64_t v_flags_1623_, lean_object* v_payload_1624_, lean_object* v_failurePrefix_1625_){
_start:
{
lean_object* v___f_1627_; lean_object* v___f_1628_; lean_object* v___f_1629_; lean_object* v___f_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___f_1633_; lean_object* v___f_1634_; lean_object* v___x_1635_; uint8_t v___x_1636_; lean_object* v_val_1638_; lean_object* v___x_1641_; 
v___f_1627_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1627_, 0, v_context_1621_);
v___f_1628_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1628_, 0, v___f_1627_);
v___f_1629_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1629_, 0, v___f_1628_);
lean_inc_ref(v_failurePrefix_1625_);
v___f_1630_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1630_, 0, v_failurePrefix_1625_);
v___x_1631_ = lean_box_uint32(v_op_1622_);
v___x_1632_ = lean_box_uint64(v_flags_1623_);
lean_inc_ref(v___f_1629_);
v___f_1633_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1633_, 0, v_failurePrefix_1625_);
lean_closure_set(v___f_1633_, 1, v___x_1631_);
lean_closure_set(v___f_1633_, 2, v___x_1632_);
lean_closure_set(v___f_1633_, 3, v_payload_1624_);
lean_closure_set(v___f_1633_, 4, v___f_1630_);
lean_closure_set(v___f_1633_, 5, v___f_1629_);
lean_closure_set(v___f_1633_, 6, v___f_1629_);
v___f_1634_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1634_, 0, v___f_1633_);
v___x_1635_ = lean_unsigned_to_nat(0u);
v___x_1636_ = 0;
v___x_1641_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1644_ = v___x_1641_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1641_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
lean_ctor_set_tag(v___x_1644_, 1);
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
v_val_1638_ = v___x_1647_;
goto v___jp_1637_;
}
}
}
else
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1657_; 
v_a_1650_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1652_ = v___x_1641_;
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1641_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1655_; 
if (v_isShared_1653_ == 0)
{
lean_ctor_set_tag(v___x_1652_, 0);
v___x_1655_ = v___x_1652_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1650_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
v_val_1638_ = v___x_1655_;
goto v___jp_1637_;
}
}
}
v___jp_1637_:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1639_, 0, v_val_1638_);
v___x_1640_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1635_, v___x_1636_, v___x_1639_, v___f_1634_);
return v___x_1640_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___boxed(lean_object* v_context_1658_, lean_object* v_op_1659_, lean_object* v_flags_1660_, lean_object* v_payload_1661_, lean_object* v_failurePrefix_1662_, lean_object* v_a_1663_){
_start:
{
uint32_t v_op_boxed_1664_; uint64_t v_flags_boxed_1665_; lean_object* v_res_1666_; 
v_op_boxed_1664_ = lean_unbox_uint32(v_op_1659_);
lean_dec(v_op_1659_);
v_flags_boxed_1665_ = lean_unbox_uint64(v_flags_1660_);
lean_dec_ref(v_flags_1660_);
v_res_1666_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(v_context_1658_, v_op_boxed_1664_, v_flags_boxed_1665_, v_payload_1661_, v_failurePrefix_1662_);
return v_res_1666_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1(void){
_start:
{
uint64_t v___x_1668_; uint8_t v___x_1669_; uint64_t v___x_1670_; 
v___x_1668_ = 0ULL;
v___x_1669_ = 0;
v___x_1670_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(v___x_1669_, v___x_1668_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(lean_object* v_f_1671_, lean_object* v_args_1672_, lean_object* v_this_1673_){
_start:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; uint32_t v___x_1678_; uint64_t v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1675_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1676_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1676_, 0, v_f_1671_);
lean_ctor_set(v___x_1676_, 1, v___x_1675_);
v___x_1677_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__0));
v___x_1678_ = 205;
v___x_1679_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1, &l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1);
v___x_1680_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1680_, 0, v_args_1672_);
v___x_1681_ = lean_unsigned_to_nat(3u);
v___x_1682_ = lean_mk_empty_array_with_capacity(v___x_1681_);
v___x_1683_ = lean_array_push(v___x_1682_, v___x_1676_);
v___x_1684_ = lean_array_push(v___x_1683_, v_this_1673_);
v___x_1685_ = lean_array_push(v___x_1684_, v___x_1680_);
v___x_1686_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
v___x_1687_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(v___x_1677_, v___x_1678_, v___x_1679_, v___x_1686_, v___x_1675_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___boxed(lean_object* v_f_1688_, lean_object* v_args_1689_, lean_object* v_this_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(v_f_1688_, v_args_1689_, v_this_1690_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0(lean_object* v_args_1693_, lean_object* v_x_1694_){
_start:
{
if (lean_obj_tag(v_x_1694_) == 0)
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1704_; 
lean_dec_ref(v_args_1693_);
v_a_1696_ = lean_ctor_get(v_x_1694_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v_x_1694_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1698_ = v_x_1694_;
v_isShared_1699_ = v_isSharedCheck_1704_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v_x_1694_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1704_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1696_);
v___x_1701_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
lean_object* v___x_1702_; 
v___x_1702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1701_);
return v___x_1702_;
}
}
}
else
{
lean_object* v_a_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
v_a_1705_ = lean_ctor_get(v_x_1694_, 0);
lean_inc(v_a_1705_);
lean_dec_ref_known(v_x_1694_, 1);
v___x_1706_ = lean_box(0);
v___x_1707_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(v_a_1705_, v_args_1693_, v___x_1706_);
return v___x_1707_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0___boxed(lean_object* v_args_1708_, lean_object* v_x_1709_, lean_object* v___y_1710_){
_start:
{
lean_object* v_res_1711_; 
v_res_1711_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0(v_args_1708_, v_x_1709_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(lean_object* v_module_1713_, lean_object* v_path_1714_, lean_object* v_args_1715_){
_start:
{
lean_object* v___f_1717_; lean_object* v___f_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; uint8_t v___x_1723_; lean_object* v_val_1725_; lean_object* v___x_1728_; 
v___f_1717_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1717_, 0, v_args_1715_);
v___f_1718_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1718_, 0, v___f_1717_);
v___x_1719_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___closed__0));
v___x_1720_ = lean_unsigned_to_nat(0u);
v___x_1721_ = lean_box(0);
v___x_1722_ = l_String_splitOnAux(v_path_1714_, v___x_1719_, v___x_1720_, v___x_1720_, v___x_1720_, v___x_1721_);
v___x_1723_ = 0;
v___x_1728_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v_module_1713_, v___x_1722_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1728_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1728_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
lean_ctor_set_tag(v___x_1731_, 1);
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1729_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
v_val_1725_ = v___x_1734_;
goto v___jp_1724_;
}
}
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1744_; 
v_a_1737_ = lean_ctor_get(v___x_1728_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1739_ = v___x_1728_;
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1728_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1742_; 
if (v_isShared_1740_ == 0)
{
lean_ctor_set_tag(v___x_1739_, 0);
v___x_1742_ = v___x_1739_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1737_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
v_val_1725_ = v___x_1742_;
goto v___jp_1724_;
}
}
}
v___jp_1724_:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v_val_1725_);
v___x_1727_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1720_, v___x_1723_, v___x_1726_, v___f_1718_);
return v___x_1727_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___boxed(lean_object* v_module_1745_, lean_object* v_path_1746_, lean_object* v_args_1747_, lean_object* v_a_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(v_module_1745_, v_path_1746_, v_args_1747_);
lean_dec_ref(v_path_1746_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile(lean_object* v_file_1752_, lean_object* v_args_1753_, lean_object* v_options_1754_){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1756_ = ((lean_object*)(l_Lasm_JS_Node_child__process_execFile___closed__0));
v___x_1757_ = ((lean_object*)(l_Lasm_JS_Node_child__process_execFile___closed__1));
v___x_1758_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1758_, 0, v_file_1752_);
v___x_1759_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(v_args_1753_);
v___x_1760_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1(v_options_1754_);
v___x_1761_ = lean_unsigned_to_nat(3u);
v___x_1762_ = lean_mk_empty_array_with_capacity(v___x_1761_);
v___x_1763_ = lean_array_push(v___x_1762_, v___x_1758_);
v___x_1764_ = lean_array_push(v___x_1763_, v___x_1759_);
v___x_1765_ = lean_array_push(v___x_1764_, v___x_1760_);
v___x_1766_ = l_Lasm_JS_Web_Support_args(v___x_1765_);
v___x_1767_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(v___x_1756_, v___x_1757_, v___x_1766_);
return v___x_1767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile___boxed(lean_object* v_file_1768_, lean_object* v_args_1769_, lean_object* v_options_1770_, lean_object* v_a_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = l_Lasm_JS_Node_child__process_execFile(v_file_1768_, v_args_1769_, v_options_1770_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(lean_object* v_x_1773_){
_start:
{
if (lean_obj_tag(v_x_1773_) == 0)
{
lean_object* v___x_1774_; 
v___x_1774_ = lean_box(0);
return v___x_1774_;
}
else
{
lean_object* v_val_1775_; 
v_val_1775_ = lean_ctor_get(v_x_1773_, 0);
lean_inc(v_val_1775_);
lean_dec_ref_known(v_x_1773_, 1);
if (lean_obj_tag(v_val_1775_) == 0)
{
lean_object* v_value_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1786_; 
v_value_1776_ = lean_ctor_get(v_val_1775_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_val_1775_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1778_ = v_val_1775_;
v_isShared_1779_ = v_isSharedCheck_1786_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_value_1776_);
lean_dec(v_val_1775_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1786_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
size_t v_sz_1780_; size_t v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1784_; 
v_sz_1780_ = lean_array_size(v_value_1776_);
v___x_1781_ = ((size_t)0ULL);
v___x_1782_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_1780_, v___x_1781_, v_value_1776_);
if (v_isShared_1779_ == 0)
{
lean_ctor_set_tag(v___x_1778_, 7);
lean_ctor_set(v___x_1778_, 0, v___x_1782_);
v___x_1784_ = v___x_1778_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
else
{
lean_object* v_value_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
v_value_1787_ = lean_ctor_get(v_val_1775_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v_val_1775_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v_val_1775_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_value_1787_);
lean_dec(v_val_1775_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
lean_ctor_set_tag(v___x_1789_, 4);
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_value_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(lean_object* v_x_1795_){
_start:
{
if (lean_obj_tag(v_x_1795_) == 0)
{
lean_object* v___x_1796_; 
v___x_1796_ = lean_box(0);
return v___x_1796_;
}
else
{
lean_object* v_val_1797_; lean_object* v_cwd_1798_; lean_object* v_env_1799_; lean_object* v_argv0_1800_; lean_object* v_stdio_1801_; lean_object* v_detached_1802_; lean_object* v_uid_1803_; lean_object* v_gid_1804_; lean_object* v_serialization_1805_; lean_object* v_shell_1806_; lean_object* v_windowsVerbatimArguments_1807_; lean_object* v_windowsHide_1808_; lean_object* v_signal_1809_; lean_object* v_timeout_1810_; lean_object* v_killSignal_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; 
v_val_1797_ = lean_ctor_get(v_x_1795_, 0);
lean_inc(v_val_1797_);
lean_dec_ref_known(v_x_1795_, 1);
v_cwd_1798_ = lean_ctor_get(v_val_1797_, 0);
lean_inc(v_cwd_1798_);
v_env_1799_ = lean_ctor_get(v_val_1797_, 1);
lean_inc(v_env_1799_);
v_argv0_1800_ = lean_ctor_get(v_val_1797_, 2);
lean_inc(v_argv0_1800_);
v_stdio_1801_ = lean_ctor_get(v_val_1797_, 3);
lean_inc(v_stdio_1801_);
v_detached_1802_ = lean_ctor_get(v_val_1797_, 4);
lean_inc(v_detached_1802_);
v_uid_1803_ = lean_ctor_get(v_val_1797_, 5);
lean_inc(v_uid_1803_);
v_gid_1804_ = lean_ctor_get(v_val_1797_, 6);
lean_inc(v_gid_1804_);
v_serialization_1805_ = lean_ctor_get(v_val_1797_, 7);
lean_inc(v_serialization_1805_);
v_shell_1806_ = lean_ctor_get(v_val_1797_, 8);
lean_inc(v_shell_1806_);
v_windowsVerbatimArguments_1807_ = lean_ctor_get(v_val_1797_, 9);
lean_inc(v_windowsVerbatimArguments_1807_);
v_windowsHide_1808_ = lean_ctor_get(v_val_1797_, 10);
lean_inc(v_windowsHide_1808_);
v_signal_1809_ = lean_ctor_get(v_val_1797_, 11);
lean_inc(v_signal_1809_);
v_timeout_1810_ = lean_ctor_get(v_val_1797_, 12);
lean_inc(v_timeout_1810_);
v_killSignal_1811_ = lean_ctor_get(v_val_1797_, 13);
lean_inc(v_killSignal_1811_);
lean_dec(v_val_1797_);
v___x_1812_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__0));
v___x_1813_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(v_cwd_1798_);
v___x_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1812_);
lean_ctor_set(v___x_1814_, 1, v___x_1813_);
v___x_1815_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__1));
v___x_1816_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(v_env_1799_);
v___x_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1815_);
lean_ctor_set(v___x_1817_, 1, v___x_1816_);
v___x_1818_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__0));
v___x_1819_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_argv0_1800_);
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1818_);
lean_ctor_set(v___x_1820_, 1, v___x_1819_);
v___x_1821_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__1));
v___x_1822_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(v_stdio_1801_);
v___x_1823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1821_);
lean_ctor_set(v___x_1823_, 1, v___x_1822_);
v___x_1824_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__2));
v___x_1825_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_detached_1802_);
lean_dec(v_detached_1802_);
v___x_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1824_);
lean_ctor_set(v___x_1826_, 1, v___x_1825_);
v___x_1827_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__6));
v___x_1828_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_uid_1803_);
lean_dec(v_uid_1803_);
v___x_1829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1827_);
lean_ctor_set(v___x_1829_, 1, v___x_1828_);
v___x_1830_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__7));
v___x_1831_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_gid_1804_);
lean_dec(v_gid_1804_);
v___x_1832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1830_);
lean_ctor_set(v___x_1832_, 1, v___x_1831_);
v___x_1833_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__3));
v___x_1834_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_serialization_1805_);
v___x_1835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1833_);
lean_ctor_set(v___x_1835_, 1, v___x_1834_);
v___x_1836_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__10));
v___x_1837_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_shell_1806_);
v___x_1838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1836_);
lean_ctor_set(v___x_1838_, 1, v___x_1837_);
v___x_1839_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__9));
v___x_1840_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_1807_);
lean_dec(v_windowsVerbatimArguments_1807_);
v___x_1841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1839_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
v___x_1842_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__8));
v___x_1843_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_1808_);
lean_dec(v_windowsHide_1808_);
v___x_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1842_);
lean_ctor_set(v___x_1844_, 1, v___x_1843_);
v___x_1845_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__11));
v___x_1846_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_1809_);
lean_dec(v_signal_1809_);
v___x_1847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1845_);
lean_ctor_set(v___x_1847_, 1, v___x_1846_);
v___x_1848_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__3));
v___x_1849_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_timeout_1810_);
lean_dec(v_timeout_1810_);
v___x_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1848_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
v___x_1851_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__5));
v___x_1852_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_1811_);
v___x_1853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1851_);
lean_ctor_set(v___x_1853_, 1, v___x_1852_);
v___x_1854_ = lean_unsigned_to_nat(14u);
v___x_1855_ = lean_mk_empty_array_with_capacity(v___x_1854_);
v___x_1856_ = lean_array_push(v___x_1855_, v___x_1814_);
v___x_1857_ = lean_array_push(v___x_1856_, v___x_1817_);
v___x_1858_ = lean_array_push(v___x_1857_, v___x_1820_);
v___x_1859_ = lean_array_push(v___x_1858_, v___x_1823_);
v___x_1860_ = lean_array_push(v___x_1859_, v___x_1826_);
v___x_1861_ = lean_array_push(v___x_1860_, v___x_1829_);
v___x_1862_ = lean_array_push(v___x_1861_, v___x_1832_);
v___x_1863_ = lean_array_push(v___x_1862_, v___x_1835_);
v___x_1864_ = lean_array_push(v___x_1863_, v___x_1838_);
v___x_1865_ = lean_array_push(v___x_1864_, v___x_1841_);
v___x_1866_ = lean_array_push(v___x_1865_, v___x_1844_);
v___x_1867_ = lean_array_push(v___x_1866_, v___x_1847_);
v___x_1868_ = lean_array_push(v___x_1867_, v___x_1850_);
v___x_1869_ = lean_array_push(v___x_1868_, v___x_1853_);
v___x_1870_ = l_Lasm_JS_Web_Support_fields(v___x_1869_);
lean_dec_ref(v___x_1869_);
return v___x_1870_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn(lean_object* v_command_1879_, lean_object* v_args_1880_, lean_object* v_options_1881_){
_start:
{
uint8_t v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1883_ = 0;
v___x_1884_ = lean_unsigned_to_nat(3u);
v___x_1885_ = ((lean_object*)(l_Lasm_JS_Node_child__process_spawn___closed__2));
v___x_1886_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1886_, 0, v_command_1879_);
v___x_1887_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(v_args_1880_);
v___x_1888_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(v_options_1881_);
v___x_1889_ = lean_mk_empty_array_with_capacity(v___x_1884_);
v___x_1890_ = lean_array_push(v___x_1889_, v___x_1886_);
v___x_1891_ = lean_array_push(v___x_1890_, v___x_1887_);
v___x_1892_ = lean_array_push(v___x_1891_, v___x_1888_);
v___x_1893_ = l_Lasm_JS_Web_Support_args(v___x_1892_);
v___x_1894_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1885_, v___x_1893_, v___x_1883_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1894_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1894_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_a_1895_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
else
{
lean_object* v_a_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1910_; 
v_a_1903_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1905_ = v___x_1894_;
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_a_1903_);
lean_dec(v___x_1894_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1908_; 
if (v_isShared_1906_ == 0)
{
v___x_1908_ = v___x_1905_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_a_1903_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn___boxed(lean_object* v_command_1911_, lean_object* v_args_1912_, lean_object* v_options_1913_, lean_object* v_a_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l_Lasm_JS_Node_child__process_spawn(v_command_1911_, v_args_1912_, v_options_1913_);
return v_res_1915_;
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
l_Lasm_JS_Node_instToJSExecFileOptions = _init_l_Lasm_JS_Node_instToJSExecFileOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSExecFileOptions);
l_Lasm_JS_Node_instFromJSExecFileResult = _init_l_Lasm_JS_Node_instFromJSExecFileResult();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSExecFileResult);
l_Lasm_JS_Node_instToJSSpawnOptions = _init_l_Lasm_JS_Node_instToJSSpawnOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSSpawnOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
