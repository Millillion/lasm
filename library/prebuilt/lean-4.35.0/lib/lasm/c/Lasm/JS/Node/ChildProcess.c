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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx(lean_object* v_x_27_){
_start:
{
if (lean_obj_tag(v_x_27_) == 0)
{
lean_object* v___x_28_; 
v___x_28_ = lean_unsigned_to_nat(0u);
return v___x_28_;
}
else
{
lean_object* v___x_29_; 
v___x_29_ = lean_unsigned_to_nat(1u);
return v___x_29_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx___boxed(lean_object* v_x_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorIdx(v_x_30_);
lean_dec_ref(v_x_30_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(lean_object* v_t_32_, lean_object* v_k_33_){
_start:
{
if (lean_obj_tag(v_t_32_) == 0)
{
double v_value_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_value_34_ = lean_ctor_get_float(v_t_32_, 0);
lean_dec_ref_known(v_t_32_, 0);
v___x_35_ = lean_box_float(v_value_34_);
v___x_36_ = lean_apply_1(v_k_33_, v___x_35_);
return v___x_36_;
}
else
{
lean_object* v_value_37_; lean_object* v___x_38_; 
v_value_37_ = lean_ctor_get(v_t_32_, 0);
lean_inc_ref(v_value_37_);
lean_dec_ref_known(v_t_32_, 1);
v___x_38_ = lean_apply_1(v_k_33_, v_value_37_);
return v___x_38_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(lean_object* v_motive_39_, lean_object* v_ctorIdx_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_k_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_41_, v_k_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___boxed(lean_object* v_motive_45_, lean_object* v_ctorIdx_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_k_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim(v_motive_45_, v_ctorIdx_46_, v_t_47_, v_h_48_, v_k_49_);
lean_dec(v_ctorIdx_46_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim___redArg(lean_object* v_t_51_, lean_object* v_double_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_51_, v_double_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_double_elim(lean_object* v_motive_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_double_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_55_, v_double_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim___redArg(lean_object* v_t_59_, lean_object* v_domString_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_59_, v_domString_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMString_domString_elim(lean_object* v_motive_62_, lean_object* v_t_63_, lean_object* v_h_64_, lean_object* v_domString_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lasm_JS_Node_DoubleOrDOMString_ctorElim___redArg(v_t_63_, v_domString_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMString___lam__0(lean_object* v_x_67_){
_start:
{
if (lean_obj_tag(v_x_67_) == 0)
{
double v_value_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_75_; 
v_value_68_ = lean_ctor_get_float(v_x_67_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v_x_67_);
if (v_isSharedCheck_75_ == 0)
{
v___x_70_ = v_x_67_;
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
else
{
lean_dec(v_x_67_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_73_; 
if (v_isShared_71_ == 0)
{
lean_ctor_set_tag(v___x_70_, 3);
v___x_73_ = v___x_70_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_74_, 0, v_value_68_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
else
{
lean_object* v_value_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_83_; 
v_value_76_ = lean_ctor_get(v_x_67_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v_x_67_);
if (v_isSharedCheck_83_ == 0)
{
v___x_78_ = v_x_67_;
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_value_76_);
lean_dec(v_x_67_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
lean_ctor_set_tag(v___x_78_, 4);
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_value_76_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(double v_value_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_87_, 0, v_value_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0___boxed(lean_object* v_value_88_){
_start:
{
double v_value_boxed_89_; lean_object* v_res_90_; 
v_value_boxed_89_ = lean_unbox_float(v_value_88_);
lean_dec_ref(v_value_88_);
v_res_90_ = l_Lasm_JS_Node_instCoeFloatDoubleOrDOMString___lam__0(v_value_boxed_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMString___lam__0(lean_object* v_value_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_94_, 0, v_value_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx(lean_object* v_x_97_){
_start:
{
if (lean_obj_tag(v_x_97_) == 0)
{
lean_object* v___x_98_; 
v___x_98_ = lean_unsigned_to_nat(0u);
return v___x_98_;
}
else
{
lean_object* v___x_99_; 
v___x_99_ = lean_unsigned_to_nat(1u);
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx___boxed(lean_object* v_x_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx(v_x_100_);
lean_dec_ref(v_x_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(lean_object* v_t_102_, lean_object* v_k_103_){
_start:
{
if (lean_obj_tag(v_t_102_) == 0)
{
uint8_t v_value_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v_value_104_ = lean_ctor_get_uint8(v_t_102_, 0);
lean_dec_ref_known(v_t_102_, 0);
v___x_105_ = lean_box(v_value_104_);
v___x_106_ = lean_apply_1(v_k_103_, v___x_105_);
return v___x_106_;
}
else
{
lean_object* v_value_107_; lean_object* v___x_108_; 
v_value_107_ = lean_ctor_get(v_t_102_, 0);
lean_inc_ref(v_value_107_);
lean_dec_ref_known(v_t_102_, 1);
v___x_108_ = lean_apply_1(v_k_103_, v_value_107_);
return v___x_108_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(lean_object* v_motive_109_, lean_object* v_ctorIdx_110_, lean_object* v_t_111_, lean_object* v_h_112_, lean_object* v_k_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_111_, v_k_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___boxed(lean_object* v_motive_115_, lean_object* v_ctorIdx_116_, lean_object* v_t_117_, lean_object* v_h_118_, lean_object* v_k_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(v_motive_115_, v_ctorIdx_116_, v_t_117_, v_h_118_, v_k_119_);
lean_dec(v_ctorIdx_116_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim___redArg(lean_object* v_t_121_, lean_object* v_boolean_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_121_, v_boolean_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim(lean_object* v_motive_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_boolean_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_125_, v_boolean_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim___redArg(lean_object* v_t_129_, lean_object* v_domString_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_129_, v_domString_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim(lean_object* v_motive_132_, lean_object* v_t_133_, lean_object* v_h_134_, lean_object* v_domString_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_133_, v_domString_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString___lam__0(lean_object* v_x_137_){
_start:
{
if (lean_obj_tag(v_x_137_) == 0)
{
uint8_t v_value_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
v_value_138_ = lean_ctor_get_uint8(v_x_137_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v_x_137_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_dec(v_x_137_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
lean_ctor_set_tag(v___x_140_, 2);
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_144_, 0, v_value_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
else
{
lean_object* v_value_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_153_; 
v_value_146_ = lean_ctor_get(v_x_137_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_153_ == 0)
{
v___x_148_ = v_x_137_;
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_value_146_);
lean_dec(v_x_137_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_149_ == 0)
{
lean_ctor_set_tag(v___x_148_, 4);
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_value_146_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(uint8_t v_value_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_157_, 0, v_value_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0___boxed(lean_object* v_value_158_){
_start:
{
uint8_t v_value_boxed_159_; lean_object* v_res_160_; 
v_value_boxed_159_ = lean_unbox(v_value_158_);
v_res_160_ = l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(v_value_boxed_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___lam__0(lean_object* v_value_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_164_, 0, v_value_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSExecFileOptions___lam__0(lean_object* v___f_179_, lean_object* v___x_180_, lean_object* v___f_181_, lean_object* v___f_182_, lean_object* v___f_183_, lean_object* v___f_184_, lean_object* v___f_185_, lean_object* v___f_186_, lean_object* v_d_187_){
_start:
{
lean_object* v_cwd_188_; lean_object* v_env_189_; lean_object* v_encoding_190_; lean_object* v_timeout_191_; lean_object* v_maxBuffer_192_; lean_object* v_killSignal_193_; lean_object* v_uid_194_; lean_object* v_gid_195_; lean_object* v_windowsHide_196_; lean_object* v_windowsVerbatimArguments_197_; lean_object* v_shell_198_; lean_object* v_signal_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v_cwd_188_ = lean_ctor_get(v_d_187_, 0);
lean_inc(v_cwd_188_);
v_env_189_ = lean_ctor_get(v_d_187_, 1);
lean_inc(v_env_189_);
v_encoding_190_ = lean_ctor_get(v_d_187_, 2);
lean_inc(v_encoding_190_);
v_timeout_191_ = lean_ctor_get(v_d_187_, 3);
lean_inc(v_timeout_191_);
v_maxBuffer_192_ = lean_ctor_get(v_d_187_, 4);
lean_inc(v_maxBuffer_192_);
v_killSignal_193_ = lean_ctor_get(v_d_187_, 5);
lean_inc(v_killSignal_193_);
v_uid_194_ = lean_ctor_get(v_d_187_, 6);
lean_inc(v_uid_194_);
v_gid_195_ = lean_ctor_get(v_d_187_, 7);
lean_inc(v_gid_195_);
v_windowsHide_196_ = lean_ctor_get(v_d_187_, 8);
lean_inc(v_windowsHide_196_);
v_windowsVerbatimArguments_197_ = lean_ctor_get(v_d_187_, 9);
lean_inc(v_windowsVerbatimArguments_197_);
v_shell_198_ = lean_ctor_get(v_d_187_, 10);
lean_inc(v_shell_198_);
v_signal_199_ = lean_ctor_get(v_d_187_, 11);
lean_inc(v_signal_199_);
lean_dec_ref(v_d_187_);
v___x_200_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__0));
v___x_201_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_179_, v_cwd_188_);
v___x_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
v___x_203_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__1));
v___x_204_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_180_, v_env_189_);
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_203_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__2));
v___x_207_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_181_, v_encoding_190_);
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_206_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
v___x_209_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__3));
lean_inc_ref_n(v___f_182_, 3);
v___x_210_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_182_, v_timeout_191_);
v___x_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_209_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___x_212_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__4));
v___x_213_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_182_, v_maxBuffer_192_);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_212_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__5));
v___x_216_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_183_, v_killSignal_193_);
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__6));
v___x_219_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_182_, v_uid_194_);
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_218_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
v___x_221_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__7));
v___x_222_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_182_, v_gid_195_);
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_221_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
v___x_224_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__8));
lean_inc_ref(v___f_184_);
v___x_225_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_184_, v_windowsHide_196_);
v___x_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__9));
v___x_228_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_184_, v_windowsVerbatimArguments_197_);
v___x_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_227_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__10));
v___x_231_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_185_, v_shell_198_);
v___x_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_230_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__11));
v___x_234_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_186_, v_signal_199_);
v___x_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_233_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
v___x_236_ = lean_unsigned_to_nat(12u);
v___x_237_ = lean_mk_empty_array_with_capacity(v___x_236_);
v___x_238_ = lean_array_push(v___x_237_, v___x_202_);
v___x_239_ = lean_array_push(v___x_238_, v___x_205_);
v___x_240_ = lean_array_push(v___x_239_, v___x_208_);
v___x_241_ = lean_array_push(v___x_240_, v___x_211_);
v___x_242_ = lean_array_push(v___x_241_, v___x_214_);
v___x_243_ = lean_array_push(v___x_242_, v___x_217_);
v___x_244_ = lean_array_push(v___x_243_, v___x_220_);
v___x_245_ = lean_array_push(v___x_244_, v___x_223_);
v___x_246_ = lean_array_push(v___x_245_, v___x_226_);
v___x_247_ = lean_array_push(v___x_246_, v___x_229_);
v___x_248_ = lean_array_push(v___x_247_, v___x_232_);
v___x_249_ = lean_array_push(v___x_248_, v___x_235_);
v___x_250_ = l_Lasm_JS_Web_Support_fields(v___x_249_);
lean_dec_ref(v___x_249_);
return v___x_250_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSExecFileOptions___closed__2(void){
_start:
{
lean_object* v___f_253_; lean_object* v___x_254_; 
v___f_253_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__1));
v___x_254_ = l_Lasm_JS_Web_instToJSRecord___redArg(v___f_253_);
return v___x_254_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSExecFileOptions___closed__7(void){
_start:
{
lean_object* v___f_259_; lean_object* v___f_260_; lean_object* v___f_261_; lean_object* v___f_262_; lean_object* v___f_263_; lean_object* v___f_264_; lean_object* v___x_265_; lean_object* v___f_266_; lean_object* v___f_267_; 
v___f_259_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__6));
v___f_260_ = ((lean_object*)(l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0));
v___f_261_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__5));
v___f_262_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__4));
v___f_263_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__3));
v___f_264_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__1));
v___x_265_ = lean_obj_once(&l_Lasm_JS_Node_instToJSExecFileOptions___closed__2, &l_Lasm_JS_Node_instToJSExecFileOptions___closed__2_once, _init_l_Lasm_JS_Node_instToJSExecFileOptions___closed__2);
v___f_266_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__0));
v___f_267_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0), 9, 8);
lean_closure_set(v___f_267_, 0, v___f_266_);
lean_closure_set(v___f_267_, 1, v___x_265_);
lean_closure_set(v___f_267_, 2, v___f_264_);
lean_closure_set(v___f_267_, 3, v___f_263_);
lean_closure_set(v___f_267_, 4, v___f_262_);
lean_closure_set(v___f_267_, 5, v___f_261_);
lean_closure_set(v___f_267_, 6, v___f_260_);
lean_closure_set(v___f_267_, 7, v___f_259_);
return v___f_267_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSExecFileOptions(void){
_start:
{
lean_object* v___f_268_; 
v___f_268_ = lean_obj_once(&l_Lasm_JS_Node_instToJSExecFileOptions___closed__7, &l_Lasm_JS_Node_instToJSExecFileOptions___closed__7_once, _init_l_Lasm_JS_Node_instToJSExecFileOptions___closed__7);
return v___f_268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSExecFileResult___lam__0(lean_object* v___x_271_, lean_object* v_d_272_){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__0));
lean_inc_ref(v___x_271_);
v___x_274_ = l_Lasm_JS_readField___redArg(v___x_271_, v_d_272_, v___x_273_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_282_; 
lean_dec_ref(v___x_271_);
v_a_275_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_282_ == 0)
{
v___x_277_ = v___x_274_;
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_274_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_280_; 
if (v_isShared_278_ == 0)
{
v___x_280_ = v___x_277_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_a_275_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
else
{
lean_object* v_a_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v_a_283_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_283_);
lean_dec_ref_known(v___x_274_, 1);
v___x_284_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__1));
v___x_285_ = l_Lasm_JS_readField___redArg(v___x_271_, v_d_272_, v___x_284_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
lean_dec(v_a_283_);
v_a_286_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_285_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_285_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_286_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
else
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_302_; 
v_a_294_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_302_ == 0)
{
v___x_296_ = v___x_285_;
v_isShared_297_ = v_isSharedCheck_302_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_285_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_302_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_298_; lean_object* v___x_300_; 
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v_a_283_);
lean_ctor_set(v___x_298_, 1, v_a_294_);
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 0, v___x_298_);
v___x_300_ = v___x_296_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_298_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___boxed(lean_object* v___x_303_, lean_object* v_d_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lasm_JS_Node_instFromJSExecFileResult___lam__0(v___x_303_, v_d_304_);
lean_dec(v_d_304_);
return v_res_305_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSExecFileResult___closed__0(void){
_start:
{
lean_object* v___x_306_; lean_object* v___f_307_; 
v___x_306_ = l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array;
v___f_307_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___boxed), 2, 1);
lean_closure_set(v___f_307_, 0, v___x_306_);
return v___f_307_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSExecFileResult___closed__2(void){
_start:
{
uint8_t v___x_309_; lean_object* v___x_310_; lean_object* v___f_311_; lean_object* v___x_312_; 
v___x_309_ = 0;
v___x_310_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___closed__1));
v___f_311_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSExecFileResult___closed__0, &l_Lasm_JS_Node_instFromJSExecFileResult___closed__0_once, _init_l_Lasm_JS_Node_instFromJSExecFileResult___closed__0);
v___x_312_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_312_, 0, v___f_311_);
lean_ctor_set(v___x_312_, 1, v___x_310_);
lean_ctor_set_uint8(v___x_312_, sizeof(void*)*2, v___x_309_);
return v___x_312_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSExecFileResult(void){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSExecFileResult___closed__2, &l_Lasm_JS_Node_instFromJSExecFileResult___closed__2_once, _init_l_Lasm_JS_Node_instFromJSExecFileResult___closed__2);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx(lean_object* v_x_314_){
_start:
{
if (lean_obj_tag(v_x_314_) == 0)
{
lean_object* v___x_315_; 
v___x_315_ = lean_unsigned_to_nat(0u);
return v___x_315_;
}
else
{
lean_object* v___x_316_; 
v___x_316_ = lean_unsigned_to_nat(1u);
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx___boxed(lean_object* v_x_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorIdx(v_x_317_);
lean_dec_ref(v_x_317_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(lean_object* v_t_319_, lean_object* v_k_320_){
_start:
{
lean_object* v_value_321_; lean_object* v___x_322_; 
v_value_321_ = lean_ctor_get(v_t_319_, 0);
lean_inc_ref(v_value_321_);
lean_dec_ref(v_t_319_);
v___x_322_ = lean_apply_1(v_k_320_, v_value_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim(lean_object* v_motive_323_, lean_object* v_ctorIdx_324_, lean_object* v_t_325_, lean_object* v_h_326_, lean_object* v_k_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_325_, v_k_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___boxed(lean_object* v_motive_329_, lean_object* v_ctorIdx_330_, lean_object* v_t_331_, lean_object* v_h_332_, lean_object* v_k_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim(v_motive_329_, v_ctorIdx_330_, v_t_331_, v_h_332_, v_k_333_);
lean_dec(v_ctorIdx_330_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim___redArg(lean_object* v_t_335_, lean_object* v_sequence_336_){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_335_, v_sequence_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_sequence_elim(lean_object* v_motive_338_, lean_object* v_t_339_, lean_object* v_h_340_, lean_object* v_sequence_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_339_, v_sequence_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim___redArg(lean_object* v_t_343_, lean_object* v_domString_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_343_, v_domString_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_SequenceOfAnyOrDOMString_domString_elim(lean_object* v_motive_346_, lean_object* v_t_347_, lean_object* v_h_348_, lean_object* v_domString_349_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_Lasm_JS_Node_SequenceOfAnyOrDOMString_ctorElim___redArg(v_t_347_, v_domString_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0(lean_object* v_x_351_){
_start:
{
lean_inc(v_x_351_);
return v_x_351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0___boxed(lean_object* v_x_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__0(v_x_352_);
lean_dec(v_x_352_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1(lean_object* v___f_373_, lean_object* v_x_374_){
_start:
{
if (lean_obj_tag(v_x_374_) == 0)
{
lean_object* v_value_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_386_; 
v_value_375_ = lean_ctor_get(v_x_374_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v_x_374_);
if (v_isSharedCheck_386_ == 0)
{
v___x_377_ = v_x_374_;
v_isShared_378_ = v_isSharedCheck_386_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_value_375_);
lean_dec(v_x_374_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_386_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_379_; size_t v_sz_380_; size_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_384_; 
v___x_379_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString___lam__1___closed__9));
v_sz_380_ = lean_array_size(v_value_375_);
v___x_381_ = ((size_t)0ULL);
v___x_382_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_379_, v___f_373_, v_sz_380_, v___x_381_, v_value_375_);
if (v_isShared_378_ == 0)
{
lean_ctor_set_tag(v___x_377_, 7);
lean_ctor_set(v___x_377_, 0, v___x_382_);
v___x_384_ = v___x_377_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_382_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
else
{
lean_object* v_value_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_394_; 
lean_dec_ref(v___f_373_);
v_value_387_ = lean_ctor_get(v_x_374_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v_x_374_);
if (v_isSharedCheck_394_ == 0)
{
v___x_389_ = v_x_374_;
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_value_387_);
lean_dec(v_x_374_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_392_; 
if (v_isShared_390_ == 0)
{
lean_ctor_set_tag(v___x_389_, 4);
v___x_392_ = v___x_389_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_value_387_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeArrayDataSequenceOfAnyOrDOMString___lam__0(lean_object* v_value_399_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_400_, 0, v_value_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringSequenceOfAnyOrDOMString___lam__0(lean_object* v_value_403_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_404_, 0, v_value_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSpawnOptions___lam__0(lean_object* v___f_411_, lean_object* v___x_412_, lean_object* v___f_413_, lean_object* v___x_414_, lean_object* v___f_415_, lean_object* v___f_416_, lean_object* v___f_417_, lean_object* v___f_418_, lean_object* v___f_419_, lean_object* v_d_420_){
_start:
{
lean_object* v_cwd_421_; lean_object* v_env_422_; lean_object* v_argv0_423_; lean_object* v_stdio_424_; lean_object* v_detached_425_; lean_object* v_uid_426_; lean_object* v_gid_427_; lean_object* v_serialization_428_; lean_object* v_shell_429_; lean_object* v_windowsVerbatimArguments_430_; lean_object* v_windowsHide_431_; lean_object* v_signal_432_; lean_object* v_timeout_433_; lean_object* v_killSignal_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v_cwd_421_ = lean_ctor_get(v_d_420_, 0);
lean_inc(v_cwd_421_);
v_env_422_ = lean_ctor_get(v_d_420_, 1);
lean_inc(v_env_422_);
v_argv0_423_ = lean_ctor_get(v_d_420_, 2);
lean_inc(v_argv0_423_);
v_stdio_424_ = lean_ctor_get(v_d_420_, 3);
lean_inc(v_stdio_424_);
v_detached_425_ = lean_ctor_get(v_d_420_, 4);
lean_inc(v_detached_425_);
v_uid_426_ = lean_ctor_get(v_d_420_, 5);
lean_inc(v_uid_426_);
v_gid_427_ = lean_ctor_get(v_d_420_, 6);
lean_inc(v_gid_427_);
v_serialization_428_ = lean_ctor_get(v_d_420_, 7);
lean_inc(v_serialization_428_);
v_shell_429_ = lean_ctor_get(v_d_420_, 8);
lean_inc(v_shell_429_);
v_windowsVerbatimArguments_430_ = lean_ctor_get(v_d_420_, 9);
lean_inc(v_windowsVerbatimArguments_430_);
v_windowsHide_431_ = lean_ctor_get(v_d_420_, 10);
lean_inc(v_windowsHide_431_);
v_signal_432_ = lean_ctor_get(v_d_420_, 11);
lean_inc(v_signal_432_);
v_timeout_433_ = lean_ctor_get(v_d_420_, 12);
lean_inc(v_timeout_433_);
v_killSignal_434_ = lean_ctor_get(v_d_420_, 13);
lean_inc(v_killSignal_434_);
lean_dec_ref(v_d_420_);
v___x_435_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__0));
v___x_436_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_411_, v_cwd_421_);
v___x_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__1));
v___x_439_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_412_, v_env_422_);
v___x_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_438_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__0));
lean_inc_ref(v___f_413_);
v___x_442_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_413_, v_argv0_423_);
v___x_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_441_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
v___x_444_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__1));
v___x_445_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_414_, v_stdio_424_);
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_444_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
v___x_447_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__2));
lean_inc_ref_n(v___f_415_, 2);
v___x_448_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_415_, v_detached_425_);
v___x_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_449_, 0, v___x_447_);
lean_ctor_set(v___x_449_, 1, v___x_448_);
v___x_450_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__6));
lean_inc_ref_n(v___f_416_, 2);
v___x_451_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_416_, v_uid_426_);
v___x_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_450_);
lean_ctor_set(v___x_452_, 1, v___x_451_);
v___x_453_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__7));
v___x_454_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_416_, v_gid_427_);
v___x_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_453_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
v___x_456_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__3));
v___x_457_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_413_, v_serialization_428_);
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_456_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___x_459_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__10));
v___x_460_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_417_, v_shell_429_);
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_459_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
v___x_462_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__9));
v___x_463_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_415_, v_windowsVerbatimArguments_430_);
v___x_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__8));
v___x_466_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_415_, v_windowsHide_431_);
v___x_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_467_, 0, v___x_465_);
lean_ctor_set(v___x_467_, 1, v___x_466_);
v___x_468_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__11));
v___x_469_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_418_, v_signal_432_);
v___x_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_468_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__3));
v___x_472_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_416_, v_timeout_433_);
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__5));
v___x_475_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_419_, v_killSignal_434_);
v___x_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_474_);
lean_ctor_set(v___x_476_, 1, v___x_475_);
v___x_477_ = lean_unsigned_to_nat(14u);
v___x_478_ = lean_mk_empty_array_with_capacity(v___x_477_);
v___x_479_ = lean_array_push(v___x_478_, v___x_437_);
v___x_480_ = lean_array_push(v___x_479_, v___x_440_);
v___x_481_ = lean_array_push(v___x_480_, v___x_443_);
v___x_482_ = lean_array_push(v___x_481_, v___x_446_);
v___x_483_ = lean_array_push(v___x_482_, v___x_449_);
v___x_484_ = lean_array_push(v___x_483_, v___x_452_);
v___x_485_ = lean_array_push(v___x_484_, v___x_455_);
v___x_486_ = lean_array_push(v___x_485_, v___x_458_);
v___x_487_ = lean_array_push(v___x_486_, v___x_461_);
v___x_488_ = lean_array_push(v___x_487_, v___x_464_);
v___x_489_ = lean_array_push(v___x_488_, v___x_467_);
v___x_490_ = lean_array_push(v___x_489_, v___x_470_);
v___x_491_ = lean_array_push(v___x_490_, v___x_473_);
v___x_492_ = lean_array_push(v___x_491_, v___x_476_);
v___x_493_ = l_Lasm_JS_Web_Support_fields(v___x_492_);
lean_dec_ref(v___x_492_);
return v___x_493_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSSpawnOptions___closed__0(void){
_start:
{
lean_object* v___f_494_; lean_object* v___f_495_; lean_object* v___f_496_; lean_object* v___f_497_; lean_object* v___f_498_; lean_object* v___x_499_; lean_object* v___f_500_; lean_object* v___x_501_; lean_object* v___f_502_; lean_object* v___f_503_; 
v___f_494_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__4));
v___f_495_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__6));
v___f_496_ = ((lean_object*)(l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0));
v___f_497_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__3));
v___f_498_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__5));
v___x_499_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSequenceOfAnyOrDOMString));
v___f_500_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__1));
v___x_501_ = lean_obj_once(&l_Lasm_JS_Node_instToJSExecFileOptions___closed__2, &l_Lasm_JS_Node_instToJSExecFileOptions___closed__2_once, _init_l_Lasm_JS_Node_instToJSExecFileOptions___closed__2);
v___f_502_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___closed__0));
v___f_503_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0), 10, 9);
lean_closure_set(v___f_503_, 0, v___f_502_);
lean_closure_set(v___f_503_, 1, v___x_501_);
lean_closure_set(v___f_503_, 2, v___f_500_);
lean_closure_set(v___f_503_, 3, v___x_499_);
lean_closure_set(v___f_503_, 4, v___f_498_);
lean_closure_set(v___f_503_, 5, v___f_497_);
lean_closure_set(v___f_503_, 6, v___f_496_);
lean_closure_set(v___f_503_, 7, v___f_495_);
lean_closure_set(v___f_503_, 8, v___f_494_);
return v___f_503_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSSpawnOptions(void){
_start:
{
lean_object* v___f_504_; 
v___f_504_ = lean_obj_once(&l_Lasm_JS_Node_instToJSSpawnOptions___closed__0, &l_Lasm_JS_Node_instToJSSpawnOptions___closed__0_once, _init_l_Lasm_JS_Node_instToJSSpawnOptions___closed__0);
return v___f_504_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_514_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__8));
v___x_515_ = lean_unsigned_to_nat(46u);
v___x_516_ = lean_unsigned_to_nat(193u);
v___x_517_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__7));
v___x_518_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__6));
v___x_519_ = l_mkPanicMessageWithDecl(v___x_518_, v___x_517_, v___x_516_, v___x_515_, v___x_514_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1(lean_object* v_context_522_, lean_object* v_d_523_){
_start:
{
lean_object* v___y_529_; lean_object* v___y_530_; lean_object* v___y_535_; lean_object* v_received_536_; lean_object* v___y_555_; lean_object* v_a_558_; lean_object* v_a_583_; 
switch(lean_obj_tag(v_d_523_))
{
case 1:
{
goto v___jp_525_;
}
case 0:
{
goto v___jp_525_;
}
default: 
{
switch(lean_obj_tag(v_d_523_))
{
case 3:
{
double v_n_586_; lean_object* v___x_587_; 
v_n_586_ = lean_ctor_get_float(v_d_523_, 0);
v___x_587_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_586_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v___x_588_; 
v___x_588_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__11));
v_a_558_ = v___x_588_;
goto v___jp_557_;
}
else
{
lean_object* v_val_589_; 
lean_dec_ref_known(v_d_523_, 0);
v_val_589_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_val_589_);
lean_dec_ref_known(v___x_587_, 1);
v_a_583_ = v_val_589_;
goto v___jp_582_;
}
}
case 5:
{
lean_object* v_i_590_; 
v_i_590_ = lean_ctor_get(v_d_523_, 0);
lean_inc(v_i_590_);
lean_dec_ref_known(v_d_523_, 1);
v_a_583_ = v_i_590_;
goto v___jp_582_;
}
default: 
{
lean_object* v___x_591_; 
v___x_591_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v_a_558_ = v___x_591_;
goto v___jp_557_;
}
}
}
}
v___jp_525_:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = lean_box(0);
v___x_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
return v___x_527_;
}
v___jp_528_:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_531_ = lean_string_append(v___y_529_, v___y_530_);
lean_dec_ref(v___y_530_);
v___x_532_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
v___x_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
return v___x_533_;
}
v___jp_534_:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; 
v___x_537_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__0));
v___x_538_ = lean_string_append(v___x_537_, v_context_522_);
v___x_539_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__1));
v___x_540_ = lean_string_append(v___x_538_, v___x_539_);
v___x_541_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__2));
v___x_542_ = lean_string_append(v___x_540_, v___x_541_);
v___x_543_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__3));
v___x_544_ = lean_string_append(v___x_542_, v___x_543_);
v___x_545_ = lean_string_append(v___x_544_, v_received_536_);
lean_dec_ref(v_received_536_);
v___x_546_ = lean_string_utf8_byte_size(v___y_535_);
v___x_547_ = lean_unsigned_to_nat(0u);
v___x_548_ = lean_nat_dec_eq(v___x_546_, v___x_547_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_549_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__4));
v___x_550_ = lean_string_append(v___x_549_, v___y_535_);
v___x_551_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__5));
v___x_552_ = lean_string_append(v___x_550_, v___x_551_);
v___y_529_ = v___x_545_;
v___y_530_ = v___x_552_;
goto v___jp_528_;
}
else
{
lean_object* v___x_553_; 
v___x_553_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___y_529_ = v___x_545_;
v___y_530_ = v___x_553_;
goto v___jp_528_;
}
}
v___jp_554_:
{
lean_object* v___x_556_; 
v___x_556_ = l_Lasm_JS_Data_describe(v_d_523_);
v___y_535_ = v___y_555_;
v_received_536_ = v___x_556_;
goto v___jp_534_;
}
v___jp_557_:
{
if (lean_obj_tag(v_d_523_) == 9)
{
lean_object* v_value_559_; lean_object* v_description_560_; lean_object* v___x_561_; uint8_t v___x_562_; 
v_value_559_ = lean_ctor_get(v_d_523_, 0);
v_description_560_ = lean_ctor_get(v_d_523_, 1);
v___x_561_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_562_ = lean_string_dec_eq(v_description_560_, v___x_561_);
if (v___x_562_ == 0)
{
v___y_555_ = v_a_558_;
goto v___jp_554_;
}
else
{
lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_579_; 
lean_inc(v_value_559_);
v_isSharedCheck_579_ = !lean_is_exclusive(v_d_523_);
if (v_isSharedCheck_579_ == 0)
{
lean_object* v_unused_580_; lean_object* v_unused_581_; 
v_unused_580_ = lean_ctor_get(v_d_523_, 1);
lean_dec(v_unused_580_);
v_unused_581_ = lean_ctor_get(v_d_523_, 0);
lean_dec(v_unused_581_);
v___x_564_ = v_d_523_;
v_isShared_565_ = v_isSharedCheck_579_;
goto v_resetjp_563_;
}
else
{
lean_dec(v_d_523_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_579_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
uint32_t v___x_566_; uint64_t v___x_567_; lean_object* v___x_569_; 
v___x_566_ = 206;
v___x_567_ = 0ULL;
lean_inc(v_value_559_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 1, v___x_561_);
v___x_569_ = v___x_564_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_value_559_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v___x_561_);
v___x_569_ = v_reuseFailAlloc_578_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
uint32_t v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lasm_js_value_handle(v_value_559_);
lean_dec(v_value_559_);
v___x_571_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_566_, v___x_567_, v___x_569_, v___x_570_);
lean_dec_ref(v___x_569_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v_a_572_; uint8_t v___x_573_; 
v_a_572_ = lean_ctor_get(v___x_571_, 0);
lean_inc(v_a_572_);
lean_dec_ref_known(v___x_571_, 1);
v___x_573_ = lean_string_validate_utf8(v_a_572_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec(v_a_572_);
v___x_574_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9);
v___x_575_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_574_);
v___y_535_ = v_a_558_;
v_received_536_ = v___x_575_;
goto v___jp_534_;
}
else
{
lean_object* v___x_576_; 
v___x_576_ = lean_string_from_utf8_unchecked(v_a_572_);
v___y_535_ = v_a_558_;
v_received_536_ = v___x_576_;
goto v___jp_534_;
}
}
else
{
lean_object* v___x_577_; 
lean_dec_ref_known(v___x_571_, 1);
v___x_577_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__10));
v___y_535_ = v_a_558_;
v_received_536_ = v___x_577_;
goto v___jp_534_;
}
}
}
}
}
else
{
v___y_555_ = v_a_558_;
goto v___jp_554_;
}
}
v___jp_582_:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_584_, 0, v_a_583_);
v___x_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
return v___x_585_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___boxed(lean_object* v_context_592_, lean_object* v_d_593_, lean_object* v_a_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1(v_context_592_, v_d_593_);
lean_dec_ref(v_context_592_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(lean_object* v_context_596_, lean_object* v_bytes_597_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_597_);
if (lean_obj_tag(v___x_599_) == 0)
{
lean_object* v_a_600_; lean_object* v___x_601_; 
v_a_600_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_a_600_);
lean_dec_ref_known(v___x_599_, 1);
v___x_601_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1(v_context_596_, v_a_600_);
return v___x_601_;
}
else
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
v_a_602_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_599_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_599_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_a_602_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0___boxed(lean_object* v_context_610_, lean_object* v_bytes_611_, lean_object* v_a_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v_context_610_, v_bytes_611_);
lean_dec_ref(v_bytes_611_);
lean_dec_ref(v_context_610_);
return v_res_613_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0(void){
_start:
{
uint8_t v___x_614_; uint64_t v___x_615_; 
v___x_614_ = 0;
v___x_615_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(lean_object* v_o_617_, lean_object* v_key_618_){
_start:
{
lean_object* v_k_620_; lean_object* v___x_621_; 
v_k_620_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_620_, 0, v_key_618_);
v___x_621_ = l_Lasm_JS_Wire_encodeIO(v_k_620_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v_a_622_; uint32_t v___x_623_; uint32_t v___x_624_; uint64_t v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v_a_622_ = lean_ctor_get(v___x_621_, 0);
lean_inc(v_a_622_);
lean_dec_ref_known(v___x_621_, 1);
v___x_623_ = 203;
v___x_624_ = lasm_js_value_handle(v_o_617_);
v___x_625_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_626_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_627_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_627_, 0, v_o_617_);
lean_ctor_set(v___x_627_, 1, v___x_626_);
v___x_628_ = lean_unsigned_to_nat(2u);
v___x_629_ = lean_mk_empty_array_with_capacity(v___x_628_);
lean_inc_ref(v_k_620_);
v___x_630_ = lean_array_push(v___x_629_, v_k_620_);
v___x_631_ = lean_array_push(v___x_630_, v___x_627_);
v___x_632_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
v___x_633_ = lasm_js_call(v___x_623_, v___x_624_, v___x_625_, v_a_622_, v___x_632_);
lean_dec_ref_known(v___x_632_, 1);
lean_dec(v_a_622_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_a_634_);
lean_dec_ref_known(v___x_633_, 1);
v___x_635_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_636_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_620_);
v___x_637_ = lean_string_append(v___x_635_, v___x_636_);
lean_dec_ref(v___x_636_);
v___x_638_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0(v___x_637_, v_a_634_);
lean_dec(v_a_634_);
lean_dec_ref(v___x_637_);
return v___x_638_;
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
lean_dec_ref_known(v_k_620_, 1);
v_a_639_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_633_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_633_);
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
else
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
lean_dec_ref_known(v_k_620_, 1);
lean_dec(v_o_617_);
v_a_647_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_621_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_621_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___boxed(lean_object* v_o_655_, lean_object* v_key_656_, lean_object* v_a_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_o_655_, v_key_656_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode(lean_object* v_self_660_){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_exitCode___closed__0));
v___x_663_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_660_, v___x_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_exitCode___boxed(lean_object* v_self_664_, lean_object* v_a_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lasm_JS_Node_ChildProcess_exitCode(v_self_664_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed(lean_object* v_self_668_){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_killed___closed__0));
v___x_671_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_668_, v___x_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_killed___boxed(lean_object* v_self_672_, lean_object* v_a_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lasm_JS_Node_ChildProcess_killed(v_self_672_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid(lean_object* v_self_676_){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_678_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_pid___closed__0));
v___x_679_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0(v_self_676_, v___x_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_pid___boxed(lean_object* v_self_680_, lean_object* v_a_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Lasm_JS_Node_ChildProcess_pid(v_self_680_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(lean_object* v_o_683_, lean_object* v_key_684_){
_start:
{
lean_object* v_k_686_; lean_object* v___x_687_; 
v_k_686_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_686_, 0, v_key_684_);
v___x_687_ = l_Lasm_JS_Wire_encodeIO(v_k_686_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; uint32_t v___x_689_; uint32_t v___x_690_; uint64_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_a_688_);
lean_dec_ref_known(v___x_687_, 1);
v___x_689_ = 203;
v___x_690_ = lasm_js_value_handle(v_o_683_);
v___x_691_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_692_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_693_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_693_, 0, v_o_683_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = lean_unsigned_to_nat(2u);
v___x_695_ = lean_mk_empty_array_with_capacity(v___x_694_);
lean_inc_ref(v_k_686_);
v___x_696_ = lean_array_push(v___x_695_, v_k_686_);
v___x_697_ = lean_array_push(v___x_696_, v___x_693_);
v___x_698_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
v___x_699_ = lasm_js_call(v___x_689_, v___x_690_, v___x_691_, v_a_688_, v___x_698_);
lean_dec_ref_known(v___x_698_, 1);
lean_dec(v_a_688_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
lean_inc(v_a_700_);
lean_dec_ref_known(v___x_699_, 1);
v___x_701_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_702_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_686_);
v___x_703_ = lean_string_append(v___x_701_, v___x_702_);
lean_dec_ref(v___x_702_);
v___x_704_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_703_, v_a_700_);
lean_dec(v_a_700_);
lean_dec_ref(v___x_703_);
return v___x_704_;
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_712_; 
lean_dec_ref_known(v_k_686_, 1);
v_a_705_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_712_ == 0)
{
v___x_707_ = v___x_699_;
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_699_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_705_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
lean_dec_ref_known(v_k_686_, 1);
lean_dec(v_o_683_);
v_a_713_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_687_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_687_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0___boxed(lean_object* v_o_721_, lean_object* v_key_722_, lean_object* v_a_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(v_o_721_, v_key_722_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode(lean_object* v_self_726_){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_signalCode___closed__0));
v___x_729_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_signalCode_spec__0(v_self_726_, v___x_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_signalCode___boxed(lean_object* v_self_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lasm_JS_Node_ChildProcess_signalCode(v_self_730_);
return v_res_732_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_735_ = lean_string_utf8_byte_size(v___x_734_);
return v___x_735_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_736_ = lean_unsigned_to_nat(0u);
v___x_737_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__1);
v___x_738_ = lean_nat_dec_eq(v___x_737_, v___x_736_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(lean_object* v_context_740_, lean_object* v_d_741_){
_start:
{
lean_object* v___y_747_; lean_object* v___y_748_; 
switch(lean_obj_tag(v_d_741_))
{
case 1:
{
goto v___jp_743_;
}
case 0:
{
goto v___jp_743_;
}
default: 
{
if (lean_obj_tag(v_d_741_) == 9)
{
lean_object* v_value_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v_value_752_ = lean_ctor_get(v_d_741_, 0);
lean_inc(v_value_752_);
lean_dec_ref_known(v_d_741_, 2);
v___x_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_753_, 0, v_value_752_);
v___x_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
return v___x_754_;
}
else
{
lean_object* v___x_755_; lean_object* v_received_757_; 
v___x_755_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
if (lean_obj_tag(v_d_741_) == 9)
{
lean_object* v_value_771_; lean_object* v_description_772_; uint8_t v___x_773_; 
v_value_771_ = lean_ctor_get(v_d_741_, 0);
v_description_772_ = lean_ctor_get(v_d_741_, 1);
v___x_773_ = lean_string_dec_eq(v_description_772_, v___x_755_);
if (v___x_773_ == 0)
{
goto v___jp_769_;
}
else
{
uint32_t v___x_774_; uint64_t v___x_775_; lean_object* v___x_776_; uint32_t v___x_777_; lean_object* v___x_778_; 
lean_inc_n(v_value_771_, 2);
lean_dec_ref_known(v_d_741_, 2);
v___x_774_ = 206;
v___x_775_ = 0ULL;
v___x_776_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_776_, 0, v_value_771_);
lean_ctor_set(v___x_776_, 1, v___x_755_);
v___x_777_ = lasm_js_value_handle(v_value_771_);
lean_dec(v_value_771_);
v___x_778_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_774_, v___x_775_, v___x_776_, v___x_777_);
lean_dec_ref_known(v___x_776_, 2);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; uint8_t v___x_780_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_778_, 1);
v___x_780_ = lean_string_validate_utf8(v_a_779_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; 
lean_dec(v_a_779_);
v___x_781_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9);
v___x_782_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_781_);
v_received_757_ = v___x_782_;
goto v___jp_756_;
}
else
{
lean_object* v___x_783_; 
v___x_783_ = lean_string_from_utf8_unchecked(v_a_779_);
v_received_757_ = v___x_783_;
goto v___jp_756_;
}
}
else
{
lean_object* v___x_784_; 
lean_dec_ref_known(v___x_778_, 1);
v___x_784_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__10));
v_received_757_ = v___x_784_;
goto v___jp_756_;
}
}
}
else
{
goto v___jp_769_;
}
v___jp_756_:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_758_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__0));
v___x_759_ = lean_string_append(v___x_758_, v_context_740_);
v___x_760_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__1));
v___x_761_ = lean_string_append(v___x_759_, v___x_760_);
v___x_762_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__0));
v___x_763_ = lean_string_append(v___x_761_, v___x_762_);
v___x_764_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__3));
v___x_765_ = lean_string_append(v___x_763_, v___x_764_);
v___x_766_ = lean_string_append(v___x_765_, v_received_757_);
lean_dec_ref(v_received_757_);
v___x_767_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_767_ == 0)
{
lean_object* v___x_768_; 
v___x_768_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___y_747_ = v___x_766_;
v___y_748_ = v___x_768_;
goto v___jp_746_;
}
else
{
v___y_747_ = v___x_766_;
v___y_748_ = v___x_755_;
goto v___jp_746_;
}
}
v___jp_769_:
{
lean_object* v___x_770_; 
v___x_770_ = l_Lasm_JS_Data_describe(v_d_741_);
v_received_757_ = v___x_770_;
goto v___jp_756_;
}
}
}
}
v___jp_743_:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_box(0);
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
return v___x_745_;
}
v___jp_746_:
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_749_ = lean_string_append(v___y_747_, v___y_748_);
v___x_750_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
v___x_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
return v___x_751_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___boxed(lean_object* v_context_785_, lean_object* v_d_786_, lean_object* v_a_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_785_, v_d_786_);
lean_dec_ref(v_context_785_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(lean_object* v_context_789_, lean_object* v_bytes_790_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_790_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; lean_object* v___x_794_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
v___x_794_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1(v_context_789_, v_a_793_);
return v___x_794_;
}
else
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
v_a_795_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_792_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_792_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0___boxed(lean_object* v_context_803_, lean_object* v_bytes_804_, lean_object* v_a_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v_context_803_, v_bytes_804_);
lean_dec_ref(v_bytes_804_);
lean_dec_ref(v_context_803_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(lean_object* v_o_807_, lean_object* v_key_808_){
_start:
{
lean_object* v_k_810_; lean_object* v___x_811_; 
v_k_810_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_810_, 0, v_key_808_);
v___x_811_ = l_Lasm_JS_Wire_encodeIO(v_k_810_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; uint32_t v___x_813_; uint32_t v___x_814_; uint64_t v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_a_812_);
lean_dec_ref_known(v___x_811_, 1);
v___x_813_ = 203;
v___x_814_ = lasm_js_value_handle(v_o_807_);
v___x_815_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_816_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_817_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_817_, 0, v_o_807_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
v___x_818_ = lean_unsigned_to_nat(2u);
v___x_819_ = lean_mk_empty_array_with_capacity(v___x_818_);
lean_inc_ref(v_k_810_);
v___x_820_ = lean_array_push(v___x_819_, v_k_810_);
v___x_821_ = lean_array_push(v___x_820_, v___x_817_);
v___x_822_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
v___x_823_ = lasm_js_call(v___x_813_, v___x_814_, v___x_815_, v_a_812_, v___x_822_);
lean_dec_ref_known(v___x_822_, 1);
lean_dec(v_a_812_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_824_);
lean_dec_ref_known(v___x_823_, 1);
v___x_825_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_826_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_810_);
v___x_827_ = lean_string_append(v___x_825_, v___x_826_);
lean_dec_ref(v___x_826_);
v___x_828_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0(v___x_827_, v_a_824_);
lean_dec(v_a_824_);
lean_dec_ref(v___x_827_);
return v___x_828_;
}
else
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
lean_dec_ref_known(v_k_810_, 1);
v_a_829_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_823_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_823_);
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
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
lean_dec_ref_known(v_k_810_, 1);
lean_dec(v_o_807_);
v_a_837_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_811_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_811_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0___boxed(lean_object* v_o_845_, lean_object* v_key_846_, lean_object* v_a_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_o_845_, v_key_846_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr(lean_object* v_self_849_){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_851_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__1));
v___x_852_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_849_, v___x_851_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stderr___boxed(lean_object* v_self_853_, lean_object* v_a_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lasm_JS_Node_ChildProcess_stderr(v_self_853_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(lean_object* v_context_857_, lean_object* v_d_858_){
_start:
{
lean_object* v___y_864_; lean_object* v___y_865_; 
switch(lean_obj_tag(v_d_858_))
{
case 1:
{
goto v___jp_860_;
}
case 0:
{
goto v___jp_860_;
}
default: 
{
if (lean_obj_tag(v_d_858_) == 9)
{
lean_object* v_value_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v_value_869_ = lean_ctor_get(v_d_858_, 0);
lean_inc(v_value_869_);
lean_dec_ref_known(v_d_858_, 2);
v___x_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_870_, 0, v_value_869_);
v___x_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
return v___x_871_;
}
else
{
lean_object* v___x_872_; lean_object* v_received_874_; 
v___x_872_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
if (lean_obj_tag(v_d_858_) == 9)
{
lean_object* v_value_888_; lean_object* v_description_889_; uint8_t v___x_890_; 
v_value_888_ = lean_ctor_get(v_d_858_, 0);
v_description_889_ = lean_ctor_get(v_d_858_, 1);
v___x_890_ = lean_string_dec_eq(v_description_889_, v___x_872_);
if (v___x_890_ == 0)
{
goto v___jp_886_;
}
else
{
uint32_t v___x_891_; uint64_t v___x_892_; lean_object* v___x_893_; uint32_t v___x_894_; lean_object* v___x_895_; 
lean_inc_n(v_value_888_, 2);
lean_dec_ref_known(v_d_858_, 2);
v___x_891_ = 206;
v___x_892_ = 0ULL;
v___x_893_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_893_, 0, v_value_888_);
lean_ctor_set(v___x_893_, 1, v___x_872_);
v___x_894_ = lasm_js_value_handle(v_value_888_);
lean_dec(v_value_888_);
v___x_895_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_891_, v___x_892_, v___x_893_, v___x_894_);
lean_dec_ref_known(v___x_893_, 2);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; uint8_t v___x_897_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v___x_895_, 1);
v___x_897_ = lean_string_validate_utf8(v_a_896_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; lean_object* v___x_899_; 
lean_dec(v_a_896_);
v___x_898_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9);
v___x_899_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_898_);
v_received_874_ = v___x_899_;
goto v___jp_873_;
}
else
{
lean_object* v___x_900_; 
v___x_900_ = lean_string_from_utf8_unchecked(v_a_896_);
v_received_874_ = v___x_900_;
goto v___jp_873_;
}
}
else
{
lean_object* v___x_901_; 
lean_dec_ref_known(v___x_895_, 1);
v___x_901_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__10));
v_received_874_ = v___x_901_;
goto v___jp_873_;
}
}
}
else
{
goto v___jp_886_;
}
v___jp_873_:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; uint8_t v___x_884_; 
v___x_875_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__0));
v___x_876_ = lean_string_append(v___x_875_, v_context_857_);
v___x_877_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__1));
v___x_878_ = lean_string_append(v___x_876_, v___x_877_);
v___x_879_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___closed__0));
v___x_880_ = lean_string_append(v___x_878_, v___x_879_);
v___x_881_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__3));
v___x_882_ = lean_string_append(v___x_880_, v___x_881_);
v___x_883_ = lean_string_append(v___x_882_, v_received_874_);
lean_dec_ref(v_received_874_);
v___x_884_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_884_ == 0)
{
lean_object* v___x_885_; 
v___x_885_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___y_864_ = v___x_883_;
v___y_865_ = v___x_885_;
goto v___jp_863_;
}
else
{
v___y_864_ = v___x_883_;
v___y_865_ = v___x_872_;
goto v___jp_863_;
}
}
v___jp_886_:
{
lean_object* v___x_887_; 
v___x_887_ = l_Lasm_JS_Data_describe(v_d_858_);
v_received_874_ = v___x_887_;
goto v___jp_873_;
}
}
}
}
v___jp_860_:
{
lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_861_ = lean_box(0);
v___x_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
return v___x_862_;
}
v___jp_863_:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_866_ = lean_string_append(v___y_864_, v___y_865_);
v___x_867_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
v___x_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
return v___x_868_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1___boxed(lean_object* v_context_902_, lean_object* v_d_903_, lean_object* v_a_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_902_, v_d_903_);
lean_dec_ref(v_context_902_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(lean_object* v_context_906_, lean_object* v_bytes_907_){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_907_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_911_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_909_, 1);
v___x_911_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0_spec__1(v_context_906_, v_a_910_);
return v___x_911_;
}
else
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
v_a_912_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_909_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_909_);
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
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0___boxed(lean_object* v_context_920_, lean_object* v_bytes_921_, lean_object* v_a_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v_context_920_, v_bytes_921_);
lean_dec_ref(v_bytes_921_);
lean_dec_ref(v_context_920_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(lean_object* v_o_924_, lean_object* v_key_925_){
_start:
{
lean_object* v_k_927_; lean_object* v___x_928_; 
v_k_927_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_927_, 0, v_key_925_);
v___x_928_ = l_Lasm_JS_Wire_encodeIO(v_k_927_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; uint32_t v___x_930_; uint32_t v___x_931_; uint64_t v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v___x_928_, 1);
v___x_930_ = 203;
v___x_931_ = lasm_js_value_handle(v_o_924_);
v___x_932_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
v___x_933_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_934_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_934_, 0, v_o_924_);
lean_ctor_set(v___x_934_, 1, v___x_933_);
v___x_935_ = lean_unsigned_to_nat(2u);
v___x_936_ = lean_mk_empty_array_with_capacity(v___x_935_);
lean_inc_ref(v_k_927_);
v___x_937_ = lean_array_push(v___x_936_, v_k_927_);
v___x_938_ = lean_array_push(v___x_937_, v___x_934_);
v___x_939_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_939_, 0, v___x_938_);
v___x_940_ = lasm_js_call(v___x_930_, v___x_931_, v___x_932_, v_a_929_, v___x_939_);
lean_dec_ref_known(v___x_939_, 1);
lean_dec(v_a_929_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_940_, 1);
v___x_942_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__1));
v___x_943_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_927_);
v___x_944_ = lean_string_append(v___x_942_, v___x_943_);
lean_dec_ref(v___x_943_);
v___x_945_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0_spec__0(v___x_944_, v_a_941_);
lean_dec(v_a_941_);
lean_dec_ref(v___x_944_);
return v___x_945_;
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec_ref_known(v_k_927_, 1);
v_a_946_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_940_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_940_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec_ref_known(v_k_927_, 1);
lean_dec(v_o_924_);
v_a_954_ = lean_ctor_get(v___x_928_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_928_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_928_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0___boxed(lean_object* v_o_962_, lean_object* v_key_963_, lean_object* v_a_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_o_962_, v_key_963_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin(lean_object* v_self_967_){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_969_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_stdin___closed__0));
v___x_970_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stdin_spec__0(v_self_967_, v___x_969_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdin___boxed(lean_object* v_self_971_, lean_object* v_a_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Lasm_JS_Node_ChildProcess_stdin(v_self_971_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout(lean_object* v_self_974_){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__0));
v___x_977_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0(v_self_974_, v___x_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_stdout___boxed(lean_object* v_self_978_, lean_object* v_a_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Lasm_JS_Node_ChildProcess_stdout(v_self_978_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(lean_object* v_x_981_){
_start:
{
if (lean_obj_tag(v_x_981_) == 0)
{
lean_object* v___x_982_; 
v___x_982_ = lean_box(0);
return v___x_982_;
}
else
{
lean_object* v_val_983_; 
v_val_983_ = lean_ctor_get(v_x_981_, 0);
lean_inc(v_val_983_);
lean_dec_ref_known(v_x_981_, 1);
if (lean_obj_tag(v_val_983_) == 0)
{
double v_value_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
v_value_984_ = lean_ctor_get_float(v_val_983_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v_val_983_);
if (v_isSharedCheck_991_ == 0)
{
v___x_986_ = v_val_983_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_dec(v_val_983_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
lean_ctor_set_tag(v___x_986_, 3);
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_990_, 0, v_value_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
else
{
lean_object* v_value_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
v_value_992_ = lean_ctor_get(v_val_983_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v_val_983_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v_val_983_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_value_992_);
lean_dec(v_val_983_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
lean_ctor_set_tag(v___x_994_, 4);
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_value_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill(lean_object* v_self_1001_, lean_object* v_signal_1002_){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1004_ = ((lean_object*)(l_Lasm_JS_Node_ChildProcess_kill___closed__0));
v___x_1005_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_ChildProcess_kill_spec__0(v_signal_1002_);
v___x_1006_ = lean_unsigned_to_nat(1u);
v___x_1007_ = lean_mk_empty_array_with_capacity(v___x_1006_);
v___x_1008_ = lean_array_push(v___x_1007_, v___x_1005_);
v___x_1009_ = l_Lasm_JS_Web_Support_args(v___x_1008_);
v___x_1010_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_1001_, v___x_1004_, v___x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ChildProcess_kill___boxed(lean_object* v_self_1011_, lean_object* v_signal_1012_, lean_object* v_a_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lasm_JS_Node_ChildProcess_kill(v_self_1011_, v_signal_1012_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(lean_object* v_x_1015_){
_start:
{
if (lean_obj_tag(v_x_1015_) == 0)
{
lean_object* v___x_1016_; 
v___x_1016_ = lean_box(0);
return v___x_1016_;
}
else
{
lean_object* v_val_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1027_; 
v_val_1017_ = lean_ctor_get(v_x_1015_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v_x_1015_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1019_ = v_x_1015_;
v_isShared_1020_ = v_isSharedCheck_1027_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_val_1017_);
lean_dec(v_x_1015_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1027_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
size_t v_sz_1021_; size_t v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1025_; 
v_sz_1021_ = lean_array_size(v_val_1017_);
v___x_1022_ = ((size_t)0ULL);
v___x_1023_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_1021_, v___x_1022_, v_val_1017_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set_tag(v___x_1019_, 8);
lean_ctor_set(v___x_1019_, 0, v___x_1023_);
v___x_1025_ = v___x_1019_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v___x_1023_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(lean_object* v_x_1028_){
_start:
{
if (lean_obj_tag(v_x_1028_) == 0)
{
lean_object* v___x_1029_; 
v___x_1029_ = lean_box(0);
return v___x_1029_;
}
else
{
lean_object* v_val_1030_; 
v_val_1030_ = lean_ctor_get(v_x_1028_, 0);
lean_inc(v_val_1030_);
lean_dec_ref_known(v_x_1028_, 1);
if (lean_obj_tag(v_val_1030_) == 0)
{
lean_object* v_value_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
v_value_1031_ = lean_ctor_get(v_val_1030_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v_val_1030_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v_val_1030_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_value_1031_);
lean_dec(v_val_1030_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
lean_ctor_set_tag(v___x_1033_, 4);
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_value_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
else
{
lean_object* v_value_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
v_value_1039_ = lean_ctor_get(v_val_1030_, 0);
lean_inc(v_value_1039_);
lean_dec_ref_known(v_val_1030_, 1);
v___x_1040_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1041_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1041_, 0, v_value_1039_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
return v___x_1041_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(lean_object* v_x_1042_){
_start:
{
if (lean_obj_tag(v_x_1042_) == 0)
{
lean_object* v___x_1043_; 
v___x_1043_ = lean_box(0);
return v___x_1043_;
}
else
{
lean_object* v_val_1044_; 
v_val_1044_ = lean_ctor_get(v_x_1042_, 0);
lean_inc(v_val_1044_);
lean_dec_ref_known(v_x_1042_, 1);
if (lean_obj_tag(v_val_1044_) == 0)
{
uint8_t v_value_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
v_value_1045_ = lean_ctor_get_uint8(v_val_1044_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v_val_1044_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1047_ = v_val_1044_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_dec(v_val_1044_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
lean_ctor_set_tag(v___x_1047_, 2);
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1051_, 0, v_value_1045_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
else
{
lean_object* v_value_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1060_; 
v_value_1053_ = lean_ctor_get(v_val_1044_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v_val_1044_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1055_ = v_val_1044_;
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_value_1053_);
lean_dec(v_val_1044_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1058_; 
if (v_isShared_1056_ == 0)
{
lean_ctor_set_tag(v___x_1055_, 4);
v___x_1058_ = v___x_1055_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_value_1053_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1(lean_object* v_x_1061_){
_start:
{
if (lean_obj_tag(v_x_1061_) == 0)
{
lean_object* v___x_1062_; 
v___x_1062_ = lean_box(0);
return v___x_1062_;
}
else
{
lean_object* v_val_1063_; lean_object* v_cwd_1064_; lean_object* v_env_1065_; lean_object* v_encoding_1066_; lean_object* v_timeout_1067_; lean_object* v_maxBuffer_1068_; lean_object* v_killSignal_1069_; lean_object* v_uid_1070_; lean_object* v_gid_1071_; lean_object* v_windowsHide_1072_; lean_object* v_windowsVerbatimArguments_1073_; lean_object* v_shell_1074_; lean_object* v_signal_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
v_val_1063_ = lean_ctor_get(v_x_1061_, 0);
lean_inc(v_val_1063_);
lean_dec_ref_known(v_x_1061_, 1);
v_cwd_1064_ = lean_ctor_get(v_val_1063_, 0);
lean_inc(v_cwd_1064_);
v_env_1065_ = lean_ctor_get(v_val_1063_, 1);
lean_inc(v_env_1065_);
v_encoding_1066_ = lean_ctor_get(v_val_1063_, 2);
lean_inc(v_encoding_1066_);
v_timeout_1067_ = lean_ctor_get(v_val_1063_, 3);
lean_inc(v_timeout_1067_);
v_maxBuffer_1068_ = lean_ctor_get(v_val_1063_, 4);
lean_inc(v_maxBuffer_1068_);
v_killSignal_1069_ = lean_ctor_get(v_val_1063_, 5);
lean_inc(v_killSignal_1069_);
v_uid_1070_ = lean_ctor_get(v_val_1063_, 6);
lean_inc(v_uid_1070_);
v_gid_1071_ = lean_ctor_get(v_val_1063_, 7);
lean_inc(v_gid_1071_);
v_windowsHide_1072_ = lean_ctor_get(v_val_1063_, 8);
lean_inc(v_windowsHide_1072_);
v_windowsVerbatimArguments_1073_ = lean_ctor_get(v_val_1063_, 9);
lean_inc(v_windowsVerbatimArguments_1073_);
v_shell_1074_ = lean_ctor_get(v_val_1063_, 10);
lean_inc(v_shell_1074_);
v_signal_1075_ = lean_ctor_get(v_val_1063_, 11);
lean_inc(v_signal_1075_);
lean_dec(v_val_1063_);
v___x_1076_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__0));
v___x_1077_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(v_cwd_1064_);
v___x_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1076_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__1));
v___x_1080_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(v_env_1065_);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1079_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__2));
v___x_1083_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_1066_);
v___x_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1082_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
v___x_1085_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__3));
v___x_1086_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_timeout_1067_);
lean_dec(v_timeout_1067_);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__4));
v___x_1089_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_maxBuffer_1068_);
lean_dec(v_maxBuffer_1068_);
v___x_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1088_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__5));
v___x_1092_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_1069_);
v___x_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__6));
v___x_1095_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_uid_1070_);
lean_dec(v_uid_1070_);
v___x_1096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__7));
v___x_1098_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_gid_1071_);
lean_dec(v_gid_1071_);
v___x_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1097_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
v___x_1100_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__8));
v___x_1101_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_1072_);
lean_dec(v_windowsHide_1072_);
v___x_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1100_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__9));
v___x_1104_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_1073_);
lean_dec(v_windowsVerbatimArguments_1073_);
v___x_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1103_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
v___x_1106_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__10));
v___x_1107_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_shell_1074_);
v___x_1108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1106_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
v___x_1109_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__11));
v___x_1110_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_1075_);
lean_dec(v_signal_1075_);
v___x_1111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = lean_unsigned_to_nat(12u);
v___x_1113_ = lean_mk_empty_array_with_capacity(v___x_1112_);
v___x_1114_ = lean_array_push(v___x_1113_, v___x_1078_);
v___x_1115_ = lean_array_push(v___x_1114_, v___x_1081_);
v___x_1116_ = lean_array_push(v___x_1115_, v___x_1084_);
v___x_1117_ = lean_array_push(v___x_1116_, v___x_1087_);
v___x_1118_ = lean_array_push(v___x_1117_, v___x_1090_);
v___x_1119_ = lean_array_push(v___x_1118_, v___x_1093_);
v___x_1120_ = lean_array_push(v___x_1119_, v___x_1096_);
v___x_1121_ = lean_array_push(v___x_1120_, v___x_1099_);
v___x_1122_ = lean_array_push(v___x_1121_, v___x_1102_);
v___x_1123_ = lean_array_push(v___x_1122_, v___x_1105_);
v___x_1124_ = lean_array_push(v___x_1123_, v___x_1108_);
v___x_1125_ = lean_array_push(v___x_1124_, v___x_1111_);
v___x_1126_ = l_Lasm_JS_Web_Support_fields(v___x_1125_);
lean_dec_ref(v___x_1125_);
return v___x_1126_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(lean_object* v_x_1127_){
_start:
{
if (lean_obj_tag(v_x_1127_) == 0)
{
lean_object* v___x_1128_; 
v___x_1128_ = lean_box(0);
return v___x_1128_;
}
else
{
lean_object* v_val_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1139_; 
v_val_1129_ = lean_ctor_get(v_x_1127_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_x_1127_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1131_ = v_x_1127_;
v_isShared_1132_ = v_isSharedCheck_1139_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_val_1129_);
lean_dec(v_x_1127_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1139_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
size_t v_sz_1133_; size_t v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1137_; 
v_sz_1133_ = lean_array_size(v_val_1129_);
v___x_1134_ = ((size_t)0ULL);
v___x_1135_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_1133_, v___x_1134_, v_val_1129_);
if (v_isShared_1132_ == 0)
{
lean_ctor_set_tag(v___x_1131_, 7);
lean_ctor_set(v___x_1131_, 0, v___x_1135_);
v___x_1137_ = v___x_1131_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v___x_1135_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
return v___x_1137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1(lean_object* v___f_1149_, lean_object* v_x_1150_){
_start:
{
if (lean_obj_tag(v_x_1150_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1160_; 
lean_dec_ref(v___f_1149_);
v_a_1152_ = lean_ctor_get(v_x_1150_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v_x_1150_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1154_ = v_x_1150_;
v_isShared_1155_ = v_isSharedCheck_1160_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v_x_1150_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1160_;
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
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1158_; 
v___x_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
return v___x_1158_;
}
}
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1186_; 
v_a_1161_ = lean_ctor_get(v_x_1150_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v_x_1150_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1163_ = v_x_1150_;
v_isShared_1164_ = v_isSharedCheck_1186_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v_x_1150_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1186_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
uint8_t v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v_val_1174_; lean_object* v___x_1177_; 
v___x_1165_ = 0;
v___x_1166_ = lean_unsigned_to_nat(1u);
v___x_1167_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___closed__3));
v___x_1168_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1169_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1169_, 0, v_a_1161_);
lean_ctor_set(v___x_1169_, 1, v___x_1168_);
v___x_1170_ = lean_mk_empty_array_with_capacity(v___x_1166_);
v___x_1171_ = lean_array_push(v___x_1170_, v___x_1169_);
v___x_1172_ = lean_unsigned_to_nat(0u);
v___x_1177_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1167_, v___x_1171_, v___x_1165_);
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v_a_1178_; lean_object* v___x_1180_; 
v_a_1178_ = lean_ctor_get(v___x_1177_, 0);
lean_inc(v_a_1178_);
lean_dec_ref_known(v___x_1177_, 1);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 0, v_a_1178_);
v___x_1180_ = v___x_1163_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1178_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
v_val_1174_ = v___x_1180_;
goto v___jp_1173_;
}
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1184_; 
v_a_1182_ = lean_ctor_get(v___x_1177_, 0);
lean_inc(v_a_1182_);
lean_dec_ref_known(v___x_1177_, 1);
if (v_isShared_1164_ == 0)
{
lean_ctor_set_tag(v___x_1163_, 0);
lean_ctor_set(v___x_1163_, 0, v_a_1182_);
v___x_1184_ = v___x_1163_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1182_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
v_val_1174_ = v___x_1184_;
goto v___jp_1173_;
}
}
v___jp_1173_:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1175_, 0, v_val_1174_);
v___x_1176_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1172_, v___x_1165_, v___x_1175_, v___f_1149_);
return v___x_1176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___boxed(lean_object* v___f_1187_, lean_object* v_x_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1(v___f_1187_, v_x_1188_);
return v_res_1190_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(uint8_t v_await_1191_, uint64_t v_extra_1192_){
_start:
{
uint64_t v___x_1193_; uint64_t v___y_1195_; 
v___x_1193_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0___closed__0);
if (v_await_1191_ == 0)
{
uint64_t v___x_1198_; 
v___x_1198_ = 0ULL;
v___y_1195_ = v___x_1198_;
goto v___jp_1194_;
}
else
{
uint64_t v___x_1199_; 
v___x_1199_ = 2ULL;
v___y_1195_ = v___x_1199_;
goto v___jp_1194_;
}
v___jp_1194_:
{
uint64_t v___x_1196_; uint64_t v___x_1197_; 
v___x_1196_ = lean_uint64_lor(v___x_1193_, v___y_1195_);
v___x_1197_ = lean_uint64_lor(v___x_1196_, v_extra_1192_);
return v___x_1197_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6___boxed(lean_object* v_await_1200_, lean_object* v_extra_1201_){
_start:
{
uint8_t v_await_boxed_1202_; uint64_t v_extra_boxed_1203_; uint64_t v_res_1204_; lean_object* v_r_1205_; 
v_await_boxed_1202_ = lean_unbox(v_await_1200_);
v_extra_boxed_1203_ = lean_unbox_uint64(v_extra_1201_);
lean_dec_ref(v_extra_1201_);
v_res_1204_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(v_await_boxed_1202_, v_extra_boxed_1203_);
v_r_1205_ = lean_box_uint64(v_res_1204_);
return v_r_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7(lean_object* v___f_1206_, lean_object* v_a_1207_, uint32_t v_op_1208_, uint64_t v_flags_1209_, lean_object* v_payload_1210_, lean_object* v_x_1211_){
_start:
{
if (lean_obj_tag(v_x_1211_) == 0)
{
lean_object* v___x_1213_; 
lean_dec_ref(v___f_1206_);
v___x_1213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1213_, 0, v_x_1211_);
return v___x_1213_;
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1234_; 
v_a_1214_ = lean_ctor_get(v_x_1211_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v_x_1211_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1216_ = v_x_1211_;
v_isShared_1217_ = v_isSharedCheck_1234_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v_x_1211_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1234_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
uint32_t v___x_1218_; lean_object* v___x_1219_; uint8_t v___x_1220_; lean_object* v_val_1222_; lean_object* v___x_1225_; 
v___x_1218_ = 0;
v___x_1219_ = lean_unsigned_to_nat(0u);
v___x_1220_ = 0;
v___x_1225_ = lasm_js_call_into(v_a_1207_, v_op_1208_, v___x_1218_, v_flags_1209_, v_a_1214_, v_payload_1210_);
lean_dec(v_a_1214_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_object* v_a_1226_; lean_object* v___x_1228_; 
v_a_1226_ = lean_ctor_get(v___x_1225_, 0);
lean_inc(v_a_1226_);
lean_dec_ref_known(v___x_1225_, 1);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v_a_1226_);
v___x_1228_ = v___x_1216_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1226_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
v_val_1222_ = v___x_1228_;
goto v___jp_1221_;
}
}
else
{
lean_object* v_a_1230_; lean_object* v___x_1232_; 
v_a_1230_ = lean_ctor_get(v___x_1225_, 0);
lean_inc(v_a_1230_);
lean_dec_ref_known(v___x_1225_, 1);
if (v_isShared_1217_ == 0)
{
lean_ctor_set_tag(v___x_1216_, 0);
lean_ctor_set(v___x_1216_, 0, v_a_1230_);
v___x_1232_ = v___x_1216_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1230_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
v_val_1222_ = v___x_1232_;
goto v___jp_1221_;
}
}
v___jp_1221_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1223_, 0, v_val_1222_);
v___x_1224_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1219_, v___x_1220_, v___x_1223_, v___f_1206_);
return v___x_1224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7___boxed(lean_object* v___f_1235_, lean_object* v_a_1236_, lean_object* v_op_1237_, lean_object* v_flags_1238_, lean_object* v_payload_1239_, lean_object* v_x_1240_, lean_object* v___y_1241_){
_start:
{
uint32_t v_op_boxed_1242_; uint64_t v_flags_boxed_1243_; lean_object* v_res_1244_; 
v_op_boxed_1242_ = lean_unbox_uint32(v_op_1237_);
lean_dec(v_op_1237_);
v_flags_boxed_1243_ = lean_unbox_uint64(v_flags_1238_);
lean_dec_ref(v_flags_1238_);
v_res_1244_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7(v___f_1235_, v_a_1236_, v_op_boxed_1242_, v_flags_boxed_1243_, v_payload_1239_, v_x_1240_);
lean_dec(v_payload_1239_);
lean_dec(v_a_1236_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5(lean_object* v___x_1245_, uint8_t v___x_1246_, lean_object* v___f_1247_, lean_object* v_a_1248_, uint32_t v_op_1249_, uint64_t v_flags_1250_, lean_object* v_payload_1251_, lean_object* v_x_1252_){
_start:
{
lean_object* v_val_1255_; 
if (lean_obj_tag(v_x_1252_) == 0)
{
lean_object* v___x_1258_; 
lean_dec_ref(v___f_1247_);
lean_dec(v___x_1245_);
v___x_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1258_, 0, v_x_1252_);
return v___x_1258_;
}
else
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1273_; 
v_a_1259_ = lean_ctor_get(v_x_1252_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v_x_1252_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1261_ = v_x_1252_;
v_isShared_1262_ = v_isSharedCheck_1273_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v_x_1252_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1273_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
uint32_t v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = 0;
v___x_1264_ = lasm_js_call_into(v_a_1248_, v_op_1249_, v___x_1263_, v_flags_1250_, v_a_1259_, v_payload_1251_);
lean_dec(v_a_1259_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; lean_object* v___x_1267_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1265_);
lean_dec_ref_known(v___x_1264_, 1);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v_a_1265_);
v___x_1267_ = v___x_1261_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_a_1265_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
v_val_1255_ = v___x_1267_;
goto v___jp_1254_;
}
}
else
{
lean_object* v_a_1269_; lean_object* v___x_1271_; 
v_a_1269_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1269_);
lean_dec_ref_known(v___x_1264_, 1);
if (v_isShared_1262_ == 0)
{
lean_ctor_set_tag(v___x_1261_, 0);
lean_ctor_set(v___x_1261_, 0, v_a_1269_);
v___x_1271_ = v___x_1261_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1269_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
v_val_1255_ = v___x_1271_;
goto v___jp_1254_;
}
}
}
}
v___jp_1254_:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1256_, 0, v_val_1255_);
v___x_1257_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1245_, v___x_1246_, v___x_1256_, v___f_1247_);
return v___x_1257_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5___boxed(lean_object* v___x_1274_, lean_object* v___x_1275_, lean_object* v___f_1276_, lean_object* v_a_1277_, lean_object* v_op_1278_, lean_object* v_flags_1279_, lean_object* v_payload_1280_, lean_object* v_x_1281_, lean_object* v___y_1282_){
_start:
{
uint8_t v___x_2046__boxed_1283_; uint32_t v_op_boxed_1284_; uint64_t v_flags_boxed_1285_; lean_object* v_res_1286_; 
v___x_2046__boxed_1283_ = lean_unbox(v___x_1275_);
v_op_boxed_1284_ = lean_unbox_uint32(v_op_1278_);
lean_dec(v_op_1278_);
v_flags_boxed_1285_ = lean_unbox_uint64(v_flags_1279_);
lean_dec_ref(v_flags_1279_);
v_res_1286_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5(v___x_1274_, v___x_2046__boxed_1283_, v___f_1276_, v_a_1277_, v_op_boxed_1284_, v_flags_boxed_1285_, v_payload_1280_, v_x_1281_);
lean_dec(v_payload_1280_);
lean_dec(v_a_1277_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3(lean_object* v_a_1287_, lean_object* v_x_1288_){
_start:
{
if (lean_obj_tag(v_x_1288_) == 0)
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1298_; 
v_a_1290_ = lean_ctor_get(v_x_1288_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v_x_1288_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1292_ = v_x_1288_;
v_isShared_1293_ = v_isSharedCheck_1298_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v_x_1288_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1298_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1290_);
v___x_1295_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
lean_object* v___x_1296_; 
v___x_1296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
return v___x_1296_;
}
}
}
else
{
lean_object* v___x_1299_; 
lean_dec_ref_known(v_x_1288_, 1);
v___x_1299_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1287_);
return v___x_1299_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed(lean_object* v_a_1300_, lean_object* v_x_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3(v_a_1300_, v_x_1301_);
lean_dec(v_a_1300_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6(lean_object* v_failurePrefix_1304_, uint32_t v_op_1305_, uint64_t v_flags_1306_, lean_object* v_payload_1307_, lean_object* v___f_1308_, lean_object* v___f_1309_, lean_object* v___f_1310_, lean_object* v_x_1311_){
_start:
{
if (lean_obj_tag(v_x_1311_) == 0)
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1321_; 
lean_dec_ref(v___f_1310_);
lean_dec_ref(v___f_1309_);
lean_dec_ref(v___f_1308_);
lean_dec(v_payload_1307_);
v_a_1313_ = lean_ctor_get(v_x_1311_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v_x_1311_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1315_ = v_x_1311_;
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v_x_1311_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1313_);
v___x_1318_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
lean_object* v___x_1319_; 
v___x_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
return v___x_1319_;
}
}
}
else
{
lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1368_; 
v_a_1322_ = lean_ctor_get(v_x_1311_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v_x_1311_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1324_ = v_x_1311_;
v_isShared_1325_ = v_isSharedCheck_1368_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v_x_1311_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1368_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; uint8_t v___x_1328_; 
v___x_1326_ = lean_string_utf8_byte_size(v_failurePrefix_1304_);
v___x_1327_ = lean_unsigned_to_nat(0u);
v___x_1328_ = lean_nat_dec_eq(v___x_1326_, v___x_1327_);
if (v___x_1328_ == 0)
{
lean_object* v___f_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___f_1333_; lean_object* v_val_1335_; lean_object* v___x_1340_; 
lean_dec_ref(v___f_1310_);
lean_inc(v_a_1322_);
v___f_1329_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1329_, 0, v_a_1322_);
v___x_1330_ = lean_box(v___x_1328_);
v___x_1331_ = lean_box_uint32(v_op_1305_);
v___x_1332_ = lean_box_uint64(v_flags_1306_);
lean_inc(v_payload_1307_);
v___f_1333_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1333_, 0, v___x_1327_);
lean_closure_set(v___f_1333_, 1, v___x_1330_);
lean_closure_set(v___f_1333_, 2, v___f_1329_);
lean_closure_set(v___f_1333_, 3, v_a_1322_);
lean_closure_set(v___f_1333_, 4, v___x_1331_);
lean_closure_set(v___f_1333_, 5, v___x_1332_);
lean_closure_set(v___f_1333_, 6, v_payload_1307_);
v___x_1340_ = l_Lasm_JS_Wire_encodeIO(v_payload_1307_);
lean_dec(v_payload_1307_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; lean_object* v___x_1343_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
lean_inc(v_a_1341_);
lean_dec_ref_known(v___x_1340_, 1);
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 0, v_a_1341_);
v___x_1343_ = v___x_1324_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_a_1341_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
v_val_1335_ = v___x_1343_;
goto v___jp_1334_;
}
}
else
{
lean_object* v_a_1345_; lean_object* v___x_1347_; 
v_a_1345_ = lean_ctor_get(v___x_1340_, 0);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1340_, 1);
if (v_isShared_1325_ == 0)
{
lean_ctor_set_tag(v___x_1324_, 0);
lean_ctor_set(v___x_1324_, 0, v_a_1345_);
v___x_1347_ = v___x_1324_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1345_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
v_val_1335_ = v___x_1347_;
goto v___jp_1334_;
}
}
v___jp_1334_:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1336_, 0, v_val_1335_);
v___x_1337_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1327_, v___x_1328_, v___x_1336_, v___f_1333_);
v___x_1338_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1327_, v___x_1328_, v___x_1337_, v___f_1308_);
v___x_1339_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1327_, v___x_1328_, v___x_1338_, v___f_1309_);
return v___x_1339_;
}
}
else
{
lean_object* v___f_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___f_1352_; uint8_t v___x_1353_; lean_object* v_val_1355_; lean_object* v___x_1359_; 
lean_dec_ref(v___f_1309_);
lean_dec_ref(v___f_1308_);
lean_inc(v_a_1322_);
v___f_1349_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1349_, 0, v_a_1322_);
v___x_1350_ = lean_box_uint32(v_op_1305_);
v___x_1351_ = lean_box_uint64(v_flags_1306_);
lean_inc(v_payload_1307_);
v___f_1352_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1352_, 0, v___f_1349_);
lean_closure_set(v___f_1352_, 1, v_a_1322_);
lean_closure_set(v___f_1352_, 2, v___x_1350_);
lean_closure_set(v___f_1352_, 3, v___x_1351_);
lean_closure_set(v___f_1352_, 4, v_payload_1307_);
v___x_1353_ = 0;
v___x_1359_ = l_Lasm_JS_Wire_encodeIO(v_payload_1307_);
lean_dec(v_payload_1307_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v_a_1360_; lean_object* v___x_1362_; 
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
lean_inc(v_a_1360_);
lean_dec_ref_known(v___x_1359_, 1);
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 0, v_a_1360_);
v___x_1362_ = v___x_1324_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_a_1360_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
v_val_1355_ = v___x_1362_;
goto v___jp_1354_;
}
}
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; 
v_a_1364_ = lean_ctor_get(v___x_1359_, 0);
lean_inc(v_a_1364_);
lean_dec_ref_known(v___x_1359_, 1);
if (v_isShared_1325_ == 0)
{
lean_ctor_set_tag(v___x_1324_, 0);
lean_ctor_set(v___x_1324_, 0, v_a_1364_);
v___x_1366_ = v___x_1324_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1364_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
v_val_1355_ = v___x_1366_;
goto v___jp_1354_;
}
}
v___jp_1354_:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1356_, 0, v_val_1355_);
v___x_1357_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1327_, v___x_1353_, v___x_1356_, v___f_1352_);
v___x_1358_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1327_, v___x_1353_, v___x_1357_, v___f_1310_);
return v___x_1358_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6___boxed(lean_object* v_failurePrefix_1369_, lean_object* v_op_1370_, lean_object* v_flags_1371_, lean_object* v_payload_1372_, lean_object* v___f_1373_, lean_object* v___f_1374_, lean_object* v___f_1375_, lean_object* v_x_1376_, lean_object* v___y_1377_){
_start:
{
uint32_t v_op_boxed_1378_; uint64_t v_flags_boxed_1379_; lean_object* v_res_1380_; 
v_op_boxed_1378_ = lean_unbox_uint32(v_op_1370_);
lean_dec(v_op_1370_);
v_flags_boxed_1379_ = lean_unbox_uint64(v_flags_1371_);
lean_dec_ref(v_flags_1371_);
v_res_1380_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6(v_failurePrefix_1369_, v_op_boxed_1378_, v_flags_boxed_1379_, v_payload_1372_, v___f_1373_, v___f_1374_, v___f_1375_, v_x_1376_);
lean_dec_ref(v_failurePrefix_1369_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8(lean_object* v___f_1381_, lean_object* v_x_1382_){
_start:
{
if (lean_obj_tag(v_x_1382_) == 0)
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1392_; 
lean_dec_ref(v___f_1381_);
v_a_1384_ = lean_ctor_get(v_x_1382_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v_x_1382_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1386_ = v_x_1382_;
v_isShared_1387_ = v_isSharedCheck_1392_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v_x_1382_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1392_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
lean_object* v___x_1390_; 
v___x_1390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
return v___x_1390_;
}
}
}
else
{
lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1404_; 
v_isSharedCheck_1404_ = !lean_is_exclusive(v_x_1382_);
if (v_isSharedCheck_1404_ == 0)
{
lean_object* v_unused_1405_; 
v_unused_1405_ = lean_ctor_get(v_x_1382_, 0);
lean_dec(v_unused_1405_);
v___x_1394_ = v_x_1382_;
v_isShared_1395_ = v_isSharedCheck_1404_;
goto v_resetjp_1393_;
}
else
{
lean_dec(v_x_1382_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1404_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1396_; uint8_t v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1400_; 
v___x_1396_ = lean_unsigned_to_nat(0u);
v___x_1397_ = 0;
v___x_1398_ = lean_io_promise_new();
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 0, v___x_1398_);
v___x_1400_ = v___x_1394_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
v___x_1402_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1396_, v___x_1397_, v___x_1401_, v___f_1381_);
return v___x_1402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8___boxed(lean_object* v___f_1406_, lean_object* v_x_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8(v___f_1406_, v_x_1407_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(lean_object* v_d_1417_, lean_object* v_key_1418_){
_start:
{
if (lean_obj_tag(v_d_1417_) == 8)
{
lean_object* v___x_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1464_; 
v___x_1419_ = l_Lasm_JS_Data_field(v_d_1417_, v_key_1418_);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_d_1417_);
if (v_isSharedCheck_1464_ == 0)
{
lean_object* v_unused_1465_; 
v_unused_1465_ = lean_ctor_get(v_d_1417_, 0);
lean_dec(v_unused_1465_);
v___x_1421_ = v_d_1417_;
v_isShared_1422_ = v_isSharedCheck_1464_;
goto v_resetjp_1420_;
}
else
{
lean_dec(v_d_1417_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1464_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
switch(lean_obj_tag(v___x_1419_))
{
case 4:
{
lean_object* v_s_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1433_; 
v_s_1423_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1425_ = v___x_1419_;
v_isShared_1426_ = v_isSharedCheck_1433_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_s_1423_);
lean_dec(v___x_1419_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1433_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
lean_ctor_set_tag(v___x_1425_, 0);
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_s_1423_);
v___x_1428_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
lean_object* v___x_1430_; 
if (v_isShared_1422_ == 0)
{
lean_ctor_set_tag(v___x_1421_, 1);
lean_ctor_set(v___x_1421_, 0, v___x_1428_);
v___x_1430_ = v___x_1421_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1428_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
}
case 6:
{
lean_object* v_b_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1444_; 
v_b_1434_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1436_ = v___x_1419_;
v_isShared_1437_ = v_isSharedCheck_1444_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_b_1434_);
lean_dec(v___x_1419_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1444_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
lean_ctor_set_tag(v___x_1436_, 1);
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_b_1434_);
v___x_1439_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
lean_object* v___x_1441_; 
if (v_isShared_1422_ == 0)
{
lean_ctor_set_tag(v___x_1421_, 1);
lean_ctor_set(v___x_1421_, 0, v___x_1439_);
v___x_1441_ = v___x_1421_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1439_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
default: 
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; uint8_t v___x_1455_; 
v___x_1445_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__0));
v___x_1446_ = lean_string_append(v___x_1445_, v_key_1418_);
v___x_1447_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__1));
v___x_1448_ = lean_string_append(v___x_1446_, v___x_1447_);
v___x_1449_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__2));
v___x_1450_ = lean_string_append(v___x_1448_, v___x_1449_);
v___x_1451_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__3));
v___x_1452_ = lean_string_append(v___x_1450_, v___x_1451_);
v___x_1453_ = l_Lasm_JS_Data_describe(v___x_1419_);
v___x_1454_ = lean_string_append(v___x_1452_, v___x_1453_);
lean_dec_ref(v___x_1453_);
v___x_1455_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__2);
if (v___x_1455_ == 0)
{
lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1459_; 
v___x_1456_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_stderr_spec__0_spec__0_spec__1___closed__3));
v___x_1457_ = lean_string_append(v___x_1454_, v___x_1456_);
if (v_isShared_1422_ == 0)
{
lean_ctor_set_tag(v___x_1421_, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1457_);
v___x_1459_ = v___x_1421_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v___x_1457_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
else
{
lean_object* v___x_1462_; 
if (v_isShared_1422_ == 0)
{
lean_ctor_set_tag(v___x_1421_, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1454_);
v___x_1462_ = v___x_1421_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v___x_1454_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
}
}
else
{
lean_object* v___x_1466_; 
lean_dec(v_d_1417_);
v___x_1466_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___closed__5));
return v___x_1466_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9___boxed(lean_object* v_d_1467_, lean_object* v_key_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_1467_, v_key_1468_);
lean_dec_ref(v_key_1468_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(lean_object* v_context_1470_, lean_object* v_d_1471_){
_start:
{
lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1480_; lean_object* v_received_1481_; lean_object* v___y_1500_; lean_object* v_a_1503_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__0));
lean_inc(v_d_1471_);
v___x_1528_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_1471_, v___x_1527_);
if (lean_obj_tag(v___x_1528_) == 0)
{
lean_object* v_a_1529_; 
v_a_1529_ = lean_ctor_get(v___x_1528_, 0);
lean_inc(v_a_1529_);
lean_dec_ref_known(v___x_1528_, 1);
v_a_1503_ = v_a_1529_;
goto v___jp_1502_;
}
else
{
lean_object* v_a_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v_a_1530_ = lean_ctor_get(v___x_1528_, 0);
lean_inc(v_a_1530_);
lean_dec_ref_known(v___x_1528_, 1);
v___x_1531_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___lam__0___closed__1));
lean_inc(v_d_1471_);
v___x_1532_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8_spec__9(v_d_1471_, v___x_1531_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; 
lean_dec(v_a_1530_);
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_a_1533_);
lean_dec_ref_known(v___x_1532_, 1);
v_a_1503_ = v_a_1533_;
goto v___jp_1502_;
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1542_; 
lean_dec(v_d_1471_);
v_a_1534_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1536_ = v___x_1532_;
v_isShared_1537_ = v_isSharedCheck_1542_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1532_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1542_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1538_; lean_object* v___x_1540_; 
v___x_1538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1538_, 0, v_a_1530_);
lean_ctor_set(v___x_1538_, 1, v_a_1534_);
if (v_isShared_1537_ == 0)
{
lean_ctor_set_tag(v___x_1536_, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1538_);
v___x_1540_ = v___x_1536_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v___x_1538_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
v___jp_1473_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1476_ = lean_string_append(v___y_1474_, v___y_1475_);
lean_dec_ref(v___y_1475_);
v___x_1477_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1476_);
v___x_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
return v___x_1478_;
}
v___jp_1479_:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; uint8_t v___x_1493_; 
v___x_1482_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__0));
v___x_1483_ = lean_string_append(v___x_1482_, v_context_1470_);
v___x_1484_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__1));
v___x_1485_ = lean_string_append(v___x_1483_, v___x_1484_);
v___x_1486_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSExecFileResult___closed__1));
v___x_1487_ = lean_string_append(v___x_1485_, v___x_1486_);
v___x_1488_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__3));
v___x_1489_ = lean_string_append(v___x_1487_, v___x_1488_);
v___x_1490_ = lean_string_append(v___x_1489_, v_received_1481_);
lean_dec_ref(v_received_1481_);
v___x_1491_ = lean_string_utf8_byte_size(v___y_1480_);
v___x_1492_ = lean_unsigned_to_nat(0u);
v___x_1493_ = lean_nat_dec_eq(v___x_1491_, v___x_1492_);
if (v___x_1493_ == 0)
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1494_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__4));
v___x_1495_ = lean_string_append(v___x_1494_, v___y_1480_);
lean_dec_ref(v___y_1480_);
v___x_1496_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__5));
v___x_1497_ = lean_string_append(v___x_1495_, v___x_1496_);
v___y_1474_ = v___x_1490_;
v___y_1475_ = v___x_1497_;
goto v___jp_1473_;
}
else
{
lean_object* v___x_1498_; 
lean_dec_ref(v___y_1480_);
v___x_1498_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___y_1474_ = v___x_1490_;
v___y_1475_ = v___x_1498_;
goto v___jp_1473_;
}
}
v___jp_1499_:
{
lean_object* v___x_1501_; 
v___x_1501_ = l_Lasm_JS_Data_describe(v_d_1471_);
v___y_1480_ = v___y_1500_;
v_received_1481_ = v___x_1501_;
goto v___jp_1479_;
}
v___jp_1502_:
{
if (lean_obj_tag(v_d_1471_) == 9)
{
lean_object* v_value_1504_; lean_object* v_description_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; 
v_value_1504_ = lean_ctor_get(v_d_1471_, 0);
v_description_1505_ = lean_ctor_get(v_d_1471_, 1);
v___x_1506_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1507_ = lean_string_dec_eq(v_description_1505_, v___x_1506_);
if (v___x_1507_ == 0)
{
v___y_1500_ = v_a_1503_;
goto v___jp_1499_;
}
else
{
lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1524_; 
lean_inc(v_value_1504_);
v_isSharedCheck_1524_ = !lean_is_exclusive(v_d_1471_);
if (v_isSharedCheck_1524_ == 0)
{
lean_object* v_unused_1525_; lean_object* v_unused_1526_; 
v_unused_1525_ = lean_ctor_get(v_d_1471_, 1);
lean_dec(v_unused_1525_);
v_unused_1526_ = lean_ctor_get(v_d_1471_, 0);
lean_dec(v_unused_1526_);
v___x_1509_ = v_d_1471_;
v_isShared_1510_ = v_isSharedCheck_1524_;
goto v_resetjp_1508_;
}
else
{
lean_dec(v_d_1471_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1524_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
uint32_t v___x_1511_; uint64_t v___x_1512_; lean_object* v___x_1514_; 
v___x_1511_ = 206;
v___x_1512_ = 0ULL;
lean_inc(v_value_1504_);
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 1, v___x_1506_);
v___x_1514_ = v___x_1509_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_value_1504_);
lean_ctor_set(v_reuseFailAlloc_1523_, 1, v___x_1506_);
v___x_1514_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
uint32_t v___x_1515_; lean_object* v___x_1516_; 
v___x_1515_ = lasm_js_value_handle(v_value_1504_);
lean_dec(v_value_1504_);
v___x_1516_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1511_, v___x_1512_, v___x_1514_, v___x_1515_);
lean_dec_ref(v___x_1514_);
if (lean_obj_tag(v___x_1516_) == 0)
{
lean_object* v_a_1517_; uint8_t v___x_1518_; 
v_a_1517_ = lean_ctor_get(v___x_1516_, 0);
lean_inc(v_a_1517_);
lean_dec_ref_known(v___x_1516_, 1);
v___x_1518_ = lean_string_validate_utf8(v_a_1517_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
lean_dec(v_a_1517_);
v___x_1519_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__9);
v___x_1520_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1519_);
v___y_1480_ = v_a_1503_;
v_received_1481_ = v___x_1520_;
goto v___jp_1479_;
}
else
{
lean_object* v___x_1521_; 
v___x_1521_ = lean_string_from_utf8_unchecked(v_a_1517_);
v___y_1480_ = v_a_1503_;
v_received_1481_ = v___x_1521_;
goto v___jp_1479_;
}
}
else
{
lean_object* v___x_1522_; 
lean_dec_ref_known(v___x_1516_, 1);
v___x_1522_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_ChildProcess_exitCode_spec__0_spec__0_spec__1___closed__10));
v___y_1480_ = v_a_1503_;
v_received_1481_ = v___x_1522_;
goto v___jp_1479_;
}
}
}
}
}
else
{
v___y_1500_ = v_a_1503_;
goto v___jp_1499_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8___boxed(lean_object* v_context_1543_, lean_object* v_d_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(v_context_1543_, v_d_1544_);
lean_dec_ref(v_context_1543_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0(lean_object* v_context_1547_, lean_object* v_x_1548_){
_start:
{
lean_object* v_val_1551_; 
if (lean_obj_tag(v_x_1548_) == 0)
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1561_; 
v_a_1553_ = lean_ctor_get(v_x_1548_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v_x_1548_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1555_ = v_x_1548_;
v_isShared_1556_ = v_isSharedCheck_1561_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v_x_1548_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1561_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
return v___x_1559_;
}
}
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1575_; 
v_a_1562_ = lean_ctor_get(v_x_1548_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v_x_1548_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1564_ = v_x_1548_;
v_isShared_1565_ = v_isSharedCheck_1575_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v_x_1548_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1575_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1566_; 
v___x_1566_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7_spec__8(v_context_1547_, v_a_1562_);
if (lean_obj_tag(v___x_1566_) == 0)
{
lean_object* v_a_1567_; lean_object* v___x_1569_; 
v_a_1567_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_a_1567_);
lean_dec_ref_known(v___x_1566_, 1);
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v_a_1567_);
v___x_1569_ = v___x_1564_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1567_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
v_val_1551_ = v___x_1569_;
goto v___jp_1550_;
}
}
else
{
lean_object* v_a_1571_; lean_object* v___x_1573_; 
v_a_1571_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_a_1571_);
lean_dec_ref_known(v___x_1566_, 1);
if (v_isShared_1565_ == 0)
{
lean_ctor_set_tag(v___x_1564_, 0);
lean_ctor_set(v___x_1564_, 0, v_a_1571_);
v___x_1573_ = v___x_1564_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1571_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
v_val_1551_ = v___x_1573_;
goto v___jp_1550_;
}
}
}
}
v___jp_1550_:
{
lean_object* v___x_1552_; 
v___x_1552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1552_, 0, v_val_1551_);
return v___x_1552_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0___boxed(lean_object* v_context_1576_, lean_object* v_x_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v_res_1579_; 
v_res_1579_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0(v_context_1576_, v_x_1577_);
lean_dec_ref(v_context_1576_);
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1(lean_object* v___f_1580_, lean_object* v_bytes_1581_){
_start:
{
lean_object* v___x_1583_; uint8_t v___x_1584_; lean_object* v_val_1586_; lean_object* v___x_1589_; 
v___x_1583_ = lean_unsigned_to_nat(0u);
v___x_1584_ = 0;
v___x_1589_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1581_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1589_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1589_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
lean_ctor_set_tag(v___x_1592_, 1);
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
v_val_1586_ = v___x_1595_;
goto v___jp_1585_;
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
v_a_1598_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1589_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1589_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
lean_ctor_set_tag(v___x_1600_, 0);
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
v_val_1586_ = v___x_1603_;
goto v___jp_1585_;
}
}
}
v___jp_1585_:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1587_, 0, v_val_1586_);
v___x_1588_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1583_, v___x_1584_, v___x_1587_, v___f_1580_);
return v___x_1588_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1___boxed(lean_object* v___f_1606_, lean_object* v_bytes_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1(v___f_1606_, v_bytes_1607_);
lean_dec_ref(v_bytes_1607_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4(lean_object* v_failurePrefix_1610_, lean_object* v_x_1611_){
_start:
{
if (lean_obj_tag(v_x_1611_) == 0)
{
lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1624_; 
v_a_1613_ = lean_ctor_get(v_x_1611_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v_x_1611_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1615_ = v_x_1611_;
v_isShared_1616_ = v_isSharedCheck_1624_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_dec(v_x_1611_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1624_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1621_; 
v___x_1617_ = lean_io_error_to_string(v_a_1613_);
v___x_1618_ = lean_string_append(v_failurePrefix_1610_, v___x_1617_);
lean_dec_ref(v___x_1617_);
v___x_1619_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1618_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 0, v___x_1619_);
v___x_1621_ = v___x_1615_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v___x_1619_);
v___x_1621_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
lean_object* v___x_1622_; 
v___x_1622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1621_);
return v___x_1622_;
}
}
}
else
{
lean_object* v___x_1625_; 
lean_dec_ref(v_failurePrefix_1610_);
v___x_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1625_, 0, v_x_1611_);
return v___x_1625_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4___boxed(lean_object* v_failurePrefix_1626_, lean_object* v_x_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4(v_failurePrefix_1626_, v_x_1627_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2(lean_object* v___f_1630_, lean_object* v_x_1631_){
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2___boxed(lean_object* v___f_1644_, lean_object* v_x_1645_, lean_object* v___y_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2(v___f_1644_, v_x_1645_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(lean_object* v_context_1648_, uint32_t v_op_1649_, uint64_t v_flags_1650_, lean_object* v_payload_1651_, lean_object* v_failurePrefix_1652_){
_start:
{
lean_object* v___f_1654_; lean_object* v___f_1655_; lean_object* v___f_1656_; lean_object* v___f_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___f_1660_; lean_object* v___f_1661_; lean_object* v___x_1662_; uint8_t v___x_1663_; lean_object* v_val_1665_; lean_object* v___x_1668_; 
v___f_1654_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1654_, 0, v_context_1648_);
v___f_1655_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1655_, 0, v___f_1654_);
v___f_1656_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1656_, 0, v___f_1655_);
lean_inc_ref(v_failurePrefix_1652_);
v___f_1657_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1657_, 0, v_failurePrefix_1652_);
v___x_1658_ = lean_box_uint32(v_op_1649_);
v___x_1659_ = lean_box_uint64(v_flags_1650_);
lean_inc_ref(v___f_1656_);
v___f_1660_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1660_, 0, v_failurePrefix_1652_);
lean_closure_set(v___f_1660_, 1, v___x_1658_);
lean_closure_set(v___f_1660_, 2, v___x_1659_);
lean_closure_set(v___f_1660_, 3, v_payload_1651_);
lean_closure_set(v___f_1660_, 4, v___f_1657_);
lean_closure_set(v___f_1660_, 5, v___f_1656_);
lean_closure_set(v___f_1660_, 6, v___f_1656_);
v___f_1661_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1661_, 0, v___f_1660_);
v___x_1662_ = lean_unsigned_to_nat(0u);
v___x_1663_ = 0;
v___x_1668_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1676_; 
v_a_1669_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1671_ = v___x_1668_;
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1668_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1672_ == 0)
{
lean_ctor_set_tag(v___x_1671_, 1);
v___x_1674_ = v___x_1671_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1669_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
v_val_1665_ = v___x_1674_;
goto v___jp_1664_;
}
}
}
else
{
lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1684_; 
v_a_1677_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1679_ = v___x_1668_;
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_dec(v___x_1668_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
lean_ctor_set_tag(v___x_1679_, 0);
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_a_1677_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
v_val_1665_ = v___x_1682_;
goto v___jp_1664_;
}
}
}
v___jp_1664_:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1666_, 0, v_val_1665_);
v___x_1667_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1662_, v___x_1663_, v___x_1666_, v___f_1661_);
return v___x_1667_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7___boxed(lean_object* v_context_1685_, lean_object* v_op_1686_, lean_object* v_flags_1687_, lean_object* v_payload_1688_, lean_object* v_failurePrefix_1689_, lean_object* v_a_1690_){
_start:
{
uint32_t v_op_boxed_1691_; uint64_t v_flags_boxed_1692_; lean_object* v_res_1693_; 
v_op_boxed_1691_ = lean_unbox_uint32(v_op_1686_);
lean_dec(v_op_1686_);
v_flags_boxed_1692_ = lean_unbox_uint64(v_flags_1687_);
lean_dec_ref(v_flags_1687_);
v_res_1693_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(v_context_1685_, v_op_boxed_1691_, v_flags_boxed_1692_, v_payload_1688_, v_failurePrefix_1689_);
return v_res_1693_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1(void){
_start:
{
uint64_t v___x_1695_; uint8_t v___x_1696_; uint64_t v___x_1697_; 
v___x_1695_ = 0ULL;
v___x_1696_ = 0;
v___x_1697_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__6(v___x_1696_, v___x_1695_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(lean_object* v_f_1698_, lean_object* v_args_1699_, lean_object* v_this_1700_){
_start:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; uint32_t v___x_1705_; uint64_t v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1702_ = ((lean_object*)(l_Lasm_JS_Node_instToJSChildProcess___lam__0___closed__0));
v___x_1703_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1703_, 0, v_f_1698_);
lean_ctor_set(v___x_1703_, 1, v___x_1702_);
v___x_1704_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__0));
v___x_1705_ = 205;
v___x_1706_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1, &l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___closed__1);
v___x_1707_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1707_, 0, v_args_1699_);
v___x_1708_ = lean_unsigned_to_nat(3u);
v___x_1709_ = lean_mk_empty_array_with_capacity(v___x_1708_);
v___x_1710_ = lean_array_push(v___x_1709_, v___x_1703_);
v___x_1711_ = lean_array_push(v___x_1710_, v_this_1700_);
v___x_1712_ = lean_array_push(v___x_1711_, v___x_1707_);
v___x_1713_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1712_);
v___x_1714_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5_spec__7(v___x_1704_, v___x_1705_, v___x_1706_, v___x_1713_, v___x_1702_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5___boxed(lean_object* v_f_1715_, lean_object* v_args_1716_, lean_object* v_this_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(v_f_1715_, v_args_1716_, v_this_1717_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0(lean_object* v_args_1720_, lean_object* v_x_1721_){
_start:
{
if (lean_obj_tag(v_x_1721_) == 0)
{
lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1731_; 
lean_dec_ref(v_args_1720_);
v_a_1723_ = lean_ctor_get(v_x_1721_, 0);
v_isSharedCheck_1731_ = !lean_is_exclusive(v_x_1721_);
if (v_isSharedCheck_1731_ == 0)
{
v___x_1725_ = v_x_1721_;
v_isShared_1726_ = v_isSharedCheck_1731_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_dec(v_x_1721_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1731_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_a_1723_);
v___x_1728_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
lean_object* v___x_1729_; 
v___x_1729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1728_);
return v___x_1729_;
}
}
}
else
{
lean_object* v_a_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v_a_1732_ = lean_ctor_get(v_x_1721_, 0);
lean_inc(v_a_1732_);
lean_dec_ref_known(v_x_1721_, 1);
v___x_1733_ = lean_box(0);
v___x_1734_ = l_Lasm_JS_Value_callAwait___at___00Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2_spec__5(v_a_1732_, v_args_1720_, v___x_1733_);
return v___x_1734_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0___boxed(lean_object* v_args_1735_, lean_object* v_x_1736_, lean_object* v___y_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0(v_args_1735_, v_x_1736_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(lean_object* v_module_1740_, lean_object* v_path_1741_, lean_object* v_args_1742_){
_start:
{
lean_object* v___f_1744_; lean_object* v___f_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; uint8_t v___x_1750_; lean_object* v_val_1752_; lean_object* v___x_1755_; 
v___f_1744_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1744_, 0, v_args_1742_);
v___f_1745_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1745_, 0, v___f_1744_);
v___x_1746_ = ((lean_object*)(l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___closed__0));
v___x_1747_ = lean_unsigned_to_nat(0u);
v___x_1748_ = lean_box(0);
v___x_1749_ = l_String_splitOnAux(v_path_1741_, v___x_1746_, v___x_1747_, v___x_1747_, v___x_1747_, v___x_1748_);
v___x_1750_ = 0;
v___x_1755_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v_module_1740_, v___x_1749_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1763_; 
v_a_1756_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1758_ = v___x_1755_;
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1755_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1761_; 
if (v_isShared_1759_ == 0)
{
lean_ctor_set_tag(v___x_1758_, 1);
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
v_val_1752_ = v___x_1761_;
goto v___jp_1751_;
}
}
}
else
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
v_a_1764_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1755_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1755_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
lean_ctor_set_tag(v___x_1766_, 0);
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
v_val_1752_ = v___x_1769_;
goto v___jp_1751_;
}
}
}
v___jp_1751_:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1753_, 0, v_val_1752_);
v___x_1754_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1747_, v___x_1750_, v___x_1753_, v___f_1745_);
return v___x_1754_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2___boxed(lean_object* v_module_1772_, lean_object* v_path_1773_, lean_object* v_args_1774_, lean_object* v_a_1775_){
_start:
{
lean_object* v_res_1776_; 
v_res_1776_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(v_module_1772_, v_path_1773_, v_args_1774_);
lean_dec_ref(v_path_1773_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile(lean_object* v_file_1779_, lean_object* v_args_1780_, lean_object* v_options_1781_){
_start:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1783_ = ((lean_object*)(l_Lasm_JS_Node_child__process_execFile___closed__0));
v___x_1784_ = ((lean_object*)(l_Lasm_JS_Node_child__process_execFile___closed__1));
v___x_1785_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1785_, 0, v_file_1779_);
v___x_1786_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(v_args_1780_);
v___x_1787_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1(v_options_1781_);
v___x_1788_ = lean_unsigned_to_nat(3u);
v___x_1789_ = lean_mk_empty_array_with_capacity(v___x_1788_);
v___x_1790_ = lean_array_push(v___x_1789_, v___x_1785_);
v___x_1791_ = lean_array_push(v___x_1790_, v___x_1786_);
v___x_1792_ = lean_array_push(v___x_1791_, v___x_1787_);
v___x_1793_ = l_Lasm_JS_Web_Support_args(v___x_1792_);
v___x_1794_ = l_Lasm_JS_Node_Support_promisified___at___00Lasm_JS_Node_child__process_execFile_spec__2(v___x_1783_, v___x_1784_, v___x_1793_);
return v___x_1794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_execFile___boxed(lean_object* v_file_1795_, lean_object* v_args_1796_, lean_object* v_options_1797_, lean_object* v_a_1798_){
_start:
{
lean_object* v_res_1799_; 
v_res_1799_ = l_Lasm_JS_Node_child__process_execFile(v_file_1795_, v_args_1796_, v_options_1797_);
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(lean_object* v_x_1800_){
_start:
{
if (lean_obj_tag(v_x_1800_) == 0)
{
lean_object* v___x_1801_; 
v___x_1801_ = lean_box(0);
return v___x_1801_;
}
else
{
lean_object* v_val_1802_; 
v_val_1802_ = lean_ctor_get(v_x_1800_, 0);
lean_inc(v_val_1802_);
lean_dec_ref_known(v_x_1800_, 1);
if (lean_obj_tag(v_val_1802_) == 0)
{
lean_object* v_value_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1813_; 
v_value_1803_ = lean_ctor_get(v_val_1802_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v_val_1802_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1805_ = v_val_1802_;
v_isShared_1806_ = v_isSharedCheck_1813_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_value_1803_);
lean_dec(v_val_1802_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1813_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
size_t v_sz_1807_; size_t v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1811_; 
v_sz_1807_ = lean_array_size(v_value_1803_);
v___x_1808_ = ((size_t)0ULL);
v___x_1809_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_1807_, v___x_1808_, v_value_1803_);
if (v_isShared_1806_ == 0)
{
lean_ctor_set_tag(v___x_1805_, 7);
lean_ctor_set(v___x_1805_, 0, v___x_1809_);
v___x_1811_ = v___x_1805_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1809_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
else
{
lean_object* v_value_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1821_; 
v_value_1814_ = lean_ctor_get(v_val_1802_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v_val_1802_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1816_ = v_val_1802_;
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_value_1814_);
lean_dec(v_val_1802_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v___x_1819_; 
if (v_isShared_1817_ == 0)
{
lean_ctor_set_tag(v___x_1816_, 4);
v___x_1819_ = v___x_1816_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_value_1814_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(lean_object* v_x_1822_){
_start:
{
if (lean_obj_tag(v_x_1822_) == 0)
{
lean_object* v___x_1823_; 
v___x_1823_ = lean_box(0);
return v___x_1823_;
}
else
{
lean_object* v_val_1824_; lean_object* v_cwd_1825_; lean_object* v_env_1826_; lean_object* v_argv0_1827_; lean_object* v_stdio_1828_; lean_object* v_detached_1829_; lean_object* v_uid_1830_; lean_object* v_gid_1831_; lean_object* v_serialization_1832_; lean_object* v_shell_1833_; lean_object* v_windowsVerbatimArguments_1834_; lean_object* v_windowsHide_1835_; lean_object* v_signal_1836_; lean_object* v_timeout_1837_; lean_object* v_killSignal_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
v_val_1824_ = lean_ctor_get(v_x_1822_, 0);
lean_inc(v_val_1824_);
lean_dec_ref_known(v_x_1822_, 1);
v_cwd_1825_ = lean_ctor_get(v_val_1824_, 0);
lean_inc(v_cwd_1825_);
v_env_1826_ = lean_ctor_get(v_val_1824_, 1);
lean_inc(v_env_1826_);
v_argv0_1827_ = lean_ctor_get(v_val_1824_, 2);
lean_inc(v_argv0_1827_);
v_stdio_1828_ = lean_ctor_get(v_val_1824_, 3);
lean_inc(v_stdio_1828_);
v_detached_1829_ = lean_ctor_get(v_val_1824_, 4);
lean_inc(v_detached_1829_);
v_uid_1830_ = lean_ctor_get(v_val_1824_, 5);
lean_inc(v_uid_1830_);
v_gid_1831_ = lean_ctor_get(v_val_1824_, 6);
lean_inc(v_gid_1831_);
v_serialization_1832_ = lean_ctor_get(v_val_1824_, 7);
lean_inc(v_serialization_1832_);
v_shell_1833_ = lean_ctor_get(v_val_1824_, 8);
lean_inc(v_shell_1833_);
v_windowsVerbatimArguments_1834_ = lean_ctor_get(v_val_1824_, 9);
lean_inc(v_windowsVerbatimArguments_1834_);
v_windowsHide_1835_ = lean_ctor_get(v_val_1824_, 10);
lean_inc(v_windowsHide_1835_);
v_signal_1836_ = lean_ctor_get(v_val_1824_, 11);
lean_inc(v_signal_1836_);
v_timeout_1837_ = lean_ctor_get(v_val_1824_, 12);
lean_inc(v_timeout_1837_);
v_killSignal_1838_ = lean_ctor_get(v_val_1824_, 13);
lean_inc(v_killSignal_1838_);
lean_dec(v_val_1824_);
v___x_1839_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__0));
v___x_1840_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__1(v_cwd_1825_);
v___x_1841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1839_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
v___x_1842_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__1));
v___x_1843_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__2(v_env_1826_);
v___x_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1842_);
lean_ctor_set(v___x_1844_, 1, v___x_1843_);
v___x_1845_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__0));
v___x_1846_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_argv0_1827_);
v___x_1847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1845_);
lean_ctor_set(v___x_1847_, 1, v___x_1846_);
v___x_1848_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__1));
v___x_1849_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0_spec__0(v_stdio_1828_);
v___x_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1848_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
v___x_1851_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__2));
v___x_1852_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_detached_1829_);
lean_dec(v_detached_1829_);
v___x_1853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1851_);
lean_ctor_set(v___x_1853_, 1, v___x_1852_);
v___x_1854_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__6));
v___x_1855_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_uid_1830_);
lean_dec(v_uid_1830_);
v___x_1856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1854_);
lean_ctor_set(v___x_1856_, 1, v___x_1855_);
v___x_1857_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__7));
v___x_1858_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_gid_1831_);
lean_dec(v_gid_1831_);
v___x_1859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1857_);
lean_ctor_set(v___x_1859_, 1, v___x_1858_);
v___x_1860_ = ((lean_object*)(l_Lasm_JS_Node_instToJSSpawnOptions___lam__0___closed__3));
v___x_1861_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_serialization_1832_);
v___x_1862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1860_);
lean_ctor_set(v___x_1862_, 1, v___x_1861_);
v___x_1863_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__10));
v___x_1864_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__1_spec__3(v_shell_1833_);
v___x_1865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1863_);
lean_ctor_set(v___x_1865_, 1, v___x_1864_);
v___x_1866_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__9));
v___x_1867_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsVerbatimArguments_1834_);
lean_dec(v_windowsVerbatimArguments_1834_);
v___x_1868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1866_);
lean_ctor_set(v___x_1868_, 1, v___x_1867_);
v___x_1869_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__8));
v___x_1870_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_windowsHide_1835_);
lean_dec(v_windowsHide_1835_);
v___x_1871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1871_, 0, v___x_1869_);
lean_ctor_set(v___x_1871_, 1, v___x_1870_);
v___x_1872_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__11));
v___x_1873_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_1836_);
lean_dec(v_signal_1836_);
v___x_1874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1872_);
lean_ctor_set(v___x_1874_, 1, v___x_1873_);
v___x_1875_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__3));
v___x_1876_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_timeout_1837_);
lean_dec(v_timeout_1837_);
v___x_1877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1875_);
lean_ctor_set(v___x_1877_, 1, v___x_1876_);
v___x_1878_ = ((lean_object*)(l_Lasm_JS_Node_instToJSExecFileOptions___lam__0___closed__5));
v___x_1879_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_fsPromises_mkdir_spec__0_spec__0(v_killSignal_1838_);
v___x_1880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1878_);
lean_ctor_set(v___x_1880_, 1, v___x_1879_);
v___x_1881_ = lean_unsigned_to_nat(14u);
v___x_1882_ = lean_mk_empty_array_with_capacity(v___x_1881_);
v___x_1883_ = lean_array_push(v___x_1882_, v___x_1841_);
v___x_1884_ = lean_array_push(v___x_1883_, v___x_1844_);
v___x_1885_ = lean_array_push(v___x_1884_, v___x_1847_);
v___x_1886_ = lean_array_push(v___x_1885_, v___x_1850_);
v___x_1887_ = lean_array_push(v___x_1886_, v___x_1853_);
v___x_1888_ = lean_array_push(v___x_1887_, v___x_1856_);
v___x_1889_ = lean_array_push(v___x_1888_, v___x_1859_);
v___x_1890_ = lean_array_push(v___x_1889_, v___x_1862_);
v___x_1891_ = lean_array_push(v___x_1890_, v___x_1865_);
v___x_1892_ = lean_array_push(v___x_1891_, v___x_1868_);
v___x_1893_ = lean_array_push(v___x_1892_, v___x_1871_);
v___x_1894_ = lean_array_push(v___x_1893_, v___x_1874_);
v___x_1895_ = lean_array_push(v___x_1894_, v___x_1877_);
v___x_1896_ = lean_array_push(v___x_1895_, v___x_1880_);
v___x_1897_ = l_Lasm_JS_Web_Support_fields(v___x_1896_);
lean_dec_ref(v___x_1896_);
return v___x_1897_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn(lean_object* v_command_1906_, lean_object* v_args_1907_, lean_object* v_options_1908_){
_start:
{
uint8_t v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1910_ = 0;
v___x_1911_ = lean_unsigned_to_nat(3u);
v___x_1912_ = ((lean_object*)(l_Lasm_JS_Node_child__process_spawn___closed__2));
v___x_1913_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1913_, 0, v_command_1906_);
v___x_1914_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_execFile_spec__0(v_args_1907_);
v___x_1915_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_child__process_spawn_spec__0(v_options_1908_);
v___x_1916_ = lean_mk_empty_array_with_capacity(v___x_1911_);
v___x_1917_ = lean_array_push(v___x_1916_, v___x_1913_);
v___x_1918_ = lean_array_push(v___x_1917_, v___x_1914_);
v___x_1919_ = lean_array_push(v___x_1918_, v___x_1915_);
v___x_1920_ = l_Lasm_JS_Web_Support_args(v___x_1919_);
v___x_1921_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1912_, v___x_1920_, v___x_1910_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1921_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1921_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1927_; 
if (v_isShared_1925_ == 0)
{
v___x_1927_ = v___x_1924_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_a_1922_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
else
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
v_a_1930_ = lean_ctor_get(v___x_1921_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1921_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1921_);
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
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_child__process_spawn___boxed(lean_object* v_command_1938_, lean_object* v_args_1939_, lean_object* v_options_1940_, lean_object* v_a_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l_Lasm_JS_Node_child__process_spawn(v_command_1938_, v_args_1939_, v_options_1940_);
return v_res_1942_;
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
