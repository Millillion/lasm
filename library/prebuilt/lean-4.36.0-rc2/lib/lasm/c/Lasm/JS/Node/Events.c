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
lean_object* lean_obj_tag_nat(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx___impl(lean_object* v_x_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lean_obj_tag_nat(v_x_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx___impl___boxed(lean_object* v_x_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx___impl(v_x_24_);
lean_dec_ref(v_x_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(lean_object* v_t_26_, lean_object* v_k_27_){
_start:
{
if (lean_obj_tag(v_t_26_) == 0)
{
lean_object* v_value_28_; lean_object* v___x_29_; 
v_value_28_ = lean_ctor_get(v_t_26_, 0);
lean_inc_ref(v_value_28_);
lean_dec_ref_known(v_t_26_, 1);
v___x_29_ = lean_apply_1(v_k_27_, v_value_28_);
return v___x_29_;
}
else
{
lean_object* v_value_30_; lean_object* v___x_31_; 
v_value_30_ = lean_ctor_get(v_t_26_, 0);
lean_inc(v_value_30_);
lean_dec_ref_known(v_t_26_, 1);
v___x_31_ = lean_apply_1(v_k_27_, v_value_30_);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(lean_object* v_motive_32_, lean_object* v_ctorIdx_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_k_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_34_, v_k_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___boxed(lean_object* v_motive_38_, lean_object* v_ctorIdx_39_, lean_object* v_t_40_, lean_object* v_h_41_, lean_object* v_k_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(v_motive_38_, v_ctorIdx_39_, v_t_40_, v_h_41_, v_k_42_);
lean_dec(v_ctorIdx_39_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim___redArg(lean_object* v_t_44_, lean_object* v_domString_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_44_, v_domString_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim(lean_object* v_motive_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_domString_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_48_, v_domString_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim___redArg(lean_object* v_t_52_, lean_object* v_symbol_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_52_, v_symbol_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_symbol_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_56_, v_symbol_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSymbol___lam__0(lean_object* v_x_60_){
_start:
{
if (lean_obj_tag(v_x_60_) == 0)
{
lean_object* v_value_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_68_; 
v_value_61_ = lean_ctor_get(v_x_60_, 0);
v_isSharedCheck_68_ = !lean_is_exclusive(v_x_60_);
if (v_isSharedCheck_68_ == 0)
{
v___x_63_ = v_x_60_;
v_isShared_64_ = v_isSharedCheck_68_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_value_61_);
lean_dec(v_x_60_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_68_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v___x_66_; 
if (v_isShared_64_ == 0)
{
lean_ctor_set_tag(v___x_63_, 4);
v___x_66_ = v___x_63_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v_value_61_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
return v___x_66_;
}
}
}
else
{
lean_object* v_value_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v_value_69_ = lean_ctor_get(v_x_60_, 0);
lean_inc(v_value_69_);
lean_dec_ref_known(v_x_60_, 1);
v___x_70_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_71_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_71_, 0, v_value_69_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___lam__0(lean_object* v_value_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v_value_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSOnceOptions___lam__0(lean_object* v___f_79_, lean_object* v_d_80_){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_81_ = ((lean_object*)(l_Lasm_JS_Node_instToJSOnceOptions___lam__0___closed__0));
v___x_82_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_79_, v_d_80_);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_81_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = lean_unsigned_to_nat(1u);
v___x_85_ = lean_mk_empty_array_with_capacity(v___x_84_);
v___x_86_ = lean_array_push(v___x_85_, v___x_83_);
v___x_87_ = l_Lasm_JS_Web_Support_fields(v___x_86_);
lean_dec_ref(v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t v_sz_92_, size_t v_i_93_, lean_object* v_bs_94_){
_start:
{
uint8_t v___x_95_; 
v___x_95_ = lean_usize_dec_lt(v_i_93_, v_sz_92_);
if (v___x_95_ == 0)
{
return v_bs_94_;
}
else
{
lean_object* v_v_96_; lean_object* v___x_97_; lean_object* v_bs_x27_98_; size_t v___x_99_; size_t v___x_100_; lean_object* v___x_101_; 
v_v_96_ = lean_array_uget(v_bs_94_, v_i_93_);
v___x_97_ = lean_unsigned_to_nat(0u);
v_bs_x27_98_ = lean_array_uset(v_bs_94_, v_i_93_, v___x_97_);
v___x_99_ = ((size_t)1ULL);
v___x_100_ = lean_usize_add(v_i_93_, v___x_99_);
v___x_101_ = lean_array_uset(v_bs_x27_98_, v_i_93_, v_v_96_);
v_i_93_ = v___x_100_;
v_bs_94_ = v___x_101_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0___boxed(lean_object* v_sz_103_, lean_object* v_i_104_, lean_object* v_bs_105_){
_start:
{
size_t v_sz_boxed_106_; size_t v_i_boxed_107_; lean_object* v_res_108_; 
v_sz_boxed_106_ = lean_unbox_usize(v_sz_103_);
lean_dec(v_sz_103_);
v_i_boxed_107_ = lean_unbox_usize(v_i_104_);
lean_dec(v_i_104_);
v_res_108_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_boxed_106_, v_i_boxed_107_, v_bs_105_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit(lean_object* v_self_110_, lean_object* v_eventName_111_, lean_object* v_args_112_){
_start:
{
lean_object* v___x_114_; lean_object* v___y_116_; 
v___x_114_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_emit___closed__0));
if (lean_obj_tag(v_eventName_111_) == 0)
{
lean_object* v_value_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_132_; 
v_value_125_ = lean_ctor_get(v_eventName_111_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v_eventName_111_);
if (v_isSharedCheck_132_ == 0)
{
v___x_127_ = v_eventName_111_;
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_value_125_);
lean_dec(v_eventName_111_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set_tag(v___x_127_, 4);
v___x_130_ = v___x_127_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_value_125_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
v___y_116_ = v___x_130_;
goto v___jp_115_;
}
}
}
else
{
lean_object* v_value_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v_value_133_ = lean_ctor_get(v_eventName_111_, 0);
lean_inc(v_value_133_);
lean_dec_ref_known(v_eventName_111_, 1);
v___x_134_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_135_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_135_, 0, v_value_133_);
lean_ctor_set(v___x_135_, 1, v___x_134_);
v___y_116_ = v___x_135_;
goto v___jp_115_;
}
v___jp_115_:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; size_t v_sz_120_; size_t v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_117_ = lean_unsigned_to_nat(1u);
v___x_118_ = lean_mk_empty_array_with_capacity(v___x_117_);
v___x_119_ = lean_array_push(v___x_118_, v___y_116_);
v_sz_120_ = lean_array_size(v_args_112_);
v___x_121_ = ((size_t)0ULL);
v___x_122_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_120_, v___x_121_, v_args_112_);
v___x_123_ = l_Lasm_JS_Web_Support_argsWith(v___x_119_, v___x_122_);
lean_dec_ref(v___x_122_);
v___x_124_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_110_, v___x_114_, v___x_123_);
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit___boxed(lean_object* v_self_136_, lean_object* v_eventName_137_, lean_object* v_args_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lasm_JS_Node_EventEmitter_emit(v_self_136_, v_eventName_137_, v_args_138_);
return v_res_140_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_141_; uint64_t v___x_142_; 
v___x_141_ = 0;
v___x_142_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(uint8_t v_await_143_, uint64_t v_extra_144_){
_start:
{
uint64_t v___x_145_; uint64_t v___y_147_; 
v___x_145_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_await_143_ == 0)
{
uint64_t v___x_150_; 
v___x_150_ = 0ULL;
v___y_147_ = v___x_150_;
goto v___jp_146_;
}
else
{
uint64_t v___x_151_; 
v___x_151_ = 2ULL;
v___y_147_ = v___x_151_;
goto v___jp_146_;
}
v___jp_146_:
{
uint64_t v___x_148_; uint64_t v___x_149_; 
v___x_148_ = lean_uint64_lor(v___x_145_, v___y_147_);
v___x_149_ = lean_uint64_lor(v___x_148_, v_extra_144_);
return v___x_149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___boxed(lean_object* v_await_152_, lean_object* v_extra_153_){
_start:
{
uint8_t v_await_boxed_154_; uint64_t v_extra_boxed_155_; uint64_t v_res_156_; lean_object* v_r_157_; 
v_await_boxed_154_ = lean_unbox(v_await_152_);
v_extra_boxed_155_ = lean_unbox_uint64(v_extra_153_);
lean_dec_ref(v_extra_153_);
v_res_156_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(v_await_boxed_154_, v_extra_boxed_155_);
v_r_157_ = lean_box_uint64(v_res_156_);
return v_r_157_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0(void){
_start:
{
uint64_t v___x_158_; uint8_t v___x_159_; uint64_t v___x_160_; 
v___x_158_ = 8ULL;
v___x_159_ = 0;
v___x_160_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(v___x_159_, v___x_158_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(lean_object* v_o_161_, lean_object* v_name_162_, lean_object* v_args_163_){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; uint64_t v___x_168_; lean_object* v___x_169_; 
v___x_165_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_166_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_166_, 0, v_o_161_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_167_, 0, v_name_162_);
v___x_168_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0);
v___x_169_ = l_Lasm_JS_Value_invokeRaw(v___x_166_, v___x_167_, v_args_163_, v___x_168_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v_a_170_; lean_object* v___x_171_; 
v_a_170_ = lean_ctor_get(v___x_169_, 0);
lean_inc(v_a_170_);
lean_dec_ref_known(v___x_169_, 1);
v___x_171_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_170_);
lean_dec(v_a_170_);
return v___x_171_;
}
else
{
lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
v_a_172_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v___x_169_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_169_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___boxed(lean_object* v_o_180_, lean_object* v_name_181_, lean_object* v_args_182_, lean_object* v_a_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(v_o_180_, v_name_181_, v_args_182_);
return v_res_184_;
}
}
static lean_object* _init_l_Lasm_JS_Node_EventEmitter_eventNames___closed__2(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_eventNames___closed__1));
v___x_189_ = l_Lasm_JS_Web_Support_args(v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames(lean_object* v_self_190_){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_eventNames___closed__0));
v___x_193_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_eventNames___closed__2, &l_Lasm_JS_Node_EventEmitter_eventNames___closed__2_once, _init_l_Lasm_JS_Node_EventEmitter_eventNames___closed__2);
v___x_194_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(v_self_190_, v___x_192_, v___x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames___boxed(lean_object* v_self_195_, lean_object* v_a_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lasm_JS_Node_EventEmitter_eventNames(v_self_195_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(lean_object* v_x_198_){
_start:
{
if (lean_obj_tag(v_x_198_) == 0)
{
lean_object* v___x_199_; 
v___x_199_ = lean_box(0);
return v___x_199_;
}
else
{
lean_object* v_val_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_val_200_ = lean_ctor_get(v_x_198_, 0);
v___x_201_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
lean_inc(v_val_200_);
v___x_202_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_202_, 0, v_val_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0___boxed(lean_object* v_x_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(v_x_203_);
lean_dec(v_x_203_);
return v_res_204_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_214_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__8));
v___x_215_ = lean_unsigned_to_nat(46u);
v___x_216_ = lean_unsigned_to_nat(193u);
v___x_217_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__7));
v___x_218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__6));
v___x_219_ = l_mkPanicMessageWithDecl(v___x_218_, v___x_217_, v___x_216_, v___x_215_, v___x_214_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(lean_object* v_context_222_, lean_object* v_d_223_){
_start:
{
lean_object* v___y_226_; lean_object* v___y_227_; lean_object* v___y_232_; lean_object* v_received_233_; lean_object* v___y_252_; lean_object* v_a_255_; 
switch(lean_obj_tag(v_d_223_))
{
case 3:
{
double v_n_279_; lean_object* v___x_280_; 
v_n_279_ = lean_ctor_get_float(v_d_223_, 0);
v___x_280_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_279_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v___x_281_; 
v___x_281_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__11));
v_a_255_ = v___x_281_;
goto v___jp_254_;
}
else
{
lean_object* v_val_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
lean_dec_ref_known(v_d_223_, 0);
v_val_282_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_280_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_val_282_);
lean_dec(v___x_280_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
lean_ctor_set_tag(v___x_284_, 0);
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_val_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
case 5:
{
lean_object* v_i_290_; lean_object* v___x_291_; 
v_i_290_ = lean_ctor_get(v_d_223_, 0);
lean_inc(v_i_290_);
lean_dec_ref_known(v_d_223_, 1);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v_i_290_);
return v___x_291_;
}
default: 
{
lean_object* v___x_292_; 
v___x_292_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v_a_255_ = v___x_292_;
goto v___jp_254_;
}
}
v___jp_225_:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = lean_string_append(v___y_226_, v___y_227_);
lean_dec_ref(v___y_227_);
v___x_229_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
v___x_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
return v___x_230_;
}
v___jp_231_:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_234_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0));
v___x_235_ = lean_string_append(v___x_234_, v_context_222_);
v___x_236_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1));
v___x_237_ = lean_string_append(v___x_235_, v___x_236_);
v___x_238_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2));
v___x_239_ = lean_string_append(v___x_237_, v___x_238_);
v___x_240_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3));
v___x_241_ = lean_string_append(v___x_239_, v___x_240_);
v___x_242_ = lean_string_append(v___x_241_, v_received_233_);
lean_dec_ref(v_received_233_);
v___x_243_ = lean_string_utf8_byte_size(v___y_232_);
v___x_244_ = lean_unsigned_to_nat(0u);
v___x_245_ = lean_nat_dec_eq(v___x_243_, v___x_244_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_246_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__4));
v___x_247_ = lean_string_append(v___x_246_, v___y_232_);
v___x_248_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__5));
v___x_249_ = lean_string_append(v___x_247_, v___x_248_);
v___y_226_ = v___x_242_;
v___y_227_ = v___x_249_;
goto v___jp_225_;
}
else
{
lean_object* v___x_250_; 
v___x_250_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___y_226_ = v___x_242_;
v___y_227_ = v___x_250_;
goto v___jp_225_;
}
}
v___jp_251_:
{
lean_object* v___x_253_; 
v___x_253_ = l_Lasm_JS_Data_describe(v_d_223_);
v___y_232_ = v___y_252_;
v_received_233_ = v___x_253_;
goto v___jp_231_;
}
v___jp_254_:
{
if (lean_obj_tag(v_d_223_) == 9)
{
lean_object* v_value_256_; lean_object* v_description_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v_value_256_ = lean_ctor_get(v_d_223_, 0);
v_description_257_ = lean_ctor_get(v_d_223_, 1);
v___x_258_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_259_ = lean_string_dec_eq(v_description_257_, v___x_258_);
if (v___x_259_ == 0)
{
v___y_252_ = v_a_255_;
goto v___jp_251_;
}
else
{
lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_276_; 
lean_inc(v_value_256_);
v_isSharedCheck_276_ = !lean_is_exclusive(v_d_223_);
if (v_isSharedCheck_276_ == 0)
{
lean_object* v_unused_277_; lean_object* v_unused_278_; 
v_unused_277_ = lean_ctor_get(v_d_223_, 1);
lean_dec(v_unused_277_);
v_unused_278_ = lean_ctor_get(v_d_223_, 0);
lean_dec(v_unused_278_);
v___x_261_ = v_d_223_;
v_isShared_262_ = v_isSharedCheck_276_;
goto v_resetjp_260_;
}
else
{
lean_dec(v_d_223_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_276_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
uint32_t v___x_263_; uint64_t v___x_264_; lean_object* v___x_266_; 
v___x_263_ = 206;
v___x_264_ = 0ULL;
lean_inc(v_value_256_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 1, v___x_258_);
v___x_266_ = v___x_261_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_value_256_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v___x_258_);
v___x_266_ = v_reuseFailAlloc_275_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
uint32_t v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lasm_js_value_handle(v_value_256_);
lean_dec(v_value_256_);
v___x_268_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_263_, v___x_264_, v___x_266_, v___x_267_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; uint8_t v___x_270_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_a_269_);
lean_dec_ref_known(v___x_268_, 1);
v___x_270_ = lean_string_validate_utf8(v_a_269_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; lean_object* v___x_272_; 
lean_dec(v_a_269_);
v___x_271_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9);
v___x_272_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_271_);
v___y_232_ = v_a_255_;
v_received_233_ = v___x_272_;
goto v___jp_231_;
}
else
{
lean_object* v___x_273_; 
v___x_273_ = lean_string_from_utf8_unchecked(v_a_269_);
v___y_232_ = v_a_255_;
v_received_233_ = v___x_273_;
goto v___jp_231_;
}
}
else
{
lean_object* v___x_274_; 
lean_dec_ref_known(v___x_268_, 1);
v___x_274_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__10));
v___y_232_ = v_a_255_;
v_received_233_ = v___x_274_;
goto v___jp_231_;
}
}
}
}
}
else
{
v___y_252_ = v_a_255_;
goto v___jp_251_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___boxed(lean_object* v_context_293_, lean_object* v_d_294_, lean_object* v_a_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(v_context_293_, v_d_294_);
lean_dec_ref(v_context_293_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(lean_object* v_context_297_, lean_object* v_bytes_298_){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_298_);
if (lean_obj_tag(v___x_300_) == 0)
{
lean_object* v_a_301_; lean_object* v___x_302_; 
v_a_301_ = lean_ctor_get(v___x_300_, 0);
lean_inc(v_a_301_);
lean_dec_ref_known(v___x_300_, 1);
v___x_302_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(v_context_297_, v_a_301_);
return v___x_302_;
}
else
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
v_a_303_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_310_ == 0)
{
v___x_305_ = v___x_300_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_300_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2___boxed(lean_object* v_context_311_, lean_object* v_bytes_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(v_context_311_, v_bytes_312_);
lean_dec_ref(v_bytes_312_);
lean_dec_ref(v_context_311_);
return v_res_314_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(uint8_t v_await_315_, uint64_t v_extra_316_){
_start:
{
uint64_t v___x_317_; uint64_t v___y_319_; 
v___x_317_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_await_315_ == 0)
{
uint64_t v___x_322_; 
v___x_322_ = 0ULL;
v___y_319_ = v___x_322_;
goto v___jp_318_;
}
else
{
uint64_t v___x_323_; 
v___x_323_ = 2ULL;
v___y_319_ = v___x_323_;
goto v___jp_318_;
}
v___jp_318_:
{
uint64_t v___x_320_; uint64_t v___x_321_; 
v___x_320_ = lean_uint64_lor(v___x_317_, v___y_319_);
v___x_321_ = lean_uint64_lor(v___x_320_, v_extra_316_);
return v___x_321_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1___boxed(lean_object* v_await_324_, lean_object* v_extra_325_){
_start:
{
uint8_t v_await_boxed_326_; uint64_t v_extra_boxed_327_; uint64_t v_res_328_; lean_object* v_r_329_; 
v_await_boxed_326_ = lean_unbox(v_await_324_);
v_extra_boxed_327_ = lean_unbox_uint64(v_extra_325_);
lean_dec_ref(v_extra_325_);
v_res_328_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(v_await_boxed_326_, v_extra_boxed_327_);
v_r_329_ = lean_box_uint64(v_res_328_);
return v_r_329_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0(void){
_start:
{
uint64_t v___x_330_; uint8_t v___x_331_; uint64_t v___x_332_; 
v___x_330_ = 8ULL;
v___x_331_ = 0;
v___x_332_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(v___x_331_, v___x_330_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(lean_object* v_o_334_, lean_object* v_name_335_, lean_object* v_args_336_){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint64_t v___x_341_; lean_object* v___x_342_; 
v___x_338_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_339_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_339_, 0, v_o_334_);
lean_ctor_set(v___x_339_, 1, v___x_338_);
lean_inc_ref(v_name_335_);
v___x_340_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_340_, 0, v_name_335_);
v___x_341_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0);
v___x_342_ = l_Lasm_JS_Value_invokeRaw(v___x_339_, v___x_340_, v_args_336_, v___x_341_);
if (lean_obj_tag(v___x_342_) == 0)
{
lean_object* v_a_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_a_343_ = lean_ctor_get(v___x_342_, 0);
lean_inc(v_a_343_);
lean_dec_ref_known(v___x_342_, 1);
v___x_344_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__1));
v___x_345_ = lean_string_append(v___x_344_, v_name_335_);
lean_dec_ref(v_name_335_);
v___x_346_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(v___x_345_, v_a_343_);
lean_dec(v_a_343_);
lean_dec_ref(v___x_345_);
return v___x_346_;
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
lean_dec_ref(v_name_335_);
v_a_347_ = lean_ctor_get(v___x_342_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_342_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_342_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_342_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_347_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___boxed(lean_object* v_o_355_, lean_object* v_name_356_, lean_object* v_args_357_, lean_object* v_a_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(v_o_355_, v_name_356_, v_args_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount(lean_object* v_self_361_, lean_object* v_eventName_362_, lean_object* v_listener_363_){
_start:
{
lean_object* v___x_365_; lean_object* v___y_367_; 
v___x_365_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_listenerCount___closed__0));
if (lean_obj_tag(v_eventName_362_) == 0)
{
lean_object* v_value_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
v_value_375_ = lean_ctor_get(v_eventName_362_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v_eventName_362_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v_eventName_362_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_value_375_);
lean_dec(v_eventName_362_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
lean_ctor_set_tag(v___x_377_, 4);
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_value_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
v___y_367_ = v___x_380_;
goto v___jp_366_;
}
}
}
else
{
lean_object* v_value_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v_value_383_ = lean_ctor_get(v_eventName_362_, 0);
lean_inc(v_value_383_);
lean_dec_ref_known(v_eventName_362_, 1);
v___x_384_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_385_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_385_, 0, v_value_383_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
v___y_367_ = v___x_385_;
goto v___jp_366_;
}
v___jp_366_:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_368_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(v_listener_363_);
v___x_369_ = lean_unsigned_to_nat(2u);
v___x_370_ = lean_mk_empty_array_with_capacity(v___x_369_);
v___x_371_ = lean_array_push(v___x_370_, v___y_367_);
v___x_372_ = lean_array_push(v___x_371_, v___x_368_);
v___x_373_ = l_Lasm_JS_Web_Support_args(v___x_372_);
v___x_374_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(v_self_361_, v___x_365_, v___x_373_);
return v___x_374_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount___boxed(lean_object* v_self_386_, lean_object* v_eventName_387_, lean_object* v_listener_388_, lean_object* v_a_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lasm_JS_Node_EventEmitter_listenerCount(v_self_386_, v_eventName_387_, v_listener_388_);
lean_dec(v_listener_388_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off(lean_object* v_self_392_, lean_object* v_eventName_393_, lean_object* v_listener_394_){
_start:
{
lean_object* v___x_396_; lean_object* v___y_398_; 
v___x_396_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_off___closed__0));
if (lean_obj_tag(v_eventName_393_) == 0)
{
lean_object* v_value_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_430_; 
v_value_423_ = lean_ctor_get(v_eventName_393_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v_eventName_393_);
if (v_isSharedCheck_430_ == 0)
{
v___x_425_ = v_eventName_393_;
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_value_423_);
lean_dec(v_eventName_393_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
lean_ctor_set_tag(v___x_425_, 4);
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_value_423_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
v___y_398_ = v___x_428_;
goto v___jp_397_;
}
}
}
else
{
lean_object* v_value_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v_value_431_ = lean_ctor_get(v_eventName_393_, 0);
lean_inc(v_value_431_);
lean_dec_ref_known(v_eventName_393_, 1);
v___x_432_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_433_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_433_, 0, v_value_431_);
lean_ctor_set(v___x_433_, 1, v___x_432_);
v___y_398_ = v___x_433_;
goto v___jp_397_;
}
v___jp_397_:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_399_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_400_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_400_, 0, v_listener_394_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = lean_unsigned_to_nat(2u);
v___x_402_ = lean_mk_empty_array_with_capacity(v___x_401_);
v___x_403_ = lean_array_push(v___x_402_, v___y_398_);
v___x_404_ = lean_array_push(v___x_403_, v___x_400_);
v___x_405_ = l_Lasm_JS_Web_Support_args(v___x_404_);
v___x_406_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_392_, v___x_396_, v___x_405_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_406_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_406_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
else
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
v_a_415_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_406_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_406_);
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
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off___boxed(lean_object* v_self_434_, lean_object* v_eventName_435_, lean_object* v_listener_436_, lean_object* v_a_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lasm_JS_Node_EventEmitter_off(v_self_434_, v_eventName_435_, v_listener_436_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on(lean_object* v_self_440_, lean_object* v_eventName_441_, lean_object* v_listener_442_){
_start:
{
lean_object* v___x_444_; lean_object* v___y_446_; 
v___x_444_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_on___closed__0));
if (lean_obj_tag(v_eventName_441_) == 0)
{
lean_object* v_value_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
v_value_471_ = lean_ctor_get(v_eventName_441_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v_eventName_441_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v_eventName_441_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_value_471_);
lean_dec(v_eventName_441_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
lean_ctor_set_tag(v___x_473_, 4);
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_value_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
v___y_446_ = v___x_476_;
goto v___jp_445_;
}
}
}
else
{
lean_object* v_value_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v_value_479_ = lean_ctor_get(v_eventName_441_, 0);
lean_inc(v_value_479_);
lean_dec_ref_known(v_eventName_441_, 1);
v___x_480_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_481_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_481_, 0, v_value_479_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___y_446_ = v___x_481_;
goto v___jp_445_;
}
v___jp_445_:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_447_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_448_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_448_, 0, v_listener_442_);
lean_ctor_set(v___x_448_, 1, v___x_447_);
v___x_449_ = lean_unsigned_to_nat(2u);
v___x_450_ = lean_mk_empty_array_with_capacity(v___x_449_);
v___x_451_ = lean_array_push(v___x_450_, v___y_446_);
v___x_452_ = lean_array_push(v___x_451_, v___x_448_);
v___x_453_ = l_Lasm_JS_Web_Support_args(v___x_452_);
v___x_454_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_440_, v___x_444_, v___x_453_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_462_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_462_ == 0)
{
v___x_457_ = v___x_454_;
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_454_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
if (v_isShared_458_ == 0)
{
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_a_455_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
else
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
v_a_463_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v___x_454_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_454_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on___boxed(lean_object* v_self_482_, lean_object* v_eventName_483_, lean_object* v_listener_484_, lean_object* v_a_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lasm_JS_Node_EventEmitter_on(v_self_482_, v_eventName_483_, v_listener_484_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once(lean_object* v_self_488_, lean_object* v_eventName_489_, lean_object* v_listener_490_){
_start:
{
lean_object* v___x_492_; lean_object* v___y_494_; 
v___x_492_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_once___closed__0));
if (lean_obj_tag(v_eventName_489_) == 0)
{
lean_object* v_value_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
v_value_519_ = lean_ctor_get(v_eventName_489_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v_eventName_489_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v_eventName_489_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_value_519_);
lean_dec(v_eventName_489_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set_tag(v___x_521_, 4);
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_value_519_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
v___y_494_ = v___x_524_;
goto v___jp_493_;
}
}
}
else
{
lean_object* v_value_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v_value_527_ = lean_ctor_get(v_eventName_489_, 0);
lean_inc(v_value_527_);
lean_dec_ref_known(v_eventName_489_, 1);
v___x_528_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_529_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_529_, 0, v_value_527_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
v___y_494_ = v___x_529_;
goto v___jp_493_;
}
v___jp_493_:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_495_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_496_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_496_, 0, v_listener_490_);
lean_ctor_set(v___x_496_, 1, v___x_495_);
v___x_497_ = lean_unsigned_to_nat(2u);
v___x_498_ = lean_mk_empty_array_with_capacity(v___x_497_);
v___x_499_ = lean_array_push(v___x_498_, v___y_494_);
v___x_500_ = lean_array_push(v___x_499_, v___x_496_);
v___x_501_ = l_Lasm_JS_Web_Support_args(v___x_500_);
v___x_502_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_488_, v___x_492_, v___x_501_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once___boxed(lean_object* v_self_530_, lean_object* v_eventName_531_, lean_object* v_listener_532_, lean_object* v_a_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lasm_JS_Node_EventEmitter_once(v_self_530_, v_eventName_531_, v_listener_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(lean_object* v_x_535_){
_start:
{
if (lean_obj_tag(v_x_535_) == 0)
{
lean_object* v___x_536_; 
v___x_536_ = lean_box(0);
return v___x_536_;
}
else
{
lean_object* v_val_537_; 
v_val_537_ = lean_ctor_get(v_x_535_, 0);
lean_inc(v_val_537_);
lean_dec_ref_known(v_x_535_, 1);
if (lean_obj_tag(v_val_537_) == 0)
{
lean_object* v_value_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
v_value_538_ = lean_ctor_get(v_val_537_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v_val_537_);
if (v_isSharedCheck_545_ == 0)
{
v___x_540_ = v_val_537_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_value_538_);
lean_dec(v_val_537_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set_tag(v___x_540_, 4);
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_value_538_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
else
{
lean_object* v_value_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v_value_546_ = lean_ctor_get(v_val_537_, 0);
lean_inc(v_value_546_);
lean_dec_ref_known(v_val_537_, 1);
v___x_547_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_548_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_548_, 0, v_value_546_);
lean_ctor_set(v___x_548_, 1, v___x_547_);
return v___x_548_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners(lean_object* v_self_550_, lean_object* v_eventName_551_){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_553_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_removeAllListeners___closed__0));
v___x_554_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(v_eventName_551_);
v___x_555_ = lean_unsigned_to_nat(1u);
v___x_556_ = lean_mk_empty_array_with_capacity(v___x_555_);
v___x_557_ = lean_array_push(v___x_556_, v___x_554_);
v___x_558_ = l_Lasm_JS_Web_Support_args(v___x_557_);
v___x_559_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_550_, v___x_553_, v___x_558_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_559_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_559_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
else
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
v_a_568_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_575_ == 0)
{
v___x_570_ = v___x_559_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___x_559_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_a_568_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners___boxed(lean_object* v_self_576_, lean_object* v_eventName_577_, lean_object* v_a_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lasm_JS_Node_EventEmitter_removeAllListeners(v_self_576_, v_eventName_577_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(lean_object* v___f_580_, lean_object* v_bytes_581_){
_start:
{
lean_object* v___x_583_; uint8_t v___x_584_; lean_object* v_val_586_; lean_object* v___x_589_; 
v___x_583_ = lean_unsigned_to_nat(0u);
v___x_584_ = 0;
v___x_589_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_581_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_589_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_589_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
lean_ctor_set_tag(v___x_592_, 1);
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
v_val_586_ = v___x_595_;
goto v___jp_585_;
}
}
}
else
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
v_a_598_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_589_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_589_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
lean_ctor_set_tag(v___x_600_, 0);
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_598_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
v_val_586_ = v___x_603_;
goto v___jp_585_;
}
}
}
v___jp_585_:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_587_, 0, v_val_586_);
v___x_588_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_583_, v___x_584_, v___x_587_, v___f_580_);
return v___x_588_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed(lean_object* v___f_606_, lean_object* v_bytes_607_, lean_object* v___y_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(v___f_606_, v_bytes_607_);
lean_dec_ref(v_bytes_607_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(lean_object* v___f_610_, lean_object* v_x_611_){
_start:
{
if (lean_obj_tag(v_x_611_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_621_; 
lean_dec_ref(v___f_610_);
v_a_613_ = lean_ctor_get(v_x_611_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v_x_611_);
if (v_isSharedCheck_621_ == 0)
{
v___x_615_ = v_x_611_;
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v_x_611_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_620_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_619_; 
v___x_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
return v___x_619_;
}
}
}
else
{
lean_object* v_a_622_; lean_object* v___x_623_; 
v_a_622_ = lean_ctor_get(v_x_611_, 0);
lean_inc(v_a_622_);
lean_dec_ref_known(v_x_611_, 1);
v___x_623_ = lean_apply_2(v___f_610_, v_a_622_, lean_box(0));
return v___x_623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed(lean_object* v___f_624_, lean_object* v_x_625_, lean_object* v___y_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(v___f_624_, v_x_625_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(lean_object* v_failurePrefix_628_, lean_object* v_x_629_){
_start:
{
if (lean_obj_tag(v_x_629_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_642_; 
v_a_631_ = lean_ctor_get(v_x_629_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v_x_629_);
if (v_isSharedCheck_642_ == 0)
{
v___x_633_ = v_x_629_;
v_isShared_634_ = v_isSharedCheck_642_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v_x_629_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_642_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_635_ = lean_io_error_to_string(v_a_631_);
v___x_636_ = lean_string_append(v_failurePrefix_628_, v___x_635_);
lean_dec_ref(v___x_635_);
v___x_637_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v___x_637_);
v___x_639_ = v___x_633_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_637_);
v___x_639_ = v_reuseFailAlloc_641_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
lean_object* v___x_640_; 
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
return v___x_640_;
}
}
}
else
{
lean_object* v___x_643_; 
lean_dec_ref(v_failurePrefix_628_);
v___x_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_643_, 0, v_x_629_);
return v___x_643_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed(lean_object* v_failurePrefix_644_, lean_object* v_x_645_, lean_object* v___y_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(v_failurePrefix_644_, v_x_645_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(lean_object* v_a_648_, lean_object* v_x_649_){
_start:
{
if (lean_obj_tag(v_x_649_) == 0)
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_659_; 
v_a_651_ = lean_ctor_get(v_x_649_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v_x_649_);
if (v_isSharedCheck_659_ == 0)
{
v___x_653_ = v_x_649_;
v_isShared_654_ = v_isSharedCheck_659_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v_x_649_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_659_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_651_);
v___x_656_ = v_reuseFailAlloc_658_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
lean_object* v___x_657_; 
v___x_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
return v___x_657_;
}
}
}
else
{
lean_object* v___x_660_; 
lean_dec_ref_known(v_x_649_, 1);
v___x_660_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_648_);
return v___x_660_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed(lean_object* v_a_661_, lean_object* v_x_662_, lean_object* v___y_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(v_a_661_, v_x_662_);
lean_dec(v_a_661_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(lean_object* v___x_665_, uint8_t v___x_666_, lean_object* v___f_667_, lean_object* v_a_668_, uint32_t v_op_669_, uint64_t v_flags_670_, lean_object* v_payload_671_, lean_object* v_x_672_){
_start:
{
lean_object* v_val_675_; 
if (lean_obj_tag(v_x_672_) == 0)
{
lean_object* v___x_678_; 
lean_dec_ref(v___f_667_);
lean_dec(v___x_665_);
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v_x_672_);
return v___x_678_;
}
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_693_; 
v_a_679_ = lean_ctor_get(v_x_672_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_672_);
if (v_isSharedCheck_693_ == 0)
{
v___x_681_ = v_x_672_;
v_isShared_682_ = v_isSharedCheck_693_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v_x_672_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_693_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
uint32_t v___x_683_; lean_object* v___x_684_; 
v___x_683_ = 0;
v___x_684_ = lasm_js_call_into(v_a_668_, v_op_669_, v___x_683_, v_flags_670_, v_a_679_, v_payload_671_);
lean_dec(v_a_679_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc(v_a_685_);
lean_dec_ref_known(v___x_684_, 1);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v_a_685_);
v___x_687_ = v___x_681_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_685_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
v_val_675_ = v___x_687_;
goto v___jp_674_;
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; 
v_a_689_ = lean_ctor_get(v___x_684_, 0);
lean_inc(v_a_689_);
lean_dec_ref_known(v___x_684_, 1);
if (v_isShared_682_ == 0)
{
lean_ctor_set_tag(v___x_681_, 0);
lean_ctor_set(v___x_681_, 0, v_a_689_);
v___x_691_ = v___x_681_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
v_val_675_ = v___x_691_;
goto v___jp_674_;
}
}
}
}
v___jp_674_:
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_676_, 0, v_val_675_);
v___x_677_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_665_, v___x_666_, v___x_676_, v___f_667_);
return v___x_677_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed(lean_object* v___x_694_, lean_object* v___x_695_, lean_object* v___f_696_, lean_object* v_a_697_, lean_object* v_op_698_, lean_object* v_flags_699_, lean_object* v_payload_700_, lean_object* v_x_701_, lean_object* v___y_702_){
_start:
{
uint8_t v___x_1393__boxed_703_; uint32_t v_op_boxed_704_; uint64_t v_flags_boxed_705_; lean_object* v_res_706_; 
v___x_1393__boxed_703_ = lean_unbox(v___x_695_);
v_op_boxed_704_ = lean_unbox_uint32(v_op_698_);
lean_dec(v_op_698_);
v_flags_boxed_705_ = lean_unbox_uint64(v_flags_699_);
lean_dec_ref(v_flags_699_);
v_res_706_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(v___x_694_, v___x_1393__boxed_703_, v___f_696_, v_a_697_, v_op_boxed_704_, v_flags_boxed_705_, v_payload_700_, v_x_701_);
lean_dec(v_payload_700_);
lean_dec(v_a_697_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(lean_object* v___f_707_, lean_object* v_a_708_, uint32_t v_op_709_, uint64_t v_flags_710_, lean_object* v_payload_711_, lean_object* v_x_712_){
_start:
{
if (lean_obj_tag(v_x_712_) == 0)
{
lean_object* v___x_714_; 
lean_dec_ref(v___f_707_);
v___x_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_714_, 0, v_x_712_);
return v___x_714_;
}
else
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_735_; 
v_a_715_ = lean_ctor_get(v_x_712_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v_x_712_);
if (v_isSharedCheck_735_ == 0)
{
v___x_717_ = v_x_712_;
v_isShared_718_ = v_isSharedCheck_735_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v_x_712_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_735_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
uint32_t v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; lean_object* v_val_723_; lean_object* v___x_726_; 
v___x_719_ = 0;
v___x_720_ = lean_unsigned_to_nat(0u);
v___x_721_ = 0;
v___x_726_ = lasm_js_call_into(v_a_708_, v_op_709_, v___x_719_, v_flags_710_, v_a_715_, v_payload_711_);
lean_dec(v_a_715_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_729_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 0, v_a_727_);
v___x_729_ = v___x_717_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_727_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
v_val_723_ = v___x_729_;
goto v___jp_722_;
}
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; 
v_a_731_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_731_);
lean_dec_ref_known(v___x_726_, 1);
if (v_isShared_718_ == 0)
{
lean_ctor_set_tag(v___x_717_, 0);
lean_ctor_set(v___x_717_, 0, v_a_731_);
v___x_733_ = v___x_717_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
v_val_723_ = v___x_733_;
goto v___jp_722_;
}
}
v___jp_722_:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v_val_723_);
v___x_725_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_720_, v___x_721_, v___x_724_, v___f_707_);
return v___x_725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed(lean_object* v___f_736_, lean_object* v_a_737_, lean_object* v_op_738_, lean_object* v_flags_739_, lean_object* v_payload_740_, lean_object* v_x_741_, lean_object* v___y_742_){
_start:
{
uint32_t v_op_boxed_743_; uint64_t v_flags_boxed_744_; lean_object* v_res_745_; 
v_op_boxed_743_ = lean_unbox_uint32(v_op_738_);
lean_dec(v_op_738_);
v_flags_boxed_744_ = lean_unbox_uint64(v_flags_739_);
lean_dec_ref(v_flags_739_);
v_res_745_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(v___f_736_, v_a_737_, v_op_boxed_743_, v_flags_boxed_744_, v_payload_740_, v_x_741_);
lean_dec(v_payload_740_);
lean_dec(v_a_737_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(lean_object* v_failurePrefix_746_, uint32_t v_op_747_, uint64_t v_flags_748_, lean_object* v_payload_749_, lean_object* v___f_750_, lean_object* v___f_751_, lean_object* v___f_752_, lean_object* v_x_753_){
_start:
{
if (lean_obj_tag(v_x_753_) == 0)
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_763_; 
lean_dec_ref(v___f_752_);
lean_dec_ref(v___f_751_);
lean_dec_ref(v___f_750_);
lean_dec(v_payload_749_);
v_a_755_ = lean_ctor_get(v_x_753_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v_x_753_);
if (v_isSharedCheck_763_ == 0)
{
v___x_757_ = v_x_753_;
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v_x_753_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_763_;
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
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_762_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_761_; 
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
return v___x_761_;
}
}
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_810_; 
v_a_764_ = lean_ctor_get(v_x_753_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v_x_753_);
if (v_isSharedCheck_810_ == 0)
{
v___x_766_ = v_x_753_;
v_isShared_767_ = v_isSharedCheck_810_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v_x_753_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_810_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v___x_768_ = lean_string_utf8_byte_size(v_failurePrefix_746_);
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = lean_nat_dec_eq(v___x_768_, v___x_769_);
if (v___x_770_ == 0)
{
lean_object* v___f_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___f_775_; lean_object* v_val_777_; lean_object* v___x_782_; 
lean_dec_ref(v___f_752_);
lean_inc(v_a_764_);
v___f_771_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_771_, 0, v_a_764_);
v___x_772_ = lean_box(v___x_770_);
v___x_773_ = lean_box_uint32(v_op_747_);
v___x_774_ = lean_box_uint64(v_flags_748_);
lean_inc(v_payload_749_);
v___f_775_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_775_, 0, v___x_769_);
lean_closure_set(v___f_775_, 1, v___x_772_);
lean_closure_set(v___f_775_, 2, v___f_771_);
lean_closure_set(v___f_775_, 3, v_a_764_);
lean_closure_set(v___f_775_, 4, v___x_773_);
lean_closure_set(v___f_775_, 5, v___x_774_);
lean_closure_set(v___f_775_, 6, v_payload_749_);
v___x_782_ = l_Lasm_JS_Wire_encodeIO(v_payload_749_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; lean_object* v___x_785_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_783_);
lean_dec_ref_known(v___x_782_, 1);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v_a_783_);
v___x_785_ = v___x_766_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
v_val_777_ = v___x_785_;
goto v___jp_776_;
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; 
v_a_787_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_787_);
lean_dec_ref_known(v___x_782_, 1);
if (v_isShared_767_ == 0)
{
lean_ctor_set_tag(v___x_766_, 0);
lean_ctor_set(v___x_766_, 0, v_a_787_);
v___x_789_ = v___x_766_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
v_val_777_ = v___x_789_;
goto v___jp_776_;
}
}
v___jp_776_:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_778_, 0, v_val_777_);
v___x_779_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_769_, v___x_770_, v___x_778_, v___f_775_);
v___x_780_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_769_, v___x_770_, v___x_779_, v___f_750_);
v___x_781_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_769_, v___x_770_, v___x_780_, v___f_751_);
return v___x_781_;
}
}
else
{
lean_object* v___f_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___f_794_; uint8_t v___x_795_; lean_object* v_val_797_; lean_object* v___x_801_; 
lean_dec_ref(v___f_751_);
lean_dec_ref(v___f_750_);
lean_inc(v_a_764_);
v___f_791_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_791_, 0, v_a_764_);
v___x_792_ = lean_box_uint32(v_op_747_);
v___x_793_ = lean_box_uint64(v_flags_748_);
lean_inc(v_payload_749_);
v___f_794_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_794_, 0, v___f_791_);
lean_closure_set(v___f_794_, 1, v_a_764_);
lean_closure_set(v___f_794_, 2, v___x_792_);
lean_closure_set(v___f_794_, 3, v___x_793_);
lean_closure_set(v___f_794_, 4, v_payload_749_);
v___x_795_ = 0;
v___x_801_ = l_Lasm_JS_Wire_encodeIO(v_payload_749_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; lean_object* v___x_804_; 
v_a_802_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_802_);
lean_dec_ref_known(v___x_801_, 1);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v_a_802_);
v___x_804_ = v___x_766_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
v_val_797_ = v___x_804_;
goto v___jp_796_;
}
}
else
{
lean_object* v_a_806_; lean_object* v___x_808_; 
v_a_806_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_806_);
lean_dec_ref_known(v___x_801_, 1);
if (v_isShared_767_ == 0)
{
lean_ctor_set_tag(v___x_766_, 0);
lean_ctor_set(v___x_766_, 0, v_a_806_);
v___x_808_ = v___x_766_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_a_806_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
v_val_797_ = v___x_808_;
goto v___jp_796_;
}
}
v___jp_796_:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_798_, 0, v_val_797_);
v___x_799_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_769_, v___x_795_, v___x_798_, v___f_794_);
v___x_800_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_769_, v___x_795_, v___x_799_, v___f_752_);
return v___x_800_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed(lean_object* v_failurePrefix_811_, lean_object* v_op_812_, lean_object* v_flags_813_, lean_object* v_payload_814_, lean_object* v___f_815_, lean_object* v___f_816_, lean_object* v___f_817_, lean_object* v_x_818_, lean_object* v___y_819_){
_start:
{
uint32_t v_op_boxed_820_; uint64_t v_flags_boxed_821_; lean_object* v_res_822_; 
v_op_boxed_820_ = lean_unbox_uint32(v_op_812_);
lean_dec(v_op_812_);
v_flags_boxed_821_ = lean_unbox_uint64(v_flags_813_);
lean_dec_ref(v_flags_813_);
v_res_822_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(v_failurePrefix_811_, v_op_boxed_820_, v_flags_boxed_821_, v_payload_814_, v___f_815_, v___f_816_, v___f_817_, v_x_818_);
lean_dec_ref(v_failurePrefix_811_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(size_t v_sz_823_, size_t v_i_824_, lean_object* v_bs_825_){
_start:
{
uint8_t v___x_826_; 
v___x_826_ = lean_usize_dec_lt(v_i_824_, v_sz_823_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; 
v___x_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_827_, 0, v_bs_825_);
return v___x_827_;
}
else
{
lean_object* v_v_828_; lean_object* v___x_829_; lean_object* v_bs_x27_830_; size_t v___x_831_; size_t v___x_832_; lean_object* v___x_833_; 
v_v_828_ = lean_array_uget(v_bs_825_, v_i_824_);
v___x_829_ = lean_unsigned_to_nat(0u);
v_bs_x27_830_ = lean_array_uset(v_bs_825_, v_i_824_, v___x_829_);
v___x_831_ = ((size_t)1ULL);
v___x_832_ = lean_usize_add(v_i_824_, v___x_831_);
v___x_833_ = lean_array_uset(v_bs_x27_830_, v_i_824_, v_v_828_);
v_i_824_ = v___x_832_;
v_bs_825_ = v___x_833_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_835_, lean_object* v_i_836_, lean_object* v_bs_837_){
_start:
{
size_t v_sz_boxed_838_; size_t v_i_boxed_839_; lean_object* v_res_840_; 
v_sz_boxed_838_ = lean_unbox_usize(v_sz_835_);
lean_dec(v_sz_835_);
v_i_boxed_839_ = lean_unbox_usize(v_i_836_);
lean_dec(v_i_836_);
v_res_840_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_boxed_838_, v_i_boxed_839_, v_bs_837_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(lean_object* v_context_844_, lean_object* v_d_845_){
_start:
{
lean_object* v___y_848_; lean_object* v___y_849_; lean_object* v___y_854_; lean_object* v_received_855_; lean_object* v___y_874_; lean_object* v_a_877_; 
if (lean_obj_tag(v_d_845_) == 7)
{
lean_object* v_items_901_; size_t v_sz_902_; size_t v___x_903_; lean_object* v___x_904_; 
v_items_901_ = lean_ctor_get(v_d_845_, 0);
v_sz_902_ = lean_array_size(v_items_901_);
v___x_903_ = ((size_t)0ULL);
lean_inc_ref(v_items_901_);
v___x_904_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_902_, v___x_903_, v_items_901_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; uint8_t v___x_909_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_904_, 1);
v___x_906_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__1));
v___x_907_ = lean_string_utf8_byte_size(v_a_905_);
v___x_908_ = lean_unsigned_to_nat(0u);
v___x_909_ = lean_nat_dec_eq(v___x_907_, v___x_908_);
if (v___x_909_ == 0)
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_910_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2));
v___x_911_ = lean_string_append(v___x_910_, v_a_905_);
lean_dec(v_a_905_);
v___x_912_ = lean_string_append(v___x_906_, v___x_911_);
lean_dec_ref(v___x_911_);
v_a_877_ = v___x_912_;
goto v___jp_876_;
}
else
{
lean_dec(v_a_905_);
v_a_877_ = v___x_906_;
goto v___jp_876_;
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec_ref_known(v_d_845_, 1);
v_a_913_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_904_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_904_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
lean_ctor_set_tag(v___x_915_, 0);
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
else
{
lean_object* v___x_921_; 
v___x_921_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v_a_877_ = v___x_921_;
goto v___jp_876_;
}
v___jp_847_:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_850_ = lean_string_append(v___y_848_, v___y_849_);
lean_dec_ref(v___y_849_);
v___x_851_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
v___x_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_852_, 0, v___x_851_);
return v___x_852_;
}
v___jp_853_:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; uint8_t v___x_867_; 
v___x_856_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0));
v___x_857_ = lean_string_append(v___x_856_, v_context_844_);
v___x_858_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1));
v___x_859_ = lean_string_append(v___x_857_, v___x_858_);
v___x_860_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__0));
v___x_861_ = lean_string_append(v___x_859_, v___x_860_);
v___x_862_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3));
v___x_863_ = lean_string_append(v___x_861_, v___x_862_);
v___x_864_ = lean_string_append(v___x_863_, v_received_855_);
lean_dec_ref(v_received_855_);
v___x_865_ = lean_string_utf8_byte_size(v___y_854_);
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = lean_nat_dec_eq(v___x_865_, v___x_866_);
if (v___x_867_ == 0)
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_868_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__4));
v___x_869_ = lean_string_append(v___x_868_, v___y_854_);
lean_dec_ref(v___y_854_);
v___x_870_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__5));
v___x_871_ = lean_string_append(v___x_869_, v___x_870_);
v___y_848_ = v___x_864_;
v___y_849_ = v___x_871_;
goto v___jp_847_;
}
else
{
lean_object* v___x_872_; 
lean_dec_ref(v___y_854_);
v___x_872_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___y_848_ = v___x_864_;
v___y_849_ = v___x_872_;
goto v___jp_847_;
}
}
v___jp_873_:
{
lean_object* v___x_875_; 
v___x_875_ = l_Lasm_JS_Data_describe(v_d_845_);
v___y_854_ = v___y_874_;
v_received_855_ = v___x_875_;
goto v___jp_853_;
}
v___jp_876_:
{
if (lean_obj_tag(v_d_845_) == 9)
{
lean_object* v_value_878_; lean_object* v_description_879_; lean_object* v___x_880_; uint8_t v___x_881_; 
v_value_878_ = lean_ctor_get(v_d_845_, 0);
v_description_879_ = lean_ctor_get(v_d_845_, 1);
v___x_880_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_881_ = lean_string_dec_eq(v_description_879_, v___x_880_);
if (v___x_881_ == 0)
{
v___y_874_ = v_a_877_;
goto v___jp_873_;
}
else
{
lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_898_; 
lean_inc(v_value_878_);
v_isSharedCheck_898_ = !lean_is_exclusive(v_d_845_);
if (v_isSharedCheck_898_ == 0)
{
lean_object* v_unused_899_; lean_object* v_unused_900_; 
v_unused_899_ = lean_ctor_get(v_d_845_, 1);
lean_dec(v_unused_899_);
v_unused_900_ = lean_ctor_get(v_d_845_, 0);
lean_dec(v_unused_900_);
v___x_883_ = v_d_845_;
v_isShared_884_ = v_isSharedCheck_898_;
goto v_resetjp_882_;
}
else
{
lean_dec(v_d_845_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_898_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
uint32_t v___x_885_; uint64_t v___x_886_; lean_object* v___x_888_; 
v___x_885_ = 206;
v___x_886_ = 0ULL;
lean_inc(v_value_878_);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 1, v___x_880_);
v___x_888_ = v___x_883_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_value_878_);
lean_ctor_set(v_reuseFailAlloc_897_, 1, v___x_880_);
v___x_888_ = v_reuseFailAlloc_897_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
uint32_t v___x_889_; lean_object* v___x_890_; 
v___x_889_ = lasm_js_value_handle(v_value_878_);
lean_dec(v_value_878_);
v___x_890_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_885_, v___x_886_, v___x_888_, v___x_889_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v_a_891_; uint8_t v___x_892_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc(v_a_891_);
lean_dec_ref_known(v___x_890_, 1);
v___x_892_ = lean_string_validate_utf8(v_a_891_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; lean_object* v___x_894_; 
lean_dec(v_a_891_);
v___x_893_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9);
v___x_894_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_893_);
v___y_854_ = v_a_877_;
v_received_855_ = v___x_894_;
goto v___jp_853_;
}
else
{
lean_object* v___x_895_; 
v___x_895_ = lean_string_from_utf8_unchecked(v_a_891_);
v___y_854_ = v_a_877_;
v_received_855_ = v___x_895_;
goto v___jp_853_;
}
}
else
{
lean_object* v___x_896_; 
lean_dec_ref_known(v___x_890_, 1);
v___x_896_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__10));
v___y_854_ = v_a_877_;
v_received_855_ = v___x_896_;
goto v___jp_853_;
}
}
}
}
}
else
{
v___y_874_ = v_a_877_;
goto v___jp_873_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___boxed(lean_object* v_context_922_, lean_object* v_d_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_922_, v_d_923_);
lean_dec_ref(v_context_922_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(lean_object* v_context_926_, lean_object* v_x_927_){
_start:
{
lean_object* v_val_930_; 
if (lean_obj_tag(v_x_927_) == 0)
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_940_; 
v_a_932_ = lean_ctor_get(v_x_927_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v_x_927_);
if (v_isSharedCheck_940_ == 0)
{
v___x_934_ = v_x_927_;
v_isShared_935_ = v_isSharedCheck_940_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v_x_927_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_940_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_937_; 
if (v_isShared_935_ == 0)
{
v___x_937_ = v___x_934_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_932_);
v___x_937_ = v_reuseFailAlloc_939_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
lean_object* v___x_938_; 
v___x_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_938_, 0, v___x_937_);
return v___x_938_;
}
}
}
else
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_954_; 
v_a_941_ = lean_ctor_get(v_x_927_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v_x_927_);
if (v_isSharedCheck_954_ == 0)
{
v___x_943_ = v_x_927_;
v_isShared_944_ = v_isSharedCheck_954_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v_x_927_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_954_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; 
v___x_945_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_926_, v_a_941_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; lean_object* v___x_948_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_946_);
lean_dec_ref_known(v___x_945_, 1);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v_a_946_);
v___x_948_ = v___x_943_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_a_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
v_val_930_ = v___x_948_;
goto v___jp_929_;
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; 
v_a_950_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_950_);
lean_dec_ref_known(v___x_945_, 1);
if (v_isShared_944_ == 0)
{
lean_ctor_set_tag(v___x_943_, 0);
lean_ctor_set(v___x_943_, 0, v_a_950_);
v___x_952_ = v___x_943_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_950_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
v_val_930_ = v___x_952_;
goto v___jp_929_;
}
}
}
}
v___jp_929_:
{
lean_object* v___x_931_; 
v___x_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_931_, 0, v_val_930_);
return v___x_931_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed(lean_object* v_context_955_, lean_object* v_x_956_, lean_object* v___y_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(v_context_955_, v_x_956_);
lean_dec_ref(v_context_955_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(lean_object* v___f_959_, lean_object* v_x_960_){
_start:
{
if (lean_obj_tag(v_x_960_) == 0)
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_970_; 
lean_dec_ref(v___f_959_);
v_a_962_ = lean_ctor_get(v_x_960_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v_x_960_);
if (v_isSharedCheck_970_ == 0)
{
v___x_964_ = v_x_960_;
v_isShared_965_ = v_isSharedCheck_970_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v_x_960_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_970_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_969_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
lean_object* v___x_968_; 
v___x_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
return v___x_968_;
}
}
}
else
{
lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_982_; 
v_isSharedCheck_982_ = !lean_is_exclusive(v_x_960_);
if (v_isSharedCheck_982_ == 0)
{
lean_object* v_unused_983_; 
v_unused_983_ = lean_ctor_get(v_x_960_, 0);
lean_dec(v_unused_983_);
v___x_972_ = v_x_960_;
v_isShared_973_ = v_isSharedCheck_982_;
goto v_resetjp_971_;
}
else
{
lean_dec(v_x_960_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_982_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_974_; uint8_t v___x_975_; lean_object* v___x_976_; lean_object* v___x_978_; 
v___x_974_ = lean_unsigned_to_nat(0u);
v___x_975_ = 0;
v___x_976_ = lean_io_promise_new();
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 0, v___x_976_);
v___x_978_ = v___x_972_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v___x_976_);
v___x_978_ = v_reuseFailAlloc_981_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
v___x_980_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_974_, v___x_975_, v___x_979_, v___f_959_);
return v___x_980_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed(lean_object* v___f_984_, lean_object* v_x_985_, lean_object* v___y_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(v___f_984_, v_x_985_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(lean_object* v_context_988_, uint32_t v_op_989_, uint64_t v_flags_990_, lean_object* v_payload_991_, lean_object* v_failurePrefix_992_){
_start:
{
lean_object* v___f_994_; lean_object* v___f_995_; lean_object* v___f_996_; lean_object* v___f_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___f_1000_; lean_object* v___f_1001_; lean_object* v___x_1002_; uint8_t v___x_1003_; lean_object* v_val_1005_; lean_object* v___x_1008_; 
v___f_994_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_994_, 0, v_context_988_);
v___f_995_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_995_, 0, v___f_994_);
v___f_996_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_996_, 0, v___f_995_);
lean_inc_ref(v_failurePrefix_992_);
v___f_997_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_997_, 0, v_failurePrefix_992_);
v___x_998_ = lean_box_uint32(v_op_989_);
v___x_999_ = lean_box_uint64(v_flags_990_);
lean_inc_ref(v___f_996_);
v___f_1000_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1000_, 0, v_failurePrefix_992_);
lean_closure_set(v___f_1000_, 1, v___x_998_);
lean_closure_set(v___f_1000_, 2, v___x_999_);
lean_closure_set(v___f_1000_, 3, v_payload_991_);
lean_closure_set(v___f_1000_, 4, v___f_997_);
lean_closure_set(v___f_1000_, 5, v___f_996_);
lean_closure_set(v___f_1000_, 6, v___f_996_);
v___f_1001_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1001_, 0, v___f_1000_);
v___x_1002_ = lean_unsigned_to_nat(0u);
v___x_1003_ = 0;
v___x_1008_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_1008_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1008_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
lean_ctor_set_tag(v___x_1011_, 1);
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
v_val_1005_ = v___x_1014_;
goto v___jp_1004_;
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
v_a_1017_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1008_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1008_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
lean_ctor_set_tag(v___x_1019_, 0);
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
v_val_1005_ = v___x_1022_;
goto v___jp_1004_;
}
}
}
v___jp_1004_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1006_, 0, v_val_1005_);
v___x_1007_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1002_, v___x_1003_, v___x_1006_, v___f_1001_);
return v___x_1007_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___boxed(lean_object* v_context_1025_, lean_object* v_op_1026_, lean_object* v_flags_1027_, lean_object* v_payload_1028_, lean_object* v_failurePrefix_1029_, lean_object* v_a_1030_){
_start:
{
uint32_t v_op_boxed_1031_; uint64_t v_flags_boxed_1032_; lean_object* v_res_1033_; 
v_op_boxed_1031_ = lean_unbox_uint32(v_op_1026_);
lean_dec(v_op_1026_);
v_flags_boxed_1032_ = lean_unbox_uint64(v_flags_1027_);
lean_dec_ref(v_flags_1027_);
v_res_1033_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v_context_1025_, v_op_boxed_1031_, v_flags_boxed_1032_, v_payload_1028_, v_failurePrefix_1029_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(lean_object* v_b_1034_, lean_object* v_args_1035_){
_start:
{
uint8_t v_construct_1037_; lean_object* v___x_1038_; uint32_t v___x_1039_; uint64_t v___x_1040_; uint64_t v___y_1042_; 
v_construct_1037_ = lean_ctor_get_uint8(v_b_1034_, sizeof(void*)*4);
v___x_1038_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1034_);
v___x_1039_ = 214;
v___x_1040_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_construct_1037_ == 0)
{
uint64_t v___x_1050_; 
v___x_1050_ = 0ULL;
v___y_1042_ = v___x_1050_;
goto v___jp_1041_;
}
else
{
uint64_t v___x_1051_; 
v___x_1051_ = 4ULL;
v___y_1042_ = v___x_1051_;
goto v___jp_1041_;
}
v___jp_1041_:
{
uint64_t v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1043_ = lean_uint64_lor(v___x_1040_, v___y_1042_);
v___x_1044_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1034_, v_args_1035_);
v___x_1045_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0));
v___x_1046_ = lean_string_append(v___x_1045_, v___x_1038_);
v___x_1047_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2));
v___x_1048_ = lean_string_append(v___x_1046_, v___x_1047_);
v___x_1049_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v___x_1038_, v___x_1039_, v___x_1043_, v___x_1044_, v___x_1048_);
return v___x_1049_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1___boxed(lean_object* v_b_1052_, lean_object* v_args_1053_, lean_object* v_a_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v_b_1052_, v_args_1053_);
lean_dec_ref(v_b_1052_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(lean_object* v_x_1056_){
_start:
{
if (lean_obj_tag(v_x_1056_) == 0)
{
lean_object* v___x_1057_; 
v___x_1057_ = lean_box(0);
return v___x_1057_;
}
else
{
lean_object* v_val_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v_val_1058_ = lean_ctor_get(v_x_1056_, 0);
v___x_1059_ = ((lean_object*)(l_Lasm_JS_Node_instToJSOnceOptions___lam__0___closed__0));
v___x_1060_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_1058_);
v___x_1061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1059_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
v___x_1062_ = lean_unsigned_to_nat(1u);
v___x_1063_ = lean_mk_empty_array_with_capacity(v___x_1062_);
v___x_1064_ = lean_array_push(v___x_1063_, v___x_1061_);
v___x_1065_ = l_Lasm_JS_Web_Support_fields(v___x_1064_);
lean_dec_ref(v___x_1064_);
return v___x_1065_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0___boxed(lean_object* v_x_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_x_1066_);
lean_dec(v_x_1066_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once(lean_object* v_emitter_1076_, lean_object* v_name_1077_, lean_object* v_options_1078_){
_start:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___y_1085_; 
v___x_1080_ = lean_unsigned_to_nat(3u);
v___x_1081_ = ((lean_object*)(l_Lasm_JS_Node_events_once___closed__2));
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1083_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1083_, 0, v_emitter_1076_);
lean_ctor_set(v___x_1083_, 1, v___x_1082_);
if (lean_obj_tag(v_name_1077_) == 0)
{
lean_object* v_value_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
v_value_1093_ = lean_ctor_get(v_name_1077_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_name_1077_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v_name_1077_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_value_1093_);
lean_dec(v_name_1077_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
lean_ctor_set_tag(v___x_1095_, 4);
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_value_1093_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
v___y_1085_ = v___x_1098_;
goto v___jp_1084_;
}
}
}
else
{
lean_object* v_value_1101_; lean_object* v___x_1102_; 
v_value_1101_ = lean_ctor_get(v_name_1077_, 0);
lean_inc(v_value_1101_);
lean_dec_ref_known(v_name_1077_, 1);
v___x_1102_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1102_, 0, v_value_1101_);
lean_ctor_set(v___x_1102_, 1, v___x_1082_);
v___y_1085_ = v___x_1102_;
goto v___jp_1084_;
}
v___jp_1084_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1086_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_options_1078_);
v___x_1087_ = lean_mk_empty_array_with_capacity(v___x_1080_);
v___x_1088_ = lean_array_push(v___x_1087_, v___x_1083_);
v___x_1089_ = lean_array_push(v___x_1088_, v___y_1085_);
v___x_1090_ = lean_array_push(v___x_1089_, v___x_1086_);
v___x_1091_ = l_Lasm_JS_Web_Support_args(v___x_1090_);
v___x_1092_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v___x_1081_, v___x_1091_);
return v___x_1092_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once___boxed(lean_object* v_emitter_1103_, lean_object* v_name_1104_, lean_object* v_options_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = l_Lasm_JS_Node_events_once(v_emitter_1103_, v_name_1104_, v_options_1105_);
lean_dec(v_options_1105_);
return v_res_1107_;
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
