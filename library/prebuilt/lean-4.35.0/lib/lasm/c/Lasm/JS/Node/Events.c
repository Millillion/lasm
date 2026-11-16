// Lean compiler output
// Module: Lasm.JS.Node.Events
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Web.Streams public import Lasm.JS.Node.AsyncHooks
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
lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSNodeEventTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSNodeEventTarget___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSNodeEventTarget = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTarget___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node.NodeEventTarget"};
static const lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget = (const lean_object*)&l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSEventEmitter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.EventEmitter"};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSEventEmitter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitter___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventsEventEmitterAsyncResource = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lasm.JS.Node.events.EventEmitterAsyncResource"};
static const lean_object* l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "capture"};
static const lean_object* l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSNodeEventTargetRemoveListenerOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___closed__1_value;
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
static const lean_ctor_object l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Node.DOMStringOrSymbol"};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterNewListenerListener = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lasm.JS.Node.EventEmitter.NewListenerListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
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
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterRemoveListenerListener = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.JS.Node.EventEmitter.RemoveListenerListener"};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSNodeEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener = (const lean_object*)&l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventEmitter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventEmitter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget = (const lean_object*)&l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget = (const lean_object*)&l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "highWaterMark"};
static const lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lowWaterMark"};
static const lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventsOnOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnOptions___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Node_instToJSEventsOnOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions___closed__1;
static const lean_closure_object l_Lasm_JS_Node_instToJSEventsOnOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSInt___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsOnOptions___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Node_instToJSEventsOnOptions___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "node:events"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "NodeEventTarget"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__2_value;
static const lean_closure_object l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_NodeEventTarget_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__2_value)} };
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__3 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_addListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "addListener"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_addListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_addListener___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_addListener(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_addListener___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_emit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "emit"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_emit___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_emit___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_emit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_emit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Array (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "an element is not String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eventNames"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__0_value;
static const lean_array_object l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__1 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_eventNames(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_eventNames___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_listenerCount___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "listenerCount"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_listenerCount___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_listenerCount___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_listenerCount(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_listenerCount___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_setMaxListeners___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "setMaxListeners"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_setMaxListeners___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_setMaxListeners___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_setMaxListeners(lean_object*, double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_setMaxListeners___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_getMaxListeners___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "getMaxListeners"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_getMaxListeners___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_getMaxListeners___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_getMaxListeners(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_getMaxListeners___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_off_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_off_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_off___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "off"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_off___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_off___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_off(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_off___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_on___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "on"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_on___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_on___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_on(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_on___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_once___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "once"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_once___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_once___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_once(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_once___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_removeAllListeners___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "removeAllListeners"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_removeAllListeners___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_removeAllListeners___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_removeAllListeners(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_removeAllListeners___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_removeListener_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_removeListener_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_NodeEventTarget_removeListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "removeListener"};
static const lean_object* l_Lasm_JS_Node_NodeEventTarget_removeListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_NodeEventTarget_removeListener___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_removeListener(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_removeListener___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "EventEmitter"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_NodeEventTarget_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "newListener"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_EventEmitter_onNewListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceNewListener(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceNewListener___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_removeListener___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceRemoveListener(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceRemoveListener___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_addListener(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_addListener___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_getMaxListeners(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_getMaxListeners___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Array (Lasm.JS.Web.JSFunction)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "an element is not Lasm.JS.Web.JSFunction"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_listeners___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "listeners"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_listeners___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_listeners___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listeners(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listeners___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_prependListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "prependListener"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_prependListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_prependListener___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_prependListener(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_prependListener___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_prependOnceListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "prependOnceListener"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_prependOnceListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_prependOnceListener___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_prependOnceListener(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_prependOnceListener___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeListener(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeListener___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_setMaxListeners(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_setMaxListeners___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_rawListeners___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "rawListeners"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_rawListeners___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_rawListeners___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_rawListeners(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_rawListeners___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "EventEmitterAsyncResource"};
static const lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_NodeEventTarget_cast_x3f___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "asyncId"};
static const lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncId___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncId___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncId(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncId___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncResource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "asyncResource"};
static const lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncResource___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncResource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncResource(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncResource___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_EventEmitterAsyncResource_triggerAsyncId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "triggerAsyncId"};
static const lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_triggerAsyncId___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_EventEmitterAsyncResource_triggerAsyncId___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_triggerAsyncId(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_triggerAsyncId___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_EventEmitterAsyncResource_emitDestroy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "emitDestroy"};
static const lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_emitDestroy___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_EventEmitterAsyncResource_emitDestroy___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_emitDestroy(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_emitDestroy___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node: empty path in "};
static const lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_defaultMaxListeners___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "defaultMaxListeners"};
static const lean_object* l_Lasm_JS_Node_events_defaultMaxListeners___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_defaultMaxListeners___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_events_defaultMaxListeners___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_defaultMaxListeners___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_events_defaultMaxListeners___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_defaultMaxListeners___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_defaultMaxListeners();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_defaultMaxListeners___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_errorMonitor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "errorMonitor"};
static const lean_object* l_Lasm_JS_Node_events_errorMonitor___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_errorMonitor___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_events_errorMonitor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_errorMonitor___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_events_errorMonitor___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_errorMonitor___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_errorMonitor();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_errorMonitor___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_captureRejections___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "captureRejections"};
static const lean_object* l_Lasm_JS_Node_events_captureRejections___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_captureRejections___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_events_captureRejections___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_captureRejections___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_events_captureRejections___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_captureRejections___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_captureRejections();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_captureRejections___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_captureRejectionSymbol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "captureRejectionSymbol"};
static const lean_object* l_Lasm_JS_Node_events_captureRejectionSymbol___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_captureRejectionSymbol___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_events_captureRejectionSymbol___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_captureRejectionSymbol___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_events_captureRejectionSymbol___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_captureRejectionSymbol___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_captureRejectionSymbol();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_captureRejectionSymbol___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getEventListeners_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getEventListeners_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_getEventListeners___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Node.events.getEventListeners"};
static const lean_object* l_Lasm_JS_Node_events_getEventListeners___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_getEventListeners___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_events_getEventListeners___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "getEventListeners"};
static const lean_object* l_Lasm_JS_Node_events_getEventListeners___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_getEventListeners___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_events_getEventListeners___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_getEventListeners___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_events_getEventListeners___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_events_getEventListeners___closed__2 = (const lean_object*)&l_Lasm_JS_Node_events_getEventListeners___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_getEventListeners(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_getEventListeners___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getMaxListeners_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getMaxListeners_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_getMaxListeners___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Node.events.getMaxListeners"};
static const lean_object* l_Lasm_JS_Node_events_getMaxListeners___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_getMaxListeners___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_events_getMaxListeners___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_getMaxListeners___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_getMaxListeners___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_events_getMaxListeners___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_getMaxListeners___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_getMaxListeners(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_getMaxListeners___boxed(lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_JS_Node_events_once___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_once___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_once___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_events_once___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_once___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_listenerCount_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_listenerCount_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_listenerCount___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Node.events.listenerCount"};
static const lean_object* l_Lasm_JS_Node_events_listenerCount___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_listenerCount___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_events_listenerCount___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_listenerCount___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_listenerCount___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_events_listenerCount___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_listenerCount___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_listenerCount(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_listenerCount___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_on___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Node.events.on"};
static const lean_object* l_Lasm_JS_Node_events_on___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_on___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_events_on___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_on___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_on___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_events_on___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_on___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_on(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_on___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_setMaxListeners___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Node.events.setMaxListeners"};
static const lean_object* l_Lasm_JS_Node_events_setMaxListeners___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_setMaxListeners___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_events_setMaxListeners___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_setMaxListeners___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_setMaxListeners___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_events_setMaxListeners___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_setMaxListeners___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_setMaxListeners(double, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_setMaxListeners___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_events_addAbortListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Node.events.addAbortListener"};
static const lean_object* l_Lasm_JS_Node_events_addAbortListener___closed__0 = (const lean_object*)&l_Lasm_JS_Node_events_addAbortListener___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_events_addAbortListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "addAbortListener"};
static const lean_object* l_Lasm_JS_Node_events_addAbortListener___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_addAbortListener___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_events_addAbortListener___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_addAbortListener___closed__0_value),((lean_object*)&l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0_value),((lean_object*)&l_Lasm_JS_Node_events_addAbortListener___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_events_addAbortListener___closed__2 = (const lean_object*)&l_Lasm_JS_Node_events_addAbortListener___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_addAbortListener(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_addAbortListener___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0(lean_object* v_self_36_){
_start:
{
lean_inc(v_self_36_);
return v_self_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0___boxed(lean_object* v_self_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0(v_self_37_);
lean_dec(v_self_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0(lean_object* v___f_42_, lean_object* v_d_43_){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_44_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0___closed__0));
v___x_45_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_42_, v_d_43_);
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_44_);
lean_ctor_set(v___x_46_, 1, v___x_45_);
v___x_47_ = lean_unsigned_to_nat(1u);
v___x_48_ = lean_mk_empty_array_with_capacity(v___x_47_);
v___x_49_ = lean_array_push(v___x_48_, v___x_46_);
v___x_50_ = l_Lasm_JS_Web_Support_fields(v___x_49_);
lean_dec_ref(v___x_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx(lean_object* v_x_56_){
_start:
{
if (lean_obj_tag(v_x_56_) == 0)
{
lean_object* v___x_57_; 
v___x_57_ = lean_unsigned_to_nat(0u);
return v___x_57_;
}
else
{
lean_object* v___x_58_; 
v___x_58_ = lean_unsigned_to_nat(1u);
return v___x_58_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx___boxed(lean_object* v_x_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx(v_x_59_);
lean_dec_ref(v_x_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(lean_object* v_t_61_, lean_object* v_k_62_){
_start:
{
if (lean_obj_tag(v_t_61_) == 0)
{
lean_object* v_value_63_; lean_object* v___x_64_; 
v_value_63_ = lean_ctor_get(v_t_61_, 0);
lean_inc_ref(v_value_63_);
lean_dec_ref_known(v_t_61_, 1);
v___x_64_ = lean_apply_1(v_k_62_, v_value_63_);
return v___x_64_;
}
else
{
lean_object* v_value_65_; lean_object* v___x_66_; 
v_value_65_ = lean_ctor_get(v_t_61_, 0);
lean_inc(v_value_65_);
lean_dec_ref_known(v_t_61_, 1);
v___x_66_ = lean_apply_1(v_k_62_, v_value_65_);
return v___x_66_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(lean_object* v_motive_67_, lean_object* v_ctorIdx_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_k_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_69_, v_k_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___boxed(lean_object* v_motive_73_, lean_object* v_ctorIdx_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_k_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(v_motive_73_, v_ctorIdx_74_, v_t_75_, v_h_76_, v_k_77_);
lean_dec(v_ctorIdx_74_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim___redArg(lean_object* v_t_79_, lean_object* v_domString_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_79_, v_domString_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim(lean_object* v_motive_82_, lean_object* v_t_83_, lean_object* v_h_84_, lean_object* v_domString_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_83_, v_domString_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim___redArg(lean_object* v_t_87_, lean_object* v_symbol_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_87_, v_symbol_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim(lean_object* v_motive_90_, lean_object* v_t_91_, lean_object* v_h_92_, lean_object* v_symbol_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_91_, v_symbol_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSymbol___lam__0(lean_object* v_x_95_){
_start:
{
if (lean_obj_tag(v_x_95_) == 0)
{
lean_object* v_value_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
v_value_96_ = lean_ctor_get(v_x_95_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v_x_95_);
if (v_isSharedCheck_103_ == 0)
{
v___x_98_ = v_x_95_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_value_96_);
lean_dec(v_x_95_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
lean_ctor_set_tag(v___x_98_, 4);
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_value_96_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
else
{
lean_object* v_value_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v_value_104_ = lean_ctor_get(v_x_95_, 0);
lean_inc(v_value_104_);
lean_dec_ref_known(v_x_95_, 1);
v___x_105_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_106_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_106_, 0, v_value_104_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
return v___x_106_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___lam__0(lean_object* v_value_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_110_, 0, v_value_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0(lean_object* v_x_115_){
_start:
{
switch(lean_obj_tag(v_x_115_))
{
case 4:
{
lean_object* v_s_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_124_; 
v_s_116_ = lean_ctor_get(v_x_115_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v_x_115_);
if (v_isSharedCheck_124_ == 0)
{
v___x_118_ = v_x_115_;
v_isShared_119_ = v_isSharedCheck_124_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_s_116_);
lean_dec(v_x_115_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_124_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_121_; 
if (v_isShared_119_ == 0)
{
lean_ctor_set_tag(v___x_118_, 0);
v___x_121_ = v___x_118_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_s_116_);
v___x_121_ = v_reuseFailAlloc_123_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
lean_object* v___x_122_; 
v___x_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
return v___x_122_;
}
}
}
case 9:
{
lean_object* v_value_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v_value_125_ = lean_ctor_get(v_x_115_, 0);
lean_inc(v_value_125_);
lean_dec_ref_known(v_x_115_, 2);
v___x_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_126_, 0, v_value_125_);
v___x_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
return v___x_127_;
}
default: 
{
lean_object* v___x_128_; 
lean_dec(v_x_115_);
v___x_128_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0___closed__0));
return v___x_128_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0(lean_object* v_x_147_){
_start:
{
if (lean_obj_tag(v_x_147_) == 0)
{
lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_157_; 
v_a_149_ = lean_ctor_get(v_x_147_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v_x_147_);
if (v_isSharedCheck_157_ == 0)
{
v___x_151_ = v_x_147_;
v_isShared_152_ = v_isSharedCheck_157_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v_x_147_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_157_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_154_; 
if (v_isShared_152_ == 0)
{
v___x_154_ = v___x_151_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_a_149_);
v___x_154_ = v_reuseFailAlloc_156_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
lean_object* v___x_155_; 
v___x_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
return v___x_155_;
}
}
}
else
{
lean_object* v___x_158_; 
lean_dec_ref_known(v_x_147_, 1);
v___x_158_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___closed__1));
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___boxed(lean_object* v_x_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0(v_x_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1(lean_object* v_f_162_, lean_object* v_a_163_, lean_object* v___f_164_, lean_object* v_x_165_){
_start:
{
if (lean_obj_tag(v_x_165_) == 0)
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_175_; 
lean_dec_ref(v___f_164_);
lean_dec_ref(v_a_163_);
lean_dec_ref(v_f_162_);
v_a_167_ = lean_ctor_get(v_x_165_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v_x_165_);
if (v_isSharedCheck_175_ == 0)
{
v___x_169_ = v_x_165_;
v_isShared_170_ = v_isSharedCheck_175_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v_x_165_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_175_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_a_167_);
v___x_172_ = v_reuseFailAlloc_174_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
lean_object* v___x_173_; 
v___x_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
}
}
else
{
lean_object* v_a_176_; lean_object* v___x_177_; uint8_t v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v_a_176_ = lean_ctor_get(v_x_165_, 0);
lean_inc(v_a_176_);
lean_dec_ref_known(v_x_165_, 1);
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = 0;
v___x_179_ = lean_apply_3(v_f_162_, v_a_163_, v_a_176_, lean_box(0));
v___x_180_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_177_, v___x_178_, v___x_179_, v___f_164_);
return v___x_180_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1___boxed(lean_object* v_f_181_, lean_object* v_a_182_, lean_object* v___f_183_, lean_object* v_x_184_, lean_object* v___y_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1(v_f_181_, v_a_182_, v___f_183_, v_x_184_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(lean_object* v_args_188_, lean_object* v_i_189_){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_191_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___closed__0));
v___x_192_ = lean_unsigned_to_nat(1u);
v___x_193_ = lean_nat_add(v_i_189_, v___x_192_);
v___x_194_ = l_Nat_reprFast(v___x_193_);
v___x_195_ = lean_string_append(v___x_191_, v___x_194_);
lean_dec_ref(v___x_194_);
v___x_196_ = lean_array_get_size(v_args_188_);
v___x_197_ = lean_nat_dec_lt(v_i_189_, v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_box(0);
v___x_199_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v___x_195_, v___x_198_);
lean_dec_ref(v___x_195_);
return v___x_199_;
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_array_fget_borrowed(v_args_188_, v_i_189_);
lean_inc(v___x_200_);
v___x_201_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v___x_195_, v___x_200_);
lean_dec_ref(v___x_195_);
return v___x_201_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___boxed(lean_object* v_args_202_, lean_object* v_i_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(v_args_202_, v_i_203_);
lean_dec(v_i_203_);
lean_dec_ref(v_args_202_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2(lean_object* v_f_206_, lean_object* v___f_207_, lean_object* v_args_208_, lean_object* v_x_209_){
_start:
{
if (lean_obj_tag(v_x_209_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_219_; 
lean_dec_ref(v___f_207_);
lean_dec_ref(v_f_206_);
v_a_211_ = lean_ctor_get(v_x_209_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v_x_209_);
if (v_isSharedCheck_219_ == 0)
{
v___x_213_ = v_x_209_;
v_isShared_214_ = v_isSharedCheck_219_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v_x_209_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_219_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_a_211_);
v___x_216_ = v_reuseFailAlloc_218_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
lean_object* v___x_217_; 
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
}
}
else
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_241_; 
v_a_220_ = lean_ctor_get(v_x_209_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v_x_209_);
if (v_isSharedCheck_241_ == 0)
{
v___x_222_ = v_x_209_;
v_isShared_223_ = v_isSharedCheck_241_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v_x_209_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_241_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___f_224_; lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; lean_object* v_val_229_; lean_object* v___x_232_; 
v___f_224_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_224_, 0, v_f_206_);
lean_closure_set(v___f_224_, 1, v_a_220_);
lean_closure_set(v___f_224_, 2, v___f_207_);
v___x_225_ = lean_unsigned_to_nat(1u);
v___x_226_ = lean_unsigned_to_nat(0u);
v___x_227_ = 0;
v___x_232_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(v_args_208_, v___x_225_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_235_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_233_);
lean_dec_ref_known(v___x_232_, 1);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v_a_233_);
v___x_235_ = v___x_222_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
v_val_229_ = v___x_235_;
goto v___jp_228_;
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; 
v_a_237_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_237_);
lean_dec_ref_known(v___x_232_, 1);
if (v_isShared_223_ == 0)
{
lean_ctor_set_tag(v___x_222_, 0);
lean_ctor_set(v___x_222_, 0, v_a_237_);
v___x_239_ = v___x_222_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_237_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
v_val_229_ = v___x_239_;
goto v___jp_228_;
}
}
v___jp_228_:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_230_, 0, v_val_229_);
v___x_231_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_226_, v___x_227_, v___x_230_, v___f_224_);
return v___x_231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2___boxed(lean_object* v_f_242_, lean_object* v___f_243_, lean_object* v_args_244_, lean_object* v_x_245_, lean_object* v___y_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2(v_f_242_, v___f_243_, v_args_244_, v_x_245_);
lean_dec_ref(v_args_244_);
return v_res_247_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_252_ = lean_string_utf8_byte_size(v___x_251_);
return v___x_252_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__4(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__3);
v___x_255_ = lean_nat_dec_eq(v___x_254_, v___x_253_);
return v___x_255_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_260_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__8));
v___x_261_ = lean_unsigned_to_nat(46u);
v___x_262_ = lean_unsigned_to_nat(193u);
v___x_263_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__7));
v___x_264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__6));
v___x_265_ = l_mkPanicMessageWithDecl(v___x_264_, v___x_263_, v___x_262_, v___x_261_, v___x_260_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1(lean_object* v_context_267_, lean_object* v_d_268_){
_start:
{
lean_object* v___y_271_; lean_object* v___y_272_; 
switch(lean_obj_tag(v_d_268_))
{
case 4:
{
lean_object* v_s_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_284_; 
v_s_276_ = lean_ctor_get(v_d_268_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v_d_268_);
if (v_isSharedCheck_284_ == 0)
{
v___x_278_ = v_d_268_;
v_isShared_279_ = v_isSharedCheck_284_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_s_276_);
lean_dec(v_d_268_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_284_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
lean_ctor_set_tag(v___x_278_, 0);
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_s_276_);
v___x_281_ = v_reuseFailAlloc_283_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_object* v___x_282_; 
v___x_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
return v___x_282_;
}
}
}
case 9:
{
lean_object* v_value_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v_value_285_ = lean_ctor_get(v_d_268_, 0);
lean_inc(v_value_285_);
lean_dec_ref_known(v_d_268_, 2);
v___x_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_286_, 0, v_value_285_);
v___x_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
return v___x_287_;
}
default: 
{
lean_object* v___x_288_; lean_object* v_received_290_; 
v___x_288_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_268_) == 9)
{
lean_object* v_value_304_; lean_object* v_description_305_; uint8_t v___x_306_; 
v_value_304_ = lean_ctor_get(v_d_268_, 0);
v_description_305_ = lean_ctor_get(v_d_268_, 1);
v___x_306_ = lean_string_dec_eq(v_description_305_, v___x_288_);
if (v___x_306_ == 0)
{
goto v___jp_302_;
}
else
{
uint32_t v___x_307_; uint64_t v___x_308_; lean_object* v___x_309_; uint32_t v___x_310_; lean_object* v___x_311_; 
lean_inc_n(v_value_304_, 2);
lean_dec_ref_known(v_d_268_, 2);
v___x_307_ = 206;
v___x_308_ = 0ULL;
v___x_309_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_309_, 0, v_value_304_);
lean_ctor_set(v___x_309_, 1, v___x_288_);
v___x_310_ = lasm_js_value_handle(v_value_304_);
lean_dec(v_value_304_);
v___x_311_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_307_, v___x_308_, v___x_309_, v___x_310_);
lean_dec_ref_known(v___x_309_, 2);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; uint8_t v___x_313_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_311_, 1);
v___x_313_ = lean_string_validate_utf8(v_a_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec(v_a_312_);
v___x_314_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9);
v___x_315_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_314_);
v_received_290_ = v___x_315_;
goto v___jp_289_;
}
else
{
lean_object* v___x_316_; 
v___x_316_ = lean_string_from_utf8_unchecked(v_a_312_);
v_received_290_ = v___x_316_;
goto v___jp_289_;
}
}
else
{
lean_object* v___x_317_; 
lean_dec_ref_known(v___x_311_, 1);
v___x_317_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10));
v_received_290_ = v___x_317_;
goto v___jp_289_;
}
}
}
else
{
goto v___jp_302_;
}
v___jp_289_:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_291_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_292_ = lean_string_append(v___x_291_, v_context_267_);
v___x_293_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1));
v___x_294_ = lean_string_append(v___x_292_, v___x_293_);
v___x_295_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___closed__1));
v___x_296_ = lean_string_append(v___x_294_, v___x_295_);
v___x_297_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2));
v___x_298_ = lean_string_append(v___x_296_, v___x_297_);
v___x_299_ = lean_string_append(v___x_298_, v_received_290_);
lean_dec_ref(v_received_290_);
v___x_300_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__4);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; 
v___x_301_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__5));
v___y_271_ = v___x_299_;
v___y_272_ = v___x_301_;
goto v___jp_270_;
}
else
{
v___y_271_ = v___x_299_;
v___y_272_ = v___x_288_;
goto v___jp_270_;
}
}
v___jp_302_:
{
lean_object* v___x_303_; 
v___x_303_ = l_Lasm_JS_Data_describe(v_d_268_);
v_received_290_ = v___x_303_;
goto v___jp_289_;
}
}
}
v___jp_270_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_273_ = lean_string_append(v___y_271_, v___y_272_);
v___x_274_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
v___x_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___boxed(lean_object* v_context_318_, lean_object* v_d_319_, lean_object* v_a_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1(v_context_318_, v_d_319_);
lean_dec_ref(v_context_318_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(lean_object* v_args_322_, lean_object* v_i_323_){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_325_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___closed__0));
v___x_326_ = lean_unsigned_to_nat(1u);
v___x_327_ = lean_nat_add(v_i_323_, v___x_326_);
v___x_328_ = l_Nat_reprFast(v___x_327_);
v___x_329_ = lean_string_append(v___x_325_, v___x_328_);
lean_dec_ref(v___x_328_);
v___x_330_ = lean_array_get_size(v_args_322_);
v___x_331_ = lean_nat_dec_lt(v_i_323_, v___x_330_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_box(0);
v___x_333_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1(v___x_329_, v___x_332_);
lean_dec_ref(v___x_329_);
return v___x_333_;
}
else
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = lean_array_fget_borrowed(v_args_322_, v_i_323_);
lean_inc(v___x_334_);
v___x_335_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1(v___x_329_, v___x_334_);
lean_dec_ref(v___x_329_);
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1___boxed(lean_object* v_args_336_, lean_object* v_i_337_, lean_object* v_a_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(v_args_336_, v_i_337_);
lean_dec(v_i_337_);
lean_dec_ref(v_args_336_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3(lean_object* v_f_340_, lean_object* v___f_341_, lean_object* v_args_342_){
_start:
{
lean_object* v___f_344_; lean_object* v___x_345_; uint8_t v___x_346_; lean_object* v_val_348_; lean_object* v___x_351_; 
lean_inc_ref(v_args_342_);
v___f_344_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_344_, 0, v_f_340_);
lean_closure_set(v___f_344_, 1, v___f_341_);
lean_closure_set(v___f_344_, 2, v_args_342_);
v___x_345_ = lean_unsigned_to_nat(0u);
v___x_346_ = 0;
v___x_351_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(v_args_342_, v___x_345_);
lean_dec_ref(v_args_342_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
v_a_352_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_351_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
lean_ctor_set_tag(v___x_354_, 1);
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
v_val_348_ = v___x_357_;
goto v___jp_347_;
}
}
}
else
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
v_a_360_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_351_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_351_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
lean_ctor_set_tag(v___x_362_, 0);
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_360_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
v_val_348_ = v___x_365_;
goto v___jp_347_;
}
}
}
v___jp_347_:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v_val_348_);
v___x_350_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_345_, v___x_346_, v___x_349_, v___f_344_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed(lean_object* v_f_368_, lean_object* v___f_369_, lean_object* v_args_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3(v_f_368_, v___f_369_, v_args_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn(lean_object* v_f_374_){
_start:
{
lean_object* v___f_376_; lean_object* v___f_377_; lean_object* v___x_378_; 
v___f_376_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___closed__0));
v___f_377_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_377_, 0, v_f_374_);
lean_closure_set(v___f_377_, 1, v___f_376_);
v___x_378_ = l_Lasm_JS_Function_ofFn(v___f_377_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_386_; 
v_a_379_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_386_ == 0)
{
v___x_381_ = v___x_378_;
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_378_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_384_; 
if (v_isShared_382_ == 0)
{
v___x_384_ = v___x_381_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v_a_379_);
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
lean_object* v_a_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_394_; 
v_a_387_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_394_ == 0)
{
v___x_389_ = v___x_378_;
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_a_387_);
lean_dec(v___x_378_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_392_; 
if (v_isShared_390_ == 0)
{
v___x_392_ = v___x_389_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_a_387_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___boxed(lean_object* v_f_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn(v_f_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0(lean_object* v_f_398_, lean_object* v_args_399_){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_unsigned_to_nat(0u);
v___x_402_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(v_args_399_, v___x_401_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref_known(v___x_402_, 1);
v___x_404_ = lean_unsigned_to_nat(1u);
v___x_405_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(v_args_399_, v___x_404_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; lean_object* v___x_407_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_406_);
lean_dec_ref_known(v___x_405_, 1);
v___x_407_ = lean_apply_3(v_f_398_, v_a_403_, v_a_406_, lean_box(0));
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_415_; 
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_415_ == 0)
{
lean_object* v_unused_416_; 
v_unused_416_ = lean_ctor_get(v___x_407_, 0);
lean_dec(v_unused_416_);
v___x_409_ = v___x_407_;
v_isShared_410_ = v_isSharedCheck_415_;
goto v_resetjp_408_;
}
else
{
lean_dec(v___x_407_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_415_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; lean_object* v___x_413_; 
v___x_411_ = lean_box(0);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_411_);
v___x_413_ = v___x_409_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v___x_411_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_417_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_407_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_407_);
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
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
lean_dec(v_a_403_);
lean_dec_ref(v_f_398_);
v_a_425_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v___x_405_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_405_);
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
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
lean_dec_ref(v_f_398_);
v_a_433_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_402_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_402_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed(lean_object* v_f_441_, lean_object* v_args_442_, lean_object* v___y_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0(v_f_441_, v_args_442_);
lean_dec_ref(v_args_442_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn(lean_object* v_f_445_){
_start:
{
lean_object* v___f_447_; lean_object* v___x_448_; 
v___f_447_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed), 3, 1);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___boxed(lean_object* v_f_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn(v_f_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn(lean_object* v_f_475_){
_start:
{
lean_object* v___f_477_; lean_object* v___f_478_; lean_object* v___x_479_; 
v___f_477_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___closed__0));
v___f_478_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_478_, 0, v_f_475_);
lean_closure_set(v___f_478_, 1, v___f_477_);
v___x_479_ = l_Lasm_JS_Function_ofFn(v___f_478_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_487_; 
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_487_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_480_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
else
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
v_a_488_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_495_ == 0)
{
v___x_490_ = v___x_479_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_479_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn___boxed(lean_object* v_f_496_, lean_object* v_a_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn(v_f_496_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn(lean_object* v_f_499_){
_start:
{
lean_object* v___f_501_; lean_object* v___x_502_; 
v___f_501_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_501_, 0, v_f_499_);
v___x_502_ = l_Lasm_JS_Function_ofSyncFn(v___f_501_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v___x_502_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
v_a_511_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_502_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_502_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn___boxed(lean_object* v_f_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn(v_f_519_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorIdx(lean_object* v_x_522_){
_start:
{
if (lean_obj_tag(v_x_522_) == 0)
{
lean_object* v___x_523_; 
v___x_523_ = lean_unsigned_to_nat(0u);
return v___x_523_;
}
else
{
lean_object* v___x_524_; 
v___x_524_ = lean_unsigned_to_nat(1u);
return v___x_524_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorIdx___boxed(lean_object* v_x_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorIdx(v_x_525_);
lean_dec_ref(v_x_525_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(lean_object* v_t_527_, lean_object* v_k_528_){
_start:
{
lean_object* v_value_529_; lean_object* v___x_530_; 
v_value_529_ = lean_ctor_get(v_t_527_, 0);
lean_inc(v_value_529_);
lean_dec_ref(v_t_527_);
v___x_530_ = lean_apply_1(v_k_528_, v_value_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim(lean_object* v_motive_531_, lean_object* v_ctorIdx_532_, lean_object* v_t_533_, lean_object* v_h_534_, lean_object* v_k_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(v_t_533_, v_k_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___boxed(lean_object* v_motive_537_, lean_object* v_ctorIdx_538_, lean_object* v_t_539_, lean_object* v_h_540_, lean_object* v_k_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim(v_motive_537_, v_ctorIdx_538_, v_t_539_, v_h_540_, v_k_541_);
lean_dec(v_ctorIdx_538_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventEmitter_elim___redArg(lean_object* v_t_543_, lean_object* v_eventEmitter_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(v_t_543_, v_eventEmitter_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventEmitter_elim(lean_object* v_motive_546_, lean_object* v_t_547_, lean_object* v_h_548_, lean_object* v_eventEmitter_549_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(v_t_547_, v_eventEmitter_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventTarget_elim___redArg(lean_object* v_t_551_, lean_object* v_eventTarget_552_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(v_t_551_, v_eventTarget_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventTarget_elim(lean_object* v_motive_554_, lean_object* v_t_555_, lean_object* v_h_556_, lean_object* v_eventTarget_557_){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(v_t_555_, v_eventTarget_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0(lean_object* v_x_559_){
_start:
{
lean_object* v_value_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v_value_560_ = lean_ctor_get(v_x_559_, 0);
v___x_561_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
lean_inc(v_value_560_);
v___x_562_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_562_, 0, v_value_560_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0___boxed(lean_object* v_x_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0(v_x_563_);
lean_dec_ref(v_x_563_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget___lam__0(lean_object* v_value_567_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_568_, 0, v_value_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget___lam__0(lean_object* v_value_571_){
_start:
{
lean_object* v___x_572_; 
v___x_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_572_, 0, v_value_571_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0(lean_object* v___f_576_, lean_object* v_d_577_){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_578_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0));
v___x_579_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_576_, v_d_577_);
v___x_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_578_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
v___x_581_ = lean_unsigned_to_nat(1u);
v___x_582_ = lean_mk_empty_array_with_capacity(v___x_581_);
v___x_583_ = lean_array_push(v___x_582_, v___x_580_);
v___x_584_ = l_Lasm_JS_Web_Support_fields(v___x_583_);
lean_dec_ref(v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0(lean_object* v___f_592_, lean_object* v___x_593_, lean_object* v___f_594_, lean_object* v_d_595_){
_start:
{
lean_object* v_signal_596_; lean_object* v_close_597_; lean_object* v_highWaterMark_598_; lean_object* v_lowWaterMark_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v_signal_596_ = lean_ctor_get(v_d_595_, 0);
lean_inc(v_signal_596_);
v_close_597_ = lean_ctor_get(v_d_595_, 1);
lean_inc(v_close_597_);
v_highWaterMark_598_ = lean_ctor_get(v_d_595_, 2);
lean_inc(v_highWaterMark_598_);
v_lowWaterMark_599_ = lean_ctor_get(v_d_595_, 3);
lean_inc(v_lowWaterMark_599_);
lean_dec_ref(v_d_595_);
v___x_600_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0));
v___x_601_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_592_, v_signal_596_);
v___x_602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_602_, 0, v___x_600_);
lean_ctor_set(v___x_602_, 1, v___x_601_);
v___x_603_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__0));
v___x_604_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_593_, v_close_597_);
v___x_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_603_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
v___x_606_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__1));
lean_inc_ref(v___f_594_);
v___x_607_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_594_, v_highWaterMark_598_);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_606_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v___x_609_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__2));
v___x_610_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_594_, v_lowWaterMark_599_);
v___x_611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_609_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = lean_unsigned_to_nat(4u);
v___x_613_ = lean_mk_empty_array_with_capacity(v___x_612_);
v___x_614_ = lean_array_push(v___x_613_, v___x_602_);
v___x_615_ = lean_array_push(v___x_614_, v___x_605_);
v___x_616_ = lean_array_push(v___x_615_, v___x_608_);
v___x_617_ = lean_array_push(v___x_616_, v___x_611_);
v___x_618_ = l_Lasm_JS_Web_Support_fields(v___x_617_);
lean_dec_ref(v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSEventsOnOptions___closed__1(void){
_start:
{
lean_object* v___f_620_; lean_object* v___x_621_; 
v___f_620_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnOptions___closed__0));
v___x_621_ = l_Lasm_JS_instToJSArray___redArg(v___f_620_);
return v___x_621_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSEventsOnOptions___closed__3(void){
_start:
{
lean_object* v___f_623_; lean_object* v___x_624_; lean_object* v___f_625_; lean_object* v___f_626_; 
v___f_623_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnOptions___closed__2));
v___x_624_ = lean_obj_once(&l_Lasm_JS_Node_instToJSEventsOnOptions___closed__1, &l_Lasm_JS_Node_instToJSEventsOnOptions___closed__1_once, _init_l_Lasm_JS_Node_instToJSEventsOnOptions___closed__1);
v___f_625_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnceOptions___closed__0));
v___f_626_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0), 4, 3);
lean_closure_set(v___f_626_, 0, v___f_625_);
lean_closure_set(v___f_626_, 1, v___x_624_);
lean_closure_set(v___f_626_, 2, v___f_623_);
return v___f_626_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSEventsOnOptions(void){
_start:
{
lean_object* v___f_627_; 
v___f_627_ = lean_obj_once(&l_Lasm_JS_Node_instToJSEventsOnOptions___closed__3, &l_Lasm_JS_Node_instToJSEventsOnOptions___closed__3_once, _init_l_Lasm_JS_Node_instToJSEventsOnOptions___closed__3);
return v___f_627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f___lam__0(lean_object* v___x_628_, lean_object* v___x_629_){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0(v___x_628_, v___x_629_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f___lam__0___boxed(lean_object* v___x_632_, lean_object* v___x_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_Lasm_JS_Node_NodeEventTarget_cast_x3f___lam__0(v___x_632_, v___x_633_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f(lean_object* v_v_644_){
_start:
{
lean_object* v___f_646_; lean_object* v___x_647_; 
v___f_646_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__3));
lean_inc(v_v_644_);
v___x_647_ = l_Lasm_JS_Web_Support_isInstance(v___f_646_, v_v_644_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_661_; 
v_a_648_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_661_ == 0)
{
v___x_650_ = v___x_647_;
v_isShared_651_ = v_isSharedCheck_661_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_647_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_661_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
uint8_t v___x_652_; 
v___x_652_ = lean_unbox(v_a_648_);
lean_dec(v_a_648_);
if (v___x_652_ == 0)
{
lean_object* v___x_653_; lean_object* v___x_655_; 
lean_dec(v_v_644_);
v___x_653_ = lean_box(0);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v___x_653_);
v___x_655_ = v___x_650_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_653_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
else
{
lean_object* v___x_657_; lean_object* v___x_659_; 
v___x_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_657_, 0, v_v_644_);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v___x_657_);
v___x_659_ = v___x_650_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_657_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_dec(v_v_644_);
v_a_662_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_647_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_647_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
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
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_cast_x3f___boxed(lean_object* v_v_670_, lean_object* v_a_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lasm_JS_Node_NodeEventTarget_cast_x3f(v_v_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_addListener(lean_object* v_self_674_, lean_object* v_type_675_, lean_object* v_listener_676_){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_678_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_addListener___closed__0));
v___x_679_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_679_, 0, v_type_675_);
v___x_680_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_681_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_681_, 0, v_listener_676_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = lean_unsigned_to_nat(2u);
v___x_683_ = lean_mk_empty_array_with_capacity(v___x_682_);
v___x_684_ = lean_array_push(v___x_683_, v___x_679_);
v___x_685_ = lean_array_push(v___x_684_, v___x_681_);
v___x_686_ = l_Lasm_JS_Web_Support_args(v___x_685_);
v___x_687_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_674_, v___x_678_, v___x_686_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_687_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_687_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
v_a_696_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_687_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_687_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_addListener___boxed(lean_object* v_self_704_, lean_object* v_type_705_, lean_object* v_listener_706_, lean_object* v_a_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Lasm_JS_Node_NodeEventTarget_addListener(v_self_704_, v_type_705_, v_listener_706_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_emit(lean_object* v_self_710_, lean_object* v_type_711_, lean_object* v_arg_712_){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_714_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_emit___closed__0));
v___x_715_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_715_, 0, v_type_711_);
v___x_716_ = lean_unsigned_to_nat(2u);
v___x_717_ = lean_mk_empty_array_with_capacity(v___x_716_);
v___x_718_ = lean_array_push(v___x_717_, v___x_715_);
v___x_719_ = lean_array_push(v___x_718_, v_arg_712_);
v___x_720_ = l_Lasm_JS_Web_Support_args(v___x_719_);
v___x_721_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_710_, v___x_714_, v___x_720_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_emit___boxed(lean_object* v_self_722_, lean_object* v_type_723_, lean_object* v_arg_724_, lean_object* v_a_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lasm_JS_Node_NodeEventTarget_emit(v_self_722_, v_type_723_, v_arg_724_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2_spec__3(size_t v_sz_729_, size_t v_i_730_, lean_object* v_bs_731_){
_start:
{
uint8_t v___x_732_; 
v___x_732_ = lean_usize_dec_lt(v_i_730_, v_sz_729_);
if (v___x_732_ == 0)
{
lean_object* v___x_733_; 
v___x_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_733_, 0, v_bs_731_);
return v___x_733_;
}
else
{
lean_object* v_v_734_; 
v_v_734_ = lean_array_uget_borrowed(v_bs_731_, v_i_730_);
if (lean_obj_tag(v_v_734_) == 4)
{
lean_object* v_s_735_; lean_object* v___x_736_; lean_object* v_bs_x27_737_; size_t v___x_738_; size_t v___x_739_; lean_object* v___x_740_; 
v_s_735_ = lean_ctor_get(v_v_734_, 0);
lean_inc_ref(v_s_735_);
v___x_736_ = lean_unsigned_to_nat(0u);
v_bs_x27_737_ = lean_array_uset(v_bs_731_, v_i_730_, v___x_736_);
v___x_738_ = ((size_t)1ULL);
v___x_739_ = lean_usize_add(v_i_730_, v___x_738_);
v___x_740_ = lean_array_uset(v_bs_x27_737_, v_i_730_, v_s_735_);
v_i_730_ = v___x_739_;
v_bs_731_ = v___x_740_;
goto _start;
}
else
{
lean_object* v___x_742_; 
lean_dec_ref(v_bs_731_);
v___x_742_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_742_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_743_, lean_object* v_i_744_, lean_object* v_bs_745_){
_start:
{
size_t v_sz_boxed_746_; size_t v_i_boxed_747_; lean_object* v_res_748_; 
v_sz_boxed_746_ = lean_unbox_usize(v_sz_743_);
lean_dec(v_sz_743_);
v_i_boxed_747_ = lean_unbox_usize(v_i_744_);
lean_dec(v_i_744_);
v_res_748_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_746_, v_i_boxed_747_, v_bs_745_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2(lean_object* v_context_754_, lean_object* v_d_755_){
_start:
{
lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_764_; lean_object* v_received_765_; lean_object* v___y_784_; lean_object* v_a_787_; 
if (lean_obj_tag(v_d_755_) == 7)
{
lean_object* v_items_811_; size_t v_sz_812_; size_t v___x_813_; lean_object* v___x_814_; 
v_items_811_ = lean_ctor_get(v_d_755_, 0);
v_sz_812_ = lean_array_size(v_items_811_);
v___x_813_ = ((size_t)0ULL);
lean_inc_ref(v_items_811_);
v___x_814_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2_spec__3(v_sz_812_, v___x_813_, v_items_811_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; uint8_t v___x_819_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
lean_dec_ref_known(v___x_814_, 1);
v___x_816_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__3));
v___x_817_ = lean_string_utf8_byte_size(v_a_815_);
v___x_818_ = lean_unsigned_to_nat(0u);
v___x_819_ = lean_nat_dec_eq(v___x_817_, v___x_818_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_820_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__4));
v___x_821_ = lean_string_append(v___x_820_, v_a_815_);
lean_dec(v_a_815_);
v___x_822_ = lean_string_append(v___x_816_, v___x_821_);
lean_dec_ref(v___x_821_);
v_a_787_ = v___x_822_;
goto v___jp_786_;
}
else
{
lean_dec(v_a_815_);
v_a_787_ = v___x_816_;
goto v___jp_786_;
}
}
else
{
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_823_; 
v_a_823_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v___x_814_, 1);
v_a_787_ = v_a_823_;
goto v___jp_786_;
}
else
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
lean_dec_ref_known(v_d_755_, 1);
v_a_824_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_814_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_814_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
lean_ctor_set_tag(v___x_826_, 0);
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
}
else
{
lean_object* v___x_832_; 
v___x_832_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v_a_787_ = v___x_832_;
goto v___jp_786_;
}
v___jp_757_:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_760_ = lean_string_append(v___y_758_, v___y_759_);
lean_dec_ref(v___y_759_);
v___x_761_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
v___x_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
return v___x_762_;
}
v___jp_763_:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_766_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_767_ = lean_string_append(v___x_766_, v_context_754_);
v___x_768_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1));
v___x_769_ = lean_string_append(v___x_767_, v___x_768_);
v___x_770_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__0));
v___x_771_ = lean_string_append(v___x_769_, v___x_770_);
v___x_772_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2));
v___x_773_ = lean_string_append(v___x_771_, v___x_772_);
v___x_774_ = lean_string_append(v___x_773_, v_received_765_);
lean_dec_ref(v_received_765_);
v___x_775_ = lean_string_utf8_byte_size(v___y_764_);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = lean_nat_dec_eq(v___x_775_, v___x_776_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_778_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__1));
v___x_779_ = lean_string_append(v___x_778_, v___y_764_);
lean_dec_ref(v___y_764_);
v___x_780_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__2));
v___x_781_ = lean_string_append(v___x_779_, v___x_780_);
v___y_758_ = v___x_774_;
v___y_759_ = v___x_781_;
goto v___jp_757_;
}
else
{
lean_object* v___x_782_; 
lean_dec_ref(v___y_764_);
v___x_782_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___y_758_ = v___x_774_;
v___y_759_ = v___x_782_;
goto v___jp_757_;
}
}
v___jp_783_:
{
lean_object* v___x_785_; 
v___x_785_ = l_Lasm_JS_Data_describe(v_d_755_);
v___y_764_ = v___y_784_;
v_received_765_ = v___x_785_;
goto v___jp_763_;
}
v___jp_786_:
{
if (lean_obj_tag(v_d_755_) == 9)
{
lean_object* v_value_788_; lean_object* v_description_789_; lean_object* v___x_790_; uint8_t v___x_791_; 
v_value_788_ = lean_ctor_get(v_d_755_, 0);
v_description_789_ = lean_ctor_get(v_d_755_, 1);
v___x_790_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_791_ = lean_string_dec_eq(v_description_789_, v___x_790_);
if (v___x_791_ == 0)
{
v___y_784_ = v_a_787_;
goto v___jp_783_;
}
else
{
lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_808_; 
lean_inc(v_value_788_);
v_isSharedCheck_808_ = !lean_is_exclusive(v_d_755_);
if (v_isSharedCheck_808_ == 0)
{
lean_object* v_unused_809_; lean_object* v_unused_810_; 
v_unused_809_ = lean_ctor_get(v_d_755_, 1);
lean_dec(v_unused_809_);
v_unused_810_ = lean_ctor_get(v_d_755_, 0);
lean_dec(v_unused_810_);
v___x_793_ = v_d_755_;
v_isShared_794_ = v_isSharedCheck_808_;
goto v_resetjp_792_;
}
else
{
lean_dec(v_d_755_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_808_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
uint32_t v___x_795_; uint64_t v___x_796_; lean_object* v___x_798_; 
v___x_795_ = 206;
v___x_796_ = 0ULL;
lean_inc(v_value_788_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 1, v___x_790_);
v___x_798_ = v___x_793_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_value_788_);
lean_ctor_set(v_reuseFailAlloc_807_, 1, v___x_790_);
v___x_798_ = v_reuseFailAlloc_807_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
uint32_t v___x_799_; lean_object* v___x_800_; 
v___x_799_ = lasm_js_value_handle(v_value_788_);
lean_dec(v_value_788_);
v___x_800_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_795_, v___x_796_, v___x_798_, v___x_799_);
lean_dec_ref(v___x_798_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; uint8_t v___x_802_; 
v_a_801_ = lean_ctor_get(v___x_800_, 0);
lean_inc(v_a_801_);
lean_dec_ref_known(v___x_800_, 1);
v___x_802_ = lean_string_validate_utf8(v_a_801_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; lean_object* v___x_804_; 
lean_dec(v_a_801_);
v___x_803_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9);
v___x_804_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_803_);
v___y_764_ = v_a_787_;
v_received_765_ = v___x_804_;
goto v___jp_763_;
}
else
{
lean_object* v___x_805_; 
v___x_805_ = lean_string_from_utf8_unchecked(v_a_801_);
v___y_764_ = v_a_787_;
v_received_765_ = v___x_805_;
goto v___jp_763_;
}
}
else
{
lean_object* v___x_806_; 
lean_dec_ref_known(v___x_800_, 1);
v___x_806_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10));
v___y_764_ = v_a_787_;
v_received_765_ = v___x_806_;
goto v___jp_763_;
}
}
}
}
}
else
{
v___y_784_ = v_a_787_;
goto v___jp_783_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___boxed(lean_object* v_context_833_, lean_object* v_d_834_, lean_object* v_a_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2(v_context_833_, v_d_834_);
lean_dec_ref(v_context_833_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1(lean_object* v_context_837_, lean_object* v_bytes_838_){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_838_);
if (lean_obj_tag(v___x_840_) == 0)
{
lean_object* v_a_841_; lean_object* v___x_842_; 
v_a_841_ = lean_ctor_get(v___x_840_, 0);
lean_inc(v_a_841_);
lean_dec_ref_known(v___x_840_, 1);
v___x_842_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2(v_context_837_, v_a_841_);
return v___x_842_;
}
else
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_850_; 
v_a_843_ = lean_ctor_get(v___x_840_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_850_ == 0)
{
v___x_845_ = v___x_840_;
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v___x_840_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_848_; 
if (v_isShared_846_ == 0)
{
v___x_848_ = v___x_845_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_a_843_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1___boxed(lean_object* v_context_851_, lean_object* v_bytes_852_, lean_object* v_a_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1(v_context_851_, v_bytes_852_);
lean_dec_ref(v_bytes_852_);
lean_dec_ref(v_context_851_);
return v_res_854_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_855_; uint64_t v___x_856_; 
v___x_855_ = 0;
v___x_856_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_855_);
return v___x_856_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0(uint8_t v_await_857_, uint64_t v_extra_858_){
_start:
{
uint64_t v___x_859_; uint64_t v___y_861_; 
v___x_859_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0);
if (v_await_857_ == 0)
{
uint64_t v___x_864_; 
v___x_864_ = 0ULL;
v___y_861_ = v___x_864_;
goto v___jp_860_;
}
else
{
uint64_t v___x_865_; 
v___x_865_ = 2ULL;
v___y_861_ = v___x_865_;
goto v___jp_860_;
}
v___jp_860_:
{
uint64_t v___x_862_; uint64_t v___x_863_; 
v___x_862_ = lean_uint64_lor(v___x_859_, v___y_861_);
v___x_863_ = lean_uint64_lor(v___x_862_, v_extra_858_);
return v___x_863_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___boxed(lean_object* v_await_866_, lean_object* v_extra_867_){
_start:
{
uint8_t v_await_boxed_868_; uint64_t v_extra_boxed_869_; uint64_t v_res_870_; lean_object* v_r_871_; 
v_await_boxed_868_ = lean_unbox(v_await_866_);
v_extra_boxed_869_ = lean_unbox_uint64(v_extra_867_);
lean_dec_ref(v_extra_867_);
v_res_870_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0(v_await_boxed_868_, v_extra_boxed_869_);
v_r_871_ = lean_box_uint64(v_res_870_);
return v_r_871_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__0(void){
_start:
{
uint64_t v___x_872_; uint8_t v___x_873_; uint64_t v___x_874_; 
v___x_872_ = 8ULL;
v___x_873_ = 0;
v___x_874_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0(v___x_873_, v___x_872_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0(lean_object* v_o_876_, lean_object* v_name_877_, lean_object* v_args_878_){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; uint64_t v___x_883_; lean_object* v___x_884_; 
v___x_880_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_881_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_881_, 0, v_o_876_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
lean_inc_ref(v_name_877_);
v___x_882_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_882_, 0, v_name_877_);
v___x_883_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__0);
v___x_884_ = l_Lasm_JS_Value_invokeRaw(v___x_881_, v___x_882_, v_args_878_, v___x_883_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_a_885_);
lean_dec_ref_known(v___x_884_, 1);
v___x_886_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__1));
v___x_887_ = lean_string_append(v___x_886_, v_name_877_);
lean_dec_ref(v_name_877_);
v___x_888_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1(v___x_887_, v_a_885_);
lean_dec(v_a_885_);
lean_dec_ref(v___x_887_);
return v___x_888_;
}
else
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_dec_ref(v_name_877_);
v_a_889_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_884_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_884_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_889_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___boxed(lean_object* v_o_897_, lean_object* v_name_898_, lean_object* v_args_899_, lean_object* v_a_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0(v_o_897_, v_name_898_, v_args_899_);
return v_res_901_;
}
}
static lean_object* _init_l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__1));
v___x_906_ = l_Lasm_JS_Web_Support_args(v___x_905_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_eventNames(lean_object* v_self_907_){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_909_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__0));
v___x_910_ = lean_obj_once(&l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2, &l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2_once, _init_l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2);
v___x_911_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0(v_self_907_, v___x_909_, v___x_910_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_eventNames___boxed(lean_object* v_self_912_, lean_object* v_a_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Lasm_JS_Node_NodeEventTarget_eventNames(v_self_912_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_listenerCount(lean_object* v_self_916_, lean_object* v_type_917_){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_919_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_listenerCount___closed__0));
v___x_920_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_920_, 0, v_type_917_);
v___x_921_ = lean_unsigned_to_nat(1u);
v___x_922_ = lean_mk_empty_array_with_capacity(v___x_921_);
v___x_923_ = lean_array_push(v___x_922_, v___x_920_);
v___x_924_ = l_Lasm_JS_Web_Support_args(v___x_923_);
v___x_925_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0(v_self_916_, v___x_919_, v___x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_listenerCount___boxed(lean_object* v_self_926_, lean_object* v_type_927_, lean_object* v_a_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l_Lasm_JS_Node_NodeEventTarget_listenerCount(v_self_926_, v_type_927_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_setMaxListeners(lean_object* v_self_931_, double v_n_932_){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_934_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_setMaxListeners___closed__0));
v___x_935_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_935_, 0, v_n_932_);
v___x_936_ = lean_unsigned_to_nat(1u);
v___x_937_ = lean_mk_empty_array_with_capacity(v___x_936_);
v___x_938_ = lean_array_push(v___x_937_, v___x_935_);
v___x_939_ = l_Lasm_JS_Web_Support_args(v___x_938_);
v___x_940_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_931_, v___x_934_, v___x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_setMaxListeners___boxed(lean_object* v_self_941_, lean_object* v_n_942_, lean_object* v_a_943_){
_start:
{
double v_n_boxed_944_; lean_object* v_res_945_; 
v_n_boxed_944_ = lean_unbox_float(v_n_942_);
lean_dec_ref(v_n_942_);
v_res_945_ = l_Lasm_JS_Node_NodeEventTarget_setMaxListeners(v_self_941_, v_n_boxed_944_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_getMaxListeners(lean_object* v_self_947_){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_949_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_getMaxListeners___closed__0));
v___x_950_ = lean_obj_once(&l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2, &l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2_once, _init_l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2);
v___x_951_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncId_spec__0(v_self_947_, v___x_949_, v___x_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_getMaxListeners___boxed(lean_object* v_self_952_, lean_object* v_a_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_Lasm_JS_Node_NodeEventTarget_getMaxListeners(v_self_952_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_off_spec__0(lean_object* v_x_955_){
_start:
{
if (lean_obj_tag(v_x_955_) == 0)
{
lean_object* v___x_956_; 
v___x_956_ = lean_box(0);
return v___x_956_;
}
else
{
lean_object* v_val_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v_val_957_ = lean_ctor_get(v_x_955_, 0);
v___x_958_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0___closed__0));
v___x_959_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_957_);
v___x_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_960_, 0, v___x_958_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
v___x_961_ = lean_unsigned_to_nat(1u);
v___x_962_ = lean_mk_empty_array_with_capacity(v___x_961_);
v___x_963_ = lean_array_push(v___x_962_, v___x_960_);
v___x_964_ = l_Lasm_JS_Web_Support_fields(v___x_963_);
lean_dec_ref(v___x_963_);
return v___x_964_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_off_spec__0___boxed(lean_object* v_x_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_off_spec__0(v_x_965_);
lean_dec(v_x_965_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_off(lean_object* v_self_968_, lean_object* v_type_969_, lean_object* v_listener_970_, lean_object* v_options_971_){
_start:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_973_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_off___closed__0));
v___x_974_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_974_, 0, v_type_969_);
v___x_975_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_976_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_976_, 0, v_listener_970_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_off_spec__0(v_options_971_);
v___x_978_ = lean_unsigned_to_nat(3u);
v___x_979_ = lean_mk_empty_array_with_capacity(v___x_978_);
v___x_980_ = lean_array_push(v___x_979_, v___x_974_);
v___x_981_ = lean_array_push(v___x_980_, v___x_976_);
v___x_982_ = lean_array_push(v___x_981_, v___x_977_);
v___x_983_ = l_Lasm_JS_Web_Support_args(v___x_982_);
v___x_984_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_968_, v___x_973_, v___x_983_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_984_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_984_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
else
{
lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1000_; 
v_a_993_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_995_ = v___x_984_;
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_dec(v___x_984_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_998_; 
if (v_isShared_996_ == 0)
{
v___x_998_ = v___x_995_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_a_993_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_off___boxed(lean_object* v_self_1001_, lean_object* v_type_1002_, lean_object* v_listener_1003_, lean_object* v_options_1004_, lean_object* v_a_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_Lasm_JS_Node_NodeEventTarget_off(v_self_1001_, v_type_1002_, v_listener_1003_, v_options_1004_);
lean_dec(v_options_1004_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_on(lean_object* v_self_1008_, lean_object* v_type_1009_, lean_object* v_listener_1010_){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1012_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_on___closed__0));
v___x_1013_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1013_, 0, v_type_1009_);
v___x_1014_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1015_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1015_, 0, v_listener_1010_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = lean_unsigned_to_nat(2u);
v___x_1017_ = lean_mk_empty_array_with_capacity(v___x_1016_);
v___x_1018_ = lean_array_push(v___x_1017_, v___x_1013_);
v___x_1019_ = lean_array_push(v___x_1018_, v___x_1015_);
v___x_1020_ = l_Lasm_JS_Web_Support_args(v___x_1019_);
v___x_1021_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1008_, v___x_1012_, v___x_1020_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_1021_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1021_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
else
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
v_a_1030_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_1021_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_1021_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_on___boxed(lean_object* v_self_1038_, lean_object* v_type_1039_, lean_object* v_listener_1040_, lean_object* v_a_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lasm_JS_Node_NodeEventTarget_on(v_self_1038_, v_type_1039_, v_listener_1040_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_once(lean_object* v_self_1044_, lean_object* v_type_1045_, lean_object* v_listener_1046_){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1048_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_once___closed__0));
v___x_1049_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1049_, 0, v_type_1045_);
v___x_1050_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1051_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1051_, 0, v_listener_1046_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = lean_unsigned_to_nat(2u);
v___x_1053_ = lean_mk_empty_array_with_capacity(v___x_1052_);
v___x_1054_ = lean_array_push(v___x_1053_, v___x_1049_);
v___x_1055_ = lean_array_push(v___x_1054_, v___x_1051_);
v___x_1056_ = l_Lasm_JS_Web_Support_args(v___x_1055_);
v___x_1057_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1044_, v___x_1048_, v___x_1056_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1057_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1057_);
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
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
v_a_1066_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1057_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1057_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1071_; 
if (v_isShared_1069_ == 0)
{
v___x_1071_ = v___x_1068_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1066_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_once___boxed(lean_object* v_self_1074_, lean_object* v_type_1075_, lean_object* v_listener_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lasm_JS_Node_NodeEventTarget_once(v_self_1074_, v_type_1075_, v_listener_1076_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_removeAllListeners(lean_object* v_self_1080_, lean_object* v_type_1081_){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_removeAllListeners___closed__0));
v___x_1084_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_type_1081_);
v___x_1085_ = lean_unsigned_to_nat(1u);
v___x_1086_ = lean_mk_empty_array_with_capacity(v___x_1085_);
v___x_1087_ = lean_array_push(v___x_1086_, v___x_1084_);
v___x_1088_ = l_Lasm_JS_Web_Support_args(v___x_1087_);
v___x_1089_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1080_, v___x_1083_, v___x_1088_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1089_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1089_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
else
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1105_; 
v_a_1098_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1100_ = v___x_1089_;
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1089_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
if (v_isShared_1101_ == 0)
{
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_a_1098_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
return v___x_1103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_removeAllListeners___boxed(lean_object* v_self_1106_, lean_object* v_type_1107_, lean_object* v_a_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l_Lasm_JS_Node_NodeEventTarget_removeAllListeners(v_self_1106_, v_type_1107_);
return v_res_1109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_removeListener_spec__0(lean_object* v_x_1110_){
_start:
{
if (lean_obj_tag(v_x_1110_) == 0)
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_box(0);
return v___x_1111_;
}
else
{
lean_object* v_val_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v_val_1112_ = lean_ctor_get(v_x_1110_, 0);
v___x_1113_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0___closed__0));
v___x_1114_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_1112_);
v___x_1115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1113_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
v___x_1116_ = lean_unsigned_to_nat(1u);
v___x_1117_ = lean_mk_empty_array_with_capacity(v___x_1116_);
v___x_1118_ = lean_array_push(v___x_1117_, v___x_1115_);
v___x_1119_ = l_Lasm_JS_Web_Support_fields(v___x_1118_);
lean_dec_ref(v___x_1118_);
return v___x_1119_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_removeListener_spec__0___boxed(lean_object* v_x_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_removeListener_spec__0(v_x_1120_);
lean_dec(v_x_1120_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_removeListener(lean_object* v_self_1123_, lean_object* v_type_1124_, lean_object* v_listener_1125_, lean_object* v_options_1126_){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1128_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_removeListener___closed__0));
v___x_1129_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1129_, 0, v_type_1124_);
v___x_1130_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1131_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1131_, 0, v_listener_1125_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
v___x_1132_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_NodeEventTarget_removeListener_spec__0(v_options_1126_);
v___x_1133_ = lean_unsigned_to_nat(3u);
v___x_1134_ = lean_mk_empty_array_with_capacity(v___x_1133_);
v___x_1135_ = lean_array_push(v___x_1134_, v___x_1129_);
v___x_1136_ = lean_array_push(v___x_1135_, v___x_1131_);
v___x_1137_ = lean_array_push(v___x_1136_, v___x_1132_);
v___x_1138_ = l_Lasm_JS_Web_Support_args(v___x_1137_);
v___x_1139_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1123_, v___x_1128_, v___x_1138_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
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
lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
v_a_1148_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1150_ = v___x_1139_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_dec(v___x_1139_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_a_1148_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_NodeEventTarget_removeListener___boxed(lean_object* v_self_1156_, lean_object* v_type_1157_, lean_object* v_listener_1158_, lean_object* v_options_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lasm_JS_Node_NodeEventTarget_removeListener(v_self_1156_, v_type_1157_, v_listener_1158_, v_options_1159_);
lean_dec(v_options_1159_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f(lean_object* v_v_1169_){
_start:
{
lean_object* v___f_1171_; lean_object* v___x_1172_; 
v___f_1171_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_cast_x3f___closed__2));
lean_inc(v_v_1169_);
v___x_1172_ = l_Lasm_JS_Web_Support_isInstance(v___f_1171_, v_v_1169_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1186_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1175_ = v___x_1172_;
v_isShared_1176_ = v_isSharedCheck_1186_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1186_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
uint8_t v___x_1177_; 
v___x_1177_ = lean_unbox(v_a_1173_);
lean_dec(v_a_1173_);
if (v___x_1177_ == 0)
{
lean_object* v___x_1178_; lean_object* v___x_1180_; 
lean_dec(v_v_1169_);
v___x_1178_ = lean_box(0);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 0, v___x_1178_);
v___x_1180_ = v___x_1175_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1178_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
else
{
lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1182_, 0, v_v_1169_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 0, v___x_1182_);
v___x_1184_ = v___x_1175_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
else
{
lean_object* v_a_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1194_; 
lean_dec(v_v_1169_);
v_a_1187_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1189_ = v___x_1172_;
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_a_1187_);
lean_dec(v___x_1172_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v___x_1192_; 
if (v_isShared_1190_ == 0)
{
v___x_1192_ = v___x_1189_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_a_1187_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_cast_x3f___boxed(lean_object* v_v_1195_, lean_object* v_a_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lasm_JS_Node_EventEmitter_cast_x3f(v_v_1195_);
return v_res_1197_;
}
}
static lean_object* _init_l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2(void){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1201_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onNewListener___closed__1));
v___x_1202_ = lean_unsigned_to_nat(2u);
v___x_1203_ = lean_mk_empty_array_with_capacity(v___x_1202_);
v___x_1204_ = lean_array_push(v___x_1203_, v___x_1201_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener(lean_object* v_self_1205_, lean_object* v_listener_1206_){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1208_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_on___closed__0));
v___x_1209_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1210_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1210_, 0, v_listener_1206_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
v___x_1211_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2, &l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2_once, _init_l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2);
v___x_1212_ = lean_array_push(v___x_1211_, v___x_1210_);
v___x_1213_ = l_Lasm_JS_Web_Support_args(v___x_1212_);
v___x_1214_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1205_, v___x_1208_, v___x_1213_);
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
v_a_1215_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v___x_1214_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1214_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1218_ == 0)
{
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1215_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
v_a_1223_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1214_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1214_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onNewListener___boxed(lean_object* v_self_1231_, lean_object* v_listener_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_Lasm_JS_Node_EventEmitter_onNewListener(v_self_1231_, v_listener_1232_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceNewListener(lean_object* v_self_1235_, lean_object* v_listener_1236_){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1238_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_once___closed__0));
v___x_1239_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1240_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1240_, 0, v_listener_1236_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = lean_unsigned_to_nat(2u);
v___x_1242_ = lean_mk_empty_array_with_capacity(v___x_1241_);
lean_dec_ref(v___x_1242_);
v___x_1243_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2, &l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2_once, _init_l_Lasm_JS_Node_EventEmitter_onNewListener___closed__2);
v___x_1244_ = lean_array_push(v___x_1243_, v___x_1240_);
v___x_1245_ = l_Lasm_JS_Web_Support_args(v___x_1244_);
v___x_1246_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1235_, v___x_1238_, v___x_1245_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1246_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1246_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
else
{
lean_object* v_a_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1262_; 
v_a_1255_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1257_ = v___x_1246_;
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_a_1255_);
lean_dec(v___x_1246_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1260_; 
if (v_isShared_1258_ == 0)
{
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1255_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceNewListener___boxed(lean_object* v_self_1263_, lean_object* v_listener_1264_, lean_object* v_a_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Lasm_JS_Node_EventEmitter_onceNewListener(v_self_1263_, v_listener_1264_);
return v_res_1266_;
}
}
static lean_object* _init_l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1(void){
_start:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1269_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__0));
v___x_1270_ = lean_unsigned_to_nat(2u);
v___x_1271_ = lean_mk_empty_array_with_capacity(v___x_1270_);
v___x_1272_ = lean_array_push(v___x_1271_, v___x_1269_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener(lean_object* v_self_1273_, lean_object* v_listener_1274_){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1276_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_on___closed__0));
v___x_1277_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1278_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1278_, 0, v_listener_1274_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1, &l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1_once, _init_l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1);
v___x_1280_ = lean_array_push(v___x_1279_, v___x_1278_);
v___x_1281_ = l_Lasm_JS_Web_Support_args(v___x_1280_);
v___x_1282_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1273_, v___x_1276_, v___x_1281_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1282_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1282_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
v_a_1291_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1282_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1282_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onRemoveListener___boxed(lean_object* v_self_1299_, lean_object* v_listener_1300_, lean_object* v_a_1301_){
_start:
{
lean_object* v_res_1302_; 
v_res_1302_ = l_Lasm_JS_Node_EventEmitter_onRemoveListener(v_self_1299_, v_listener_1300_);
return v_res_1302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceRemoveListener(lean_object* v_self_1303_, lean_object* v_listener_1304_){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1306_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_once___closed__0));
v___x_1307_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1308_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1308_, 0, v_listener_1304_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = lean_unsigned_to_nat(2u);
v___x_1310_ = lean_mk_empty_array_with_capacity(v___x_1309_);
lean_dec_ref(v___x_1310_);
v___x_1311_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1, &l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1_once, _init_l_Lasm_JS_Node_EventEmitter_onRemoveListener___closed__1);
v___x_1312_ = lean_array_push(v___x_1311_, v___x_1308_);
v___x_1313_ = l_Lasm_JS_Web_Support_args(v___x_1312_);
v___x_1314_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1303_, v___x_1306_, v___x_1313_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1322_; 
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1317_ = v___x_1314_;
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_dec(v___x_1314_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v_a_1315_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
}
else
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1330_; 
v_a_1323_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1325_ = v___x_1314_;
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1314_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1328_; 
if (v_isShared_1326_ == 0)
{
v___x_1328_ = v___x_1325_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1323_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_onceRemoveListener___boxed(lean_object* v_self_1331_, lean_object* v_listener_1332_, lean_object* v_a_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_Lasm_JS_Node_EventEmitter_onceRemoveListener(v_self_1331_, v_listener_1332_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_addListener(lean_object* v_self_1335_, lean_object* v_eventName_1336_, lean_object* v_listener_1337_){
_start:
{
lean_object* v___x_1339_; lean_object* v___y_1341_; 
v___x_1339_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_addListener___closed__0));
if (lean_obj_tag(v_eventName_1336_) == 0)
{
lean_object* v_value_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1357_; 
v_value_1350_ = lean_ctor_get(v_eventName_1336_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v_eventName_1336_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1352_ = v_eventName_1336_;
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_value_1350_);
lean_dec(v_eventName_1336_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1355_; 
if (v_isShared_1353_ == 0)
{
lean_ctor_set_tag(v___x_1352_, 4);
v___x_1355_ = v___x_1352_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_value_1350_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
v___y_1341_ = v___x_1355_;
goto v___jp_1340_;
}
}
}
else
{
lean_object* v_value_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v_value_1358_ = lean_ctor_get(v_eventName_1336_, 0);
lean_inc(v_value_1358_);
lean_dec_ref_known(v_eventName_1336_, 1);
v___x_1359_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1360_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1360_, 0, v_value_1358_);
lean_ctor_set(v___x_1360_, 1, v___x_1359_);
v___y_1341_ = v___x_1360_;
goto v___jp_1340_;
}
v___jp_1340_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1342_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1343_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1343_, 0, v_listener_1337_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = lean_unsigned_to_nat(2u);
v___x_1345_ = lean_mk_empty_array_with_capacity(v___x_1344_);
v___x_1346_ = lean_array_push(v___x_1345_, v___y_1341_);
v___x_1347_ = lean_array_push(v___x_1346_, v___x_1343_);
v___x_1348_ = l_Lasm_JS_Web_Support_args(v___x_1347_);
v___x_1349_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1335_, v___x_1339_, v___x_1348_);
return v___x_1349_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_addListener___boxed(lean_object* v_self_1361_, lean_object* v_eventName_1362_, lean_object* v_listener_1363_, lean_object* v_a_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l_Lasm_JS_Node_EventEmitter_addListener(v_self_1361_, v_eventName_1362_, v_listener_1363_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t v_sz_1366_, size_t v_i_1367_, lean_object* v_bs_1368_){
_start:
{
uint8_t v___x_1369_; 
v___x_1369_ = lean_usize_dec_lt(v_i_1367_, v_sz_1366_);
if (v___x_1369_ == 0)
{
return v_bs_1368_;
}
else
{
lean_object* v_v_1370_; lean_object* v___x_1371_; lean_object* v_bs_x27_1372_; size_t v___x_1373_; size_t v___x_1374_; lean_object* v___x_1375_; 
v_v_1370_ = lean_array_uget(v_bs_1368_, v_i_1367_);
v___x_1371_ = lean_unsigned_to_nat(0u);
v_bs_x27_1372_ = lean_array_uset(v_bs_1368_, v_i_1367_, v___x_1371_);
v___x_1373_ = ((size_t)1ULL);
v___x_1374_ = lean_usize_add(v_i_1367_, v___x_1373_);
v___x_1375_ = lean_array_uset(v_bs_x27_1372_, v_i_1367_, v_v_1370_);
v_i_1367_ = v___x_1374_;
v_bs_1368_ = v___x_1375_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0___boxed(lean_object* v_sz_1377_, lean_object* v_i_1378_, lean_object* v_bs_1379_){
_start:
{
size_t v_sz_boxed_1380_; size_t v_i_boxed_1381_; lean_object* v_res_1382_; 
v_sz_boxed_1380_ = lean_unbox_usize(v_sz_1377_);
lean_dec(v_sz_1377_);
v_i_boxed_1381_ = lean_unbox_usize(v_i_1378_);
lean_dec(v_i_1378_);
v_res_1382_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_boxed_1380_, v_i_boxed_1381_, v_bs_1379_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit(lean_object* v_self_1383_, lean_object* v_eventName_1384_, lean_object* v_args_1385_){
_start:
{
lean_object* v___x_1387_; lean_object* v___y_1389_; 
v___x_1387_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_emit___closed__0));
if (lean_obj_tag(v_eventName_1384_) == 0)
{
lean_object* v_value_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1405_; 
v_value_1398_ = lean_ctor_get(v_eventName_1384_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v_eventName_1384_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1400_ = v_eventName_1384_;
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_value_1398_);
lean_dec(v_eventName_1384_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
lean_ctor_set_tag(v___x_1400_, 4);
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_value_1398_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
v___y_1389_ = v___x_1403_;
goto v___jp_1388_;
}
}
}
else
{
lean_object* v_value_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
v_value_1406_ = lean_ctor_get(v_eventName_1384_, 0);
lean_inc(v_value_1406_);
lean_dec_ref_known(v_eventName_1384_, 1);
v___x_1407_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1408_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1408_, 0, v_value_1406_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
v___y_1389_ = v___x_1408_;
goto v___jp_1388_;
}
v___jp_1388_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; size_t v_sz_1393_; size_t v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1390_ = lean_unsigned_to_nat(1u);
v___x_1391_ = lean_mk_empty_array_with_capacity(v___x_1390_);
v___x_1392_ = lean_array_push(v___x_1391_, v___y_1389_);
v_sz_1393_ = lean_array_size(v_args_1385_);
v___x_1394_ = ((size_t)0ULL);
v___x_1395_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_1393_, v___x_1394_, v_args_1385_);
v___x_1396_ = l_Lasm_JS_Web_Support_argsWith(v___x_1392_, v___x_1395_);
lean_dec_ref(v___x_1395_);
v___x_1397_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_1383_, v___x_1387_, v___x_1396_);
return v___x_1397_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit___boxed(lean_object* v_self_1409_, lean_object* v_eventName_1410_, lean_object* v_args_1411_, lean_object* v_a_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l_Lasm_JS_Node_EventEmitter_emit(v_self_1409_, v_eventName_1410_, v_args_1411_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames(lean_object* v_self_1414_){
_start:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1416_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__0));
v___x_1417_ = lean_obj_once(&l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2, &l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2_once, _init_l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2);
v___x_1418_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_AsyncHook_executionAsyncResource_spec__0(v_self_1414_, v___x_1416_, v___x_1417_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames___boxed(lean_object* v_self_1419_, lean_object* v_a_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l_Lasm_JS_Node_EventEmitter_eventNames(v_self_1419_);
return v_res_1421_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__0(uint8_t v_await_1422_, uint64_t v_extra_1423_){
_start:
{
uint64_t v___x_1424_; uint64_t v___y_1426_; 
v___x_1424_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0);
if (v_await_1422_ == 0)
{
uint64_t v___x_1429_; 
v___x_1429_ = 0ULL;
v___y_1426_ = v___x_1429_;
goto v___jp_1425_;
}
else
{
uint64_t v___x_1430_; 
v___x_1430_ = 2ULL;
v___y_1426_ = v___x_1430_;
goto v___jp_1425_;
}
v___jp_1425_:
{
uint64_t v___x_1427_; uint64_t v___x_1428_; 
v___x_1427_ = lean_uint64_lor(v___x_1424_, v___y_1426_);
v___x_1428_ = lean_uint64_lor(v___x_1427_, v_extra_1423_);
return v___x_1428_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__0___boxed(lean_object* v_await_1431_, lean_object* v_extra_1432_){
_start:
{
uint8_t v_await_boxed_1433_; uint64_t v_extra_boxed_1434_; uint64_t v_res_1435_; lean_object* v_r_1436_; 
v_await_boxed_1433_ = lean_unbox(v_await_1431_);
v_extra_boxed_1434_ = lean_unbox_uint64(v_extra_1432_);
lean_dec_ref(v_extra_1432_);
v_res_1435_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__0(v_await_boxed_1433_, v_extra_boxed_1434_);
v_r_1436_ = lean_box_uint64(v_res_1435_);
return v_r_1436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2(lean_object* v_context_1439_, lean_object* v_d_1440_){
_start:
{
lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1449_; lean_object* v_received_1450_; lean_object* v___y_1469_; lean_object* v_a_1472_; 
switch(lean_obj_tag(v_d_1440_))
{
case 3:
{
double v_n_1496_; lean_object* v___x_1497_; 
v_n_1496_ = lean_ctor_get_float(v_d_1440_, 0);
v___x_1497_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1496_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v___x_1498_; 
v___x_1498_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2___closed__1));
v_a_1472_ = v___x_1498_;
goto v___jp_1471_;
}
else
{
lean_object* v_val_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
lean_dec_ref_known(v_d_1440_, 0);
v_val_1499_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1497_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_val_1499_);
lean_dec(v___x_1497_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
lean_ctor_set_tag(v___x_1501_, 0);
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_val_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
case 5:
{
lean_object* v_i_1507_; lean_object* v___x_1508_; 
v_i_1507_ = lean_ctor_get(v_d_1440_, 0);
lean_inc(v_i_1507_);
lean_dec_ref_known(v_d_1440_, 1);
v___x_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1508_, 0, v_i_1507_);
return v___x_1508_;
}
default: 
{
lean_object* v___x_1509_; 
v___x_1509_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v_a_1472_ = v___x_1509_;
goto v___jp_1471_;
}
}
v___jp_1442_:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1445_ = lean_string_append(v___y_1443_, v___y_1444_);
lean_dec_ref(v___y_1444_);
v___x_1446_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1445_);
v___x_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1446_);
return v___x_1447_;
}
v___jp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; uint8_t v___x_1462_; 
v___x_1451_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_1452_ = lean_string_append(v___x_1451_, v_context_1439_);
v___x_1453_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1));
v___x_1454_ = lean_string_append(v___x_1452_, v___x_1453_);
v___x_1455_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2___closed__0));
v___x_1456_ = lean_string_append(v___x_1454_, v___x_1455_);
v___x_1457_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2));
v___x_1458_ = lean_string_append(v___x_1456_, v___x_1457_);
v___x_1459_ = lean_string_append(v___x_1458_, v_received_1450_);
lean_dec_ref(v_received_1450_);
v___x_1460_ = lean_string_utf8_byte_size(v___y_1449_);
v___x_1461_ = lean_unsigned_to_nat(0u);
v___x_1462_ = lean_nat_dec_eq(v___x_1460_, v___x_1461_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1463_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__1));
v___x_1464_ = lean_string_append(v___x_1463_, v___y_1449_);
v___x_1465_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__2));
v___x_1466_ = lean_string_append(v___x_1464_, v___x_1465_);
v___y_1443_ = v___x_1459_;
v___y_1444_ = v___x_1466_;
goto v___jp_1442_;
}
else
{
lean_object* v___x_1467_; 
v___x_1467_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___y_1443_ = v___x_1459_;
v___y_1444_ = v___x_1467_;
goto v___jp_1442_;
}
}
v___jp_1468_:
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Lasm_JS_Data_describe(v_d_1440_);
v___y_1449_ = v___y_1469_;
v_received_1450_ = v___x_1470_;
goto v___jp_1448_;
}
v___jp_1471_:
{
if (lean_obj_tag(v_d_1440_) == 9)
{
lean_object* v_value_1473_; lean_object* v_description_1474_; lean_object* v___x_1475_; uint8_t v___x_1476_; 
v_value_1473_ = lean_ctor_get(v_d_1440_, 0);
v_description_1474_ = lean_ctor_get(v_d_1440_, 1);
v___x_1475_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1476_ = lean_string_dec_eq(v_description_1474_, v___x_1475_);
if (v___x_1476_ == 0)
{
v___y_1469_ = v_a_1472_;
goto v___jp_1468_;
}
else
{
lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1493_; 
lean_inc(v_value_1473_);
v_isSharedCheck_1493_ = !lean_is_exclusive(v_d_1440_);
if (v_isSharedCheck_1493_ == 0)
{
lean_object* v_unused_1494_; lean_object* v_unused_1495_; 
v_unused_1494_ = lean_ctor_get(v_d_1440_, 1);
lean_dec(v_unused_1494_);
v_unused_1495_ = lean_ctor_get(v_d_1440_, 0);
lean_dec(v_unused_1495_);
v___x_1478_ = v_d_1440_;
v_isShared_1479_ = v_isSharedCheck_1493_;
goto v_resetjp_1477_;
}
else
{
lean_dec(v_d_1440_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1493_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
uint32_t v___x_1480_; uint64_t v___x_1481_; lean_object* v___x_1483_; 
v___x_1480_ = 206;
v___x_1481_ = 0ULL;
lean_inc(v_value_1473_);
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 1, v___x_1475_);
v___x_1483_ = v___x_1478_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_value_1473_);
lean_ctor_set(v_reuseFailAlloc_1492_, 1, v___x_1475_);
v___x_1483_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
uint32_t v___x_1484_; lean_object* v___x_1485_; 
v___x_1484_ = lasm_js_value_handle(v_value_1473_);
lean_dec(v_value_1473_);
v___x_1485_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1480_, v___x_1481_, v___x_1483_, v___x_1484_);
lean_dec_ref(v___x_1483_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v_a_1486_; uint8_t v___x_1487_; 
v_a_1486_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_a_1486_);
lean_dec_ref_known(v___x_1485_, 1);
v___x_1487_ = lean_string_validate_utf8(v_a_1486_);
if (v___x_1487_ == 0)
{
lean_object* v___x_1488_; lean_object* v___x_1489_; 
lean_dec(v_a_1486_);
v___x_1488_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9);
v___x_1489_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1488_);
v___y_1449_ = v_a_1472_;
v_received_1450_ = v___x_1489_;
goto v___jp_1448_;
}
else
{
lean_object* v___x_1490_; 
v___x_1490_ = lean_string_from_utf8_unchecked(v_a_1486_);
v___y_1449_ = v_a_1472_;
v_received_1450_ = v___x_1490_;
goto v___jp_1448_;
}
}
else
{
lean_object* v___x_1491_; 
lean_dec_ref_known(v___x_1485_, 1);
v___x_1491_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10));
v___y_1449_ = v_a_1472_;
v_received_1450_ = v___x_1491_;
goto v___jp_1448_;
}
}
}
}
}
else
{
v___y_1469_ = v_a_1472_;
goto v___jp_1468_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1510_, lean_object* v_d_1511_, lean_object* v_a_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2(v_context_1510_, v_d_1511_);
lean_dec_ref(v_context_1510_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1(lean_object* v_context_1514_, lean_object* v_bytes_1515_){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1515_);
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v_a_1518_; lean_object* v___x_1519_; 
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1518_);
lean_dec_ref_known(v___x_1517_, 1);
v___x_1519_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2(v_context_1514_, v_a_1518_);
return v___x_1519_;
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
v_a_1520_ = lean_ctor_get(v___x_1517_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1517_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1517_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1517_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1___boxed(lean_object* v_context_1528_, lean_object* v_bytes_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1(v_context_1528_, v_bytes_1529_);
lean_dec_ref(v_bytes_1529_);
lean_dec_ref(v_context_1528_);
return v_res_1531_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1532_; uint8_t v___x_1533_; uint64_t v___x_1534_; 
v___x_1532_ = 8ULL;
v___x_1533_ = 0;
v___x_1534_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__0(v___x_1533_, v___x_1532_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0(lean_object* v_o_1535_, lean_object* v_name_1536_, lean_object* v_args_1537_){
_start:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; uint64_t v___x_1542_; lean_object* v___x_1543_; 
v___x_1539_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1540_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1540_, 0, v_o_1535_);
lean_ctor_set(v___x_1540_, 1, v___x_1539_);
lean_inc_ref(v_name_1536_);
v___x_1541_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1541_, 0, v_name_1536_);
v___x_1542_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0___closed__0);
v___x_1543_ = l_Lasm_JS_Value_invokeRaw(v___x_1540_, v___x_1541_, v_args_1537_, v___x_1542_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v_a_1544_ = lean_ctor_get(v___x_1543_, 0);
lean_inc(v_a_1544_);
lean_dec_ref_known(v___x_1543_, 1);
v___x_1545_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__1));
v___x_1546_ = lean_string_append(v___x_1545_, v_name_1536_);
lean_dec_ref(v_name_1536_);
v___x_1547_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1(v___x_1546_, v_a_1544_);
lean_dec(v_a_1544_);
lean_dec_ref(v___x_1546_);
return v___x_1547_;
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
lean_dec_ref(v_name_1536_);
v_a_1548_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1543_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1543_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0___boxed(lean_object* v_o_1556_, lean_object* v_name_1557_, lean_object* v_args_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0(v_o_1556_, v_name_1557_, v_args_1558_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_getMaxListeners(lean_object* v_self_1561_){
_start:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1563_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_getMaxListeners___closed__0));
v___x_1564_ = lean_obj_once(&l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2, &l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2_once, _init_l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2);
v___x_1565_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0(v_self_1561_, v___x_1563_, v___x_1564_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_getMaxListeners___boxed(lean_object* v_self_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Lasm_JS_Node_EventEmitter_getMaxListeners(v_self_1566_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount(lean_object* v_self_1569_, lean_object* v_eventName_1570_, lean_object* v_listener_1571_){
_start:
{
lean_object* v___x_1573_; lean_object* v___y_1575_; 
v___x_1573_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_listenerCount___closed__0));
if (lean_obj_tag(v_eventName_1570_) == 0)
{
lean_object* v_value_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
v_value_1583_ = lean_ctor_get(v_eventName_1570_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_eventName_1570_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v_eventName_1570_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_value_1583_);
lean_dec(v_eventName_1570_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
lean_ctor_set_tag(v___x_1585_, 4);
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_value_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
v___y_1575_ = v___x_1588_;
goto v___jp_1574_;
}
}
}
else
{
lean_object* v_value_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v_value_1591_ = lean_ctor_get(v_eventName_1570_, 0);
lean_inc(v_value_1591_);
lean_dec_ref_known(v_eventName_1570_, 1);
v___x_1592_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1593_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1593_, 0, v_value_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___y_1575_ = v___x_1593_;
goto v___jp_1574_;
}
v___jp_1574_:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1576_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(v_listener_1571_);
v___x_1577_ = lean_unsigned_to_nat(2u);
v___x_1578_ = lean_mk_empty_array_with_capacity(v___x_1577_);
v___x_1579_ = lean_array_push(v___x_1578_, v___y_1575_);
v___x_1580_ = lean_array_push(v___x_1579_, v___x_1576_);
v___x_1581_ = l_Lasm_JS_Web_Support_args(v___x_1580_);
v___x_1582_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0(v_self_1569_, v___x_1573_, v___x_1581_);
return v___x_1582_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount___boxed(lean_object* v_self_1594_, lean_object* v_eventName_1595_, lean_object* v_listener_1596_, lean_object* v_a_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_Lasm_JS_Node_EventEmitter_listenerCount(v_self_1594_, v_eventName_1595_, v_listener_1596_);
lean_dec(v_listener_1596_);
return v_res_1598_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__0(uint8_t v_await_1599_, uint64_t v_extra_1600_){
_start:
{
uint64_t v___x_1601_; uint64_t v___y_1603_; 
v___x_1601_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0);
if (v_await_1599_ == 0)
{
uint64_t v___x_1606_; 
v___x_1606_ = 0ULL;
v___y_1603_ = v___x_1606_;
goto v___jp_1602_;
}
else
{
uint64_t v___x_1607_; 
v___x_1607_ = 2ULL;
v___y_1603_ = v___x_1607_;
goto v___jp_1602_;
}
v___jp_1602_:
{
uint64_t v___x_1604_; uint64_t v___x_1605_; 
v___x_1604_ = lean_uint64_lor(v___x_1601_, v___y_1603_);
v___x_1605_ = lean_uint64_lor(v___x_1604_, v_extra_1600_);
return v___x_1605_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__0___boxed(lean_object* v_await_1608_, lean_object* v_extra_1609_){
_start:
{
uint8_t v_await_boxed_1610_; uint64_t v_extra_boxed_1611_; uint64_t v_res_1612_; lean_object* v_r_1613_; 
v_await_boxed_1610_ = lean_unbox(v_await_1608_);
v_extra_boxed_1611_ = lean_unbox_uint64(v_extra_1609_);
lean_dec_ref(v_extra_1609_);
v_res_1612_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__0(v_await_boxed_1610_, v_extra_boxed_1611_);
v_r_1613_ = lean_box_uint64(v_res_1612_);
return v_r_1613_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2_spec__3(size_t v_sz_1614_, size_t v_i_1615_, lean_object* v_bs_1616_){
_start:
{
uint8_t v___x_1617_; 
v___x_1617_ = lean_usize_dec_lt(v_i_1615_, v_sz_1614_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; 
v___x_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1618_, 0, v_bs_1616_);
return v___x_1618_;
}
else
{
lean_object* v_v_1619_; 
v_v_1619_ = lean_array_uget_borrowed(v_bs_1616_, v_i_1615_);
if (lean_obj_tag(v_v_1619_) == 9)
{
lean_object* v_value_1620_; lean_object* v___x_1621_; lean_object* v_bs_x27_1622_; size_t v___x_1623_; size_t v___x_1624_; lean_object* v___x_1625_; 
v_value_1620_ = lean_ctor_get(v_v_1619_, 0);
lean_inc(v_value_1620_);
v___x_1621_ = lean_unsigned_to_nat(0u);
v_bs_x27_1622_ = lean_array_uset(v_bs_1616_, v_i_1615_, v___x_1621_);
v___x_1623_ = ((size_t)1ULL);
v___x_1624_ = lean_usize_add(v_i_1615_, v___x_1623_);
v___x_1625_ = lean_array_uset(v_bs_x27_1622_, v_i_1615_, v_value_1620_);
v_i_1615_ = v___x_1624_;
v_bs_1616_ = v___x_1625_;
goto _start;
}
else
{
lean_object* v___x_1627_; 
lean_dec_ref(v_bs_1616_);
v___x_1627_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_1627_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_1628_, lean_object* v_i_1629_, lean_object* v_bs_1630_){
_start:
{
size_t v_sz_boxed_1631_; size_t v_i_boxed_1632_; lean_object* v_res_1633_; 
v_sz_boxed_1631_ = lean_unbox_usize(v_sz_1628_);
lean_dec(v_sz_1628_);
v_i_boxed_1632_ = lean_unbox_usize(v_i_1629_);
lean_dec(v_i_1629_);
v_res_1633_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_1631_, v_i_boxed_1632_, v_bs_1630_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2(lean_object* v_context_1636_, lean_object* v_d_1637_){
_start:
{
lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1646_; lean_object* v_received_1647_; lean_object* v___y_1666_; lean_object* v_a_1669_; 
if (lean_obj_tag(v_d_1637_) == 7)
{
lean_object* v_items_1693_; size_t v_sz_1694_; size_t v___x_1695_; lean_object* v___x_1696_; 
v_items_1693_ = lean_ctor_get(v_d_1637_, 0);
v_sz_1694_ = lean_array_size(v_items_1693_);
v___x_1695_ = ((size_t)0ULL);
lean_inc_ref(v_items_1693_);
v___x_1696_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2_spec__3(v_sz_1694_, v___x_1695_, v_items_1693_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v_a_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; uint8_t v___x_1701_; 
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_a_1697_);
lean_dec_ref_known(v___x_1696_, 1);
v___x_1698_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2___closed__1));
v___x_1699_ = lean_string_utf8_byte_size(v_a_1697_);
v___x_1700_ = lean_unsigned_to_nat(0u);
v___x_1701_ = lean_nat_dec_eq(v___x_1699_, v___x_1700_);
if (v___x_1701_ == 0)
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1702_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__4));
v___x_1703_ = lean_string_append(v___x_1702_, v_a_1697_);
lean_dec(v_a_1697_);
v___x_1704_ = lean_string_append(v___x_1698_, v___x_1703_);
lean_dec_ref(v___x_1703_);
v_a_1669_ = v___x_1704_;
goto v___jp_1668_;
}
else
{
lean_dec(v_a_1697_);
v_a_1669_ = v___x_1698_;
goto v___jp_1668_;
}
}
else
{
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v_a_1705_; 
v_a_1705_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_a_1705_);
lean_dec_ref_known(v___x_1696_, 1);
v_a_1669_ = v_a_1705_;
goto v___jp_1668_;
}
else
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
lean_dec_ref_known(v_d_1637_, 1);
v_a_1706_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1696_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1696_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
lean_ctor_set_tag(v___x_1708_, 0);
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
}
else
{
lean_object* v___x_1714_; 
v___x_1714_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v_a_1669_ = v___x_1714_;
goto v___jp_1668_;
}
v___jp_1639_:
{
lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1642_ = lean_string_append(v___y_1640_, v___y_1641_);
lean_dec_ref(v___y_1641_);
v___x_1643_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1642_);
v___x_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1643_);
return v___x_1644_;
}
v___jp_1645_:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; uint8_t v___x_1659_; 
v___x_1648_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_1649_ = lean_string_append(v___x_1648_, v_context_1636_);
v___x_1650_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1));
v___x_1651_ = lean_string_append(v___x_1649_, v___x_1650_);
v___x_1652_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2___closed__0));
v___x_1653_ = lean_string_append(v___x_1651_, v___x_1652_);
v___x_1654_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2));
v___x_1655_ = lean_string_append(v___x_1653_, v___x_1654_);
v___x_1656_ = lean_string_append(v___x_1655_, v_received_1647_);
lean_dec_ref(v_received_1647_);
v___x_1657_ = lean_string_utf8_byte_size(v___y_1646_);
v___x_1658_ = lean_unsigned_to_nat(0u);
v___x_1659_ = lean_nat_dec_eq(v___x_1657_, v___x_1658_);
if (v___x_1659_ == 0)
{
lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1660_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__1));
v___x_1661_ = lean_string_append(v___x_1660_, v___y_1646_);
lean_dec_ref(v___y_1646_);
v___x_1662_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__2));
v___x_1663_ = lean_string_append(v___x_1661_, v___x_1662_);
v___y_1640_ = v___x_1656_;
v___y_1641_ = v___x_1663_;
goto v___jp_1639_;
}
else
{
lean_object* v___x_1664_; 
lean_dec_ref(v___y_1646_);
v___x_1664_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___y_1640_ = v___x_1656_;
v___y_1641_ = v___x_1664_;
goto v___jp_1639_;
}
}
v___jp_1665_:
{
lean_object* v___x_1667_; 
v___x_1667_ = l_Lasm_JS_Data_describe(v_d_1637_);
v___y_1646_ = v___y_1666_;
v_received_1647_ = v___x_1667_;
goto v___jp_1645_;
}
v___jp_1668_:
{
if (lean_obj_tag(v_d_1637_) == 9)
{
lean_object* v_value_1670_; lean_object* v_description_1671_; lean_object* v___x_1672_; uint8_t v___x_1673_; 
v_value_1670_ = lean_ctor_get(v_d_1637_, 0);
v_description_1671_ = lean_ctor_get(v_d_1637_, 1);
v___x_1672_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1673_ = lean_string_dec_eq(v_description_1671_, v___x_1672_);
if (v___x_1673_ == 0)
{
v___y_1666_ = v_a_1669_;
goto v___jp_1665_;
}
else
{
lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1690_; 
lean_inc(v_value_1670_);
v_isSharedCheck_1690_ = !lean_is_exclusive(v_d_1637_);
if (v_isSharedCheck_1690_ == 0)
{
lean_object* v_unused_1691_; lean_object* v_unused_1692_; 
v_unused_1691_ = lean_ctor_get(v_d_1637_, 1);
lean_dec(v_unused_1691_);
v_unused_1692_ = lean_ctor_get(v_d_1637_, 0);
lean_dec(v_unused_1692_);
v___x_1675_ = v_d_1637_;
v_isShared_1676_ = v_isSharedCheck_1690_;
goto v_resetjp_1674_;
}
else
{
lean_dec(v_d_1637_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1690_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
uint32_t v___x_1677_; uint64_t v___x_1678_; lean_object* v___x_1680_; 
v___x_1677_ = 206;
v___x_1678_ = 0ULL;
lean_inc(v_value_1670_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 1, v___x_1672_);
v___x_1680_ = v___x_1675_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_value_1670_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v___x_1672_);
v___x_1680_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
uint32_t v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = lasm_js_value_handle(v_value_1670_);
lean_dec(v_value_1670_);
v___x_1682_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1677_, v___x_1678_, v___x_1680_, v___x_1681_);
lean_dec_ref(v___x_1680_);
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v_a_1683_; uint8_t v___x_1684_; 
v_a_1683_ = lean_ctor_get(v___x_1682_, 0);
lean_inc(v_a_1683_);
lean_dec_ref_known(v___x_1682_, 1);
v___x_1684_ = lean_string_validate_utf8(v_a_1683_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
lean_dec(v_a_1683_);
v___x_1685_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9);
v___x_1686_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1685_);
v___y_1646_ = v_a_1669_;
v_received_1647_ = v___x_1686_;
goto v___jp_1645_;
}
else
{
lean_object* v___x_1687_; 
v___x_1687_ = lean_string_from_utf8_unchecked(v_a_1683_);
v___y_1646_ = v_a_1669_;
v_received_1647_ = v___x_1687_;
goto v___jp_1645_;
}
}
else
{
lean_object* v___x_1688_; 
lean_dec_ref_known(v___x_1682_, 1);
v___x_1688_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10));
v___y_1646_ = v_a_1669_;
v_received_1647_ = v___x_1688_;
goto v___jp_1645_;
}
}
}
}
}
else
{
v___y_1666_ = v_a_1669_;
goto v___jp_1665_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1715_, lean_object* v_d_1716_, lean_object* v_a_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2(v_context_1715_, v_d_1716_);
lean_dec_ref(v_context_1715_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1(lean_object* v_context_1719_, lean_object* v_bytes_1720_){
_start:
{
lean_object* v___x_1722_; 
v___x_1722_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1720_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v_a_1723_; lean_object* v___x_1724_; 
v_a_1723_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_a_1723_);
lean_dec_ref_known(v___x_1722_, 1);
v___x_1724_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2(v_context_1719_, v_a_1723_);
return v___x_1724_;
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
v_a_1725_ = lean_ctor_get(v___x_1722_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1722_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1722_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1___boxed(lean_object* v_context_1733_, lean_object* v_bytes_1734_, lean_object* v_a_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1(v_context_1733_, v_bytes_1734_);
lean_dec_ref(v_bytes_1734_);
lean_dec_ref(v_context_1733_);
return v_res_1736_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1737_; uint8_t v___x_1738_; uint64_t v___x_1739_; 
v___x_1737_ = 8ULL;
v___x_1738_ = 0;
v___x_1739_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__0(v___x_1738_, v___x_1737_);
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0(lean_object* v_o_1740_, lean_object* v_name_1741_, lean_object* v_args_1742_){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; uint64_t v___x_1747_; lean_object* v___x_1748_; 
v___x_1744_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1745_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1745_, 0, v_o_1740_);
lean_ctor_set(v___x_1745_, 1, v___x_1744_);
lean_inc_ref(v_name_1741_);
v___x_1746_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1746_, 0, v_name_1741_);
v___x_1747_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0___closed__0);
v___x_1748_ = l_Lasm_JS_Value_invokeRaw(v___x_1745_, v___x_1746_, v_args_1742_, v___x_1747_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
v___x_1750_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0___closed__1));
v___x_1751_ = lean_string_append(v___x_1750_, v_name_1741_);
lean_dec_ref(v_name_1741_);
v___x_1752_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1(v___x_1751_, v_a_1749_);
lean_dec(v_a_1749_);
lean_dec_ref(v___x_1751_);
return v___x_1752_;
}
else
{
lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1760_; 
lean_dec_ref(v_name_1741_);
v_a_1753_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1755_ = v___x_1748_;
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1748_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1758_; 
if (v_isShared_1756_ == 0)
{
v___x_1758_ = v___x_1755_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_a_1753_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0___boxed(lean_object* v_o_1761_, lean_object* v_name_1762_, lean_object* v_args_1763_, lean_object* v_a_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0(v_o_1761_, v_name_1762_, v_args_1763_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listeners(lean_object* v_self_1767_, lean_object* v_eventName_1768_){
_start:
{
lean_object* v___x_1770_; lean_object* v___y_1772_; 
v___x_1770_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_listeners___closed__0));
if (lean_obj_tag(v_eventName_1768_) == 0)
{
lean_object* v_value_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
v_value_1778_ = lean_ctor_get(v_eventName_1768_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v_eventName_1768_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v_eventName_1768_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_value_1778_);
lean_dec(v_eventName_1768_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
lean_ctor_set_tag(v___x_1780_, 4);
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_value_1778_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
v___y_1772_ = v___x_1783_;
goto v___jp_1771_;
}
}
}
else
{
lean_object* v_value_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v_value_1786_ = lean_ctor_get(v_eventName_1768_, 0);
lean_inc(v_value_1786_);
lean_dec_ref_known(v_eventName_1768_, 1);
v___x_1787_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1788_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1788_, 0, v_value_1786_);
lean_ctor_set(v___x_1788_, 1, v___x_1787_);
v___y_1772_ = v___x_1788_;
goto v___jp_1771_;
}
v___jp_1771_:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1773_ = lean_unsigned_to_nat(1u);
v___x_1774_ = lean_mk_empty_array_with_capacity(v___x_1773_);
v___x_1775_ = lean_array_push(v___x_1774_, v___y_1772_);
v___x_1776_ = l_Lasm_JS_Web_Support_args(v___x_1775_);
v___x_1777_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0(v_self_1767_, v___x_1770_, v___x_1776_);
return v___x_1777_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listeners___boxed(lean_object* v_self_1789_, lean_object* v_eventName_1790_, lean_object* v_a_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l_Lasm_JS_Node_EventEmitter_listeners(v_self_1789_, v_eventName_1790_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off(lean_object* v_self_1793_, lean_object* v_eventName_1794_, lean_object* v_listener_1795_){
_start:
{
lean_object* v___x_1797_; lean_object* v___y_1799_; 
v___x_1797_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_off___closed__0));
if (lean_obj_tag(v_eventName_1794_) == 0)
{
lean_object* v_value_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1831_; 
v_value_1824_ = lean_ctor_get(v_eventName_1794_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v_eventName_1794_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1826_ = v_eventName_1794_;
v_isShared_1827_ = v_isSharedCheck_1831_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_value_1824_);
lean_dec(v_eventName_1794_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1831_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1829_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set_tag(v___x_1826_, 4);
v___x_1829_ = v___x_1826_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_value_1824_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
v___y_1799_ = v___x_1829_;
goto v___jp_1798_;
}
}
}
else
{
lean_object* v_value_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v_value_1832_ = lean_ctor_get(v_eventName_1794_, 0);
lean_inc(v_value_1832_);
lean_dec_ref_known(v_eventName_1794_, 1);
v___x_1833_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1834_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1834_, 0, v_value_1832_);
lean_ctor_set(v___x_1834_, 1, v___x_1833_);
v___y_1799_ = v___x_1834_;
goto v___jp_1798_;
}
v___jp_1798_:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1800_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1801_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1801_, 0, v_listener_1795_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = lean_unsigned_to_nat(2u);
v___x_1803_ = lean_mk_empty_array_with_capacity(v___x_1802_);
v___x_1804_ = lean_array_push(v___x_1803_, v___y_1799_);
v___x_1805_ = lean_array_push(v___x_1804_, v___x_1801_);
v___x_1806_ = l_Lasm_JS_Web_Support_args(v___x_1805_);
v___x_1807_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1793_, v___x_1797_, v___x_1806_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_a_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1815_; 
v_a_1808_ = lean_ctor_get(v___x_1807_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1810_ = v___x_1807_;
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_a_1808_);
lean_dec(v___x_1807_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1813_; 
if (v_isShared_1811_ == 0)
{
v___x_1813_ = v___x_1810_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_a_1808_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
}
else
{
lean_object* v_a_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1823_; 
v_a_1816_ = lean_ctor_get(v___x_1807_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1818_ = v___x_1807_;
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_a_1816_);
lean_dec(v___x_1807_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1821_; 
if (v_isShared_1819_ == 0)
{
v___x_1821_ = v___x_1818_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_a_1816_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off___boxed(lean_object* v_self_1835_, lean_object* v_eventName_1836_, lean_object* v_listener_1837_, lean_object* v_a_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Lasm_JS_Node_EventEmitter_off(v_self_1835_, v_eventName_1836_, v_listener_1837_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on(lean_object* v_self_1840_, lean_object* v_eventName_1841_, lean_object* v_listener_1842_){
_start:
{
lean_object* v___x_1844_; lean_object* v___y_1846_; 
v___x_1844_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_on___closed__0));
if (lean_obj_tag(v_eventName_1841_) == 0)
{
lean_object* v_value_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1878_; 
v_value_1871_ = lean_ctor_get(v_eventName_1841_, 0);
v_isSharedCheck_1878_ = !lean_is_exclusive(v_eventName_1841_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1873_ = v_eventName_1841_;
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_value_1871_);
lean_dec(v_eventName_1841_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1874_ == 0)
{
lean_ctor_set_tag(v___x_1873_, 4);
v___x_1876_ = v___x_1873_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_value_1871_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
v___y_1846_ = v___x_1876_;
goto v___jp_1845_;
}
}
}
else
{
lean_object* v_value_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v_value_1879_ = lean_ctor_get(v_eventName_1841_, 0);
lean_inc(v_value_1879_);
lean_dec_ref_known(v_eventName_1841_, 1);
v___x_1880_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1881_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1881_, 0, v_value_1879_);
lean_ctor_set(v___x_1881_, 1, v___x_1880_);
v___y_1846_ = v___x_1881_;
goto v___jp_1845_;
}
v___jp_1845_:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1847_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1848_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1848_, 0, v_listener_1842_);
lean_ctor_set(v___x_1848_, 1, v___x_1847_);
v___x_1849_ = lean_unsigned_to_nat(2u);
v___x_1850_ = lean_mk_empty_array_with_capacity(v___x_1849_);
v___x_1851_ = lean_array_push(v___x_1850_, v___y_1846_);
v___x_1852_ = lean_array_push(v___x_1851_, v___x_1848_);
v___x_1853_ = l_Lasm_JS_Web_Support_args(v___x_1852_);
v___x_1854_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1840_, v___x_1844_, v___x_1853_);
if (lean_obj_tag(v___x_1854_) == 0)
{
lean_object* v_a_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1862_; 
v_a_1855_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1857_ = v___x_1854_;
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_a_1855_);
lean_dec(v___x_1854_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1860_; 
if (v_isShared_1858_ == 0)
{
v___x_1860_ = v___x_1857_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_a_1855_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
v_a_1863_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1854_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1854_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on___boxed(lean_object* v_self_1882_, lean_object* v_eventName_1883_, lean_object* v_listener_1884_, lean_object* v_a_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_Lasm_JS_Node_EventEmitter_on(v_self_1882_, v_eventName_1883_, v_listener_1884_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once(lean_object* v_self_1887_, lean_object* v_eventName_1888_, lean_object* v_listener_1889_){
_start:
{
lean_object* v___x_1891_; lean_object* v___y_1893_; 
v___x_1891_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_once___closed__0));
if (lean_obj_tag(v_eventName_1888_) == 0)
{
lean_object* v_value_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
v_value_1918_ = lean_ctor_get(v_eventName_1888_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v_eventName_1888_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v_eventName_1888_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_value_1918_);
lean_dec(v_eventName_1888_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
lean_ctor_set_tag(v___x_1920_, 4);
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_value_1918_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
v___y_1893_ = v___x_1923_;
goto v___jp_1892_;
}
}
}
else
{
lean_object* v_value_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v_value_1926_ = lean_ctor_get(v_eventName_1888_, 0);
lean_inc(v_value_1926_);
lean_dec_ref_known(v_eventName_1888_, 1);
v___x_1927_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1928_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1928_, 0, v_value_1926_);
lean_ctor_set(v___x_1928_, 1, v___x_1927_);
v___y_1893_ = v___x_1928_;
goto v___jp_1892_;
}
v___jp_1892_:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1894_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1895_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1895_, 0, v_listener_1889_);
lean_ctor_set(v___x_1895_, 1, v___x_1894_);
v___x_1896_ = lean_unsigned_to_nat(2u);
v___x_1897_ = lean_mk_empty_array_with_capacity(v___x_1896_);
v___x_1898_ = lean_array_push(v___x_1897_, v___y_1893_);
v___x_1899_ = lean_array_push(v___x_1898_, v___x_1895_);
v___x_1900_ = l_Lasm_JS_Web_Support_args(v___x_1899_);
v___x_1901_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1887_, v___x_1891_, v___x_1900_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1901_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1901_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
v_a_1910_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1901_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1901_);
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
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once___boxed(lean_object* v_self_1929_, lean_object* v_eventName_1930_, lean_object* v_listener_1931_, lean_object* v_a_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l_Lasm_JS_Node_EventEmitter_once(v_self_1929_, v_eventName_1930_, v_listener_1931_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_prependListener(lean_object* v_self_1935_, lean_object* v_eventName_1936_, lean_object* v_listener_1937_){
_start:
{
lean_object* v___x_1939_; lean_object* v___y_1941_; 
v___x_1939_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_prependListener___closed__0));
if (lean_obj_tag(v_eventName_1936_) == 0)
{
lean_object* v_value_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1973_; 
v_value_1966_ = lean_ctor_get(v_eventName_1936_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v_eventName_1936_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1968_ = v_eventName_1936_;
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_value_1966_);
lean_dec(v_eventName_1936_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1971_; 
if (v_isShared_1969_ == 0)
{
lean_ctor_set_tag(v___x_1968_, 4);
v___x_1971_ = v___x_1968_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_value_1966_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
v___y_1941_ = v___x_1971_;
goto v___jp_1940_;
}
}
}
else
{
lean_object* v_value_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v_value_1974_ = lean_ctor_get(v_eventName_1936_, 0);
lean_inc(v_value_1974_);
lean_dec_ref_known(v_eventName_1936_, 1);
v___x_1975_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1976_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1976_, 0, v_value_1974_);
lean_ctor_set(v___x_1976_, 1, v___x_1975_);
v___y_1941_ = v___x_1976_;
goto v___jp_1940_;
}
v___jp_1940_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1942_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1943_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1943_, 0, v_listener_1937_);
lean_ctor_set(v___x_1943_, 1, v___x_1942_);
v___x_1944_ = lean_unsigned_to_nat(2u);
v___x_1945_ = lean_mk_empty_array_with_capacity(v___x_1944_);
v___x_1946_ = lean_array_push(v___x_1945_, v___y_1941_);
v___x_1947_ = lean_array_push(v___x_1946_, v___x_1943_);
v___x_1948_ = l_Lasm_JS_Web_Support_args(v___x_1947_);
v___x_1949_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1935_, v___x_1939_, v___x_1948_);
if (lean_obj_tag(v___x_1949_) == 0)
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
v_a_1950_ = lean_ctor_get(v___x_1949_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1949_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1949_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1949_);
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
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
v_a_1958_ = lean_ctor_get(v___x_1949_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1949_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1949_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1949_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_prependListener___boxed(lean_object* v_self_1977_, lean_object* v_eventName_1978_, lean_object* v_listener_1979_, lean_object* v_a_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = l_Lasm_JS_Node_EventEmitter_prependListener(v_self_1977_, v_eventName_1978_, v_listener_1979_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_prependOnceListener(lean_object* v_self_1983_, lean_object* v_eventName_1984_, lean_object* v_listener_1985_){
_start:
{
lean_object* v___x_1987_; lean_object* v___y_1989_; 
v___x_1987_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_prependOnceListener___closed__0));
if (lean_obj_tag(v_eventName_1984_) == 0)
{
lean_object* v_value_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
v_value_2014_ = lean_ctor_get(v_eventName_1984_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v_eventName_1984_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v_eventName_1984_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_value_2014_);
lean_dec(v_eventName_1984_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
lean_ctor_set_tag(v___x_2016_, 4);
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_value_2014_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
v___y_1989_ = v___x_2019_;
goto v___jp_1988_;
}
}
}
else
{
lean_object* v_value_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v_value_2022_ = lean_ctor_get(v_eventName_1984_, 0);
lean_inc(v_value_2022_);
lean_dec_ref_known(v_eventName_1984_, 1);
v___x_2023_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_2024_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2024_, 0, v_value_2022_);
lean_ctor_set(v___x_2024_, 1, v___x_2023_);
v___y_1989_ = v___x_2024_;
goto v___jp_1988_;
}
v___jp_1988_:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1990_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_1991_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1991_, 0, v_listener_1985_);
lean_ctor_set(v___x_1991_, 1, v___x_1990_);
v___x_1992_ = lean_unsigned_to_nat(2u);
v___x_1993_ = lean_mk_empty_array_with_capacity(v___x_1992_);
v___x_1994_ = lean_array_push(v___x_1993_, v___y_1989_);
v___x_1995_ = lean_array_push(v___x_1994_, v___x_1991_);
v___x_1996_ = l_Lasm_JS_Web_Support_args(v___x_1995_);
v___x_1997_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1983_, v___x_1987_, v___x_1996_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1997_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1997_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
v_a_2006_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_1997_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_1997_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_prependOnceListener___boxed(lean_object* v_self_2025_, lean_object* v_eventName_2026_, lean_object* v_listener_2027_, lean_object* v_a_2028_){
_start:
{
lean_object* v_res_2029_; 
v_res_2029_ = l_Lasm_JS_Node_EventEmitter_prependOnceListener(v_self_2025_, v_eventName_2026_, v_listener_2027_);
return v_res_2029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(lean_object* v_x_2030_){
_start:
{
if (lean_obj_tag(v_x_2030_) == 0)
{
lean_object* v___x_2031_; 
v___x_2031_ = lean_box(0);
return v___x_2031_;
}
else
{
lean_object* v_val_2032_; 
v_val_2032_ = lean_ctor_get(v_x_2030_, 0);
lean_inc(v_val_2032_);
lean_dec_ref_known(v_x_2030_, 1);
if (lean_obj_tag(v_val_2032_) == 0)
{
lean_object* v_value_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2040_; 
v_value_2033_ = lean_ctor_get(v_val_2032_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v_val_2032_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2035_ = v_val_2032_;
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_value_2033_);
lean_dec(v_val_2032_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2038_; 
if (v_isShared_2036_ == 0)
{
lean_ctor_set_tag(v___x_2035_, 4);
v___x_2038_ = v___x_2035_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_value_2033_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
else
{
lean_object* v_value_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; 
v_value_2041_ = lean_ctor_get(v_val_2032_, 0);
lean_inc(v_value_2041_);
lean_dec_ref_known(v_val_2032_, 1);
v___x_2042_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_2043_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2043_, 0, v_value_2041_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
return v___x_2043_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners(lean_object* v_self_2044_, lean_object* v_eventName_2045_){
_start:
{
lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2047_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_removeAllListeners___closed__0));
v___x_2048_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(v_eventName_2045_);
v___x_2049_ = lean_unsigned_to_nat(1u);
v___x_2050_ = lean_mk_empty_array_with_capacity(v___x_2049_);
v___x_2051_ = lean_array_push(v___x_2050_, v___x_2048_);
v___x_2052_ = l_Lasm_JS_Web_Support_args(v___x_2051_);
v___x_2053_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2044_, v___x_2047_, v___x_2052_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v_a_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2061_; 
v_a_2054_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2061_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2056_ = v___x_2053_;
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_a_2054_);
lean_dec(v___x_2053_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2059_; 
if (v_isShared_2057_ == 0)
{
v___x_2059_ = v___x_2056_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v_a_2054_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
}
else
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2069_; 
v_a_2062_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2064_ = v___x_2053_;
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___x_2053_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2062_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners___boxed(lean_object* v_self_2070_, lean_object* v_eventName_2071_, lean_object* v_a_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l_Lasm_JS_Node_EventEmitter_removeAllListeners(v_self_2070_, v_eventName_2071_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeListener(lean_object* v_self_2074_, lean_object* v_eventName_2075_, lean_object* v_listener_2076_){
_start:
{
lean_object* v___x_2078_; lean_object* v___y_2080_; 
v___x_2078_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_removeListener___closed__0));
if (lean_obj_tag(v_eventName_2075_) == 0)
{
lean_object* v_value_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
v_value_2105_ = lean_ctor_get(v_eventName_2075_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v_eventName_2075_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v_eventName_2075_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_value_2105_);
lean_dec(v_eventName_2075_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
lean_ctor_set_tag(v___x_2107_, 4);
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_value_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
v___y_2080_ = v___x_2110_;
goto v___jp_2079_;
}
}
}
else
{
lean_object* v_value_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v_value_2113_ = lean_ctor_get(v_eventName_2075_, 0);
lean_inc(v_value_2113_);
lean_dec_ref_known(v_eventName_2075_, 1);
v___x_2114_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_2115_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2115_, 0, v_value_2113_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
v___y_2080_ = v___x_2115_;
goto v___jp_2079_;
}
v___jp_2079_:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2081_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_2082_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2082_, 0, v_listener_2076_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
v___x_2083_ = lean_unsigned_to_nat(2u);
v___x_2084_ = lean_mk_empty_array_with_capacity(v___x_2083_);
v___x_2085_ = lean_array_push(v___x_2084_, v___y_2080_);
v___x_2086_ = lean_array_push(v___x_2085_, v___x_2082_);
v___x_2087_ = l_Lasm_JS_Web_Support_args(v___x_2086_);
v___x_2088_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2074_, v___x_2078_, v___x_2087_);
if (lean_obj_tag(v___x_2088_) == 0)
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
v_a_2089_ = lean_ctor_get(v___x_2088_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___x_2088_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2088_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2089_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
else
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2104_; 
v_a_2097_ = lean_ctor_get(v___x_2088_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2099_ = v___x_2088_;
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2088_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_a_2097_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeListener___boxed(lean_object* v_self_2116_, lean_object* v_eventName_2117_, lean_object* v_listener_2118_, lean_object* v_a_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = l_Lasm_JS_Node_EventEmitter_removeListener(v_self_2116_, v_eventName_2117_, v_listener_2118_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_setMaxListeners(lean_object* v_self_2121_, lean_object* v_n_2122_){
_start:
{
lean_object* v___x_2124_; lean_object* v___y_2126_; lean_object* v___x_2148_; lean_object* v___x_2149_; uint8_t v___x_2150_; 
v___x_2124_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_setMaxListeners___closed__0));
v___x_2148_ = lean_nat_abs(v_n_2122_);
v___x_2149_ = lean_cstr_to_nat("9007199254740991");
v___x_2150_ = lean_nat_dec_le(v___x_2148_, v___x_2149_);
lean_dec(v___x_2148_);
if (v___x_2150_ == 0)
{
lean_object* v___x_2151_; 
v___x_2151_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2151_, 0, v_n_2122_);
v___y_2126_ = v___x_2151_;
goto v___jp_2125_;
}
else
{
double v___x_2152_; lean_object* v___x_2153_; 
v___x_2152_ = l_Float_ofInt(v_n_2122_);
lean_dec(v_n_2122_);
v___x_2153_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2153_, 0, v___x_2152_);
v___y_2126_ = v___x_2153_;
goto v___jp_2125_;
}
v___jp_2125_:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2127_ = lean_unsigned_to_nat(1u);
v___x_2128_ = lean_mk_empty_array_with_capacity(v___x_2127_);
v___x_2129_ = lean_array_push(v___x_2128_, v___y_2126_);
v___x_2130_ = l_Lasm_JS_Web_Support_args(v___x_2129_);
v___x_2131_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2121_, v___x_2124_, v___x_2130_);
if (lean_obj_tag(v___x_2131_) == 0)
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
v_a_2132_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2131_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2131_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
v_a_2140_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2142_ = v___x_2131_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_a_2140_);
lean_dec(v___x_2131_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2143_ == 0)
{
v___x_2145_ = v___x_2142_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_a_2140_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_setMaxListeners___boxed(lean_object* v_self_2154_, lean_object* v_n_2155_, lean_object* v_a_2156_){
_start:
{
lean_object* v_res_2157_; 
v_res_2157_ = l_Lasm_JS_Node_EventEmitter_setMaxListeners(v_self_2154_, v_n_2155_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_rawListeners(lean_object* v_self_2159_, lean_object* v_eventName_2160_){
_start:
{
lean_object* v___x_2162_; lean_object* v___y_2164_; 
v___x_2162_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_rawListeners___closed__0));
if (lean_obj_tag(v_eventName_2160_) == 0)
{
lean_object* v_value_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
v_value_2170_ = lean_ctor_get(v_eventName_2160_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v_eventName_2160_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v_eventName_2160_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_value_2170_);
lean_dec(v_eventName_2160_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
lean_ctor_set_tag(v___x_2172_, 4);
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_value_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
v___y_2164_ = v___x_2175_;
goto v___jp_2163_;
}
}
}
else
{
lean_object* v_value_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v_value_2178_ = lean_ctor_get(v_eventName_2160_, 0);
lean_inc(v_value_2178_);
lean_dec_ref_known(v_eventName_2160_, 1);
v___x_2179_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_2180_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2180_, 0, v_value_2178_);
lean_ctor_set(v___x_2180_, 1, v___x_2179_);
v___y_2164_ = v___x_2180_;
goto v___jp_2163_;
}
v___jp_2163_:
{
lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2165_ = lean_unsigned_to_nat(1u);
v___x_2166_ = lean_mk_empty_array_with_capacity(v___x_2165_);
v___x_2167_ = lean_array_push(v___x_2166_, v___y_2164_);
v___x_2168_ = l_Lasm_JS_Web_Support_args(v___x_2167_);
v___x_2169_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0(v_self_2159_, v___x_2162_, v___x_2168_);
return v___x_2169_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_rawListeners___boxed(lean_object* v_self_2181_, lean_object* v_eventName_2182_, lean_object* v_a_2183_){
_start:
{
lean_object* v_res_2184_; 
v_res_2184_ = l_Lasm_JS_Node_EventEmitter_rawListeners(v_self_2181_, v_eventName_2182_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f(lean_object* v_v_2192_){
_start:
{
lean_object* v___f_2194_; lean_object* v___x_2195_; 
v___f_2194_ = ((lean_object*)(l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___closed__2));
lean_inc(v_v_2192_);
v___x_2195_ = l_Lasm_JS_Web_Support_isInstance(v___f_2194_, v_v_2192_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v_a_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2209_; 
v_a_2196_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2198_ = v___x_2195_;
v_isShared_2199_ = v_isSharedCheck_2209_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_a_2196_);
lean_dec(v___x_2195_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2209_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
uint8_t v___x_2200_; 
v___x_2200_ = lean_unbox(v_a_2196_);
lean_dec(v_a_2196_);
if (v___x_2200_ == 0)
{
lean_object* v___x_2201_; lean_object* v___x_2203_; 
lean_dec(v_v_2192_);
v___x_2201_ = lean_box(0);
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 0, v___x_2201_);
v___x_2203_ = v___x_2198_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v___x_2201_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
else
{
lean_object* v___x_2205_; lean_object* v___x_2207_; 
v___x_2205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2205_, 0, v_v_2192_);
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 0, v___x_2205_);
v___x_2207_ = v___x_2198_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2205_);
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
else
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2217_; 
lean_dec(v_v_2192_);
v_a_2210_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2212_ = v___x_2195_;
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2195_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2215_; 
if (v_isShared_2213_ == 0)
{
v___x_2215_ = v___x_2212_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v_a_2210_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f___boxed(lean_object* v_v_2218_, lean_object* v_a_2219_){
_start:
{
lean_object* v_res_2220_; 
v_res_2220_ = l_Lasm_JS_Node_events_EventEmitterAsyncResource_cast_x3f(v_v_2218_);
return v_res_2220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncId(lean_object* v_self_2222_){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2224_ = ((lean_object*)(l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncId___closed__0));
v___x_2225_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_2222_, v___x_2224_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncId___boxed(lean_object* v_self_2226_, lean_object* v_a_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncId(v_self_2226_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncResource(lean_object* v_self_2230_){
_start:
{
lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2232_ = ((lean_object*)(l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncResource___closed__0));
v___x_2233_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2230_, v___x_2232_);
if (lean_obj_tag(v___x_2233_) == 0)
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
v_a_2234_ = lean_ctor_get(v___x_2233_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2233_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2233_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
else
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2249_; 
v_a_2242_ = lean_ctor_get(v___x_2233_, 0);
v_isSharedCheck_2249_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2249_ == 0)
{
v___x_2244_ = v___x_2233_;
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v___x_2233_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2247_; 
if (v_isShared_2245_ == 0)
{
v___x_2247_ = v___x_2244_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v_a_2242_);
v___x_2247_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
return v___x_2247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncResource___boxed(lean_object* v_self_2250_, lean_object* v_a_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l_Lasm_JS_Node_events_EventEmitterAsyncResource_asyncResource(v_self_2250_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_triggerAsyncId(lean_object* v_self_2254_){
_start:
{
lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2256_ = ((lean_object*)(l_Lasm_JS_Node_events_EventEmitterAsyncResource_triggerAsyncId___closed__0));
v___x_2257_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_2254_, v___x_2256_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_triggerAsyncId___boxed(lean_object* v_self_2258_, lean_object* v_a_2259_){
_start:
{
lean_object* v_res_2260_; 
v_res_2260_ = l_Lasm_JS_Node_events_EventEmitterAsyncResource_triggerAsyncId(v_self_2258_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_emitDestroy(lean_object* v_self_2262_){
_start:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2264_ = ((lean_object*)(l_Lasm_JS_Node_events_EventEmitterAsyncResource_emitDestroy___closed__0));
v___x_2265_ = lean_obj_once(&l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2, &l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2_once, _init_l_Lasm_JS_Node_NodeEventTarget_eventNames___closed__2);
v___x_2266_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2262_, v___x_2264_, v___x_2265_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_EventEmitterAsyncResource_emitDestroy___boxed(lean_object* v_self_2267_, lean_object* v_a_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Lasm_JS_Node_events_EventEmitterAsyncResource_emitDestroy(v_self_2267_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0_spec__0(lean_object* v_module_2271_, lean_object* v_o_2272_, lean_object* v_a_2273_){
_start:
{
if (lean_obj_tag(v_a_2273_) == 0)
{
lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
lean_dec(v_o_2272_);
v___x_2275_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0_spec__0___closed__0));
v___x_2276_ = lean_string_append(v___x_2275_, v_module_2271_);
v___x_2277_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2276_);
v___x_2278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
return v___x_2278_;
}
else
{
lean_object* v_tail_2279_; 
v_tail_2279_ = lean_ctor_get(v_a_2273_, 1);
if (lean_obj_tag(v_tail_2279_) == 0)
{
lean_object* v_head_2280_; lean_object* v___x_2281_; 
v_head_2280_ = lean_ctor_get(v_a_2273_, 0);
lean_inc(v_head_2280_);
lean_dec_ref_known(v_a_2273_, 2);
v___x_2281_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_o_2272_, v_head_2280_);
return v___x_2281_;
}
else
{
lean_object* v_head_2282_; lean_object* v___x_2283_; 
lean_inc(v_tail_2279_);
v_head_2282_ = lean_ctor_get(v_a_2273_, 0);
lean_inc(v_head_2282_);
lean_dec_ref_known(v_a_2273_, 2);
v___x_2283_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_2272_, v_head_2282_);
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v_a_2284_; 
v_a_2284_ = lean_ctor_get(v___x_2283_, 0);
lean_inc(v_a_2284_);
lean_dec_ref_known(v___x_2283_, 1);
v_o_2272_ = v_a_2284_;
v_a_2273_ = v_tail_2279_;
goto _start;
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_dec(v_tail_2279_);
v_a_2286_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2283_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2283_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2291_; 
if (v_isShared_2289_ == 0)
{
v___x_2291_ = v___x_2288_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2286_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0_spec__0___boxed(lean_object* v_module_2294_, lean_object* v_o_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_){
_start:
{
lean_object* v_res_2298_; 
v_res_2298_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0_spec__0(v_module_2294_, v_o_2295_, v_a_2296_);
lean_dec_ref(v_module_2294_);
return v_res_2298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(lean_object* v_module_2299_, lean_object* v_path_2300_){
_start:
{
lean_object* v___x_2302_; 
lean_inc_ref(v_module_2299_);
v___x_2302_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0(v_module_2299_);
if (lean_obj_tag(v___x_2302_) == 0)
{
lean_object* v_a_2303_; lean_object* v___x_2304_; 
v_a_2303_ = lean_ctor_get(v___x_2302_, 0);
lean_inc(v_a_2303_);
lean_dec_ref_known(v___x_2302_, 1);
v___x_2304_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0_spec__0(v_module_2299_, v_a_2303_, v_path_2300_);
lean_dec_ref(v_module_2299_);
return v___x_2304_;
}
else
{
lean_object* v_a_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2312_; 
lean_dec(v_path_2300_);
lean_dec_ref(v_module_2299_);
v_a_2305_ = lean_ctor_get(v___x_2302_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2307_ = v___x_2302_;
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_a_2305_);
lean_dec(v___x_2302_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_a_2305_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0___boxed(lean_object* v_module_2313_, lean_object* v_path_2314_, lean_object* v_a_2315_){
_start:
{
lean_object* v_res_2316_; 
v_res_2316_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v_module_2313_, v_path_2314_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_defaultMaxListeners(){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2322_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0));
v___x_2323_ = ((lean_object*)(l_Lasm_JS_Node_events_defaultMaxListeners___closed__1));
v___x_2324_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_2322_, v___x_2323_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_defaultMaxListeners___boxed(lean_object* v_a_2325_){
_start:
{
lean_object* v_res_2326_; 
v_res_2326_ = l_Lasm_JS_Node_events_defaultMaxListeners();
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_errorMonitor(){
_start:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2332_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0));
v___x_2333_ = ((lean_object*)(l_Lasm_JS_Node_events_errorMonitor___closed__1));
v___x_2334_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_2332_, v___x_2333_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_errorMonitor___boxed(lean_object* v_a_2335_){
_start:
{
lean_object* v_res_2336_; 
v_res_2336_ = l_Lasm_JS_Node_events_errorMonitor();
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0_spec__0(lean_object* v_module_2337_, lean_object* v_o_2338_, lean_object* v_a_2339_){
_start:
{
if (lean_obj_tag(v_a_2339_) == 0)
{
lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
lean_dec(v_o_2338_);
v___x_2341_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0_spec__0___closed__0));
v___x_2342_ = lean_string_append(v___x_2341_, v_module_2337_);
v___x_2343_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2343_, 0, v___x_2342_);
v___x_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2343_);
return v___x_2344_;
}
else
{
lean_object* v_tail_2345_; 
v_tail_2345_ = lean_ctor_get(v_a_2339_, 1);
if (lean_obj_tag(v_tail_2345_) == 0)
{
lean_object* v_head_2346_; lean_object* v___x_2347_; 
v_head_2346_ = lean_ctor_get(v_a_2339_, 0);
lean_inc(v_head_2346_);
lean_dec_ref_known(v_a_2339_, 2);
v___x_2347_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_o_2338_, v_head_2346_);
return v___x_2347_;
}
else
{
lean_object* v_head_2348_; lean_object* v___x_2349_; 
lean_inc(v_tail_2345_);
v_head_2348_ = lean_ctor_get(v_a_2339_, 0);
lean_inc(v_head_2348_);
lean_dec_ref_known(v_a_2339_, 2);
v___x_2349_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_2338_, v_head_2348_);
if (lean_obj_tag(v___x_2349_) == 0)
{
lean_object* v_a_2350_; 
v_a_2350_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_a_2350_);
lean_dec_ref_known(v___x_2349_, 1);
v_o_2338_ = v_a_2350_;
v_a_2339_ = v_tail_2345_;
goto _start;
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
lean_dec(v_tail_2345_);
v_a_2352_ = lean_ctor_get(v___x_2349_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2349_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2349_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2349_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0_spec__0___boxed(lean_object* v_module_2360_, lean_object* v_o_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0_spec__0(v_module_2360_, v_o_2361_, v_a_2362_);
lean_dec_ref(v_module_2360_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(lean_object* v_module_2365_, lean_object* v_path_2366_){
_start:
{
lean_object* v___x_2368_; 
lean_inc_ref(v_module_2365_);
v___x_2368_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0_spec__0(v_module_2365_);
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2370_; 
v_a_2369_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_a_2369_);
lean_dec_ref_known(v___x_2368_, 1);
v___x_2370_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0_spec__0(v_module_2365_, v_a_2369_, v_path_2366_);
lean_dec_ref(v_module_2365_);
return v___x_2370_;
}
else
{
lean_object* v_a_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2378_; 
lean_dec(v_path_2366_);
lean_dec_ref(v_module_2365_);
v_a_2371_ = lean_ctor_get(v___x_2368_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2373_ = v___x_2368_;
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_a_2371_);
lean_dec(v___x_2368_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_a_2371_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0___boxed(lean_object* v_module_2379_, lean_object* v_path_2380_, lean_object* v_a_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v_module_2379_, v_path_2380_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_captureRejections(){
_start:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2388_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0));
v___x_2389_ = ((lean_object*)(l_Lasm_JS_Node_events_captureRejections___closed__1));
v___x_2390_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_2388_, v___x_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_captureRejections___boxed(lean_object* v_a_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = l_Lasm_JS_Node_events_captureRejections();
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_captureRejectionSymbol(){
_start:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2398_ = ((lean_object*)(l_Lasm_JS_Node_NodeEventTarget_cast_x3f___closed__0));
v___x_2399_ = ((lean_object*)(l_Lasm_JS_Node_events_captureRejectionSymbol___closed__1));
v___x_2400_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_AsyncResource_cast_x3f_spec__0(v___x_2398_, v___x_2399_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_captureRejectionSymbol___boxed(lean_object* v_a_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l_Lasm_JS_Node_events_captureRejectionSymbol();
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getEventListeners_spec__0(lean_object* v_b_2403_, lean_object* v_args_2404_, uint8_t v_await_2405_){
_start:
{
uint64_t v___y_2408_; uint64_t v___y_2409_; uint64_t v___x_2452_; uint64_t v___y_2454_; 
v___x_2452_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0);
if (v_await_2405_ == 0)
{
uint64_t v___x_2459_; 
v___x_2459_ = 0ULL;
v___y_2454_ = v___x_2459_;
goto v___jp_2453_;
}
else
{
uint64_t v___x_2460_; 
v___x_2460_ = 2ULL;
v___y_2454_ = v___x_2460_;
goto v___jp_2453_;
}
v___jp_2407_:
{
uint64_t v_flags_2410_; uint32_t v___x_2411_; lean_object* v___x_2412_; uint32_t v___x_2413_; lean_object* v___x_2414_; 
v_flags_2410_ = lean_uint64_lor(v___y_2408_, v___y_2409_);
v___x_2411_ = 214;
v___x_2412_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2403_, v_args_2404_);
v___x_2413_ = 0;
v___x_2414_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2411_, v_flags_2410_, v___x_2412_, v___x_2413_);
lean_dec(v___x_2412_);
if (lean_obj_tag(v___x_2414_) == 0)
{
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v_a_2415_; lean_object* v___x_2416_; 
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2414_, 1);
v___x_2416_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2415_);
lean_dec(v_a_2415_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v_a_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; 
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
lean_inc(v_a_2417_);
lean_dec_ref_known(v___x_2416_, 1);
v___x_2418_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2403_);
v___x_2419_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listeners_spec__0_spec__1_spec__2(v___x_2418_, v_a_2417_);
lean_dec_ref(v___x_2418_);
return v___x_2419_;
}
else
{
lean_object* v_a_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2427_; 
v_a_2420_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2422_ = v___x_2416_;
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_a_2420_);
lean_dec(v___x_2416_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2425_; 
if (v_isShared_2423_ == 0)
{
v___x_2425_ = v___x_2422_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_a_2420_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
}
else
{
lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2435_; 
v_a_2428_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2435_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2430_ = v___x_2414_;
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_a_2428_);
lean_dec(v___x_2414_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2433_; 
if (v_isShared_2431_ == 0)
{
lean_ctor_set_tag(v___x_2430_, 1);
v___x_2433_ = v___x_2430_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v_a_2428_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
return v___x_2433_;
}
}
}
}
else
{
lean_object* v_a_2436_; lean_object* v___x_2438_; uint8_t v_isShared_2439_; uint8_t v_isSharedCheck_2451_; 
v_a_2436_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2438_ = v___x_2414_;
v_isShared_2439_ = v_isSharedCheck_2451_;
goto v_resetjp_2437_;
}
else
{
lean_inc(v_a_2436_);
lean_dec(v___x_2414_);
v___x_2438_ = lean_box(0);
v_isShared_2439_ = v_isSharedCheck_2451_;
goto v_resetjp_2437_;
}
v_resetjp_2437_:
{
lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2449_; 
v___x_2440_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_2441_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2403_);
v___x_2442_ = lean_string_append(v___x_2440_, v___x_2441_);
lean_dec_ref(v___x_2441_);
v___x_2443_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__4));
v___x_2444_ = lean_string_append(v___x_2442_, v___x_2443_);
v___x_2445_ = lean_io_error_to_string(v_a_2436_);
v___x_2446_ = lean_string_append(v___x_2444_, v___x_2445_);
lean_dec_ref(v___x_2445_);
v___x_2447_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2447_, 0, v___x_2446_);
if (v_isShared_2439_ == 0)
{
lean_ctor_set(v___x_2438_, 0, v___x_2447_);
v___x_2449_ = v___x_2438_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v___x_2447_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
}
v___jp_2453_:
{
uint8_t v_construct_2455_; uint64_t v___x_2456_; 
v_construct_2455_ = lean_ctor_get_uint8(v_b_2403_, sizeof(void*)*4);
v___x_2456_ = lean_uint64_lor(v___x_2452_, v___y_2454_);
if (v_construct_2455_ == 0)
{
uint64_t v___x_2457_; 
v___x_2457_ = 0ULL;
v___y_2408_ = v___x_2456_;
v___y_2409_ = v___x_2457_;
goto v___jp_2407_;
}
else
{
uint64_t v___x_2458_; 
v___x_2458_ = 4ULL;
v___y_2408_ = v___x_2456_;
v___y_2409_ = v___x_2458_;
goto v___jp_2407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getEventListeners_spec__0___boxed(lean_object* v_b_2461_, lean_object* v_args_2462_, lean_object* v_await_2463_, lean_object* v_a_2464_){
_start:
{
uint8_t v_await_boxed_2465_; lean_object* v_res_2466_; 
v_await_boxed_2465_ = lean_unbox(v_await_2463_);
v_res_2466_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getEventListeners_spec__0(v_b_2461_, v_args_2462_, v_await_boxed_2465_);
lean_dec_ref(v_b_2461_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_getEventListeners(lean_object* v_emitterOrTarget_2475_, lean_object* v_eventName_2476_){
_start:
{
uint8_t v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___y_2482_; lean_object* v___y_2483_; lean_object* v___y_2490_; lean_object* v_value_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2478_ = 0;
v___x_2479_ = lean_unsigned_to_nat(2u);
v___x_2480_ = ((lean_object*)(l_Lasm_JS_Node_events_getEventListeners___closed__2));
v_value_2502_ = lean_ctor_get(v_emitterOrTarget_2475_, 0);
v___x_2503_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
lean_inc(v_value_2502_);
v___x_2504_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2504_, 0, v_value_2502_);
lean_ctor_set(v___x_2504_, 1, v___x_2503_);
v___y_2490_ = v___x_2504_;
goto v___jp_2489_;
v___jp_2481_:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2484_ = lean_mk_empty_array_with_capacity(v___x_2479_);
v___x_2485_ = lean_array_push(v___x_2484_, v___y_2482_);
v___x_2486_ = lean_array_push(v___x_2485_, v___y_2483_);
v___x_2487_ = l_Lasm_JS_Web_Support_args(v___x_2486_);
v___x_2488_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getEventListeners_spec__0(v___x_2480_, v___x_2487_, v___x_2478_);
return v___x_2488_;
}
v___jp_2489_:
{
if (lean_obj_tag(v_eventName_2476_) == 0)
{
lean_object* v_value_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
v_value_2491_ = lean_ctor_get(v_eventName_2476_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v_eventName_2476_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v_eventName_2476_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_value_2491_);
lean_dec(v_eventName_2476_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
lean_ctor_set_tag(v___x_2493_, 4);
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_value_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
v___y_2482_ = v___y_2490_;
v___y_2483_ = v___x_2496_;
goto v___jp_2481_;
}
}
}
else
{
lean_object* v_value_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v_value_2499_ = lean_ctor_get(v_eventName_2476_, 0);
lean_inc(v_value_2499_);
lean_dec_ref_known(v_eventName_2476_, 1);
v___x_2500_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_2501_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2501_, 0, v_value_2499_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
v___y_2482_ = v___y_2490_;
v___y_2483_ = v___x_2501_;
goto v___jp_2481_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_getEventListeners___boxed(lean_object* v_emitterOrTarget_2505_, lean_object* v_eventName_2506_, lean_object* v_a_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l_Lasm_JS_Node_events_getEventListeners(v_emitterOrTarget_2505_, v_eventName_2506_);
lean_dec_ref(v_emitterOrTarget_2505_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getMaxListeners_spec__0(lean_object* v_b_2509_, lean_object* v_args_2510_, uint8_t v_await_2511_){
_start:
{
uint64_t v___y_2514_; uint64_t v___y_2515_; uint64_t v___x_2558_; uint64_t v___y_2560_; 
v___x_2558_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0);
if (v_await_2511_ == 0)
{
uint64_t v___x_2565_; 
v___x_2565_ = 0ULL;
v___y_2560_ = v___x_2565_;
goto v___jp_2559_;
}
else
{
uint64_t v___x_2566_; 
v___x_2566_ = 2ULL;
v___y_2560_ = v___x_2566_;
goto v___jp_2559_;
}
v___jp_2513_:
{
uint64_t v_flags_2516_; uint32_t v___x_2517_; lean_object* v___x_2518_; uint32_t v___x_2519_; lean_object* v___x_2520_; 
v_flags_2516_ = lean_uint64_lor(v___y_2514_, v___y_2515_);
v___x_2517_ = 214;
v___x_2518_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2509_, v_args_2510_);
v___x_2519_ = 0;
v___x_2520_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2517_, v_flags_2516_, v___x_2518_, v___x_2519_);
lean_dec(v___x_2518_);
if (lean_obj_tag(v___x_2520_) == 0)
{
if (lean_obj_tag(v___x_2520_) == 0)
{
lean_object* v_a_2521_; lean_object* v___x_2522_; 
v_a_2521_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_a_2521_);
lean_dec_ref_known(v___x_2520_, 1);
v___x_2522_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2521_);
lean_dec(v_a_2521_);
if (lean_obj_tag(v___x_2522_) == 0)
{
lean_object* v_a_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v_a_2523_ = lean_ctor_get(v___x_2522_, 0);
lean_inc(v_a_2523_);
lean_dec_ref_known(v___x_2522_, 1);
v___x_2524_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2509_);
v___x_2525_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v___x_2524_, v_a_2523_);
lean_dec_ref(v___x_2524_);
return v___x_2525_;
}
else
{
lean_object* v_a_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2533_; 
v_a_2526_ = lean_ctor_get(v___x_2522_, 0);
v_isSharedCheck_2533_ = !lean_is_exclusive(v___x_2522_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2528_ = v___x_2522_;
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_a_2526_);
lean_dec(v___x_2522_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
lean_object* v___x_2531_; 
if (v_isShared_2529_ == 0)
{
v___x_2531_ = v___x_2528_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2526_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
}
else
{
lean_object* v_a_2534_; lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2541_; 
v_a_2534_ = lean_ctor_get(v___x_2520_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2520_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2536_ = v___x_2520_;
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
else
{
lean_inc(v_a_2534_);
lean_dec(v___x_2520_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2539_; 
if (v_isShared_2537_ == 0)
{
lean_ctor_set_tag(v___x_2536_, 1);
v___x_2539_ = v___x_2536_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2557_; 
v_a_2542_ = lean_ctor_get(v___x_2520_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2520_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2544_ = v___x_2520_;
v_isShared_2545_ = v_isSharedCheck_2557_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2520_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2557_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2555_; 
v___x_2546_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_2547_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2509_);
v___x_2548_ = lean_string_append(v___x_2546_, v___x_2547_);
lean_dec_ref(v___x_2547_);
v___x_2549_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__4));
v___x_2550_ = lean_string_append(v___x_2548_, v___x_2549_);
v___x_2551_ = lean_io_error_to_string(v_a_2542_);
v___x_2552_ = lean_string_append(v___x_2550_, v___x_2551_);
lean_dec_ref(v___x_2551_);
v___x_2553_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2553_, 0, v___x_2552_);
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 0, v___x_2553_);
v___x_2555_ = v___x_2544_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v___x_2553_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
v___jp_2559_:
{
uint8_t v_construct_2561_; uint64_t v___x_2562_; 
v_construct_2561_ = lean_ctor_get_uint8(v_b_2509_, sizeof(void*)*4);
v___x_2562_ = lean_uint64_lor(v___x_2558_, v___y_2560_);
if (v_construct_2561_ == 0)
{
uint64_t v___x_2563_; 
v___x_2563_ = 0ULL;
v___y_2514_ = v___x_2562_;
v___y_2515_ = v___x_2563_;
goto v___jp_2513_;
}
else
{
uint64_t v___x_2564_; 
v___x_2564_ = 4ULL;
v___y_2514_ = v___x_2562_;
v___y_2515_ = v___x_2564_;
goto v___jp_2513_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getMaxListeners_spec__0___boxed(lean_object* v_b_2567_, lean_object* v_args_2568_, lean_object* v_await_2569_, lean_object* v_a_2570_){
_start:
{
uint8_t v_await_boxed_2571_; lean_object* v_res_2572_; 
v_await_boxed_2571_ = lean_unbox(v_await_2569_);
v_res_2572_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getMaxListeners_spec__0(v_b_2567_, v_args_2568_, v_await_boxed_2571_);
lean_dec_ref(v_b_2567_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_getMaxListeners(lean_object* v_emitterOrTarget_2580_){
_start:
{
uint8_t v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___y_2586_; lean_object* v_value_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2582_ = 0;
v___x_2583_ = lean_unsigned_to_nat(1u);
v___x_2584_ = ((lean_object*)(l_Lasm_JS_Node_events_getMaxListeners___closed__1));
v_value_2591_ = lean_ctor_get(v_emitterOrTarget_2580_, 0);
v___x_2592_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
lean_inc(v_value_2591_);
v___x_2593_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2593_, 0, v_value_2591_);
lean_ctor_set(v___x_2593_, 1, v___x_2592_);
v___y_2586_ = v___x_2593_;
goto v___jp_2585_;
v___jp_2585_:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2587_ = lean_mk_empty_array_with_capacity(v___x_2583_);
v___x_2588_ = lean_array_push(v___x_2587_, v___y_2586_);
v___x_2589_ = l_Lasm_JS_Web_Support_args(v___x_2588_);
v___x_2590_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getMaxListeners_spec__0(v___x_2584_, v___x_2589_, v___x_2582_);
return v___x_2590_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_getMaxListeners___boxed(lean_object* v_emitterOrTarget_2594_, lean_object* v_a_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l_Lasm_JS_Node_events_getMaxListeners(v_emitterOrTarget_2594_);
lean_dec_ref(v_emitterOrTarget_2594_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(lean_object* v___f_2597_, lean_object* v_bytes_2598_){
_start:
{
lean_object* v___x_2600_; uint8_t v___x_2601_; lean_object* v_val_2603_; lean_object* v___x_2606_; 
v___x_2600_ = lean_unsigned_to_nat(0u);
v___x_2601_ = 0;
v___x_2606_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2598_);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2609_ = v___x_2606_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2606_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set_tag(v___x_2609_, 1);
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2607_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
v_val_2603_ = v___x_2612_;
goto v___jp_2602_;
}
}
}
else
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2622_; 
v_a_2615_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2617_ = v___x_2606_;
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2606_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2620_; 
if (v_isShared_2618_ == 0)
{
lean_ctor_set_tag(v___x_2617_, 0);
v___x_2620_ = v___x_2617_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_a_2615_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
v_val_2603_ = v___x_2620_;
goto v___jp_2602_;
}
}
}
v___jp_2602_:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2604_, 0, v_val_2603_);
v___x_2605_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2600_, v___x_2601_, v___x_2604_, v___f_2597_);
return v___x_2605_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed(lean_object* v___f_2623_, lean_object* v_bytes_2624_, lean_object* v___y_2625_){
_start:
{
lean_object* v_res_2626_; 
v_res_2626_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(v___f_2623_, v_bytes_2624_);
lean_dec_ref(v_bytes_2624_);
return v_res_2626_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(lean_object* v___f_2627_, lean_object* v_x_2628_){
_start:
{
if (lean_obj_tag(v_x_2628_) == 0)
{
lean_object* v_a_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2638_; 
lean_dec_ref(v___f_2627_);
v_a_2630_ = lean_ctor_get(v_x_2628_, 0);
v_isSharedCheck_2638_ = !lean_is_exclusive(v_x_2628_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2632_ = v_x_2628_;
v_isShared_2633_ = v_isSharedCheck_2638_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_a_2630_);
lean_dec(v_x_2628_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2638_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2635_; 
if (v_isShared_2633_ == 0)
{
v___x_2635_ = v___x_2632_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v_a_2630_);
v___x_2635_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
lean_object* v___x_2636_; 
v___x_2636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2636_, 0, v___x_2635_);
return v___x_2636_;
}
}
}
else
{
lean_object* v_a_2639_; lean_object* v___x_2640_; 
v_a_2639_ = lean_ctor_get(v_x_2628_, 0);
lean_inc(v_a_2639_);
lean_dec_ref_known(v_x_2628_, 1);
v___x_2640_ = lean_apply_2(v___f_2627_, v_a_2639_, lean_box(0));
return v___x_2640_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed(lean_object* v___f_2641_, lean_object* v_x_2642_, lean_object* v___y_2643_){
_start:
{
lean_object* v_res_2644_; 
v_res_2644_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(v___f_2641_, v_x_2642_);
return v_res_2644_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(lean_object* v_failurePrefix_2645_, lean_object* v_x_2646_){
_start:
{
if (lean_obj_tag(v_x_2646_) == 0)
{
lean_object* v_a_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2659_; 
v_a_2648_ = lean_ctor_get(v_x_2646_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v_x_2646_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2650_ = v_x_2646_;
v_isShared_2651_ = v_isSharedCheck_2659_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_a_2648_);
lean_dec(v_x_2646_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2659_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2656_; 
v___x_2652_ = lean_io_error_to_string(v_a_2648_);
v___x_2653_ = lean_string_append(v_failurePrefix_2645_, v___x_2652_);
lean_dec_ref(v___x_2652_);
v___x_2654_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2653_);
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2654_);
v___x_2656_ = v___x_2650_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v___x_2654_);
v___x_2656_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
lean_object* v___x_2657_; 
v___x_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2656_);
return v___x_2657_;
}
}
}
else
{
lean_object* v___x_2660_; 
lean_dec_ref(v_failurePrefix_2645_);
v___x_2660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2660_, 0, v_x_2646_);
return v___x_2660_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed(lean_object* v_failurePrefix_2661_, lean_object* v_x_2662_, lean_object* v___y_2663_){
_start:
{
lean_object* v_res_2664_; 
v_res_2664_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(v_failurePrefix_2661_, v_x_2662_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(lean_object* v_a_2665_, lean_object* v_x_2666_){
_start:
{
if (lean_obj_tag(v_x_2666_) == 0)
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2676_; 
v_a_2668_ = lean_ctor_get(v_x_2666_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v_x_2666_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2670_ = v_x_2666_;
v_isShared_2671_ = v_isSharedCheck_2676_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v_x_2666_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2676_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2668_);
v___x_2673_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2674_; 
v___x_2674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2673_);
return v___x_2674_;
}
}
}
else
{
lean_object* v___x_2677_; 
lean_dec_ref_known(v_x_2666_, 1);
v___x_2677_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2665_);
return v___x_2677_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed(lean_object* v_a_2678_, lean_object* v_x_2679_, lean_object* v___y_2680_){
_start:
{
lean_object* v_res_2681_; 
v_res_2681_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(v_a_2678_, v_x_2679_);
lean_dec(v_a_2678_);
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(lean_object* v___x_2682_, uint8_t v___x_2683_, lean_object* v___f_2684_, lean_object* v_a_2685_, uint32_t v_op_2686_, uint64_t v_flags_2687_, lean_object* v_payload_2688_, lean_object* v_x_2689_){
_start:
{
lean_object* v_val_2692_; 
if (lean_obj_tag(v_x_2689_) == 0)
{
lean_object* v___x_2695_; 
lean_dec_ref(v___f_2684_);
lean_dec(v___x_2682_);
v___x_2695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2695_, 0, v_x_2689_);
return v___x_2695_;
}
else
{
lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2710_; 
v_a_2696_ = lean_ctor_get(v_x_2689_, 0);
v_isSharedCheck_2710_ = !lean_is_exclusive(v_x_2689_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2698_ = v_x_2689_;
v_isShared_2699_ = v_isSharedCheck_2710_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_dec(v_x_2689_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2710_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
uint32_t v___x_2700_; lean_object* v___x_2701_; 
v___x_2700_ = 0;
v___x_2701_ = lasm_js_call_into(v_a_2685_, v_op_2686_, v___x_2700_, v_flags_2687_, v_a_2696_, v_payload_2688_);
lean_dec(v_a_2696_);
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v_a_2702_; lean_object* v___x_2704_; 
v_a_2702_ = lean_ctor_get(v___x_2701_, 0);
lean_inc(v_a_2702_);
lean_dec_ref_known(v___x_2701_, 1);
if (v_isShared_2699_ == 0)
{
lean_ctor_set(v___x_2698_, 0, v_a_2702_);
v___x_2704_ = v___x_2698_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2702_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
v_val_2692_ = v___x_2704_;
goto v___jp_2691_;
}
}
else
{
lean_object* v_a_2706_; lean_object* v___x_2708_; 
v_a_2706_ = lean_ctor_get(v___x_2701_, 0);
lean_inc(v_a_2706_);
lean_dec_ref_known(v___x_2701_, 1);
if (v_isShared_2699_ == 0)
{
lean_ctor_set_tag(v___x_2698_, 0);
lean_ctor_set(v___x_2698_, 0, v_a_2706_);
v___x_2708_ = v___x_2698_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_a_2706_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
v_val_2692_ = v___x_2708_;
goto v___jp_2691_;
}
}
}
}
v___jp_2691_:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2693_, 0, v_val_2692_);
v___x_2694_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2682_, v___x_2683_, v___x_2693_, v___f_2684_);
return v___x_2694_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed(lean_object* v___x_2711_, lean_object* v___x_2712_, lean_object* v___f_2713_, lean_object* v_a_2714_, lean_object* v_op_2715_, lean_object* v_flags_2716_, lean_object* v_payload_2717_, lean_object* v_x_2718_, lean_object* v___y_2719_){
_start:
{
uint8_t v___x_1391__boxed_2720_; uint32_t v_op_boxed_2721_; uint64_t v_flags_boxed_2722_; lean_object* v_res_2723_; 
v___x_1391__boxed_2720_ = lean_unbox(v___x_2712_);
v_op_boxed_2721_ = lean_unbox_uint32(v_op_2715_);
lean_dec(v_op_2715_);
v_flags_boxed_2722_ = lean_unbox_uint64(v_flags_2716_);
lean_dec_ref(v_flags_2716_);
v_res_2723_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(v___x_2711_, v___x_1391__boxed_2720_, v___f_2713_, v_a_2714_, v_op_boxed_2721_, v_flags_boxed_2722_, v_payload_2717_, v_x_2718_);
lean_dec(v_payload_2717_);
lean_dec(v_a_2714_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(lean_object* v___f_2724_, lean_object* v_a_2725_, uint32_t v_op_2726_, uint64_t v_flags_2727_, lean_object* v_payload_2728_, lean_object* v_x_2729_){
_start:
{
if (lean_obj_tag(v_x_2729_) == 0)
{
lean_object* v___x_2731_; 
lean_dec_ref(v___f_2724_);
v___x_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2731_, 0, v_x_2729_);
return v___x_2731_;
}
else
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2752_; 
v_a_2732_ = lean_ctor_get(v_x_2729_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v_x_2729_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2734_ = v_x_2729_;
v_isShared_2735_ = v_isSharedCheck_2752_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v_x_2729_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2752_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
uint32_t v___x_2736_; lean_object* v___x_2737_; uint8_t v___x_2738_; lean_object* v_val_2740_; lean_object* v___x_2743_; 
v___x_2736_ = 0;
v___x_2737_ = lean_unsigned_to_nat(0u);
v___x_2738_ = 0;
v___x_2743_ = lasm_js_call_into(v_a_2725_, v_op_2726_, v___x_2736_, v_flags_2727_, v_a_2732_, v_payload_2728_);
lean_dec(v_a_2732_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v_a_2744_; lean_object* v___x_2746_; 
v_a_2744_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2744_);
lean_dec_ref_known(v___x_2743_, 1);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 0, v_a_2744_);
v___x_2746_ = v___x_2734_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v_a_2744_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
v_val_2740_ = v___x_2746_;
goto v___jp_2739_;
}
}
else
{
lean_object* v_a_2748_; lean_object* v___x_2750_; 
v_a_2748_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2748_);
lean_dec_ref_known(v___x_2743_, 1);
if (v_isShared_2735_ == 0)
{
lean_ctor_set_tag(v___x_2734_, 0);
lean_ctor_set(v___x_2734_, 0, v_a_2748_);
v___x_2750_ = v___x_2734_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_a_2748_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
v_val_2740_ = v___x_2750_;
goto v___jp_2739_;
}
}
v___jp_2739_:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2741_, 0, v_val_2740_);
v___x_2742_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2737_, v___x_2738_, v___x_2741_, v___f_2724_);
return v___x_2742_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed(lean_object* v___f_2753_, lean_object* v_a_2754_, lean_object* v_op_2755_, lean_object* v_flags_2756_, lean_object* v_payload_2757_, lean_object* v_x_2758_, lean_object* v___y_2759_){
_start:
{
uint32_t v_op_boxed_2760_; uint64_t v_flags_boxed_2761_; lean_object* v_res_2762_; 
v_op_boxed_2760_ = lean_unbox_uint32(v_op_2755_);
lean_dec(v_op_2755_);
v_flags_boxed_2761_ = lean_unbox_uint64(v_flags_2756_);
lean_dec_ref(v_flags_2756_);
v_res_2762_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(v___f_2753_, v_a_2754_, v_op_boxed_2760_, v_flags_boxed_2761_, v_payload_2757_, v_x_2758_);
lean_dec(v_payload_2757_);
lean_dec(v_a_2754_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(lean_object* v_failurePrefix_2763_, uint32_t v_op_2764_, uint64_t v_flags_2765_, lean_object* v_payload_2766_, lean_object* v___f_2767_, lean_object* v___f_2768_, lean_object* v___f_2769_, lean_object* v_x_2770_){
_start:
{
if (lean_obj_tag(v_x_2770_) == 0)
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2780_; 
lean_dec_ref(v___f_2769_);
lean_dec_ref(v___f_2768_);
lean_dec_ref(v___f_2767_);
lean_dec(v_payload_2766_);
v_a_2772_ = lean_ctor_get(v_x_2770_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v_x_2770_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2774_ = v_x_2770_;
v_isShared_2775_ = v_isSharedCheck_2780_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v_x_2770_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2780_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
lean_object* v___x_2778_; 
v___x_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
return v___x_2778_;
}
}
}
else
{
lean_object* v_a_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2827_; 
v_a_2781_ = lean_ctor_get(v_x_2770_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v_x_2770_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2783_ = v_x_2770_;
v_isShared_2784_ = v_isSharedCheck_2827_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_a_2781_);
lean_dec(v_x_2770_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2827_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; uint8_t v___x_2787_; 
v___x_2785_ = lean_string_utf8_byte_size(v_failurePrefix_2763_);
v___x_2786_ = lean_unsigned_to_nat(0u);
v___x_2787_ = lean_nat_dec_eq(v___x_2785_, v___x_2786_);
if (v___x_2787_ == 0)
{
lean_object* v___f_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___f_2792_; lean_object* v_val_2794_; lean_object* v___x_2799_; 
lean_dec_ref(v___f_2769_);
lean_inc(v_a_2781_);
v___f_2788_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2788_, 0, v_a_2781_);
v___x_2789_ = lean_box(v___x_2787_);
v___x_2790_ = lean_box_uint32(v_op_2764_);
v___x_2791_ = lean_box_uint64(v_flags_2765_);
lean_inc(v_payload_2766_);
v___f_2792_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2792_, 0, v___x_2786_);
lean_closure_set(v___f_2792_, 1, v___x_2789_);
lean_closure_set(v___f_2792_, 2, v___f_2788_);
lean_closure_set(v___f_2792_, 3, v_a_2781_);
lean_closure_set(v___f_2792_, 4, v___x_2790_);
lean_closure_set(v___f_2792_, 5, v___x_2791_);
lean_closure_set(v___f_2792_, 6, v_payload_2766_);
v___x_2799_ = l_Lasm_JS_Wire_encodeIO(v_payload_2766_);
lean_dec(v_payload_2766_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_a_2800_; lean_object* v___x_2802_; 
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_a_2800_);
lean_dec_ref_known(v___x_2799_, 1);
if (v_isShared_2784_ == 0)
{
lean_ctor_set(v___x_2783_, 0, v_a_2800_);
v___x_2802_ = v___x_2783_;
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
v_val_2794_ = v___x_2802_;
goto v___jp_2793_;
}
}
else
{
lean_object* v_a_2804_; lean_object* v___x_2806_; 
v_a_2804_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_a_2804_);
lean_dec_ref_known(v___x_2799_, 1);
if (v_isShared_2784_ == 0)
{
lean_ctor_set_tag(v___x_2783_, 0);
lean_ctor_set(v___x_2783_, 0, v_a_2804_);
v___x_2806_ = v___x_2783_;
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
v_val_2794_ = v___x_2806_;
goto v___jp_2793_;
}
}
v___jp_2793_:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2795_, 0, v_val_2794_);
v___x_2796_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2786_, v___x_2787_, v___x_2795_, v___f_2792_);
v___x_2797_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2786_, v___x_2787_, v___x_2796_, v___f_2767_);
v___x_2798_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2786_, v___x_2787_, v___x_2797_, v___f_2768_);
return v___x_2798_;
}
}
else
{
lean_object* v___f_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___f_2811_; uint8_t v___x_2812_; lean_object* v_val_2814_; lean_object* v___x_2818_; 
lean_dec_ref(v___f_2768_);
lean_dec_ref(v___f_2767_);
lean_inc(v_a_2781_);
v___f_2808_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2808_, 0, v_a_2781_);
v___x_2809_ = lean_box_uint32(v_op_2764_);
v___x_2810_ = lean_box_uint64(v_flags_2765_);
lean_inc(v_payload_2766_);
v___f_2811_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2811_, 0, v___f_2808_);
lean_closure_set(v___f_2811_, 1, v_a_2781_);
lean_closure_set(v___f_2811_, 2, v___x_2809_);
lean_closure_set(v___f_2811_, 3, v___x_2810_);
lean_closure_set(v___f_2811_, 4, v_payload_2766_);
v___x_2812_ = 0;
v___x_2818_ = l_Lasm_JS_Wire_encodeIO(v_payload_2766_);
lean_dec(v_payload_2766_);
if (lean_obj_tag(v___x_2818_) == 0)
{
lean_object* v_a_2819_; lean_object* v___x_2821_; 
v_a_2819_ = lean_ctor_get(v___x_2818_, 0);
lean_inc(v_a_2819_);
lean_dec_ref_known(v___x_2818_, 1);
if (v_isShared_2784_ == 0)
{
lean_ctor_set(v___x_2783_, 0, v_a_2819_);
v___x_2821_ = v___x_2783_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_a_2819_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
v_val_2814_ = v___x_2821_;
goto v___jp_2813_;
}
}
else
{
lean_object* v_a_2823_; lean_object* v___x_2825_; 
v_a_2823_ = lean_ctor_get(v___x_2818_, 0);
lean_inc(v_a_2823_);
lean_dec_ref_known(v___x_2818_, 1);
if (v_isShared_2784_ == 0)
{
lean_ctor_set_tag(v___x_2783_, 0);
lean_ctor_set(v___x_2783_, 0, v_a_2823_);
v___x_2825_ = v___x_2783_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_a_2823_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
v_val_2814_ = v___x_2825_;
goto v___jp_2813_;
}
}
v___jp_2813_:
{
lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2815_, 0, v_val_2814_);
v___x_2816_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2786_, v___x_2812_, v___x_2815_, v___f_2811_);
v___x_2817_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2786_, v___x_2812_, v___x_2816_, v___f_2769_);
return v___x_2817_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed(lean_object* v_failurePrefix_2828_, lean_object* v_op_2829_, lean_object* v_flags_2830_, lean_object* v_payload_2831_, lean_object* v___f_2832_, lean_object* v___f_2833_, lean_object* v___f_2834_, lean_object* v_x_2835_, lean_object* v___y_2836_){
_start:
{
uint32_t v_op_boxed_2837_; uint64_t v_flags_boxed_2838_; lean_object* v_res_2839_; 
v_op_boxed_2837_ = lean_unbox_uint32(v_op_2829_);
lean_dec(v_op_2829_);
v_flags_boxed_2838_ = lean_unbox_uint64(v_flags_2830_);
lean_dec_ref(v_flags_2830_);
v_res_2839_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(v_failurePrefix_2828_, v_op_boxed_2837_, v_flags_boxed_2838_, v_payload_2831_, v___f_2832_, v___f_2833_, v___f_2834_, v_x_2835_);
lean_dec_ref(v_failurePrefix_2828_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(size_t v_sz_2840_, size_t v_i_2841_, lean_object* v_bs_2842_){
_start:
{
uint8_t v___x_2843_; 
v___x_2843_ = lean_usize_dec_lt(v_i_2841_, v_sz_2840_);
if (v___x_2843_ == 0)
{
lean_object* v___x_2844_; 
v___x_2844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2844_, 0, v_bs_2842_);
return v___x_2844_;
}
else
{
lean_object* v_v_2845_; lean_object* v___x_2846_; lean_object* v_bs_x27_2847_; size_t v___x_2848_; size_t v___x_2849_; lean_object* v___x_2850_; 
v_v_2845_ = lean_array_uget(v_bs_2842_, v_i_2841_);
v___x_2846_ = lean_unsigned_to_nat(0u);
v_bs_x27_2847_ = lean_array_uset(v_bs_2842_, v_i_2841_, v___x_2846_);
v___x_2848_ = ((size_t)1ULL);
v___x_2849_ = lean_usize_add(v_i_2841_, v___x_2848_);
v___x_2850_ = lean_array_uset(v_bs_x27_2847_, v_i_2841_, v_v_2845_);
v_i_2841_ = v___x_2849_;
v_bs_2842_ = v___x_2850_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2852_, lean_object* v_i_2853_, lean_object* v_bs_2854_){
_start:
{
size_t v_sz_boxed_2855_; size_t v_i_boxed_2856_; lean_object* v_res_2857_; 
v_sz_boxed_2855_ = lean_unbox_usize(v_sz_2852_);
lean_dec(v_sz_2852_);
v_i_boxed_2856_ = lean_unbox_usize(v_i_2853_);
lean_dec(v_i_2853_);
v_res_2857_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_boxed_2855_, v_i_boxed_2856_, v_bs_2854_);
return v_res_2857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(lean_object* v_context_2860_, lean_object* v_d_2861_){
_start:
{
lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v___y_2870_; lean_object* v_received_2871_; lean_object* v___y_2890_; lean_object* v_a_2893_; 
if (lean_obj_tag(v_d_2861_) == 7)
{
lean_object* v_items_2917_; size_t v_sz_2918_; size_t v___x_2919_; lean_object* v___x_2920_; 
v_items_2917_ = lean_ctor_get(v_d_2861_, 0);
v_sz_2918_ = lean_array_size(v_items_2917_);
v___x_2919_ = ((size_t)0ULL);
lean_inc_ref(v_items_2917_);
v___x_2920_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_2918_, v___x_2919_, v_items_2917_);
if (lean_obj_tag(v___x_2920_) == 0)
{
lean_object* v_a_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; uint8_t v___x_2925_; 
v_a_2921_ = lean_ctor_get(v___x_2920_, 0);
lean_inc(v_a_2921_);
lean_dec_ref_known(v___x_2920_, 1);
v___x_2922_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__1));
v___x_2923_ = lean_string_utf8_byte_size(v_a_2921_);
v___x_2924_ = lean_unsigned_to_nat(0u);
v___x_2925_ = lean_nat_dec_eq(v___x_2923_, v___x_2924_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2926_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__4));
v___x_2927_ = lean_string_append(v___x_2926_, v_a_2921_);
lean_dec(v_a_2921_);
v___x_2928_ = lean_string_append(v___x_2922_, v___x_2927_);
lean_dec_ref(v___x_2927_);
v_a_2893_ = v___x_2928_;
goto v___jp_2892_;
}
else
{
lean_dec(v_a_2921_);
v_a_2893_ = v___x_2922_;
goto v___jp_2892_;
}
}
else
{
if (lean_obj_tag(v___x_2920_) == 0)
{
lean_object* v_a_2929_; 
v_a_2929_ = lean_ctor_get(v___x_2920_, 0);
lean_inc(v_a_2929_);
lean_dec_ref_known(v___x_2920_, 1);
v_a_2893_ = v_a_2929_;
goto v___jp_2892_;
}
else
{
lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2937_; 
lean_dec_ref_known(v_d_2861_, 1);
v_a_2930_ = lean_ctor_get(v___x_2920_, 0);
v_isSharedCheck_2937_ = !lean_is_exclusive(v___x_2920_);
if (v_isSharedCheck_2937_ == 0)
{
v___x_2932_ = v___x_2920_;
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_a_2930_);
lean_dec(v___x_2920_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2935_; 
if (v_isShared_2933_ == 0)
{
lean_ctor_set_tag(v___x_2932_, 0);
v___x_2935_ = v___x_2932_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_a_2930_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
return v___x_2935_;
}
}
}
}
}
else
{
lean_object* v___x_2938_; 
v___x_2938_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v_a_2893_ = v___x_2938_;
goto v___jp_2892_;
}
v___jp_2863_:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2866_ = lean_string_append(v___y_2864_, v___y_2865_);
lean_dec_ref(v___y_2865_);
v___x_2867_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2866_);
v___x_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2867_);
return v___x_2868_;
}
v___jp_2869_:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; uint8_t v___x_2883_; 
v___x_2872_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_2873_ = lean_string_append(v___x_2872_, v_context_2860_);
v___x_2874_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__1));
v___x_2875_ = lean_string_append(v___x_2873_, v___x_2874_);
v___x_2876_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__0));
v___x_2877_ = lean_string_append(v___x_2875_, v___x_2876_);
v___x_2878_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__2));
v___x_2879_ = lean_string_append(v___x_2877_, v___x_2878_);
v___x_2880_ = lean_string_append(v___x_2879_, v_received_2871_);
lean_dec_ref(v_received_2871_);
v___x_2881_ = lean_string_utf8_byte_size(v___y_2870_);
v___x_2882_ = lean_unsigned_to_nat(0u);
v___x_2883_ = lean_nat_dec_eq(v___x_2881_, v___x_2882_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2884_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__1));
v___x_2885_ = lean_string_append(v___x_2884_, v___y_2870_);
lean_dec_ref(v___y_2870_);
v___x_2886_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__2));
v___x_2887_ = lean_string_append(v___x_2885_, v___x_2886_);
v___y_2864_ = v___x_2880_;
v___y_2865_ = v___x_2887_;
goto v___jp_2863_;
}
else
{
lean_object* v___x_2888_; 
lean_dec_ref(v___y_2870_);
v___x_2888_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___y_2864_ = v___x_2880_;
v___y_2865_ = v___x_2888_;
goto v___jp_2863_;
}
}
v___jp_2889_:
{
lean_object* v___x_2891_; 
v___x_2891_ = l_Lasm_JS_Data_describe(v_d_2861_);
v___y_2870_ = v___y_2890_;
v_received_2871_ = v___x_2891_;
goto v___jp_2869_;
}
v___jp_2892_:
{
if (lean_obj_tag(v_d_2861_) == 9)
{
lean_object* v_value_2894_; lean_object* v_description_2895_; lean_object* v___x_2896_; uint8_t v___x_2897_; 
v_value_2894_ = lean_ctor_get(v_d_2861_, 0);
v_description_2895_ = lean_ctor_get(v_d_2861_, 1);
v___x_2896_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_2897_ = lean_string_dec_eq(v_description_2895_, v___x_2896_);
if (v___x_2897_ == 0)
{
v___y_2890_ = v_a_2893_;
goto v___jp_2889_;
}
else
{
lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2914_; 
lean_inc(v_value_2894_);
v_isSharedCheck_2914_ = !lean_is_exclusive(v_d_2861_);
if (v_isSharedCheck_2914_ == 0)
{
lean_object* v_unused_2915_; lean_object* v_unused_2916_; 
v_unused_2915_ = lean_ctor_get(v_d_2861_, 1);
lean_dec(v_unused_2915_);
v_unused_2916_ = lean_ctor_get(v_d_2861_, 0);
lean_dec(v_unused_2916_);
v___x_2899_ = v_d_2861_;
v_isShared_2900_ = v_isSharedCheck_2914_;
goto v_resetjp_2898_;
}
else
{
lean_dec(v_d_2861_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2914_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
uint32_t v___x_2901_; uint64_t v___x_2902_; lean_object* v___x_2904_; 
v___x_2901_ = 206;
v___x_2902_ = 0ULL;
lean_inc(v_value_2894_);
if (v_isShared_2900_ == 0)
{
lean_ctor_set(v___x_2899_, 1, v___x_2896_);
v___x_2904_ = v___x_2899_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_value_2894_);
lean_ctor_set(v_reuseFailAlloc_2913_, 1, v___x_2896_);
v___x_2904_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
uint32_t v___x_2905_; lean_object* v___x_2906_; 
v___x_2905_ = lasm_js_value_handle(v_value_2894_);
lean_dec(v_value_2894_);
v___x_2906_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2901_, v___x_2902_, v___x_2904_, v___x_2905_);
lean_dec_ref(v___x_2904_);
if (lean_obj_tag(v___x_2906_) == 0)
{
lean_object* v_a_2907_; uint8_t v___x_2908_; 
v_a_2907_ = lean_ctor_get(v___x_2906_, 0);
lean_inc(v_a_2907_);
lean_dec_ref_known(v___x_2906_, 1);
v___x_2908_ = lean_string_validate_utf8(v_a_2907_);
if (v___x_2908_ == 0)
{
lean_object* v___x_2909_; lean_object* v___x_2910_; 
lean_dec(v_a_2907_);
v___x_2909_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__9);
v___x_2910_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2909_);
v___y_2870_ = v_a_2893_;
v_received_2871_ = v___x_2910_;
goto v___jp_2869_;
}
else
{
lean_object* v___x_2911_; 
v___x_2911_ = lean_string_from_utf8_unchecked(v_a_2907_);
v___y_2870_ = v_a_2893_;
v_received_2871_ = v___x_2911_;
goto v___jp_2869_;
}
}
else
{
lean_object* v___x_2912_; 
lean_dec_ref_known(v___x_2906_, 1);
v___x_2912_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__10));
v___y_2870_ = v_a_2893_;
v_received_2871_ = v___x_2912_;
goto v___jp_2869_;
}
}
}
}
}
else
{
v___y_2890_ = v_a_2893_;
goto v___jp_2889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___boxed(lean_object* v_context_2939_, lean_object* v_d_2940_, lean_object* v_a_2941_){
_start:
{
lean_object* v_res_2942_; 
v_res_2942_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_2939_, v_d_2940_);
lean_dec_ref(v_context_2939_);
return v_res_2942_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(lean_object* v_context_2943_, lean_object* v_x_2944_){
_start:
{
lean_object* v_val_2947_; 
if (lean_obj_tag(v_x_2944_) == 0)
{
lean_object* v_a_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2957_; 
v_a_2949_ = lean_ctor_get(v_x_2944_, 0);
v_isSharedCheck_2957_ = !lean_is_exclusive(v_x_2944_);
if (v_isSharedCheck_2957_ == 0)
{
v___x_2951_ = v_x_2944_;
v_isShared_2952_ = v_isSharedCheck_2957_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_a_2949_);
lean_dec(v_x_2944_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2957_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2954_; 
if (v_isShared_2952_ == 0)
{
v___x_2954_ = v___x_2951_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v_a_2949_);
v___x_2954_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
lean_object* v___x_2955_; 
v___x_2955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2954_);
return v___x_2955_;
}
}
}
else
{
lean_object* v_a_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2971_; 
v_a_2958_ = lean_ctor_get(v_x_2944_, 0);
v_isSharedCheck_2971_ = !lean_is_exclusive(v_x_2944_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2960_ = v_x_2944_;
v_isShared_2961_ = v_isSharedCheck_2971_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_a_2958_);
lean_dec(v_x_2944_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2971_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2962_; 
v___x_2962_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_2943_, v_a_2958_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v___x_2965_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2963_);
lean_dec_ref_known(v___x_2962_, 1);
if (v_isShared_2961_ == 0)
{
lean_ctor_set(v___x_2960_, 0, v_a_2963_);
v___x_2965_ = v___x_2960_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_a_2963_);
v___x_2965_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
v_val_2947_ = v___x_2965_;
goto v___jp_2946_;
}
}
else
{
lean_object* v_a_2967_; lean_object* v___x_2969_; 
v_a_2967_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2967_);
lean_dec_ref_known(v___x_2962_, 1);
if (v_isShared_2961_ == 0)
{
lean_ctor_set_tag(v___x_2960_, 0);
lean_ctor_set(v___x_2960_, 0, v_a_2967_);
v___x_2969_ = v___x_2960_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_a_2967_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
v_val_2947_ = v___x_2969_;
goto v___jp_2946_;
}
}
}
}
v___jp_2946_:
{
lean_object* v___x_2948_; 
v___x_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2948_, 0, v_val_2947_);
return v___x_2948_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed(lean_object* v_context_2972_, lean_object* v_x_2973_, lean_object* v___y_2974_){
_start:
{
lean_object* v_res_2975_; 
v_res_2975_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(v_context_2972_, v_x_2973_);
lean_dec_ref(v_context_2972_);
return v_res_2975_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(lean_object* v___f_2976_, lean_object* v_x_2977_){
_start:
{
if (lean_obj_tag(v_x_2977_) == 0)
{
lean_object* v_a_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2987_; 
lean_dec_ref(v___f_2976_);
v_a_2979_ = lean_ctor_get(v_x_2977_, 0);
v_isSharedCheck_2987_ = !lean_is_exclusive(v_x_2977_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2981_ = v_x_2977_;
v_isShared_2982_ = v_isSharedCheck_2987_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_a_2979_);
lean_dec(v_x_2977_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2987_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___x_2984_; 
if (v_isShared_2982_ == 0)
{
v___x_2984_ = v___x_2981_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v_a_2979_);
v___x_2984_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
lean_object* v___x_2985_; 
v___x_2985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2985_, 0, v___x_2984_);
return v___x_2985_;
}
}
}
else
{
lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2999_; 
v_isSharedCheck_2999_ = !lean_is_exclusive(v_x_2977_);
if (v_isSharedCheck_2999_ == 0)
{
lean_object* v_unused_3000_; 
v_unused_3000_ = lean_ctor_get(v_x_2977_, 0);
lean_dec(v_unused_3000_);
v___x_2989_ = v_x_2977_;
v_isShared_2990_ = v_isSharedCheck_2999_;
goto v_resetjp_2988_;
}
else
{
lean_dec(v_x_2977_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2999_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2991_; uint8_t v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2995_; 
v___x_2991_ = lean_unsigned_to_nat(0u);
v___x_2992_ = 0;
v___x_2993_ = lean_io_promise_new();
if (v_isShared_2990_ == 0)
{
lean_ctor_set(v___x_2989_, 0, v___x_2993_);
v___x_2995_ = v___x_2989_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v___x_2993_);
v___x_2995_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; 
v___x_2996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2995_);
v___x_2997_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2991_, v___x_2992_, v___x_2996_, v___f_2976_);
return v___x_2997_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed(lean_object* v___f_3001_, lean_object* v_x_3002_, lean_object* v___y_3003_){
_start:
{
lean_object* v_res_3004_; 
v_res_3004_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(v___f_3001_, v_x_3002_);
return v_res_3004_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(lean_object* v_context_3005_, uint32_t v_op_3006_, uint64_t v_flags_3007_, lean_object* v_payload_3008_, lean_object* v_failurePrefix_3009_){
_start:
{
lean_object* v___f_3011_; lean_object* v___f_3012_; lean_object* v___f_3013_; lean_object* v___f_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___f_3017_; lean_object* v___f_3018_; lean_object* v___x_3019_; uint8_t v___x_3020_; lean_object* v_val_3022_; lean_object* v___x_3025_; 
v___f_3011_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3011_, 0, v_context_3005_);
v___f_3012_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3012_, 0, v___f_3011_);
v___f_3013_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3013_, 0, v___f_3012_);
lean_inc_ref(v_failurePrefix_3009_);
v___f_3014_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3014_, 0, v_failurePrefix_3009_);
v___x_3015_ = lean_box_uint32(v_op_3006_);
v___x_3016_ = lean_box_uint64(v_flags_3007_);
lean_inc_ref(v___f_3013_);
v___f_3017_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3017_, 0, v_failurePrefix_3009_);
lean_closure_set(v___f_3017_, 1, v___x_3015_);
lean_closure_set(v___f_3017_, 2, v___x_3016_);
lean_closure_set(v___f_3017_, 3, v_payload_3008_);
lean_closure_set(v___f_3017_, 4, v___f_3014_);
lean_closure_set(v___f_3017_, 5, v___f_3013_);
lean_closure_set(v___f_3017_, 6, v___f_3013_);
v___f_3018_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3018_, 0, v___f_3017_);
v___x_3019_ = lean_unsigned_to_nat(0u);
v___x_3020_ = 0;
v___x_3025_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_object* v_a_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3033_; 
v_a_3026_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3028_ = v___x_3025_;
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_a_3026_);
lean_dec(v___x_3025_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3031_; 
if (v_isShared_3029_ == 0)
{
lean_ctor_set_tag(v___x_3028_, 1);
v___x_3031_ = v___x_3028_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_a_3026_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
v_val_3022_ = v___x_3031_;
goto v___jp_3021_;
}
}
}
else
{
lean_object* v_a_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3041_; 
v_a_3034_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3036_ = v___x_3025_;
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_a_3034_);
lean_dec(v___x_3025_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
lean_object* v___x_3039_; 
if (v_isShared_3037_ == 0)
{
lean_ctor_set_tag(v___x_3036_, 0);
v___x_3039_ = v___x_3036_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v_a_3034_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
v_val_3022_ = v___x_3039_;
goto v___jp_3021_;
}
}
}
v___jp_3021_:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3023_, 0, v_val_3022_);
v___x_3024_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3019_, v___x_3020_, v___x_3023_, v___f_3018_);
return v___x_3024_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___boxed(lean_object* v_context_3042_, lean_object* v_op_3043_, lean_object* v_flags_3044_, lean_object* v_payload_3045_, lean_object* v_failurePrefix_3046_, lean_object* v_a_3047_){
_start:
{
uint32_t v_op_boxed_3048_; uint64_t v_flags_boxed_3049_; lean_object* v_res_3050_; 
v_op_boxed_3048_ = lean_unbox_uint32(v_op_3043_);
lean_dec(v_op_3043_);
v_flags_boxed_3049_ = lean_unbox_uint64(v_flags_3044_);
lean_dec_ref(v_flags_3044_);
v_res_3050_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v_context_3042_, v_op_boxed_3048_, v_flags_boxed_3049_, v_payload_3045_, v_failurePrefix_3046_);
return v_res_3050_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(lean_object* v_b_3051_, lean_object* v_args_3052_){
_start:
{
uint8_t v_construct_3054_; lean_object* v___x_3055_; uint32_t v___x_3056_; uint64_t v___x_3057_; uint64_t v___y_3059_; 
v_construct_3054_ = lean_ctor_get_uint8(v_b_3051_, sizeof(void*)*4);
v___x_3055_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3051_);
v___x_3056_ = 214;
v___x_3057_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0);
if (v_construct_3054_ == 0)
{
uint64_t v___x_3067_; 
v___x_3067_ = 0ULL;
v___y_3059_ = v___x_3067_;
goto v___jp_3058_;
}
else
{
uint64_t v___x_3068_; 
v___x_3068_ = 4ULL;
v___y_3059_ = v___x_3068_;
goto v___jp_3058_;
}
v___jp_3058_:
{
uint64_t v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3060_ = lean_uint64_lor(v___x_3057_, v___y_3059_);
v___x_3061_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3051_, v_args_3052_);
v___x_3062_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_3063_ = lean_string_append(v___x_3062_, v___x_3055_);
v___x_3064_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__4));
v___x_3065_ = lean_string_append(v___x_3063_, v___x_3064_);
v___x_3066_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v___x_3055_, v___x_3056_, v___x_3060_, v___x_3061_, v___x_3065_);
return v___x_3066_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1___boxed(lean_object* v_b_3069_, lean_object* v_args_3070_, lean_object* v_a_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v_b_3069_, v_args_3070_);
lean_dec_ref(v_b_3069_);
return v_res_3072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(lean_object* v_x_3073_){
_start:
{
if (lean_obj_tag(v_x_3073_) == 0)
{
lean_object* v___x_3074_; 
v___x_3074_ = lean_box(0);
return v___x_3074_;
}
else
{
lean_object* v_val_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v_val_3075_ = lean_ctor_get(v_x_3073_, 0);
v___x_3076_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0));
v___x_3077_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_3075_);
v___x_3078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3076_);
lean_ctor_set(v___x_3078_, 1, v___x_3077_);
v___x_3079_ = lean_unsigned_to_nat(1u);
v___x_3080_ = lean_mk_empty_array_with_capacity(v___x_3079_);
v___x_3081_ = lean_array_push(v___x_3080_, v___x_3078_);
v___x_3082_ = l_Lasm_JS_Web_Support_fields(v___x_3081_);
lean_dec_ref(v___x_3081_);
return v___x_3082_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0___boxed(lean_object* v_x_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_x_3083_);
lean_dec(v_x_3083_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once(lean_object* v_emitter_3092_, lean_object* v_name_3093_, lean_object* v_options_3094_){
_start:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___y_3101_; 
v___x_3096_ = lean_unsigned_to_nat(3u);
v___x_3097_ = ((lean_object*)(l_Lasm_JS_Node_events_once___closed__1));
v___x_3098_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_3099_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3099_, 0, v_emitter_3092_);
lean_ctor_set(v___x_3099_, 1, v___x_3098_);
if (lean_obj_tag(v_name_3093_) == 0)
{
lean_object* v_value_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3116_; 
v_value_3109_ = lean_ctor_get(v_name_3093_, 0);
v_isSharedCheck_3116_ = !lean_is_exclusive(v_name_3093_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3111_ = v_name_3093_;
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_value_3109_);
lean_dec(v_name_3093_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3114_; 
if (v_isShared_3112_ == 0)
{
lean_ctor_set_tag(v___x_3111_, 4);
v___x_3114_ = v___x_3111_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v_value_3109_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
v___y_3101_ = v___x_3114_;
goto v___jp_3100_;
}
}
}
else
{
lean_object* v_value_3117_; lean_object* v___x_3118_; 
v_value_3117_ = lean_ctor_get(v_name_3093_, 0);
lean_inc(v_value_3117_);
lean_dec_ref_known(v_name_3093_, 1);
v___x_3118_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3118_, 0, v_value_3117_);
lean_ctor_set(v___x_3118_, 1, v___x_3098_);
v___y_3101_ = v___x_3118_;
goto v___jp_3100_;
}
v___jp_3100_:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; 
v___x_3102_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_options_3094_);
v___x_3103_ = lean_mk_empty_array_with_capacity(v___x_3096_);
v___x_3104_ = lean_array_push(v___x_3103_, v___x_3099_);
v___x_3105_ = lean_array_push(v___x_3104_, v___y_3101_);
v___x_3106_ = lean_array_push(v___x_3105_, v___x_3102_);
v___x_3107_ = l_Lasm_JS_Web_Support_args(v___x_3106_);
v___x_3108_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v___x_3097_, v___x_3107_);
return v___x_3108_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once___boxed(lean_object* v_emitter_3119_, lean_object* v_name_3120_, lean_object* v_options_3121_, lean_object* v_a_3122_){
_start:
{
lean_object* v_res_3123_; 
v_res_3123_ = l_Lasm_JS_Node_events_once(v_emitter_3119_, v_name_3120_, v_options_3121_);
lean_dec(v_options_3121_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_listenerCount_spec__0(lean_object* v_b_3124_, lean_object* v_args_3125_, uint8_t v_await_3126_){
_start:
{
uint64_t v___y_3129_; uint64_t v___y_3130_; uint64_t v___x_3173_; uint64_t v___y_3175_; 
v___x_3173_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0);
if (v_await_3126_ == 0)
{
uint64_t v___x_3180_; 
v___x_3180_ = 0ULL;
v___y_3175_ = v___x_3180_;
goto v___jp_3174_;
}
else
{
uint64_t v___x_3181_; 
v___x_3181_ = 2ULL;
v___y_3175_ = v___x_3181_;
goto v___jp_3174_;
}
v___jp_3128_:
{
uint64_t v_flags_3131_; uint32_t v___x_3132_; lean_object* v___x_3133_; uint32_t v___x_3134_; lean_object* v___x_3135_; 
v_flags_3131_ = lean_uint64_lor(v___y_3129_, v___y_3130_);
v___x_3132_ = 214;
v___x_3133_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3124_, v_args_3125_);
v___x_3134_ = 0;
v___x_3135_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3132_, v_flags_3131_, v___x_3133_, v___x_3134_);
lean_dec(v___x_3133_);
if (lean_obj_tag(v___x_3135_) == 0)
{
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v_a_3136_; lean_object* v___x_3137_; 
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3136_);
lean_dec_ref_known(v___x_3135_, 1);
v___x_3137_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3136_);
lean_dec(v_a_3136_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_a_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3138_);
lean_dec_ref_known(v___x_3137_, 1);
v___x_3139_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3124_);
v___x_3140_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_getMaxListeners_spec__0_spec__1_spec__2(v___x_3139_, v_a_3138_);
lean_dec_ref(v___x_3139_);
return v___x_3140_;
}
else
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3148_; 
v_a_3141_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3143_ = v___x_3137_;
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_3137_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3146_; 
if (v_isShared_3144_ == 0)
{
v___x_3146_ = v___x_3143_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_a_3141_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
return v___x_3146_;
}
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
v_a_3149_ = lean_ctor_get(v___x_3135_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3135_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3135_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
lean_ctor_set_tag(v___x_3151_, 1);
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3172_; 
v_a_3157_ = lean_ctor_get(v___x_3135_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3159_ = v___x_3135_;
v_isShared_3160_ = v_isSharedCheck_3172_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_3135_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3172_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3170_; 
v___x_3161_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_3162_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3124_);
v___x_3163_ = lean_string_append(v___x_3161_, v___x_3162_);
lean_dec_ref(v___x_3162_);
v___x_3164_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__4));
v___x_3165_ = lean_string_append(v___x_3163_, v___x_3164_);
v___x_3166_ = lean_io_error_to_string(v_a_3157_);
v___x_3167_ = lean_string_append(v___x_3165_, v___x_3166_);
lean_dec_ref(v___x_3166_);
v___x_3168_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3167_);
if (v_isShared_3160_ == 0)
{
lean_ctor_set(v___x_3159_, 0, v___x_3168_);
v___x_3170_ = v___x_3159_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v___x_3168_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
}
v___jp_3174_:
{
uint8_t v_construct_3176_; uint64_t v___x_3177_; 
v_construct_3176_ = lean_ctor_get_uint8(v_b_3124_, sizeof(void*)*4);
v___x_3177_ = lean_uint64_lor(v___x_3173_, v___y_3175_);
if (v_construct_3176_ == 0)
{
uint64_t v___x_3178_; 
v___x_3178_ = 0ULL;
v___y_3129_ = v___x_3177_;
v___y_3130_ = v___x_3178_;
goto v___jp_3128_;
}
else
{
uint64_t v___x_3179_; 
v___x_3179_ = 4ULL;
v___y_3129_ = v___x_3177_;
v___y_3130_ = v___x_3179_;
goto v___jp_3128_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_listenerCount_spec__0___boxed(lean_object* v_b_3182_, lean_object* v_args_3183_, lean_object* v_await_3184_, lean_object* v_a_3185_){
_start:
{
uint8_t v_await_boxed_3186_; lean_object* v_res_3187_; 
v_await_boxed_3186_ = lean_unbox(v_await_3184_);
v_res_3187_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_listenerCount_spec__0(v_b_3182_, v_args_3183_, v_await_boxed_3186_);
lean_dec_ref(v_b_3182_);
return v_res_3187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_listenerCount(lean_object* v_emitterOrTarget_3195_, lean_object* v_eventName_3196_){
_start:
{
uint8_t v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___y_3202_; lean_object* v___y_3203_; lean_object* v___y_3210_; lean_object* v_value_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
v___x_3198_ = 0;
v___x_3199_ = lean_unsigned_to_nat(2u);
v___x_3200_ = ((lean_object*)(l_Lasm_JS_Node_events_listenerCount___closed__1));
v_value_3222_ = lean_ctor_get(v_emitterOrTarget_3195_, 0);
v___x_3223_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
lean_inc(v_value_3222_);
v___x_3224_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3224_, 0, v_value_3222_);
lean_ctor_set(v___x_3224_, 1, v___x_3223_);
v___y_3210_ = v___x_3224_;
goto v___jp_3209_;
v___jp_3201_:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3204_ = lean_mk_empty_array_with_capacity(v___x_3199_);
v___x_3205_ = lean_array_push(v___x_3204_, v___y_3202_);
v___x_3206_ = lean_array_push(v___x_3205_, v___y_3203_);
v___x_3207_ = l_Lasm_JS_Web_Support_args(v___x_3206_);
v___x_3208_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_listenerCount_spec__0(v___x_3200_, v___x_3207_, v___x_3198_);
return v___x_3208_;
}
v___jp_3209_:
{
if (lean_obj_tag(v_eventName_3196_) == 0)
{
lean_object* v_value_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
v_value_3211_ = lean_ctor_get(v_eventName_3196_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v_eventName_3196_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3213_ = v_eventName_3196_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_value_3211_);
lean_dec(v_eventName_3196_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
lean_ctor_set_tag(v___x_3213_, 4);
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_value_3211_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
v___y_3202_ = v___y_3210_;
v___y_3203_ = v___x_3216_;
goto v___jp_3201_;
}
}
}
else
{
lean_object* v_value_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; 
v_value_3219_ = lean_ctor_get(v_eventName_3196_, 0);
lean_inc(v_value_3219_);
lean_dec_ref_known(v_eventName_3196_, 1);
v___x_3220_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_3221_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3221_, 0, v_value_3219_);
lean_ctor_set(v___x_3221_, 1, v___x_3220_);
v___y_3202_ = v___y_3210_;
v___y_3203_ = v___x_3221_;
goto v___jp_3201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_listenerCount___boxed(lean_object* v_emitterOrTarget_3225_, lean_object* v_eventName_3226_, lean_object* v_a_3227_){
_start:
{
lean_object* v_res_3228_; 
v_res_3228_ = l_Lasm_JS_Node_events_listenerCount(v_emitterOrTarget_3225_, v_eventName_3226_);
lean_dec_ref(v_emitterOrTarget_3225_);
return v_res_3228_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0_spec__1(size_t v_sz_3229_, size_t v_i_3230_, lean_object* v_bs_3231_){
_start:
{
uint8_t v___x_3232_; 
v___x_3232_ = lean_usize_dec_lt(v_i_3230_, v_sz_3229_);
if (v___x_3232_ == 0)
{
return v_bs_3231_;
}
else
{
lean_object* v_v_3233_; lean_object* v___x_3234_; lean_object* v_bs_x27_3235_; lean_object* v___x_3236_; size_t v___x_3237_; size_t v___x_3238_; lean_object* v___x_3239_; 
v_v_3233_ = lean_array_uget(v_bs_3231_, v_i_3230_);
v___x_3234_ = lean_unsigned_to_nat(0u);
v_bs_x27_3235_ = lean_array_uset(v_bs_3231_, v_i_3230_, v___x_3234_);
v___x_3236_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3236_, 0, v_v_3233_);
v___x_3237_ = ((size_t)1ULL);
v___x_3238_ = lean_usize_add(v_i_3230_, v___x_3237_);
v___x_3239_ = lean_array_uset(v_bs_x27_3235_, v_i_3230_, v___x_3236_);
v_i_3230_ = v___x_3238_;
v_bs_3231_ = v___x_3239_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3241_, lean_object* v_i_3242_, lean_object* v_bs_3243_){
_start:
{
size_t v_sz_boxed_3244_; size_t v_i_boxed_3245_; lean_object* v_res_3246_; 
v_sz_boxed_3244_ = lean_unbox_usize(v_sz_3241_);
lean_dec(v_sz_3241_);
v_i_boxed_3245_ = lean_unbox_usize(v_i_3242_);
lean_dec(v_i_3242_);
v_res_3246_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0_spec__1(v_sz_boxed_3244_, v_i_boxed_3245_, v_bs_3243_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(lean_object* v_x_3247_){
_start:
{
if (lean_obj_tag(v_x_3247_) == 0)
{
lean_object* v___x_3248_; 
v___x_3248_ = lean_box(0);
return v___x_3248_;
}
else
{
lean_object* v_val_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3259_; 
v_val_3249_ = lean_ctor_get(v_x_3247_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v_x_3247_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3251_ = v_x_3247_;
v_isShared_3252_ = v_isSharedCheck_3259_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_val_3249_);
lean_dec(v_x_3247_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3259_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
size_t v_sz_3253_; size_t v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3257_; 
v_sz_3253_ = lean_array_size(v_val_3249_);
v___x_3254_ = ((size_t)0ULL);
v___x_3255_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0_spec__1(v_sz_3253_, v___x_3254_, v_val_3249_);
if (v_isShared_3252_ == 0)
{
lean_ctor_set_tag(v___x_3251_, 7);
lean_ctor_set(v___x_3251_, 0, v___x_3255_);
v___x_3257_ = v___x_3251_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v___x_3255_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__1(lean_object* v_x_3260_){
_start:
{
if (lean_obj_tag(v_x_3260_) == 0)
{
lean_object* v___x_3261_; 
v___x_3261_ = lean_box(0);
return v___x_3261_;
}
else
{
lean_object* v_val_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3274_; 
v_val_3262_ = lean_ctor_get(v_x_3260_, 0);
v_isSharedCheck_3274_ = !lean_is_exclusive(v_x_3260_);
if (v_isSharedCheck_3274_ == 0)
{
v___x_3264_ = v_x_3260_;
v_isShared_3265_ = v_isSharedCheck_3274_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_val_3262_);
lean_dec(v_x_3260_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3274_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3266_; lean_object* v___x_3267_; uint8_t v___x_3268_; 
v___x_3266_ = lean_nat_abs(v_val_3262_);
v___x_3267_ = lean_cstr_to_nat("9007199254740991");
v___x_3268_ = lean_nat_dec_le(v___x_3266_, v___x_3267_);
lean_dec(v___x_3266_);
if (v___x_3268_ == 0)
{
lean_object* v___x_3270_; 
if (v_isShared_3265_ == 0)
{
lean_ctor_set_tag(v___x_3264_, 5);
v___x_3270_ = v___x_3264_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_val_3262_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
}
}
else
{
double v___x_3272_; lean_object* v___x_3273_; 
lean_del_object(v___x_3264_);
v___x_3272_ = l_Float_ofInt(v_val_3262_);
lean_dec(v_val_3262_);
v___x_3273_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3273_, 0, v___x_3272_);
return v___x_3273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0(lean_object* v_x_3275_){
_start:
{
if (lean_obj_tag(v_x_3275_) == 0)
{
lean_object* v___x_3276_; 
v___x_3276_ = lean_box(0);
return v___x_3276_;
}
else
{
lean_object* v_val_3277_; lean_object* v_signal_3278_; lean_object* v_close_3279_; lean_object* v_highWaterMark_3280_; lean_object* v_lowWaterMark_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v_val_3277_ = lean_ctor_get(v_x_3275_, 0);
lean_inc(v_val_3277_);
lean_dec_ref_known(v_x_3275_, 1);
v_signal_3278_ = lean_ctor_get(v_val_3277_, 0);
lean_inc(v_signal_3278_);
v_close_3279_ = lean_ctor_get(v_val_3277_, 1);
lean_inc(v_close_3279_);
v_highWaterMark_3280_ = lean_ctor_get(v_val_3277_, 2);
lean_inc(v_highWaterMark_3280_);
v_lowWaterMark_3281_ = lean_ctor_get(v_val_3277_, 3);
lean_inc(v_lowWaterMark_3281_);
lean_dec(v_val_3277_);
v___x_3282_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0___closed__0));
v___x_3283_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_3278_);
lean_dec(v_signal_3278_);
v___x_3284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3282_);
lean_ctor_set(v___x_3284_, 1, v___x_3283_);
v___x_3285_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__0));
v___x_3286_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(v_close_3279_);
v___x_3287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3285_);
lean_ctor_set(v___x_3287_, 1, v___x_3286_);
v___x_3288_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__1));
v___x_3289_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__1(v_highWaterMark_3280_);
v___x_3290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3288_);
lean_ctor_set(v___x_3290_, 1, v___x_3289_);
v___x_3291_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0___closed__2));
v___x_3292_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__1(v_lowWaterMark_3281_);
v___x_3293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3291_);
lean_ctor_set(v___x_3293_, 1, v___x_3292_);
v___x_3294_ = lean_unsigned_to_nat(4u);
v___x_3295_ = lean_mk_empty_array_with_capacity(v___x_3294_);
v___x_3296_ = lean_array_push(v___x_3295_, v___x_3284_);
v___x_3297_ = lean_array_push(v___x_3296_, v___x_3287_);
v___x_3298_ = lean_array_push(v___x_3297_, v___x_3290_);
v___x_3299_ = lean_array_push(v___x_3298_, v___x_3293_);
v___x_3300_ = l_Lasm_JS_Web_Support_fields(v___x_3299_);
lean_dec_ref(v___x_3299_);
return v___x_3300_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(lean_object* v_b_3301_, lean_object* v_args_3302_, uint8_t v_await_3303_){
_start:
{
uint64_t v___y_3306_; uint64_t v___y_3307_; uint64_t v___x_3339_; uint64_t v___y_3341_; 
v___x_3339_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__0___closed__0);
if (v_await_3303_ == 0)
{
uint64_t v___x_3346_; 
v___x_3346_ = 0ULL;
v___y_3341_ = v___x_3346_;
goto v___jp_3340_;
}
else
{
uint64_t v___x_3347_; 
v___x_3347_ = 2ULL;
v___y_3341_ = v___x_3347_;
goto v___jp_3340_;
}
v___jp_3305_:
{
uint64_t v_flags_3308_; uint32_t v___x_3309_; lean_object* v___x_3310_; uint32_t v___x_3311_; lean_object* v___x_3312_; 
v_flags_3308_ = lean_uint64_lor(v___y_3306_, v___y_3307_);
v___x_3309_ = 214;
v___x_3310_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3301_, v_args_3302_);
v___x_3311_ = 0;
v___x_3312_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3309_, v_flags_3308_, v___x_3310_, v___x_3311_);
lean_dec(v___x_3310_);
if (lean_obj_tag(v___x_3312_) == 0)
{
if (lean_obj_tag(v___x_3312_) == 0)
{
lean_object* v_a_3313_; lean_object* v___x_3314_; 
v_a_3313_ = lean_ctor_get(v___x_3312_, 0);
lean_inc(v_a_3313_);
lean_dec_ref_known(v___x_3312_, 1);
v___x_3314_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3313_);
lean_dec(v_a_3313_);
return v___x_3314_;
}
else
{
lean_object* v_a_3315_; lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3322_; 
v_a_3315_ = lean_ctor_get(v___x_3312_, 0);
v_isSharedCheck_3322_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3322_ == 0)
{
v___x_3317_ = v___x_3312_;
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
else
{
lean_inc(v_a_3315_);
lean_dec(v___x_3312_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v___x_3320_; 
if (v_isShared_3318_ == 0)
{
lean_ctor_set_tag(v___x_3317_, 1);
v___x_3320_ = v___x_3317_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3321_; 
v_reuseFailAlloc_3321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3321_, 0, v_a_3315_);
v___x_3320_ = v_reuseFailAlloc_3321_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
return v___x_3320_;
}
}
}
}
else
{
lean_object* v_a_3323_; lean_object* v___x_3325_; uint8_t v_isShared_3326_; uint8_t v_isSharedCheck_3338_; 
v_a_3323_ = lean_ctor_get(v___x_3312_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3325_ = v___x_3312_;
v_isShared_3326_ = v_isSharedCheck_3338_;
goto v_resetjp_3324_;
}
else
{
lean_inc(v_a_3323_);
lean_dec(v___x_3312_);
v___x_3325_ = lean_box(0);
v_isShared_3326_ = v_isSharedCheck_3338_;
goto v_resetjp_3324_;
}
v_resetjp_3324_:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3336_; 
v___x_3327_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__1___closed__0));
v___x_3328_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3301_);
v___x_3329_ = lean_string_append(v___x_3327_, v___x_3328_);
lean_dec_ref(v___x_3328_);
v___x_3330_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_NodeEventTarget_eventNames_spec__0_spec__1_spec__2___closed__4));
v___x_3331_ = lean_string_append(v___x_3329_, v___x_3330_);
v___x_3332_ = lean_io_error_to_string(v_a_3323_);
v___x_3333_ = lean_string_append(v___x_3331_, v___x_3332_);
lean_dec_ref(v___x_3332_);
v___x_3334_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3334_, 0, v___x_3333_);
if (v_isShared_3326_ == 0)
{
lean_ctor_set(v___x_3325_, 0, v___x_3334_);
v___x_3336_ = v___x_3325_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v___x_3334_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
}
v___jp_3340_:
{
uint8_t v_construct_3342_; uint64_t v___x_3343_; 
v_construct_3342_ = lean_ctor_get_uint8(v_b_3301_, sizeof(void*)*4);
v___x_3343_ = lean_uint64_lor(v___x_3339_, v___y_3341_);
if (v_construct_3342_ == 0)
{
uint64_t v___x_3344_; 
v___x_3344_ = 0ULL;
v___y_3306_ = v___x_3343_;
v___y_3307_ = v___x_3344_;
goto v___jp_3305_;
}
else
{
uint64_t v___x_3345_; 
v___x_3345_ = 4ULL;
v___y_3306_ = v___x_3343_;
v___y_3307_ = v___x_3345_;
goto v___jp_3305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1___boxed(lean_object* v_b_3348_, lean_object* v_args_3349_, lean_object* v_await_3350_, lean_object* v_a_3351_){
_start:
{
uint8_t v_await_boxed_3352_; lean_object* v_res_3353_; 
v_await_boxed_3352_ = lean_unbox(v_await_3350_);
v_res_3353_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(v_b_3348_, v_args_3349_, v_await_boxed_3352_);
lean_dec_ref(v_b_3348_);
return v_res_3353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_on(lean_object* v_emitter_3361_, lean_object* v_eventName_3362_, lean_object* v_options_3363_){
_start:
{
uint8_t v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___y_3371_; 
v___x_3365_ = 0;
v___x_3366_ = lean_unsigned_to_nat(3u);
v___x_3367_ = ((lean_object*)(l_Lasm_JS_Node_events_on___closed__1));
v___x_3368_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_3369_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3369_, 0, v_emitter_3361_);
lean_ctor_set(v___x_3369_, 1, v___x_3368_);
if (lean_obj_tag(v_eventName_3362_) == 0)
{
lean_object* v_value_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3386_; 
v_value_3379_ = lean_ctor_get(v_eventName_3362_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v_eventName_3362_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3381_ = v_eventName_3362_;
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_value_3379_);
lean_dec(v_eventName_3362_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
lean_ctor_set_tag(v___x_3381_, 4);
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_value_3379_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
v___y_3371_ = v___x_3384_;
goto v___jp_3370_;
}
}
}
else
{
lean_object* v_value_3387_; lean_object* v___x_3388_; 
v_value_3387_ = lean_ctor_get(v_eventName_3362_, 0);
lean_inc(v_value_3387_);
lean_dec_ref_known(v_eventName_3362_, 1);
v___x_3388_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3388_, 0, v_value_3387_);
lean_ctor_set(v___x_3388_, 1, v___x_3368_);
v___y_3371_ = v___x_3388_;
goto v___jp_3370_;
}
v___jp_3370_:
{
lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; 
v___x_3372_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0(v_options_3363_);
v___x_3373_ = lean_mk_empty_array_with_capacity(v___x_3366_);
v___x_3374_ = lean_array_push(v___x_3373_, v___x_3369_);
v___x_3375_ = lean_array_push(v___x_3374_, v___y_3371_);
v___x_3376_ = lean_array_push(v___x_3375_, v___x_3372_);
v___x_3377_ = l_Lasm_JS_Web_Support_args(v___x_3376_);
v___x_3378_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(v___x_3367_, v___x_3377_, v___x_3365_);
return v___x_3378_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_on___boxed(lean_object* v_emitter_3389_, lean_object* v_eventName_3390_, lean_object* v_options_3391_, lean_object* v_a_3392_){
_start:
{
lean_object* v_res_3393_; 
v_res_3393_ = l_Lasm_JS_Node_events_on(v_emitter_3389_, v_eventName_3390_, v_options_3391_);
return v_res_3393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_setMaxListeners(double v_n_3401_, lean_object* v_eventTargets_3402_){
_start:
{
uint8_t v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; size_t v_sz_3410_; size_t v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3404_ = 0;
v___x_3405_ = ((lean_object*)(l_Lasm_JS_Node_events_setMaxListeners___closed__1));
v___x_3406_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3406_, 0, v_n_3401_);
v___x_3407_ = lean_unsigned_to_nat(1u);
v___x_3408_ = lean_mk_empty_array_with_capacity(v___x_3407_);
v___x_3409_ = lean_array_push(v___x_3408_, v___x_3406_);
v_sz_3410_ = lean_array_size(v_eventTargets_3402_);
v___x_3411_ = ((size_t)0ULL);
v___x_3412_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_3410_, v___x_3411_, v_eventTargets_3402_);
v___x_3413_ = l_Lasm_JS_Web_Support_argsWith(v___x_3409_, v___x_3412_);
lean_dec_ref(v___x_3412_);
v___x_3414_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_3405_, v___x_3413_, v___x_3404_);
return v___x_3414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_setMaxListeners___boxed(lean_object* v_n_3415_, lean_object* v_eventTargets_3416_, lean_object* v_a_3417_){
_start:
{
double v_n_boxed_3418_; lean_object* v_res_3419_; 
v_n_boxed_3418_ = lean_unbox_float(v_n_3415_);
lean_dec_ref(v_n_3415_);
v_res_3419_ = l_Lasm_JS_Node_events_setMaxListeners(v_n_boxed_3418_, v_eventTargets_3416_);
return v_res_3419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_addAbortListener(lean_object* v_signal_3428_, lean_object* v_listener_3429_){
_start:
{
uint8_t v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; 
v___x_3431_ = 0;
v___x_3432_ = lean_unsigned_to_nat(2u);
v___x_3433_ = ((lean_object*)(l_Lasm_JS_Node_events_addAbortListener___closed__2));
v___x_3434_ = ((lean_object*)(l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0___closed__0));
v___x_3435_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3435_, 0, v_signal_3428_);
lean_ctor_set(v___x_3435_, 1, v___x_3434_);
v___x_3436_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3436_, 0, v_listener_3429_);
lean_ctor_set(v___x_3436_, 1, v___x_3434_);
v___x_3437_ = lean_mk_empty_array_with_capacity(v___x_3432_);
v___x_3438_ = lean_array_push(v___x_3437_, v___x_3435_);
v___x_3439_ = lean_array_push(v___x_3438_, v___x_3436_);
v___x_3440_ = l_Lasm_JS_Web_Support_args(v___x_3439_);
v___x_3441_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(v___x_3433_, v___x_3440_, v___x_3431_);
return v___x_3441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_addAbortListener___boxed(lean_object* v_signal_3442_, lean_object* v_listener_3443_, lean_object* v_a_3444_){
_start:
{
lean_object* v_res_3445_; 
v_res_3445_ = l_Lasm_JS_Node_events_addAbortListener(v_signal_3442_, v_listener_3443_);
return v_res_3445_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_AsyncHooks(uint8_t builtin);
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
res = initialize_Lasm_JS_Node_AsyncHooks(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instToJSEventsOnOptions = _init_l_Lasm_JS_Node_instToJSEventsOnOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSEventsOnOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
