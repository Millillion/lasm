// Lean compiler output
// Module: Lasm.JS.Node.Os
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support
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
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "encoding"};
static const lean_object* l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSUserInfoOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSUserInfoOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSUserInfoOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSUserInfoOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSUserInfoOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSUserInfoOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSUserInfoOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSUserInfoOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSUserInfoOptions___closed__1_value;
static lean_once_cell_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "require "};
static const lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node: empty path in "};
static const lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_EOL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "node:os"};
static const lean_object* l_Lasm_JS_Node_os_EOL___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_EOL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "EOL"};
static const lean_object* l_Lasm_JS_Node_os_EOL___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_EOL___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_EOL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_os_EOL___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_EOL___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_EOL();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_EOL___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_constants___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "constants"};
static const lean_object* l_Lasm_JS_Node_os_constants___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_constants___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_os_constants___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_constants___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_os_constants___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_constants___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_constants();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_constants___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_devNull___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "devNull"};
static const lean_object* l_Lasm_JS_Node_os_devNull___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_devNull___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_os_devNull___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_devNull___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_os_devNull___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_devNull___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_devNull();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_devNull___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_availableParallelism___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Node.os.availableParallelism"};
static const lean_object* l_Lasm_JS_Node_os_availableParallelism___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_availableParallelism___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_availableParallelism___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "availableParallelism"};
static const lean_object* l_Lasm_JS_Node_os_availableParallelism___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_availableParallelism___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_availableParallelism___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_availableParallelism___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_availableParallelism___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_availableParallelism___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_availableParallelism___closed__2_value;
static const lean_array_object l_Lasm_JS_Node_os_availableParallelism___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Node_os_availableParallelism___closed__3 = (const lean_object*)&l_Lasm_JS_Node_os_availableParallelism___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Node_os_availableParallelism___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_os_availableParallelism___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_availableParallelism();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_availableParallelism___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_arch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Node.os.arch"};
static const lean_object* l_Lasm_JS_Node_os_arch___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_arch___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_arch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "arch"};
static const lean_object* l_Lasm_JS_Node_os_arch___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_arch___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_arch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_arch___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_arch___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_arch___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_arch___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_arch();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_arch___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Array (Lasm.JS.Data)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "an element is not Lasm.JS.Data"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_cpus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Node.os.cpus"};
static const lean_object* l_Lasm_JS_Node_os_cpus___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_cpus___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_cpus___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cpus"};
static const lean_object* l_Lasm_JS_Node_os_cpus___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_cpus___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_cpus___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_cpus___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_cpus___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_cpus___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_cpus___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_cpus();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_cpus___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_endianness___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.os.endianness"};
static const lean_object* l_Lasm_JS_Node_os_endianness___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_endianness___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_endianness___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "endianness"};
static const lean_object* l_Lasm_JS_Node_os_endianness___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_endianness___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_endianness___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_endianness___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_endianness___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_endianness___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_endianness___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_endianness();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_endianness___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_freemem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Node.os.freemem"};
static const lean_object* l_Lasm_JS_Node_os_freemem___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_freemem___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_freemem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "freemem"};
static const lean_object* l_Lasm_JS_Node_os_freemem___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_freemem___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_freemem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_freemem___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_freemem___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_freemem___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_freemem___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_freemem();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_freemem___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_getPriority_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_getPriority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.os.getPriority"};
static const lean_object* l_Lasm_JS_Node_os_getPriority___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_getPriority___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_getPriority___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "getPriority"};
static const lean_object* l_Lasm_JS_Node_os_getPriority___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_getPriority___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_getPriority___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_getPriority___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_getPriority___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_getPriority___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_getPriority___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_getPriority(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_getPriority___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_homedir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Node.os.homedir"};
static const lean_object* l_Lasm_JS_Node_os_homedir___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_homedir___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_homedir___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "homedir"};
static const lean_object* l_Lasm_JS_Node_os_homedir___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_homedir___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_homedir___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_homedir___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_homedir___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_homedir___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_homedir___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_homedir();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_homedir___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_hostname___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.os.hostname"};
static const lean_object* l_Lasm_JS_Node_os_hostname___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_hostname___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_hostname___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hostname"};
static const lean_object* l_Lasm_JS_Node_os_hostname___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_hostname___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_hostname___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_hostname___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_hostname___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_hostname___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_hostname___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_hostname();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_hostname___boxed(lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Array (Float)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "an element is not Float"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_loadavg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Node.os.loadavg"};
static const lean_object* l_Lasm_JS_Node_os_loadavg___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_loadavg___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_loadavg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "loadavg"};
static const lean_object* l_Lasm_JS_Node_os_loadavg___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_loadavg___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_loadavg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_loadavg___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_loadavg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_loadavg___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_loadavg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_loadavg();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_loadavg___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_machine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Node.os.machine"};
static const lean_object* l_Lasm_JS_Node_os_machine___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_machine___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_machine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "machine"};
static const lean_object* l_Lasm_JS_Node_os_machine___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_machine___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_machine___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_machine___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_machine___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_machine___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_machine___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_machine();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_machine___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_networkInterfaces___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Node.os.networkInterfaces"};
static const lean_object* l_Lasm_JS_Node_os_networkInterfaces___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_networkInterfaces___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_networkInterfaces___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "networkInterfaces"};
static const lean_object* l_Lasm_JS_Node_os_networkInterfaces___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_networkInterfaces___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_networkInterfaces___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_networkInterfaces___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_networkInterfaces___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_networkInterfaces___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_networkInterfaces___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_networkInterfaces();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_networkInterfaces___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_platform___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.os.platform"};
static const lean_object* l_Lasm_JS_Node_os_platform___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_platform___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_platform___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "platform"};
static const lean_object* l_Lasm_JS_Node_os_platform___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_platform___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_platform___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_platform___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_platform___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_platform___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_platform___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_platform();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_platform___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_release___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Node.os.release"};
static const lean_object* l_Lasm_JS_Node_os_release___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_release___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_release___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "release"};
static const lean_object* l_Lasm_JS_Node_os_release___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_release___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_release___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_release___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_release___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_release___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_release___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_release();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_release___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_setPriority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.os.setPriority"};
static const lean_object* l_Lasm_JS_Node_os_setPriority___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_setPriority___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_setPriority___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "setPriority"};
static const lean_object* l_Lasm_JS_Node_os_setPriority___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_setPriority___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_setPriority___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_setPriority___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_setPriority___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_setPriority___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_setPriority___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriority(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriority___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_setPriorityWithPid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.os.setPriorityWithPid"};
static const lean_object* l_Lasm_JS_Node_os_setPriorityWithPid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_setPriorityWithPid___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_os_setPriorityWithPid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_setPriorityWithPid___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_setPriority___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_setPriorityWithPid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_setPriorityWithPid___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriorityWithPid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriorityWithPid___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_tmpdir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Node.os.tmpdir"};
static const lean_object* l_Lasm_JS_Node_os_tmpdir___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_tmpdir___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_tmpdir___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tmpdir"};
static const lean_object* l_Lasm_JS_Node_os_tmpdir___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_tmpdir___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_tmpdir___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_tmpdir___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_tmpdir___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_tmpdir___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_tmpdir___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_tmpdir();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_tmpdir___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_totalmem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.os.totalmem"};
static const lean_object* l_Lasm_JS_Node_os_totalmem___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_totalmem___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_totalmem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "totalmem"};
static const lean_object* l_Lasm_JS_Node_os_totalmem___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_totalmem___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_totalmem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_totalmem___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_totalmem___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_totalmem___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_totalmem___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_totalmem();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_totalmem___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_type___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Node.os.type"};
static const lean_object* l_Lasm_JS_Node_os_type___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_type___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_type___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_JS_Node_os_type___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_type___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_type___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_type___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_type___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_type___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_type___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_type();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_type___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_uptime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Node.os.uptime"};
static const lean_object* l_Lasm_JS_Node_os_uptime___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_uptime___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_uptime___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "uptime"};
static const lean_object* l_Lasm_JS_Node_os_uptime___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_uptime___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_uptime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_uptime___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_uptime___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_uptime___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_uptime___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_uptime();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_uptime___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_userInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.os.userInfo"};
static const lean_object* l_Lasm_JS_Node_os_userInfo___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_userInfo___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_userInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "userInfo"};
static const lean_object* l_Lasm_JS_Node_os_userInfo___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_userInfo___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_userInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_userInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_userInfo___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_userInfo___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_userInfo___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_userInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_userInfo___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_os_version___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Node.os.version"};
static const lean_object* l_Lasm_JS_Node_os_version___closed__0 = (const lean_object*)&l_Lasm_JS_Node_os_version___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_os_version___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Lasm_JS_Node_os_version___closed__1 = (const lean_object*)&l_Lasm_JS_Node_os_version___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_os_version___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_os_version___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_EOL___closed__0_value),((lean_object*)&l_Lasm_JS_Node_os_version___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_os_version___closed__2 = (const lean_object*)&l_Lasm_JS_Node_os_version___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_version();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_version___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0(lean_object* v___f_2_, lean_object* v_d_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_4_ = ((lean_object*)(l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0___closed__0));
v___x_5_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2_, v_d_3_);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_4_);
lean_ctor_set(v___x_6_, 1, v___x_5_);
v___x_7_ = lean_unsigned_to_nat(1u);
v___x_8_ = lean_mk_empty_array_with_capacity(v___x_7_);
v___x_9_ = lean_array_push(v___x_8_, v___x_6_);
v___x_10_ = l_Lasm_JS_Web_Support_fields(v___x_9_);
lean_dec_ref(v___x_9_);
return v___x_10_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_15_; uint64_t v___x_16_; 
v___x_15_ = 1;
v___x_16_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0(lean_object* v_specifier_18_){
_start:
{
uint32_t v___x_20_; uint32_t v___x_21_; uint64_t v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_20_ = 201;
v___x_21_ = 0;
v___x_22_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__0);
v___x_23_ = lean_string_to_utf8(v_specifier_18_);
v___x_24_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_20_, v___x_21_, v___x_22_, v___x_23_);
lean_dec_ref(v___x_23_);
if (lean_obj_tag(v___x_24_) == 0)
{
lean_object* v_a_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v_a_25_ = lean_ctor_get(v___x_24_, 0);
lean_inc(v_a_25_);
lean_dec_ref_known(v___x_24_, 1);
v___x_26_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__1));
v___x_27_ = l_String_quote(v_specifier_18_);
v___x_28_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
v___x_29_ = lean_unsigned_to_nat(120u);
v___x_30_ = lean_unsigned_to_nat(0u);
v___x_31_ = l_Std_Format_pretty(v___x_28_, v___x_29_, v___x_30_, v___x_30_);
v___x_32_ = lean_string_append(v___x_26_, v___x_31_);
lean_dec_ref(v___x_31_);
v___x_33_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_32_, v_a_25_);
lean_dec(v_a_25_);
lean_dec_ref(v___x_32_);
return v___x_33_;
}
else
{
lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_41_; 
lean_dec_ref(v_specifier_18_);
v_a_34_ = lean_ctor_get(v___x_24_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v___x_24_);
if (v_isSharedCheck_41_ == 0)
{
v___x_36_ = v___x_24_;
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_24_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_39_; 
if (v_isShared_37_ == 0)
{
v___x_39_ = v___x_36_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v_a_34_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___boxed(lean_object* v_specifier_42_, lean_object* v_a_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0(v_specifier_42_);
return v_res_44_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_51_ = lean_string_utf8_byte_size(v___x_50_);
return v___x_51_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5);
v___x_54_ = lean_nat_dec_eq(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_59_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10));
v___x_60_ = lean_unsigned_to_nat(46u);
v___x_61_ = lean_unsigned_to_nat(193u);
v___x_62_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9));
v___x_63_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8));
v___x_64_ = l_mkPanicMessageWithDecl(v___x_63_, v___x_62_, v___x_61_, v___x_60_, v___x_59_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_context_66_, lean_object* v_d_67_){
_start:
{
lean_object* v___y_70_; lean_object* v___y_71_; 
if (lean_obj_tag(v_d_67_) == 4)
{
lean_object* v_s_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_82_; 
v_s_75_ = lean_ctor_get(v_d_67_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v_d_67_);
if (v_isSharedCheck_82_ == 0)
{
v___x_77_ = v_d_67_;
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_s_75_);
lean_dec(v_d_67_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_80_; 
if (v_isShared_78_ == 0)
{
lean_ctor_set_tag(v___x_77_, 0);
v___x_80_ = v___x_77_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_s_75_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
else
{
lean_object* v___x_83_; lean_object* v_received_85_; 
v___x_83_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
if (lean_obj_tag(v_d_67_) == 9)
{
lean_object* v_value_99_; lean_object* v_description_100_; uint8_t v___x_101_; 
v_value_99_ = lean_ctor_get(v_d_67_, 0);
v_description_100_ = lean_ctor_get(v_d_67_, 1);
v___x_101_ = lean_string_dec_eq(v_description_100_, v___x_83_);
if (v___x_101_ == 0)
{
goto v___jp_97_;
}
else
{
uint32_t v___x_102_; uint64_t v___x_103_; lean_object* v___x_104_; uint32_t v___x_105_; lean_object* v___x_106_; 
lean_inc_n(v_value_99_, 2);
lean_dec_ref_known(v_d_67_, 2);
v___x_102_ = 206;
v___x_103_ = 0ULL;
v___x_104_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_104_, 0, v_value_99_);
lean_ctor_set(v___x_104_, 1, v___x_83_);
v___x_105_ = lasm_js_value_handle(v_value_99_);
lean_dec(v_value_99_);
v___x_106_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_102_, v___x_103_, v___x_104_, v___x_105_);
lean_dec_ref_known(v___x_104_, 2);
if (lean_obj_tag(v___x_106_) == 0)
{
lean_object* v_a_107_; uint8_t v___x_108_; 
v_a_107_ = lean_ctor_get(v___x_106_, 0);
lean_inc(v_a_107_);
lean_dec_ref_known(v___x_106_, 1);
v___x_108_ = lean_string_validate_utf8(v_a_107_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; 
lean_dec(v_a_107_);
v___x_109_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_110_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_109_);
v_received_85_ = v___x_110_;
goto v___jp_84_;
}
else
{
lean_object* v___x_111_; 
v___x_111_ = lean_string_from_utf8_unchecked(v_a_107_);
v_received_85_ = v___x_111_;
goto v___jp_84_;
}
}
else
{
lean_object* v___x_112_; 
lean_dec_ref_known(v___x_106_, 1);
v___x_112_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v_received_85_ = v___x_112_;
goto v___jp_84_;
}
}
}
else
{
goto v___jp_97_;
}
v___jp_84_:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_86_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_87_ = lean_string_append(v___x_86_, v_context_66_);
v___x_88_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_89_ = lean_string_append(v___x_87_, v___x_88_);
v___x_90_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_91_ = lean_string_append(v___x_89_, v___x_90_);
v___x_92_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_93_ = lean_string_append(v___x_91_, v___x_92_);
v___x_94_ = lean_string_append(v___x_93_, v_received_85_);
lean_dec_ref(v_received_85_);
v___x_95_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6);
if (v___x_95_ == 0)
{
lean_object* v___x_96_; 
v___x_96_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___y_70_ = v___x_94_;
v___y_71_ = v___x_96_;
goto v___jp_69_;
}
else
{
v___y_70_ = v___x_94_;
v___y_71_ = v___x_83_;
goto v___jp_69_;
}
}
v___jp_97_:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lasm_JS_Data_describe(v_d_67_);
v_received_85_ = v___x_98_;
goto v___jp_84_;
}
}
v___jp_69_:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = lean_string_append(v___y_70_, v___y_71_);
v___x_73_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
v___x_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_context_113_, lean_object* v_d_114_, lean_object* v_a_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_113_, v_d_114_);
lean_dec_ref(v_context_113_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_117_, lean_object* v_bytes_118_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_118_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_122_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_a_121_);
lean_dec_ref_known(v___x_120_, 1);
v___x_122_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_117_, v_a_121_);
return v___x_122_;
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
v_a_123_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_120_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_120_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_131_, lean_object* v_bytes_132_, lean_object* v_a_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3(v_context_131_, v_bytes_132_);
lean_dec_ref(v_bytes_132_);
lean_dec_ref(v_context_131_);
return v_res_134_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_135_; uint64_t v___x_136_; 
v___x_135_ = 0;
v___x_136_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2(lean_object* v_o_138_, lean_object* v_key_139_){
_start:
{
lean_object* v_k_141_; lean_object* v___x_142_; 
v_k_141_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_141_, 0, v_key_139_);
v___x_142_ = l_Lasm_JS_Wire_encodeIO(v_k_141_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; uint32_t v___x_144_; uint32_t v___x_145_; uint64_t v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_a_143_);
lean_dec_ref_known(v___x_142_, 1);
v___x_144_ = 203;
v___x_145_ = lasm_js_value_handle(v_o_138_);
v___x_146_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
v___x_147_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_148_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_148_, 0, v_o_138_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = lean_unsigned_to_nat(2u);
v___x_150_ = lean_mk_empty_array_with_capacity(v___x_149_);
lean_inc_ref(v_k_141_);
v___x_151_ = lean_array_push(v___x_150_, v_k_141_);
v___x_152_ = lean_array_push(v___x_151_, v___x_148_);
v___x_153_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
v___x_154_ = lasm_js_call(v___x_144_, v___x_145_, v___x_146_, v_a_143_, v___x_153_);
lean_dec_ref_known(v___x_153_, 1);
lean_dec(v_a_143_);
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v_a_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc(v_a_155_);
lean_dec_ref_known(v___x_154_, 1);
v___x_156_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__1));
v___x_157_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_141_);
v___x_158_ = lean_string_append(v___x_156_, v___x_157_);
lean_dec_ref(v___x_157_);
v___x_159_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3(v___x_158_, v_a_155_);
lean_dec(v_a_155_);
lean_dec_ref(v___x_158_);
return v___x_159_;
}
else
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
lean_dec_ref_known(v_k_141_, 1);
v_a_160_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v___x_154_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_154_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
else
{
lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
lean_dec_ref_known(v_k_141_, 1);
lean_dec(v_o_138_);
v_a_168_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_175_ == 0)
{
v___x_170_ = v___x_142_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_142_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_171_ == 0)
{
v___x_173_ = v___x_170_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_a_168_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___boxed(lean_object* v_o_176_, lean_object* v_key_177_, lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2(v_o_176_, v_key_177_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__3(lean_object* v_o_180_, lean_object* v_key_181_){
_start:
{
lean_object* v_k_183_; lean_object* v___x_184_; 
v_k_183_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_183_, 0, v_key_181_);
v___x_184_ = l_Lasm_JS_Wire_encodeIO(v_k_183_);
if (lean_obj_tag(v___x_184_) == 0)
{
lean_object* v_a_185_; uint32_t v___x_186_; uint32_t v___x_187_; uint64_t v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v_a_185_ = lean_ctor_get(v___x_184_, 0);
lean_inc(v_a_185_);
lean_dec_ref_known(v___x_184_, 1);
v___x_186_ = 203;
v___x_187_ = lasm_js_value_handle(v_o_180_);
v___x_188_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0___closed__0);
v___x_189_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_190_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_190_, 0, v_o_180_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = lean_unsigned_to_nat(2u);
v___x_192_ = lean_mk_empty_array_with_capacity(v___x_191_);
lean_inc_ref(v_k_183_);
v___x_193_ = lean_array_push(v___x_192_, v_k_183_);
v___x_194_ = lean_array_push(v___x_193_, v___x_190_);
v___x_195_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
v___x_196_ = lasm_js_call(v___x_186_, v___x_187_, v___x_188_, v_a_185_, v___x_195_);
lean_dec_ref_known(v___x_195_, 1);
lean_dec(v_a_185_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_a_197_);
lean_dec_ref_known(v___x_196_, 1);
v___x_198_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__1));
v___x_199_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_183_);
v___x_200_ = lean_string_append(v___x_198_, v___x_199_);
lean_dec_ref(v___x_199_);
v___x_201_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_200_, v_a_197_);
lean_dec(v_a_197_);
lean_dec_ref(v___x_200_);
return v___x_201_;
}
else
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
lean_dec_ref_known(v_k_183_, 1);
v_a_202_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_209_ == 0)
{
v___x_204_ = v___x_196_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_196_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_a_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
else
{
lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_217_; 
lean_dec_ref_known(v_k_183_, 1);
lean_dec(v_o_180_);
v_a_210_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_217_ == 0)
{
v___x_212_ = v___x_184_;
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_184_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_215_; 
if (v_isShared_213_ == 0)
{
v___x_215_ = v___x_212_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_a_210_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__3___boxed(lean_object* v_o_218_, lean_object* v_key_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__3(v_o_218_, v_key_219_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1(lean_object* v_module_223_, lean_object* v_o_224_, lean_object* v_a_225_){
_start:
{
if (lean_obj_tag(v_a_225_) == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
lean_dec(v_o_224_);
v___x_227_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___closed__0));
v___x_228_ = lean_string_append(v___x_227_, v_module_223_);
v___x_229_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
v___x_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
return v___x_230_;
}
else
{
lean_object* v_tail_231_; 
v_tail_231_ = lean_ctor_get(v_a_225_, 1);
if (lean_obj_tag(v_tail_231_) == 0)
{
lean_object* v_head_232_; lean_object* v___x_233_; 
v_head_232_ = lean_ctor_get(v_a_225_, 0);
lean_inc(v_head_232_);
lean_dec_ref_known(v_a_225_, 2);
v___x_233_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2(v_o_224_, v_head_232_);
return v___x_233_;
}
else
{
lean_object* v_head_234_; lean_object* v___x_235_; 
lean_inc(v_tail_231_);
v_head_234_ = lean_ctor_get(v_a_225_, 0);
lean_inc(v_head_234_);
lean_dec_ref_known(v_a_225_, 2);
v___x_235_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__3(v_o_224_, v_head_234_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; 
v_a_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_a_236_);
lean_dec_ref_known(v___x_235_, 1);
v_o_224_ = v_a_236_;
v_a_225_ = v_tail_231_;
goto _start;
}
else
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_245_; 
lean_dec(v_tail_231_);
v_a_238_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_245_ == 0)
{
v___x_240_ = v___x_235_;
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_235_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_a_238_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___boxed(lean_object* v_module_246_, lean_object* v_o_247_, lean_object* v_a_248_, lean_object* v_a_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1(v_module_246_, v_o_247_, v_a_248_);
lean_dec_ref(v_module_246_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(lean_object* v_module_251_, lean_object* v_path_252_){
_start:
{
lean_object* v___x_254_; 
lean_inc_ref(v_module_251_);
v___x_254_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0(v_module_251_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_a_255_; lean_object* v___x_256_; 
v_a_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_a_255_);
lean_dec_ref_known(v___x_254_, 1);
v___x_256_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1(v_module_251_, v_a_255_, v_path_252_);
lean_dec_ref(v_module_251_);
return v___x_256_;
}
else
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
lean_dec(v_path_252_);
lean_dec_ref(v_module_251_);
v_a_257_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___x_254_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_254_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_260_ == 0)
{
v___x_262_ = v___x_259_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_257_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0___boxed(lean_object* v_module_265_, lean_object* v_path_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(v_module_265_, v_path_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_EOL(){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_275_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__0));
v___x_276_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__2));
v___x_277_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(v___x_275_, v___x_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_EOL___boxed(lean_object* v_a_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lasm_JS_Node_os_EOL();
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_bytes_280_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_280_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_290_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_290_ == 0)
{
v___x_285_ = v___x_282_;
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_282_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_288_; 
if (v_isShared_286_ == 0)
{
v___x_288_ = v___x_285_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_a_283_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
else
{
return v___x_282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_bytes_291_, lean_object* v_a_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(v_bytes_291_);
lean_dec_ref(v_bytes_291_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1(lean_object* v_o_294_, lean_object* v_key_295_){
_start:
{
lean_object* v_k_297_; lean_object* v___x_298_; 
v_k_297_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_297_, 0, v_key_295_);
v___x_298_ = l_Lasm_JS_Wire_encodeIO(v_k_297_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v_a_299_; uint32_t v___x_300_; uint32_t v___x_301_; uint64_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_a_299_ = lean_ctor_get(v___x_298_, 0);
lean_inc(v_a_299_);
lean_dec_ref_known(v___x_298_, 1);
v___x_300_ = 203;
v___x_301_ = lasm_js_value_handle(v_o_294_);
v___x_302_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
v___x_303_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_304_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_304_, 0, v_o_294_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v___x_305_ = lean_unsigned_to_nat(2u);
v___x_306_ = lean_mk_empty_array_with_capacity(v___x_305_);
v___x_307_ = lean_array_push(v___x_306_, v_k_297_);
v___x_308_ = lean_array_push(v___x_307_, v___x_304_);
v___x_309_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
v___x_310_ = lasm_js_call(v___x_300_, v___x_301_, v___x_302_, v_a_299_, v___x_309_);
lean_dec_ref_known(v___x_309_, 1);
lean_dec(v_a_299_);
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; lean_object* v___x_312_; 
v_a_311_ = lean_ctor_get(v___x_310_, 0);
lean_inc(v_a_311_);
lean_dec_ref_known(v___x_310_, 1);
v___x_312_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(v_a_311_);
lean_dec(v_a_311_);
return v___x_312_;
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
v_a_313_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_310_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_310_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
lean_dec_ref_known(v_k_297_, 1);
lean_dec(v_o_294_);
v_a_321_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___x_298_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_298_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_a_321_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1___boxed(lean_object* v_o_329_, lean_object* v_key_330_, lean_object* v_a_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1(v_o_329_, v_key_330_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0(lean_object* v_module_333_, lean_object* v_o_334_, lean_object* v_a_335_){
_start:
{
if (lean_obj_tag(v_a_335_) == 0)
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
lean_dec(v_o_334_);
v___x_337_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___closed__0));
v___x_338_ = lean_string_append(v___x_337_, v_module_333_);
v___x_339_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
v___x_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
return v___x_340_;
}
else
{
lean_object* v_tail_341_; 
v_tail_341_ = lean_ctor_get(v_a_335_, 1);
if (lean_obj_tag(v_tail_341_) == 0)
{
lean_object* v_head_342_; lean_object* v___x_343_; 
v_head_342_ = lean_ctor_get(v_a_335_, 0);
lean_inc(v_head_342_);
lean_dec_ref_known(v_a_335_, 2);
v___x_343_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1(v_o_334_, v_head_342_);
return v___x_343_;
}
else
{
lean_object* v_head_344_; lean_object* v___x_345_; 
lean_inc(v_tail_341_);
v_head_344_ = lean_ctor_get(v_a_335_, 0);
lean_inc(v_head_344_);
lean_dec_ref_known(v_a_335_, 2);
v___x_345_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__3(v_o_334_, v_head_344_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v___x_345_, 1);
v_o_334_ = v_a_346_;
v_a_335_ = v_tail_341_;
goto _start;
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec(v_tail_341_);
v_a_348_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_345_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_345_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0___boxed(lean_object* v_module_356_, lean_object* v_o_357_, lean_object* v_a_358_, lean_object* v_a_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0(v_module_356_, v_o_357_, v_a_358_);
lean_dec_ref(v_module_356_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0(lean_object* v_module_361_, lean_object* v_path_362_){
_start:
{
lean_object* v___x_364_; 
lean_inc_ref(v_module_361_);
v___x_364_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0(v_module_361_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; lean_object* v___x_366_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_a_365_);
lean_dec_ref_known(v___x_364_, 1);
v___x_366_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0(v_module_361_, v_a_365_, v_path_362_);
lean_dec_ref(v_module_361_);
return v___x_366_;
}
else
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
lean_dec(v_path_362_);
lean_dec_ref(v_module_361_);
v_a_367_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_374_ == 0)
{
v___x_369_ = v___x_364_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_364_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_367_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0___boxed(lean_object* v_module_375_, lean_object* v_path_376_, lean_object* v_a_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0(v_module_375_, v_path_376_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_constants(){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_384_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__0));
v___x_385_ = ((lean_object*)(l_Lasm_JS_Node_os_constants___closed__1));
v___x_386_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0(v___x_384_, v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_constants___boxed(lean_object* v_a_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lasm_JS_Node_os_constants();
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_d_389_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_391_, 0, v_d_389_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_d_392_, lean_object* v_a_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_d_392_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_395_, lean_object* v_d_396_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_398_, 0, v_d_396_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_399_, lean_object* v_d_400_, lean_object* v_a_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_399_, v_d_400_);
lean_dec_ref(v_context_399_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_403_, lean_object* v_bytes_404_){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(v_bytes_404_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_407_, lean_object* v_bytes_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2(v_context_407_, v_bytes_408_);
lean_dec_ref(v_bytes_408_);
lean_dec_ref(v_context_407_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_devNull(){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__0));
v___x_417_ = ((lean_object*)(l_Lasm_JS_Node_os_devNull___closed__1));
v___x_418_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(v___x_416_, v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_devNull___boxed(lean_object* v_a_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lasm_JS_Node_os_devNull();
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0(lean_object* v_context_425_, lean_object* v_d_426_){
_start:
{
lean_object* v___y_429_; lean_object* v___y_430_; lean_object* v___y_435_; lean_object* v_received_436_; lean_object* v___y_455_; lean_object* v_a_458_; 
switch(lean_obj_tag(v_d_426_))
{
case 3:
{
double v_n_482_; lean_object* v___x_483_; 
v_n_482_ = lean_ctor_get_float(v_d_426_, 0);
v___x_483_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_482_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v___x_484_; 
v___x_484_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__3));
v_a_458_ = v___x_484_;
goto v___jp_457_;
}
else
{
lean_object* v_val_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_dec_ref_known(v_d_426_, 0);
v_val_485_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_483_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_val_485_);
lean_dec(v___x_483_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
lean_ctor_set_tag(v___x_487_, 0);
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_val_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
case 5:
{
lean_object* v_i_493_; lean_object* v___x_494_; 
v_i_493_ = lean_ctor_get(v_d_426_, 0);
lean_inc(v_i_493_);
lean_dec_ref_known(v_d_426_, 1);
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v_i_493_);
return v___x_494_;
}
default: 
{
lean_object* v___x_495_; 
v___x_495_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v_a_458_ = v___x_495_;
goto v___jp_457_;
}
}
v___jp_428_:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_431_ = lean_string_append(v___y_429_, v___y_430_);
lean_dec_ref(v___y_430_);
v___x_432_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
v___x_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
return v___x_433_;
}
v___jp_434_:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_437_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_438_ = lean_string_append(v___x_437_, v_context_425_);
v___x_439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_440_ = lean_string_append(v___x_438_, v___x_439_);
v___x_441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__0));
v___x_442_ = lean_string_append(v___x_440_, v___x_441_);
v___x_443_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_444_ = lean_string_append(v___x_442_, v___x_443_);
v___x_445_ = lean_string_append(v___x_444_, v_received_436_);
lean_dec_ref(v_received_436_);
v___x_446_ = lean_string_utf8_byte_size(v___y_435_);
v___x_447_ = lean_unsigned_to_nat(0u);
v___x_448_ = lean_nat_dec_eq(v___x_446_, v___x_447_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_449_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1));
v___x_450_ = lean_string_append(v___x_449_, v___y_435_);
v___x_451_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2));
v___x_452_ = lean_string_append(v___x_450_, v___x_451_);
v___y_429_ = v___x_445_;
v___y_430_ = v___x_452_;
goto v___jp_428_;
}
else
{
lean_object* v___x_453_; 
v___x_453_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___y_429_ = v___x_445_;
v___y_430_ = v___x_453_;
goto v___jp_428_;
}
}
v___jp_454_:
{
lean_object* v___x_456_; 
v___x_456_ = l_Lasm_JS_Data_describe(v_d_426_);
v___y_435_ = v___y_455_;
v_received_436_ = v___x_456_;
goto v___jp_434_;
}
v___jp_457_:
{
if (lean_obj_tag(v_d_426_) == 9)
{
lean_object* v_value_459_; lean_object* v_description_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v_value_459_ = lean_ctor_get(v_d_426_, 0);
v_description_460_ = lean_ctor_get(v_d_426_, 1);
v___x_461_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_462_ = lean_string_dec_eq(v_description_460_, v___x_461_);
if (v___x_462_ == 0)
{
v___y_455_ = v_a_458_;
goto v___jp_454_;
}
else
{
lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_479_; 
lean_inc(v_value_459_);
v_isSharedCheck_479_ = !lean_is_exclusive(v_d_426_);
if (v_isSharedCheck_479_ == 0)
{
lean_object* v_unused_480_; lean_object* v_unused_481_; 
v_unused_480_ = lean_ctor_get(v_d_426_, 1);
lean_dec(v_unused_480_);
v_unused_481_ = lean_ctor_get(v_d_426_, 0);
lean_dec(v_unused_481_);
v___x_464_ = v_d_426_;
v_isShared_465_ = v_isSharedCheck_479_;
goto v_resetjp_463_;
}
else
{
lean_dec(v_d_426_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_479_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
uint32_t v___x_466_; uint64_t v___x_467_; lean_object* v___x_469_; 
v___x_466_ = 206;
v___x_467_ = 0ULL;
lean_inc(v_value_459_);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 1, v___x_461_);
v___x_469_ = v___x_464_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_value_459_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v___x_461_);
v___x_469_ = v_reuseFailAlloc_478_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
uint32_t v___x_470_; lean_object* v___x_471_; 
v___x_470_ = lasm_js_value_handle(v_value_459_);
lean_dec(v_value_459_);
v___x_471_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_466_, v___x_467_, v___x_469_, v___x_470_);
lean_dec_ref(v___x_469_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; uint8_t v___x_473_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v___x_473_ = lean_string_validate_utf8(v_a_472_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec(v_a_472_);
v___x_474_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_475_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_474_);
v___y_435_ = v_a_458_;
v_received_436_ = v___x_475_;
goto v___jp_434_;
}
else
{
lean_object* v___x_476_; 
v___x_476_ = lean_string_from_utf8_unchecked(v_a_472_);
v___y_435_ = v_a_458_;
v_received_436_ = v___x_476_;
goto v___jp_434_;
}
}
else
{
lean_object* v___x_477_; 
lean_dec_ref_known(v___x_471_, 1);
v___x_477_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v___y_435_ = v_a_458_;
v_received_436_ = v___x_477_;
goto v___jp_434_;
}
}
}
}
}
else
{
v___y_455_ = v_a_458_;
goto v___jp_454_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___boxed(lean_object* v_context_496_, lean_object* v_d_497_, lean_object* v_a_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0(v_context_496_, v_d_497_);
lean_dec_ref(v_context_496_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(lean_object* v_b_501_, lean_object* v_args_502_, uint8_t v_await_503_){
_start:
{
uint64_t v___y_506_; uint64_t v___y_507_; uint64_t v___x_550_; uint64_t v___y_552_; 
v___x_550_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_503_ == 0)
{
uint64_t v___x_557_; 
v___x_557_ = 0ULL;
v___y_552_ = v___x_557_;
goto v___jp_551_;
}
else
{
uint64_t v___x_558_; 
v___x_558_ = 2ULL;
v___y_552_ = v___x_558_;
goto v___jp_551_;
}
v___jp_505_:
{
uint64_t v_flags_508_; uint32_t v___x_509_; lean_object* v___x_510_; uint32_t v___x_511_; lean_object* v___x_512_; 
v_flags_508_ = lean_uint64_lor(v___y_506_, v___y_507_);
v___x_509_ = 214;
v___x_510_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_501_, v_args_502_);
v___x_511_ = 0;
v___x_512_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_509_, v_flags_508_, v___x_510_, v___x_511_);
lean_dec(v___x_510_);
if (lean_obj_tag(v___x_512_) == 0)
{
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_514_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_a_513_);
lean_dec_ref_known(v___x_512_, 1);
v___x_514_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_513_);
lean_dec(v_a_513_);
if (lean_obj_tag(v___x_514_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v_a_515_ = lean_ctor_get(v___x_514_, 0);
lean_inc(v_a_515_);
lean_dec_ref_known(v___x_514_, 1);
v___x_516_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_501_);
v___x_517_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0(v___x_516_, v_a_515_);
lean_dec_ref(v___x_516_);
return v___x_517_;
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
v_a_518_ = lean_ctor_get(v___x_514_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_514_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_514_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
v_a_526_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_512_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_512_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
lean_ctor_set_tag(v___x_528_, 1);
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
else
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_549_; 
v_a_534_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_549_ == 0)
{
v___x_536_ = v___x_512_;
v_isShared_537_ = v_isSharedCheck_549_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_512_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_549_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_538_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_539_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_501_);
v___x_540_ = lean_string_append(v___x_538_, v___x_539_);
lean_dec_ref(v___x_539_);
v___x_541_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_542_ = lean_string_append(v___x_540_, v___x_541_);
v___x_543_ = lean_io_error_to_string(v_a_534_);
v___x_544_ = lean_string_append(v___x_542_, v___x_543_);
lean_dec_ref(v___x_543_);
v___x_545_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 0, v___x_545_);
v___x_547_ = v___x_536_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_545_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
v___jp_551_:
{
uint8_t v_construct_553_; uint64_t v___x_554_; 
v_construct_553_ = lean_ctor_get_uint8(v_b_501_, sizeof(void*)*4);
v___x_554_ = lean_uint64_lor(v___x_550_, v___y_552_);
if (v_construct_553_ == 0)
{
uint64_t v___x_555_; 
v___x_555_ = 0ULL;
v___y_506_ = v___x_554_;
v___y_507_ = v___x_555_;
goto v___jp_505_;
}
else
{
uint64_t v___x_556_; 
v___x_556_ = 4ULL;
v___y_506_ = v___x_554_;
v___y_507_ = v___x_556_;
goto v___jp_505_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___boxed(lean_object* v_b_559_, lean_object* v_args_560_, lean_object* v_await_561_, lean_object* v_a_562_){
_start:
{
uint8_t v_await_boxed_563_; lean_object* v_res_564_; 
v_await_boxed_563_ = lean_unbox(v_await_561_);
v_res_564_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v_b_559_, v_args_560_, v_await_boxed_563_);
lean_dec_ref(v_b_559_);
return v_res_564_;
}
}
static lean_object* _init_l_Lasm_JS_Node_os_availableParallelism___closed__4(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = ((lean_object*)(l_Lasm_JS_Node_os_availableParallelism___closed__3));
v___x_576_ = l_Lasm_JS_Web_Support_args(v___x_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_availableParallelism(){
_start:
{
uint8_t v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_578_ = 0;
v___x_579_ = ((lean_object*)(l_Lasm_JS_Node_os_availableParallelism___closed__2));
v___x_580_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_581_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_579_, v___x_580_, v___x_578_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_availableParallelism___boxed(lean_object* v_a_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lasm_JS_Node_os_availableParallelism();
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(lean_object* v_b_584_, lean_object* v_args_585_, uint8_t v_await_586_){
_start:
{
uint64_t v___y_589_; uint64_t v___y_590_; uint64_t v___x_633_; uint64_t v___y_635_; 
v___x_633_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_586_ == 0)
{
uint64_t v___x_640_; 
v___x_640_ = 0ULL;
v___y_635_ = v___x_640_;
goto v___jp_634_;
}
else
{
uint64_t v___x_641_; 
v___x_641_ = 2ULL;
v___y_635_ = v___x_641_;
goto v___jp_634_;
}
v___jp_588_:
{
uint64_t v_flags_591_; uint32_t v___x_592_; lean_object* v___x_593_; uint32_t v___x_594_; lean_object* v___x_595_; 
v_flags_591_ = lean_uint64_lor(v___y_589_, v___y_590_);
v___x_592_ = 214;
v___x_593_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_584_, v_args_585_);
v___x_594_ = 0;
v___x_595_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_592_, v_flags_591_, v___x_593_, v___x_594_);
lean_dec(v___x_593_);
if (lean_obj_tag(v___x_595_) == 0)
{
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_597_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_596_);
lean_dec_ref_known(v___x_595_, 1);
v___x_597_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_596_);
lean_dec(v_a_596_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_598_);
lean_dec_ref_known(v___x_597_, 1);
v___x_599_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_584_);
v___x_600_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4(v___x_599_, v_a_598_);
lean_dec_ref(v___x_599_);
return v___x_600_;
}
else
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
v_a_601_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_608_ == 0)
{
v___x_603_ = v___x_597_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_597_);
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
else
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
v_a_609_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_595_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_595_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
lean_ctor_set_tag(v___x_611_, 1);
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_632_; 
v_a_617_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_632_ == 0)
{
v___x_619_ = v___x_595_;
v_isShared_620_ = v_isSharedCheck_632_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v___x_595_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_632_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_630_; 
v___x_621_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_622_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_584_);
v___x_623_ = lean_string_append(v___x_621_, v___x_622_);
lean_dec_ref(v___x_622_);
v___x_624_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_625_ = lean_string_append(v___x_623_, v___x_624_);
v___x_626_ = lean_io_error_to_string(v_a_617_);
v___x_627_ = lean_string_append(v___x_625_, v___x_626_);
lean_dec_ref(v___x_626_);
v___x_628_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 0, v___x_628_);
v___x_630_ = v___x_619_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_628_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
v___jp_634_:
{
uint8_t v_construct_636_; uint64_t v___x_637_; 
v_construct_636_ = lean_ctor_get_uint8(v_b_584_, sizeof(void*)*4);
v___x_637_ = lean_uint64_lor(v___x_633_, v___y_635_);
if (v_construct_636_ == 0)
{
uint64_t v___x_638_; 
v___x_638_ = 0ULL;
v___y_589_ = v___x_637_;
v___y_590_ = v___x_638_;
goto v___jp_588_;
}
else
{
uint64_t v___x_639_; 
v___x_639_ = 4ULL;
v___y_589_ = v___x_637_;
v___y_590_ = v___x_639_;
goto v___jp_588_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0___boxed(lean_object* v_b_642_, lean_object* v_args_643_, lean_object* v_await_644_, lean_object* v_a_645_){
_start:
{
uint8_t v_await_boxed_646_; lean_object* v_res_647_; 
v_await_boxed_646_ = lean_unbox(v_await_644_);
v_res_647_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v_b_642_, v_args_643_, v_await_boxed_646_);
lean_dec_ref(v_b_642_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_arch(){
_start:
{
uint8_t v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_657_ = 0;
v___x_658_ = ((lean_object*)(l_Lasm_JS_Node_os_arch___closed__2));
v___x_659_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_660_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_658_, v___x_659_, v___x_657_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_arch___boxed(lean_object* v_a_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lasm_JS_Node_os_arch();
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1(size_t v_sz_663_, size_t v_i_664_, lean_object* v_bs_665_){
_start:
{
uint8_t v___x_666_; 
v___x_666_ = lean_usize_dec_lt(v_i_664_, v_sz_663_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; 
v___x_667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_667_, 0, v_bs_665_);
return v___x_667_;
}
else
{
lean_object* v_v_668_; lean_object* v___x_669_; lean_object* v_bs_x27_670_; size_t v___x_671_; size_t v___x_672_; lean_object* v___x_673_; 
v_v_668_ = lean_array_uget(v_bs_665_, v_i_664_);
v___x_669_ = lean_unsigned_to_nat(0u);
v_bs_x27_670_ = lean_array_uset(v_bs_665_, v_i_664_, v___x_669_);
v___x_671_ = ((size_t)1ULL);
v___x_672_ = lean_usize_add(v_i_664_, v___x_671_);
v___x_673_ = lean_array_uset(v_bs_x27_670_, v_i_664_, v_v_668_);
v_i_664_ = v___x_672_;
v_bs_665_ = v___x_673_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_675_, lean_object* v_i_676_, lean_object* v_bs_677_){
_start:
{
size_t v_sz_boxed_678_; size_t v_i_boxed_679_; lean_object* v_res_680_; 
v_sz_boxed_678_ = lean_unbox_usize(v_sz_675_);
lean_dec(v_sz_675_);
v_i_boxed_679_ = lean_unbox_usize(v_i_676_);
lean_dec(v_i_676_);
v_res_680_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1(v_sz_boxed_678_, v_i_boxed_679_, v_bs_677_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0(lean_object* v_context_683_, lean_object* v_d_684_){
_start:
{
lean_object* v___y_687_; lean_object* v___y_688_; lean_object* v___y_693_; lean_object* v_received_694_; lean_object* v___y_713_; lean_object* v_a_716_; 
if (lean_obj_tag(v_d_684_) == 7)
{
lean_object* v_items_740_; size_t v_sz_741_; size_t v___x_742_; lean_object* v___x_743_; 
v_items_740_ = lean_ctor_get(v_d_684_, 0);
v_sz_741_ = lean_array_size(v_items_740_);
v___x_742_ = ((size_t)0ULL);
lean_inc_ref(v_items_740_);
v___x_743_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1(v_sz_741_, v___x_742_, v_items_740_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_743_, 1);
v___x_745_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__1));
v___x_746_ = lean_string_utf8_byte_size(v_a_744_);
v___x_747_ = lean_unsigned_to_nat(0u);
v___x_748_ = lean_nat_dec_eq(v___x_746_, v___x_747_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_749_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_750_ = lean_string_append(v___x_749_, v_a_744_);
lean_dec(v_a_744_);
v___x_751_ = lean_string_append(v___x_745_, v___x_750_);
lean_dec_ref(v___x_750_);
v_a_716_ = v___x_751_;
goto v___jp_715_;
}
else
{
lean_dec(v_a_744_);
v_a_716_ = v___x_745_;
goto v___jp_715_;
}
}
else
{
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_752_; 
v_a_752_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_752_);
lean_dec_ref_known(v___x_743_, 1);
v_a_716_ = v_a_752_;
goto v___jp_715_;
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec_ref_known(v_d_684_, 1);
v_a_753_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_743_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_743_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
lean_ctor_set_tag(v___x_755_, 0);
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
}
else
{
lean_object* v___x_761_; 
v___x_761_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v_a_716_ = v___x_761_;
goto v___jp_715_;
}
v___jp_686_:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = lean_string_append(v___y_687_, v___y_688_);
lean_dec_ref(v___y_688_);
v___x_690_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_690_, 0, v___x_689_);
v___x_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
v___jp_692_:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; uint8_t v___x_706_; 
v___x_695_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_696_ = lean_string_append(v___x_695_, v_context_683_);
v___x_697_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_698_ = lean_string_append(v___x_696_, v___x_697_);
v___x_699_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__0));
v___x_700_ = lean_string_append(v___x_698_, v___x_699_);
v___x_701_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_702_ = lean_string_append(v___x_700_, v___x_701_);
v___x_703_ = lean_string_append(v___x_702_, v_received_694_);
lean_dec_ref(v_received_694_);
v___x_704_ = lean_string_utf8_byte_size(v___y_693_);
v___x_705_ = lean_unsigned_to_nat(0u);
v___x_706_ = lean_nat_dec_eq(v___x_704_, v___x_705_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_707_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1));
v___x_708_ = lean_string_append(v___x_707_, v___y_693_);
lean_dec_ref(v___y_693_);
v___x_709_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2));
v___x_710_ = lean_string_append(v___x_708_, v___x_709_);
v___y_687_ = v___x_703_;
v___y_688_ = v___x_710_;
goto v___jp_686_;
}
else
{
lean_object* v___x_711_; 
lean_dec_ref(v___y_693_);
v___x_711_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___y_687_ = v___x_703_;
v___y_688_ = v___x_711_;
goto v___jp_686_;
}
}
v___jp_712_:
{
lean_object* v___x_714_; 
v___x_714_ = l_Lasm_JS_Data_describe(v_d_684_);
v___y_693_ = v___y_713_;
v_received_694_ = v___x_714_;
goto v___jp_692_;
}
v___jp_715_:
{
if (lean_obj_tag(v_d_684_) == 9)
{
lean_object* v_value_717_; lean_object* v_description_718_; lean_object* v___x_719_; uint8_t v___x_720_; 
v_value_717_ = lean_ctor_get(v_d_684_, 0);
v_description_718_ = lean_ctor_get(v_d_684_, 1);
v___x_719_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_720_ = lean_string_dec_eq(v_description_718_, v___x_719_);
if (v___x_720_ == 0)
{
v___y_713_ = v_a_716_;
goto v___jp_712_;
}
else
{
lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_737_; 
lean_inc(v_value_717_);
v_isSharedCheck_737_ = !lean_is_exclusive(v_d_684_);
if (v_isSharedCheck_737_ == 0)
{
lean_object* v_unused_738_; lean_object* v_unused_739_; 
v_unused_738_ = lean_ctor_get(v_d_684_, 1);
lean_dec(v_unused_738_);
v_unused_739_ = lean_ctor_get(v_d_684_, 0);
lean_dec(v_unused_739_);
v___x_722_ = v_d_684_;
v_isShared_723_ = v_isSharedCheck_737_;
goto v_resetjp_721_;
}
else
{
lean_dec(v_d_684_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_737_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
uint32_t v___x_724_; uint64_t v___x_725_; lean_object* v___x_727_; 
v___x_724_ = 206;
v___x_725_ = 0ULL;
lean_inc(v_value_717_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 1, v___x_719_);
v___x_727_ = v___x_722_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_value_717_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v___x_719_);
v___x_727_ = v_reuseFailAlloc_736_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
uint32_t v___x_728_; lean_object* v___x_729_; 
v___x_728_ = lasm_js_value_handle(v_value_717_);
lean_dec(v_value_717_);
v___x_729_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_724_, v___x_725_, v___x_727_, v___x_728_);
lean_dec_ref(v___x_727_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; uint8_t v___x_731_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_730_);
lean_dec_ref_known(v___x_729_, 1);
v___x_731_ = lean_string_validate_utf8(v_a_730_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec(v_a_730_);
v___x_732_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_733_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_732_);
v___y_693_ = v_a_716_;
v_received_694_ = v___x_733_;
goto v___jp_692_;
}
else
{
lean_object* v___x_734_; 
v___x_734_ = lean_string_from_utf8_unchecked(v_a_730_);
v___y_693_ = v_a_716_;
v_received_694_ = v___x_734_;
goto v___jp_692_;
}
}
else
{
lean_object* v___x_735_; 
lean_dec_ref_known(v___x_729_, 1);
v___x_735_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v___y_693_ = v_a_716_;
v_received_694_ = v___x_735_;
goto v___jp_692_;
}
}
}
}
}
else
{
v___y_713_ = v_a_716_;
goto v___jp_712_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___boxed(lean_object* v_context_762_, lean_object* v_d_763_, lean_object* v_a_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0(v_context_762_, v_d_763_);
lean_dec_ref(v_context_762_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0(lean_object* v_b_766_, lean_object* v_args_767_, uint8_t v_await_768_){
_start:
{
uint64_t v___y_771_; uint64_t v___y_772_; uint64_t v___x_815_; uint64_t v___y_817_; 
v___x_815_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_768_ == 0)
{
uint64_t v___x_822_; 
v___x_822_ = 0ULL;
v___y_817_ = v___x_822_;
goto v___jp_816_;
}
else
{
uint64_t v___x_823_; 
v___x_823_ = 2ULL;
v___y_817_ = v___x_823_;
goto v___jp_816_;
}
v___jp_770_:
{
uint64_t v_flags_773_; uint32_t v___x_774_; lean_object* v___x_775_; uint32_t v___x_776_; lean_object* v___x_777_; 
v_flags_773_ = lean_uint64_lor(v___y_771_, v___y_772_);
v___x_774_ = 214;
v___x_775_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_766_, v_args_767_);
v___x_776_ = 0;
v___x_777_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_774_, v_flags_773_, v___x_775_, v___x_776_);
lean_dec(v___x_775_);
if (lean_obj_tag(v___x_777_) == 0)
{
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v___x_779_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_a_778_);
lean_dec_ref_known(v___x_777_, 1);
v___x_779_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_778_);
lean_dec(v_a_778_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v_a_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_780_);
lean_dec_ref_known(v___x_779_, 1);
v___x_781_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_766_);
v___x_782_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0(v___x_781_, v_a_780_);
lean_dec_ref(v___x_781_);
return v___x_782_;
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
v_a_783_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_779_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_779_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
v_a_791_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_777_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_777_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
lean_ctor_set_tag(v___x_793_, 1);
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_814_; 
v_a_799_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_814_ == 0)
{
v___x_801_ = v___x_777_;
v_isShared_802_ = v_isSharedCheck_814_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_777_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_814_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_803_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_804_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_766_);
v___x_805_ = lean_string_append(v___x_803_, v___x_804_);
lean_dec_ref(v___x_804_);
v___x_806_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_807_ = lean_string_append(v___x_805_, v___x_806_);
v___x_808_ = lean_io_error_to_string(v_a_799_);
v___x_809_ = lean_string_append(v___x_807_, v___x_808_);
lean_dec_ref(v___x_808_);
v___x_810_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 0, v___x_810_);
v___x_812_ = v___x_801_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v___x_810_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
v___jp_816_:
{
uint8_t v_construct_818_; uint64_t v___x_819_; 
v_construct_818_ = lean_ctor_get_uint8(v_b_766_, sizeof(void*)*4);
v___x_819_ = lean_uint64_lor(v___x_815_, v___y_817_);
if (v_construct_818_ == 0)
{
uint64_t v___x_820_; 
v___x_820_ = 0ULL;
v___y_771_ = v___x_819_;
v___y_772_ = v___x_820_;
goto v___jp_770_;
}
else
{
uint64_t v___x_821_; 
v___x_821_ = 4ULL;
v___y_771_ = v___x_819_;
v___y_772_ = v___x_821_;
goto v___jp_770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0___boxed(lean_object* v_b_824_, lean_object* v_args_825_, lean_object* v_await_826_, lean_object* v_a_827_){
_start:
{
uint8_t v_await_boxed_828_; lean_object* v_res_829_; 
v_await_boxed_828_ = lean_unbox(v_await_826_);
v_res_829_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0(v_b_824_, v_args_825_, v_await_boxed_828_);
lean_dec_ref(v_b_824_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_cpus(){
_start:
{
uint8_t v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_839_ = 0;
v___x_840_ = ((lean_object*)(l_Lasm_JS_Node_os_cpus___closed__2));
v___x_841_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_842_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0(v___x_840_, v___x_841_, v___x_839_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_cpus___boxed(lean_object* v_a_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lasm_JS_Node_os_cpus();
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_endianness(){
_start:
{
uint8_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_854_ = 0;
v___x_855_ = ((lean_object*)(l_Lasm_JS_Node_os_endianness___closed__2));
v___x_856_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_857_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_855_, v___x_856_, v___x_854_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_endianness___boxed(lean_object* v_a_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Lasm_JS_Node_os_endianness();
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_freemem(){
_start:
{
uint8_t v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_869_ = 0;
v___x_870_ = ((lean_object*)(l_Lasm_JS_Node_os_freemem___closed__2));
v___x_871_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_872_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_870_, v___x_871_, v___x_869_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_freemem___boxed(lean_object* v_a_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_Lasm_JS_Node_os_freemem();
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_getPriority_spec__0(lean_object* v_x_875_){
_start:
{
if (lean_obj_tag(v_x_875_) == 0)
{
lean_object* v___x_876_; 
v___x_876_ = lean_box(0);
return v___x_876_;
}
else
{
lean_object* v_val_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_889_; 
v_val_877_ = lean_ctor_get(v_x_875_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v_x_875_);
if (v_isSharedCheck_889_ == 0)
{
v___x_879_ = v_x_875_;
v_isShared_880_ = v_isSharedCheck_889_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_val_877_);
lean_dec(v_x_875_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_889_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_881_; lean_object* v___x_882_; uint8_t v___x_883_; 
v___x_881_ = lean_nat_abs(v_val_877_);
v___x_882_ = lean_cstr_to_nat("9007199254740991");
v___x_883_ = lean_nat_dec_le(v___x_881_, v___x_882_);
lean_dec(v___x_881_);
if (v___x_883_ == 0)
{
lean_object* v___x_885_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set_tag(v___x_879_, 5);
v___x_885_ = v___x_879_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_val_877_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
else
{
double v___x_887_; lean_object* v___x_888_; 
lean_del_object(v___x_879_);
v___x_887_ = l_Float_ofInt(v_val_877_);
lean_dec(v_val_877_);
v___x_888_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_888_, 0, v___x_887_);
return v___x_888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_getPriority(lean_object* v_pid_898_){
_start:
{
uint8_t v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_900_ = 0;
v___x_901_ = lean_unsigned_to_nat(1u);
v___x_902_ = ((lean_object*)(l_Lasm_JS_Node_os_getPriority___closed__2));
v___x_903_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_getPriority_spec__0(v_pid_898_);
v___x_904_ = lean_mk_empty_array_with_capacity(v___x_901_);
v___x_905_ = lean_array_push(v___x_904_, v___x_903_);
v___x_906_ = l_Lasm_JS_Web_Support_args(v___x_905_);
v___x_907_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_902_, v___x_906_, v___x_900_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_getPriority___boxed(lean_object* v_pid_908_, lean_object* v_a_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_Lasm_JS_Node_os_getPriority(v_pid_908_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_homedir(){
_start:
{
uint8_t v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_920_ = 0;
v___x_921_ = ((lean_object*)(l_Lasm_JS_Node_os_homedir___closed__2));
v___x_922_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_923_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_921_, v___x_922_, v___x_920_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_homedir___boxed(lean_object* v_a_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lasm_JS_Node_os_homedir();
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_hostname(){
_start:
{
uint8_t v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_935_ = 0;
v___x_936_ = ((lean_object*)(l_Lasm_JS_Node_os_hostname___closed__2));
v___x_937_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_938_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_936_, v___x_937_, v___x_935_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_hostname___boxed(lean_object* v_a_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Lasm_JS_Node_os_hostname();
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1(size_t v_sz_943_, size_t v_i_944_, lean_object* v_bs_945_){
_start:
{
uint8_t v___x_946_; 
v___x_946_ = lean_usize_dec_lt(v_i_944_, v_sz_943_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
v___x_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_947_, 0, v_bs_945_);
return v___x_947_;
}
else
{
lean_object* v_v_948_; 
v_v_948_ = lean_array_uget_borrowed(v_bs_945_, v_i_944_);
if (lean_obj_tag(v_v_948_) == 3)
{
double v_n_949_; lean_object* v___x_950_; lean_object* v_bs_x27_951_; size_t v___x_952_; size_t v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v_n_949_ = lean_ctor_get_float(v_v_948_, 0);
v___x_950_ = lean_unsigned_to_nat(0u);
v_bs_x27_951_ = lean_array_uset(v_bs_945_, v_i_944_, v___x_950_);
v___x_952_ = ((size_t)1ULL);
v___x_953_ = lean_usize_add(v_i_944_, v___x_952_);
v___x_954_ = lean_box_float(v_n_949_);
v___x_955_ = lean_array_uset(v_bs_x27_951_, v_i_944_, v___x_954_);
v_i_944_ = v___x_953_;
v_bs_945_ = v___x_955_;
goto _start;
}
else
{
lean_object* v___x_957_; 
lean_dec_ref(v_bs_945_);
v___x_957_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1___closed__0));
return v___x_957_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_958_, lean_object* v_i_959_, lean_object* v_bs_960_){
_start:
{
size_t v_sz_boxed_961_; size_t v_i_boxed_962_; lean_object* v_res_963_; 
v_sz_boxed_961_ = lean_unbox_usize(v_sz_958_);
lean_dec(v_sz_958_);
v_i_boxed_962_ = lean_unbox_usize(v_i_959_);
lean_dec(v_i_959_);
v_res_963_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1(v_sz_boxed_961_, v_i_boxed_962_, v_bs_960_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0(lean_object* v_context_966_, lean_object* v_d_967_){
_start:
{
lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_976_; lean_object* v_received_977_; lean_object* v___y_996_; lean_object* v_a_999_; 
if (lean_obj_tag(v_d_967_) == 7)
{
lean_object* v_items_1023_; size_t v_sz_1024_; size_t v___x_1025_; lean_object* v___x_1026_; 
v_items_1023_ = lean_ctor_get(v_d_967_, 0);
v_sz_1024_ = lean_array_size(v_items_1023_);
v___x_1025_ = ((size_t)0ULL);
lean_inc_ref(v_items_1023_);
v___x_1026_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1(v_sz_1024_, v___x_1025_, v_items_1023_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; uint8_t v___x_1031_; 
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
lean_inc(v_a_1027_);
lean_dec_ref_known(v___x_1026_, 1);
v___x_1028_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__1));
v___x_1029_ = lean_string_utf8_byte_size(v_a_1027_);
v___x_1030_ = lean_unsigned_to_nat(0u);
v___x_1031_ = lean_nat_dec_eq(v___x_1029_, v___x_1030_);
if (v___x_1031_ == 0)
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1033_ = lean_string_append(v___x_1032_, v_a_1027_);
lean_dec(v_a_1027_);
v___x_1034_ = lean_string_append(v___x_1028_, v___x_1033_);
lean_dec_ref(v___x_1033_);
v_a_999_ = v___x_1034_;
goto v___jp_998_;
}
else
{
lean_dec(v_a_1027_);
v_a_999_ = v___x_1028_;
goto v___jp_998_;
}
}
else
{
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1035_; 
v_a_1035_ = lean_ctor_get(v___x_1026_, 0);
lean_inc(v_a_1035_);
lean_dec_ref_known(v___x_1026_, 1);
v_a_999_ = v_a_1035_;
goto v___jp_998_;
}
else
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1043_; 
lean_dec_ref_known(v_d_967_, 1);
v_a_1036_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1038_ = v___x_1026_;
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_1026_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1041_; 
if (v_isShared_1039_ == 0)
{
lean_ctor_set_tag(v___x_1038_, 0);
v___x_1041_ = v___x_1038_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_a_1036_);
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
else
{
lean_object* v___x_1044_; 
v___x_1044_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v_a_999_ = v___x_1044_;
goto v___jp_998_;
}
v___jp_969_:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_972_ = lean_string_append(v___y_970_, v___y_971_);
lean_dec_ref(v___y_971_);
v___x_973_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
v___x_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_974_, 0, v___x_973_);
return v___x_974_;
}
v___jp_975_:
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; uint8_t v___x_989_; 
v___x_978_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_979_ = lean_string_append(v___x_978_, v_context_966_);
v___x_980_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_981_ = lean_string_append(v___x_979_, v___x_980_);
v___x_982_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__0));
v___x_983_ = lean_string_append(v___x_981_, v___x_982_);
v___x_984_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_985_ = lean_string_append(v___x_983_, v___x_984_);
v___x_986_ = lean_string_append(v___x_985_, v_received_977_);
lean_dec_ref(v_received_977_);
v___x_987_ = lean_string_utf8_byte_size(v___y_976_);
v___x_988_ = lean_unsigned_to_nat(0u);
v___x_989_ = lean_nat_dec_eq(v___x_987_, v___x_988_);
if (v___x_989_ == 0)
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_990_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1));
v___x_991_ = lean_string_append(v___x_990_, v___y_976_);
lean_dec_ref(v___y_976_);
v___x_992_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2));
v___x_993_ = lean_string_append(v___x_991_, v___x_992_);
v___y_970_ = v___x_986_;
v___y_971_ = v___x_993_;
goto v___jp_969_;
}
else
{
lean_object* v___x_994_; 
lean_dec_ref(v___y_976_);
v___x_994_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___y_970_ = v___x_986_;
v___y_971_ = v___x_994_;
goto v___jp_969_;
}
}
v___jp_995_:
{
lean_object* v___x_997_; 
v___x_997_ = l_Lasm_JS_Data_describe(v_d_967_);
v___y_976_ = v___y_996_;
v_received_977_ = v___x_997_;
goto v___jp_975_;
}
v___jp_998_:
{
if (lean_obj_tag(v_d_967_) == 9)
{
lean_object* v_value_1000_; lean_object* v_description_1001_; lean_object* v___x_1002_; uint8_t v___x_1003_; 
v_value_1000_ = lean_ctor_get(v_d_967_, 0);
v_description_1001_ = lean_ctor_get(v_d_967_, 1);
v___x_1002_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1003_ = lean_string_dec_eq(v_description_1001_, v___x_1002_);
if (v___x_1003_ == 0)
{
v___y_996_ = v_a_999_;
goto v___jp_995_;
}
else
{
lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1020_; 
lean_inc(v_value_1000_);
v_isSharedCheck_1020_ = !lean_is_exclusive(v_d_967_);
if (v_isSharedCheck_1020_ == 0)
{
lean_object* v_unused_1021_; lean_object* v_unused_1022_; 
v_unused_1021_ = lean_ctor_get(v_d_967_, 1);
lean_dec(v_unused_1021_);
v_unused_1022_ = lean_ctor_get(v_d_967_, 0);
lean_dec(v_unused_1022_);
v___x_1005_ = v_d_967_;
v_isShared_1006_ = v_isSharedCheck_1020_;
goto v_resetjp_1004_;
}
else
{
lean_dec(v_d_967_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1020_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
uint32_t v___x_1007_; uint64_t v___x_1008_; lean_object* v___x_1010_; 
v___x_1007_ = 206;
v___x_1008_ = 0ULL;
lean_inc(v_value_1000_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 1, v___x_1002_);
v___x_1010_ = v___x_1005_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_value_1000_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v___x_1002_);
v___x_1010_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
uint32_t v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = lasm_js_value_handle(v_value_1000_);
lean_dec(v_value_1000_);
v___x_1012_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1007_, v___x_1008_, v___x_1010_, v___x_1011_);
lean_dec_ref(v___x_1010_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; uint8_t v___x_1014_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_a_1013_);
lean_dec_ref_known(v___x_1012_, 1);
v___x_1014_ = lean_string_validate_utf8(v_a_1013_);
if (v___x_1014_ == 0)
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
lean_dec(v_a_1013_);
v___x_1015_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_1016_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1015_);
v___y_976_ = v_a_999_;
v_received_977_ = v___x_1016_;
goto v___jp_975_;
}
else
{
lean_object* v___x_1017_; 
v___x_1017_ = lean_string_from_utf8_unchecked(v_a_1013_);
v___y_976_ = v_a_999_;
v_received_977_ = v___x_1017_;
goto v___jp_975_;
}
}
else
{
lean_object* v___x_1018_; 
lean_dec_ref_known(v___x_1012_, 1);
v___x_1018_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v___y_976_ = v_a_999_;
v_received_977_ = v___x_1018_;
goto v___jp_975_;
}
}
}
}
}
else
{
v___y_996_ = v_a_999_;
goto v___jp_995_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___boxed(lean_object* v_context_1045_, lean_object* v_d_1046_, lean_object* v_a_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0(v_context_1045_, v_d_1046_);
lean_dec_ref(v_context_1045_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0(lean_object* v_b_1049_, lean_object* v_args_1050_, uint8_t v_await_1051_){
_start:
{
uint64_t v___y_1054_; uint64_t v___y_1055_; uint64_t v___x_1098_; uint64_t v___y_1100_; 
v___x_1098_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_1051_ == 0)
{
uint64_t v___x_1105_; 
v___x_1105_ = 0ULL;
v___y_1100_ = v___x_1105_;
goto v___jp_1099_;
}
else
{
uint64_t v___x_1106_; 
v___x_1106_ = 2ULL;
v___y_1100_ = v___x_1106_;
goto v___jp_1099_;
}
v___jp_1053_:
{
uint64_t v_flags_1056_; uint32_t v___x_1057_; lean_object* v___x_1058_; uint32_t v___x_1059_; lean_object* v___x_1060_; 
v_flags_1056_ = lean_uint64_lor(v___y_1054_, v___y_1055_);
v___x_1057_ = 214;
v___x_1058_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1049_, v_args_1050_);
v___x_1059_ = 0;
v___x_1060_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1057_, v_flags_1056_, v___x_1058_, v___x_1059_);
lean_dec(v___x_1058_);
if (lean_obj_tag(v___x_1060_) == 0)
{
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v_a_1061_; lean_object* v___x_1062_; 
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
lean_inc(v_a_1061_);
lean_dec_ref_known(v___x_1060_, 1);
v___x_1062_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1061_);
lean_dec(v_a_1061_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v_a_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_a_1063_);
lean_dec_ref_known(v___x_1062_, 1);
v___x_1064_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1049_);
v___x_1065_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0(v___x_1064_, v_a_1063_);
lean_dec_ref(v___x_1064_);
return v___x_1065_;
}
else
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
v_a_1066_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1062_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1062_);
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
else
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
v_a_1074_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_1060_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1060_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
lean_ctor_set_tag(v___x_1076_, 1);
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1097_; 
v_a_1082_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1084_ = v___x_1060_;
v_isShared_1085_ = v_isSharedCheck_1097_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_1060_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1097_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1095_; 
v___x_1086_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1087_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1049_);
v___x_1088_ = lean_string_append(v___x_1086_, v___x_1087_);
lean_dec_ref(v___x_1087_);
v___x_1089_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1090_ = lean_string_append(v___x_1088_, v___x_1089_);
v___x_1091_ = lean_io_error_to_string(v_a_1082_);
v___x_1092_ = lean_string_append(v___x_1090_, v___x_1091_);
lean_dec_ref(v___x_1091_);
v___x_1093_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 0, v___x_1093_);
v___x_1095_ = v___x_1084_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1093_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
v___jp_1099_:
{
uint8_t v_construct_1101_; uint64_t v___x_1102_; 
v_construct_1101_ = lean_ctor_get_uint8(v_b_1049_, sizeof(void*)*4);
v___x_1102_ = lean_uint64_lor(v___x_1098_, v___y_1100_);
if (v_construct_1101_ == 0)
{
uint64_t v___x_1103_; 
v___x_1103_ = 0ULL;
v___y_1054_ = v___x_1102_;
v___y_1055_ = v___x_1103_;
goto v___jp_1053_;
}
else
{
uint64_t v___x_1104_; 
v___x_1104_ = 4ULL;
v___y_1054_ = v___x_1102_;
v___y_1055_ = v___x_1104_;
goto v___jp_1053_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0___boxed(lean_object* v_b_1107_, lean_object* v_args_1108_, lean_object* v_await_1109_, lean_object* v_a_1110_){
_start:
{
uint8_t v_await_boxed_1111_; lean_object* v_res_1112_; 
v_await_boxed_1111_ = lean_unbox(v_await_1109_);
v_res_1112_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0(v_b_1107_, v_args_1108_, v_await_boxed_1111_);
lean_dec_ref(v_b_1107_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_loadavg(){
_start:
{
uint8_t v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1122_ = 0;
v___x_1123_ = ((lean_object*)(l_Lasm_JS_Node_os_loadavg___closed__2));
v___x_1124_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1125_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0(v___x_1123_, v___x_1124_, v___x_1122_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_loadavg___boxed(lean_object* v_a_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lasm_JS_Node_os_loadavg();
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_machine(){
_start:
{
uint8_t v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1137_ = 0;
v___x_1138_ = ((lean_object*)(l_Lasm_JS_Node_os_machine___closed__2));
v___x_1139_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1140_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1138_, v___x_1139_, v___x_1137_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_machine___boxed(lean_object* v_a_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lasm_JS_Node_os_machine();
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(lean_object* v_b_1143_, lean_object* v_args_1144_, uint8_t v_await_1145_){
_start:
{
uint64_t v___y_1148_; uint64_t v___y_1149_; uint64_t v___x_1181_; uint64_t v___y_1183_; 
v___x_1181_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_1145_ == 0)
{
uint64_t v___x_1188_; 
v___x_1188_ = 0ULL;
v___y_1183_ = v___x_1188_;
goto v___jp_1182_;
}
else
{
uint64_t v___x_1189_; 
v___x_1189_ = 2ULL;
v___y_1183_ = v___x_1189_;
goto v___jp_1182_;
}
v___jp_1147_:
{
uint64_t v_flags_1150_; uint32_t v___x_1151_; lean_object* v___x_1152_; uint32_t v___x_1153_; lean_object* v___x_1154_; 
v_flags_1150_ = lean_uint64_lor(v___y_1148_, v___y_1149_);
v___x_1151_ = 214;
v___x_1152_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1143_, v_args_1144_);
v___x_1153_ = 0;
v___x_1154_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1151_, v_flags_1150_, v___x_1152_, v___x_1153_);
lean_dec(v___x_1152_);
if (lean_obj_tag(v___x_1154_) == 0)
{
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v_a_1155_; lean_object* v___x_1156_; 
v_a_1155_ = lean_ctor_get(v___x_1154_, 0);
lean_inc(v_a_1155_);
lean_dec_ref_known(v___x_1154_, 1);
v___x_1156_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1155_);
lean_dec(v_a_1155_);
return v___x_1156_;
}
else
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
v_a_1157_ = lean_ctor_get(v___x_1154_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v___x_1154_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1154_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set_tag(v___x_1159_, 1);
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_a_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
}
else
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1180_; 
v_a_1165_ = lean_ctor_get(v___x_1154_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1167_ = v___x_1154_;
v_isShared_1168_ = v_isSharedCheck_1180_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___x_1154_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1180_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1178_; 
v___x_1169_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1170_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1143_);
v___x_1171_ = lean_string_append(v___x_1169_, v___x_1170_);
lean_dec_ref(v___x_1170_);
v___x_1172_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1173_ = lean_string_append(v___x_1171_, v___x_1172_);
v___x_1174_ = lean_io_error_to_string(v_a_1165_);
v___x_1175_ = lean_string_append(v___x_1173_, v___x_1174_);
lean_dec_ref(v___x_1174_);
v___x_1176_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1176_);
v___x_1178_ = v___x_1167_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1176_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
}
v___jp_1182_:
{
uint8_t v_construct_1184_; uint64_t v___x_1185_; 
v_construct_1184_ = lean_ctor_get_uint8(v_b_1143_, sizeof(void*)*4);
v___x_1185_ = lean_uint64_lor(v___x_1181_, v___y_1183_);
if (v_construct_1184_ == 0)
{
uint64_t v___x_1186_; 
v___x_1186_ = 0ULL;
v___y_1148_ = v___x_1185_;
v___y_1149_ = v___x_1186_;
goto v___jp_1147_;
}
else
{
uint64_t v___x_1187_; 
v___x_1187_ = 4ULL;
v___y_1148_ = v___x_1185_;
v___y_1149_ = v___x_1187_;
goto v___jp_1147_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0___boxed(lean_object* v_b_1190_, lean_object* v_args_1191_, lean_object* v_await_1192_, lean_object* v_a_1193_){
_start:
{
uint8_t v_await_boxed_1194_; lean_object* v_res_1195_; 
v_await_boxed_1194_ = lean_unbox(v_await_1192_);
v_res_1195_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(v_b_1190_, v_args_1191_, v_await_boxed_1194_);
lean_dec_ref(v_b_1190_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_networkInterfaces(){
_start:
{
uint8_t v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1205_ = 0;
v___x_1206_ = ((lean_object*)(l_Lasm_JS_Node_os_networkInterfaces___closed__2));
v___x_1207_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1208_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(v___x_1206_, v___x_1207_, v___x_1205_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_networkInterfaces___boxed(lean_object* v_a_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l_Lasm_JS_Node_os_networkInterfaces();
return v_res_1210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_platform(){
_start:
{
uint8_t v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1220_ = 0;
v___x_1221_ = ((lean_object*)(l_Lasm_JS_Node_os_platform___closed__2));
v___x_1222_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1223_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1221_, v___x_1222_, v___x_1220_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_platform___boxed(lean_object* v_a_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l_Lasm_JS_Node_os_platform();
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_release(){
_start:
{
uint8_t v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1235_ = 0;
v___x_1236_ = ((lean_object*)(l_Lasm_JS_Node_os_release___closed__2));
v___x_1237_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1238_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1236_, v___x_1237_, v___x_1235_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_release___boxed(lean_object* v_a_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lasm_JS_Node_os_release();
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = lean_box(0);
v___x_1243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg___boxed(lean_object* v_a_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg();
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(lean_object* v_b_1246_, lean_object* v_args_1247_, uint8_t v_await_1248_){
_start:
{
uint64_t v___y_1251_; uint64_t v___y_1252_; uint64_t v___x_1293_; uint64_t v___y_1295_; 
v___x_1293_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_1248_ == 0)
{
uint64_t v___x_1300_; 
v___x_1300_ = 0ULL;
v___y_1295_ = v___x_1300_;
goto v___jp_1294_;
}
else
{
uint64_t v___x_1301_; 
v___x_1301_ = 2ULL;
v___y_1295_ = v___x_1301_;
goto v___jp_1294_;
}
v___jp_1250_:
{
uint64_t v_flags_1253_; uint32_t v___x_1254_; lean_object* v___x_1255_; uint32_t v___x_1256_; lean_object* v___x_1257_; 
v_flags_1253_ = lean_uint64_lor(v___y_1251_, v___y_1252_);
v___x_1254_ = 214;
v___x_1255_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1246_, v_args_1247_);
v___x_1256_ = 0;
v___x_1257_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1254_, v_flags_1253_, v___x_1255_, v___x_1256_);
lean_dec(v___x_1255_);
if (lean_obj_tag(v___x_1257_) == 0)
{
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v___x_1259_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1258_);
lean_dec_ref_known(v___x_1257_, 1);
v___x_1259_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1258_);
lean_dec(v_a_1258_);
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_object* v___x_1260_; 
lean_dec_ref_known(v___x_1259_, 1);
v___x_1260_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg();
return v___x_1260_;
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
v_a_1261_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1259_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1259_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
else
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1276_; 
v_a_1269_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1271_ = v___x_1257_;
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1257_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
lean_ctor_set_tag(v___x_1271_, 1);
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v_a_1269_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
}
else
{
lean_object* v_a_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1292_; 
v_a_1277_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1279_ = v___x_1257_;
v_isShared_1280_ = v_isSharedCheck_1292_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_a_1277_);
lean_dec(v___x_1257_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1292_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1290_; 
v___x_1281_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1282_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1246_);
v___x_1283_ = lean_string_append(v___x_1281_, v___x_1282_);
lean_dec_ref(v___x_1282_);
v___x_1284_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1285_ = lean_string_append(v___x_1283_, v___x_1284_);
v___x_1286_ = lean_io_error_to_string(v_a_1277_);
v___x_1287_ = lean_string_append(v___x_1285_, v___x_1286_);
lean_dec_ref(v___x_1286_);
v___x_1288_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 0, v___x_1288_);
v___x_1290_ = v___x_1279_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v___x_1288_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
}
}
v___jp_1294_:
{
uint8_t v_construct_1296_; uint64_t v___x_1297_; 
v_construct_1296_ = lean_ctor_get_uint8(v_b_1246_, sizeof(void*)*4);
v___x_1297_ = lean_uint64_lor(v___x_1293_, v___y_1295_);
if (v_construct_1296_ == 0)
{
uint64_t v___x_1298_; 
v___x_1298_ = 0ULL;
v___y_1251_ = v___x_1297_;
v___y_1252_ = v___x_1298_;
goto v___jp_1250_;
}
else
{
uint64_t v___x_1299_; 
v___x_1299_ = 4ULL;
v___y_1251_ = v___x_1297_;
v___y_1252_ = v___x_1299_;
goto v___jp_1250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0___boxed(lean_object* v_b_1302_, lean_object* v_args_1303_, lean_object* v_await_1304_, lean_object* v_a_1305_){
_start:
{
uint8_t v_await_boxed_1306_; lean_object* v_res_1307_; 
v_await_boxed_1306_ = lean_unbox(v_await_1304_);
v_res_1307_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(v_b_1302_, v_args_1303_, v_await_boxed_1306_);
lean_dec_ref(v_b_1302_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriority(lean_object* v_priority_1316_){
_start:
{
uint8_t v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___y_1322_; lean_object* v___x_1327_; lean_object* v___x_1328_; uint8_t v___x_1329_; 
v___x_1318_ = 0;
v___x_1319_ = lean_unsigned_to_nat(1u);
v___x_1320_ = ((lean_object*)(l_Lasm_JS_Node_os_setPriority___closed__2));
v___x_1327_ = lean_nat_abs(v_priority_1316_);
v___x_1328_ = lean_cstr_to_nat("9007199254740991");
v___x_1329_ = lean_nat_dec_le(v___x_1327_, v___x_1328_);
lean_dec(v___x_1327_);
if (v___x_1329_ == 0)
{
lean_object* v___x_1330_; 
v___x_1330_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_priority_1316_);
v___y_1322_ = v___x_1330_;
goto v___jp_1321_;
}
else
{
double v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = l_Float_ofInt(v_priority_1316_);
lean_dec(v_priority_1316_);
v___x_1332_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1332_, 0, v___x_1331_);
v___y_1322_ = v___x_1332_;
goto v___jp_1321_;
}
v___jp_1321_:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1323_ = lean_mk_empty_array_with_capacity(v___x_1319_);
v___x_1324_ = lean_array_push(v___x_1323_, v___y_1322_);
v___x_1325_ = l_Lasm_JS_Web_Support_args(v___x_1324_);
v___x_1326_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(v___x_1320_, v___x_1325_, v___x_1318_);
return v___x_1326_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriority___boxed(lean_object* v_priority_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lasm_JS_Node_os_setPriority(v_priority_1333_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0(lean_object* v_context_1336_, lean_object* v_d_1337_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg();
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___boxed(lean_object* v_context_1340_, lean_object* v_d_1341_, lean_object* v_a_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0(v_context_1340_, v_d_1341_);
lean_dec(v_d_1341_);
lean_dec_ref(v_context_1340_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriorityWithPid(lean_object* v_pid_1351_, lean_object* v_priority_1352_){
_start:
{
uint8_t v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___y_1358_; lean_object* v___y_1359_; lean_object* v___y_1366_; lean_object* v___x_1373_; lean_object* v___x_1374_; uint8_t v___x_1375_; 
v___x_1354_ = 0;
v___x_1355_ = lean_unsigned_to_nat(2u);
v___x_1356_ = ((lean_object*)(l_Lasm_JS_Node_os_setPriorityWithPid___closed__1));
v___x_1373_ = lean_nat_abs(v_pid_1351_);
v___x_1374_ = lean_cstr_to_nat("9007199254740991");
v___x_1375_ = lean_nat_dec_le(v___x_1373_, v___x_1374_);
lean_dec(v___x_1373_);
if (v___x_1375_ == 0)
{
lean_object* v___x_1376_; 
v___x_1376_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1376_, 0, v_pid_1351_);
v___y_1366_ = v___x_1376_;
goto v___jp_1365_;
}
else
{
double v___x_1377_; lean_object* v___x_1378_; 
v___x_1377_ = l_Float_ofInt(v_pid_1351_);
lean_dec(v_pid_1351_);
v___x_1378_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1378_, 0, v___x_1377_);
v___y_1366_ = v___x_1378_;
goto v___jp_1365_;
}
v___jp_1357_:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1360_ = lean_mk_empty_array_with_capacity(v___x_1355_);
v___x_1361_ = lean_array_push(v___x_1360_, v___y_1358_);
v___x_1362_ = lean_array_push(v___x_1361_, v___y_1359_);
v___x_1363_ = l_Lasm_JS_Web_Support_args(v___x_1362_);
v___x_1364_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(v___x_1356_, v___x_1363_, v___x_1354_);
return v___x_1364_;
}
v___jp_1365_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; uint8_t v___x_1369_; 
v___x_1367_ = lean_nat_abs(v_priority_1352_);
v___x_1368_ = lean_cstr_to_nat("9007199254740991");
v___x_1369_ = lean_nat_dec_le(v___x_1367_, v___x_1368_);
lean_dec(v___x_1367_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; 
v___x_1370_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1370_, 0, v_priority_1352_);
v___y_1358_ = v___y_1366_;
v___y_1359_ = v___x_1370_;
goto v___jp_1357_;
}
else
{
double v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = l_Float_ofInt(v_priority_1352_);
lean_dec(v_priority_1352_);
v___x_1372_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1372_, 0, v___x_1371_);
v___y_1358_ = v___y_1366_;
v___y_1359_ = v___x_1372_;
goto v___jp_1357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriorityWithPid___boxed(lean_object* v_pid_1379_, lean_object* v_priority_1380_, lean_object* v_a_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lasm_JS_Node_os_setPriorityWithPid(v_pid_1379_, v_priority_1380_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_tmpdir(){
_start:
{
uint8_t v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1392_ = 0;
v___x_1393_ = ((lean_object*)(l_Lasm_JS_Node_os_tmpdir___closed__2));
v___x_1394_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1395_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1393_, v___x_1394_, v___x_1392_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_tmpdir___boxed(lean_object* v_a_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Lasm_JS_Node_os_tmpdir();
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_totalmem(){
_start:
{
uint8_t v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1407_ = 0;
v___x_1408_ = ((lean_object*)(l_Lasm_JS_Node_os_totalmem___closed__2));
v___x_1409_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1410_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_1408_, v___x_1409_, v___x_1407_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_totalmem___boxed(lean_object* v_a_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l_Lasm_JS_Node_os_totalmem();
return v_res_1412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_type(){
_start:
{
uint8_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1422_ = 0;
v___x_1423_ = ((lean_object*)(l_Lasm_JS_Node_os_type___closed__2));
v___x_1424_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1425_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1423_, v___x_1424_, v___x_1422_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_type___boxed(lean_object* v_a_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l_Lasm_JS_Node_os_type();
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0(lean_object* v_context_1429_, lean_object* v_d_1430_){
_start:
{
lean_object* v___y_1433_; lean_object* v___y_1434_; 
if (lean_obj_tag(v_d_1430_) == 3)
{
double v_n_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v_n_1438_ = lean_ctor_get_float(v_d_1430_, 0);
lean_dec_ref_known(v_d_1430_, 0);
v___x_1439_ = lean_box_float(v_n_1438_);
v___x_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1439_);
return v___x_1440_;
}
else
{
lean_object* v___x_1441_; lean_object* v_received_1443_; 
v___x_1441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
if (lean_obj_tag(v_d_1430_) == 9)
{
lean_object* v_value_1457_; lean_object* v_description_1458_; uint8_t v___x_1459_; 
v_value_1457_ = lean_ctor_get(v_d_1430_, 0);
v_description_1458_ = lean_ctor_get(v_d_1430_, 1);
v___x_1459_ = lean_string_dec_eq(v_description_1458_, v___x_1441_);
if (v___x_1459_ == 0)
{
goto v___jp_1455_;
}
else
{
uint32_t v___x_1460_; uint64_t v___x_1461_; lean_object* v___x_1462_; uint32_t v___x_1463_; lean_object* v___x_1464_; 
lean_inc_n(v_value_1457_, 2);
lean_dec_ref_known(v_d_1430_, 2);
v___x_1460_ = 206;
v___x_1461_ = 0ULL;
v___x_1462_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1462_, 0, v_value_1457_);
lean_ctor_set(v___x_1462_, 1, v___x_1441_);
v___x_1463_ = lasm_js_value_handle(v_value_1457_);
lean_dec(v_value_1457_);
v___x_1464_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1460_, v___x_1461_, v___x_1462_, v___x_1463_);
lean_dec_ref_known(v___x_1462_, 2);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; uint8_t v___x_1466_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1464_, 1);
v___x_1466_ = lean_string_validate_utf8(v_a_1465_);
if (v___x_1466_ == 0)
{
lean_object* v___x_1467_; lean_object* v___x_1468_; 
lean_dec(v_a_1465_);
v___x_1467_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_1468_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1467_);
v_received_1443_ = v___x_1468_;
goto v___jp_1442_;
}
else
{
lean_object* v___x_1469_; 
v___x_1469_ = lean_string_from_utf8_unchecked(v_a_1465_);
v_received_1443_ = v___x_1469_;
goto v___jp_1442_;
}
}
else
{
lean_object* v___x_1470_; 
lean_dec_ref_known(v___x_1464_, 1);
v___x_1470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v_received_1443_ = v___x_1470_;
goto v___jp_1442_;
}
}
}
else
{
goto v___jp_1455_;
}
v___jp_1442_:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; uint8_t v___x_1453_; 
v___x_1444_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1445_ = lean_string_append(v___x_1444_, v_context_1429_);
v___x_1446_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_1447_ = lean_string_append(v___x_1445_, v___x_1446_);
v___x_1448_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0___closed__0));
v___x_1449_ = lean_string_append(v___x_1447_, v___x_1448_);
v___x_1450_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_1451_ = lean_string_append(v___x_1449_, v___x_1450_);
v___x_1452_ = lean_string_append(v___x_1451_, v_received_1443_);
lean_dec_ref(v_received_1443_);
v___x_1453_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6);
if (v___x_1453_ == 0)
{
lean_object* v___x_1454_; 
v___x_1454_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___y_1433_ = v___x_1452_;
v___y_1434_ = v___x_1454_;
goto v___jp_1432_;
}
else
{
v___y_1433_ = v___x_1452_;
v___y_1434_ = v___x_1441_;
goto v___jp_1432_;
}
}
v___jp_1455_:
{
lean_object* v___x_1456_; 
v___x_1456_ = l_Lasm_JS_Data_describe(v_d_1430_);
v_received_1443_ = v___x_1456_;
goto v___jp_1442_;
}
}
v___jp_1432_:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1435_ = lean_string_append(v___y_1433_, v___y_1434_);
v___x_1436_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1435_);
v___x_1437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
return v___x_1437_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0___boxed(lean_object* v_context_1471_, lean_object* v_d_1472_, lean_object* v_a_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0(v_context_1471_, v_d_1472_);
lean_dec_ref(v_context_1471_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0(lean_object* v_b_1475_, lean_object* v_args_1476_, uint8_t v_await_1477_){
_start:
{
uint64_t v___y_1480_; uint64_t v___y_1481_; uint64_t v___x_1524_; uint64_t v___y_1526_; 
v___x_1524_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_1477_ == 0)
{
uint64_t v___x_1531_; 
v___x_1531_ = 0ULL;
v___y_1526_ = v___x_1531_;
goto v___jp_1525_;
}
else
{
uint64_t v___x_1532_; 
v___x_1532_ = 2ULL;
v___y_1526_ = v___x_1532_;
goto v___jp_1525_;
}
v___jp_1479_:
{
uint64_t v_flags_1482_; uint32_t v___x_1483_; lean_object* v___x_1484_; uint32_t v___x_1485_; lean_object* v___x_1486_; 
v_flags_1482_ = lean_uint64_lor(v___y_1480_, v___y_1481_);
v___x_1483_ = 214;
v___x_1484_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1475_, v_args_1476_);
v___x_1485_ = 0;
v___x_1486_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1483_, v_flags_1482_, v___x_1484_, v___x_1485_);
lean_dec(v___x_1484_);
if (lean_obj_tag(v___x_1486_) == 0)
{
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; lean_object* v___x_1488_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_a_1487_);
lean_dec_ref_known(v___x_1486_, 1);
v___x_1488_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1487_);
lean_dec(v_a_1487_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_a_1489_);
lean_dec_ref_known(v___x_1488_, 1);
v___x_1490_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1475_);
v___x_1491_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0(v___x_1490_, v_a_1489_);
lean_dec_ref(v___x_1490_);
return v___x_1491_;
}
else
{
lean_object* v_a_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1499_; 
v_a_1492_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1494_ = v___x_1488_;
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_a_1492_);
lean_dec(v___x_1488_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1497_; 
if (v_isShared_1495_ == 0)
{
v___x_1497_ = v___x_1494_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_a_1492_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
}
else
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
v_a_1500_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1486_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1486_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1505_; 
if (v_isShared_1503_ == 0)
{
lean_ctor_set_tag(v___x_1502_, 1);
v___x_1505_ = v___x_1502_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v_a_1500_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
else
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1523_; 
v_a_1508_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1510_ = v___x_1486_;
v_isShared_1511_ = v_isSharedCheck_1523_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1486_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1523_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1521_; 
v___x_1512_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1513_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1475_);
v___x_1514_ = lean_string_append(v___x_1512_, v___x_1513_);
lean_dec_ref(v___x_1513_);
v___x_1515_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1516_ = lean_string_append(v___x_1514_, v___x_1515_);
v___x_1517_ = lean_io_error_to_string(v_a_1508_);
v___x_1518_ = lean_string_append(v___x_1516_, v___x_1517_);
lean_dec_ref(v___x_1517_);
v___x_1519_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1518_);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 0, v___x_1519_);
v___x_1521_ = v___x_1510_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v___x_1519_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
v___jp_1525_:
{
uint8_t v_construct_1527_; uint64_t v___x_1528_; 
v_construct_1527_ = lean_ctor_get_uint8(v_b_1475_, sizeof(void*)*4);
v___x_1528_ = lean_uint64_lor(v___x_1524_, v___y_1526_);
if (v_construct_1527_ == 0)
{
uint64_t v___x_1529_; 
v___x_1529_ = 0ULL;
v___y_1480_ = v___x_1528_;
v___y_1481_ = v___x_1529_;
goto v___jp_1479_;
}
else
{
uint64_t v___x_1530_; 
v___x_1530_ = 4ULL;
v___y_1480_ = v___x_1528_;
v___y_1481_ = v___x_1530_;
goto v___jp_1479_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0___boxed(lean_object* v_b_1533_, lean_object* v_args_1534_, lean_object* v_await_1535_, lean_object* v_a_1536_){
_start:
{
uint8_t v_await_boxed_1537_; lean_object* v_res_1538_; 
v_await_boxed_1537_ = lean_unbox(v_await_1535_);
v_res_1538_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0(v_b_1533_, v_args_1534_, v_await_boxed_1537_);
lean_dec_ref(v_b_1533_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_uptime(){
_start:
{
uint8_t v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1548_ = 0;
v___x_1549_ = ((lean_object*)(l_Lasm_JS_Node_os_uptime___closed__2));
v___x_1550_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1551_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0(v___x_1549_, v___x_1550_, v___x_1548_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_uptime___boxed(lean_object* v_a_1552_){
_start:
{
lean_object* v_res_1553_; 
v_res_1553_ = l_Lasm_JS_Node_os_uptime();
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0_spec__0(lean_object* v_x_1554_){
_start:
{
if (lean_obj_tag(v_x_1554_) == 0)
{
lean_object* v___x_1555_; 
v___x_1555_ = lean_box(0);
return v___x_1555_;
}
else
{
lean_object* v_val_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
v_val_1556_ = lean_ctor_get(v_x_1554_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v_x_1554_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v_x_1554_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_val_1556_);
lean_dec(v_x_1554_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
lean_ctor_set_tag(v___x_1558_, 4);
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_val_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0(lean_object* v_x_1564_){
_start:
{
if (lean_obj_tag(v_x_1564_) == 0)
{
lean_object* v___x_1565_; 
v___x_1565_ = lean_box(0);
return v___x_1565_;
}
else
{
lean_object* v_val_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v_val_1566_ = lean_ctor_get(v_x_1564_, 0);
lean_inc(v_val_1566_);
lean_dec_ref_known(v_x_1564_, 1);
v___x_1567_ = ((lean_object*)(l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0___closed__0));
v___x_1568_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0_spec__0(v_val_1566_);
v___x_1569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1567_);
lean_ctor_set(v___x_1569_, 1, v___x_1568_);
v___x_1570_ = lean_unsigned_to_nat(1u);
v___x_1571_ = lean_mk_empty_array_with_capacity(v___x_1570_);
v___x_1572_ = lean_array_push(v___x_1571_, v___x_1569_);
v___x_1573_ = l_Lasm_JS_Web_Support_fields(v___x_1572_);
lean_dec_ref(v___x_1572_);
return v___x_1573_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_userInfo(lean_object* v_options_1582_){
_start:
{
uint8_t v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1584_ = 0;
v___x_1585_ = lean_unsigned_to_nat(1u);
v___x_1586_ = ((lean_object*)(l_Lasm_JS_Node_os_userInfo___closed__2));
v___x_1587_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0(v_options_1582_);
v___x_1588_ = lean_mk_empty_array_with_capacity(v___x_1585_);
v___x_1589_ = lean_array_push(v___x_1588_, v___x_1587_);
v___x_1590_ = l_Lasm_JS_Web_Support_args(v___x_1589_);
v___x_1591_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(v___x_1586_, v___x_1590_, v___x_1584_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_userInfo___boxed(lean_object* v_options_1592_, lean_object* v_a_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = l_Lasm_JS_Node_os_userInfo(v_options_1592_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_version(){
_start:
{
uint8_t v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1604_ = 0;
v___x_1605_ = ((lean_object*)(l_Lasm_JS_Node_os_version___closed__2));
v___x_1606_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1607_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1605_, v___x_1606_, v___x_1604_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_version___boxed(lean_object* v_a_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l_Lasm_JS_Node_os_version();
return v_res_1609_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Os(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
