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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSOnceOptions___lam__0(lean_object* v___f_76_, lean_object* v_d_77_){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_78_ = ((lean_object*)(l_Lasm_JS_Node_instToJSOnceOptions___lam__0___closed__0));
v___x_79_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_76_, v_d_77_);
v___x_80_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_78_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = lean_unsigned_to_nat(1u);
v___x_82_ = lean_mk_empty_array_with_capacity(v___x_81_);
v___x_83_ = lean_array_push(v___x_82_, v___x_80_);
v___x_84_ = l_Lasm_JS_Web_Support_fields(v___x_83_);
lean_dec_ref(v___x_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t v_sz_89_, size_t v_i_90_, lean_object* v_bs_91_){
_start:
{
uint8_t v___x_92_; 
v___x_92_ = lean_usize_dec_lt(v_i_90_, v_sz_89_);
if (v___x_92_ == 0)
{
return v_bs_91_;
}
else
{
lean_object* v_v_93_; lean_object* v___x_94_; lean_object* v_bs_x27_95_; size_t v___x_96_; size_t v___x_97_; lean_object* v___x_98_; 
v_v_93_ = lean_array_uget(v_bs_91_, v_i_90_);
v___x_94_ = lean_unsigned_to_nat(0u);
v_bs_x27_95_ = lean_array_uset(v_bs_91_, v_i_90_, v___x_94_);
v___x_96_ = ((size_t)1ULL);
v___x_97_ = lean_usize_add(v_i_90_, v___x_96_);
v___x_98_ = lean_array_uset(v_bs_x27_95_, v_i_90_, v_v_93_);
v_i_90_ = v___x_97_;
v_bs_91_ = v___x_98_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0___boxed(lean_object* v_sz_100_, lean_object* v_i_101_, lean_object* v_bs_102_){
_start:
{
size_t v_sz_boxed_103_; size_t v_i_boxed_104_; lean_object* v_res_105_; 
v_sz_boxed_103_ = lean_unbox_usize(v_sz_100_);
lean_dec(v_sz_100_);
v_i_boxed_104_ = lean_unbox_usize(v_i_101_);
lean_dec(v_i_101_);
v_res_105_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_boxed_103_, v_i_boxed_104_, v_bs_102_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit(lean_object* v_self_107_, lean_object* v_eventName_108_, lean_object* v_args_109_){
_start:
{
lean_object* v___x_111_; lean_object* v___y_113_; 
v___x_111_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_emit___closed__0));
if (lean_obj_tag(v_eventName_108_) == 0)
{
lean_object* v_value_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
v_value_122_ = lean_ctor_get(v_eventName_108_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v_eventName_108_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v_eventName_108_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_value_122_);
lean_dec(v_eventName_108_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
lean_ctor_set_tag(v___x_124_, 4);
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_value_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
v___y_113_ = v___x_127_;
goto v___jp_112_;
}
}
}
else
{
lean_object* v_value_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v_value_130_ = lean_ctor_get(v_eventName_108_, 0);
lean_inc(v_value_130_);
lean_dec_ref_known(v_eventName_108_, 1);
v___x_131_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_132_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_132_, 0, v_value_130_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
v___y_113_ = v___x_132_;
goto v___jp_112_;
}
v___jp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; size_t v_sz_117_; size_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_114_ = lean_unsigned_to_nat(1u);
v___x_115_ = lean_mk_empty_array_with_capacity(v___x_114_);
v___x_116_ = lean_array_push(v___x_115_, v___y_113_);
v_sz_117_ = lean_array_size(v_args_109_);
v___x_118_ = ((size_t)0ULL);
v___x_119_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_117_, v___x_118_, v_args_109_);
v___x_120_ = l_Lasm_JS_Web_Support_argsWith(v___x_116_, v___x_119_);
lean_dec_ref(v___x_119_);
v___x_121_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_107_, v___x_111_, v___x_120_);
return v___x_121_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_emit___boxed(lean_object* v_self_133_, lean_object* v_eventName_134_, lean_object* v_args_135_, lean_object* v_a_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lasm_JS_Node_EventEmitter_emit(v_self_133_, v_eventName_134_, v_args_135_);
return v_res_137_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_138_; uint64_t v___x_139_; 
v___x_138_ = 0;
v___x_139_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_138_);
return v___x_139_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(uint8_t v_await_140_, uint64_t v_extra_141_){
_start:
{
uint64_t v___x_142_; uint64_t v___y_144_; 
v___x_142_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_await_140_ == 0)
{
uint64_t v___x_147_; 
v___x_147_ = 0ULL;
v___y_144_ = v___x_147_;
goto v___jp_143_;
}
else
{
uint64_t v___x_148_; 
v___x_148_ = 2ULL;
v___y_144_ = v___x_148_;
goto v___jp_143_;
}
v___jp_143_:
{
uint64_t v___x_145_; uint64_t v___x_146_; 
v___x_145_ = lean_uint64_lor(v___x_142_, v___y_144_);
v___x_146_ = lean_uint64_lor(v___x_145_, v_extra_141_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___boxed(lean_object* v_await_149_, lean_object* v_extra_150_){
_start:
{
uint8_t v_await_boxed_151_; uint64_t v_extra_boxed_152_; uint64_t v_res_153_; lean_object* v_r_154_; 
v_await_boxed_151_ = lean_unbox(v_await_149_);
v_extra_boxed_152_ = lean_unbox_uint64(v_extra_150_);
lean_dec_ref(v_extra_150_);
v_res_153_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(v_await_boxed_151_, v_extra_boxed_152_);
v_r_154_ = lean_box_uint64(v_res_153_);
return v_r_154_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0(void){
_start:
{
uint64_t v___x_155_; uint8_t v___x_156_; uint64_t v___x_157_; 
v___x_155_ = 8ULL;
v___x_156_ = 0;
v___x_157_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0(v___x_156_, v___x_155_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(lean_object* v_o_158_, lean_object* v_name_159_, lean_object* v_args_160_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; uint64_t v___x_165_; lean_object* v___x_166_; 
v___x_162_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_163_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_163_, 0, v_o_158_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
v___x_164_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_164_, 0, v_name_159_);
v___x_165_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___closed__0);
v___x_166_ = l_Lasm_JS_Value_invokeRaw(v___x_163_, v___x_164_, v_args_160_, v___x_165_);
if (lean_obj_tag(v___x_166_) == 0)
{
lean_object* v_a_167_; lean_object* v___x_168_; 
v_a_167_ = lean_ctor_get(v___x_166_, 0);
lean_inc(v_a_167_);
lean_dec_ref_known(v___x_166_, 1);
v___x_168_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_167_);
lean_dec(v_a_167_);
return v___x_168_;
}
else
{
lean_object* v_a_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_176_; 
v_a_169_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_176_ == 0)
{
v___x_171_ = v___x_166_;
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_a_169_);
lean_dec(v___x_166_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_174_; 
if (v_isShared_172_ == 0)
{
v___x_174_ = v___x_171_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_169_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0___boxed(lean_object* v_o_177_, lean_object* v_name_178_, lean_object* v_args_179_, lean_object* v_a_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(v_o_177_, v_name_178_, v_args_179_);
return v_res_181_;
}
}
static lean_object* _init_l_Lasm_JS_Node_EventEmitter_eventNames___closed__2(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_eventNames___closed__1));
v___x_186_ = l_Lasm_JS_Web_Support_args(v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames(lean_object* v_self_187_){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_189_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_eventNames___closed__0));
v___x_190_ = lean_obj_once(&l_Lasm_JS_Node_EventEmitter_eventNames___closed__2, &l_Lasm_JS_Node_EventEmitter_eventNames___closed__2_once, _init_l_Lasm_JS_Node_EventEmitter_eventNames___closed__2);
v___x_191_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0(v_self_187_, v___x_189_, v___x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_eventNames___boxed(lean_object* v_self_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lasm_JS_Node_EventEmitter_eventNames(v_self_192_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(lean_object* v_x_195_){
_start:
{
if (lean_obj_tag(v_x_195_) == 0)
{
lean_object* v___x_196_; 
v___x_196_ = lean_box(0);
return v___x_196_;
}
else
{
lean_object* v_val_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v_val_197_ = lean_ctor_get(v_x_195_, 0);
v___x_198_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
lean_inc(v_val_197_);
v___x_199_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_199_, 0, v_val_197_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0___boxed(lean_object* v_x_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(v_x_200_);
lean_dec(v_x_200_);
return v_res_201_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_211_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__8));
v___x_212_ = lean_unsigned_to_nat(46u);
v___x_213_ = lean_unsigned_to_nat(193u);
v___x_214_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__7));
v___x_215_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__6));
v___x_216_ = l_mkPanicMessageWithDecl(v___x_215_, v___x_214_, v___x_213_, v___x_212_, v___x_211_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(lean_object* v_context_219_, lean_object* v_d_220_){
_start:
{
lean_object* v___y_223_; lean_object* v___y_224_; lean_object* v___y_229_; lean_object* v_received_230_; lean_object* v___y_249_; lean_object* v_a_252_; 
switch(lean_obj_tag(v_d_220_))
{
case 3:
{
double v_n_276_; lean_object* v___x_277_; 
v_n_276_ = lean_ctor_get_float(v_d_220_, 0);
v___x_277_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_276_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v___x_278_; 
v___x_278_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__11));
v_a_252_ = v___x_278_;
goto v___jp_251_;
}
else
{
lean_object* v_val_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec_ref_known(v_d_220_, 0);
v_val_279_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_277_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_val_279_);
lean_dec(v___x_277_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set_tag(v___x_281_, 0);
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_val_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
case 5:
{
lean_object* v_i_287_; lean_object* v___x_288_; 
v_i_287_ = lean_ctor_get(v_d_220_, 0);
lean_inc(v_i_287_);
lean_dec_ref_known(v_d_220_, 1);
v___x_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_288_, 0, v_i_287_);
return v___x_288_;
}
default: 
{
lean_object* v___x_289_; 
v___x_289_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v_a_252_ = v___x_289_;
goto v___jp_251_;
}
}
v___jp_222_:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_225_ = lean_string_append(v___y_223_, v___y_224_);
lean_dec_ref(v___y_224_);
v___x_226_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
v___x_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
return v___x_227_;
}
v___jp_228_:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_231_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0));
v___x_232_ = lean_string_append(v___x_231_, v_context_219_);
v___x_233_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1));
v___x_234_ = lean_string_append(v___x_232_, v___x_233_);
v___x_235_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__2));
v___x_236_ = lean_string_append(v___x_234_, v___x_235_);
v___x_237_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3));
v___x_238_ = lean_string_append(v___x_236_, v___x_237_);
v___x_239_ = lean_string_append(v___x_238_, v_received_230_);
lean_dec_ref(v_received_230_);
v___x_240_ = lean_string_utf8_byte_size(v___y_229_);
v___x_241_ = lean_unsigned_to_nat(0u);
v___x_242_ = lean_nat_dec_eq(v___x_240_, v___x_241_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_243_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__4));
v___x_244_ = lean_string_append(v___x_243_, v___y_229_);
v___x_245_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__5));
v___x_246_ = lean_string_append(v___x_244_, v___x_245_);
v___y_223_ = v___x_239_;
v___y_224_ = v___x_246_;
goto v___jp_222_;
}
else
{
lean_object* v___x_247_; 
v___x_247_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___y_223_ = v___x_239_;
v___y_224_ = v___x_247_;
goto v___jp_222_;
}
}
v___jp_248_:
{
lean_object* v___x_250_; 
v___x_250_ = l_Lasm_JS_Data_describe(v_d_220_);
v___y_229_ = v___y_249_;
v_received_230_ = v___x_250_;
goto v___jp_228_;
}
v___jp_251_:
{
if (lean_obj_tag(v_d_220_) == 9)
{
lean_object* v_value_253_; lean_object* v_description_254_; lean_object* v___x_255_; uint8_t v___x_256_; 
v_value_253_ = lean_ctor_get(v_d_220_, 0);
v_description_254_ = lean_ctor_get(v_d_220_, 1);
v___x_255_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_256_ = lean_string_dec_eq(v_description_254_, v___x_255_);
if (v___x_256_ == 0)
{
v___y_249_ = v_a_252_;
goto v___jp_248_;
}
else
{
lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_273_; 
lean_inc(v_value_253_);
v_isSharedCheck_273_ = !lean_is_exclusive(v_d_220_);
if (v_isSharedCheck_273_ == 0)
{
lean_object* v_unused_274_; lean_object* v_unused_275_; 
v_unused_274_ = lean_ctor_get(v_d_220_, 1);
lean_dec(v_unused_274_);
v_unused_275_ = lean_ctor_get(v_d_220_, 0);
lean_dec(v_unused_275_);
v___x_258_ = v_d_220_;
v_isShared_259_ = v_isSharedCheck_273_;
goto v_resetjp_257_;
}
else
{
lean_dec(v_d_220_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_273_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
uint32_t v___x_260_; uint64_t v___x_261_; lean_object* v___x_263_; 
v___x_260_ = 206;
v___x_261_ = 0ULL;
lean_inc(v_value_253_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 1, v___x_255_);
v___x_263_ = v___x_258_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_value_253_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v___x_255_);
v___x_263_ = v_reuseFailAlloc_272_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
uint32_t v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lasm_js_value_handle(v_value_253_);
lean_dec(v_value_253_);
v___x_265_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_260_, v___x_261_, v___x_263_, v___x_264_);
lean_dec_ref(v___x_263_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v_a_266_; uint8_t v___x_267_; 
v_a_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_a_266_);
lean_dec_ref_known(v___x_265_, 1);
v___x_267_ = lean_string_validate_utf8(v_a_266_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec(v_a_266_);
v___x_268_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9);
v___x_269_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_268_);
v___y_229_ = v_a_252_;
v_received_230_ = v___x_269_;
goto v___jp_228_;
}
else
{
lean_object* v___x_270_; 
v___x_270_ = lean_string_from_utf8_unchecked(v_a_266_);
v___y_229_ = v_a_252_;
v_received_230_ = v___x_270_;
goto v___jp_228_;
}
}
else
{
lean_object* v___x_271_; 
lean_dec_ref_known(v___x_265_, 1);
v___x_271_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__10));
v___y_229_ = v_a_252_;
v_received_230_ = v___x_271_;
goto v___jp_228_;
}
}
}
}
}
else
{
v___y_249_ = v_a_252_;
goto v___jp_248_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___boxed(lean_object* v_context_290_, lean_object* v_d_291_, lean_object* v_a_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(v_context_290_, v_d_291_);
lean_dec_ref(v_context_290_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(lean_object* v_context_294_, lean_object* v_bytes_295_){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_295_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_299_; 
v_a_298_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_a_298_);
lean_dec_ref_known(v___x_297_, 1);
v___x_299_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3(v_context_294_, v_a_298_);
return v___x_299_;
}
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
v_a_300_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_297_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_297_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2___boxed(lean_object* v_context_308_, lean_object* v_bytes_309_, lean_object* v_a_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(v_context_308_, v_bytes_309_);
lean_dec_ref(v_bytes_309_);
lean_dec_ref(v_context_308_);
return v_res_311_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(uint8_t v_await_312_, uint64_t v_extra_313_){
_start:
{
uint64_t v___x_314_; uint64_t v___y_316_; 
v___x_314_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_await_312_ == 0)
{
uint64_t v___x_319_; 
v___x_319_ = 0ULL;
v___y_316_ = v___x_319_;
goto v___jp_315_;
}
else
{
uint64_t v___x_320_; 
v___x_320_ = 2ULL;
v___y_316_ = v___x_320_;
goto v___jp_315_;
}
v___jp_315_:
{
uint64_t v___x_317_; uint64_t v___x_318_; 
v___x_317_ = lean_uint64_lor(v___x_314_, v___y_316_);
v___x_318_ = lean_uint64_lor(v___x_317_, v_extra_313_);
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1___boxed(lean_object* v_await_321_, lean_object* v_extra_322_){
_start:
{
uint8_t v_await_boxed_323_; uint64_t v_extra_boxed_324_; uint64_t v_res_325_; lean_object* v_r_326_; 
v_await_boxed_323_ = lean_unbox(v_await_321_);
v_extra_boxed_324_ = lean_unbox_uint64(v_extra_322_);
lean_dec_ref(v_extra_322_);
v_res_325_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(v_await_boxed_323_, v_extra_boxed_324_);
v_r_326_ = lean_box_uint64(v_res_325_);
return v_r_326_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0(void){
_start:
{
uint64_t v___x_327_; uint8_t v___x_328_; uint64_t v___x_329_; 
v___x_327_ = 8ULL;
v___x_328_ = 0;
v___x_329_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__1(v___x_328_, v___x_327_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(lean_object* v_o_331_, lean_object* v_name_332_, lean_object* v_args_333_){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; uint64_t v___x_338_; lean_object* v___x_339_; 
v___x_335_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_336_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_336_, 0, v_o_331_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
lean_inc_ref(v_name_332_);
v___x_337_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_337_, 0, v_name_332_);
v___x_338_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__0);
v___x_339_ = l_Lasm_JS_Value_invokeRaw(v___x_336_, v___x_337_, v_args_333_, v___x_338_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v_a_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v_a_340_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_a_340_);
lean_dec_ref_known(v___x_339_, 1);
v___x_341_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___closed__1));
v___x_342_ = lean_string_append(v___x_341_, v_name_332_);
lean_dec_ref(v_name_332_);
v___x_343_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2(v___x_342_, v_a_340_);
lean_dec(v_a_340_);
lean_dec_ref(v___x_342_);
return v___x_343_;
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec_ref(v_name_332_);
v_a_344_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_339_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_339_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1___boxed(lean_object* v_o_352_, lean_object* v_name_353_, lean_object* v_args_354_, lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(v_o_352_, v_name_353_, v_args_354_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount(lean_object* v_self_358_, lean_object* v_eventName_359_, lean_object* v_listener_360_){
_start:
{
lean_object* v___x_362_; lean_object* v___y_364_; 
v___x_362_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_listenerCount___closed__0));
if (lean_obj_tag(v_eventName_359_) == 0)
{
lean_object* v_value_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
v_value_372_ = lean_ctor_get(v_eventName_359_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v_eventName_359_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v_eventName_359_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_value_372_);
lean_dec(v_eventName_359_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
lean_ctor_set_tag(v___x_374_, 4);
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_value_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
v___y_364_ = v___x_377_;
goto v___jp_363_;
}
}
}
else
{
lean_object* v_value_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_value_380_ = lean_ctor_get(v_eventName_359_, 0);
lean_inc(v_value_380_);
lean_dec_ref_known(v_eventName_359_, 1);
v___x_381_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_382_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_382_, 0, v_value_380_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
v___y_364_ = v___x_382_;
goto v___jp_363_;
}
v___jp_363_:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_365_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__0(v_listener_360_);
v___x_366_ = lean_unsigned_to_nat(2u);
v___x_367_ = lean_mk_empty_array_with_capacity(v___x_366_);
v___x_368_ = lean_array_push(v___x_367_, v___y_364_);
v___x_369_ = lean_array_push(v___x_368_, v___x_365_);
v___x_370_ = l_Lasm_JS_Web_Support_args(v___x_369_);
v___x_371_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1(v_self_358_, v___x_362_, v___x_370_);
return v___x_371_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_listenerCount___boxed(lean_object* v_self_383_, lean_object* v_eventName_384_, lean_object* v_listener_385_, lean_object* v_a_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lasm_JS_Node_EventEmitter_listenerCount(v_self_383_, v_eventName_384_, v_listener_385_);
lean_dec(v_listener_385_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off(lean_object* v_self_389_, lean_object* v_eventName_390_, lean_object* v_listener_391_){
_start:
{
lean_object* v___x_393_; lean_object* v___y_395_; 
v___x_393_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_off___closed__0));
if (lean_obj_tag(v_eventName_390_) == 0)
{
lean_object* v_value_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_427_; 
v_value_420_ = lean_ctor_get(v_eventName_390_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v_eventName_390_);
if (v_isSharedCheck_427_ == 0)
{
v___x_422_ = v_eventName_390_;
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_value_420_);
lean_dec(v_eventName_390_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_425_; 
if (v_isShared_423_ == 0)
{
lean_ctor_set_tag(v___x_422_, 4);
v___x_425_ = v___x_422_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_value_420_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
v___y_395_ = v___x_425_;
goto v___jp_394_;
}
}
}
else
{
lean_object* v_value_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v_value_428_ = lean_ctor_get(v_eventName_390_, 0);
lean_inc(v_value_428_);
lean_dec_ref_known(v_eventName_390_, 1);
v___x_429_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_430_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_430_, 0, v_value_428_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___y_395_ = v___x_430_;
goto v___jp_394_;
}
v___jp_394_:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_396_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_397_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_397_, 0, v_listener_391_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = lean_unsigned_to_nat(2u);
v___x_399_ = lean_mk_empty_array_with_capacity(v___x_398_);
v___x_400_ = lean_array_push(v___x_399_, v___y_395_);
v___x_401_ = lean_array_push(v___x_400_, v___x_397_);
v___x_402_ = l_Lasm_JS_Web_Support_args(v___x_401_);
v___x_403_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_389_, v___x_393_, v___x_402_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_off___boxed(lean_object* v_self_431_, lean_object* v_eventName_432_, lean_object* v_listener_433_, lean_object* v_a_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lasm_JS_Node_EventEmitter_off(v_self_431_, v_eventName_432_, v_listener_433_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on(lean_object* v_self_437_, lean_object* v_eventName_438_, lean_object* v_listener_439_){
_start:
{
lean_object* v___x_441_; lean_object* v___y_443_; 
v___x_441_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_on___closed__0));
if (lean_obj_tag(v_eventName_438_) == 0)
{
lean_object* v_value_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
v_value_468_ = lean_ctor_get(v_eventName_438_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v_eventName_438_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v_eventName_438_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_value_468_);
lean_dec(v_eventName_438_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
lean_ctor_set_tag(v___x_470_, 4);
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_value_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
v___y_443_ = v___x_473_;
goto v___jp_442_;
}
}
}
else
{
lean_object* v_value_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_value_476_ = lean_ctor_get(v_eventName_438_, 0);
lean_inc(v_value_476_);
lean_dec_ref_known(v_eventName_438_, 1);
v___x_477_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_478_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_478_, 0, v_value_476_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
v___y_443_ = v___x_478_;
goto v___jp_442_;
}
v___jp_442_:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_444_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_445_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_445_, 0, v_listener_439_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
v___x_446_ = lean_unsigned_to_nat(2u);
v___x_447_ = lean_mk_empty_array_with_capacity(v___x_446_);
v___x_448_ = lean_array_push(v___x_447_, v___y_443_);
v___x_449_ = lean_array_push(v___x_448_, v___x_445_);
v___x_450_ = l_Lasm_JS_Web_Support_args(v___x_449_);
v___x_451_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_437_, v___x_441_, v___x_450_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_object* v_a_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_459_; 
v_a_452_ = lean_ctor_get(v___x_451_, 0);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_459_ == 0)
{
v___x_454_ = v___x_451_;
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_a_452_);
lean_dec(v___x_451_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_457_; 
if (v_isShared_455_ == 0)
{
v___x_457_ = v___x_454_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_a_452_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
else
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
v_a_460_ = lean_ctor_get(v___x_451_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v___x_451_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_451_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_460_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_on___boxed(lean_object* v_self_479_, lean_object* v_eventName_480_, lean_object* v_listener_481_, lean_object* v_a_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Lasm_JS_Node_EventEmitter_on(v_self_479_, v_eventName_480_, v_listener_481_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once(lean_object* v_self_485_, lean_object* v_eventName_486_, lean_object* v_listener_487_){
_start:
{
lean_object* v___x_489_; lean_object* v___y_491_; 
v___x_489_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_once___closed__0));
if (lean_obj_tag(v_eventName_486_) == 0)
{
lean_object* v_value_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
v_value_516_ = lean_ctor_get(v_eventName_486_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v_eventName_486_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v_eventName_486_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_value_516_);
lean_dec(v_eventName_486_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
lean_ctor_set_tag(v___x_518_, 4);
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_value_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
v___y_491_ = v___x_521_;
goto v___jp_490_;
}
}
}
else
{
lean_object* v_value_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v_value_524_ = lean_ctor_get(v_eventName_486_, 0);
lean_inc(v_value_524_);
lean_dec_ref_known(v_eventName_486_, 1);
v___x_525_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_526_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_526_, 0, v_value_524_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___y_491_ = v___x_526_;
goto v___jp_490_;
}
v___jp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_492_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_493_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_493_, 0, v_listener_487_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = lean_unsigned_to_nat(2u);
v___x_495_ = lean_mk_empty_array_with_capacity(v___x_494_);
v___x_496_ = lean_array_push(v___x_495_, v___y_491_);
v___x_497_ = lean_array_push(v___x_496_, v___x_493_);
v___x_498_ = l_Lasm_JS_Web_Support_args(v___x_497_);
v___x_499_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_485_, v___x_489_, v___x_498_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
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
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_500_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
v_a_508_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_515_ == 0)
{
v___x_510_ = v___x_499_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_499_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_once___boxed(lean_object* v_self_527_, lean_object* v_eventName_528_, lean_object* v_listener_529_, lean_object* v_a_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lasm_JS_Node_EventEmitter_once(v_self_527_, v_eventName_528_, v_listener_529_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(lean_object* v_x_532_){
_start:
{
if (lean_obj_tag(v_x_532_) == 0)
{
lean_object* v___x_533_; 
v___x_533_ = lean_box(0);
return v___x_533_;
}
else
{
lean_object* v_val_534_; 
v_val_534_ = lean_ctor_get(v_x_532_, 0);
lean_inc(v_val_534_);
lean_dec_ref_known(v_x_532_, 1);
if (lean_obj_tag(v_val_534_) == 0)
{
lean_object* v_value_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
v_value_535_ = lean_ctor_get(v_val_534_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v_val_534_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v_val_534_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_value_535_);
lean_dec(v_val_534_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
lean_ctor_set_tag(v___x_537_, 4);
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_value_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
else
{
lean_object* v_value_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v_value_543_ = lean_ctor_get(v_val_534_, 0);
lean_inc(v_value_543_);
lean_dec_ref_known(v_val_534_, 1);
v___x_544_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_545_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_545_, 0, v_value_543_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
return v___x_545_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners(lean_object* v_self_547_, lean_object* v_eventName_548_){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_550_ = ((lean_object*)(l_Lasm_JS_Node_EventEmitter_removeAllListeners___closed__0));
v___x_551_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_EventEmitter_removeAllListeners_spec__0(v_eventName_548_);
v___x_552_ = lean_unsigned_to_nat(1u);
v___x_553_ = lean_mk_empty_array_with_capacity(v___x_552_);
v___x_554_ = lean_array_push(v___x_553_, v___x_551_);
v___x_555_ = l_Lasm_JS_Web_Support_args(v___x_554_);
v___x_556_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_547_, v___x_550_, v___x_555_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
v_a_557_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_556_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_556_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
v_a_565_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_556_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_556_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_removeAllListeners___boxed(lean_object* v_self_573_, lean_object* v_eventName_574_, lean_object* v_a_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lasm_JS_Node_EventEmitter_removeAllListeners(v_self_573_, v_eventName_574_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(lean_object* v___f_577_, lean_object* v_bytes_578_){
_start:
{
lean_object* v___x_580_; uint8_t v___x_581_; lean_object* v_val_583_; lean_object* v___x_586_; 
v___x_580_ = lean_unsigned_to_nat(0u);
v___x_581_ = 0;
v___x_586_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_578_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_586_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
lean_ctor_set_tag(v___x_589_, 1);
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
v_val_583_ = v___x_592_;
goto v___jp_582_;
}
}
}
else
{
lean_object* v_a_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_602_; 
v_a_595_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_602_ == 0)
{
v___x_597_ = v___x_586_;
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_dec(v___x_586_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_600_; 
if (v_isShared_598_ == 0)
{
lean_ctor_set_tag(v___x_597_, 0);
v___x_600_ = v___x_597_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_a_595_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
v_val_583_ = v___x_600_;
goto v___jp_582_;
}
}
}
v___jp_582_:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v_val_583_);
v___x_585_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_580_, v___x_581_, v___x_584_, v___f_577_);
return v___x_585_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed(lean_object* v___f_603_, lean_object* v_bytes_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1(v___f_603_, v_bytes_604_);
lean_dec_ref(v_bytes_604_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(lean_object* v___f_607_, lean_object* v_x_608_){
_start:
{
if (lean_obj_tag(v_x_608_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_618_; 
lean_dec_ref(v___f_607_);
v_a_610_ = lean_ctor_get(v_x_608_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v_x_608_);
if (v_isSharedCheck_618_ == 0)
{
v___x_612_ = v_x_608_;
v_isShared_613_ = v_isSharedCheck_618_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v_x_608_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_618_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_617_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
lean_object* v___x_616_; 
v___x_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
return v___x_616_;
}
}
}
else
{
lean_object* v_a_619_; lean_object* v___x_620_; 
v_a_619_ = lean_ctor_get(v_x_608_, 0);
lean_inc(v_a_619_);
lean_dec_ref_known(v_x_608_, 1);
v___x_620_ = lean_apply_2(v___f_607_, v_a_619_, lean_box(0));
return v___x_620_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed(lean_object* v___f_621_, lean_object* v_x_622_, lean_object* v___y_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2(v___f_621_, v_x_622_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(lean_object* v_failurePrefix_625_, lean_object* v_x_626_){
_start:
{
if (lean_obj_tag(v_x_626_) == 0)
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_639_; 
v_a_628_ = lean_ctor_get(v_x_626_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v_x_626_);
if (v_isSharedCheck_639_ == 0)
{
v___x_630_ = v_x_626_;
v_isShared_631_ = v_isSharedCheck_639_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v_x_626_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_639_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_632_ = lean_io_error_to_string(v_a_628_);
v___x_633_ = lean_string_append(v_failurePrefix_625_, v___x_632_);
lean_dec_ref(v___x_632_);
v___x_634_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 0, v___x_634_);
v___x_636_ = v___x_630_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_634_);
v___x_636_ = v_reuseFailAlloc_638_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_637_; 
v___x_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
return v___x_637_;
}
}
}
else
{
lean_object* v___x_640_; 
lean_dec_ref(v_failurePrefix_625_);
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v_x_626_);
return v___x_640_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed(lean_object* v_failurePrefix_641_, lean_object* v_x_642_, lean_object* v___y_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4(v_failurePrefix_641_, v_x_642_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(lean_object* v_a_645_, lean_object* v_x_646_){
_start:
{
if (lean_obj_tag(v_x_646_) == 0)
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_656_; 
v_a_648_ = lean_ctor_get(v_x_646_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v_x_646_);
if (v_isSharedCheck_656_ == 0)
{
v___x_650_ = v_x_646_;
v_isShared_651_ = v_isSharedCheck_656_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v_x_646_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_656_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_a_648_);
v___x_653_ = v_reuseFailAlloc_655_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
lean_object* v___x_654_; 
v___x_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
return v___x_654_;
}
}
}
else
{
lean_object* v___x_657_; 
lean_dec_ref_known(v_x_646_, 1);
v___x_657_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_645_);
return v___x_657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed(lean_object* v_a_658_, lean_object* v_x_659_, lean_object* v___y_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3(v_a_658_, v_x_659_);
lean_dec(v_a_658_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(lean_object* v___x_662_, uint8_t v___x_663_, lean_object* v___f_664_, lean_object* v_a_665_, uint32_t v_op_666_, uint64_t v_flags_667_, lean_object* v_payload_668_, lean_object* v_x_669_){
_start:
{
lean_object* v_val_672_; 
if (lean_obj_tag(v_x_669_) == 0)
{
lean_object* v___x_675_; 
lean_dec_ref(v___f_664_);
lean_dec(v___x_662_);
v___x_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_675_, 0, v_x_669_);
return v___x_675_;
}
else
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_690_; 
v_a_676_ = lean_ctor_get(v_x_669_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v_x_669_);
if (v_isSharedCheck_690_ == 0)
{
v___x_678_ = v_x_669_;
v_isShared_679_ = v_isSharedCheck_690_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v_x_669_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_690_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
uint32_t v___x_680_; lean_object* v___x_681_; 
v___x_680_ = 0;
v___x_681_ = lasm_js_call_into(v_a_665_, v_op_666_, v___x_680_, v_flags_667_, v_a_676_, v_payload_668_);
lean_dec(v_a_676_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_object* v_a_682_; lean_object* v___x_684_; 
v_a_682_ = lean_ctor_get(v___x_681_, 0);
lean_inc(v_a_682_);
lean_dec_ref_known(v___x_681_, 1);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v_a_682_);
v___x_684_ = v___x_678_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
v_val_672_ = v___x_684_;
goto v___jp_671_;
}
}
else
{
lean_object* v_a_686_; lean_object* v___x_688_; 
v_a_686_ = lean_ctor_get(v___x_681_, 0);
lean_inc(v_a_686_);
lean_dec_ref_known(v___x_681_, 1);
if (v_isShared_679_ == 0)
{
lean_ctor_set_tag(v___x_678_, 0);
lean_ctor_set(v___x_678_, 0, v_a_686_);
v___x_688_ = v___x_678_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_686_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
v_val_672_ = v___x_688_;
goto v___jp_671_;
}
}
}
}
v___jp_671_:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v_val_672_);
v___x_674_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_662_, v___x_663_, v___x_673_, v___f_664_);
return v___x_674_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed(lean_object* v___x_691_, lean_object* v___x_692_, lean_object* v___f_693_, lean_object* v_a_694_, lean_object* v_op_695_, lean_object* v_flags_696_, lean_object* v_payload_697_, lean_object* v_x_698_, lean_object* v___y_699_){
_start:
{
uint8_t v___x_1391__boxed_700_; uint32_t v_op_boxed_701_; uint64_t v_flags_boxed_702_; lean_object* v_res_703_; 
v___x_1391__boxed_700_ = lean_unbox(v___x_692_);
v_op_boxed_701_ = lean_unbox_uint32(v_op_695_);
lean_dec(v_op_695_);
v_flags_boxed_702_ = lean_unbox_uint64(v_flags_696_);
lean_dec_ref(v_flags_696_);
v_res_703_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5(v___x_691_, v___x_1391__boxed_700_, v___f_693_, v_a_694_, v_op_boxed_701_, v_flags_boxed_702_, v_payload_697_, v_x_698_);
lean_dec(v_payload_697_);
lean_dec(v_a_694_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(lean_object* v___f_704_, lean_object* v_a_705_, uint32_t v_op_706_, uint64_t v_flags_707_, lean_object* v_payload_708_, lean_object* v_x_709_){
_start:
{
if (lean_obj_tag(v_x_709_) == 0)
{
lean_object* v___x_711_; 
lean_dec_ref(v___f_704_);
v___x_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_711_, 0, v_x_709_);
return v___x_711_;
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_732_; 
v_a_712_ = lean_ctor_get(v_x_709_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v_x_709_);
if (v_isSharedCheck_732_ == 0)
{
v___x_714_ = v_x_709_;
v_isShared_715_ = v_isSharedCheck_732_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v_x_709_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_732_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
uint32_t v___x_716_; lean_object* v___x_717_; uint8_t v___x_718_; lean_object* v_val_720_; lean_object* v___x_723_; 
v___x_716_ = 0;
v___x_717_ = lean_unsigned_to_nat(0u);
v___x_718_ = 0;
v___x_723_ = lasm_js_call_into(v_a_705_, v_op_706_, v___x_716_, v_flags_707_, v_a_712_, v_payload_708_);
lean_dec(v_a_712_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_726_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref_known(v___x_723_, 1);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v_a_724_);
v___x_726_ = v___x_714_;
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
v_reusejp_725_:
{
v_val_720_ = v___x_726_;
goto v___jp_719_;
}
}
else
{
lean_object* v_a_728_; lean_object* v___x_730_; 
v_a_728_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_728_);
lean_dec_ref_known(v___x_723_, 1);
if (v_isShared_715_ == 0)
{
lean_ctor_set_tag(v___x_714_, 0);
lean_ctor_set(v___x_714_, 0, v_a_728_);
v___x_730_ = v___x_714_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_728_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
v_val_720_ = v___x_730_;
goto v___jp_719_;
}
}
v___jp_719_:
{
lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_721_, 0, v_val_720_);
v___x_722_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_717_, v___x_718_, v___x_721_, v___f_704_);
return v___x_722_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed(lean_object* v___f_733_, lean_object* v_a_734_, lean_object* v_op_735_, lean_object* v_flags_736_, lean_object* v_payload_737_, lean_object* v_x_738_, lean_object* v___y_739_){
_start:
{
uint32_t v_op_boxed_740_; uint64_t v_flags_boxed_741_; lean_object* v_res_742_; 
v_op_boxed_740_ = lean_unbox_uint32(v_op_735_);
lean_dec(v_op_735_);
v_flags_boxed_741_ = lean_unbox_uint64(v_flags_736_);
lean_dec_ref(v_flags_736_);
v_res_742_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7(v___f_733_, v_a_734_, v_op_boxed_740_, v_flags_boxed_741_, v_payload_737_, v_x_738_);
lean_dec(v_payload_737_);
lean_dec(v_a_734_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(lean_object* v_failurePrefix_743_, uint32_t v_op_744_, uint64_t v_flags_745_, lean_object* v_payload_746_, lean_object* v___f_747_, lean_object* v___f_748_, lean_object* v___f_749_, lean_object* v_x_750_){
_start:
{
if (lean_obj_tag(v_x_750_) == 0)
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_760_; 
lean_dec_ref(v___f_749_);
lean_dec_ref(v___f_748_);
lean_dec_ref(v___f_747_);
lean_dec(v_payload_746_);
v_a_752_ = lean_ctor_get(v_x_750_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v_x_750_);
if (v_isSharedCheck_760_ == 0)
{
v___x_754_ = v_x_750_;
v_isShared_755_ = v_isSharedCheck_760_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v_x_750_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_760_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_759_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
lean_object* v___x_758_; 
v___x_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
return v___x_758_;
}
}
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_807_; 
v_a_761_ = lean_ctor_get(v_x_750_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v_x_750_);
if (v_isSharedCheck_807_ == 0)
{
v___x_763_ = v_x_750_;
v_isShared_764_ = v_isSharedCheck_807_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v_x_750_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_807_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_765_; lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_765_ = lean_string_utf8_byte_size(v_failurePrefix_743_);
v___x_766_ = lean_unsigned_to_nat(0u);
v___x_767_ = lean_nat_dec_eq(v___x_765_, v___x_766_);
if (v___x_767_ == 0)
{
lean_object* v___f_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___f_772_; lean_object* v_val_774_; lean_object* v___x_779_; 
lean_dec_ref(v___f_749_);
lean_inc(v_a_761_);
v___f_768_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_768_, 0, v_a_761_);
v___x_769_ = lean_box(v___x_767_);
v___x_770_ = lean_box_uint32(v_op_744_);
v___x_771_ = lean_box_uint64(v_flags_745_);
lean_inc(v_payload_746_);
v___f_772_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_772_, 0, v___x_766_);
lean_closure_set(v___f_772_, 1, v___x_769_);
lean_closure_set(v___f_772_, 2, v___f_768_);
lean_closure_set(v___f_772_, 3, v_a_761_);
lean_closure_set(v___f_772_, 4, v___x_770_);
lean_closure_set(v___f_772_, 5, v___x_771_);
lean_closure_set(v___f_772_, 6, v_payload_746_);
v___x_779_ = l_Lasm_JS_Wire_encodeIO(v_payload_746_);
lean_dec(v_payload_746_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v___x_782_; 
v_a_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_780_);
lean_dec_ref_known(v___x_779_, 1);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 0, v_a_780_);
v___x_782_ = v___x_763_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_780_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
v_val_774_ = v___x_782_;
goto v___jp_773_;
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; 
v_a_784_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_784_);
lean_dec_ref_known(v___x_779_, 1);
if (v_isShared_764_ == 0)
{
lean_ctor_set_tag(v___x_763_, 0);
lean_ctor_set(v___x_763_, 0, v_a_784_);
v___x_786_ = v___x_763_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_784_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
v_val_774_ = v___x_786_;
goto v___jp_773_;
}
}
v___jp_773_:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_775_, 0, v_val_774_);
v___x_776_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_766_, v___x_767_, v___x_775_, v___f_772_);
v___x_777_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_766_, v___x_767_, v___x_776_, v___f_747_);
v___x_778_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_766_, v___x_767_, v___x_777_, v___f_748_);
return v___x_778_;
}
}
else
{
lean_object* v___f_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___f_791_; uint8_t v___x_792_; lean_object* v_val_794_; lean_object* v___x_798_; 
lean_dec_ref(v___f_748_);
lean_dec_ref(v___f_747_);
lean_inc(v_a_761_);
v___f_788_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_788_, 0, v_a_761_);
v___x_789_ = lean_box_uint32(v_op_744_);
v___x_790_ = lean_box_uint64(v_flags_745_);
lean_inc(v_payload_746_);
v___f_791_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_791_, 0, v___f_788_);
lean_closure_set(v___f_791_, 1, v_a_761_);
lean_closure_set(v___f_791_, 2, v___x_789_);
lean_closure_set(v___f_791_, 3, v___x_790_);
lean_closure_set(v___f_791_, 4, v_payload_746_);
v___x_792_ = 0;
v___x_798_ = l_Lasm_JS_Wire_encodeIO(v_payload_746_);
lean_dec(v_payload_746_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v_a_799_; lean_object* v___x_801_; 
v_a_799_ = lean_ctor_get(v___x_798_, 0);
lean_inc(v_a_799_);
lean_dec_ref_known(v___x_798_, 1);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 0, v_a_799_);
v___x_801_ = v___x_763_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_799_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
v_val_794_ = v___x_801_;
goto v___jp_793_;
}
}
else
{
lean_object* v_a_803_; lean_object* v___x_805_; 
v_a_803_ = lean_ctor_get(v___x_798_, 0);
lean_inc(v_a_803_);
lean_dec_ref_known(v___x_798_, 1);
if (v_isShared_764_ == 0)
{
lean_ctor_set_tag(v___x_763_, 0);
lean_ctor_set(v___x_763_, 0, v_a_803_);
v___x_805_ = v___x_763_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
v_val_794_ = v___x_805_;
goto v___jp_793_;
}
}
v___jp_793_:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_795_, 0, v_val_794_);
v___x_796_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_766_, v___x_792_, v___x_795_, v___f_791_);
v___x_797_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_766_, v___x_792_, v___x_796_, v___f_749_);
return v___x_797_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed(lean_object* v_failurePrefix_808_, lean_object* v_op_809_, lean_object* v_flags_810_, lean_object* v_payload_811_, lean_object* v___f_812_, lean_object* v___f_813_, lean_object* v___f_814_, lean_object* v_x_815_, lean_object* v___y_816_){
_start:
{
uint32_t v_op_boxed_817_; uint64_t v_flags_boxed_818_; lean_object* v_res_819_; 
v_op_boxed_817_ = lean_unbox_uint32(v_op_809_);
lean_dec(v_op_809_);
v_flags_boxed_818_ = lean_unbox_uint64(v_flags_810_);
lean_dec_ref(v_flags_810_);
v_res_819_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6(v_failurePrefix_808_, v_op_boxed_817_, v_flags_boxed_818_, v_payload_811_, v___f_812_, v___f_813_, v___f_814_, v_x_815_);
lean_dec_ref(v_failurePrefix_808_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(size_t v_sz_820_, size_t v_i_821_, lean_object* v_bs_822_){
_start:
{
uint8_t v___x_823_; 
v___x_823_ = lean_usize_dec_lt(v_i_821_, v_sz_820_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; 
v___x_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_824_, 0, v_bs_822_);
return v___x_824_;
}
else
{
lean_object* v_v_825_; lean_object* v___x_826_; lean_object* v_bs_x27_827_; size_t v___x_828_; size_t v___x_829_; lean_object* v___x_830_; 
v_v_825_ = lean_array_uget(v_bs_822_, v_i_821_);
v___x_826_ = lean_unsigned_to_nat(0u);
v_bs_x27_827_ = lean_array_uset(v_bs_822_, v_i_821_, v___x_826_);
v___x_828_ = ((size_t)1ULL);
v___x_829_ = lean_usize_add(v_i_821_, v___x_828_);
v___x_830_ = lean_array_uset(v_bs_x27_827_, v_i_821_, v_v_825_);
v_i_821_ = v___x_829_;
v_bs_822_ = v___x_830_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_832_, lean_object* v_i_833_, lean_object* v_bs_834_){
_start:
{
size_t v_sz_boxed_835_; size_t v_i_boxed_836_; lean_object* v_res_837_; 
v_sz_boxed_835_ = lean_unbox_usize(v_sz_832_);
lean_dec(v_sz_832_);
v_i_boxed_836_ = lean_unbox_usize(v_i_833_);
lean_dec(v_i_833_);
v_res_837_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_boxed_835_, v_i_boxed_836_, v_bs_834_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(lean_object* v_context_841_, lean_object* v_d_842_){
_start:
{
lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_851_; lean_object* v_received_852_; lean_object* v___y_871_; lean_object* v_a_874_; 
if (lean_obj_tag(v_d_842_) == 7)
{
lean_object* v_items_898_; size_t v_sz_899_; size_t v___x_900_; lean_object* v___x_901_; 
v_items_898_ = lean_ctor_get(v_d_842_, 0);
v_sz_899_ = lean_array_size(v_items_898_);
v___x_900_ = ((size_t)0ULL);
lean_inc_ref(v_items_898_);
v___x_901_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2_spec__3(v_sz_899_, v___x_900_, v_items_898_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; uint8_t v___x_906_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
v___x_903_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__1));
v___x_904_ = lean_string_utf8_byte_size(v_a_902_);
v___x_905_ = lean_unsigned_to_nat(0u);
v___x_906_ = lean_nat_dec_eq(v___x_904_, v___x_905_);
if (v___x_906_ == 0)
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_907_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2));
v___x_908_ = lean_string_append(v___x_907_, v_a_902_);
lean_dec(v_a_902_);
v___x_909_ = lean_string_append(v___x_903_, v___x_908_);
lean_dec_ref(v___x_908_);
v_a_874_ = v___x_909_;
goto v___jp_873_;
}
else
{
lean_dec(v_a_902_);
v_a_874_ = v___x_903_;
goto v___jp_873_;
}
}
else
{
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_910_; 
v_a_910_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_901_, 1);
v_a_874_ = v_a_910_;
goto v___jp_873_;
}
else
{
lean_object* v_a_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
lean_dec_ref_known(v_d_842_, 1);
v_a_911_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_901_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_901_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
lean_ctor_set_tag(v___x_913_, 0);
v___x_916_ = v___x_913_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_a_911_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
}
else
{
lean_object* v___x_919_; 
v___x_919_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v_a_874_ = v___x_919_;
goto v___jp_873_;
}
v___jp_844_:
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_847_ = lean_string_append(v___y_845_, v___y_846_);
lean_dec_ref(v___y_846_);
v___x_848_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
v___x_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
return v___x_849_;
}
v___jp_850_:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; uint8_t v___x_864_; 
v___x_853_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0));
v___x_854_ = lean_string_append(v___x_853_, v_context_841_);
v___x_855_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__1));
v___x_856_ = lean_string_append(v___x_854_, v___x_855_);
v___x_857_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__0));
v___x_858_ = lean_string_append(v___x_856_, v___x_857_);
v___x_859_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__3));
v___x_860_ = lean_string_append(v___x_858_, v___x_859_);
v___x_861_ = lean_string_append(v___x_860_, v_received_852_);
lean_dec_ref(v_received_852_);
v___x_862_ = lean_string_utf8_byte_size(v___y_851_);
v___x_863_ = lean_unsigned_to_nat(0u);
v___x_864_ = lean_nat_dec_eq(v___x_862_, v___x_863_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_865_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__4));
v___x_866_ = lean_string_append(v___x_865_, v___y_851_);
lean_dec_ref(v___y_851_);
v___x_867_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__5));
v___x_868_ = lean_string_append(v___x_866_, v___x_867_);
v___y_845_ = v___x_861_;
v___y_846_ = v___x_868_;
goto v___jp_844_;
}
else
{
lean_object* v___x_869_; 
lean_dec_ref(v___y_851_);
v___x_869_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___y_845_ = v___x_861_;
v___y_846_ = v___x_869_;
goto v___jp_844_;
}
}
v___jp_870_:
{
lean_object* v___x_872_; 
v___x_872_ = l_Lasm_JS_Data_describe(v_d_842_);
v___y_851_ = v___y_871_;
v_received_852_ = v___x_872_;
goto v___jp_850_;
}
v___jp_873_:
{
if (lean_obj_tag(v_d_842_) == 9)
{
lean_object* v_value_875_; lean_object* v_description_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v_value_875_ = lean_ctor_get(v_d_842_, 0);
v_description_876_ = lean_ctor_get(v_d_842_, 1);
v___x_877_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_878_ = lean_string_dec_eq(v_description_876_, v___x_877_);
if (v___x_878_ == 0)
{
v___y_871_ = v_a_874_;
goto v___jp_870_;
}
else
{
lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_895_; 
lean_inc(v_value_875_);
v_isSharedCheck_895_ = !lean_is_exclusive(v_d_842_);
if (v_isSharedCheck_895_ == 0)
{
lean_object* v_unused_896_; lean_object* v_unused_897_; 
v_unused_896_ = lean_ctor_get(v_d_842_, 1);
lean_dec(v_unused_896_);
v_unused_897_ = lean_ctor_get(v_d_842_, 0);
lean_dec(v_unused_897_);
v___x_880_ = v_d_842_;
v_isShared_881_ = v_isSharedCheck_895_;
goto v_resetjp_879_;
}
else
{
lean_dec(v_d_842_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_895_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
uint32_t v___x_882_; uint64_t v___x_883_; lean_object* v___x_885_; 
v___x_882_ = 206;
v___x_883_ = 0ULL;
lean_inc(v_value_875_);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 1, v___x_877_);
v___x_885_ = v___x_880_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_value_875_);
lean_ctor_set(v_reuseFailAlloc_894_, 1, v___x_877_);
v___x_885_ = v_reuseFailAlloc_894_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
uint32_t v___x_886_; lean_object* v___x_887_; 
v___x_886_ = lasm_js_value_handle(v_value_875_);
lean_dec(v_value_875_);
v___x_887_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_882_, v___x_883_, v___x_885_, v___x_886_);
lean_dec_ref(v___x_885_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; uint8_t v___x_889_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
lean_dec_ref_known(v___x_887_, 1);
v___x_889_ = lean_string_validate_utf8(v_a_888_);
if (v___x_889_ == 0)
{
lean_object* v___x_890_; lean_object* v___x_891_; 
lean_dec(v_a_888_);
v___x_890_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__9);
v___x_891_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_890_);
v___y_851_ = v_a_874_;
v_received_852_ = v___x_891_;
goto v___jp_850_;
}
else
{
lean_object* v___x_892_; 
v___x_892_ = lean_string_from_utf8_unchecked(v_a_888_);
v___y_851_ = v_a_874_;
v_received_852_ = v___x_892_;
goto v___jp_850_;
}
}
else
{
lean_object* v___x_893_; 
lean_dec_ref_known(v___x_887_, 1);
v___x_893_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__10));
v___y_851_ = v_a_874_;
v_received_852_ = v___x_893_;
goto v___jp_850_;
}
}
}
}
}
else
{
v___y_871_ = v_a_874_;
goto v___jp_870_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___boxed(lean_object* v_context_920_, lean_object* v_d_921_, lean_object* v_a_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_920_, v_d_921_);
lean_dec_ref(v_context_920_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(lean_object* v_context_924_, lean_object* v_x_925_){
_start:
{
lean_object* v_val_928_; 
if (lean_obj_tag(v_x_925_) == 0)
{
lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_938_; 
v_a_930_ = lean_ctor_get(v_x_925_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v_x_925_);
if (v_isSharedCheck_938_ == 0)
{
v___x_932_ = v_x_925_;
v_isShared_933_ = v_isSharedCheck_938_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_dec(v_x_925_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_938_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_935_; 
if (v_isShared_933_ == 0)
{
v___x_935_ = v___x_932_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_930_);
v___x_935_ = v_reuseFailAlloc_937_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
lean_object* v___x_936_; 
v___x_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_936_, 0, v___x_935_);
return v___x_936_;
}
}
}
else
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_952_; 
v_a_939_ = lean_ctor_get(v_x_925_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v_x_925_);
if (v_isSharedCheck_952_ == 0)
{
v___x_941_ = v_x_925_;
v_isShared_942_ = v_isSharedCheck_952_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v_x_925_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_952_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; 
v___x_943_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2(v_context_924_, v_a_939_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_946_; 
v_a_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_a_944_);
lean_dec_ref_known(v___x_943_, 1);
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 0, v_a_944_);
v___x_946_ = v___x_941_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_944_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
v_val_928_ = v___x_946_;
goto v___jp_927_;
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; 
v_a_948_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_943_, 1);
if (v_isShared_942_ == 0)
{
lean_ctor_set_tag(v___x_941_, 0);
lean_ctor_set(v___x_941_, 0, v_a_948_);
v___x_950_ = v___x_941_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_948_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
v_val_928_ = v___x_950_;
goto v___jp_927_;
}
}
}
}
v___jp_927_:
{
lean_object* v___x_929_; 
v___x_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_929_, 0, v_val_928_);
return v___x_929_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed(lean_object* v_context_953_, lean_object* v_x_954_, lean_object* v___y_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0(v_context_953_, v_x_954_);
lean_dec_ref(v_context_953_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(lean_object* v___f_957_, lean_object* v_x_958_){
_start:
{
if (lean_obj_tag(v_x_958_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_968_; 
lean_dec_ref(v___f_957_);
v_a_960_ = lean_ctor_get(v_x_958_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v_x_958_);
if (v_isSharedCheck_968_ == 0)
{
v___x_962_ = v_x_958_;
v_isShared_963_ = v_isSharedCheck_968_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v_x_958_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_968_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_967_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_966_; 
v___x_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
return v___x_966_;
}
}
}
else
{
lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_980_; 
v_isSharedCheck_980_ = !lean_is_exclusive(v_x_958_);
if (v_isSharedCheck_980_ == 0)
{
lean_object* v_unused_981_; 
v_unused_981_ = lean_ctor_get(v_x_958_, 0);
lean_dec(v_unused_981_);
v___x_970_ = v_x_958_;
v_isShared_971_ = v_isSharedCheck_980_;
goto v_resetjp_969_;
}
else
{
lean_dec(v_x_958_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_980_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_972_; uint8_t v___x_973_; lean_object* v___x_974_; lean_object* v___x_976_; 
v___x_972_ = lean_unsigned_to_nat(0u);
v___x_973_ = 0;
v___x_974_ = lean_io_promise_new();
if (v_isShared_971_ == 0)
{
lean_ctor_set(v___x_970_, 0, v___x_974_);
v___x_976_ = v___x_970_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_974_);
v___x_976_ = v_reuseFailAlloc_979_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
v___x_978_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_972_, v___x_973_, v___x_977_, v___f_957_);
return v___x_978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed(lean_object* v___f_982_, lean_object* v_x_983_, lean_object* v___y_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8(v___f_982_, v_x_983_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(lean_object* v_context_986_, uint32_t v_op_987_, uint64_t v_flags_988_, lean_object* v_payload_989_, lean_object* v_failurePrefix_990_){
_start:
{
lean_object* v___f_992_; lean_object* v___f_993_; lean_object* v___f_994_; lean_object* v___f_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___f_998_; lean_object* v___f_999_; lean_object* v___x_1000_; uint8_t v___x_1001_; lean_object* v_val_1003_; lean_object* v___x_1006_; 
v___f_992_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_992_, 0, v_context_986_);
v___f_993_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_993_, 0, v___f_992_);
v___f_994_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_994_, 0, v___f_993_);
lean_inc_ref(v_failurePrefix_990_);
v___f_995_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_995_, 0, v_failurePrefix_990_);
v___x_996_ = lean_box_uint32(v_op_987_);
v___x_997_ = lean_box_uint64(v_flags_988_);
lean_inc_ref(v___f_994_);
v___f_998_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_998_, 0, v_failurePrefix_990_);
lean_closure_set(v___f_998_, 1, v___x_996_);
lean_closure_set(v___f_998_, 2, v___x_997_);
lean_closure_set(v___f_998_, 3, v_payload_989_);
lean_closure_set(v___f_998_, 4, v___f_995_);
lean_closure_set(v___f_998_, 5, v___f_994_);
lean_closure_set(v___f_998_, 6, v___f_994_);
v___f_999_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_999_, 0, v___f_998_);
v___x_1000_ = lean_unsigned_to_nat(0u);
v___x_1001_ = 0;
v___x_1006_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_1006_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1006_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
lean_ctor_set_tag(v___x_1009_, 1);
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
v_val_1003_ = v___x_1012_;
goto v___jp_1002_;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
v_a_1015_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_1006_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1006_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
lean_ctor_set_tag(v___x_1017_, 0);
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
v_val_1003_ = v___x_1020_;
goto v___jp_1002_;
}
}
}
v___jp_1002_:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1004_, 0, v_val_1003_);
v___x_1005_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1000_, v___x_1001_, v___x_1004_, v___f_999_);
return v___x_1005_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1___boxed(lean_object* v_context_1023_, lean_object* v_op_1024_, lean_object* v_flags_1025_, lean_object* v_payload_1026_, lean_object* v_failurePrefix_1027_, lean_object* v_a_1028_){
_start:
{
uint32_t v_op_boxed_1029_; uint64_t v_flags_boxed_1030_; lean_object* v_res_1031_; 
v_op_boxed_1029_ = lean_unbox_uint32(v_op_1024_);
lean_dec(v_op_1024_);
v_flags_boxed_1030_ = lean_unbox_uint64(v_flags_1025_);
lean_dec_ref(v_flags_1025_);
v_res_1031_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v_context_1023_, v_op_boxed_1029_, v_flags_boxed_1030_, v_payload_1026_, v_failurePrefix_1027_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(lean_object* v_b_1032_, lean_object* v_args_1033_){
_start:
{
uint8_t v_construct_1035_; lean_object* v___x_1036_; uint32_t v___x_1037_; uint64_t v___x_1038_; uint64_t v___y_1040_; 
v_construct_1035_ = lean_ctor_get_uint8(v_b_1032_, sizeof(void*)*4);
v___x_1036_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1032_);
v___x_1037_ = 214;
v___x_1038_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_eventNames_spec__0_spec__0___closed__0);
if (v_construct_1035_ == 0)
{
uint64_t v___x_1048_; 
v___x_1048_ = 0ULL;
v___y_1040_ = v___x_1048_;
goto v___jp_1039_;
}
else
{
uint64_t v___x_1049_; 
v___x_1049_ = 4ULL;
v___y_1040_ = v___x_1049_;
goto v___jp_1039_;
}
v___jp_1039_:
{
uint64_t v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1041_ = lean_uint64_lor(v___x_1038_, v___y_1040_);
v___x_1042_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1032_, v_args_1033_);
v___x_1043_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Node_EventEmitter_listenerCount_spec__1_spec__2_spec__3___closed__0));
v___x_1044_ = lean_string_append(v___x_1043_, v___x_1036_);
v___x_1045_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1_spec__2___closed__2));
v___x_1046_ = lean_string_append(v___x_1044_, v___x_1045_);
v___x_1047_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1_spec__1(v___x_1036_, v___x_1037_, v___x_1041_, v___x_1042_, v___x_1046_);
return v___x_1047_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1___boxed(lean_object* v_b_1050_, lean_object* v_args_1051_, lean_object* v_a_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v_b_1050_, v_args_1051_);
lean_dec_ref(v_b_1050_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(lean_object* v_x_1054_){
_start:
{
if (lean_obj_tag(v_x_1054_) == 0)
{
lean_object* v___x_1055_; 
v___x_1055_ = lean_box(0);
return v___x_1055_;
}
else
{
lean_object* v_val_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v_val_1056_ = lean_ctor_get(v_x_1054_, 0);
v___x_1057_ = ((lean_object*)(l_Lasm_JS_Node_instToJSOnceOptions___lam__0___closed__0));
v___x_1058_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_val_1056_);
v___x_1059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1057_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = lean_unsigned_to_nat(1u);
v___x_1061_ = lean_mk_empty_array_with_capacity(v___x_1060_);
v___x_1062_ = lean_array_push(v___x_1061_, v___x_1059_);
v___x_1063_ = l_Lasm_JS_Web_Support_fields(v___x_1062_);
lean_dec_ref(v___x_1062_);
return v___x_1063_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0___boxed(lean_object* v_x_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_x_1064_);
lean_dec(v_x_1064_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once(lean_object* v_emitter_1074_, lean_object* v_name_1075_, lean_object* v_options_1076_){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___y_1083_; 
v___x_1078_ = lean_unsigned_to_nat(3u);
v___x_1079_ = ((lean_object*)(l_Lasm_JS_Node_events_once___closed__2));
v___x_1080_ = ((lean_object*)(l_Lasm_JS_Node_instToJSEventEmitter___lam__0___closed__0));
v___x_1081_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1081_, 0, v_emitter_1074_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
if (lean_obj_tag(v_name_1075_) == 0)
{
lean_object* v_value_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
v_value_1091_ = lean_ctor_get(v_name_1075_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v_name_1075_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v_name_1075_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_value_1091_);
lean_dec(v_name_1075_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set_tag(v___x_1093_, 4);
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_value_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
v___y_1083_ = v___x_1096_;
goto v___jp_1082_;
}
}
}
else
{
lean_object* v_value_1099_; lean_object* v___x_1100_; 
v_value_1099_ = lean_ctor_get(v_name_1075_, 0);
lean_inc(v_value_1099_);
lean_dec_ref_known(v_name_1075_, 1);
v___x_1100_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1100_, 0, v_value_1099_);
lean_ctor_set(v___x_1100_, 1, v___x_1080_);
v___y_1083_ = v___x_1100_;
goto v___jp_1082_;
}
v___jp_1082_:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1084_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_once_spec__0(v_options_1076_);
v___x_1085_ = lean_mk_empty_array_with_capacity(v___x_1078_);
v___x_1086_ = lean_array_push(v___x_1085_, v___x_1081_);
v___x_1087_ = lean_array_push(v___x_1086_, v___y_1083_);
v___x_1088_ = lean_array_push(v___x_1087_, v___x_1084_);
v___x_1089_ = l_Lasm_JS_Web_Support_args(v___x_1088_);
v___x_1090_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Node_events_once_spec__1(v___x_1079_, v___x_1089_);
return v___x_1090_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_events_once___boxed(lean_object* v_emitter_1101_, lean_object* v_name_1102_, lean_object* v_options_1103_, lean_object* v_a_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Lasm_JS_Node_events_once(v_emitter_1101_, v_name_1102_, v_options_1103_);
lean_dec(v_options_1103_);
return v_res_1105_;
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
