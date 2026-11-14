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
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9_value;
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
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
lean_inc_ref(v_specifier_18_);
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_53_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___x_54_ = lean_unsigned_to_nat(46u);
v___x_55_ = lean_unsigned_to_nat(193u);
v___x_56_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6));
v___x_57_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5));
v___x_58_ = l_mkPanicMessageWithDecl(v___x_57_, v___x_56_, v___x_55_, v___x_54_, v___x_53_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_context_60_, lean_object* v_d_61_){
_start:
{
lean_object* v_received_64_; 
if (lean_obj_tag(v_d_61_) == 4)
{
lean_object* v_s_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_85_; 
v_s_78_ = lean_ctor_get(v_d_61_, 0);
v_isSharedCheck_85_ = !lean_is_exclusive(v_d_61_);
if (v_isSharedCheck_85_ == 0)
{
v___x_80_ = v_d_61_;
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_s_78_);
lean_dec(v_d_61_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_83_; 
if (v_isShared_81_ == 0)
{
lean_ctor_set_tag(v___x_80_, 0);
v___x_83_ = v___x_80_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v_s_78_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
else
{
if (lean_obj_tag(v_d_61_) == 9)
{
lean_object* v_value_86_; lean_object* v_description_87_; lean_object* v___x_88_; uint8_t v___x_89_; 
v_value_86_ = lean_ctor_get(v_d_61_, 0);
v_description_87_ = lean_ctor_get(v_d_61_, 1);
v___x_88_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_89_ = lean_string_dec_eq(v_description_87_, v___x_88_);
if (v___x_89_ == 0)
{
goto v___jp_76_;
}
else
{
uint32_t v___x_90_; uint64_t v___x_91_; lean_object* v___x_92_; uint32_t v___x_93_; lean_object* v___x_94_; 
lean_inc_n(v_value_86_, 2);
lean_dec_ref_known(v_d_61_, 2);
v___x_90_ = 206;
v___x_91_ = 0ULL;
v___x_92_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_92_, 0, v_value_86_);
lean_ctor_set(v___x_92_, 1, v___x_88_);
v___x_93_ = lasm_js_value_handle(v_value_86_);
lean_dec(v_value_86_);
v___x_94_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_90_, v___x_91_, v___x_92_, v___x_93_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; uint8_t v___x_96_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
lean_inc(v_a_95_);
lean_dec_ref_known(v___x_94_, 1);
v___x_96_ = lean_string_validate_utf8(v_a_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v___x_98_; 
lean_dec(v_a_95_);
v___x_97_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8);
v___x_98_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_97_);
v_received_64_ = v___x_98_;
goto v___jp_63_;
}
else
{
lean_object* v___x_99_; 
v___x_99_ = lean_string_from_utf8_unchecked(v_a_95_);
v_received_64_ = v___x_99_;
goto v___jp_63_;
}
}
else
{
lean_object* v___x_100_; 
lean_dec_ref_known(v___x_94_, 1);
v___x_100_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9));
v_received_64_ = v___x_100_;
goto v___jp_63_;
}
}
}
else
{
goto v___jp_76_;
}
}
v___jp_63_:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_65_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_66_ = lean_string_append(v___x_65_, v_context_60_);
v___x_67_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_68_ = lean_string_append(v___x_66_, v___x_67_);
v___x_69_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_70_ = lean_string_append(v___x_68_, v___x_69_);
v___x_71_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_72_ = lean_string_append(v___x_70_, v___x_71_);
v___x_73_ = lean_string_append(v___x_72_, v_received_64_);
lean_dec_ref(v_received_64_);
v___x_74_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
v___x_75_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
return v___x_75_;
}
v___jp_76_:
{
lean_object* v___x_77_; 
v___x_77_ = l_Lasm_JS_Data_describe(v_d_61_);
v_received_64_ = v___x_77_;
goto v___jp_63_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_context_101_, lean_object* v_d_102_, lean_object* v_a_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_101_, v_d_102_);
lean_dec_ref(v_context_101_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_105_, lean_object* v_bytes_106_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_106_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_110_; 
v_a_109_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_a_109_);
lean_dec_ref_known(v___x_108_, 1);
v___x_110_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_105_, v_a_109_);
return v___x_110_;
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_118_; 
v_a_111_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_118_ == 0)
{
v___x_113_ = v___x_108_;
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_108_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_119_, lean_object* v_bytes_120_, lean_object* v_a_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3(v_context_119_, v_bytes_120_);
lean_dec_ref(v_bytes_120_);
lean_dec_ref(v_context_119_);
return v_res_122_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_123_; uint64_t v___x_124_; 
v___x_123_ = 0;
v___x_124_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2(lean_object* v_o_126_, lean_object* v_key_127_){
_start:
{
lean_object* v_k_129_; lean_object* v___x_130_; 
v_k_129_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_129_, 0, v_key_127_);
lean_inc_ref(v_k_129_);
v___x_130_ = l_Lasm_JS_Wire_encodeIO(v_k_129_);
if (lean_obj_tag(v___x_130_) == 0)
{
lean_object* v_a_131_; uint32_t v___x_132_; uint32_t v___x_133_; uint64_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v_a_131_ = lean_ctor_get(v___x_130_, 0);
lean_inc(v_a_131_);
lean_dec_ref_known(v___x_130_, 1);
v___x_132_ = 203;
v___x_133_ = lasm_js_value_handle(v_o_126_);
v___x_134_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
v___x_135_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_136_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_136_, 0, v_o_126_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = lean_unsigned_to_nat(2u);
v___x_138_ = lean_mk_empty_array_with_capacity(v___x_137_);
lean_inc_ref(v_k_129_);
v___x_139_ = lean_array_push(v___x_138_, v_k_129_);
v___x_140_ = lean_array_push(v___x_139_, v___x_136_);
v___x_141_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
v___x_142_ = lasm_js_call(v___x_132_, v___x_133_, v___x_134_, v_a_131_, v___x_141_);
lean_dec_ref_known(v___x_141_, 1);
lean_dec(v_a_131_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_a_143_);
lean_dec_ref_known(v___x_142_, 1);
v___x_144_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__1));
v___x_145_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_129_);
v___x_146_ = lean_string_append(v___x_144_, v___x_145_);
lean_dec_ref(v___x_145_);
v___x_147_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3(v___x_146_, v_a_143_);
lean_dec(v_a_143_);
lean_dec_ref(v___x_146_);
return v___x_147_;
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
lean_dec_ref_known(v_k_129_, 1);
v_a_148_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_142_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_142_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
lean_dec_ref_known(v_k_129_, 1);
lean_dec(v_o_126_);
v_a_156_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_130_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_130_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___boxed(lean_object* v_o_164_, lean_object* v_key_165_, lean_object* v_a_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2(v_o_164_, v_key_165_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1(lean_object* v_module_169_, lean_object* v_o_170_, lean_object* v_a_171_){
_start:
{
if (lean_obj_tag(v_a_171_) == 0)
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
lean_dec(v_o_170_);
v___x_173_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___closed__0));
v___x_174_ = lean_string_append(v___x_173_, v_module_169_);
v___x_175_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
v___x_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
return v___x_176_;
}
else
{
lean_object* v_tail_177_; 
v_tail_177_ = lean_ctor_get(v_a_171_, 1);
if (lean_obj_tag(v_tail_177_) == 0)
{
lean_object* v_head_178_; lean_object* v___x_179_; 
v_head_178_ = lean_ctor_get(v_a_171_, 0);
lean_inc(v_head_178_);
lean_dec_ref_known(v_a_171_, 2);
v___x_179_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2(v_o_170_, v_head_178_);
return v___x_179_;
}
else
{
lean_object* v_head_180_; lean_object* v___x_181_; 
lean_inc(v_tail_177_);
v_head_180_ = lean_ctor_get(v_a_171_, 0);
lean_inc(v_head_180_);
lean_dec_ref_known(v_a_171_, 2);
v___x_181_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_170_, v_head_180_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref_known(v___x_181_, 1);
v_o_170_ = v_a_182_;
v_a_171_ = v_tail_177_;
goto _start;
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_dec(v_tail_177_);
v_a_184_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_181_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_181_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___boxed(lean_object* v_module_192_, lean_object* v_o_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1(v_module_192_, v_o_193_, v_a_194_);
lean_dec_ref(v_module_192_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(lean_object* v_module_197_, lean_object* v_path_198_){
_start:
{
lean_object* v___x_200_; 
lean_inc_ref(v_module_197_);
v___x_200_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0(v_module_197_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v___x_202_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc(v_a_201_);
lean_dec_ref_known(v___x_200_, 1);
v___x_202_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1(v_module_197_, v_a_201_, v_path_198_);
lean_dec_ref(v_module_197_);
return v___x_202_;
}
else
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_210_; 
lean_dec(v_path_198_);
lean_dec_ref(v_module_197_);
v_a_203_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_210_ == 0)
{
v___x_205_ = v___x_200_;
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_200_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_206_ == 0)
{
v___x_208_ = v___x_205_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_a_203_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0___boxed(lean_object* v_module_211_, lean_object* v_path_212_, lean_object* v_a_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(v_module_211_, v_path_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_EOL(){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__0));
v___x_222_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__2));
v___x_223_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(v___x_221_, v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_EOL___boxed(lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lasm_JS_Node_os_EOL();
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_bytes_226_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_226_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_228_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_228_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
else
{
return v___x_228_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_bytes_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(v_bytes_237_);
lean_dec_ref(v_bytes_237_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1(lean_object* v_o_240_, lean_object* v_key_241_){
_start:
{
lean_object* v_k_243_; lean_object* v___x_244_; 
v_k_243_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_243_, 0, v_key_241_);
lean_inc_ref(v_k_243_);
v___x_244_ = l_Lasm_JS_Wire_encodeIO(v_k_243_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; uint32_t v___x_246_; uint32_t v___x_247_; uint64_t v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_245_);
lean_dec_ref_known(v___x_244_, 1);
v___x_246_ = 203;
v___x_247_ = lasm_js_value_handle(v_o_240_);
v___x_248_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
v___x_249_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_250_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_250_, 0, v_o_240_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = lean_unsigned_to_nat(2u);
v___x_252_ = lean_mk_empty_array_with_capacity(v___x_251_);
v___x_253_ = lean_array_push(v___x_252_, v_k_243_);
v___x_254_ = lean_array_push(v___x_253_, v___x_250_);
v___x_255_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
v___x_256_ = lasm_js_call(v___x_246_, v___x_247_, v___x_248_, v_a_245_, v___x_255_);
lean_dec_ref_known(v___x_255_, 1);
lean_dec(v_a_245_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_258_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_a_257_);
lean_dec_ref_known(v___x_256_, 1);
v___x_258_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(v_a_257_);
lean_dec(v_a_257_);
return v___x_258_;
}
else
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_266_; 
v_a_259_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_266_ == 0)
{
v___x_261_ = v___x_256_;
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v___x_256_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_264_; 
if (v_isShared_262_ == 0)
{
v___x_264_ = v___x_261_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_a_259_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
else
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec_ref_known(v_k_243_, 1);
lean_dec(v_o_240_);
v_a_267_ = lean_ctor_get(v___x_244_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_244_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_244_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1___boxed(lean_object* v_o_275_, lean_object* v_key_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1(v_o_275_, v_key_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0(lean_object* v_module_279_, lean_object* v_o_280_, lean_object* v_a_281_){
_start:
{
if (lean_obj_tag(v_a_281_) == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
lean_dec(v_o_280_);
v___x_283_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1___closed__0));
v___x_284_ = lean_string_append(v___x_283_, v_module_279_);
v___x_285_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
v___x_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
return v___x_286_;
}
else
{
lean_object* v_tail_287_; 
v_tail_287_ = lean_ctor_get(v_a_281_, 1);
if (lean_obj_tag(v_tail_287_) == 0)
{
lean_object* v_head_288_; lean_object* v___x_289_; 
v_head_288_ = lean_ctor_get(v_a_281_, 0);
lean_inc(v_head_288_);
lean_dec_ref_known(v_a_281_, 2);
v___x_289_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1(v_o_280_, v_head_288_);
return v___x_289_;
}
else
{
lean_object* v_head_290_; lean_object* v___x_291_; 
lean_inc(v_tail_287_);
v_head_290_ = lean_ctor_get(v_a_281_, 0);
lean_inc(v_head_290_);
lean_dec_ref_known(v_a_281_, 2);
v___x_291_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_280_, v_head_290_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v_a_292_; 
v_a_292_ = lean_ctor_get(v___x_291_, 0);
lean_inc(v_a_292_);
lean_dec_ref_known(v___x_291_, 1);
v_o_280_ = v_a_292_;
v_a_281_ = v_tail_287_;
goto _start;
}
else
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_301_; 
lean_dec(v_tail_287_);
v_a_294_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_301_ == 0)
{
v___x_296_ = v___x_291_;
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_291_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_299_; 
if (v_isShared_297_ == 0)
{
v___x_299_ = v___x_296_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_294_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0___boxed(lean_object* v_module_302_, lean_object* v_o_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0(v_module_302_, v_o_303_, v_a_304_);
lean_dec_ref(v_module_302_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0(lean_object* v_module_307_, lean_object* v_path_308_){
_start:
{
lean_object* v___x_310_; 
lean_inc_ref(v_module_307_);
v___x_310_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__0(v_module_307_);
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; lean_object* v___x_312_; 
v_a_311_ = lean_ctor_get(v___x_310_, 0);
lean_inc(v_a_311_);
lean_dec_ref_known(v___x_310_, 1);
v___x_312_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0(v_module_307_, v_a_311_, v_path_308_);
lean_dec_ref(v_module_307_);
return v___x_312_;
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec(v_path_308_);
lean_dec_ref(v_module_307_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0___boxed(lean_object* v_module_321_, lean_object* v_path_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0(v_module_321_, v_path_322_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_constants(){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_330_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__0));
v___x_331_ = ((lean_object*)(l_Lasm_JS_Node_os_constants___closed__1));
v___x_332_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0(v___x_330_, v___x_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_constants___boxed(lean_object* v_a_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lasm_JS_Node_os_constants();
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_d_335_){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_337_, 0, v_d_335_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_d_338_, lean_object* v_a_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_d_338_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_341_, lean_object* v_d_342_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_344_, 0, v_d_342_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_345_, lean_object* v_d_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_345_, v_d_346_);
lean_dec_ref(v_context_345_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_349_, lean_object* v_bytes_350_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___redArg(v_bytes_350_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_353_, lean_object* v_bytes_354_, lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_constants_spec__0_spec__0_spec__1_spec__2(v_context_353_, v_bytes_354_);
lean_dec_ref(v_bytes_354_);
lean_dec_ref(v_context_353_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_devNull(){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = ((lean_object*)(l_Lasm_JS_Node_os_EOL___closed__0));
v___x_363_ = ((lean_object*)(l_Lasm_JS_Node_os_devNull___closed__1));
v___x_364_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0(v___x_362_, v___x_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_devNull___boxed(lean_object* v_a_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lasm_JS_Node_os_devNull();
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0(lean_object* v_context_371_, lean_object* v_d_372_){
_start:
{
lean_object* v___y_375_; lean_object* v___y_376_; lean_object* v___y_381_; lean_object* v_received_382_; lean_object* v___y_401_; lean_object* v_a_404_; 
switch(lean_obj_tag(v_d_372_))
{
case 3:
{
double v_n_428_; lean_object* v___x_429_; 
v_n_428_ = lean_ctor_get_float(v_d_372_, 0);
v___x_429_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_428_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v___x_430_; 
v___x_430_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__3));
v_a_404_ = v___x_430_;
goto v___jp_403_;
}
else
{
lean_object* v_val_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_438_; 
lean_dec_ref_known(v_d_372_, 0);
v_val_431_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_438_ == 0)
{
v___x_433_ = v___x_429_;
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_val_431_);
lean_dec(v___x_429_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_436_; 
if (v_isShared_434_ == 0)
{
lean_ctor_set_tag(v___x_433_, 0);
v___x_436_ = v___x_433_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_val_431_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
case 5:
{
lean_object* v_i_439_; lean_object* v___x_440_; 
v_i_439_ = lean_ctor_get(v_d_372_, 0);
lean_inc(v_i_439_);
lean_dec_ref_known(v_d_372_, 1);
v___x_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_440_, 0, v_i_439_);
return v___x_440_;
}
default: 
{
lean_object* v___x_441_; 
v___x_441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v_a_404_ = v___x_441_;
goto v___jp_403_;
}
}
v___jp_374_:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_377_ = lean_string_append(v___y_375_, v___y_376_);
lean_dec_ref(v___y_376_);
v___x_378_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
v___x_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
return v___x_379_;
}
v___jp_380_:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_383_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_384_ = lean_string_append(v___x_383_, v_context_371_);
v___x_385_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_386_ = lean_string_append(v___x_384_, v___x_385_);
v___x_387_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__0));
v___x_388_ = lean_string_append(v___x_386_, v___x_387_);
v___x_389_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_390_ = lean_string_append(v___x_388_, v___x_389_);
v___x_391_ = lean_string_append(v___x_390_, v_received_382_);
lean_dec_ref(v_received_382_);
v___x_392_ = lean_string_utf8_byte_size(v___y_381_);
v___x_393_ = lean_unsigned_to_nat(0u);
v___x_394_ = lean_nat_dec_eq(v___x_392_, v___x_393_);
if (v___x_394_ == 0)
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_395_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1));
v___x_396_ = lean_string_append(v___x_395_, v___y_381_);
v___x_397_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2));
v___x_398_ = lean_string_append(v___x_396_, v___x_397_);
v___y_375_ = v___x_391_;
v___y_376_ = v___x_398_;
goto v___jp_374_;
}
else
{
lean_object* v___x_399_; 
v___x_399_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___y_375_ = v___x_391_;
v___y_376_ = v___x_399_;
goto v___jp_374_;
}
}
v___jp_400_:
{
lean_object* v___x_402_; 
v___x_402_ = l_Lasm_JS_Data_describe(v_d_372_);
v___y_381_ = v___y_401_;
v_received_382_ = v___x_402_;
goto v___jp_380_;
}
v___jp_403_:
{
if (lean_obj_tag(v_d_372_) == 9)
{
lean_object* v_value_405_; lean_object* v_description_406_; lean_object* v___x_407_; uint8_t v___x_408_; 
v_value_405_ = lean_ctor_get(v_d_372_, 0);
v_description_406_ = lean_ctor_get(v_d_372_, 1);
v___x_407_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_408_ = lean_string_dec_eq(v_description_406_, v___x_407_);
if (v___x_408_ == 0)
{
v___y_401_ = v_a_404_;
goto v___jp_400_;
}
else
{
lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_425_; 
lean_inc(v_value_405_);
v_isSharedCheck_425_ = !lean_is_exclusive(v_d_372_);
if (v_isSharedCheck_425_ == 0)
{
lean_object* v_unused_426_; lean_object* v_unused_427_; 
v_unused_426_ = lean_ctor_get(v_d_372_, 1);
lean_dec(v_unused_426_);
v_unused_427_ = lean_ctor_get(v_d_372_, 0);
lean_dec(v_unused_427_);
v___x_410_ = v_d_372_;
v_isShared_411_ = v_isSharedCheck_425_;
goto v_resetjp_409_;
}
else
{
lean_dec(v_d_372_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_425_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
uint32_t v___x_412_; uint64_t v___x_413_; lean_object* v___x_415_; 
v___x_412_ = 206;
v___x_413_ = 0ULL;
lean_inc(v_value_405_);
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 1, v___x_407_);
v___x_415_ = v___x_410_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_value_405_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v___x_407_);
v___x_415_ = v_reuseFailAlloc_424_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
uint32_t v___x_416_; lean_object* v___x_417_; 
v___x_416_ = lasm_js_value_handle(v_value_405_);
lean_dec(v_value_405_);
v___x_417_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_412_, v___x_413_, v___x_415_, v___x_416_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; uint8_t v___x_419_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref_known(v___x_417_, 1);
v___x_419_ = lean_string_validate_utf8(v_a_418_);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; lean_object* v___x_421_; 
lean_dec(v_a_418_);
v___x_420_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8);
v___x_421_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_420_);
v___y_381_ = v_a_404_;
v_received_382_ = v___x_421_;
goto v___jp_380_;
}
else
{
lean_object* v___x_422_; 
v___x_422_ = lean_string_from_utf8_unchecked(v_a_418_);
v___y_381_ = v_a_404_;
v_received_382_ = v___x_422_;
goto v___jp_380_;
}
}
else
{
lean_object* v___x_423_; 
lean_dec_ref_known(v___x_417_, 1);
v___x_423_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9));
v___y_381_ = v_a_404_;
v_received_382_ = v___x_423_;
goto v___jp_380_;
}
}
}
}
}
else
{
v___y_401_ = v_a_404_;
goto v___jp_400_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___boxed(lean_object* v_context_442_, lean_object* v_d_443_, lean_object* v_a_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0(v_context_442_, v_d_443_);
lean_dec_ref(v_context_442_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(lean_object* v_b_447_, lean_object* v_args_448_, uint8_t v_await_449_){
_start:
{
uint64_t v___y_452_; uint64_t v___y_453_; uint64_t v___x_488_; uint64_t v___y_490_; 
v___x_488_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_449_ == 0)
{
uint64_t v___x_495_; 
v___x_495_ = 0ULL;
v___y_490_ = v___x_495_;
goto v___jp_489_;
}
else
{
uint64_t v___x_496_; 
v___x_496_ = 2ULL;
v___y_490_ = v___x_496_;
goto v___jp_489_;
}
v___jp_451_:
{
uint64_t v_flags_454_; uint32_t v___x_455_; lean_object* v___x_456_; uint32_t v___x_457_; lean_object* v___x_458_; 
v_flags_454_ = lean_uint64_lor(v___y_452_, v___y_453_);
v___x_455_ = 214;
v___x_456_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_447_, v_args_448_);
v___x_457_ = 0;
v___x_458_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_455_, v_flags_454_, v___x_456_, v___x_457_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_460_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v___x_460_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_459_);
lean_dec(v_a_459_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_460_, 1);
v___x_462_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_447_);
v___x_463_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0(v___x_462_, v_a_461_);
lean_dec_ref(v___x_462_);
return v___x_463_;
}
else
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
v_a_464_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_460_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_460_);
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
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_487_; 
v_a_472_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_487_ == 0)
{
v___x_474_ = v___x_458_;
v_isShared_475_ = v_isSharedCheck_487_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_458_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_487_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_485_; 
v___x_476_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_477_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_447_);
v___x_478_ = lean_string_append(v___x_476_, v___x_477_);
lean_dec_ref(v___x_477_);
v___x_479_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_480_ = lean_string_append(v___x_478_, v___x_479_);
v___x_481_ = lean_io_error_to_string(v_a_472_);
v___x_482_ = lean_string_append(v___x_480_, v___x_481_);
lean_dec_ref(v___x_481_);
v___x_483_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_483_);
v___x_485_ = v___x_474_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
v___jp_489_:
{
uint8_t v_construct_491_; uint64_t v___x_492_; 
v_construct_491_ = lean_ctor_get_uint8(v_b_447_, sizeof(void*)*4);
v___x_492_ = lean_uint64_lor(v___x_488_, v___y_490_);
if (v_construct_491_ == 0)
{
uint64_t v___x_493_; 
v___x_493_ = 0ULL;
v___y_452_ = v___x_492_;
v___y_453_ = v___x_493_;
goto v___jp_451_;
}
else
{
uint64_t v___x_494_; 
v___x_494_ = 4ULL;
v___y_452_ = v___x_492_;
v___y_453_ = v___x_494_;
goto v___jp_451_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___boxed(lean_object* v_b_497_, lean_object* v_args_498_, lean_object* v_await_499_, lean_object* v_a_500_){
_start:
{
uint8_t v_await_boxed_501_; lean_object* v_res_502_; 
v_await_boxed_501_ = lean_unbox(v_await_499_);
v_res_502_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v_b_497_, v_args_498_, v_await_boxed_501_);
lean_dec_ref(v_b_497_);
return v_res_502_;
}
}
static lean_object* _init_l_Lasm_JS_Node_os_availableParallelism___closed__4(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = ((lean_object*)(l_Lasm_JS_Node_os_availableParallelism___closed__3));
v___x_514_ = l_Lasm_JS_Web_Support_args(v___x_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_availableParallelism(){
_start:
{
uint8_t v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_516_ = 0;
v___x_517_ = ((lean_object*)(l_Lasm_JS_Node_os_availableParallelism___closed__2));
v___x_518_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_519_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_517_, v___x_518_, v___x_516_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_availableParallelism___boxed(lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lasm_JS_Node_os_availableParallelism();
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(lean_object* v_b_522_, lean_object* v_args_523_, uint8_t v_await_524_){
_start:
{
uint64_t v___y_527_; uint64_t v___y_528_; uint64_t v___x_563_; uint64_t v___y_565_; 
v___x_563_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_524_ == 0)
{
uint64_t v___x_570_; 
v___x_570_ = 0ULL;
v___y_565_ = v___x_570_;
goto v___jp_564_;
}
else
{
uint64_t v___x_571_; 
v___x_571_ = 2ULL;
v___y_565_ = v___x_571_;
goto v___jp_564_;
}
v___jp_526_:
{
uint64_t v_flags_529_; uint32_t v___x_530_; lean_object* v___x_531_; uint32_t v___x_532_; lean_object* v___x_533_; 
v_flags_529_ = lean_uint64_lor(v___y_527_, v___y_528_);
v___x_530_ = 214;
v___x_531_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_522_, v_args_523_);
v___x_532_ = 0;
v___x_533_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_530_, v_flags_529_, v___x_531_, v___x_532_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_535_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_534_);
lean_dec_ref_known(v___x_533_, 1);
v___x_535_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_534_);
lean_dec(v_a_534_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_535_, 1);
v___x_537_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_522_);
v___x_538_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4(v___x_537_, v_a_536_);
lean_dec_ref(v___x_537_);
return v___x_538_;
}
else
{
lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_546_; 
v_a_539_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_546_ == 0)
{
v___x_541_ = v___x_535_;
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_535_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_544_; 
if (v_isShared_542_ == 0)
{
v___x_544_ = v___x_541_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_a_539_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
else
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_562_; 
v_a_547_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_562_ == 0)
{
v___x_549_ = v___x_533_;
v_isShared_550_ = v_isSharedCheck_562_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_533_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_562_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_560_; 
v___x_551_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_552_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_522_);
v___x_553_ = lean_string_append(v___x_551_, v___x_552_);
lean_dec_ref(v___x_552_);
v___x_554_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_555_ = lean_string_append(v___x_553_, v___x_554_);
v___x_556_ = lean_io_error_to_string(v_a_547_);
v___x_557_ = lean_string_append(v___x_555_, v___x_556_);
lean_dec_ref(v___x_556_);
v___x_558_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v___x_558_);
v___x_560_ = v___x_549_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_558_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
v___jp_564_:
{
uint8_t v_construct_566_; uint64_t v___x_567_; 
v_construct_566_ = lean_ctor_get_uint8(v_b_522_, sizeof(void*)*4);
v___x_567_ = lean_uint64_lor(v___x_563_, v___y_565_);
if (v_construct_566_ == 0)
{
uint64_t v___x_568_; 
v___x_568_ = 0ULL;
v___y_527_ = v___x_567_;
v___y_528_ = v___x_568_;
goto v___jp_526_;
}
else
{
uint64_t v___x_569_; 
v___x_569_ = 4ULL;
v___y_527_ = v___x_567_;
v___y_528_ = v___x_569_;
goto v___jp_526_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0___boxed(lean_object* v_b_572_, lean_object* v_args_573_, lean_object* v_await_574_, lean_object* v_a_575_){
_start:
{
uint8_t v_await_boxed_576_; lean_object* v_res_577_; 
v_await_boxed_576_ = lean_unbox(v_await_574_);
v_res_577_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v_b_572_, v_args_573_, v_await_boxed_576_);
lean_dec_ref(v_b_572_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_arch(){
_start:
{
uint8_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_587_ = 0;
v___x_588_ = ((lean_object*)(l_Lasm_JS_Node_os_arch___closed__2));
v___x_589_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_590_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_588_, v___x_589_, v___x_587_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_arch___boxed(lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lasm_JS_Node_os_arch();
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1(size_t v_sz_593_, size_t v_i_594_, lean_object* v_bs_595_){
_start:
{
uint8_t v___x_596_; 
v___x_596_ = lean_usize_dec_lt(v_i_594_, v_sz_593_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; 
v___x_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_597_, 0, v_bs_595_);
return v___x_597_;
}
else
{
lean_object* v_v_598_; lean_object* v___x_599_; lean_object* v_bs_x27_600_; size_t v___x_601_; size_t v___x_602_; lean_object* v___x_603_; 
v_v_598_ = lean_array_uget(v_bs_595_, v_i_594_);
v___x_599_ = lean_unsigned_to_nat(0u);
v_bs_x27_600_ = lean_array_uset(v_bs_595_, v_i_594_, v___x_599_);
v___x_601_ = ((size_t)1ULL);
v___x_602_ = lean_usize_add(v_i_594_, v___x_601_);
v___x_603_ = lean_array_uset(v_bs_x27_600_, v_i_594_, v_v_598_);
v_i_594_ = v___x_602_;
v_bs_595_ = v___x_603_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_605_, lean_object* v_i_606_, lean_object* v_bs_607_){
_start:
{
size_t v_sz_boxed_608_; size_t v_i_boxed_609_; lean_object* v_res_610_; 
v_sz_boxed_608_ = lean_unbox_usize(v_sz_605_);
lean_dec(v_sz_605_);
v_i_boxed_609_ = lean_unbox_usize(v_i_606_);
lean_dec(v_i_606_);
v_res_610_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1(v_sz_boxed_608_, v_i_boxed_609_, v_bs_607_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0(lean_object* v_context_613_, lean_object* v_d_614_){
_start:
{
lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_623_; lean_object* v_received_624_; lean_object* v___y_643_; lean_object* v_a_646_; 
if (lean_obj_tag(v_d_614_) == 7)
{
lean_object* v_items_670_; size_t v_sz_671_; size_t v___x_672_; lean_object* v___x_673_; 
v_items_670_ = lean_ctor_get(v_d_614_, 0);
v_sz_671_ = lean_array_size(v_items_670_);
v___x_672_ = ((size_t)0ULL);
lean_inc_ref(v_items_670_);
v___x_673_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0_spec__1(v_sz_671_, v___x_672_, v_items_670_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_a_674_);
lean_dec_ref_known(v___x_673_, 1);
v___x_675_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__1));
v___x_676_ = lean_string_utf8_byte_size(v_a_674_);
v___x_677_ = lean_unsigned_to_nat(0u);
v___x_678_ = lean_nat_dec_eq(v___x_676_, v___x_677_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_679_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_680_ = lean_string_append(v___x_679_, v_a_674_);
lean_dec(v_a_674_);
v___x_681_ = lean_string_append(v___x_675_, v___x_680_);
lean_dec_ref(v___x_680_);
v_a_646_ = v___x_681_;
goto v___jp_645_;
}
else
{
lean_dec(v_a_674_);
v_a_646_ = v___x_675_;
goto v___jp_645_;
}
}
else
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
lean_dec_ref_known(v_d_614_, 1);
v_a_682_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_673_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_673_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
lean_ctor_set_tag(v___x_684_, 0);
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
else
{
lean_object* v___x_690_; 
v___x_690_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v_a_646_ = v___x_690_;
goto v___jp_645_;
}
v___jp_616_:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = lean_string_append(v___y_617_, v___y_618_);
lean_dec_ref(v___y_618_);
v___x_620_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
v___x_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
return v___x_621_;
}
v___jp_622_:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; uint8_t v___x_636_; 
v___x_625_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_626_ = lean_string_append(v___x_625_, v_context_613_);
v___x_627_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_628_ = lean_string_append(v___x_626_, v___x_627_);
v___x_629_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___closed__0));
v___x_630_ = lean_string_append(v___x_628_, v___x_629_);
v___x_631_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_632_ = lean_string_append(v___x_630_, v___x_631_);
v___x_633_ = lean_string_append(v___x_632_, v_received_624_);
lean_dec_ref(v_received_624_);
v___x_634_ = lean_string_utf8_byte_size(v___y_623_);
v___x_635_ = lean_unsigned_to_nat(0u);
v___x_636_ = lean_nat_dec_eq(v___x_634_, v___x_635_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_637_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1));
v___x_638_ = lean_string_append(v___x_637_, v___y_623_);
lean_dec_ref(v___y_623_);
v___x_639_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2));
v___x_640_ = lean_string_append(v___x_638_, v___x_639_);
v___y_617_ = v___x_633_;
v___y_618_ = v___x_640_;
goto v___jp_616_;
}
else
{
lean_object* v___x_641_; 
lean_dec_ref(v___y_623_);
v___x_641_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___y_617_ = v___x_633_;
v___y_618_ = v___x_641_;
goto v___jp_616_;
}
}
v___jp_642_:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lasm_JS_Data_describe(v_d_614_);
v___y_623_ = v___y_643_;
v_received_624_ = v___x_644_;
goto v___jp_622_;
}
v___jp_645_:
{
if (lean_obj_tag(v_d_614_) == 9)
{
lean_object* v_value_647_; lean_object* v_description_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v_value_647_ = lean_ctor_get(v_d_614_, 0);
v_description_648_ = lean_ctor_get(v_d_614_, 1);
v___x_649_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_650_ = lean_string_dec_eq(v_description_648_, v___x_649_);
if (v___x_650_ == 0)
{
v___y_643_ = v_a_646_;
goto v___jp_642_;
}
else
{
lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_667_; 
lean_inc(v_value_647_);
v_isSharedCheck_667_ = !lean_is_exclusive(v_d_614_);
if (v_isSharedCheck_667_ == 0)
{
lean_object* v_unused_668_; lean_object* v_unused_669_; 
v_unused_668_ = lean_ctor_get(v_d_614_, 1);
lean_dec(v_unused_668_);
v_unused_669_ = lean_ctor_get(v_d_614_, 0);
lean_dec(v_unused_669_);
v___x_652_ = v_d_614_;
v_isShared_653_ = v_isSharedCheck_667_;
goto v_resetjp_651_;
}
else
{
lean_dec(v_d_614_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_667_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
uint32_t v___x_654_; uint64_t v___x_655_; lean_object* v___x_657_; 
v___x_654_ = 206;
v___x_655_ = 0ULL;
lean_inc(v_value_647_);
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 1, v___x_649_);
v___x_657_ = v___x_652_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_value_647_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v___x_649_);
v___x_657_ = v_reuseFailAlloc_666_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
uint32_t v___x_658_; lean_object* v___x_659_; 
v___x_658_ = lasm_js_value_handle(v_value_647_);
lean_dec(v_value_647_);
v___x_659_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_654_, v___x_655_, v___x_657_, v___x_658_);
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_a_660_; uint8_t v___x_661_; 
v_a_660_ = lean_ctor_get(v___x_659_, 0);
lean_inc(v_a_660_);
lean_dec_ref_known(v___x_659_, 1);
v___x_661_ = lean_string_validate_utf8(v_a_660_);
if (v___x_661_ == 0)
{
lean_object* v___x_662_; lean_object* v___x_663_; 
lean_dec(v_a_660_);
v___x_662_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8);
v___x_663_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_662_);
v___y_623_ = v_a_646_;
v_received_624_ = v___x_663_;
goto v___jp_622_;
}
else
{
lean_object* v___x_664_; 
v___x_664_ = lean_string_from_utf8_unchecked(v_a_660_);
v___y_623_ = v_a_646_;
v_received_624_ = v___x_664_;
goto v___jp_622_;
}
}
else
{
lean_object* v___x_665_; 
lean_dec_ref_known(v___x_659_, 1);
v___x_665_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9));
v___y_623_ = v_a_646_;
v_received_624_ = v___x_665_;
goto v___jp_622_;
}
}
}
}
}
else
{
v___y_643_ = v_a_646_;
goto v___jp_642_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0___boxed(lean_object* v_context_691_, lean_object* v_d_692_, lean_object* v_a_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0(v_context_691_, v_d_692_);
lean_dec_ref(v_context_691_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0(lean_object* v_b_695_, lean_object* v_args_696_, uint8_t v_await_697_){
_start:
{
uint64_t v___y_700_; uint64_t v___y_701_; uint64_t v___x_736_; uint64_t v___y_738_; 
v___x_736_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_697_ == 0)
{
uint64_t v___x_743_; 
v___x_743_ = 0ULL;
v___y_738_ = v___x_743_;
goto v___jp_737_;
}
else
{
uint64_t v___x_744_; 
v___x_744_ = 2ULL;
v___y_738_ = v___x_744_;
goto v___jp_737_;
}
v___jp_699_:
{
uint64_t v_flags_702_; uint32_t v___x_703_; lean_object* v___x_704_; uint32_t v___x_705_; lean_object* v___x_706_; 
v_flags_702_ = lean_uint64_lor(v___y_700_, v___y_701_);
v___x_703_ = 214;
v___x_704_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_695_, v_args_696_);
v___x_705_ = 0;
v___x_706_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_703_, v_flags_702_, v___x_704_, v___x_705_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v___x_708_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_707_);
lean_dec_ref_known(v___x_706_, 1);
v___x_708_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_707_);
lean_dec(v_a_707_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v_a_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_709_);
lean_dec_ref_known(v___x_708_, 1);
v___x_710_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_695_);
v___x_711_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0_spec__0(v___x_710_, v_a_709_);
lean_dec_ref(v___x_710_);
return v___x_711_;
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
v_a_712_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_708_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_708_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_735_; 
v_a_720_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_735_ == 0)
{
v___x_722_ = v___x_706_;
v_isShared_723_ = v_isSharedCheck_735_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_706_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_735_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
v___x_724_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_725_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_695_);
v___x_726_ = lean_string_append(v___x_724_, v___x_725_);
lean_dec_ref(v___x_725_);
v___x_727_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_728_ = lean_string_append(v___x_726_, v___x_727_);
v___x_729_ = lean_io_error_to_string(v_a_720_);
v___x_730_ = lean_string_append(v___x_728_, v___x_729_);
lean_dec_ref(v___x_729_);
v___x_731_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 0, v___x_731_);
v___x_733_ = v___x_722_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
v___jp_737_:
{
uint8_t v_construct_739_; uint64_t v___x_740_; 
v_construct_739_ = lean_ctor_get_uint8(v_b_695_, sizeof(void*)*4);
v___x_740_ = lean_uint64_lor(v___x_736_, v___y_738_);
if (v_construct_739_ == 0)
{
uint64_t v___x_741_; 
v___x_741_ = 0ULL;
v___y_700_ = v___x_740_;
v___y_701_ = v___x_741_;
goto v___jp_699_;
}
else
{
uint64_t v___x_742_; 
v___x_742_ = 4ULL;
v___y_700_ = v___x_740_;
v___y_701_ = v___x_742_;
goto v___jp_699_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0___boxed(lean_object* v_b_745_, lean_object* v_args_746_, lean_object* v_await_747_, lean_object* v_a_748_){
_start:
{
uint8_t v_await_boxed_749_; lean_object* v_res_750_; 
v_await_boxed_749_ = lean_unbox(v_await_747_);
v_res_750_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0(v_b_745_, v_args_746_, v_await_boxed_749_);
lean_dec_ref(v_b_745_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_cpus(){
_start:
{
uint8_t v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_760_ = 0;
v___x_761_ = ((lean_object*)(l_Lasm_JS_Node_os_cpus___closed__2));
v___x_762_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_763_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_cpus_spec__0(v___x_761_, v___x_762_, v___x_760_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_cpus___boxed(lean_object* v_a_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lasm_JS_Node_os_cpus();
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_endianness(){
_start:
{
uint8_t v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_775_ = 0;
v___x_776_ = ((lean_object*)(l_Lasm_JS_Node_os_endianness___closed__2));
v___x_777_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_778_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_776_, v___x_777_, v___x_775_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_endianness___boxed(lean_object* v_a_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lasm_JS_Node_os_endianness();
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_freemem(){
_start:
{
uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_790_ = 0;
v___x_791_ = ((lean_object*)(l_Lasm_JS_Node_os_freemem___closed__2));
v___x_792_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_793_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_791_, v___x_792_, v___x_790_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_freemem___boxed(lean_object* v_a_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_Lasm_JS_Node_os_freemem();
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_getPriority_spec__0(lean_object* v_x_796_){
_start:
{
if (lean_obj_tag(v_x_796_) == 0)
{
lean_object* v___x_797_; 
v___x_797_ = lean_box(0);
return v___x_797_;
}
else
{
lean_object* v_val_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_810_; 
v_val_798_ = lean_ctor_get(v_x_796_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v_x_796_);
if (v_isSharedCheck_810_ == 0)
{
v___x_800_ = v_x_796_;
v_isShared_801_ = v_isSharedCheck_810_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_val_798_);
lean_dec(v_x_796_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_810_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_802_ = lean_nat_abs(v_val_798_);
v___x_803_ = lean_cstr_to_nat("9007199254740991");
v___x_804_ = lean_nat_dec_le(v___x_802_, v___x_803_);
lean_dec(v___x_802_);
if (v___x_804_ == 0)
{
lean_object* v___x_806_; 
if (v_isShared_801_ == 0)
{
lean_ctor_set_tag(v___x_800_, 5);
v___x_806_ = v___x_800_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_val_798_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
else
{
double v___x_808_; lean_object* v___x_809_; 
lean_del_object(v___x_800_);
v___x_808_ = l_Float_ofInt(v_val_798_);
lean_dec(v_val_798_);
v___x_809_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_809_, 0, v___x_808_);
return v___x_809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_getPriority(lean_object* v_pid_819_){
_start:
{
uint8_t v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_821_ = 0;
v___x_822_ = lean_unsigned_to_nat(1u);
v___x_823_ = ((lean_object*)(l_Lasm_JS_Node_os_getPriority___closed__2));
v___x_824_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_getPriority_spec__0(v_pid_819_);
v___x_825_ = lean_mk_empty_array_with_capacity(v___x_822_);
v___x_826_ = lean_array_push(v___x_825_, v___x_824_);
v___x_827_ = l_Lasm_JS_Web_Support_args(v___x_826_);
v___x_828_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_823_, v___x_827_, v___x_821_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_getPriority___boxed(lean_object* v_pid_829_, lean_object* v_a_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Lasm_JS_Node_os_getPriority(v_pid_829_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_homedir(){
_start:
{
uint8_t v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_841_ = 0;
v___x_842_ = ((lean_object*)(l_Lasm_JS_Node_os_homedir___closed__2));
v___x_843_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_844_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_842_, v___x_843_, v___x_841_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_homedir___boxed(lean_object* v_a_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_Lasm_JS_Node_os_homedir();
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_hostname(){
_start:
{
uint8_t v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_856_ = 0;
v___x_857_ = ((lean_object*)(l_Lasm_JS_Node_os_hostname___closed__2));
v___x_858_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_859_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_857_, v___x_858_, v___x_856_);
return v___x_859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_hostname___boxed(lean_object* v_a_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lasm_JS_Node_os_hostname();
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1(size_t v_sz_864_, size_t v_i_865_, lean_object* v_bs_866_){
_start:
{
uint8_t v___x_867_; 
v___x_867_ = lean_usize_dec_lt(v_i_865_, v_sz_864_);
if (v___x_867_ == 0)
{
lean_object* v___x_868_; 
v___x_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_868_, 0, v_bs_866_);
return v___x_868_;
}
else
{
lean_object* v_v_869_; 
v_v_869_ = lean_array_uget_borrowed(v_bs_866_, v_i_865_);
if (lean_obj_tag(v_v_869_) == 3)
{
double v_n_870_; lean_object* v___x_871_; lean_object* v_bs_x27_872_; size_t v___x_873_; size_t v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v_n_870_ = lean_ctor_get_float(v_v_869_, 0);
v___x_871_ = lean_unsigned_to_nat(0u);
v_bs_x27_872_ = lean_array_uset(v_bs_866_, v_i_865_, v___x_871_);
v___x_873_ = ((size_t)1ULL);
v___x_874_ = lean_usize_add(v_i_865_, v___x_873_);
v___x_875_ = lean_box_float(v_n_870_);
v___x_876_ = lean_array_uset(v_bs_x27_872_, v_i_865_, v___x_875_);
v_i_865_ = v___x_874_;
v_bs_866_ = v___x_876_;
goto _start;
}
else
{
lean_object* v___x_878_; 
lean_dec_ref(v_bs_866_);
v___x_878_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1___closed__0));
return v___x_878_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_879_, lean_object* v_i_880_, lean_object* v_bs_881_){
_start:
{
size_t v_sz_boxed_882_; size_t v_i_boxed_883_; lean_object* v_res_884_; 
v_sz_boxed_882_ = lean_unbox_usize(v_sz_879_);
lean_dec(v_sz_879_);
v_i_boxed_883_ = lean_unbox_usize(v_i_880_);
lean_dec(v_i_880_);
v_res_884_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1(v_sz_boxed_882_, v_i_boxed_883_, v_bs_881_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0(lean_object* v_context_887_, lean_object* v_d_888_){
_start:
{
lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_897_; lean_object* v_received_898_; lean_object* v___y_917_; lean_object* v_a_920_; 
if (lean_obj_tag(v_d_888_) == 7)
{
lean_object* v_items_944_; size_t v_sz_945_; size_t v___x_946_; lean_object* v___x_947_; 
v_items_944_ = lean_ctor_get(v_d_888_, 0);
v_sz_945_ = lean_array_size(v_items_944_);
v___x_946_ = ((size_t)0ULL);
lean_inc_ref(v_items_944_);
v___x_947_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0_spec__1(v_sz_945_, v___x_946_, v_items_944_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; uint8_t v___x_952_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_947_, 1);
v___x_949_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__1));
v___x_950_ = lean_string_utf8_byte_size(v_a_948_);
v___x_951_ = lean_unsigned_to_nat(0u);
v___x_952_ = lean_nat_dec_eq(v___x_950_, v___x_951_);
if (v___x_952_ == 0)
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_953_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_954_ = lean_string_append(v___x_953_, v_a_948_);
lean_dec(v_a_948_);
v___x_955_ = lean_string_append(v___x_949_, v___x_954_);
lean_dec_ref(v___x_954_);
v_a_920_ = v___x_955_;
goto v___jp_919_;
}
else
{
lean_dec(v_a_948_);
v_a_920_ = v___x_949_;
goto v___jp_919_;
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_dec_ref_known(v_d_888_, 1);
v_a_956_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_947_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_947_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
lean_ctor_set_tag(v___x_958_, 0);
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
}
else
{
lean_object* v___x_964_; 
v___x_964_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v_a_920_ = v___x_964_;
goto v___jp_919_;
}
v___jp_890_:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_893_ = lean_string_append(v___y_891_, v___y_892_);
lean_dec_ref(v___y_892_);
v___x_894_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_894_, 0, v___x_893_);
v___x_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
return v___x_895_;
}
v___jp_896_:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; uint8_t v___x_910_; 
v___x_899_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_900_ = lean_string_append(v___x_899_, v_context_887_);
v___x_901_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_902_ = lean_string_append(v___x_900_, v___x_901_);
v___x_903_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___closed__0));
v___x_904_ = lean_string_append(v___x_902_, v___x_903_);
v___x_905_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_906_ = lean_string_append(v___x_904_, v___x_905_);
v___x_907_ = lean_string_append(v___x_906_, v_received_898_);
lean_dec_ref(v_received_898_);
v___x_908_ = lean_string_utf8_byte_size(v___y_897_);
v___x_909_ = lean_unsigned_to_nat(0u);
v___x_910_ = lean_nat_dec_eq(v___x_908_, v___x_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_911_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__1));
v___x_912_ = lean_string_append(v___x_911_, v___y_897_);
lean_dec_ref(v___y_897_);
v___x_913_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0_spec__0___closed__2));
v___x_914_ = lean_string_append(v___x_912_, v___x_913_);
v___y_891_ = v___x_907_;
v___y_892_ = v___x_914_;
goto v___jp_890_;
}
else
{
lean_object* v___x_915_; 
lean_dec_ref(v___y_897_);
v___x_915_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___y_891_ = v___x_907_;
v___y_892_ = v___x_915_;
goto v___jp_890_;
}
}
v___jp_916_:
{
lean_object* v___x_918_; 
v___x_918_ = l_Lasm_JS_Data_describe(v_d_888_);
v___y_897_ = v___y_917_;
v_received_898_ = v___x_918_;
goto v___jp_896_;
}
v___jp_919_:
{
if (lean_obj_tag(v_d_888_) == 9)
{
lean_object* v_value_921_; lean_object* v_description_922_; lean_object* v___x_923_; uint8_t v___x_924_; 
v_value_921_ = lean_ctor_get(v_d_888_, 0);
v_description_922_ = lean_ctor_get(v_d_888_, 1);
v___x_923_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_924_ = lean_string_dec_eq(v_description_922_, v___x_923_);
if (v___x_924_ == 0)
{
v___y_917_ = v_a_920_;
goto v___jp_916_;
}
else
{
lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_941_; 
lean_inc(v_value_921_);
v_isSharedCheck_941_ = !lean_is_exclusive(v_d_888_);
if (v_isSharedCheck_941_ == 0)
{
lean_object* v_unused_942_; lean_object* v_unused_943_; 
v_unused_942_ = lean_ctor_get(v_d_888_, 1);
lean_dec(v_unused_942_);
v_unused_943_ = lean_ctor_get(v_d_888_, 0);
lean_dec(v_unused_943_);
v___x_926_ = v_d_888_;
v_isShared_927_ = v_isSharedCheck_941_;
goto v_resetjp_925_;
}
else
{
lean_dec(v_d_888_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_941_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
uint32_t v___x_928_; uint64_t v___x_929_; lean_object* v___x_931_; 
v___x_928_ = 206;
v___x_929_ = 0ULL;
lean_inc(v_value_921_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 1, v___x_923_);
v___x_931_ = v___x_926_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_value_921_);
lean_ctor_set(v_reuseFailAlloc_940_, 1, v___x_923_);
v___x_931_ = v_reuseFailAlloc_940_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
uint32_t v___x_932_; lean_object* v___x_933_; 
v___x_932_ = lasm_js_value_handle(v_value_921_);
lean_dec(v_value_921_);
v___x_933_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_928_, v___x_929_, v___x_931_, v___x_932_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; uint8_t v___x_935_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_934_);
lean_dec_ref_known(v___x_933_, 1);
v___x_935_ = lean_string_validate_utf8(v_a_934_);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; lean_object* v___x_937_; 
lean_dec(v_a_934_);
v___x_936_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8);
v___x_937_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_936_);
v___y_897_ = v_a_920_;
v_received_898_ = v___x_937_;
goto v___jp_896_;
}
else
{
lean_object* v___x_938_; 
v___x_938_ = lean_string_from_utf8_unchecked(v_a_934_);
v___y_897_ = v_a_920_;
v_received_898_ = v___x_938_;
goto v___jp_896_;
}
}
else
{
lean_object* v___x_939_; 
lean_dec_ref_known(v___x_933_, 1);
v___x_939_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9));
v___y_897_ = v_a_920_;
v_received_898_ = v___x_939_;
goto v___jp_896_;
}
}
}
}
}
else
{
v___y_917_ = v_a_920_;
goto v___jp_916_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0___boxed(lean_object* v_context_965_, lean_object* v_d_966_, lean_object* v_a_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0(v_context_965_, v_d_966_);
lean_dec_ref(v_context_965_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0(lean_object* v_b_969_, lean_object* v_args_970_, uint8_t v_await_971_){
_start:
{
uint64_t v___y_974_; uint64_t v___y_975_; uint64_t v___x_1010_; uint64_t v___y_1012_; 
v___x_1010_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_971_ == 0)
{
uint64_t v___x_1017_; 
v___x_1017_ = 0ULL;
v___y_1012_ = v___x_1017_;
goto v___jp_1011_;
}
else
{
uint64_t v___x_1018_; 
v___x_1018_ = 2ULL;
v___y_1012_ = v___x_1018_;
goto v___jp_1011_;
}
v___jp_973_:
{
uint64_t v_flags_976_; uint32_t v___x_977_; lean_object* v___x_978_; uint32_t v___x_979_; lean_object* v___x_980_; 
v_flags_976_ = lean_uint64_lor(v___y_974_, v___y_975_);
v___x_977_ = 214;
v___x_978_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_969_, v_args_970_);
v___x_979_ = 0;
v___x_980_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_977_, v_flags_976_, v___x_978_, v___x_979_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_982_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_980_, 1);
v___x_982_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_981_);
lean_dec(v_a_981_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_a_983_);
lean_dec_ref_known(v___x_982_, 1);
v___x_984_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_969_);
v___x_985_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0_spec__0(v___x_984_, v_a_983_);
lean_dec_ref(v___x_984_);
return v___x_985_;
}
else
{
lean_object* v_a_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_993_; 
v_a_986_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_993_ == 0)
{
v___x_988_ = v___x_982_;
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_a_986_);
lean_dec(v___x_982_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_a_986_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
}
}
else
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1009_; 
v_a_994_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_996_ = v___x_980_;
v_isShared_997_ = v_isSharedCheck_1009_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_980_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1009_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1007_; 
v___x_998_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_999_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_969_);
v___x_1000_ = lean_string_append(v___x_998_, v___x_999_);
lean_dec_ref(v___x_999_);
v___x_1001_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1002_ = lean_string_append(v___x_1000_, v___x_1001_);
v___x_1003_ = lean_io_error_to_string(v_a_994_);
v___x_1004_ = lean_string_append(v___x_1002_, v___x_1003_);
lean_dec_ref(v___x_1003_);
v___x_1005_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
if (v_isShared_997_ == 0)
{
lean_ctor_set(v___x_996_, 0, v___x_1005_);
v___x_1007_ = v___x_996_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_1005_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
v___jp_1011_:
{
uint8_t v_construct_1013_; uint64_t v___x_1014_; 
v_construct_1013_ = lean_ctor_get_uint8(v_b_969_, sizeof(void*)*4);
v___x_1014_ = lean_uint64_lor(v___x_1010_, v___y_1012_);
if (v_construct_1013_ == 0)
{
uint64_t v___x_1015_; 
v___x_1015_ = 0ULL;
v___y_974_ = v___x_1014_;
v___y_975_ = v___x_1015_;
goto v___jp_973_;
}
else
{
uint64_t v___x_1016_; 
v___x_1016_ = 4ULL;
v___y_974_ = v___x_1014_;
v___y_975_ = v___x_1016_;
goto v___jp_973_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0___boxed(lean_object* v_b_1019_, lean_object* v_args_1020_, lean_object* v_await_1021_, lean_object* v_a_1022_){
_start:
{
uint8_t v_await_boxed_1023_; lean_object* v_res_1024_; 
v_await_boxed_1023_ = lean_unbox(v_await_1021_);
v_res_1024_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0(v_b_1019_, v_args_1020_, v_await_boxed_1023_);
lean_dec_ref(v_b_1019_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_loadavg(){
_start:
{
uint8_t v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1034_ = 0;
v___x_1035_ = ((lean_object*)(l_Lasm_JS_Node_os_loadavg___closed__2));
v___x_1036_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1037_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_loadavg_spec__0(v___x_1035_, v___x_1036_, v___x_1034_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_loadavg___boxed(lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_Lasm_JS_Node_os_loadavg();
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_machine(){
_start:
{
uint8_t v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1049_ = 0;
v___x_1050_ = ((lean_object*)(l_Lasm_JS_Node_os_machine___closed__2));
v___x_1051_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1052_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1050_, v___x_1051_, v___x_1049_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_machine___boxed(lean_object* v_a_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lasm_JS_Node_os_machine();
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(lean_object* v_b_1055_, lean_object* v_args_1056_, uint8_t v_await_1057_){
_start:
{
uint64_t v___y_1060_; uint64_t v___y_1061_; uint64_t v___x_1085_; uint64_t v___y_1087_; 
v___x_1085_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_1057_ == 0)
{
uint64_t v___x_1092_; 
v___x_1092_ = 0ULL;
v___y_1087_ = v___x_1092_;
goto v___jp_1086_;
}
else
{
uint64_t v___x_1093_; 
v___x_1093_ = 2ULL;
v___y_1087_ = v___x_1093_;
goto v___jp_1086_;
}
v___jp_1059_:
{
uint64_t v_flags_1062_; uint32_t v___x_1063_; lean_object* v___x_1064_; uint32_t v___x_1065_; lean_object* v___x_1066_; 
v_flags_1062_ = lean_uint64_lor(v___y_1060_, v___y_1061_);
v___x_1063_ = 214;
v___x_1064_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1055_, v_args_1056_);
v___x_1065_ = 0;
v___x_1066_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1063_, v_flags_1062_, v___x_1064_, v___x_1065_);
if (lean_obj_tag(v___x_1066_) == 0)
{
lean_object* v_a_1067_; lean_object* v___x_1068_; 
v_a_1067_ = lean_ctor_get(v___x_1066_, 0);
lean_inc(v_a_1067_);
lean_dec_ref_known(v___x_1066_, 1);
v___x_1068_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1067_);
lean_dec(v_a_1067_);
return v___x_1068_;
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1084_; 
v_a_1069_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1071_ = v___x_1066_;
v_isShared_1072_ = v_isSharedCheck_1084_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1066_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1084_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1082_; 
v___x_1073_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1074_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1055_);
v___x_1075_ = lean_string_append(v___x_1073_, v___x_1074_);
lean_dec_ref(v___x_1074_);
v___x_1076_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1077_ = lean_string_append(v___x_1075_, v___x_1076_);
v___x_1078_ = lean_io_error_to_string(v_a_1069_);
v___x_1079_ = lean_string_append(v___x_1077_, v___x_1078_);
lean_dec_ref(v___x_1078_);
v___x_1080_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 0, v___x_1080_);
v___x_1082_ = v___x_1071_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1080_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
}
v___jp_1086_:
{
uint8_t v_construct_1088_; uint64_t v___x_1089_; 
v_construct_1088_ = lean_ctor_get_uint8(v_b_1055_, sizeof(void*)*4);
v___x_1089_ = lean_uint64_lor(v___x_1085_, v___y_1087_);
if (v_construct_1088_ == 0)
{
uint64_t v___x_1090_; 
v___x_1090_ = 0ULL;
v___y_1060_ = v___x_1089_;
v___y_1061_ = v___x_1090_;
goto v___jp_1059_;
}
else
{
uint64_t v___x_1091_; 
v___x_1091_ = 4ULL;
v___y_1060_ = v___x_1089_;
v___y_1061_ = v___x_1091_;
goto v___jp_1059_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0___boxed(lean_object* v_b_1094_, lean_object* v_args_1095_, lean_object* v_await_1096_, lean_object* v_a_1097_){
_start:
{
uint8_t v_await_boxed_1098_; lean_object* v_res_1099_; 
v_await_boxed_1098_ = lean_unbox(v_await_1096_);
v_res_1099_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(v_b_1094_, v_args_1095_, v_await_boxed_1098_);
lean_dec_ref(v_b_1094_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_networkInterfaces(){
_start:
{
uint8_t v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1109_ = 0;
v___x_1110_ = ((lean_object*)(l_Lasm_JS_Node_os_networkInterfaces___closed__2));
v___x_1111_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1112_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(v___x_1110_, v___x_1111_, v___x_1109_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_networkInterfaces___boxed(lean_object* v_a_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l_Lasm_JS_Node_os_networkInterfaces();
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_platform(){
_start:
{
uint8_t v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1124_ = 0;
v___x_1125_ = ((lean_object*)(l_Lasm_JS_Node_os_platform___closed__2));
v___x_1126_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1127_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1125_, v___x_1126_, v___x_1124_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_platform___boxed(lean_object* v_a_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lasm_JS_Node_os_platform();
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_release(){
_start:
{
uint8_t v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1139_ = 0;
v___x_1140_ = ((lean_object*)(l_Lasm_JS_Node_os_release___closed__2));
v___x_1141_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1142_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1140_, v___x_1141_, v___x_1139_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_release___boxed(lean_object* v_a_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lasm_JS_Node_os_release();
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = lean_box(0);
v___x_1147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg___boxed(lean_object* v_a_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg();
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(lean_object* v_b_1150_, lean_object* v_args_1151_, uint8_t v_await_1152_){
_start:
{
uint64_t v___y_1155_; uint64_t v___y_1156_; uint64_t v___x_1189_; uint64_t v___y_1191_; 
v___x_1189_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_1152_ == 0)
{
uint64_t v___x_1196_; 
v___x_1196_ = 0ULL;
v___y_1191_ = v___x_1196_;
goto v___jp_1190_;
}
else
{
uint64_t v___x_1197_; 
v___x_1197_ = 2ULL;
v___y_1191_ = v___x_1197_;
goto v___jp_1190_;
}
v___jp_1154_:
{
uint64_t v_flags_1157_; uint32_t v___x_1158_; lean_object* v___x_1159_; uint32_t v___x_1160_; lean_object* v___x_1161_; 
v_flags_1157_ = lean_uint64_lor(v___y_1155_, v___y_1156_);
v___x_1158_ = 214;
v___x_1159_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1150_, v_args_1151_);
v___x_1160_ = 0;
v___x_1161_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1158_, v_flags_1157_, v___x_1159_, v___x_1160_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1163_; 
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
lean_inc(v_a_1162_);
lean_dec_ref_known(v___x_1161_, 1);
v___x_1163_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1162_);
lean_dec(v_a_1162_);
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v___x_1164_; 
lean_dec_ref_known(v___x_1163_, 1);
v___x_1164_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg();
return v___x_1164_;
}
else
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
v_a_1165_ = lean_ctor_get(v___x_1163_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1167_ = v___x_1163_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___x_1163_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1165_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
else
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1188_; 
v_a_1173_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1175_ = v___x_1161_;
v_isShared_1176_ = v_isSharedCheck_1188_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1161_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1188_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1177_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1178_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1150_);
v___x_1179_ = lean_string_append(v___x_1177_, v___x_1178_);
lean_dec_ref(v___x_1178_);
v___x_1180_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1181_ = lean_string_append(v___x_1179_, v___x_1180_);
v___x_1182_ = lean_io_error_to_string(v_a_1173_);
v___x_1183_ = lean_string_append(v___x_1181_, v___x_1182_);
lean_dec_ref(v___x_1182_);
v___x_1184_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 0, v___x_1184_);
v___x_1186_ = v___x_1175_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
v___jp_1190_:
{
uint8_t v_construct_1192_; uint64_t v___x_1193_; 
v_construct_1192_ = lean_ctor_get_uint8(v_b_1150_, sizeof(void*)*4);
v___x_1193_ = lean_uint64_lor(v___x_1189_, v___y_1191_);
if (v_construct_1192_ == 0)
{
uint64_t v___x_1194_; 
v___x_1194_ = 0ULL;
v___y_1155_ = v___x_1193_;
v___y_1156_ = v___x_1194_;
goto v___jp_1154_;
}
else
{
uint64_t v___x_1195_; 
v___x_1195_ = 4ULL;
v___y_1155_ = v___x_1193_;
v___y_1156_ = v___x_1195_;
goto v___jp_1154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0___boxed(lean_object* v_b_1198_, lean_object* v_args_1199_, lean_object* v_await_1200_, lean_object* v_a_1201_){
_start:
{
uint8_t v_await_boxed_1202_; lean_object* v_res_1203_; 
v_await_boxed_1202_ = lean_unbox(v_await_1200_);
v_res_1203_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(v_b_1198_, v_args_1199_, v_await_boxed_1202_);
lean_dec_ref(v_b_1198_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriority(lean_object* v_priority_1212_){
_start:
{
uint8_t v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___y_1218_; lean_object* v___x_1223_; lean_object* v___x_1224_; uint8_t v___x_1225_; 
v___x_1214_ = 0;
v___x_1215_ = lean_unsigned_to_nat(1u);
v___x_1216_ = ((lean_object*)(l_Lasm_JS_Node_os_setPriority___closed__2));
v___x_1223_ = lean_nat_abs(v_priority_1212_);
v___x_1224_ = lean_cstr_to_nat("9007199254740991");
v___x_1225_ = lean_nat_dec_le(v___x_1223_, v___x_1224_);
lean_dec(v___x_1223_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; 
v___x_1226_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1226_, 0, v_priority_1212_);
v___y_1218_ = v___x_1226_;
goto v___jp_1217_;
}
else
{
double v___x_1227_; lean_object* v___x_1228_; 
v___x_1227_ = l_Float_ofInt(v_priority_1212_);
lean_dec(v_priority_1212_);
v___x_1228_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1228_, 0, v___x_1227_);
v___y_1218_ = v___x_1228_;
goto v___jp_1217_;
}
v___jp_1217_:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1219_ = lean_mk_empty_array_with_capacity(v___x_1215_);
v___x_1220_ = lean_array_push(v___x_1219_, v___y_1218_);
v___x_1221_ = l_Lasm_JS_Web_Support_args(v___x_1220_);
v___x_1222_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(v___x_1216_, v___x_1221_, v___x_1214_);
return v___x_1222_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriority___boxed(lean_object* v_priority_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lasm_JS_Node_os_setPriority(v_priority_1229_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0(lean_object* v_context_1232_, lean_object* v_d_1233_){
_start:
{
lean_object* v___x_1235_; 
v___x_1235_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___redArg();
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0___boxed(lean_object* v_context_1236_, lean_object* v_d_1237_, lean_object* v_a_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0_spec__0(v_context_1236_, v_d_1237_);
lean_dec(v_d_1237_);
lean_dec_ref(v_context_1236_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriorityWithPid(lean_object* v_pid_1247_, lean_object* v_priority_1248_){
_start:
{
uint8_t v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___y_1254_; lean_object* v___y_1255_; lean_object* v___y_1262_; lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; 
v___x_1250_ = 0;
v___x_1251_ = lean_unsigned_to_nat(2u);
v___x_1252_ = ((lean_object*)(l_Lasm_JS_Node_os_setPriorityWithPid___closed__1));
v___x_1269_ = lean_nat_abs(v_pid_1247_);
v___x_1270_ = lean_cstr_to_nat("9007199254740991");
v___x_1271_ = lean_nat_dec_le(v___x_1269_, v___x_1270_);
lean_dec(v___x_1269_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; 
v___x_1272_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1272_, 0, v_pid_1247_);
v___y_1262_ = v___x_1272_;
goto v___jp_1261_;
}
else
{
double v___x_1273_; lean_object* v___x_1274_; 
v___x_1273_ = l_Float_ofInt(v_pid_1247_);
lean_dec(v_pid_1247_);
v___x_1274_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1274_, 0, v___x_1273_);
v___y_1262_ = v___x_1274_;
goto v___jp_1261_;
}
v___jp_1253_:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1256_ = lean_mk_empty_array_with_capacity(v___x_1251_);
v___x_1257_ = lean_array_push(v___x_1256_, v___y_1254_);
v___x_1258_ = lean_array_push(v___x_1257_, v___y_1255_);
v___x_1259_ = l_Lasm_JS_Web_Support_args(v___x_1258_);
v___x_1260_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_setPriority_spec__0(v___x_1252_, v___x_1259_, v___x_1250_);
return v___x_1260_;
}
v___jp_1261_:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; uint8_t v___x_1265_; 
v___x_1263_ = lean_nat_abs(v_priority_1248_);
v___x_1264_ = lean_cstr_to_nat("9007199254740991");
v___x_1265_ = lean_nat_dec_le(v___x_1263_, v___x_1264_);
lean_dec(v___x_1263_);
if (v___x_1265_ == 0)
{
lean_object* v___x_1266_; 
v___x_1266_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1266_, 0, v_priority_1248_);
v___y_1254_ = v___y_1262_;
v___y_1255_ = v___x_1266_;
goto v___jp_1253_;
}
else
{
double v___x_1267_; lean_object* v___x_1268_; 
v___x_1267_ = l_Float_ofInt(v_priority_1248_);
lean_dec(v_priority_1248_);
v___x_1268_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1268_, 0, v___x_1267_);
v___y_1254_ = v___y_1262_;
v___y_1255_ = v___x_1268_;
goto v___jp_1253_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_setPriorityWithPid___boxed(lean_object* v_pid_1275_, lean_object* v_priority_1276_, lean_object* v_a_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lasm_JS_Node_os_setPriorityWithPid(v_pid_1275_, v_priority_1276_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_tmpdir(){
_start:
{
uint8_t v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1288_ = 0;
v___x_1289_ = ((lean_object*)(l_Lasm_JS_Node_os_tmpdir___closed__2));
v___x_1290_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1291_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1289_, v___x_1290_, v___x_1288_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_tmpdir___boxed(lean_object* v_a_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Lasm_JS_Node_os_tmpdir();
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_totalmem(){
_start:
{
uint8_t v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1303_ = 0;
v___x_1304_ = ((lean_object*)(l_Lasm_JS_Node_os_totalmem___closed__2));
v___x_1305_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1306_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0(v___x_1304_, v___x_1305_, v___x_1303_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_totalmem___boxed(lean_object* v_a_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Lasm_JS_Node_os_totalmem();
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_type(){
_start:
{
uint8_t v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1318_ = 0;
v___x_1319_ = ((lean_object*)(l_Lasm_JS_Node_os_type___closed__2));
v___x_1320_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1321_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1319_, v___x_1320_, v___x_1318_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_type___boxed(lean_object* v_a_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Lasm_JS_Node_os_type();
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0(lean_object* v_context_1325_, lean_object* v_d_1326_){
_start:
{
lean_object* v_received_1329_; 
if (lean_obj_tag(v_d_1326_) == 3)
{
double v_n_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v_n_1343_ = lean_ctor_get_float(v_d_1326_, 0);
lean_dec_ref_known(v_d_1326_, 0);
v___x_1344_ = lean_box_float(v_n_1343_);
v___x_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
return v___x_1345_;
}
else
{
if (lean_obj_tag(v_d_1326_) == 9)
{
lean_object* v_value_1346_; lean_object* v_description_1347_; lean_object* v___x_1348_; uint8_t v___x_1349_; 
v_value_1346_ = lean_ctor_get(v_d_1326_, 0);
v_description_1347_ = lean_ctor_get(v_d_1326_, 1);
v___x_1348_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_1349_ = lean_string_dec_eq(v_description_1347_, v___x_1348_);
if (v___x_1349_ == 0)
{
goto v___jp_1341_;
}
else
{
uint32_t v___x_1350_; uint64_t v___x_1351_; lean_object* v___x_1352_; uint32_t v___x_1353_; lean_object* v___x_1354_; 
lean_inc_n(v_value_1346_, 2);
lean_dec_ref_known(v_d_1326_, 2);
v___x_1350_ = 206;
v___x_1351_ = 0ULL;
v___x_1352_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1352_, 0, v_value_1346_);
lean_ctor_set(v___x_1352_, 1, v___x_1348_);
v___x_1353_ = lasm_js_value_handle(v_value_1346_);
lean_dec(v_value_1346_);
v___x_1354_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1350_, v___x_1351_, v___x_1352_, v___x_1353_);
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v_a_1355_; uint8_t v___x_1356_; 
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
lean_inc(v_a_1355_);
lean_dec_ref_known(v___x_1354_, 1);
v___x_1356_ = lean_string_validate_utf8(v_a_1355_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
lean_dec(v_a_1355_);
v___x_1357_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8);
v___x_1358_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1357_);
v_received_1329_ = v___x_1358_;
goto v___jp_1328_;
}
else
{
lean_object* v___x_1359_; 
v___x_1359_ = lean_string_from_utf8_unchecked(v_a_1355_);
v_received_1329_ = v___x_1359_;
goto v___jp_1328_;
}
}
else
{
lean_object* v___x_1360_; 
lean_dec_ref_known(v___x_1354_, 1);
v___x_1360_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9));
v_received_1329_ = v___x_1360_;
goto v___jp_1328_;
}
}
}
else
{
goto v___jp_1341_;
}
}
v___jp_1328_:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1330_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1331_ = lean_string_append(v___x_1330_, v_context_1325_);
v___x_1332_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1333_ = lean_string_append(v___x_1331_, v___x_1332_);
v___x_1334_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0___closed__0));
v___x_1335_ = lean_string_append(v___x_1333_, v___x_1334_);
v___x_1336_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1337_ = lean_string_append(v___x_1335_, v___x_1336_);
v___x_1338_ = lean_string_append(v___x_1337_, v_received_1329_);
lean_dec_ref(v_received_1329_);
v___x_1339_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1338_);
v___x_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
return v___x_1340_;
}
v___jp_1341_:
{
lean_object* v___x_1342_; 
v___x_1342_ = l_Lasm_JS_Data_describe(v_d_1326_);
v_received_1329_ = v___x_1342_;
goto v___jp_1328_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0___boxed(lean_object* v_context_1361_, lean_object* v_d_1362_, lean_object* v_a_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0(v_context_1361_, v_d_1362_);
lean_dec_ref(v_context_1361_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0(lean_object* v_b_1365_, lean_object* v_args_1366_, uint8_t v_await_1367_){
_start:
{
uint64_t v___y_1370_; uint64_t v___y_1371_; uint64_t v___x_1406_; uint64_t v___y_1408_; 
v___x_1406_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2___closed__0);
if (v_await_1367_ == 0)
{
uint64_t v___x_1413_; 
v___x_1413_ = 0ULL;
v___y_1408_ = v___x_1413_;
goto v___jp_1407_;
}
else
{
uint64_t v___x_1414_; 
v___x_1414_ = 2ULL;
v___y_1408_ = v___x_1414_;
goto v___jp_1407_;
}
v___jp_1369_:
{
uint64_t v_flags_1372_; uint32_t v___x_1373_; lean_object* v___x_1374_; uint32_t v___x_1375_; lean_object* v___x_1376_; 
v_flags_1372_ = lean_uint64_lor(v___y_1370_, v___y_1371_);
v___x_1373_ = 214;
v___x_1374_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1365_, v_args_1366_);
v___x_1375_ = 0;
v___x_1376_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1373_, v_flags_1372_, v___x_1374_, v___x_1375_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v_a_1377_; lean_object* v___x_1378_; 
v_a_1377_ = lean_ctor_get(v___x_1376_, 0);
lean_inc(v_a_1377_);
lean_dec_ref_known(v___x_1376_, 1);
v___x_1378_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1377_);
lean_dec(v_a_1377_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_a_1379_);
lean_dec_ref_known(v___x_1378_, 1);
v___x_1380_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1365_);
v___x_1381_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0_spec__0(v___x_1380_, v_a_1379_);
lean_dec_ref(v___x_1380_);
return v___x_1381_;
}
else
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
v_a_1382_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1378_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1378_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
else
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1405_; 
v_a_1390_ = lean_ctor_get(v___x_1376_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1392_ = v___x_1376_;
v_isShared_1393_ = v_isSharedCheck_1405_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___x_1376_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1405_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1403_; 
v___x_1394_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_os_EOL_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1395_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1365_);
v___x_1396_ = lean_string_append(v___x_1394_, v___x_1395_);
lean_dec_ref(v___x_1395_);
v___x_1397_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_availableParallelism_spec__0___closed__0));
v___x_1398_ = lean_string_append(v___x_1396_, v___x_1397_);
v___x_1399_ = lean_io_error_to_string(v_a_1390_);
v___x_1400_ = lean_string_append(v___x_1398_, v___x_1399_);
lean_dec_ref(v___x_1399_);
v___x_1401_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 0, v___x_1401_);
v___x_1403_ = v___x_1392_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
v___jp_1407_:
{
uint8_t v_construct_1409_; uint64_t v___x_1410_; 
v_construct_1409_ = lean_ctor_get_uint8(v_b_1365_, sizeof(void*)*4);
v___x_1410_ = lean_uint64_lor(v___x_1406_, v___y_1408_);
if (v_construct_1409_ == 0)
{
uint64_t v___x_1411_; 
v___x_1411_ = 0ULL;
v___y_1370_ = v___x_1410_;
v___y_1371_ = v___x_1411_;
goto v___jp_1369_;
}
else
{
uint64_t v___x_1412_; 
v___x_1412_ = 4ULL;
v___y_1370_ = v___x_1410_;
v___y_1371_ = v___x_1412_;
goto v___jp_1369_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0___boxed(lean_object* v_b_1415_, lean_object* v_args_1416_, lean_object* v_await_1417_, lean_object* v_a_1418_){
_start:
{
uint8_t v_await_boxed_1419_; lean_object* v_res_1420_; 
v_await_boxed_1419_ = lean_unbox(v_await_1417_);
v_res_1420_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0(v_b_1415_, v_args_1416_, v_await_boxed_1419_);
lean_dec_ref(v_b_1415_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_uptime(){
_start:
{
uint8_t v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1430_ = 0;
v___x_1431_ = ((lean_object*)(l_Lasm_JS_Node_os_uptime___closed__2));
v___x_1432_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1433_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_uptime_spec__0(v___x_1431_, v___x_1432_, v___x_1430_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_uptime___boxed(lean_object* v_a_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l_Lasm_JS_Node_os_uptime();
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0_spec__0(lean_object* v_x_1436_){
_start:
{
if (lean_obj_tag(v_x_1436_) == 0)
{
lean_object* v___x_1437_; 
v___x_1437_ = lean_box(0);
return v___x_1437_;
}
else
{
lean_object* v_val_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
v_val_1438_ = lean_ctor_get(v_x_1436_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v_x_1436_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v_x_1436_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_val_1438_);
lean_dec(v_x_1436_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
lean_ctor_set_tag(v___x_1440_, 4);
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_val_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0(lean_object* v_x_1446_){
_start:
{
if (lean_obj_tag(v_x_1446_) == 0)
{
lean_object* v___x_1447_; 
v___x_1447_ = lean_box(0);
return v___x_1447_;
}
else
{
lean_object* v_val_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v_val_1448_ = lean_ctor_get(v_x_1446_, 0);
lean_inc(v_val_1448_);
lean_dec_ref_known(v_x_1446_, 1);
v___x_1449_ = ((lean_object*)(l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0___closed__0));
v___x_1450_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0_spec__0(v_val_1448_);
v___x_1451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1449_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
v___x_1452_ = lean_unsigned_to_nat(1u);
v___x_1453_ = lean_mk_empty_array_with_capacity(v___x_1452_);
v___x_1454_ = lean_array_push(v___x_1453_, v___x_1451_);
v___x_1455_ = l_Lasm_JS_Web_Support_fields(v___x_1454_);
lean_dec_ref(v___x_1454_);
return v___x_1455_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_userInfo(lean_object* v_options_1464_){
_start:
{
uint8_t v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1466_ = 0;
v___x_1467_ = lean_unsigned_to_nat(1u);
v___x_1468_ = ((lean_object*)(l_Lasm_JS_Node_os_userInfo___closed__2));
v___x_1469_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_os_userInfo_spec__0(v_options_1464_);
v___x_1470_ = lean_mk_empty_array_with_capacity(v___x_1467_);
v___x_1471_ = lean_array_push(v___x_1470_, v___x_1469_);
v___x_1472_ = l_Lasm_JS_Web_Support_args(v___x_1471_);
v___x_1473_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_networkInterfaces_spec__0(v___x_1468_, v___x_1472_, v___x_1466_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_userInfo___boxed(lean_object* v_options_1474_, lean_object* v_a_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l_Lasm_JS_Node_os_userInfo(v_options_1474_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_version(){
_start:
{
uint8_t v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1486_ = 0;
v___x_1487_ = ((lean_object*)(l_Lasm_JS_Node_os_version___closed__2));
v___x_1488_ = lean_obj_once(&l_Lasm_JS_Node_os_availableParallelism___closed__4, &l_Lasm_JS_Node_os_availableParallelism___closed__4_once, _init_l_Lasm_JS_Node_os_availableParallelism___closed__4);
v___x_1489_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_os_arch_spec__0(v___x_1487_, v___x_1488_, v___x_1486_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_os_version___boxed(lean_object* v_a_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lasm_JS_Node_os_version();
return v_res_1491_;
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
