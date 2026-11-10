// Lean compiler output
// Module: Lasm.JS.Node.Path
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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dir"};
static const lean_object* l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "root"};
static const lean_object* l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "base"};
static const lean_object* l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ext"};
static const lean_object* l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSPathObject___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSPathObject___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSPathObject___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathObject___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSPathObject___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSPathObject___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSPathObject___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSPathObject___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathObject___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSPathObject = (const lean_object*)&l_Lasm_JS_Node_instToJSPathObject___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathObject___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathObject___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Node_instFromJSPathObject___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instFromJSPathObject___closed__0;
static lean_once_cell_t l_Lasm_JS_Node_instFromJSPathObject___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instFromJSPathObject___closed__1;
static const lean_string_object l_Lasm_JS_Node_instFromJSPathObject___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node.path.PathObject"};
static const lean_object* l_Lasm_JS_Node_instFromJSPathObject___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSPathObject___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Node_instFromJSPathObject___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instFromJSPathObject___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathObject;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node: empty path in "};
static const lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "require "};
static const lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_delimiter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "node:path"};
static const lean_object* l_Lasm_JS_Node_path_delimiter___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_delimiter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "delimiter"};
static const lean_object* l_Lasm_JS_Node_path_delimiter___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_delimiter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_path_delimiter___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_delimiter();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_delimiter___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_sep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sep"};
static const lean_object* l_Lasm_JS_Node_path_sep___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_sep___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_path_sep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_sep___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_path_sep___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_sep___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_basename___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.path.basename"};
static const lean_object* l_Lasm_JS_Node_path_basename___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_basename___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_basename___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basename"};
static const lean_object* l_Lasm_JS_Node_path_basename___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_basename___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_basename___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_basename___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_basename___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_basename___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_basename___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_basename(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_basename___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_dirname___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.path.dirname"};
static const lean_object* l_Lasm_JS_Node_path_dirname___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_dirname___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_dirname___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "dirname"};
static const lean_object* l_Lasm_JS_Node_path_dirname___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_dirname___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_dirname___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_dirname___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_dirname___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_dirname___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_dirname___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_dirname(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_dirname___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_extname___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.path.extname"};
static const lean_object* l_Lasm_JS_Node_path_extname___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_extname___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_extname___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "extname"};
static const lean_object* l_Lasm_JS_Node_path_extname___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_extname___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_extname___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_extname___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_extname___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_extname___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_extname___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_extname(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_extname___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.path.format"};
static const lean_object* l_Lasm_JS_Node_path_format___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_format___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "format"};
static const lean_object* l_Lasm_JS_Node_path_format___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_format___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_format___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_format___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_format___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_format___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_format(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_format___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_matchesGlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Node.path.matchesGlob"};
static const lean_object* l_Lasm_JS_Node_path_matchesGlob___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_matchesGlob___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_matchesGlob___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "matchesGlob"};
static const lean_object* l_Lasm_JS_Node_path_matchesGlob___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_matchesGlob___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_matchesGlob___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_matchesGlob___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_matchesGlob___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_matchesGlob___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_matchesGlob___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_matchesGlob(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_matchesGlob___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_isAbsolute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node.path.isAbsolute"};
static const lean_object* l_Lasm_JS_Node_path_isAbsolute___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_isAbsolute___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_isAbsolute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "isAbsolute"};
static const lean_object* l_Lasm_JS_Node_path_isAbsolute___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_isAbsolute___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_isAbsolute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_isAbsolute___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_isAbsolute___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_isAbsolute___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_isAbsolute___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_isAbsolute(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_isAbsolute___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_join___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Node.path.join"};
static const lean_object* l_Lasm_JS_Node_path_join___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_join___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_join___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "join"};
static const lean_object* l_Lasm_JS_Node_path_join___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_join___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_join___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_join___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_join___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_join___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_join___closed__2_value;
static const lean_array_object l_Lasm_JS_Node_path_join___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Node_path_join___closed__3 = (const lean_object*)&l_Lasm_JS_Node_path_join___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_join(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_join___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_normalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.path.normalize"};
static const lean_object* l_Lasm_JS_Node_path_normalize___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_normalize___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_normalize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "normalize"};
static const lean_object* l_Lasm_JS_Node_path_normalize___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_normalize___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_normalize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_normalize___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_normalize___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_normalize___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_normalize___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_normalize(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_normalize___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__5_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__5_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Node.path.parse"};
static const lean_object* l_Lasm_JS_Node_path_parse___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_parse___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "parse"};
static const lean_object* l_Lasm_JS_Node_path_parse___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_parse___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_parse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_parse___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_parse___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_parse___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_parse___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_parse(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_parse___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_relative___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.path.relative"};
static const lean_object* l_Lasm_JS_Node_path_relative___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_relative___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_relative___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "relative"};
static const lean_object* l_Lasm_JS_Node_path_relative___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_relative___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_relative___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_relative___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_relative___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_relative___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_relative___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_relative(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_relative___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_resolve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.path.resolve"};
static const lean_object* l_Lasm_JS_Node_path_resolve___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_resolve___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_resolve___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "resolve"};
static const lean_object* l_Lasm_JS_Node_path_resolve___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_resolve___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_resolve___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_resolve___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_resolve___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_resolve___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_resolve___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_resolve(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_resolve___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_toNamespacedPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.path.toNamespacedPath"};
static const lean_object* l_Lasm_JS_Node_path_toNamespacedPath___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_toNamespacedPath___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_path_toNamespacedPath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "toNamespacedPath"};
static const lean_object* l_Lasm_JS_Node_path_toNamespacedPath___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_toNamespacedPath___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_path_toNamespacedPath___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_toNamespacedPath___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_delimiter___closed__0_value),((lean_object*)&l_Lasm_JS_Node_path_toNamespacedPath___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_path_toNamespacedPath___closed__2 = (const lean_object*)&l_Lasm_JS_Node_path_toNamespacedPath___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_toNamespacedPath(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_toNamespacedPath___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSPathObject___lam__0(lean_object* v___f_6_, lean_object* v_d_7_){
_start:
{
lean_object* v_dir_8_; lean_object* v_root_9_; lean_object* v_base_10_; lean_object* v_name_11_; lean_object* v_ext_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_dir_8_ = lean_ctor_get(v_d_7_, 0);
lean_inc(v_dir_8_);
v_root_9_ = lean_ctor_get(v_d_7_, 1);
lean_inc(v_root_9_);
v_base_10_ = lean_ctor_get(v_d_7_, 2);
lean_inc(v_base_10_);
v_name_11_ = lean_ctor_get(v_d_7_, 3);
lean_inc(v_name_11_);
v_ext_12_ = lean_ctor_get(v_d_7_, 4);
lean_inc(v_ext_12_);
lean_dec_ref(v_d_7_);
v___x_13_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__0));
lean_inc_ref_n(v___f_6_, 4);
v___x_14_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_6_, v_dir_8_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_13_);
lean_ctor_set(v___x_15_, 1, v___x_14_);
v___x_16_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__1));
v___x_17_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_6_, v_root_9_);
v___x_18_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_18_, 0, v___x_16_);
lean_ctor_set(v___x_18_, 1, v___x_17_);
v___x_19_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__2));
v___x_20_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_6_, v_base_10_);
v___x_21_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_21_, 0, v___x_19_);
lean_ctor_set(v___x_21_, 1, v___x_20_);
v___x_22_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__3));
v___x_23_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_6_, v_name_11_);
v___x_24_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_24_, 0, v___x_22_);
lean_ctor_set(v___x_24_, 1, v___x_23_);
v___x_25_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__4));
v___x_26_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_6_, v_ext_12_);
v___x_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_25_);
lean_ctor_set(v___x_27_, 1, v___x_26_);
v___x_28_ = lean_unsigned_to_nat(5u);
v___x_29_ = lean_mk_empty_array_with_capacity(v___x_28_);
v___x_30_ = lean_array_push(v___x_29_, v___x_15_);
v___x_31_ = lean_array_push(v___x_30_, v___x_18_);
v___x_32_ = lean_array_push(v___x_31_, v___x_21_);
v___x_33_ = lean_array_push(v___x_32_, v___x_24_);
v___x_34_ = lean_array_push(v___x_33_, v___x_27_);
v___x_35_ = l_Lasm_JS_Web_Support_fields(v___x_34_);
lean_dec_ref(v___x_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathObject___lam__0(lean_object* v___x_40_, lean_object* v_d_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__0));
lean_inc_ref(v___x_40_);
v___x_43_ = l_Lasm_JS_readField___redArg(v___x_40_, v_d_41_, v___x_42_);
if (lean_obj_tag(v___x_43_) == 0)
{
lean_object* v_a_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_51_; 
lean_dec_ref(v___x_40_);
v_a_44_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_51_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_51_ == 0)
{
v___x_46_ = v___x_43_;
v_isShared_47_ = v_isSharedCheck_51_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_a_44_);
lean_dec(v___x_43_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_51_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_49_; 
if (v_isShared_47_ == 0)
{
v___x_49_ = v___x_46_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_a_44_);
v___x_49_ = v_reuseFailAlloc_50_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
return v___x_49_;
}
}
}
else
{
lean_object* v_a_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v_a_52_ = lean_ctor_get(v___x_43_, 0);
lean_inc(v_a_52_);
lean_dec_ref_known(v___x_43_, 1);
v___x_53_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__1));
lean_inc_ref(v___x_40_);
v___x_54_ = l_Lasm_JS_readField___redArg(v___x_40_, v_d_41_, v___x_53_);
if (lean_obj_tag(v___x_54_) == 0)
{
lean_object* v_a_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_62_; 
lean_dec(v_a_52_);
lean_dec_ref(v___x_40_);
v_a_55_ = lean_ctor_get(v___x_54_, 0);
v_isSharedCheck_62_ = !lean_is_exclusive(v___x_54_);
if (v_isSharedCheck_62_ == 0)
{
v___x_57_ = v___x_54_;
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_a_55_);
lean_dec(v___x_54_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_60_; 
if (v_isShared_58_ == 0)
{
v___x_60_ = v___x_57_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_a_55_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
return v___x_60_;
}
}
}
else
{
lean_object* v_a_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v_a_63_ = lean_ctor_get(v___x_54_, 0);
lean_inc(v_a_63_);
lean_dec_ref_known(v___x_54_, 1);
v___x_64_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__2));
lean_inc_ref(v___x_40_);
v___x_65_ = l_Lasm_JS_readField___redArg(v___x_40_, v_d_41_, v___x_64_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_73_; 
lean_dec(v_a_63_);
lean_dec(v_a_52_);
lean_dec_ref(v___x_40_);
v_a_66_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_73_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_73_ == 0)
{
v___x_68_ = v___x_65_;
v_isShared_69_ = v_isSharedCheck_73_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_a_66_);
lean_dec(v___x_65_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_73_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___x_71_; 
if (v_isShared_69_ == 0)
{
v___x_71_ = v___x_68_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v_a_66_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
return v___x_71_;
}
}
}
else
{
lean_object* v_a_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v_a_74_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_a_74_);
lean_dec_ref_known(v___x_65_, 1);
v___x_75_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__3));
lean_inc_ref(v___x_40_);
v___x_76_ = l_Lasm_JS_readField___redArg(v___x_40_, v_d_41_, v___x_75_);
if (lean_obj_tag(v___x_76_) == 0)
{
lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_84_; 
lean_dec(v_a_74_);
lean_dec(v_a_63_);
lean_dec(v_a_52_);
lean_dec_ref(v___x_40_);
v_a_77_ = lean_ctor_get(v___x_76_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_76_);
if (v_isSharedCheck_84_ == 0)
{
v___x_79_ = v___x_76_;
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_dec(v___x_76_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_a_77_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
else
{
lean_object* v_a_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v_a_85_ = lean_ctor_get(v___x_76_, 0);
lean_inc(v_a_85_);
lean_dec_ref_known(v___x_76_, 1);
v___x_86_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__4));
v___x_87_ = l_Lasm_JS_readField___redArg(v___x_40_, v_d_41_, v___x_86_);
if (lean_obj_tag(v___x_87_) == 0)
{
lean_object* v_a_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_95_; 
lean_dec(v_a_85_);
lean_dec(v_a_74_);
lean_dec(v_a_63_);
lean_dec(v_a_52_);
v_a_88_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_95_ == 0)
{
v___x_90_ = v___x_87_;
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_a_88_);
lean_dec(v___x_87_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_93_; 
if (v_isShared_91_ == 0)
{
v___x_93_ = v___x_90_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_a_88_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
else
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_104_; 
v_a_96_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_104_ == 0)
{
v___x_98_ = v___x_87_;
v_isShared_99_ = v_isSharedCheck_104_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_87_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_104_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_100_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_100_, 0, v_a_52_);
lean_ctor_set(v___x_100_, 1, v_a_63_);
lean_ctor_set(v___x_100_, 2, v_a_74_);
lean_ctor_set(v___x_100_, 3, v_a_85_);
lean_ctor_set(v___x_100_, 4, v_a_96_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 0, v___x_100_);
v___x_102_ = v___x_98_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_100_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathObject___lam__0___boxed(lean_object* v___x_105_, lean_object* v_d_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lasm_JS_Node_instFromJSPathObject___lam__0(v___x_105_, v_d_106_);
lean_dec(v_d_106_);
return v_res_107_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSPathObject___closed__0(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_108_ = l_Lasm_JS_instFromJSString;
v___x_109_ = l_Lasm_JS_instFromJSOption___redArg(v___x_108_);
return v___x_109_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSPathObject___closed__1(void){
_start:
{
lean_object* v___x_110_; lean_object* v___f_111_; 
v___x_110_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSPathObject___closed__0, &l_Lasm_JS_Node_instFromJSPathObject___closed__0_once, _init_l_Lasm_JS_Node_instFromJSPathObject___closed__0);
v___f_111_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSPathObject___lam__0___boxed), 2, 1);
lean_closure_set(v___f_111_, 0, v___x_110_);
return v___f_111_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSPathObject___closed__3(void){
_start:
{
uint8_t v___x_113_; lean_object* v___x_114_; lean_object* v___f_115_; lean_object* v___x_116_; 
v___x_113_ = 0;
v___x_114_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSPathObject___closed__2));
v___f_115_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSPathObject___closed__1, &l_Lasm_JS_Node_instFromJSPathObject___closed__1_once, _init_l_Lasm_JS_Node_instFromJSPathObject___closed__1);
v___x_116_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_116_, 0, v___f_115_);
lean_ctor_set(v___x_116_, 1, v___x_114_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*2, v___x_113_);
return v___x_116_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSPathObject(void){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSPathObject___closed__3, &l_Lasm_JS_Node_instFromJSPathObject___closed__3_once, _init_l_Lasm_JS_Node_instFromJSPathObject___closed__3);
return v___x_117_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_124_ = lean_string_utf8_byte_size(v___x_123_);
return v___x_124_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_125_ = lean_unsigned_to_nat(0u);
v___x_126_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5);
v___x_127_ = lean_nat_dec_eq(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_132_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10));
v___x_133_ = lean_unsigned_to_nat(46u);
v___x_134_ = lean_unsigned_to_nat(193u);
v___x_135_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9));
v___x_136_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8));
v___x_137_ = l_mkPanicMessageWithDecl(v___x_136_, v___x_135_, v___x_134_, v___x_133_, v___x_132_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_context_139_, lean_object* v_d_140_){
_start:
{
lean_object* v___y_143_; lean_object* v___y_144_; 
if (lean_obj_tag(v_d_140_) == 4)
{
lean_object* v_s_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
v_s_148_ = lean_ctor_get(v_d_140_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v_d_140_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v_d_140_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_s_148_);
lean_dec(v_d_140_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
lean_ctor_set_tag(v___x_150_, 0);
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_s_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
else
{
lean_object* v___x_156_; lean_object* v_received_158_; 
v___x_156_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
if (lean_obj_tag(v_d_140_) == 9)
{
lean_object* v_value_172_; lean_object* v_description_173_; uint8_t v___x_174_; 
v_value_172_ = lean_ctor_get(v_d_140_, 0);
v_description_173_ = lean_ctor_get(v_d_140_, 1);
v___x_174_ = lean_string_dec_eq(v_description_173_, v___x_156_);
if (v___x_174_ == 0)
{
goto v___jp_170_;
}
else
{
uint32_t v___x_175_; uint64_t v___x_176_; lean_object* v___x_177_; uint32_t v___x_178_; lean_object* v___x_179_; 
lean_inc_n(v_value_172_, 2);
lean_dec_ref_known(v_d_140_, 2);
v___x_175_ = 206;
v___x_176_ = 0ULL;
v___x_177_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_177_, 0, v_value_172_);
lean_ctor_set(v___x_177_, 1, v___x_156_);
v___x_178_ = lasm_js_value_handle(v_value_172_);
lean_dec(v_value_172_);
v___x_179_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_175_, v___x_176_, v___x_177_, v___x_178_);
lean_dec_ref_known(v___x_177_, 2);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; uint8_t v___x_181_; 
v_a_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc(v_a_180_);
lean_dec_ref_known(v___x_179_, 1);
v___x_181_ = lean_string_validate_utf8(v_a_180_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; lean_object* v___x_183_; 
lean_dec(v_a_180_);
v___x_182_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_183_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_182_);
v_received_158_ = v___x_183_;
goto v___jp_157_;
}
else
{
lean_object* v___x_184_; 
v___x_184_ = lean_string_from_utf8_unchecked(v_a_180_);
v_received_158_ = v___x_184_;
goto v___jp_157_;
}
}
else
{
lean_object* v___x_185_; 
lean_dec_ref_known(v___x_179_, 1);
v___x_185_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v_received_158_ = v___x_185_;
goto v___jp_157_;
}
}
}
else
{
goto v___jp_170_;
}
v___jp_157_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_159_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_160_ = lean_string_append(v___x_159_, v_context_139_);
v___x_161_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_162_ = lean_string_append(v___x_160_, v___x_161_);
v___x_163_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_164_ = lean_string_append(v___x_162_, v___x_163_);
v___x_165_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_166_ = lean_string_append(v___x_164_, v___x_165_);
v___x_167_ = lean_string_append(v___x_166_, v_received_158_);
lean_dec_ref(v_received_158_);
v___x_168_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
v___x_169_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___y_143_ = v___x_167_;
v___y_144_ = v___x_169_;
goto v___jp_142_;
}
else
{
v___y_143_ = v___x_167_;
v___y_144_ = v___x_156_;
goto v___jp_142_;
}
}
v___jp_170_:
{
lean_object* v___x_171_; 
v___x_171_ = l_Lasm_JS_Data_describe(v_d_140_);
v_received_158_ = v___x_171_;
goto v___jp_157_;
}
}
v___jp_142_:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = lean_string_append(v___y_143_, v___y_144_);
v___x_146_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
v___x_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
return v___x_147_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_context_186_, lean_object* v_d_187_, lean_object* v_a_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_186_, v_d_187_);
lean_dec_ref(v_context_186_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_190_, lean_object* v_bytes_191_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_191_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; lean_object* v___x_195_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_a_194_);
lean_dec_ref_known(v___x_193_, 1);
v___x_195_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_190_, v_a_194_);
return v___x_195_;
}
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_204_, lean_object* v_bytes_205_, lean_object* v_a_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3(v_context_204_, v_bytes_205_);
lean_dec_ref(v_bytes_205_);
lean_dec_ref(v_context_204_);
return v_res_207_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_208_; uint64_t v___x_209_; 
v___x_208_ = 0;
v___x_209_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2(lean_object* v_o_211_, lean_object* v_key_212_){
_start:
{
lean_object* v_k_214_; lean_object* v___x_215_; 
v_k_214_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_214_, 0, v_key_212_);
v___x_215_ = l_Lasm_JS_Wire_encodeIO(v_k_214_);
if (lean_obj_tag(v___x_215_) == 0)
{
lean_object* v_a_216_; uint32_t v___x_217_; uint32_t v___x_218_; uint64_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v_a_216_ = lean_ctor_get(v___x_215_, 0);
lean_inc(v_a_216_);
lean_dec_ref_known(v___x_215_, 1);
v___x_217_ = 203;
v___x_218_ = lasm_js_value_handle(v_o_211_);
v___x_219_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
v___x_220_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_221_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_221_, 0, v_o_211_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = lean_unsigned_to_nat(2u);
v___x_223_ = lean_mk_empty_array_with_capacity(v___x_222_);
lean_inc_ref(v_k_214_);
v___x_224_ = lean_array_push(v___x_223_, v_k_214_);
v___x_225_ = lean_array_push(v___x_224_, v___x_221_);
v___x_226_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
v___x_227_ = lasm_js_call(v___x_217_, v___x_218_, v___x_219_, v_a_216_, v___x_226_);
lean_dec_ref_known(v___x_226_, 1);
lean_dec(v_a_216_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
lean_inc(v_a_228_);
lean_dec_ref_known(v___x_227_, 1);
v___x_229_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__1));
v___x_230_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_214_);
v___x_231_ = lean_string_append(v___x_229_, v___x_230_);
lean_dec_ref(v___x_230_);
v___x_232_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3(v___x_231_, v_a_228_);
lean_dec(v_a_228_);
lean_dec_ref(v___x_231_);
return v___x_232_;
}
else
{
lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
lean_dec_ref_known(v_k_214_, 1);
v_a_233_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v___x_227_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_dec(v___x_227_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_a_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
else
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_248_; 
lean_dec_ref_known(v_k_214_, 1);
lean_dec(v_o_211_);
v_a_241_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_248_ == 0)
{
v___x_243_ = v___x_215_;
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___x_215_);
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
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___boxed(lean_object* v_o_249_, lean_object* v_key_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2(v_o_249_, v_key_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1(lean_object* v_module_254_, lean_object* v_o_255_, lean_object* v_a_256_){
_start:
{
if (lean_obj_tag(v_a_256_) == 0)
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
lean_dec(v_o_255_);
v___x_258_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___closed__0));
v___x_259_ = lean_string_append(v___x_258_, v_module_254_);
v___x_260_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
v___x_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
return v___x_261_;
}
else
{
lean_object* v_tail_262_; 
v_tail_262_ = lean_ctor_get(v_a_256_, 1);
if (lean_obj_tag(v_tail_262_) == 0)
{
lean_object* v_head_263_; lean_object* v___x_264_; 
v_head_263_ = lean_ctor_get(v_a_256_, 0);
lean_inc(v_head_263_);
lean_dec_ref_known(v_a_256_, 2);
v___x_264_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2(v_o_255_, v_head_263_);
return v___x_264_;
}
else
{
lean_object* v_head_265_; lean_object* v___x_266_; 
lean_inc(v_tail_262_);
v_head_265_ = lean_ctor_get(v_a_256_, 0);
lean_inc(v_head_265_);
lean_dec_ref_known(v_a_256_, 2);
v___x_266_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_255_, v_head_265_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_a_267_; 
v_a_267_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_a_267_);
lean_dec_ref_known(v___x_266_, 1);
v_o_255_ = v_a_267_;
v_a_256_ = v_tail_262_;
goto _start;
}
else
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
lean_dec(v_tail_262_);
v_a_269_ = lean_ctor_get(v___x_266_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_266_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_266_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___boxed(lean_object* v_module_277_, lean_object* v_o_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1(v_module_277_, v_o_278_, v_a_279_);
lean_dec_ref(v_module_277_);
return v_res_281_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_282_; uint64_t v___x_283_; 
v___x_282_ = 1;
v___x_283_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0(lean_object* v_specifier_285_){
_start:
{
uint32_t v___x_287_; uint32_t v___x_288_; uint64_t v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_287_ = 201;
v___x_288_ = 0;
v___x_289_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0);
v___x_290_ = lean_string_to_utf8(v_specifier_285_);
v___x_291_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_287_, v___x_288_, v___x_289_, v___x_290_);
lean_dec_ref(v___x_290_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v_a_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v_a_292_ = lean_ctor_get(v___x_291_, 0);
lean_inc(v_a_292_);
lean_dec_ref_known(v___x_291_, 1);
v___x_293_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__1));
v___x_294_ = l_String_quote(v_specifier_285_);
v___x_295_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
v___x_296_ = lean_unsigned_to_nat(120u);
v___x_297_ = lean_unsigned_to_nat(0u);
v___x_298_ = l_Std_Format_pretty(v___x_295_, v___x_296_, v___x_297_, v___x_297_);
v___x_299_ = lean_string_append(v___x_293_, v___x_298_);
lean_dec_ref(v___x_298_);
v___x_300_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_299_, v_a_292_);
lean_dec(v_a_292_);
lean_dec_ref(v___x_299_);
return v___x_300_;
}
else
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
lean_dec_ref(v_specifier_285_);
v_a_301_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_291_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_291_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___boxed(lean_object* v_specifier_309_, lean_object* v_a_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0(v_specifier_309_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(lean_object* v_module_312_, lean_object* v_path_313_){
_start:
{
lean_object* v___x_315_; 
lean_inc_ref(v_module_312_);
v___x_315_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0(v_module_312_);
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v_a_316_; lean_object* v___x_317_; 
v_a_316_ = lean_ctor_get(v___x_315_, 0);
lean_inc(v_a_316_);
lean_dec_ref_known(v___x_315_, 1);
v___x_317_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1(v_module_312_, v_a_316_, v_path_313_);
lean_dec_ref(v_module_312_);
return v___x_317_;
}
else
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
lean_dec(v_path_313_);
lean_dec_ref(v_module_312_);
v_a_318_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___x_315_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_315_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0___boxed(lean_object* v_module_326_, lean_object* v_path_327_, lean_object* v_a_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(v_module_326_, v_path_327_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_delimiter(){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_336_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__0));
v___x_337_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__2));
v___x_338_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(v___x_336_, v___x_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_delimiter___boxed(lean_object* v_a_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lasm_JS_Node_path_delimiter();
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep(){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__0));
v___x_347_ = ((lean_object*)(l_Lasm_JS_Node_path_sep___closed__1));
v___x_348_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(v___x_346_, v___x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep___boxed(lean_object* v_a_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Lasm_JS_Node_path_sep();
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(lean_object* v_x_351_){
_start:
{
if (lean_obj_tag(v_x_351_) == 0)
{
lean_object* v___x_352_; 
v___x_352_ = lean_box(0);
return v___x_352_;
}
else
{
lean_object* v_val_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
v_val_353_ = lean_ctor_get(v_x_351_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v_x_351_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v_x_351_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_val_353_);
lean_dec(v_x_351_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_358_; 
if (v_isShared_356_ == 0)
{
lean_ctor_set_tag(v___x_355_, 4);
v___x_358_ = v___x_355_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_val_353_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(lean_object* v_b_362_, lean_object* v_args_363_, uint8_t v_await_364_){
_start:
{
uint64_t v___y_367_; uint64_t v___y_368_; uint64_t v___x_411_; uint64_t v___y_413_; 
v___x_411_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_364_ == 0)
{
uint64_t v___x_418_; 
v___x_418_ = 0ULL;
v___y_413_ = v___x_418_;
goto v___jp_412_;
}
else
{
uint64_t v___x_419_; 
v___x_419_ = 2ULL;
v___y_413_ = v___x_419_;
goto v___jp_412_;
}
v___jp_366_:
{
uint64_t v_flags_369_; uint32_t v___x_370_; lean_object* v___x_371_; uint32_t v___x_372_; lean_object* v___x_373_; 
v_flags_369_ = lean_uint64_lor(v___y_367_, v___y_368_);
v___x_370_ = 214;
v___x_371_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_362_, v_args_363_);
v___x_372_ = 0;
v___x_373_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_370_, v_flags_369_, v___x_371_, v___x_372_);
lean_dec(v___x_371_);
if (lean_obj_tag(v___x_373_) == 0)
{
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; lean_object* v___x_375_; 
v_a_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_a_374_);
lean_dec_ref_known(v___x_373_, 1);
v___x_375_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_374_);
lean_dec(v_a_374_);
if (lean_obj_tag(v___x_375_) == 0)
{
lean_object* v_a_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_a_376_ = lean_ctor_get(v___x_375_, 0);
lean_inc(v_a_376_);
lean_dec_ref_known(v___x_375_, 1);
v___x_377_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_362_);
v___x_378_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4(v___x_377_, v_a_376_);
lean_dec_ref(v___x_377_);
return v___x_378_;
}
else
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_386_; 
v_a_379_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_386_ == 0)
{
v___x_381_ = v___x_375_;
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_375_);
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
v_reuseFailAlloc_385_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_394_; 
v_a_387_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_394_ == 0)
{
v___x_389_ = v___x_373_;
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_a_387_);
lean_dec(v___x_373_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_392_; 
if (v_isShared_390_ == 0)
{
lean_ctor_set_tag(v___x_389_, 1);
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
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_410_; 
v_a_395_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_410_ == 0)
{
v___x_397_ = v___x_373_;
v_isShared_398_ = v_isSharedCheck_410_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_373_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_410_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_408_; 
v___x_399_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_400_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_362_);
v___x_401_ = lean_string_append(v___x_399_, v___x_400_);
lean_dec_ref(v___x_400_);
v___x_402_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_403_ = lean_string_append(v___x_401_, v___x_402_);
v___x_404_ = lean_io_error_to_string(v_a_395_);
v___x_405_ = lean_string_append(v___x_403_, v___x_404_);
lean_dec_ref(v___x_404_);
v___x_406_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 0, v___x_406_);
v___x_408_ = v___x_397_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v___x_406_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
}
v___jp_412_:
{
uint8_t v_construct_414_; uint64_t v___x_415_; 
v_construct_414_ = lean_ctor_get_uint8(v_b_362_, sizeof(void*)*4);
v___x_415_ = lean_uint64_lor(v___x_411_, v___y_413_);
if (v_construct_414_ == 0)
{
uint64_t v___x_416_; 
v___x_416_ = 0ULL;
v___y_367_ = v___x_415_;
v___y_368_ = v___x_416_;
goto v___jp_366_;
}
else
{
uint64_t v___x_417_; 
v___x_417_ = 4ULL;
v___y_367_ = v___x_415_;
v___y_368_ = v___x_417_;
goto v___jp_366_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___boxed(lean_object* v_b_420_, lean_object* v_args_421_, lean_object* v_await_422_, lean_object* v_a_423_){
_start:
{
uint8_t v_await_boxed_424_; lean_object* v_res_425_; 
v_await_boxed_424_ = lean_unbox(v_await_422_);
v_res_425_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v_b_420_, v_args_421_, v_await_boxed_424_);
lean_dec_ref(v_b_420_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_basename(lean_object* v_path___434_, lean_object* v_suffix_435_){
_start:
{
uint8_t v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_437_ = 0;
v___x_438_ = lean_unsigned_to_nat(2u);
v___x_439_ = ((lean_object*)(l_Lasm_JS_Node_path_basename___closed__2));
v___x_440_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_440_, 0, v_path___434_);
v___x_441_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_suffix_435_);
v___x_442_ = lean_mk_empty_array_with_capacity(v___x_438_);
v___x_443_ = lean_array_push(v___x_442_, v___x_440_);
v___x_444_ = lean_array_push(v___x_443_, v___x_441_);
v___x_445_ = l_Lasm_JS_Web_Support_args(v___x_444_);
v___x_446_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_439_, v___x_445_, v___x_437_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_basename___boxed(lean_object* v_path___447_, lean_object* v_suffix_448_, lean_object* v_a_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lasm_JS_Node_path_basename(v_path___447_, v_suffix_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_dirname(lean_object* v_path___459_){
_start:
{
uint8_t v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_461_ = 0;
v___x_462_ = lean_unsigned_to_nat(1u);
v___x_463_ = ((lean_object*)(l_Lasm_JS_Node_path_dirname___closed__2));
v___x_464_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_464_, 0, v_path___459_);
v___x_465_ = lean_mk_empty_array_with_capacity(v___x_462_);
v___x_466_ = lean_array_push(v___x_465_, v___x_464_);
v___x_467_ = l_Lasm_JS_Web_Support_args(v___x_466_);
v___x_468_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_463_, v___x_467_, v___x_461_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_dirname___boxed(lean_object* v_path___469_, lean_object* v_a_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lasm_JS_Node_path_dirname(v_path___469_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_extname(lean_object* v_path___480_){
_start:
{
uint8_t v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_482_ = 0;
v___x_483_ = lean_unsigned_to_nat(1u);
v___x_484_ = ((lean_object*)(l_Lasm_JS_Node_path_extname___closed__2));
v___x_485_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_485_, 0, v_path___480_);
v___x_486_ = lean_mk_empty_array_with_capacity(v___x_483_);
v___x_487_ = lean_array_push(v___x_486_, v___x_485_);
v___x_488_ = l_Lasm_JS_Web_Support_args(v___x_487_);
v___x_489_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_484_, v___x_488_, v___x_482_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_extname___boxed(lean_object* v_path___490_, lean_object* v_a_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Lasm_JS_Node_path_extname(v_path___490_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_format(lean_object* v_pathObject_501_){
_start:
{
lean_object* v_dir_503_; lean_object* v_root_504_; lean_object* v_base_505_; lean_object* v_name_506_; lean_object* v_ext_507_; uint8_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v_dir_503_ = lean_ctor_get(v_pathObject_501_, 0);
lean_inc(v_dir_503_);
v_root_504_ = lean_ctor_get(v_pathObject_501_, 1);
lean_inc(v_root_504_);
v_base_505_ = lean_ctor_get(v_pathObject_501_, 2);
lean_inc(v_base_505_);
v_name_506_ = lean_ctor_get(v_pathObject_501_, 3);
lean_inc(v_name_506_);
v_ext_507_ = lean_ctor_get(v_pathObject_501_, 4);
lean_inc(v_ext_507_);
lean_dec_ref(v_pathObject_501_);
v___x_508_ = 0;
v___x_509_ = lean_unsigned_to_nat(1u);
v___x_510_ = ((lean_object*)(l_Lasm_JS_Node_path_format___closed__2));
v___x_511_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__0));
v___x_512_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_dir_503_);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_511_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
v___x_514_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__1));
v___x_515_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_root_504_);
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_514_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_517_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__2));
v___x_518_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_base_505_);
v___x_519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_517_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__3));
v___x_521_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_name_506_);
v___x_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_522_, 0, v___x_520_);
lean_ctor_set(v___x_522_, 1, v___x_521_);
v___x_523_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__4));
v___x_524_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_ext_507_);
v___x_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_523_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
v___x_526_ = lean_unsigned_to_nat(5u);
v___x_527_ = lean_mk_empty_array_with_capacity(v___x_526_);
v___x_528_ = lean_array_push(v___x_527_, v___x_513_);
v___x_529_ = lean_array_push(v___x_528_, v___x_516_);
v___x_530_ = lean_array_push(v___x_529_, v___x_519_);
v___x_531_ = lean_array_push(v___x_530_, v___x_522_);
v___x_532_ = lean_array_push(v___x_531_, v___x_525_);
v___x_533_ = l_Lasm_JS_Web_Support_fields(v___x_532_);
lean_dec_ref(v___x_532_);
v___x_534_ = lean_mk_empty_array_with_capacity(v___x_509_);
v___x_535_ = lean_array_push(v___x_534_, v___x_533_);
v___x_536_ = l_Lasm_JS_Web_Support_args(v___x_535_);
v___x_537_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_510_, v___x_536_, v___x_508_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_format___boxed(lean_object* v_pathObject_538_, lean_object* v_a_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lasm_JS_Node_path_format(v_pathObject_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0(lean_object* v_context_542_, lean_object* v_d_543_){
_start:
{
lean_object* v___y_546_; lean_object* v___y_547_; 
if (lean_obj_tag(v_d_543_) == 2)
{
uint8_t v_b_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v_b_551_ = lean_ctor_get_uint8(v_d_543_, 0);
lean_dec_ref_known(v_d_543_, 0);
v___x_552_ = lean_box(v_b_551_);
v___x_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
return v___x_553_;
}
else
{
lean_object* v___x_554_; lean_object* v_received_556_; 
v___x_554_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
if (lean_obj_tag(v_d_543_) == 9)
{
lean_object* v_value_570_; lean_object* v_description_571_; uint8_t v___x_572_; 
v_value_570_ = lean_ctor_get(v_d_543_, 0);
v_description_571_ = lean_ctor_get(v_d_543_, 1);
v___x_572_ = lean_string_dec_eq(v_description_571_, v___x_554_);
if (v___x_572_ == 0)
{
goto v___jp_568_;
}
else
{
uint32_t v___x_573_; uint64_t v___x_574_; lean_object* v___x_575_; uint32_t v___x_576_; lean_object* v___x_577_; 
lean_inc_n(v_value_570_, 2);
lean_dec_ref_known(v_d_543_, 2);
v___x_573_ = 206;
v___x_574_ = 0ULL;
v___x_575_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_575_, 0, v_value_570_);
lean_ctor_set(v___x_575_, 1, v___x_554_);
v___x_576_ = lasm_js_value_handle(v_value_570_);
lean_dec(v_value_570_);
v___x_577_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_573_, v___x_574_, v___x_575_, v___x_576_);
lean_dec_ref_known(v___x_575_, 2);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; uint8_t v___x_579_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_578_);
lean_dec_ref_known(v___x_577_, 1);
v___x_579_ = lean_string_validate_utf8(v_a_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; lean_object* v___x_581_; 
lean_dec(v_a_578_);
v___x_580_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_581_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_580_);
v_received_556_ = v___x_581_;
goto v___jp_555_;
}
else
{
lean_object* v___x_582_; 
v___x_582_ = lean_string_from_utf8_unchecked(v_a_578_);
v_received_556_ = v___x_582_;
goto v___jp_555_;
}
}
else
{
lean_object* v___x_583_; 
lean_dec_ref_known(v___x_577_, 1);
v___x_583_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v_received_556_ = v___x_583_;
goto v___jp_555_;
}
}
}
else
{
goto v___jp_568_;
}
v___jp_555_:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_557_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_558_ = lean_string_append(v___x_557_, v_context_542_);
v___x_559_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_560_ = lean_string_append(v___x_558_, v___x_559_);
v___x_561_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0___closed__0));
v___x_562_ = lean_string_append(v___x_560_, v___x_561_);
v___x_563_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_564_ = lean_string_append(v___x_562_, v___x_563_);
v___x_565_ = lean_string_append(v___x_564_, v_received_556_);
lean_dec_ref(v_received_556_);
v___x_566_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6);
if (v___x_566_ == 0)
{
lean_object* v___x_567_; 
v___x_567_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___y_546_ = v___x_565_;
v___y_547_ = v___x_567_;
goto v___jp_545_;
}
else
{
v___y_546_ = v___x_565_;
v___y_547_ = v___x_554_;
goto v___jp_545_;
}
}
v___jp_568_:
{
lean_object* v___x_569_; 
v___x_569_ = l_Lasm_JS_Data_describe(v_d_543_);
v_received_556_ = v___x_569_;
goto v___jp_555_;
}
}
v___jp_545_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_548_ = lean_string_append(v___y_546_, v___y_547_);
v___x_549_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
v___x_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
return v___x_550_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0___boxed(lean_object* v_context_584_, lean_object* v_d_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0(v_context_584_, v_d_585_);
lean_dec_ref(v_context_584_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(lean_object* v_b_588_, lean_object* v_args_589_, uint8_t v_await_590_){
_start:
{
uint64_t v___y_593_; uint64_t v___y_594_; uint64_t v___x_637_; uint64_t v___y_639_; 
v___x_637_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_590_ == 0)
{
uint64_t v___x_644_; 
v___x_644_ = 0ULL;
v___y_639_ = v___x_644_;
goto v___jp_638_;
}
else
{
uint64_t v___x_645_; 
v___x_645_ = 2ULL;
v___y_639_ = v___x_645_;
goto v___jp_638_;
}
v___jp_592_:
{
uint64_t v_flags_595_; uint32_t v___x_596_; lean_object* v___x_597_; uint32_t v___x_598_; lean_object* v___x_599_; 
v_flags_595_ = lean_uint64_lor(v___y_593_, v___y_594_);
v___x_596_ = 214;
v___x_597_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_588_, v_args_589_);
v___x_598_ = 0;
v___x_599_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_596_, v_flags_595_, v___x_597_, v___x_598_);
lean_dec(v___x_597_);
if (lean_obj_tag(v___x_599_) == 0)
{
if (lean_obj_tag(v___x_599_) == 0)
{
lean_object* v_a_600_; lean_object* v___x_601_; 
v_a_600_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_a_600_);
lean_dec_ref_known(v___x_599_, 1);
v___x_601_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_600_);
lean_dec(v_a_600_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_588_);
v___x_604_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0(v___x_603_, v_a_602_);
lean_dec_ref(v___x_603_);
return v___x_604_;
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
v_a_605_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_601_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_601_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
v_a_613_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_599_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_599_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set_tag(v___x_615_, 1);
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
else
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_636_; 
v_a_621_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_636_ == 0)
{
v___x_623_ = v___x_599_;
v_isShared_624_ = v_isSharedCheck_636_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_599_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_636_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_625_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_626_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_588_);
v___x_627_ = lean_string_append(v___x_625_, v___x_626_);
lean_dec_ref(v___x_626_);
v___x_628_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_629_ = lean_string_append(v___x_627_, v___x_628_);
v___x_630_ = lean_io_error_to_string(v_a_621_);
v___x_631_ = lean_string_append(v___x_629_, v___x_630_);
lean_dec_ref(v___x_630_);
v___x_632_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 0, v___x_632_);
v___x_634_ = v___x_623_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v___x_632_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
v___jp_638_:
{
uint8_t v_construct_640_; uint64_t v___x_641_; 
v_construct_640_ = lean_ctor_get_uint8(v_b_588_, sizeof(void*)*4);
v___x_641_ = lean_uint64_lor(v___x_637_, v___y_639_);
if (v_construct_640_ == 0)
{
uint64_t v___x_642_; 
v___x_642_ = 0ULL;
v___y_593_ = v___x_641_;
v___y_594_ = v___x_642_;
goto v___jp_592_;
}
else
{
uint64_t v___x_643_; 
v___x_643_ = 4ULL;
v___y_593_ = v___x_641_;
v___y_594_ = v___x_643_;
goto v___jp_592_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0___boxed(lean_object* v_b_646_, lean_object* v_args_647_, lean_object* v_await_648_, lean_object* v_a_649_){
_start:
{
uint8_t v_await_boxed_650_; lean_object* v_res_651_; 
v_await_boxed_650_ = lean_unbox(v_await_648_);
v_res_651_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v_b_646_, v_args_647_, v_await_boxed_650_);
lean_dec_ref(v_b_646_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_matchesGlob(lean_object* v_path___660_, lean_object* v_pattern_661_){
_start:
{
uint8_t v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_663_ = 0;
v___x_664_ = lean_unsigned_to_nat(2u);
v___x_665_ = ((lean_object*)(l_Lasm_JS_Node_path_matchesGlob___closed__2));
v___x_666_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_666_, 0, v_path___660_);
v___x_667_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_667_, 0, v_pattern_661_);
v___x_668_ = lean_mk_empty_array_with_capacity(v___x_664_);
v___x_669_ = lean_array_push(v___x_668_, v___x_666_);
v___x_670_ = lean_array_push(v___x_669_, v___x_667_);
v___x_671_ = l_Lasm_JS_Web_Support_args(v___x_670_);
v___x_672_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v___x_665_, v___x_671_, v___x_663_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_matchesGlob___boxed(lean_object* v_path___673_, lean_object* v_pattern_674_, lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lasm_JS_Node_path_matchesGlob(v_path___673_, v_pattern_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_isAbsolute(lean_object* v_path___685_){
_start:
{
uint8_t v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_687_ = 0;
v___x_688_ = lean_unsigned_to_nat(1u);
v___x_689_ = ((lean_object*)(l_Lasm_JS_Node_path_isAbsolute___closed__2));
v___x_690_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_690_, 0, v_path___685_);
v___x_691_ = lean_mk_empty_array_with_capacity(v___x_688_);
v___x_692_ = lean_array_push(v___x_691_, v___x_690_);
v___x_693_ = l_Lasm_JS_Web_Support_args(v___x_692_);
v___x_694_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v___x_689_, v___x_693_, v___x_687_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_isAbsolute___boxed(lean_object* v_path___695_, lean_object* v_a_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lasm_JS_Node_path_isAbsolute(v_path___695_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(size_t v_sz_698_, size_t v_i_699_, lean_object* v_bs_700_){
_start:
{
uint8_t v___x_701_; 
v___x_701_ = lean_usize_dec_lt(v_i_699_, v_sz_698_);
if (v___x_701_ == 0)
{
return v_bs_700_;
}
else
{
lean_object* v_v_702_; lean_object* v___x_703_; lean_object* v_bs_x27_704_; lean_object* v___x_705_; size_t v___x_706_; size_t v___x_707_; lean_object* v___x_708_; 
v_v_702_ = lean_array_uget(v_bs_700_, v_i_699_);
v___x_703_ = lean_unsigned_to_nat(0u);
v_bs_x27_704_ = lean_array_uset(v_bs_700_, v_i_699_, v___x_703_);
v___x_705_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_705_, 0, v_v_702_);
v___x_706_ = ((size_t)1ULL);
v___x_707_ = lean_usize_add(v_i_699_, v___x_706_);
v___x_708_ = lean_array_uset(v_bs_x27_704_, v_i_699_, v___x_705_);
v_i_699_ = v___x_707_;
v_bs_700_ = v___x_708_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0___boxed(lean_object* v_sz_710_, lean_object* v_i_711_, lean_object* v_bs_712_){
_start:
{
size_t v_sz_boxed_713_; size_t v_i_boxed_714_; lean_object* v_res_715_; 
v_sz_boxed_713_ = lean_unbox_usize(v_sz_710_);
lean_dec(v_sz_710_);
v_i_boxed_714_ = lean_unbox_usize(v_i_711_);
lean_dec(v_i_711_);
v_res_715_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_boxed_713_, v_i_boxed_714_, v_bs_712_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_join(lean_object* v_paths_726_){
_start:
{
uint8_t v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; size_t v_sz_731_; size_t v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_728_ = 0;
v___x_729_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__2));
v___x_730_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__3));
v_sz_731_ = lean_array_size(v_paths_726_);
v___x_732_ = ((size_t)0ULL);
v___x_733_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_731_, v___x_732_, v_paths_726_);
v___x_734_ = l_Lasm_JS_Web_Support_argsWith(v___x_730_, v___x_733_);
lean_dec_ref(v___x_733_);
v___x_735_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_729_, v___x_734_, v___x_728_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_join___boxed(lean_object* v_paths_736_, lean_object* v_a_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lasm_JS_Node_path_join(v_paths_736_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_normalize(lean_object* v_path___747_){
_start:
{
uint8_t v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_749_ = 0;
v___x_750_ = lean_unsigned_to_nat(1u);
v___x_751_ = ((lean_object*)(l_Lasm_JS_Node_path_normalize___closed__2));
v___x_752_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_752_, 0, v_path___747_);
v___x_753_ = lean_mk_empty_array_with_capacity(v___x_750_);
v___x_754_ = lean_array_push(v___x_753_, v___x_752_);
v___x_755_ = l_Lasm_JS_Web_Support_args(v___x_754_);
v___x_756_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_751_, v___x_755_, v___x_749_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_normalize___boxed(lean_object* v_path___757_, lean_object* v_a_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Lasm_JS_Node_path_normalize(v_path___757_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(lean_object* v_d_769_, lean_object* v_key_770_){
_start:
{
if (lean_obj_tag(v_d_769_) == 8)
{
lean_object* v___x_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_801_; 
v___x_773_ = l_Lasm_JS_Data_field(v_d_769_, v_key_770_);
v_isSharedCheck_801_ = !lean_is_exclusive(v_d_769_);
if (v_isSharedCheck_801_ == 0)
{
lean_object* v_unused_802_; 
v_unused_802_ = lean_ctor_get(v_d_769_, 0);
lean_dec(v_unused_802_);
v___x_775_ = v_d_769_;
v_isShared_776_ = v_isSharedCheck_801_;
goto v_resetjp_774_;
}
else
{
lean_dec(v_d_769_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_801_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
switch(lean_obj_tag(v___x_773_))
{
case 1:
{
lean_del_object(v___x_775_);
goto v___jp_771_;
}
case 0:
{
lean_del_object(v___x_775_);
goto v___jp_771_;
}
default: 
{
if (lean_obj_tag(v___x_773_) == 4)
{
lean_object* v_s_777_; lean_object* v___x_779_; 
v_s_777_ = lean_ctor_get(v___x_773_, 0);
lean_inc_ref(v_s_777_);
lean_dec_ref_known(v___x_773_, 1);
if (v_isShared_776_ == 0)
{
lean_ctor_set_tag(v___x_775_, 1);
lean_ctor_set(v___x_775_, 0, v_s_777_);
v___x_779_ = v___x_775_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_s_777_);
v___x_779_ = v_reuseFailAlloc_781_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
lean_object* v___x_780_; 
v___x_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
return v___x_780_;
}
}
else
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_782_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__1));
v___x_783_ = lean_string_append(v___x_782_, v_key_770_);
v___x_784_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__2));
v___x_785_ = lean_string_append(v___x_783_, v___x_784_);
v___x_786_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__3));
v___x_787_ = lean_string_append(v___x_785_, v___x_786_);
v___x_788_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__4));
v___x_789_ = lean_string_append(v___x_787_, v___x_788_);
v___x_790_ = l_Lasm_JS_Data_describe(v___x_773_);
v___x_791_ = lean_string_append(v___x_789_, v___x_790_);
lean_dec_ref(v___x_790_);
v___x_792_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_796_; 
v___x_793_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___x_794_ = lean_string_append(v___x_791_, v___x_793_);
if (v_isShared_776_ == 0)
{
lean_ctor_set_tag(v___x_775_, 0);
lean_ctor_set(v___x_775_, 0, v___x_794_);
v___x_796_ = v___x_775_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_794_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
else
{
lean_object* v___x_799_; 
if (v_isShared_776_ == 0)
{
lean_ctor_set_tag(v___x_775_, 0);
lean_ctor_set(v___x_775_, 0, v___x_791_);
v___x_799_ = v___x_775_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_791_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_803_; 
lean_dec(v_d_769_);
v___x_803_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__6));
return v___x_803_;
}
v___jp_771_:
{
lean_object* v___x_772_; 
v___x_772_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__0));
return v___x_772_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___boxed(lean_object* v_d_804_, lean_object* v_key_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_804_, v_key_805_);
lean_dec_ref(v_key_805_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(lean_object* v_context_809_, lean_object* v_d_810_){
_start:
{
lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_819_; lean_object* v_received_820_; lean_object* v___y_839_; lean_object* v_a_842_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__0));
lean_inc(v_d_810_);
v___x_867_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_810_, v___x_866_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_867_, 1);
v_a_842_ = v_a_868_;
goto v___jp_841_;
}
else
{
lean_object* v_a_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v_a_869_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_867_, 1);
v___x_870_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__1));
lean_inc(v_d_810_);
v___x_871_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_810_, v___x_870_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; 
lean_dec(v_a_869_);
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref_known(v___x_871_, 1);
v_a_842_ = v_a_872_;
goto v___jp_841_;
}
else
{
lean_object* v_a_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v_a_873_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_873_);
lean_dec_ref_known(v___x_871_, 1);
v___x_874_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__2));
lean_inc(v_d_810_);
v___x_875_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_810_, v___x_874_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; 
lean_dec(v_a_873_);
lean_dec(v_a_869_);
v_a_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_876_);
lean_dec_ref_known(v___x_875_, 1);
v_a_842_ = v_a_876_;
goto v___jp_841_;
}
else
{
lean_object* v_a_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v_a_877_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_875_, 1);
v___x_878_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__3));
lean_inc(v_d_810_);
v___x_879_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_810_, v___x_878_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; 
lean_dec(v_a_877_);
lean_dec(v_a_873_);
lean_dec(v_a_869_);
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_879_, 1);
v_a_842_ = v_a_880_;
goto v___jp_841_;
}
else
{
lean_object* v_a_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v_a_881_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_881_);
lean_dec_ref_known(v___x_879_, 1);
v___x_882_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__4));
lean_inc(v_d_810_);
v___x_883_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_810_, v___x_882_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; 
lean_dec(v_a_881_);
lean_dec(v_a_877_);
lean_dec(v_a_873_);
lean_dec(v_a_869_);
v_a_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_a_884_);
lean_dec_ref_known(v___x_883_, 1);
v_a_842_ = v_a_884_;
goto v___jp_841_;
}
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_893_; 
lean_dec(v_d_810_);
v_a_885_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_893_ == 0)
{
v___x_887_ = v___x_883_;
v_isShared_888_ = v_isSharedCheck_893_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_883_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_893_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_889_; lean_object* v___x_891_; 
v___x_889_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_889_, 0, v_a_869_);
lean_ctor_set(v___x_889_, 1, v_a_873_);
lean_ctor_set(v___x_889_, 2, v_a_877_);
lean_ctor_set(v___x_889_, 3, v_a_881_);
lean_ctor_set(v___x_889_, 4, v_a_885_);
if (v_isShared_888_ == 0)
{
lean_ctor_set_tag(v___x_887_, 0);
lean_ctor_set(v___x_887_, 0, v___x_889_);
v___x_891_ = v___x_887_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
}
}
v___jp_812_:
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_815_ = lean_string_append(v___y_813_, v___y_814_);
lean_dec_ref(v___y_814_);
v___x_816_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
v___x_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_817_, 0, v___x_816_);
return v___x_817_;
}
v___jp_818_:
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_821_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_822_ = lean_string_append(v___x_821_, v_context_809_);
v___x_823_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_824_ = lean_string_append(v___x_822_, v___x_823_);
v___x_825_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSPathObject___closed__2));
v___x_826_ = lean_string_append(v___x_824_, v___x_825_);
v___x_827_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_828_ = lean_string_append(v___x_826_, v___x_827_);
v___x_829_ = lean_string_append(v___x_828_, v_received_820_);
lean_dec_ref(v_received_820_);
v___x_830_ = lean_string_utf8_byte_size(v___y_819_);
v___x_831_ = lean_unsigned_to_nat(0u);
v___x_832_ = lean_nat_dec_eq(v___x_830_, v___x_831_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_833_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__0));
v___x_834_ = lean_string_append(v___x_833_, v___y_819_);
lean_dec_ref(v___y_819_);
v___x_835_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__1));
v___x_836_ = lean_string_append(v___x_834_, v___x_835_);
v___y_813_ = v___x_829_;
v___y_814_ = v___x_836_;
goto v___jp_812_;
}
else
{
lean_object* v___x_837_; 
lean_dec_ref(v___y_819_);
v___x_837_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___y_813_ = v___x_829_;
v___y_814_ = v___x_837_;
goto v___jp_812_;
}
}
v___jp_838_:
{
lean_object* v___x_840_; 
v___x_840_ = l_Lasm_JS_Data_describe(v_d_810_);
v___y_819_ = v___y_839_;
v_received_820_ = v___x_840_;
goto v___jp_818_;
}
v___jp_841_:
{
if (lean_obj_tag(v_d_810_) == 9)
{
lean_object* v_value_843_; lean_object* v_description_844_; lean_object* v___x_845_; uint8_t v___x_846_; 
v_value_843_ = lean_ctor_get(v_d_810_, 0);
v_description_844_ = lean_ctor_get(v_d_810_, 1);
v___x_845_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_846_ = lean_string_dec_eq(v_description_844_, v___x_845_);
if (v___x_846_ == 0)
{
v___y_839_ = v_a_842_;
goto v___jp_838_;
}
else
{
lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_863_; 
lean_inc(v_value_843_);
v_isSharedCheck_863_ = !lean_is_exclusive(v_d_810_);
if (v_isSharedCheck_863_ == 0)
{
lean_object* v_unused_864_; lean_object* v_unused_865_; 
v_unused_864_ = lean_ctor_get(v_d_810_, 1);
lean_dec(v_unused_864_);
v_unused_865_ = lean_ctor_get(v_d_810_, 0);
lean_dec(v_unused_865_);
v___x_848_ = v_d_810_;
v_isShared_849_ = v_isSharedCheck_863_;
goto v_resetjp_847_;
}
else
{
lean_dec(v_d_810_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_863_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
uint32_t v___x_850_; uint64_t v___x_851_; lean_object* v___x_853_; 
v___x_850_ = 206;
v___x_851_ = 0ULL;
lean_inc(v_value_843_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 1, v___x_845_);
v___x_853_ = v___x_848_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_value_843_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v___x_845_);
v___x_853_ = v_reuseFailAlloc_862_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
uint32_t v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lasm_js_value_handle(v_value_843_);
lean_dec(v_value_843_);
v___x_855_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_850_, v___x_851_, v___x_853_, v___x_854_);
lean_dec_ref(v___x_853_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; uint8_t v___x_857_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_856_);
lean_dec_ref_known(v___x_855_, 1);
v___x_857_ = lean_string_validate_utf8(v_a_856_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; lean_object* v___x_859_; 
lean_dec(v_a_856_);
v___x_858_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_859_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_858_);
v___y_819_ = v_a_842_;
v_received_820_ = v___x_859_;
goto v___jp_818_;
}
else
{
lean_object* v___x_860_; 
v___x_860_ = lean_string_from_utf8_unchecked(v_a_856_);
v___y_819_ = v_a_842_;
v_received_820_ = v___x_860_;
goto v___jp_818_;
}
}
else
{
lean_object* v___x_861_; 
lean_dec_ref_known(v___x_855_, 1);
v___x_861_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v___y_819_ = v_a_842_;
v_received_820_ = v___x_861_;
goto v___jp_818_;
}
}
}
}
}
else
{
v___y_839_ = v_a_842_;
goto v___jp_838_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___boxed(lean_object* v_context_894_, lean_object* v_d_895_, lean_object* v_a_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(v_context_894_, v_d_895_);
lean_dec_ref(v_context_894_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(lean_object* v_b_898_, lean_object* v_args_899_, uint8_t v_await_900_){
_start:
{
uint64_t v___y_903_; uint64_t v___y_904_; uint64_t v___x_947_; uint64_t v___y_949_; 
v___x_947_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_900_ == 0)
{
uint64_t v___x_954_; 
v___x_954_ = 0ULL;
v___y_949_ = v___x_954_;
goto v___jp_948_;
}
else
{
uint64_t v___x_955_; 
v___x_955_ = 2ULL;
v___y_949_ = v___x_955_;
goto v___jp_948_;
}
v___jp_902_:
{
uint64_t v_flags_905_; uint32_t v___x_906_; lean_object* v___x_907_; uint32_t v___x_908_; lean_object* v___x_909_; 
v_flags_905_ = lean_uint64_lor(v___y_903_, v___y_904_);
v___x_906_ = 214;
v___x_907_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_898_, v_args_899_);
v___x_908_ = 0;
v___x_909_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_906_, v_flags_905_, v___x_907_, v___x_908_);
lean_dec(v___x_907_);
if (lean_obj_tag(v___x_909_) == 0)
{
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_911_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_909_, 1);
v___x_911_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_910_);
lean_dec(v_a_910_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v___x_911_, 1);
v___x_913_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_898_);
v___x_914_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(v___x_913_, v_a_912_);
lean_dec_ref(v___x_913_);
return v___x_914_;
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
v_a_915_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_911_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_911_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
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
else
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
v_a_923_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_909_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_909_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
lean_ctor_set_tag(v___x_925_, 1);
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_946_; 
v_a_931_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_946_ == 0)
{
v___x_933_ = v___x_909_;
v_isShared_934_ = v_isSharedCheck_946_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_909_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_946_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_944_; 
v___x_935_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_936_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_898_);
v___x_937_ = lean_string_append(v___x_935_, v___x_936_);
lean_dec_ref(v___x_936_);
v___x_938_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_939_ = lean_string_append(v___x_937_, v___x_938_);
v___x_940_ = lean_io_error_to_string(v_a_931_);
v___x_941_ = lean_string_append(v___x_939_, v___x_940_);
lean_dec_ref(v___x_940_);
v___x_942_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_942_, 0, v___x_941_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v___x_942_);
v___x_944_ = v___x_933_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_942_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
v___jp_948_:
{
uint8_t v_construct_950_; uint64_t v___x_951_; 
v_construct_950_ = lean_ctor_get_uint8(v_b_898_, sizeof(void*)*4);
v___x_951_ = lean_uint64_lor(v___x_947_, v___y_949_);
if (v_construct_950_ == 0)
{
uint64_t v___x_952_; 
v___x_952_ = 0ULL;
v___y_903_ = v___x_951_;
v___y_904_ = v___x_952_;
goto v___jp_902_;
}
else
{
uint64_t v___x_953_; 
v___x_953_ = 4ULL;
v___y_903_ = v___x_951_;
v___y_904_ = v___x_953_;
goto v___jp_902_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0___boxed(lean_object* v_b_956_, lean_object* v_args_957_, lean_object* v_await_958_, lean_object* v_a_959_){
_start:
{
uint8_t v_await_boxed_960_; lean_object* v_res_961_; 
v_await_boxed_960_ = lean_unbox(v_await_958_);
v_res_961_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(v_b_956_, v_args_957_, v_await_boxed_960_);
lean_dec_ref(v_b_956_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_parse(lean_object* v_path___970_){
_start:
{
uint8_t v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_972_ = 0;
v___x_973_ = lean_unsigned_to_nat(1u);
v___x_974_ = ((lean_object*)(l_Lasm_JS_Node_path_parse___closed__2));
v___x_975_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_975_, 0, v_path___970_);
v___x_976_ = lean_mk_empty_array_with_capacity(v___x_973_);
v___x_977_ = lean_array_push(v___x_976_, v___x_975_);
v___x_978_ = l_Lasm_JS_Web_Support_args(v___x_977_);
v___x_979_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(v___x_974_, v___x_978_, v___x_972_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_parse___boxed(lean_object* v_path___980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lasm_JS_Node_path_parse(v_path___980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_relative(lean_object* v_from_991_, lean_object* v_to_992_){
_start:
{
uint8_t v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_994_ = 0;
v___x_995_ = lean_unsigned_to_nat(2u);
v___x_996_ = ((lean_object*)(l_Lasm_JS_Node_path_relative___closed__2));
v___x_997_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_997_, 0, v_from_991_);
v___x_998_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_998_, 0, v_to_992_);
v___x_999_ = lean_mk_empty_array_with_capacity(v___x_995_);
v___x_1000_ = lean_array_push(v___x_999_, v___x_997_);
v___x_1001_ = lean_array_push(v___x_1000_, v___x_998_);
v___x_1002_ = l_Lasm_JS_Web_Support_args(v___x_1001_);
v___x_1003_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_996_, v___x_1002_, v___x_994_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_relative___boxed(lean_object* v_from_1004_, lean_object* v_to_1005_, lean_object* v_a_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_Lasm_JS_Node_path_relative(v_from_1004_, v_to_1005_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_resolve(lean_object* v_paths_1016_){
_start:
{
uint8_t v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; size_t v_sz_1021_; size_t v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1018_ = 0;
v___x_1019_ = ((lean_object*)(l_Lasm_JS_Node_path_resolve___closed__2));
v___x_1020_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__3));
v_sz_1021_ = lean_array_size(v_paths_1016_);
v___x_1022_ = ((size_t)0ULL);
v___x_1023_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_1021_, v___x_1022_, v_paths_1016_);
v___x_1024_ = l_Lasm_JS_Web_Support_argsWith(v___x_1020_, v___x_1023_);
lean_dec_ref(v___x_1023_);
v___x_1025_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_1019_, v___x_1024_, v___x_1018_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_resolve___boxed(lean_object* v_paths_1026_, lean_object* v_a_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lasm_JS_Node_path_resolve(v_paths_1026_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_toNamespacedPath(lean_object* v_path___1037_){
_start:
{
uint8_t v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1039_ = 0;
v___x_1040_ = lean_unsigned_to_nat(1u);
v___x_1041_ = ((lean_object*)(l_Lasm_JS_Node_path_toNamespacedPath___closed__2));
v___x_1042_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1042_, 0, v_path___1037_);
v___x_1043_ = lean_mk_empty_array_with_capacity(v___x_1040_);
v___x_1044_ = lean_array_push(v___x_1043_, v___x_1042_);
v___x_1045_ = l_Lasm_JS_Web_Support_args(v___x_1044_);
v___x_1046_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_1041_, v___x_1045_, v___x_1039_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_toNamespacedPath___boxed(lean_object* v_path___1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lasm_JS_Node_path_toNamespacedPath(v_path___1047_);
return v_res_1049_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Path(uint8_t builtin) {
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
l_Lasm_JS_Node_instFromJSPathObject = _init_l_Lasm_JS_Node_instFromJSPathObject();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSPathObject);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
