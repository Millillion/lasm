// Lean compiler output
// Module: Lasm.JS.Web.Global
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Messaging
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
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MessagePort_postMessageWithOptions_spec__0(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
lean_object* l_Lasm_JS_global();
static const lean_string_object l_Lasm_JS_Web_instToJSNavigator___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSNavigator___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSNavigator___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSNavigator___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSNavigator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSNavigator___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSNavigator___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSNavigator___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSNavigator = (const lean_object*)&l_Lasm_JS_Web_instToJSNavigator___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSNavigator___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSNavigator___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSNavigator___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSNavigator___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSNavigator___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSNavigator___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSNavigator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSNavigator___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSNavigator___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSNavigator___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSNavigator___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Web.Navigator"};
static const lean_object* l_Lasm_JS_Web_instFromJSNavigator___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSNavigator___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSNavigator___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSNavigator___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSNavigator___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSNavigator___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSNavigator___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSNavigator = (const lean_object*)&l_Lasm_JS_Web_instFromJSNavigator___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_Navigator_userAgent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "userAgent"};
static const lean_object* l_Lasm_JS_Web_Navigator_userAgent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Navigator_userAgent___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Navigator_userAgent(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Navigator_userAgent___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web: empty global path"};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_navigator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "navigator"};
static const lean_object* l_Lasm_JS_Web_navigator___closed__0 = (const lean_object*)&l_Lasm_JS_Web_navigator___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_navigator___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_navigator___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_navigator___closed__1 = (const lean_object*)&l_Lasm_JS_Web_navigator___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_navigator();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_navigator___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_atob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.JS.Web.atob"};
static const lean_object* l_Lasm_JS_Web_atob___closed__0 = (const lean_object*)&l_Lasm_JS_Web_atob___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_atob___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_atob___closed__1 = (const lean_object*)&l_Lasm_JS_Web_atob___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_atob___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "atob"};
static const lean_object* l_Lasm_JS_Web_atob___closed__2 = (const lean_object*)&l_Lasm_JS_Web_atob___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_atob___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_atob___closed__0_value),((lean_object*)&l_Lasm_JS_Web_atob___closed__1_value),((lean_object*)&l_Lasm_JS_Web_atob___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_atob___closed__3 = (const lean_object*)&l_Lasm_JS_Web_atob___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_atob(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_atob___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_btoa___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.JS.Web.btoa"};
static const lean_object* l_Lasm_JS_Web_btoa___closed__0 = (const lean_object*)&l_Lasm_JS_Web_btoa___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_btoa___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "btoa"};
static const lean_object* l_Lasm_JS_Web_btoa___closed__1 = (const lean_object*)&l_Lasm_JS_Web_btoa___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_btoa___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_btoa___closed__0_value),((lean_object*)&l_Lasm_JS_Web_atob___closed__1_value),((lean_object*)&l_Lasm_JS_Web_btoa___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_btoa___closed__2 = (const lean_object*)&l_Lasm_JS_Web_btoa___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_btoa(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_btoa___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_structuredClone_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_structuredClone_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_structuredClone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.structuredClone"};
static const lean_object* l_Lasm_JS_Web_structuredClone___closed__0 = (const lean_object*)&l_Lasm_JS_Web_structuredClone___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_structuredClone___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structuredClone"};
static const lean_object* l_Lasm_JS_Web_structuredClone___closed__1 = (const lean_object*)&l_Lasm_JS_Web_structuredClone___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_structuredClone___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_structuredClone___closed__0_value),((lean_object*)&l_Lasm_JS_Web_atob___closed__1_value),((lean_object*)&l_Lasm_JS_Web_structuredClone___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_structuredClone___closed__2 = (const lean_object*)&l_Lasm_JS_Web_structuredClone___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_structuredClone(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_structuredClone___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_reportError_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_reportError_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_reportError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.reportError"};
static const lean_object* l_Lasm_JS_Web_reportError___closed__0 = (const lean_object*)&l_Lasm_JS_Web_reportError___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_reportError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "reportError"};
static const lean_object* l_Lasm_JS_Web_reportError___closed__1 = (const lean_object*)&l_Lasm_JS_Web_reportError___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_reportError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_reportError___closed__0_value),((lean_object*)&l_Lasm_JS_Web_atob___closed__1_value),((lean_object*)&l_Lasm_JS_Web_reportError___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_reportError___closed__2 = (const lean_object*)&l_Lasm_JS_Web_reportError___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_reportError(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_reportError___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSNavigator___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSNavigator___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSNavigator___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSNavigator___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSNavigator___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSNavigator___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Navigator_userAgent(lean_object* v_self_23_){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = ((lean_object*)(l_Lasm_JS_Web_Navigator_userAgent___closed__0));
v___x_26_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_23_, v___x_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Navigator_userAgent___boxed(lean_object* v_self_27_, lean_object* v_a_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lasm_JS_Web_Navigator_userAgent(v_self_27_);
return v_res_29_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___closed__0(void){
_start:
{
uint8_t v___x_30_; uint64_t v___x_31_; 
v___x_30_ = 1;
v___x_31_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2(lean_object* v_o_33_, lean_object* v_key_34_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
lean_inc_ref(v_key_34_);
v___x_36_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_36_, 0, v_key_34_);
v___x_37_ = l_Lasm_JS_Wire_encodeIO(v___x_36_);
lean_dec_ref_known(v___x_36_, 1);
if (lean_obj_tag(v___x_37_) == 0)
{
lean_object* v_a_38_; uint32_t v___x_39_; uint32_t v___x_40_; uint64_t v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v_a_38_ = lean_ctor_get(v___x_37_, 0);
lean_inc(v_a_38_);
lean_dec_ref_known(v___x_37_, 1);
v___x_39_ = 203;
v___x_40_ = lasm_js_value_handle(v_o_33_);
v___x_41_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___closed__0);
v___x_42_ = ((lean_object*)(l_Lasm_JS_Web_instToJSNavigator___lam__0___closed__0));
v___x_43_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_43_, 0, v_o_33_);
lean_ctor_set(v___x_43_, 1, v___x_42_);
v___x_44_ = lasm_js_call(v___x_39_, v___x_40_, v___x_41_, v_a_38_, v___x_43_);
lean_dec_ref_known(v___x_43_, 2);
lean_dec(v_a_38_);
if (lean_obj_tag(v___x_44_) == 0)
{
lean_object* v_a_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
lean_inc(v_a_45_);
lean_dec_ref_known(v___x_44_, 1);
v___x_46_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___closed__1));
v___x_47_ = l_String_quote(v_key_34_);
v___x_48_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
v___x_49_ = lean_unsigned_to_nat(120u);
v___x_50_ = lean_unsigned_to_nat(0u);
v___x_51_ = l_Std_Format_pretty(v___x_48_, v___x_49_, v___x_50_, v___x_50_);
v___x_52_ = lean_string_append(v___x_46_, v___x_51_);
lean_dec_ref(v___x_51_);
v___x_53_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_52_, v_a_45_);
lean_dec(v_a_45_);
lean_dec_ref(v___x_52_);
return v___x_53_;
}
else
{
lean_object* v_a_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
lean_dec_ref(v_key_34_);
v_a_54_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_61_ == 0)
{
v___x_56_ = v___x_44_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_a_54_);
lean_dec(v___x_44_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_a_54_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
}
else
{
lean_object* v_a_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_69_; 
lean_dec_ref(v_key_34_);
lean_dec(v_o_33_);
v_a_62_ = lean_ctor_get(v___x_37_, 0);
v_isSharedCheck_69_ = !lean_is_exclusive(v___x_37_);
if (v_isSharedCheck_69_ == 0)
{
v___x_64_ = v___x_37_;
v_isShared_65_ = v_isSharedCheck_69_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_a_62_);
lean_dec(v___x_37_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_69_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_67_; 
if (v_isShared_65_ == 0)
{
v___x_67_ = v___x_64_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_a_62_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___boxed(lean_object* v_o_70_, lean_object* v_key_71_, lean_object* v_a_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2(v_o_70_, v_key_71_);
return v_res_73_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = ((lean_object*)(l_Lasm_JS_Web_instToJSNavigator___lam__0___closed__0));
v___x_78_ = lean_string_utf8_byte_size(v___x_77_);
return v___x_78_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_79_ = lean_unsigned_to_nat(0u);
v___x_80_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3);
v___x_81_ = lean_nat_dec_eq(v___x_80_, v___x_79_);
return v___x_81_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_86_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__8));
v___x_87_ = lean_unsigned_to_nat(46u);
v___x_88_ = lean_unsigned_to_nat(193u);
v___x_89_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__7));
v___x_90_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__6));
v___x_91_ = l_mkPanicMessageWithDecl(v___x_90_, v___x_89_, v___x_88_, v___x_87_, v___x_86_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_93_, lean_object* v_d_94_){
_start:
{
lean_object* v___y_97_; lean_object* v___y_98_; 
if (lean_obj_tag(v_d_94_) == 9)
{
lean_object* v_value_102_; lean_object* v___x_103_; 
v_value_102_ = lean_ctor_get(v_d_94_, 0);
lean_inc(v_value_102_);
lean_dec_ref_known(v_d_94_, 2);
v___x_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_103_, 0, v_value_102_);
return v___x_103_;
}
else
{
lean_object* v___x_104_; lean_object* v_received_106_; 
v___x_104_ = ((lean_object*)(l_Lasm_JS_Web_instToJSNavigator___lam__0___closed__0));
if (lean_obj_tag(v_d_94_) == 9)
{
lean_object* v_value_120_; lean_object* v_description_121_; uint8_t v___x_122_; 
v_value_120_ = lean_ctor_get(v_d_94_, 0);
v_description_121_ = lean_ctor_get(v_d_94_, 1);
v___x_122_ = lean_string_dec_eq(v_description_121_, v___x_104_);
if (v___x_122_ == 0)
{
goto v___jp_118_;
}
else
{
uint32_t v___x_123_; uint64_t v___x_124_; lean_object* v___x_125_; uint32_t v___x_126_; lean_object* v___x_127_; 
lean_inc_n(v_value_120_, 2);
lean_dec_ref_known(v_d_94_, 2);
v___x_123_ = 206;
v___x_124_ = 0ULL;
v___x_125_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_125_, 0, v_value_120_);
lean_ctor_set(v___x_125_, 1, v___x_104_);
v___x_126_ = lasm_js_value_handle(v_value_120_);
lean_dec(v_value_120_);
v___x_127_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_123_, v___x_124_, v___x_125_, v___x_126_);
lean_dec_ref_known(v___x_125_, 2);
if (lean_obj_tag(v___x_127_) == 0)
{
lean_object* v_a_128_; uint8_t v___x_129_; 
v_a_128_ = lean_ctor_get(v___x_127_, 0);
lean_inc(v_a_128_);
lean_dec_ref_known(v___x_127_, 1);
v___x_129_ = lean_string_validate_utf8(v_a_128_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; lean_object* v___x_131_; 
lean_dec(v_a_128_);
v___x_130_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9);
v___x_131_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_130_);
v_received_106_ = v___x_131_;
goto v___jp_105_;
}
else
{
lean_object* v___x_132_; 
v___x_132_ = lean_string_from_utf8_unchecked(v_a_128_);
v_received_106_ = v___x_132_;
goto v___jp_105_;
}
}
else
{
lean_object* v___x_133_; 
lean_dec_ref_known(v___x_127_, 1);
v___x_133_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__10));
v_received_106_ = v___x_133_;
goto v___jp_105_;
}
}
}
else
{
goto v___jp_118_;
}
v___jp_105_:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_107_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_108_ = lean_string_append(v___x_107_, v_context_93_);
v___x_109_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_110_ = lean_string_append(v___x_108_, v___x_109_);
v___x_111_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSNavigator___closed__1));
v___x_112_ = lean_string_append(v___x_110_, v___x_111_);
v___x_113_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_114_ = lean_string_append(v___x_112_, v___x_113_);
v___x_115_ = lean_string_append(v___x_114_, v_received_106_);
lean_dec_ref(v_received_106_);
v___x_116_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; 
v___x_117_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5));
v___y_97_ = v___x_115_;
v___y_98_ = v___x_117_;
goto v___jp_96_;
}
else
{
v___y_97_ = v___x_115_;
v___y_98_ = v___x_104_;
goto v___jp_96_;
}
}
v___jp_118_:
{
lean_object* v___x_119_; 
v___x_119_ = l_Lasm_JS_Data_describe(v_d_94_);
v_received_106_ = v___x_119_;
goto v___jp_105_;
}
}
v___jp_96_:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = lean_string_append(v___y_97_, v___y_98_);
v___x_100_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
v___x_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_134_, lean_object* v_d_135_, lean_object* v_a_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_134_, v_d_135_);
lean_dec_ref(v_context_134_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_138_, lean_object* v_bytes_139_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_139_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_143_; 
v_a_142_ = lean_ctor_get(v___x_141_, 0);
lean_inc(v_a_142_);
lean_dec_ref_known(v___x_141_, 1);
v___x_143_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_138_, v_a_142_);
return v___x_143_;
}
else
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_151_; 
v_a_144_ = lean_ctor_get(v___x_141_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_151_ == 0)
{
v___x_146_ = v___x_141_;
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___x_141_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_144_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_152_, lean_object* v_bytes_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2(v_context_152_, v_bytes_153_);
lean_dec_ref(v_bytes_153_);
lean_dec_ref(v_context_152_);
return v_res_155_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
uint8_t v___x_156_; uint64_t v___x_157_; 
v___x_156_ = 0;
v___x_157_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1(lean_object* v_o_158_, lean_object* v_key_159_){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
lean_inc_ref(v_key_159_);
v___x_161_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_161_, 0, v_key_159_);
v___x_162_ = l_Lasm_JS_Wire_encodeIO(v___x_161_);
lean_dec_ref_known(v___x_161_, 1);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v_a_163_; uint32_t v___x_164_; uint32_t v___x_165_; uint64_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v_a_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_a_163_);
lean_dec_ref_known(v___x_162_, 1);
v___x_164_ = 203;
v___x_165_ = lasm_js_value_handle(v_o_158_);
v___x_166_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0);
v___x_167_ = ((lean_object*)(l_Lasm_JS_Web_instToJSNavigator___lam__0___closed__0));
v___x_168_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_168_, 0, v_o_158_);
lean_ctor_set(v___x_168_, 1, v___x_167_);
v___x_169_ = lasm_js_call(v___x_164_, v___x_165_, v___x_166_, v_a_163_, v___x_168_);
lean_dec_ref_known(v___x_168_, 2);
lean_dec(v_a_163_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v_a_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v_a_170_ = lean_ctor_get(v___x_169_, 0);
lean_inc(v_a_170_);
lean_dec_ref_known(v___x_169_, 1);
v___x_171_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2___closed__1));
v___x_172_ = l_String_quote(v_key_159_);
v___x_173_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
v___x_174_ = lean_unsigned_to_nat(120u);
v___x_175_ = lean_unsigned_to_nat(0u);
v___x_176_ = l_Std_Format_pretty(v___x_173_, v___x_174_, v___x_175_, v___x_175_);
v___x_177_ = lean_string_append(v___x_171_, v___x_176_);
lean_dec_ref(v___x_176_);
v___x_178_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2(v___x_177_, v_a_170_);
lean_dec(v_a_170_);
lean_dec_ref(v___x_177_);
return v___x_178_;
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
lean_dec_ref(v_key_159_);
v_a_179_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v___x_169_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_169_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
lean_dec_ref(v_key_159_);
lean_dec(v_o_158_);
v_a_187_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_194_ == 0)
{
v___x_189_ = v___x_162_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_162_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_a_187_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___boxed(lean_object* v_o_195_, lean_object* v_key_196_, lean_object* v_a_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1(v_o_195_, v_key_196_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0(lean_object* v_o_202_, lean_object* v_a_203_){
_start:
{
if (lean_obj_tag(v_a_203_) == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; 
lean_dec(v_o_202_);
v___x_205_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0___closed__1));
v___x_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
return v___x_206_;
}
else
{
lean_object* v_tail_207_; 
v_tail_207_ = lean_ctor_get(v_a_203_, 1);
if (lean_obj_tag(v_tail_207_) == 0)
{
lean_object* v_head_208_; lean_object* v___x_209_; 
v_head_208_ = lean_ctor_get(v_a_203_, 0);
lean_inc(v_head_208_);
lean_dec_ref_known(v_a_203_, 2);
v___x_209_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1(v_o_202_, v_head_208_);
return v___x_209_;
}
else
{
lean_object* v_head_210_; lean_object* v___x_211_; 
lean_inc(v_tail_207_);
v_head_210_ = lean_ctor_get(v_a_203_, 0);
lean_inc(v_head_210_);
lean_dec_ref_known(v_a_203_, 2);
v___x_211_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__2(v_o_202_, v_head_210_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_a_212_);
lean_dec_ref_known(v___x_211_, 1);
v_o_202_ = v_a_212_;
v_a_203_ = v_tail_207_;
goto _start;
}
else
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_221_; 
lean_dec(v_tail_207_);
v_a_214_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_221_ == 0)
{
v___x_216_ = v___x_211_;
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_211_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_a_214_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0___boxed(lean_object* v_o_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0(v_o_222_, v_a_223_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0(lean_object* v_path_226_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_230_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_a_229_);
lean_dec_ref_known(v___x_228_, 1);
v___x_230_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0(v_a_229_, v_path_226_);
return v___x_230_;
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
lean_dec(v_path_226_);
v_a_231_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_228_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_228_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0___boxed(lean_object* v_path_239_, lean_object* v_a_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0(v_path_239_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_navigator(){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = ((lean_object*)(l_Lasm_JS_Web_navigator___closed__1));
v___x_248_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0(v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_navigator___boxed(lean_object* v_a_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lasm_JS_Web_navigator();
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0(lean_object* v_b_252_, lean_object* v_args_253_, uint8_t v_await_254_){
_start:
{
uint64_t v___y_257_; uint64_t v___y_258_; uint64_t v___x_301_; uint64_t v___y_303_; 
v___x_301_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0);
if (v_await_254_ == 0)
{
uint64_t v___x_308_; 
v___x_308_ = 0ULL;
v___y_303_ = v___x_308_;
goto v___jp_302_;
}
else
{
uint64_t v___x_309_; 
v___x_309_ = 2ULL;
v___y_303_ = v___x_309_;
goto v___jp_302_;
}
v___jp_256_:
{
uint64_t v_flags_259_; uint32_t v___x_260_; lean_object* v___x_261_; uint32_t v___x_262_; lean_object* v___x_263_; 
v_flags_259_ = lean_uint64_lor(v___y_257_, v___y_258_);
v___x_260_ = 214;
v___x_261_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_252_, v_args_253_);
v___x_262_ = 0;
v___x_263_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_260_, v_flags_259_, v___x_261_, v___x_262_);
lean_dec(v___x_261_);
if (lean_obj_tag(v___x_263_) == 0)
{
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v_a_264_; lean_object* v___x_265_; 
v_a_264_ = lean_ctor_get(v___x_263_, 0);
lean_inc(v_a_264_);
lean_dec_ref_known(v___x_263_, 1);
v___x_265_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_264_);
lean_dec(v_a_264_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v_a_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v_a_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_a_266_);
lean_dec_ref_known(v___x_265_, 1);
v___x_267_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_252_);
v___x_268_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v___x_267_, v_a_266_);
lean_dec_ref(v___x_267_);
return v___x_268_;
}
else
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
v_a_269_ = lean_ctor_get(v___x_265_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_265_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_265_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
v_a_277_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_263_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_263_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
lean_ctor_set_tag(v___x_279_, 1);
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
else
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_300_; 
v_a_285_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_300_ == 0)
{
v___x_287_ = v___x_263_;
v_isShared_288_ = v_isSharedCheck_300_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_263_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_300_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_289_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_290_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_252_);
v___x_291_ = lean_string_append(v___x_289_, v___x_290_);
lean_dec_ref(v___x_290_);
v___x_292_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0___closed__0));
v___x_293_ = lean_string_append(v___x_291_, v___x_292_);
v___x_294_ = lean_io_error_to_string(v_a_285_);
v___x_295_ = lean_string_append(v___x_293_, v___x_294_);
lean_dec_ref(v___x_294_);
v___x_296_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v___x_296_);
v___x_298_ = v___x_287_;
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
v___jp_302_:
{
uint8_t v_construct_304_; uint64_t v___x_305_; 
v_construct_304_ = lean_ctor_get_uint8(v_b_252_, sizeof(void*)*4);
v___x_305_ = lean_uint64_lor(v___x_301_, v___y_303_);
if (v_construct_304_ == 0)
{
uint64_t v___x_306_; 
v___x_306_ = 0ULL;
v___y_257_ = v___x_305_;
v___y_258_ = v___x_306_;
goto v___jp_256_;
}
else
{
uint64_t v___x_307_; 
v___x_307_ = 4ULL;
v___y_257_ = v___x_305_;
v___y_258_ = v___x_307_;
goto v___jp_256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0___boxed(lean_object* v_b_310_, lean_object* v_args_311_, lean_object* v_await_312_, lean_object* v_a_313_){
_start:
{
uint8_t v_await_boxed_314_; lean_object* v_res_315_; 
v_await_boxed_314_ = lean_unbox(v_await_312_);
v_res_315_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0(v_b_310_, v_args_311_, v_await_boxed_314_);
lean_dec_ref(v_b_310_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_atob(lean_object* v_data_325_){
_start:
{
uint8_t v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_327_ = 0;
v___x_328_ = lean_unsigned_to_nat(1u);
v___x_329_ = ((lean_object*)(l_Lasm_JS_Web_atob___closed__3));
v___x_330_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_330_, 0, v_data_325_);
v___x_331_ = lean_mk_empty_array_with_capacity(v___x_328_);
v___x_332_ = lean_array_push(v___x_331_, v___x_330_);
v___x_333_ = l_Lasm_JS_Web_Support_args(v___x_332_);
v___x_334_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0(v___x_329_, v___x_333_, v___x_327_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_atob___boxed(lean_object* v_data_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lasm_JS_Web_atob(v_data_335_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_btoa(lean_object* v_data_346_){
_start:
{
uint8_t v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_348_ = 0;
v___x_349_ = lean_unsigned_to_nat(1u);
v___x_350_ = ((lean_object*)(l_Lasm_JS_Web_btoa___closed__2));
v___x_351_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_351_, 0, v_data_346_);
v___x_352_ = lean_mk_empty_array_with_capacity(v___x_349_);
v___x_353_ = lean_array_push(v___x_352_, v___x_351_);
v___x_354_ = l_Lasm_JS_Web_Support_args(v___x_353_);
v___x_355_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0(v___x_350_, v___x_354_, v___x_348_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_btoa___boxed(lean_object* v_data_356_, lean_object* v_a_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lasm_JS_Web_btoa(v_data_356_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_structuredClone_spec__0(lean_object* v_b_359_, lean_object* v_args_360_, uint8_t v_await_361_){
_start:
{
uint64_t v___y_364_; uint64_t v___y_365_; uint64_t v___x_397_; uint64_t v___y_399_; 
v___x_397_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0);
if (v_await_361_ == 0)
{
uint64_t v___x_404_; 
v___x_404_ = 0ULL;
v___y_399_ = v___x_404_;
goto v___jp_398_;
}
else
{
uint64_t v___x_405_; 
v___x_405_ = 2ULL;
v___y_399_ = v___x_405_;
goto v___jp_398_;
}
v___jp_363_:
{
uint64_t v_flags_366_; uint32_t v___x_367_; lean_object* v___x_368_; uint32_t v___x_369_; lean_object* v___x_370_; 
v_flags_366_ = lean_uint64_lor(v___y_364_, v___y_365_);
v___x_367_ = 214;
v___x_368_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_359_, v_args_360_);
v___x_369_ = 0;
v___x_370_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_367_, v_flags_366_, v___x_368_, v___x_369_);
lean_dec(v___x_368_);
if (lean_obj_tag(v___x_370_) == 0)
{
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; lean_object* v___x_372_; 
v_a_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_370_, 1);
v___x_372_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_371_);
lean_dec(v_a_371_);
return v___x_372_;
}
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
v_a_373_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_370_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_370_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set_tag(v___x_375_, 1);
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_373_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
else
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_396_; 
v_a_381_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_396_ == 0)
{
v___x_383_ = v___x_370_;
v_isShared_384_ = v_isSharedCheck_396_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_370_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_396_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_394_; 
v___x_385_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_386_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_359_);
v___x_387_ = lean_string_append(v___x_385_, v___x_386_);
lean_dec_ref(v___x_386_);
v___x_388_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0___closed__0));
v___x_389_ = lean_string_append(v___x_387_, v___x_388_);
v___x_390_ = lean_io_error_to_string(v_a_381_);
v___x_391_ = lean_string_append(v___x_389_, v___x_390_);
lean_dec_ref(v___x_390_);
v___x_392_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 0, v___x_392_);
v___x_394_ = v___x_383_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_392_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
v___jp_398_:
{
uint8_t v_construct_400_; uint64_t v___x_401_; 
v_construct_400_ = lean_ctor_get_uint8(v_b_359_, sizeof(void*)*4);
v___x_401_ = lean_uint64_lor(v___x_397_, v___y_399_);
if (v_construct_400_ == 0)
{
uint64_t v___x_402_; 
v___x_402_ = 0ULL;
v___y_364_ = v___x_401_;
v___y_365_ = v___x_402_;
goto v___jp_363_;
}
else
{
uint64_t v___x_403_; 
v___x_403_ = 4ULL;
v___y_364_ = v___x_401_;
v___y_365_ = v___x_403_;
goto v___jp_363_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_structuredClone_spec__0___boxed(lean_object* v_b_406_, lean_object* v_args_407_, lean_object* v_await_408_, lean_object* v_a_409_){
_start:
{
uint8_t v_await_boxed_410_; lean_object* v_res_411_; 
v_await_boxed_410_ = lean_unbox(v_await_408_);
v_res_411_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_structuredClone_spec__0(v_b_406_, v_args_407_, v_await_boxed_410_);
lean_dec_ref(v_b_406_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_structuredClone(lean_object* v_value_420_, lean_object* v_options_421_){
_start:
{
uint8_t v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_423_ = 0;
v___x_424_ = lean_unsigned_to_nat(2u);
v___x_425_ = ((lean_object*)(l_Lasm_JS_Web_structuredClone___closed__2));
v___x_426_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MessagePort_postMessageWithOptions_spec__0(v_options_421_);
v___x_427_ = lean_mk_empty_array_with_capacity(v___x_424_);
v___x_428_ = lean_array_push(v___x_427_, v_value_420_);
v___x_429_ = lean_array_push(v___x_428_, v___x_426_);
v___x_430_ = l_Lasm_JS_Web_Support_args(v___x_429_);
v___x_431_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_structuredClone_spec__0(v___x_425_, v___x_430_, v___x_423_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_structuredClone___boxed(lean_object* v_value_432_, lean_object* v_options_433_, lean_object* v_a_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lasm_JS_Web_structuredClone(v_value_432_, v_options_433_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_reportError_spec__0(lean_object* v_b_436_, lean_object* v_args_437_, uint8_t v_await_438_){
_start:
{
uint64_t v___y_441_; uint64_t v___y_442_; uint64_t v___x_483_; uint64_t v___y_485_; 
v___x_483_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1___closed__0);
if (v_await_438_ == 0)
{
uint64_t v___x_490_; 
v___x_490_ = 0ULL;
v___y_485_ = v___x_490_;
goto v___jp_484_;
}
else
{
uint64_t v___x_491_; 
v___x_491_ = 2ULL;
v___y_485_ = v___x_491_;
goto v___jp_484_;
}
v___jp_440_:
{
uint64_t v_flags_443_; uint32_t v___x_444_; lean_object* v___x_445_; uint32_t v___x_446_; lean_object* v___x_447_; 
v_flags_443_ = lean_uint64_lor(v___y_441_, v___y_442_);
v___x_444_ = 214;
v___x_445_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_436_, v_args_437_);
v___x_446_ = 0;
v___x_447_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_444_, v_flags_443_, v___x_445_, v___x_446_);
lean_dec(v___x_445_);
if (lean_obj_tag(v___x_447_) == 0)
{
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v_a_448_; lean_object* v___x_449_; 
v_a_448_ = lean_ctor_get(v___x_447_, 0);
lean_inc(v_a_448_);
lean_dec_ref_known(v___x_447_, 1);
v___x_449_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_448_);
lean_dec(v_a_448_);
if (lean_obj_tag(v___x_449_) == 0)
{
lean_object* v___x_450_; 
lean_dec_ref_known(v___x_449_, 1);
v___x_450_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_450_;
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
v_a_451_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_449_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_449_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
else
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_466_; 
v_a_459_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_466_ == 0)
{
v___x_461_ = v___x_447_;
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___x_447_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_464_; 
if (v_isShared_462_ == 0)
{
lean_ctor_set_tag(v___x_461_, 1);
v___x_464_ = v___x_461_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_a_459_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
else
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_482_; 
v_a_467_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_482_ == 0)
{
v___x_469_ = v___x_447_;
v_isShared_470_ = v_isSharedCheck_482_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_447_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_482_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_480_; 
v___x_471_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_navigator_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_472_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_436_);
v___x_473_ = lean_string_append(v___x_471_, v___x_472_);
lean_dec_ref(v___x_472_);
v___x_474_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_atob_spec__0___closed__0));
v___x_475_ = lean_string_append(v___x_473_, v___x_474_);
v___x_476_ = lean_io_error_to_string(v_a_467_);
v___x_477_ = lean_string_append(v___x_475_, v___x_476_);
lean_dec_ref(v___x_476_);
v___x_478_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 0, v___x_478_);
v___x_480_ = v___x_469_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v___x_478_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
v___jp_484_:
{
uint8_t v_construct_486_; uint64_t v___x_487_; 
v_construct_486_ = lean_ctor_get_uint8(v_b_436_, sizeof(void*)*4);
v___x_487_ = lean_uint64_lor(v___x_483_, v___y_485_);
if (v_construct_486_ == 0)
{
uint64_t v___x_488_; 
v___x_488_ = 0ULL;
v___y_441_ = v___x_487_;
v___y_442_ = v___x_488_;
goto v___jp_440_;
}
else
{
uint64_t v___x_489_; 
v___x_489_ = 4ULL;
v___y_441_ = v___x_487_;
v___y_442_ = v___x_489_;
goto v___jp_440_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_reportError_spec__0___boxed(lean_object* v_b_492_, lean_object* v_args_493_, lean_object* v_await_494_, lean_object* v_a_495_){
_start:
{
uint8_t v_await_boxed_496_; lean_object* v_res_497_; 
v_await_boxed_496_ = lean_unbox(v_await_494_);
v_res_497_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_reportError_spec__0(v_b_492_, v_args_493_, v_await_boxed_496_);
lean_dec_ref(v_b_492_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_reportError(lean_object* v_e_506_){
_start:
{
uint8_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_508_ = 0;
v___x_509_ = lean_unsigned_to_nat(1u);
v___x_510_ = ((lean_object*)(l_Lasm_JS_Web_reportError___closed__2));
v___x_511_ = lean_mk_empty_array_with_capacity(v___x_509_);
v___x_512_ = lean_array_push(v___x_511_, v_e_506_);
v___x_513_ = l_Lasm_JS_Web_Support_args(v___x_512_);
v___x_514_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_reportError_spec__0(v___x_510_, v___x_513_, v___x_508_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_reportError___boxed(lean_object* v_e_515_, lean_object* v_a_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lasm_JS_Web_reportError(v_e_515_);
return v_res_517_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Messaging(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Global(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Messaging(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
