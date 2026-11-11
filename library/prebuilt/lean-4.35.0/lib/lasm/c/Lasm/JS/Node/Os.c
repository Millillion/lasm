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
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1(lean_object* v_module_181_, lean_object* v_o_182_, lean_object* v_a_183_){
_start:
{
if (lean_obj_tag(v_a_183_) == 0)
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
lean_dec(v_o_182_);
v___x_185_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___closed__0));
v___x_186_ = lean_string_append(v___x_185_, v_module_181_);
v___x_187_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
v___x_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
return v___x_188_;
}
else
{
lean_object* v_tail_189_; 
v_tail_189_ = lean_ctor_get(v_a_183_, 1);
if (lean_obj_tag(v_tail_189_) == 0)
{
lean_object* v_head_190_; lean_object* v___x_191_; 
v_head_190_ = lean_ctor_get(v_a_183_, 0);
lean_inc(v_head_190_);
lean_dec_ref_known(v_a_183_, 2);
v___x_191_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2(v_o_182_, v_head_190_);
return v___x_191_;
}
else
{
lean_object* v_head_192_; lean_object* v___x_193_; 
lean_inc(v_tail_189_);
v_head_192_ = lean_ctor_get(v_a_183_, 0);
lean_inc(v_head_192_);
lean_dec_ref_known(v_a_183_, 2);
v___x_193_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_182_, v_head_192_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_a_194_);
lean_dec_ref_known(v___x_193_, 1);
v_o_182_ = v_a_194_;
v_a_183_ = v_tail_189_;
goto _start;
}
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
lean_dec(v_tail_189_);
v_a_196_ = lean_ctor_get(v___x_193_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_193_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_193_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___boxed(lean_object* v_module_204_, lean_object* v_o_205_, lean_object* v_a_206_, lean_object* v_a_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1(v_module_204_, v_o_205_, v_a_206_);
lean_dec_ref(v_module_204_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(lean_object* v_module_209_, lean_object* v_path_210_){
_start:
{
lean_object* v___x_212_; 
lean_inc_ref(v_module_209_);
v___x_212_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0(v_module_209_);
if (lean_obj_tag(v___x_212_) == 0)
{
lean_object* v_a_213_; lean_object* v___x_214_; 
v_a_213_ = lean_ctor_get(v___x_212_, 0);
lean_inc(v_a_213_);
lean_dec_ref_known(v___x_212_, 1);
v___x_214_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1(v_module_209_, v_a_213_, v_path_210_);
lean_dec_ref(v_module_209_);
return v___x_214_;
}
else
{
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
lean_dec(v_path_210_);
lean_dec_ref(v_module_209_);
v_a_215_ = lean_ctor_get(v___x_212_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_212_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_212_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_215_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0___boxed(lean_object* v_module_223_, lean_object* v_path_224_, lean_object* v_a_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(v_module_223_, v_path_224_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_EOL(){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_233_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__0));
v___x_234_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__2));
v___x_235_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(v___x_233_, v___x_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_EOL___boxed(lean_object* v_a_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lasm_JS_Node_os_EOL();
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_bytes_238_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_238_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_248_; 
v_a_241_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_248_ == 0)
{
v___x_243_ = v___x_240_;
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___x_240_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_246_; 
if (v_isShared_244_ == 0)
{
v___x_246_ = v___x_243_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_a_241_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
else
{
return v___x_240_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_bytes_249_, lean_object* v_a_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(v_bytes_249_);
lean_dec_ref(v_bytes_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1(lean_object* v_o_252_, lean_object* v_key_253_){
_start:
{
lean_object* v_k_255_; lean_object* v___x_256_; 
v_k_255_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_255_, 0, v_key_253_);
v___x_256_ = l_Lasm_JS_Wire_encodeIO(v_k_255_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; uint32_t v___x_258_; uint32_t v___x_259_; uint64_t v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_a_257_);
lean_dec_ref_known(v___x_256_, 1);
v___x_258_ = 203;
v___x_259_ = lasm_js_value_handle(v_o_252_);
v___x_260_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
v___x_261_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_262_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_262_, 0, v_o_252_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = lean_unsigned_to_nat(2u);
v___x_264_ = lean_mk_empty_array_with_capacity(v___x_263_);
v___x_265_ = lean_array_push(v___x_264_, v_k_255_);
v___x_266_ = lean_array_push(v___x_265_, v___x_262_);
v___x_267_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
v___x_268_ = lasm_js_call(v___x_258_, v___x_259_, v___x_260_, v_a_257_, v___x_267_);
lean_dec_ref_known(v___x_267_, 1);
lean_dec(v_a_257_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; lean_object* v___x_270_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_a_269_);
lean_dec_ref_known(v___x_268_, 1);
v___x_270_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(v_a_269_);
lean_dec(v_a_269_);
return v___x_270_;
}
else
{
lean_object* v_a_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_278_; 
v_a_271_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_278_ == 0)
{
v___x_273_ = v___x_268_;
v_isShared_274_ = v_isSharedCheck_278_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_a_271_);
lean_dec(v___x_268_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_278_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_276_; 
if (v_isShared_274_ == 0)
{
v___x_276_ = v___x_273_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_a_271_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec_ref_known(v_k_255_, 1);
lean_dec(v_o_252_);
v_a_279_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_256_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_256_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1___boxed(lean_object* v_o_287_, lean_object* v_key_288_, lean_object* v_a_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1(v_o_287_, v_key_288_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0(lean_object* v_module_291_, lean_object* v_o_292_, lean_object* v_a_293_){
_start:
{
if (lean_obj_tag(v_a_293_) == 0)
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
lean_dec(v_o_292_);
v___x_295_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___closed__0));
v___x_296_ = lean_string_append(v___x_295_, v_module_291_);
v___x_297_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
v___x_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
else
{
lean_object* v_tail_299_; 
v_tail_299_ = lean_ctor_get(v_a_293_, 1);
if (lean_obj_tag(v_tail_299_) == 0)
{
lean_object* v_head_300_; lean_object* v___x_301_; 
v_head_300_ = lean_ctor_get(v_a_293_, 0);
lean_inc(v_head_300_);
lean_dec_ref_known(v_a_293_, 2);
v___x_301_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1(v_o_292_, v_head_300_);
return v___x_301_;
}
else
{
lean_object* v_head_302_; lean_object* v___x_303_; 
lean_inc(v_tail_299_);
v_head_302_ = lean_ctor_get(v_a_293_, 0);
lean_inc(v_head_302_);
lean_dec_ref_known(v_a_293_, 2);
v___x_303_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_292_, v_head_302_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; 
v_a_304_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_a_304_);
lean_dec_ref_known(v___x_303_, 1);
v_o_292_ = v_a_304_;
v_a_293_ = v_tail_299_;
goto _start;
}
else
{
lean_object* v_a_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_313_; 
lean_dec(v_tail_299_);
v_a_306_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_313_ == 0)
{
v___x_308_ = v___x_303_;
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_a_306_);
lean_dec(v___x_303_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_311_; 
if (v_isShared_309_ == 0)
{
v___x_311_ = v___x_308_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_a_306_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0___boxed(lean_object* v_module_314_, lean_object* v_o_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0(v_module_314_, v_o_315_, v_a_316_);
lean_dec_ref(v_module_314_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0(lean_object* v_module_319_, lean_object* v_path_320_){
_start:
{
lean_object* v___x_322_; 
lean_inc_ref(v_module_319_);
v___x_322_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0(v_module_319_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v_a_323_; lean_object* v___x_324_; 
v_a_323_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v___x_322_, 1);
v___x_324_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0(v_module_319_, v_a_323_, v_path_320_);
lean_dec_ref(v_module_319_);
return v___x_324_;
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
lean_dec(v_path_320_);
lean_dec_ref(v_module_319_);
v_a_325_ = lean_ctor_get(v___x_322_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_322_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_322_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_322_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0___boxed(lean_object* v_module_333_, lean_object* v_path_334_, lean_object* v_a_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0(v_module_333_, v_path_334_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_constants(){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__0));
v___x_343_ = ((lean_object*)(l_Lasm_JS_Node_os_constants___closed__1));
v___x_344_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0(v___x_342_, v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_constants___boxed(lean_object* v_a_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lasm_JS_Node_os_constants();
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_d_347_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v_d_347_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_d_350_, lean_object* v_a_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_d_350_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_353_, lean_object* v_d_354_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_356_, 0, v_d_354_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_357_, lean_object* v_d_358_, lean_object* v_a_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_357_, v_d_358_);
lean_dec_ref(v_context_357_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_361_, lean_object* v_bytes_362_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(v_bytes_362_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_365_, lean_object* v_bytes_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2(v_context_365_, v_bytes_366_);
lean_dec_ref(v_bytes_366_);
lean_dec_ref(v_context_365_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_devNull(){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_374_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__0));
v___x_375_ = ((lean_object*)(l_Lasm_JS_Node_os_devNull___closed__1));
v___x_376_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(v___x_374_, v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_devNull___boxed(lean_object* v_a_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lasm_JS_Node_os_devNull();
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0(lean_object* v_context_383_, lean_object* v_d_384_){
_start:
{
lean_object* v___y_387_; lean_object* v___y_388_; lean_object* v___y_393_; lean_object* v_received_394_; lean_object* v___y_413_; lean_object* v_a_416_; 
switch(lean_obj_tag(v_d_384_))
{
case 3:
{
double v_n_440_; lean_object* v___x_441_; 
v_n_440_ = lean_ctor_get_float(v_d_384_, 0);
v___x_441_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_440_);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v___x_442_; 
v___x_442_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__3));
v_a_416_ = v___x_442_;
goto v___jp_415_;
}
else
{
lean_object* v_val_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
lean_dec_ref_known(v_d_384_, 0);
v_val_443_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_441_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_val_443_);
lean_dec(v___x_441_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
lean_ctor_set_tag(v___x_445_, 0);
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_val_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
case 5:
{
lean_object* v_i_451_; lean_object* v___x_452_; 
v_i_451_ = lean_ctor_get(v_d_384_, 0);
lean_inc(v_i_451_);
lean_dec_ref_known(v_d_384_, 1);
v___x_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_452_, 0, v_i_451_);
return v___x_452_;
}
default: 
{
lean_object* v___x_453_; 
v___x_453_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v_a_416_ = v___x_453_;
goto v___jp_415_;
}
}
v___jp_386_:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_389_ = lean_string_append(v___y_387_, v___y_388_);
lean_dec_ref(v___y_388_);
v___x_390_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
v___x_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
return v___x_391_;
}
v___jp_392_:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_395_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_396_ = lean_string_append(v___x_395_, v_context_383_);
v___x_397_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_398_ = lean_string_append(v___x_396_, v___x_397_);
v___x_399_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__0));
v___x_400_ = lean_string_append(v___x_398_, v___x_399_);
v___x_401_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_402_ = lean_string_append(v___x_400_, v___x_401_);
v___x_403_ = lean_string_append(v___x_402_, v_received_394_);
lean_dec_ref(v_received_394_);
v___x_404_ = lean_string_utf8_byte_size(v___y_393_);
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_nat_dec_eq(v___x_404_, v___x_405_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_407_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1));
v___x_408_ = lean_string_append(v___x_407_, v___y_393_);
v___x_409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2));
v___x_410_ = lean_string_append(v___x_408_, v___x_409_);
v___y_387_ = v___x_403_;
v___y_388_ = v___x_410_;
goto v___jp_386_;
}
else
{
lean_object* v___x_411_; 
v___x_411_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___y_387_ = v___x_403_;
v___y_388_ = v___x_411_;
goto v___jp_386_;
}
}
v___jp_412_:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lasm_JS_Data_describe(v_d_384_);
v___y_393_ = v___y_413_;
v_received_394_ = v___x_414_;
goto v___jp_392_;
}
v___jp_415_:
{
if (lean_obj_tag(v_d_384_) == 9)
{
lean_object* v_value_417_; lean_object* v_description_418_; lean_object* v___x_419_; uint8_t v___x_420_; 
v_value_417_ = lean_ctor_get(v_d_384_, 0);
v_description_418_ = lean_ctor_get(v_d_384_, 1);
v___x_419_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_420_ = lean_string_dec_eq(v_description_418_, v___x_419_);
if (v___x_420_ == 0)
{
v___y_413_ = v_a_416_;
goto v___jp_412_;
}
else
{
lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_437_; 
lean_inc(v_value_417_);
v_isSharedCheck_437_ = !lean_is_exclusive(v_d_384_);
if (v_isSharedCheck_437_ == 0)
{
lean_object* v_unused_438_; lean_object* v_unused_439_; 
v_unused_438_ = lean_ctor_get(v_d_384_, 1);
lean_dec(v_unused_438_);
v_unused_439_ = lean_ctor_get(v_d_384_, 0);
lean_dec(v_unused_439_);
v___x_422_ = v_d_384_;
v_isShared_423_ = v_isSharedCheck_437_;
goto v_resetjp_421_;
}
else
{
lean_dec(v_d_384_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_437_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
uint32_t v___x_424_; uint64_t v___x_425_; lean_object* v___x_427_; 
v___x_424_ = 206;
v___x_425_ = 0ULL;
lean_inc(v_value_417_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 1, v___x_419_);
v___x_427_ = v___x_422_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_value_417_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v___x_419_);
v___x_427_ = v_reuseFailAlloc_436_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
uint32_t v___x_428_; lean_object* v___x_429_; 
v___x_428_ = lasm_js_value_handle(v_value_417_);
lean_dec(v_value_417_);
v___x_429_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_424_, v___x_425_, v___x_427_, v___x_428_);
lean_dec_ref(v___x_427_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; uint8_t v___x_431_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_430_);
lean_dec_ref_known(v___x_429_, 1);
v___x_431_ = lean_string_validate_utf8(v_a_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; lean_object* v___x_433_; 
lean_dec(v_a_430_);
v___x_432_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_433_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_432_);
v___y_393_ = v_a_416_;
v_received_394_ = v___x_433_;
goto v___jp_392_;
}
else
{
lean_object* v___x_434_; 
v___x_434_ = lean_string_from_utf8_unchecked(v_a_430_);
v___y_393_ = v_a_416_;
v_received_394_ = v___x_434_;
goto v___jp_392_;
}
}
else
{
lean_object* v___x_435_; 
lean_dec_ref_known(v___x_429_, 1);
v___x_435_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v___y_393_ = v_a_416_;
v_received_394_ = v___x_435_;
goto v___jp_392_;
}
}
}
}
}
else
{
v___y_413_ = v_a_416_;
goto v___jp_412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___boxed(lean_object* v_context_454_, lean_object* v_d_455_, lean_object* v_a_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0(v_context_454_, v_d_455_);
lean_dec_ref(v_context_454_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(lean_object* v_b_459_, lean_object* v_args_460_, uint8_t v_await_461_){
_start:
{
uint64_t v___y_464_; uint64_t v___y_465_; uint64_t v___x_508_; uint64_t v___y_510_; 
v___x_508_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_461_ == 0)
{
uint64_t v___x_515_; 
v___x_515_ = 0ULL;
v___y_510_ = v___x_515_;
goto v___jp_509_;
}
else
{
uint64_t v___x_516_; 
v___x_516_ = 2ULL;
v___y_510_ = v___x_516_;
goto v___jp_509_;
}
v___jp_463_:
{
uint64_t v_flags_466_; uint32_t v___x_467_; lean_object* v___x_468_; uint32_t v___x_469_; lean_object* v___x_470_; 
v_flags_466_ = lean_uint64_lor(v___y_464_, v___y_465_);
v___x_467_ = 214;
v___x_468_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_459_, v_args_460_);
v___x_469_ = 0;
v___x_470_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_467_, v_flags_466_, v___x_468_, v___x_469_);
lean_dec(v___x_468_);
if (lean_obj_tag(v___x_470_) == 0)
{
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; lean_object* v___x_472_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_a_471_);
lean_dec_ref_known(v___x_470_, 1);
v___x_472_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_471_);
lean_dec(v_a_471_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_473_);
lean_dec_ref_known(v___x_472_, 1);
v___x_474_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_459_);
v___x_475_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0(v___x_474_, v_a_473_);
lean_dec_ref(v___x_474_);
return v___x_475_;
}
else
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
v_a_476_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_472_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_472_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
v_a_484_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_470_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_470_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
lean_ctor_set_tag(v___x_486_, 1);
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
else
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_507_; 
v_a_492_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_507_ == 0)
{
v___x_494_ = v___x_470_;
v_isShared_495_ = v_isSharedCheck_507_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_470_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_507_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_496_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_497_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_459_);
v___x_498_ = lean_string_append(v___x_496_, v___x_497_);
lean_dec_ref(v___x_497_);
v___x_499_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_500_ = lean_string_append(v___x_498_, v___x_499_);
v___x_501_ = lean_io_error_to_string(v_a_492_);
v___x_502_ = lean_string_append(v___x_500_, v___x_501_);
lean_dec_ref(v___x_501_);
v___x_503_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v___x_503_);
v___x_505_ = v___x_494_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_503_);
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
v___jp_509_:
{
uint8_t v_construct_511_; uint64_t v___x_512_; 
v_construct_511_ = lean_ctor_get_uint8(v_b_459_, sizeof(void*)*4);
v___x_512_ = lean_uint64_lor(v___x_508_, v___y_510_);
if (v_construct_511_ == 0)
{
uint64_t v___x_513_; 
v___x_513_ = 0ULL;
v___y_464_ = v___x_512_;
v___y_465_ = v___x_513_;
goto v___jp_463_;
}
else
{
uint64_t v___x_514_; 
v___x_514_ = 4ULL;
v___y_464_ = v___x_512_;
v___y_465_ = v___x_514_;
goto v___jp_463_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___boxed(lean_object* v_b_517_, lean_object* v_args_518_, lean_object* v_await_519_, lean_object* v_a_520_){
_start:
{
uint8_t v_await_boxed_521_; lean_object* v_res_522_; 
v_await_boxed_521_ = lean_unbox(v_await_519_);
v_res_522_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v_b_517_, v_args_518_, v_await_boxed_521_);
lean_dec_ref(v_b_517_);
return v_res_522_;
}
}
static lean_object* _init_l_Lasm_JS_Node_os_availableParallelism___closed__4(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = ((lean_object*)(l_Lasm_JS_Node_os_availableParallelism___closed__3));
v___x_534_ = l_Lasm_JS_Web_Support_args(v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_availableParallelism(){
_start:
{
uint8_t v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_536_ = 0;
v___x_537_ = ((lean_object*)(l_Lasm_JS_Node_os_availableParallelism___closed__2));
v___x_538_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_539_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_537_, v___x_538_, v___x_536_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_availableParallelism___boxed(lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Lasm_JS_Node_os_availableParallelism();
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(lean_object* v_b_542_, lean_object* v_args_543_, uint8_t v_await_544_){
_start:
{
uint64_t v___y_547_; uint64_t v___y_548_; uint64_t v___x_591_; uint64_t v___y_593_; 
v___x_591_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_544_ == 0)
{
uint64_t v___x_598_; 
v___x_598_ = 0ULL;
v___y_593_ = v___x_598_;
goto v___jp_592_;
}
else
{
uint64_t v___x_599_; 
v___x_599_ = 2ULL;
v___y_593_ = v___x_599_;
goto v___jp_592_;
}
v___jp_546_:
{
uint64_t v_flags_549_; uint32_t v___x_550_; lean_object* v___x_551_; uint32_t v___x_552_; lean_object* v___x_553_; 
v_flags_549_ = lean_uint64_lor(v___y_547_, v___y_548_);
v___x_550_ = 214;
v___x_551_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_542_, v_args_543_);
v___x_552_ = 0;
v___x_553_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_550_, v_flags_549_, v___x_551_, v___x_552_);
lean_dec(v___x_551_);
if (lean_obj_tag(v___x_553_) == 0)
{
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___x_555_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc(v_a_554_);
lean_dec_ref_known(v___x_553_, 1);
v___x_555_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_554_);
lean_dec(v_a_554_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_556_);
lean_dec_ref_known(v___x_555_, 1);
v___x_557_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_542_);
v___x_558_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4(v___x_557_, v_a_556_);
lean_dec_ref(v___x_557_);
return v___x_558_;
}
else
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
v_a_559_ = lean_ctor_get(v___x_555_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_555_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_555_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
else
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_574_; 
v_a_567_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_574_ == 0)
{
v___x_569_ = v___x_553_;
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_553_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
lean_ctor_set_tag(v___x_569_, 1);
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_a_567_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
}
else
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_590_; 
v_a_575_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_590_ == 0)
{
v___x_577_ = v___x_553_;
v_isShared_578_ = v_isSharedCheck_590_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_553_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_590_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_588_; 
v___x_579_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_580_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_542_);
v___x_581_ = lean_string_append(v___x_579_, v___x_580_);
lean_dec_ref(v___x_580_);
v___x_582_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_583_ = lean_string_append(v___x_581_, v___x_582_);
v___x_584_ = lean_io_error_to_string(v_a_575_);
v___x_585_ = lean_string_append(v___x_583_, v___x_584_);
lean_dec_ref(v___x_584_);
v___x_586_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_586_);
v___x_588_ = v___x_577_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_586_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
}
}
v___jp_592_:
{
uint8_t v_construct_594_; uint64_t v___x_595_; 
v_construct_594_ = lean_ctor_get_uint8(v_b_542_, sizeof(void*)*4);
v___x_595_ = lean_uint64_lor(v___x_591_, v___y_593_);
if (v_construct_594_ == 0)
{
uint64_t v___x_596_; 
v___x_596_ = 0ULL;
v___y_547_ = v___x_595_;
v___y_548_ = v___x_596_;
goto v___jp_546_;
}
else
{
uint64_t v___x_597_; 
v___x_597_ = 4ULL;
v___y_547_ = v___x_595_;
v___y_548_ = v___x_597_;
goto v___jp_546_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0___boxed(lean_object* v_b_600_, lean_object* v_args_601_, lean_object* v_await_602_, lean_object* v_a_603_){
_start:
{
uint8_t v_await_boxed_604_; lean_object* v_res_605_; 
v_await_boxed_604_ = lean_unbox(v_await_602_);
v_res_605_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v_b_600_, v_args_601_, v_await_boxed_604_);
lean_dec_ref(v_b_600_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_arch(){
_start:
{
uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_615_ = 0;
v___x_616_ = ((lean_object*)(l_Lasm_JS_Node_os_arch___closed__2));
v___x_617_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_618_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_616_, v___x_617_, v___x_615_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_arch___boxed(lean_object* v_a_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_Lasm_JS_Node_os_arch();
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1(size_t v_sz_621_, size_t v_i_622_, lean_object* v_bs_623_){
_start:
{
uint8_t v___x_624_; 
v___x_624_ = lean_usize_dec_lt(v_i_622_, v_sz_621_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; 
v___x_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_625_, 0, v_bs_623_);
return v___x_625_;
}
else
{
lean_object* v_v_626_; lean_object* v___x_627_; lean_object* v_bs_x27_628_; size_t v___x_629_; size_t v___x_630_; lean_object* v___x_631_; 
v_v_626_ = lean_array_uget(v_bs_623_, v_i_622_);
v___x_627_ = lean_unsigned_to_nat(0u);
v_bs_x27_628_ = lean_array_uset(v_bs_623_, v_i_622_, v___x_627_);
v___x_629_ = ((size_t)1ULL);
v___x_630_ = lean_usize_add(v_i_622_, v___x_629_);
v___x_631_ = lean_array_uset(v_bs_x27_628_, v_i_622_, v_v_626_);
v_i_622_ = v___x_630_;
v_bs_623_ = v___x_631_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_633_, lean_object* v_i_634_, lean_object* v_bs_635_){
_start:
{
size_t v_sz_boxed_636_; size_t v_i_boxed_637_; lean_object* v_res_638_; 
v_sz_boxed_636_ = lean_unbox_usize(v_sz_633_);
lean_dec(v_sz_633_);
v_i_boxed_637_ = lean_unbox_usize(v_i_634_);
lean_dec(v_i_634_);
v_res_638_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1(v_sz_boxed_636_, v_i_boxed_637_, v_bs_635_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0(lean_object* v_context_641_, lean_object* v_d_642_){
_start:
{
lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v___y_651_; lean_object* v_received_652_; lean_object* v___y_671_; lean_object* v_a_674_; 
if (lean_obj_tag(v_d_642_) == 7)
{
lean_object* v_items_698_; size_t v_sz_699_; size_t v___x_700_; lean_object* v___x_701_; 
v_items_698_ = lean_ctor_get(v_d_642_, 0);
v_sz_699_ = lean_array_size(v_items_698_);
v___x_700_ = ((size_t)0ULL);
lean_inc_ref(v_items_698_);
v___x_701_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1(v_sz_699_, v___x_700_, v_items_698_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; uint8_t v___x_706_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_702_);
lean_dec_ref_known(v___x_701_, 1);
v___x_703_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__1));
v___x_704_ = lean_string_utf8_byte_size(v_a_702_);
v___x_705_ = lean_unsigned_to_nat(0u);
v___x_706_ = lean_nat_dec_eq(v___x_704_, v___x_705_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_708_ = lean_string_append(v___x_707_, v_a_702_);
lean_dec(v_a_702_);
v___x_709_ = lean_string_append(v___x_703_, v___x_708_);
lean_dec_ref(v___x_708_);
v_a_674_ = v___x_709_;
goto v___jp_673_;
}
else
{
lean_dec(v_a_702_);
v_a_674_ = v___x_703_;
goto v___jp_673_;
}
}
else
{
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_710_; 
v_a_710_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_710_);
lean_dec_ref_known(v___x_701_, 1);
v_a_674_ = v_a_710_;
goto v___jp_673_;
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
lean_dec_ref_known(v_d_642_, 1);
v_a_711_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_701_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_701_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
lean_ctor_set_tag(v___x_713_, 0);
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
}
else
{
lean_object* v___x_719_; 
v___x_719_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v_a_674_ = v___x_719_;
goto v___jp_673_;
}
v___jp_644_:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_647_ = lean_string_append(v___y_645_, v___y_646_);
lean_dec_ref(v___y_646_);
v___x_648_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
v___x_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
return v___x_649_;
}
v___jp_650_:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; 
v___x_653_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_654_ = lean_string_append(v___x_653_, v_context_641_);
v___x_655_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_656_ = lean_string_append(v___x_654_, v___x_655_);
v___x_657_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__0));
v___x_658_ = lean_string_append(v___x_656_, v___x_657_);
v___x_659_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_660_ = lean_string_append(v___x_658_, v___x_659_);
v___x_661_ = lean_string_append(v___x_660_, v_received_652_);
lean_dec_ref(v_received_652_);
v___x_662_ = lean_string_utf8_byte_size(v___y_651_);
v___x_663_ = lean_unsigned_to_nat(0u);
v___x_664_ = lean_nat_dec_eq(v___x_662_, v___x_663_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_665_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1));
v___x_666_ = lean_string_append(v___x_665_, v___y_651_);
lean_dec_ref(v___y_651_);
v___x_667_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2));
v___x_668_ = lean_string_append(v___x_666_, v___x_667_);
v___y_645_ = v___x_661_;
v___y_646_ = v___x_668_;
goto v___jp_644_;
}
else
{
lean_object* v___x_669_; 
lean_dec_ref(v___y_651_);
v___x_669_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___y_645_ = v___x_661_;
v___y_646_ = v___x_669_;
goto v___jp_644_;
}
}
v___jp_670_:
{
lean_object* v___x_672_; 
v___x_672_ = l_Lasm_JS_Data_describe(v_d_642_);
v___y_651_ = v___y_671_;
v_received_652_ = v___x_672_;
goto v___jp_650_;
}
v___jp_673_:
{
if (lean_obj_tag(v_d_642_) == 9)
{
lean_object* v_value_675_; lean_object* v_description_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
v_value_675_ = lean_ctor_get(v_d_642_, 0);
v_description_676_ = lean_ctor_get(v_d_642_, 1);
v___x_677_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_678_ = lean_string_dec_eq(v_description_676_, v___x_677_);
if (v___x_678_ == 0)
{
v___y_671_ = v_a_674_;
goto v___jp_670_;
}
else
{
lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_695_; 
lean_inc(v_value_675_);
v_isSharedCheck_695_ = !lean_is_exclusive(v_d_642_);
if (v_isSharedCheck_695_ == 0)
{
lean_object* v_unused_696_; lean_object* v_unused_697_; 
v_unused_696_ = lean_ctor_get(v_d_642_, 1);
lean_dec(v_unused_696_);
v_unused_697_ = lean_ctor_get(v_d_642_, 0);
lean_dec(v_unused_697_);
v___x_680_ = v_d_642_;
v_isShared_681_ = v_isSharedCheck_695_;
goto v_resetjp_679_;
}
else
{
lean_dec(v_d_642_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_695_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
uint32_t v___x_682_; uint64_t v___x_683_; lean_object* v___x_685_; 
v___x_682_ = 206;
v___x_683_ = 0ULL;
lean_inc(v_value_675_);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 1, v___x_677_);
v___x_685_ = v___x_680_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_value_675_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v___x_677_);
v___x_685_ = v_reuseFailAlloc_694_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
uint32_t v___x_686_; lean_object* v___x_687_; 
v___x_686_ = lasm_js_value_handle(v_value_675_);
lean_dec(v_value_675_);
v___x_687_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_682_, v___x_683_, v___x_685_, v___x_686_);
lean_dec_ref(v___x_685_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; uint8_t v___x_689_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_a_688_);
lean_dec_ref_known(v___x_687_, 1);
v___x_689_ = lean_string_validate_utf8(v_a_688_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; lean_object* v___x_691_; 
lean_dec(v_a_688_);
v___x_690_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_691_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_690_);
v___y_651_ = v_a_674_;
v_received_652_ = v___x_691_;
goto v___jp_650_;
}
else
{
lean_object* v___x_692_; 
v___x_692_ = lean_string_from_utf8_unchecked(v_a_688_);
v___y_651_ = v_a_674_;
v_received_652_ = v___x_692_;
goto v___jp_650_;
}
}
else
{
lean_object* v___x_693_; 
lean_dec_ref_known(v___x_687_, 1);
v___x_693_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v___y_651_ = v_a_674_;
v_received_652_ = v___x_693_;
goto v___jp_650_;
}
}
}
}
}
else
{
v___y_671_ = v_a_674_;
goto v___jp_670_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___boxed(lean_object* v_context_720_, lean_object* v_d_721_, lean_object* v_a_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0(v_context_720_, v_d_721_);
lean_dec_ref(v_context_720_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0(lean_object* v_b_724_, lean_object* v_args_725_, uint8_t v_await_726_){
_start:
{
uint64_t v___y_729_; uint64_t v___y_730_; uint64_t v___x_773_; uint64_t v___y_775_; 
v___x_773_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_726_ == 0)
{
uint64_t v___x_780_; 
v___x_780_ = 0ULL;
v___y_775_ = v___x_780_;
goto v___jp_774_;
}
else
{
uint64_t v___x_781_; 
v___x_781_ = 2ULL;
v___y_775_ = v___x_781_;
goto v___jp_774_;
}
v___jp_728_:
{
uint64_t v_flags_731_; uint32_t v___x_732_; lean_object* v___x_733_; uint32_t v___x_734_; lean_object* v___x_735_; 
v_flags_731_ = lean_uint64_lor(v___y_729_, v___y_730_);
v___x_732_ = 214;
v___x_733_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_724_, v_args_725_);
v___x_734_ = 0;
v___x_735_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_732_, v_flags_731_, v___x_733_, v___x_734_);
lean_dec(v___x_733_);
if (lean_obj_tag(v___x_735_) == 0)
{
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v_a_736_; lean_object* v___x_737_; 
v_a_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_a_736_);
lean_dec_ref_known(v___x_735_, 1);
v___x_737_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_736_);
lean_dec(v_a_736_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
v___x_739_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_724_);
v___x_740_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0(v___x_739_, v_a_738_);
lean_dec_ref(v___x_739_);
return v___x_740_;
}
else
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_748_; 
v_a_741_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_748_ == 0)
{
v___x_743_ = v___x_737_;
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_737_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_a_741_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
v_a_749_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_735_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_735_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
lean_ctor_set_tag(v___x_751_, 1);
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
else
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_772_; 
v_a_757_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_772_ == 0)
{
v___x_759_ = v___x_735_;
v_isShared_760_ = v_isSharedCheck_772_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_735_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_772_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_770_; 
v___x_761_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_762_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_724_);
v___x_763_ = lean_string_append(v___x_761_, v___x_762_);
lean_dec_ref(v___x_762_);
v___x_764_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_765_ = lean_string_append(v___x_763_, v___x_764_);
v___x_766_ = lean_io_error_to_string(v_a_757_);
v___x_767_ = lean_string_append(v___x_765_, v___x_766_);
lean_dec_ref(v___x_766_);
v___x_768_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_768_, 0, v___x_767_);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v___x_768_);
v___x_770_ = v___x_759_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v___x_768_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
v___jp_774_:
{
uint8_t v_construct_776_; uint64_t v___x_777_; 
v_construct_776_ = lean_ctor_get_uint8(v_b_724_, sizeof(void*)*4);
v___x_777_ = lean_uint64_lor(v___x_773_, v___y_775_);
if (v_construct_776_ == 0)
{
uint64_t v___x_778_; 
v___x_778_ = 0ULL;
v___y_729_ = v___x_777_;
v___y_730_ = v___x_778_;
goto v___jp_728_;
}
else
{
uint64_t v___x_779_; 
v___x_779_ = 4ULL;
v___y_729_ = v___x_777_;
v___y_730_ = v___x_779_;
goto v___jp_728_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0___boxed(lean_object* v_b_782_, lean_object* v_args_783_, lean_object* v_await_784_, lean_object* v_a_785_){
_start:
{
uint8_t v_await_boxed_786_; lean_object* v_res_787_; 
v_await_boxed_786_ = lean_unbox(v_await_784_);
v_res_787_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0(v_b_782_, v_args_783_, v_await_boxed_786_);
lean_dec_ref(v_b_782_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_cpus(){
_start:
{
uint8_t v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_797_ = 0;
v___x_798_ = ((lean_object*)(l_Lasm_JS_Node_os_cpus___closed__2));
v___x_799_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_800_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0(v___x_798_, v___x_799_, v___x_797_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_cpus___boxed(lean_object* v_a_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_Lasm_JS_Node_os_cpus();
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_endianness(){
_start:
{
uint8_t v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_812_ = 0;
v___x_813_ = ((lean_object*)(l_Lasm_JS_Node_os_endianness___closed__2));
v___x_814_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_815_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_813_, v___x_814_, v___x_812_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_endianness___boxed(lean_object* v_a_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lasm_JS_Node_os_endianness();
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_freemem(){
_start:
{
uint8_t v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_827_ = 0;
v___x_828_ = ((lean_object*)(l_Lasm_JS_Node_os_freemem___closed__2));
v___x_829_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_830_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_828_, v___x_829_, v___x_827_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_freemem___boxed(lean_object* v_a_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Lasm_JS_Node_os_freemem();
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_getPriority_spec__0(lean_object* v_x_833_){
_start:
{
if (lean_obj_tag(v_x_833_) == 0)
{
lean_object* v___x_834_; 
v___x_834_ = lean_box(0);
return v___x_834_;
}
else
{
lean_object* v_val_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_847_; 
v_val_835_ = lean_ctor_get(v_x_833_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v_x_833_);
if (v_isSharedCheck_847_ == 0)
{
v___x_837_ = v_x_833_;
v_isShared_838_ = v_isSharedCheck_847_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_val_835_);
lean_dec(v_x_833_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_847_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_839_ = lean_nat_abs(v_val_835_);
v___x_840_ = lean_cstr_to_nat("9007199254740991");
v___x_841_ = lean_nat_dec_le(v___x_839_, v___x_840_);
lean_dec(v___x_839_);
if (v___x_841_ == 0)
{
lean_object* v___x_843_; 
if (v_isShared_838_ == 0)
{
lean_ctor_set_tag(v___x_837_, 5);
v___x_843_ = v___x_837_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_val_835_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
else
{
double v___x_845_; lean_object* v___x_846_; 
lean_del_object(v___x_837_);
v___x_845_ = l_Float_ofInt(v_val_835_);
lean_dec(v_val_835_);
v___x_846_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_846_, 0, v___x_845_);
return v___x_846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_getPriority(lean_object* v_pid_856_){
_start:
{
uint8_t v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_858_ = 0;
v___x_859_ = lean_unsigned_to_nat(1u);
v___x_860_ = ((lean_object*)(l_Lasm_JS_Node_os_getPriority___closed__2));
v___x_861_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_getPriority_spec__0(v_pid_856_);
v___x_862_ = lean_mk_empty_array_with_capacity(v___x_859_);
v___x_863_ = lean_array_push(v___x_862_, v___x_861_);
v___x_864_ = l_Lasm_JS_Web_Support_args(v___x_863_);
v___x_865_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_860_, v___x_864_, v___x_858_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_getPriority___boxed(lean_object* v_pid_866_, lean_object* v_a_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lasm_JS_Node_os_getPriority(v_pid_866_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_homedir(){
_start:
{
uint8_t v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_878_ = 0;
v___x_879_ = ((lean_object*)(l_Lasm_JS_Node_os_homedir___closed__2));
v___x_880_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_881_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_879_, v___x_880_, v___x_878_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_homedir___boxed(lean_object* v_a_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lasm_JS_Node_os_homedir();
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_hostname(){
_start:
{
uint8_t v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_893_ = 0;
v___x_894_ = ((lean_object*)(l_Lasm_JS_Node_os_hostname___closed__2));
v___x_895_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_896_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_894_, v___x_895_, v___x_893_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_hostname___boxed(lean_object* v_a_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l_Lasm_JS_Node_os_hostname();
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1(size_t v_sz_901_, size_t v_i_902_, lean_object* v_bs_903_){
_start:
{
uint8_t v___x_904_; 
v___x_904_ = lean_usize_dec_lt(v_i_902_, v_sz_901_);
if (v___x_904_ == 0)
{
lean_object* v___x_905_; 
v___x_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_905_, 0, v_bs_903_);
return v___x_905_;
}
else
{
lean_object* v_v_906_; 
v_v_906_ = lean_array_uget_borrowed(v_bs_903_, v_i_902_);
if (lean_obj_tag(v_v_906_) == 3)
{
double v_n_907_; lean_object* v___x_908_; lean_object* v_bs_x27_909_; size_t v___x_910_; size_t v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_n_907_ = lean_ctor_get_float(v_v_906_, 0);
v___x_908_ = lean_unsigned_to_nat(0u);
v_bs_x27_909_ = lean_array_uset(v_bs_903_, v_i_902_, v___x_908_);
v___x_910_ = ((size_t)1ULL);
v___x_911_ = lean_usize_add(v_i_902_, v___x_910_);
v___x_912_ = lean_box_float(v_n_907_);
v___x_913_ = lean_array_uset(v_bs_x27_909_, v_i_902_, v___x_912_);
v_i_902_ = v___x_911_;
v_bs_903_ = v___x_913_;
goto _start;
}
else
{
lean_object* v___x_915_; 
lean_dec_ref(v_bs_903_);
v___x_915_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1___closed__0));
return v___x_915_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_916_, lean_object* v_i_917_, lean_object* v_bs_918_){
_start:
{
size_t v_sz_boxed_919_; size_t v_i_boxed_920_; lean_object* v_res_921_; 
v_sz_boxed_919_ = lean_unbox_usize(v_sz_916_);
lean_dec(v_sz_916_);
v_i_boxed_920_ = lean_unbox_usize(v_i_917_);
lean_dec(v_i_917_);
v_res_921_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1(v_sz_boxed_919_, v_i_boxed_920_, v_bs_918_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0(lean_object* v_context_924_, lean_object* v_d_925_){
_start:
{
lean_object* v___y_928_; lean_object* v___y_929_; lean_object* v___y_934_; lean_object* v_received_935_; lean_object* v___y_954_; lean_object* v_a_957_; 
if (lean_obj_tag(v_d_925_) == 7)
{
lean_object* v_items_981_; size_t v_sz_982_; size_t v___x_983_; lean_object* v___x_984_; 
v_items_981_ = lean_ctor_get(v_d_925_, 0);
v_sz_982_ = lean_array_size(v_items_981_);
v___x_983_ = ((size_t)0ULL);
lean_inc_ref(v_items_981_);
v___x_984_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1(v_sz_982_, v___x_983_, v_items_981_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; uint8_t v___x_989_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__1));
v___x_987_ = lean_string_utf8_byte_size(v_a_985_);
v___x_988_ = lean_unsigned_to_nat(0u);
v___x_989_ = lean_nat_dec_eq(v___x_987_, v___x_988_);
if (v___x_989_ == 0)
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_990_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_991_ = lean_string_append(v___x_990_, v_a_985_);
lean_dec(v_a_985_);
v___x_992_ = lean_string_append(v___x_986_, v___x_991_);
lean_dec_ref(v___x_991_);
v_a_957_ = v___x_992_;
goto v___jp_956_;
}
else
{
lean_dec(v_a_985_);
v_a_957_ = v___x_986_;
goto v___jp_956_;
}
}
else
{
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_993_; 
v_a_993_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_993_);
lean_dec_ref_known(v___x_984_, 1);
v_a_957_ = v_a_993_;
goto v___jp_956_;
}
else
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
lean_dec_ref_known(v_d_925_, 1);
v_a_994_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_984_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_984_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
lean_ctor_set_tag(v___x_996_, 0);
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
}
else
{
lean_object* v___x_1002_; 
v___x_1002_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v_a_957_ = v___x_1002_;
goto v___jp_956_;
}
v___jp_927_:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_930_ = lean_string_append(v___y_928_, v___y_929_);
lean_dec_ref(v___y_929_);
v___x_931_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
v___x_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_932_, 0, v___x_931_);
return v___x_932_;
}
v___jp_933_:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_936_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_937_ = lean_string_append(v___x_936_, v_context_924_);
v___x_938_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_939_ = lean_string_append(v___x_937_, v___x_938_);
v___x_940_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__0));
v___x_941_ = lean_string_append(v___x_939_, v___x_940_);
v___x_942_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_943_ = lean_string_append(v___x_941_, v___x_942_);
v___x_944_ = lean_string_append(v___x_943_, v_received_935_);
lean_dec_ref(v_received_935_);
v___x_945_ = lean_string_utf8_byte_size(v___y_934_);
v___x_946_ = lean_unsigned_to_nat(0u);
v___x_947_ = lean_nat_dec_eq(v___x_945_, v___x_946_);
if (v___x_947_ == 0)
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_948_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1));
v___x_949_ = lean_string_append(v___x_948_, v___y_934_);
lean_dec_ref(v___y_934_);
v___x_950_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2));
v___x_951_ = lean_string_append(v___x_949_, v___x_950_);
v___y_928_ = v___x_944_;
v___y_929_ = v___x_951_;
goto v___jp_927_;
}
else
{
lean_object* v___x_952_; 
lean_dec_ref(v___y_934_);
v___x_952_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___y_928_ = v___x_944_;
v___y_929_ = v___x_952_;
goto v___jp_927_;
}
}
v___jp_953_:
{
lean_object* v___x_955_; 
v___x_955_ = l_Lasm_JS_Data_describe(v_d_925_);
v___y_934_ = v___y_954_;
v_received_935_ = v___x_955_;
goto v___jp_933_;
}
v___jp_956_:
{
if (lean_obj_tag(v_d_925_) == 9)
{
lean_object* v_value_958_; lean_object* v_description_959_; lean_object* v___x_960_; uint8_t v___x_961_; 
v_value_958_ = lean_ctor_get(v_d_925_, 0);
v_description_959_ = lean_ctor_get(v_d_925_, 1);
v___x_960_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_961_ = lean_string_dec_eq(v_description_959_, v___x_960_);
if (v___x_961_ == 0)
{
v___y_954_ = v_a_957_;
goto v___jp_953_;
}
else
{
lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_978_; 
lean_inc(v_value_958_);
v_isSharedCheck_978_ = !lean_is_exclusive(v_d_925_);
if (v_isSharedCheck_978_ == 0)
{
lean_object* v_unused_979_; lean_object* v_unused_980_; 
v_unused_979_ = lean_ctor_get(v_d_925_, 1);
lean_dec(v_unused_979_);
v_unused_980_ = lean_ctor_get(v_d_925_, 0);
lean_dec(v_unused_980_);
v___x_963_ = v_d_925_;
v_isShared_964_ = v_isSharedCheck_978_;
goto v_resetjp_962_;
}
else
{
lean_dec(v_d_925_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_978_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
uint32_t v___x_965_; uint64_t v___x_966_; lean_object* v___x_968_; 
v___x_965_ = 206;
v___x_966_ = 0ULL;
lean_inc(v_value_958_);
if (v_isShared_964_ == 0)
{
lean_ctor_set(v___x_963_, 1, v___x_960_);
v___x_968_ = v___x_963_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_value_958_);
lean_ctor_set(v_reuseFailAlloc_977_, 1, v___x_960_);
v___x_968_ = v_reuseFailAlloc_977_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
uint32_t v___x_969_; lean_object* v___x_970_; 
v___x_969_ = lasm_js_value_handle(v_value_958_);
lean_dec(v_value_958_);
v___x_970_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_965_, v___x_966_, v___x_968_, v___x_969_);
lean_dec_ref(v___x_968_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; uint8_t v___x_972_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_a_971_);
lean_dec_ref_known(v___x_970_, 1);
v___x_972_ = lean_string_validate_utf8(v_a_971_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; lean_object* v___x_974_; 
lean_dec(v_a_971_);
v___x_973_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_974_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_973_);
v___y_934_ = v_a_957_;
v_received_935_ = v___x_974_;
goto v___jp_933_;
}
else
{
lean_object* v___x_975_; 
v___x_975_ = lean_string_from_utf8_unchecked(v_a_971_);
v___y_934_ = v_a_957_;
v_received_935_ = v___x_975_;
goto v___jp_933_;
}
}
else
{
lean_object* v___x_976_; 
lean_dec_ref_known(v___x_970_, 1);
v___x_976_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v___y_934_ = v_a_957_;
v_received_935_ = v___x_976_;
goto v___jp_933_;
}
}
}
}
}
else
{
v___y_954_ = v_a_957_;
goto v___jp_953_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___boxed(lean_object* v_context_1003_, lean_object* v_d_1004_, lean_object* v_a_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0(v_context_1003_, v_d_1004_);
lean_dec_ref(v_context_1003_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0(lean_object* v_b_1007_, lean_object* v_args_1008_, uint8_t v_await_1009_){
_start:
{
uint64_t v___y_1012_; uint64_t v___y_1013_; uint64_t v___x_1056_; uint64_t v___y_1058_; 
v___x_1056_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_1009_ == 0)
{
uint64_t v___x_1063_; 
v___x_1063_ = 0ULL;
v___y_1058_ = v___x_1063_;
goto v___jp_1057_;
}
else
{
uint64_t v___x_1064_; 
v___x_1064_ = 2ULL;
v___y_1058_ = v___x_1064_;
goto v___jp_1057_;
}
v___jp_1011_:
{
uint64_t v_flags_1014_; uint32_t v___x_1015_; lean_object* v___x_1016_; uint32_t v___x_1017_; lean_object* v___x_1018_; 
v_flags_1014_ = lean_uint64_lor(v___y_1012_, v___y_1013_);
v___x_1015_ = 214;
v___x_1016_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1007_, v_args_1008_);
v___x_1017_ = 0;
v___x_1018_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1015_, v_flags_1014_, v___x_1016_, v___x_1017_);
lean_dec(v___x_1016_);
if (lean_obj_tag(v___x_1018_) == 0)
{
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1020_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
lean_dec_ref_known(v___x_1018_, 1);
v___x_1020_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1019_);
lean_dec(v_a_1019_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_a_1021_);
lean_dec_ref_known(v___x_1020_, 1);
v___x_1022_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1007_);
v___x_1023_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0(v___x_1022_, v_a_1021_);
lean_dec_ref(v___x_1022_);
return v___x_1023_;
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
v_a_1024_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1020_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1020_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
v_a_1032_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1034_ = v___x_1018_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_1018_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
lean_ctor_set_tag(v___x_1034_, 1);
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_a_1032_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
else
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1055_; 
v_a_1040_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1042_ = v___x_1018_;
v_isShared_1043_ = v_isSharedCheck_1055_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1018_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1055_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1053_; 
v___x_1044_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1045_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1007_);
v___x_1046_ = lean_string_append(v___x_1044_, v___x_1045_);
lean_dec_ref(v___x_1045_);
v___x_1047_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1048_ = lean_string_append(v___x_1046_, v___x_1047_);
v___x_1049_ = lean_io_error_to_string(v_a_1040_);
v___x_1050_ = lean_string_append(v___x_1048_, v___x_1049_);
lean_dec_ref(v___x_1049_);
v___x_1051_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 0, v___x_1051_);
v___x_1053_ = v___x_1042_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v___x_1051_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
v___jp_1057_:
{
uint8_t v_construct_1059_; uint64_t v___x_1060_; 
v_construct_1059_ = lean_ctor_get_uint8(v_b_1007_, sizeof(void*)*4);
v___x_1060_ = lean_uint64_lor(v___x_1056_, v___y_1058_);
if (v_construct_1059_ == 0)
{
uint64_t v___x_1061_; 
v___x_1061_ = 0ULL;
v___y_1012_ = v___x_1060_;
v___y_1013_ = v___x_1061_;
goto v___jp_1011_;
}
else
{
uint64_t v___x_1062_; 
v___x_1062_ = 4ULL;
v___y_1012_ = v___x_1060_;
v___y_1013_ = v___x_1062_;
goto v___jp_1011_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0___boxed(lean_object* v_b_1065_, lean_object* v_args_1066_, lean_object* v_await_1067_, lean_object* v_a_1068_){
_start:
{
uint8_t v_await_boxed_1069_; lean_object* v_res_1070_; 
v_await_boxed_1069_ = lean_unbox(v_await_1067_);
v_res_1070_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0(v_b_1065_, v_args_1066_, v_await_boxed_1069_);
lean_dec_ref(v_b_1065_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_loadavg(){
_start:
{
uint8_t v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1080_ = 0;
v___x_1081_ = ((lean_object*)(l_Lasm_JS_Node_os_loadavg___closed__2));
v___x_1082_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1083_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0(v___x_1081_, v___x_1082_, v___x_1080_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_loadavg___boxed(lean_object* v_a_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Lasm_JS_Node_os_loadavg();
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_machine(){
_start:
{
uint8_t v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1095_ = 0;
v___x_1096_ = ((lean_object*)(l_Lasm_JS_Node_os_machine___closed__2));
v___x_1097_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1098_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1096_, v___x_1097_, v___x_1095_);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_machine___boxed(lean_object* v_a_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lasm_JS_Node_os_machine();
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(lean_object* v_b_1101_, lean_object* v_args_1102_, uint8_t v_await_1103_){
_start:
{
uint64_t v___y_1106_; uint64_t v___y_1107_; uint64_t v___x_1139_; uint64_t v___y_1141_; 
v___x_1139_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_1103_ == 0)
{
uint64_t v___x_1146_; 
v___x_1146_ = 0ULL;
v___y_1141_ = v___x_1146_;
goto v___jp_1140_;
}
else
{
uint64_t v___x_1147_; 
v___x_1147_ = 2ULL;
v___y_1141_ = v___x_1147_;
goto v___jp_1140_;
}
v___jp_1105_:
{
uint64_t v_flags_1108_; uint32_t v___x_1109_; lean_object* v___x_1110_; uint32_t v___x_1111_; lean_object* v___x_1112_; 
v_flags_1108_ = lean_uint64_lor(v___y_1106_, v___y_1107_);
v___x_1109_ = 214;
v___x_1110_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1101_, v_args_1102_);
v___x_1111_ = 0;
v___x_1112_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1109_, v_flags_1108_, v___x_1110_, v___x_1111_);
lean_dec(v___x_1110_);
if (lean_obj_tag(v___x_1112_) == 0)
{
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; lean_object* v___x_1114_; 
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1113_);
lean_dec_ref_known(v___x_1112_, 1);
v___x_1114_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1113_);
lean_dec(v_a_1113_);
return v___x_1114_;
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
v_a_1115_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1112_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1112_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set_tag(v___x_1117_, 1);
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
}
else
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1138_; 
v_a_1123_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1125_ = v___x_1112_;
v_isShared_1126_ = v_isSharedCheck_1138_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1112_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1138_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1136_; 
v___x_1127_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1128_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1101_);
v___x_1129_ = lean_string_append(v___x_1127_, v___x_1128_);
lean_dec_ref(v___x_1128_);
v___x_1130_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1131_ = lean_string_append(v___x_1129_, v___x_1130_);
v___x_1132_ = lean_io_error_to_string(v_a_1123_);
v___x_1133_ = lean_string_append(v___x_1131_, v___x_1132_);
lean_dec_ref(v___x_1132_);
v___x_1134_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 0, v___x_1134_);
v___x_1136_ = v___x_1125_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1134_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
v___jp_1140_:
{
uint8_t v_construct_1142_; uint64_t v___x_1143_; 
v_construct_1142_ = lean_ctor_get_uint8(v_b_1101_, sizeof(void*)*4);
v___x_1143_ = lean_uint64_lor(v___x_1139_, v___y_1141_);
if (v_construct_1142_ == 0)
{
uint64_t v___x_1144_; 
v___x_1144_ = 0ULL;
v___y_1106_ = v___x_1143_;
v___y_1107_ = v___x_1144_;
goto v___jp_1105_;
}
else
{
uint64_t v___x_1145_; 
v___x_1145_ = 4ULL;
v___y_1106_ = v___x_1143_;
v___y_1107_ = v___x_1145_;
goto v___jp_1105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0___boxed(lean_object* v_b_1148_, lean_object* v_args_1149_, lean_object* v_await_1150_, lean_object* v_a_1151_){
_start:
{
uint8_t v_await_boxed_1152_; lean_object* v_res_1153_; 
v_await_boxed_1152_ = lean_unbox(v_await_1150_);
v_res_1153_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(v_b_1148_, v_args_1149_, v_await_boxed_1152_);
lean_dec_ref(v_b_1148_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_networkInterfaces(){
_start:
{
uint8_t v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1163_ = 0;
v___x_1164_ = ((lean_object*)(l_Lasm_JS_Node_os_networkInterfaces___closed__2));
v___x_1165_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1166_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(v___x_1164_, v___x_1165_, v___x_1163_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_networkInterfaces___boxed(lean_object* v_a_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lasm_JS_Node_os_networkInterfaces();
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_platform(){
_start:
{
uint8_t v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1178_ = 0;
v___x_1179_ = ((lean_object*)(l_Lasm_JS_Node_os_platform___closed__2));
v___x_1180_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1181_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1179_, v___x_1180_, v___x_1178_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_platform___boxed(lean_object* v_a_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l_Lasm_JS_Node_os_platform();
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_release(){
_start:
{
uint8_t v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1193_ = 0;
v___x_1194_ = ((lean_object*)(l_Lasm_JS_Node_os_release___closed__2));
v___x_1195_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1196_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1194_, v___x_1195_, v___x_1193_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_release___boxed(lean_object* v_a_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_Lasm_JS_Node_os_release();
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1200_ = lean_box(0);
v___x_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1200_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg___boxed(lean_object* v_a_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg();
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(lean_object* v_b_1204_, lean_object* v_args_1205_, uint8_t v_await_1206_){
_start:
{
uint64_t v___y_1209_; uint64_t v___y_1210_; uint64_t v___x_1251_; uint64_t v___y_1253_; 
v___x_1251_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_1206_ == 0)
{
uint64_t v___x_1258_; 
v___x_1258_ = 0ULL;
v___y_1253_ = v___x_1258_;
goto v___jp_1252_;
}
else
{
uint64_t v___x_1259_; 
v___x_1259_ = 2ULL;
v___y_1253_ = v___x_1259_;
goto v___jp_1252_;
}
v___jp_1208_:
{
uint64_t v_flags_1211_; uint32_t v___x_1212_; lean_object* v___x_1213_; uint32_t v___x_1214_; lean_object* v___x_1215_; 
v_flags_1211_ = lean_uint64_lor(v___y_1209_, v___y_1210_);
v___x_1212_ = 214;
v___x_1213_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1204_, v_args_1205_);
v___x_1214_ = 0;
v___x_1215_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1212_, v_flags_1211_, v___x_1213_, v___x_1214_);
lean_dec(v___x_1213_);
if (lean_obj_tag(v___x_1215_) == 0)
{
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1217_; 
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1216_);
lean_dec_ref_known(v___x_1215_, 1);
v___x_1217_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1216_);
lean_dec(v_a_1216_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v___x_1218_; 
lean_dec_ref_known(v___x_1217_, 1);
v___x_1218_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg();
return v___x_1218_;
}
else
{
lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
v_a_1219_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1221_ = v___x_1217_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_dec(v___x_1217_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1224_; 
if (v_isShared_1222_ == 0)
{
v___x_1224_ = v___x_1221_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_a_1219_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
else
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1234_; 
v_a_1227_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1229_ = v___x_1215_;
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v___x_1215_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1232_; 
if (v_isShared_1230_ == 0)
{
lean_ctor_set_tag(v___x_1229_, 1);
v___x_1232_ = v___x_1229_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1227_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
}
else
{
lean_object* v_a_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1250_; 
v_a_1235_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1237_ = v___x_1215_;
v_isShared_1238_ = v_isSharedCheck_1250_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_a_1235_);
lean_dec(v___x_1215_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1250_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1239_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1240_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1204_);
v___x_1241_ = lean_string_append(v___x_1239_, v___x_1240_);
lean_dec_ref(v___x_1240_);
v___x_1242_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1243_ = lean_string_append(v___x_1241_, v___x_1242_);
v___x_1244_ = lean_io_error_to_string(v_a_1235_);
v___x_1245_ = lean_string_append(v___x_1243_, v___x_1244_);
lean_dec_ref(v___x_1244_);
v___x_1246_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1245_);
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 0, v___x_1246_);
v___x_1248_ = v___x_1237_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1246_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
v___jp_1252_:
{
uint8_t v_construct_1254_; uint64_t v___x_1255_; 
v_construct_1254_ = lean_ctor_get_uint8(v_b_1204_, sizeof(void*)*4);
v___x_1255_ = lean_uint64_lor(v___x_1251_, v___y_1253_);
if (v_construct_1254_ == 0)
{
uint64_t v___x_1256_; 
v___x_1256_ = 0ULL;
v___y_1209_ = v___x_1255_;
v___y_1210_ = v___x_1256_;
goto v___jp_1208_;
}
else
{
uint64_t v___x_1257_; 
v___x_1257_ = 4ULL;
v___y_1209_ = v___x_1255_;
v___y_1210_ = v___x_1257_;
goto v___jp_1208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0___boxed(lean_object* v_b_1260_, lean_object* v_args_1261_, lean_object* v_await_1262_, lean_object* v_a_1263_){
_start:
{
uint8_t v_await_boxed_1264_; lean_object* v_res_1265_; 
v_await_boxed_1264_ = lean_unbox(v_await_1262_);
v_res_1265_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(v_b_1260_, v_args_1261_, v_await_boxed_1264_);
lean_dec_ref(v_b_1260_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriority(lean_object* v_priority_1274_){
_start:
{
uint8_t v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___y_1280_; lean_object* v___x_1285_; lean_object* v___x_1286_; uint8_t v___x_1287_; 
v___x_1276_ = 0;
v___x_1277_ = lean_unsigned_to_nat(1u);
v___x_1278_ = ((lean_object*)(l_Lasm_JS_Node_os_setPriority___closed__2));
v___x_1285_ = lean_nat_abs(v_priority_1274_);
v___x_1286_ = lean_cstr_to_nat("9007199254740991");
v___x_1287_ = lean_nat_dec_le(v___x_1285_, v___x_1286_);
lean_dec(v___x_1285_);
if (v___x_1287_ == 0)
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1288_, 0, v_priority_1274_);
v___y_1280_ = v___x_1288_;
goto v___jp_1279_;
}
else
{
double v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = l_Float_ofInt(v_priority_1274_);
lean_dec(v_priority_1274_);
v___x_1290_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1290_, 0, v___x_1289_);
v___y_1280_ = v___x_1290_;
goto v___jp_1279_;
}
v___jp_1279_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1281_ = lean_mk_empty_array_with_capacity(v___x_1277_);
v___x_1282_ = lean_array_push(v___x_1281_, v___y_1280_);
v___x_1283_ = l_Lasm_JS_Web_Support_args(v___x_1282_);
v___x_1284_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(v___x_1278_, v___x_1283_, v___x_1276_);
return v___x_1284_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriority___boxed(lean_object* v_priority_1291_, lean_object* v_a_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Lasm_JS_Node_os_setPriority(v_priority_1291_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0(lean_object* v_context_1294_, lean_object* v_d_1295_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg();
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___boxed(lean_object* v_context_1298_, lean_object* v_d_1299_, lean_object* v_a_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0(v_context_1298_, v_d_1299_);
lean_dec(v_d_1299_);
lean_dec_ref(v_context_1298_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriorityWithPid(lean_object* v_pid_1309_, lean_object* v_priority_1310_){
_start:
{
uint8_t v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___y_1316_; lean_object* v___y_1317_; lean_object* v___y_1324_; lean_object* v___x_1331_; lean_object* v___x_1332_; uint8_t v___x_1333_; 
v___x_1312_ = 0;
v___x_1313_ = lean_unsigned_to_nat(2u);
v___x_1314_ = ((lean_object*)(l_Lasm_JS_Node_os_setPriorityWithPid___closed__1));
v___x_1331_ = lean_nat_abs(v_pid_1309_);
v___x_1332_ = lean_cstr_to_nat("9007199254740991");
v___x_1333_ = lean_nat_dec_le(v___x_1331_, v___x_1332_);
lean_dec(v___x_1331_);
if (v___x_1333_ == 0)
{
lean_object* v___x_1334_; 
v___x_1334_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1334_, 0, v_pid_1309_);
v___y_1324_ = v___x_1334_;
goto v___jp_1323_;
}
else
{
double v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = l_Float_ofInt(v_pid_1309_);
lean_dec(v_pid_1309_);
v___x_1336_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1336_, 0, v___x_1335_);
v___y_1324_ = v___x_1336_;
goto v___jp_1323_;
}
v___jp_1315_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1318_ = lean_mk_empty_array_with_capacity(v___x_1313_);
v___x_1319_ = lean_array_push(v___x_1318_, v___y_1316_);
v___x_1320_ = lean_array_push(v___x_1319_, v___y_1317_);
v___x_1321_ = l_Lasm_JS_Web_Support_args(v___x_1320_);
v___x_1322_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(v___x_1314_, v___x_1321_, v___x_1312_);
return v___x_1322_;
}
v___jp_1323_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; uint8_t v___x_1327_; 
v___x_1325_ = lean_nat_abs(v_priority_1310_);
v___x_1326_ = lean_cstr_to_nat("9007199254740991");
v___x_1327_ = lean_nat_dec_le(v___x_1325_, v___x_1326_);
lean_dec(v___x_1325_);
if (v___x_1327_ == 0)
{
lean_object* v___x_1328_; 
v___x_1328_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1328_, 0, v_priority_1310_);
v___y_1316_ = v___y_1324_;
v___y_1317_ = v___x_1328_;
goto v___jp_1315_;
}
else
{
double v___x_1329_; lean_object* v___x_1330_; 
v___x_1329_ = l_Float_ofInt(v_priority_1310_);
lean_dec(v_priority_1310_);
v___x_1330_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1330_, 0, v___x_1329_);
v___y_1316_ = v___y_1324_;
v___y_1317_ = v___x_1330_;
goto v___jp_1315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriorityWithPid___boxed(lean_object* v_pid_1337_, lean_object* v_priority_1338_, lean_object* v_a_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l_Lasm_JS_Node_os_setPriorityWithPid(v_pid_1337_, v_priority_1338_);
return v_res_1340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_tmpdir(){
_start:
{
uint8_t v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1350_ = 0;
v___x_1351_ = ((lean_object*)(l_Lasm_JS_Node_os_tmpdir___closed__2));
v___x_1352_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1353_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1351_, v___x_1352_, v___x_1350_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_tmpdir___boxed(lean_object* v_a_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l_Lasm_JS_Node_os_tmpdir();
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_totalmem(){
_start:
{
uint8_t v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1365_ = 0;
v___x_1366_ = ((lean_object*)(l_Lasm_JS_Node_os_totalmem___closed__2));
v___x_1367_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1368_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_1366_, v___x_1367_, v___x_1365_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_totalmem___boxed(lean_object* v_a_1369_){
_start:
{
lean_object* v_res_1370_; 
v_res_1370_ = l_Lasm_JS_Node_os_totalmem();
return v_res_1370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_type(){
_start:
{
uint8_t v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1380_ = 0;
v___x_1381_ = ((lean_object*)(l_Lasm_JS_Node_os_type___closed__2));
v___x_1382_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1383_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1381_, v___x_1382_, v___x_1380_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_type___boxed(lean_object* v_a_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_Lasm_JS_Node_os_type();
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0(lean_object* v_context_1387_, lean_object* v_d_1388_){
_start:
{
lean_object* v___y_1391_; lean_object* v___y_1392_; 
if (lean_obj_tag(v_d_1388_) == 3)
{
double v_n_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v_n_1396_ = lean_ctor_get_float(v_d_1388_, 0);
lean_dec_ref_known(v_d_1388_, 0);
v___x_1397_ = lean_box_float(v_n_1396_);
v___x_1398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1397_);
return v___x_1398_;
}
else
{
lean_object* v___x_1399_; lean_object* v_received_1401_; 
v___x_1399_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
if (lean_obj_tag(v_d_1388_) == 9)
{
lean_object* v_value_1415_; lean_object* v_description_1416_; uint8_t v___x_1417_; 
v_value_1415_ = lean_ctor_get(v_d_1388_, 0);
v_description_1416_ = lean_ctor_get(v_d_1388_, 1);
v___x_1417_ = lean_string_dec_eq(v_description_1416_, v___x_1399_);
if (v___x_1417_ == 0)
{
goto v___jp_1413_;
}
else
{
uint32_t v___x_1418_; uint64_t v___x_1419_; lean_object* v___x_1420_; uint32_t v___x_1421_; lean_object* v___x_1422_; 
lean_inc_n(v_value_1415_, 2);
lean_dec_ref_known(v_d_1388_, 2);
v___x_1418_ = 206;
v___x_1419_ = 0ULL;
v___x_1420_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1420_, 0, v_value_1415_);
lean_ctor_set(v___x_1420_, 1, v___x_1399_);
v___x_1421_ = lasm_js_value_handle(v_value_1415_);
lean_dec(v_value_1415_);
v___x_1422_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1418_, v___x_1419_, v___x_1420_, v___x_1421_);
lean_dec_ref_known(v___x_1420_, 2);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; uint8_t v___x_1424_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1423_);
lean_dec_ref_known(v___x_1422_, 1);
v___x_1424_ = lean_string_validate_utf8(v_a_1423_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1425_; lean_object* v___x_1426_; 
lean_dec(v_a_1423_);
v___x_1425_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_1426_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1425_);
v_received_1401_ = v___x_1426_;
goto v___jp_1400_;
}
else
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_string_from_utf8_unchecked(v_a_1423_);
v_received_1401_ = v___x_1427_;
goto v___jp_1400_;
}
}
else
{
lean_object* v___x_1428_; 
lean_dec_ref_known(v___x_1422_, 1);
v___x_1428_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v_received_1401_ = v___x_1428_;
goto v___jp_1400_;
}
}
}
else
{
goto v___jp_1413_;
}
v___jp_1400_:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; uint8_t v___x_1411_; 
v___x_1402_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1403_ = lean_string_append(v___x_1402_, v_context_1387_);
v___x_1404_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_1405_ = lean_string_append(v___x_1403_, v___x_1404_);
v___x_1406_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0___closed__0));
v___x_1407_ = lean_string_append(v___x_1405_, v___x_1406_);
v___x_1408_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_1409_ = lean_string_append(v___x_1407_, v___x_1408_);
v___x_1410_ = lean_string_append(v___x_1409_, v_received_1401_);
lean_dec_ref(v_received_1401_);
v___x_1411_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6);
if (v___x_1411_ == 0)
{
lean_object* v___x_1412_; 
v___x_1412_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___y_1391_ = v___x_1410_;
v___y_1392_ = v___x_1412_;
goto v___jp_1390_;
}
else
{
v___y_1391_ = v___x_1410_;
v___y_1392_ = v___x_1399_;
goto v___jp_1390_;
}
}
v___jp_1413_:
{
lean_object* v___x_1414_; 
v___x_1414_ = l_Lasm_JS_Data_describe(v_d_1388_);
v_received_1401_ = v___x_1414_;
goto v___jp_1400_;
}
}
v___jp_1390_:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1393_ = lean_string_append(v___y_1391_, v___y_1392_);
v___x_1394_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
v___x_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
return v___x_1395_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0___boxed(lean_object* v_context_1429_, lean_object* v_d_1430_, lean_object* v_a_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0(v_context_1429_, v_d_1430_);
lean_dec_ref(v_context_1429_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0(lean_object* v_b_1433_, lean_object* v_args_1434_, uint8_t v_await_1435_){
_start:
{
uint64_t v___y_1438_; uint64_t v___y_1439_; uint64_t v___x_1482_; uint64_t v___y_1484_; 
v___x_1482_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_1435_ == 0)
{
uint64_t v___x_1489_; 
v___x_1489_ = 0ULL;
v___y_1484_ = v___x_1489_;
goto v___jp_1483_;
}
else
{
uint64_t v___x_1490_; 
v___x_1490_ = 2ULL;
v___y_1484_ = v___x_1490_;
goto v___jp_1483_;
}
v___jp_1437_:
{
uint64_t v_flags_1440_; uint32_t v___x_1441_; lean_object* v___x_1442_; uint32_t v___x_1443_; lean_object* v___x_1444_; 
v_flags_1440_ = lean_uint64_lor(v___y_1438_, v___y_1439_);
v___x_1441_ = 214;
v___x_1442_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1433_, v_args_1434_);
v___x_1443_ = 0;
v___x_1444_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1441_, v_flags_1440_, v___x_1442_, v___x_1443_);
lean_dec(v___x_1442_);
if (lean_obj_tag(v___x_1444_) == 0)
{
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v_a_1445_; lean_object* v___x_1446_; 
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1444_, 1);
v___x_1446_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1445_);
lean_dec(v_a_1445_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1446_, 1);
v___x_1448_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1433_);
v___x_1449_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0(v___x_1448_, v_a_1447_);
lean_dec_ref(v___x_1448_);
return v___x_1449_;
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
v_a_1450_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1446_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1446_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
v_a_1458_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1444_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1444_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
lean_ctor_set_tag(v___x_1460_, 1);
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1481_; 
v_a_1466_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1468_ = v___x_1444_;
v_isShared_1469_ = v_isSharedCheck_1481_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1444_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1481_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1479_; 
v___x_1470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1471_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1433_);
v___x_1472_ = lean_string_append(v___x_1470_, v___x_1471_);
lean_dec_ref(v___x_1471_);
v___x_1473_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1474_ = lean_string_append(v___x_1472_, v___x_1473_);
v___x_1475_ = lean_io_error_to_string(v_a_1466_);
v___x_1476_ = lean_string_append(v___x_1474_, v___x_1475_);
lean_dec_ref(v___x_1475_);
v___x_1477_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1476_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 0, v___x_1477_);
v___x_1479_ = v___x_1468_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1477_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
v___jp_1483_:
{
uint8_t v_construct_1485_; uint64_t v___x_1486_; 
v_construct_1485_ = lean_ctor_get_uint8(v_b_1433_, sizeof(void*)*4);
v___x_1486_ = lean_uint64_lor(v___x_1482_, v___y_1484_);
if (v_construct_1485_ == 0)
{
uint64_t v___x_1487_; 
v___x_1487_ = 0ULL;
v___y_1438_ = v___x_1486_;
v___y_1439_ = v___x_1487_;
goto v___jp_1437_;
}
else
{
uint64_t v___x_1488_; 
v___x_1488_ = 4ULL;
v___y_1438_ = v___x_1486_;
v___y_1439_ = v___x_1488_;
goto v___jp_1437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0___boxed(lean_object* v_b_1491_, lean_object* v_args_1492_, lean_object* v_await_1493_, lean_object* v_a_1494_){
_start:
{
uint8_t v_await_boxed_1495_; lean_object* v_res_1496_; 
v_await_boxed_1495_ = lean_unbox(v_await_1493_);
v_res_1496_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0(v_b_1491_, v_args_1492_, v_await_boxed_1495_);
lean_dec_ref(v_b_1491_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_uptime(){
_start:
{
uint8_t v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1506_ = 0;
v___x_1507_ = ((lean_object*)(l_Lasm_JS_Node_os_uptime___closed__2));
v___x_1508_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1509_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0(v___x_1507_, v___x_1508_, v___x_1506_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_uptime___boxed(lean_object* v_a_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Lasm_JS_Node_os_uptime();
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0_spec__0(lean_object* v_x_1512_){
_start:
{
if (lean_obj_tag(v_x_1512_) == 0)
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_box(0);
return v___x_1513_;
}
else
{
lean_object* v_val_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
v_val_1514_ = lean_ctor_get(v_x_1512_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v_x_1512_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v_x_1512_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_val_1514_);
lean_dec(v_x_1512_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
lean_ctor_set_tag(v___x_1516_, 4);
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_val_1514_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0(lean_object* v_x_1522_){
_start:
{
if (lean_obj_tag(v_x_1522_) == 0)
{
lean_object* v___x_1523_; 
v___x_1523_ = lean_box(0);
return v___x_1523_;
}
else
{
lean_object* v_val_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v_val_1524_ = lean_ctor_get(v_x_1522_, 0);
lean_inc(v_val_1524_);
lean_dec_ref_known(v_x_1522_, 1);
v___x_1525_ = ((lean_object*)(l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0___closed__0));
v___x_1526_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0_spec__0(v_val_1524_);
v___x_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1525_);
lean_ctor_set(v___x_1527_, 1, v___x_1526_);
v___x_1528_ = lean_unsigned_to_nat(1u);
v___x_1529_ = lean_mk_empty_array_with_capacity(v___x_1528_);
v___x_1530_ = lean_array_push(v___x_1529_, v___x_1527_);
v___x_1531_ = l_Lasm_JS_Web_Support_fields(v___x_1530_);
lean_dec_ref(v___x_1530_);
return v___x_1531_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_userInfo(lean_object* v_options_1540_){
_start:
{
uint8_t v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1542_ = 0;
v___x_1543_ = lean_unsigned_to_nat(1u);
v___x_1544_ = ((lean_object*)(l_Lasm_JS_Node_os_userInfo___closed__2));
v___x_1545_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0(v_options_1540_);
v___x_1546_ = lean_mk_empty_array_with_capacity(v___x_1543_);
v___x_1547_ = lean_array_push(v___x_1546_, v___x_1545_);
v___x_1548_ = l_Lasm_JS_Web_Support_args(v___x_1547_);
v___x_1549_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(v___x_1544_, v___x_1548_, v___x_1542_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_userInfo___boxed(lean_object* v_options_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Lasm_JS_Node_os_userInfo(v_options_1550_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_version(){
_start:
{
uint8_t v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1562_ = 0;
v___x_1563_ = ((lean_object*)(l_Lasm_JS_Node_os_version___closed__2));
v___x_1564_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1565_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1563_, v___x_1564_, v___x_1562_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_version___boxed(lean_object* v_a_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lasm_JS_Node_os_version();
return v_res_1567_;
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
