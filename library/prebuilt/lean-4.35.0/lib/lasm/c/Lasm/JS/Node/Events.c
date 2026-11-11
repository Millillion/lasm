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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Node_instToJSOnceOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Node_instToJSOnceOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSOnceOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSOnceOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSOnceOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSOnceOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSOnceOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSOnceOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSOnceOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSOnceOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSOnceOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSOnceOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSOnceOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSOnceOptions___closed__1_value;
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__10_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__11_value;
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
static const lean_string_object l_Lasm_JS_Node_EventEmitter_on___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "on"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_on___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_on___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_EventEmitter_once___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "once"};
static const lean_object* l_Lasm_JS_Node_EventEmitter_once___closed__0 = (const lean_object*)&l_Lasm_JS_Node_EventEmitter_once___closed__0_value;
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
static const lean_string_object l_Lasm_JS_Node_events_once___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "node:events"};
static const lean_object* l_Lasm_JS_Node_events_once___closed__1 = (const lean_object*)&l_Lasm_JS_Node_events_once___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_events_once___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_events_once___closed__0_value),((lean_object*)&l_Lasm_JS_Node_events_once___closed__1_value),((lean_object*)&l_Lasm_JS_Node_EventEmitter_once___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_events_once___closed__2 = (const lean_object*)&l_Lasm_JS_Node_events_once___closed__2_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSOnceOptions___lam__0(lean_object* v___f_80_, lean_object* v_d_81_){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_82_ = ((lean_object*)(l_Lasm_JS_Node_instToJSOnceOptions___lam__0___closed__0));
v___x_83_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_80_, v_d_81_);
v___x_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_mk_empty_array_with_capacity(v___x_85_);
v___x_87_ = lean_array_push(v___x_86_, v___x_84_);
v___x_88_ = l_Lasm_JS_Web_Support_fields(v___x_87_);
lean_dec_ref(v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t v_sz_93_, size_t v_i_94_, lean_object* v_bs_95_){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = lean_usize_dec_lt(v_i_94_, v_sz_93_);
if (v___x_96_ == 0)
{
return v_bs_95_;
}
else
{
lean_object* v_v_97_; lean_object* v___x_98_; lean_object* v_bs_x27_99_; size_t v___x_100_; size_t v___x_101_; lean_object* v___x_102_; 
v_v_97_ = lean_array_uget(v_bs_95_, v_i_94_);
v___x_98_ = lean_unsigned_to_nat(0u);
v_bs_x27_99_ = lean_array_uset(v_bs_95_, v_i_94_, v___x_98_);
v___x_100_ = ((size_t)1ULL);
v___x_101_ = lean_usize_add(v_i_94_, v___x_100_);
v___x_102_ = lean_array_uset(v_bs_x27_99_, v_i_94_, v_v_97_);
v_i_94_ = v___x_101_;
v_bs_95_ = v___x_102_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0___boxed(lean_object* v_sz_104_, lean_object* v_i_105_, lean_object* v_bs_106_){
_start:
{
size_t v_sz_boxed_107_; size_t v_i_boxed_108_; lean_object* v_res_109_; 
v_sz_boxed_107_ = lean_unbox_usize(v_sz_104_);
lean_dec(v_sz_104_);
v_i_boxed_108_ = lean_unbox_usize(v_i_105_);
lean_dec(v_i_105_);
v_res_109_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_boxed_107_, v_i_boxed_108_, v_bs_106_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit(lean_object* v_self_111_, lean_object* v_eventName_112_, lean_object* v_args_113_){
_start:
{
lean_object* v___x_115_; lean_object* v___y_117_; 
v___x_115_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_emit___closed__0));
if (lean_obj_tag(v_eventName_112_) == 0)
{
lean_object* v_value_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_133_; 
v_value_126_ = lean_ctor_get(v_eventName_112_, 0);
v_isSharedCheck_133_ = !lean_is_exclusive(v_eventName_112_);
if (v_isSharedCheck_133_ == 0)
{
v___x_128_ = v_eventName_112_;
v_isShared_129_ = v_isSharedCheck_133_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_value_126_);
lean_dec(v_eventName_112_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_133_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_131_; 
if (v_isShared_129_ == 0)
{
lean_ctor_set_tag(v___x_128_, 4);
v___x_131_ = v___x_128_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_value_126_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
v___y_117_ = v___x_131_;
goto v___jp_116_;
}
}
}
else
{
lean_object* v_value_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v_value_134_ = lean_ctor_get(v_eventName_112_, 0);
lean_inc(v_value_134_);
lean_dec_ref_known(v_eventName_112_, 1);
v___x_135_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_136_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_136_, 0, v_value_134_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___y_117_ = v___x_136_;
goto v___jp_116_;
}
v___jp_116_:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; size_t v_sz_121_; size_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_118_ = lean_unsigned_to_nat(1u);
v___x_119_ = lean_mk_empty_array_with_capacity(v___x_118_);
v___x_120_ = lean_array_push(v___x_119_, v___y_117_);
v_sz_121_ = lean_array_size(v_args_113_);
v___x_122_ = ((size_t)0ULL);
v___x_123_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_121_, v___x_122_, v_args_113_);
v___x_124_ = l_Lasm_JS_Web_Support_argsWith(v___x_120_, v___x_123_);
lean_dec_ref(v___x_123_);
v___x_125_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_111_, v___x_115_, v___x_124_);
return v___x_125_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit___boxed(lean_object* v_self_137_, lean_object* v_eventName_138_, lean_object* v_args_139_, lean_object* v_a_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lasm_JS_Node_EventEmitter_emit(v_self_137_, v_eventName_138_, v_args_139_);
return v_res_141_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_142_; uint64_t v___x_143_; 
v___x_142_ = 0;
v___x_143_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_142_);
return v___x_143_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(uint8_t v_await_144_, uint64_t v_extra_145_){
_start:
{
uint64_t v___x_146_; uint64_t v___y_148_; 
v___x_146_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_await_144_ == 0)
{
uint64_t v___x_151_; 
v___x_151_ = 0ULL;
v___y_148_ = v___x_151_;
goto v___jp_147_;
}
else
{
uint64_t v___x_152_; 
v___x_152_ = 2ULL;
v___y_148_ = v___x_152_;
goto v___jp_147_;
}
v___jp_147_:
{
uint64_t v___x_149_; uint64_t v___x_150_; 
v___x_149_ = lean_uint64_lor(v___x_146_, v___y_148_);
v___x_150_ = lean_uint64_lor(v___x_149_, v_extra_145_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___boxed(lean_object* v_await_153_, lean_object* v_extra_154_){
_start:
{
uint8_t v_await_boxed_155_; uint64_t v_extra_boxed_156_; uint64_t v_res_157_; lean_object* v_r_158_; 
v_await_boxed_155_ = lean_unbox(v_await_153_);
v_extra_boxed_156_ = lean_unbox_uint64(v_extra_154_);
lean_dec_ref(v_extra_154_);
v_res_157_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(v_await_boxed_155_, v_extra_boxed_156_);
v_r_158_ = lean_box_uint64(v_res_157_);
return v_r_158_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0(void){
_start:
{
uint64_t v___x_159_; uint8_t v___x_160_; uint64_t v___x_161_; 
v___x_159_ = 8ULL;
v___x_160_ = 0;
v___x_161_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(v___x_160_, v___x_159_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(lean_object* v_o_162_, lean_object* v_name_163_, lean_object* v_args_164_){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; uint64_t v___x_169_; lean_object* v___x_170_; 
v___x_166_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_167_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_167_, 0, v_o_162_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
v___x_168_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_168_, 0, v_name_163_);
v___x_169_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0);
v___x_170_ = l_Lasm_JS_Value_invokeRaw(v___x_167_, v___x_168_, v_args_164_, v___x_169_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_172_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
lean_inc(v_a_171_);
lean_dec_ref_known(v___x_170_, 1);
v___x_172_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_171_);
lean_dec(v_a_171_);
return v___x_172_;
}
else
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_180_; 
v_a_173_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_180_ == 0)
{
v___x_175_ = v___x_170_;
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_170_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_176_ == 0)
{
v___x_178_ = v___x_175_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_a_173_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___boxed(lean_object* v_o_181_, lean_object* v_name_182_, lean_object* v_args_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(v_o_181_, v_name_182_, v_args_183_);
return v_res_185_;
}
}
static lean_object* _init_l_Lasm_JS_Node_EventEmitter_eventNames___closed__2(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_eventNames___closed__1));
v___x_190_ = l_Lasm_JS_Web_Support_args(v___x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames(lean_object* v_self_191_){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_193_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_eventNames___closed__0));
v___x_194_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_eventNames___closed__2, &l_Lasm_JS_Node_EventEmitter_eventNames___closed__2_once, _init_l_Lasm_JS_Node_EventEmitter_eventNames___closed__2);
v___x_195_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(v_self_191_, v___x_193_, v___x_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames___boxed(lean_object* v_self_196_, lean_object* v_a_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lasm_JS_Node_EventEmitter_eventNames(v_self_196_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(lean_object* v_x_199_){
_start:
{
if (lean_obj_tag(v_x_199_) == 0)
{
lean_object* v___x_200_; 
v___x_200_ = lean_box(0);
return v___x_200_;
}
else
{
lean_object* v_val_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_val_201_ = lean_ctor_get(v_x_199_, 0);
v___x_202_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
lean_inc(v_val_201_);
v___x_203_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_203_, 0, v_val_201_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0___boxed(lean_object* v_x_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(v_x_204_);
lean_dec(v_x_204_);
return v_res_205_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_215_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__8));
v___x_216_ = lean_unsigned_to_nat(46u);
v___x_217_ = lean_unsigned_to_nat(193u);
v___x_218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__7));
v___x_219_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__6));
v___x_220_ = l_mkPanicMessageWithDecl(v___x_219_, v___x_218_, v___x_217_, v___x_216_, v___x_215_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(lean_object* v_context_223_, lean_object* v_d_224_){
_start:
{
lean_object* v___y_227_; lean_object* v___y_228_; lean_object* v___y_233_; lean_object* v_received_234_; lean_object* v___y_253_; lean_object* v_a_256_; 
switch(lean_obj_tag(v_d_224_))
{
case 3:
{
double v_n_280_; lean_object* v___x_281_; 
v_n_280_ = lean_ctor_get_float(v_d_224_, 0);
v___x_281_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_280_);
if (lean_obj_tag(v___x_281_) == 0)
{
lean_object* v___x_282_; 
v___x_282_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__11));
v_a_256_ = v___x_282_;
goto v___jp_255_;
}
else
{
lean_object* v_val_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_290_; 
lean_dec_ref_known(v_d_224_, 0);
v_val_283_ = lean_ctor_get(v___x_281_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_290_ == 0)
{
v___x_285_ = v___x_281_;
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_val_283_);
lean_dec(v___x_281_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_288_; 
if (v_isShared_286_ == 0)
{
lean_ctor_set_tag(v___x_285_, 0);
v___x_288_ = v___x_285_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_val_283_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
}
case 5:
{
lean_object* v_i_291_; lean_object* v___x_292_; 
v_i_291_ = lean_ctor_get(v_d_224_, 0);
lean_inc(v_i_291_);
lean_dec_ref_known(v_d_224_, 1);
v___x_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_292_, 0, v_i_291_);
return v___x_292_;
}
default: 
{
lean_object* v___x_293_; 
v___x_293_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v_a_256_ = v___x_293_;
goto v___jp_255_;
}
}
v___jp_226_:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_229_ = lean_string_append(v___y_227_, v___y_228_);
lean_dec_ref(v___y_228_);
v___x_230_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
v___x_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
return v___x_231_;
}
v___jp_232_:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; uint8_t v___x_246_; 
v___x_235_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0));
v___x_236_ = lean_string_append(v___x_235_, v_context_223_);
v___x_237_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1));
v___x_238_ = lean_string_append(v___x_236_, v___x_237_);
v___x_239_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2));
v___x_240_ = lean_string_append(v___x_238_, v___x_239_);
v___x_241_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3));
v___x_242_ = lean_string_append(v___x_240_, v___x_241_);
v___x_243_ = lean_string_append(v___x_242_, v_received_234_);
lean_dec_ref(v_received_234_);
v___x_244_ = lean_string_utf8_byte_size(v___y_233_);
v___x_245_ = lean_unsigned_to_nat(0u);
v___x_246_ = lean_nat_dec_eq(v___x_244_, v___x_245_);
if (v___x_246_ == 0)
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_247_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__4));
v___x_248_ = lean_string_append(v___x_247_, v___y_233_);
v___x_249_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__5));
v___x_250_ = lean_string_append(v___x_248_, v___x_249_);
v___y_227_ = v___x_243_;
v___y_228_ = v___x_250_;
goto v___jp_226_;
}
else
{
lean_object* v___x_251_; 
v___x_251_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___y_227_ = v___x_243_;
v___y_228_ = v___x_251_;
goto v___jp_226_;
}
}
v___jp_252_:
{
lean_object* v___x_254_; 
v___x_254_ = l_Lasm_JS_Data_describe(v_d_224_);
v___y_233_ = v___y_253_;
v_received_234_ = v___x_254_;
goto v___jp_232_;
}
v___jp_255_:
{
if (lean_obj_tag(v_d_224_) == 9)
{
lean_object* v_value_257_; lean_object* v_description_258_; lean_object* v___x_259_; uint8_t v___x_260_; 
v_value_257_ = lean_ctor_get(v_d_224_, 0);
v_description_258_ = lean_ctor_get(v_d_224_, 1);
v___x_259_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_260_ = lean_string_dec_eq(v_description_258_, v___x_259_);
if (v___x_260_ == 0)
{
v___y_253_ = v_a_256_;
goto v___jp_252_;
}
else
{
lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_277_; 
lean_inc(v_value_257_);
v_isSharedCheck_277_ = !lean_is_exclusive(v_d_224_);
if (v_isSharedCheck_277_ == 0)
{
lean_object* v_unused_278_; lean_object* v_unused_279_; 
v_unused_278_ = lean_ctor_get(v_d_224_, 1);
lean_dec(v_unused_278_);
v_unused_279_ = lean_ctor_get(v_d_224_, 0);
lean_dec(v_unused_279_);
v___x_262_ = v_d_224_;
v_isShared_263_ = v_isSharedCheck_277_;
goto v_resetjp_261_;
}
else
{
lean_dec(v_d_224_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_277_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
uint32_t v___x_264_; uint64_t v___x_265_; lean_object* v___x_267_; 
v___x_264_ = 206;
v___x_265_ = 0ULL;
lean_inc(v_value_257_);
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 1, v___x_259_);
v___x_267_ = v___x_262_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v_value_257_);
lean_ctor_set(v_reuseFailAlloc_276_, 1, v___x_259_);
v___x_267_ = v_reuseFailAlloc_276_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
uint32_t v___x_268_; lean_object* v___x_269_; 
v___x_268_ = lasm_js_value_handle(v_value_257_);
lean_dec(v_value_257_);
v___x_269_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_264_, v___x_265_, v___x_267_, v___x_268_);
lean_dec_ref(v___x_267_);
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v_a_270_; uint8_t v___x_271_; 
v_a_270_ = lean_ctor_get(v___x_269_, 0);
lean_inc(v_a_270_);
lean_dec_ref_known(v___x_269_, 1);
v___x_271_ = lean_string_validate_utf8(v_a_270_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; lean_object* v___x_273_; 
lean_dec(v_a_270_);
v___x_272_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9);
v___x_273_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_272_);
v___y_233_ = v_a_256_;
v_received_234_ = v___x_273_;
goto v___jp_232_;
}
else
{
lean_object* v___x_274_; 
v___x_274_ = lean_string_from_utf8_unchecked(v_a_270_);
v___y_233_ = v_a_256_;
v_received_234_ = v___x_274_;
goto v___jp_232_;
}
}
else
{
lean_object* v___x_275_; 
lean_dec_ref_known(v___x_269_, 1);
v___x_275_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__10));
v___y_233_ = v_a_256_;
v_received_234_ = v___x_275_;
goto v___jp_232_;
}
}
}
}
}
else
{
v___y_253_ = v_a_256_;
goto v___jp_252_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___boxed(lean_object* v_context_294_, lean_object* v_d_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(v_context_294_, v_d_295_);
lean_dec_ref(v_context_294_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(lean_object* v_context_298_, lean_object* v_bytes_299_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_299_);
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v_a_302_; lean_object* v___x_303_; 
v_a_302_ = lean_ctor_get(v___x_301_, 0);
lean_inc(v_a_302_);
lean_dec_ref_known(v___x_301_, 1);
v___x_303_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(v_context_298_, v_a_302_);
return v___x_303_;
}
else
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
v_a_304_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_311_ == 0)
{
v___x_306_ = v___x_301_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_301_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_a_304_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2___boxed(lean_object* v_context_312_, lean_object* v_bytes_313_, lean_object* v_a_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(v_context_312_, v_bytes_313_);
lean_dec_ref(v_bytes_313_);
lean_dec_ref(v_context_312_);
return v_res_315_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(uint8_t v_await_316_, uint64_t v_extra_317_){
_start:
{
uint64_t v___x_318_; uint64_t v___y_320_; 
v___x_318_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_await_316_ == 0)
{
uint64_t v___x_323_; 
v___x_323_ = 0ULL;
v___y_320_ = v___x_323_;
goto v___jp_319_;
}
else
{
uint64_t v___x_324_; 
v___x_324_ = 2ULL;
v___y_320_ = v___x_324_;
goto v___jp_319_;
}
v___jp_319_:
{
uint64_t v___x_321_; uint64_t v___x_322_; 
v___x_321_ = lean_uint64_lor(v___x_318_, v___y_320_);
v___x_322_ = lean_uint64_lor(v___x_321_, v_extra_317_);
return v___x_322_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1___boxed(lean_object* v_await_325_, lean_object* v_extra_326_){
_start:
{
uint8_t v_await_boxed_327_; uint64_t v_extra_boxed_328_; uint64_t v_res_329_; lean_object* v_r_330_; 
v_await_boxed_327_ = lean_unbox(v_await_325_);
v_extra_boxed_328_ = lean_unbox_uint64(v_extra_326_);
lean_dec_ref(v_extra_326_);
v_res_329_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(v_await_boxed_327_, v_extra_boxed_328_);
v_r_330_ = lean_box_uint64(v_res_329_);
return v_r_330_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0(void){
_start:
{
uint64_t v___x_331_; uint8_t v___x_332_; uint64_t v___x_333_; 
v___x_331_ = 8ULL;
v___x_332_ = 0;
v___x_333_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(v___x_332_, v___x_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(lean_object* v_o_335_, lean_object* v_name_336_, lean_object* v_args_337_){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; uint64_t v___x_342_; lean_object* v___x_343_; 
v___x_339_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_340_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_340_, 0, v_o_335_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
lean_inc_ref(v_name_336_);
v___x_341_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_341_, 0, v_name_336_);
v___x_342_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0);
v___x_343_ = l_Lasm_JS_Value_invokeRaw(v___x_340_, v___x_341_, v_args_337_, v___x_342_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_343_, 1);
v___x_345_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__1));
v___x_346_ = lean_string_append(v___x_345_, v_name_336_);
lean_dec_ref(v_name_336_);
v___x_347_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(v___x_346_, v_a_344_);
lean_dec(v_a_344_);
lean_dec_ref(v___x_346_);
return v___x_347_;
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec_ref(v_name_336_);
v_a_348_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_343_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_343_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___boxed(lean_object* v_o_356_, lean_object* v_name_357_, lean_object* v_args_358_, lean_object* v_a_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(v_o_356_, v_name_357_, v_args_358_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount(lean_object* v_self_362_, lean_object* v_eventName_363_, lean_object* v_listener_364_){
_start:
{
lean_object* v___x_366_; lean_object* v___y_368_; 
v___x_366_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_listenerCount___closed__0));
if (lean_obj_tag(v_eventName_363_) == 0)
{
lean_object* v_value_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
v_value_376_ = lean_ctor_get(v_eventName_363_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v_eventName_363_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v_eventName_363_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_value_376_);
lean_dec(v_eventName_363_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
lean_ctor_set_tag(v___x_378_, 4);
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_value_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
v___y_368_ = v___x_381_;
goto v___jp_367_;
}
}
}
else
{
lean_object* v_value_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v_value_384_ = lean_ctor_get(v_eventName_363_, 0);
lean_inc(v_value_384_);
lean_dec_ref_known(v_eventName_363_, 1);
v___x_385_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_386_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_386_, 0, v_value_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___y_368_ = v___x_386_;
goto v___jp_367_;
}
v___jp_367_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_369_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(v_listener_364_);
v___x_370_ = lean_unsigned_to_nat(2u);
v___x_371_ = lean_mk_empty_array_with_capacity(v___x_370_);
v___x_372_ = lean_array_push(v___x_371_, v___y_368_);
v___x_373_ = lean_array_push(v___x_372_, v___x_369_);
v___x_374_ = l_Lasm_JS_Web_Support_args(v___x_373_);
v___x_375_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(v_self_362_, v___x_366_, v___x_374_);
return v___x_375_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount___boxed(lean_object* v_self_387_, lean_object* v_eventName_388_, lean_object* v_listener_389_, lean_object* v_a_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lasm_JS_Node_EventEmitter_listenerCount(v_self_387_, v_eventName_388_, v_listener_389_);
lean_dec(v_listener_389_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off(lean_object* v_self_393_, lean_object* v_eventName_394_, lean_object* v_listener_395_){
_start:
{
lean_object* v___x_397_; lean_object* v___y_399_; 
v___x_397_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_off___closed__0));
if (lean_obj_tag(v_eventName_394_) == 0)
{
lean_object* v_value_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
v_value_424_ = lean_ctor_get(v_eventName_394_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v_eventName_394_);
if (v_isSharedCheck_431_ == 0)
{
v___x_426_ = v_eventName_394_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_value_424_);
lean_dec(v_eventName_394_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
lean_ctor_set_tag(v___x_426_, 4);
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_value_424_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
v___y_399_ = v___x_429_;
goto v___jp_398_;
}
}
}
else
{
lean_object* v_value_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v_value_432_ = lean_ctor_get(v_eventName_394_, 0);
lean_inc(v_value_432_);
lean_dec_ref_known(v_eventName_394_, 1);
v___x_433_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_434_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_434_, 0, v_value_432_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v___y_399_ = v___x_434_;
goto v___jp_398_;
}
v___jp_398_:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_400_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_401_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_401_, 0, v_listener_395_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = lean_unsigned_to_nat(2u);
v___x_403_ = lean_mk_empty_array_with_capacity(v___x_402_);
v___x_404_ = lean_array_push(v___x_403_, v___y_399_);
v___x_405_ = lean_array_push(v___x_404_, v___x_401_);
v___x_406_ = l_Lasm_JS_Web_Support_args(v___x_405_);
v___x_407_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_393_, v___x_397_, v___x_406_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
v_a_408_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_415_ == 0)
{
v___x_410_ = v___x_407_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_407_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_408_);
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
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_423_; 
v_a_416_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_423_ == 0)
{
v___x_418_ = v___x_407_;
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_407_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_416_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off___boxed(lean_object* v_self_435_, lean_object* v_eventName_436_, lean_object* v_listener_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lasm_JS_Node_EventEmitter_off(v_self_435_, v_eventName_436_, v_listener_437_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on(lean_object* v_self_441_, lean_object* v_eventName_442_, lean_object* v_listener_443_){
_start:
{
lean_object* v___x_445_; lean_object* v___y_447_; 
v___x_445_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_on___closed__0));
if (lean_obj_tag(v_eventName_442_) == 0)
{
lean_object* v_value_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
v_value_472_ = lean_ctor_get(v_eventName_442_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v_eventName_442_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v_eventName_442_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_value_472_);
lean_dec(v_eventName_442_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
lean_ctor_set_tag(v___x_474_, 4);
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_value_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
v___y_447_ = v___x_477_;
goto v___jp_446_;
}
}
}
else
{
lean_object* v_value_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v_value_480_ = lean_ctor_get(v_eventName_442_, 0);
lean_inc(v_value_480_);
lean_dec_ref_known(v_eventName_442_, 1);
v___x_481_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_482_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_482_, 0, v_value_480_);
lean_ctor_set(v___x_482_, 1, v___x_481_);
v___y_447_ = v___x_482_;
goto v___jp_446_;
}
v___jp_446_:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_448_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_449_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_449_, 0, v_listener_443_);
lean_ctor_set(v___x_449_, 1, v___x_448_);
v___x_450_ = lean_unsigned_to_nat(2u);
v___x_451_ = lean_mk_empty_array_with_capacity(v___x_450_);
v___x_452_ = lean_array_push(v___x_451_, v___y_447_);
v___x_453_ = lean_array_push(v___x_452_, v___x_449_);
v___x_454_ = l_Lasm_JS_Web_Support_args(v___x_453_);
v___x_455_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_441_, v___x_445_, v___x_454_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
v_a_456_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_455_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_455_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
else
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
v_a_464_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_455_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_455_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on___boxed(lean_object* v_self_483_, lean_object* v_eventName_484_, lean_object* v_listener_485_, lean_object* v_a_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lasm_JS_Node_EventEmitter_on(v_self_483_, v_eventName_484_, v_listener_485_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once(lean_object* v_self_489_, lean_object* v_eventName_490_, lean_object* v_listener_491_){
_start:
{
lean_object* v___x_493_; lean_object* v___y_495_; 
v___x_493_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_once___closed__0));
if (lean_obj_tag(v_eventName_490_) == 0)
{
lean_object* v_value_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
v_value_520_ = lean_ctor_get(v_eventName_490_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v_eventName_490_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v_eventName_490_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_value_520_);
lean_dec(v_eventName_490_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
lean_ctor_set_tag(v___x_522_, 4);
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_value_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
v___y_495_ = v___x_525_;
goto v___jp_494_;
}
}
}
else
{
lean_object* v_value_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_value_528_ = lean_ctor_get(v_eventName_490_, 0);
lean_inc(v_value_528_);
lean_dec_ref_known(v_eventName_490_, 1);
v___x_529_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_530_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_530_, 0, v_value_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___y_495_ = v___x_530_;
goto v___jp_494_;
}
v___jp_494_:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_496_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_497_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_497_, 0, v_listener_491_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
v___x_498_ = lean_unsigned_to_nat(2u);
v___x_499_ = lean_mk_empty_array_with_capacity(v___x_498_);
v___x_500_ = lean_array_push(v___x_499_, v___y_495_);
v___x_501_ = lean_array_push(v___x_500_, v___x_497_);
v___x_502_ = l_Lasm_JS_Web_Support_args(v___x_501_);
v___x_503_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_489_, v___x_493_, v___x_502_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
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
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
v_a_512_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_503_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_503_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once___boxed(lean_object* v_self_531_, lean_object* v_eventName_532_, lean_object* v_listener_533_, lean_object* v_a_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lasm_JS_Node_EventEmitter_once(v_self_531_, v_eventName_532_, v_listener_533_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(lean_object* v_x_536_){
_start:
{
if (lean_obj_tag(v_x_536_) == 0)
{
lean_object* v___x_537_; 
v___x_537_ = lean_box(0);
return v___x_537_;
}
else
{
lean_object* v_val_538_; 
v_val_538_ = lean_ctor_get(v_x_536_, 0);
lean_inc(v_val_538_);
lean_dec_ref_known(v_x_536_, 1);
if (lean_obj_tag(v_val_538_) == 0)
{
lean_object* v_value_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_546_; 
v_value_539_ = lean_ctor_get(v_val_538_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v_val_538_);
if (v_isSharedCheck_546_ == 0)
{
v___x_541_ = v_val_538_;
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_value_539_);
lean_dec(v_val_538_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_544_; 
if (v_isShared_542_ == 0)
{
lean_ctor_set_tag(v___x_541_, 4);
v___x_544_ = v___x_541_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_value_539_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
else
{
lean_object* v_value_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_value_547_ = lean_ctor_get(v_val_538_, 0);
lean_inc(v_value_547_);
lean_dec_ref_known(v_val_538_, 1);
v___x_548_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_549_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_549_, 0, v_value_547_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
return v___x_549_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners(lean_object* v_self_551_, lean_object* v_eventName_552_){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_554_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_removeAllListeners___closed__0));
v___x_555_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(v_eventName_552_);
v___x_556_ = lean_unsigned_to_nat(1u);
v___x_557_ = lean_mk_empty_array_with_capacity(v___x_556_);
v___x_558_ = lean_array_push(v___x_557_, v___x_555_);
v___x_559_ = l_Lasm_JS_Web_Support_args(v___x_558_);
v___x_560_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_551_, v___x_554_, v___x_559_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v___x_560_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_560_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
else
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
v_a_569_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v___x_560_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_560_);
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
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners___boxed(lean_object* v_self_577_, lean_object* v_eventName_578_, lean_object* v_a_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l_Lasm_JS_Node_EventEmitter_removeAllListeners(v_self_577_, v_eventName_578_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(lean_object* v___f_581_, lean_object* v_bytes_582_){
_start:
{
lean_object* v___x_584_; uint8_t v___x_585_; lean_object* v_val_587_; lean_object* v___x_590_; 
v___x_584_ = lean_unsigned_to_nat(0u);
v___x_585_ = 0;
v___x_590_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_582_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
v_a_591_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___x_590_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_590_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set_tag(v___x_593_, 1);
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
v_val_587_ = v___x_596_;
goto v___jp_586_;
}
}
}
else
{
lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_606_; 
v_a_599_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_606_ == 0)
{
v___x_601_ = v___x_590_;
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___x_590_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_604_; 
if (v_isShared_602_ == 0)
{
lean_ctor_set_tag(v___x_601_, 0);
v___x_604_ = v___x_601_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_a_599_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
v_val_587_ = v___x_604_;
goto v___jp_586_;
}
}
}
v___jp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_588_, 0, v_val_587_);
v___x_589_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_584_, v___x_585_, v___x_588_, v___f_581_);
return v___x_589_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed(lean_object* v___f_607_, lean_object* v_bytes_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(v___f_607_, v_bytes_608_);
lean_dec_ref(v_bytes_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(lean_object* v___f_611_, lean_object* v_x_612_){
_start:
{
if (lean_obj_tag(v_x_612_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_622_; 
lean_dec_ref(v___f_611_);
v_a_614_ = lean_ctor_get(v_x_612_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v_x_612_);
if (v_isSharedCheck_622_ == 0)
{
v___x_616_ = v_x_612_;
v_isShared_617_ = v_isSharedCheck_622_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v_x_612_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_622_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_621_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
lean_object* v___x_620_; 
v___x_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
return v___x_620_;
}
}
}
else
{
lean_object* v_a_623_; lean_object* v___x_624_; 
v_a_623_ = lean_ctor_get(v_x_612_, 0);
lean_inc(v_a_623_);
lean_dec_ref_known(v_x_612_, 1);
v___x_624_ = lean_apply_2(v___f_611_, v_a_623_, lean_box(0));
return v___x_624_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed(lean_object* v___f_625_, lean_object* v_x_626_, lean_object* v___y_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(v___f_625_, v_x_626_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(lean_object* v_failurePrefix_629_, lean_object* v_x_630_){
_start:
{
if (lean_obj_tag(v_x_630_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_643_; 
v_a_632_ = lean_ctor_get(v_x_630_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v_x_630_);
if (v_isSharedCheck_643_ == 0)
{
v___x_634_ = v_x_630_;
v_isShared_635_ = v_isSharedCheck_643_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v_x_630_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_643_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_640_; 
v___x_636_ = lean_io_error_to_string(v_a_632_);
v___x_637_ = lean_string_append(v_failurePrefix_629_, v___x_636_);
lean_dec_ref(v___x_636_);
v___x_638_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v___x_638_);
v___x_640_ = v___x_634_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_638_);
v___x_640_ = v_reuseFailAlloc_642_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; 
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
return v___x_641_;
}
}
}
else
{
lean_object* v___x_644_; 
lean_dec_ref(v_failurePrefix_629_);
v___x_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_644_, 0, v_x_630_);
return v___x_644_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed(lean_object* v_failurePrefix_645_, lean_object* v_x_646_, lean_object* v___y_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(v_failurePrefix_645_, v_x_646_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(lean_object* v_a_649_, lean_object* v_x_650_){
_start:
{
if (lean_obj_tag(v_x_650_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_660_; 
v_a_652_ = lean_ctor_get(v_x_650_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v_x_650_);
if (v_isSharedCheck_660_ == 0)
{
v___x_654_ = v_x_650_;
v_isShared_655_ = v_isSharedCheck_660_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v_x_650_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_660_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_652_);
v___x_657_ = v_reuseFailAlloc_659_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
lean_object* v___x_658_; 
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
return v___x_658_;
}
}
}
else
{
lean_object* v___x_661_; 
lean_dec_ref_known(v_x_650_, 1);
v___x_661_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_649_);
return v___x_661_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed(lean_object* v_a_662_, lean_object* v_x_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(v_a_662_, v_x_663_);
lean_dec(v_a_662_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(lean_object* v___x_666_, uint8_t v___x_667_, lean_object* v___f_668_, lean_object* v_a_669_, uint32_t v_op_670_, uint64_t v_flags_671_, lean_object* v_payload_672_, lean_object* v_x_673_){
_start:
{
lean_object* v_val_676_; 
if (lean_obj_tag(v_x_673_) == 0)
{
lean_object* v___x_679_; 
lean_dec_ref(v___f_668_);
lean_dec(v___x_666_);
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v_x_673_);
return v___x_679_;
}
else
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_694_; 
v_a_680_ = lean_ctor_get(v_x_673_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v_x_673_);
if (v_isSharedCheck_694_ == 0)
{
v___x_682_ = v_x_673_;
v_isShared_683_ = v_isSharedCheck_694_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v_x_673_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_694_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
uint32_t v___x_684_; lean_object* v___x_685_; 
v___x_684_ = 0;
v___x_685_ = lasm_js_call_into(v_a_669_, v_op_670_, v___x_684_, v_flags_671_, v_a_680_, v_payload_672_);
lean_dec(v_a_680_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; lean_object* v___x_688_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
lean_inc(v_a_686_);
lean_dec_ref_known(v___x_685_, 1);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 0, v_a_686_);
v___x_688_ = v___x_682_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_686_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
v_val_676_ = v___x_688_;
goto v___jp_675_;
}
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; 
v_a_690_ = lean_ctor_get(v___x_685_, 0);
lean_inc(v_a_690_);
lean_dec_ref_known(v___x_685_, 1);
if (v_isShared_683_ == 0)
{
lean_ctor_set_tag(v___x_682_, 0);
lean_ctor_set(v___x_682_, 0, v_a_690_);
v___x_692_ = v___x_682_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_690_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
v_val_676_ = v___x_692_;
goto v___jp_675_;
}
}
}
}
v___jp_675_:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v_val_676_);
v___x_678_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_666_, v___x_667_, v___x_677_, v___f_668_);
return v___x_678_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed(lean_object* v___x_695_, lean_object* v___x_696_, lean_object* v___f_697_, lean_object* v_a_698_, lean_object* v_op_699_, lean_object* v_flags_700_, lean_object* v_payload_701_, lean_object* v_x_702_, lean_object* v___y_703_){
_start:
{
uint8_t v___x_1391__boxed_704_; uint32_t v_op_boxed_705_; uint64_t v_flags_boxed_706_; lean_object* v_res_707_; 
v___x_1391__boxed_704_ = lean_unbox(v___x_696_);
v_op_boxed_705_ = lean_unbox_uint32(v_op_699_);
lean_dec(v_op_699_);
v_flags_boxed_706_ = lean_unbox_uint64(v_flags_700_);
lean_dec_ref(v_flags_700_);
v_res_707_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(v___x_695_, v___x_1391__boxed_704_, v___f_697_, v_a_698_, v_op_boxed_705_, v_flags_boxed_706_, v_payload_701_, v_x_702_);
lean_dec(v_payload_701_);
lean_dec(v_a_698_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(lean_object* v___f_708_, lean_object* v_a_709_, uint32_t v_op_710_, uint64_t v_flags_711_, lean_object* v_payload_712_, lean_object* v_x_713_){
_start:
{
if (lean_obj_tag(v_x_713_) == 0)
{
lean_object* v___x_715_; 
lean_dec_ref(v___f_708_);
v___x_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_715_, 0, v_x_713_);
return v___x_715_;
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_736_; 
v_a_716_ = lean_ctor_get(v_x_713_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v_x_713_);
if (v_isSharedCheck_736_ == 0)
{
v___x_718_ = v_x_713_;
v_isShared_719_ = v_isSharedCheck_736_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v_x_713_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_736_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
uint32_t v___x_720_; lean_object* v___x_721_; uint8_t v___x_722_; lean_object* v_val_724_; lean_object* v___x_727_; 
v___x_720_ = 0;
v___x_721_ = lean_unsigned_to_nat(0u);
v___x_722_ = 0;
v___x_727_ = lasm_js_call_into(v_a_709_, v_op_710_, v___x_720_, v_flags_711_, v_a_716_, v_payload_712_);
lean_dec(v_a_716_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_730_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc(v_a_728_);
lean_dec_ref_known(v___x_727_, 1);
if (v_isShared_719_ == 0)
{
lean_ctor_set(v___x_718_, 0, v_a_728_);
v___x_730_ = v___x_718_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_728_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
v_val_724_ = v___x_730_;
goto v___jp_723_;
}
}
else
{
lean_object* v_a_732_; lean_object* v___x_734_; 
v_a_732_ = lean_ctor_get(v___x_727_, 0);
lean_inc(v_a_732_);
lean_dec_ref_known(v___x_727_, 1);
if (v_isShared_719_ == 0)
{
lean_ctor_set_tag(v___x_718_, 0);
lean_ctor_set(v___x_718_, 0, v_a_732_);
v___x_734_ = v___x_718_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_732_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
v_val_724_ = v___x_734_;
goto v___jp_723_;
}
}
v___jp_723_:
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_725_, 0, v_val_724_);
v___x_726_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_721_, v___x_722_, v___x_725_, v___f_708_);
return v___x_726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed(lean_object* v___f_737_, lean_object* v_a_738_, lean_object* v_op_739_, lean_object* v_flags_740_, lean_object* v_payload_741_, lean_object* v_x_742_, lean_object* v___y_743_){
_start:
{
uint32_t v_op_boxed_744_; uint64_t v_flags_boxed_745_; lean_object* v_res_746_; 
v_op_boxed_744_ = lean_unbox_uint32(v_op_739_);
lean_dec(v_op_739_);
v_flags_boxed_745_ = lean_unbox_uint64(v_flags_740_);
lean_dec_ref(v_flags_740_);
v_res_746_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(v___f_737_, v_a_738_, v_op_boxed_744_, v_flags_boxed_745_, v_payload_741_, v_x_742_);
lean_dec(v_payload_741_);
lean_dec(v_a_738_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(lean_object* v_failurePrefix_747_, uint32_t v_op_748_, uint64_t v_flags_749_, lean_object* v_payload_750_, lean_object* v___f_751_, lean_object* v___f_752_, lean_object* v___f_753_, lean_object* v_x_754_){
_start:
{
if (lean_obj_tag(v_x_754_) == 0)
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_764_; 
lean_dec_ref(v___f_753_);
lean_dec_ref(v___f_752_);
lean_dec_ref(v___f_751_);
lean_dec(v_payload_750_);
v_a_756_ = lean_ctor_get(v_x_754_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v_x_754_);
if (v_isSharedCheck_764_ == 0)
{
v___x_758_ = v_x_754_;
v_isShared_759_ = v_isSharedCheck_764_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v_x_754_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_764_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_763_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_762_; 
v___x_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
return v___x_762_;
}
}
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_811_; 
v_a_765_ = lean_ctor_get(v_x_754_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v_x_754_);
if (v_isSharedCheck_811_ == 0)
{
v___x_767_ = v_x_754_;
v_isShared_768_ = v_isSharedCheck_811_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v_x_754_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_811_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_769_; lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_769_ = lean_string_utf8_byte_size(v_failurePrefix_747_);
v___x_770_ = lean_unsigned_to_nat(0u);
v___x_771_ = lean_nat_dec_eq(v___x_769_, v___x_770_);
if (v___x_771_ == 0)
{
lean_object* v___f_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___f_776_; lean_object* v_val_778_; lean_object* v___x_783_; 
lean_dec_ref(v___f_753_);
lean_inc(v_a_765_);
v___f_772_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_772_, 0, v_a_765_);
v___x_773_ = lean_box(v___x_771_);
v___x_774_ = lean_box_uint32(v_op_748_);
v___x_775_ = lean_box_uint64(v_flags_749_);
lean_inc(v_payload_750_);
v___f_776_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_776_, 0, v___x_770_);
lean_closure_set(v___f_776_, 1, v___x_773_);
lean_closure_set(v___f_776_, 2, v___f_772_);
lean_closure_set(v___f_776_, 3, v_a_765_);
lean_closure_set(v___f_776_, 4, v___x_774_);
lean_closure_set(v___f_776_, 5, v___x_775_);
lean_closure_set(v___f_776_, 6, v_payload_750_);
v___x_783_ = l_Lasm_JS_Wire_encodeIO(v_payload_750_);
lean_dec(v_payload_750_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_784_; lean_object* v___x_786_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_784_);
lean_dec_ref_known(v___x_783_, 1);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 0, v_a_784_);
v___x_786_ = v___x_767_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_784_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
v_val_778_ = v___x_786_;
goto v___jp_777_;
}
}
else
{
lean_object* v_a_788_; lean_object* v___x_790_; 
v_a_788_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_788_);
lean_dec_ref_known(v___x_783_, 1);
if (v_isShared_768_ == 0)
{
lean_ctor_set_tag(v___x_767_, 0);
lean_ctor_set(v___x_767_, 0, v_a_788_);
v___x_790_ = v___x_767_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_788_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
v_val_778_ = v___x_790_;
goto v___jp_777_;
}
}
v___jp_777_:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_779_, 0, v_val_778_);
v___x_780_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_770_, v___x_771_, v___x_779_, v___f_776_);
v___x_781_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_770_, v___x_771_, v___x_780_, v___f_751_);
v___x_782_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_770_, v___x_771_, v___x_781_, v___f_752_);
return v___x_782_;
}
}
else
{
lean_object* v___f_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___f_795_; uint8_t v___x_796_; lean_object* v_val_798_; lean_object* v___x_802_; 
lean_dec_ref(v___f_752_);
lean_dec_ref(v___f_751_);
lean_inc(v_a_765_);
v___f_792_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_792_, 0, v_a_765_);
v___x_793_ = lean_box_uint32(v_op_748_);
v___x_794_ = lean_box_uint64(v_flags_749_);
lean_inc(v_payload_750_);
v___f_795_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_795_, 0, v___f_792_);
lean_closure_set(v___f_795_, 1, v_a_765_);
lean_closure_set(v___f_795_, 2, v___x_793_);
lean_closure_set(v___f_795_, 3, v___x_794_);
lean_closure_set(v___f_795_, 4, v_payload_750_);
v___x_796_ = 0;
v___x_802_ = l_Lasm_JS_Wire_encodeIO(v_payload_750_);
lean_dec(v_payload_750_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_805_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_a_803_);
lean_dec_ref_known(v___x_802_, 1);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 0, v_a_803_);
v___x_805_ = v___x_767_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
v_val_798_ = v___x_805_;
goto v___jp_797_;
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; 
v_a_807_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_a_807_);
lean_dec_ref_known(v___x_802_, 1);
if (v_isShared_768_ == 0)
{
lean_ctor_set_tag(v___x_767_, 0);
lean_ctor_set(v___x_767_, 0, v_a_807_);
v___x_809_ = v___x_767_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
v_val_798_ = v___x_809_;
goto v___jp_797_;
}
}
v___jp_797_:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_799_, 0, v_val_798_);
v___x_800_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_770_, v___x_796_, v___x_799_, v___f_795_);
v___x_801_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_770_, v___x_796_, v___x_800_, v___f_753_);
return v___x_801_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed(lean_object* v_failurePrefix_812_, lean_object* v_op_813_, lean_object* v_flags_814_, lean_object* v_payload_815_, lean_object* v___f_816_, lean_object* v___f_817_, lean_object* v___f_818_, lean_object* v_x_819_, lean_object* v___y_820_){
_start:
{
uint32_t v_op_boxed_821_; uint64_t v_flags_boxed_822_; lean_object* v_res_823_; 
v_op_boxed_821_ = lean_unbox_uint32(v_op_813_);
lean_dec(v_op_813_);
v_flags_boxed_822_ = lean_unbox_uint64(v_flags_814_);
lean_dec_ref(v_flags_814_);
v_res_823_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(v_failurePrefix_812_, v_op_boxed_821_, v_flags_boxed_822_, v_payload_815_, v___f_816_, v___f_817_, v___f_818_, v_x_819_);
lean_dec_ref(v_failurePrefix_812_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(size_t v_sz_824_, size_t v_i_825_, lean_object* v_bs_826_){
_start:
{
uint8_t v___x_827_; 
v___x_827_ = lean_usize_dec_lt(v_i_825_, v_sz_824_);
if (v___x_827_ == 0)
{
lean_object* v___x_828_; 
v___x_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_828_, 0, v_bs_826_);
return v___x_828_;
}
else
{
lean_object* v_v_829_; lean_object* v___x_830_; lean_object* v_bs_x27_831_; size_t v___x_832_; size_t v___x_833_; lean_object* v___x_834_; 
v_v_829_ = lean_array_uget(v_bs_826_, v_i_825_);
v___x_830_ = lean_unsigned_to_nat(0u);
v_bs_x27_831_ = lean_array_uset(v_bs_826_, v_i_825_, v___x_830_);
v___x_832_ = ((size_t)1ULL);
v___x_833_ = lean_usize_add(v_i_825_, v___x_832_);
v___x_834_ = lean_array_uset(v_bs_x27_831_, v_i_825_, v_v_829_);
v_i_825_ = v___x_833_;
v_bs_826_ = v___x_834_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_836_, lean_object* v_i_837_, lean_object* v_bs_838_){
_start:
{
size_t v_sz_boxed_839_; size_t v_i_boxed_840_; lean_object* v_res_841_; 
v_sz_boxed_839_ = lean_unbox_usize(v_sz_836_);
lean_dec(v_sz_836_);
v_i_boxed_840_ = lean_unbox_usize(v_i_837_);
lean_dec(v_i_837_);
v_res_841_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_boxed_839_, v_i_boxed_840_, v_bs_838_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(lean_object* v_context_845_, lean_object* v_d_846_){
_start:
{
lean_object* v___y_849_; lean_object* v___y_850_; lean_object* v___y_855_; lean_object* v_received_856_; lean_object* v___y_875_; lean_object* v_a_878_; 
if (lean_obj_tag(v_d_846_) == 7)
{
lean_object* v_items_902_; size_t v_sz_903_; size_t v___x_904_; lean_object* v___x_905_; 
v_items_902_ = lean_ctor_get(v_d_846_, 0);
v_sz_903_ = lean_array_size(v_items_902_);
v___x_904_ = ((size_t)0ULL);
lean_inc_ref(v_items_902_);
v___x_905_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_903_, v___x_904_, v_items_902_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v_a_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; uint8_t v___x_910_; 
v_a_906_ = lean_ctor_get(v___x_905_, 0);
lean_inc(v_a_906_);
lean_dec_ref_known(v___x_905_, 1);
v___x_907_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__1));
v___x_908_ = lean_string_utf8_byte_size(v_a_906_);
v___x_909_ = lean_unsigned_to_nat(0u);
v___x_910_ = lean_nat_dec_eq(v___x_908_, v___x_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_911_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2));
v___x_912_ = lean_string_append(v___x_911_, v_a_906_);
lean_dec(v_a_906_);
v___x_913_ = lean_string_append(v___x_907_, v___x_912_);
lean_dec_ref(v___x_912_);
v_a_878_ = v___x_913_;
goto v___jp_877_;
}
else
{
lean_dec(v_a_906_);
v_a_878_ = v___x_907_;
goto v___jp_877_;
}
}
else
{
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v_a_914_; 
v_a_914_ = lean_ctor_get(v___x_905_, 0);
lean_inc(v_a_914_);
lean_dec_ref_known(v___x_905_, 1);
v_a_878_ = v_a_914_;
goto v___jp_877_;
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec_ref_known(v_d_846_, 1);
v_a_915_ = lean_ctor_get(v___x_905_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_905_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_905_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
lean_ctor_set_tag(v___x_917_, 0);
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
}
else
{
lean_object* v___x_923_; 
v___x_923_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v_a_878_ = v___x_923_;
goto v___jp_877_;
}
v___jp_848_:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_851_ = lean_string_append(v___y_849_, v___y_850_);
lean_dec_ref(v___y_850_);
v___x_852_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_852_, 0, v___x_851_);
v___x_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
return v___x_853_;
}
v___jp_854_:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_857_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0));
v___x_858_ = lean_string_append(v___x_857_, v_context_845_);
v___x_859_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1));
v___x_860_ = lean_string_append(v___x_858_, v___x_859_);
v___x_861_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__0));
v___x_862_ = lean_string_append(v___x_860_, v___x_861_);
v___x_863_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3));
v___x_864_ = lean_string_append(v___x_862_, v___x_863_);
v___x_865_ = lean_string_append(v___x_864_, v_received_856_);
lean_dec_ref(v_received_856_);
v___x_866_ = lean_string_utf8_byte_size(v___y_855_);
v___x_867_ = lean_unsigned_to_nat(0u);
v___x_868_ = lean_nat_dec_eq(v___x_866_, v___x_867_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_869_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__4));
v___x_870_ = lean_string_append(v___x_869_, v___y_855_);
lean_dec_ref(v___y_855_);
v___x_871_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__5));
v___x_872_ = lean_string_append(v___x_870_, v___x_871_);
v___y_849_ = v___x_865_;
v___y_850_ = v___x_872_;
goto v___jp_848_;
}
else
{
lean_object* v___x_873_; 
lean_dec_ref(v___y_855_);
v___x_873_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___y_849_ = v___x_865_;
v___y_850_ = v___x_873_;
goto v___jp_848_;
}
}
v___jp_874_:
{
lean_object* v___x_876_; 
v___x_876_ = l_Lasm_JS_Data_describe(v_d_846_);
v___y_855_ = v___y_875_;
v_received_856_ = v___x_876_;
goto v___jp_854_;
}
v___jp_877_:
{
if (lean_obj_tag(v_d_846_) == 9)
{
lean_object* v_value_879_; lean_object* v_description_880_; lean_object* v___x_881_; uint8_t v___x_882_; 
v_value_879_ = lean_ctor_get(v_d_846_, 0);
v_description_880_ = lean_ctor_get(v_d_846_, 1);
v___x_881_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_882_ = lean_string_dec_eq(v_description_880_, v___x_881_);
if (v___x_882_ == 0)
{
v___y_875_ = v_a_878_;
goto v___jp_874_;
}
else
{
lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_899_; 
lean_inc(v_value_879_);
v_isSharedCheck_899_ = !lean_is_exclusive(v_d_846_);
if (v_isSharedCheck_899_ == 0)
{
lean_object* v_unused_900_; lean_object* v_unused_901_; 
v_unused_900_ = lean_ctor_get(v_d_846_, 1);
lean_dec(v_unused_900_);
v_unused_901_ = lean_ctor_get(v_d_846_, 0);
lean_dec(v_unused_901_);
v___x_884_ = v_d_846_;
v_isShared_885_ = v_isSharedCheck_899_;
goto v_resetjp_883_;
}
else
{
lean_dec(v_d_846_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_899_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
uint32_t v___x_886_; uint64_t v___x_887_; lean_object* v___x_889_; 
v___x_886_ = 206;
v___x_887_ = 0ULL;
lean_inc(v_value_879_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 1, v___x_881_);
v___x_889_ = v___x_884_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_value_879_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v___x_881_);
v___x_889_ = v_reuseFailAlloc_898_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
uint32_t v___x_890_; lean_object* v___x_891_; 
v___x_890_ = lasm_js_value_handle(v_value_879_);
lean_dec(v_value_879_);
v___x_891_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_886_, v___x_887_, v___x_889_, v___x_890_);
lean_dec_ref(v___x_889_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v_a_892_; uint8_t v___x_893_; 
v_a_892_ = lean_ctor_get(v___x_891_, 0);
lean_inc(v_a_892_);
lean_dec_ref_known(v___x_891_, 1);
v___x_893_ = lean_string_validate_utf8(v_a_892_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; lean_object* v___x_895_; 
lean_dec(v_a_892_);
v___x_894_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9);
v___x_895_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_894_);
v___y_855_ = v_a_878_;
v_received_856_ = v___x_895_;
goto v___jp_854_;
}
else
{
lean_object* v___x_896_; 
v___x_896_ = lean_string_from_utf8_unchecked(v_a_892_);
v___y_855_ = v_a_878_;
v_received_856_ = v___x_896_;
goto v___jp_854_;
}
}
else
{
lean_object* v___x_897_; 
lean_dec_ref_known(v___x_891_, 1);
v___x_897_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__10));
v___y_855_ = v_a_878_;
v_received_856_ = v___x_897_;
goto v___jp_854_;
}
}
}
}
}
else
{
v___y_875_ = v_a_878_;
goto v___jp_874_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___boxed(lean_object* v_context_924_, lean_object* v_d_925_, lean_object* v_a_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_924_, v_d_925_);
lean_dec_ref(v_context_924_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(lean_object* v_context_928_, lean_object* v_x_929_){
_start:
{
lean_object* v_val_932_; 
if (lean_obj_tag(v_x_929_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_942_; 
v_a_934_ = lean_ctor_get(v_x_929_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v_x_929_);
if (v_isSharedCheck_942_ == 0)
{
v___x_936_ = v_x_929_;
v_isShared_937_ = v_isSharedCheck_942_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v_x_929_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_942_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_941_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
lean_object* v___x_940_; 
v___x_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
return v___x_940_;
}
}
}
else
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_956_; 
v_a_943_ = lean_ctor_get(v_x_929_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v_x_929_);
if (v_isSharedCheck_956_ == 0)
{
v___x_945_ = v_x_929_;
v_isShared_946_ = v_isSharedCheck_956_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v_x_929_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_956_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; 
v___x_947_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_928_, v_a_943_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_950_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_947_, 1);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v_a_948_);
v___x_950_ = v___x_945_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_948_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
v_val_932_ = v___x_950_;
goto v___jp_931_;
}
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; 
v_a_952_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_952_);
lean_dec_ref_known(v___x_947_, 1);
if (v_isShared_946_ == 0)
{
lean_ctor_set_tag(v___x_945_, 0);
lean_ctor_set(v___x_945_, 0, v_a_952_);
v___x_954_ = v___x_945_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_952_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
v_val_932_ = v___x_954_;
goto v___jp_931_;
}
}
}
}
v___jp_931_:
{
lean_object* v___x_933_; 
v___x_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_933_, 0, v_val_932_);
return v___x_933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed(lean_object* v_context_957_, lean_object* v_x_958_, lean_object* v___y_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(v_context_957_, v_x_958_);
lean_dec_ref(v_context_957_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(lean_object* v___f_961_, lean_object* v_x_962_){
_start:
{
if (lean_obj_tag(v_x_962_) == 0)
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_972_; 
lean_dec_ref(v___f_961_);
v_a_964_ = lean_ctor_get(v_x_962_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v_x_962_);
if (v_isSharedCheck_972_ == 0)
{
v___x_966_ = v_x_962_;
v_isShared_967_ = v_isSharedCheck_972_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v_x_962_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_972_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_969_; 
if (v_isShared_967_ == 0)
{
v___x_969_ = v___x_966_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_964_);
v___x_969_ = v_reuseFailAlloc_971_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
lean_object* v___x_970_; 
v___x_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_970_, 0, v___x_969_);
return v___x_970_;
}
}
}
else
{
lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_984_; 
v_isSharedCheck_984_ = !lean_is_exclusive(v_x_962_);
if (v_isSharedCheck_984_ == 0)
{
lean_object* v_unused_985_; 
v_unused_985_ = lean_ctor_get(v_x_962_, 0);
lean_dec(v_unused_985_);
v___x_974_ = v_x_962_;
v_isShared_975_ = v_isSharedCheck_984_;
goto v_resetjp_973_;
}
else
{
lean_dec(v_x_962_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_984_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_976_; uint8_t v___x_977_; lean_object* v___x_978_; lean_object* v___x_980_; 
v___x_976_ = lean_unsigned_to_nat(0u);
v___x_977_ = 0;
v___x_978_ = lean_io_promise_new();
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 0, v___x_978_);
v___x_980_ = v___x_974_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_978_);
v___x_980_ = v_reuseFailAlloc_983_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
v___x_982_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_976_, v___x_977_, v___x_981_, v___f_961_);
return v___x_982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed(lean_object* v___f_986_, lean_object* v_x_987_, lean_object* v___y_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(v___f_986_, v_x_987_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(lean_object* v_context_990_, uint32_t v_op_991_, uint64_t v_flags_992_, lean_object* v_payload_993_, lean_object* v_failurePrefix_994_){
_start:
{
lean_object* v___f_996_; lean_object* v___f_997_; lean_object* v___f_998_; lean_object* v___f_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___f_1002_; lean_object* v___f_1003_; lean_object* v___x_1004_; uint8_t v___x_1005_; lean_object* v_val_1007_; lean_object* v___x_1010_; 
v___f_996_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_996_, 0, v_context_990_);
v___f_997_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_997_, 0, v___f_996_);
v___f_998_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_998_, 0, v___f_997_);
lean_inc_ref(v_failurePrefix_994_);
v___f_999_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_999_, 0, v_failurePrefix_994_);
v___x_1000_ = lean_box_uint32(v_op_991_);
v___x_1001_ = lean_box_uint64(v_flags_992_);
lean_inc_ref(v___f_998_);
v___f_1002_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1002_, 0, v_failurePrefix_994_);
lean_closure_set(v___f_1002_, 1, v___x_1000_);
lean_closure_set(v___f_1002_, 2, v___x_1001_);
lean_closure_set(v___f_1002_, 3, v_payload_993_);
lean_closure_set(v___f_1002_, 4, v___f_999_);
lean_closure_set(v___f_1002_, 5, v___f_998_);
lean_closure_set(v___f_1002_, 6, v___f_998_);
v___f_1003_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1003_, 0, v___f_1002_);
v___x_1004_ = lean_unsigned_to_nat(0u);
v___x_1005_ = 0;
v___x_1010_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v___x_1010_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_1010_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
lean_ctor_set_tag(v___x_1013_, 1);
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
v_val_1007_ = v___x_1016_;
goto v___jp_1006_;
}
}
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
v_a_1019_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___x_1010_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1010_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
lean_ctor_set_tag(v___x_1021_, 0);
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
v_val_1007_ = v___x_1024_;
goto v___jp_1006_;
}
}
}
v___jp_1006_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1008_, 0, v_val_1007_);
v___x_1009_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1004_, v___x_1005_, v___x_1008_, v___f_1003_);
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___boxed(lean_object* v_context_1027_, lean_object* v_op_1028_, lean_object* v_flags_1029_, lean_object* v_payload_1030_, lean_object* v_failurePrefix_1031_, lean_object* v_a_1032_){
_start:
{
uint32_t v_op_boxed_1033_; uint64_t v_flags_boxed_1034_; lean_object* v_res_1035_; 
v_op_boxed_1033_ = lean_unbox_uint32(v_op_1028_);
lean_dec(v_op_1028_);
v_flags_boxed_1034_ = lean_unbox_uint64(v_flags_1029_);
lean_dec_ref(v_flags_1029_);
v_res_1035_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v_context_1027_, v_op_boxed_1033_, v_flags_boxed_1034_, v_payload_1030_, v_failurePrefix_1031_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(lean_object* v_b_1036_, lean_object* v_args_1037_){
_start:
{
uint8_t v_construct_1039_; lean_object* v___x_1040_; uint32_t v___x_1041_; uint64_t v___x_1042_; uint64_t v___y_1044_; 
v_construct_1039_ = lean_ctor_get_uint8(v_b_1036_, sizeof(void*)*4);
v___x_1040_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1036_);
v___x_1041_ = 214;
v___x_1042_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_construct_1039_ == 0)
{
uint64_t v___x_1052_; 
v___x_1052_ = 0ULL;
v___y_1044_ = v___x_1052_;
goto v___jp_1043_;
}
else
{
uint64_t v___x_1053_; 
v___x_1053_ = 4ULL;
v___y_1044_ = v___x_1053_;
goto v___jp_1043_;
}
v___jp_1043_:
{
uint64_t v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1045_ = lean_uint64_lor(v___x_1042_, v___y_1044_);
v___x_1046_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1036_, v_args_1037_);
v___x_1047_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0));
v___x_1048_ = lean_string_append(v___x_1047_, v___x_1040_);
v___x_1049_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2));
v___x_1050_ = lean_string_append(v___x_1048_, v___x_1049_);
v___x_1051_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v___x_1040_, v___x_1041_, v___x_1045_, v___x_1046_, v___x_1050_);
return v___x_1051_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1___boxed(lean_object* v_b_1054_, lean_object* v_args_1055_, lean_object* v_a_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v_b_1054_, v_args_1055_);
lean_dec_ref(v_b_1054_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(lean_object* v_x_1058_){
_start:
{
if (lean_obj_tag(v_x_1058_) == 0)
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_box(0);
return v___x_1059_;
}
else
{
lean_object* v_val_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v_val_1060_ = lean_ctor_get(v_x_1058_, 0);
v___x_1061_ = ((lean_object*)(l_Lasm_JS_Node_instToJSOnceOptions___lam__0___closed__0));
v___x_1062_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_1060_);
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1061_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = lean_unsigned_to_nat(1u);
v___x_1065_ = lean_mk_empty_array_with_capacity(v___x_1064_);
v___x_1066_ = lean_array_push(v___x_1065_, v___x_1063_);
v___x_1067_ = l_Lasm_JS_Web_Support_fields(v___x_1066_);
lean_dec_ref(v___x_1066_);
return v___x_1067_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0___boxed(lean_object* v_x_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_x_1068_);
lean_dec(v_x_1068_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once(lean_object* v_emitter_1078_, lean_object* v_name_1079_, lean_object* v_options_1080_){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___y_1087_; 
v___x_1082_ = lean_unsigned_to_nat(3u);
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Node_events_once___closed__2));
v___x_1084_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1085_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1085_, 0, v_emitter_1078_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
if (lean_obj_tag(v_name_1079_) == 0)
{
lean_object* v_value_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
v_value_1095_ = lean_ctor_get(v_name_1079_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v_name_1079_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v_name_1079_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_value_1095_);
lean_dec(v_name_1079_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set_tag(v___x_1097_, 4);
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_value_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
v___y_1087_ = v___x_1100_;
goto v___jp_1086_;
}
}
}
else
{
lean_object* v_value_1103_; lean_object* v___x_1104_; 
v_value_1103_ = lean_ctor_get(v_name_1079_, 0);
lean_inc(v_value_1103_);
lean_dec_ref_known(v_name_1079_, 1);
v___x_1104_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1104_, 0, v_value_1103_);
lean_ctor_set(v___x_1104_, 1, v___x_1084_);
v___y_1087_ = v___x_1104_;
goto v___jp_1086_;
}
v___jp_1086_:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1088_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_options_1080_);
v___x_1089_ = lean_mk_empty_array_with_capacity(v___x_1082_);
v___x_1090_ = lean_array_push(v___x_1089_, v___x_1085_);
v___x_1091_ = lean_array_push(v___x_1090_, v___y_1087_);
v___x_1092_ = lean_array_push(v___x_1091_, v___x_1088_);
v___x_1093_ = l_Lasm_JS_Web_Support_args(v___x_1092_);
v___x_1094_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v___x_1083_, v___x_1093_);
return v___x_1094_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once___boxed(lean_object* v_emitter_1105_, lean_object* v_name_1106_, lean_object* v_options_1107_, lean_object* v_a_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l_Lasm_JS_Node_events_once(v_emitter_1105_, v_name_1106_, v_options_1107_);
lean_dec(v_options_1107_);
return v_res_1109_;
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
