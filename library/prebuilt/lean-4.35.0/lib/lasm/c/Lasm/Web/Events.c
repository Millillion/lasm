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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.Listener"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__10_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12_value;
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_37_ = lean_string_utf8_byte_size(v___x_36_);
return v___x_37_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_38_ = lean_unsigned_to_nat(0u);
v___x_39_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5);
v___x_40_ = lean_nat_dec_eq(v___x_39_, v___x_38_);
return v___x_40_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_45_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__10));
v___x_46_ = lean_unsigned_to_nat(46u);
v___x_47_ = lean_unsigned_to_nat(193u);
v___x_48_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9));
v___x_49_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8));
v___x_50_ = l_mkPanicMessageWithDecl(v___x_49_, v___x_48_, v___x_47_, v___x_46_, v___x_45_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0(lean_object* v_context_52_, lean_object* v_d_53_){
_start:
{
lean_object* v___y_56_; lean_object* v___y_57_; 
if (lean_obj_tag(v_d_53_) == 9)
{
lean_object* v_value_61_; lean_object* v___x_62_; 
v_value_61_ = lean_ctor_get(v_d_53_, 0);
lean_inc(v_value_61_);
lean_dec_ref_known(v_d_53_, 2);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v_value_61_);
return v___x_62_;
}
else
{
lean_object* v___x_63_; lean_object* v_received_65_; 
v___x_63_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_53_) == 9)
{
lean_object* v_value_79_; lean_object* v_description_80_; uint8_t v___x_81_; 
v_value_79_ = lean_ctor_get(v_d_53_, 0);
v_description_80_ = lean_ctor_get(v_d_53_, 1);
v___x_81_ = lean_string_dec_eq(v_description_80_, v___x_63_);
if (v___x_81_ == 0)
{
goto v___jp_77_;
}
else
{
uint32_t v___x_82_; uint64_t v___x_83_; lean_object* v___x_84_; uint32_t v___x_85_; lean_object* v___x_86_; 
lean_inc_n(v_value_79_, 2);
lean_dec_ref_known(v_d_53_, 2);
v___x_82_ = 206;
v___x_83_ = 0ULL;
v___x_84_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_84_, 0, v_value_79_);
lean_ctor_set(v___x_84_, 1, v___x_63_);
v___x_85_ = lasm_js_value_handle(v_value_79_);
lean_dec(v_value_79_);
v___x_86_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_82_, v___x_83_, v___x_84_, v___x_85_);
lean_dec_ref_known(v___x_84_, 2);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v_a_87_; uint8_t v___x_88_; 
v_a_87_ = lean_ctor_get(v___x_86_, 0);
lean_inc(v_a_87_);
lean_dec_ref_known(v___x_86_, 1);
v___x_88_ = lean_string_validate_utf8(v_a_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; lean_object* v___x_90_; 
lean_dec(v_a_87_);
v___x_89_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_90_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_89_);
v_received_65_ = v___x_90_;
goto v___jp_64_;
}
else
{
lean_object* v___x_91_; 
v___x_91_ = lean_string_from_utf8_unchecked(v_a_87_);
v_received_65_ = v___x_91_;
goto v___jp_64_;
}
}
else
{
lean_object* v___x_92_; 
lean_dec_ref_known(v___x_86_, 1);
v___x_92_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_65_ = v___x_92_;
goto v___jp_64_;
}
}
}
else
{
goto v___jp_77_;
}
v___jp_64_:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_66_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_67_ = lean_string_append(v___x_66_, v_context_52_);
v___x_68_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_69_ = lean_string_append(v___x_67_, v___x_68_);
v___x_70_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3));
v___x_71_ = lean_string_append(v___x_69_, v___x_70_);
v___x_72_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_73_ = lean_string_append(v___x_71_, v___x_72_);
v___x_74_ = lean_string_append(v___x_73_, v_received_65_);
lean_dec_ref(v_received_65_);
v___x_75_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
v___x_76_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_56_ = v___x_74_;
v___y_57_ = v___x_76_;
goto v___jp_55_;
}
else
{
v___y_56_ = v___x_74_;
v___y_57_ = v___x_63_;
goto v___jp_55_;
}
}
v___jp_77_:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lasm_JS_Data_describe(v_d_53_);
v_received_65_ = v___x_78_;
goto v___jp_64_;
}
}
v___jp_55_:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = lean_string_append(v___y_56_, v___y_57_);
v___x_59_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
v___x_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___boxed(lean_object* v_context_93_, lean_object* v_d_94_, lean_object* v_a_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0(v_context_93_, v_d_94_);
lean_dec_ref(v_context_93_);
return v_res_96_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1(void){
_start:
{
uint8_t v___x_98_; uint64_t v___x_99_; 
v___x_98_ = 1;
v___x_99_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0(lean_object* v_b_100_, lean_object* v_args_101_, uint8_t v_await_102_){
_start:
{
uint64_t v___y_105_; uint64_t v___y_106_; uint64_t v___x_149_; uint64_t v___y_151_; 
v___x_149_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
if (v_await_102_ == 0)
{
uint64_t v___x_156_; 
v___x_156_ = 0ULL;
v___y_151_ = v___x_156_;
goto v___jp_150_;
}
else
{
uint64_t v___x_157_; 
v___x_157_ = 2ULL;
v___y_151_ = v___x_157_;
goto v___jp_150_;
}
v___jp_104_:
{
uint64_t v_flags_107_; uint32_t v___x_108_; lean_object* v___x_109_; uint32_t v___x_110_; lean_object* v___x_111_; 
v_flags_107_ = lean_uint64_lor(v___y_105_, v___y_106_);
v___x_108_ = 214;
v___x_109_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_100_, v_args_101_);
v___x_110_ = 0;
v___x_111_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_108_, v_flags_107_, v___x_109_, v___x_110_);
lean_dec(v___x_109_);
if (lean_obj_tag(v___x_111_) == 0)
{
if (lean_obj_tag(v___x_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_113_; 
v_a_112_ = lean_ctor_get(v___x_111_, 0);
lean_inc(v_a_112_);
lean_dec_ref_known(v___x_111_, 1);
v___x_113_ = l_Lasm_JS_Wire_decode(v_a_112_);
lean_dec(v_a_112_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
lean_dec_ref_known(v___x_113_, 1);
v___x_115_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_100_);
v___x_116_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0(v___x_115_, v_a_114_);
lean_dec_ref(v___x_115_);
return v___x_116_;
}
else
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_124_; 
v_a_117_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_124_ == 0)
{
v___x_119_ = v___x_113_;
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_113_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_a_117_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
else
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_132_; 
v_a_125_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_132_ == 0)
{
v___x_127_ = v___x_111_;
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_111_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set_tag(v___x_127_, 1);
v___x_130_ = v___x_127_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_a_125_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
else
{
lean_object* v_a_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_148_; 
v_a_133_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_148_ == 0)
{
v___x_135_ = v___x_111_;
v_isShared_136_ = v_isSharedCheck_148_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_a_133_);
lean_dec(v___x_111_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_148_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_146_; 
v___x_137_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_138_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_100_);
v___x_139_ = lean_string_append(v___x_137_, v___x_138_);
lean_dec_ref(v___x_138_);
v___x_140_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_141_ = lean_string_append(v___x_139_, v___x_140_);
v___x_142_ = lean_io_error_to_string(v_a_133_);
v___x_143_ = lean_string_append(v___x_141_, v___x_142_);
lean_dec_ref(v___x_142_);
v___x_144_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v___x_144_);
v___x_146_ = v___x_135_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v___x_144_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
v___jp_150_:
{
uint8_t v_construct_152_; uint64_t v___x_153_; 
v_construct_152_ = lean_ctor_get_uint8(v_b_100_, sizeof(void*)*4);
v___x_153_ = lean_uint64_lor(v___x_149_, v___y_151_);
if (v_construct_152_ == 0)
{
uint64_t v___x_154_; 
v___x_154_ = 0ULL;
v___y_105_ = v___x_153_;
v___y_106_ = v___x_154_;
goto v___jp_104_;
}
else
{
uint64_t v___x_155_; 
v___x_155_ = 4ULL;
v___y_105_ = v___x_153_;
v___y_106_ = v___x_155_;
goto v___jp_104_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___boxed(lean_object* v_b_158_, lean_object* v_args_159_, lean_object* v_await_160_, lean_object* v_a_161_){
_start:
{
uint8_t v_await_boxed_162_; lean_object* v_res_163_; 
v_await_boxed_162_ = lean_unbox(v_await_160_);
v_res_163_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0(v_b_158_, v_args_159_, v_await_boxed_162_);
lean_dec_ref(v_b_158_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_listen(lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v___x_178_; uint8_t v_capture_179_; uint8_t v_passive_180_; uint8_t v_once_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; lean_object* v___x_207_; 
v___x_178_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__2));
v_capture_179_ = lean_ctor_get_uint8(v_a_176_, 0);
v_passive_180_ = lean_ctor_get_uint8(v_a_176_, 1);
v_once_181_ = lean_ctor_get_uint8(v_a_176_, 2);
v___x_182_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_183_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_183_, 0, v_a_173_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_185_ = lean_array_push(v___x_184_, v___x_183_);
v___x_186_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_186_, 0, v_a_174_);
v___x_187_ = lean_array_push(v___x_185_, v___x_186_);
v___x_188_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_188_, 0, v_a_175_);
lean_ctor_set(v___x_188_, 1, v___x_182_);
v___x_189_ = lean_array_push(v___x_187_, v___x_188_);
v___x_190_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__0));
v___x_191_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_191_, 0, v_capture_179_);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__1));
v___x_194_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_194_, 0, v_passive_180_);
v___x_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__2));
v___x_197_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_197_, 0, v_once_181_);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = lean_unsigned_to_nat(3u);
v___x_200_ = lean_mk_empty_array_with_capacity(v___x_199_);
v___x_201_ = lean_array_push(v___x_200_, v___x_192_);
v___x_202_ = lean_array_push(v___x_201_, v___x_195_);
v___x_203_ = lean_array_push(v___x_202_, v___x_198_);
v___x_204_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
v___x_205_ = lean_array_push(v___x_189_, v___x_204_);
v___x_206_ = 1;
v___x_207_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0(v___x_178_, v___x_205_, v___x_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_listen___boxed(lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lasm_Web_Raw_listen(v_a_208_, v_a_209_, v_a_210_, v_a_211_);
lean_dec_ref(v_a_211_);
return v_res_213_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0(void){
_start:
{
uint8_t v___x_214_; uint64_t v___x_215_; 
v___x_214_ = 0;
v___x_215_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0(lean_object* v_b_216_, lean_object* v_args_217_, uint8_t v_await_218_){
_start:
{
uint64_t v___y_221_; uint64_t v___y_222_; uint64_t v___x_263_; uint64_t v___y_265_; 
v___x_263_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_218_ == 0)
{
uint64_t v___x_270_; 
v___x_270_ = 0ULL;
v___y_265_ = v___x_270_;
goto v___jp_264_;
}
else
{
uint64_t v___x_271_; 
v___x_271_ = 2ULL;
v___y_265_ = v___x_271_;
goto v___jp_264_;
}
v___jp_220_:
{
uint64_t v_flags_223_; uint32_t v___x_224_; lean_object* v___x_225_; uint32_t v___x_226_; lean_object* v___x_227_; 
v_flags_223_ = lean_uint64_lor(v___y_221_, v___y_222_);
v___x_224_ = 214;
v___x_225_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_216_, v_args_217_);
v___x_226_ = 0;
v___x_227_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_224_, v_flags_223_, v___x_225_, v___x_226_);
lean_dec(v___x_225_);
if (lean_obj_tag(v___x_227_) == 0)
{
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_229_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
lean_inc(v_a_228_);
lean_dec_ref_known(v___x_227_, 1);
v___x_229_ = l_Lasm_JS_Wire_decode(v_a_228_);
lean_dec(v_a_228_);
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v___x_230_; 
lean_dec_ref_known(v___x_229_, 1);
v___x_230_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_230_;
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
v_a_231_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_229_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_229_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
else
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
v_a_239_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___x_227_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_227_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
lean_ctor_set_tag(v___x_241_, 1);
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_a_239_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
else
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_262_; 
v_a_247_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_262_ == 0)
{
v___x_249_ = v___x_227_;
v_isShared_250_ = v_isSharedCheck_262_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_227_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_262_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_251_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_252_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_216_);
v___x_253_ = lean_string_append(v___x_251_, v___x_252_);
lean_dec_ref(v___x_252_);
v___x_254_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_255_ = lean_string_append(v___x_253_, v___x_254_);
v___x_256_ = lean_io_error_to_string(v_a_247_);
v___x_257_ = lean_string_append(v___x_255_, v___x_256_);
lean_dec_ref(v___x_256_);
v___x_258_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_258_);
v___x_260_ = v___x_249_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v___x_258_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
v___jp_264_:
{
uint8_t v_construct_266_; uint64_t v___x_267_; 
v_construct_266_ = lean_ctor_get_uint8(v_b_216_, sizeof(void*)*4);
v___x_267_ = lean_uint64_lor(v___x_263_, v___y_265_);
if (v_construct_266_ == 0)
{
uint64_t v___x_268_; 
v___x_268_ = 0ULL;
v___y_221_ = v___x_267_;
v___y_222_ = v___x_268_;
goto v___jp_220_;
}
else
{
uint64_t v___x_269_; 
v___x_269_ = 4ULL;
v___y_221_ = v___x_267_;
v___y_222_ = v___x_269_;
goto v___jp_220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___boxed(lean_object* v_b_272_, lean_object* v_args_273_, lean_object* v_await_274_, lean_object* v_a_275_){
_start:
{
uint8_t v_await_boxed_276_; lean_object* v_res_277_; 
v_await_boxed_276_ = lean_unbox(v_await_274_);
v_res_277_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0(v_b_272_, v_args_273_, v_await_boxed_276_);
lean_dec_ref(v_b_272_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_unlisten(lean_object* v_a_284_){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; lean_object* v___x_292_; 
v___x_286_ = ((lean_object*)(l_Lasm_Web_Raw_unlisten___closed__1));
v___x_287_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_288_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_289_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_289_, 0, v_a_284_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_array_push(v___x_287_, v___x_289_);
v___x_291_ = 1;
v___x_292_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0(v___x_286_, v___x_290_, v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_unlisten___boxed(lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Lasm_Web_Raw_unlisten(v_a_293_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(lean_object* v_context_297_, lean_object* v_d_298_){
_start:
{
lean_object* v___y_301_; lean_object* v___y_302_; 
if (lean_obj_tag(v_d_298_) == 2)
{
uint8_t v_b_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v_b_306_ = lean_ctor_get_uint8(v_d_298_, 0);
lean_dec_ref_known(v_d_298_, 0);
v___x_307_ = lean_box(v_b_306_);
v___x_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
return v___x_308_;
}
else
{
lean_object* v___x_309_; lean_object* v_received_311_; 
v___x_309_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_298_) == 9)
{
lean_object* v_value_325_; lean_object* v_description_326_; uint8_t v___x_327_; 
v_value_325_ = lean_ctor_get(v_d_298_, 0);
v_description_326_ = lean_ctor_get(v_d_298_, 1);
v___x_327_ = lean_string_dec_eq(v_description_326_, v___x_309_);
if (v___x_327_ == 0)
{
goto v___jp_323_;
}
else
{
uint32_t v___x_328_; uint64_t v___x_329_; lean_object* v___x_330_; uint32_t v___x_331_; lean_object* v___x_332_; 
lean_inc_n(v_value_325_, 2);
lean_dec_ref_known(v_d_298_, 2);
v___x_328_ = 206;
v___x_329_ = 0ULL;
v___x_330_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_330_, 0, v_value_325_);
lean_ctor_set(v___x_330_, 1, v___x_309_);
v___x_331_ = lasm_js_value_handle(v_value_325_);
lean_dec(v_value_325_);
v___x_332_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_328_, v___x_329_, v___x_330_, v___x_331_);
lean_dec_ref_known(v___x_330_, 2);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; uint8_t v___x_334_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v___x_332_, 1);
v___x_334_ = lean_string_validate_utf8(v_a_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; lean_object* v___x_336_; 
lean_dec(v_a_333_);
v___x_335_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_336_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_335_);
v_received_311_ = v___x_336_;
goto v___jp_310_;
}
else
{
lean_object* v___x_337_; 
v___x_337_ = lean_string_from_utf8_unchecked(v_a_333_);
v_received_311_ = v___x_337_;
goto v___jp_310_;
}
}
else
{
lean_object* v___x_338_; 
lean_dec_ref_known(v___x_332_, 1);
v___x_338_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_311_ = v___x_338_;
goto v___jp_310_;
}
}
}
else
{
goto v___jp_323_;
}
v___jp_310_:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_312_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_313_ = lean_string_append(v___x_312_, v_context_297_);
v___x_314_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_315_ = lean_string_append(v___x_313_, v___x_314_);
v___x_316_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0));
v___x_317_ = lean_string_append(v___x_315_, v___x_316_);
v___x_318_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_319_ = lean_string_append(v___x_317_, v___x_318_);
v___x_320_ = lean_string_append(v___x_319_, v_received_311_);
lean_dec_ref(v_received_311_);
v___x_321_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; 
v___x_322_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_301_ = v___x_320_;
v___y_302_ = v___x_322_;
goto v___jp_300_;
}
else
{
v___y_301_ = v___x_320_;
v___y_302_ = v___x_309_;
goto v___jp_300_;
}
}
v___jp_323_:
{
lean_object* v___x_324_; 
v___x_324_ = l_Lasm_JS_Data_describe(v_d_298_);
v_received_311_ = v___x_324_;
goto v___jp_310_;
}
}
v___jp_300_:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_303_ = lean_string_append(v___y_301_, v___y_302_);
v___x_304_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
v___x_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___boxed(lean_object* v_context_339_, lean_object* v_d_340_, lean_object* v_a_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(v_context_339_, v_d_340_);
lean_dec_ref(v_context_339_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(lean_object* v_b_343_, lean_object* v_args_344_, uint8_t v_await_345_){
_start:
{
uint64_t v___y_348_; uint64_t v___y_349_; uint64_t v___x_392_; uint64_t v___y_394_; 
v___x_392_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_345_ == 0)
{
uint64_t v___x_399_; 
v___x_399_ = 0ULL;
v___y_394_ = v___x_399_;
goto v___jp_393_;
}
else
{
uint64_t v___x_400_; 
v___x_400_ = 2ULL;
v___y_394_ = v___x_400_;
goto v___jp_393_;
}
v___jp_347_:
{
uint64_t v_flags_350_; uint32_t v___x_351_; lean_object* v___x_352_; uint32_t v___x_353_; lean_object* v___x_354_; 
v_flags_350_ = lean_uint64_lor(v___y_348_, v___y_349_);
v___x_351_ = 214;
v___x_352_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_343_, v_args_344_);
v___x_353_ = 0;
v___x_354_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_351_, v_flags_350_, v___x_352_, v___x_353_);
lean_dec(v___x_352_);
if (lean_obj_tag(v___x_354_) == 0)
{
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_356_; 
v_a_355_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_355_);
lean_dec_ref_known(v___x_354_, 1);
v___x_356_ = l_Lasm_JS_Wire_decode(v_a_355_);
lean_dec(v_a_355_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_357_);
lean_dec_ref_known(v___x_356_, 1);
v___x_358_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_343_);
v___x_359_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(v___x_358_, v_a_357_);
lean_dec_ref(v___x_358_);
return v___x_359_;
}
else
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
v_a_360_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_356_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_356_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_360_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
v_a_368_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v___x_354_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_354_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set_tag(v___x_370_, 1);
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_391_; 
v_a_376_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_391_ == 0)
{
v___x_378_ = v___x_354_;
v_isShared_379_ = v_isSharedCheck_391_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_354_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_391_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_381_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_343_);
v___x_382_ = lean_string_append(v___x_380_, v___x_381_);
lean_dec_ref(v___x_381_);
v___x_383_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_384_ = lean_string_append(v___x_382_, v___x_383_);
v___x_385_ = lean_io_error_to_string(v_a_376_);
v___x_386_ = lean_string_append(v___x_384_, v___x_385_);
lean_dec_ref(v___x_385_);
v___x_387_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 0, v___x_387_);
v___x_389_ = v___x_378_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_387_);
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
v___jp_393_:
{
uint8_t v_construct_395_; uint64_t v___x_396_; 
v_construct_395_ = lean_ctor_get_uint8(v_b_343_, sizeof(void*)*4);
v___x_396_ = lean_uint64_lor(v___x_392_, v___y_394_);
if (v_construct_395_ == 0)
{
uint64_t v___x_397_; 
v___x_397_ = 0ULL;
v___y_348_ = v___x_396_;
v___y_349_ = v___x_397_;
goto v___jp_347_;
}
else
{
uint64_t v___x_398_; 
v___x_398_ = 4ULL;
v___y_348_ = v___x_396_;
v___y_349_ = v___x_398_;
goto v___jp_347_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0___boxed(lean_object* v_b_401_, lean_object* v_args_402_, lean_object* v_await_403_, lean_object* v_a_404_){
_start:
{
uint8_t v_await_boxed_405_; lean_object* v_res_406_; 
v_await_boxed_405_ = lean_unbox(v_await_403_);
v_res_406_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(v_b_401_, v_args_402_, v_await_boxed_405_);
lean_dec_ref(v_b_401_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_dispatchEvent(lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; lean_object* v___x_424_; 
v___x_416_ = ((lean_object*)(l_Lasm_Web_Raw_dispatchEvent___closed__1));
v___x_417_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_418_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_419_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_419_, 0, v_a_413_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v___x_420_ = lean_array_push(v___x_417_, v___x_419_);
v___x_421_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_421_, 0, v_a_414_);
lean_ctor_set(v___x_421_, 1, v___x_418_);
v___x_422_ = lean_array_push(v___x_420_, v___x_421_);
v___x_423_ = 1;
v___x_424_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(v___x_416_, v___x_422_, v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_dispatchEvent___boxed(lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lasm_Web_Raw_dispatchEvent(v_a_425_, v_a_426_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(lean_object* v_context_430_, lean_object* v_d_431_){
_start:
{
lean_object* v___y_434_; lean_object* v___y_435_; 
if (lean_obj_tag(v_d_431_) == 9)
{
lean_object* v_value_439_; lean_object* v___x_440_; 
v_value_439_ = lean_ctor_get(v_d_431_, 0);
lean_inc(v_value_439_);
lean_dec_ref_known(v_d_431_, 2);
v___x_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_440_, 0, v_value_439_);
return v___x_440_;
}
else
{
lean_object* v___x_441_; lean_object* v_received_443_; 
v___x_441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_431_) == 9)
{
lean_object* v_value_457_; lean_object* v_description_458_; uint8_t v___x_459_; 
v_value_457_ = lean_ctor_get(v_d_431_, 0);
v_description_458_ = lean_ctor_get(v_d_431_, 1);
v___x_459_ = lean_string_dec_eq(v_description_458_, v___x_441_);
if (v___x_459_ == 0)
{
goto v___jp_455_;
}
else
{
uint32_t v___x_460_; uint64_t v___x_461_; lean_object* v___x_462_; uint32_t v___x_463_; lean_object* v___x_464_; 
lean_inc_n(v_value_457_, 2);
lean_dec_ref_known(v_d_431_, 2);
v___x_460_ = 206;
v___x_461_ = 0ULL;
v___x_462_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_462_, 0, v_value_457_);
lean_ctor_set(v___x_462_, 1, v___x_441_);
v___x_463_ = lasm_js_value_handle(v_value_457_);
lean_dec(v_value_457_);
v___x_464_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_460_, v___x_461_, v___x_462_, v___x_463_);
lean_dec_ref_known(v___x_462_, 2);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; uint8_t v___x_466_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_a_465_);
lean_dec_ref_known(v___x_464_, 1);
v___x_466_ = lean_string_validate_utf8(v_a_465_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; lean_object* v___x_468_; 
lean_dec(v_a_465_);
v___x_467_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_468_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_467_);
v_received_443_ = v___x_468_;
goto v___jp_442_;
}
else
{
lean_object* v___x_469_; 
v___x_469_ = lean_string_from_utf8_unchecked(v_a_465_);
v_received_443_ = v___x_469_;
goto v___jp_442_;
}
}
else
{
lean_object* v___x_470_; 
lean_dec_ref_known(v___x_464_, 1);
v___x_470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_443_ = v___x_470_;
goto v___jp_442_;
}
}
}
else
{
goto v___jp_455_;
}
v___jp_442_:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_444_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_445_ = lean_string_append(v___x_444_, v_context_430_);
v___x_446_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_447_ = lean_string_append(v___x_445_, v___x_446_);
v___x_448_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___closed__0));
v___x_449_ = lean_string_append(v___x_447_, v___x_448_);
v___x_450_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_451_ = lean_string_append(v___x_449_, v___x_450_);
v___x_452_ = lean_string_append(v___x_451_, v_received_443_);
lean_dec_ref(v_received_443_);
v___x_453_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
v___x_454_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_434_ = v___x_452_;
v___y_435_ = v___x_454_;
goto v___jp_433_;
}
else
{
v___y_434_ = v___x_452_;
v___y_435_ = v___x_441_;
goto v___jp_433_;
}
}
v___jp_455_:
{
lean_object* v___x_456_; 
v___x_456_ = l_Lasm_JS_Data_describe(v_d_431_);
v_received_443_ = v___x_456_;
goto v___jp_442_;
}
}
v___jp_433_:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_436_ = lean_string_append(v___y_434_, v___y_435_);
v___x_437_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
v___x_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_438_, 0, v___x_437_);
return v___x_438_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___boxed(lean_object* v_context_471_, lean_object* v_d_472_, lean_object* v_a_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v_context_471_, v_d_472_);
lean_dec_ref(v_context_471_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(lean_object* v_b_475_, lean_object* v_args_476_, uint8_t v_await_477_){
_start:
{
uint64_t v___y_480_; uint64_t v___y_481_; uint64_t v___x_524_; uint64_t v___y_526_; 
v___x_524_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
if (v_await_477_ == 0)
{
uint64_t v___x_531_; 
v___x_531_ = 0ULL;
v___y_526_ = v___x_531_;
goto v___jp_525_;
}
else
{
uint64_t v___x_532_; 
v___x_532_ = 2ULL;
v___y_526_ = v___x_532_;
goto v___jp_525_;
}
v___jp_479_:
{
uint64_t v_flags_482_; uint32_t v___x_483_; lean_object* v___x_484_; uint32_t v___x_485_; lean_object* v___x_486_; 
v_flags_482_ = lean_uint64_lor(v___y_480_, v___y_481_);
v___x_483_ = 214;
v___x_484_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_475_, v_args_476_);
v___x_485_ = 0;
v___x_486_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_483_, v_flags_482_, v___x_484_, v___x_485_);
lean_dec(v___x_484_);
if (lean_obj_tag(v___x_486_) == 0)
{
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___x_488_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
lean_dec_ref_known(v___x_486_, 1);
v___x_488_ = l_Lasm_JS_Wire_decode(v_a_487_);
lean_dec(v_a_487_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v_a_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v_a_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_a_489_);
lean_dec_ref_known(v___x_488_, 1);
v___x_490_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_475_);
v___x_491_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v___x_490_, v_a_489_);
lean_dec_ref(v___x_490_);
return v___x_491_;
}
else
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
v_a_492_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v___x_488_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_488_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_a_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
}
else
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
v_a_500_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_507_ == 0)
{
v___x_502_ = v___x_486_;
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_486_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
lean_ctor_set_tag(v___x_502_, 1);
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_523_; 
v_a_508_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_523_ == 0)
{
v___x_510_ = v___x_486_;
v_isShared_511_ = v_isSharedCheck_523_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_486_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_523_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_512_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_513_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_475_);
v___x_514_ = lean_string_append(v___x_512_, v___x_513_);
lean_dec_ref(v___x_513_);
v___x_515_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_516_ = lean_string_append(v___x_514_, v___x_515_);
v___x_517_ = lean_io_error_to_string(v_a_508_);
v___x_518_ = lean_string_append(v___x_516_, v___x_517_);
lean_dec_ref(v___x_517_);
v___x_519_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v___x_519_);
v___x_521_ = v___x_510_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_519_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
v___jp_525_:
{
uint8_t v_construct_527_; uint64_t v___x_528_; 
v_construct_527_ = lean_ctor_get_uint8(v_b_475_, sizeof(void*)*4);
v___x_528_ = lean_uint64_lor(v___x_524_, v___y_526_);
if (v_construct_527_ == 0)
{
uint64_t v___x_529_; 
v___x_529_ = 0ULL;
v___y_480_ = v___x_528_;
v___y_481_ = v___x_529_;
goto v___jp_479_;
}
else
{
uint64_t v___x_530_; 
v___x_530_ = 4ULL;
v___y_480_ = v___x_528_;
v___y_481_ = v___x_530_;
goto v___jp_479_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0___boxed(lean_object* v_b_533_, lean_object* v_args_534_, lean_object* v_await_535_, lean_object* v_a_536_){
_start:
{
uint8_t v_await_boxed_537_; lean_object* v_res_538_; 
v_await_boxed_537_ = lean_unbox(v_await_535_);
v_res_538_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(v_b_533_, v_args_534_, v_await_boxed_537_);
lean_dec_ref(v_b_533_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createEvent(lean_object* v_a_545_, uint8_t v_a_546_, uint8_t v_a_547_){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; lean_object* v___x_558_; 
v___x_549_ = ((lean_object*)(l_Lasm_Web_Raw_createEvent___closed__1));
v___x_550_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_551_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_551_, 0, v_a_545_);
v___x_552_ = lean_array_push(v___x_550_, v___x_551_);
v___x_553_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_553_, 0, v_a_546_);
v___x_554_ = lean_array_push(v___x_552_, v___x_553_);
v___x_555_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_555_, 0, v_a_547_);
v___x_556_ = lean_array_push(v___x_554_, v___x_555_);
v___x_557_ = 1;
v___x_558_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(v___x_549_, v___x_556_, v___x_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createEvent___boxed(lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_){
_start:
{
uint8_t v_a_784__boxed_563_; uint8_t v_a_785__boxed_564_; lean_object* v_res_565_; 
v_a_784__boxed_563_ = lean_unbox(v_a_560_);
v_a_785__boxed_564_ = lean_unbox(v_a_561_);
v_res_565_ = l_Lasm_Web_Raw_createEvent(v_a_559_, v_a_784__boxed_563_, v_a_785__boxed_564_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createCustomEvent(lean_object* v_a_572_, lean_object* v_a_573_, uint8_t v_a_574_, uint8_t v_a_575_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; uint8_t v___x_586_; lean_object* v___x_587_; 
v___x_577_ = ((lean_object*)(l_Lasm_Web_Raw_createCustomEvent___closed__1));
v___x_578_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_579_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_579_, 0, v_a_572_);
v___x_580_ = lean_array_push(v___x_578_, v___x_579_);
v___x_581_ = lean_array_push(v___x_580_, v_a_573_);
v___x_582_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_582_, 0, v_a_574_);
v___x_583_ = lean_array_push(v___x_581_, v___x_582_);
v___x_584_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_584_, 0, v_a_575_);
v___x_585_ = lean_array_push(v___x_583_, v___x_584_);
v___x_586_ = 1;
v___x_587_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(v___x_577_, v___x_585_, v___x_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createCustomEvent___boxed(lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_){
_start:
{
uint8_t v_a_233__boxed_593_; uint8_t v_a_234__boxed_594_; lean_object* v_res_595_; 
v_a_233__boxed_593_ = lean_unbox(v_a_590_);
v_a_234__boxed_594_ = lean_unbox(v_a_591_);
v_res_595_ = l_Lasm_Web_Raw_createCustomEvent(v_a_588_, v_a_589_, v_a_233__boxed_593_, v_a_234__boxed_594_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0(lean_object* v_b_596_, lean_object* v_args_597_, uint8_t v_await_598_){
_start:
{
uint64_t v___y_601_; uint64_t v___y_602_; uint64_t v___x_642_; uint64_t v___y_644_; 
v___x_642_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_598_ == 0)
{
uint64_t v___x_649_; 
v___x_649_ = 0ULL;
v___y_644_ = v___x_649_;
goto v___jp_643_;
}
else
{
uint64_t v___x_650_; 
v___x_650_ = 2ULL;
v___y_644_ = v___x_650_;
goto v___jp_643_;
}
v___jp_600_:
{
uint64_t v_flags_603_; uint32_t v___x_604_; lean_object* v___x_605_; uint32_t v___x_606_; lean_object* v___x_607_; 
v_flags_603_ = lean_uint64_lor(v___y_601_, v___y_602_);
v___x_604_ = 214;
v___x_605_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_596_, v_args_597_);
v___x_606_ = 0;
v___x_607_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_604_, v_flags_603_, v___x_605_, v___x_606_);
lean_dec(v___x_605_);
if (lean_obj_tag(v___x_607_) == 0)
{
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; lean_object* v___x_609_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_a_608_);
lean_dec_ref_known(v___x_607_, 1);
v___x_609_ = l_Lasm_JS_Wire_decode(v_a_608_);
lean_dec(v_a_608_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_609_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
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
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
else
{
return v___x_609_;
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
v_a_618_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_607_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_607_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set_tag(v___x_620_, 1);
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_641_; 
v_a_626_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_641_ == 0)
{
v___x_628_ = v___x_607_;
v_isShared_629_ = v_isSharedCheck_641_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_607_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_641_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_630_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_631_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_596_);
v___x_632_ = lean_string_append(v___x_630_, v___x_631_);
lean_dec_ref(v___x_631_);
v___x_633_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_634_ = lean_string_append(v___x_632_, v___x_633_);
v___x_635_ = lean_io_error_to_string(v_a_626_);
v___x_636_ = lean_string_append(v___x_634_, v___x_635_);
lean_dec_ref(v___x_635_);
v___x_637_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 0, v___x_637_);
v___x_639_ = v___x_628_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_637_);
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
v___jp_643_:
{
uint8_t v_construct_645_; uint64_t v___x_646_; 
v_construct_645_ = lean_ctor_get_uint8(v_b_596_, sizeof(void*)*4);
v___x_646_ = lean_uint64_lor(v___x_642_, v___y_644_);
if (v_construct_645_ == 0)
{
uint64_t v___x_647_; 
v___x_647_ = 0ULL;
v___y_601_ = v___x_646_;
v___y_602_ = v___x_647_;
goto v___jp_600_;
}
else
{
uint64_t v___x_648_; 
v___x_648_ = 4ULL;
v___y_601_ = v___x_646_;
v___y_602_ = v___x_648_;
goto v___jp_600_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0___boxed(lean_object* v_b_651_, lean_object* v_args_652_, lean_object* v_await_653_, lean_object* v_a_654_){
_start:
{
uint8_t v_await_boxed_655_; lean_object* v_res_656_; 
v_await_boxed_655_ = lean_unbox(v_await_653_);
v_res_656_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0(v_b_651_, v_args_652_, v_await_boxed_655_);
lean_dec_ref(v_b_651_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_eventInfo(lean_object* v_a_663_){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; lean_object* v___x_671_; 
v___x_665_ = ((lean_object*)(l_Lasm_Web_Raw_eventInfo___closed__1));
v___x_666_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_667_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_668_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_668_, 0, v_a_663_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = lean_array_push(v___x_666_, v___x_668_);
v___x_670_ = 1;
v___x_671_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0(v___x_665_, v___x_669_, v___x_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_eventInfo___boxed(lean_object* v_a_672_, lean_object* v_a_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lasm_Web_Raw_eventInfo(v_a_672_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg(lean_object* v_d_675_){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v_d_675_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg___boxed(lean_object* v_d_678_, lean_object* v_a_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg(v_d_678_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0(lean_object* v_context_681_, lean_object* v_d_682_){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v_d_682_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___boxed(lean_object* v_context_685_, lean_object* v_d_686_, lean_object* v_a_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0(v_context_685_, v_d_686_);
lean_dec_ref(v_context_685_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(lean_object* v_context_690_, lean_object* v_d_691_){
_start:
{
lean_object* v___y_694_; lean_object* v___y_695_; 
if (lean_obj_tag(v_d_691_) == 4)
{
lean_object* v_s_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
v_s_699_ = lean_ctor_get(v_d_691_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v_d_691_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v_d_691_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_s_699_);
lean_dec(v_d_691_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
lean_ctor_set_tag(v___x_701_, 0);
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_s_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
else
{
lean_object* v___x_707_; lean_object* v_received_709_; 
v___x_707_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_691_) == 9)
{
lean_object* v_value_723_; lean_object* v_description_724_; uint8_t v___x_725_; 
v_value_723_ = lean_ctor_get(v_d_691_, 0);
v_description_724_ = lean_ctor_get(v_d_691_, 1);
v___x_725_ = lean_string_dec_eq(v_description_724_, v___x_707_);
if (v___x_725_ == 0)
{
goto v___jp_721_;
}
else
{
uint32_t v___x_726_; uint64_t v___x_727_; lean_object* v___x_728_; uint32_t v___x_729_; lean_object* v___x_730_; 
lean_inc_n(v_value_723_, 2);
lean_dec_ref_known(v_d_691_, 2);
v___x_726_ = 206;
v___x_727_ = 0ULL;
v___x_728_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_728_, 0, v_value_723_);
lean_ctor_set(v___x_728_, 1, v___x_707_);
v___x_729_ = lasm_js_value_handle(v_value_723_);
lean_dec(v_value_723_);
v___x_730_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_726_, v___x_727_, v___x_728_, v___x_729_);
lean_dec_ref_known(v___x_728_, 2);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; uint8_t v___x_732_; 
v_a_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_a_731_);
lean_dec_ref_known(v___x_730_, 1);
v___x_732_ = lean_string_validate_utf8(v_a_731_);
if (v___x_732_ == 0)
{
lean_object* v___x_733_; lean_object* v___x_734_; 
lean_dec(v_a_731_);
v___x_733_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_734_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_733_);
v_received_709_ = v___x_734_;
goto v___jp_708_;
}
else
{
lean_object* v___x_735_; 
v___x_735_ = lean_string_from_utf8_unchecked(v_a_731_);
v_received_709_ = v___x_735_;
goto v___jp_708_;
}
}
else
{
lean_object* v___x_736_; 
lean_dec_ref_known(v___x_730_, 1);
v___x_736_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_709_ = v___x_736_;
goto v___jp_708_;
}
}
}
else
{
goto v___jp_721_;
}
v___jp_708_:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_710_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_711_ = lean_string_append(v___x_710_, v_context_690_);
v___x_712_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_713_ = lean_string_append(v___x_711_, v___x_712_);
v___x_714_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0));
v___x_715_ = lean_string_append(v___x_713_, v___x_714_);
v___x_716_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_717_ = lean_string_append(v___x_715_, v___x_716_);
v___x_718_ = lean_string_append(v___x_717_, v_received_709_);
lean_dec_ref(v_received_709_);
v___x_719_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; 
v___x_720_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_694_ = v___x_718_;
v___y_695_ = v___x_720_;
goto v___jp_693_;
}
else
{
v___y_694_ = v___x_718_;
v___y_695_ = v___x_707_;
goto v___jp_693_;
}
}
v___jp_721_:
{
lean_object* v___x_722_; 
v___x_722_ = l_Lasm_JS_Data_describe(v_d_691_);
v_received_709_ = v___x_722_;
goto v___jp_708_;
}
}
v___jp_693_:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_string_append(v___y_694_, v___y_695_);
v___x_697_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
v___x_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___boxed(lean_object* v_context_737_, lean_object* v_d_738_, lean_object* v_a_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(v_context_737_, v_d_738_);
lean_dec_ref(v_context_737_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0(lean_object* v_b_741_, lean_object* v_args_742_, uint8_t v_await_743_){
_start:
{
uint64_t v___y_746_; uint64_t v___y_747_; uint64_t v___x_790_; uint64_t v___y_792_; 
v___x_790_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_743_ == 0)
{
uint64_t v___x_797_; 
v___x_797_ = 0ULL;
v___y_792_ = v___x_797_;
goto v___jp_791_;
}
else
{
uint64_t v___x_798_; 
v___x_798_ = 2ULL;
v___y_792_ = v___x_798_;
goto v___jp_791_;
}
v___jp_745_:
{
uint64_t v_flags_748_; uint32_t v___x_749_; lean_object* v___x_750_; uint32_t v___x_751_; lean_object* v___x_752_; 
v_flags_748_ = lean_uint64_lor(v___y_746_, v___y_747_);
v___x_749_ = 214;
v___x_750_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_741_, v_args_742_);
v___x_751_ = 0;
v___x_752_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_749_, v_flags_748_, v___x_750_, v___x_751_);
lean_dec(v___x_750_);
if (lean_obj_tag(v___x_752_) == 0)
{
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; lean_object* v___x_754_; 
v_a_753_ = lean_ctor_get(v___x_752_, 0);
lean_inc(v_a_753_);
lean_dec_ref_known(v___x_752_, 1);
v___x_754_ = l_Lasm_JS_Wire_decode(v_a_753_);
lean_dec(v_a_753_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v_a_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v_a_755_ = lean_ctor_get(v___x_754_, 0);
lean_inc(v_a_755_);
lean_dec_ref_known(v___x_754_, 1);
v___x_756_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_741_);
v___x_757_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(v___x_756_, v_a_755_);
lean_dec_ref(v___x_756_);
return v___x_757_;
}
else
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
v_a_758_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_754_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_754_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
v_a_766_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_752_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_752_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
lean_ctor_set_tag(v___x_768_, 1);
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_789_; 
v_a_774_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_789_ == 0)
{
v___x_776_ = v___x_752_;
v_isShared_777_ = v_isSharedCheck_789_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_752_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_789_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_778_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_779_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_741_);
v___x_780_ = lean_string_append(v___x_778_, v___x_779_);
lean_dec_ref(v___x_779_);
v___x_781_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_782_ = lean_string_append(v___x_780_, v___x_781_);
v___x_783_ = lean_io_error_to_string(v_a_774_);
v___x_784_ = lean_string_append(v___x_782_, v___x_783_);
lean_dec_ref(v___x_783_);
v___x_785_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v___x_785_);
v___x_787_ = v___x_776_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
v___jp_791_:
{
uint8_t v_construct_793_; uint64_t v___x_794_; 
v_construct_793_ = lean_ctor_get_uint8(v_b_741_, sizeof(void*)*4);
v___x_794_ = lean_uint64_lor(v___x_790_, v___y_792_);
if (v_construct_793_ == 0)
{
uint64_t v___x_795_; 
v___x_795_ = 0ULL;
v___y_746_ = v___x_794_;
v___y_747_ = v___x_795_;
goto v___jp_745_;
}
else
{
uint64_t v___x_796_; 
v___x_796_ = 4ULL;
v___y_746_ = v___x_794_;
v___y_747_ = v___x_796_;
goto v___jp_745_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0___boxed(lean_object* v_b_799_, lean_object* v_args_800_, lean_object* v_await_801_, lean_object* v_a_802_){
_start:
{
uint8_t v_await_boxed_803_; lean_object* v_res_804_; 
v_await_boxed_803_ = lean_unbox(v_await_801_);
v_res_804_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0(v_b_799_, v_args_800_, v_await_boxed_803_);
lean_dec_ref(v_b_799_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetValue(lean_object* v_a_811_){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; uint8_t v___x_818_; lean_object* v___x_819_; 
v___x_813_ = ((lean_object*)(l_Lasm_Web_Raw_targetValue___closed__1));
v___x_814_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_815_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_816_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_816_, 0, v_a_811_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
v___x_817_ = lean_array_push(v___x_814_, v___x_816_);
v___x_818_ = 1;
v___x_819_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0(v___x_813_, v___x_817_, v___x_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetValue___boxed(lean_object* v_a_820_, lean_object* v_a_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lasm_Web_Raw_targetValue(v_a_820_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetChecked(lean_object* v_a_829_){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; uint8_t v___x_836_; lean_object* v___x_837_; 
v___x_831_ = ((lean_object*)(l_Lasm_Web_Raw_targetChecked___closed__1));
v___x_832_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_833_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_834_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_834_, 0, v_a_829_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
v___x_835_ = lean_array_push(v___x_832_, v___x_834_);
v___x_836_ = 1;
v___x_837_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(v___x_831_, v___x_835_, v___x_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetChecked___boxed(lean_object* v_a_838_, lean_object* v_a_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lasm_Web_Raw_targetChecked(v_a_838_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0(lean_object* v___x_862_, lean_object* v___x_863_, lean_object* v___x_864_, lean_object* v_d_865_){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0));
lean_inc_ref(v___x_862_);
v___x_867_ = l_Lasm_JS_readField___redArg(v___x_862_, v_d_865_, v___x_866_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_868_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v___x_867_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_867_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_a_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
else
{
lean_object* v_a_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v_a_876_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_876_);
lean_dec_ref_known(v___x_867_, 1);
v___x_877_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1));
lean_inc_ref(v___x_862_);
v___x_878_ = l_Lasm_JS_readField___redArg(v___x_862_, v_d_865_, v___x_877_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_879_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_886_ == 0)
{
v___x_881_ = v___x_878_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_878_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_879_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
else
{
lean_object* v_a_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_a_887_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_887_);
lean_dec_ref_known(v___x_878_, 1);
v___x_888_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2));
lean_inc_ref(v___x_862_);
v___x_889_ = l_Lasm_JS_readField___redArg(v___x_862_, v_d_865_, v___x_888_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_890_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_889_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_889_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
else
{
lean_object* v_a_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v_a_898_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_898_);
lean_dec_ref_known(v___x_889_, 1);
v___x_899_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3));
lean_inc_ref(v___x_863_);
v___x_900_ = l_Lasm_JS_readField___redArg(v___x_863_, v_d_865_, v___x_899_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_908_; 
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_901_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_908_ == 0)
{
v___x_903_ = v___x_900_;
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_906_; 
if (v_isShared_904_ == 0)
{
v___x_906_ = v___x_903_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_901_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v_a_909_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_a_909_);
lean_dec_ref_known(v___x_900_, 1);
v___x_910_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4));
lean_inc_ref(v___x_863_);
v___x_911_ = l_Lasm_JS_readField___redArg(v___x_863_, v_d_865_, v___x_910_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_912_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_911_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_911_);
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
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v_a_920_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_911_, 1);
v___x_921_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5));
lean_inc_ref(v___x_863_);
v___x_922_ = l_Lasm_JS_readField___redArg(v___x_863_, v_d_865_, v___x_921_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_923_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
else
{
lean_object* v_a_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v_a_931_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_931_);
lean_dec_ref_known(v___x_922_, 1);
v___x_932_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6));
lean_inc_ref(v___x_863_);
v___x_933_ = l_Lasm_JS_readField___redArg(v___x_863_, v_d_865_, v___x_932_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_934_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_933_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_933_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
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
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
else
{
lean_object* v_a_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v_a_942_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_942_);
lean_dec_ref_known(v___x_933_, 1);
v___x_943_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7));
lean_inc_ref(v___x_863_);
v___x_944_ = l_Lasm_JS_readField___redArg(v___x_863_, v_d_865_, v___x_943_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_945_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_944_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_944_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
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
lean_object* v_a_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v_a_953_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_953_);
lean_dec_ref_known(v___x_944_, 1);
v___x_954_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8));
lean_inc_ref(v___x_864_);
v___x_955_ = l_Lasm_JS_readField___redArg(v___x_864_, v_d_865_, v___x_954_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_956_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_955_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_955_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
else
{
lean_object* v_a_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_a_964_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_a_964_);
lean_dec_ref_known(v___x_955_, 1);
v___x_965_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9));
lean_inc_ref(v___x_864_);
v___x_966_ = l_Lasm_JS_readField___redArg(v___x_864_, v_d_865_, v___x_965_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_967_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_966_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_966_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
else
{
lean_object* v_a_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v_a_975_ = lean_ctor_get(v___x_966_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_966_, 1);
v___x_976_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10));
lean_inc_ref(v___x_864_);
v___x_977_ = l_Lasm_JS_readField___redArg(v___x_864_, v_d_865_, v___x_976_);
if (lean_obj_tag(v___x_977_) == 0)
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
lean_dec(v_a_975_);
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_978_ = lean_ctor_get(v___x_977_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_977_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_977_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
else
{
lean_object* v_a_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v_a_986_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_a_986_);
lean_dec_ref_known(v___x_977_, 1);
v___x_987_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11));
lean_inc_ref(v___x_864_);
v___x_988_ = l_Lasm_JS_readField___redArg(v___x_864_, v_d_865_, v___x_987_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
lean_dec(v_a_986_);
lean_dec(v_a_975_);
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_989_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_988_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_988_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
else
{
lean_object* v_a_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v_a_997_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_a_997_);
lean_dec_ref_known(v___x_988_, 1);
v___x_998_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12));
lean_inc_ref(v___x_864_);
v___x_999_ = l_Lasm_JS_readField___redArg(v___x_864_, v_d_865_, v___x_998_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
lean_dec(v_a_997_);
lean_dec(v_a_986_);
lean_dec(v_a_975_);
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_999_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_999_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v_a_1008_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v___x_999_, 1);
v___x_1009_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13));
lean_inc_ref(v___x_864_);
v___x_1010_ = l_Lasm_JS_readField___redArg(v___x_864_, v_d_865_, v___x_1009_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
lean_dec(v_a_1008_);
lean_dec(v_a_997_);
lean_dec(v_a_986_);
lean_dec(v_a_975_);
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
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
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v_a_1019_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1019_);
lean_dec_ref_known(v___x_1010_, 1);
v___x_1020_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14));
lean_inc_ref(v___x_864_);
v___x_1021_ = l_Lasm_JS_readField___redArg(v___x_864_, v_d_865_, v___x_1020_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
lean_dec(v_a_1019_);
lean_dec(v_a_1008_);
lean_dec(v_a_997_);
lean_dec(v_a_986_);
lean_dec(v_a_975_);
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
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
lean_object* v_a_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v_a_1030_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1030_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1031_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15));
lean_inc_ref(v___x_864_);
v___x_1032_ = l_Lasm_JS_readField___redArg(v___x_864_, v_d_865_, v___x_1031_);
if (lean_obj_tag(v___x_1032_) == 0)
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
lean_dec(v_a_1030_);
lean_dec(v_a_1019_);
lean_dec(v_a_1008_);
lean_dec(v_a_997_);
lean_dec(v_a_986_);
lean_dec(v_a_975_);
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_1033_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_1032_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1032_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
else
{
lean_object* v_a_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v_a_1041_ = lean_ctor_get(v___x_1032_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v___x_1032_, 1);
v___x_1042_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16));
lean_inc_ref(v___x_864_);
v___x_1043_ = l_Lasm_JS_readField___redArg(v___x_864_, v_d_865_, v___x_1042_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_object* v_a_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1051_; 
lean_dec(v_a_1041_);
lean_dec(v_a_1030_);
lean_dec(v_a_1019_);
lean_dec(v_a_1008_);
lean_dec(v_a_997_);
lean_dec(v_a_986_);
lean_dec(v_a_975_);
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_1044_ = lean_ctor_get(v___x_1043_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1043_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1046_ = v___x_1043_;
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_a_1044_);
lean_dec(v___x_1043_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1049_; 
if (v_isShared_1047_ == 0)
{
v___x_1049_ = v___x_1046_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_a_1044_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
}
else
{
lean_object* v_a_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v_a_1052_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_a_1052_);
lean_dec_ref_known(v___x_1043_, 1);
v___x_1053_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17));
lean_inc_ref(v___x_864_);
v___x_1054_ = l_Lasm_JS_readField___redArg(v___x_864_, v_d_865_, v___x_1053_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
lean_dec(v_a_1052_);
lean_dec(v_a_1041_);
lean_dec(v_a_1030_);
lean_dec(v_a_1019_);
lean_dec(v_a_1008_);
lean_dec(v_a_997_);
lean_dec(v_a_986_);
lean_dec(v_a_975_);
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
lean_dec_ref(v___x_862_);
v_a_1055_ = lean_ctor_get(v___x_1054_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1057_ = v___x_1054_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1054_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_a_1055_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v_a_1063_ = lean_ctor_get(v___x_1054_, 0);
lean_inc(v_a_1063_);
lean_dec_ref_known(v___x_1054_, 1);
v___x_1064_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18));
v___x_1065_ = l_Lasm_JS_readField___redArg(v___x_862_, v_d_865_, v___x_1064_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
lean_dec(v_a_1063_);
lean_dec(v_a_1052_);
lean_dec(v_a_1041_);
lean_dec(v_a_1030_);
lean_dec(v_a_1019_);
lean_dec(v_a_1008_);
lean_dec(v_a_997_);
lean_dec(v_a_986_);
lean_dec(v_a_975_);
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_863_);
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1065_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1065_);
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
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v_a_1074_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v___x_1065_, 1);
v___x_1075_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19));
v___x_1076_ = l_Lasm_JS_readField___redArg(v___x_863_, v_d_865_, v___x_1075_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
lean_dec(v_a_1074_);
lean_dec(v_a_1063_);
lean_dec(v_a_1052_);
lean_dec(v_a_1041_);
lean_dec(v_a_1030_);
lean_dec(v_a_1019_);
lean_dec(v_a_1008_);
lean_dec(v_a_997_);
lean_dec(v_a_986_);
lean_dec(v_a_975_);
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
lean_dec_ref(v___x_864_);
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___x_1076_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1076_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1077_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v_a_1085_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_a_1085_);
lean_dec_ref_known(v___x_1076_, 1);
v___x_1086_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20));
v___x_1087_ = l_Lasm_JS_readField___redArg(v___x_864_, v_d_865_, v___x_1086_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1095_; 
lean_dec(v_a_1085_);
lean_dec(v_a_1074_);
lean_dec(v_a_1063_);
lean_dec(v_a_1052_);
lean_dec(v_a_1041_);
lean_dec(v_a_1030_);
lean_dec(v_a_1019_);
lean_dec(v_a_1008_);
lean_dec(v_a_997_);
lean_dec(v_a_986_);
lean_dec(v_a_975_);
lean_dec(v_a_964_);
lean_dec(v_a_953_);
lean_dec(v_a_942_);
lean_dec(v_a_931_);
lean_dec(v_a_920_);
lean_dec(v_a_909_);
lean_dec(v_a_898_);
lean_dec(v_a_887_);
lean_dec(v_a_876_);
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1090_ = v___x_1087_;
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1087_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1093_; 
if (v_isShared_1091_ == 0)
{
v___x_1093_ = v___x_1090_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_a_1088_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
else
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1121_; 
v_a_1096_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1098_ = v___x_1087_;
v_isShared_1099_ = v_isSharedCheck_1121_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1087_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1121_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1100_; uint8_t v___x_1101_; uint8_t v___x_1102_; uint8_t v___x_1103_; uint8_t v___x_1104_; uint8_t v___x_1105_; double v___x_1106_; double v___x_1107_; double v___x_1108_; double v___x_1109_; double v___x_1110_; double v___x_1111_; double v___x_1112_; double v___x_1113_; double v___x_1114_; double v___x_1115_; uint8_t v___x_1116_; double v___x_1117_; lean_object* v___x_1119_; 
v___x_1100_ = lean_alloc_ctor(0, 4, 94);
lean_ctor_set(v___x_1100_, 0, v_a_876_);
lean_ctor_set(v___x_1100_, 1, v_a_887_);
lean_ctor_set(v___x_1100_, 2, v_a_898_);
lean_ctor_set(v___x_1100_, 3, v_a_1074_);
v___x_1101_ = lean_unbox(v_a_909_);
lean_dec(v_a_909_);
lean_ctor_set_uint8(v___x_1100_, sizeof(void*)*4 + 88, v___x_1101_);
v___x_1102_ = lean_unbox(v_a_920_);
lean_dec(v_a_920_);
lean_ctor_set_uint8(v___x_1100_, sizeof(void*)*4 + 89, v___x_1102_);
v___x_1103_ = lean_unbox(v_a_931_);
lean_dec(v_a_931_);
lean_ctor_set_uint8(v___x_1100_, sizeof(void*)*4 + 90, v___x_1103_);
v___x_1104_ = lean_unbox(v_a_942_);
lean_dec(v_a_942_);
lean_ctor_set_uint8(v___x_1100_, sizeof(void*)*4 + 91, v___x_1104_);
v___x_1105_ = lean_unbox(v_a_953_);
lean_dec(v_a_953_);
lean_ctor_set_uint8(v___x_1100_, sizeof(void*)*4 + 92, v___x_1105_);
v___x_1106_ = lean_unbox_float(v_a_964_);
lean_dec(v_a_964_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*4, v___x_1106_);
v___x_1107_ = lean_unbox_float(v_a_975_);
lean_dec(v_a_975_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*4 + 8, v___x_1107_);
v___x_1108_ = lean_unbox_float(v_a_986_);
lean_dec(v_a_986_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*4 + 16, v___x_1108_);
v___x_1109_ = lean_unbox_float(v_a_997_);
lean_dec(v_a_997_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*4 + 24, v___x_1109_);
v___x_1110_ = lean_unbox_float(v_a_1008_);
lean_dec(v_a_1008_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*4 + 32, v___x_1110_);
v___x_1111_ = lean_unbox_float(v_a_1019_);
lean_dec(v_a_1019_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*4 + 40, v___x_1111_);
v___x_1112_ = lean_unbox_float(v_a_1030_);
lean_dec(v_a_1030_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*4 + 48, v___x_1112_);
v___x_1113_ = lean_unbox_float(v_a_1041_);
lean_dec(v_a_1041_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*4 + 56, v___x_1113_);
v___x_1114_ = lean_unbox_float(v_a_1052_);
lean_dec(v_a_1052_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*4 + 64, v___x_1114_);
v___x_1115_ = lean_unbox_float(v_a_1063_);
lean_dec(v_a_1063_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*4 + 72, v___x_1115_);
v___x_1116_ = lean_unbox(v_a_1085_);
lean_dec(v_a_1085_);
lean_ctor_set_uint8(v___x_1100_, sizeof(void*)*4 + 93, v___x_1116_);
v___x_1117_ = lean_unbox_float(v_a_1096_);
lean_dec(v_a_1096_);
lean_ctor_set_float(v___x_1100_, sizeof(void*)*4 + 80, v___x_1117_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 0, v___x_1100_);
v___x_1119_ = v___x_1098_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1100_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
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
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___boxed(lean_object* v___x_1122_, lean_object* v___x_1123_, lean_object* v___x_1124_, lean_object* v_d_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lasm_Web_instFromJSEventInfo___lam__0(v___x_1122_, v___x_1123_, v___x_1124_, v_d_1125_);
lean_dec(v_d_1125_);
return v_res_1126_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEventInfo___closed__0(void){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___f_1130_; 
v___x_1127_ = l_Lasm_JS_instFromJSFloat;
v___x_1128_ = l_Lasm_JS_instFromJSBool;
v___x_1129_ = l_Lasm_JS_instFromJSString;
v___f_1130_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSEventInfo___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1130_, 0, v___x_1129_);
lean_closure_set(v___f_1130_, 1, v___x_1128_);
lean_closure_set(v___f_1130_, 2, v___x_1127_);
return v___f_1130_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEventInfo___closed__2(void){
_start:
{
uint8_t v___x_1132_; lean_object* v___x_1133_; lean_object* v___f_1134_; lean_object* v___x_1135_; 
v___x_1132_ = 0;
v___x_1133_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___closed__1));
v___f_1134_ = lean_obj_once(&l_Lasm_Web_instFromJSEventInfo___closed__0, &l_Lasm_Web_instFromJSEventInfo___closed__0_once, _init_l_Lasm_Web_instFromJSEventInfo___closed__0);
v___x_1135_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1135_, 0, v___f_1134_);
lean_ctor_set(v___x_1135_, 1, v___x_1133_);
lean_ctor_set_uint8(v___x_1135_, sizeof(void*)*2, v___x_1132_);
return v___x_1135_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEventInfo(void){
_start:
{
lean_object* v___x_1136_; 
v___x_1136_ = lean_obj_once(&l_Lasm_Web_instFromJSEventInfo___closed__2, &l_Lasm_Web_instFromJSEventInfo___closed__2_once, _init_l_Lasm_Web_instFromJSEventInfo___closed__2);
return v___x_1136_;
}
}
static double _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__0(void){
_start:
{
uint64_t v___x_1137_; double v___x_1138_; 
v___x_1137_ = 0ULL;
v___x_1138_ = lean_uint64_to_float(v___x_1137_);
return v___x_1138_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__1(void){
_start:
{
double v___x_1139_; uint8_t v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1139_ = lean_float_once(&l_Lasm_Web_instInhabitedEventInfo_default___closed__0, &l_Lasm_Web_instInhabitedEventInfo_default___closed__0_once, _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__0);
v___x_1140_ = 0;
v___x_1141_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_1142_ = lean_alloc_ctor(0, 4, 94);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
lean_ctor_set(v___x_1142_, 2, v___x_1141_);
lean_ctor_set(v___x_1142_, 3, v___x_1141_);
lean_ctor_set_uint8(v___x_1142_, sizeof(void*)*4 + 88, v___x_1140_);
lean_ctor_set_uint8(v___x_1142_, sizeof(void*)*4 + 89, v___x_1140_);
lean_ctor_set_uint8(v___x_1142_, sizeof(void*)*4 + 90, v___x_1140_);
lean_ctor_set_uint8(v___x_1142_, sizeof(void*)*4 + 91, v___x_1140_);
lean_ctor_set_uint8(v___x_1142_, sizeof(void*)*4 + 92, v___x_1140_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*4, v___x_1139_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*4 + 8, v___x_1139_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*4 + 16, v___x_1139_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*4 + 24, v___x_1139_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*4 + 32, v___x_1139_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*4 + 40, v___x_1139_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*4 + 48, v___x_1139_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*4 + 56, v___x_1139_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*4 + 64, v___x_1139_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*4 + 72, v___x_1139_);
lean_ctor_set_uint8(v___x_1142_, sizeof(void*)*4 + 93, v___x_1140_);
lean_ctor_set_float(v___x_1142_, sizeof(void*)*4 + 80, v___x_1139_);
return v___x_1142_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedEventInfo_default(void){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_obj_once(&l_Lasm_Web_instInhabitedEventInfo_default___closed__1, &l_Lasm_Web_instInhabitedEventInfo_default___closed__1_once, _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__1);
return v___x_1143_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedEventInfo(void){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = l_Lasm_Web_instInhabitedEventInfo_default;
return v___x_1144_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1157_ = lean_unsigned_to_nat(8u);
v___x_1158_ = lean_nat_to_int(v___x_1157_);
return v___x_1158_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1164_ = lean_unsigned_to_nat(7u);
v___x_1165_ = lean_nat_to_int(v___x_1164_);
return v___x_1165_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = lean_unsigned_to_nat(13u);
v___x_1171_ = lean_nat_to_int(v___x_1170_);
return v___x_1171_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1174_ = lean_unsigned_to_nat(10u);
v___x_1175_ = lean_nat_to_int(v___x_1174_);
return v___x_1175_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = lean_unsigned_to_nat(11u);
v___x_1179_ = lean_nat_to_int(v___x_1178_);
return v___x_1179_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = lean_unsigned_to_nat(12u);
v___x_1185_ = lean_nat_to_int(v___x_1184_);
return v___x_1185_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_unsigned_to_nat(9u);
v___x_1193_ = lean_nat_to_int(v___x_1192_);
return v___x_1193_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__0));
v___x_1216_ = lean_string_length(v___x_1215_);
return v___x_1216_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37(void){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36);
v___x_1218_ = lean_nat_to_int(v___x_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg(lean_object* v_x_1223_){
_start:
{
lean_object* v_type_1224_; lean_object* v_key_1225_; lean_object* v_code_1226_; uint8_t v_keyRepeat_1227_; uint8_t v_altKey_1228_; uint8_t v_ctrlKey_1229_; uint8_t v_metaKey_1230_; uint8_t v_shiftKey_1231_; double v_clientX_1232_; double v_clientY_1233_; double v_pageX_1234_; double v_pageY_1235_; double v_offsetX_1236_; double v_offsetY_1237_; double v_button_1238_; double v_buttons_1239_; double v_deltaX_1240_; double v_deltaY_1241_; lean_object* v_value_1242_; uint8_t v_checked_1243_; double v_timeStamp_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; uint8_t v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v_type_1224_ = lean_ctor_get(v_x_1223_, 0);
lean_inc_ref(v_type_1224_);
v_key_1225_ = lean_ctor_get(v_x_1223_, 1);
lean_inc_ref(v_key_1225_);
v_code_1226_ = lean_ctor_get(v_x_1223_, 2);
lean_inc_ref(v_code_1226_);
v_keyRepeat_1227_ = lean_ctor_get_uint8(v_x_1223_, sizeof(void*)*4 + 88);
v_altKey_1228_ = lean_ctor_get_uint8(v_x_1223_, sizeof(void*)*4 + 89);
v_ctrlKey_1229_ = lean_ctor_get_uint8(v_x_1223_, sizeof(void*)*4 + 90);
v_metaKey_1230_ = lean_ctor_get_uint8(v_x_1223_, sizeof(void*)*4 + 91);
v_shiftKey_1231_ = lean_ctor_get_uint8(v_x_1223_, sizeof(void*)*4 + 92);
v_clientX_1232_ = lean_ctor_get_float(v_x_1223_, sizeof(void*)*4);
v_clientY_1233_ = lean_ctor_get_float(v_x_1223_, sizeof(void*)*4 + 8);
v_pageX_1234_ = lean_ctor_get_float(v_x_1223_, sizeof(void*)*4 + 16);
v_pageY_1235_ = lean_ctor_get_float(v_x_1223_, sizeof(void*)*4 + 24);
v_offsetX_1236_ = lean_ctor_get_float(v_x_1223_, sizeof(void*)*4 + 32);
v_offsetY_1237_ = lean_ctor_get_float(v_x_1223_, sizeof(void*)*4 + 40);
v_button_1238_ = lean_ctor_get_float(v_x_1223_, sizeof(void*)*4 + 48);
v_buttons_1239_ = lean_ctor_get_float(v_x_1223_, sizeof(void*)*4 + 56);
v_deltaX_1240_ = lean_ctor_get_float(v_x_1223_, sizeof(void*)*4 + 64);
v_deltaY_1241_ = lean_ctor_get_float(v_x_1223_, sizeof(void*)*4 + 72);
v_value_1242_ = lean_ctor_get(v_x_1223_, 3);
lean_inc_ref(v_value_1242_);
v_checked_1243_ = lean_ctor_get_uint8(v_x_1223_, sizeof(void*)*4 + 93);
v_timeStamp_1244_ = lean_ctor_get_float(v_x_1223_, sizeof(void*)*4 + 80);
lean_dec_ref(v_x_1223_);
v___x_1245_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__4));
v___x_1246_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__5));
v___x_1247_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6);
v___x_1248_ = l_String_quote(v_type_1224_);
v___x_1249_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1248_);
v___x_1250_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1247_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
v___x_1251_ = 0;
v___x_1252_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1252_, 0, v___x_1250_);
lean_ctor_set_uint8(v___x_1252_, sizeof(void*)*1, v___x_1251_);
v___x_1253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1246_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__8));
v___x_1255_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1253_);
lean_ctor_set(v___x_1255_, 1, v___x_1254_);
v___x_1256_ = lean_box(1);
v___x_1257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1255_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
v___x_1258_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__9));
v___x_1259_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1257_);
lean_ctor_set(v___x_1259_, 1, v___x_1258_);
v___x_1260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
lean_ctor_set(v___x_1260_, 1, v___x_1245_);
v___x_1261_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10);
v___x_1262_ = l_String_quote(v_key_1225_);
v___x_1263_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
v___x_1264_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1261_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
v___x_1265_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1265_, 0, v___x_1264_);
lean_ctor_set_uint8(v___x_1265_, sizeof(void*)*1, v___x_1251_);
v___x_1266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1260_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
v___x_1267_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
lean_ctor_set(v___x_1267_, 1, v___x_1254_);
v___x_1268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
lean_ctor_set(v___x_1268_, 1, v___x_1256_);
v___x_1269_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__11));
v___x_1270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1268_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
v___x_1271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
lean_ctor_set(v___x_1271_, 1, v___x_1245_);
v___x_1272_ = l_String_quote(v_code_1226_);
v___x_1273_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
v___x_1274_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1247_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
lean_ctor_set_uint8(v___x_1275_, sizeof(void*)*1, v___x_1251_);
v___x_1276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1271_);
lean_ctor_set(v___x_1276_, 1, v___x_1275_);
v___x_1277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
lean_ctor_set(v___x_1277_, 1, v___x_1254_);
v___x_1278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
lean_ctor_set(v___x_1278_, 1, v___x_1256_);
v___x_1279_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__12));
v___x_1280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1278_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
v___x_1281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1280_);
lean_ctor_set(v___x_1281_, 1, v___x_1245_);
v___x_1282_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13);
v___x_1283_ = lean_unsigned_to_nat(0u);
v___x_1284_ = l_Bool_repr___redArg(v_keyRepeat_1227_);
v___x_1285_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1282_);
lean_ctor_set(v___x_1285_, 1, v___x_1284_);
v___x_1286_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1286_, 0, v___x_1285_);
lean_ctor_set_uint8(v___x_1286_, sizeof(void*)*1, v___x_1251_);
v___x_1287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1281_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
lean_ctor_set(v___x_1288_, 1, v___x_1254_);
v___x_1289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1288_);
lean_ctor_set(v___x_1289_, 1, v___x_1256_);
v___x_1290_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__14));
v___x_1291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1289_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
v___x_1292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
lean_ctor_set(v___x_1292_, 1, v___x_1245_);
v___x_1293_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15);
v___x_1294_ = l_Bool_repr___redArg(v_altKey_1228_);
v___x_1295_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1293_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
v___x_1296_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set_uint8(v___x_1296_, sizeof(void*)*1, v___x_1251_);
v___x_1297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1292_);
lean_ctor_set(v___x_1297_, 1, v___x_1296_);
v___x_1298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
lean_ctor_set(v___x_1298_, 1, v___x_1254_);
v___x_1299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
lean_ctor_set(v___x_1299_, 1, v___x_1256_);
v___x_1300_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__16));
v___x_1301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1299_);
lean_ctor_set(v___x_1301_, 1, v___x_1300_);
v___x_1302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
lean_ctor_set(v___x_1302_, 1, v___x_1245_);
v___x_1303_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17);
v___x_1304_ = l_Bool_repr___redArg(v_ctrlKey_1229_);
v___x_1305_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1303_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
v___x_1306_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
lean_ctor_set_uint8(v___x_1306_, sizeof(void*)*1, v___x_1251_);
v___x_1307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1302_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
lean_ctor_set(v___x_1308_, 1, v___x_1254_);
v___x_1309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1308_);
lean_ctor_set(v___x_1309_, 1, v___x_1256_);
v___x_1310_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__18));
v___x_1311_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1309_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v___x_1312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
lean_ctor_set(v___x_1312_, 1, v___x_1245_);
v___x_1313_ = l_Bool_repr___redArg(v_metaKey_1230_);
v___x_1314_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1303_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
lean_ctor_set_uint8(v___x_1315_, sizeof(void*)*1, v___x_1251_);
v___x_1316_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1312_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
lean_ctor_set(v___x_1317_, 1, v___x_1254_);
v___x_1318_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
lean_ctor_set(v___x_1318_, 1, v___x_1256_);
v___x_1319_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__19));
v___x_1320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1318_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
lean_ctor_set(v___x_1321_, 1, v___x_1245_);
v___x_1322_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20);
v___x_1323_ = l_Bool_repr___redArg(v_shiftKey_1231_);
v___x_1324_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1322_);
lean_ctor_set(v___x_1324_, 1, v___x_1323_);
v___x_1325_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
lean_ctor_set_uint8(v___x_1325_, sizeof(void*)*1, v___x_1251_);
v___x_1326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1321_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
lean_ctor_set(v___x_1327_, 1, v___x_1254_);
v___x_1328_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
lean_ctor_set(v___x_1328_, 1, v___x_1256_);
v___x_1329_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__21));
v___x_1330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1328_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
lean_ctor_set(v___x_1331_, 1, v___x_1245_);
v___x_1332_ = l_Float_repr(v_clientX_1232_, v___x_1283_);
v___x_1333_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1303_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
v___x_1334_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1334_, 0, v___x_1333_);
lean_ctor_set_uint8(v___x_1334_, sizeof(void*)*1, v___x_1251_);
v___x_1335_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1331_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
v___x_1336_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
lean_ctor_set(v___x_1336_, 1, v___x_1254_);
v___x_1337_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
lean_ctor_set(v___x_1337_, 1, v___x_1256_);
v___x_1338_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__22));
v___x_1339_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1337_);
lean_ctor_set(v___x_1339_, 1, v___x_1338_);
v___x_1340_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
lean_ctor_set(v___x_1340_, 1, v___x_1245_);
v___x_1341_ = l_Float_repr(v_clientY_1233_, v___x_1283_);
v___x_1342_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1303_);
lean_ctor_set(v___x_1342_, 1, v___x_1341_);
v___x_1343_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1343_, 0, v___x_1342_);
lean_ctor_set_uint8(v___x_1343_, sizeof(void*)*1, v___x_1251_);
v___x_1344_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1340_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
v___x_1345_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
lean_ctor_set(v___x_1345_, 1, v___x_1254_);
v___x_1346_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
lean_ctor_set(v___x_1346_, 1, v___x_1256_);
v___x_1347_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__23));
v___x_1348_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1346_);
lean_ctor_set(v___x_1348_, 1, v___x_1347_);
v___x_1349_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
lean_ctor_set(v___x_1349_, 1, v___x_1245_);
v___x_1350_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24);
v___x_1351_ = l_Float_repr(v_pageX_1234_, v___x_1283_);
v___x_1352_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1350_);
lean_ctor_set(v___x_1352_, 1, v___x_1351_);
v___x_1353_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*1, v___x_1251_);
v___x_1354_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1349_);
lean_ctor_set(v___x_1354_, 1, v___x_1353_);
v___x_1355_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1354_);
lean_ctor_set(v___x_1355_, 1, v___x_1254_);
v___x_1356_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1355_);
lean_ctor_set(v___x_1356_, 1, v___x_1256_);
v___x_1357_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__25));
v___x_1358_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1356_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
lean_ctor_set(v___x_1359_, 1, v___x_1245_);
v___x_1360_ = l_Float_repr(v_pageY_1235_, v___x_1283_);
v___x_1361_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1350_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v___x_1362_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
lean_ctor_set_uint8(v___x_1362_, sizeof(void*)*1, v___x_1251_);
v___x_1363_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1359_);
lean_ctor_set(v___x_1363_, 1, v___x_1362_);
v___x_1364_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1363_);
lean_ctor_set(v___x_1364_, 1, v___x_1254_);
v___x_1365_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1364_);
lean_ctor_set(v___x_1365_, 1, v___x_1256_);
v___x_1366_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__26));
v___x_1367_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1365_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
v___x_1368_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
lean_ctor_set(v___x_1368_, 1, v___x_1245_);
v___x_1369_ = l_Float_repr(v_offsetX_1236_, v___x_1283_);
v___x_1370_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1303_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
v___x_1371_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1371_, 0, v___x_1370_);
lean_ctor_set_uint8(v___x_1371_, sizeof(void*)*1, v___x_1251_);
v___x_1372_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1368_);
lean_ctor_set(v___x_1372_, 1, v___x_1371_);
v___x_1373_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1372_);
lean_ctor_set(v___x_1373_, 1, v___x_1254_);
v___x_1374_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
lean_ctor_set(v___x_1374_, 1, v___x_1256_);
v___x_1375_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__27));
v___x_1376_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1374_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
v___x_1377_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
lean_ctor_set(v___x_1377_, 1, v___x_1245_);
v___x_1378_ = l_Float_repr(v_offsetY_1237_, v___x_1283_);
v___x_1379_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1303_);
lean_ctor_set(v___x_1379_, 1, v___x_1378_);
v___x_1380_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
lean_ctor_set_uint8(v___x_1380_, sizeof(void*)*1, v___x_1251_);
v___x_1381_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1377_);
lean_ctor_set(v___x_1381_, 1, v___x_1380_);
v___x_1382_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1381_);
lean_ctor_set(v___x_1382_, 1, v___x_1254_);
v___x_1383_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1382_);
lean_ctor_set(v___x_1383_, 1, v___x_1256_);
v___x_1384_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__28));
v___x_1385_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1383_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
v___x_1386_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1385_);
lean_ctor_set(v___x_1386_, 1, v___x_1245_);
v___x_1387_ = l_Float_repr(v_button_1238_, v___x_1283_);
v___x_1388_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1293_);
lean_ctor_set(v___x_1388_, 1, v___x_1387_);
v___x_1389_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1389_, 0, v___x_1388_);
lean_ctor_set_uint8(v___x_1389_, sizeof(void*)*1, v___x_1251_);
v___x_1390_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1386_);
lean_ctor_set(v___x_1390_, 1, v___x_1389_);
v___x_1391_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
lean_ctor_set(v___x_1391_, 1, v___x_1254_);
v___x_1392_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
lean_ctor_set(v___x_1392_, 1, v___x_1256_);
v___x_1393_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__29));
v___x_1394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1392_);
lean_ctor_set(v___x_1394_, 1, v___x_1393_);
v___x_1395_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
lean_ctor_set(v___x_1395_, 1, v___x_1245_);
v___x_1396_ = l_Float_repr(v_buttons_1239_, v___x_1283_);
v___x_1397_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1303_);
lean_ctor_set(v___x_1397_, 1, v___x_1396_);
v___x_1398_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1398_, 0, v___x_1397_);
lean_ctor_set_uint8(v___x_1398_, sizeof(void*)*1, v___x_1251_);
v___x_1399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1395_);
lean_ctor_set(v___x_1399_, 1, v___x_1398_);
v___x_1400_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
lean_ctor_set(v___x_1400_, 1, v___x_1254_);
v___x_1401_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
lean_ctor_set(v___x_1401_, 1, v___x_1256_);
v___x_1402_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__30));
v___x_1403_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1401_);
lean_ctor_set(v___x_1403_, 1, v___x_1402_);
v___x_1404_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
lean_ctor_set(v___x_1404_, 1, v___x_1245_);
v___x_1405_ = l_Float_repr(v_deltaX_1240_, v___x_1283_);
v___x_1406_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1293_);
lean_ctor_set(v___x_1406_, 1, v___x_1405_);
v___x_1407_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
lean_ctor_set_uint8(v___x_1407_, sizeof(void*)*1, v___x_1251_);
v___x_1408_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1404_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
v___x_1409_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1408_);
lean_ctor_set(v___x_1409_, 1, v___x_1254_);
v___x_1410_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
lean_ctor_set(v___x_1410_, 1, v___x_1256_);
v___x_1411_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__31));
v___x_1412_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1410_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
v___x_1413_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
lean_ctor_set(v___x_1413_, 1, v___x_1245_);
v___x_1414_ = l_Float_repr(v_deltaY_1241_, v___x_1283_);
v___x_1415_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1293_);
lean_ctor_set(v___x_1415_, 1, v___x_1414_);
v___x_1416_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
lean_ctor_set_uint8(v___x_1416_, sizeof(void*)*1, v___x_1251_);
v___x_1417_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1413_);
lean_ctor_set(v___x_1417_, 1, v___x_1416_);
v___x_1418_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1417_);
lean_ctor_set(v___x_1418_, 1, v___x_1254_);
v___x_1419_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
lean_ctor_set(v___x_1419_, 1, v___x_1256_);
v___x_1420_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__32));
v___x_1421_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1419_);
lean_ctor_set(v___x_1421_, 1, v___x_1420_);
v___x_1422_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
lean_ctor_set(v___x_1422_, 1, v___x_1245_);
v___x_1423_ = l_String_quote(v_value_1242_);
v___x_1424_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
v___x_1425_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1350_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
v___x_1426_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
lean_ctor_set_uint8(v___x_1426_, sizeof(void*)*1, v___x_1251_);
v___x_1427_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1422_);
lean_ctor_set(v___x_1427_, 1, v___x_1426_);
v___x_1428_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
lean_ctor_set(v___x_1428_, 1, v___x_1254_);
v___x_1429_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1428_);
lean_ctor_set(v___x_1429_, 1, v___x_1256_);
v___x_1430_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__33));
v___x_1431_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1429_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1431_);
lean_ctor_set(v___x_1432_, 1, v___x_1245_);
v___x_1433_ = l_Bool_repr___redArg(v_checked_1243_);
v___x_1434_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1303_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
v___x_1435_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1435_, 0, v___x_1434_);
lean_ctor_set_uint8(v___x_1435_, sizeof(void*)*1, v___x_1251_);
v___x_1436_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1432_);
lean_ctor_set(v___x_1436_, 1, v___x_1435_);
v___x_1437_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
lean_ctor_set(v___x_1437_, 1, v___x_1254_);
v___x_1438_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
lean_ctor_set(v___x_1438_, 1, v___x_1256_);
v___x_1439_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__34));
v___x_1440_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1438_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
lean_ctor_set(v___x_1441_, 1, v___x_1245_);
v___x_1442_ = l_Float_repr(v_timeStamp_1244_, v___x_1283_);
v___x_1443_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1282_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
v___x_1444_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
lean_ctor_set_uint8(v___x_1444_, sizeof(void*)*1, v___x_1251_);
v___x_1445_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1441_);
lean_ctor_set(v___x_1445_, 1, v___x_1444_);
v___x_1446_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37);
v___x_1447_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__38));
v___x_1448_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1447_);
lean_ctor_set(v___x_1448_, 1, v___x_1445_);
v___x_1449_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__39));
v___x_1450_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1448_);
lean_ctor_set(v___x_1450_, 1, v___x_1449_);
v___x_1451_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1446_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
v___x_1452_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
lean_ctor_set_uint8(v___x_1452_, sizeof(void*)*1, v___x_1251_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr(lean_object* v_x_1453_, lean_object* v_prec_1454_){
_start:
{
lean_object* v___x_1455_; 
v___x_1455_ = l_Lasm_Web_instReprEventInfo_repr___redArg(v_x_1453_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr___boxed(lean_object* v_x_1456_, lean_object* v_prec_1457_){
_start:
{
lean_object* v_res_1458_; 
v_res_1458_ = l_Lasm_Web_instReprEventInfo_repr(v_x_1456_, v_prec_1457_);
lean_dec(v_prec_1457_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0(lean_object* v_context_1461_, lean_object* v_args_1462_){
_start:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; uint8_t v___x_1466_; 
v___x_1464_ = lean_unsigned_to_nat(0u);
v___x_1465_ = lean_array_get_size(v_args_1462_);
v___x_1466_ = lean_nat_dec_lt(v___x_1464_, v___x_1465_);
if (v___x_1466_ == 0)
{
lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1467_ = lean_box(0);
v___x_1468_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v_context_1461_, v___x_1467_);
return v___x_1468_;
}
else
{
lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1469_ = lean_array_fget_borrowed(v_args_1462_, v___x_1464_);
lean_inc(v___x_1469_);
v___x_1470_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v_context_1461_, v___x_1469_);
return v___x_1470_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0___boxed(lean_object* v_context_1471_, lean_object* v_args_1472_, lean_object* v_a_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0(v_context_1471_, v_args_1472_);
lean_dec_ref(v_args_1472_);
lean_dec_ref(v_context_1471_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0(lean_object* v_type_1476_, lean_object* v_handler_1477_, lean_object* v_args_1478_){
_start:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1480_ = ((lean_object*)(l_Lasm_Web_EventTarget_addEventListener___lam__0___closed__0));
v___x_1481_ = lean_string_append(v_type_1476_, v___x_1480_);
v___x_1482_ = l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0(v___x_1481_, v_args_1478_);
lean_dec_ref(v___x_1481_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v_a_1483_; lean_object* v___x_1484_; 
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
lean_inc(v_a_1483_);
lean_dec_ref_known(v___x_1482_, 1);
v___x_1484_ = lean_apply_2(v_handler_1477_, v_a_1483_, lean_box(0));
return v___x_1484_;
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1492_; 
lean_dec_ref(v_handler_1477_);
v_a_1485_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1487_ = v___x_1482_;
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___x_1482_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1490_; 
if (v_isShared_1488_ == 0)
{
v___x_1490_ = v___x_1487_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1485_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0___boxed(lean_object* v_type_1493_, lean_object* v_handler_1494_, lean_object* v_args_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v_res_1497_; 
v_res_1497_ = l_Lasm_Web_EventTarget_addEventListener___lam__0(v_type_1493_, v_handler_1494_, v_args_1495_);
lean_dec_ref(v_args_1495_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener(lean_object* v_target_1498_, lean_object* v_type_1499_, lean_object* v_handler_1500_, lean_object* v_options_1501_){
_start:
{
lean_object* v___f_1503_; lean_object* v___x_1504_; 
lean_inc_ref(v_type_1499_);
v___f_1503_ = lean_alloc_closure((void*)(l_Lasm_Web_EventTarget_addEventListener___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1503_, 0, v_type_1499_);
lean_closure_set(v___f_1503_, 1, v_handler_1500_);
v___x_1504_ = l_Lasm_Web_callback(v___f_1503_);
if (lean_obj_tag(v___x_1504_) == 0)
{
lean_object* v_a_1505_; lean_object* v___x_1506_; 
v_a_1505_ = lean_ctor_get(v___x_1504_, 0);
lean_inc(v_a_1505_);
lean_dec_ref_known(v___x_1504_, 1);
v___x_1506_ = l_Lasm_Web_Raw_listen(v_target_1498_, v_type_1499_, v_a_1505_, v_options_1501_);
return v___x_1506_;
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
lean_dec_ref(v_type_1499_);
lean_dec(v_target_1498_);
v_a_1507_ = lean_ctor_get(v___x_1504_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1509_ = v___x_1504_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1504_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___boxed(lean_object* v_target_1515_, lean_object* v_type_1516_, lean_object* v_handler_1517_, lean_object* v_options_1518_, lean_object* v_a_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l_Lasm_Web_EventTarget_addEventListener(v_target_1515_, v_type_1516_, v_handler_1517_, v_options_1518_);
lean_dec_ref(v_options_1518_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_on(lean_object* v_target_1521_, lean_object* v_type_1522_, lean_object* v_handler_1523_, lean_object* v_options_1524_){
_start:
{
lean_object* v___x_1526_; 
v___x_1526_ = l_Lasm_Web_EventTarget_addEventListener(v_target_1521_, v_type_1522_, v_handler_1523_, v_options_1524_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_on___boxed(lean_object* v_target_1527_, lean_object* v_type_1528_, lean_object* v_handler_1529_, lean_object* v_options_1530_, lean_object* v_a_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = l_Lasm_Web_EventTarget_on(v_target_1527_, v_type_1528_, v_handler_1529_, v_options_1530_);
lean_dec_ref(v_options_1530_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_dispatchEvent(lean_object* v_target_1533_, lean_object* v_event_1534_){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = l_Lasm_Web_Raw_dispatchEvent(v_target_1533_, v_event_1534_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_dispatchEvent___boxed(lean_object* v_target_1537_, lean_object* v_event_1538_, lean_object* v_a_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_Lasm_Web_EventTarget_dispatchEvent(v_target_1537_, v_event_1538_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Listener_remove(lean_object* v_l_1541_){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Lasm_Web_Raw_unlisten(v_l_1541_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Listener_remove___boxed(lean_object* v_l_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Lasm_Web_Listener_remove(v_l_1544_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_create(lean_object* v_type_1547_, uint8_t v_bubbles_1548_, uint8_t v_cancelable_1549_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_Lasm_Web_Raw_createEvent(v_type_1547_, v_bubbles_1548_, v_cancelable_1549_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_create___boxed(lean_object* v_type_1552_, lean_object* v_bubbles_1553_, lean_object* v_cancelable_1554_, lean_object* v_a_1555_){
_start:
{
uint8_t v_bubbles_boxed_1556_; uint8_t v_cancelable_boxed_1557_; lean_object* v_res_1558_; 
v_bubbles_boxed_1556_ = lean_unbox(v_bubbles_1553_);
v_cancelable_boxed_1557_ = lean_unbox(v_cancelable_1554_);
v_res_1558_ = l_Lasm_Web_Event_create(v_type_1552_, v_bubbles_boxed_1556_, v_cancelable_boxed_1557_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_custom(lean_object* v_type_1559_, lean_object* v_detail_1560_, uint8_t v_bubbles_1561_, uint8_t v_cancelable_1562_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = l_Lasm_Web_Raw_createCustomEvent(v_type_1559_, v_detail_1560_, v_bubbles_1561_, v_cancelable_1562_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_custom___boxed(lean_object* v_type_1565_, lean_object* v_detail_1566_, lean_object* v_bubbles_1567_, lean_object* v_cancelable_1568_, lean_object* v_a_1569_){
_start:
{
uint8_t v_bubbles_boxed_1570_; uint8_t v_cancelable_boxed_1571_; lean_object* v_res_1572_; 
v_bubbles_boxed_1570_ = lean_unbox(v_bubbles_1567_);
v_cancelable_boxed_1571_ = lean_unbox(v_cancelable_1568_);
v_res_1572_ = l_Lasm_Web_Event_custom(v_type_1565_, v_detail_1566_, v_bubbles_boxed_1570_, v_cancelable_boxed_1571_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(lean_object* v_d_1579_, lean_object* v_key_1580_){
_start:
{
if (lean_obj_tag(v_d_1579_) == 8)
{
lean_object* v___x_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1609_; 
v___x_1581_ = l_Lasm_JS_Data_field(v_d_1579_, v_key_1580_);
v_isSharedCheck_1609_ = !lean_is_exclusive(v_d_1579_);
if (v_isSharedCheck_1609_ == 0)
{
lean_object* v_unused_1610_; 
v_unused_1610_ = lean_ctor_get(v_d_1579_, 0);
lean_dec(v_unused_1610_);
v___x_1583_ = v_d_1579_;
v_isShared_1584_ = v_isSharedCheck_1609_;
goto v_resetjp_1582_;
}
else
{
lean_dec(v_d_1579_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1609_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
if (lean_obj_tag(v___x_1581_) == 2)
{
uint8_t v_b_1585_; lean_object* v___x_1586_; lean_object* v___x_1588_; 
v_b_1585_ = lean_ctor_get_uint8(v___x_1581_, 0);
lean_dec_ref_known(v___x_1581_, 0);
v___x_1586_ = lean_box(v_b_1585_);
if (v_isShared_1584_ == 0)
{
lean_ctor_set_tag(v___x_1583_, 1);
lean_ctor_set(v___x_1583_, 0, v___x_1586_);
v___x_1588_ = v___x_1583_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1586_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
else
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; uint8_t v___x_1600_; 
v___x_1590_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0));
v___x_1591_ = lean_string_append(v___x_1590_, v_key_1580_);
v___x_1592_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1));
v___x_1593_ = lean_string_append(v___x_1591_, v___x_1592_);
v___x_1594_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0));
v___x_1595_ = lean_string_append(v___x_1593_, v___x_1594_);
v___x_1596_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2));
v___x_1597_ = lean_string_append(v___x_1595_, v___x_1596_);
v___x_1598_ = l_Lasm_JS_Data_describe(v___x_1581_);
v___x_1599_ = lean_string_append(v___x_1597_, v___x_1598_);
lean_dec_ref(v___x_1598_);
v___x_1600_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_1600_ == 0)
{
lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1604_; 
v___x_1601_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___x_1602_ = lean_string_append(v___x_1599_, v___x_1601_);
if (v_isShared_1584_ == 0)
{
lean_ctor_set_tag(v___x_1583_, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1602_);
v___x_1604_ = v___x_1583_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v___x_1602_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
else
{
lean_object* v___x_1607_; 
if (v_isShared_1584_ == 0)
{
lean_ctor_set_tag(v___x_1583_, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1599_);
v___x_1607_ = v___x_1583_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1599_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
}
else
{
lean_object* v___x_1611_; 
lean_dec(v_d_1579_);
v___x_1611_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__4));
return v___x_1611_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___boxed(lean_object* v_d_1612_, lean_object* v_key_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1612_, v_key_1613_);
lean_dec_ref(v_key_1613_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(lean_object* v_d_1618_, lean_object* v_key_1619_){
_start:
{
if (lean_obj_tag(v_d_1618_) == 8)
{
lean_object* v___x_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1648_; 
v___x_1620_ = l_Lasm_JS_Data_field(v_d_1618_, v_key_1619_);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_d_1618_);
if (v_isSharedCheck_1648_ == 0)
{
lean_object* v_unused_1649_; 
v_unused_1649_ = lean_ctor_get(v_d_1618_, 0);
lean_dec(v_unused_1649_);
v___x_1622_ = v_d_1618_;
v_isShared_1623_ = v_isSharedCheck_1648_;
goto v_resetjp_1621_;
}
else
{
lean_dec(v_d_1618_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1648_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
if (lean_obj_tag(v___x_1620_) == 3)
{
double v_n_1624_; lean_object* v___x_1625_; lean_object* v___x_1627_; 
v_n_1624_ = lean_ctor_get_float(v___x_1620_, 0);
lean_dec_ref_known(v___x_1620_, 0);
v___x_1625_ = lean_box_float(v_n_1624_);
if (v_isShared_1623_ == 0)
{
lean_ctor_set_tag(v___x_1622_, 1);
lean_ctor_set(v___x_1622_, 0, v___x_1625_);
v___x_1627_ = v___x_1622_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v___x_1625_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
else
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; uint8_t v___x_1639_; 
v___x_1629_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0));
v___x_1630_ = lean_string_append(v___x_1629_, v_key_1619_);
v___x_1631_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1));
v___x_1632_ = lean_string_append(v___x_1630_, v___x_1631_);
v___x_1633_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__0));
v___x_1634_ = lean_string_append(v___x_1632_, v___x_1633_);
v___x_1635_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2));
v___x_1636_ = lean_string_append(v___x_1634_, v___x_1635_);
v___x_1637_ = l_Lasm_JS_Data_describe(v___x_1620_);
v___x_1638_ = lean_string_append(v___x_1636_, v___x_1637_);
lean_dec_ref(v___x_1637_);
v___x_1639_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_1639_ == 0)
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1643_; 
v___x_1640_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___x_1641_ = lean_string_append(v___x_1638_, v___x_1640_);
if (v_isShared_1623_ == 0)
{
lean_ctor_set_tag(v___x_1622_, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1641_);
v___x_1643_ = v___x_1622_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
else
{
lean_object* v___x_1646_; 
if (v_isShared_1623_ == 0)
{
lean_ctor_set_tag(v___x_1622_, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1638_);
v___x_1646_ = v___x_1622_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v___x_1638_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
}
else
{
lean_object* v___x_1650_; 
lean_dec(v_d_1618_);
v___x_1650_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__1));
return v___x_1650_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___boxed(lean_object* v_d_1651_, lean_object* v_key_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1651_, v_key_1652_);
lean_dec_ref(v_key_1652_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(lean_object* v_d_1656_, lean_object* v_key_1657_){
_start:
{
if (lean_obj_tag(v_d_1656_) == 8)
{
lean_object* v___x_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1689_; 
v___x_1658_ = l_Lasm_JS_Data_field(v_d_1656_, v_key_1657_);
v_isSharedCheck_1689_ = !lean_is_exclusive(v_d_1656_);
if (v_isSharedCheck_1689_ == 0)
{
lean_object* v_unused_1690_; 
v_unused_1690_ = lean_ctor_get(v_d_1656_, 0);
lean_dec(v_unused_1690_);
v___x_1660_ = v_d_1656_;
v_isShared_1661_ = v_isSharedCheck_1689_;
goto v_resetjp_1659_;
}
else
{
lean_dec(v_d_1656_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1689_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
if (lean_obj_tag(v___x_1658_) == 4)
{
lean_object* v_s_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_del_object(v___x_1660_);
v_s_1662_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1658_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_s_1662_);
lean_dec(v___x_1658_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
lean_ctor_set_tag(v___x_1664_, 1);
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_s_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
else
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; uint8_t v___x_1680_; 
v___x_1670_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0));
v___x_1671_ = lean_string_append(v___x_1670_, v_key_1657_);
v___x_1672_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1));
v___x_1673_ = lean_string_append(v___x_1671_, v___x_1672_);
v___x_1674_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0));
v___x_1675_ = lean_string_append(v___x_1673_, v___x_1674_);
v___x_1676_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2));
v___x_1677_ = lean_string_append(v___x_1675_, v___x_1676_);
v___x_1678_ = l_Lasm_JS_Data_describe(v___x_1658_);
v___x_1679_ = lean_string_append(v___x_1677_, v___x_1678_);
lean_dec_ref(v___x_1678_);
v___x_1680_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1681_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___x_1682_ = lean_string_append(v___x_1679_, v___x_1681_);
if (v_isShared_1661_ == 0)
{
lean_ctor_set_tag(v___x_1660_, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1682_);
v___x_1684_ = v___x_1660_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v___x_1682_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
else
{
lean_object* v___x_1687_; 
if (v_isShared_1661_ == 0)
{
lean_ctor_set_tag(v___x_1660_, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1679_);
v___x_1687_ = v___x_1660_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v___x_1679_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
}
}
else
{
lean_object* v___x_1691_; 
lean_dec(v_d_1656_);
v___x_1691_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___closed__0));
return v___x_1691_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___boxed(lean_object* v_d_1692_, lean_object* v_key_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1692_, v_key_1693_);
lean_dec_ref(v_key_1693_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0(lean_object* v_context_1697_, lean_object* v_d_1698_){
_start:
{
lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1707_; lean_object* v_received_1708_; lean_object* v___y_1727_; lean_object* v_a_1730_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1754_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0));
lean_inc(v_d_1698_);
v___x_1755_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1698_, v___x_1754_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v_a_1756_; 
v_a_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc(v_a_1756_);
lean_dec_ref_known(v___x_1755_, 1);
v_a_1730_ = v_a_1756_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; 
v_a_1757_ = lean_ctor_get(v___x_1755_, 0);
lean_inc(v_a_1757_);
lean_dec_ref_known(v___x_1755_, 1);
v___x_1758_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1));
lean_inc(v_d_1698_);
v___x_1759_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1698_, v___x_1758_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; 
lean_dec(v_a_1757_);
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
lean_inc(v_a_1760_);
lean_dec_ref_known(v___x_1759_, 1);
v_a_1730_ = v_a_1760_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v_a_1761_ = lean_ctor_get(v___x_1759_, 0);
lean_inc(v_a_1761_);
lean_dec_ref_known(v___x_1759_, 1);
v___x_1762_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2));
lean_inc(v_d_1698_);
v___x_1763_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1698_, v___x_1762_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; 
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1764_);
lean_dec_ref_known(v___x_1763_, 1);
v_a_1730_ = v_a_1764_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v_a_1765_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1765_);
lean_dec_ref_known(v___x_1763_, 1);
v___x_1766_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3));
lean_inc(v_d_1698_);
v___x_1767_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1698_, v___x_1766_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; 
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1768_);
lean_dec_ref_known(v___x_1767_, 1);
v_a_1730_ = v_a_1768_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v_a_1769_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1767_, 1);
v___x_1770_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4));
lean_inc(v_d_1698_);
v___x_1771_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1698_, v___x_1770_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; 
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref_known(v___x_1771_, 1);
v_a_1730_ = v_a_1772_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
v_a_1773_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1773_);
lean_dec_ref_known(v___x_1771_, 1);
v___x_1774_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5));
lean_inc(v_d_1698_);
v___x_1775_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1698_, v___x_1774_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v_a_1776_; 
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_a_1776_);
lean_dec_ref_known(v___x_1775_, 1);
v_a_1730_ = v_a_1776_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v_a_1777_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_a_1777_);
lean_dec_ref_known(v___x_1775_, 1);
v___x_1778_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6));
lean_inc(v_d_1698_);
v___x_1779_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1698_, v___x_1778_);
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_object* v_a_1780_; 
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1780_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_a_1780_);
lean_dec_ref_known(v___x_1779_, 1);
v_a_1730_ = v_a_1780_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v_a_1781_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_a_1781_);
lean_dec_ref_known(v___x_1779_, 1);
v___x_1782_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7));
lean_inc(v_d_1698_);
v___x_1783_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1698_, v___x_1782_);
if (lean_obj_tag(v___x_1783_) == 0)
{
lean_object* v_a_1784_; 
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1784_ = lean_ctor_get(v___x_1783_, 0);
lean_inc(v_a_1784_);
lean_dec_ref_known(v___x_1783_, 1);
v_a_1730_ = v_a_1784_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v_a_1785_ = lean_ctor_get(v___x_1783_, 0);
lean_inc(v_a_1785_);
lean_dec_ref_known(v___x_1783_, 1);
v___x_1786_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8));
lean_inc(v_d_1698_);
v___x_1787_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1698_, v___x_1786_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v_a_1788_; 
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1788_ = lean_ctor_get(v___x_1787_, 0);
lean_inc(v_a_1788_);
lean_dec_ref_known(v___x_1787_, 1);
v_a_1730_ = v_a_1788_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v_a_1789_ = lean_ctor_get(v___x_1787_, 0);
lean_inc(v_a_1789_);
lean_dec_ref_known(v___x_1787_, 1);
v___x_1790_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9));
lean_inc(v_d_1698_);
v___x_1791_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1698_, v___x_1790_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; 
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
lean_inc(v_a_1792_);
lean_dec_ref_known(v___x_1791_, 1);
v_a_1730_ = v_a_1792_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v_a_1793_ = lean_ctor_get(v___x_1791_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1791_, 1);
v___x_1794_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10));
lean_inc(v_d_1698_);
v___x_1795_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1698_, v___x_1794_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; 
lean_dec(v_a_1793_);
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
lean_inc(v_a_1796_);
lean_dec_ref_known(v___x_1795_, 1);
v_a_1730_ = v_a_1796_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
v_a_1797_ = lean_ctor_get(v___x_1795_, 0);
lean_inc(v_a_1797_);
lean_dec_ref_known(v___x_1795_, 1);
v___x_1798_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11));
lean_inc(v_d_1698_);
v___x_1799_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1698_, v___x_1798_);
if (lean_obj_tag(v___x_1799_) == 0)
{
lean_object* v_a_1800_; 
lean_dec(v_a_1797_);
lean_dec(v_a_1793_);
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1800_ = lean_ctor_get(v___x_1799_, 0);
lean_inc(v_a_1800_);
lean_dec_ref_known(v___x_1799_, 1);
v_a_1730_ = v_a_1800_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v_a_1801_ = lean_ctor_get(v___x_1799_, 0);
lean_inc(v_a_1801_);
lean_dec_ref_known(v___x_1799_, 1);
v___x_1802_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12));
lean_inc(v_d_1698_);
v___x_1803_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1698_, v___x_1802_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; 
lean_dec(v_a_1801_);
lean_dec(v_a_1797_);
lean_dec(v_a_1793_);
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
lean_inc(v_a_1804_);
lean_dec_ref_known(v___x_1803_, 1);
v_a_1730_ = v_a_1804_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v_a_1805_ = lean_ctor_get(v___x_1803_, 0);
lean_inc(v_a_1805_);
lean_dec_ref_known(v___x_1803_, 1);
v___x_1806_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13));
lean_inc(v_d_1698_);
v___x_1807_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1698_, v___x_1806_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_a_1808_; 
lean_dec(v_a_1805_);
lean_dec(v_a_1801_);
lean_dec(v_a_1797_);
lean_dec(v_a_1793_);
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1808_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_a_1808_);
lean_dec_ref_known(v___x_1807_, 1);
v_a_1730_ = v_a_1808_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v_a_1809_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_a_1809_);
lean_dec_ref_known(v___x_1807_, 1);
v___x_1810_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14));
lean_inc(v_d_1698_);
v___x_1811_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1698_, v___x_1810_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v_a_1812_; 
lean_dec(v_a_1809_);
lean_dec(v_a_1805_);
lean_dec(v_a_1801_);
lean_dec(v_a_1797_);
lean_dec(v_a_1793_);
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
lean_inc(v_a_1812_);
lean_dec_ref_known(v___x_1811_, 1);
v_a_1730_ = v_a_1812_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v_a_1813_ = lean_ctor_get(v___x_1811_, 0);
lean_inc(v_a_1813_);
lean_dec_ref_known(v___x_1811_, 1);
v___x_1814_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15));
lean_inc(v_d_1698_);
v___x_1815_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1698_, v___x_1814_);
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_object* v_a_1816_; 
lean_dec(v_a_1813_);
lean_dec(v_a_1809_);
lean_dec(v_a_1805_);
lean_dec(v_a_1801_);
lean_dec(v_a_1797_);
lean_dec(v_a_1793_);
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1816_ = lean_ctor_get(v___x_1815_, 0);
lean_inc(v_a_1816_);
lean_dec_ref_known(v___x_1815_, 1);
v_a_1730_ = v_a_1816_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v_a_1817_ = lean_ctor_get(v___x_1815_, 0);
lean_inc(v_a_1817_);
lean_dec_ref_known(v___x_1815_, 1);
v___x_1818_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16));
lean_inc(v_d_1698_);
v___x_1819_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1698_, v___x_1818_);
if (lean_obj_tag(v___x_1819_) == 0)
{
lean_object* v_a_1820_; 
lean_dec(v_a_1817_);
lean_dec(v_a_1813_);
lean_dec(v_a_1809_);
lean_dec(v_a_1805_);
lean_dec(v_a_1801_);
lean_dec(v_a_1797_);
lean_dec(v_a_1793_);
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1820_ = lean_ctor_get(v___x_1819_, 0);
lean_inc(v_a_1820_);
lean_dec_ref_known(v___x_1819_, 1);
v_a_1730_ = v_a_1820_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v_a_1821_ = lean_ctor_get(v___x_1819_, 0);
lean_inc(v_a_1821_);
lean_dec_ref_known(v___x_1819_, 1);
v___x_1822_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17));
lean_inc(v_d_1698_);
v___x_1823_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1698_, v___x_1822_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; 
lean_dec(v_a_1821_);
lean_dec(v_a_1817_);
lean_dec(v_a_1813_);
lean_dec(v_a_1809_);
lean_dec(v_a_1805_);
lean_dec(v_a_1801_);
lean_dec(v_a_1797_);
lean_dec(v_a_1793_);
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
v_a_1730_ = v_a_1824_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v_a_1825_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1825_);
lean_dec_ref_known(v___x_1823_, 1);
v___x_1826_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18));
lean_inc(v_d_1698_);
v___x_1827_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1698_, v___x_1826_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v_a_1828_; 
lean_dec(v_a_1825_);
lean_dec(v_a_1821_);
lean_dec(v_a_1817_);
lean_dec(v_a_1813_);
lean_dec(v_a_1809_);
lean_dec(v_a_1805_);
lean_dec(v_a_1801_);
lean_dec(v_a_1797_);
lean_dec(v_a_1793_);
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1828_ = lean_ctor_get(v___x_1827_, 0);
lean_inc(v_a_1828_);
lean_dec_ref_known(v___x_1827_, 1);
v_a_1730_ = v_a_1828_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v_a_1829_ = lean_ctor_get(v___x_1827_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___x_1827_, 1);
v___x_1830_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19));
lean_inc(v_d_1698_);
v___x_1831_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1698_, v___x_1830_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1832_; 
lean_dec(v_a_1829_);
lean_dec(v_a_1825_);
lean_dec(v_a_1821_);
lean_dec(v_a_1817_);
lean_dec(v_a_1813_);
lean_dec(v_a_1809_);
lean_dec(v_a_1805_);
lean_dec(v_a_1801_);
lean_dec(v_a_1797_);
lean_dec(v_a_1793_);
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1832_ = lean_ctor_get(v___x_1831_, 0);
lean_inc(v_a_1832_);
lean_dec_ref_known(v___x_1831_, 1);
v_a_1730_ = v_a_1832_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
v_a_1833_ = lean_ctor_get(v___x_1831_, 0);
lean_inc(v_a_1833_);
lean_dec_ref_known(v___x_1831_, 1);
v___x_1834_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20));
lean_inc(v_d_1698_);
v___x_1835_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1698_, v___x_1834_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; 
lean_dec(v_a_1833_);
lean_dec(v_a_1829_);
lean_dec(v_a_1825_);
lean_dec(v_a_1821_);
lean_dec(v_a_1817_);
lean_dec(v_a_1813_);
lean_dec(v_a_1809_);
lean_dec(v_a_1805_);
lean_dec(v_a_1801_);
lean_dec(v_a_1797_);
lean_dec(v_a_1793_);
lean_dec(v_a_1789_);
lean_dec(v_a_1785_);
lean_dec(v_a_1781_);
lean_dec(v_a_1777_);
lean_dec(v_a_1773_);
lean_dec(v_a_1769_);
lean_dec(v_a_1765_);
lean_dec(v_a_1761_);
lean_dec(v_a_1757_);
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref_known(v___x_1835_, 1);
v_a_1730_ = v_a_1836_;
goto v___jp_1729_;
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1862_; 
lean_dec(v_d_1698_);
v_a_1837_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1839_ = v___x_1835_;
v_isShared_1840_ = v_isSharedCheck_1862_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___x_1835_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1862_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1841_; uint8_t v___x_1842_; uint8_t v___x_1843_; uint8_t v___x_1844_; uint8_t v___x_1845_; uint8_t v___x_1846_; double v___x_1847_; double v___x_1848_; double v___x_1849_; double v___x_1850_; double v___x_1851_; double v___x_1852_; double v___x_1853_; double v___x_1854_; double v___x_1855_; double v___x_1856_; uint8_t v___x_1857_; double v___x_1858_; lean_object* v___x_1860_; 
v___x_1841_ = lean_alloc_ctor(0, 4, 94);
lean_ctor_set(v___x_1841_, 0, v_a_1757_);
lean_ctor_set(v___x_1841_, 1, v_a_1761_);
lean_ctor_set(v___x_1841_, 2, v_a_1765_);
lean_ctor_set(v___x_1841_, 3, v_a_1829_);
v___x_1842_ = lean_unbox(v_a_1769_);
lean_dec(v_a_1769_);
lean_ctor_set_uint8(v___x_1841_, sizeof(void*)*4 + 88, v___x_1842_);
v___x_1843_ = lean_unbox(v_a_1773_);
lean_dec(v_a_1773_);
lean_ctor_set_uint8(v___x_1841_, sizeof(void*)*4 + 89, v___x_1843_);
v___x_1844_ = lean_unbox(v_a_1777_);
lean_dec(v_a_1777_);
lean_ctor_set_uint8(v___x_1841_, sizeof(void*)*4 + 90, v___x_1844_);
v___x_1845_ = lean_unbox(v_a_1781_);
lean_dec(v_a_1781_);
lean_ctor_set_uint8(v___x_1841_, sizeof(void*)*4 + 91, v___x_1845_);
v___x_1846_ = lean_unbox(v_a_1785_);
lean_dec(v_a_1785_);
lean_ctor_set_uint8(v___x_1841_, sizeof(void*)*4 + 92, v___x_1846_);
v___x_1847_ = lean_unbox_float(v_a_1789_);
lean_dec(v_a_1789_);
lean_ctor_set_float(v___x_1841_, sizeof(void*)*4, v___x_1847_);
v___x_1848_ = lean_unbox_float(v_a_1793_);
lean_dec(v_a_1793_);
lean_ctor_set_float(v___x_1841_, sizeof(void*)*4 + 8, v___x_1848_);
v___x_1849_ = lean_unbox_float(v_a_1797_);
lean_dec(v_a_1797_);
lean_ctor_set_float(v___x_1841_, sizeof(void*)*4 + 16, v___x_1849_);
v___x_1850_ = lean_unbox_float(v_a_1801_);
lean_dec(v_a_1801_);
lean_ctor_set_float(v___x_1841_, sizeof(void*)*4 + 24, v___x_1850_);
v___x_1851_ = lean_unbox_float(v_a_1805_);
lean_dec(v_a_1805_);
lean_ctor_set_float(v___x_1841_, sizeof(void*)*4 + 32, v___x_1851_);
v___x_1852_ = lean_unbox_float(v_a_1809_);
lean_dec(v_a_1809_);
lean_ctor_set_float(v___x_1841_, sizeof(void*)*4 + 40, v___x_1852_);
v___x_1853_ = lean_unbox_float(v_a_1813_);
lean_dec(v_a_1813_);
lean_ctor_set_float(v___x_1841_, sizeof(void*)*4 + 48, v___x_1853_);
v___x_1854_ = lean_unbox_float(v_a_1817_);
lean_dec(v_a_1817_);
lean_ctor_set_float(v___x_1841_, sizeof(void*)*4 + 56, v___x_1854_);
v___x_1855_ = lean_unbox_float(v_a_1821_);
lean_dec(v_a_1821_);
lean_ctor_set_float(v___x_1841_, sizeof(void*)*4 + 64, v___x_1855_);
v___x_1856_ = lean_unbox_float(v_a_1825_);
lean_dec(v_a_1825_);
lean_ctor_set_float(v___x_1841_, sizeof(void*)*4 + 72, v___x_1856_);
v___x_1857_ = lean_unbox(v_a_1833_);
lean_dec(v_a_1833_);
lean_ctor_set_uint8(v___x_1841_, sizeof(void*)*4 + 93, v___x_1857_);
v___x_1858_ = lean_unbox_float(v_a_1837_);
lean_dec(v_a_1837_);
lean_ctor_set_float(v___x_1841_, sizeof(void*)*4 + 80, v___x_1858_);
if (v_isShared_1840_ == 0)
{
lean_ctor_set_tag(v___x_1839_, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1841_);
v___x_1860_ = v___x_1839_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1841_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
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
v___jp_1700_:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1703_ = lean_string_append(v___y_1701_, v___y_1702_);
lean_dec_ref(v___y_1702_);
v___x_1704_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1703_);
v___x_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1704_);
return v___x_1705_;
}
v___jp_1706_:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; uint8_t v___x_1720_; 
v___x_1709_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_1710_ = lean_string_append(v___x_1709_, v_context_1697_);
v___x_1711_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_1712_ = lean_string_append(v___x_1710_, v___x_1711_);
v___x_1713_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___closed__1));
v___x_1714_ = lean_string_append(v___x_1712_, v___x_1713_);
v___x_1715_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_1716_ = lean_string_append(v___x_1714_, v___x_1715_);
v___x_1717_ = lean_string_append(v___x_1716_, v_received_1708_);
lean_dec_ref(v_received_1708_);
v___x_1718_ = lean_string_utf8_byte_size(v___y_1707_);
v___x_1719_ = lean_unsigned_to_nat(0u);
v___x_1720_ = lean_nat_dec_eq(v___x_1718_, v___x_1719_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1721_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__0));
v___x_1722_ = lean_string_append(v___x_1721_, v___y_1707_);
lean_dec_ref(v___y_1707_);
v___x_1723_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__1));
v___x_1724_ = lean_string_append(v___x_1722_, v___x_1723_);
v___y_1701_ = v___x_1717_;
v___y_1702_ = v___x_1724_;
goto v___jp_1700_;
}
else
{
lean_object* v___x_1725_; 
lean_dec_ref(v___y_1707_);
v___x_1725_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___y_1701_ = v___x_1717_;
v___y_1702_ = v___x_1725_;
goto v___jp_1700_;
}
}
v___jp_1726_:
{
lean_object* v___x_1728_; 
v___x_1728_ = l_Lasm_JS_Data_describe(v_d_1698_);
v___y_1707_ = v___y_1727_;
v_received_1708_ = v___x_1728_;
goto v___jp_1706_;
}
v___jp_1729_:
{
if (lean_obj_tag(v_d_1698_) == 9)
{
lean_object* v_value_1731_; lean_object* v_description_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v_value_1731_ = lean_ctor_get(v_d_1698_, 0);
v_description_1732_ = lean_ctor_get(v_d_1698_, 1);
v___x_1733_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_1734_ = lean_string_dec_eq(v_description_1732_, v___x_1733_);
if (v___x_1734_ == 0)
{
v___y_1727_ = v_a_1730_;
goto v___jp_1726_;
}
else
{
lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1751_; 
lean_inc(v_value_1731_);
v_isSharedCheck_1751_ = !lean_is_exclusive(v_d_1698_);
if (v_isSharedCheck_1751_ == 0)
{
lean_object* v_unused_1752_; lean_object* v_unused_1753_; 
v_unused_1752_ = lean_ctor_get(v_d_1698_, 1);
lean_dec(v_unused_1752_);
v_unused_1753_ = lean_ctor_get(v_d_1698_, 0);
lean_dec(v_unused_1753_);
v___x_1736_ = v_d_1698_;
v_isShared_1737_ = v_isSharedCheck_1751_;
goto v_resetjp_1735_;
}
else
{
lean_dec(v_d_1698_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1751_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
uint32_t v___x_1738_; uint64_t v___x_1739_; lean_object* v___x_1741_; 
v___x_1738_ = 206;
v___x_1739_ = 0ULL;
lean_inc(v_value_1731_);
if (v_isShared_1737_ == 0)
{
lean_ctor_set(v___x_1736_, 1, v___x_1733_);
v___x_1741_ = v___x_1736_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_value_1731_);
lean_ctor_set(v_reuseFailAlloc_1750_, 1, v___x_1733_);
v___x_1741_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
uint32_t v___x_1742_; lean_object* v___x_1743_; 
v___x_1742_ = lasm_js_value_handle(v_value_1731_);
lean_dec(v_value_1731_);
v___x_1743_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1738_, v___x_1739_, v___x_1741_, v___x_1742_);
lean_dec_ref(v___x_1741_);
if (lean_obj_tag(v___x_1743_) == 0)
{
lean_object* v_a_1744_; uint8_t v___x_1745_; 
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1744_);
lean_dec_ref_known(v___x_1743_, 1);
v___x_1745_ = lean_string_validate_utf8(v_a_1744_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
lean_dec(v_a_1744_);
v___x_1746_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_1747_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1746_);
v___y_1707_ = v_a_1730_;
v_received_1708_ = v___x_1747_;
goto v___jp_1706_;
}
else
{
lean_object* v___x_1748_; 
v___x_1748_ = lean_string_from_utf8_unchecked(v_a_1744_);
v___y_1707_ = v_a_1730_;
v_received_1708_ = v___x_1748_;
goto v___jp_1706_;
}
}
else
{
lean_object* v___x_1749_; 
lean_dec_ref_known(v___x_1743_, 1);
v___x_1749_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v___y_1707_ = v_a_1730_;
v_received_1708_ = v___x_1749_;
goto v___jp_1706_;
}
}
}
}
}
else
{
v___y_1727_ = v_a_1730_;
goto v___jp_1726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___boxed(lean_object* v_context_1863_, lean_object* v_d_1864_, lean_object* v_a_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0(v_context_1863_, v_d_1864_);
lean_dec_ref(v_context_1863_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_info(lean_object* v_e_1868_){
_start:
{
lean_object* v___x_1870_; 
v___x_1870_ = l_Lasm_Web_Raw_eventInfo(v_e_1868_);
if (lean_obj_tag(v___x_1870_) == 0)
{
lean_object* v_a_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v_a_1871_ = lean_ctor_get(v___x_1870_, 0);
lean_inc(v_a_1871_);
lean_dec_ref_known(v___x_1870_, 1);
v___x_1872_ = ((lean_object*)(l_Lasm_Web_Event_info___closed__0));
v___x_1873_ = l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0(v___x_1872_, v_a_1871_);
return v___x_1873_;
}
else
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1881_; 
v_a_1874_ = lean_ctor_get(v___x_1870_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1870_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1876_ = v___x_1870_;
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1870_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_a_1874_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_info___boxed(lean_object* v_e_1882_, lean_object* v_a_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l_Lasm_Web_Event_info(v_e_1882_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0(lean_object* v_context_1885_, lean_object* v_bytes_1886_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = l_Lasm_JS_Wire_decode(v_bytes_1886_);
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v_a_1889_; lean_object* v___x_1890_; 
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
lean_inc(v_a_1889_);
lean_dec_ref_known(v___x_1888_, 1);
v___x_1890_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(v_context_1885_, v_a_1889_);
return v___x_1890_;
}
else
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1898_; 
v_a_1891_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1893_ = v___x_1888_;
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1888_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1896_; 
if (v_isShared_1894_ == 0)
{
v___x_1896_ = v___x_1893_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_a_1891_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0___boxed(lean_object* v_context_1899_, lean_object* v_bytes_1900_, lean_object* v_a_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0(v_context_1899_, v_bytes_1900_);
lean_dec_ref(v_bytes_1900_);
lean_dec_ref(v_context_1899_);
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(lean_object* v_o_1904_, lean_object* v_key_1905_){
_start:
{
uint32_t v___x_1907_; uint32_t v___x_1908_; uint64_t v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1907_ = 203;
v___x_1908_ = lasm_js_value_handle(v_o_1904_);
v___x_1909_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
lean_inc_ref(v_key_1905_);
v___x_1910_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1910_, 0, v_key_1905_);
v___x_1911_ = l_Lasm_JS_Wire_encode(v___x_1910_);
lean_dec_ref_known(v___x_1910_, 1);
v___x_1912_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_1913_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1913_, 0, v_o_1904_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
v___x_1914_ = lasm_js_call(v___x_1907_, v___x_1908_, v___x_1909_, v___x_1911_, v___x_1913_);
lean_dec_ref_known(v___x_1913_, 2);
lean_dec_ref(v___x_1911_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref_known(v___x_1914_, 1);
v___x_1916_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_1917_ = l_String_quote(v_key_1905_);
v___x_1918_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1917_);
v___x_1919_ = lean_unsigned_to_nat(120u);
v___x_1920_ = lean_unsigned_to_nat(0u);
v___x_1921_ = l_Std_Format_pretty(v___x_1918_, v___x_1919_, v___x_1920_, v___x_1920_);
v___x_1922_ = lean_string_append(v___x_1916_, v___x_1921_);
lean_dec_ref(v___x_1921_);
v___x_1923_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0(v___x_1922_, v_a_1915_);
lean_dec(v_a_1915_);
lean_dec_ref(v___x_1922_);
return v___x_1923_;
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
lean_dec_ref(v_key_1905_);
v_a_1924_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___x_1914_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1914_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___boxed(lean_object* v_o_1932_, lean_object* v_key_1933_, lean_object* v_a_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(v_o_1932_, v_key_1933_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_type(lean_object* v_e_1936_){
_start:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1938_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0));
v___x_1939_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(v_e_1936_, v___x_1938_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_type___boxed(lean_object* v_e_1940_, lean_object* v_a_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l_Lasm_Web_Event_type(v_e_1940_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1(lean_object* v_context_1944_, lean_object* v_d_1945_){
_start:
{
lean_object* v___y_1951_; lean_object* v___y_1952_; 
switch(lean_obj_tag(v_d_1945_))
{
case 1:
{
goto v___jp_1947_;
}
case 0:
{
goto v___jp_1947_;
}
default: 
{
if (lean_obj_tag(v_d_1945_) == 4)
{
lean_object* v_s_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v_s_1956_ = lean_ctor_get(v_d_1945_, 0);
lean_inc_ref(v_s_1956_);
lean_dec_ref_known(v_d_1945_, 1);
v___x_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1957_, 0, v_s_1956_);
v___x_1958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1958_, 0, v___x_1957_);
return v___x_1958_;
}
else
{
lean_object* v___x_1959_; lean_object* v_received_1961_; 
v___x_1959_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_1945_) == 9)
{
lean_object* v_value_1975_; lean_object* v_description_1976_; uint8_t v___x_1977_; 
v_value_1975_ = lean_ctor_get(v_d_1945_, 0);
v_description_1976_ = lean_ctor_get(v_d_1945_, 1);
v___x_1977_ = lean_string_dec_eq(v_description_1976_, v___x_1959_);
if (v___x_1977_ == 0)
{
goto v___jp_1973_;
}
else
{
uint32_t v___x_1978_; uint64_t v___x_1979_; lean_object* v___x_1980_; uint32_t v___x_1981_; lean_object* v___x_1982_; 
lean_inc_n(v_value_1975_, 2);
lean_dec_ref_known(v_d_1945_, 2);
v___x_1978_ = 206;
v___x_1979_ = 0ULL;
v___x_1980_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1980_, 0, v_value_1975_);
lean_ctor_set(v___x_1980_, 1, v___x_1959_);
v___x_1981_ = lasm_js_value_handle(v_value_1975_);
lean_dec(v_value_1975_);
v___x_1982_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1978_, v___x_1979_, v___x_1980_, v___x_1981_);
lean_dec_ref_known(v___x_1980_, 2);
if (lean_obj_tag(v___x_1982_) == 0)
{
lean_object* v_a_1983_; uint8_t v___x_1984_; 
v_a_1983_ = lean_ctor_get(v___x_1982_, 0);
lean_inc(v_a_1983_);
lean_dec_ref_known(v___x_1982_, 1);
v___x_1984_ = lean_string_validate_utf8(v_a_1983_);
if (v___x_1984_ == 0)
{
lean_object* v___x_1985_; lean_object* v___x_1986_; 
lean_dec(v_a_1983_);
v___x_1985_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_1986_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1985_);
v_received_1961_ = v___x_1986_;
goto v___jp_1960_;
}
else
{
lean_object* v___x_1987_; 
v___x_1987_ = lean_string_from_utf8_unchecked(v_a_1983_);
v_received_1961_ = v___x_1987_;
goto v___jp_1960_;
}
}
else
{
lean_object* v___x_1988_; 
lean_dec_ref_known(v___x_1982_, 1);
v___x_1988_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_1961_ = v___x_1988_;
goto v___jp_1960_;
}
}
}
else
{
goto v___jp_1973_;
}
v___jp_1960_:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; uint8_t v___x_1971_; 
v___x_1962_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_1963_ = lean_string_append(v___x_1962_, v_context_1944_);
v___x_1964_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_1965_ = lean_string_append(v___x_1963_, v___x_1964_);
v___x_1966_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___closed__0));
v___x_1967_ = lean_string_append(v___x_1965_, v___x_1966_);
v___x_1968_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_1969_ = lean_string_append(v___x_1967_, v___x_1968_);
v___x_1970_ = lean_string_append(v___x_1969_, v_received_1961_);
lean_dec_ref(v_received_1961_);
v___x_1971_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; 
v___x_1972_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_1951_ = v___x_1970_;
v___y_1952_ = v___x_1972_;
goto v___jp_1950_;
}
else
{
v___y_1951_ = v___x_1970_;
v___y_1952_ = v___x_1959_;
goto v___jp_1950_;
}
}
v___jp_1973_:
{
lean_object* v___x_1974_; 
v___x_1974_ = l_Lasm_JS_Data_describe(v_d_1945_);
v_received_1961_ = v___x_1974_;
goto v___jp_1960_;
}
}
}
}
v___jp_1947_:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1948_ = lean_box(0);
v___x_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
return v___x_1949_;
}
v___jp_1950_:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1953_ = lean_string_append(v___y_1951_, v___y_1952_);
v___x_1954_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1953_);
v___x_1955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1954_);
return v___x_1955_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1989_, lean_object* v_d_1990_, lean_object* v_a_1991_){
_start:
{
lean_object* v_res_1992_; 
v_res_1992_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1(v_context_1989_, v_d_1990_);
lean_dec_ref(v_context_1989_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0(lean_object* v_context_1993_, lean_object* v_bytes_1994_){
_start:
{
lean_object* v___x_1996_; 
v___x_1996_ = l_Lasm_JS_Wire_decode(v_bytes_1994_);
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_1997_; lean_object* v___x_1998_; 
v_a_1997_ = lean_ctor_get(v___x_1996_, 0);
lean_inc(v_a_1997_);
lean_dec_ref_known(v___x_1996_, 1);
v___x_1998_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1(v_context_1993_, v_a_1997_);
return v___x_1998_;
}
else
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
v_a_1999_ = lean_ctor_get(v___x_1996_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1996_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1996_);
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
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0___boxed(lean_object* v_context_2007_, lean_object* v_bytes_2008_, lean_object* v_a_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0(v_context_2007_, v_bytes_2008_);
lean_dec_ref(v_bytes_2008_);
lean_dec_ref(v_context_2007_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0(lean_object* v_o_2011_, lean_object* v_key_2012_){
_start:
{
uint32_t v___x_2014_; uint32_t v___x_2015_; uint64_t v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2014_ = 203;
v___x_2015_ = lasm_js_value_handle(v_o_2011_);
v___x_2016_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
lean_inc_ref(v_key_2012_);
v___x_2017_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2017_, 0, v_key_2012_);
v___x_2018_ = l_Lasm_JS_Wire_encode(v___x_2017_);
lean_dec_ref_known(v___x_2017_, 1);
v___x_2019_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_2020_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2020_, 0, v_o_2011_);
lean_ctor_set(v___x_2020_, 1, v___x_2019_);
v___x_2021_ = lasm_js_call(v___x_2014_, v___x_2015_, v___x_2016_, v___x_2018_, v___x_2020_);
lean_dec_ref_known(v___x_2020_, 2);
lean_dec_ref(v___x_2018_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_a_2022_);
lean_dec_ref_known(v___x_2021_, 1);
v___x_2023_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_2024_ = l_String_quote(v_key_2012_);
v___x_2025_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
v___x_2026_ = lean_unsigned_to_nat(120u);
v___x_2027_ = lean_unsigned_to_nat(0u);
v___x_2028_ = l_Std_Format_pretty(v___x_2025_, v___x_2026_, v___x_2027_, v___x_2027_);
v___x_2029_ = lean_string_append(v___x_2023_, v___x_2028_);
lean_dec_ref(v___x_2028_);
v___x_2030_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0(v___x_2029_, v_a_2022_);
lean_dec(v_a_2022_);
lean_dec_ref(v___x_2029_);
return v___x_2030_;
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
lean_dec_ref(v_key_2012_);
v_a_2031_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___x_2021_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2021_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0___boxed(lean_object* v_o_2039_, lean_object* v_key_2040_, lean_object* v_a_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0(v_o_2039_, v_key_2040_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_key(lean_object* v_e_2043_){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2045_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1));
v___x_2046_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0(v_e_2043_, v___x_2045_);
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2059_; 
v_a_2047_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2049_ = v___x_2046_;
v_isShared_2050_ = v_isSharedCheck_2059_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2046_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2059_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
if (lean_obj_tag(v_a_2047_) == 0)
{
lean_object* v___x_2051_; lean_object* v___x_2053_; 
v___x_2051_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (v_isShared_2050_ == 0)
{
lean_ctor_set(v___x_2049_, 0, v___x_2051_);
v___x_2053_ = v___x_2049_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2051_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
else
{
lean_object* v_val_2055_; lean_object* v___x_2057_; 
v_val_2055_ = lean_ctor_get(v_a_2047_, 0);
lean_inc(v_val_2055_);
lean_dec_ref_known(v_a_2047_, 1);
if (v_isShared_2050_ == 0)
{
lean_ctor_set(v___x_2049_, 0, v_val_2055_);
v___x_2057_ = v___x_2049_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_val_2055_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
return v___x_2057_;
}
}
}
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
v_a_2060_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_2046_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2046_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_key___boxed(lean_object* v_e_2068_, lean_object* v_a_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Lasm_Web_Event_key(v_e_2068_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetValue(lean_object* v_e_2071_){
_start:
{
lean_object* v___x_2073_; 
v___x_2073_ = l_Lasm_Web_Raw_targetValue(v_e_2071_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetValue___boxed(lean_object* v_e_2074_, lean_object* v_a_2075_){
_start:
{
lean_object* v_res_2076_; 
v_res_2076_ = l_Lasm_Web_Event_targetValue(v_e_2074_);
return v_res_2076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetChecked(lean_object* v_e_2077_){
_start:
{
lean_object* v___x_2079_; 
v___x_2079_ = l_Lasm_Web_Raw_targetChecked(v_e_2077_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetChecked___boxed(lean_object* v_e_2080_, lean_object* v_a_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l_Lasm_Web_Event_targetChecked(v_e_2080_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1(lean_object* v_context_2084_, lean_object* v_d_2085_){
_start:
{
lean_object* v___y_2091_; lean_object* v___y_2092_; 
switch(lean_obj_tag(v_d_2085_))
{
case 1:
{
goto v___jp_2087_;
}
case 0:
{
goto v___jp_2087_;
}
default: 
{
if (lean_obj_tag(v_d_2085_) == 9)
{
lean_object* v_value_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v_value_2096_ = lean_ctor_get(v_d_2085_, 0);
lean_inc(v_value_2096_);
lean_dec_ref_known(v_d_2085_, 2);
v___x_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2097_, 0, v_value_2096_);
v___x_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
return v___x_2098_;
}
else
{
lean_object* v___x_2099_; lean_object* v_received_2101_; 
v___x_2099_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_2085_) == 9)
{
lean_object* v_value_2115_; lean_object* v_description_2116_; uint8_t v___x_2117_; 
v_value_2115_ = lean_ctor_get(v_d_2085_, 0);
v_description_2116_ = lean_ctor_get(v_d_2085_, 1);
v___x_2117_ = lean_string_dec_eq(v_description_2116_, v___x_2099_);
if (v___x_2117_ == 0)
{
goto v___jp_2113_;
}
else
{
uint32_t v___x_2118_; uint64_t v___x_2119_; lean_object* v___x_2120_; uint32_t v___x_2121_; lean_object* v___x_2122_; 
lean_inc_n(v_value_2115_, 2);
lean_dec_ref_known(v_d_2085_, 2);
v___x_2118_ = 206;
v___x_2119_ = 0ULL;
v___x_2120_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2120_, 0, v_value_2115_);
lean_ctor_set(v___x_2120_, 1, v___x_2099_);
v___x_2121_ = lasm_js_value_handle(v_value_2115_);
lean_dec(v_value_2115_);
v___x_2122_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2118_, v___x_2119_, v___x_2120_, v___x_2121_);
lean_dec_ref_known(v___x_2120_, 2);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; uint8_t v___x_2124_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_a_2123_);
lean_dec_ref_known(v___x_2122_, 1);
v___x_2124_ = lean_string_validate_utf8(v_a_2123_);
if (v___x_2124_ == 0)
{
lean_object* v___x_2125_; lean_object* v___x_2126_; 
lean_dec(v_a_2123_);
v___x_2125_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_2126_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2125_);
v_received_2101_ = v___x_2126_;
goto v___jp_2100_;
}
else
{
lean_object* v___x_2127_; 
v___x_2127_ = lean_string_from_utf8_unchecked(v_a_2123_);
v_received_2101_ = v___x_2127_;
goto v___jp_2100_;
}
}
else
{
lean_object* v___x_2128_; 
lean_dec_ref_known(v___x_2122_, 1);
v___x_2128_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_2101_ = v___x_2128_;
goto v___jp_2100_;
}
}
}
else
{
goto v___jp_2113_;
}
v___jp_2100_:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; uint8_t v___x_2111_; 
v___x_2102_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_2103_ = lean_string_append(v___x_2102_, v_context_2084_);
v___x_2104_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_2105_ = lean_string_append(v___x_2103_, v___x_2104_);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___closed__0));
v___x_2107_ = lean_string_append(v___x_2105_, v___x_2106_);
v___x_2108_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_2109_ = lean_string_append(v___x_2107_, v___x_2108_);
v___x_2110_ = lean_string_append(v___x_2109_, v_received_2101_);
lean_dec_ref(v_received_2101_);
v___x_2111_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_2111_ == 0)
{
lean_object* v___x_2112_; 
v___x_2112_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_2091_ = v___x_2110_;
v___y_2092_ = v___x_2112_;
goto v___jp_2090_;
}
else
{
v___y_2091_ = v___x_2110_;
v___y_2092_ = v___x_2099_;
goto v___jp_2090_;
}
}
v___jp_2113_:
{
lean_object* v___x_2114_; 
v___x_2114_ = l_Lasm_JS_Data_describe(v_d_2085_);
v_received_2101_ = v___x_2114_;
goto v___jp_2100_;
}
}
}
}
v___jp_2087_:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2088_ = lean_box(0);
v___x_2089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2088_);
return v___x_2089_;
}
v___jp_2090_:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2093_ = lean_string_append(v___y_2091_, v___y_2092_);
v___x_2094_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2093_);
v___x_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
return v___x_2095_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2129_, lean_object* v_d_2130_, lean_object* v_a_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1(v_context_2129_, v_d_2130_);
lean_dec_ref(v_context_2129_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0(lean_object* v_context_2133_, lean_object* v_bytes_2134_){
_start:
{
lean_object* v___x_2136_; 
v___x_2136_ = l_Lasm_JS_Wire_decode(v_bytes_2134_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; lean_object* v___x_2138_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
lean_inc(v_a_2137_);
lean_dec_ref_known(v___x_2136_, 1);
v___x_2138_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1(v_context_2133_, v_a_2137_);
return v___x_2138_;
}
else
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2146_; 
v_a_2139_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2141_ = v___x_2136_;
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2136_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
if (v_isShared_2142_ == 0)
{
v___x_2144_ = v___x_2141_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_a_2139_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
return v___x_2144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0___boxed(lean_object* v_context_2147_, lean_object* v_bytes_2148_, lean_object* v_a_2149_){
_start:
{
lean_object* v_res_2150_; 
v_res_2150_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0(v_context_2147_, v_bytes_2148_);
lean_dec_ref(v_bytes_2148_);
lean_dec_ref(v_context_2147_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(lean_object* v_o_2151_, lean_object* v_key_2152_){
_start:
{
uint32_t v___x_2154_; uint32_t v___x_2155_; uint64_t v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2154_ = 203;
v___x_2155_ = lasm_js_value_handle(v_o_2151_);
v___x_2156_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
lean_inc_ref(v_key_2152_);
v___x_2157_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2157_, 0, v_key_2152_);
v___x_2158_ = l_Lasm_JS_Wire_encode(v___x_2157_);
lean_dec_ref_known(v___x_2157_, 1);
v___x_2159_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_2160_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2160_, 0, v_o_2151_);
lean_ctor_set(v___x_2160_, 1, v___x_2159_);
v___x_2161_ = lasm_js_call(v___x_2154_, v___x_2155_, v___x_2156_, v___x_2158_, v___x_2160_);
lean_dec_ref_known(v___x_2160_, 2);
lean_dec_ref(v___x_2158_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2162_);
lean_dec_ref_known(v___x_2161_, 1);
v___x_2163_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_2164_ = l_String_quote(v_key_2152_);
v___x_2165_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2164_);
v___x_2166_ = lean_unsigned_to_nat(120u);
v___x_2167_ = lean_unsigned_to_nat(0u);
v___x_2168_ = l_Std_Format_pretty(v___x_2165_, v___x_2166_, v___x_2167_, v___x_2167_);
v___x_2169_ = lean_string_append(v___x_2163_, v___x_2168_);
lean_dec_ref(v___x_2168_);
v___x_2170_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0(v___x_2169_, v_a_2162_);
lean_dec(v_a_2162_);
lean_dec_ref(v___x_2169_);
return v___x_2170_;
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
lean_dec_ref(v_key_2152_);
v_a_2171_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_2161_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2161_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2171_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0___boxed(lean_object* v_o_2179_, lean_object* v_key_2180_, lean_object* v_a_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(v_o_2179_, v_key_2180_);
return v_res_2182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_target(lean_object* v_e_2184_){
_start:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2186_ = ((lean_object*)(l_Lasm_Web_Event_target___closed__0));
v___x_2187_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(v_e_2184_, v___x_2186_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_target___boxed(lean_object* v_e_2188_, lean_object* v_a_2189_){
_start:
{
lean_object* v_res_2190_; 
v_res_2190_ = l_Lasm_Web_Event_target(v_e_2188_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_currentTarget(lean_object* v_e_2192_){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2194_ = ((lean_object*)(l_Lasm_Web_Event_currentTarget___closed__0));
v___x_2195_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(v_e_2192_, v___x_2194_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_currentTarget___boxed(lean_object* v_e_2196_, lean_object* v_a_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Lasm_Web_Event_currentTarget(v_e_2196_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1(lean_object* v_context_2200_, lean_object* v_d_2201_){
_start:
{
lean_object* v___y_2207_; lean_object* v___y_2208_; 
switch(lean_obj_tag(v_d_2201_))
{
case 1:
{
goto v___jp_2203_;
}
case 0:
{
goto v___jp_2203_;
}
default: 
{
if (lean_obj_tag(v_d_2201_) == 9)
{
lean_object* v_value_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v_value_2212_ = lean_ctor_get(v_d_2201_, 0);
lean_inc(v_value_2212_);
lean_dec_ref_known(v_d_2201_, 2);
v___x_2213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2213_, 0, v_value_2212_);
v___x_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
return v___x_2214_;
}
else
{
lean_object* v___x_2215_; lean_object* v_received_2217_; 
v___x_2215_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_2201_) == 9)
{
lean_object* v_value_2231_; lean_object* v_description_2232_; uint8_t v___x_2233_; 
v_value_2231_ = lean_ctor_get(v_d_2201_, 0);
v_description_2232_ = lean_ctor_get(v_d_2201_, 1);
v___x_2233_ = lean_string_dec_eq(v_description_2232_, v___x_2215_);
if (v___x_2233_ == 0)
{
goto v___jp_2229_;
}
else
{
uint32_t v___x_2234_; uint64_t v___x_2235_; lean_object* v___x_2236_; uint32_t v___x_2237_; lean_object* v___x_2238_; 
lean_inc_n(v_value_2231_, 2);
lean_dec_ref_known(v_d_2201_, 2);
v___x_2234_ = 206;
v___x_2235_ = 0ULL;
v___x_2236_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2236_, 0, v_value_2231_);
lean_ctor_set(v___x_2236_, 1, v___x_2215_);
v___x_2237_ = lasm_js_value_handle(v_value_2231_);
lean_dec(v_value_2231_);
v___x_2238_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2234_, v___x_2235_, v___x_2236_, v___x_2237_);
lean_dec_ref_known(v___x_2236_, 2);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_object* v_a_2239_; uint8_t v___x_2240_; 
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc(v_a_2239_);
lean_dec_ref_known(v___x_2238_, 1);
v___x_2240_ = lean_string_validate_utf8(v_a_2239_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; lean_object* v___x_2242_; 
lean_dec(v_a_2239_);
v___x_2241_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_2242_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2241_);
v_received_2217_ = v___x_2242_;
goto v___jp_2216_;
}
else
{
lean_object* v___x_2243_; 
v___x_2243_ = lean_string_from_utf8_unchecked(v_a_2239_);
v_received_2217_ = v___x_2243_;
goto v___jp_2216_;
}
}
else
{
lean_object* v___x_2244_; 
lean_dec_ref_known(v___x_2238_, 1);
v___x_2244_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_2217_ = v___x_2244_;
goto v___jp_2216_;
}
}
}
else
{
goto v___jp_2229_;
}
v___jp_2216_:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; uint8_t v___x_2227_; 
v___x_2218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_2219_ = lean_string_append(v___x_2218_, v_context_2200_);
v___x_2220_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_2221_ = lean_string_append(v___x_2219_, v___x_2220_);
v___x_2222_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___closed__0));
v___x_2223_ = lean_string_append(v___x_2221_, v___x_2222_);
v___x_2224_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_2225_ = lean_string_append(v___x_2223_, v___x_2224_);
v___x_2226_ = lean_string_append(v___x_2225_, v_received_2217_);
lean_dec_ref(v_received_2217_);
v___x_2227_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_2227_ == 0)
{
lean_object* v___x_2228_; 
v___x_2228_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_2207_ = v___x_2226_;
v___y_2208_ = v___x_2228_;
goto v___jp_2206_;
}
else
{
v___y_2207_ = v___x_2226_;
v___y_2208_ = v___x_2215_;
goto v___jp_2206_;
}
}
v___jp_2229_:
{
lean_object* v___x_2230_; 
v___x_2230_ = l_Lasm_JS_Data_describe(v_d_2201_);
v_received_2217_ = v___x_2230_;
goto v___jp_2216_;
}
}
}
}
v___jp_2203_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = lean_box(0);
v___x_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2204_);
return v___x_2205_;
}
v___jp_2206_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2209_ = lean_string_append(v___y_2207_, v___y_2208_);
v___x_2210_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2209_);
v___x_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2210_);
return v___x_2211_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2245_, lean_object* v_d_2246_, lean_object* v_a_2247_){
_start:
{
lean_object* v_res_2248_; 
v_res_2248_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1(v_context_2245_, v_d_2246_);
lean_dec_ref(v_context_2245_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0(lean_object* v_context_2249_, lean_object* v_bytes_2250_){
_start:
{
lean_object* v___x_2252_; 
v___x_2252_ = l_Lasm_JS_Wire_decode(v_bytes_2250_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2254_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2253_);
lean_dec_ref_known(v___x_2252_, 1);
v___x_2254_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1(v_context_2249_, v_a_2253_);
return v___x_2254_;
}
else
{
lean_object* v_a_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2262_; 
v_a_2255_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2262_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2262_ == 0)
{
v___x_2257_ = v___x_2252_;
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
else
{
lean_inc(v_a_2255_);
lean_dec(v___x_2252_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
lean_object* v___x_2260_; 
if (v_isShared_2258_ == 0)
{
v___x_2260_ = v___x_2257_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2261_; 
v_reuseFailAlloc_2261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2261_, 0, v_a_2255_);
v___x_2260_ = v_reuseFailAlloc_2261_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
return v___x_2260_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0___boxed(lean_object* v_context_2263_, lean_object* v_bytes_2264_, lean_object* v_a_2265_){
_start:
{
lean_object* v_res_2266_; 
v_res_2266_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0(v_context_2263_, v_bytes_2264_);
lean_dec_ref(v_bytes_2264_);
lean_dec_ref(v_context_2263_);
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0(lean_object* v_o_2267_, lean_object* v_key_2268_){
_start:
{
uint32_t v___x_2270_; uint32_t v___x_2271_; uint64_t v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2270_ = 203;
v___x_2271_ = lasm_js_value_handle(v_o_2267_);
v___x_2272_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
lean_inc_ref(v_key_2268_);
v___x_2273_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2273_, 0, v_key_2268_);
v___x_2274_ = l_Lasm_JS_Wire_encode(v___x_2273_);
lean_dec_ref_known(v___x_2273_, 1);
v___x_2275_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_2276_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2276_, 0, v_o_2267_);
lean_ctor_set(v___x_2276_, 1, v___x_2275_);
v___x_2277_ = lasm_js_call(v___x_2270_, v___x_2271_, v___x_2272_, v___x_2274_, v___x_2276_);
lean_dec_ref_known(v___x_2276_, 2);
lean_dec_ref(v___x_2274_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v_a_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v___x_2277_, 1);
v___x_2279_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_2280_ = l_String_quote(v_key_2268_);
v___x_2281_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
v___x_2282_ = lean_unsigned_to_nat(120u);
v___x_2283_ = lean_unsigned_to_nat(0u);
v___x_2284_ = l_Std_Format_pretty(v___x_2281_, v___x_2282_, v___x_2283_, v___x_2283_);
v___x_2285_ = lean_string_append(v___x_2279_, v___x_2284_);
lean_dec_ref(v___x_2284_);
v___x_2286_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0(v___x_2285_, v_a_2278_);
lean_dec(v_a_2278_);
lean_dec_ref(v___x_2285_);
return v___x_2286_;
}
else
{
lean_object* v_a_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2294_; 
lean_dec_ref(v_key_2268_);
v_a_2287_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2294_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2294_ == 0)
{
v___x_2289_ = v___x_2277_;
v_isShared_2290_ = v_isSharedCheck_2294_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_a_2287_);
lean_dec(v___x_2277_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2294_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
lean_object* v___x_2292_; 
if (v_isShared_2290_ == 0)
{
v___x_2292_ = v___x_2289_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v_a_2287_);
v___x_2292_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
return v___x_2292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0___boxed(lean_object* v_o_2295_, lean_object* v_key_2296_, lean_object* v_a_2297_){
_start:
{
lean_object* v_res_2298_; 
v_res_2298_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0(v_o_2295_, v_key_2296_);
return v_res_2298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetElement(lean_object* v_e_2299_){
_start:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2301_ = ((lean_object*)(l_Lasm_Web_Event_target___closed__0));
v___x_2302_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0(v_e_2299_, v___x_2301_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetElement___boxed(lean_object* v_e_2303_, lean_object* v_a_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l_Lasm_Web_Event_targetElement(v_e_2303_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_preventDefault(lean_object* v_e_2307_){
_start:
{
lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2309_ = ((lean_object*)(l_Lasm_Web_Event_preventDefault___closed__0));
v___x_2310_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_2311_ = lean_box(0);
v___x_2312_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_e_2307_, v___x_2309_, v___x_2310_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2319_; 
v_isSharedCheck_2319_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2319_ == 0)
{
lean_object* v_unused_2320_; 
v_unused_2320_ = lean_ctor_get(v___x_2312_, 0);
lean_dec(v_unused_2320_);
v___x_2314_ = v___x_2312_;
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
else
{
lean_dec(v___x_2312_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2317_; 
if (v_isShared_2315_ == 0)
{
lean_ctor_set(v___x_2314_, 0, v___x_2311_);
v___x_2317_ = v___x_2314_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v___x_2311_);
v___x_2317_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
return v___x_2317_;
}
}
}
else
{
return v___x_2312_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_preventDefault___boxed(lean_object* v_e_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lasm_Web_Event_preventDefault(v_e_2321_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopPropagation(lean_object* v_e_2325_){
_start:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2327_ = ((lean_object*)(l_Lasm_Web_Event_stopPropagation___closed__0));
v___x_2328_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_2329_ = lean_box(0);
v___x_2330_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_e_2325_, v___x_2327_, v___x_2328_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2337_ == 0)
{
lean_object* v_unused_2338_; 
v_unused_2338_ = lean_ctor_get(v___x_2330_, 0);
lean_dec(v_unused_2338_);
v___x_2332_ = v___x_2330_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_dec(v___x_2330_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
lean_ctor_set(v___x_2332_, 0, v___x_2329_);
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v___x_2329_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
else
{
return v___x_2330_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopPropagation___boxed(lean_object* v_e_2339_, lean_object* v_a_2340_){
_start:
{
lean_object* v_res_2341_; 
v_res_2341_ = l_Lasm_Web_Event_stopPropagation(v_e_2339_);
return v_res_2341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopImmediatePropagation(lean_object* v_e_2343_){
_start:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2345_ = ((lean_object*)(l_Lasm_Web_Event_stopImmediatePropagation___closed__0));
v___x_2346_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_2347_ = lean_box(0);
v___x_2348_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_e_2343_, v___x_2345_, v___x_2346_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2355_; 
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2355_ == 0)
{
lean_object* v_unused_2356_; 
v_unused_2356_ = lean_ctor_get(v___x_2348_, 0);
lean_dec(v_unused_2356_);
v___x_2350_ = v___x_2348_;
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
else
{
lean_dec(v___x_2348_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2353_; 
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 0, v___x_2347_);
v___x_2353_ = v___x_2350_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v___x_2347_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
else
{
return v___x_2348_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopImmediatePropagation___boxed(lean_object* v_e_2357_, lean_object* v_a_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_Lasm_Web_Event_stopImmediatePropagation(v_e_2357_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0(lean_object* v_context_2360_, lean_object* v_bytes_2361_){
_start:
{
lean_object* v___x_2363_; 
v___x_2363_ = l_Lasm_JS_Wire_decode(v_bytes_2361_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v_a_2364_; lean_object* v___x_2365_; 
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2364_);
lean_dec_ref_known(v___x_2363_, 1);
v___x_2365_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(v_context_2360_, v_a_2364_);
return v___x_2365_;
}
else
{
lean_object* v_a_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2373_; 
v_a_2366_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2368_ = v___x_2363_;
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_a_2366_);
lean_dec(v___x_2363_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2371_; 
if (v_isShared_2369_ == 0)
{
v___x_2371_ = v___x_2368_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_a_2366_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0___boxed(lean_object* v_context_2374_, lean_object* v_bytes_2375_, lean_object* v_a_2376_){
_start:
{
lean_object* v_res_2377_; 
v_res_2377_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0(v_context_2374_, v_bytes_2375_);
lean_dec_ref(v_bytes_2375_);
lean_dec_ref(v_context_2374_);
return v_res_2377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0(lean_object* v_o_2378_, lean_object* v_key_2379_){
_start:
{
uint32_t v___x_2381_; uint32_t v___x_2382_; uint64_t v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2381_ = 203;
v___x_2382_ = lasm_js_value_handle(v_o_2378_);
v___x_2383_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
lean_inc_ref(v_key_2379_);
v___x_2384_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2384_, 0, v_key_2379_);
v___x_2385_ = l_Lasm_JS_Wire_encode(v___x_2384_);
lean_dec_ref_known(v___x_2384_, 1);
v___x_2386_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_2387_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2387_, 0, v_o_2378_);
lean_ctor_set(v___x_2387_, 1, v___x_2386_);
v___x_2388_ = lasm_js_call(v___x_2381_, v___x_2382_, v___x_2383_, v___x_2385_, v___x_2387_);
lean_dec_ref_known(v___x_2387_, 2);
lean_dec_ref(v___x_2385_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2389_);
lean_dec_ref_known(v___x_2388_, 1);
v___x_2390_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_2391_ = l_String_quote(v_key_2379_);
v___x_2392_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2391_);
v___x_2393_ = lean_unsigned_to_nat(120u);
v___x_2394_ = lean_unsigned_to_nat(0u);
v___x_2395_ = l_Std_Format_pretty(v___x_2392_, v___x_2393_, v___x_2394_, v___x_2394_);
v___x_2396_ = lean_string_append(v___x_2390_, v___x_2395_);
lean_dec_ref(v___x_2395_);
v___x_2397_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0(v___x_2396_, v_a_2389_);
lean_dec(v_a_2389_);
lean_dec_ref(v___x_2396_);
return v___x_2397_;
}
else
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2405_; 
lean_dec_ref(v_key_2379_);
v_a_2398_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2400_ = v___x_2388_;
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_2388_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2403_; 
if (v_isShared_2401_ == 0)
{
v___x_2403_ = v___x_2400_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2398_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0___boxed(lean_object* v_o_2406_, lean_object* v_key_2407_, lean_object* v_a_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0(v_o_2406_, v_key_2407_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_defaultPrevented(lean_object* v_e_2411_){
_start:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; 
v___x_2413_ = ((lean_object*)(l_Lasm_Web_Event_defaultPrevented___closed__0));
v___x_2414_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0(v_e_2411_, v___x_2413_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_defaultPrevented___boxed(lean_object* v_e_2415_, lean_object* v_a_2416_){
_start:
{
lean_object* v_res_2417_; 
v_res_2417_ = l_Lasm_Web_Event_defaultPrevented(v_e_2415_);
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___redArg(lean_object* v_e_2419_, lean_object* v_inst_2420_){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2422_ = ((lean_object*)(l_Lasm_Web_Event_detail___redArg___closed__0));
v___x_2423_ = l_Lasm_JS_Value_get___redArg(v_e_2419_, v___x_2422_, v_inst_2420_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___redArg___boxed(lean_object* v_e_2424_, lean_object* v_inst_2425_, lean_object* v_a_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l_Lasm_Web_Event_detail___redArg(v_e_2424_, v_inst_2425_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail(lean_object* v_e_2428_, lean_object* v_00_u03b1_2429_, lean_object* v_inst_2430_){
_start:
{
lean_object* v___x_2432_; 
v___x_2432_ = l_Lasm_Web_Event_detail___redArg(v_e_2428_, v_inst_2430_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___boxed(lean_object* v_e_2433_, lean_object* v_00_u03b1_2434_, lean_object* v_inst_2435_, lean_object* v_a_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lasm_Web_Event_detail(v_e_2433_, v_00_u03b1_2434_, v_inst_2435_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___redArg(lean_object* v_e_2438_, lean_object* v_name_2439_, lean_object* v_inst_2440_){
_start:
{
lean_object* v___x_2442_; 
v___x_2442_ = l_Lasm_JS_Value_get___redArg(v_e_2438_, v_name_2439_, v_inst_2440_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___redArg___boxed(lean_object* v_e_2443_, lean_object* v_name_2444_, lean_object* v_inst_2445_, lean_object* v_a_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l_Lasm_Web_Event_prop___redArg(v_e_2443_, v_name_2444_, v_inst_2445_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop(lean_object* v_e_2448_, lean_object* v_name_2449_, lean_object* v_00_u03b1_2450_, lean_object* v_inst_2451_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = l_Lasm_JS_Value_get___redArg(v_e_2448_, v_name_2449_, v_inst_2451_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___boxed(lean_object* v_e_2454_, lean_object* v_name_2455_, lean_object* v_00_u03b1_2456_, lean_object* v_inst_2457_, lean_object* v_a_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l_Lasm_Web_Event_prop(v_e_2454_, v_name_2455_, v_00_u03b1_2456_, v_inst_2457_);
return v_res_2459_;
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
