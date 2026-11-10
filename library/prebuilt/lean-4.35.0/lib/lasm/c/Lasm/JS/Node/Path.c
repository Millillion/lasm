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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node: empty path in "};
static const lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "require "};
static const lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0_value;
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
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
uint8_t v___x_253_; uint64_t v___x_254_; 
v___x_253_ = 1;
v___x_254_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3(lean_object* v_o_255_, lean_object* v_key_256_){
_start:
{
lean_object* v_k_258_; lean_object* v___x_259_; 
v_k_258_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_258_, 0, v_key_256_);
v___x_259_ = l_Lasm_JS_Wire_encodeIO(v_k_258_);
if (lean_obj_tag(v___x_259_) == 0)
{
lean_object* v_a_260_; uint32_t v___x_261_; uint32_t v___x_262_; uint64_t v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_a_260_ = lean_ctor_get(v___x_259_, 0);
lean_inc(v_a_260_);
lean_dec_ref_known(v___x_259_, 1);
v___x_261_ = 203;
v___x_262_ = lasm_js_value_handle(v_o_255_);
v___x_263_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3___closed__0);
v___x_264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_265_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_265_, 0, v_o_255_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v___x_266_ = lean_unsigned_to_nat(2u);
v___x_267_ = lean_mk_empty_array_with_capacity(v___x_266_);
lean_inc_ref(v_k_258_);
v___x_268_ = lean_array_push(v___x_267_, v_k_258_);
v___x_269_ = lean_array_push(v___x_268_, v___x_265_);
v___x_270_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
v___x_271_ = lasm_js_call(v___x_261_, v___x_262_, v___x_263_, v_a_260_, v___x_270_);
lean_dec_ref_known(v___x_270_, 1);
lean_dec(v_a_260_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_a_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_272_);
lean_dec_ref_known(v___x_271_, 1);
v___x_273_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__1));
v___x_274_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_258_);
v___x_275_ = lean_string_append(v___x_273_, v___x_274_);
lean_dec_ref(v___x_274_);
v___x_276_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_275_, v_a_272_);
lean_dec(v_a_272_);
lean_dec_ref(v___x_275_);
return v___x_276_;
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
lean_dec_ref_known(v_k_258_, 1);
v_a_277_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_271_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_271_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
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
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_292_; 
lean_dec_ref_known(v_k_258_, 1);
lean_dec(v_o_255_);
v_a_285_ = lean_ctor_get(v___x_259_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_292_ == 0)
{
v___x_287_ = v___x_259_;
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_259_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_288_ == 0)
{
v___x_290_ = v___x_287_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_a_285_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3___boxed(lean_object* v_o_293_, lean_object* v_key_294_, lean_object* v_a_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3(v_o_293_, v_key_294_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1(lean_object* v_module_298_, lean_object* v_o_299_, lean_object* v_a_300_){
_start:
{
if (lean_obj_tag(v_a_300_) == 0)
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
lean_dec(v_o_299_);
v___x_302_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___closed__0));
v___x_303_ = lean_string_append(v___x_302_, v_module_298_);
v___x_304_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
v___x_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
return v___x_305_;
}
else
{
lean_object* v_tail_306_; 
v_tail_306_ = lean_ctor_get(v_a_300_, 1);
if (lean_obj_tag(v_tail_306_) == 0)
{
lean_object* v_head_307_; lean_object* v___x_308_; 
v_head_307_ = lean_ctor_get(v_a_300_, 0);
lean_inc(v_head_307_);
lean_dec_ref_known(v_a_300_, 2);
v___x_308_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2(v_o_299_, v_head_307_);
return v___x_308_;
}
else
{
lean_object* v_head_309_; lean_object* v___x_310_; 
lean_inc(v_tail_306_);
v_head_309_ = lean_ctor_get(v_a_300_, 0);
lean_inc(v_head_309_);
lean_dec_ref_known(v_a_300_, 2);
v___x_310_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3(v_o_299_, v_head_309_);
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; 
v_a_311_ = lean_ctor_get(v___x_310_, 0);
lean_inc(v_a_311_);
lean_dec_ref_known(v___x_310_, 1);
v_o_299_ = v_a_311_;
v_a_300_ = v_tail_306_;
goto _start;
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec(v_tail_306_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___boxed(lean_object* v_module_321_, lean_object* v_o_322_, lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1(v_module_321_, v_o_322_, v_a_323_);
lean_dec_ref(v_module_321_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0(lean_object* v_specifier_327_){
_start:
{
uint32_t v___x_329_; uint32_t v___x_330_; uint64_t v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_329_ = 201;
v___x_330_ = 0;
v___x_331_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__3___closed__0);
v___x_332_ = lean_string_to_utf8(v_specifier_327_);
v___x_333_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_329_, v___x_330_, v___x_331_, v___x_332_);
lean_dec_ref(v___x_332_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_333_, 1);
v___x_335_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0));
v___x_336_ = l_String_quote(v_specifier_327_);
v___x_337_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
v___x_338_ = lean_unsigned_to_nat(120u);
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = l_Std_Format_pretty(v___x_337_, v___x_338_, v___x_339_, v___x_339_);
v___x_341_ = lean_string_append(v___x_335_, v___x_340_);
lean_dec_ref(v___x_340_);
v___x_342_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_341_, v_a_334_);
lean_dec(v_a_334_);
lean_dec_ref(v___x_341_);
return v___x_342_;
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
lean_dec_ref(v_specifier_327_);
v_a_343_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v___x_333_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_333_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_a_343_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___boxed(lean_object* v_specifier_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0(v_specifier_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(lean_object* v_module_354_, lean_object* v_path_355_){
_start:
{
lean_object* v___x_357_; 
lean_inc_ref(v_module_354_);
v___x_357_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0(v_module_354_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_359_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_357_, 1);
v___x_359_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1(v_module_354_, v_a_358_, v_path_355_);
lean_dec_ref(v_module_354_);
return v___x_359_;
}
else
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
lean_dec(v_path_355_);
lean_dec_ref(v_module_354_);
v_a_360_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_357_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_357_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0___boxed(lean_object* v_module_368_, lean_object* v_path_369_, lean_object* v_a_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(v_module_368_, v_path_369_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_delimiter(){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__0));
v___x_379_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__2));
v___x_380_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(v___x_378_, v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_delimiter___boxed(lean_object* v_a_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Lasm_JS_Node_path_delimiter();
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep(){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_388_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__0));
v___x_389_ = ((lean_object*)(l_Lasm_JS_Node_path_sep___closed__1));
v___x_390_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(v___x_388_, v___x_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep___boxed(lean_object* v_a_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_Lasm_JS_Node_path_sep();
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(lean_object* v_x_393_){
_start:
{
if (lean_obj_tag(v_x_393_) == 0)
{
lean_object* v___x_394_; 
v___x_394_ = lean_box(0);
return v___x_394_;
}
else
{
lean_object* v_val_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
v_val_395_ = lean_ctor_get(v_x_393_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v_x_393_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v_x_393_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_val_395_);
lean_dec(v_x_393_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
lean_ctor_set_tag(v___x_397_, 4);
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_val_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(lean_object* v_b_404_, lean_object* v_args_405_, uint8_t v_await_406_){
_start:
{
uint64_t v___y_409_; uint64_t v___y_410_; uint64_t v___x_453_; uint64_t v___y_455_; 
v___x_453_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_406_ == 0)
{
uint64_t v___x_460_; 
v___x_460_ = 0ULL;
v___y_455_ = v___x_460_;
goto v___jp_454_;
}
else
{
uint64_t v___x_461_; 
v___x_461_ = 2ULL;
v___y_455_ = v___x_461_;
goto v___jp_454_;
}
v___jp_408_:
{
uint64_t v_flags_411_; uint32_t v___x_412_; lean_object* v___x_413_; uint32_t v___x_414_; lean_object* v___x_415_; 
v_flags_411_ = lean_uint64_lor(v___y_409_, v___y_410_);
v___x_412_ = 214;
v___x_413_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_404_, v_args_405_);
v___x_414_ = 0;
v___x_415_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_412_, v_flags_411_, v___x_413_, v___x_414_);
lean_dec(v___x_413_);
if (lean_obj_tag(v___x_415_) == 0)
{
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_417_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
lean_dec_ref_known(v___x_415_, 1);
v___x_417_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_416_);
lean_dec(v_a_416_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref_known(v___x_417_, 1);
v___x_419_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_404_);
v___x_420_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4(v___x_419_, v_a_418_);
lean_dec_ref(v___x_419_);
return v___x_420_;
}
else
{
lean_object* v_a_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
v_a_421_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_428_ == 0)
{
v___x_423_ = v___x_417_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_a_421_);
lean_dec(v___x_417_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_421_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
v_a_429_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_415_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_415_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
lean_ctor_set_tag(v___x_431_, 1);
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
else
{
lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_452_; 
v_a_437_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_452_ == 0)
{
v___x_439_ = v___x_415_;
v_isShared_440_ = v_isSharedCheck_452_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_415_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_452_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_442_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_404_);
v___x_443_ = lean_string_append(v___x_441_, v___x_442_);
lean_dec_ref(v___x_442_);
v___x_444_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_445_ = lean_string_append(v___x_443_, v___x_444_);
v___x_446_ = lean_io_error_to_string(v_a_437_);
v___x_447_ = lean_string_append(v___x_445_, v___x_446_);
lean_dec_ref(v___x_446_);
v___x_448_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_448_);
v___x_450_ = v___x_439_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v___x_448_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
v___jp_454_:
{
uint8_t v_construct_456_; uint64_t v___x_457_; 
v_construct_456_ = lean_ctor_get_uint8(v_b_404_, sizeof(void*)*4);
v___x_457_ = lean_uint64_lor(v___x_453_, v___y_455_);
if (v_construct_456_ == 0)
{
uint64_t v___x_458_; 
v___x_458_ = 0ULL;
v___y_409_ = v___x_457_;
v___y_410_ = v___x_458_;
goto v___jp_408_;
}
else
{
uint64_t v___x_459_; 
v___x_459_ = 4ULL;
v___y_409_ = v___x_457_;
v___y_410_ = v___x_459_;
goto v___jp_408_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___boxed(lean_object* v_b_462_, lean_object* v_args_463_, lean_object* v_await_464_, lean_object* v_a_465_){
_start:
{
uint8_t v_await_boxed_466_; lean_object* v_res_467_; 
v_await_boxed_466_ = lean_unbox(v_await_464_);
v_res_467_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v_b_462_, v_args_463_, v_await_boxed_466_);
lean_dec_ref(v_b_462_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_basename(lean_object* v_path___476_, lean_object* v_suffix_477_){
_start:
{
uint8_t v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_479_ = 0;
v___x_480_ = lean_unsigned_to_nat(2u);
v___x_481_ = ((lean_object*)(l_Lasm_JS_Node_path_basename___closed__2));
v___x_482_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_482_, 0, v_path___476_);
v___x_483_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_suffix_477_);
v___x_484_ = lean_mk_empty_array_with_capacity(v___x_480_);
v___x_485_ = lean_array_push(v___x_484_, v___x_482_);
v___x_486_ = lean_array_push(v___x_485_, v___x_483_);
v___x_487_ = l_Lasm_JS_Web_Support_args(v___x_486_);
v___x_488_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_481_, v___x_487_, v___x_479_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_basename___boxed(lean_object* v_path___489_, lean_object* v_suffix_490_, lean_object* v_a_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Lasm_JS_Node_path_basename(v_path___489_, v_suffix_490_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_dirname(lean_object* v_path___501_){
_start:
{
uint8_t v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_503_ = 0;
v___x_504_ = lean_unsigned_to_nat(1u);
v___x_505_ = ((lean_object*)(l_Lasm_JS_Node_path_dirname___closed__2));
v___x_506_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_506_, 0, v_path___501_);
v___x_507_ = lean_mk_empty_array_with_capacity(v___x_504_);
v___x_508_ = lean_array_push(v___x_507_, v___x_506_);
v___x_509_ = l_Lasm_JS_Web_Support_args(v___x_508_);
v___x_510_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_505_, v___x_509_, v___x_503_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_dirname___boxed(lean_object* v_path___511_, lean_object* v_a_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lasm_JS_Node_path_dirname(v_path___511_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_extname(lean_object* v_path___522_){
_start:
{
uint8_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_524_ = 0;
v___x_525_ = lean_unsigned_to_nat(1u);
v___x_526_ = ((lean_object*)(l_Lasm_JS_Node_path_extname___closed__2));
v___x_527_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_527_, 0, v_path___522_);
v___x_528_ = lean_mk_empty_array_with_capacity(v___x_525_);
v___x_529_ = lean_array_push(v___x_528_, v___x_527_);
v___x_530_ = l_Lasm_JS_Web_Support_args(v___x_529_);
v___x_531_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_526_, v___x_530_, v___x_524_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_extname___boxed(lean_object* v_path___532_, lean_object* v_a_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lasm_JS_Node_path_extname(v_path___532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_format(lean_object* v_pathObject_543_){
_start:
{
lean_object* v_dir_545_; lean_object* v_root_546_; lean_object* v_base_547_; lean_object* v_name_548_; lean_object* v_ext_549_; uint8_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v_dir_545_ = lean_ctor_get(v_pathObject_543_, 0);
lean_inc(v_dir_545_);
v_root_546_ = lean_ctor_get(v_pathObject_543_, 1);
lean_inc(v_root_546_);
v_base_547_ = lean_ctor_get(v_pathObject_543_, 2);
lean_inc(v_base_547_);
v_name_548_ = lean_ctor_get(v_pathObject_543_, 3);
lean_inc(v_name_548_);
v_ext_549_ = lean_ctor_get(v_pathObject_543_, 4);
lean_inc(v_ext_549_);
lean_dec_ref(v_pathObject_543_);
v___x_550_ = 0;
v___x_551_ = lean_unsigned_to_nat(1u);
v___x_552_ = ((lean_object*)(l_Lasm_JS_Node_path_format___closed__2));
v___x_553_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__0));
v___x_554_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_dir_545_);
v___x_555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_553_);
lean_ctor_set(v___x_555_, 1, v___x_554_);
v___x_556_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__1));
v___x_557_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_root_546_);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_556_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
v___x_559_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__2));
v___x_560_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_base_547_);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_559_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
v___x_562_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__3));
v___x_563_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_name_548_);
v___x_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_562_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_565_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__4));
v___x_566_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_ext_549_);
v___x_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_565_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
v___x_568_ = lean_unsigned_to_nat(5u);
v___x_569_ = lean_mk_empty_array_with_capacity(v___x_568_);
v___x_570_ = lean_array_push(v___x_569_, v___x_555_);
v___x_571_ = lean_array_push(v___x_570_, v___x_558_);
v___x_572_ = lean_array_push(v___x_571_, v___x_561_);
v___x_573_ = lean_array_push(v___x_572_, v___x_564_);
v___x_574_ = lean_array_push(v___x_573_, v___x_567_);
v___x_575_ = l_Lasm_JS_Web_Support_fields(v___x_574_);
lean_dec_ref(v___x_574_);
v___x_576_ = lean_mk_empty_array_with_capacity(v___x_551_);
v___x_577_ = lean_array_push(v___x_576_, v___x_575_);
v___x_578_ = l_Lasm_JS_Web_Support_args(v___x_577_);
v___x_579_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_552_, v___x_578_, v___x_550_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_format___boxed(lean_object* v_pathObject_580_, lean_object* v_a_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lasm_JS_Node_path_format(v_pathObject_580_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0(lean_object* v_context_584_, lean_object* v_d_585_){
_start:
{
lean_object* v___y_588_; lean_object* v___y_589_; 
if (lean_obj_tag(v_d_585_) == 2)
{
uint8_t v_b_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v_b_593_ = lean_ctor_get_uint8(v_d_585_, 0);
lean_dec_ref_known(v_d_585_, 0);
v___x_594_ = lean_box(v_b_593_);
v___x_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
return v___x_595_;
}
else
{
lean_object* v___x_596_; lean_object* v_received_598_; 
v___x_596_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
if (lean_obj_tag(v_d_585_) == 9)
{
lean_object* v_value_612_; lean_object* v_description_613_; uint8_t v___x_614_; 
v_value_612_ = lean_ctor_get(v_d_585_, 0);
v_description_613_ = lean_ctor_get(v_d_585_, 1);
v___x_614_ = lean_string_dec_eq(v_description_613_, v___x_596_);
if (v___x_614_ == 0)
{
goto v___jp_610_;
}
else
{
uint32_t v___x_615_; uint64_t v___x_616_; lean_object* v___x_617_; uint32_t v___x_618_; lean_object* v___x_619_; 
lean_inc_n(v_value_612_, 2);
lean_dec_ref_known(v_d_585_, 2);
v___x_615_ = 206;
v___x_616_ = 0ULL;
v___x_617_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_617_, 0, v_value_612_);
lean_ctor_set(v___x_617_, 1, v___x_596_);
v___x_618_ = lasm_js_value_handle(v_value_612_);
lean_dec(v_value_612_);
v___x_619_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_615_, v___x_616_, v___x_617_, v___x_618_);
lean_dec_ref_known(v___x_617_, 2);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v_a_620_; uint8_t v___x_621_; 
v_a_620_ = lean_ctor_get(v___x_619_, 0);
lean_inc(v_a_620_);
lean_dec_ref_known(v___x_619_, 1);
v___x_621_ = lean_string_validate_utf8(v_a_620_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; lean_object* v___x_623_; 
lean_dec(v_a_620_);
v___x_622_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_623_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_622_);
v_received_598_ = v___x_623_;
goto v___jp_597_;
}
else
{
lean_object* v___x_624_; 
v___x_624_ = lean_string_from_utf8_unchecked(v_a_620_);
v_received_598_ = v___x_624_;
goto v___jp_597_;
}
}
else
{
lean_object* v___x_625_; 
lean_dec_ref_known(v___x_619_, 1);
v___x_625_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v_received_598_ = v___x_625_;
goto v___jp_597_;
}
}
}
else
{
goto v___jp_610_;
}
v___jp_597_:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; uint8_t v___x_608_; 
v___x_599_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_600_ = lean_string_append(v___x_599_, v_context_584_);
v___x_601_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_602_ = lean_string_append(v___x_600_, v___x_601_);
v___x_603_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0___closed__0));
v___x_604_ = lean_string_append(v___x_602_, v___x_603_);
v___x_605_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_606_ = lean_string_append(v___x_604_, v___x_605_);
v___x_607_ = lean_string_append(v___x_606_, v_received_598_);
lean_dec_ref(v_received_598_);
v___x_608_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; 
v___x_609_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___y_588_ = v___x_607_;
v___y_589_ = v___x_609_;
goto v___jp_587_;
}
else
{
v___y_588_ = v___x_607_;
v___y_589_ = v___x_596_;
goto v___jp_587_;
}
}
v___jp_610_:
{
lean_object* v___x_611_; 
v___x_611_ = l_Lasm_JS_Data_describe(v_d_585_);
v_received_598_ = v___x_611_;
goto v___jp_597_;
}
}
v___jp_587_:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_590_ = lean_string_append(v___y_588_, v___y_589_);
v___x_591_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_591_, 0, v___x_590_);
v___x_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
return v___x_592_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0___boxed(lean_object* v_context_626_, lean_object* v_d_627_, lean_object* v_a_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0(v_context_626_, v_d_627_);
lean_dec_ref(v_context_626_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(lean_object* v_b_630_, lean_object* v_args_631_, uint8_t v_await_632_){
_start:
{
uint64_t v___y_635_; uint64_t v___y_636_; uint64_t v___x_679_; uint64_t v___y_681_; 
v___x_679_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_632_ == 0)
{
uint64_t v___x_686_; 
v___x_686_ = 0ULL;
v___y_681_ = v___x_686_;
goto v___jp_680_;
}
else
{
uint64_t v___x_687_; 
v___x_687_ = 2ULL;
v___y_681_ = v___x_687_;
goto v___jp_680_;
}
v___jp_634_:
{
uint64_t v_flags_637_; uint32_t v___x_638_; lean_object* v___x_639_; uint32_t v___x_640_; lean_object* v___x_641_; 
v_flags_637_ = lean_uint64_lor(v___y_635_, v___y_636_);
v___x_638_ = 214;
v___x_639_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_630_, v_args_631_);
v___x_640_ = 0;
v___x_641_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_638_, v_flags_637_, v___x_639_, v___x_640_);
lean_dec(v___x_639_);
if (lean_obj_tag(v___x_641_) == 0)
{
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v_a_642_; lean_object* v___x_643_; 
v_a_642_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_a_642_);
lean_dec_ref_known(v___x_641_, 1);
v___x_643_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_642_);
lean_dec(v_a_642_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc(v_a_644_);
lean_dec_ref_known(v___x_643_, 1);
v___x_645_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_630_);
v___x_646_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0(v___x_645_, v_a_644_);
lean_dec_ref(v___x_645_);
return v___x_646_;
}
else
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
v_a_647_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_643_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_643_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_647_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
else
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
v_a_655_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_662_ == 0)
{
v___x_657_ = v___x_641_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_641_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
lean_ctor_set_tag(v___x_657_, 1);
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_655_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_678_; 
v_a_663_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_678_ == 0)
{
v___x_665_ = v___x_641_;
v_isShared_666_ = v_isSharedCheck_678_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_641_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_678_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
v___x_667_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_668_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_630_);
v___x_669_ = lean_string_append(v___x_667_, v___x_668_);
lean_dec_ref(v___x_668_);
v___x_670_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_671_ = lean_string_append(v___x_669_, v___x_670_);
v___x_672_ = lean_io_error_to_string(v_a_663_);
v___x_673_ = lean_string_append(v___x_671_, v___x_672_);
lean_dec_ref(v___x_672_);
v___x_674_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 0, v___x_674_);
v___x_676_ = v___x_665_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
v___jp_680_:
{
uint8_t v_construct_682_; uint64_t v___x_683_; 
v_construct_682_ = lean_ctor_get_uint8(v_b_630_, sizeof(void*)*4);
v___x_683_ = lean_uint64_lor(v___x_679_, v___y_681_);
if (v_construct_682_ == 0)
{
uint64_t v___x_684_; 
v___x_684_ = 0ULL;
v___y_635_ = v___x_683_;
v___y_636_ = v___x_684_;
goto v___jp_634_;
}
else
{
uint64_t v___x_685_; 
v___x_685_ = 4ULL;
v___y_635_ = v___x_683_;
v___y_636_ = v___x_685_;
goto v___jp_634_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0___boxed(lean_object* v_b_688_, lean_object* v_args_689_, lean_object* v_await_690_, lean_object* v_a_691_){
_start:
{
uint8_t v_await_boxed_692_; lean_object* v_res_693_; 
v_await_boxed_692_ = lean_unbox(v_await_690_);
v_res_693_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v_b_688_, v_args_689_, v_await_boxed_692_);
lean_dec_ref(v_b_688_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_matchesGlob(lean_object* v_path___702_, lean_object* v_pattern_703_){
_start:
{
uint8_t v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_705_ = 0;
v___x_706_ = lean_unsigned_to_nat(2u);
v___x_707_ = ((lean_object*)(l_Lasm_JS_Node_path_matchesGlob___closed__2));
v___x_708_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_708_, 0, v_path___702_);
v___x_709_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_709_, 0, v_pattern_703_);
v___x_710_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___x_711_ = lean_array_push(v___x_710_, v___x_708_);
v___x_712_ = lean_array_push(v___x_711_, v___x_709_);
v___x_713_ = l_Lasm_JS_Web_Support_args(v___x_712_);
v___x_714_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v___x_707_, v___x_713_, v___x_705_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_matchesGlob___boxed(lean_object* v_path___715_, lean_object* v_pattern_716_, lean_object* v_a_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lasm_JS_Node_path_matchesGlob(v_path___715_, v_pattern_716_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_isAbsolute(lean_object* v_path___727_){
_start:
{
uint8_t v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_729_ = 0;
v___x_730_ = lean_unsigned_to_nat(1u);
v___x_731_ = ((lean_object*)(l_Lasm_JS_Node_path_isAbsolute___closed__2));
v___x_732_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_732_, 0, v_path___727_);
v___x_733_ = lean_mk_empty_array_with_capacity(v___x_730_);
v___x_734_ = lean_array_push(v___x_733_, v___x_732_);
v___x_735_ = l_Lasm_JS_Web_Support_args(v___x_734_);
v___x_736_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v___x_731_, v___x_735_, v___x_729_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_isAbsolute___boxed(lean_object* v_path___737_, lean_object* v_a_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lasm_JS_Node_path_isAbsolute(v_path___737_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(size_t v_sz_740_, size_t v_i_741_, lean_object* v_bs_742_){
_start:
{
uint8_t v___x_743_; 
v___x_743_ = lean_usize_dec_lt(v_i_741_, v_sz_740_);
if (v___x_743_ == 0)
{
return v_bs_742_;
}
else
{
lean_object* v_v_744_; lean_object* v___x_745_; lean_object* v_bs_x27_746_; lean_object* v___x_747_; size_t v___x_748_; size_t v___x_749_; lean_object* v___x_750_; 
v_v_744_ = lean_array_uget(v_bs_742_, v_i_741_);
v___x_745_ = lean_unsigned_to_nat(0u);
v_bs_x27_746_ = lean_array_uset(v_bs_742_, v_i_741_, v___x_745_);
v___x_747_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_747_, 0, v_v_744_);
v___x_748_ = ((size_t)1ULL);
v___x_749_ = lean_usize_add(v_i_741_, v___x_748_);
v___x_750_ = lean_array_uset(v_bs_x27_746_, v_i_741_, v___x_747_);
v_i_741_ = v___x_749_;
v_bs_742_ = v___x_750_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0___boxed(lean_object* v_sz_752_, lean_object* v_i_753_, lean_object* v_bs_754_){
_start:
{
size_t v_sz_boxed_755_; size_t v_i_boxed_756_; lean_object* v_res_757_; 
v_sz_boxed_755_ = lean_unbox_usize(v_sz_752_);
lean_dec(v_sz_752_);
v_i_boxed_756_ = lean_unbox_usize(v_i_753_);
lean_dec(v_i_753_);
v_res_757_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_boxed_755_, v_i_boxed_756_, v_bs_754_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_join(lean_object* v_paths_768_){
_start:
{
uint8_t v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; size_t v_sz_773_; size_t v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_770_ = 0;
v___x_771_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__2));
v___x_772_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__3));
v_sz_773_ = lean_array_size(v_paths_768_);
v___x_774_ = ((size_t)0ULL);
v___x_775_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_773_, v___x_774_, v_paths_768_);
v___x_776_ = l_Lasm_JS_Web_Support_argsWith(v___x_772_, v___x_775_);
lean_dec_ref(v___x_775_);
v___x_777_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_771_, v___x_776_, v___x_770_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_join___boxed(lean_object* v_paths_778_, lean_object* v_a_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lasm_JS_Node_path_join(v_paths_778_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_normalize(lean_object* v_path___789_){
_start:
{
uint8_t v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_791_ = 0;
v___x_792_ = lean_unsigned_to_nat(1u);
v___x_793_ = ((lean_object*)(l_Lasm_JS_Node_path_normalize___closed__2));
v___x_794_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_794_, 0, v_path___789_);
v___x_795_ = lean_mk_empty_array_with_capacity(v___x_792_);
v___x_796_ = lean_array_push(v___x_795_, v___x_794_);
v___x_797_ = l_Lasm_JS_Web_Support_args(v___x_796_);
v___x_798_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_793_, v___x_797_, v___x_791_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_normalize___boxed(lean_object* v_path___799_, lean_object* v_a_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lasm_JS_Node_path_normalize(v_path___799_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(lean_object* v_d_811_, lean_object* v_key_812_){
_start:
{
if (lean_obj_tag(v_d_811_) == 8)
{
lean_object* v___x_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_843_; 
v___x_815_ = l_Lasm_JS_Data_field(v_d_811_, v_key_812_);
v_isSharedCheck_843_ = !lean_is_exclusive(v_d_811_);
if (v_isSharedCheck_843_ == 0)
{
lean_object* v_unused_844_; 
v_unused_844_ = lean_ctor_get(v_d_811_, 0);
lean_dec(v_unused_844_);
v___x_817_ = v_d_811_;
v_isShared_818_ = v_isSharedCheck_843_;
goto v_resetjp_816_;
}
else
{
lean_dec(v_d_811_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_843_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
switch(lean_obj_tag(v___x_815_))
{
case 1:
{
lean_del_object(v___x_817_);
goto v___jp_813_;
}
case 0:
{
lean_del_object(v___x_817_);
goto v___jp_813_;
}
default: 
{
if (lean_obj_tag(v___x_815_) == 4)
{
lean_object* v_s_819_; lean_object* v___x_821_; 
v_s_819_ = lean_ctor_get(v___x_815_, 0);
lean_inc_ref(v_s_819_);
lean_dec_ref_known(v___x_815_, 1);
if (v_isShared_818_ == 0)
{
lean_ctor_set_tag(v___x_817_, 1);
lean_ctor_set(v___x_817_, 0, v_s_819_);
v___x_821_ = v___x_817_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_s_819_);
v___x_821_ = v_reuseFailAlloc_823_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
lean_object* v___x_822_; 
v___x_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
return v___x_822_;
}
}
else
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; uint8_t v___x_834_; 
v___x_824_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__1));
v___x_825_ = lean_string_append(v___x_824_, v_key_812_);
v___x_826_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__2));
v___x_827_ = lean_string_append(v___x_825_, v___x_826_);
v___x_828_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__3));
v___x_829_ = lean_string_append(v___x_827_, v___x_828_);
v___x_830_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__4));
v___x_831_ = lean_string_append(v___x_829_, v___x_830_);
v___x_832_ = l_Lasm_JS_Data_describe(v___x_815_);
v___x_833_ = lean_string_append(v___x_831_, v___x_832_);
lean_dec_ref(v___x_832_);
v___x_834_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6);
if (v___x_834_ == 0)
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_838_; 
v___x_835_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___x_836_ = lean_string_append(v___x_833_, v___x_835_);
if (v_isShared_818_ == 0)
{
lean_ctor_set_tag(v___x_817_, 0);
lean_ctor_set(v___x_817_, 0, v___x_836_);
v___x_838_ = v___x_817_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_836_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
else
{
lean_object* v___x_841_; 
if (v_isShared_818_ == 0)
{
lean_ctor_set_tag(v___x_817_, 0);
lean_ctor_set(v___x_817_, 0, v___x_833_);
v___x_841_ = v___x_817_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_833_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_845_; 
lean_dec(v_d_811_);
v___x_845_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__6));
return v___x_845_;
}
v___jp_813_:
{
lean_object* v___x_814_; 
v___x_814_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__0));
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___boxed(lean_object* v_d_846_, lean_object* v_key_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_846_, v_key_847_);
lean_dec_ref(v_key_847_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(lean_object* v_context_851_, lean_object* v_d_852_){
_start:
{
lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___y_861_; lean_object* v_received_862_; lean_object* v___y_881_; lean_object* v_a_884_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_908_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__0));
lean_inc(v_d_852_);
v___x_909_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_852_, v___x_908_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_909_, 1);
v_a_884_ = v_a_910_;
goto v___jp_883_;
}
else
{
lean_object* v_a_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_a_911_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_911_);
lean_dec_ref_known(v___x_909_, 1);
v___x_912_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__1));
lean_inc(v_d_852_);
v___x_913_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_852_, v___x_912_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_a_914_; 
lean_dec(v_a_911_);
v_a_914_ = lean_ctor_get(v___x_913_, 0);
lean_inc(v_a_914_);
lean_dec_ref_known(v___x_913_, 1);
v_a_884_ = v_a_914_;
goto v___jp_883_;
}
else
{
lean_object* v_a_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v_a_915_ = lean_ctor_get(v___x_913_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_913_, 1);
v___x_916_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__2));
lean_inc(v_d_852_);
v___x_917_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_852_, v___x_916_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; 
lean_dec(v_a_915_);
lean_dec(v_a_911_);
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___x_917_, 1);
v_a_884_ = v_a_918_;
goto v___jp_883_;
}
else
{
lean_object* v_a_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_a_919_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_919_);
lean_dec_ref_known(v___x_917_, 1);
v___x_920_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__3));
lean_inc(v_d_852_);
v___x_921_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_852_, v___x_920_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; 
lean_dec(v_a_919_);
lean_dec(v_a_915_);
lean_dec(v_a_911_);
v_a_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_922_);
lean_dec_ref_known(v___x_921_, 1);
v_a_884_ = v_a_922_;
goto v___jp_883_;
}
else
{
lean_object* v_a_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v_a_923_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_923_);
lean_dec_ref_known(v___x_921_, 1);
v___x_924_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__4));
lean_inc(v_d_852_);
v___x_925_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_852_, v___x_924_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_a_926_; 
lean_dec(v_a_923_);
lean_dec(v_a_919_);
lean_dec(v_a_915_);
lean_dec(v_a_911_);
v_a_926_ = lean_ctor_get(v___x_925_, 0);
lean_inc(v_a_926_);
lean_dec_ref_known(v___x_925_, 1);
v_a_884_ = v_a_926_;
goto v___jp_883_;
}
else
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_935_; 
lean_dec(v_d_852_);
v_a_927_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_935_ == 0)
{
v___x_929_ = v___x_925_;
v_isShared_930_ = v_isSharedCheck_935_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v___x_925_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_935_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_931_; lean_object* v___x_933_; 
v___x_931_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_931_, 0, v_a_911_);
lean_ctor_set(v___x_931_, 1, v_a_915_);
lean_ctor_set(v___x_931_, 2, v_a_919_);
lean_ctor_set(v___x_931_, 3, v_a_923_);
lean_ctor_set(v___x_931_, 4, v_a_927_);
if (v_isShared_930_ == 0)
{
lean_ctor_set_tag(v___x_929_, 0);
lean_ctor_set(v___x_929_, 0, v___x_931_);
v___x_933_ = v___x_929_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_931_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
}
}
}
}
v___jp_854_:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_857_ = lean_string_append(v___y_855_, v___y_856_);
lean_dec_ref(v___y_856_);
v___x_858_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_858_, 0, v___x_857_);
v___x_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
return v___x_859_;
}
v___jp_860_:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_863_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_864_ = lean_string_append(v___x_863_, v_context_851_);
v___x_865_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_866_ = lean_string_append(v___x_864_, v___x_865_);
v___x_867_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSPathObject___closed__2));
v___x_868_ = lean_string_append(v___x_866_, v___x_867_);
v___x_869_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_870_ = lean_string_append(v___x_868_, v___x_869_);
v___x_871_ = lean_string_append(v___x_870_, v_received_862_);
lean_dec_ref(v_received_862_);
v___x_872_ = lean_string_utf8_byte_size(v___y_861_);
v___x_873_ = lean_unsigned_to_nat(0u);
v___x_874_ = lean_nat_dec_eq(v___x_872_, v___x_873_);
if (v___x_874_ == 0)
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_875_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__0));
v___x_876_ = lean_string_append(v___x_875_, v___y_861_);
lean_dec_ref(v___y_861_);
v___x_877_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__1));
v___x_878_ = lean_string_append(v___x_876_, v___x_877_);
v___y_855_ = v___x_871_;
v___y_856_ = v___x_878_;
goto v___jp_854_;
}
else
{
lean_object* v___x_879_; 
lean_dec_ref(v___y_861_);
v___x_879_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___y_855_ = v___x_871_;
v___y_856_ = v___x_879_;
goto v___jp_854_;
}
}
v___jp_880_:
{
lean_object* v___x_882_; 
v___x_882_ = l_Lasm_JS_Data_describe(v_d_852_);
v___y_861_ = v___y_881_;
v_received_862_ = v___x_882_;
goto v___jp_860_;
}
v___jp_883_:
{
if (lean_obj_tag(v_d_852_) == 9)
{
lean_object* v_value_885_; lean_object* v_description_886_; lean_object* v___x_887_; uint8_t v___x_888_; 
v_value_885_ = lean_ctor_get(v_d_852_, 0);
v_description_886_ = lean_ctor_get(v_d_852_, 1);
v___x_887_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_888_ = lean_string_dec_eq(v_description_886_, v___x_887_);
if (v___x_888_ == 0)
{
v___y_881_ = v_a_884_;
goto v___jp_880_;
}
else
{
lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_905_; 
lean_inc(v_value_885_);
v_isSharedCheck_905_ = !lean_is_exclusive(v_d_852_);
if (v_isSharedCheck_905_ == 0)
{
lean_object* v_unused_906_; lean_object* v_unused_907_; 
v_unused_906_ = lean_ctor_get(v_d_852_, 1);
lean_dec(v_unused_906_);
v_unused_907_ = lean_ctor_get(v_d_852_, 0);
lean_dec(v_unused_907_);
v___x_890_ = v_d_852_;
v_isShared_891_ = v_isSharedCheck_905_;
goto v_resetjp_889_;
}
else
{
lean_dec(v_d_852_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_905_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
uint32_t v___x_892_; uint64_t v___x_893_; lean_object* v___x_895_; 
v___x_892_ = 206;
v___x_893_ = 0ULL;
lean_inc(v_value_885_);
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 1, v___x_887_);
v___x_895_ = v___x_890_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_value_885_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v___x_887_);
v___x_895_ = v_reuseFailAlloc_904_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
uint32_t v___x_896_; lean_object* v___x_897_; 
v___x_896_ = lasm_js_value_handle(v_value_885_);
lean_dec(v_value_885_);
v___x_897_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_892_, v___x_893_, v___x_895_, v___x_896_);
lean_dec_ref(v___x_895_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; uint8_t v___x_899_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_a_898_);
lean_dec_ref_known(v___x_897_, 1);
v___x_899_ = lean_string_validate_utf8(v_a_898_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; lean_object* v___x_901_; 
lean_dec(v_a_898_);
v___x_900_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_901_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_900_);
v___y_861_ = v_a_884_;
v_received_862_ = v___x_901_;
goto v___jp_860_;
}
else
{
lean_object* v___x_902_; 
v___x_902_ = lean_string_from_utf8_unchecked(v_a_898_);
v___y_861_ = v_a_884_;
v_received_862_ = v___x_902_;
goto v___jp_860_;
}
}
else
{
lean_object* v___x_903_; 
lean_dec_ref_known(v___x_897_, 1);
v___x_903_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v___y_861_ = v_a_884_;
v_received_862_ = v___x_903_;
goto v___jp_860_;
}
}
}
}
}
else
{
v___y_881_ = v_a_884_;
goto v___jp_880_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___boxed(lean_object* v_context_936_, lean_object* v_d_937_, lean_object* v_a_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(v_context_936_, v_d_937_);
lean_dec_ref(v_context_936_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(lean_object* v_b_940_, lean_object* v_args_941_, uint8_t v_await_942_){
_start:
{
uint64_t v___y_945_; uint64_t v___y_946_; uint64_t v___x_989_; uint64_t v___y_991_; 
v___x_989_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_942_ == 0)
{
uint64_t v___x_996_; 
v___x_996_ = 0ULL;
v___y_991_ = v___x_996_;
goto v___jp_990_;
}
else
{
uint64_t v___x_997_; 
v___x_997_ = 2ULL;
v___y_991_ = v___x_997_;
goto v___jp_990_;
}
v___jp_944_:
{
uint64_t v_flags_947_; uint32_t v___x_948_; lean_object* v___x_949_; uint32_t v___x_950_; lean_object* v___x_951_; 
v_flags_947_ = lean_uint64_lor(v___y_945_, v___y_946_);
v___x_948_ = 214;
v___x_949_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_940_, v_args_941_);
v___x_950_ = 0;
v___x_951_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_948_, v_flags_947_, v___x_949_, v___x_950_);
lean_dec(v___x_949_);
if (lean_obj_tag(v___x_951_) == 0)
{
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v_a_952_; lean_object* v___x_953_; 
v_a_952_ = lean_ctor_get(v___x_951_, 0);
lean_inc(v_a_952_);
lean_dec_ref_known(v___x_951_, 1);
v___x_953_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_952_);
lean_dec(v_a_952_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref_known(v___x_953_, 1);
v___x_955_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_940_);
v___x_956_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(v___x_955_, v_a_954_);
lean_dec_ref(v___x_955_);
return v___x_956_;
}
else
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_964_; 
v_a_957_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_964_ == 0)
{
v___x_959_ = v___x_953_;
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_953_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_962_; 
if (v_isShared_960_ == 0)
{
v___x_962_ = v___x_959_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_a_957_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
v_a_965_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_951_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_951_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
lean_ctor_set_tag(v___x_967_, 1);
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_988_; 
v_a_973_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_988_ == 0)
{
v___x_975_ = v___x_951_;
v_isShared_976_ = v_isSharedCheck_988_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_951_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_988_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_986_; 
v___x_977_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_978_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_940_);
v___x_979_ = lean_string_append(v___x_977_, v___x_978_);
lean_dec_ref(v___x_978_);
v___x_980_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_981_ = lean_string_append(v___x_979_, v___x_980_);
v___x_982_ = lean_io_error_to_string(v_a_973_);
v___x_983_ = lean_string_append(v___x_981_, v___x_982_);
lean_dec_ref(v___x_982_);
v___x_984_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 0, v___x_984_);
v___x_986_ = v___x_975_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v___x_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
v___jp_990_:
{
uint8_t v_construct_992_; uint64_t v___x_993_; 
v_construct_992_ = lean_ctor_get_uint8(v_b_940_, sizeof(void*)*4);
v___x_993_ = lean_uint64_lor(v___x_989_, v___y_991_);
if (v_construct_992_ == 0)
{
uint64_t v___x_994_; 
v___x_994_ = 0ULL;
v___y_945_ = v___x_993_;
v___y_946_ = v___x_994_;
goto v___jp_944_;
}
else
{
uint64_t v___x_995_; 
v___x_995_ = 4ULL;
v___y_945_ = v___x_993_;
v___y_946_ = v___x_995_;
goto v___jp_944_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0___boxed(lean_object* v_b_998_, lean_object* v_args_999_, lean_object* v_await_1000_, lean_object* v_a_1001_){
_start:
{
uint8_t v_await_boxed_1002_; lean_object* v_res_1003_; 
v_await_boxed_1002_ = lean_unbox(v_await_1000_);
v_res_1003_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(v_b_998_, v_args_999_, v_await_boxed_1002_);
lean_dec_ref(v_b_998_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_parse(lean_object* v_path___1012_){
_start:
{
uint8_t v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1014_ = 0;
v___x_1015_ = lean_unsigned_to_nat(1u);
v___x_1016_ = ((lean_object*)(l_Lasm_JS_Node_path_parse___closed__2));
v___x_1017_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_path___1012_);
v___x_1018_ = lean_mk_empty_array_with_capacity(v___x_1015_);
v___x_1019_ = lean_array_push(v___x_1018_, v___x_1017_);
v___x_1020_ = l_Lasm_JS_Web_Support_args(v___x_1019_);
v___x_1021_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(v___x_1016_, v___x_1020_, v___x_1014_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_parse___boxed(lean_object* v_path___1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Lasm_JS_Node_path_parse(v_path___1022_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_relative(lean_object* v_from_1033_, lean_object* v_to_1034_){
_start:
{
uint8_t v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1036_ = 0;
v___x_1037_ = lean_unsigned_to_nat(2u);
v___x_1038_ = ((lean_object*)(l_Lasm_JS_Node_path_relative___closed__2));
v___x_1039_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1039_, 0, v_from_1033_);
v___x_1040_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1040_, 0, v_to_1034_);
v___x_1041_ = lean_mk_empty_array_with_capacity(v___x_1037_);
v___x_1042_ = lean_array_push(v___x_1041_, v___x_1039_);
v___x_1043_ = lean_array_push(v___x_1042_, v___x_1040_);
v___x_1044_ = l_Lasm_JS_Web_Support_args(v___x_1043_);
v___x_1045_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_1038_, v___x_1044_, v___x_1036_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_relative___boxed(lean_object* v_from_1046_, lean_object* v_to_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lasm_JS_Node_path_relative(v_from_1046_, v_to_1047_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_resolve(lean_object* v_paths_1058_){
_start:
{
uint8_t v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; size_t v_sz_1063_; size_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1060_ = 0;
v___x_1061_ = ((lean_object*)(l_Lasm_JS_Node_path_resolve___closed__2));
v___x_1062_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__3));
v_sz_1063_ = lean_array_size(v_paths_1058_);
v___x_1064_ = ((size_t)0ULL);
v___x_1065_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_1063_, v___x_1064_, v_paths_1058_);
v___x_1066_ = l_Lasm_JS_Web_Support_argsWith(v___x_1062_, v___x_1065_);
lean_dec_ref(v___x_1065_);
v___x_1067_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_1061_, v___x_1066_, v___x_1060_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_resolve___boxed(lean_object* v_paths_1068_, lean_object* v_a_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Lasm_JS_Node_path_resolve(v_paths_1068_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_toNamespacedPath(lean_object* v_path___1079_){
_start:
{
uint8_t v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1081_ = 0;
v___x_1082_ = lean_unsigned_to_nat(1u);
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Node_path_toNamespacedPath___closed__2));
v___x_1084_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1084_, 0, v_path___1079_);
v___x_1085_ = lean_mk_empty_array_with_capacity(v___x_1082_);
v___x_1086_ = lean_array_push(v___x_1085_, v___x_1084_);
v___x_1087_ = l_Lasm_JS_Web_Support_args(v___x_1086_);
v___x_1088_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_1083_, v___x_1087_, v___x_1081_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_toNamespacedPath___boxed(lean_object* v_path___1089_, lean_object* v_a_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_Lasm_JS_Node_path_toNamespacedPath(v_path___1089_);
return v_res_1091_;
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
