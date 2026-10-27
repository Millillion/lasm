// Lean compiler output
// Module: Lasm.Web.Events
// Imports: public import Init public meta import Init public import Lasm.JS.Core public import Lasm.JS.Meta public import Lasm.Web.Types
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
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
lean_object* l_Lasm_JS_Value_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_Web_callback(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
extern lean_object* l_Lasm_JS_instFromJSBool;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
double lean_uint64_to_float(uint64_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Float_repr(double, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_instToJSListenerOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "capture"};
static const lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instToJSListenerOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_Web_instToJSListenerOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "passive"};
static const lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_instToJSListenerOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_Web_instToJSListenerOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "once"};
static const lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_Web_instToJSListenerOptions___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_Web_instToJSListenerOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instToJSListenerOptions___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSListenerOptions___closed__0 = (const lean_object*)&l_Lasm_Web_instToJSListenerOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSListenerOptions = (const lean_object*)&l_Lasm_Web_instToJSListenerOptions___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instInhabitedListenerOptions_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_instInhabitedListenerOptions_default___closed__0 = (const lean_object*)&l_Lasm_Web_instInhabitedListenerOptions_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedListenerOptions_default = (const lean_object*)&l_Lasm_Web_instInhabitedListenerOptions_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedListenerOptions = (const lean_object*)&l_Lasm_Web_instInhabitedListenerOptions_default___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.Listener"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_listen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "listen"};
static const lean_object* l_Lasm_Web_Raw_listen___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_listen___closed__0_value;
static const lean_string_object l_Lasm_Web_Raw_listen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:web"};
static const lean_object* l_Lasm_Web_Raw_listen___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value;
static const lean_ctor_object l_Lasm_Web_Raw_listen___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_listen___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__0_value),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_listen___closed__2 = (const lean_object*)&l_Lasm_Web_Raw_listen___closed__2_value;
static const lean_array_object l_Lasm_Web_Raw_listen___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_Raw_listen___closed__3 = (const lean_object*)&l_Lasm_Web_Raw_listen___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_listen(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_listen___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_unlisten___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "unlisten"};
static const lean_object* l_Lasm_Web_Raw_unlisten___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_unlisten___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_unlisten___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_unlisten___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_unlisten___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_unlisten___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_unlisten___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_unlisten(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_unlisten___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_dispatchEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "dispatchEvent"};
static const lean_object* l_Lasm_Web_Raw_dispatchEvent___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_dispatchEvent___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_dispatchEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_dispatchEvent___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_dispatchEvent___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_dispatchEvent___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_dispatchEvent___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_dispatchEvent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_dispatchEvent___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lasm.Web.Event"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_createEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "createEvent"};
static const lean_object* l_Lasm_Web_Raw_createEvent___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_createEvent___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_createEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_createEvent___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_createEvent___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_createEvent___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_createEvent___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createEvent(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_createCustomEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "createCustomEvent"};
static const lean_object* l_Lasm_Web_Raw_createCustomEvent___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_createCustomEvent___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_createCustomEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_createCustomEvent___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_createCustomEvent___closed__0_value),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_createCustomEvent___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_createCustomEvent___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createCustomEvent(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createCustomEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_eventInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eventInfo"};
static const lean_object* l_Lasm_Web_Raw_eventInfo___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_eventInfo___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_eventInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_eventInfo___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_eventInfo___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_eventInfo___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_eventInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_eventInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_eventInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_targetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "targetValue"};
static const lean_object* l_Lasm_Web_Raw_targetValue___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_targetValue___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_targetValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_targetValue___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_targetValue___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_targetValue___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_targetValue___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetValue(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetValue___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_targetChecked___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "targetChecked"};
static const lean_object* l_Lasm_Web_Raw_targetChecked___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_targetChecked___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_targetChecked___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_targetChecked___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_targetChecked___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_targetChecked___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_targetChecked___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetChecked(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetChecked___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "keyRepeat"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "altKey"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ctrlKey"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "metaKey"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "shiftKey"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "clientX"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "clientY"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pageX"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pageY"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "offsetX"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "offsetY"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "button"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "buttons"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "deltaX"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "deltaY"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "checked"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "timeStamp"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Web_instFromJSEventInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSEventInfo___closed__0;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.Web.EventInfo"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___closed__1_value;
static lean_once_cell_t l_Lasm_Web_instFromJSEventInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSEventInfo___closed__2;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo;
static lean_once_cell_t l_Lasm_Web_instInhabitedEventInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_Web_instInhabitedEventInfo_default___closed__0;
static lean_once_cell_t l_Lasm_Web_instInhabitedEventInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instInhabitedEventInfo_default___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instInhabitedEventInfo_default;
LEAN_EXPORT lean_object* l_Lasm_Web_instInhabitedEventInfo;
static const lean_string_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__2_value;
static const lean_string_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__2_value),((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6;
static const lean_string_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__7 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__7_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__12 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__14 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__16 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__16_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__18 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__18_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__19 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__19_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__21 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__21_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__22 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__22_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__23 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__23_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__25 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__25_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__26 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__26_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__27 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__27_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__28 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__28_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__29 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__29_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__30 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__30_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__31 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__31_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__32 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__32_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__33 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__33_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__34 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__34_value;
static const lean_string_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__35 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__35_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__38 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__38_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__35_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__39 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__39_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_instReprEventInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instReprEventInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instReprEventInfo___closed__0 = (const lean_object*)&l_Lasm_Web_instReprEventInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instReprEventInfo = (const lean_object*)&l_Lasm_Web_instReprEventInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_EventTarget_addEventListener___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " event"};
static const lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_EventTarget_addEventListener___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_on(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_on___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_dispatchEvent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_dispatchEvent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Listener_remove(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Listener_remove___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_create(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_create___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_custom(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_custom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_info___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Event.info"};
static const lean_object* l_Lasm_Web_Event_info___closed__0 = (const lean_object*)&l_Lasm_Web_Event_info___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_info(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_info___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_type(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_type___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_key(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_key___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetValue(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetChecked(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetChecked___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Option (Lasm.Web.EventTarget)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_target___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* l_Lasm_Web_Event_target___closed__0 = (const lean_object*)&l_Lasm_Web_Event_target___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_target(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_target___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_currentTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "currentTarget"};
static const lean_object* l_Lasm_Web_Event_currentTarget___closed__0 = (const lean_object*)&l_Lasm_Web_Event_currentTarget___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_currentTarget(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_currentTarget___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Option (Lasm.Web.Element)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetElement(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetElement___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_preventDefault___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "preventDefault"};
static const lean_object* l_Lasm_Web_Event_preventDefault___closed__0 = (const lean_object*)&l_Lasm_Web_Event_preventDefault___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_preventDefault(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_preventDefault___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_stopPropagation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "stopPropagation"};
static const lean_object* l_Lasm_Web_Event_stopPropagation___closed__0 = (const lean_object*)&l_Lasm_Web_Event_stopPropagation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopPropagation(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopPropagation___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_stopImmediatePropagation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "stopImmediatePropagation"};
static const lean_object* l_Lasm_Web_Event_stopImmediatePropagation___closed__0 = (const lean_object*)&l_Lasm_Web_Event_stopImmediatePropagation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopImmediatePropagation(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopImmediatePropagation___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_defaultPrevented___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "defaultPrevented"};
static const lean_object* l_Lasm_Web_Event_defaultPrevented___closed__0 = (const lean_object*)&l_Lasm_Web_Event_defaultPrevented___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_defaultPrevented(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_defaultPrevented___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_detail___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "detail"};
static const lean_object* l_Lasm_Web_Event_detail___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_Event_detail___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0(lean_object* v_x_4_){
_start:
{
uint8_t v_capture_5_; uint8_t v_passive_6_; uint8_t v_once_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v_capture_5_ = lean_ctor_get_uint8(v_x_4_, 0);
v_passive_6_ = lean_ctor_get_uint8(v_x_4_, 1);
v_once_7_ = lean_ctor_get_uint8(v_x_4_, 2);
v___x_8_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__0));
v___x_9_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_9_, 0, v_capture_5_);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v___x_8_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
v___x_11_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__1));
v___x_12_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_12_, 0, v_passive_6_);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_11_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
v___x_14_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__2));
v___x_15_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_15_, 0, v_once_7_);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_14_);
lean_ctor_set(v___x_16_, 1, v___x_15_);
v___x_17_ = lean_unsigned_to_nat(3u);
v___x_18_ = lean_mk_empty_array_with_capacity(v___x_17_);
v___x_19_ = lean_array_push(v___x_18_, v___x_10_);
v___x_20_ = lean_array_push(v___x_19_, v___x_13_);
v___x_21_ = lean_array_push(v___x_20_, v___x_16_);
v___x_22_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0___boxed(lean_object* v_x_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_Web_instToJSListenerOptions___lam__0(v_x_23_);
lean_dec_ref(v_x_23_);
return v_res_24_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_39_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___x_40_ = lean_unsigned_to_nat(46u);
v___x_41_ = lean_unsigned_to_nat(193u);
v___x_42_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6));
v___x_43_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5));
v___x_44_ = l_mkPanicMessageWithDecl(v___x_43_, v___x_42_, v___x_41_, v___x_40_, v___x_39_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0(lean_object* v_context_46_, lean_object* v_d_47_){
_start:
{
lean_object* v_received_50_; 
if (lean_obj_tag(v_d_47_) == 9)
{
lean_object* v_value_64_; lean_object* v___x_65_; 
v_value_64_ = lean_ctor_get(v_d_47_, 0);
lean_inc(v_value_64_);
lean_dec_ref_known(v_d_47_, 2);
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v_value_64_);
return v___x_65_;
}
else
{
if (lean_obj_tag(v_d_47_) == 9)
{
lean_object* v_value_66_; lean_object* v_description_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v_value_66_ = lean_ctor_get(v_d_47_, 0);
v_description_67_ = lean_ctor_get(v_d_47_, 1);
v___x_68_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_69_ = lean_string_dec_eq(v_description_67_, v___x_68_);
if (v___x_69_ == 0)
{
goto v___jp_62_;
}
else
{
uint32_t v___x_70_; uint64_t v___x_71_; lean_object* v___x_72_; uint32_t v___x_73_; lean_object* v___x_74_; 
lean_inc_n(v_value_66_, 2);
lean_dec_ref_known(v_d_47_, 2);
v___x_70_ = 206;
v___x_71_ = 0ULL;
v___x_72_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_72_, 0, v_value_66_);
lean_ctor_set(v___x_72_, 1, v___x_68_);
v___x_73_ = lasm_js_value_handle(v_value_66_);
lean_dec(v_value_66_);
v___x_74_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_70_, v___x_71_, v___x_72_, v___x_73_);
if (lean_obj_tag(v___x_74_) == 0)
{
lean_object* v_a_75_; uint8_t v___x_76_; 
v_a_75_ = lean_ctor_get(v___x_74_, 0);
lean_inc(v_a_75_);
lean_dec_ref_known(v___x_74_, 1);
v___x_76_ = lean_string_validate_utf8(v_a_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; 
lean_dec(v_a_75_);
v___x_77_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8);
v___x_78_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_77_);
v_received_50_ = v___x_78_;
goto v___jp_49_;
}
else
{
lean_object* v___x_79_; 
v___x_79_ = lean_string_from_utf8_unchecked(v_a_75_);
v_received_50_ = v___x_79_;
goto v___jp_49_;
}
}
else
{
lean_object* v___x_80_; 
lean_dec_ref_known(v___x_74_, 1);
v___x_80_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9));
v_received_50_ = v___x_80_;
goto v___jp_49_;
}
}
}
else
{
goto v___jp_62_;
}
}
v___jp_49_:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_51_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_52_ = lean_string_append(v___x_51_, v_context_46_);
v___x_53_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_54_ = lean_string_append(v___x_52_, v___x_53_);
v___x_55_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_56_ = lean_string_append(v___x_54_, v___x_55_);
v___x_57_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3));
v___x_58_ = lean_string_append(v___x_56_, v___x_57_);
v___x_59_ = lean_string_append(v___x_58_, v_received_50_);
lean_dec_ref(v_received_50_);
v___x_60_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
v___x_61_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
return v___x_61_;
}
v___jp_62_:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lasm_JS_Data_describe(v_d_47_);
v_received_50_ = v___x_63_;
goto v___jp_49_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___boxed(lean_object* v_context_81_, lean_object* v_d_82_, lean_object* v_a_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0(v_context_81_, v_d_82_);
lean_dec_ref(v_context_81_);
return v_res_84_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1(void){
_start:
{
uint8_t v___x_86_; uint64_t v___x_87_; 
v___x_86_ = 1;
v___x_87_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0(lean_object* v_b_88_, lean_object* v_args_89_, uint8_t v_await_90_){
_start:
{
uint64_t v___y_93_; uint64_t v___y_94_; uint64_t v___x_129_; uint64_t v___y_131_; 
v___x_129_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
if (v_await_90_ == 0)
{
uint64_t v___x_136_; 
v___x_136_ = 0ULL;
v___y_131_ = v___x_136_;
goto v___jp_130_;
}
else
{
uint64_t v___x_137_; 
v___x_137_ = 2ULL;
v___y_131_ = v___x_137_;
goto v___jp_130_;
}
v___jp_92_:
{
uint64_t v_flags_95_; uint32_t v___x_96_; lean_object* v___x_97_; uint32_t v___x_98_; lean_object* v___x_99_; 
v_flags_95_ = lean_uint64_lor(v___y_93_, v___y_94_);
v___x_96_ = 214;
v___x_97_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_88_, v_args_89_);
v___x_98_ = 0;
v___x_99_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_96_, v_flags_95_, v___x_97_, v___x_98_);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_101_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
lean_inc(v_a_100_);
lean_dec_ref_known(v___x_99_, 1);
v___x_101_ = l_Lasm_JS_Wire_decode(v_a_100_);
lean_dec(v_a_100_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
lean_inc(v_a_102_);
lean_dec_ref_known(v___x_101_, 1);
v___x_103_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_88_);
v___x_104_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0(v___x_103_, v_a_102_);
lean_dec_ref(v___x_103_);
return v___x_104_;
}
else
{
lean_object* v_a_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_112_; 
v_a_105_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_112_ == 0)
{
v___x_107_ = v___x_101_;
v_isShared_108_ = v_isSharedCheck_112_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_a_105_);
lean_dec(v___x_101_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_112_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___x_110_; 
if (v_isShared_108_ == 0)
{
v___x_110_ = v___x_107_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v_a_105_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
}
else
{
lean_object* v_a_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_128_; 
v_a_113_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_128_ == 0)
{
v___x_115_ = v___x_99_;
v_isShared_116_ = v_isSharedCheck_128_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_a_113_);
lean_dec(v___x_99_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_128_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_117_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_118_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_88_);
v___x_119_ = lean_string_append(v___x_117_, v___x_118_);
lean_dec_ref(v___x_118_);
v___x_120_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_121_ = lean_string_append(v___x_119_, v___x_120_);
v___x_122_ = lean_io_error_to_string(v_a_113_);
v___x_123_ = lean_string_append(v___x_121_, v___x_122_);
lean_dec_ref(v___x_122_);
v___x_124_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 0, v___x_124_);
v___x_126_ = v___x_115_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_124_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
v___jp_130_:
{
uint8_t v_construct_132_; uint64_t v___x_133_; 
v_construct_132_ = lean_ctor_get_uint8(v_b_88_, sizeof(void*)*4);
v___x_133_ = lean_uint64_lor(v___x_129_, v___y_131_);
if (v_construct_132_ == 0)
{
uint64_t v___x_134_; 
v___x_134_ = 0ULL;
v___y_93_ = v___x_133_;
v___y_94_ = v___x_134_;
goto v___jp_92_;
}
else
{
uint64_t v___x_135_; 
v___x_135_ = 4ULL;
v___y_93_ = v___x_133_;
v___y_94_ = v___x_135_;
goto v___jp_92_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___boxed(lean_object* v_b_138_, lean_object* v_args_139_, lean_object* v_await_140_, lean_object* v_a_141_){
_start:
{
uint8_t v_await_boxed_142_; lean_object* v_res_143_; 
v_await_boxed_142_ = lean_unbox(v_await_140_);
v_res_143_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0(v_b_138_, v_args_139_, v_await_boxed_142_);
lean_dec_ref(v_b_138_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_listen(lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_){
_start:
{
lean_object* v___x_158_; uint8_t v_capture_159_; uint8_t v_passive_160_; uint8_t v_once_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; lean_object* v___x_187_; 
v___x_158_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__2));
v_capture_159_ = lean_ctor_get_uint8(v_a_156_, 0);
v_passive_160_ = lean_ctor_get_uint8(v_a_156_, 1);
v_once_161_ = lean_ctor_get_uint8(v_a_156_, 2);
v___x_162_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_163_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_163_, 0, v_a_153_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
v___x_164_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_165_ = lean_array_push(v___x_164_, v___x_163_);
v___x_166_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_166_, 0, v_a_154_);
v___x_167_ = lean_array_push(v___x_165_, v___x_166_);
v___x_168_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_168_, 0, v_a_155_);
lean_ctor_set(v___x_168_, 1, v___x_162_);
v___x_169_ = lean_array_push(v___x_167_, v___x_168_);
v___x_170_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__0));
v___x_171_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_171_, 0, v_capture_159_);
v___x_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_170_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
v___x_173_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__1));
v___x_174_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_174_, 0, v_passive_160_);
v___x_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_173_);
lean_ctor_set(v___x_175_, 1, v___x_174_);
v___x_176_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__2));
v___x_177_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_177_, 0, v_once_161_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v___x_179_ = lean_unsigned_to_nat(3u);
v___x_180_ = lean_mk_empty_array_with_capacity(v___x_179_);
v___x_181_ = lean_array_push(v___x_180_, v___x_172_);
v___x_182_ = lean_array_push(v___x_181_, v___x_175_);
v___x_183_ = lean_array_push(v___x_182_, v___x_178_);
v___x_184_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
v___x_185_ = lean_array_push(v___x_169_, v___x_184_);
v___x_186_ = 1;
v___x_187_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0(v___x_158_, v___x_185_, v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_listen___boxed(lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lasm_Web_Raw_listen(v_a_188_, v_a_189_, v_a_190_, v_a_191_);
lean_dec_ref(v_a_191_);
return v_res_193_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0(void){
_start:
{
uint8_t v___x_194_; uint64_t v___x_195_; 
v___x_194_ = 0;
v___x_195_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0(lean_object* v_b_196_, lean_object* v_args_197_, uint8_t v_await_198_){
_start:
{
uint64_t v___y_201_; uint64_t v___y_202_; uint64_t v___x_235_; uint64_t v___y_237_; 
v___x_235_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_198_ == 0)
{
uint64_t v___x_242_; 
v___x_242_ = 0ULL;
v___y_237_ = v___x_242_;
goto v___jp_236_;
}
else
{
uint64_t v___x_243_; 
v___x_243_ = 2ULL;
v___y_237_ = v___x_243_;
goto v___jp_236_;
}
v___jp_200_:
{
uint64_t v_flags_203_; uint32_t v___x_204_; lean_object* v___x_205_; uint32_t v___x_206_; lean_object* v___x_207_; 
v_flags_203_ = lean_uint64_lor(v___y_201_, v___y_202_);
v___x_204_ = 214;
v___x_205_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_196_, v_args_197_);
v___x_206_ = 0;
v___x_207_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_204_, v_flags_203_, v___x_205_, v___x_206_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v_a_208_; lean_object* v___x_209_; 
v_a_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc(v_a_208_);
lean_dec_ref_known(v___x_207_, 1);
v___x_209_ = l_Lasm_JS_Wire_decode(v_a_208_);
lean_dec(v_a_208_);
if (lean_obj_tag(v___x_209_) == 0)
{
lean_object* v___x_210_; 
lean_dec_ref_known(v___x_209_, 1);
v___x_210_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_210_;
}
else
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_218_; 
v_a_211_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_218_ == 0)
{
v___x_213_ = v___x_209_;
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_209_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_218_;
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
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_a_211_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_234_; 
v_a_219_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_234_ == 0)
{
v___x_221_ = v___x_207_;
v_isShared_222_ = v_isSharedCheck_234_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_207_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_234_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_232_; 
v___x_223_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_224_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_196_);
v___x_225_ = lean_string_append(v___x_223_, v___x_224_);
lean_dec_ref(v___x_224_);
v___x_226_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_227_ = lean_string_append(v___x_225_, v___x_226_);
v___x_228_ = lean_io_error_to_string(v_a_219_);
v___x_229_ = lean_string_append(v___x_227_, v___x_228_);
lean_dec_ref(v___x_228_);
v___x_230_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v___x_230_);
v___x_232_ = v___x_221_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v___x_230_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
v___jp_236_:
{
uint8_t v_construct_238_; uint64_t v___x_239_; 
v_construct_238_ = lean_ctor_get_uint8(v_b_196_, sizeof(void*)*4);
v___x_239_ = lean_uint64_lor(v___x_235_, v___y_237_);
if (v_construct_238_ == 0)
{
uint64_t v___x_240_; 
v___x_240_ = 0ULL;
v___y_201_ = v___x_239_;
v___y_202_ = v___x_240_;
goto v___jp_200_;
}
else
{
uint64_t v___x_241_; 
v___x_241_ = 4ULL;
v___y_201_ = v___x_239_;
v___y_202_ = v___x_241_;
goto v___jp_200_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___boxed(lean_object* v_b_244_, lean_object* v_args_245_, lean_object* v_await_246_, lean_object* v_a_247_){
_start:
{
uint8_t v_await_boxed_248_; lean_object* v_res_249_; 
v_await_boxed_248_ = lean_unbox(v_await_246_);
v_res_249_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0(v_b_244_, v_args_245_, v_await_boxed_248_);
lean_dec_ref(v_b_244_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_unlisten(lean_object* v_a_256_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; lean_object* v___x_264_; 
v___x_258_ = ((lean_object*)(l_Lasm_Web_Raw_unlisten___closed__1));
v___x_259_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_260_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_261_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_261_, 0, v_a_256_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = lean_array_push(v___x_259_, v___x_261_);
v___x_263_ = 1;
v___x_264_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0(v___x_258_, v___x_262_, v___x_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_unlisten___boxed(lean_object* v_a_265_, lean_object* v_a_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lasm_Web_Raw_unlisten(v_a_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(lean_object* v_context_269_, lean_object* v_d_270_){
_start:
{
lean_object* v_received_273_; 
if (lean_obj_tag(v_d_270_) == 2)
{
uint8_t v_b_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v_b_287_ = lean_ctor_get_uint8(v_d_270_, 0);
lean_dec_ref_known(v_d_270_, 0);
v___x_288_ = lean_box(v_b_287_);
v___x_289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
return v___x_289_;
}
else
{
if (lean_obj_tag(v_d_270_) == 9)
{
lean_object* v_value_290_; lean_object* v_description_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v_value_290_ = lean_ctor_get(v_d_270_, 0);
v_description_291_ = lean_ctor_get(v_d_270_, 1);
v___x_292_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_293_ = lean_string_dec_eq(v_description_291_, v___x_292_);
if (v___x_293_ == 0)
{
goto v___jp_285_;
}
else
{
uint32_t v___x_294_; uint64_t v___x_295_; lean_object* v___x_296_; uint32_t v___x_297_; lean_object* v___x_298_; 
lean_inc_n(v_value_290_, 2);
lean_dec_ref_known(v_d_270_, 2);
v___x_294_ = 206;
v___x_295_ = 0ULL;
v___x_296_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_296_, 0, v_value_290_);
lean_ctor_set(v___x_296_, 1, v___x_292_);
v___x_297_ = lasm_js_value_handle(v_value_290_);
lean_dec(v_value_290_);
v___x_298_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_294_, v___x_295_, v___x_296_, v___x_297_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v_a_299_; uint8_t v___x_300_; 
v_a_299_ = lean_ctor_get(v___x_298_, 0);
lean_inc(v_a_299_);
lean_dec_ref_known(v___x_298_, 1);
v___x_300_ = lean_string_validate_utf8(v_a_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; lean_object* v___x_302_; 
lean_dec(v_a_299_);
v___x_301_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8);
v___x_302_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_301_);
v_received_273_ = v___x_302_;
goto v___jp_272_;
}
else
{
lean_object* v___x_303_; 
v___x_303_ = lean_string_from_utf8_unchecked(v_a_299_);
v_received_273_ = v___x_303_;
goto v___jp_272_;
}
}
else
{
lean_object* v___x_304_; 
lean_dec_ref_known(v___x_298_, 1);
v___x_304_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9));
v_received_273_ = v___x_304_;
goto v___jp_272_;
}
}
}
else
{
goto v___jp_285_;
}
}
v___jp_272_:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_274_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_275_ = lean_string_append(v___x_274_, v_context_269_);
v___x_276_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_277_ = lean_string_append(v___x_275_, v___x_276_);
v___x_278_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0));
v___x_279_ = lean_string_append(v___x_277_, v___x_278_);
v___x_280_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3));
v___x_281_ = lean_string_append(v___x_279_, v___x_280_);
v___x_282_ = lean_string_append(v___x_281_, v_received_273_);
lean_dec_ref(v_received_273_);
v___x_283_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
v___x_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
return v___x_284_;
}
v___jp_285_:
{
lean_object* v___x_286_; 
v___x_286_ = l_Lasm_JS_Data_describe(v_d_270_);
v_received_273_ = v___x_286_;
goto v___jp_272_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___boxed(lean_object* v_context_305_, lean_object* v_d_306_, lean_object* v_a_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(v_context_305_, v_d_306_);
lean_dec_ref(v_context_305_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(lean_object* v_b_309_, lean_object* v_args_310_, uint8_t v_await_311_){
_start:
{
uint64_t v___y_314_; uint64_t v___y_315_; uint64_t v___x_350_; uint64_t v___y_352_; 
v___x_350_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_311_ == 0)
{
uint64_t v___x_357_; 
v___x_357_ = 0ULL;
v___y_352_ = v___x_357_;
goto v___jp_351_;
}
else
{
uint64_t v___x_358_; 
v___x_358_ = 2ULL;
v___y_352_ = v___x_358_;
goto v___jp_351_;
}
v___jp_313_:
{
uint64_t v_flags_316_; uint32_t v___x_317_; lean_object* v___x_318_; uint32_t v___x_319_; lean_object* v___x_320_; 
v_flags_316_ = lean_uint64_lor(v___y_314_, v___y_315_);
v___x_317_ = 214;
v___x_318_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_309_, v_args_310_);
v___x_319_ = 0;
v___x_320_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_317_, v_flags_316_, v___x_318_, v___x_319_);
if (lean_obj_tag(v___x_320_) == 0)
{
lean_object* v_a_321_; lean_object* v___x_322_; 
v_a_321_ = lean_ctor_get(v___x_320_, 0);
lean_inc(v_a_321_);
lean_dec_ref_known(v___x_320_, 1);
v___x_322_ = l_Lasm_JS_Wire_decode(v_a_321_);
lean_dec(v_a_321_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v_a_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v_a_323_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v___x_322_, 1);
v___x_324_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_309_);
v___x_325_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(v___x_324_, v_a_323_);
lean_dec_ref(v___x_324_);
return v___x_325_;
}
else
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
v_a_326_ = lean_ctor_get(v___x_322_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_322_);
if (v_isSharedCheck_333_ == 0)
{
v___x_328_ = v___x_322_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_322_);
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
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_349_; 
v_a_334_ = lean_ctor_get(v___x_320_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_320_);
if (v_isSharedCheck_349_ == 0)
{
v___x_336_ = v___x_320_;
v_isShared_337_ = v_isSharedCheck_349_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_320_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_349_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_347_; 
v___x_338_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_339_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_309_);
v___x_340_ = lean_string_append(v___x_338_, v___x_339_);
lean_dec_ref(v___x_339_);
v___x_341_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_342_ = lean_string_append(v___x_340_, v___x_341_);
v___x_343_ = lean_io_error_to_string(v_a_334_);
v___x_344_ = lean_string_append(v___x_342_, v___x_343_);
lean_dec_ref(v___x_343_);
v___x_345_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_345_);
v___x_347_ = v___x_336_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_345_);
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
v___jp_351_:
{
uint8_t v_construct_353_; uint64_t v___x_354_; 
v_construct_353_ = lean_ctor_get_uint8(v_b_309_, sizeof(void*)*4);
v___x_354_ = lean_uint64_lor(v___x_350_, v___y_352_);
if (v_construct_353_ == 0)
{
uint64_t v___x_355_; 
v___x_355_ = 0ULL;
v___y_314_ = v___x_354_;
v___y_315_ = v___x_355_;
goto v___jp_313_;
}
else
{
uint64_t v___x_356_; 
v___x_356_ = 4ULL;
v___y_314_ = v___x_354_;
v___y_315_ = v___x_356_;
goto v___jp_313_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0___boxed(lean_object* v_b_359_, lean_object* v_args_360_, lean_object* v_await_361_, lean_object* v_a_362_){
_start:
{
uint8_t v_await_boxed_363_; lean_object* v_res_364_; 
v_await_boxed_363_ = lean_unbox(v_await_361_);
v_res_364_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(v_b_359_, v_args_360_, v_await_boxed_363_);
lean_dec_ref(v_b_359_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_dispatchEvent(lean_object* v_a_371_, lean_object* v_a_372_){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; lean_object* v___x_382_; 
v___x_374_ = ((lean_object*)(l_Lasm_Web_Raw_dispatchEvent___closed__1));
v___x_375_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_376_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_377_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_377_, 0, v_a_371_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_array_push(v___x_375_, v___x_377_);
v___x_379_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_379_, 0, v_a_372_);
lean_ctor_set(v___x_379_, 1, v___x_376_);
v___x_380_ = lean_array_push(v___x_378_, v___x_379_);
v___x_381_ = 1;
v___x_382_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(v___x_374_, v___x_380_, v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_dispatchEvent___boxed(lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lasm_Web_Raw_dispatchEvent(v_a_383_, v_a_384_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(lean_object* v_context_388_, lean_object* v_d_389_){
_start:
{
lean_object* v_received_392_; 
if (lean_obj_tag(v_d_389_) == 9)
{
lean_object* v_value_406_; lean_object* v___x_407_; 
v_value_406_ = lean_ctor_get(v_d_389_, 0);
lean_inc(v_value_406_);
lean_dec_ref_known(v_d_389_, 2);
v___x_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_407_, 0, v_value_406_);
return v___x_407_;
}
else
{
if (lean_obj_tag(v_d_389_) == 9)
{
lean_object* v_value_408_; lean_object* v_description_409_; lean_object* v___x_410_; uint8_t v___x_411_; 
v_value_408_ = lean_ctor_get(v_d_389_, 0);
v_description_409_ = lean_ctor_get(v_d_389_, 1);
v___x_410_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_411_ = lean_string_dec_eq(v_description_409_, v___x_410_);
if (v___x_411_ == 0)
{
goto v___jp_404_;
}
else
{
uint32_t v___x_412_; uint64_t v___x_413_; lean_object* v___x_414_; uint32_t v___x_415_; lean_object* v___x_416_; 
lean_inc_n(v_value_408_, 2);
lean_dec_ref_known(v_d_389_, 2);
v___x_412_ = 206;
v___x_413_ = 0ULL;
v___x_414_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_414_, 0, v_value_408_);
lean_ctor_set(v___x_414_, 1, v___x_410_);
v___x_415_ = lasm_js_value_handle(v_value_408_);
lean_dec(v_value_408_);
v___x_416_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_412_, v___x_413_, v___x_414_, v___x_415_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_a_417_; uint8_t v___x_418_; 
v_a_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_a_417_);
lean_dec_ref_known(v___x_416_, 1);
v___x_418_ = lean_string_validate_utf8(v_a_417_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; lean_object* v___x_420_; 
lean_dec(v_a_417_);
v___x_419_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8);
v___x_420_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_419_);
v_received_392_ = v___x_420_;
goto v___jp_391_;
}
else
{
lean_object* v___x_421_; 
v___x_421_ = lean_string_from_utf8_unchecked(v_a_417_);
v_received_392_ = v___x_421_;
goto v___jp_391_;
}
}
else
{
lean_object* v___x_422_; 
lean_dec_ref_known(v___x_416_, 1);
v___x_422_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9));
v_received_392_ = v___x_422_;
goto v___jp_391_;
}
}
}
else
{
goto v___jp_404_;
}
}
v___jp_391_:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_393_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_394_ = lean_string_append(v___x_393_, v_context_388_);
v___x_395_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_396_ = lean_string_append(v___x_394_, v___x_395_);
v___x_397_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___closed__0));
v___x_398_ = lean_string_append(v___x_396_, v___x_397_);
v___x_399_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3));
v___x_400_ = lean_string_append(v___x_398_, v___x_399_);
v___x_401_ = lean_string_append(v___x_400_, v_received_392_);
lean_dec_ref(v_received_392_);
v___x_402_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
v___x_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
return v___x_403_;
}
v___jp_404_:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lasm_JS_Data_describe(v_d_389_);
v_received_392_ = v___x_405_;
goto v___jp_391_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___boxed(lean_object* v_context_423_, lean_object* v_d_424_, lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v_context_423_, v_d_424_);
lean_dec_ref(v_context_423_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(lean_object* v_b_427_, lean_object* v_args_428_, uint8_t v_await_429_){
_start:
{
uint64_t v___y_432_; uint64_t v___y_433_; uint64_t v___x_468_; uint64_t v___y_470_; 
v___x_468_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
if (v_await_429_ == 0)
{
uint64_t v___x_475_; 
v___x_475_ = 0ULL;
v___y_470_ = v___x_475_;
goto v___jp_469_;
}
else
{
uint64_t v___x_476_; 
v___x_476_ = 2ULL;
v___y_470_ = v___x_476_;
goto v___jp_469_;
}
v___jp_431_:
{
uint64_t v_flags_434_; uint32_t v___x_435_; lean_object* v___x_436_; uint32_t v___x_437_; lean_object* v___x_438_; 
v_flags_434_ = lean_uint64_lor(v___y_432_, v___y_433_);
v___x_435_ = 214;
v___x_436_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_427_, v_args_428_);
v___x_437_ = 0;
v___x_438_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_435_, v_flags_434_, v___x_436_, v___x_437_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_440_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_a_439_);
lean_dec_ref_known(v___x_438_, 1);
v___x_440_ = l_Lasm_JS_Wire_decode(v_a_439_);
lean_dec(v_a_439_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_a_441_);
lean_dec_ref_known(v___x_440_, 1);
v___x_442_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_427_);
v___x_443_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v___x_442_, v_a_441_);
lean_dec_ref(v___x_442_);
return v___x_443_;
}
else
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
v_a_444_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v___x_440_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_440_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_a_444_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
}
else
{
lean_object* v_a_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_467_; 
v_a_452_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_467_ == 0)
{
v___x_454_ = v___x_438_;
v_isShared_455_ = v_isSharedCheck_467_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_a_452_);
lean_dec(v___x_438_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_467_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_456_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_457_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_427_);
v___x_458_ = lean_string_append(v___x_456_, v___x_457_);
lean_dec_ref(v___x_457_);
v___x_459_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_460_ = lean_string_append(v___x_458_, v___x_459_);
v___x_461_ = lean_io_error_to_string(v_a_452_);
v___x_462_ = lean_string_append(v___x_460_, v___x_461_);
lean_dec_ref(v___x_461_);
v___x_463_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v___x_463_);
v___x_465_ = v___x_454_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_463_);
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
v___jp_469_:
{
uint8_t v_construct_471_; uint64_t v___x_472_; 
v_construct_471_ = lean_ctor_get_uint8(v_b_427_, sizeof(void*)*4);
v___x_472_ = lean_uint64_lor(v___x_468_, v___y_470_);
if (v_construct_471_ == 0)
{
uint64_t v___x_473_; 
v___x_473_ = 0ULL;
v___y_432_ = v___x_472_;
v___y_433_ = v___x_473_;
goto v___jp_431_;
}
else
{
uint64_t v___x_474_; 
v___x_474_ = 4ULL;
v___y_432_ = v___x_472_;
v___y_433_ = v___x_474_;
goto v___jp_431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0___boxed(lean_object* v_b_477_, lean_object* v_args_478_, lean_object* v_await_479_, lean_object* v_a_480_){
_start:
{
uint8_t v_await_boxed_481_; lean_object* v_res_482_; 
v_await_boxed_481_ = lean_unbox(v_await_479_);
v_res_482_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(v_b_477_, v_args_478_, v_await_boxed_481_);
lean_dec_ref(v_b_477_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createEvent(lean_object* v_a_489_, uint8_t v_a_490_, uint8_t v_a_491_){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; lean_object* v___x_502_; 
v___x_493_ = ((lean_object*)(l_Lasm_Web_Raw_createEvent___closed__1));
v___x_494_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_495_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_495_, 0, v_a_489_);
v___x_496_ = lean_array_push(v___x_494_, v___x_495_);
v___x_497_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_497_, 0, v_a_490_);
v___x_498_ = lean_array_push(v___x_496_, v___x_497_);
v___x_499_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_499_, 0, v_a_491_);
v___x_500_ = lean_array_push(v___x_498_, v___x_499_);
v___x_501_ = 1;
v___x_502_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(v___x_493_, v___x_500_, v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createEvent___boxed(lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_){
_start:
{
uint8_t v_a_741__boxed_507_; uint8_t v_a_742__boxed_508_; lean_object* v_res_509_; 
v_a_741__boxed_507_ = lean_unbox(v_a_504_);
v_a_742__boxed_508_ = lean_unbox(v_a_505_);
v_res_509_ = l_Lasm_Web_Raw_createEvent(v_a_503_, v_a_741__boxed_507_, v_a_742__boxed_508_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createCustomEvent(lean_object* v_a_516_, lean_object* v_a_517_, uint8_t v_a_518_, uint8_t v_a_519_){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; lean_object* v___x_531_; 
v___x_521_ = ((lean_object*)(l_Lasm_Web_Raw_createCustomEvent___closed__1));
v___x_522_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_523_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_523_, 0, v_a_516_);
v___x_524_ = lean_array_push(v___x_522_, v___x_523_);
v___x_525_ = lean_array_push(v___x_524_, v_a_517_);
v___x_526_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_526_, 0, v_a_518_);
v___x_527_ = lean_array_push(v___x_525_, v___x_526_);
v___x_528_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_528_, 0, v_a_519_);
v___x_529_ = lean_array_push(v___x_527_, v___x_528_);
v___x_530_ = 1;
v___x_531_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(v___x_521_, v___x_529_, v___x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createCustomEvent___boxed(lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_){
_start:
{
uint8_t v_a_233__boxed_537_; uint8_t v_a_234__boxed_538_; lean_object* v_res_539_; 
v_a_233__boxed_537_ = lean_unbox(v_a_534_);
v_a_234__boxed_538_ = lean_unbox(v_a_535_);
v_res_539_ = l_Lasm_Web_Raw_createCustomEvent(v_a_532_, v_a_533_, v_a_233__boxed_537_, v_a_234__boxed_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0(lean_object* v_b_540_, lean_object* v_args_541_, uint8_t v_await_542_){
_start:
{
uint64_t v___y_545_; uint64_t v___y_546_; uint64_t v___x_578_; uint64_t v___y_580_; 
v___x_578_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_542_ == 0)
{
uint64_t v___x_585_; 
v___x_585_ = 0ULL;
v___y_580_ = v___x_585_;
goto v___jp_579_;
}
else
{
uint64_t v___x_586_; 
v___x_586_ = 2ULL;
v___y_580_ = v___x_586_;
goto v___jp_579_;
}
v___jp_544_:
{
uint64_t v_flags_547_; uint32_t v___x_548_; lean_object* v___x_549_; uint32_t v___x_550_; lean_object* v___x_551_; 
v_flags_547_ = lean_uint64_lor(v___y_545_, v___y_546_);
v___x_548_ = 214;
v___x_549_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_540_, v_args_541_);
v___x_550_ = 0;
v___x_551_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_548_, v_flags_547_, v___x_549_, v___x_550_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_553_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_a_552_);
lean_dec_ref_known(v___x_551_, 1);
v___x_553_ = l_Lasm_JS_Wire_decode(v_a_552_);
lean_dec(v_a_552_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_553_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_553_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
else
{
return v___x_553_;
}
}
else
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_577_; 
v_a_562_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_577_ == 0)
{
v___x_564_ = v___x_551_;
v_isShared_565_ = v_isSharedCheck_577_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_551_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_577_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_575_; 
v___x_566_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_567_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_540_);
v___x_568_ = lean_string_append(v___x_566_, v___x_567_);
lean_dec_ref(v___x_567_);
v___x_569_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_570_ = lean_string_append(v___x_568_, v___x_569_);
v___x_571_ = lean_io_error_to_string(v_a_562_);
v___x_572_ = lean_string_append(v___x_570_, v___x_571_);
lean_dec_ref(v___x_571_);
v___x_573_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 0, v___x_573_);
v___x_575_ = v___x_564_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_573_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
v___jp_579_:
{
uint8_t v_construct_581_; uint64_t v___x_582_; 
v_construct_581_ = lean_ctor_get_uint8(v_b_540_, sizeof(void*)*4);
v___x_582_ = lean_uint64_lor(v___x_578_, v___y_580_);
if (v_construct_581_ == 0)
{
uint64_t v___x_583_; 
v___x_583_ = 0ULL;
v___y_545_ = v___x_582_;
v___y_546_ = v___x_583_;
goto v___jp_544_;
}
else
{
uint64_t v___x_584_; 
v___x_584_ = 4ULL;
v___y_545_ = v___x_582_;
v___y_546_ = v___x_584_;
goto v___jp_544_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0___boxed(lean_object* v_b_587_, lean_object* v_args_588_, lean_object* v_await_589_, lean_object* v_a_590_){
_start:
{
uint8_t v_await_boxed_591_; lean_object* v_res_592_; 
v_await_boxed_591_ = lean_unbox(v_await_589_);
v_res_592_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0(v_b_587_, v_args_588_, v_await_boxed_591_);
lean_dec_ref(v_b_587_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_eventInfo(lean_object* v_a_599_){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; uint8_t v___x_606_; lean_object* v___x_607_; 
v___x_601_ = ((lean_object*)(l_Lasm_Web_Raw_eventInfo___closed__1));
v___x_602_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_603_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_604_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_604_, 0, v_a_599_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
v___x_605_ = lean_array_push(v___x_602_, v___x_604_);
v___x_606_ = 1;
v___x_607_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0(v___x_601_, v___x_605_, v___x_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_eventInfo___boxed(lean_object* v_a_608_, lean_object* v_a_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lasm_Web_Raw_eventInfo(v_a_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg(lean_object* v_d_611_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_613_, 0, v_d_611_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg___boxed(lean_object* v_d_614_, lean_object* v_a_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg(v_d_614_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0(lean_object* v_context_617_, lean_object* v_d_618_){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_620_, 0, v_d_618_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___boxed(lean_object* v_context_621_, lean_object* v_d_622_, lean_object* v_a_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0(v_context_621_, v_d_622_);
lean_dec_ref(v_context_621_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(lean_object* v_context_626_, lean_object* v_d_627_){
_start:
{
lean_object* v_received_630_; 
if (lean_obj_tag(v_d_627_) == 4)
{
lean_object* v_s_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
v_s_644_ = lean_ctor_get(v_d_627_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v_d_627_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v_d_627_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_s_644_);
lean_dec(v_d_627_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
lean_ctor_set_tag(v___x_646_, 0);
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_s_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
else
{
if (lean_obj_tag(v_d_627_) == 9)
{
lean_object* v_value_652_; lean_object* v_description_653_; lean_object* v___x_654_; uint8_t v___x_655_; 
v_value_652_ = lean_ctor_get(v_d_627_, 0);
v_description_653_ = lean_ctor_get(v_d_627_, 1);
v___x_654_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_655_ = lean_string_dec_eq(v_description_653_, v___x_654_);
if (v___x_655_ == 0)
{
goto v___jp_642_;
}
else
{
uint32_t v___x_656_; uint64_t v___x_657_; lean_object* v___x_658_; uint32_t v___x_659_; lean_object* v___x_660_; 
lean_inc_n(v_value_652_, 2);
lean_dec_ref_known(v_d_627_, 2);
v___x_656_ = 206;
v___x_657_ = 0ULL;
v___x_658_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_658_, 0, v_value_652_);
lean_ctor_set(v___x_658_, 1, v___x_654_);
v___x_659_ = lasm_js_value_handle(v_value_652_);
lean_dec(v_value_652_);
v___x_660_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_656_, v___x_657_, v___x_658_, v___x_659_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; uint8_t v___x_662_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_661_);
lean_dec_ref_known(v___x_660_, 1);
v___x_662_ = lean_string_validate_utf8(v_a_661_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; lean_object* v___x_664_; 
lean_dec(v_a_661_);
v___x_663_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8);
v___x_664_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_663_);
v_received_630_ = v___x_664_;
goto v___jp_629_;
}
else
{
lean_object* v___x_665_; 
v___x_665_ = lean_string_from_utf8_unchecked(v_a_661_);
v_received_630_ = v___x_665_;
goto v___jp_629_;
}
}
else
{
lean_object* v___x_666_; 
lean_dec_ref_known(v___x_660_, 1);
v___x_666_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9));
v_received_630_ = v___x_666_;
goto v___jp_629_;
}
}
}
else
{
goto v___jp_642_;
}
}
v___jp_629_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_631_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_632_ = lean_string_append(v___x_631_, v_context_626_);
v___x_633_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_634_ = lean_string_append(v___x_632_, v___x_633_);
v___x_635_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0));
v___x_636_ = lean_string_append(v___x_634_, v___x_635_);
v___x_637_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3));
v___x_638_ = lean_string_append(v___x_636_, v___x_637_);
v___x_639_ = lean_string_append(v___x_638_, v_received_630_);
lean_dec_ref(v_received_630_);
v___x_640_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
v___x_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
return v___x_641_;
}
v___jp_642_:
{
lean_object* v___x_643_; 
v___x_643_ = l_Lasm_JS_Data_describe(v_d_627_);
v_received_630_ = v___x_643_;
goto v___jp_629_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___boxed(lean_object* v_context_667_, lean_object* v_d_668_, lean_object* v_a_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(v_context_667_, v_d_668_);
lean_dec_ref(v_context_667_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0(lean_object* v_b_671_, lean_object* v_args_672_, uint8_t v_await_673_){
_start:
{
uint64_t v___y_676_; uint64_t v___y_677_; uint64_t v___x_712_; uint64_t v___y_714_; 
v___x_712_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_673_ == 0)
{
uint64_t v___x_719_; 
v___x_719_ = 0ULL;
v___y_714_ = v___x_719_;
goto v___jp_713_;
}
else
{
uint64_t v___x_720_; 
v___x_720_ = 2ULL;
v___y_714_ = v___x_720_;
goto v___jp_713_;
}
v___jp_675_:
{
uint64_t v_flags_678_; uint32_t v___x_679_; lean_object* v___x_680_; uint32_t v___x_681_; lean_object* v___x_682_; 
v_flags_678_ = lean_uint64_lor(v___y_676_, v___y_677_);
v___x_679_ = 214;
v___x_680_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_671_, v_args_672_);
v___x_681_ = 0;
v___x_682_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_679_, v_flags_678_, v___x_680_, v___x_681_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v_a_683_; lean_object* v___x_684_; 
v_a_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_a_683_);
lean_dec_ref_known(v___x_682_, 1);
v___x_684_ = l_Lasm_JS_Wire_decode(v_a_683_);
lean_dec(v_a_683_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc(v_a_685_);
lean_dec_ref_known(v___x_684_, 1);
v___x_686_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_671_);
v___x_687_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(v___x_686_, v_a_685_);
lean_dec_ref(v___x_686_);
return v___x_687_;
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
v_a_688_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_684_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_684_);
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
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_711_; 
v_a_696_ = lean_ctor_get(v___x_682_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_711_ == 0)
{
v___x_698_ = v___x_682_;
v_isShared_699_ = v_isSharedCheck_711_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_682_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_711_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_709_; 
v___x_700_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_701_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_671_);
v___x_702_ = lean_string_append(v___x_700_, v___x_701_);
lean_dec_ref(v___x_701_);
v___x_703_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_704_ = lean_string_append(v___x_702_, v___x_703_);
v___x_705_ = lean_io_error_to_string(v_a_696_);
v___x_706_ = lean_string_append(v___x_704_, v___x_705_);
lean_dec_ref(v___x_705_);
v___x_707_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 0, v___x_707_);
v___x_709_ = v___x_698_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_707_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
v___jp_713_:
{
uint8_t v_construct_715_; uint64_t v___x_716_; 
v_construct_715_ = lean_ctor_get_uint8(v_b_671_, sizeof(void*)*4);
v___x_716_ = lean_uint64_lor(v___x_712_, v___y_714_);
if (v_construct_715_ == 0)
{
uint64_t v___x_717_; 
v___x_717_ = 0ULL;
v___y_676_ = v___x_716_;
v___y_677_ = v___x_717_;
goto v___jp_675_;
}
else
{
uint64_t v___x_718_; 
v___x_718_ = 4ULL;
v___y_676_ = v___x_716_;
v___y_677_ = v___x_718_;
goto v___jp_675_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0___boxed(lean_object* v_b_721_, lean_object* v_args_722_, lean_object* v_await_723_, lean_object* v_a_724_){
_start:
{
uint8_t v_await_boxed_725_; lean_object* v_res_726_; 
v_await_boxed_725_ = lean_unbox(v_await_723_);
v_res_726_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0(v_b_721_, v_args_722_, v_await_boxed_725_);
lean_dec_ref(v_b_721_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetValue(lean_object* v_a_733_){
_start:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; uint8_t v___x_740_; lean_object* v___x_741_; 
v___x_735_ = ((lean_object*)(l_Lasm_Web_Raw_targetValue___closed__1));
v___x_736_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_737_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_738_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_738_, 0, v_a_733_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
v___x_739_ = lean_array_push(v___x_736_, v___x_738_);
v___x_740_ = 1;
v___x_741_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0(v___x_735_, v___x_739_, v___x_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetValue___boxed(lean_object* v_a_742_, lean_object* v_a_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Lasm_Web_Raw_targetValue(v_a_742_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetChecked(lean_object* v_a_751_){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; uint8_t v___x_758_; lean_object* v___x_759_; 
v___x_753_ = ((lean_object*)(l_Lasm_Web_Raw_targetChecked___closed__1));
v___x_754_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_755_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_756_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_756_, 0, v_a_751_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = lean_array_push(v___x_754_, v___x_756_);
v___x_758_ = 1;
v___x_759_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(v___x_753_, v___x_757_, v___x_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetChecked___boxed(lean_object* v_a_760_, lean_object* v_a_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_Lasm_Web_Raw_targetChecked(v_a_760_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0(lean_object* v___x_784_, lean_object* v___x_785_, lean_object* v___x_786_, lean_object* v_d_787_){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0));
lean_inc_ref(v___x_784_);
v___x_789_ = l_Lasm_JS_readField___redArg(v___x_784_, v_d_787_, v___x_788_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_790_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_789_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_789_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
else
{
lean_object* v_a_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v_a_798_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_a_798_);
lean_dec_ref_known(v___x_789_, 1);
v___x_799_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1));
lean_inc_ref(v___x_784_);
v___x_800_ = l_Lasm_JS_readField___redArg(v___x_784_, v_d_787_, v___x_799_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_801_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_800_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_800_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_801_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
else
{
lean_object* v_a_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v_a_809_ = lean_ctor_get(v___x_800_, 0);
lean_inc(v_a_809_);
lean_dec_ref_known(v___x_800_, 1);
v___x_810_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2));
lean_inc_ref(v___x_784_);
v___x_811_ = l_Lasm_JS_readField___redArg(v___x_784_, v_d_787_, v___x_810_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_812_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_811_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_811_);
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
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_a_820_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_a_820_);
lean_dec_ref_known(v___x_811_, 1);
v___x_821_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3));
lean_inc_ref(v___x_785_);
v___x_822_ = l_Lasm_JS_readField___redArg(v___x_785_, v_d_787_, v___x_821_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_823_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_822_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_822_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
else
{
lean_object* v_a_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v_a_831_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_831_);
lean_dec_ref_known(v___x_822_, 1);
v___x_832_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4));
lean_inc_ref(v___x_785_);
v___x_833_ = l_Lasm_JS_readField___redArg(v___x_785_, v_d_787_, v___x_832_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_834_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_833_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_833_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
else
{
lean_object* v_a_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v_a_842_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_a_842_);
lean_dec_ref_known(v___x_833_, 1);
v___x_843_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5));
lean_inc_ref(v___x_785_);
v___x_844_ = l_Lasm_JS_readField___redArg(v___x_785_, v_d_787_, v___x_843_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_845_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_844_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_844_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v_a_853_ = lean_ctor_get(v___x_844_, 0);
lean_inc(v_a_853_);
lean_dec_ref_known(v___x_844_, 1);
v___x_854_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6));
lean_inc_ref(v___x_785_);
v___x_855_ = l_Lasm_JS_readField___redArg(v___x_785_, v_d_787_, v___x_854_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_856_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_855_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_855_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_a_864_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_855_, 1);
v___x_865_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7));
lean_inc_ref(v___x_785_);
v___x_866_ = l_Lasm_JS_readField___redArg(v___x_785_, v_d_787_, v___x_865_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_867_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_866_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_866_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
else
{
lean_object* v_a_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v_a_875_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_866_, 1);
v___x_876_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8));
lean_inc_ref(v___x_786_);
v___x_877_ = l_Lasm_JS_readField___redArg(v___x_786_, v_d_787_, v___x_876_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_878_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_885_ == 0)
{
v___x_880_ = v___x_877_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_877_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
else
{
lean_object* v_a_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v_a_886_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_877_, 1);
v___x_887_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9));
lean_inc_ref(v___x_786_);
v___x_888_ = l_Lasm_JS_readField___redArg(v___x_786_, v_d_787_, v___x_887_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_889_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_888_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_888_);
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
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v_a_897_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_888_, 1);
v___x_898_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10));
lean_inc_ref(v___x_786_);
v___x_899_ = l_Lasm_JS_readField___redArg(v___x_786_, v_d_787_, v___x_898_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_907_; 
lean_dec(v_a_897_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_900_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_907_ == 0)
{
v___x_902_ = v___x_899_;
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v___x_899_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_900_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
else
{
lean_object* v_a_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v_a_908_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_908_);
lean_dec_ref_known(v___x_899_, 1);
v___x_909_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11));
lean_inc_ref(v___x_786_);
v___x_910_ = l_Lasm_JS_readField___redArg(v___x_786_, v_d_787_, v___x_909_);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v_a_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
lean_dec(v_a_908_);
lean_dec(v_a_897_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_911_ = lean_ctor_get(v___x_910_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_910_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_910_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_910_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
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
else
{
lean_object* v_a_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_a_919_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_a_919_);
lean_dec_ref_known(v___x_910_, 1);
v___x_920_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12));
lean_inc_ref(v___x_786_);
v___x_921_ = l_Lasm_JS_readField___redArg(v___x_786_, v_d_787_, v___x_920_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
lean_dec(v_a_919_);
lean_dec(v_a_908_);
lean_dec(v_a_897_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_922_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_929_ == 0)
{
v___x_924_ = v___x_921_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_921_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
else
{
lean_object* v_a_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v_a_930_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_930_);
lean_dec_ref_known(v___x_921_, 1);
v___x_931_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13));
lean_inc_ref(v___x_786_);
v___x_932_ = l_Lasm_JS_readField___redArg(v___x_786_, v_d_787_, v___x_931_);
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
lean_dec(v_a_930_);
lean_dec(v_a_919_);
lean_dec(v_a_908_);
lean_dec(v_a_897_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_933_ = lean_ctor_get(v___x_932_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_932_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v___x_932_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_932_);
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
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v_a_941_ = lean_ctor_get(v___x_932_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_932_, 1);
v___x_942_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14));
lean_inc_ref(v___x_786_);
v___x_943_ = l_Lasm_JS_readField___redArg(v___x_786_, v_d_787_, v___x_942_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec(v_a_941_);
lean_dec(v_a_930_);
lean_dec(v_a_919_);
lean_dec(v_a_908_);
lean_dec(v_a_897_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_944_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_943_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_943_);
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
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
v_a_952_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_a_952_);
lean_dec_ref_known(v___x_943_, 1);
v___x_953_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15));
lean_inc_ref(v___x_786_);
v___x_954_ = l_Lasm_JS_readField___redArg(v___x_786_, v_d_787_, v___x_953_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
lean_dec(v_a_952_);
lean_dec(v_a_941_);
lean_dec(v_a_930_);
lean_dec(v_a_919_);
lean_dec(v_a_908_);
lean_dec(v_a_897_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_955_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_962_ == 0)
{
v___x_957_ = v___x_954_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_954_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
v___x_960_ = v___x_957_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_955_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
else
{
lean_object* v_a_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v_a_963_ = lean_ctor_get(v___x_954_, 0);
lean_inc(v_a_963_);
lean_dec_ref_known(v___x_954_, 1);
v___x_964_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16));
lean_inc_ref(v___x_786_);
v___x_965_ = l_Lasm_JS_readField___redArg(v___x_786_, v_d_787_, v___x_964_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
lean_dec(v_a_963_);
lean_dec(v_a_952_);
lean_dec(v_a_941_);
lean_dec(v_a_930_);
lean_dec(v_a_919_);
lean_dec(v_a_908_);
lean_dec(v_a_897_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_966_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_965_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
else
{
lean_object* v_a_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v_a_974_ = lean_ctor_get(v___x_965_, 0);
lean_inc(v_a_974_);
lean_dec_ref_known(v___x_965_, 1);
v___x_975_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17));
lean_inc_ref(v___x_786_);
v___x_976_ = l_Lasm_JS_readField___redArg(v___x_786_, v_d_787_, v___x_975_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
lean_dec(v_a_974_);
lean_dec(v_a_963_);
lean_dec(v_a_952_);
lean_dec(v_a_941_);
lean_dec(v_a_930_);
lean_dec(v_a_919_);
lean_dec(v_a_908_);
lean_dec(v_a_897_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
lean_dec_ref(v___x_784_);
v_a_977_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_976_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_976_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_a_977_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
else
{
lean_object* v_a_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v_a_985_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_976_, 1);
v___x_986_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18));
v___x_987_ = l_Lasm_JS_readField___redArg(v___x_784_, v_d_787_, v___x_986_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec(v_a_985_);
lean_dec(v_a_974_);
lean_dec(v_a_963_);
lean_dec(v_a_952_);
lean_dec(v_a_941_);
lean_dec(v_a_930_);
lean_dec(v_a_919_);
lean_dec(v_a_908_);
lean_dec(v_a_897_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v___x_785_);
v_a_988_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_987_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_987_);
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
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v_a_996_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_987_, 1);
v___x_997_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19));
v___x_998_ = l_Lasm_JS_readField___redArg(v___x_785_, v_d_787_, v___x_997_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
lean_dec(v_a_996_);
lean_dec(v_a_985_);
lean_dec(v_a_974_);
lean_dec(v_a_963_);
lean_dec(v_a_952_);
lean_dec(v_a_941_);
lean_dec(v_a_930_);
lean_dec(v_a_919_);
lean_dec(v_a_908_);
lean_dec(v_a_897_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
lean_dec_ref(v___x_786_);
v_a_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_998_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
else
{
lean_object* v_a_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v_a_1007_ = lean_ctor_get(v___x_998_, 0);
lean_inc(v_a_1007_);
lean_dec_ref_known(v___x_998_, 1);
v___x_1008_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20));
v___x_1009_ = l_Lasm_JS_readField___redArg(v___x_786_, v_d_787_, v___x_1008_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_dec(v_a_1007_);
lean_dec(v_a_996_);
lean_dec(v_a_985_);
lean_dec(v_a_974_);
lean_dec(v_a_963_);
lean_dec(v_a_952_);
lean_dec(v_a_941_);
lean_dec(v_a_930_);
lean_dec(v_a_919_);
lean_dec(v_a_908_);
lean_dec(v_a_897_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_864_);
lean_dec(v_a_853_);
lean_dec(v_a_842_);
lean_dec(v_a_831_);
lean_dec(v_a_820_);
lean_dec(v_a_809_);
lean_dec(v_a_798_);
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_1009_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_1009_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
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
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1043_; 
v_a_1018_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1020_ = v___x_1009_;
v_isShared_1021_ = v_isSharedCheck_1043_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_1009_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1043_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1022_; uint8_t v___x_1023_; uint8_t v___x_1024_; uint8_t v___x_1025_; uint8_t v___x_1026_; uint8_t v___x_1027_; double v___x_1028_; double v___x_1029_; double v___x_1030_; double v___x_1031_; double v___x_1032_; double v___x_1033_; double v___x_1034_; double v___x_1035_; double v___x_1036_; double v___x_1037_; uint8_t v___x_1038_; double v___x_1039_; lean_object* v___x_1041_; 
v___x_1022_ = lean_alloc_ctor(0, 4, 94);
lean_ctor_set(v___x_1022_, 0, v_a_798_);
lean_ctor_set(v___x_1022_, 1, v_a_809_);
lean_ctor_set(v___x_1022_, 2, v_a_820_);
lean_ctor_set(v___x_1022_, 3, v_a_996_);
v___x_1023_ = lean_unbox(v_a_831_);
lean_dec(v_a_831_);
lean_ctor_set_uint8(v___x_1022_, sizeof(void*)*4 + 88, v___x_1023_);
v___x_1024_ = lean_unbox(v_a_842_);
lean_dec(v_a_842_);
lean_ctor_set_uint8(v___x_1022_, sizeof(void*)*4 + 89, v___x_1024_);
v___x_1025_ = lean_unbox(v_a_853_);
lean_dec(v_a_853_);
lean_ctor_set_uint8(v___x_1022_, sizeof(void*)*4 + 90, v___x_1025_);
v___x_1026_ = lean_unbox(v_a_864_);
lean_dec(v_a_864_);
lean_ctor_set_uint8(v___x_1022_, sizeof(void*)*4 + 91, v___x_1026_);
v___x_1027_ = lean_unbox(v_a_875_);
lean_dec(v_a_875_);
lean_ctor_set_uint8(v___x_1022_, sizeof(void*)*4 + 92, v___x_1027_);
v___x_1028_ = lean_unbox_float(v_a_886_);
lean_dec(v_a_886_);
lean_ctor_set_float(v___x_1022_, sizeof(void*)*4, v___x_1028_);
v___x_1029_ = lean_unbox_float(v_a_897_);
lean_dec(v_a_897_);
lean_ctor_set_float(v___x_1022_, sizeof(void*)*4 + 8, v___x_1029_);
v___x_1030_ = lean_unbox_float(v_a_908_);
lean_dec(v_a_908_);
lean_ctor_set_float(v___x_1022_, sizeof(void*)*4 + 16, v___x_1030_);
v___x_1031_ = lean_unbox_float(v_a_919_);
lean_dec(v_a_919_);
lean_ctor_set_float(v___x_1022_, sizeof(void*)*4 + 24, v___x_1031_);
v___x_1032_ = lean_unbox_float(v_a_930_);
lean_dec(v_a_930_);
lean_ctor_set_float(v___x_1022_, sizeof(void*)*4 + 32, v___x_1032_);
v___x_1033_ = lean_unbox_float(v_a_941_);
lean_dec(v_a_941_);
lean_ctor_set_float(v___x_1022_, sizeof(void*)*4 + 40, v___x_1033_);
v___x_1034_ = lean_unbox_float(v_a_952_);
lean_dec(v_a_952_);
lean_ctor_set_float(v___x_1022_, sizeof(void*)*4 + 48, v___x_1034_);
v___x_1035_ = lean_unbox_float(v_a_963_);
lean_dec(v_a_963_);
lean_ctor_set_float(v___x_1022_, sizeof(void*)*4 + 56, v___x_1035_);
v___x_1036_ = lean_unbox_float(v_a_974_);
lean_dec(v_a_974_);
lean_ctor_set_float(v___x_1022_, sizeof(void*)*4 + 64, v___x_1036_);
v___x_1037_ = lean_unbox_float(v_a_985_);
lean_dec(v_a_985_);
lean_ctor_set_float(v___x_1022_, sizeof(void*)*4 + 72, v___x_1037_);
v___x_1038_ = lean_unbox(v_a_1007_);
lean_dec(v_a_1007_);
lean_ctor_set_uint8(v___x_1022_, sizeof(void*)*4 + 93, v___x_1038_);
v___x_1039_ = lean_unbox_float(v_a_1018_);
lean_dec(v_a_1018_);
lean_ctor_set_float(v___x_1022_, sizeof(void*)*4 + 80, v___x_1039_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 0, v___x_1022_);
v___x_1041_ = v___x_1020_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_1022_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___boxed(lean_object* v___x_1044_, lean_object* v___x_1045_, lean_object* v___x_1046_, lean_object* v_d_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lasm_Web_instFromJSEventInfo___lam__0(v___x_1044_, v___x_1045_, v___x_1046_, v_d_1047_);
lean_dec(v_d_1047_);
return v_res_1048_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEventInfo___closed__0(void){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___f_1052_; 
v___x_1049_ = l_Lasm_JS_instFromJSFloat;
v___x_1050_ = l_Lasm_JS_instFromJSBool;
v___x_1051_ = l_Lasm_JS_instFromJSString;
v___f_1052_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSEventInfo___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1052_, 0, v___x_1051_);
lean_closure_set(v___f_1052_, 1, v___x_1050_);
lean_closure_set(v___f_1052_, 2, v___x_1049_);
return v___f_1052_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEventInfo___closed__2(void){
_start:
{
uint8_t v___x_1054_; lean_object* v___x_1055_; lean_object* v___f_1056_; lean_object* v___x_1057_; 
v___x_1054_ = 0;
v___x_1055_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___closed__1));
v___f_1056_ = lean_obj_once(&l_Lasm_Web_instFromJSEventInfo___closed__0, &l_Lasm_Web_instFromJSEventInfo___closed__0_once, _init_l_Lasm_Web_instFromJSEventInfo___closed__0);
v___x_1057_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1057_, 0, v___f_1056_);
lean_ctor_set(v___x_1057_, 1, v___x_1055_);
lean_ctor_set_uint8(v___x_1057_, sizeof(void*)*2, v___x_1054_);
return v___x_1057_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEventInfo(void){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = lean_obj_once(&l_Lasm_Web_instFromJSEventInfo___closed__2, &l_Lasm_Web_instFromJSEventInfo___closed__2_once, _init_l_Lasm_Web_instFromJSEventInfo___closed__2);
return v___x_1058_;
}
}
static double _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__0(void){
_start:
{
uint64_t v___x_1059_; double v___x_1060_; 
v___x_1059_ = 0ULL;
v___x_1060_ = lean_uint64_to_float(v___x_1059_);
return v___x_1060_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__1(void){
_start:
{
double v___x_1061_; uint8_t v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1061_ = lean_float_once(&l_Lasm_Web_instInhabitedEventInfo_default___closed__0, &l_Lasm_Web_instInhabitedEventInfo_default___closed__0_once, _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__0);
v___x_1062_ = 0;
v___x_1063_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_1064_ = lean_alloc_ctor(0, 4, 94);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
lean_ctor_set(v___x_1064_, 2, v___x_1063_);
lean_ctor_set(v___x_1064_, 3, v___x_1063_);
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*4 + 88, v___x_1062_);
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*4 + 89, v___x_1062_);
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*4 + 90, v___x_1062_);
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*4 + 91, v___x_1062_);
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*4 + 92, v___x_1062_);
lean_ctor_set_float(v___x_1064_, sizeof(void*)*4, v___x_1061_);
lean_ctor_set_float(v___x_1064_, sizeof(void*)*4 + 8, v___x_1061_);
lean_ctor_set_float(v___x_1064_, sizeof(void*)*4 + 16, v___x_1061_);
lean_ctor_set_float(v___x_1064_, sizeof(void*)*4 + 24, v___x_1061_);
lean_ctor_set_float(v___x_1064_, sizeof(void*)*4 + 32, v___x_1061_);
lean_ctor_set_float(v___x_1064_, sizeof(void*)*4 + 40, v___x_1061_);
lean_ctor_set_float(v___x_1064_, sizeof(void*)*4 + 48, v___x_1061_);
lean_ctor_set_float(v___x_1064_, sizeof(void*)*4 + 56, v___x_1061_);
lean_ctor_set_float(v___x_1064_, sizeof(void*)*4 + 64, v___x_1061_);
lean_ctor_set_float(v___x_1064_, sizeof(void*)*4 + 72, v___x_1061_);
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*4 + 93, v___x_1062_);
lean_ctor_set_float(v___x_1064_, sizeof(void*)*4 + 80, v___x_1061_);
return v___x_1064_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedEventInfo_default(void){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = lean_obj_once(&l_Lasm_Web_instInhabitedEventInfo_default___closed__1, &l_Lasm_Web_instInhabitedEventInfo_default___closed__1_once, _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__1);
return v___x_1065_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedEventInfo(void){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = l_Lasm_Web_instInhabitedEventInfo_default;
return v___x_1066_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = lean_unsigned_to_nat(8u);
v___x_1080_ = lean_nat_to_int(v___x_1079_);
return v___x_1080_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = lean_unsigned_to_nat(7u);
v___x_1087_ = lean_nat_to_int(v___x_1086_);
return v___x_1087_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = lean_unsigned_to_nat(13u);
v___x_1093_ = lean_nat_to_int(v___x_1092_);
return v___x_1093_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = lean_unsigned_to_nat(10u);
v___x_1097_ = lean_nat_to_int(v___x_1096_);
return v___x_1097_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = lean_unsigned_to_nat(11u);
v___x_1101_ = lean_nat_to_int(v___x_1100_);
return v___x_1101_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = lean_unsigned_to_nat(12u);
v___x_1107_ = lean_nat_to_int(v___x_1106_);
return v___x_1107_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = lean_unsigned_to_nat(9u);
v___x_1115_ = lean_nat_to_int(v___x_1114_);
return v___x_1115_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36(void){
_start:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1137_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__0));
v___x_1138_ = lean_string_length(v___x_1137_);
return v___x_1138_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37(void){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36);
v___x_1140_ = lean_nat_to_int(v___x_1139_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg(lean_object* v_x_1145_){
_start:
{
lean_object* v_type_1146_; lean_object* v_key_1147_; lean_object* v_code_1148_; uint8_t v_keyRepeat_1149_; uint8_t v_altKey_1150_; uint8_t v_ctrlKey_1151_; uint8_t v_metaKey_1152_; uint8_t v_shiftKey_1153_; double v_clientX_1154_; double v_clientY_1155_; double v_pageX_1156_; double v_pageY_1157_; double v_offsetX_1158_; double v_offsetY_1159_; double v_button_1160_; double v_buttons_1161_; double v_deltaX_1162_; double v_deltaY_1163_; lean_object* v_value_1164_; uint8_t v_checked_1165_; double v_timeStamp_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v_type_1146_ = lean_ctor_get(v_x_1145_, 0);
lean_inc_ref(v_type_1146_);
v_key_1147_ = lean_ctor_get(v_x_1145_, 1);
lean_inc_ref(v_key_1147_);
v_code_1148_ = lean_ctor_get(v_x_1145_, 2);
lean_inc_ref(v_code_1148_);
v_keyRepeat_1149_ = lean_ctor_get_uint8(v_x_1145_, sizeof(void*)*4 + 88);
v_altKey_1150_ = lean_ctor_get_uint8(v_x_1145_, sizeof(void*)*4 + 89);
v_ctrlKey_1151_ = lean_ctor_get_uint8(v_x_1145_, sizeof(void*)*4 + 90);
v_metaKey_1152_ = lean_ctor_get_uint8(v_x_1145_, sizeof(void*)*4 + 91);
v_shiftKey_1153_ = lean_ctor_get_uint8(v_x_1145_, sizeof(void*)*4 + 92);
v_clientX_1154_ = lean_ctor_get_float(v_x_1145_, sizeof(void*)*4);
v_clientY_1155_ = lean_ctor_get_float(v_x_1145_, sizeof(void*)*4 + 8);
v_pageX_1156_ = lean_ctor_get_float(v_x_1145_, sizeof(void*)*4 + 16);
v_pageY_1157_ = lean_ctor_get_float(v_x_1145_, sizeof(void*)*4 + 24);
v_offsetX_1158_ = lean_ctor_get_float(v_x_1145_, sizeof(void*)*4 + 32);
v_offsetY_1159_ = lean_ctor_get_float(v_x_1145_, sizeof(void*)*4 + 40);
v_button_1160_ = lean_ctor_get_float(v_x_1145_, sizeof(void*)*4 + 48);
v_buttons_1161_ = lean_ctor_get_float(v_x_1145_, sizeof(void*)*4 + 56);
v_deltaX_1162_ = lean_ctor_get_float(v_x_1145_, sizeof(void*)*4 + 64);
v_deltaY_1163_ = lean_ctor_get_float(v_x_1145_, sizeof(void*)*4 + 72);
v_value_1164_ = lean_ctor_get(v_x_1145_, 3);
lean_inc_ref(v_value_1164_);
v_checked_1165_ = lean_ctor_get_uint8(v_x_1145_, sizeof(void*)*4 + 93);
v_timeStamp_1166_ = lean_ctor_get_float(v_x_1145_, sizeof(void*)*4 + 80);
lean_dec_ref(v_x_1145_);
v___x_1167_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__4));
v___x_1168_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__5));
v___x_1169_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6);
v___x_1170_ = l_String_quote(v_type_1146_);
v___x_1171_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
v___x_1172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1169_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = 0;
v___x_1174_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1174_, 0, v___x_1172_);
lean_ctor_set_uint8(v___x_1174_, sizeof(void*)*1, v___x_1173_);
v___x_1175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1168_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
v___x_1176_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__8));
v___x_1177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1175_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
v___x_1178_ = lean_box(1);
v___x_1179_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1177_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
v___x_1180_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__9));
v___x_1181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1179_);
lean_ctor_set(v___x_1181_, 1, v___x_1180_);
v___x_1182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1181_);
lean_ctor_set(v___x_1182_, 1, v___x_1167_);
v___x_1183_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10);
v___x_1184_ = l_String_quote(v_key_1147_);
v___x_1185_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
v___x_1186_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1183_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
v___x_1187_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
lean_ctor_set_uint8(v___x_1187_, sizeof(void*)*1, v___x_1173_);
v___x_1188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1182_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1188_);
lean_ctor_set(v___x_1189_, 1, v___x_1176_);
v___x_1190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
lean_ctor_set(v___x_1190_, 1, v___x_1178_);
v___x_1191_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__11));
v___x_1192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1190_);
lean_ctor_set(v___x_1192_, 1, v___x_1191_);
v___x_1193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
lean_ctor_set(v___x_1193_, 1, v___x_1167_);
v___x_1194_ = l_String_quote(v_code_1148_);
v___x_1195_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1194_);
v___x_1196_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1169_);
lean_ctor_set(v___x_1196_, 1, v___x_1195_);
v___x_1197_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
lean_ctor_set_uint8(v___x_1197_, sizeof(void*)*1, v___x_1173_);
v___x_1198_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1193_);
lean_ctor_set(v___x_1198_, 1, v___x_1197_);
v___x_1199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
lean_ctor_set(v___x_1199_, 1, v___x_1176_);
v___x_1200_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1200_, 0, v___x_1199_);
lean_ctor_set(v___x_1200_, 1, v___x_1178_);
v___x_1201_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__12));
v___x_1202_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1200_);
lean_ctor_set(v___x_1202_, 1, v___x_1201_);
v___x_1203_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
lean_ctor_set(v___x_1203_, 1, v___x_1167_);
v___x_1204_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13);
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = l_Bool_repr___redArg(v_keyRepeat_1149_);
v___x_1207_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1204_);
lean_ctor_set(v___x_1207_, 1, v___x_1206_);
v___x_1208_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
lean_ctor_set_uint8(v___x_1208_, sizeof(void*)*1, v___x_1173_);
v___x_1209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1203_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
lean_ctor_set(v___x_1210_, 1, v___x_1176_);
v___x_1211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1210_);
lean_ctor_set(v___x_1211_, 1, v___x_1178_);
v___x_1212_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__14));
v___x_1213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1211_);
lean_ctor_set(v___x_1213_, 1, v___x_1212_);
v___x_1214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
lean_ctor_set(v___x_1214_, 1, v___x_1167_);
v___x_1215_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15);
v___x_1216_ = l_Bool_repr___redArg(v_altKey_1150_);
v___x_1217_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1215_);
lean_ctor_set(v___x_1217_, 1, v___x_1216_);
v___x_1218_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
lean_ctor_set_uint8(v___x_1218_, sizeof(void*)*1, v___x_1173_);
v___x_1219_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1214_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
v___x_1220_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
lean_ctor_set(v___x_1220_, 1, v___x_1176_);
v___x_1221_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1220_);
lean_ctor_set(v___x_1221_, 1, v___x_1178_);
v___x_1222_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__16));
v___x_1223_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1221_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
v___x_1224_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1223_);
lean_ctor_set(v___x_1224_, 1, v___x_1167_);
v___x_1225_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17);
v___x_1226_ = l_Bool_repr___redArg(v_ctrlKey_1151_);
v___x_1227_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1225_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
v___x_1228_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
lean_ctor_set_uint8(v___x_1228_, sizeof(void*)*1, v___x_1173_);
v___x_1229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1224_);
lean_ctor_set(v___x_1229_, 1, v___x_1228_);
v___x_1230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
lean_ctor_set(v___x_1230_, 1, v___x_1176_);
v___x_1231_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1230_);
lean_ctor_set(v___x_1231_, 1, v___x_1178_);
v___x_1232_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__18));
v___x_1233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1231_);
lean_ctor_set(v___x_1233_, 1, v___x_1232_);
v___x_1234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
lean_ctor_set(v___x_1234_, 1, v___x_1167_);
v___x_1235_ = l_Bool_repr___redArg(v_metaKey_1152_);
v___x_1236_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1225_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
v___x_1237_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1237_, 0, v___x_1236_);
lean_ctor_set_uint8(v___x_1237_, sizeof(void*)*1, v___x_1173_);
v___x_1238_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1234_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
v___x_1239_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
lean_ctor_set(v___x_1239_, 1, v___x_1176_);
v___x_1240_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1239_);
lean_ctor_set(v___x_1240_, 1, v___x_1178_);
v___x_1241_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__19));
v___x_1242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1240_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
v___x_1243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
lean_ctor_set(v___x_1243_, 1, v___x_1167_);
v___x_1244_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20);
v___x_1245_ = l_Bool_repr___redArg(v_shiftKey_1153_);
v___x_1246_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1247_, 0, v___x_1246_);
lean_ctor_set_uint8(v___x_1247_, sizeof(void*)*1, v___x_1173_);
v___x_1248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1243_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
v___x_1249_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1248_);
lean_ctor_set(v___x_1249_, 1, v___x_1176_);
v___x_1250_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1249_);
lean_ctor_set(v___x_1250_, 1, v___x_1178_);
v___x_1251_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__21));
v___x_1252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1250_);
lean_ctor_set(v___x_1252_, 1, v___x_1251_);
v___x_1253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
lean_ctor_set(v___x_1253_, 1, v___x_1167_);
v___x_1254_ = l_Float_repr(v_clientX_1154_, v___x_1205_);
v___x_1255_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1225_);
lean_ctor_set(v___x_1255_, 1, v___x_1254_);
v___x_1256_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
lean_ctor_set_uint8(v___x_1256_, sizeof(void*)*1, v___x_1173_);
v___x_1257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1253_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
v___x_1258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
lean_ctor_set(v___x_1258_, 1, v___x_1176_);
v___x_1259_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
lean_ctor_set(v___x_1259_, 1, v___x_1178_);
v___x_1260_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__22));
v___x_1261_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1259_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
v___x_1262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
lean_ctor_set(v___x_1262_, 1, v___x_1167_);
v___x_1263_ = l_Float_repr(v_clientY_1155_, v___x_1205_);
v___x_1264_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1225_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
v___x_1265_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1265_, 0, v___x_1264_);
lean_ctor_set_uint8(v___x_1265_, sizeof(void*)*1, v___x_1173_);
v___x_1266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1262_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
v___x_1267_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
lean_ctor_set(v___x_1267_, 1, v___x_1176_);
v___x_1268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
lean_ctor_set(v___x_1268_, 1, v___x_1178_);
v___x_1269_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__23));
v___x_1270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1268_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
v___x_1271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
lean_ctor_set(v___x_1271_, 1, v___x_1167_);
v___x_1272_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24);
v___x_1273_ = l_Float_repr(v_pageX_1156_, v___x_1205_);
v___x_1274_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1272_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
lean_ctor_set_uint8(v___x_1275_, sizeof(void*)*1, v___x_1173_);
v___x_1276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1271_);
lean_ctor_set(v___x_1276_, 1, v___x_1275_);
v___x_1277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
lean_ctor_set(v___x_1277_, 1, v___x_1176_);
v___x_1278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
lean_ctor_set(v___x_1278_, 1, v___x_1178_);
v___x_1279_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__25));
v___x_1280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1278_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
v___x_1281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1280_);
lean_ctor_set(v___x_1281_, 1, v___x_1167_);
v___x_1282_ = l_Float_repr(v_pageY_1157_, v___x_1205_);
v___x_1283_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1272_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
v___x_1284_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1284_, 0, v___x_1283_);
lean_ctor_set_uint8(v___x_1284_, sizeof(void*)*1, v___x_1173_);
v___x_1285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1281_);
lean_ctor_set(v___x_1285_, 1, v___x_1284_);
v___x_1286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1285_);
lean_ctor_set(v___x_1286_, 1, v___x_1176_);
v___x_1287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1286_);
lean_ctor_set(v___x_1287_, 1, v___x_1178_);
v___x_1288_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__26));
v___x_1289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1287_);
lean_ctor_set(v___x_1289_, 1, v___x_1288_);
v___x_1290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
lean_ctor_set(v___x_1290_, 1, v___x_1167_);
v___x_1291_ = l_Float_repr(v_offsetX_1158_, v___x_1205_);
v___x_1292_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1225_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
lean_ctor_set_uint8(v___x_1293_, sizeof(void*)*1, v___x_1173_);
v___x_1294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1290_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
v___x_1295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
lean_ctor_set(v___x_1295_, 1, v___x_1176_);
v___x_1296_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set(v___x_1296_, 1, v___x_1178_);
v___x_1297_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__27));
v___x_1298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1296_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___x_1299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
lean_ctor_set(v___x_1299_, 1, v___x_1167_);
v___x_1300_ = l_Float_repr(v_offsetY_1159_, v___x_1205_);
v___x_1301_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1225_);
lean_ctor_set(v___x_1301_, 1, v___x_1300_);
v___x_1302_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
lean_ctor_set_uint8(v___x_1302_, sizeof(void*)*1, v___x_1173_);
v___x_1303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1299_);
lean_ctor_set(v___x_1303_, 1, v___x_1302_);
v___x_1304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
lean_ctor_set(v___x_1304_, 1, v___x_1176_);
v___x_1305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
lean_ctor_set(v___x_1305_, 1, v___x_1178_);
v___x_1306_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__28));
v___x_1307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1305_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
lean_ctor_set(v___x_1308_, 1, v___x_1167_);
v___x_1309_ = l_Float_repr(v_button_1160_, v___x_1205_);
v___x_1310_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1215_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set_uint8(v___x_1311_, sizeof(void*)*1, v___x_1173_);
v___x_1312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1308_);
lean_ctor_set(v___x_1312_, 1, v___x_1311_);
v___x_1313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v___x_1176_);
v___x_1314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
lean_ctor_set(v___x_1314_, 1, v___x_1178_);
v___x_1315_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__29));
v___x_1316_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1314_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
lean_ctor_set(v___x_1317_, 1, v___x_1167_);
v___x_1318_ = l_Float_repr(v_buttons_1161_, v___x_1205_);
v___x_1319_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1225_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
lean_ctor_set_uint8(v___x_1320_, sizeof(void*)*1, v___x_1173_);
v___x_1321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1317_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1321_);
lean_ctor_set(v___x_1322_, 1, v___x_1176_);
v___x_1323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
lean_ctor_set(v___x_1323_, 1, v___x_1178_);
v___x_1324_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__30));
v___x_1325_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1323_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
v___x_1326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
lean_ctor_set(v___x_1326_, 1, v___x_1167_);
v___x_1327_ = l_Float_repr(v_deltaX_1162_, v___x_1205_);
v___x_1328_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1215_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
lean_ctor_set_uint8(v___x_1329_, sizeof(void*)*1, v___x_1173_);
v___x_1330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1326_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
lean_ctor_set(v___x_1331_, 1, v___x_1176_);
v___x_1332_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
lean_ctor_set(v___x_1332_, 1, v___x_1178_);
v___x_1333_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__31));
v___x_1334_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1332_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
lean_ctor_set(v___x_1335_, 1, v___x_1167_);
v___x_1336_ = l_Float_repr(v_deltaY_1163_, v___x_1205_);
v___x_1337_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1215_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
v___x_1338_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1338_, 0, v___x_1337_);
lean_ctor_set_uint8(v___x_1338_, sizeof(void*)*1, v___x_1173_);
v___x_1339_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1335_);
lean_ctor_set(v___x_1339_, 1, v___x_1338_);
v___x_1340_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
lean_ctor_set(v___x_1340_, 1, v___x_1176_);
v___x_1341_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
lean_ctor_set(v___x_1341_, 1, v___x_1178_);
v___x_1342_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__32));
v___x_1343_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
lean_ctor_set(v___x_1344_, 1, v___x_1167_);
v___x_1345_ = l_String_quote(v_value_1164_);
v___x_1346_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
v___x_1347_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1272_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
v___x_1348_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
lean_ctor_set_uint8(v___x_1348_, sizeof(void*)*1, v___x_1173_);
v___x_1349_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1344_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
lean_ctor_set(v___x_1350_, 1, v___x_1176_);
v___x_1351_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1350_);
lean_ctor_set(v___x_1351_, 1, v___x_1178_);
v___x_1352_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__33));
v___x_1353_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1351_);
lean_ctor_set(v___x_1353_, 1, v___x_1352_);
v___x_1354_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1353_);
lean_ctor_set(v___x_1354_, 1, v___x_1167_);
v___x_1355_ = l_Bool_repr___redArg(v_checked_1165_);
v___x_1356_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1225_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
v___x_1357_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
lean_ctor_set_uint8(v___x_1357_, sizeof(void*)*1, v___x_1173_);
v___x_1358_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1354_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
lean_ctor_set(v___x_1359_, 1, v___x_1176_);
v___x_1360_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
lean_ctor_set(v___x_1360_, 1, v___x_1178_);
v___x_1361_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__34));
v___x_1362_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1360_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
v___x_1363_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1362_);
lean_ctor_set(v___x_1363_, 1, v___x_1167_);
v___x_1364_ = l_Float_repr(v_timeStamp_1166_, v___x_1205_);
v___x_1365_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1204_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
v___x_1366_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
lean_ctor_set_uint8(v___x_1366_, sizeof(void*)*1, v___x_1173_);
v___x_1367_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1363_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
v___x_1368_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37);
v___x_1369_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__38));
v___x_1370_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1369_);
lean_ctor_set(v___x_1370_, 1, v___x_1367_);
v___x_1371_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__39));
v___x_1372_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1370_);
lean_ctor_set(v___x_1372_, 1, v___x_1371_);
v___x_1373_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1368_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
v___x_1374_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
lean_ctor_set_uint8(v___x_1374_, sizeof(void*)*1, v___x_1173_);
return v___x_1374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr(lean_object* v_x_1375_, lean_object* v_prec_1376_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = l_Lasm_Web_instReprEventInfo_repr___redArg(v_x_1375_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr___boxed(lean_object* v_x_1378_, lean_object* v_prec_1379_){
_start:
{
lean_object* v_res_1380_; 
v_res_1380_ = l_Lasm_Web_instReprEventInfo_repr(v_x_1378_, v_prec_1379_);
lean_dec(v_prec_1379_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0(lean_object* v_context_1383_, lean_object* v_args_1384_){
_start:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; uint8_t v___x_1388_; 
v___x_1386_ = lean_unsigned_to_nat(0u);
v___x_1387_ = lean_array_get_size(v_args_1384_);
v___x_1388_ = lean_nat_dec_lt(v___x_1386_, v___x_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1389_ = lean_box(0);
v___x_1390_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v_context_1383_, v___x_1389_);
return v___x_1390_;
}
else
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1391_ = lean_array_fget_borrowed(v_args_1384_, v___x_1386_);
lean_inc(v___x_1391_);
v___x_1392_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v_context_1383_, v___x_1391_);
return v___x_1392_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0___boxed(lean_object* v_context_1393_, lean_object* v_args_1394_, lean_object* v_a_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0(v_context_1393_, v_args_1394_);
lean_dec_ref(v_args_1394_);
lean_dec_ref(v_context_1393_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0(lean_object* v_type_1398_, lean_object* v_handler_1399_, lean_object* v_args_1400_){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1402_ = ((lean_object*)(l_Lasm_Web_EventTarget_addEventListener___lam__0___closed__0));
v___x_1403_ = lean_string_append(v_type_1398_, v___x_1402_);
v___x_1404_ = l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0(v___x_1403_, v_args_1400_);
lean_dec_ref(v___x_1403_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v___x_1406_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_a_1405_);
lean_dec_ref_known(v___x_1404_, 1);
v___x_1406_ = lean_apply_2(v_handler_1399_, v_a_1405_, lean_box(0));
return v___x_1406_;
}
else
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1414_; 
lean_dec_ref(v_handler_1399_);
v_a_1407_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1409_ = v___x_1404_;
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1404_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1412_; 
if (v_isShared_1410_ == 0)
{
v___x_1412_ = v___x_1409_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_a_1407_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0___boxed(lean_object* v_type_1415_, lean_object* v_handler_1416_, lean_object* v_args_1417_, lean_object* v___y_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l_Lasm_Web_EventTarget_addEventListener___lam__0(v_type_1415_, v_handler_1416_, v_args_1417_);
lean_dec_ref(v_args_1417_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener(lean_object* v_target_1420_, lean_object* v_type_1421_, lean_object* v_handler_1422_, lean_object* v_options_1423_){
_start:
{
lean_object* v___f_1425_; lean_object* v___x_1426_; 
lean_inc_ref(v_type_1421_);
v___f_1425_ = lean_alloc_closure((void*)(l_Lasm_Web_EventTarget_addEventListener___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1425_, 0, v_type_1421_);
lean_closure_set(v___f_1425_, 1, v_handler_1422_);
v___x_1426_ = l_Lasm_Web_callback(v___f_1425_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v_a_1427_; lean_object* v___x_1428_; 
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
lean_inc(v_a_1427_);
lean_dec_ref_known(v___x_1426_, 1);
v___x_1428_ = l_Lasm_Web_Raw_listen(v_target_1420_, v_type_1421_, v_a_1427_, v_options_1423_);
return v___x_1428_;
}
else
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1436_; 
lean_dec_ref(v_type_1421_);
lean_dec(v_target_1420_);
v_a_1429_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1431_ = v___x_1426_;
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1426_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1429_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___boxed(lean_object* v_target_1437_, lean_object* v_type_1438_, lean_object* v_handler_1439_, lean_object* v_options_1440_, lean_object* v_a_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l_Lasm_Web_EventTarget_addEventListener(v_target_1437_, v_type_1438_, v_handler_1439_, v_options_1440_);
lean_dec_ref(v_options_1440_);
return v_res_1442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_on(lean_object* v_target_1443_, lean_object* v_type_1444_, lean_object* v_handler_1445_, lean_object* v_options_1446_){
_start:
{
lean_object* v___x_1448_; 
v___x_1448_ = l_Lasm_Web_EventTarget_addEventListener(v_target_1443_, v_type_1444_, v_handler_1445_, v_options_1446_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_on___boxed(lean_object* v_target_1449_, lean_object* v_type_1450_, lean_object* v_handler_1451_, lean_object* v_options_1452_, lean_object* v_a_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l_Lasm_Web_EventTarget_on(v_target_1449_, v_type_1450_, v_handler_1451_, v_options_1452_);
lean_dec_ref(v_options_1452_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_dispatchEvent(lean_object* v_target_1455_, lean_object* v_event_1456_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lasm_Web_Raw_dispatchEvent(v_target_1455_, v_event_1456_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_dispatchEvent___boxed(lean_object* v_target_1459_, lean_object* v_event_1460_, lean_object* v_a_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l_Lasm_Web_EventTarget_dispatchEvent(v_target_1459_, v_event_1460_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Listener_remove(lean_object* v_l_1463_){
_start:
{
lean_object* v___x_1465_; 
v___x_1465_ = l_Lasm_Web_Raw_unlisten(v_l_1463_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Listener_remove___boxed(lean_object* v_l_1466_, lean_object* v_a_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Lasm_Web_Listener_remove(v_l_1466_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_create(lean_object* v_type_1469_, uint8_t v_bubbles_1470_, uint8_t v_cancelable_1471_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l_Lasm_Web_Raw_createEvent(v_type_1469_, v_bubbles_1470_, v_cancelable_1471_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_create___boxed(lean_object* v_type_1474_, lean_object* v_bubbles_1475_, lean_object* v_cancelable_1476_, lean_object* v_a_1477_){
_start:
{
uint8_t v_bubbles_boxed_1478_; uint8_t v_cancelable_boxed_1479_; lean_object* v_res_1480_; 
v_bubbles_boxed_1478_ = lean_unbox(v_bubbles_1475_);
v_cancelable_boxed_1479_ = lean_unbox(v_cancelable_1476_);
v_res_1480_ = l_Lasm_Web_Event_create(v_type_1474_, v_bubbles_boxed_1478_, v_cancelable_boxed_1479_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_custom(lean_object* v_type_1481_, lean_object* v_detail_1482_, uint8_t v_bubbles_1483_, uint8_t v_cancelable_1484_){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Lasm_Web_Raw_createCustomEvent(v_type_1481_, v_detail_1482_, v_bubbles_1483_, v_cancelable_1484_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_custom___boxed(lean_object* v_type_1487_, lean_object* v_detail_1488_, lean_object* v_bubbles_1489_, lean_object* v_cancelable_1490_, lean_object* v_a_1491_){
_start:
{
uint8_t v_bubbles_boxed_1492_; uint8_t v_cancelable_boxed_1493_; lean_object* v_res_1494_; 
v_bubbles_boxed_1492_ = lean_unbox(v_bubbles_1489_);
v_cancelable_boxed_1493_ = lean_unbox(v_cancelable_1490_);
v_res_1494_ = l_Lasm_Web_Event_custom(v_type_1487_, v_detail_1488_, v_bubbles_boxed_1492_, v_cancelable_boxed_1493_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(lean_object* v_d_1501_, lean_object* v_key_1502_){
_start:
{
if (lean_obj_tag(v_d_1501_) == 8)
{
lean_object* v___x_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1525_; 
v___x_1503_ = l_Lasm_JS_Data_field(v_d_1501_, v_key_1502_);
v_isSharedCheck_1525_ = !lean_is_exclusive(v_d_1501_);
if (v_isSharedCheck_1525_ == 0)
{
lean_object* v_unused_1526_; 
v_unused_1526_ = lean_ctor_get(v_d_1501_, 0);
lean_dec(v_unused_1526_);
v___x_1505_ = v_d_1501_;
v_isShared_1506_ = v_isSharedCheck_1525_;
goto v_resetjp_1504_;
}
else
{
lean_dec(v_d_1501_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1525_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
if (lean_obj_tag(v___x_1503_) == 2)
{
uint8_t v_b_1507_; lean_object* v___x_1508_; lean_object* v___x_1510_; 
v_b_1507_ = lean_ctor_get_uint8(v___x_1503_, 0);
lean_dec_ref_known(v___x_1503_, 0);
v___x_1508_ = lean_box(v_b_1507_);
if (v_isShared_1506_ == 0)
{
lean_ctor_set_tag(v___x_1505_, 1);
lean_ctor_set(v___x_1505_, 0, v___x_1508_);
v___x_1510_ = v___x_1505_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1508_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
else
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1523_; 
v___x_1512_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0));
v___x_1513_ = lean_string_append(v___x_1512_, v_key_1502_);
v___x_1514_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1));
v___x_1515_ = lean_string_append(v___x_1513_, v___x_1514_);
v___x_1516_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0));
v___x_1517_ = lean_string_append(v___x_1515_, v___x_1516_);
v___x_1518_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2));
v___x_1519_ = lean_string_append(v___x_1517_, v___x_1518_);
v___x_1520_ = l_Lasm_JS_Data_describe(v___x_1503_);
v___x_1521_ = lean_string_append(v___x_1519_, v___x_1520_);
lean_dec_ref(v___x_1520_);
if (v_isShared_1506_ == 0)
{
lean_ctor_set_tag(v___x_1505_, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1521_);
v___x_1523_ = v___x_1505_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1521_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
else
{
lean_object* v___x_1527_; 
lean_dec(v_d_1501_);
v___x_1527_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__4));
return v___x_1527_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___boxed(lean_object* v_d_1528_, lean_object* v_key_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1528_, v_key_1529_);
lean_dec_ref(v_key_1529_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(lean_object* v_d_1534_, lean_object* v_key_1535_){
_start:
{
if (lean_obj_tag(v_d_1534_) == 8)
{
lean_object* v___x_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1558_; 
v___x_1536_ = l_Lasm_JS_Data_field(v_d_1534_, v_key_1535_);
v_isSharedCheck_1558_ = !lean_is_exclusive(v_d_1534_);
if (v_isSharedCheck_1558_ == 0)
{
lean_object* v_unused_1559_; 
v_unused_1559_ = lean_ctor_get(v_d_1534_, 0);
lean_dec(v_unused_1559_);
v___x_1538_ = v_d_1534_;
v_isShared_1539_ = v_isSharedCheck_1558_;
goto v_resetjp_1537_;
}
else
{
lean_dec(v_d_1534_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1558_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
if (lean_obj_tag(v___x_1536_) == 3)
{
double v_n_1540_; lean_object* v___x_1541_; lean_object* v___x_1543_; 
v_n_1540_ = lean_ctor_get_float(v___x_1536_, 0);
lean_dec_ref_known(v___x_1536_, 0);
v___x_1541_ = lean_box_float(v_n_1540_);
if (v_isShared_1539_ == 0)
{
lean_ctor_set_tag(v___x_1538_, 1);
lean_ctor_set(v___x_1538_, 0, v___x_1541_);
v___x_1543_ = v___x_1538_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v___x_1541_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
else
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1556_; 
v___x_1545_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0));
v___x_1546_ = lean_string_append(v___x_1545_, v_key_1535_);
v___x_1547_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1));
v___x_1548_ = lean_string_append(v___x_1546_, v___x_1547_);
v___x_1549_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__0));
v___x_1550_ = lean_string_append(v___x_1548_, v___x_1549_);
v___x_1551_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2));
v___x_1552_ = lean_string_append(v___x_1550_, v___x_1551_);
v___x_1553_ = l_Lasm_JS_Data_describe(v___x_1536_);
v___x_1554_ = lean_string_append(v___x_1552_, v___x_1553_);
lean_dec_ref(v___x_1553_);
if (v_isShared_1539_ == 0)
{
lean_ctor_set_tag(v___x_1538_, 0);
lean_ctor_set(v___x_1538_, 0, v___x_1554_);
v___x_1556_ = v___x_1538_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v___x_1554_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
}
else
{
lean_object* v___x_1560_; 
lean_dec(v_d_1534_);
v___x_1560_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__1));
return v___x_1560_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___boxed(lean_object* v_d_1561_, lean_object* v_key_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1561_, v_key_1562_);
lean_dec_ref(v_key_1562_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(lean_object* v_d_1566_, lean_object* v_key_1567_){
_start:
{
if (lean_obj_tag(v_d_1566_) == 8)
{
lean_object* v___x_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1593_; 
v___x_1568_ = l_Lasm_JS_Data_field(v_d_1566_, v_key_1567_);
v_isSharedCheck_1593_ = !lean_is_exclusive(v_d_1566_);
if (v_isSharedCheck_1593_ == 0)
{
lean_object* v_unused_1594_; 
v_unused_1594_ = lean_ctor_get(v_d_1566_, 0);
lean_dec(v_unused_1594_);
v___x_1570_ = v_d_1566_;
v_isShared_1571_ = v_isSharedCheck_1593_;
goto v_resetjp_1569_;
}
else
{
lean_dec(v_d_1566_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1593_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
if (lean_obj_tag(v___x_1568_) == 4)
{
lean_object* v_s_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1579_; 
lean_del_object(v___x_1570_);
v_s_1572_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1574_ = v___x_1568_;
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_s_1572_);
lean_dec(v___x_1568_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
lean_ctor_set_tag(v___x_1574_, 1);
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_s_1572_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
else
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1591_; 
v___x_1580_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0));
v___x_1581_ = lean_string_append(v___x_1580_, v_key_1567_);
v___x_1582_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1));
v___x_1583_ = lean_string_append(v___x_1581_, v___x_1582_);
v___x_1584_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0));
v___x_1585_ = lean_string_append(v___x_1583_, v___x_1584_);
v___x_1586_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2));
v___x_1587_ = lean_string_append(v___x_1585_, v___x_1586_);
v___x_1588_ = l_Lasm_JS_Data_describe(v___x_1568_);
v___x_1589_ = lean_string_append(v___x_1587_, v___x_1588_);
lean_dec_ref(v___x_1588_);
if (v_isShared_1571_ == 0)
{
lean_ctor_set_tag(v___x_1570_, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1589_);
v___x_1591_ = v___x_1570_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v___x_1589_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
else
{
lean_object* v___x_1595_; 
lean_dec(v_d_1566_);
v___x_1595_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___closed__0));
return v___x_1595_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___boxed(lean_object* v_d_1596_, lean_object* v_key_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1596_, v_key_1597_);
lean_dec_ref(v_key_1597_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0(lean_object* v_context_1601_, lean_object* v_d_1602_){
_start:
{
lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1611_; lean_object* v_received_1612_; lean_object* v___y_1631_; lean_object* v_a_1634_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0));
lean_inc(v_d_1602_);
v___x_1659_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1602_, v___x_1658_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; 
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
lean_inc(v_a_1660_);
lean_dec_ref_known(v___x_1659_, 1);
v_a_1634_ = v_a_1660_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v_a_1661_ = lean_ctor_get(v___x_1659_, 0);
lean_inc(v_a_1661_);
lean_dec_ref_known(v___x_1659_, 1);
v___x_1662_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1));
lean_inc(v_d_1602_);
v___x_1663_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1602_, v___x_1662_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; 
lean_dec(v_a_1661_);
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1663_, 1);
v_a_1634_ = v_a_1664_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v_a_1665_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1665_);
lean_dec_ref_known(v___x_1663_, 1);
v___x_1666_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2));
lean_inc(v_d_1602_);
v___x_1667_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1602_, v___x_1666_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v_a_1668_; 
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_a_1668_);
lean_dec_ref_known(v___x_1667_, 1);
v_a_1634_ = v_a_1668_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
v_a_1669_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_a_1669_);
lean_dec_ref_known(v___x_1667_, 1);
v___x_1670_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3));
lean_inc(v_d_1602_);
v___x_1671_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1602_, v___x_1670_);
if (lean_obj_tag(v___x_1671_) == 0)
{
lean_object* v_a_1672_; 
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1672_ = lean_ctor_get(v___x_1671_, 0);
lean_inc(v_a_1672_);
lean_dec_ref_known(v___x_1671_, 1);
v_a_1634_ = v_a_1672_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v_a_1673_ = lean_ctor_get(v___x_1671_, 0);
lean_inc(v_a_1673_);
lean_dec_ref_known(v___x_1671_, 1);
v___x_1674_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4));
lean_inc(v_d_1602_);
v___x_1675_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1602_, v___x_1674_);
if (lean_obj_tag(v___x_1675_) == 0)
{
lean_object* v_a_1676_; 
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1676_ = lean_ctor_get(v___x_1675_, 0);
lean_inc(v_a_1676_);
lean_dec_ref_known(v___x_1675_, 1);
v_a_1634_ = v_a_1676_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v_a_1677_ = lean_ctor_get(v___x_1675_, 0);
lean_inc(v_a_1677_);
lean_dec_ref_known(v___x_1675_, 1);
v___x_1678_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5));
lean_inc(v_d_1602_);
v___x_1679_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1602_, v___x_1678_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_object* v_a_1680_; 
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1680_ = lean_ctor_get(v___x_1679_, 0);
lean_inc(v_a_1680_);
lean_dec_ref_known(v___x_1679_, 1);
v_a_1634_ = v_a_1680_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v_a_1681_ = lean_ctor_get(v___x_1679_, 0);
lean_inc(v_a_1681_);
lean_dec_ref_known(v___x_1679_, 1);
v___x_1682_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6));
lean_inc(v_d_1602_);
v___x_1683_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1602_, v___x_1682_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; 
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1684_);
lean_dec_ref_known(v___x_1683_, 1);
v_a_1634_ = v_a_1684_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v_a_1685_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1685_);
lean_dec_ref_known(v___x_1683_, 1);
v___x_1686_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7));
lean_inc(v_d_1602_);
v___x_1687_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1602_, v___x_1686_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v_a_1688_; 
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1688_ = lean_ctor_get(v___x_1687_, 0);
lean_inc(v_a_1688_);
lean_dec_ref_known(v___x_1687_, 1);
v_a_1634_ = v_a_1688_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v_a_1689_ = lean_ctor_get(v___x_1687_, 0);
lean_inc(v_a_1689_);
lean_dec_ref_known(v___x_1687_, 1);
v___x_1690_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8));
lean_inc(v_d_1602_);
v___x_1691_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1602_, v___x_1690_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; 
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_a_1692_);
lean_dec_ref_known(v___x_1691_, 1);
v_a_1634_ = v_a_1692_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v_a_1693_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_a_1693_);
lean_dec_ref_known(v___x_1691_, 1);
v___x_1694_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9));
lean_inc(v_d_1602_);
v___x_1695_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1602_, v___x_1694_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; 
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref_known(v___x_1695_, 1);
v_a_1634_ = v_a_1696_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v_a_1697_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1697_);
lean_dec_ref_known(v___x_1695_, 1);
v___x_1698_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10));
lean_inc(v_d_1602_);
v___x_1699_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1602_, v___x_1698_);
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; 
lean_dec(v_a_1697_);
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1700_);
lean_dec_ref_known(v___x_1699_, 1);
v_a_1634_ = v_a_1700_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v_a_1701_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1701_);
lean_dec_ref_known(v___x_1699_, 1);
v___x_1702_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11));
lean_inc(v_d_1602_);
v___x_1703_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1602_, v___x_1702_);
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_object* v_a_1704_; 
lean_dec(v_a_1701_);
lean_dec(v_a_1697_);
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1703_, 1);
v_a_1634_ = v_a_1704_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
v_a_1705_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_a_1705_);
lean_dec_ref_known(v___x_1703_, 1);
v___x_1706_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12));
lean_inc(v_d_1602_);
v___x_1707_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1602_, v___x_1706_);
if (lean_obj_tag(v___x_1707_) == 0)
{
lean_object* v_a_1708_; 
lean_dec(v_a_1705_);
lean_dec(v_a_1701_);
lean_dec(v_a_1697_);
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1708_ = lean_ctor_get(v___x_1707_, 0);
lean_inc(v_a_1708_);
lean_dec_ref_known(v___x_1707_, 1);
v_a_1634_ = v_a_1708_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v_a_1709_ = lean_ctor_get(v___x_1707_, 0);
lean_inc(v_a_1709_);
lean_dec_ref_known(v___x_1707_, 1);
v___x_1710_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13));
lean_inc(v_d_1602_);
v___x_1711_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1602_, v___x_1710_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; 
lean_dec(v_a_1709_);
lean_dec(v_a_1705_);
lean_dec(v_a_1701_);
lean_dec(v_a_1697_);
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
lean_inc(v_a_1712_);
lean_dec_ref_known(v___x_1711_, 1);
v_a_1634_ = v_a_1712_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v_a_1713_ = lean_ctor_get(v___x_1711_, 0);
lean_inc(v_a_1713_);
lean_dec_ref_known(v___x_1711_, 1);
v___x_1714_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14));
lean_inc(v_d_1602_);
v___x_1715_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1602_, v___x_1714_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_a_1716_; 
lean_dec(v_a_1713_);
lean_dec(v_a_1709_);
lean_dec(v_a_1705_);
lean_dec(v_a_1701_);
lean_dec(v_a_1697_);
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_a_1716_);
lean_dec_ref_known(v___x_1715_, 1);
v_a_1634_ = v_a_1716_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v_a_1717_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_a_1717_);
lean_dec_ref_known(v___x_1715_, 1);
v___x_1718_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15));
lean_inc(v_d_1602_);
v___x_1719_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1602_, v___x_1718_);
if (lean_obj_tag(v___x_1719_) == 0)
{
lean_object* v_a_1720_; 
lean_dec(v_a_1717_);
lean_dec(v_a_1713_);
lean_dec(v_a_1709_);
lean_dec(v_a_1705_);
lean_dec(v_a_1701_);
lean_dec(v_a_1697_);
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
lean_inc(v_a_1720_);
lean_dec_ref_known(v___x_1719_, 1);
v_a_1634_ = v_a_1720_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v_a_1721_ = lean_ctor_get(v___x_1719_, 0);
lean_inc(v_a_1721_);
lean_dec_ref_known(v___x_1719_, 1);
v___x_1722_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16));
lean_inc(v_d_1602_);
v___x_1723_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1602_, v___x_1722_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; 
lean_dec(v_a_1721_);
lean_dec(v_a_1717_);
lean_dec(v_a_1713_);
lean_dec(v_a_1709_);
lean_dec(v_a_1705_);
lean_dec(v_a_1701_);
lean_dec(v_a_1697_);
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1724_);
lean_dec_ref_known(v___x_1723_, 1);
v_a_1634_ = v_a_1724_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v_a_1725_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1725_);
lean_dec_ref_known(v___x_1723_, 1);
v___x_1726_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17));
lean_inc(v_d_1602_);
v___x_1727_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1602_, v___x_1726_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; 
lean_dec(v_a_1725_);
lean_dec(v_a_1721_);
lean_dec(v_a_1717_);
lean_dec(v_a_1713_);
lean_dec(v_a_1709_);
lean_dec(v_a_1705_);
lean_dec(v_a_1701_);
lean_dec(v_a_1697_);
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___x_1727_, 1);
v_a_1634_ = v_a_1728_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v_a_1729_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_a_1729_);
lean_dec_ref_known(v___x_1727_, 1);
v___x_1730_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18));
lean_inc(v_d_1602_);
v___x_1731_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1602_, v___x_1730_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v_a_1732_; 
lean_dec(v_a_1729_);
lean_dec(v_a_1725_);
lean_dec(v_a_1721_);
lean_dec(v_a_1717_);
lean_dec(v_a_1713_);
lean_dec(v_a_1709_);
lean_dec(v_a_1705_);
lean_dec(v_a_1701_);
lean_dec(v_a_1697_);
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1732_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_a_1732_);
lean_dec_ref_known(v___x_1731_, 1);
v_a_1634_ = v_a_1732_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v_a_1733_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_a_1733_);
lean_dec_ref_known(v___x_1731_, 1);
v___x_1734_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19));
lean_inc(v_d_1602_);
v___x_1735_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1602_, v___x_1734_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; 
lean_dec(v_a_1733_);
lean_dec(v_a_1729_);
lean_dec(v_a_1725_);
lean_dec(v_a_1721_);
lean_dec(v_a_1717_);
lean_dec(v_a_1713_);
lean_dec(v_a_1709_);
lean_dec(v_a_1705_);
lean_dec(v_a_1701_);
lean_dec(v_a_1697_);
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref_known(v___x_1735_, 1);
v_a_1634_ = v_a_1736_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v_a_1737_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1737_);
lean_dec_ref_known(v___x_1735_, 1);
v___x_1738_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20));
lean_inc(v_d_1602_);
v___x_1739_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1602_, v___x_1738_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_a_1740_; 
lean_dec(v_a_1737_);
lean_dec(v_a_1733_);
lean_dec(v_a_1729_);
lean_dec(v_a_1725_);
lean_dec(v_a_1721_);
lean_dec(v_a_1717_);
lean_dec(v_a_1713_);
lean_dec(v_a_1709_);
lean_dec(v_a_1705_);
lean_dec(v_a_1701_);
lean_dec(v_a_1697_);
lean_dec(v_a_1693_);
lean_dec(v_a_1689_);
lean_dec(v_a_1685_);
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec(v_a_1673_);
lean_dec(v_a_1669_);
lean_dec(v_a_1665_);
lean_dec(v_a_1661_);
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
lean_inc(v_a_1740_);
lean_dec_ref_known(v___x_1739_, 1);
v_a_1634_ = v_a_1740_;
goto v___jp_1633_;
}
else
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1766_; 
lean_dec(v_d_1602_);
v_a_1741_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1743_ = v___x_1739_;
v_isShared_1744_ = v_isSharedCheck_1766_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1739_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1766_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1745_; uint8_t v___x_1746_; uint8_t v___x_1747_; uint8_t v___x_1748_; uint8_t v___x_1749_; uint8_t v___x_1750_; double v___x_1751_; double v___x_1752_; double v___x_1753_; double v___x_1754_; double v___x_1755_; double v___x_1756_; double v___x_1757_; double v___x_1758_; double v___x_1759_; double v___x_1760_; uint8_t v___x_1761_; double v___x_1762_; lean_object* v___x_1764_; 
v___x_1745_ = lean_alloc_ctor(0, 4, 94);
lean_ctor_set(v___x_1745_, 0, v_a_1661_);
lean_ctor_set(v___x_1745_, 1, v_a_1665_);
lean_ctor_set(v___x_1745_, 2, v_a_1669_);
lean_ctor_set(v___x_1745_, 3, v_a_1733_);
v___x_1746_ = lean_unbox(v_a_1673_);
lean_dec(v_a_1673_);
lean_ctor_set_uint8(v___x_1745_, sizeof(void*)*4 + 88, v___x_1746_);
v___x_1747_ = lean_unbox(v_a_1677_);
lean_dec(v_a_1677_);
lean_ctor_set_uint8(v___x_1745_, sizeof(void*)*4 + 89, v___x_1747_);
v___x_1748_ = lean_unbox(v_a_1681_);
lean_dec(v_a_1681_);
lean_ctor_set_uint8(v___x_1745_, sizeof(void*)*4 + 90, v___x_1748_);
v___x_1749_ = lean_unbox(v_a_1685_);
lean_dec(v_a_1685_);
lean_ctor_set_uint8(v___x_1745_, sizeof(void*)*4 + 91, v___x_1749_);
v___x_1750_ = lean_unbox(v_a_1689_);
lean_dec(v_a_1689_);
lean_ctor_set_uint8(v___x_1745_, sizeof(void*)*4 + 92, v___x_1750_);
v___x_1751_ = lean_unbox_float(v_a_1693_);
lean_dec(v_a_1693_);
lean_ctor_set_float(v___x_1745_, sizeof(void*)*4, v___x_1751_);
v___x_1752_ = lean_unbox_float(v_a_1697_);
lean_dec(v_a_1697_);
lean_ctor_set_float(v___x_1745_, sizeof(void*)*4 + 8, v___x_1752_);
v___x_1753_ = lean_unbox_float(v_a_1701_);
lean_dec(v_a_1701_);
lean_ctor_set_float(v___x_1745_, sizeof(void*)*4 + 16, v___x_1753_);
v___x_1754_ = lean_unbox_float(v_a_1705_);
lean_dec(v_a_1705_);
lean_ctor_set_float(v___x_1745_, sizeof(void*)*4 + 24, v___x_1754_);
v___x_1755_ = lean_unbox_float(v_a_1709_);
lean_dec(v_a_1709_);
lean_ctor_set_float(v___x_1745_, sizeof(void*)*4 + 32, v___x_1755_);
v___x_1756_ = lean_unbox_float(v_a_1713_);
lean_dec(v_a_1713_);
lean_ctor_set_float(v___x_1745_, sizeof(void*)*4 + 40, v___x_1756_);
v___x_1757_ = lean_unbox_float(v_a_1717_);
lean_dec(v_a_1717_);
lean_ctor_set_float(v___x_1745_, sizeof(void*)*4 + 48, v___x_1757_);
v___x_1758_ = lean_unbox_float(v_a_1721_);
lean_dec(v_a_1721_);
lean_ctor_set_float(v___x_1745_, sizeof(void*)*4 + 56, v___x_1758_);
v___x_1759_ = lean_unbox_float(v_a_1725_);
lean_dec(v_a_1725_);
lean_ctor_set_float(v___x_1745_, sizeof(void*)*4 + 64, v___x_1759_);
v___x_1760_ = lean_unbox_float(v_a_1729_);
lean_dec(v_a_1729_);
lean_ctor_set_float(v___x_1745_, sizeof(void*)*4 + 72, v___x_1760_);
v___x_1761_ = lean_unbox(v_a_1737_);
lean_dec(v_a_1737_);
lean_ctor_set_uint8(v___x_1745_, sizeof(void*)*4 + 93, v___x_1761_);
v___x_1762_ = lean_unbox_float(v_a_1741_);
lean_dec(v_a_1741_);
lean_ctor_set_float(v___x_1745_, sizeof(void*)*4 + 80, v___x_1762_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set_tag(v___x_1743_, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1745_);
v___x_1764_ = v___x_1743_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1745_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_1604_:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1607_ = lean_string_append(v___y_1605_, v___y_1606_);
lean_dec_ref(v___y_1606_);
v___x_1608_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
v___x_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
return v___x_1609_;
}
v___jp_1610_:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; uint8_t v___x_1624_; 
v___x_1613_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_1614_ = lean_string_append(v___x_1613_, v_context_1601_);
v___x_1615_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_1616_ = lean_string_append(v___x_1614_, v___x_1615_);
v___x_1617_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___closed__1));
v___x_1618_ = lean_string_append(v___x_1616_, v___x_1617_);
v___x_1619_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3));
v___x_1620_ = lean_string_append(v___x_1618_, v___x_1619_);
v___x_1621_ = lean_string_append(v___x_1620_, v_received_1612_);
lean_dec_ref(v_received_1612_);
v___x_1622_ = lean_string_utf8_byte_size(v___y_1611_);
v___x_1623_ = lean_unsigned_to_nat(0u);
v___x_1624_ = lean_nat_dec_eq(v___x_1622_, v___x_1623_);
if (v___x_1624_ == 0)
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1625_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__0));
v___x_1626_ = lean_string_append(v___x_1625_, v___y_1611_);
lean_dec_ref(v___y_1611_);
v___x_1627_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__1));
v___x_1628_ = lean_string_append(v___x_1626_, v___x_1627_);
v___y_1605_ = v___x_1621_;
v___y_1606_ = v___x_1628_;
goto v___jp_1604_;
}
else
{
lean_object* v___x_1629_; 
lean_dec_ref(v___y_1611_);
v___x_1629_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___y_1605_ = v___x_1621_;
v___y_1606_ = v___x_1629_;
goto v___jp_1604_;
}
}
v___jp_1630_:
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Lasm_JS_Data_describe(v_d_1602_);
v___y_1611_ = v___y_1631_;
v_received_1612_ = v___x_1632_;
goto v___jp_1610_;
}
v___jp_1633_:
{
if (lean_obj_tag(v_d_1602_) == 9)
{
lean_object* v_value_1635_; lean_object* v_description_1636_; lean_object* v___x_1637_; uint8_t v___x_1638_; 
v_value_1635_ = lean_ctor_get(v_d_1602_, 0);
v_description_1636_ = lean_ctor_get(v_d_1602_, 1);
v___x_1637_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_1638_ = lean_string_dec_eq(v_description_1636_, v___x_1637_);
if (v___x_1638_ == 0)
{
v___y_1631_ = v_a_1634_;
goto v___jp_1630_;
}
else
{
lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1655_; 
lean_inc(v_value_1635_);
v_isSharedCheck_1655_ = !lean_is_exclusive(v_d_1602_);
if (v_isSharedCheck_1655_ == 0)
{
lean_object* v_unused_1656_; lean_object* v_unused_1657_; 
v_unused_1656_ = lean_ctor_get(v_d_1602_, 1);
lean_dec(v_unused_1656_);
v_unused_1657_ = lean_ctor_get(v_d_1602_, 0);
lean_dec(v_unused_1657_);
v___x_1640_ = v_d_1602_;
v_isShared_1641_ = v_isSharedCheck_1655_;
goto v_resetjp_1639_;
}
else
{
lean_dec(v_d_1602_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1655_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
uint32_t v___x_1642_; uint64_t v___x_1643_; lean_object* v___x_1645_; 
v___x_1642_ = 206;
v___x_1643_ = 0ULL;
lean_inc(v_value_1635_);
if (v_isShared_1641_ == 0)
{
lean_ctor_set(v___x_1640_, 1, v___x_1637_);
v___x_1645_ = v___x_1640_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_value_1635_);
lean_ctor_set(v_reuseFailAlloc_1654_, 1, v___x_1637_);
v___x_1645_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
uint32_t v___x_1646_; lean_object* v___x_1647_; 
v___x_1646_ = lasm_js_value_handle(v_value_1635_);
lean_dec(v_value_1635_);
v___x_1647_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1642_, v___x_1643_, v___x_1645_, v___x_1646_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1648_; uint8_t v___x_1649_; 
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_a_1648_);
lean_dec_ref_known(v___x_1647_, 1);
v___x_1649_ = lean_string_validate_utf8(v_a_1648_);
if (v___x_1649_ == 0)
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
lean_dec(v_a_1648_);
v___x_1650_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8);
v___x_1651_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1650_);
v___y_1611_ = v_a_1634_;
v_received_1612_ = v___x_1651_;
goto v___jp_1610_;
}
else
{
lean_object* v___x_1652_; 
v___x_1652_ = lean_string_from_utf8_unchecked(v_a_1648_);
v___y_1611_ = v_a_1634_;
v_received_1612_ = v___x_1652_;
goto v___jp_1610_;
}
}
else
{
lean_object* v___x_1653_; 
lean_dec_ref_known(v___x_1647_, 1);
v___x_1653_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9));
v___y_1611_ = v_a_1634_;
v_received_1612_ = v___x_1653_;
goto v___jp_1610_;
}
}
}
}
}
else
{
v___y_1631_ = v_a_1634_;
goto v___jp_1630_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___boxed(lean_object* v_context_1767_, lean_object* v_d_1768_, lean_object* v_a_1769_){
_start:
{
lean_object* v_res_1770_; 
v_res_1770_ = l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0(v_context_1767_, v_d_1768_);
lean_dec_ref(v_context_1767_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_info(lean_object* v_e_1772_){
_start:
{
lean_object* v___x_1774_; 
v___x_1774_ = l_Lasm_Web_Raw_eventInfo(v_e_1772_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v_a_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v_a_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_a_1775_);
lean_dec_ref_known(v___x_1774_, 1);
v___x_1776_ = ((lean_object*)(l_Lasm_Web_Event_info___closed__0));
v___x_1777_ = l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0(v___x_1776_, v_a_1775_);
return v___x_1777_;
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
v_a_1778_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1774_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1774_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1778_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_info___boxed(lean_object* v_e_1786_, lean_object* v_a_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lasm_Web_Event_info(v_e_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0(lean_object* v_context_1789_, lean_object* v_bytes_1790_){
_start:
{
lean_object* v___x_1792_; 
v___x_1792_ = l_Lasm_JS_Wire_decode(v_bytes_1790_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; lean_object* v___x_1794_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1792_, 1);
v___x_1794_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(v_context_1789_, v_a_1793_);
return v___x_1794_;
}
else
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
v_a_1795_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1797_ = v___x_1792_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1792_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0___boxed(lean_object* v_context_1803_, lean_object* v_bytes_1804_, lean_object* v_a_1805_){
_start:
{
lean_object* v_res_1806_; 
v_res_1806_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0(v_context_1803_, v_bytes_1804_);
lean_dec_ref(v_bytes_1804_);
lean_dec_ref(v_context_1803_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(lean_object* v_o_1808_, lean_object* v_key_1809_){
_start:
{
uint32_t v___x_1811_; uint32_t v___x_1812_; uint64_t v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1811_ = 203;
v___x_1812_ = lasm_js_value_handle(v_o_1808_);
v___x_1813_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
lean_inc_ref(v_key_1809_);
v___x_1814_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1814_, 0, v_key_1809_);
v___x_1815_ = l_Lasm_JS_Wire_encode(v___x_1814_);
v___x_1816_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_1817_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1817_, 0, v_o_1808_);
lean_ctor_set(v___x_1817_, 1, v___x_1816_);
v___x_1818_ = lasm_js_call(v___x_1811_, v___x_1812_, v___x_1813_, v___x_1815_, v___x_1817_);
lean_dec_ref_known(v___x_1817_, 2);
lean_dec_ref(v___x_1815_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1819_);
lean_dec_ref_known(v___x_1818_, 1);
v___x_1820_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_1821_ = l_String_quote(v_key_1809_);
v___x_1822_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1821_);
v___x_1823_ = lean_unsigned_to_nat(120u);
v___x_1824_ = lean_unsigned_to_nat(0u);
v___x_1825_ = l_Std_Format_pretty(v___x_1822_, v___x_1823_, v___x_1824_, v___x_1824_);
v___x_1826_ = lean_string_append(v___x_1820_, v___x_1825_);
lean_dec_ref(v___x_1825_);
v___x_1827_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0(v___x_1826_, v_a_1819_);
lean_dec(v_a_1819_);
lean_dec_ref(v___x_1826_);
return v___x_1827_;
}
else
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1835_; 
lean_dec_ref(v_key_1809_);
v_a_1828_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1830_ = v___x_1818_;
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v___x_1818_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1833_; 
if (v_isShared_1831_ == 0)
{
v___x_1833_ = v___x_1830_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_a_1828_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___boxed(lean_object* v_o_1836_, lean_object* v_key_1837_, lean_object* v_a_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(v_o_1836_, v_key_1837_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_type(lean_object* v_e_1840_){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1842_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0));
v___x_1843_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(v_e_1840_, v___x_1842_);
return v___x_1843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_type___boxed(lean_object* v_e_1844_, lean_object* v_a_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l_Lasm_Web_Event_type(v_e_1844_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1(lean_object* v_context_1848_, lean_object* v_d_1849_){
_start:
{
lean_object* v_received_1855_; 
switch(lean_obj_tag(v_d_1849_))
{
case 1:
{
goto v___jp_1851_;
}
case 0:
{
goto v___jp_1851_;
}
default: 
{
if (lean_obj_tag(v_d_1849_) == 4)
{
lean_object* v_s_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v_s_1869_ = lean_ctor_get(v_d_1849_, 0);
lean_inc_ref(v_s_1869_);
lean_dec_ref_known(v_d_1849_, 1);
v___x_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1870_, 0, v_s_1869_);
v___x_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1871_, 0, v___x_1870_);
return v___x_1871_;
}
else
{
if (lean_obj_tag(v_d_1849_) == 9)
{
lean_object* v_value_1872_; lean_object* v_description_1873_; lean_object* v___x_1874_; uint8_t v___x_1875_; 
v_value_1872_ = lean_ctor_get(v_d_1849_, 0);
v_description_1873_ = lean_ctor_get(v_d_1849_, 1);
v___x_1874_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_1875_ = lean_string_dec_eq(v_description_1873_, v___x_1874_);
if (v___x_1875_ == 0)
{
goto v___jp_1867_;
}
else
{
uint32_t v___x_1876_; uint64_t v___x_1877_; lean_object* v___x_1878_; uint32_t v___x_1879_; lean_object* v___x_1880_; 
lean_inc_n(v_value_1872_, 2);
lean_dec_ref_known(v_d_1849_, 2);
v___x_1876_ = 206;
v___x_1877_ = 0ULL;
v___x_1878_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1878_, 0, v_value_1872_);
lean_ctor_set(v___x_1878_, 1, v___x_1874_);
v___x_1879_ = lasm_js_value_handle(v_value_1872_);
lean_dec(v_value_1872_);
v___x_1880_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1876_, v___x_1877_, v___x_1878_, v___x_1879_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; uint8_t v___x_1882_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v___x_1880_, 1);
v___x_1882_ = lean_string_validate_utf8(v_a_1881_);
if (v___x_1882_ == 0)
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
lean_dec(v_a_1881_);
v___x_1883_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8);
v___x_1884_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1883_);
v_received_1855_ = v___x_1884_;
goto v___jp_1854_;
}
else
{
lean_object* v___x_1885_; 
v___x_1885_ = lean_string_from_utf8_unchecked(v_a_1881_);
v_received_1855_ = v___x_1885_;
goto v___jp_1854_;
}
}
else
{
lean_object* v___x_1886_; 
lean_dec_ref_known(v___x_1880_, 1);
v___x_1886_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9));
v_received_1855_ = v___x_1886_;
goto v___jp_1854_;
}
}
}
else
{
goto v___jp_1867_;
}
}
}
}
v___jp_1851_:
{
lean_object* v___x_1852_; lean_object* v___x_1853_; 
v___x_1852_ = lean_box(0);
v___x_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1852_);
return v___x_1853_;
}
v___jp_1854_:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1856_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_1857_ = lean_string_append(v___x_1856_, v_context_1848_);
v___x_1858_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_1859_ = lean_string_append(v___x_1857_, v___x_1858_);
v___x_1860_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___closed__0));
v___x_1861_ = lean_string_append(v___x_1859_, v___x_1860_);
v___x_1862_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3));
v___x_1863_ = lean_string_append(v___x_1861_, v___x_1862_);
v___x_1864_ = lean_string_append(v___x_1863_, v_received_1855_);
lean_dec_ref(v_received_1855_);
v___x_1865_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1864_);
v___x_1866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1865_);
return v___x_1866_;
}
v___jp_1867_:
{
lean_object* v___x_1868_; 
v___x_1868_ = l_Lasm_JS_Data_describe(v_d_1849_);
v_received_1855_ = v___x_1868_;
goto v___jp_1854_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1887_, lean_object* v_d_1888_, lean_object* v_a_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1(v_context_1887_, v_d_1888_);
lean_dec_ref(v_context_1887_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0(lean_object* v_context_1891_, lean_object* v_bytes_1892_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l_Lasm_JS_Wire_decode(v_bytes_1892_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1896_; 
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_a_1895_);
lean_dec_ref_known(v___x_1894_, 1);
v___x_1896_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1(v_context_1891_, v_a_1895_);
return v___x_1896_;
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
v_a_1897_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v___x_1894_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1894_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_a_1897_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0___boxed(lean_object* v_context_1905_, lean_object* v_bytes_1906_, lean_object* v_a_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0(v_context_1905_, v_bytes_1906_);
lean_dec_ref(v_bytes_1906_);
lean_dec_ref(v_context_1905_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0(lean_object* v_o_1909_, lean_object* v_key_1910_){
_start:
{
uint32_t v___x_1912_; uint32_t v___x_1913_; uint64_t v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1912_ = 203;
v___x_1913_ = lasm_js_value_handle(v_o_1909_);
v___x_1914_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
lean_inc_ref(v_key_1910_);
v___x_1915_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1915_, 0, v_key_1910_);
v___x_1916_ = l_Lasm_JS_Wire_encode(v___x_1915_);
v___x_1917_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_1918_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1918_, 0, v_o_1909_);
lean_ctor_set(v___x_1918_, 1, v___x_1917_);
v___x_1919_ = lasm_js_call(v___x_1912_, v___x_1913_, v___x_1914_, v___x_1916_, v___x_1918_);
lean_dec_ref_known(v___x_1918_, 2);
lean_dec_ref(v___x_1916_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1919_, 1);
v___x_1921_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_1922_ = l_String_quote(v_key_1910_);
v___x_1923_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1923_, 0, v___x_1922_);
v___x_1924_ = lean_unsigned_to_nat(120u);
v___x_1925_ = lean_unsigned_to_nat(0u);
v___x_1926_ = l_Std_Format_pretty(v___x_1923_, v___x_1924_, v___x_1925_, v___x_1925_);
v___x_1927_ = lean_string_append(v___x_1921_, v___x_1926_);
lean_dec_ref(v___x_1926_);
v___x_1928_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0(v___x_1927_, v_a_1920_);
lean_dec(v_a_1920_);
lean_dec_ref(v___x_1927_);
return v___x_1928_;
}
else
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1936_; 
lean_dec_ref(v_key_1910_);
v_a_1929_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1931_ = v___x_1919_;
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___x_1919_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1929_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0___boxed(lean_object* v_o_1937_, lean_object* v_key_1938_, lean_object* v_a_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0(v_o_1937_, v_key_1938_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_key(lean_object* v_e_1941_){
_start:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1943_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1));
v___x_1944_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0(v_e_1941_, v___x_1943_);
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1957_; 
v_a_1945_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1947_ = v___x_1944_;
v_isShared_1948_ = v_isSharedCheck_1957_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1944_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1957_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
if (lean_obj_tag(v_a_1945_) == 0)
{
lean_object* v___x_1949_; lean_object* v___x_1951_; 
v___x_1949_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 0, v___x_1949_);
v___x_1951_ = v___x_1947_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
else
{
lean_object* v_val_1953_; lean_object* v___x_1955_; 
v_val_1953_ = lean_ctor_get(v_a_1945_, 0);
lean_inc(v_val_1953_);
lean_dec_ref_known(v_a_1945_, 1);
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 0, v_val_1953_);
v___x_1955_ = v___x_1947_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_val_1953_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
v_a_1958_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1944_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1944_);
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
LEAN_EXPORT lean_object* l_Lasm_Web_Event_key___boxed(lean_object* v_e_1966_, lean_object* v_a_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = l_Lasm_Web_Event_key(v_e_1966_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetValue(lean_object* v_e_1969_){
_start:
{
lean_object* v___x_1971_; 
v___x_1971_ = l_Lasm_Web_Raw_targetValue(v_e_1969_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetValue___boxed(lean_object* v_e_1972_, lean_object* v_a_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Lasm_Web_Event_targetValue(v_e_1972_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetChecked(lean_object* v_e_1975_){
_start:
{
lean_object* v___x_1977_; 
v___x_1977_ = l_Lasm_Web_Raw_targetChecked(v_e_1975_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetChecked___boxed(lean_object* v_e_1978_, lean_object* v_a_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lasm_Web_Event_targetChecked(v_e_1978_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1(lean_object* v_context_1982_, lean_object* v_d_1983_){
_start:
{
lean_object* v_received_1989_; 
switch(lean_obj_tag(v_d_1983_))
{
case 1:
{
goto v___jp_1985_;
}
case 0:
{
goto v___jp_1985_;
}
default: 
{
if (lean_obj_tag(v_d_1983_) == 9)
{
lean_object* v_value_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v_value_2003_ = lean_ctor_get(v_d_1983_, 0);
lean_inc(v_value_2003_);
lean_dec_ref_known(v_d_1983_, 2);
v___x_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2004_, 0, v_value_2003_);
v___x_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2005_, 0, v___x_2004_);
return v___x_2005_;
}
else
{
if (lean_obj_tag(v_d_1983_) == 9)
{
lean_object* v_value_2006_; lean_object* v_description_2007_; lean_object* v___x_2008_; uint8_t v___x_2009_; 
v_value_2006_ = lean_ctor_get(v_d_1983_, 0);
v_description_2007_ = lean_ctor_get(v_d_1983_, 1);
v___x_2008_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_2009_ = lean_string_dec_eq(v_description_2007_, v___x_2008_);
if (v___x_2009_ == 0)
{
goto v___jp_2001_;
}
else
{
uint32_t v___x_2010_; uint64_t v___x_2011_; lean_object* v___x_2012_; uint32_t v___x_2013_; lean_object* v___x_2014_; 
lean_inc_n(v_value_2006_, 2);
lean_dec_ref_known(v_d_1983_, 2);
v___x_2010_ = 206;
v___x_2011_ = 0ULL;
v___x_2012_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2012_, 0, v_value_2006_);
lean_ctor_set(v___x_2012_, 1, v___x_2008_);
v___x_2013_ = lasm_js_value_handle(v_value_2006_);
lean_dec(v_value_2006_);
v___x_2014_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2010_, v___x_2011_, v___x_2012_, v___x_2013_);
if (lean_obj_tag(v___x_2014_) == 0)
{
lean_object* v_a_2015_; uint8_t v___x_2016_; 
v_a_2015_ = lean_ctor_get(v___x_2014_, 0);
lean_inc(v_a_2015_);
lean_dec_ref_known(v___x_2014_, 1);
v___x_2016_ = lean_string_validate_utf8(v_a_2015_);
if (v___x_2016_ == 0)
{
lean_object* v___x_2017_; lean_object* v___x_2018_; 
lean_dec(v_a_2015_);
v___x_2017_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8);
v___x_2018_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2017_);
v_received_1989_ = v___x_2018_;
goto v___jp_1988_;
}
else
{
lean_object* v___x_2019_; 
v___x_2019_ = lean_string_from_utf8_unchecked(v_a_2015_);
v_received_1989_ = v___x_2019_;
goto v___jp_1988_;
}
}
else
{
lean_object* v___x_2020_; 
lean_dec_ref_known(v___x_2014_, 1);
v___x_2020_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9));
v_received_1989_ = v___x_2020_;
goto v___jp_1988_;
}
}
}
else
{
goto v___jp_2001_;
}
}
}
}
v___jp_1985_:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___x_1986_ = lean_box(0);
v___x_1987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1986_);
return v___x_1987_;
}
v___jp_1988_:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1990_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_1991_ = lean_string_append(v___x_1990_, v_context_1982_);
v___x_1992_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_1993_ = lean_string_append(v___x_1991_, v___x_1992_);
v___x_1994_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___closed__0));
v___x_1995_ = lean_string_append(v___x_1993_, v___x_1994_);
v___x_1996_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3));
v___x_1997_ = lean_string_append(v___x_1995_, v___x_1996_);
v___x_1998_ = lean_string_append(v___x_1997_, v_received_1989_);
lean_dec_ref(v_received_1989_);
v___x_1999_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1999_, 0, v___x_1998_);
v___x_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1999_);
return v___x_2000_;
}
v___jp_2001_:
{
lean_object* v___x_2002_; 
v___x_2002_ = l_Lasm_JS_Data_describe(v_d_1983_);
v_received_1989_ = v___x_2002_;
goto v___jp_1988_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2021_, lean_object* v_d_2022_, lean_object* v_a_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1(v_context_2021_, v_d_2022_);
lean_dec_ref(v_context_2021_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0(lean_object* v_context_2025_, lean_object* v_bytes_2026_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = l_Lasm_JS_Wire_decode(v_bytes_2026_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2030_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
lean_inc(v_a_2029_);
lean_dec_ref_known(v___x_2028_, 1);
v___x_2030_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1(v_context_2025_, v_a_2029_);
return v___x_2030_;
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
v_a_2031_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___x_2028_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2028_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2036_; 
if (v_isShared_2034_ == 0)
{
v___x_2036_ = v___x_2033_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2031_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0___boxed(lean_object* v_context_2039_, lean_object* v_bytes_2040_, lean_object* v_a_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0(v_context_2039_, v_bytes_2040_);
lean_dec_ref(v_bytes_2040_);
lean_dec_ref(v_context_2039_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(lean_object* v_o_2043_, lean_object* v_key_2044_){
_start:
{
uint32_t v___x_2046_; uint32_t v___x_2047_; uint64_t v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2046_ = 203;
v___x_2047_ = lasm_js_value_handle(v_o_2043_);
v___x_2048_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
lean_inc_ref(v_key_2044_);
v___x_2049_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2049_, 0, v_key_2044_);
v___x_2050_ = l_Lasm_JS_Wire_encode(v___x_2049_);
v___x_2051_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_2052_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2052_, 0, v_o_2043_);
lean_ctor_set(v___x_2052_, 1, v___x_2051_);
v___x_2053_ = lasm_js_call(v___x_2046_, v___x_2047_, v___x_2048_, v___x_2050_, v___x_2052_);
lean_dec_ref_known(v___x_2052_, 2);
lean_dec_ref(v___x_2050_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v_a_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v_a_2054_ = lean_ctor_get(v___x_2053_, 0);
lean_inc(v_a_2054_);
lean_dec_ref_known(v___x_2053_, 1);
v___x_2055_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_2056_ = l_String_quote(v_key_2044_);
v___x_2057_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
v___x_2058_ = lean_unsigned_to_nat(120u);
v___x_2059_ = lean_unsigned_to_nat(0u);
v___x_2060_ = l_Std_Format_pretty(v___x_2057_, v___x_2058_, v___x_2059_, v___x_2059_);
v___x_2061_ = lean_string_append(v___x_2055_, v___x_2060_);
lean_dec_ref(v___x_2060_);
v___x_2062_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0(v___x_2061_, v_a_2054_);
lean_dec(v_a_2054_);
lean_dec_ref(v___x_2061_);
return v___x_2062_;
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_dec_ref(v_key_2044_);
v_a_2063_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2053_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2053_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0___boxed(lean_object* v_o_2071_, lean_object* v_key_2072_, lean_object* v_a_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(v_o_2071_, v_key_2072_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_target(lean_object* v_e_2076_){
_start:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2078_ = ((lean_object*)(l_Lasm_Web_Event_target___closed__0));
v___x_2079_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(v_e_2076_, v___x_2078_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_target___boxed(lean_object* v_e_2080_, lean_object* v_a_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l_Lasm_Web_Event_target(v_e_2080_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_currentTarget(lean_object* v_e_2084_){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2086_ = ((lean_object*)(l_Lasm_Web_Event_currentTarget___closed__0));
v___x_2087_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(v_e_2084_, v___x_2086_);
return v___x_2087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_currentTarget___boxed(lean_object* v_e_2088_, lean_object* v_a_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_Lasm_Web_Event_currentTarget(v_e_2088_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1(lean_object* v_context_2092_, lean_object* v_d_2093_){
_start:
{
lean_object* v_received_2099_; 
switch(lean_obj_tag(v_d_2093_))
{
case 1:
{
goto v___jp_2095_;
}
case 0:
{
goto v___jp_2095_;
}
default: 
{
if (lean_obj_tag(v_d_2093_) == 9)
{
lean_object* v_value_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v_value_2113_ = lean_ctor_get(v_d_2093_, 0);
lean_inc(v_value_2113_);
lean_dec_ref_known(v_d_2093_, 2);
v___x_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2114_, 0, v_value_2113_);
v___x_2115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2114_);
return v___x_2115_;
}
else
{
if (lean_obj_tag(v_d_2093_) == 9)
{
lean_object* v_value_2116_; lean_object* v_description_2117_; lean_object* v___x_2118_; uint8_t v___x_2119_; 
v_value_2116_ = lean_ctor_get(v_d_2093_, 0);
v_description_2117_ = lean_ctor_get(v_d_2093_, 1);
v___x_2118_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_2119_ = lean_string_dec_eq(v_description_2117_, v___x_2118_);
if (v___x_2119_ == 0)
{
goto v___jp_2111_;
}
else
{
uint32_t v___x_2120_; uint64_t v___x_2121_; lean_object* v___x_2122_; uint32_t v___x_2123_; lean_object* v___x_2124_; 
lean_inc_n(v_value_2116_, 2);
lean_dec_ref_known(v_d_2093_, 2);
v___x_2120_ = 206;
v___x_2121_ = 0ULL;
v___x_2122_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2122_, 0, v_value_2116_);
lean_ctor_set(v___x_2122_, 1, v___x_2118_);
v___x_2123_ = lasm_js_value_handle(v_value_2116_);
lean_dec(v_value_2116_);
v___x_2124_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2120_, v___x_2121_, v___x_2122_, v___x_2123_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v_a_2125_; uint8_t v___x_2126_; 
v_a_2125_ = lean_ctor_get(v___x_2124_, 0);
lean_inc(v_a_2125_);
lean_dec_ref_known(v___x_2124_, 1);
v___x_2126_ = lean_string_validate_utf8(v_a_2125_);
if (v___x_2126_ == 0)
{
lean_object* v___x_2127_; lean_object* v___x_2128_; 
lean_dec(v_a_2125_);
v___x_2127_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8);
v___x_2128_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2127_);
v_received_2099_ = v___x_2128_;
goto v___jp_2098_;
}
else
{
lean_object* v___x_2129_; 
v___x_2129_ = lean_string_from_utf8_unchecked(v_a_2125_);
v_received_2099_ = v___x_2129_;
goto v___jp_2098_;
}
}
else
{
lean_object* v___x_2130_; 
lean_dec_ref_known(v___x_2124_, 1);
v___x_2130_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9));
v_received_2099_ = v___x_2130_;
goto v___jp_2098_;
}
}
}
else
{
goto v___jp_2111_;
}
}
}
}
v___jp_2095_:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2096_ = lean_box(0);
v___x_2097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2096_);
return v___x_2097_;
}
v___jp_2098_:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; 
v___x_2100_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_2101_ = lean_string_append(v___x_2100_, v_context_2092_);
v___x_2102_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_2103_ = lean_string_append(v___x_2101_, v___x_2102_);
v___x_2104_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___closed__0));
v___x_2105_ = lean_string_append(v___x_2103_, v___x_2104_);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3));
v___x_2107_ = lean_string_append(v___x_2105_, v___x_2106_);
v___x_2108_ = lean_string_append(v___x_2107_, v_received_2099_);
lean_dec_ref(v_received_2099_);
v___x_2109_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2108_);
v___x_2110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2109_);
return v___x_2110_;
}
v___jp_2111_:
{
lean_object* v___x_2112_; 
v___x_2112_ = l_Lasm_JS_Data_describe(v_d_2093_);
v_received_2099_ = v___x_2112_;
goto v___jp_2098_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2131_, lean_object* v_d_2132_, lean_object* v_a_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1(v_context_2131_, v_d_2132_);
lean_dec_ref(v_context_2131_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0(lean_object* v_context_2135_, lean_object* v_bytes_2136_){
_start:
{
lean_object* v___x_2138_; 
v___x_2138_ = l_Lasm_JS_Wire_decode(v_bytes_2136_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v___x_2140_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
lean_inc(v_a_2139_);
lean_dec_ref_known(v___x_2138_, 1);
v___x_2140_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1(v_context_2135_, v_a_2139_);
return v___x_2140_;
}
else
{
lean_object* v_a_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2148_; 
v_a_2141_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2143_ = v___x_2138_;
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_a_2141_);
lean_dec(v___x_2138_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v___x_2146_; 
if (v_isShared_2144_ == 0)
{
v___x_2146_ = v___x_2143_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_a_2141_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0___boxed(lean_object* v_context_2149_, lean_object* v_bytes_2150_, lean_object* v_a_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0(v_context_2149_, v_bytes_2150_);
lean_dec_ref(v_bytes_2150_);
lean_dec_ref(v_context_2149_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0(lean_object* v_o_2153_, lean_object* v_key_2154_){
_start:
{
uint32_t v___x_2156_; uint32_t v___x_2157_; uint64_t v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2156_ = 203;
v___x_2157_ = lasm_js_value_handle(v_o_2153_);
v___x_2158_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
lean_inc_ref(v_key_2154_);
v___x_2159_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2159_, 0, v_key_2154_);
v___x_2160_ = l_Lasm_JS_Wire_encode(v___x_2159_);
v___x_2161_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_2162_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2162_, 0, v_o_2153_);
lean_ctor_set(v___x_2162_, 1, v___x_2161_);
v___x_2163_ = lasm_js_call(v___x_2156_, v___x_2157_, v___x_2158_, v___x_2160_, v___x_2162_);
lean_dec_ref_known(v___x_2162_, 2);
lean_dec_ref(v___x_2160_);
if (lean_obj_tag(v___x_2163_) == 0)
{
lean_object* v_a_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v_a_2164_ = lean_ctor_get(v___x_2163_, 0);
lean_inc(v_a_2164_);
lean_dec_ref_known(v___x_2163_, 1);
v___x_2165_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_2166_ = l_String_quote(v_key_2154_);
v___x_2167_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
v___x_2168_ = lean_unsigned_to_nat(120u);
v___x_2169_ = lean_unsigned_to_nat(0u);
v___x_2170_ = l_Std_Format_pretty(v___x_2167_, v___x_2168_, v___x_2169_, v___x_2169_);
v___x_2171_ = lean_string_append(v___x_2165_, v___x_2170_);
lean_dec_ref(v___x_2170_);
v___x_2172_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0(v___x_2171_, v_a_2164_);
lean_dec(v_a_2164_);
lean_dec_ref(v___x_2171_);
return v___x_2172_;
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
lean_dec_ref(v_key_2154_);
v_a_2173_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2163_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2163_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0___boxed(lean_object* v_o_2181_, lean_object* v_key_2182_, lean_object* v_a_2183_){
_start:
{
lean_object* v_res_2184_; 
v_res_2184_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0(v_o_2181_, v_key_2182_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetElement(lean_object* v_e_2185_){
_start:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2187_ = ((lean_object*)(l_Lasm_Web_Event_target___closed__0));
v___x_2188_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0(v_e_2185_, v___x_2187_);
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetElement___boxed(lean_object* v_e_2189_, lean_object* v_a_2190_){
_start:
{
lean_object* v_res_2191_; 
v_res_2191_ = l_Lasm_Web_Event_targetElement(v_e_2189_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_preventDefault(lean_object* v_e_2193_){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2195_ = ((lean_object*)(l_Lasm_Web_Event_preventDefault___closed__0));
v___x_2196_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_2197_ = lean_box(0);
v___x_2198_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_e_2193_, v___x_2195_, v___x_2196_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2198_);
if (v_isSharedCheck_2205_ == 0)
{
lean_object* v_unused_2206_; 
v_unused_2206_ = lean_ctor_get(v___x_2198_, 0);
lean_dec(v_unused_2206_);
v___x_2200_ = v___x_2198_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_dec(v___x_2198_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
lean_ctor_set(v___x_2200_, 0, v___x_2197_);
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v___x_2197_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
else
{
return v___x_2198_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_preventDefault___boxed(lean_object* v_e_2207_, lean_object* v_a_2208_){
_start:
{
lean_object* v_res_2209_; 
v_res_2209_ = l_Lasm_Web_Event_preventDefault(v_e_2207_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopPropagation(lean_object* v_e_2211_){
_start:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2213_ = ((lean_object*)(l_Lasm_Web_Event_stopPropagation___closed__0));
v___x_2214_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_2215_ = lean_box(0);
v___x_2216_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_e_2211_, v___x_2213_, v___x_2214_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2223_; 
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2223_ == 0)
{
lean_object* v_unused_2224_; 
v_unused_2224_ = lean_ctor_get(v___x_2216_, 0);
lean_dec(v_unused_2224_);
v___x_2218_ = v___x_2216_;
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
else
{
lean_dec(v___x_2216_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
lean_object* v___x_2221_; 
if (v_isShared_2219_ == 0)
{
lean_ctor_set(v___x_2218_, 0, v___x_2215_);
v___x_2221_ = v___x_2218_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2215_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
else
{
return v___x_2216_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopPropagation___boxed(lean_object* v_e_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l_Lasm_Web_Event_stopPropagation(v_e_2225_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopImmediatePropagation(lean_object* v_e_2229_){
_start:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2231_ = ((lean_object*)(l_Lasm_Web_Event_stopImmediatePropagation___closed__0));
v___x_2232_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_2233_ = lean_box(0);
v___x_2234_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_e_2229_, v___x_2231_, v___x_2232_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2241_ == 0)
{
lean_object* v_unused_2242_; 
v_unused_2242_ = lean_ctor_get(v___x_2234_, 0);
lean_dec(v_unused_2242_);
v___x_2236_ = v___x_2234_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_dec(v___x_2234_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
lean_ctor_set(v___x_2236_, 0, v___x_2233_);
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v___x_2233_);
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
return v___x_2234_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopImmediatePropagation___boxed(lean_object* v_e_2243_, lean_object* v_a_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l_Lasm_Web_Event_stopImmediatePropagation(v_e_2243_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0(lean_object* v_context_2246_, lean_object* v_bytes_2247_){
_start:
{
lean_object* v___x_2249_; 
v___x_2249_ = l_Lasm_JS_Wire_decode(v_bytes_2247_);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v_a_2250_; lean_object* v___x_2251_; 
v_a_2250_ = lean_ctor_get(v___x_2249_, 0);
lean_inc(v_a_2250_);
lean_dec_ref_known(v___x_2249_, 1);
v___x_2251_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(v_context_2246_, v_a_2250_);
return v___x_2251_;
}
else
{
lean_object* v_a_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2259_; 
v_a_2252_ = lean_ctor_get(v___x_2249_, 0);
v_isSharedCheck_2259_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2259_ == 0)
{
v___x_2254_ = v___x_2249_;
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_a_2252_);
lean_dec(v___x_2249_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v___x_2257_; 
if (v_isShared_2255_ == 0)
{
v___x_2257_ = v___x_2254_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v_a_2252_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
return v___x_2257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0___boxed(lean_object* v_context_2260_, lean_object* v_bytes_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0(v_context_2260_, v_bytes_2261_);
lean_dec_ref(v_bytes_2261_);
lean_dec_ref(v_context_2260_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0(lean_object* v_o_2264_, lean_object* v_key_2265_){
_start:
{
uint32_t v___x_2267_; uint32_t v___x_2268_; uint64_t v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2267_ = 203;
v___x_2268_ = lasm_js_value_handle(v_o_2264_);
v___x_2269_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
lean_inc_ref(v_key_2265_);
v___x_2270_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2270_, 0, v_key_2265_);
v___x_2271_ = l_Lasm_JS_Wire_encode(v___x_2270_);
v___x_2272_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_2273_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2273_, 0, v_o_2264_);
lean_ctor_set(v___x_2273_, 1, v___x_2272_);
v___x_2274_ = lasm_js_call(v___x_2267_, v___x_2268_, v___x_2269_, v___x_2271_, v___x_2273_);
lean_dec_ref_known(v___x_2273_, 2);
lean_dec_ref(v___x_2271_);
if (lean_obj_tag(v___x_2274_) == 0)
{
lean_object* v_a_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; 
v_a_2275_ = lean_ctor_get(v___x_2274_, 0);
lean_inc(v_a_2275_);
lean_dec_ref_known(v___x_2274_, 1);
v___x_2276_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_2277_ = l_String_quote(v_key_2265_);
v___x_2278_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
v___x_2279_ = lean_unsigned_to_nat(120u);
v___x_2280_ = lean_unsigned_to_nat(0u);
v___x_2281_ = l_Std_Format_pretty(v___x_2278_, v___x_2279_, v___x_2280_, v___x_2280_);
v___x_2282_ = lean_string_append(v___x_2276_, v___x_2281_);
lean_dec_ref(v___x_2281_);
v___x_2283_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0(v___x_2282_, v_a_2275_);
lean_dec(v_a_2275_);
lean_dec_ref(v___x_2282_);
return v___x_2283_;
}
else
{
lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2291_; 
lean_dec_ref(v_key_2265_);
v_a_2284_ = lean_ctor_get(v___x_2274_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2274_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2286_ = v___x_2274_;
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v___x_2274_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2289_; 
if (v_isShared_2287_ == 0)
{
v___x_2289_ = v___x_2286_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v_a_2284_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0___boxed(lean_object* v_o_2292_, lean_object* v_key_2293_, lean_object* v_a_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0(v_o_2292_, v_key_2293_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_defaultPrevented(lean_object* v_e_2297_){
_start:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2299_ = ((lean_object*)(l_Lasm_Web_Event_defaultPrevented___closed__0));
v___x_2300_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0(v_e_2297_, v___x_2299_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_defaultPrevented___boxed(lean_object* v_e_2301_, lean_object* v_a_2302_){
_start:
{
lean_object* v_res_2303_; 
v_res_2303_ = l_Lasm_Web_Event_defaultPrevented(v_e_2301_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___redArg(lean_object* v_e_2305_, lean_object* v_inst_2306_){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2308_ = ((lean_object*)(l_Lasm_Web_Event_detail___redArg___closed__0));
v___x_2309_ = l_Lasm_JS_Value_get___redArg(v_e_2305_, v___x_2308_, v_inst_2306_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___redArg___boxed(lean_object* v_e_2310_, lean_object* v_inst_2311_, lean_object* v_a_2312_){
_start:
{
lean_object* v_res_2313_; 
v_res_2313_ = l_Lasm_Web_Event_detail___redArg(v_e_2310_, v_inst_2311_);
return v_res_2313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail(lean_object* v_e_2314_, lean_object* v_00_u03b1_2315_, lean_object* v_inst_2316_){
_start:
{
lean_object* v___x_2318_; 
v___x_2318_ = l_Lasm_Web_Event_detail___redArg(v_e_2314_, v_inst_2316_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___boxed(lean_object* v_e_2319_, lean_object* v_00_u03b1_2320_, lean_object* v_inst_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lasm_Web_Event_detail(v_e_2319_, v_00_u03b1_2320_, v_inst_2321_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___redArg(lean_object* v_e_2324_, lean_object* v_name_2325_, lean_object* v_inst_2326_){
_start:
{
lean_object* v___x_2328_; 
v___x_2328_ = l_Lasm_JS_Value_get___redArg(v_e_2324_, v_name_2325_, v_inst_2326_);
return v___x_2328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___redArg___boxed(lean_object* v_e_2329_, lean_object* v_name_2330_, lean_object* v_inst_2331_, lean_object* v_a_2332_){
_start:
{
lean_object* v_res_2333_; 
v_res_2333_ = l_Lasm_Web_Event_prop___redArg(v_e_2329_, v_name_2330_, v_inst_2331_);
return v_res_2333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop(lean_object* v_e_2334_, lean_object* v_name_2335_, lean_object* v_00_u03b1_2336_, lean_object* v_inst_2337_){
_start:
{
lean_object* v___x_2339_; 
v___x_2339_ = l_Lasm_JS_Value_get___redArg(v_e_2334_, v_name_2335_, v_inst_2337_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___boxed(lean_object* v_e_2340_, lean_object* v_name_2341_, lean_object* v_00_u03b1_2342_, lean_object* v_inst_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l_Lasm_Web_Event_prop(v_e_2340_, v_name_2341_, v_00_u03b1_2342_, v_inst_2343_);
return v_res_2345_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_Web_Types(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_Events(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_Web_instFromJSEventInfo = _init_l_Lasm_Web_instFromJSEventInfo();
lean_mark_persistent(l_Lasm_Web_instFromJSEventInfo);
l_Lasm_Web_instInhabitedEventInfo_default = _init_l_Lasm_Web_instInhabitedEventInfo_default();
lean_mark_persistent(l_Lasm_Web_instInhabitedEventInfo_default);
l_Lasm_Web_instInhabitedEventInfo = _init_l_Lasm_Web_instInhabitedEventInfo();
lean_mark_persistent(l_Lasm_Web_instInhabitedEventInfo);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
