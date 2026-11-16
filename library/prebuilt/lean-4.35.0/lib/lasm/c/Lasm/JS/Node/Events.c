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
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
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
lean_object* v___f_342_; lean_object* v___f_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___f_342_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___closed__0));
v___f_343_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_343_, 0, v_f_340_);
lean_closure_set(v___f_343_, 1, v___f_342_);
v___x_344_ = lean_unsigned_to_nat(0u);
v___x_345_ = l_Lasm_JS_Function_ofFn(v___f_343_, v___x_344_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
v_a_354_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_345_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_345_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___boxed(lean_object* v_f_362_, lean_object* v_a_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn(v_f_362_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0(lean_object* v_f_365_, lean_object* v_args_366_){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = lean_unsigned_to_nat(0u);
v___x_369_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(v_args_366_, v___x_368_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_a_370_);
lean_dec_ref_known(v___x_369_, 1);
v___x_371_ = lean_unsigned_to_nat(1u);
v___x_372_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(v_args_366_, v___x_371_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; lean_object* v___x_374_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_a_373_);
lean_dec_ref_known(v___x_372_, 1);
v___x_374_ = lean_apply_3(v_f_365_, v_a_370_, v_a_373_, lean_box(0));
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_382_; 
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_382_ == 0)
{
lean_object* v_unused_383_; 
v_unused_383_ = lean_ctor_get(v___x_374_, 0);
lean_dec(v_unused_383_);
v___x_376_ = v___x_374_;
v_isShared_377_ = v_isSharedCheck_382_;
goto v_resetjp_375_;
}
else
{
lean_dec(v___x_374_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_382_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_378_ = lean_box(0);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 0, v___x_378_);
v___x_380_ = v___x_376_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
v_a_384_ = lean_ctor_get(v___x_374_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_374_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_374_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
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
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
lean_dec(v_a_370_);
lean_dec_ref(v_f_365_);
v_a_392_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_372_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_372_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
else
{
lean_object* v_a_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_407_; 
lean_dec_ref(v_f_365_);
v_a_400_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_407_ == 0)
{
v___x_402_ = v___x_369_;
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_a_400_);
lean_dec(v___x_369_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_405_; 
if (v_isShared_403_ == 0)
{
v___x_405_ = v___x_402_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_a_400_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed(lean_object* v_f_408_, lean_object* v_args_409_, lean_object* v___y_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0(v_f_408_, v_args_409_);
lean_dec_ref(v_args_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn(lean_object* v_f_412_){
_start:
{
lean_object* v___f_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___f_414_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_414_, 0, v_f_412_);
v___x_415_ = lean_unsigned_to_nat(0u);
v___x_416_ = l_Lasm_JS_Function_ofSyncFn(v___f_414_, v___x_415_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
else
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
v_a_425_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v___x_416_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_416_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_428_ == 0)
{
v___x_430_ = v___x_427_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_a_425_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___boxed(lean_object* v_f_433_, lean_object* v_a_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn(v_f_433_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn(lean_object* v_f_443_){
_start:
{
lean_object* v___f_445_; lean_object* v___f_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___f_445_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___closed__0));
v___f_446_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_446_, 0, v_f_443_);
lean_closure_set(v___f_446_, 1, v___f_445_);
v___x_447_ = lean_unsigned_to_nat(0u);
v___x_448_ = l_Lasm_JS_Function_ofFn(v___f_446_, v___x_447_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn___boxed(lean_object* v_f_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn(v_f_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn(lean_object* v_f_468_){
_start:
{
lean_object* v___f_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___f_470_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_470_, 0, v_f_468_);
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = l_Lasm_JS_Function_ofSyncFn(v___f_470_, v___x_471_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_472_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_472_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
else
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
v_a_481_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___x_472_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_472_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_486_; 
if (v_isShared_484_ == 0)
{
v___x_486_ = v___x_483_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_a_481_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn___boxed(lean_object* v_f_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn(v_f_489_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0(lean_object* v___f_493_, lean_object* v_d_494_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_495_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0));
v___x_496_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_493_, v_d_494_);
v___x_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_495_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
v___x_498_ = lean_unsigned_to_nat(1u);
v___x_499_ = lean_mk_empty_array_with_capacity(v___x_498_);
v___x_500_ = lean_array_push(v___x_499_, v___x_497_);
v___x_501_ = l_Lasm_JS_Web_Support_fields(v___x_500_);
lean_dec_ref(v___x_500_);
return v___x_501_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_506_; uint64_t v___x_507_; 
v___x_506_ = 1;
v___x_507_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0(lean_object* v_specifier_509_){
_start:
{
uint32_t v___x_511_; uint32_t v___x_512_; uint64_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_511_ = 201;
v___x_512_ = 0;
v___x_513_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__0);
v___x_514_ = lean_string_to_utf8(v_specifier_509_);
v___x_515_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_511_, v___x_512_, v___x_513_, v___x_514_);
lean_dec_ref(v___x_514_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
lean_dec_ref_known(v___x_515_, 1);
v___x_517_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___closed__1));
v___x_518_ = l_String_quote(v_specifier_509_);
v___x_519_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
v___x_520_ = lean_unsigned_to_nat(120u);
v___x_521_ = lean_unsigned_to_nat(0u);
v___x_522_ = l_Std_Format_pretty(v___x_519_, v___x_520_, v___x_521_, v___x_521_);
v___x_523_ = lean_string_append(v___x_517_, v___x_522_);
lean_dec_ref(v___x_522_);
v___x_524_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_523_, v_a_516_);
lean_dec(v_a_516_);
lean_dec_ref(v___x_523_);
return v___x_524_;
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
lean_dec_ref(v_specifier_509_);
v_a_525_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_532_ == 0)
{
v___x_527_ = v___x_515_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_515_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_525_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0___boxed(lean_object* v_specifier_533_, lean_object* v_a_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0(v_specifier_533_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1(lean_object* v_module_537_, lean_object* v_o_538_, lean_object* v_a_539_){
_start:
{
if (lean_obj_tag(v_a_539_) == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
lean_dec(v_o_538_);
v___x_541_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1___closed__0));
v___x_542_ = lean_string_append(v___x_541_, v_module_537_);
v___x_543_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
v___x_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
return v___x_544_;
}
else
{
lean_object* v_tail_545_; 
v_tail_545_ = lean_ctor_get(v_a_539_, 1);
if (lean_obj_tag(v_tail_545_) == 0)
{
lean_object* v_head_546_; lean_object* v___x_547_; 
v_head_546_ = lean_ctor_get(v_a_539_, 0);
lean_inc(v_head_546_);
lean_dec_ref_known(v_a_539_, 2);
v___x_547_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_538_, v_head_546_);
return v___x_547_;
}
else
{
lean_object* v_head_548_; lean_object* v___x_549_; 
lean_inc(v_tail_545_);
v_head_548_ = lean_ctor_get(v_a_539_, 0);
lean_inc(v_head_548_);
lean_dec_ref_known(v_a_539_, 2);
v___x_549_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_538_, v_head_548_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
lean_inc(v_a_550_);
lean_dec_ref_known(v___x_549_, 1);
v_o_538_ = v_a_550_;
v_a_539_ = v_tail_545_;
goto _start;
}
else
{
lean_dec(v_tail_545_);
return v___x_549_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1___boxed(lean_object* v_module_552_, lean_object* v_o_553_, lean_object* v_a_554_, lean_object* v_a_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1(v_module_552_, v_o_553_, v_a_554_);
lean_dec_ref(v_module_552_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0(lean_object* v_module_557_, lean_object* v_path_558_){
_start:
{
lean_object* v___x_560_; 
lean_inc_ref(v_module_557_);
v___x_560_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__0(v_module_557_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_562_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_560_, 1);
v___x_562_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0_spec__1(v_module_557_, v_a_561_, v_path_558_);
lean_dec_ref(v_module_557_);
return v___x_562_;
}
else
{
lean_dec(v_path_558_);
lean_dec_ref(v_module_557_);
return v___x_560_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0___boxed(lean_object* v_module_563_, lean_object* v_path_564_, lean_object* v_a_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0(v_module_563_, v_path_564_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___lam__0(lean_object* v___x_567_, lean_object* v___x_568_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_EventEmitter_cast_x3f_spec__0(v___x_567_, v___x_568_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___lam__0___boxed(lean_object* v___x_571_, lean_object* v___x_572_, lean_object* v___y_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lasm_JS_Node_EventEmitter_cast_x3f___lam__0(v___x_571_, v___x_572_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f(lean_object* v_v_583_){
_start:
{
lean_object* v___f_585_; lean_object* v___x_586_; 
v___f_585_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__3));
lean_inc(v_v_583_);
v___x_586_ = l_Lasm_JS_Web_Support_isInstance(v___f_585_, v_v_583_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_600_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_600_ == 0)
{
v___x_589_ = v___x_586_;
v_isShared_590_ = v_isSharedCheck_600_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_600_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
uint8_t v___x_591_; 
v___x_591_ = lean_unbox(v_a_587_);
lean_dec(v_a_587_);
if (v___x_591_ == 0)
{
lean_object* v___x_592_; lean_object* v___x_594_; 
lean_dec(v_v_583_);
v___x_592_ = lean_box(0);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v___x_592_);
v___x_594_ = v___x_589_;
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
else
{
lean_object* v___x_596_; lean_object* v___x_598_; 
v___x_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_596_, 0, v_v_583_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v___x_596_);
v___x_598_ = v___x_589_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v___x_596_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
else
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
lean_dec(v_v_583_);
v_a_601_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_608_ == 0)
{
v___x_603_ = v___x_586_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_586_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_601_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___boxed(lean_object* v_v_609_, lean_object* v_a_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Lasm_JS_Node_EventEmitter_cast_x3f(v_v_609_);
return v_res_611_;
}
}
static lean_object* _init_l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_616_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2));
v___x_617_ = lean_unsigned_to_nat(2u);
v___x_618_ = lean_mk_empty_array_with_capacity(v___x_617_);
v___x_619_ = lean_array_push(v___x_618_, v___x_616_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener(lean_object* v_self_620_, lean_object* v_listener_621_){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_623_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0));
v___x_624_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_625_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_625_, 0, v_listener_621_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
v___x_626_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3, &l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3_once, _init_l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3);
v___x_627_ = lean_array_push(v___x_626_, v___x_625_);
v___x_628_ = l_Lasm_JS_Web_Support_args(v___x_627_);
v___x_629_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_620_, v___x_623_, v___x_628_);
if (lean_obj_tag(v___x_629_) == 0)
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
v_a_630_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_629_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_629_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
else
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_645_; 
v_a_638_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_645_ == 0)
{
v___x_640_ = v___x_629_;
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_629_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_643_; 
if (v_isShared_641_ == 0)
{
v___x_643_ = v___x_640_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_a_638_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___boxed(lean_object* v_self_646_, lean_object* v_listener_647_, lean_object* v_a_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Lasm_JS_Node_EventEmitter_onNewListener(v_self_646_, v_listener_647_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceNewListener(lean_object* v_self_651_, lean_object* v_listener_652_){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_654_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onceNewListener___closed__0));
v___x_655_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_656_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_656_, 0, v_listener_652_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
v___x_657_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3, &l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3_once, _init_l_Lasm_JS_Node_EventEmitter_onNewListener___closed__3);
v___x_658_ = lean_array_push(v___x_657_, v___x_656_);
v___x_659_ = l_Lasm_JS_Web_Support_args(v___x_658_);
v___x_660_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_651_, v___x_654_, v___x_659_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_668_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_668_ == 0)
{
v___x_663_ = v___x_660_;
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v___x_660_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_666_; 
if (v_isShared_664_ == 0)
{
v___x_666_ = v___x_663_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_a_661_);
v___x_666_ = v_reuseFailAlloc_667_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
return v___x_666_;
}
}
}
else
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
v_a_669_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_660_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_660_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceNewListener___boxed(lean_object* v_self_677_, lean_object* v_listener_678_, lean_object* v_a_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lasm_JS_Node_EventEmitter_onceNewListener(v_self_677_, v_listener_678_);
return v_res_680_;
}
}
static lean_object* _init_l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_684_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1));
v___x_685_ = lean_unsigned_to_nat(2u);
v___x_686_ = lean_mk_empty_array_with_capacity(v___x_685_);
v___x_687_ = lean_array_push(v___x_686_, v___x_684_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener(lean_object* v_self_688_, lean_object* v_listener_689_){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_691_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0));
v___x_692_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_693_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_693_, 0, v_listener_689_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2, &l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2_once, _init_l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2);
v___x_695_ = lean_array_push(v___x_694_, v___x_693_);
v___x_696_ = l_Lasm_JS_Web_Support_args(v___x_695_);
v___x_697_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_688_, v___x_691_, v___x_696_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_697_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
else
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_713_; 
v_a_706_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_713_ == 0)
{
v___x_708_ = v___x_697_;
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_697_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_711_; 
if (v_isShared_709_ == 0)
{
v___x_711_ = v___x_708_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v_a_706_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener___boxed(lean_object* v_self_714_, lean_object* v_listener_715_, lean_object* v_a_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lasm_JS_Node_EventEmitter_onRemoveListener(v_self_714_, v_listener_715_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceRemoveListener(lean_object* v_self_718_, lean_object* v_listener_719_){
_start:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_721_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onceNewListener___closed__0));
v___x_722_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_723_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_723_, 0, v_listener_719_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = lean_unsigned_to_nat(2u);
v___x_725_ = lean_mk_empty_array_with_capacity(v___x_724_);
lean_dec_ref(v___x_725_);
v___x_726_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2, &l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2_once, _init_l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__2);
v___x_727_ = lean_array_push(v___x_726_, v___x_723_);
v___x_728_ = l_Lasm_JS_Web_Support_args(v___x_727_);
v___x_729_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_718_, v___x_721_, v___x_728_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_729_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_729_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
v_a_738_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_729_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_729_);
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
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceRemoveListener___boxed(lean_object* v_self_746_, lean_object* v_listener_747_, lean_object* v_a_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Lasm_JS_Node_EventEmitter_onceRemoveListener(v_self_746_, v_listener_747_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t v_sz_750_, size_t v_i_751_, lean_object* v_bs_752_){
_start:
{
uint8_t v___x_753_; 
v___x_753_ = lean_usize_dec_lt(v_i_751_, v_sz_750_);
if (v___x_753_ == 0)
{
return v_bs_752_;
}
else
{
lean_object* v_v_754_; lean_object* v___x_755_; lean_object* v_bs_x27_756_; size_t v___x_757_; size_t v___x_758_; lean_object* v___x_759_; 
v_v_754_ = lean_array_uget(v_bs_752_, v_i_751_);
v___x_755_ = lean_unsigned_to_nat(0u);
v_bs_x27_756_ = lean_array_uset(v_bs_752_, v_i_751_, v___x_755_);
v___x_757_ = ((size_t)1ULL);
v___x_758_ = lean_usize_add(v_i_751_, v___x_757_);
v___x_759_ = lean_array_uset(v_bs_x27_756_, v_i_751_, v_v_754_);
v_i_751_ = v___x_758_;
v_bs_752_ = v___x_759_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0___boxed(lean_object* v_sz_761_, lean_object* v_i_762_, lean_object* v_bs_763_){
_start:
{
size_t v_sz_boxed_764_; size_t v_i_boxed_765_; lean_object* v_res_766_; 
v_sz_boxed_764_ = lean_unbox_usize(v_sz_761_);
lean_dec(v_sz_761_);
v_i_boxed_765_ = lean_unbox_usize(v_i_762_);
lean_dec(v_i_762_);
v_res_766_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_boxed_764_, v_i_boxed_765_, v_bs_763_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit(lean_object* v_self_768_, lean_object* v_eventName_769_, lean_object* v_args_770_){
_start:
{
lean_object* v___x_772_; lean_object* v___y_774_; 
v___x_772_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_emit___closed__0));
if (lean_obj_tag(v_eventName_769_) == 0)
{
lean_object* v_value_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
v_value_783_ = lean_ctor_get(v_eventName_769_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v_eventName_769_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v_eventName_769_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_value_783_);
lean_dec(v_eventName_769_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
lean_ctor_set_tag(v___x_785_, 4);
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_value_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
v___y_774_ = v___x_788_;
goto v___jp_773_;
}
}
}
else
{
lean_object* v_value_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v_value_791_ = lean_ctor_get(v_eventName_769_, 0);
lean_inc(v_value_791_);
lean_dec_ref_known(v_eventName_769_, 1);
v___x_792_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_793_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_793_, 0, v_value_791_);
lean_ctor_set(v___x_793_, 1, v___x_792_);
v___y_774_ = v___x_793_;
goto v___jp_773_;
}
v___jp_773_:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; size_t v_sz_778_; size_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_775_ = lean_unsigned_to_nat(1u);
v___x_776_ = lean_mk_empty_array_with_capacity(v___x_775_);
v___x_777_ = lean_array_push(v___x_776_, v___y_774_);
v_sz_778_ = lean_array_size(v_args_770_);
v___x_779_ = ((size_t)0ULL);
v___x_780_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_778_, v___x_779_, v_args_770_);
v___x_781_ = l_Lasm_JS_Web_Support_argsWith(v___x_777_, v___x_780_);
lean_dec_ref(v___x_780_);
v___x_782_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_768_, v___x_772_, v___x_781_);
return v___x_782_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit___boxed(lean_object* v_self_794_, lean_object* v_eventName_795_, lean_object* v_args_796_, lean_object* v_a_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l_Lasm_JS_Node_EventEmitter_emit(v_self_794_, v_eventName_795_, v_args_796_);
return v_res_798_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_799_; uint64_t v___x_800_; 
v___x_799_ = 0;
v___x_800_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_799_);
return v___x_800_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(uint8_t v_await_801_, uint64_t v_extra_802_){
_start:
{
uint64_t v___x_803_; uint64_t v___y_805_; 
v___x_803_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_await_801_ == 0)
{
uint64_t v___x_808_; 
v___x_808_ = 0ULL;
v___y_805_ = v___x_808_;
goto v___jp_804_;
}
else
{
uint64_t v___x_809_; 
v___x_809_ = 2ULL;
v___y_805_ = v___x_809_;
goto v___jp_804_;
}
v___jp_804_:
{
uint64_t v___x_806_; uint64_t v___x_807_; 
v___x_806_ = lean_uint64_lor(v___x_803_, v___y_805_);
v___x_807_ = lean_uint64_lor(v___x_806_, v_extra_802_);
return v___x_807_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___boxed(lean_object* v_await_810_, lean_object* v_extra_811_){
_start:
{
uint8_t v_await_boxed_812_; uint64_t v_extra_boxed_813_; uint64_t v_res_814_; lean_object* v_r_815_; 
v_await_boxed_812_ = lean_unbox(v_await_810_);
v_extra_boxed_813_ = lean_unbox_uint64(v_extra_811_);
lean_dec_ref(v_extra_811_);
v_res_814_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(v_await_boxed_812_, v_extra_boxed_813_);
v_r_815_ = lean_box_uint64(v_res_814_);
return v_r_815_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0(void){
_start:
{
uint64_t v___x_816_; uint8_t v___x_817_; uint64_t v___x_818_; 
v___x_816_ = 8ULL;
v___x_817_ = 0;
v___x_818_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(v___x_817_, v___x_816_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(lean_object* v_o_819_, lean_object* v_name_820_, lean_object* v_args_821_){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; uint64_t v___x_826_; lean_object* v___x_827_; 
v___x_823_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_824_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_824_, 0, v_o_819_);
lean_ctor_set(v___x_824_, 1, v___x_823_);
v___x_825_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_825_, 0, v_name_820_);
v___x_826_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0);
v___x_827_ = l_Lasm_JS_Value_invokeRaw(v___x_824_, v___x_825_, v_args_821_, v___x_826_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; lean_object* v___x_829_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_828_);
lean_dec_ref_known(v___x_827_, 1);
v___x_829_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_828_);
lean_dec(v_a_828_);
return v___x_829_;
}
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
v_a_830_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_827_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_827_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_830_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___boxed(lean_object* v_o_838_, lean_object* v_name_839_, lean_object* v_args_840_, lean_object* v_a_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(v_o_838_, v_name_839_, v_args_840_);
return v_res_842_;
}
}
static lean_object* _init_l_Lasm_JS_Node_EventEmitter_eventNames___closed__2(void){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_eventNames___closed__1));
v___x_847_ = l_Lasm_JS_Web_Support_args(v___x_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames(lean_object* v_self_848_){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_850_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_eventNames___closed__0));
v___x_851_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_eventNames___closed__2, &l_Lasm_JS_Node_EventEmitter_eventNames___closed__2_once, _init_l_Lasm_JS_Node_EventEmitter_eventNames___closed__2);
v___x_852_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(v_self_848_, v___x_850_, v___x_851_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames___boxed(lean_object* v_self_853_, lean_object* v_a_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lasm_JS_Node_EventEmitter_eventNames(v_self_853_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(lean_object* v_x_856_){
_start:
{
if (lean_obj_tag(v_x_856_) == 0)
{
lean_object* v___x_857_; 
v___x_857_ = lean_box(0);
return v___x_857_;
}
else
{
lean_object* v_val_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v_val_858_ = lean_ctor_get(v_x_856_, 0);
v___x_859_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
lean_inc(v_val_858_);
v___x_860_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_860_, 0, v_val_858_);
lean_ctor_set(v___x_860_, 1, v___x_859_);
return v___x_860_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0___boxed(lean_object* v_x_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(v_x_861_);
lean_dec(v_x_861_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(lean_object* v_context_867_, lean_object* v_d_868_){
_start:
{
lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v___y_877_; lean_object* v_received_878_; lean_object* v___y_897_; lean_object* v_a_900_; 
switch(lean_obj_tag(v_d_868_))
{
case 3:
{
double v_n_924_; lean_object* v___x_925_; 
v_n_924_ = lean_ctor_get_float(v_d_868_, 0);
v___x_925_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_924_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v___x_926_; 
v___x_926_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3));
v_a_900_ = v___x_926_;
goto v___jp_899_;
}
else
{
lean_object* v_val_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_934_; 
lean_dec_ref_known(v_d_868_, 0);
v_val_927_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_934_ == 0)
{
v___x_929_ = v___x_925_;
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_val_927_);
lean_dec(v___x_925_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_932_; 
if (v_isShared_930_ == 0)
{
lean_ctor_set_tag(v___x_929_, 0);
v___x_932_ = v___x_929_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_val_927_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
case 5:
{
lean_object* v_i_935_; lean_object* v___x_936_; 
v_i_935_ = lean_ctor_get(v_d_868_, 0);
lean_inc(v_i_935_);
lean_dec_ref_known(v_d_868_, 1);
v___x_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_936_, 0, v_i_935_);
return v___x_936_;
}
default: 
{
lean_object* v___x_937_; 
v___x_937_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v_a_900_ = v___x_937_;
goto v___jp_899_;
}
}
v___jp_870_:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_873_ = lean_string_append(v___y_871_, v___y_872_);
lean_dec_ref(v___y_872_);
v___x_874_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_874_, 0, v___x_873_);
v___x_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
return v___x_875_;
}
v___jp_876_:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_879_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_880_ = lean_string_append(v___x_879_, v_context_867_);
v___x_881_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1));
v___x_882_ = lean_string_append(v___x_880_, v___x_881_);
v___x_883_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0));
v___x_884_ = lean_string_append(v___x_882_, v___x_883_);
v___x_885_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2));
v___x_886_ = lean_string_append(v___x_884_, v___x_885_);
v___x_887_ = lean_string_append(v___x_886_, v_received_878_);
lean_dec_ref(v_received_878_);
v___x_888_ = lean_string_utf8_byte_size(v___y_877_);
v___x_889_ = lean_unsigned_to_nat(0u);
v___x_890_ = lean_nat_dec_eq(v___x_888_, v___x_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_891_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1));
v___x_892_ = lean_string_append(v___x_891_, v___y_877_);
v___x_893_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2));
v___x_894_ = lean_string_append(v___x_892_, v___x_893_);
v___y_871_ = v___x_887_;
v___y_872_ = v___x_894_;
goto v___jp_870_;
}
else
{
lean_object* v___x_895_; 
v___x_895_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___y_871_ = v___x_887_;
v___y_872_ = v___x_895_;
goto v___jp_870_;
}
}
v___jp_896_:
{
lean_object* v___x_898_; 
v___x_898_ = l_Lasm_JS_Data_describe(v_d_868_);
v___y_877_ = v___y_897_;
v_received_878_ = v___x_898_;
goto v___jp_876_;
}
v___jp_899_:
{
if (lean_obj_tag(v_d_868_) == 9)
{
lean_object* v_value_901_; lean_object* v_description_902_; lean_object* v___x_903_; uint8_t v___x_904_; 
v_value_901_ = lean_ctor_get(v_d_868_, 0);
v_description_902_ = lean_ctor_get(v_d_868_, 1);
v___x_903_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_904_ = lean_string_dec_eq(v_description_902_, v___x_903_);
if (v___x_904_ == 0)
{
v___y_897_ = v_a_900_;
goto v___jp_896_;
}
else
{
lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_921_; 
lean_inc(v_value_901_);
v_isSharedCheck_921_ = !lean_is_exclusive(v_d_868_);
if (v_isSharedCheck_921_ == 0)
{
lean_object* v_unused_922_; lean_object* v_unused_923_; 
v_unused_922_ = lean_ctor_get(v_d_868_, 1);
lean_dec(v_unused_922_);
v_unused_923_ = lean_ctor_get(v_d_868_, 0);
lean_dec(v_unused_923_);
v___x_906_ = v_d_868_;
v_isShared_907_ = v_isSharedCheck_921_;
goto v_resetjp_905_;
}
else
{
lean_dec(v_d_868_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_921_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
uint32_t v___x_908_; uint64_t v___x_909_; lean_object* v___x_911_; 
v___x_908_ = 206;
v___x_909_ = 0ULL;
lean_inc(v_value_901_);
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 1, v___x_903_);
v___x_911_ = v___x_906_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_value_901_);
lean_ctor_set(v_reuseFailAlloc_920_, 1, v___x_903_);
v___x_911_ = v_reuseFailAlloc_920_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
uint32_t v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lasm_js_value_handle(v_value_901_);
lean_dec(v_value_901_);
v___x_913_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_908_, v___x_909_, v___x_911_, v___x_912_);
lean_dec_ref(v___x_911_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_a_914_; uint8_t v___x_915_; 
v_a_914_ = lean_ctor_get(v___x_913_, 0);
lean_inc(v_a_914_);
lean_dec_ref_known(v___x_913_, 1);
v___x_915_ = lean_string_validate_utf8(v_a_914_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; lean_object* v___x_917_; 
lean_dec(v_a_914_);
v___x_916_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9);
v___x_917_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_916_);
v___y_877_ = v_a_900_;
v_received_878_ = v___x_917_;
goto v___jp_876_;
}
else
{
lean_object* v___x_918_; 
v___x_918_ = lean_string_from_utf8_unchecked(v_a_914_);
v___y_877_ = v_a_900_;
v_received_878_ = v___x_918_;
goto v___jp_876_;
}
}
else
{
lean_object* v___x_919_; 
lean_dec_ref_known(v___x_913_, 1);
v___x_919_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10));
v___y_877_ = v_a_900_;
v_received_878_ = v___x_919_;
goto v___jp_876_;
}
}
}
}
}
else
{
v___y_897_ = v_a_900_;
goto v___jp_896_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___boxed(lean_object* v_context_938_, lean_object* v_d_939_, lean_object* v_a_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(v_context_938_, v_d_939_);
lean_dec_ref(v_context_938_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(lean_object* v_context_942_, lean_object* v_bytes_943_){
_start:
{
lean_object* v___x_945_; 
v___x_945_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_943_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; lean_object* v___x_947_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_946_);
lean_dec_ref_known(v___x_945_, 1);
v___x_947_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(v_context_942_, v_a_946_);
return v___x_947_;
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
v_a_948_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_945_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_945_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2___boxed(lean_object* v_context_956_, lean_object* v_bytes_957_, lean_object* v_a_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(v_context_956_, v_bytes_957_);
lean_dec_ref(v_bytes_957_);
lean_dec_ref(v_context_956_);
return v_res_959_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(uint8_t v_await_960_, uint64_t v_extra_961_){
_start:
{
uint64_t v___x_962_; uint64_t v___y_964_; 
v___x_962_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_await_960_ == 0)
{
uint64_t v___x_967_; 
v___x_967_ = 0ULL;
v___y_964_ = v___x_967_;
goto v___jp_963_;
}
else
{
uint64_t v___x_968_; 
v___x_968_ = 2ULL;
v___y_964_ = v___x_968_;
goto v___jp_963_;
}
v___jp_963_:
{
uint64_t v___x_965_; uint64_t v___x_966_; 
v___x_965_ = lean_uint64_lor(v___x_962_, v___y_964_);
v___x_966_ = lean_uint64_lor(v___x_965_, v_extra_961_);
return v___x_966_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1___boxed(lean_object* v_await_969_, lean_object* v_extra_970_){
_start:
{
uint8_t v_await_boxed_971_; uint64_t v_extra_boxed_972_; uint64_t v_res_973_; lean_object* v_r_974_; 
v_await_boxed_971_ = lean_unbox(v_await_969_);
v_extra_boxed_972_ = lean_unbox_uint64(v_extra_970_);
lean_dec_ref(v_extra_970_);
v_res_973_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(v_await_boxed_971_, v_extra_boxed_972_);
v_r_974_ = lean_box_uint64(v_res_973_);
return v_r_974_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0(void){
_start:
{
uint64_t v___x_975_; uint8_t v___x_976_; uint64_t v___x_977_; 
v___x_975_ = 8ULL;
v___x_976_ = 0;
v___x_977_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(v___x_976_, v___x_975_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(lean_object* v_o_979_, lean_object* v_name_980_, lean_object* v_args_981_){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; uint64_t v___x_986_; lean_object* v___x_987_; 
v___x_983_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_984_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_984_, 0, v_o_979_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
lean_inc_ref(v_name_980_);
v___x_985_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_985_, 0, v_name_980_);
v___x_986_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0);
v___x_987_ = l_Lasm_JS_Value_invokeRaw(v___x_984_, v___x_985_, v_args_981_, v___x_986_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v_a_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_988_);
lean_dec_ref_known(v___x_987_, 1);
v___x_989_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__1));
v___x_990_ = lean_string_append(v___x_989_, v_name_980_);
lean_dec_ref(v_name_980_);
v___x_991_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(v___x_990_, v_a_988_);
lean_dec(v_a_988_);
lean_dec_ref(v___x_990_);
return v___x_991_;
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
lean_dec_ref(v_name_980_);
v_a_992_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_987_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_987_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___boxed(lean_object* v_o_1000_, lean_object* v_name_1001_, lean_object* v_args_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(v_o_1000_, v_name_1001_, v_args_1002_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount(lean_object* v_self_1006_, lean_object* v_eventName_1007_, lean_object* v_listener_1008_){
_start:
{
lean_object* v___x_1010_; lean_object* v___y_1012_; 
v___x_1010_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_listenerCount___closed__0));
if (lean_obj_tag(v_eventName_1007_) == 0)
{
lean_object* v_value_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
v_value_1020_ = lean_ctor_get(v_eventName_1007_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v_eventName_1007_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v_eventName_1007_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_value_1020_);
lean_dec(v_eventName_1007_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
lean_ctor_set_tag(v___x_1022_, 4);
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_value_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
v___y_1012_ = v___x_1025_;
goto v___jp_1011_;
}
}
}
else
{
lean_object* v_value_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v_value_1028_ = lean_ctor_get(v_eventName_1007_, 0);
lean_inc(v_value_1028_);
lean_dec_ref_known(v_eventName_1007_, 1);
v___x_1029_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1030_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1030_, 0, v_value_1028_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___y_1012_ = v___x_1030_;
goto v___jp_1011_;
}
v___jp_1011_:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1013_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(v_listener_1008_);
v___x_1014_ = lean_unsigned_to_nat(2u);
v___x_1015_ = lean_mk_empty_array_with_capacity(v___x_1014_);
v___x_1016_ = lean_array_push(v___x_1015_, v___y_1012_);
v___x_1017_ = lean_array_push(v___x_1016_, v___x_1013_);
v___x_1018_ = l_Lasm_JS_Web_Support_args(v___x_1017_);
v___x_1019_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(v_self_1006_, v___x_1010_, v___x_1018_);
return v___x_1019_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount___boxed(lean_object* v_self_1031_, lean_object* v_eventName_1032_, lean_object* v_listener_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Lasm_JS_Node_EventEmitter_listenerCount(v_self_1031_, v_eventName_1032_, v_listener_1033_);
lean_dec(v_listener_1033_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off(lean_object* v_self_1037_, lean_object* v_eventName_1038_, lean_object* v_listener_1039_){
_start:
{
lean_object* v___x_1041_; lean_object* v___y_1043_; 
v___x_1041_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_off___closed__0));
if (lean_obj_tag(v_eventName_1038_) == 0)
{
lean_object* v_value_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
v_value_1068_ = lean_ctor_get(v_eventName_1038_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v_eventName_1038_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v_eventName_1038_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_value_1068_);
lean_dec(v_eventName_1038_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
lean_ctor_set_tag(v___x_1070_, 4);
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_value_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
v___y_1043_ = v___x_1073_;
goto v___jp_1042_;
}
}
}
else
{
lean_object* v_value_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v_value_1076_ = lean_ctor_get(v_eventName_1038_, 0);
lean_inc(v_value_1076_);
lean_dec_ref_known(v_eventName_1038_, 1);
v___x_1077_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1078_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1078_, 0, v_value_1076_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___y_1043_ = v___x_1078_;
goto v___jp_1042_;
}
v___jp_1042_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1044_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1045_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1045_, 0, v_listener_1039_);
lean_ctor_set(v___x_1045_, 1, v___x_1044_);
v___x_1046_ = lean_unsigned_to_nat(2u);
v___x_1047_ = lean_mk_empty_array_with_capacity(v___x_1046_);
v___x_1048_ = lean_array_push(v___x_1047_, v___y_1043_);
v___x_1049_ = lean_array_push(v___x_1048_, v___x_1045_);
v___x_1050_ = l_Lasm_JS_Web_Support_args(v___x_1049_);
v___x_1051_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1037_, v___x_1041_, v___x_1050_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1059_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1054_ = v___x_1051_;
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1051_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
if (v_isShared_1055_ == 0)
{
v___x_1057_ = v___x_1054_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_a_1052_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
v_a_1060_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___x_1051_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v___x_1051_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off___boxed(lean_object* v_self_1079_, lean_object* v_eventName_1080_, lean_object* v_listener_1081_, lean_object* v_a_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lasm_JS_Node_EventEmitter_off(v_self_1079_, v_eventName_1080_, v_listener_1081_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on(lean_object* v_self_1084_, lean_object* v_eventName_1085_, lean_object* v_listener_1086_){
_start:
{
lean_object* v___x_1088_; lean_object* v___y_1090_; 
v___x_1088_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0));
if (lean_obj_tag(v_eventName_1085_) == 0)
{
lean_object* v_value_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
v_value_1115_ = lean_ctor_get(v_eventName_1085_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v_eventName_1085_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v_eventName_1085_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_value_1115_);
lean_dec(v_eventName_1085_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set_tag(v___x_1117_, 4);
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_value_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
v___y_1090_ = v___x_1120_;
goto v___jp_1089_;
}
}
}
else
{
lean_object* v_value_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v_value_1123_ = lean_ctor_get(v_eventName_1085_, 0);
lean_inc(v_value_1123_);
lean_dec_ref_known(v_eventName_1085_, 1);
v___x_1124_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1125_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1125_, 0, v_value_1123_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
v___y_1090_ = v___x_1125_;
goto v___jp_1089_;
}
v___jp_1089_:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1091_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1092_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1092_, 0, v_listener_1086_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = lean_unsigned_to_nat(2u);
v___x_1094_ = lean_mk_empty_array_with_capacity(v___x_1093_);
v___x_1095_ = lean_array_push(v___x_1094_, v___y_1090_);
v___x_1096_ = lean_array_push(v___x_1095_, v___x_1092_);
v___x_1097_ = l_Lasm_JS_Web_Support_args(v___x_1096_);
v___x_1098_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1084_, v___x_1088_, v___x_1097_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1101_ = v___x_1098_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1098_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_a_1099_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
else
{
lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1114_; 
v_a_1107_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1109_ = v___x_1098_;
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1098_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1107_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on___boxed(lean_object* v_self_1126_, lean_object* v_eventName_1127_, lean_object* v_listener_1128_, lean_object* v_a_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lasm_JS_Node_EventEmitter_on(v_self_1126_, v_eventName_1127_, v_listener_1128_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once(lean_object* v_self_1131_, lean_object* v_eventName_1132_, lean_object* v_listener_1133_){
_start:
{
lean_object* v___x_1135_; lean_object* v___y_1137_; 
v___x_1135_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onceNewListener___closed__0));
if (lean_obj_tag(v_eventName_1132_) == 0)
{
lean_object* v_value_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1169_; 
v_value_1162_ = lean_ctor_get(v_eventName_1132_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_eventName_1132_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1164_ = v_eventName_1132_;
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_value_1162_);
lean_dec(v_eventName_1132_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
lean_ctor_set_tag(v___x_1164_, 4);
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_value_1162_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
v___y_1137_ = v___x_1167_;
goto v___jp_1136_;
}
}
}
else
{
lean_object* v_value_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v_value_1170_ = lean_ctor_get(v_eventName_1132_, 0);
lean_inc(v_value_1170_);
lean_dec_ref_known(v_eventName_1132_, 1);
v___x_1171_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1172_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1172_, 0, v_value_1170_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___y_1137_ = v___x_1172_;
goto v___jp_1136_;
}
v___jp_1136_:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1138_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1139_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1139_, 0, v_listener_1133_);
lean_ctor_set(v___x_1139_, 1, v___x_1138_);
v___x_1140_ = lean_unsigned_to_nat(2u);
v___x_1141_ = lean_mk_empty_array_with_capacity(v___x_1140_);
v___x_1142_ = lean_array_push(v___x_1141_, v___y_1137_);
v___x_1143_ = lean_array_push(v___x_1142_, v___x_1139_);
v___x_1144_ = l_Lasm_JS_Web_Support_args(v___x_1143_);
v___x_1145_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1131_, v___x_1135_, v___x_1144_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_1145_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1145_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
v_a_1154_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1145_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1145_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once___boxed(lean_object* v_self_1173_, lean_object* v_eventName_1174_, lean_object* v_listener_1175_, lean_object* v_a_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lasm_JS_Node_EventEmitter_once(v_self_1173_, v_eventName_1174_, v_listener_1175_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(lean_object* v_x_1178_){
_start:
{
if (lean_obj_tag(v_x_1178_) == 0)
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_box(0);
return v___x_1179_;
}
else
{
lean_object* v_val_1180_; 
v_val_1180_ = lean_ctor_get(v_x_1178_, 0);
lean_inc(v_val_1180_);
lean_dec_ref_known(v_x_1178_, 1);
if (lean_obj_tag(v_val_1180_) == 0)
{
lean_object* v_value_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1188_; 
v_value_1181_ = lean_ctor_get(v_val_1180_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v_val_1180_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1183_ = v_val_1180_;
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_value_1181_);
lean_dec(v_val_1180_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1186_; 
if (v_isShared_1184_ == 0)
{
lean_ctor_set_tag(v___x_1183_, 4);
v___x_1186_ = v___x_1183_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_value_1181_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
else
{
lean_object* v_value_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v_value_1189_ = lean_ctor_get(v_val_1180_, 0);
lean_inc(v_value_1189_);
lean_dec_ref_known(v_val_1180_, 1);
v___x_1190_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1191_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1191_, 0, v_value_1189_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
return v___x_1191_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners(lean_object* v_self_1193_, lean_object* v_eventName_1194_){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1196_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_removeAllListeners___closed__0));
v___x_1197_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(v_eventName_1194_);
v___x_1198_ = lean_unsigned_to_nat(1u);
v___x_1199_ = lean_mk_empty_array_with_capacity(v___x_1198_);
v___x_1200_ = lean_array_push(v___x_1199_, v___x_1197_);
v___x_1201_ = l_Lasm_JS_Web_Support_args(v___x_1200_);
v___x_1202_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1193_, v___x_1196_, v___x_1201_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1210_; 
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1205_ = v___x_1202_;
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1202_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1208_; 
if (v_isShared_1206_ == 0)
{
v___x_1208_ = v___x_1205_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_a_1203_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
else
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1218_; 
v_a_1211_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1213_ = v___x_1202_;
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v___x_1202_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1216_; 
if (v_isShared_1214_ == 0)
{
v___x_1216_ = v___x_1213_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_a_1211_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners___boxed(lean_object* v_self_1219_, lean_object* v_eventName_1220_, lean_object* v_a_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = l_Lasm_JS_Node_EventEmitter_removeAllListeners(v_self_1219_, v_eventName_1220_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(lean_object* v___f_1223_, lean_object* v_bytes_1224_){
_start:
{
lean_object* v___x_1226_; uint8_t v___x_1227_; lean_object* v_val_1229_; lean_object* v___x_1232_; 
v___x_1226_ = lean_unsigned_to_nat(0u);
v___x_1227_ = 0;
v___x_1232_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1224_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1232_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1232_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
lean_ctor_set_tag(v___x_1235_, 1);
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
v_val_1229_ = v___x_1238_;
goto v___jp_1228_;
}
}
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
v_a_1241_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1232_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1232_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1246_; 
if (v_isShared_1244_ == 0)
{
lean_ctor_set_tag(v___x_1243_, 0);
v___x_1246_ = v___x_1243_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1241_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
v_val_1229_ = v___x_1246_;
goto v___jp_1228_;
}
}
}
v___jp_1228_:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1230_, 0, v_val_1229_);
v___x_1231_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1226_, v___x_1227_, v___x_1230_, v___f_1223_);
return v___x_1231_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed(lean_object* v___f_1249_, lean_object* v_bytes_1250_, lean_object* v___y_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(v___f_1249_, v_bytes_1250_);
lean_dec_ref(v_bytes_1250_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(lean_object* v___f_1253_, lean_object* v_x_1254_){
_start:
{
if (lean_obj_tag(v_x_1254_) == 0)
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1264_; 
lean_dec_ref(v___f_1253_);
v_a_1256_ = lean_ctor_get(v_x_1254_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v_x_1254_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1258_ = v_x_1254_;
v_isShared_1259_ = v_isSharedCheck_1264_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v_x_1254_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1264_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1256_);
v___x_1261_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
return v___x_1262_;
}
}
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1266_; 
v_a_1265_ = lean_ctor_get(v_x_1254_, 0);
lean_inc(v_a_1265_);
lean_dec_ref_known(v_x_1254_, 1);
v___x_1266_ = lean_apply_2(v___f_1253_, v_a_1265_, lean_box(0));
return v___x_1266_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed(lean_object* v___f_1267_, lean_object* v_x_1268_, lean_object* v___y_1269_){
_start:
{
lean_object* v_res_1270_; 
v_res_1270_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(v___f_1267_, v_x_1268_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(lean_object* v_failurePrefix_1271_, lean_object* v_x_1272_){
_start:
{
if (lean_obj_tag(v_x_1272_) == 0)
{
lean_object* v_a_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1285_; 
v_a_1274_ = lean_ctor_get(v_x_1272_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v_x_1272_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1276_ = v_x_1272_;
v_isShared_1277_ = v_isSharedCheck_1285_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_a_1274_);
lean_dec(v_x_1272_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1285_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1282_; 
v___x_1278_ = lean_io_error_to_string(v_a_1274_);
v___x_1279_ = lean_string_append(v_failurePrefix_1271_, v___x_1278_);
lean_dec_ref(v___x_1278_);
v___x_1280_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1279_);
if (v_isShared_1277_ == 0)
{
lean_ctor_set(v___x_1276_, 0, v___x_1280_);
v___x_1282_ = v___x_1276_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1280_);
v___x_1282_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
lean_object* v___x_1283_; 
v___x_1283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1282_);
return v___x_1283_;
}
}
}
else
{
lean_object* v___x_1286_; 
lean_dec_ref(v_failurePrefix_1271_);
v___x_1286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1286_, 0, v_x_1272_);
return v___x_1286_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed(lean_object* v_failurePrefix_1287_, lean_object* v_x_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(v_failurePrefix_1287_, v_x_1288_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(lean_object* v_a_1291_, lean_object* v_x_1292_){
_start:
{
if (lean_obj_tag(v_x_1292_) == 0)
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1302_; 
v_a_1294_ = lean_ctor_get(v_x_1292_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v_x_1292_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1296_ = v_x_1292_;
v_isShared_1297_ = v_isSharedCheck_1302_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v_x_1292_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1302_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
lean_object* v___x_1300_; 
v___x_1300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
return v___x_1300_;
}
}
}
else
{
lean_object* v___x_1303_; 
lean_dec_ref_known(v_x_1292_, 1);
v___x_1303_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1291_);
return v___x_1303_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed(lean_object* v_a_1304_, lean_object* v_x_1305_, lean_object* v___y_1306_){
_start:
{
lean_object* v_res_1307_; 
v_res_1307_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(v_a_1304_, v_x_1305_);
lean_dec(v_a_1304_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(lean_object* v___x_1308_, uint8_t v___x_1309_, lean_object* v___f_1310_, lean_object* v_a_1311_, uint32_t v_op_1312_, uint64_t v_flags_1313_, lean_object* v_payload_1314_, lean_object* v_x_1315_){
_start:
{
lean_object* v_val_1318_; 
if (lean_obj_tag(v_x_1315_) == 0)
{
lean_object* v___x_1321_; 
lean_dec_ref(v___f_1310_);
lean_dec(v___x_1308_);
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v_x_1315_);
return v___x_1321_;
}
else
{
lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1336_; 
v_a_1322_ = lean_ctor_get(v_x_1315_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v_x_1315_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1324_ = v_x_1315_;
v_isShared_1325_ = v_isSharedCheck_1336_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v_x_1315_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1336_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
uint32_t v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = 0;
v___x_1327_ = lasm_js_call_into(v_a_1311_, v_op_1312_, v___x_1326_, v_flags_1313_, v_a_1322_, v_payload_1314_);
lean_dec(v_a_1322_);
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v_a_1328_; lean_object* v___x_1330_; 
v_a_1328_ = lean_ctor_get(v___x_1327_, 0);
lean_inc(v_a_1328_);
lean_dec_ref_known(v___x_1327_, 1);
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 0, v_a_1328_);
v___x_1330_ = v___x_1324_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1328_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
v_val_1318_ = v___x_1330_;
goto v___jp_1317_;
}
}
else
{
lean_object* v_a_1332_; lean_object* v___x_1334_; 
v_a_1332_ = lean_ctor_get(v___x_1327_, 0);
lean_inc(v_a_1332_);
lean_dec_ref_known(v___x_1327_, 1);
if (v_isShared_1325_ == 0)
{
lean_ctor_set_tag(v___x_1324_, 0);
lean_ctor_set(v___x_1324_, 0, v_a_1332_);
v___x_1334_ = v___x_1324_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1332_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
v_val_1318_ = v___x_1334_;
goto v___jp_1317_;
}
}
}
}
v___jp_1317_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1319_, 0, v_val_1318_);
v___x_1320_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1308_, v___x_1309_, v___x_1319_, v___f_1310_);
return v___x_1320_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed(lean_object* v___x_1337_, lean_object* v___x_1338_, lean_object* v___f_1339_, lean_object* v_a_1340_, lean_object* v_op_1341_, lean_object* v_flags_1342_, lean_object* v_payload_1343_, lean_object* v_x_1344_, lean_object* v___y_1345_){
_start:
{
uint8_t v___x_1391__boxed_1346_; uint32_t v_op_boxed_1347_; uint64_t v_flags_boxed_1348_; lean_object* v_res_1349_; 
v___x_1391__boxed_1346_ = lean_unbox(v___x_1338_);
v_op_boxed_1347_ = lean_unbox_uint32(v_op_1341_);
lean_dec(v_op_1341_);
v_flags_boxed_1348_ = lean_unbox_uint64(v_flags_1342_);
lean_dec_ref(v_flags_1342_);
v_res_1349_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(v___x_1337_, v___x_1391__boxed_1346_, v___f_1339_, v_a_1340_, v_op_boxed_1347_, v_flags_boxed_1348_, v_payload_1343_, v_x_1344_);
lean_dec(v_payload_1343_);
lean_dec(v_a_1340_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(lean_object* v___f_1350_, lean_object* v_a_1351_, uint32_t v_op_1352_, uint64_t v_flags_1353_, lean_object* v_payload_1354_, lean_object* v_x_1355_){
_start:
{
if (lean_obj_tag(v_x_1355_) == 0)
{
lean_object* v___x_1357_; 
lean_dec_ref(v___f_1350_);
v___x_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1357_, 0, v_x_1355_);
return v___x_1357_;
}
else
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1378_; 
v_a_1358_ = lean_ctor_get(v_x_1355_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_x_1355_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1360_ = v_x_1355_;
v_isShared_1361_ = v_isSharedCheck_1378_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v_x_1355_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1378_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
uint32_t v___x_1362_; lean_object* v___x_1363_; uint8_t v___x_1364_; lean_object* v_val_1366_; lean_object* v___x_1369_; 
v___x_1362_ = 0;
v___x_1363_ = lean_unsigned_to_nat(0u);
v___x_1364_ = 0;
v___x_1369_ = lasm_js_call_into(v_a_1351_, v_op_1352_, v___x_1362_, v_flags_1353_, v_a_1358_, v_payload_1354_);
lean_dec(v_a_1358_);
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_object* v_a_1370_; lean_object* v___x_1372_; 
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_a_1370_);
lean_dec_ref_known(v___x_1369_, 1);
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 0, v_a_1370_);
v___x_1372_ = v___x_1360_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1370_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
v_val_1366_ = v___x_1372_;
goto v___jp_1365_;
}
}
else
{
lean_object* v_a_1374_; lean_object* v___x_1376_; 
v_a_1374_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_a_1374_);
lean_dec_ref_known(v___x_1369_, 1);
if (v_isShared_1361_ == 0)
{
lean_ctor_set_tag(v___x_1360_, 0);
lean_ctor_set(v___x_1360_, 0, v_a_1374_);
v___x_1376_ = v___x_1360_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1374_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
v_val_1366_ = v___x_1376_;
goto v___jp_1365_;
}
}
v___jp_1365_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1367_, 0, v_val_1366_);
v___x_1368_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1363_, v___x_1364_, v___x_1367_, v___f_1350_);
return v___x_1368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed(lean_object* v___f_1379_, lean_object* v_a_1380_, lean_object* v_op_1381_, lean_object* v_flags_1382_, lean_object* v_payload_1383_, lean_object* v_x_1384_, lean_object* v___y_1385_){
_start:
{
uint32_t v_op_boxed_1386_; uint64_t v_flags_boxed_1387_; lean_object* v_res_1388_; 
v_op_boxed_1386_ = lean_unbox_uint32(v_op_1381_);
lean_dec(v_op_1381_);
v_flags_boxed_1387_ = lean_unbox_uint64(v_flags_1382_);
lean_dec_ref(v_flags_1382_);
v_res_1388_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(v___f_1379_, v_a_1380_, v_op_boxed_1386_, v_flags_boxed_1387_, v_payload_1383_, v_x_1384_);
lean_dec(v_payload_1383_);
lean_dec(v_a_1380_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(lean_object* v_failurePrefix_1389_, uint32_t v_op_1390_, uint64_t v_flags_1391_, lean_object* v_payload_1392_, lean_object* v___f_1393_, lean_object* v___f_1394_, lean_object* v___f_1395_, lean_object* v_x_1396_){
_start:
{
if (lean_obj_tag(v_x_1396_) == 0)
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1406_; 
lean_dec_ref(v___f_1395_);
lean_dec_ref(v___f_1394_);
lean_dec_ref(v___f_1393_);
lean_dec(v_payload_1392_);
v_a_1398_ = lean_ctor_get(v_x_1396_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v_x_1396_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1400_ = v_x_1396_;
v_isShared_1401_ = v_isSharedCheck_1406_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v_x_1396_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1406_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1398_);
v___x_1403_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
lean_object* v___x_1404_; 
v___x_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
return v___x_1404_;
}
}
}
else
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1453_; 
v_a_1407_ = lean_ctor_get(v_x_1396_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v_x_1396_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1409_ = v_x_1396_;
v_isShared_1410_ = v_isSharedCheck_1453_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v_x_1396_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1453_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; uint8_t v___x_1413_; 
v___x_1411_ = lean_string_utf8_byte_size(v_failurePrefix_1389_);
v___x_1412_ = lean_unsigned_to_nat(0u);
v___x_1413_ = lean_nat_dec_eq(v___x_1411_, v___x_1412_);
if (v___x_1413_ == 0)
{
lean_object* v___f_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___f_1418_; lean_object* v_val_1420_; lean_object* v___x_1425_; 
lean_dec_ref(v___f_1395_);
lean_inc(v_a_1407_);
v___f_1414_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1414_, 0, v_a_1407_);
v___x_1415_ = lean_box(v___x_1413_);
v___x_1416_ = lean_box_uint32(v_op_1390_);
v___x_1417_ = lean_box_uint64(v_flags_1391_);
lean_inc(v_payload_1392_);
v___f_1418_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1418_, 0, v___x_1412_);
lean_closure_set(v___f_1418_, 1, v___x_1415_);
lean_closure_set(v___f_1418_, 2, v___f_1414_);
lean_closure_set(v___f_1418_, 3, v_a_1407_);
lean_closure_set(v___f_1418_, 4, v___x_1416_);
lean_closure_set(v___f_1418_, 5, v___x_1417_);
lean_closure_set(v___f_1418_, 6, v_payload_1392_);
v___x_1425_ = l_Lasm_JS_Wire_encodeIO(v_payload_1392_);
lean_dec(v_payload_1392_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v___x_1428_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_a_1426_);
lean_dec_ref_known(v___x_1425_, 1);
if (v_isShared_1410_ == 0)
{
lean_ctor_set(v___x_1409_, 0, v_a_1426_);
v___x_1428_ = v___x_1409_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1426_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
v_val_1420_ = v___x_1428_;
goto v___jp_1419_;
}
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; 
v_a_1430_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_a_1430_);
lean_dec_ref_known(v___x_1425_, 1);
if (v_isShared_1410_ == 0)
{
lean_ctor_set_tag(v___x_1409_, 0);
lean_ctor_set(v___x_1409_, 0, v_a_1430_);
v___x_1432_ = v___x_1409_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1430_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
v_val_1420_ = v___x_1432_;
goto v___jp_1419_;
}
}
v___jp_1419_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1421_, 0, v_val_1420_);
v___x_1422_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1412_, v___x_1413_, v___x_1421_, v___f_1418_);
v___x_1423_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1412_, v___x_1413_, v___x_1422_, v___f_1393_);
v___x_1424_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1412_, v___x_1413_, v___x_1423_, v___f_1394_);
return v___x_1424_;
}
}
else
{
lean_object* v___f_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___f_1437_; uint8_t v___x_1438_; lean_object* v_val_1440_; lean_object* v___x_1444_; 
lean_dec_ref(v___f_1394_);
lean_dec_ref(v___f_1393_);
lean_inc(v_a_1407_);
v___f_1434_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1434_, 0, v_a_1407_);
v___x_1435_ = lean_box_uint32(v_op_1390_);
v___x_1436_ = lean_box_uint64(v_flags_1391_);
lean_inc(v_payload_1392_);
v___f_1437_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1437_, 0, v___f_1434_);
lean_closure_set(v___f_1437_, 1, v_a_1407_);
lean_closure_set(v___f_1437_, 2, v___x_1435_);
lean_closure_set(v___f_1437_, 3, v___x_1436_);
lean_closure_set(v___f_1437_, 4, v_payload_1392_);
v___x_1438_ = 0;
v___x_1444_ = l_Lasm_JS_Wire_encodeIO(v_payload_1392_);
lean_dec(v_payload_1392_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v_a_1445_; lean_object* v___x_1447_; 
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1444_, 1);
if (v_isShared_1410_ == 0)
{
lean_ctor_set(v___x_1409_, 0, v_a_1445_);
v___x_1447_ = v___x_1409_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1445_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
v_val_1440_ = v___x_1447_;
goto v___jp_1439_;
}
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1451_; 
v_a_1449_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_a_1449_);
lean_dec_ref_known(v___x_1444_, 1);
if (v_isShared_1410_ == 0)
{
lean_ctor_set_tag(v___x_1409_, 0);
lean_ctor_set(v___x_1409_, 0, v_a_1449_);
v___x_1451_ = v___x_1409_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1449_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
v_val_1440_ = v___x_1451_;
goto v___jp_1439_;
}
}
v___jp_1439_:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1441_, 0, v_val_1440_);
v___x_1442_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1412_, v___x_1438_, v___x_1441_, v___f_1437_);
v___x_1443_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1412_, v___x_1438_, v___x_1442_, v___f_1395_);
return v___x_1443_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed(lean_object* v_failurePrefix_1454_, lean_object* v_op_1455_, lean_object* v_flags_1456_, lean_object* v_payload_1457_, lean_object* v___f_1458_, lean_object* v___f_1459_, lean_object* v___f_1460_, lean_object* v_x_1461_, lean_object* v___y_1462_){
_start:
{
uint32_t v_op_boxed_1463_; uint64_t v_flags_boxed_1464_; lean_object* v_res_1465_; 
v_op_boxed_1463_ = lean_unbox_uint32(v_op_1455_);
lean_dec(v_op_1455_);
v_flags_boxed_1464_ = lean_unbox_uint64(v_flags_1456_);
lean_dec_ref(v_flags_1456_);
v_res_1465_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(v_failurePrefix_1454_, v_op_boxed_1463_, v_flags_boxed_1464_, v_payload_1457_, v___f_1458_, v___f_1459_, v___f_1460_, v_x_1461_);
lean_dec_ref(v_failurePrefix_1454_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(size_t v_sz_1466_, size_t v_i_1467_, lean_object* v_bs_1468_){
_start:
{
uint8_t v___x_1469_; 
v___x_1469_ = lean_usize_dec_lt(v_i_1467_, v_sz_1466_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1470_, 0, v_bs_1468_);
return v___x_1470_;
}
else
{
lean_object* v_v_1471_; lean_object* v___x_1472_; lean_object* v_bs_x27_1473_; size_t v___x_1474_; size_t v___x_1475_; lean_object* v___x_1476_; 
v_v_1471_ = lean_array_uget(v_bs_1468_, v_i_1467_);
v___x_1472_ = lean_unsigned_to_nat(0u);
v_bs_x27_1473_ = lean_array_uset(v_bs_1468_, v_i_1467_, v___x_1472_);
v___x_1474_ = ((size_t)1ULL);
v___x_1475_ = lean_usize_add(v_i_1467_, v___x_1474_);
v___x_1476_ = lean_array_uset(v_bs_x27_1473_, v_i_1467_, v_v_1471_);
v_i_1467_ = v___x_1475_;
v_bs_1468_ = v___x_1476_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_1478_, lean_object* v_i_1479_, lean_object* v_bs_1480_){
_start:
{
size_t v_sz_boxed_1481_; size_t v_i_boxed_1482_; lean_object* v_res_1483_; 
v_sz_boxed_1481_ = lean_unbox_usize(v_sz_1478_);
lean_dec(v_sz_1478_);
v_i_boxed_1482_ = lean_unbox_usize(v_i_1479_);
lean_dec(v_i_1479_);
v_res_1483_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_boxed_1481_, v_i_boxed_1482_, v_bs_1480_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(lean_object* v_context_1487_, lean_object* v_d_1488_){
_start:
{
lean_object* v___y_1491_; lean_object* v___y_1492_; lean_object* v___y_1497_; lean_object* v_received_1498_; lean_object* v___y_1517_; lean_object* v_a_1520_; 
if (lean_obj_tag(v_d_1488_) == 7)
{
lean_object* v_items_1544_; size_t v_sz_1545_; size_t v___x_1546_; lean_object* v___x_1547_; 
v_items_1544_ = lean_ctor_get(v_d_1488_, 0);
v_sz_1545_ = lean_array_size(v_items_1544_);
v___x_1546_ = ((size_t)0ULL);
lean_inc_ref(v_items_1544_);
v___x_1547_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_1545_, v___x_1546_, v_items_1544_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; uint8_t v___x_1552_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1548_);
lean_dec_ref_known(v___x_1547_, 1);
v___x_1549_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__1));
v___x_1550_ = lean_string_utf8_byte_size(v_a_1548_);
v___x_1551_ = lean_unsigned_to_nat(0u);
v___x_1552_ = lean_nat_dec_eq(v___x_1550_, v___x_1551_);
if (v___x_1552_ == 0)
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1553_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2));
v___x_1554_ = lean_string_append(v___x_1553_, v_a_1548_);
lean_dec(v_a_1548_);
v___x_1555_ = lean_string_append(v___x_1549_, v___x_1554_);
lean_dec_ref(v___x_1554_);
v_a_1520_ = v___x_1555_;
goto v___jp_1519_;
}
else
{
lean_dec(v_a_1548_);
v_a_1520_ = v___x_1549_;
goto v___jp_1519_;
}
}
else
{
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1556_; 
v_a_1556_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1556_);
lean_dec_ref_known(v___x_1547_, 1);
v_a_1520_ = v_a_1556_;
goto v___jp_1519_;
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
lean_dec_ref_known(v_d_1488_, 1);
v_a_1557_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1559_ = v___x_1547_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1547_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
lean_ctor_set_tag(v___x_1559_, 0);
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1557_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
}
else
{
lean_object* v___x_1565_; 
v___x_1565_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v_a_1520_ = v___x_1565_;
goto v___jp_1519_;
}
v___jp_1490_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1493_ = lean_string_append(v___y_1491_, v___y_1492_);
lean_dec_ref(v___y_1492_);
v___x_1494_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
v___x_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1494_);
return v___x_1495_;
}
v___jp_1496_:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; uint8_t v___x_1510_; 
v___x_1499_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_1500_ = lean_string_append(v___x_1499_, v_context_1487_);
v___x_1501_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1));
v___x_1502_ = lean_string_append(v___x_1500_, v___x_1501_);
v___x_1503_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__0));
v___x_1504_ = lean_string_append(v___x_1502_, v___x_1503_);
v___x_1505_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2));
v___x_1506_ = lean_string_append(v___x_1504_, v___x_1505_);
v___x_1507_ = lean_string_append(v___x_1506_, v_received_1498_);
lean_dec_ref(v_received_1498_);
v___x_1508_ = lean_string_utf8_byte_size(v___y_1497_);
v___x_1509_ = lean_unsigned_to_nat(0u);
v___x_1510_ = lean_nat_dec_eq(v___x_1508_, v___x_1509_);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1511_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1));
v___x_1512_ = lean_string_append(v___x_1511_, v___y_1497_);
lean_dec_ref(v___y_1497_);
v___x_1513_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2));
v___x_1514_ = lean_string_append(v___x_1512_, v___x_1513_);
v___y_1491_ = v___x_1507_;
v___y_1492_ = v___x_1514_;
goto v___jp_1490_;
}
else
{
lean_object* v___x_1515_; 
lean_dec_ref(v___y_1497_);
v___x_1515_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___y_1491_ = v___x_1507_;
v___y_1492_ = v___x_1515_;
goto v___jp_1490_;
}
}
v___jp_1516_:
{
lean_object* v___x_1518_; 
v___x_1518_ = l_Lasm_JS_Data_describe(v_d_1488_);
v___y_1497_ = v___y_1517_;
v_received_1498_ = v___x_1518_;
goto v___jp_1496_;
}
v___jp_1519_:
{
if (lean_obj_tag(v_d_1488_) == 9)
{
lean_object* v_value_1521_; lean_object* v_description_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; 
v_value_1521_ = lean_ctor_get(v_d_1488_, 0);
v_description_1522_ = lean_ctor_get(v_d_1488_, 1);
v___x_1523_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1524_ = lean_string_dec_eq(v_description_1522_, v___x_1523_);
if (v___x_1524_ == 0)
{
v___y_1517_ = v_a_1520_;
goto v___jp_1516_;
}
else
{
lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1541_; 
lean_inc(v_value_1521_);
v_isSharedCheck_1541_ = !lean_is_exclusive(v_d_1488_);
if (v_isSharedCheck_1541_ == 0)
{
lean_object* v_unused_1542_; lean_object* v_unused_1543_; 
v_unused_1542_ = lean_ctor_get(v_d_1488_, 1);
lean_dec(v_unused_1542_);
v_unused_1543_ = lean_ctor_get(v_d_1488_, 0);
lean_dec(v_unused_1543_);
v___x_1526_ = v_d_1488_;
v_isShared_1527_ = v_isSharedCheck_1541_;
goto v_resetjp_1525_;
}
else
{
lean_dec(v_d_1488_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1541_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
uint32_t v___x_1528_; uint64_t v___x_1529_; lean_object* v___x_1531_; 
v___x_1528_ = 206;
v___x_1529_ = 0ULL;
lean_inc(v_value_1521_);
if (v_isShared_1527_ == 0)
{
lean_ctor_set(v___x_1526_, 1, v___x_1523_);
v___x_1531_ = v___x_1526_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_value_1521_);
lean_ctor_set(v_reuseFailAlloc_1540_, 1, v___x_1523_);
v___x_1531_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
uint32_t v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = lasm_js_value_handle(v_value_1521_);
lean_dec(v_value_1521_);
v___x_1533_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1528_, v___x_1529_, v___x_1531_, v___x_1532_);
lean_dec_ref(v___x_1531_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; uint8_t v___x_1535_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref_known(v___x_1533_, 1);
v___x_1535_ = lean_string_validate_utf8(v_a_1534_);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
lean_dec(v_a_1534_);
v___x_1536_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9);
v___x_1537_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1536_);
v___y_1497_ = v_a_1520_;
v_received_1498_ = v___x_1537_;
goto v___jp_1496_;
}
else
{
lean_object* v___x_1538_; 
v___x_1538_ = lean_string_from_utf8_unchecked(v_a_1534_);
v___y_1497_ = v_a_1520_;
v_received_1498_ = v___x_1538_;
goto v___jp_1496_;
}
}
else
{
lean_object* v___x_1539_; 
lean_dec_ref_known(v___x_1533_, 1);
v___x_1539_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10));
v___y_1497_ = v_a_1520_;
v_received_1498_ = v___x_1539_;
goto v___jp_1496_;
}
}
}
}
}
else
{
v___y_1517_ = v_a_1520_;
goto v___jp_1516_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___boxed(lean_object* v_context_1566_, lean_object* v_d_1567_, lean_object* v_a_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_1566_, v_d_1567_);
lean_dec_ref(v_context_1566_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(lean_object* v_context_1570_, lean_object* v_x_1571_){
_start:
{
lean_object* v_val_1574_; 
if (lean_obj_tag(v_x_1571_) == 0)
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1584_; 
v_a_1576_ = lean_ctor_get(v_x_1571_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v_x_1571_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1578_ = v_x_1571_;
v_isShared_1579_ = v_isSharedCheck_1584_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v_x_1571_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1584_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v_a_1576_);
v___x_1581_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
lean_object* v___x_1582_; 
v___x_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1581_);
return v___x_1582_;
}
}
}
else
{
lean_object* v_a_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1598_; 
v_a_1585_ = lean_ctor_get(v_x_1571_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v_x_1571_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1587_ = v_x_1571_;
v_isShared_1588_ = v_isSharedCheck_1598_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_a_1585_);
lean_dec(v_x_1571_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1598_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_1570_, v_a_1585_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; lean_object* v___x_1592_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
lean_inc(v_a_1590_);
lean_dec_ref_known(v___x_1589_, 1);
if (v_isShared_1588_ == 0)
{
lean_ctor_set(v___x_1587_, 0, v_a_1590_);
v___x_1592_ = v___x_1587_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1590_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
v_val_1574_ = v___x_1592_;
goto v___jp_1573_;
}
}
else
{
lean_object* v_a_1594_; lean_object* v___x_1596_; 
v_a_1594_ = lean_ctor_get(v___x_1589_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v___x_1589_, 1);
if (v_isShared_1588_ == 0)
{
lean_ctor_set_tag(v___x_1587_, 0);
lean_ctor_set(v___x_1587_, 0, v_a_1594_);
v___x_1596_ = v___x_1587_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1594_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
v_val_1574_ = v___x_1596_;
goto v___jp_1573_;
}
}
}
}
v___jp_1573_:
{
lean_object* v___x_1575_; 
v___x_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1575_, 0, v_val_1574_);
return v___x_1575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed(lean_object* v_context_1599_, lean_object* v_x_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(v_context_1599_, v_x_1600_);
lean_dec_ref(v_context_1599_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(lean_object* v___f_1603_, lean_object* v_x_1604_){
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
lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1626_; 
v_isSharedCheck_1626_ = !lean_is_exclusive(v_x_1604_);
if (v_isSharedCheck_1626_ == 0)
{
lean_object* v_unused_1627_; 
v_unused_1627_ = lean_ctor_get(v_x_1604_, 0);
lean_dec(v_unused_1627_);
v___x_1616_ = v_x_1604_;
v_isShared_1617_ = v_isSharedCheck_1626_;
goto v_resetjp_1615_;
}
else
{
lean_dec(v_x_1604_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1626_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1618_; uint8_t v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1622_; 
v___x_1618_ = lean_unsigned_to_nat(0u);
v___x_1619_ = 0;
v___x_1620_ = lean_io_promise_new();
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 0, v___x_1620_);
v___x_1622_ = v___x_1616_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1620_);
v___x_1622_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1622_);
v___x_1624_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1618_, v___x_1619_, v___x_1623_, v___f_1603_);
return v___x_1624_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed(lean_object* v___f_1628_, lean_object* v_x_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(v___f_1628_, v_x_1629_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(lean_object* v_context_1632_, uint32_t v_op_1633_, uint64_t v_flags_1634_, lean_object* v_payload_1635_, lean_object* v_failurePrefix_1636_){
_start:
{
lean_object* v___f_1638_; lean_object* v___f_1639_; lean_object* v___f_1640_; lean_object* v___f_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___f_1644_; lean_object* v___f_1645_; lean_object* v___x_1646_; uint8_t v___x_1647_; lean_object* v_val_1649_; lean_object* v___x_1652_; 
v___f_1638_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1638_, 0, v_context_1632_);
v___f_1639_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1639_, 0, v___f_1638_);
v___f_1640_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1640_, 0, v___f_1639_);
lean_inc_ref(v_failurePrefix_1636_);
v___f_1641_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1641_, 0, v_failurePrefix_1636_);
v___x_1642_ = lean_box_uint32(v_op_1633_);
v___x_1643_ = lean_box_uint64(v_flags_1634_);
lean_inc_ref(v___f_1640_);
v___f_1644_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1644_, 0, v_failurePrefix_1636_);
lean_closure_set(v___f_1644_, 1, v___x_1642_);
lean_closure_set(v___f_1644_, 2, v___x_1643_);
lean_closure_set(v___f_1644_, 3, v_payload_1635_);
lean_closure_set(v___f_1644_, 4, v___f_1641_);
lean_closure_set(v___f_1644_, 5, v___f_1640_);
lean_closure_set(v___f_1644_, 6, v___f_1640_);
v___f_1645_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1645_, 0, v___f_1644_);
v___x_1646_ = lean_unsigned_to_nat(0u);
v___x_1647_ = 0;
v___x_1652_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1660_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1660_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1655_ = v___x_1652_;
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___x_1652_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1658_; 
if (v_isShared_1656_ == 0)
{
lean_ctor_set_tag(v___x_1655_, 1);
v___x_1658_ = v___x_1655_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1653_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
v_val_1649_ = v___x_1658_;
goto v___jp_1648_;
}
}
}
else
{
lean_object* v_a_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1668_; 
v_a_1661_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1663_ = v___x_1652_;
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_a_1661_);
lean_dec(v___x_1652_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
lean_object* v___x_1666_; 
if (v_isShared_1664_ == 0)
{
lean_ctor_set_tag(v___x_1663_, 0);
v___x_1666_ = v___x_1663_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v_a_1661_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
v_val_1649_ = v___x_1666_;
goto v___jp_1648_;
}
}
}
v___jp_1648_:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1650_, 0, v_val_1649_);
v___x_1651_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1646_, v___x_1647_, v___x_1650_, v___f_1645_);
return v___x_1651_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___boxed(lean_object* v_context_1669_, lean_object* v_op_1670_, lean_object* v_flags_1671_, lean_object* v_payload_1672_, lean_object* v_failurePrefix_1673_, lean_object* v_a_1674_){
_start:
{
uint32_t v_op_boxed_1675_; uint64_t v_flags_boxed_1676_; lean_object* v_res_1677_; 
v_op_boxed_1675_ = lean_unbox_uint32(v_op_1670_);
lean_dec(v_op_1670_);
v_flags_boxed_1676_ = lean_unbox_uint64(v_flags_1671_);
lean_dec_ref(v_flags_1671_);
v_res_1677_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v_context_1669_, v_op_boxed_1675_, v_flags_boxed_1676_, v_payload_1672_, v_failurePrefix_1673_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(lean_object* v_b_1678_, lean_object* v_args_1679_){
_start:
{
uint8_t v_construct_1681_; lean_object* v___x_1682_; uint32_t v___x_1683_; uint64_t v___x_1684_; uint64_t v___y_1686_; 
v_construct_1681_ = lean_ctor_get_uint8(v_b_1678_, sizeof(void*)*4);
v___x_1682_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1678_);
v___x_1683_ = 214;
v___x_1684_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_construct_1681_ == 0)
{
uint64_t v___x_1694_; 
v___x_1694_ = 0ULL;
v___y_1686_ = v___x_1694_;
goto v___jp_1685_;
}
else
{
uint64_t v___x_1695_; 
v___x_1695_ = 4ULL;
v___y_1686_ = v___x_1695_;
goto v___jp_1685_;
}
v___jp_1685_:
{
uint64_t v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1687_ = lean_uint64_lor(v___x_1684_, v___y_1686_);
v___x_1688_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1678_, v_args_1679_);
v___x_1689_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_1690_ = lean_string_append(v___x_1689_, v___x_1682_);
v___x_1691_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2));
v___x_1692_ = lean_string_append(v___x_1690_, v___x_1691_);
v___x_1693_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v___x_1682_, v___x_1683_, v___x_1687_, v___x_1688_, v___x_1692_);
return v___x_1693_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1___boxed(lean_object* v_b_1696_, lean_object* v_args_1697_, lean_object* v_a_1698_){
_start:
{
lean_object* v_res_1699_; 
v_res_1699_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v_b_1696_, v_args_1697_);
lean_dec_ref(v_b_1696_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(lean_object* v_x_1700_){
_start:
{
if (lean_obj_tag(v_x_1700_) == 0)
{
lean_object* v___x_1701_; 
v___x_1701_ = lean_box(0);
return v___x_1701_;
}
else
{
lean_object* v_val_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v_val_1702_ = lean_ctor_get(v_x_1700_, 0);
v___x_1703_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0));
v___x_1704_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_1702_);
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1703_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
v___x_1706_ = lean_unsigned_to_nat(1u);
v___x_1707_ = lean_mk_empty_array_with_capacity(v___x_1706_);
v___x_1708_ = lean_array_push(v___x_1707_, v___x_1705_);
v___x_1709_ = l_Lasm_JS_Web_Support_fields(v___x_1708_);
lean_dec_ref(v___x_1708_);
return v___x_1709_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0___boxed(lean_object* v_x_1710_){
_start:
{
lean_object* v_res_1711_; 
v_res_1711_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_x_1710_);
lean_dec(v_x_1710_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once(lean_object* v_emitter_1719_, lean_object* v_name_1720_, lean_object* v_options_1721_){
_start:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___y_1728_; 
v___x_1723_ = lean_unsigned_to_nat(3u);
v___x_1724_ = ((lean_object*)(l_Lasm_JS_Node_events_once___closed__1));
v___x_1725_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1726_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1726_, 0, v_emitter_1719_);
lean_ctor_set(v___x_1726_, 1, v___x_1725_);
if (lean_obj_tag(v_name_1720_) == 0)
{
lean_object* v_value_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1743_; 
v_value_1736_ = lean_ctor_get(v_name_1720_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v_name_1720_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1738_ = v_name_1720_;
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_value_1736_);
lean_dec(v_name_1720_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1741_; 
if (v_isShared_1739_ == 0)
{
lean_ctor_set_tag(v___x_1738_, 4);
v___x_1741_ = v___x_1738_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_value_1736_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
v___y_1728_ = v___x_1741_;
goto v___jp_1727_;
}
}
}
else
{
lean_object* v_value_1744_; lean_object* v___x_1745_; 
v_value_1744_ = lean_ctor_get(v_name_1720_, 0);
lean_inc(v_value_1744_);
lean_dec_ref_known(v_name_1720_, 1);
v___x_1745_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1745_, 0, v_value_1744_);
lean_ctor_set(v___x_1745_, 1, v___x_1725_);
v___y_1728_ = v___x_1745_;
goto v___jp_1727_;
}
v___jp_1727_:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1729_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_options_1721_);
v___x_1730_ = lean_mk_empty_array_with_capacity(v___x_1723_);
v___x_1731_ = lean_array_push(v___x_1730_, v___x_1726_);
v___x_1732_ = lean_array_push(v___x_1731_, v___y_1728_);
v___x_1733_ = lean_array_push(v___x_1732_, v___x_1729_);
v___x_1734_ = l_Lasm_JS_Web_Support_args(v___x_1733_);
v___x_1735_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v___x_1724_, v___x_1734_);
return v___x_1735_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once___boxed(lean_object* v_emitter_1746_, lean_object* v_name_1747_, lean_object* v_options_1748_, lean_object* v_a_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l_Lasm_JS_Node_events_once(v_emitter_1746_, v_name_1747_, v_options_1748_);
lean_dec(v_options_1748_);
return v_res_1750_;
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
