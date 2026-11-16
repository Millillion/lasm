// Lean compiler output
// Module: Lasm.JS.Node.Events
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Web.Streams
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
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitter___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventEmitter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSEventEmitter___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSEventEmitter___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitter___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSEventEmitter___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSEventEmitter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSEventEmitter___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSEventEmitter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.EventEmitter"};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSEventEmitter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSymbol___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrSymbol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrSymbol___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSymbol___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrSymbol___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSymbol = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrSymbol___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Node.DOMStringOrSymbol"};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterNewListenerListener = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitter___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lasm.JS.Node.EventEmitter.NewListenerListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterRemoveListenerListener = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitter___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.JS.Node.EventEmitter.RemoveListenerListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__1_value;
static lean_once_cell_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "require "};
static const lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node: empty path in "};
static const lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "node:events"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "EventEmitter"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_EventEmitter_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "on"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_EventEmitter_onNewListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "newListener"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_onceNewListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "once"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_onceNewListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_onceNewListener___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceNewListener(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceNewListener___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "removeListener"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceRemoveListener(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceRemoveListener___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_emit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "emit"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_emit___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_emit___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_eventNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eventNames"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_eventNames___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_eventNames___closed__0_value;
static const lean_array_object l_Lasm_JS_Node_EventEmitter_eventNames___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Node_EventEmitter_eventNames___closed__1 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_eventNames___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_EventEmitter_eventNames___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_EventEmitter_eventNames___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_listenerCount___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "listenerCount"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_listenerCount___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_off___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "off"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_off___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_off___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_removeAllListeners___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "removeAllListeners"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_removeAllListeners___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Array (Lasm.JS.Data)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "an element is not Lasm.JS.Data"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_once___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.events.once"};
static const lean_object* l_Lasm_JS_Node_events_once___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_once___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_events_once___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_once___closed__0_value),((lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_EventEmitter_onceNewListener___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_events_once___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_once___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitter___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSEventEmitter___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Node_instFromJSEventEmitter___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx(lean_object* v_x_22_){
_start:
{
if (lean_obj_tag(v_x_22_) == 0)
{
lean_object* v___x_23_; 
v___x_23_ = lean_unsigned_to_nat(0u);
return v___x_23_;
}
else
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(1u);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx___boxed(lean_object* v_x_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx(v_x_25_);
lean_dec_ref(v_x_25_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(lean_object* v_t_27_, lean_object* v_k_28_){
_start:
{
if (lean_obj_tag(v_t_27_) == 0)
{
lean_object* v_value_29_; lean_object* v___x_30_; 
v_value_29_ = lean_ctor_get(v_t_27_, 0);
lean_inc_ref(v_value_29_);
lean_dec_ref_known(v_t_27_, 1);
v___x_30_ = lean_apply_1(v_k_28_, v_value_29_);
return v___x_30_;
}
else
{
lean_object* v_value_31_; lean_object* v___x_32_; 
v_value_31_ = lean_ctor_get(v_t_27_, 0);
lean_inc(v_value_31_);
lean_dec_ref_known(v_t_27_, 1);
v___x_32_ = lean_apply_1(v_k_28_, v_value_31_);
return v___x_32_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(lean_object* v_motive_33_, lean_object* v_ctorIdx_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_k_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_35_, v_k_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___boxed(lean_object* v_motive_39_, lean_object* v_ctorIdx_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_k_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(v_motive_39_, v_ctorIdx_40_, v_t_41_, v_h_42_, v_k_43_);
lean_dec(v_ctorIdx_40_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim___redArg(lean_object* v_t_45_, lean_object* v_domString_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_45_, v_domString_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_domString_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_49_, v_domString_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim___redArg(lean_object* v_t_53_, lean_object* v_symbol_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_53_, v_symbol_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_symbol_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_57_, v_symbol_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSymbol___lam__0(lean_object* v_x_61_){
_start:
{
if (lean_obj_tag(v_x_61_) == 0)
{
lean_object* v_value_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_69_; 
v_value_62_ = lean_ctor_get(v_x_61_, 0);
v_isSharedCheck_69_ = !lean_is_exclusive(v_x_61_);
if (v_isSharedCheck_69_ == 0)
{
v___x_64_ = v_x_61_;
v_isShared_65_ = v_isSharedCheck_69_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_value_62_);
lean_dec(v_x_61_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_69_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_67_; 
if (v_isShared_65_ == 0)
{
lean_ctor_set_tag(v___x_64_, 4);
v___x_67_ = v___x_64_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_value_62_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
}
else
{
lean_object* v_value_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v_value_70_ = lean_ctor_get(v_x_61_, 0);
lean_inc(v_value_70_);
lean_dec_ref_known(v_x_61_, 1);
v___x_71_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_72_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_72_, 0, v_value_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
return v___x_72_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___lam__0(lean_object* v_value_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v_value_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0(lean_object* v_x_81_){
_start:
{
switch(lean_obj_tag(v_x_81_))
{
case 4:
{
lean_object* v_s_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_90_; 
v_s_82_ = lean_ctor_get(v_x_81_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v_x_81_);
if (v_isSharedCheck_90_ == 0)
{
v___x_84_ = v_x_81_;
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_s_82_);
lean_dec(v_x_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_87_; 
if (v_isShared_85_ == 0)
{
lean_ctor_set_tag(v___x_84_, 0);
v___x_87_ = v___x_84_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_s_82_);
v___x_87_ = v_reuseFailAlloc_89_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
lean_object* v___x_88_; 
v___x_88_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
}
}
case 9:
{
lean_object* v_value_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v_value_91_ = lean_ctor_get(v_x_81_, 0);
lean_inc(v_value_91_);
lean_dec_ref_known(v_x_81_, 2);
v___x_92_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_92_, 0, v_value_91_);
v___x_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
default: 
{
lean_object* v___x_94_; 
lean_dec(v_x_81_);
v___x_94_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0___closed__0));
return v___x_94_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0(lean_object* v_x_113_){
_start:
{
if (lean_obj_tag(v_x_113_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_123_; 
v_a_115_ = lean_ctor_get(v_x_113_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v_x_113_);
if (v_isSharedCheck_123_ == 0)
{
v___x_117_ = v_x_113_;
v_isShared_118_ = v_isSharedCheck_123_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v_x_113_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_123_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_a_115_);
v___x_120_ = v_reuseFailAlloc_122_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
lean_object* v___x_121_; 
v___x_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
return v___x_121_;
}
}
}
else
{
lean_object* v___x_124_; 
lean_dec_ref_known(v_x_113_, 1);
v___x_124_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___closed__1));
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___boxed(lean_object* v_x_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0(v_x_125_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1(lean_object* v_f_128_, lean_object* v_a_129_, lean_object* v___f_130_, lean_object* v_x_131_){
_start:
{
if (lean_obj_tag(v_x_131_) == 0)
{
lean_object* v_a_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_141_; 
lean_dec_ref(v___f_130_);
lean_dec_ref(v_a_129_);
lean_dec_ref(v_f_128_);
v_a_133_ = lean_ctor_get(v_x_131_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v_x_131_);
if (v_isSharedCheck_141_ == 0)
{
v___x_135_ = v_x_131_;
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_a_133_);
lean_dec(v_x_131_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_138_; 
if (v_isShared_136_ == 0)
{
v___x_138_ = v___x_135_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_133_);
v___x_138_ = v_reuseFailAlloc_140_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
lean_object* v___x_139_; 
v___x_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
return v___x_139_;
}
}
}
else
{
lean_object* v_a_142_; lean_object* v___x_143_; uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v_a_142_ = lean_ctor_get(v_x_131_, 0);
lean_inc(v_a_142_);
lean_dec_ref_known(v_x_131_, 1);
v___x_143_ = lean_unsigned_to_nat(0u);
v___x_144_ = 0;
v___x_145_ = lean_apply_3(v_f_128_, v_a_129_, v_a_142_, lean_box(0));
v___x_146_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_143_, v___x_144_, v___x_145_, v___f_130_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1___boxed(lean_object* v_f_147_, lean_object* v_a_148_, lean_object* v___f_149_, lean_object* v_x_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1(v_f_147_, v_a_148_, v___f_149_, v_x_150_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(lean_object* v_args_154_, lean_object* v_i_155_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_157_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___closed__0));
v___x_158_ = lean_unsigned_to_nat(1u);
v___x_159_ = lean_nat_add(v_i_155_, v___x_158_);
v___x_160_ = l_Nat_reprFast(v___x_159_);
v___x_161_ = lean_string_append(v___x_157_, v___x_160_);
lean_dec_ref(v___x_160_);
v___x_162_ = lean_array_get_size(v_args_154_);
v___x_163_ = lean_nat_dec_lt(v_i_155_, v___x_162_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_box(0);
v___x_165_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v___x_161_, v___x_164_);
lean_dec_ref(v___x_161_);
return v___x_165_;
}
else
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_array_fget_borrowed(v_args_154_, v_i_155_);
lean_inc(v___x_166_);
v___x_167_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v___x_161_, v___x_166_);
lean_dec_ref(v___x_161_);
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___boxed(lean_object* v_args_168_, lean_object* v_i_169_, lean_object* v_a_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(v_args_168_, v_i_169_);
lean_dec(v_i_169_);
lean_dec_ref(v_args_168_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2(lean_object* v_f_172_, lean_object* v___f_173_, lean_object* v_args_174_, lean_object* v_x_175_){
_start:
{
if (lean_obj_tag(v_x_175_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_185_; 
lean_dec_ref(v___f_173_);
lean_dec_ref(v_f_172_);
v_a_177_ = lean_ctor_get(v_x_175_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v_x_175_);
if (v_isSharedCheck_185_ == 0)
{
v___x_179_ = v_x_175_;
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v_x_175_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_185_;
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
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_177_);
v___x_182_ = v_reuseFailAlloc_184_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_183_; 
v___x_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
return v___x_183_;
}
}
}
else
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_207_; 
v_a_186_ = lean_ctor_get(v_x_175_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v_x_175_);
if (v_isSharedCheck_207_ == 0)
{
v___x_188_ = v_x_175_;
v_isShared_189_ = v_isSharedCheck_207_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v_x_175_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_207_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___f_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; lean_object* v_val_195_; lean_object* v___x_198_; 
v___f_190_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_190_, 0, v_f_172_);
lean_closure_set(v___f_190_, 1, v_a_186_);
lean_closure_set(v___f_190_, 2, v___f_173_);
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = lean_unsigned_to_nat(0u);
v___x_193_ = 0;
v___x_198_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(v_args_174_, v___x_191_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_201_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
lean_inc(v_a_199_);
lean_dec_ref_known(v___x_198_, 1);
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 0, v_a_199_);
v___x_201_ = v___x_188_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_199_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
v_val_195_ = v___x_201_;
goto v___jp_194_;
}
}
else
{
lean_object* v_a_203_; lean_object* v___x_205_; 
v_a_203_ = lean_ctor_get(v___x_198_, 0);
lean_inc(v_a_203_);
lean_dec_ref_known(v___x_198_, 1);
if (v_isShared_189_ == 0)
{
lean_ctor_set_tag(v___x_188_, 0);
lean_ctor_set(v___x_188_, 0, v_a_203_);
v___x_205_ = v___x_188_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_a_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
v_val_195_ = v___x_205_;
goto v___jp_194_;
}
}
v___jp_194_:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_196_, 0, v_val_195_);
v___x_197_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_192_, v___x_193_, v___x_196_, v___f_190_);
return v___x_197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2___boxed(lean_object* v_f_208_, lean_object* v___f_209_, lean_object* v_args_210_, lean_object* v_x_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2(v_f_208_, v___f_209_, v_args_210_, v_x_211_);
lean_dec_ref(v_args_210_);
return v_res_213_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_218_ = lean_string_utf8_byte_size(v___x_217_);
return v___x_218_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__4(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_219_ = lean_unsigned_to_nat(0u);
v___x_220_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__3);
v___x_221_ = lean_nat_dec_eq(v___x_220_, v___x_219_);
return v___x_221_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_226_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__8));
v___x_227_ = lean_unsigned_to_nat(46u);
v___x_228_ = lean_unsigned_to_nat(193u);
v___x_229_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__7));
v___x_230_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__6));
v___x_231_ = l_mkPanicMessageWithDecl(v___x_230_, v___x_229_, v___x_228_, v___x_227_, v___x_226_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1(lean_object* v_context_233_, lean_object* v_d_234_){
_start:
{
lean_object* v___y_237_; lean_object* v___y_238_; 
switch(lean_obj_tag(v_d_234_))
{
case 4:
{
lean_object* v_s_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_250_; 
v_s_242_ = lean_ctor_get(v_d_234_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v_d_234_);
if (v_isSharedCheck_250_ == 0)
{
v___x_244_ = v_d_234_;
v_isShared_245_ = v_isSharedCheck_250_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_s_242_);
lean_dec(v_d_234_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_250_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
lean_ctor_set_tag(v___x_244_, 0);
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_s_242_);
v___x_247_ = v_reuseFailAlloc_249_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
lean_object* v___x_248_; 
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
return v___x_248_;
}
}
}
case 9:
{
lean_object* v_value_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v_value_251_ = lean_ctor_get(v_d_234_, 0);
lean_inc(v_value_251_);
lean_dec_ref_known(v_d_234_, 2);
v___x_252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_252_, 0, v_value_251_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
default: 
{
lean_object* v___x_254_; lean_object* v_received_256_; 
v___x_254_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
if (lean_obj_tag(v_d_234_) == 9)
{
lean_object* v_value_270_; lean_object* v_description_271_; uint8_t v___x_272_; 
v_value_270_ = lean_ctor_get(v_d_234_, 0);
v_description_271_ = lean_ctor_get(v_d_234_, 1);
v___x_272_ = lean_string_dec_eq(v_description_271_, v___x_254_);
if (v___x_272_ == 0)
{
goto v___jp_268_;
}
else
{
uint32_t v___x_273_; uint64_t v___x_274_; lean_object* v___x_275_; uint32_t v___x_276_; lean_object* v___x_277_; 
lean_inc_n(v_value_270_, 2);
lean_dec_ref_known(v_d_234_, 2);
v___x_273_ = 206;
v___x_274_ = 0ULL;
v___x_275_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_275_, 0, v_value_270_);
lean_ctor_set(v___x_275_, 1, v___x_254_);
v___x_276_ = lasm_js_value_handle(v_value_270_);
lean_dec(v_value_270_);
v___x_277_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_273_, v___x_274_, v___x_275_, v___x_276_);
lean_dec_ref_known(v___x_275_, 2);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v_a_278_; uint8_t v___x_279_; 
v_a_278_ = lean_ctor_get(v___x_277_, 0);
lean_inc(v_a_278_);
lean_dec_ref_known(v___x_277_, 1);
v___x_279_ = lean_string_validate_utf8(v_a_278_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; lean_object* v___x_281_; 
lean_dec(v_a_278_);
v___x_280_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9);
v___x_281_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_280_);
v_received_256_ = v___x_281_;
goto v___jp_255_;
}
else
{
lean_object* v___x_282_; 
v___x_282_ = lean_string_from_utf8_unchecked(v_a_278_);
v_received_256_ = v___x_282_;
goto v___jp_255_;
}
}
else
{
lean_object* v___x_283_; 
lean_dec_ref_known(v___x_277_, 1);
v___x_283_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10));
v_received_256_ = v___x_283_;
goto v___jp_255_;
}
}
}
else
{
goto v___jp_268_;
}
v___jp_255_:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_257_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_258_ = lean_string_append(v___x_257_, v_context_233_);
v___x_259_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1));
v___x_260_ = lean_string_append(v___x_258_, v___x_259_);
v___x_261_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__1));
v___x_262_ = lean_string_append(v___x_260_, v___x_261_);
v___x_263_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2));
v___x_264_ = lean_string_append(v___x_262_, v___x_263_);
v___x_265_ = lean_string_append(v___x_264_, v_received_256_);
lean_dec_ref(v_received_256_);
v___x_266_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__4);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; 
v___x_267_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__5));
v___y_237_ = v___x_265_;
v___y_238_ = v___x_267_;
goto v___jp_236_;
}
else
{
v___y_237_ = v___x_265_;
v___y_238_ = v___x_254_;
goto v___jp_236_;
}
}
v___jp_268_:
{
lean_object* v___x_269_; 
v___x_269_ = l_Lasm_JS_Data_describe(v_d_234_);
v_received_256_ = v___x_269_;
goto v___jp_255_;
}
}
}
v___jp_236_:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_239_ = lean_string_append(v___y_237_, v___y_238_);
v___x_240_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
v___x_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
return v___x_241_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___boxed(lean_object* v_context_284_, lean_object* v_d_285_, lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1(v_context_284_, v_d_285_);
lean_dec_ref(v_context_284_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(lean_object* v_args_288_, lean_object* v_i_289_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_291_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___closed__0));
v___x_292_ = lean_unsigned_to_nat(1u);
v___x_293_ = lean_nat_add(v_i_289_, v___x_292_);
v___x_294_ = l_Nat_reprFast(v___x_293_);
v___x_295_ = lean_string_append(v___x_291_, v___x_294_);
lean_dec_ref(v___x_294_);
v___x_296_ = lean_array_get_size(v_args_288_);
v___x_297_ = lean_nat_dec_lt(v_i_289_, v___x_296_);
if (v___x_297_ == 0)
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_box(0);
v___x_299_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1(v___x_295_, v___x_298_);
lean_dec_ref(v___x_295_);
return v___x_299_;
}
else
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = lean_array_fget_borrowed(v_args_288_, v_i_289_);
lean_inc(v___x_300_);
v___x_301_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1(v___x_295_, v___x_300_);
lean_dec_ref(v___x_295_);
return v___x_301_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1___boxed(lean_object* v_args_302_, lean_object* v_i_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(v_args_302_, v_i_303_);
lean_dec(v_i_303_);
lean_dec_ref(v_args_302_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3(lean_object* v_f_306_, lean_object* v___f_307_, lean_object* v_args_308_){
_start:
{
lean_object* v___f_310_; lean_object* v___x_311_; uint8_t v___x_312_; lean_object* v_val_314_; lean_object* v___x_317_; 
lean_inc_ref(v_args_308_);
v___f_310_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_310_, 0, v_f_306_);
lean_closure_set(v___f_310_, 1, v___f_307_);
lean_closure_set(v___f_310_, 2, v_args_308_);
v___x_311_ = lean_unsigned_to_nat(0u);
v___x_312_ = 0;
v___x_317_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(v_args_308_, v___x_311_);
lean_dec_ref(v_args_308_);
if (lean_obj_tag(v___x_317_) == 0)
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
v_a_318_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___x_317_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_317_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
lean_ctor_set_tag(v___x_320_, 1);
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
v_val_314_ = v___x_323_;
goto v___jp_313_;
}
}
}
else
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
v_a_326_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_333_ == 0)
{
v___x_328_ = v___x_317_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_317_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
lean_ctor_set_tag(v___x_328_, 0);
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_a_326_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
v_val_314_ = v___x_331_;
goto v___jp_313_;
}
}
}
v___jp_313_:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v_val_314_);
v___x_316_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_311_, v___x_312_, v___x_315_, v___f_310_);
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed(lean_object* v_f_334_, lean_object* v___f_335_, lean_object* v_args_336_, lean_object* v___y_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3(v_f_334_, v___f_335_, v_args_336_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn(lean_object* v_f_340_){
_start:
{
lean_object* v___f_342_; lean_object* v___f_343_; lean_object* v___x_344_; 
v___f_342_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___closed__0));
v___f_343_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_343_, 0, v_f_340_);
lean_closure_set(v___f_343_, 1, v___f_342_);
v___x_344_ = l_Lasm_JS_Function_ofFn(v___f_343_);
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
v_a_345_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_344_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_344_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
else
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
v_a_353_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_344_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_344_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_358_; 
if (v_isShared_356_ == 0)
{
v___x_358_ = v___x_355_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_353_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___boxed(lean_object* v_f_361_, lean_object* v_a_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn(v_f_361_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0(lean_object* v_f_364_, lean_object* v_args_365_){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(v_args_365_, v___x_367_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_a_369_);
lean_dec_ref_known(v___x_368_, 1);
v___x_370_ = lean_unsigned_to_nat(1u);
v___x_371_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(v_args_365_, v___x_370_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___x_373_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
lean_inc(v_a_372_);
lean_dec_ref_known(v___x_371_, 1);
v___x_373_ = lean_apply_3(v_f_364_, v_a_369_, v_a_372_, lean_box(0));
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_381_; 
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_381_ == 0)
{
lean_object* v_unused_382_; 
v_unused_382_ = lean_ctor_get(v___x_373_, 0);
lean_dec(v_unused_382_);
v___x_375_ = v___x_373_;
v_isShared_376_ = v_isSharedCheck_381_;
goto v_resetjp_374_;
}
else
{
lean_dec(v___x_373_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_381_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; lean_object* v___x_379_; 
v___x_377_ = lean_box(0);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_377_);
v___x_379_ = v___x_375_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v___x_377_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
else
{
lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_390_; 
v_a_383_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_390_ == 0)
{
v___x_385_ = v___x_373_;
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_373_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_388_; 
if (v_isShared_386_ == 0)
{
v___x_388_ = v___x_385_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_a_383_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
else
{
lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_398_; 
lean_dec(v_a_369_);
lean_dec_ref(v_f_364_);
v_a_391_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_398_ == 0)
{
v___x_393_ = v___x_371_;
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_371_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_396_; 
if (v_isShared_394_ == 0)
{
v___x_396_ = v___x_393_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_391_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
lean_dec_ref(v_f_364_);
v_a_399_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_368_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_368_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed(lean_object* v_f_407_, lean_object* v_args_408_, lean_object* v___y_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0(v_f_407_, v_args_408_);
lean_dec_ref(v_args_408_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn(lean_object* v_f_411_){
_start:
{
lean_object* v___f_413_; lean_object* v___x_414_; 
v___f_413_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_413_, 0, v_f_411_);
v___x_414_ = l_Lasm_JS_Function_ofSyncFn(v___f_413_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_414_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_414_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_a_415_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
else
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_430_; 
v_a_423_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_430_ == 0)
{
v___x_425_ = v___x_414_;
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_414_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_423_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___boxed(lean_object* v_f_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn(v_f_431_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn(lean_object* v_f_441_){
_start:
{
lean_object* v___f_443_; lean_object* v___f_444_; lean_object* v___x_445_; 
v___f_443_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___closed__0));
v___f_444_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_444_, 0, v_f_441_);
lean_closure_set(v___f_444_, 1, v___f_443_);
v___x_445_ = l_Lasm_JS_Function_ofFn(v___f_444_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___x_445_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_445_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_461_; 
v_a_454_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_461_ == 0)
{
v___x_456_ = v___x_445_;
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_445_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_454_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn___boxed(lean_object* v_f_462_, lean_object* v_a_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn(v_f_462_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn(lean_object* v_f_465_){
_start:
{
lean_object* v___f_467_; lean_object* v___x_468_; 
v___f_467_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_467_, 0, v_f_465_);
v___x_468_ = l_Lasm_JS_Function_ofSyncFn(v___f_467_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
v_a_469_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_476_ == 0)
{
v___x_471_ = v___x_468_;
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_468_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
if (v_isShared_472_ == 0)
{
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_a_469_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
v_a_477_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_468_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_468_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn___boxed(lean_object* v_f_485_, lean_object* v_a_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn(v_f_485_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0(lean_object* v___f_489_, lean_object* v_d_490_){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_491_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0));
v___x_492_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_489_, v_d_490_);
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = lean_unsigned_to_nat(1u);
v___x_495_ = lean_mk_empty_array_with_capacity(v___x_494_);
v___x_496_ = lean_array_push(v___x_495_, v___x_493_);
v___x_497_ = l_Lasm_JS_Web_Support_fields(v___x_496_);
lean_dec_ref(v___x_496_);
return v___x_497_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_502_; uint64_t v___x_503_; 
v___x_502_ = 1;
v___x_503_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0(lean_object* v_specifier_505_){
_start:
{
uint32_t v___x_507_; uint32_t v___x_508_; uint64_t v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_507_ = 201;
v___x_508_ = 0;
v___x_509_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__0);
v___x_510_ = lean_string_to_utf8(v_specifier_505_);
v___x_511_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_507_, v___x_508_, v___x_509_, v___x_510_);
lean_dec_ref(v___x_510_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_a_512_);
lean_dec_ref_known(v___x_511_, 1);
v___x_513_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__1));
v___x_514_ = l_String_quote(v_specifier_505_);
v___x_515_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
v___x_516_ = lean_unsigned_to_nat(120u);
v___x_517_ = lean_unsigned_to_nat(0u);
v___x_518_ = l_Std_Format_pretty(v___x_515_, v___x_516_, v___x_517_, v___x_517_);
v___x_519_ = lean_string_append(v___x_513_, v___x_518_);
lean_dec_ref(v___x_518_);
v___x_520_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_519_, v_a_512_);
lean_dec(v_a_512_);
lean_dec_ref(v___x_519_);
return v___x_520_;
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
lean_dec_ref(v_specifier_505_);
v_a_521_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_511_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_511_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
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
return v___x_526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___boxed(lean_object* v_specifier_529_, lean_object* v_a_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0(v_specifier_529_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1(lean_object* v_module_533_, lean_object* v_o_534_, lean_object* v_a_535_){
_start:
{
if (lean_obj_tag(v_a_535_) == 0)
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
lean_dec(v_o_534_);
v___x_537_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1___closed__0));
v___x_538_ = lean_string_append(v___x_537_, v_module_533_);
v___x_539_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
v___x_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
return v___x_540_;
}
else
{
lean_object* v_tail_541_; 
v_tail_541_ = lean_ctor_get(v_a_535_, 1);
if (lean_obj_tag(v_tail_541_) == 0)
{
lean_object* v_head_542_; lean_object* v___x_543_; 
v_head_542_ = lean_ctor_get(v_a_535_, 0);
lean_inc(v_head_542_);
lean_dec_ref_known(v_a_535_, 2);
v___x_543_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_534_, v_head_542_);
return v___x_543_;
}
else
{
lean_object* v_head_544_; lean_object* v___x_545_; 
lean_inc(v_tail_541_);
v_head_544_ = lean_ctor_get(v_a_535_, 0);
lean_inc(v_head_544_);
lean_dec_ref_known(v_a_535_, 2);
v___x_545_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_534_, v_head_544_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v_a_546_; 
v_a_546_ = lean_ctor_get(v___x_545_, 0);
lean_inc(v_a_546_);
lean_dec_ref_known(v___x_545_, 1);
v_o_534_ = v_a_546_;
v_a_535_ = v_tail_541_;
goto _start;
}
else
{
lean_dec(v_tail_541_);
return v___x_545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1___boxed(lean_object* v_module_548_, lean_object* v_o_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1(v_module_548_, v_o_549_, v_a_550_);
lean_dec_ref(v_module_548_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0(lean_object* v_module_553_, lean_object* v_path_554_){
_start:
{
lean_object* v___x_556_; 
lean_inc_ref(v_module_553_);
v___x_556_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0(v_module_553_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_a_557_; lean_object* v___x_558_; 
v_a_557_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_a_557_);
lean_dec_ref_known(v___x_556_, 1);
v___x_558_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1(v_module_553_, v_a_557_, v_path_554_);
lean_dec_ref(v_module_553_);
return v___x_558_;
}
else
{
lean_dec(v_path_554_);
lean_dec_ref(v_module_553_);
return v___x_556_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0___boxed(lean_object* v_module_559_, lean_object* v_path_560_, lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0(v_module_559_, v_path_560_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___lam__0(lean_object* v___x_563_, lean_object* v___x_564_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0(v___x_563_, v___x_564_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___lam__0___boxed(lean_object* v___x_567_, lean_object* v___x_568_, lean_object* v___y_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lasm_JS_Node_EventEmitter_cast_x3f___lam__0(v___x_567_, v___x_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f(lean_object* v_v_579_){
_start:
{
lean_object* v___f_581_; lean_object* v___x_582_; 
v___f_581_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__3));
lean_inc(v_v_579_);
v___x_582_ = l_Lasm_JS_Web_Support_isInstance(v___f_581_, v_v_579_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_596_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_596_ == 0)
{
v___x_585_ = v___x_582_;
v_isShared_586_ = v_isSharedCheck_596_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_582_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_596_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
uint8_t v___x_587_; 
v___x_587_ = lean_unbox(v_a_583_);
lean_dec(v_a_583_);
if (v___x_587_ == 0)
{
lean_object* v___x_588_; lean_object* v___x_590_; 
lean_dec(v_v_579_);
v___x_588_ = lean_box(0);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v___x_588_);
v___x_590_ = v___x_585_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
else
{
lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_592_, 0, v_v_579_);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v___x_592_);
v___x_594_ = v___x_585_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v___x_592_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
}
else
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec(v_v_579_);
v_a_597_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_582_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_582_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___boxed(lean_object* v_v_605_, lean_object* v_a_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lasm_JS_Node_EventEmitter_cast_x3f(v_v_605_);
return v_res_607_;
}
}
static lean_object* _init_l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_612_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2));
v___x_613_ = lean_unsigned_to_nat(2u);
v___x_614_ = lean_mk_empty_array_with_capacity(v___x_613_);
v___x_615_ = lean_array_push(v___x_614_, v___x_612_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener(lean_object* v_self_616_, lean_object* v_listener_617_){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_619_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0));
v___x_620_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_621_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_621_, 0, v_listener_617_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3, &l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3_once, _init_l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3);
v___x_623_ = lean_array_push(v___x_622_, v___x_621_);
v___x_624_ = l_Lasm_JS_Web_Support_args(v___x_623_);
v___x_625_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_616_, v___x_619_, v___x_624_);
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
v_a_626_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_625_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_625_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
v_a_634_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_625_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_625_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___boxed(lean_object* v_self_642_, lean_object* v_listener_643_, lean_object* v_a_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lasm_JS_Node_EventEmitter_onNewListener(v_self_642_, v_listener_643_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceNewListener(lean_object* v_self_647_, lean_object* v_listener_648_){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_650_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onceNewListener___closed__0));
v___x_651_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_652_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_652_, 0, v_listener_648_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
v___x_653_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3, &l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3_once, _init_l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3);
v___x_654_ = lean_array_push(v___x_653_, v___x_652_);
v___x_655_ = l_Lasm_JS_Web_Support_args(v___x_654_);
v___x_656_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_647_, v___x_650_, v___x_655_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
v_a_657_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_656_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_656_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_672_; 
v_a_665_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_672_ == 0)
{
v___x_667_ = v___x_656_;
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_656_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_a_665_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceNewListener___boxed(lean_object* v_self_673_, lean_object* v_listener_674_, lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lasm_JS_Node_EventEmitter_onceNewListener(v_self_673_, v_listener_674_);
return v_res_676_;
}
}
static lean_object* _init_l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_680_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1));
v___x_681_ = lean_unsigned_to_nat(2u);
v___x_682_ = lean_mk_empty_array_with_capacity(v___x_681_);
v___x_683_ = lean_array_push(v___x_682_, v___x_680_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener(lean_object* v_self_684_, lean_object* v_listener_685_){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_687_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0));
v___x_688_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_689_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_689_, 0, v_listener_685_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
v___x_690_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2, &l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2_once, _init_l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2);
v___x_691_ = lean_array_push(v___x_690_, v___x_689_);
v___x_692_ = l_Lasm_JS_Web_Support_args(v___x_691_);
v___x_693_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_684_, v___x_687_, v___x_692_);
if (lean_obj_tag(v___x_693_) == 0)
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_701_; 
v_a_694_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_701_ == 0)
{
v___x_696_ = v___x_693_;
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v___x_693_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_699_; 
if (v_isShared_697_ == 0)
{
v___x_699_ = v___x_696_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_a_694_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
else
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_709_; 
v_a_702_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_709_ == 0)
{
v___x_704_ = v___x_693_;
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_693_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener___boxed(lean_object* v_self_710_, lean_object* v_listener_711_, lean_object* v_a_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lasm_JS_Node_EventEmitter_onRemoveListener(v_self_710_, v_listener_711_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceRemoveListener(lean_object* v_self_714_, lean_object* v_listener_715_){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_717_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onceNewListener___closed__0));
v___x_718_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_719_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_719_, 0, v_listener_715_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
v___x_720_ = lean_unsigned_to_nat(2u);
v___x_721_ = lean_mk_empty_array_with_capacity(v___x_720_);
lean_dec_ref(v___x_721_);
v___x_722_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2, &l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2_once, _init_l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2);
v___x_723_ = lean_array_push(v___x_722_, v___x_719_);
v___x_724_ = l_Lasm_JS_Web_Support_args(v___x_723_);
v___x_725_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_714_, v___x_717_, v___x_724_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_733_ == 0)
{
v___x_728_ = v___x_725_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_725_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_726_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
else
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_741_; 
v_a_734_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_741_ == 0)
{
v___x_736_ = v___x_725_;
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_725_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_739_; 
if (v_isShared_737_ == 0)
{
v___x_739_ = v___x_736_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_a_734_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceRemoveListener___boxed(lean_object* v_self_742_, lean_object* v_listener_743_, lean_object* v_a_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_Lasm_JS_Node_EventEmitter_onceRemoveListener(v_self_742_, v_listener_743_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t v_sz_746_, size_t v_i_747_, lean_object* v_bs_748_){
_start:
{
uint8_t v___x_749_; 
v___x_749_ = lean_usize_dec_lt(v_i_747_, v_sz_746_);
if (v___x_749_ == 0)
{
return v_bs_748_;
}
else
{
lean_object* v_v_750_; lean_object* v___x_751_; lean_object* v_bs_x27_752_; size_t v___x_753_; size_t v___x_754_; lean_object* v___x_755_; 
v_v_750_ = lean_array_uget(v_bs_748_, v_i_747_);
v___x_751_ = lean_unsigned_to_nat(0u);
v_bs_x27_752_ = lean_array_uset(v_bs_748_, v_i_747_, v___x_751_);
v___x_753_ = ((size_t)1ULL);
v___x_754_ = lean_usize_add(v_i_747_, v___x_753_);
v___x_755_ = lean_array_uset(v_bs_x27_752_, v_i_747_, v_v_750_);
v_i_747_ = v___x_754_;
v_bs_748_ = v___x_755_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0___boxed(lean_object* v_sz_757_, lean_object* v_i_758_, lean_object* v_bs_759_){
_start:
{
size_t v_sz_boxed_760_; size_t v_i_boxed_761_; lean_object* v_res_762_; 
v_sz_boxed_760_ = lean_unbox_usize(v_sz_757_);
lean_dec(v_sz_757_);
v_i_boxed_761_ = lean_unbox_usize(v_i_758_);
lean_dec(v_i_758_);
v_res_762_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_boxed_760_, v_i_boxed_761_, v_bs_759_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit(lean_object* v_self_764_, lean_object* v_eventName_765_, lean_object* v_args_766_){
_start:
{
lean_object* v___x_768_; lean_object* v___y_770_; 
v___x_768_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_emit___closed__0));
if (lean_obj_tag(v_eventName_765_) == 0)
{
lean_object* v_value_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
v_value_779_ = lean_ctor_get(v_eventName_765_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v_eventName_765_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v_eventName_765_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_value_779_);
lean_dec(v_eventName_765_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
lean_ctor_set_tag(v___x_781_, 4);
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_value_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
v___y_770_ = v___x_784_;
goto v___jp_769_;
}
}
}
else
{
lean_object* v_value_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v_value_787_ = lean_ctor_get(v_eventName_765_, 0);
lean_inc(v_value_787_);
lean_dec_ref_known(v_eventName_765_, 1);
v___x_788_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_789_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_789_, 0, v_value_787_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
v___y_770_ = v___x_789_;
goto v___jp_769_;
}
v___jp_769_:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; size_t v_sz_774_; size_t v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_771_ = lean_unsigned_to_nat(1u);
v___x_772_ = lean_mk_empty_array_with_capacity(v___x_771_);
v___x_773_ = lean_array_push(v___x_772_, v___y_770_);
v_sz_774_ = lean_array_size(v_args_766_);
v___x_775_ = ((size_t)0ULL);
v___x_776_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_774_, v___x_775_, v_args_766_);
v___x_777_ = l_Lasm_JS_Web_Support_argsWith(v___x_773_, v___x_776_);
lean_dec_ref(v___x_776_);
v___x_778_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_764_, v___x_768_, v___x_777_);
return v___x_778_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit___boxed(lean_object* v_self_790_, lean_object* v_eventName_791_, lean_object* v_args_792_, lean_object* v_a_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_Lasm_JS_Node_EventEmitter_emit(v_self_790_, v_eventName_791_, v_args_792_);
return v_res_794_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_795_; uint64_t v___x_796_; 
v___x_795_ = 0;
v___x_796_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_795_);
return v___x_796_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(uint8_t v_await_797_, uint64_t v_extra_798_){
_start:
{
uint64_t v___x_799_; uint64_t v___y_801_; 
v___x_799_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_await_797_ == 0)
{
uint64_t v___x_804_; 
v___x_804_ = 0ULL;
v___y_801_ = v___x_804_;
goto v___jp_800_;
}
else
{
uint64_t v___x_805_; 
v___x_805_ = 2ULL;
v___y_801_ = v___x_805_;
goto v___jp_800_;
}
v___jp_800_:
{
uint64_t v___x_802_; uint64_t v___x_803_; 
v___x_802_ = lean_uint64_lor(v___x_799_, v___y_801_);
v___x_803_ = lean_uint64_lor(v___x_802_, v_extra_798_);
return v___x_803_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___boxed(lean_object* v_await_806_, lean_object* v_extra_807_){
_start:
{
uint8_t v_await_boxed_808_; uint64_t v_extra_boxed_809_; uint64_t v_res_810_; lean_object* v_r_811_; 
v_await_boxed_808_ = lean_unbox(v_await_806_);
v_extra_boxed_809_ = lean_unbox_uint64(v_extra_807_);
lean_dec_ref(v_extra_807_);
v_res_810_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(v_await_boxed_808_, v_extra_boxed_809_);
v_r_811_ = lean_box_uint64(v_res_810_);
return v_r_811_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0(void){
_start:
{
uint64_t v___x_812_; uint8_t v___x_813_; uint64_t v___x_814_; 
v___x_812_ = 8ULL;
v___x_813_ = 0;
v___x_814_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(v___x_813_, v___x_812_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(lean_object* v_o_815_, lean_object* v_name_816_, lean_object* v_args_817_){
_start:
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; uint64_t v___x_822_; lean_object* v___x_823_; 
v___x_819_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_820_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_820_, 0, v_o_815_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
v___x_821_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_821_, 0, v_name_816_);
v___x_822_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0);
v___x_823_ = l_Lasm_JS_Value_invokeRaw(v___x_820_, v___x_821_, v_args_817_, v___x_822_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_825_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_824_);
lean_dec_ref_known(v___x_823_, 1);
v___x_825_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_824_);
lean_dec(v_a_824_);
return v___x_825_;
}
else
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
v_a_826_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___x_823_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_823_);
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
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___boxed(lean_object* v_o_834_, lean_object* v_name_835_, lean_object* v_args_836_, lean_object* v_a_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(v_o_834_, v_name_835_, v_args_836_);
return v_res_838_;
}
}
static lean_object* _init_l_Lasm_JS_Node_EventEmitter_eventNames___closed__2(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_842_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_eventNames___closed__1));
v___x_843_ = l_Lasm_JS_Web_Support_args(v___x_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames(lean_object* v_self_844_){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_846_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_eventNames___closed__0));
v___x_847_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_eventNames___closed__2, &l_Lasm_JS_Node_EventEmitter_eventNames___closed__2_once, _init_l_Lasm_JS_Node_EventEmitter_eventNames___closed__2);
v___x_848_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(v_self_844_, v___x_846_, v___x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames___boxed(lean_object* v_self_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lasm_JS_Node_EventEmitter_eventNames(v_self_849_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(lean_object* v_x_852_){
_start:
{
if (lean_obj_tag(v_x_852_) == 0)
{
lean_object* v___x_853_; 
v___x_853_ = lean_box(0);
return v___x_853_;
}
else
{
lean_object* v_val_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_val_854_ = lean_ctor_get(v_x_852_, 0);
v___x_855_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
lean_inc(v_val_854_);
v___x_856_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_856_, 0, v_val_854_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
return v___x_856_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0___boxed(lean_object* v_x_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(v_x_857_);
lean_dec(v_x_857_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(lean_object* v_context_863_, lean_object* v_d_864_){
_start:
{
lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_873_; lean_object* v_received_874_; lean_object* v___y_893_; lean_object* v_a_896_; 
switch(lean_obj_tag(v_d_864_))
{
case 3:
{
double v_n_920_; lean_object* v___x_921_; 
v_n_920_ = lean_ctor_get_float(v_d_864_, 0);
v___x_921_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_920_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v___x_922_; 
v___x_922_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3));
v_a_896_ = v___x_922_;
goto v___jp_895_;
}
else
{
lean_object* v_val_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_dec_ref_known(v_d_864_, 0);
v_val_923_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_921_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_val_923_);
lean_dec(v___x_921_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
lean_ctor_set_tag(v___x_925_, 0);
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_val_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
case 5:
{
lean_object* v_i_931_; lean_object* v___x_932_; 
v_i_931_ = lean_ctor_get(v_d_864_, 0);
lean_inc(v_i_931_);
lean_dec_ref_known(v_d_864_, 1);
v___x_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_932_, 0, v_i_931_);
return v___x_932_;
}
default: 
{
lean_object* v___x_933_; 
v___x_933_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v_a_896_ = v___x_933_;
goto v___jp_895_;
}
}
v___jp_866_:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_869_ = lean_string_append(v___y_867_, v___y_868_);
lean_dec_ref(v___y_868_);
v___x_870_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
v___x_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
return v___x_871_;
}
v___jp_872_:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v___x_875_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_876_ = lean_string_append(v___x_875_, v_context_863_);
v___x_877_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1));
v___x_878_ = lean_string_append(v___x_876_, v___x_877_);
v___x_879_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0));
v___x_880_ = lean_string_append(v___x_878_, v___x_879_);
v___x_881_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2));
v___x_882_ = lean_string_append(v___x_880_, v___x_881_);
v___x_883_ = lean_string_append(v___x_882_, v_received_874_);
lean_dec_ref(v_received_874_);
v___x_884_ = lean_string_utf8_byte_size(v___y_873_);
v___x_885_ = lean_unsigned_to_nat(0u);
v___x_886_ = lean_nat_dec_eq(v___x_884_, v___x_885_);
if (v___x_886_ == 0)
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_887_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1));
v___x_888_ = lean_string_append(v___x_887_, v___y_873_);
v___x_889_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2));
v___x_890_ = lean_string_append(v___x_888_, v___x_889_);
v___y_867_ = v___x_883_;
v___y_868_ = v___x_890_;
goto v___jp_866_;
}
else
{
lean_object* v___x_891_; 
v___x_891_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___y_867_ = v___x_883_;
v___y_868_ = v___x_891_;
goto v___jp_866_;
}
}
v___jp_892_:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lasm_JS_Data_describe(v_d_864_);
v___y_873_ = v___y_893_;
v_received_874_ = v___x_894_;
goto v___jp_872_;
}
v___jp_895_:
{
if (lean_obj_tag(v_d_864_) == 9)
{
lean_object* v_value_897_; lean_object* v_description_898_; lean_object* v___x_899_; uint8_t v___x_900_; 
v_value_897_ = lean_ctor_get(v_d_864_, 0);
v_description_898_ = lean_ctor_get(v_d_864_, 1);
v___x_899_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_900_ = lean_string_dec_eq(v_description_898_, v___x_899_);
if (v___x_900_ == 0)
{
v___y_893_ = v_a_896_;
goto v___jp_892_;
}
else
{
lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_917_; 
lean_inc(v_value_897_);
v_isSharedCheck_917_ = !lean_is_exclusive(v_d_864_);
if (v_isSharedCheck_917_ == 0)
{
lean_object* v_unused_918_; lean_object* v_unused_919_; 
v_unused_918_ = lean_ctor_get(v_d_864_, 1);
lean_dec(v_unused_918_);
v_unused_919_ = lean_ctor_get(v_d_864_, 0);
lean_dec(v_unused_919_);
v___x_902_ = v_d_864_;
v_isShared_903_ = v_isSharedCheck_917_;
goto v_resetjp_901_;
}
else
{
lean_dec(v_d_864_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_917_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
uint32_t v___x_904_; uint64_t v___x_905_; lean_object* v___x_907_; 
v___x_904_ = 206;
v___x_905_ = 0ULL;
lean_inc(v_value_897_);
if (v_isShared_903_ == 0)
{
lean_ctor_set(v___x_902_, 1, v___x_899_);
v___x_907_ = v___x_902_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_value_897_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v___x_899_);
v___x_907_ = v_reuseFailAlloc_916_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
uint32_t v___x_908_; lean_object* v___x_909_; 
v___x_908_ = lasm_js_value_handle(v_value_897_);
lean_dec(v_value_897_);
v___x_909_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_904_, v___x_905_, v___x_907_, v___x_908_);
lean_dec_ref(v___x_907_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; uint8_t v___x_911_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_909_, 1);
v___x_911_ = lean_string_validate_utf8(v_a_910_);
if (v___x_911_ == 0)
{
lean_object* v___x_912_; lean_object* v___x_913_; 
lean_dec(v_a_910_);
v___x_912_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9);
v___x_913_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_912_);
v___y_873_ = v_a_896_;
v_received_874_ = v___x_913_;
goto v___jp_872_;
}
else
{
lean_object* v___x_914_; 
v___x_914_ = lean_string_from_utf8_unchecked(v_a_910_);
v___y_873_ = v_a_896_;
v_received_874_ = v___x_914_;
goto v___jp_872_;
}
}
else
{
lean_object* v___x_915_; 
lean_dec_ref_known(v___x_909_, 1);
v___x_915_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10));
v___y_873_ = v_a_896_;
v_received_874_ = v___x_915_;
goto v___jp_872_;
}
}
}
}
}
else
{
v___y_893_ = v_a_896_;
goto v___jp_892_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___boxed(lean_object* v_context_934_, lean_object* v_d_935_, lean_object* v_a_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(v_context_934_, v_d_935_);
lean_dec_ref(v_context_934_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(lean_object* v_context_938_, lean_object* v_bytes_939_){
_start:
{
lean_object* v___x_941_; 
v___x_941_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_939_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_943_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc(v_a_942_);
lean_dec_ref_known(v___x_941_, 1);
v___x_943_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(v_context_938_, v_a_942_);
return v___x_943_;
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
v_a_944_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_941_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_941_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2___boxed(lean_object* v_context_952_, lean_object* v_bytes_953_, lean_object* v_a_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(v_context_952_, v_bytes_953_);
lean_dec_ref(v_bytes_953_);
lean_dec_ref(v_context_952_);
return v_res_955_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(uint8_t v_await_956_, uint64_t v_extra_957_){
_start:
{
uint64_t v___x_958_; uint64_t v___y_960_; 
v___x_958_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_await_956_ == 0)
{
uint64_t v___x_963_; 
v___x_963_ = 0ULL;
v___y_960_ = v___x_963_;
goto v___jp_959_;
}
else
{
uint64_t v___x_964_; 
v___x_964_ = 2ULL;
v___y_960_ = v___x_964_;
goto v___jp_959_;
}
v___jp_959_:
{
uint64_t v___x_961_; uint64_t v___x_962_; 
v___x_961_ = lean_uint64_lor(v___x_958_, v___y_960_);
v___x_962_ = lean_uint64_lor(v___x_961_, v_extra_957_);
return v___x_962_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1___boxed(lean_object* v_await_965_, lean_object* v_extra_966_){
_start:
{
uint8_t v_await_boxed_967_; uint64_t v_extra_boxed_968_; uint64_t v_res_969_; lean_object* v_r_970_; 
v_await_boxed_967_ = lean_unbox(v_await_965_);
v_extra_boxed_968_ = lean_unbox_uint64(v_extra_966_);
lean_dec_ref(v_extra_966_);
v_res_969_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(v_await_boxed_967_, v_extra_boxed_968_);
v_r_970_ = lean_box_uint64(v_res_969_);
return v_r_970_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0(void){
_start:
{
uint64_t v___x_971_; uint8_t v___x_972_; uint64_t v___x_973_; 
v___x_971_ = 8ULL;
v___x_972_ = 0;
v___x_973_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(v___x_972_, v___x_971_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(lean_object* v_o_975_, lean_object* v_name_976_, lean_object* v_args_977_){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; uint64_t v___x_982_; lean_object* v___x_983_; 
v___x_979_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_980_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_980_, 0, v_o_975_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
lean_inc_ref(v_name_976_);
v___x_981_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_981_, 0, v_name_976_);
v___x_982_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0);
v___x_983_ = l_Lasm_JS_Value_invokeRaw(v___x_980_, v___x_981_, v_args_977_, v___x_982_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v_a_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v_a_984_ = lean_ctor_get(v___x_983_, 0);
lean_inc(v_a_984_);
lean_dec_ref_known(v___x_983_, 1);
v___x_985_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__1));
v___x_986_ = lean_string_append(v___x_985_, v_name_976_);
lean_dec_ref(v_name_976_);
v___x_987_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(v___x_986_, v_a_984_);
lean_dec(v_a_984_);
lean_dec_ref(v___x_986_);
return v___x_987_;
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec_ref(v_name_976_);
v_a_988_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_983_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_983_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___boxed(lean_object* v_o_996_, lean_object* v_name_997_, lean_object* v_args_998_, lean_object* v_a_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(v_o_996_, v_name_997_, v_args_998_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount(lean_object* v_self_1002_, lean_object* v_eventName_1003_, lean_object* v_listener_1004_){
_start:
{
lean_object* v___x_1006_; lean_object* v___y_1008_; 
v___x_1006_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_listenerCount___closed__0));
if (lean_obj_tag(v_eventName_1003_) == 0)
{
lean_object* v_value_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
v_value_1016_ = lean_ctor_get(v_eventName_1003_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v_eventName_1003_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v_eventName_1003_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_value_1016_);
lean_dec(v_eventName_1003_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set_tag(v___x_1018_, 4);
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_value_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
v___y_1008_ = v___x_1021_;
goto v___jp_1007_;
}
}
}
else
{
lean_object* v_value_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v_value_1024_ = lean_ctor_get(v_eventName_1003_, 0);
lean_inc(v_value_1024_);
lean_dec_ref_known(v_eventName_1003_, 1);
v___x_1025_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1026_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1026_, 0, v_value_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___y_1008_ = v___x_1026_;
goto v___jp_1007_;
}
v___jp_1007_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1009_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(v_listener_1004_);
v___x_1010_ = lean_unsigned_to_nat(2u);
v___x_1011_ = lean_mk_empty_array_with_capacity(v___x_1010_);
v___x_1012_ = lean_array_push(v___x_1011_, v___y_1008_);
v___x_1013_ = lean_array_push(v___x_1012_, v___x_1009_);
v___x_1014_ = l_Lasm_JS_Web_Support_args(v___x_1013_);
v___x_1015_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(v_self_1002_, v___x_1006_, v___x_1014_);
return v___x_1015_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount___boxed(lean_object* v_self_1027_, lean_object* v_eventName_1028_, lean_object* v_listener_1029_, lean_object* v_a_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Lasm_JS_Node_EventEmitter_listenerCount(v_self_1027_, v_eventName_1028_, v_listener_1029_);
lean_dec(v_listener_1029_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off(lean_object* v_self_1033_, lean_object* v_eventName_1034_, lean_object* v_listener_1035_){
_start:
{
lean_object* v___x_1037_; lean_object* v___y_1039_; 
v___x_1037_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_off___closed__0));
if (lean_obj_tag(v_eventName_1034_) == 0)
{
lean_object* v_value_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
v_value_1064_ = lean_ctor_get(v_eventName_1034_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v_eventName_1034_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v_eventName_1034_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_value_1064_);
lean_dec(v_eventName_1034_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
lean_ctor_set_tag(v___x_1066_, 4);
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_value_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
v___y_1039_ = v___x_1069_;
goto v___jp_1038_;
}
}
}
else
{
lean_object* v_value_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v_value_1072_ = lean_ctor_get(v_eventName_1034_, 0);
lean_inc(v_value_1072_);
lean_dec_ref_known(v_eventName_1034_, 1);
v___x_1073_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1074_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1074_, 0, v_value_1072_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___y_1039_ = v___x_1074_;
goto v___jp_1038_;
}
v___jp_1038_:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1040_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1041_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1041_, 0, v_listener_1035_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = lean_unsigned_to_nat(2u);
v___x_1043_ = lean_mk_empty_array_with_capacity(v___x_1042_);
v___x_1044_ = lean_array_push(v___x_1043_, v___y_1039_);
v___x_1045_ = lean_array_push(v___x_1044_, v___x_1041_);
v___x_1046_ = l_Lasm_JS_Web_Support_args(v___x_1045_);
v___x_1047_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1033_, v___x_1037_, v___x_1046_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1050_ = v___x_1047_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_1047_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1051_ == 0)
{
v___x_1053_ = v___x_1050_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_a_1048_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
v_a_1056_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1047_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1047_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off___boxed(lean_object* v_self_1075_, lean_object* v_eventName_1076_, lean_object* v_listener_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lasm_JS_Node_EventEmitter_off(v_self_1075_, v_eventName_1076_, v_listener_1077_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on(lean_object* v_self_1080_, lean_object* v_eventName_1081_, lean_object* v_listener_1082_){
_start:
{
lean_object* v___x_1084_; lean_object* v___y_1086_; 
v___x_1084_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0));
if (lean_obj_tag(v_eventName_1081_) == 0)
{
lean_object* v_value_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
v_value_1111_ = lean_ctor_get(v_eventName_1081_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_eventName_1081_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v_eventName_1081_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_value_1111_);
lean_dec(v_eventName_1081_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set_tag(v___x_1113_, 4);
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_value_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
v___y_1086_ = v___x_1116_;
goto v___jp_1085_;
}
}
}
else
{
lean_object* v_value_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v_value_1119_ = lean_ctor_get(v_eventName_1081_, 0);
lean_inc(v_value_1119_);
lean_dec_ref_known(v_eventName_1081_, 1);
v___x_1120_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1121_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1121_, 0, v_value_1119_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
v___y_1086_ = v___x_1121_;
goto v___jp_1085_;
}
v___jp_1085_:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1087_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1088_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1088_, 0, v_listener_1082_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = lean_unsigned_to_nat(2u);
v___x_1090_ = lean_mk_empty_array_with_capacity(v___x_1089_);
v___x_1091_ = lean_array_push(v___x_1090_, v___y_1086_);
v___x_1092_ = lean_array_push(v___x_1091_, v___x_1088_);
v___x_1093_ = l_Lasm_JS_Web_Support_args(v___x_1092_);
v___x_1094_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1080_, v___x_1084_, v___x_1093_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on___boxed(lean_object* v_self_1122_, lean_object* v_eventName_1123_, lean_object* v_listener_1124_, lean_object* v_a_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lasm_JS_Node_EventEmitter_on(v_self_1122_, v_eventName_1123_, v_listener_1124_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once(lean_object* v_self_1127_, lean_object* v_eventName_1128_, lean_object* v_listener_1129_){
_start:
{
lean_object* v___x_1131_; lean_object* v___y_1133_; 
v___x_1131_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onceNewListener___closed__0));
if (lean_obj_tag(v_eventName_1128_) == 0)
{
lean_object* v_value_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
v_value_1158_ = lean_ctor_get(v_eventName_1128_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v_eventName_1128_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v_eventName_1128_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_value_1158_);
lean_dec(v_eventName_1128_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
lean_ctor_set_tag(v___x_1160_, 4);
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_value_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
v___y_1133_ = v___x_1163_;
goto v___jp_1132_;
}
}
}
else
{
lean_object* v_value_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v_value_1166_ = lean_ctor_get(v_eventName_1128_, 0);
lean_inc(v_value_1166_);
lean_dec_ref_known(v_eventName_1128_, 1);
v___x_1167_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1168_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1168_, 0, v_value_1166_);
lean_ctor_set(v___x_1168_, 1, v___x_1167_);
v___y_1133_ = v___x_1168_;
goto v___jp_1132_;
}
v___jp_1132_:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1134_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1135_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1135_, 0, v_listener_1129_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
v___x_1136_ = lean_unsigned_to_nat(2u);
v___x_1137_ = lean_mk_empty_array_with_capacity(v___x_1136_);
v___x_1138_ = lean_array_push(v___x_1137_, v___y_1133_);
v___x_1139_ = lean_array_push(v___x_1138_, v___x_1135_);
v___x_1140_ = l_Lasm_JS_Web_Support_args(v___x_1139_);
v___x_1141_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1127_, v___x_1131_, v___x_1140_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1141_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1141_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
v_a_1150_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1141_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1141_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once___boxed(lean_object* v_self_1169_, lean_object* v_eventName_1170_, lean_object* v_listener_1171_, lean_object* v_a_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_Lasm_JS_Node_EventEmitter_once(v_self_1169_, v_eventName_1170_, v_listener_1171_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(lean_object* v_x_1174_){
_start:
{
if (lean_obj_tag(v_x_1174_) == 0)
{
lean_object* v___x_1175_; 
v___x_1175_ = lean_box(0);
return v___x_1175_;
}
else
{
lean_object* v_val_1176_; 
v_val_1176_ = lean_ctor_get(v_x_1174_, 0);
lean_inc(v_val_1176_);
lean_dec_ref_known(v_x_1174_, 1);
if (lean_obj_tag(v_val_1176_) == 0)
{
lean_object* v_value_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1184_; 
v_value_1177_ = lean_ctor_get(v_val_1176_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v_val_1176_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1179_ = v_val_1176_;
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_value_1177_);
lean_dec(v_val_1176_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1182_; 
if (v_isShared_1180_ == 0)
{
lean_ctor_set_tag(v___x_1179_, 4);
v___x_1182_ = v___x_1179_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_value_1177_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
else
{
lean_object* v_value_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v_value_1185_ = lean_ctor_get(v_val_1176_, 0);
lean_inc(v_value_1185_);
lean_dec_ref_known(v_val_1176_, 1);
v___x_1186_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1187_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1187_, 0, v_value_1185_);
lean_ctor_set(v___x_1187_, 1, v___x_1186_);
return v___x_1187_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners(lean_object* v_self_1189_, lean_object* v_eventName_1190_){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1192_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_removeAllListeners___closed__0));
v___x_1193_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(v_eventName_1190_);
v___x_1194_ = lean_unsigned_to_nat(1u);
v___x_1195_ = lean_mk_empty_array_with_capacity(v___x_1194_);
v___x_1196_ = lean_array_push(v___x_1195_, v___x_1193_);
v___x_1197_ = l_Lasm_JS_Web_Support_args(v___x_1196_);
v___x_1198_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1189_, v___x_1192_, v___x_1197_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1198_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1198_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
else
{
lean_object* v_a_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1214_; 
v_a_1207_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1209_ = v___x_1198_;
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_a_1207_);
lean_dec(v___x_1198_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1212_; 
if (v_isShared_1210_ == 0)
{
v___x_1212_ = v___x_1209_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_a_1207_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners___boxed(lean_object* v_self_1215_, lean_object* v_eventName_1216_, lean_object* v_a_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l_Lasm_JS_Node_EventEmitter_removeAllListeners(v_self_1215_, v_eventName_1216_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(lean_object* v___f_1219_, lean_object* v_bytes_1220_){
_start:
{
lean_object* v___x_1222_; uint8_t v___x_1223_; lean_object* v_val_1225_; lean_object* v___x_1228_; 
v___x_1222_ = lean_unsigned_to_nat(0u);
v___x_1223_ = 0;
v___x_1228_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1220_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1231_ = v___x_1228_;
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1228_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
lean_ctor_set_tag(v___x_1231_, 1);
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1229_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
v_val_1225_ = v___x_1234_;
goto v___jp_1224_;
}
}
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
v_a_1237_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1239_ = v___x_1228_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1228_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
lean_ctor_set_tag(v___x_1239_, 0);
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_a_1237_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
v_val_1225_ = v___x_1242_;
goto v___jp_1224_;
}
}
}
v___jp_1224_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1226_, 0, v_val_1225_);
v___x_1227_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1222_, v___x_1223_, v___x_1226_, v___f_1219_);
return v___x_1227_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed(lean_object* v___f_1245_, lean_object* v_bytes_1246_, lean_object* v___y_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(v___f_1245_, v_bytes_1246_);
lean_dec_ref(v_bytes_1246_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(lean_object* v___f_1249_, lean_object* v_x_1250_){
_start:
{
if (lean_obj_tag(v_x_1250_) == 0)
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1260_; 
lean_dec_ref(v___f_1249_);
v_a_1252_ = lean_ctor_get(v_x_1250_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_x_1250_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1254_ = v_x_1250_;
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v_x_1250_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1252_);
v___x_1257_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
lean_object* v___x_1258_; 
v___x_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
return v___x_1258_;
}
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1262_; 
v_a_1261_ = lean_ctor_get(v_x_1250_, 0);
lean_inc(v_a_1261_);
lean_dec_ref_known(v_x_1250_, 1);
v___x_1262_ = lean_apply_2(v___f_1249_, v_a_1261_, lean_box(0));
return v___x_1262_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed(lean_object* v___f_1263_, lean_object* v_x_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(v___f_1263_, v_x_1264_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(lean_object* v_failurePrefix_1267_, lean_object* v_x_1268_){
_start:
{
if (lean_obj_tag(v_x_1268_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1281_; 
v_a_1270_ = lean_ctor_get(v_x_1268_, 0);
v_isSharedCheck_1281_ = !lean_is_exclusive(v_x_1268_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1272_ = v_x_1268_;
v_isShared_1273_ = v_isSharedCheck_1281_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v_x_1268_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1281_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1274_ = lean_io_error_to_string(v_a_1270_);
v___x_1275_ = lean_string_append(v_failurePrefix_1267_, v___x_1274_);
lean_dec_ref(v___x_1274_);
v___x_1276_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1276_);
v___x_1278_ = v___x_1272_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1279_; 
v___x_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
return v___x_1279_;
}
}
}
else
{
lean_object* v___x_1282_; 
lean_dec_ref(v_failurePrefix_1267_);
v___x_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1282_, 0, v_x_1268_);
return v___x_1282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed(lean_object* v_failurePrefix_1283_, lean_object* v_x_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(v_failurePrefix_1283_, v_x_1284_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(lean_object* v_a_1287_, lean_object* v_x_1288_){
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed(lean_object* v_a_1300_, lean_object* v_x_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(v_a_1300_, v_x_1301_);
lean_dec(v_a_1300_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(lean_object* v___x_1304_, uint8_t v___x_1305_, lean_object* v___f_1306_, lean_object* v_a_1307_, uint32_t v_op_1308_, uint64_t v_flags_1309_, lean_object* v_payload_1310_, lean_object* v_x_1311_){
_start:
{
lean_object* v_val_1314_; 
if (lean_obj_tag(v_x_1311_) == 0)
{
lean_object* v___x_1317_; 
lean_dec_ref(v___f_1306_);
lean_dec(v___x_1304_);
v___x_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1317_, 0, v_x_1311_);
return v___x_1317_;
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1332_; 
v_a_1318_ = lean_ctor_get(v_x_1311_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v_x_1311_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1320_ = v_x_1311_;
v_isShared_1321_ = v_isSharedCheck_1332_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v_x_1311_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1332_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
uint32_t v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = 0;
v___x_1323_ = lasm_js_call_into(v_a_1307_, v_op_1308_, v___x_1322_, v_flags_1309_, v_a_1318_, v_payload_1310_);
lean_dec(v_a_1318_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1326_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1323_, 1);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v_a_1324_);
v___x_1326_ = v___x_1320_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(1, 1, 0);
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
else
{
lean_object* v_a_1328_; lean_object* v___x_1330_; 
v_a_1328_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_a_1328_);
lean_dec_ref_known(v___x_1323_, 1);
if (v_isShared_1321_ == 0)
{
lean_ctor_set_tag(v___x_1320_, 0);
lean_ctor_set(v___x_1320_, 0, v_a_1328_);
v___x_1330_ = v___x_1320_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1328_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
v_val_1314_ = v___x_1330_;
goto v___jp_1313_;
}
}
}
}
v___jp_1313_:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1315_, 0, v_val_1314_);
v___x_1316_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1304_, v___x_1305_, v___x_1315_, v___f_1306_);
return v___x_1316_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed(lean_object* v___x_1333_, lean_object* v___x_1334_, lean_object* v___f_1335_, lean_object* v_a_1336_, lean_object* v_op_1337_, lean_object* v_flags_1338_, lean_object* v_payload_1339_, lean_object* v_x_1340_, lean_object* v___y_1341_){
_start:
{
uint8_t v___x_1391__boxed_1342_; uint32_t v_op_boxed_1343_; uint64_t v_flags_boxed_1344_; lean_object* v_res_1345_; 
v___x_1391__boxed_1342_ = lean_unbox(v___x_1334_);
v_op_boxed_1343_ = lean_unbox_uint32(v_op_1337_);
lean_dec(v_op_1337_);
v_flags_boxed_1344_ = lean_unbox_uint64(v_flags_1338_);
lean_dec_ref(v_flags_1338_);
v_res_1345_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(v___x_1333_, v___x_1391__boxed_1342_, v___f_1335_, v_a_1336_, v_op_boxed_1343_, v_flags_boxed_1344_, v_payload_1339_, v_x_1340_);
lean_dec(v_payload_1339_);
lean_dec(v_a_1336_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(lean_object* v___f_1346_, lean_object* v_a_1347_, uint32_t v_op_1348_, uint64_t v_flags_1349_, lean_object* v_payload_1350_, lean_object* v_x_1351_){
_start:
{
if (lean_obj_tag(v_x_1351_) == 0)
{
lean_object* v___x_1353_; 
lean_dec_ref(v___f_1346_);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v_x_1351_);
return v___x_1353_;
}
else
{
lean_object* v_a_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1374_; 
v_a_1354_ = lean_ctor_get(v_x_1351_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v_x_1351_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1356_ = v_x_1351_;
v_isShared_1357_ = v_isSharedCheck_1374_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_a_1354_);
lean_dec(v_x_1351_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1374_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
uint32_t v___x_1358_; lean_object* v___x_1359_; uint8_t v___x_1360_; lean_object* v_val_1362_; lean_object* v___x_1365_; 
v___x_1358_ = 0;
v___x_1359_ = lean_unsigned_to_nat(0u);
v___x_1360_ = 0;
v___x_1365_ = lasm_js_call_into(v_a_1347_, v_op_1348_, v___x_1358_, v_flags_1349_, v_a_1354_, v_payload_1350_);
lean_dec(v_a_1354_);
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_object* v_a_1366_; lean_object* v___x_1368_; 
v_a_1366_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_a_1366_);
lean_dec_ref_known(v___x_1365_, 1);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 0, v_a_1366_);
v___x_1368_ = v___x_1356_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1366_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
v_val_1362_ = v___x_1368_;
goto v___jp_1361_;
}
}
else
{
lean_object* v_a_1370_; lean_object* v___x_1372_; 
v_a_1370_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_a_1370_);
lean_dec_ref_known(v___x_1365_, 1);
if (v_isShared_1357_ == 0)
{
lean_ctor_set_tag(v___x_1356_, 0);
lean_ctor_set(v___x_1356_, 0, v_a_1370_);
v___x_1372_ = v___x_1356_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1370_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
v_val_1362_ = v___x_1372_;
goto v___jp_1361_;
}
}
v___jp_1361_:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1363_, 0, v_val_1362_);
v___x_1364_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1359_, v___x_1360_, v___x_1363_, v___f_1346_);
return v___x_1364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed(lean_object* v___f_1375_, lean_object* v_a_1376_, lean_object* v_op_1377_, lean_object* v_flags_1378_, lean_object* v_payload_1379_, lean_object* v_x_1380_, lean_object* v___y_1381_){
_start:
{
uint32_t v_op_boxed_1382_; uint64_t v_flags_boxed_1383_; lean_object* v_res_1384_; 
v_op_boxed_1382_ = lean_unbox_uint32(v_op_1377_);
lean_dec(v_op_1377_);
v_flags_boxed_1383_ = lean_unbox_uint64(v_flags_1378_);
lean_dec_ref(v_flags_1378_);
v_res_1384_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(v___f_1375_, v_a_1376_, v_op_boxed_1382_, v_flags_boxed_1383_, v_payload_1379_, v_x_1380_);
lean_dec(v_payload_1379_);
lean_dec(v_a_1376_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(lean_object* v_failurePrefix_1385_, uint32_t v_op_1386_, uint64_t v_flags_1387_, lean_object* v_payload_1388_, lean_object* v___f_1389_, lean_object* v___f_1390_, lean_object* v___f_1391_, lean_object* v_x_1392_){
_start:
{
if (lean_obj_tag(v_x_1392_) == 0)
{
lean_object* v_a_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1402_; 
lean_dec_ref(v___f_1391_);
lean_dec_ref(v___f_1390_);
lean_dec_ref(v___f_1389_);
lean_dec(v_payload_1388_);
v_a_1394_ = lean_ctor_get(v_x_1392_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v_x_1392_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1396_ = v_x_1392_;
v_isShared_1397_ = v_isSharedCheck_1402_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_a_1394_);
lean_dec(v_x_1392_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1402_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1399_; 
if (v_isShared_1397_ == 0)
{
v___x_1399_ = v___x_1396_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_a_1394_);
v___x_1399_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
lean_object* v___x_1400_; 
v___x_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
return v___x_1400_;
}
}
}
else
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1449_; 
v_a_1403_ = lean_ctor_get(v_x_1392_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_x_1392_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1405_ = v_x_1392_;
v_isShared_1406_ = v_isSharedCheck_1449_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v_x_1392_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1449_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; uint8_t v___x_1409_; 
v___x_1407_ = lean_string_utf8_byte_size(v_failurePrefix_1385_);
v___x_1408_ = lean_unsigned_to_nat(0u);
v___x_1409_ = lean_nat_dec_eq(v___x_1407_, v___x_1408_);
if (v___x_1409_ == 0)
{
lean_object* v___f_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___f_1414_; lean_object* v_val_1416_; lean_object* v___x_1421_; 
lean_dec_ref(v___f_1391_);
lean_inc(v_a_1403_);
v___f_1410_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1410_, 0, v_a_1403_);
v___x_1411_ = lean_box(v___x_1409_);
v___x_1412_ = lean_box_uint32(v_op_1386_);
v___x_1413_ = lean_box_uint64(v_flags_1387_);
lean_inc(v_payload_1388_);
v___f_1414_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1414_, 0, v___x_1408_);
lean_closure_set(v___f_1414_, 1, v___x_1411_);
lean_closure_set(v___f_1414_, 2, v___f_1410_);
lean_closure_set(v___f_1414_, 3, v_a_1403_);
lean_closure_set(v___f_1414_, 4, v___x_1412_);
lean_closure_set(v___f_1414_, 5, v___x_1413_);
lean_closure_set(v___f_1414_, 6, v_payload_1388_);
v___x_1421_ = l_Lasm_JS_Wire_encodeIO(v_payload_1388_);
lean_dec(v_payload_1388_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1424_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v_a_1422_);
v___x_1424_ = v___x_1405_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1422_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
v_val_1416_ = v___x_1424_;
goto v___jp_1415_;
}
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1428_; 
v_a_1426_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1426_);
lean_dec_ref_known(v___x_1421_, 1);
if (v_isShared_1406_ == 0)
{
lean_ctor_set_tag(v___x_1405_, 0);
lean_ctor_set(v___x_1405_, 0, v_a_1426_);
v___x_1428_ = v___x_1405_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1426_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
v_val_1416_ = v___x_1428_;
goto v___jp_1415_;
}
}
v___jp_1415_:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1417_, 0, v_val_1416_);
v___x_1418_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1408_, v___x_1409_, v___x_1417_, v___f_1414_);
v___x_1419_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1408_, v___x_1409_, v___x_1418_, v___f_1389_);
v___x_1420_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1408_, v___x_1409_, v___x_1419_, v___f_1390_);
return v___x_1420_;
}
}
else
{
lean_object* v___f_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___f_1433_; uint8_t v___x_1434_; lean_object* v_val_1436_; lean_object* v___x_1440_; 
lean_dec_ref(v___f_1390_);
lean_dec_ref(v___f_1389_);
lean_inc(v_a_1403_);
v___f_1430_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1430_, 0, v_a_1403_);
v___x_1431_ = lean_box_uint32(v_op_1386_);
v___x_1432_ = lean_box_uint64(v_flags_1387_);
lean_inc(v_payload_1388_);
v___f_1433_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1433_, 0, v___f_1430_);
lean_closure_set(v___f_1433_, 1, v_a_1403_);
lean_closure_set(v___f_1433_, 2, v___x_1431_);
lean_closure_set(v___f_1433_, 3, v___x_1432_);
lean_closure_set(v___f_1433_, 4, v_payload_1388_);
v___x_1434_ = 0;
v___x_1440_ = l_Lasm_JS_Wire_encodeIO(v_payload_1388_);
lean_dec(v_payload_1388_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1443_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v___x_1440_, 1);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v_a_1441_);
v___x_1443_ = v___x_1405_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1441_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
v_val_1436_ = v___x_1443_;
goto v___jp_1435_;
}
}
else
{
lean_object* v_a_1445_; lean_object* v___x_1447_; 
v_a_1445_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1440_, 1);
if (v_isShared_1406_ == 0)
{
lean_ctor_set_tag(v___x_1405_, 0);
lean_ctor_set(v___x_1405_, 0, v_a_1445_);
v___x_1447_ = v___x_1405_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1445_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
v_val_1436_ = v___x_1447_;
goto v___jp_1435_;
}
}
v___jp_1435_:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1437_, 0, v_val_1436_);
v___x_1438_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1408_, v___x_1434_, v___x_1437_, v___f_1433_);
v___x_1439_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1408_, v___x_1434_, v___x_1438_, v___f_1391_);
return v___x_1439_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed(lean_object* v_failurePrefix_1450_, lean_object* v_op_1451_, lean_object* v_flags_1452_, lean_object* v_payload_1453_, lean_object* v___f_1454_, lean_object* v___f_1455_, lean_object* v___f_1456_, lean_object* v_x_1457_, lean_object* v___y_1458_){
_start:
{
uint32_t v_op_boxed_1459_; uint64_t v_flags_boxed_1460_; lean_object* v_res_1461_; 
v_op_boxed_1459_ = lean_unbox_uint32(v_op_1451_);
lean_dec(v_op_1451_);
v_flags_boxed_1460_ = lean_unbox_uint64(v_flags_1452_);
lean_dec_ref(v_flags_1452_);
v_res_1461_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(v_failurePrefix_1450_, v_op_boxed_1459_, v_flags_boxed_1460_, v_payload_1453_, v___f_1454_, v___f_1455_, v___f_1456_, v_x_1457_);
lean_dec_ref(v_failurePrefix_1450_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(size_t v_sz_1462_, size_t v_i_1463_, lean_object* v_bs_1464_){
_start:
{
uint8_t v___x_1465_; 
v___x_1465_ = lean_usize_dec_lt(v_i_1463_, v_sz_1462_);
if (v___x_1465_ == 0)
{
lean_object* v___x_1466_; 
v___x_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1466_, 0, v_bs_1464_);
return v___x_1466_;
}
else
{
lean_object* v_v_1467_; lean_object* v___x_1468_; lean_object* v_bs_x27_1469_; size_t v___x_1470_; size_t v___x_1471_; lean_object* v___x_1472_; 
v_v_1467_ = lean_array_uget(v_bs_1464_, v_i_1463_);
v___x_1468_ = lean_unsigned_to_nat(0u);
v_bs_x27_1469_ = lean_array_uset(v_bs_1464_, v_i_1463_, v___x_1468_);
v___x_1470_ = ((size_t)1ULL);
v___x_1471_ = lean_usize_add(v_i_1463_, v___x_1470_);
v___x_1472_ = lean_array_uset(v_bs_x27_1469_, v_i_1463_, v_v_1467_);
v_i_1463_ = v___x_1471_;
v_bs_1464_ = v___x_1472_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_1474_, lean_object* v_i_1475_, lean_object* v_bs_1476_){
_start:
{
size_t v_sz_boxed_1477_; size_t v_i_boxed_1478_; lean_object* v_res_1479_; 
v_sz_boxed_1477_ = lean_unbox_usize(v_sz_1474_);
lean_dec(v_sz_1474_);
v_i_boxed_1478_ = lean_unbox_usize(v_i_1475_);
lean_dec(v_i_1475_);
v_res_1479_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_boxed_1477_, v_i_boxed_1478_, v_bs_1476_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(lean_object* v_context_1483_, lean_object* v_d_1484_){
_start:
{
lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1493_; lean_object* v_received_1494_; lean_object* v___y_1513_; lean_object* v_a_1516_; 
if (lean_obj_tag(v_d_1484_) == 7)
{
lean_object* v_items_1540_; size_t v_sz_1541_; size_t v___x_1542_; lean_object* v___x_1543_; 
v_items_1540_ = lean_ctor_get(v_d_1484_, 0);
v_sz_1541_ = lean_array_size(v_items_1540_);
v___x_1542_ = ((size_t)0ULL);
lean_inc_ref(v_items_1540_);
v___x_1543_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_1541_, v___x_1542_, v_items_1540_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; uint8_t v___x_1548_; 
v_a_1544_ = lean_ctor_get(v___x_1543_, 0);
lean_inc(v_a_1544_);
lean_dec_ref_known(v___x_1543_, 1);
v___x_1545_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__1));
v___x_1546_ = lean_string_utf8_byte_size(v_a_1544_);
v___x_1547_ = lean_unsigned_to_nat(0u);
v___x_1548_ = lean_nat_dec_eq(v___x_1546_, v___x_1547_);
if (v___x_1548_ == 0)
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1549_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2));
v___x_1550_ = lean_string_append(v___x_1549_, v_a_1544_);
lean_dec(v_a_1544_);
v___x_1551_ = lean_string_append(v___x_1545_, v___x_1550_);
lean_dec_ref(v___x_1550_);
v_a_1516_ = v___x_1551_;
goto v___jp_1515_;
}
else
{
lean_dec(v_a_1544_);
v_a_1516_ = v___x_1545_;
goto v___jp_1515_;
}
}
else
{
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1552_; 
v_a_1552_ = lean_ctor_get(v___x_1543_, 0);
lean_inc(v_a_1552_);
lean_dec_ref_known(v___x_1543_, 1);
v_a_1516_ = v_a_1552_;
goto v___jp_1515_;
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
lean_dec_ref_known(v_d_1484_, 1);
v_a_1553_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1543_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1543_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
lean_ctor_set_tag(v___x_1555_, 0);
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
}
else
{
lean_object* v___x_1561_; 
v___x_1561_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v_a_1516_ = v___x_1561_;
goto v___jp_1515_;
}
v___jp_1486_:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1489_ = lean_string_append(v___y_1487_, v___y_1488_);
lean_dec_ref(v___y_1488_);
v___x_1490_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1489_);
v___x_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1490_);
return v___x_1491_;
}
v___jp_1492_:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; 
v___x_1495_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_1496_ = lean_string_append(v___x_1495_, v_context_1483_);
v___x_1497_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1));
v___x_1498_ = lean_string_append(v___x_1496_, v___x_1497_);
v___x_1499_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__0));
v___x_1500_ = lean_string_append(v___x_1498_, v___x_1499_);
v___x_1501_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2));
v___x_1502_ = lean_string_append(v___x_1500_, v___x_1501_);
v___x_1503_ = lean_string_append(v___x_1502_, v_received_1494_);
lean_dec_ref(v_received_1494_);
v___x_1504_ = lean_string_utf8_byte_size(v___y_1493_);
v___x_1505_ = lean_unsigned_to_nat(0u);
v___x_1506_ = lean_nat_dec_eq(v___x_1504_, v___x_1505_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1507_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1));
v___x_1508_ = lean_string_append(v___x_1507_, v___y_1493_);
lean_dec_ref(v___y_1493_);
v___x_1509_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2));
v___x_1510_ = lean_string_append(v___x_1508_, v___x_1509_);
v___y_1487_ = v___x_1503_;
v___y_1488_ = v___x_1510_;
goto v___jp_1486_;
}
else
{
lean_object* v___x_1511_; 
lean_dec_ref(v___y_1493_);
v___x_1511_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___y_1487_ = v___x_1503_;
v___y_1488_ = v___x_1511_;
goto v___jp_1486_;
}
}
v___jp_1512_:
{
lean_object* v___x_1514_; 
v___x_1514_ = l_Lasm_JS_Data_describe(v_d_1484_);
v___y_1493_ = v___y_1513_;
v_received_1494_ = v___x_1514_;
goto v___jp_1492_;
}
v___jp_1515_:
{
if (lean_obj_tag(v_d_1484_) == 9)
{
lean_object* v_value_1517_; lean_object* v_description_1518_; lean_object* v___x_1519_; uint8_t v___x_1520_; 
v_value_1517_ = lean_ctor_get(v_d_1484_, 0);
v_description_1518_ = lean_ctor_get(v_d_1484_, 1);
v___x_1519_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1520_ = lean_string_dec_eq(v_description_1518_, v___x_1519_);
if (v___x_1520_ == 0)
{
v___y_1513_ = v_a_1516_;
goto v___jp_1512_;
}
else
{
lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1537_; 
lean_inc(v_value_1517_);
v_isSharedCheck_1537_ = !lean_is_exclusive(v_d_1484_);
if (v_isSharedCheck_1537_ == 0)
{
lean_object* v_unused_1538_; lean_object* v_unused_1539_; 
v_unused_1538_ = lean_ctor_get(v_d_1484_, 1);
lean_dec(v_unused_1538_);
v_unused_1539_ = lean_ctor_get(v_d_1484_, 0);
lean_dec(v_unused_1539_);
v___x_1522_ = v_d_1484_;
v_isShared_1523_ = v_isSharedCheck_1537_;
goto v_resetjp_1521_;
}
else
{
lean_dec(v_d_1484_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1537_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
uint32_t v___x_1524_; uint64_t v___x_1525_; lean_object* v___x_1527_; 
v___x_1524_ = 206;
v___x_1525_ = 0ULL;
lean_inc(v_value_1517_);
if (v_isShared_1523_ == 0)
{
lean_ctor_set(v___x_1522_, 1, v___x_1519_);
v___x_1527_ = v___x_1522_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_value_1517_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v___x_1519_);
v___x_1527_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
uint32_t v___x_1528_; lean_object* v___x_1529_; 
v___x_1528_ = lasm_js_value_handle(v_value_1517_);
lean_dec(v_value_1517_);
v___x_1529_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1524_, v___x_1525_, v___x_1527_, v___x_1528_);
lean_dec_ref(v___x_1527_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; uint8_t v___x_1531_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc(v_a_1530_);
lean_dec_ref_known(v___x_1529_, 1);
v___x_1531_ = lean_string_validate_utf8(v_a_1530_);
if (v___x_1531_ == 0)
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
lean_dec(v_a_1530_);
v___x_1532_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9);
v___x_1533_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1532_);
v___y_1493_ = v_a_1516_;
v_received_1494_ = v___x_1533_;
goto v___jp_1492_;
}
else
{
lean_object* v___x_1534_; 
v___x_1534_ = lean_string_from_utf8_unchecked(v_a_1530_);
v___y_1493_ = v_a_1516_;
v_received_1494_ = v___x_1534_;
goto v___jp_1492_;
}
}
else
{
lean_object* v___x_1535_; 
lean_dec_ref_known(v___x_1529_, 1);
v___x_1535_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10));
v___y_1493_ = v_a_1516_;
v_received_1494_ = v___x_1535_;
goto v___jp_1492_;
}
}
}
}
}
else
{
v___y_1513_ = v_a_1516_;
goto v___jp_1512_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___boxed(lean_object* v_context_1562_, lean_object* v_d_1563_, lean_object* v_a_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_1562_, v_d_1563_);
lean_dec_ref(v_context_1562_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(lean_object* v_context_1566_, lean_object* v_x_1567_){
_start:
{
lean_object* v_val_1570_; 
if (lean_obj_tag(v_x_1567_) == 0)
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1580_; 
v_a_1572_ = lean_ctor_get(v_x_1567_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v_x_1567_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1574_ = v_x_1567_;
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v_x_1567_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1572_);
v___x_1577_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1577_);
return v___x_1578_;
}
}
}
else
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1594_; 
v_a_1581_ = lean_ctor_get(v_x_1567_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v_x_1567_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1583_ = v_x_1567_;
v_isShared_1584_ = v_isSharedCheck_1594_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v_x_1567_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1594_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1585_; 
v___x_1585_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_1566_, v_a_1581_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1588_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1585_, 1);
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 0, v_a_1586_);
v___x_1588_ = v___x_1583_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1586_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
v_val_1570_ = v___x_1588_;
goto v___jp_1569_;
}
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; 
v_a_1590_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1590_);
lean_dec_ref_known(v___x_1585_, 1);
if (v_isShared_1584_ == 0)
{
lean_ctor_set_tag(v___x_1583_, 0);
lean_ctor_set(v___x_1583_, 0, v_a_1590_);
v___x_1592_ = v___x_1583_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1590_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
v_val_1570_ = v___x_1592_;
goto v___jp_1569_;
}
}
}
}
v___jp_1569_:
{
lean_object* v___x_1571_; 
v___x_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1571_, 0, v_val_1570_);
return v___x_1571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed(lean_object* v_context_1595_, lean_object* v_x_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(v_context_1595_, v_x_1596_);
lean_dec_ref(v_context_1595_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(lean_object* v___f_1599_, lean_object* v_x_1600_){
_start:
{
if (lean_obj_tag(v_x_1600_) == 0)
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1610_; 
lean_dec_ref(v___f_1599_);
v_a_1602_ = lean_ctor_get(v_x_1600_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v_x_1600_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1604_ = v_x_1600_;
v_isShared_1605_ = v_isSharedCheck_1610_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v_x_1600_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1610_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1602_);
v___x_1607_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1608_; 
v___x_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
return v___x_1608_;
}
}
}
else
{
lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1622_; 
v_isSharedCheck_1622_ = !lean_is_exclusive(v_x_1600_);
if (v_isSharedCheck_1622_ == 0)
{
lean_object* v_unused_1623_; 
v_unused_1623_ = lean_ctor_get(v_x_1600_, 0);
lean_dec(v_unused_1623_);
v___x_1612_ = v_x_1600_;
v_isShared_1613_ = v_isSharedCheck_1622_;
goto v_resetjp_1611_;
}
else
{
lean_dec(v_x_1600_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1622_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1614_; uint8_t v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1618_; 
v___x_1614_ = lean_unsigned_to_nat(0u);
v___x_1615_ = 0;
v___x_1616_ = lean_io_promise_new();
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 0, v___x_1616_);
v___x_1618_ = v___x_1612_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v___x_1616_);
v___x_1618_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1618_);
v___x_1620_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1614_, v___x_1615_, v___x_1619_, v___f_1599_);
return v___x_1620_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed(lean_object* v___f_1624_, lean_object* v_x_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(v___f_1624_, v_x_1625_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(lean_object* v_context_1628_, uint32_t v_op_1629_, uint64_t v_flags_1630_, lean_object* v_payload_1631_, lean_object* v_failurePrefix_1632_){
_start:
{
lean_object* v___f_1634_; lean_object* v___f_1635_; lean_object* v___f_1636_; lean_object* v___f_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___f_1640_; lean_object* v___f_1641_; lean_object* v___x_1642_; uint8_t v___x_1643_; lean_object* v_val_1645_; lean_object* v___x_1648_; 
v___f_1634_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1634_, 0, v_context_1628_);
v___f_1635_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1635_, 0, v___f_1634_);
v___f_1636_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1636_, 0, v___f_1635_);
lean_inc_ref(v_failurePrefix_1632_);
v___f_1637_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1637_, 0, v_failurePrefix_1632_);
v___x_1638_ = lean_box_uint32(v_op_1629_);
v___x_1639_ = lean_box_uint64(v_flags_1630_);
lean_inc_ref(v___f_1636_);
v___f_1640_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1640_, 0, v_failurePrefix_1632_);
lean_closure_set(v___f_1640_, 1, v___x_1638_);
lean_closure_set(v___f_1640_, 2, v___x_1639_);
lean_closure_set(v___f_1640_, 3, v_payload_1631_);
lean_closure_set(v___f_1640_, 4, v___f_1637_);
lean_closure_set(v___f_1640_, 5, v___f_1636_);
lean_closure_set(v___f_1640_, 6, v___f_1636_);
v___f_1641_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1641_, 0, v___f_1640_);
v___x_1642_ = lean_unsigned_to_nat(0u);
v___x_1643_ = 0;
v___x_1648_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1648_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
lean_ctor_set_tag(v___x_1651_, 1);
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
v_val_1645_ = v___x_1654_;
goto v___jp_1644_;
}
}
}
else
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
v_a_1657_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1648_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1648_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
lean_ctor_set_tag(v___x_1659_, 0);
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
v_val_1645_ = v___x_1662_;
goto v___jp_1644_;
}
}
}
v___jp_1644_:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1646_, 0, v_val_1645_);
v___x_1647_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1642_, v___x_1643_, v___x_1646_, v___f_1641_);
return v___x_1647_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___boxed(lean_object* v_context_1665_, lean_object* v_op_1666_, lean_object* v_flags_1667_, lean_object* v_payload_1668_, lean_object* v_failurePrefix_1669_, lean_object* v_a_1670_){
_start:
{
uint32_t v_op_boxed_1671_; uint64_t v_flags_boxed_1672_; lean_object* v_res_1673_; 
v_op_boxed_1671_ = lean_unbox_uint32(v_op_1666_);
lean_dec(v_op_1666_);
v_flags_boxed_1672_ = lean_unbox_uint64(v_flags_1667_);
lean_dec_ref(v_flags_1667_);
v_res_1673_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v_context_1665_, v_op_boxed_1671_, v_flags_boxed_1672_, v_payload_1668_, v_failurePrefix_1669_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(lean_object* v_b_1674_, lean_object* v_args_1675_){
_start:
{
uint8_t v_construct_1677_; lean_object* v___x_1678_; uint32_t v___x_1679_; uint64_t v___x_1680_; uint64_t v___y_1682_; 
v_construct_1677_ = lean_ctor_get_uint8(v_b_1674_, sizeof(void*)*4);
v___x_1678_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1674_);
v___x_1679_ = 214;
v___x_1680_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_construct_1677_ == 0)
{
uint64_t v___x_1690_; 
v___x_1690_ = 0ULL;
v___y_1682_ = v___x_1690_;
goto v___jp_1681_;
}
else
{
uint64_t v___x_1691_; 
v___x_1691_ = 4ULL;
v___y_1682_ = v___x_1691_;
goto v___jp_1681_;
}
v___jp_1681_:
{
uint64_t v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1683_ = lean_uint64_lor(v___x_1680_, v___y_1682_);
v___x_1684_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1674_, v_args_1675_);
v___x_1685_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_1686_ = lean_string_append(v___x_1685_, v___x_1678_);
v___x_1687_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2));
v___x_1688_ = lean_string_append(v___x_1686_, v___x_1687_);
v___x_1689_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v___x_1678_, v___x_1679_, v___x_1683_, v___x_1684_, v___x_1688_);
return v___x_1689_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1___boxed(lean_object* v_b_1692_, lean_object* v_args_1693_, lean_object* v_a_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v_b_1692_, v_args_1693_);
lean_dec_ref(v_b_1692_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(lean_object* v_x_1696_){
_start:
{
if (lean_obj_tag(v_x_1696_) == 0)
{
lean_object* v___x_1697_; 
v___x_1697_ = lean_box(0);
return v___x_1697_;
}
else
{
lean_object* v_val_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v_val_1698_ = lean_ctor_get(v_x_1696_, 0);
v___x_1699_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0));
v___x_1700_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_1698_);
v___x_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1699_);
lean_ctor_set(v___x_1701_, 1, v___x_1700_);
v___x_1702_ = lean_unsigned_to_nat(1u);
v___x_1703_ = lean_mk_empty_array_with_capacity(v___x_1702_);
v___x_1704_ = lean_array_push(v___x_1703_, v___x_1701_);
v___x_1705_ = l_Lasm_JS_Web_Support_fields(v___x_1704_);
lean_dec_ref(v___x_1704_);
return v___x_1705_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0___boxed(lean_object* v_x_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_x_1706_);
lean_dec(v_x_1706_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once(lean_object* v_emitter_1715_, lean_object* v_name_1716_, lean_object* v_options_1717_){
_start:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___y_1724_; 
v___x_1719_ = lean_unsigned_to_nat(3u);
v___x_1720_ = ((lean_object*)(l_Lasm_JS_Node_events_once___closed__1));
v___x_1721_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1722_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1722_, 0, v_emitter_1715_);
lean_ctor_set(v___x_1722_, 1, v___x_1721_);
if (lean_obj_tag(v_name_1716_) == 0)
{
lean_object* v_value_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
v_value_1732_ = lean_ctor_get(v_name_1716_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_name_1716_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1734_ = v_name_1716_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_value_1732_);
lean_dec(v_name_1716_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
lean_ctor_set_tag(v___x_1734_, 4);
v___x_1737_ = v___x_1734_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_value_1732_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
v___y_1724_ = v___x_1737_;
goto v___jp_1723_;
}
}
}
else
{
lean_object* v_value_1740_; lean_object* v___x_1741_; 
v_value_1740_ = lean_ctor_get(v_name_1716_, 0);
lean_inc(v_value_1740_);
lean_dec_ref_known(v_name_1716_, 1);
v___x_1741_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1741_, 0, v_value_1740_);
lean_ctor_set(v___x_1741_, 1, v___x_1721_);
v___y_1724_ = v___x_1741_;
goto v___jp_1723_;
}
v___jp_1723_:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1725_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_options_1717_);
v___x_1726_ = lean_mk_empty_array_with_capacity(v___x_1719_);
v___x_1727_ = lean_array_push(v___x_1726_, v___x_1722_);
v___x_1728_ = lean_array_push(v___x_1727_, v___y_1724_);
v___x_1729_ = lean_array_push(v___x_1728_, v___x_1725_);
v___x_1730_ = l_Lasm_JS_Web_Support_args(v___x_1729_);
v___x_1731_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v___x_1720_, v___x_1730_);
return v___x_1731_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once___boxed(lean_object* v_emitter_1742_, lean_object* v_name_1743_, lean_object* v_options_1744_, lean_object* v_a_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l_Lasm_JS_Node_events_once(v_emitter_1742_, v_name_1743_, v_options_1744_);
lean_dec(v_options_1744_);
return v_res_1746_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Events(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
