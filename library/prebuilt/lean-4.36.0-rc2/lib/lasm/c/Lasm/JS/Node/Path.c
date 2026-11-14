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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9_value;
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_126_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___x_127_ = lean_unsigned_to_nat(46u);
v___x_128_ = lean_unsigned_to_nat(193u);
v___x_129_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6));
v___x_130_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5));
v___x_131_ = l_mkPanicMessageWithDecl(v___x_130_, v___x_129_, v___x_128_, v___x_127_, v___x_126_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_context_133_, lean_object* v_d_134_){
_start:
{
lean_object* v_received_137_; 
if (lean_obj_tag(v_d_134_) == 4)
{
lean_object* v_s_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
v_s_151_ = lean_ctor_get(v_d_134_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v_d_134_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v_d_134_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_s_151_);
lean_dec(v_d_134_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
lean_ctor_set_tag(v___x_153_, 0);
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_s_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
else
{
if (lean_obj_tag(v_d_134_) == 9)
{
lean_object* v_value_159_; lean_object* v_description_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v_value_159_ = lean_ctor_get(v_d_134_, 0);
v_description_160_ = lean_ctor_get(v_d_134_, 1);
v___x_161_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_162_ = lean_string_dec_eq(v_description_160_, v___x_161_);
if (v___x_162_ == 0)
{
goto v___jp_149_;
}
else
{
uint32_t v___x_163_; uint64_t v___x_164_; lean_object* v___x_165_; uint32_t v___x_166_; lean_object* v___x_167_; 
lean_inc_n(v_value_159_, 2);
lean_dec_ref_known(v_d_134_, 2);
v___x_163_ = 206;
v___x_164_ = 0ULL;
v___x_165_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_165_, 0, v_value_159_);
lean_ctor_set(v___x_165_, 1, v___x_161_);
v___x_166_ = lasm_js_value_handle(v_value_159_);
lean_dec(v_value_159_);
v___x_167_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_163_, v___x_164_, v___x_165_, v___x_166_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_a_168_; uint8_t v___x_169_; 
v_a_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_a_168_);
lean_dec_ref_known(v___x_167_, 1);
v___x_169_ = lean_string_validate_utf8(v_a_168_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; lean_object* v___x_171_; 
lean_dec(v_a_168_);
v___x_170_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8);
v___x_171_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_170_);
v_received_137_ = v___x_171_;
goto v___jp_136_;
}
else
{
lean_object* v___x_172_; 
v___x_172_ = lean_string_from_utf8_unchecked(v_a_168_);
v_received_137_ = v___x_172_;
goto v___jp_136_;
}
}
else
{
lean_object* v___x_173_; 
lean_dec_ref_known(v___x_167_, 1);
v___x_173_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9));
v_received_137_ = v___x_173_;
goto v___jp_136_;
}
}
}
else
{
goto v___jp_149_;
}
}
v___jp_136_:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_138_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_139_ = lean_string_append(v___x_138_, v_context_133_);
v___x_140_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_141_ = lean_string_append(v___x_139_, v___x_140_);
v___x_142_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_143_ = lean_string_append(v___x_141_, v___x_142_);
v___x_144_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_145_ = lean_string_append(v___x_143_, v___x_144_);
v___x_146_ = lean_string_append(v___x_145_, v_received_137_);
lean_dec_ref(v_received_137_);
v___x_147_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
v___x_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
return v___x_148_;
}
v___jp_149_:
{
lean_object* v___x_150_; 
v___x_150_ = l_Lasm_JS_Data_describe(v_d_134_);
v_received_137_ = v___x_150_;
goto v___jp_136_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_context_174_, lean_object* v_d_175_, lean_object* v_a_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_174_, v_d_175_);
lean_dec_ref(v_context_174_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_178_, lean_object* v_bytes_179_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_179_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___x_183_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref_known(v___x_181_, 1);
v___x_183_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_178_, v_a_182_);
return v___x_183_;
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_192_, lean_object* v_bytes_193_, lean_object* v_a_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3(v_context_192_, v_bytes_193_);
lean_dec_ref(v_bytes_193_);
lean_dec_ref(v_context_192_);
return v_res_195_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_196_; uint64_t v___x_197_; 
v___x_196_ = 0;
v___x_197_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2(lean_object* v_o_199_, lean_object* v_key_200_){
_start:
{
lean_object* v_k_202_; lean_object* v___x_203_; 
v_k_202_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_202_, 0, v_key_200_);
lean_inc_ref(v_k_202_);
v___x_203_ = l_Lasm_JS_Wire_encodeIO(v_k_202_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_object* v_a_204_; uint32_t v___x_205_; uint32_t v___x_206_; uint64_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v_a_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_a_204_);
lean_dec_ref_known(v___x_203_, 1);
v___x_205_ = 203;
v___x_206_ = lasm_js_value_handle(v_o_199_);
v___x_207_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
v___x_208_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_209_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_209_, 0, v_o_199_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_unsigned_to_nat(2u);
v___x_211_ = lean_mk_empty_array_with_capacity(v___x_210_);
lean_inc_ref(v_k_202_);
v___x_212_ = lean_array_push(v___x_211_, v_k_202_);
v___x_213_ = lean_array_push(v___x_212_, v___x_209_);
v___x_214_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
v___x_215_ = lasm_js_call(v___x_205_, v___x_206_, v___x_207_, v_a_204_, v___x_214_);
lean_dec_ref_known(v___x_214_, 1);
lean_dec(v_a_204_);
if (lean_obj_tag(v___x_215_) == 0)
{
lean_object* v_a_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v_a_216_ = lean_ctor_get(v___x_215_, 0);
lean_inc(v_a_216_);
lean_dec_ref_known(v___x_215_, 1);
v___x_217_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__1));
v___x_218_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_202_);
v___x_219_ = lean_string_append(v___x_217_, v___x_218_);
lean_dec_ref(v___x_218_);
v___x_220_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3(v___x_219_, v_a_216_);
lean_dec(v_a_216_);
lean_dec_ref(v___x_219_);
return v___x_220_;
}
else
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
lean_dec_ref_known(v_k_202_, 1);
v_a_221_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_215_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_215_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_221_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
lean_dec_ref_known(v_k_202_, 1);
lean_dec(v_o_199_);
v_a_229_ = lean_ctor_get(v___x_203_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_203_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_203_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_203_);
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
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___boxed(lean_object* v_o_237_, lean_object* v_key_238_, lean_object* v_a_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2(v_o_237_, v_key_238_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1(lean_object* v_module_242_, lean_object* v_o_243_, lean_object* v_a_244_){
_start:
{
if (lean_obj_tag(v_a_244_) == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec(v_o_243_);
v___x_246_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___closed__0));
v___x_247_ = lean_string_append(v___x_246_, v_module_242_);
v___x_248_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
v___x_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
return v___x_249_;
}
else
{
lean_object* v_tail_250_; 
v_tail_250_ = lean_ctor_get(v_a_244_, 1);
if (lean_obj_tag(v_tail_250_) == 0)
{
lean_object* v_head_251_; lean_object* v___x_252_; 
v_head_251_ = lean_ctor_get(v_a_244_, 0);
lean_inc(v_head_251_);
lean_dec_ref_known(v_a_244_, 2);
v___x_252_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2(v_o_243_, v_head_251_);
return v___x_252_;
}
else
{
lean_object* v_head_253_; lean_object* v___x_254_; 
lean_inc(v_tail_250_);
v_head_253_ = lean_ctor_get(v_a_244_, 0);
lean_inc(v_head_253_);
lean_dec_ref_known(v_a_244_, 2);
v___x_254_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_243_, v_head_253_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_a_255_; 
v_a_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_a_255_);
lean_dec_ref_known(v___x_254_, 1);
v_o_243_ = v_a_255_;
v_a_244_ = v_tail_250_;
goto _start;
}
else
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
lean_dec(v_tail_250_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___boxed(lean_object* v_module_265_, lean_object* v_o_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1(v_module_265_, v_o_266_, v_a_267_);
lean_dec_ref(v_module_265_);
return v_res_269_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_270_; uint64_t v___x_271_; 
v___x_270_ = 1;
v___x_271_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0(lean_object* v_specifier_273_){
_start:
{
uint32_t v___x_275_; uint32_t v___x_276_; uint64_t v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_275_ = 201;
v___x_276_ = 0;
v___x_277_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__0);
lean_inc_ref(v_specifier_273_);
v___x_278_ = lean_string_to_utf8(v_specifier_273_);
v___x_279_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_275_, v___x_276_, v___x_277_, v___x_278_);
lean_dec_ref(v___x_278_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v_a_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v_a_280_ = lean_ctor_get(v___x_279_, 0);
lean_inc(v_a_280_);
lean_dec_ref_known(v___x_279_, 1);
v___x_281_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___closed__1));
v___x_282_ = l_String_quote(v_specifier_273_);
v___x_283_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
v___x_284_ = lean_unsigned_to_nat(120u);
v___x_285_ = lean_unsigned_to_nat(0u);
v___x_286_ = l_Std_Format_pretty(v___x_283_, v___x_284_, v___x_285_, v___x_285_);
v___x_287_ = lean_string_append(v___x_281_, v___x_286_);
lean_dec_ref(v___x_286_);
v___x_288_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_287_, v_a_280_);
lean_dec(v_a_280_);
lean_dec_ref(v___x_287_);
return v___x_288_;
}
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec_ref(v_specifier_273_);
v_a_289_ = lean_ctor_get(v___x_279_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_279_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_279_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0___boxed(lean_object* v_specifier_297_, lean_object* v_a_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0(v_specifier_297_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(lean_object* v_module_300_, lean_object* v_path_301_){
_start:
{
lean_object* v___x_303_; 
lean_inc_ref(v_module_300_);
v___x_303_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0(v_module_300_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; lean_object* v___x_305_; 
v_a_304_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_a_304_);
lean_dec_ref_known(v___x_303_, 1);
v___x_305_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1(v_module_300_, v_a_304_, v_path_301_);
lean_dec_ref(v_module_300_);
return v___x_305_;
}
else
{
lean_object* v_a_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_313_; 
lean_dec(v_path_301_);
lean_dec_ref(v_module_300_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0___boxed(lean_object* v_module_314_, lean_object* v_path_315_, lean_object* v_a_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(v_module_314_, v_path_315_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_delimiter(){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_324_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__0));
v___x_325_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__2));
v___x_326_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(v___x_324_, v___x_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_delimiter___boxed(lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lasm_JS_Node_path_delimiter();
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep(){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_334_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__0));
v___x_335_ = ((lean_object*)(l_Lasm_JS_Node_path_sep___closed__1));
v___x_336_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(v___x_334_, v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep___boxed(lean_object* v_a_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lasm_JS_Node_path_sep();
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(lean_object* v_x_339_){
_start:
{
if (lean_obj_tag(v_x_339_) == 0)
{
lean_object* v___x_340_; 
v___x_340_ = lean_box(0);
return v___x_340_;
}
else
{
lean_object* v_val_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
v_val_341_ = lean_ctor_get(v_x_339_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v_x_339_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v_x_339_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_val_341_);
lean_dec(v_x_339_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
lean_ctor_set_tag(v___x_343_, 4);
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_val_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(lean_object* v_b_350_, lean_object* v_args_351_, uint8_t v_await_352_){
_start:
{
uint64_t v___y_355_; uint64_t v___y_356_; uint64_t v___x_391_; uint64_t v___y_393_; 
v___x_391_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_352_ == 0)
{
uint64_t v___x_398_; 
v___x_398_ = 0ULL;
v___y_393_ = v___x_398_;
goto v___jp_392_;
}
else
{
uint64_t v___x_399_; 
v___x_399_ = 2ULL;
v___y_393_ = v___x_399_;
goto v___jp_392_;
}
v___jp_354_:
{
uint64_t v_flags_357_; uint32_t v___x_358_; lean_object* v___x_359_; uint32_t v___x_360_; lean_object* v___x_361_; 
v_flags_357_ = lean_uint64_lor(v___y_355_, v___y_356_);
v___x_358_ = 214;
v___x_359_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_350_, v_args_351_);
v___x_360_ = 0;
v___x_361_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_358_, v_flags_357_, v___x_359_, v___x_360_);
if (lean_obj_tag(v___x_361_) == 0)
{
lean_object* v_a_362_; lean_object* v___x_363_; 
v_a_362_ = lean_ctor_get(v___x_361_, 0);
lean_inc(v_a_362_);
lean_dec_ref_known(v___x_361_, 1);
v___x_363_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_362_);
lean_dec(v_a_362_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_a_364_);
lean_dec_ref_known(v___x_363_, 1);
v___x_365_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_350_);
v___x_366_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4(v___x_365_, v_a_364_);
lean_dec_ref(v___x_365_);
return v___x_366_;
}
else
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
v_a_367_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_374_ == 0)
{
v___x_369_ = v___x_363_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_363_);
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
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_390_; 
v_a_375_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_390_ == 0)
{
v___x_377_ = v___x_361_;
v_isShared_378_ = v_isSharedCheck_390_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_361_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_390_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_379_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_380_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_350_);
v___x_381_ = lean_string_append(v___x_379_, v___x_380_);
lean_dec_ref(v___x_380_);
v___x_382_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_383_ = lean_string_append(v___x_381_, v___x_382_);
v___x_384_ = lean_io_error_to_string(v_a_375_);
v___x_385_ = lean_string_append(v___x_383_, v___x_384_);
lean_dec_ref(v___x_384_);
v___x_386_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_386_);
v___x_388_ = v___x_377_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
v___jp_392_:
{
uint8_t v_construct_394_; uint64_t v___x_395_; 
v_construct_394_ = lean_ctor_get_uint8(v_b_350_, sizeof(void*)*4);
v___x_395_ = lean_uint64_lor(v___x_391_, v___y_393_);
if (v_construct_394_ == 0)
{
uint64_t v___x_396_; 
v___x_396_ = 0ULL;
v___y_355_ = v___x_395_;
v___y_356_ = v___x_396_;
goto v___jp_354_;
}
else
{
uint64_t v___x_397_; 
v___x_397_ = 4ULL;
v___y_355_ = v___x_395_;
v___y_356_ = v___x_397_;
goto v___jp_354_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___boxed(lean_object* v_b_400_, lean_object* v_args_401_, lean_object* v_await_402_, lean_object* v_a_403_){
_start:
{
uint8_t v_await_boxed_404_; lean_object* v_res_405_; 
v_await_boxed_404_ = lean_unbox(v_await_402_);
v_res_405_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v_b_400_, v_args_401_, v_await_boxed_404_);
lean_dec_ref(v_b_400_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_basename(lean_object* v_path___414_, lean_object* v_suffix_415_){
_start:
{
uint8_t v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_417_ = 0;
v___x_418_ = lean_unsigned_to_nat(2u);
v___x_419_ = ((lean_object*)(l_Lasm_JS_Node_path_basename___closed__2));
v___x_420_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_420_, 0, v_path___414_);
v___x_421_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_suffix_415_);
v___x_422_ = lean_mk_empty_array_with_capacity(v___x_418_);
v___x_423_ = lean_array_push(v___x_422_, v___x_420_);
v___x_424_ = lean_array_push(v___x_423_, v___x_421_);
v___x_425_ = l_Lasm_JS_Web_Support_args(v___x_424_);
v___x_426_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_419_, v___x_425_, v___x_417_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_basename___boxed(lean_object* v_path___427_, lean_object* v_suffix_428_, lean_object* v_a_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lasm_JS_Node_path_basename(v_path___427_, v_suffix_428_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_dirname(lean_object* v_path___439_){
_start:
{
uint8_t v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_441_ = 0;
v___x_442_ = lean_unsigned_to_nat(1u);
v___x_443_ = ((lean_object*)(l_Lasm_JS_Node_path_dirname___closed__2));
v___x_444_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_444_, 0, v_path___439_);
v___x_445_ = lean_mk_empty_array_with_capacity(v___x_442_);
v___x_446_ = lean_array_push(v___x_445_, v___x_444_);
v___x_447_ = l_Lasm_JS_Web_Support_args(v___x_446_);
v___x_448_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_443_, v___x_447_, v___x_441_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_dirname___boxed(lean_object* v_path___449_, lean_object* v_a_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lasm_JS_Node_path_dirname(v_path___449_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_extname(lean_object* v_path___460_){
_start:
{
uint8_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_462_ = 0;
v___x_463_ = lean_unsigned_to_nat(1u);
v___x_464_ = ((lean_object*)(l_Lasm_JS_Node_path_extname___closed__2));
v___x_465_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_465_, 0, v_path___460_);
v___x_466_ = lean_mk_empty_array_with_capacity(v___x_463_);
v___x_467_ = lean_array_push(v___x_466_, v___x_465_);
v___x_468_ = l_Lasm_JS_Web_Support_args(v___x_467_);
v___x_469_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_464_, v___x_468_, v___x_462_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_extname___boxed(lean_object* v_path___470_, lean_object* v_a_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Lasm_JS_Node_path_extname(v_path___470_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_format(lean_object* v_pathObject_481_){
_start:
{
lean_object* v_dir_483_; lean_object* v_root_484_; lean_object* v_base_485_; lean_object* v_name_486_; lean_object* v_ext_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v_dir_483_ = lean_ctor_get(v_pathObject_481_, 0);
lean_inc(v_dir_483_);
v_root_484_ = lean_ctor_get(v_pathObject_481_, 1);
lean_inc(v_root_484_);
v_base_485_ = lean_ctor_get(v_pathObject_481_, 2);
lean_inc(v_base_485_);
v_name_486_ = lean_ctor_get(v_pathObject_481_, 3);
lean_inc(v_name_486_);
v_ext_487_ = lean_ctor_get(v_pathObject_481_, 4);
lean_inc(v_ext_487_);
lean_dec_ref(v_pathObject_481_);
v___x_488_ = 0;
v___x_489_ = lean_unsigned_to_nat(1u);
v___x_490_ = ((lean_object*)(l_Lasm_JS_Node_path_format___closed__2));
v___x_491_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__0));
v___x_492_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_dir_483_);
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__1));
v___x_495_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_root_484_);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_494_);
lean_ctor_set(v___x_496_, 1, v___x_495_);
v___x_497_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__2));
v___x_498_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_base_485_);
v___x_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_497_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v___x_500_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__3));
v___x_501_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_name_486_);
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_500_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v___x_503_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__4));
v___x_504_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_ext_487_);
v___x_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_503_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
v___x_506_ = lean_unsigned_to_nat(5u);
v___x_507_ = lean_mk_empty_array_with_capacity(v___x_506_);
v___x_508_ = lean_array_push(v___x_507_, v___x_493_);
v___x_509_ = lean_array_push(v___x_508_, v___x_496_);
v___x_510_ = lean_array_push(v___x_509_, v___x_499_);
v___x_511_ = lean_array_push(v___x_510_, v___x_502_);
v___x_512_ = lean_array_push(v___x_511_, v___x_505_);
v___x_513_ = l_Lasm_JS_Web_Support_fields(v___x_512_);
lean_dec_ref(v___x_512_);
v___x_514_ = lean_mk_empty_array_with_capacity(v___x_489_);
v___x_515_ = lean_array_push(v___x_514_, v___x_513_);
v___x_516_ = l_Lasm_JS_Web_Support_args(v___x_515_);
v___x_517_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_490_, v___x_516_, v___x_488_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_format___boxed(lean_object* v_pathObject_518_, lean_object* v_a_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Lasm_JS_Node_path_format(v_pathObject_518_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0(lean_object* v_context_522_, lean_object* v_d_523_){
_start:
{
lean_object* v_received_526_; 
if (lean_obj_tag(v_d_523_) == 2)
{
uint8_t v_b_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v_b_540_ = lean_ctor_get_uint8(v_d_523_, 0);
lean_dec_ref_known(v_d_523_, 0);
v___x_541_ = lean_box(v_b_540_);
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
return v___x_542_;
}
else
{
if (lean_obj_tag(v_d_523_) == 9)
{
lean_object* v_value_543_; lean_object* v_description_544_; lean_object* v___x_545_; uint8_t v___x_546_; 
v_value_543_ = lean_ctor_get(v_d_523_, 0);
v_description_544_ = lean_ctor_get(v_d_523_, 1);
v___x_545_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_546_ = lean_string_dec_eq(v_description_544_, v___x_545_);
if (v___x_546_ == 0)
{
goto v___jp_538_;
}
else
{
uint32_t v___x_547_; uint64_t v___x_548_; lean_object* v___x_549_; uint32_t v___x_550_; lean_object* v___x_551_; 
lean_inc_n(v_value_543_, 2);
lean_dec_ref_known(v_d_523_, 2);
v___x_547_ = 206;
v___x_548_ = 0ULL;
v___x_549_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_549_, 0, v_value_543_);
lean_ctor_set(v___x_549_, 1, v___x_545_);
v___x_550_ = lasm_js_value_handle(v_value_543_);
lean_dec(v_value_543_);
v___x_551_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_547_, v___x_548_, v___x_549_, v___x_550_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; uint8_t v___x_553_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_a_552_);
lean_dec_ref_known(v___x_551_, 1);
v___x_553_ = lean_string_validate_utf8(v_a_552_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; lean_object* v___x_555_; 
lean_dec(v_a_552_);
v___x_554_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8);
v___x_555_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_554_);
v_received_526_ = v___x_555_;
goto v___jp_525_;
}
else
{
lean_object* v___x_556_; 
v___x_556_ = lean_string_from_utf8_unchecked(v_a_552_);
v_received_526_ = v___x_556_;
goto v___jp_525_;
}
}
else
{
lean_object* v___x_557_; 
lean_dec_ref_known(v___x_551_, 1);
v___x_557_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9));
v_received_526_ = v___x_557_;
goto v___jp_525_;
}
}
}
else
{
goto v___jp_538_;
}
}
v___jp_525_:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_527_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_528_ = lean_string_append(v___x_527_, v_context_522_);
v___x_529_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_530_ = lean_string_append(v___x_528_, v___x_529_);
v___x_531_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0___closed__0));
v___x_532_ = lean_string_append(v___x_530_, v___x_531_);
v___x_533_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_534_ = lean_string_append(v___x_532_, v___x_533_);
v___x_535_ = lean_string_append(v___x_534_, v_received_526_);
lean_dec_ref(v_received_526_);
v___x_536_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
v___x_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
return v___x_537_;
}
v___jp_538_:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lasm_JS_Data_describe(v_d_523_);
v_received_526_ = v___x_539_;
goto v___jp_525_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0___boxed(lean_object* v_context_558_, lean_object* v_d_559_, lean_object* v_a_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0(v_context_558_, v_d_559_);
lean_dec_ref(v_context_558_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(lean_object* v_b_562_, lean_object* v_args_563_, uint8_t v_await_564_){
_start:
{
uint64_t v___y_567_; uint64_t v___y_568_; uint64_t v___x_603_; uint64_t v___y_605_; 
v___x_603_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_564_ == 0)
{
uint64_t v___x_610_; 
v___x_610_ = 0ULL;
v___y_605_ = v___x_610_;
goto v___jp_604_;
}
else
{
uint64_t v___x_611_; 
v___x_611_ = 2ULL;
v___y_605_ = v___x_611_;
goto v___jp_604_;
}
v___jp_566_:
{
uint64_t v_flags_569_; uint32_t v___x_570_; lean_object* v___x_571_; uint32_t v___x_572_; lean_object* v___x_573_; 
v_flags_569_ = lean_uint64_lor(v___y_567_, v___y_568_);
v___x_570_ = 214;
v___x_571_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_562_, v_args_563_);
v___x_572_ = 0;
v___x_573_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_570_, v_flags_569_, v___x_571_, v___x_572_);
if (lean_obj_tag(v___x_573_) == 0)
{
lean_object* v_a_574_; lean_object* v___x_575_; 
v_a_574_ = lean_ctor_get(v___x_573_, 0);
lean_inc(v_a_574_);
lean_dec_ref_known(v___x_573_, 1);
v___x_575_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_574_);
lean_dec(v_a_574_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
lean_inc(v_a_576_);
lean_dec_ref_known(v___x_575_, 1);
v___x_577_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_562_);
v___x_578_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0_spec__0(v___x_577_, v_a_576_);
lean_dec_ref(v___x_577_);
return v___x_578_;
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
v_a_579_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_575_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_575_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_579_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
else
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_602_; 
v_a_587_ = lean_ctor_get(v___x_573_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_602_ == 0)
{
v___x_589_ = v___x_573_;
v_isShared_590_ = v_isSharedCheck_602_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_573_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_602_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_600_; 
v___x_591_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_592_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_562_);
v___x_593_ = lean_string_append(v___x_591_, v___x_592_);
lean_dec_ref(v___x_592_);
v___x_594_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_595_ = lean_string_append(v___x_593_, v___x_594_);
v___x_596_ = lean_io_error_to_string(v_a_587_);
v___x_597_ = lean_string_append(v___x_595_, v___x_596_);
lean_dec_ref(v___x_596_);
v___x_598_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v___x_598_);
v___x_600_ = v___x_589_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_598_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
v___jp_604_:
{
uint8_t v_construct_606_; uint64_t v___x_607_; 
v_construct_606_ = lean_ctor_get_uint8(v_b_562_, sizeof(void*)*4);
v___x_607_ = lean_uint64_lor(v___x_603_, v___y_605_);
if (v_construct_606_ == 0)
{
uint64_t v___x_608_; 
v___x_608_ = 0ULL;
v___y_567_ = v___x_607_;
v___y_568_ = v___x_608_;
goto v___jp_566_;
}
else
{
uint64_t v___x_609_; 
v___x_609_ = 4ULL;
v___y_567_ = v___x_607_;
v___y_568_ = v___x_609_;
goto v___jp_566_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0___boxed(lean_object* v_b_612_, lean_object* v_args_613_, lean_object* v_await_614_, lean_object* v_a_615_){
_start:
{
uint8_t v_await_boxed_616_; lean_object* v_res_617_; 
v_await_boxed_616_ = lean_unbox(v_await_614_);
v_res_617_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v_b_612_, v_args_613_, v_await_boxed_616_);
lean_dec_ref(v_b_612_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_matchesGlob(lean_object* v_path___626_, lean_object* v_pattern_627_){
_start:
{
uint8_t v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_629_ = 0;
v___x_630_ = lean_unsigned_to_nat(2u);
v___x_631_ = ((lean_object*)(l_Lasm_JS_Node_path_matchesGlob___closed__2));
v___x_632_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_632_, 0, v_path___626_);
v___x_633_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_633_, 0, v_pattern_627_);
v___x_634_ = lean_mk_empty_array_with_capacity(v___x_630_);
v___x_635_ = lean_array_push(v___x_634_, v___x_632_);
v___x_636_ = lean_array_push(v___x_635_, v___x_633_);
v___x_637_ = l_Lasm_JS_Web_Support_args(v___x_636_);
v___x_638_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v___x_631_, v___x_637_, v___x_629_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_matchesGlob___boxed(lean_object* v_path___639_, lean_object* v_pattern_640_, lean_object* v_a_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lasm_JS_Node_path_matchesGlob(v_path___639_, v_pattern_640_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_isAbsolute(lean_object* v_path___651_){
_start:
{
uint8_t v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_653_ = 0;
v___x_654_ = lean_unsigned_to_nat(1u);
v___x_655_ = ((lean_object*)(l_Lasm_JS_Node_path_isAbsolute___closed__2));
v___x_656_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_656_, 0, v_path___651_);
v___x_657_ = lean_mk_empty_array_with_capacity(v___x_654_);
v___x_658_ = lean_array_push(v___x_657_, v___x_656_);
v___x_659_ = l_Lasm_JS_Web_Support_args(v___x_658_);
v___x_660_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v___x_655_, v___x_659_, v___x_653_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_isAbsolute___boxed(lean_object* v_path___661_, lean_object* v_a_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l_Lasm_JS_Node_path_isAbsolute(v_path___661_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(size_t v_sz_664_, size_t v_i_665_, lean_object* v_bs_666_){
_start:
{
uint8_t v___x_667_; 
v___x_667_ = lean_usize_dec_lt(v_i_665_, v_sz_664_);
if (v___x_667_ == 0)
{
return v_bs_666_;
}
else
{
lean_object* v_v_668_; lean_object* v___x_669_; lean_object* v_bs_x27_670_; lean_object* v___x_671_; size_t v___x_672_; size_t v___x_673_; lean_object* v___x_674_; 
v_v_668_ = lean_array_uget(v_bs_666_, v_i_665_);
v___x_669_ = lean_unsigned_to_nat(0u);
v_bs_x27_670_ = lean_array_uset(v_bs_666_, v_i_665_, v___x_669_);
v___x_671_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_671_, 0, v_v_668_);
v___x_672_ = ((size_t)1ULL);
v___x_673_ = lean_usize_add(v_i_665_, v___x_672_);
v___x_674_ = lean_array_uset(v_bs_x27_670_, v_i_665_, v___x_671_);
v_i_665_ = v___x_673_;
v_bs_666_ = v___x_674_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0___boxed(lean_object* v_sz_676_, lean_object* v_i_677_, lean_object* v_bs_678_){
_start:
{
size_t v_sz_boxed_679_; size_t v_i_boxed_680_; lean_object* v_res_681_; 
v_sz_boxed_679_ = lean_unbox_usize(v_sz_676_);
lean_dec(v_sz_676_);
v_i_boxed_680_ = lean_unbox_usize(v_i_677_);
lean_dec(v_i_677_);
v_res_681_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_boxed_679_, v_i_boxed_680_, v_bs_678_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_join(lean_object* v_paths_692_){
_start:
{
uint8_t v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; size_t v_sz_697_; size_t v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_694_ = 0;
v___x_695_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__2));
v___x_696_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__3));
v_sz_697_ = lean_array_size(v_paths_692_);
v___x_698_ = ((size_t)0ULL);
v___x_699_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_697_, v___x_698_, v_paths_692_);
v___x_700_ = l_Lasm_JS_Web_Support_argsWith(v___x_696_, v___x_699_);
lean_dec_ref(v___x_699_);
v___x_701_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_695_, v___x_700_, v___x_694_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_join___boxed(lean_object* v_paths_702_, lean_object* v_a_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lasm_JS_Node_path_join(v_paths_702_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_normalize(lean_object* v_path___713_){
_start:
{
uint8_t v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_715_ = 0;
v___x_716_ = lean_unsigned_to_nat(1u);
v___x_717_ = ((lean_object*)(l_Lasm_JS_Node_path_normalize___closed__2));
v___x_718_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_718_, 0, v_path___713_);
v___x_719_ = lean_mk_empty_array_with_capacity(v___x_716_);
v___x_720_ = lean_array_push(v___x_719_, v___x_718_);
v___x_721_ = l_Lasm_JS_Web_Support_args(v___x_720_);
v___x_722_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_717_, v___x_721_, v___x_715_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_normalize___boxed(lean_object* v_path___723_, lean_object* v_a_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lasm_JS_Node_path_normalize(v_path___723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(lean_object* v_d_735_, lean_object* v_key_736_){
_start:
{
if (lean_obj_tag(v_d_735_) == 8)
{
lean_object* v___x_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_761_; 
v___x_739_ = l_Lasm_JS_Data_field(v_d_735_, v_key_736_);
v_isSharedCheck_761_ = !lean_is_exclusive(v_d_735_);
if (v_isSharedCheck_761_ == 0)
{
lean_object* v_unused_762_; 
v_unused_762_ = lean_ctor_get(v_d_735_, 0);
lean_dec(v_unused_762_);
v___x_741_ = v_d_735_;
v_isShared_742_ = v_isSharedCheck_761_;
goto v_resetjp_740_;
}
else
{
lean_dec(v_d_735_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_761_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
switch(lean_obj_tag(v___x_739_))
{
case 1:
{
lean_del_object(v___x_741_);
goto v___jp_737_;
}
case 0:
{
lean_del_object(v___x_741_);
goto v___jp_737_;
}
default: 
{
if (lean_obj_tag(v___x_739_) == 4)
{
lean_object* v_s_743_; lean_object* v___x_745_; 
v_s_743_ = lean_ctor_get(v___x_739_, 0);
lean_inc_ref(v_s_743_);
lean_dec_ref_known(v___x_739_, 1);
if (v_isShared_742_ == 0)
{
lean_ctor_set_tag(v___x_741_, 1);
lean_ctor_set(v___x_741_, 0, v_s_743_);
v___x_745_ = v___x_741_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_s_743_);
v___x_745_ = v_reuseFailAlloc_747_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; 
v___x_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
return v___x_746_;
}
}
else
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_759_; 
v___x_748_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__1));
v___x_749_ = lean_string_append(v___x_748_, v_key_736_);
v___x_750_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__2));
v___x_751_ = lean_string_append(v___x_749_, v___x_750_);
v___x_752_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__3));
v___x_753_ = lean_string_append(v___x_751_, v___x_752_);
v___x_754_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__4));
v___x_755_ = lean_string_append(v___x_753_, v___x_754_);
v___x_756_ = l_Lasm_JS_Data_describe(v___x_739_);
v___x_757_ = lean_string_append(v___x_755_, v___x_756_);
lean_dec_ref(v___x_756_);
if (v_isShared_742_ == 0)
{
lean_ctor_set_tag(v___x_741_, 0);
lean_ctor_set(v___x_741_, 0, v___x_757_);
v___x_759_ = v___x_741_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_757_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
}
}
else
{
lean_object* v___x_763_; 
lean_dec(v_d_735_);
v___x_763_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__6));
return v___x_763_;
}
v___jp_737_:
{
lean_object* v___x_738_; 
v___x_738_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__0));
return v___x_738_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___boxed(lean_object* v_d_764_, lean_object* v_key_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_764_, v_key_765_);
lean_dec_ref(v_key_765_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(lean_object* v_context_769_, lean_object* v_d_770_){
_start:
{
lean_object* v___y_773_; lean_object* v___y_774_; lean_object* v___y_779_; lean_object* v_received_780_; lean_object* v___y_799_; lean_object* v_a_802_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__0));
lean_inc(v_d_770_);
v___x_827_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_770_, v___x_826_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_828_);
lean_dec_ref_known(v___x_827_, 1);
v_a_802_ = v_a_828_;
goto v___jp_801_;
}
else
{
lean_object* v_a_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v_a_829_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_829_);
lean_dec_ref_known(v___x_827_, 1);
v___x_830_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__1));
lean_inc(v_d_770_);
v___x_831_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_770_, v___x_830_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_object* v_a_832_; 
lean_dec(v_a_829_);
v_a_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_a_832_);
lean_dec_ref_known(v___x_831_, 1);
v_a_802_ = v_a_832_;
goto v___jp_801_;
}
else
{
lean_object* v_a_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v_a_833_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_a_833_);
lean_dec_ref_known(v___x_831_, 1);
v___x_834_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__2));
lean_inc(v_d_770_);
v___x_835_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_770_, v___x_834_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v_a_836_; 
lean_dec(v_a_833_);
lean_dec(v_a_829_);
v_a_836_ = lean_ctor_get(v___x_835_, 0);
lean_inc(v_a_836_);
lean_dec_ref_known(v___x_835_, 1);
v_a_802_ = v_a_836_;
goto v___jp_801_;
}
else
{
lean_object* v_a_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v_a_837_ = lean_ctor_get(v___x_835_, 0);
lean_inc(v_a_837_);
lean_dec_ref_known(v___x_835_, 1);
v___x_838_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__3));
lean_inc(v_d_770_);
v___x_839_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_770_, v___x_838_);
if (lean_obj_tag(v___x_839_) == 0)
{
lean_object* v_a_840_; 
lean_dec(v_a_837_);
lean_dec(v_a_833_);
lean_dec(v_a_829_);
v_a_840_ = lean_ctor_get(v___x_839_, 0);
lean_inc(v_a_840_);
lean_dec_ref_known(v___x_839_, 1);
v_a_802_ = v_a_840_;
goto v___jp_801_;
}
else
{
lean_object* v_a_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v_a_841_ = lean_ctor_get(v___x_839_, 0);
lean_inc(v_a_841_);
lean_dec_ref_known(v___x_839_, 1);
v___x_842_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathObject___lam__0___closed__4));
lean_inc(v_d_770_);
v___x_843_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_770_, v___x_842_);
if (lean_obj_tag(v___x_843_) == 0)
{
lean_object* v_a_844_; 
lean_dec(v_a_841_);
lean_dec(v_a_837_);
lean_dec(v_a_833_);
lean_dec(v_a_829_);
v_a_844_ = lean_ctor_get(v___x_843_, 0);
lean_inc(v_a_844_);
lean_dec_ref_known(v___x_843_, 1);
v_a_802_ = v_a_844_;
goto v___jp_801_;
}
else
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_853_; 
lean_dec(v_d_770_);
v_a_845_ = lean_ctor_get(v___x_843_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_853_ == 0)
{
v___x_847_ = v___x_843_;
v_isShared_848_ = v_isSharedCheck_853_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_843_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_853_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_849_; lean_object* v___x_851_; 
v___x_849_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_849_, 0, v_a_829_);
lean_ctor_set(v___x_849_, 1, v_a_833_);
lean_ctor_set(v___x_849_, 2, v_a_837_);
lean_ctor_set(v___x_849_, 3, v_a_841_);
lean_ctor_set(v___x_849_, 4, v_a_845_);
if (v_isShared_848_ == 0)
{
lean_ctor_set_tag(v___x_847_, 0);
lean_ctor_set(v___x_847_, 0, v___x_849_);
v___x_851_ = v___x_847_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v___x_849_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
}
}
}
v___jp_772_:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_775_ = lean_string_append(v___y_773_, v___y_774_);
lean_dec_ref(v___y_774_);
v___x_776_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
v___x_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
return v___x_777_;
}
v___jp_778_:
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_781_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_782_ = lean_string_append(v___x_781_, v_context_769_);
v___x_783_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_784_ = lean_string_append(v___x_782_, v___x_783_);
v___x_785_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSPathObject___closed__2));
v___x_786_ = lean_string_append(v___x_784_, v___x_785_);
v___x_787_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_788_ = lean_string_append(v___x_786_, v___x_787_);
v___x_789_ = lean_string_append(v___x_788_, v_received_780_);
lean_dec_ref(v_received_780_);
v___x_790_ = lean_string_utf8_byte_size(v___y_779_);
v___x_791_ = lean_unsigned_to_nat(0u);
v___x_792_ = lean_nat_dec_eq(v___x_790_, v___x_791_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_793_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__0));
v___x_794_ = lean_string_append(v___x_793_, v___y_779_);
lean_dec_ref(v___y_779_);
v___x_795_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__1));
v___x_796_ = lean_string_append(v___x_794_, v___x_795_);
v___y_773_ = v___x_789_;
v___y_774_ = v___x_796_;
goto v___jp_772_;
}
else
{
lean_object* v___x_797_; 
lean_dec_ref(v___y_779_);
v___x_797_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___y_773_ = v___x_789_;
v___y_774_ = v___x_797_;
goto v___jp_772_;
}
}
v___jp_798_:
{
lean_object* v___x_800_; 
v___x_800_ = l_Lasm_JS_Data_describe(v_d_770_);
v___y_779_ = v___y_799_;
v_received_780_ = v___x_800_;
goto v___jp_778_;
}
v___jp_801_:
{
if (lean_obj_tag(v_d_770_) == 9)
{
lean_object* v_value_803_; lean_object* v_description_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v_value_803_ = lean_ctor_get(v_d_770_, 0);
v_description_804_ = lean_ctor_get(v_d_770_, 1);
v___x_805_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_806_ = lean_string_dec_eq(v_description_804_, v___x_805_);
if (v___x_806_ == 0)
{
v___y_799_ = v_a_802_;
goto v___jp_798_;
}
else
{
lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_823_; 
lean_inc(v_value_803_);
v_isSharedCheck_823_ = !lean_is_exclusive(v_d_770_);
if (v_isSharedCheck_823_ == 0)
{
lean_object* v_unused_824_; lean_object* v_unused_825_; 
v_unused_824_ = lean_ctor_get(v_d_770_, 1);
lean_dec(v_unused_824_);
v_unused_825_ = lean_ctor_get(v_d_770_, 0);
lean_dec(v_unused_825_);
v___x_808_ = v_d_770_;
v_isShared_809_ = v_isSharedCheck_823_;
goto v_resetjp_807_;
}
else
{
lean_dec(v_d_770_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_823_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
uint32_t v___x_810_; uint64_t v___x_811_; lean_object* v___x_813_; 
v___x_810_ = 206;
v___x_811_ = 0ULL;
lean_inc(v_value_803_);
if (v_isShared_809_ == 0)
{
lean_ctor_set(v___x_808_, 1, v___x_805_);
v___x_813_ = v___x_808_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v_value_803_);
lean_ctor_set(v_reuseFailAlloc_822_, 1, v___x_805_);
v___x_813_ = v_reuseFailAlloc_822_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
uint32_t v___x_814_; lean_object* v___x_815_; 
v___x_814_ = lasm_js_value_handle(v_value_803_);
lean_dec(v_value_803_);
v___x_815_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_810_, v___x_811_, v___x_813_, v___x_814_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; uint8_t v___x_817_; 
v_a_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_a_816_);
lean_dec_ref_known(v___x_815_, 1);
v___x_817_ = lean_string_validate_utf8(v_a_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; lean_object* v___x_819_; 
lean_dec(v_a_816_);
v___x_818_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8);
v___x_819_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_818_);
v___y_779_ = v_a_802_;
v_received_780_ = v___x_819_;
goto v___jp_778_;
}
else
{
lean_object* v___x_820_; 
v___x_820_ = lean_string_from_utf8_unchecked(v_a_816_);
v___y_779_ = v_a_802_;
v_received_780_ = v___x_820_;
goto v___jp_778_;
}
}
else
{
lean_object* v___x_821_; 
lean_dec_ref_known(v___x_815_, 1);
v___x_821_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9));
v___y_779_ = v_a_802_;
v_received_780_ = v___x_821_;
goto v___jp_778_;
}
}
}
}
}
else
{
v___y_799_ = v_a_802_;
goto v___jp_798_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___boxed(lean_object* v_context_854_, lean_object* v_d_855_, lean_object* v_a_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(v_context_854_, v_d_855_);
lean_dec_ref(v_context_854_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(lean_object* v_b_858_, lean_object* v_args_859_, uint8_t v_await_860_){
_start:
{
uint64_t v___y_863_; uint64_t v___y_864_; uint64_t v___x_899_; uint64_t v___y_901_; 
v___x_899_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_860_ == 0)
{
uint64_t v___x_906_; 
v___x_906_ = 0ULL;
v___y_901_ = v___x_906_;
goto v___jp_900_;
}
else
{
uint64_t v___x_907_; 
v___x_907_ = 2ULL;
v___y_901_ = v___x_907_;
goto v___jp_900_;
}
v___jp_862_:
{
uint64_t v_flags_865_; uint32_t v___x_866_; lean_object* v___x_867_; uint32_t v___x_868_; lean_object* v___x_869_; 
v_flags_865_ = lean_uint64_lor(v___y_863_, v___y_864_);
v___x_866_ = 214;
v___x_867_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_858_, v_args_859_);
v___x_868_ = 0;
v___x_869_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_866_, v_flags_865_, v___x_867_, v___x_868_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_871_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v___x_869_, 1);
v___x_871_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_870_);
lean_dec(v_a_870_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref_known(v___x_871_, 1);
v___x_873_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_858_);
v___x_874_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(v___x_873_, v_a_872_);
lean_dec_ref(v___x_873_);
return v___x_874_;
}
else
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_882_; 
v_a_875_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_882_ == 0)
{
v___x_877_ = v___x_871_;
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_871_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_880_; 
if (v_isShared_878_ == 0)
{
v___x_880_ = v___x_877_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_a_875_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
else
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_898_; 
v_a_883_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_898_ == 0)
{
v___x_885_ = v___x_869_;
v_isShared_886_ = v_isSharedCheck_898_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_869_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_898_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_896_; 
v___x_887_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_888_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_858_);
v___x_889_ = lean_string_append(v___x_887_, v___x_888_);
lean_dec_ref(v___x_888_);
v___x_890_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_891_ = lean_string_append(v___x_889_, v___x_890_);
v___x_892_ = lean_io_error_to_string(v_a_883_);
v___x_893_ = lean_string_append(v___x_891_, v___x_892_);
lean_dec_ref(v___x_892_);
v___x_894_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_894_, 0, v___x_893_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v___x_894_);
v___x_896_ = v___x_885_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_894_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
v___jp_900_:
{
uint8_t v_construct_902_; uint64_t v___x_903_; 
v_construct_902_ = lean_ctor_get_uint8(v_b_858_, sizeof(void*)*4);
v___x_903_ = lean_uint64_lor(v___x_899_, v___y_901_);
if (v_construct_902_ == 0)
{
uint64_t v___x_904_; 
v___x_904_ = 0ULL;
v___y_863_ = v___x_903_;
v___y_864_ = v___x_904_;
goto v___jp_862_;
}
else
{
uint64_t v___x_905_; 
v___x_905_ = 4ULL;
v___y_863_ = v___x_903_;
v___y_864_ = v___x_905_;
goto v___jp_862_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0___boxed(lean_object* v_b_908_, lean_object* v_args_909_, lean_object* v_await_910_, lean_object* v_a_911_){
_start:
{
uint8_t v_await_boxed_912_; lean_object* v_res_913_; 
v_await_boxed_912_ = lean_unbox(v_await_910_);
v_res_913_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(v_b_908_, v_args_909_, v_await_boxed_912_);
lean_dec_ref(v_b_908_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_parse(lean_object* v_path___922_){
_start:
{
uint8_t v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_924_ = 0;
v___x_925_ = lean_unsigned_to_nat(1u);
v___x_926_ = ((lean_object*)(l_Lasm_JS_Node_path_parse___closed__2));
v___x_927_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_927_, 0, v_path___922_);
v___x_928_ = lean_mk_empty_array_with_capacity(v___x_925_);
v___x_929_ = lean_array_push(v___x_928_, v___x_927_);
v___x_930_ = l_Lasm_JS_Web_Support_args(v___x_929_);
v___x_931_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(v___x_926_, v___x_930_, v___x_924_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_parse___boxed(lean_object* v_path___932_, lean_object* v_a_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lasm_JS_Node_path_parse(v_path___932_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_relative(lean_object* v_from_943_, lean_object* v_to_944_){
_start:
{
uint8_t v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_946_ = 0;
v___x_947_ = lean_unsigned_to_nat(2u);
v___x_948_ = ((lean_object*)(l_Lasm_JS_Node_path_relative___closed__2));
v___x_949_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_949_, 0, v_from_943_);
v___x_950_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_950_, 0, v_to_944_);
v___x_951_ = lean_mk_empty_array_with_capacity(v___x_947_);
v___x_952_ = lean_array_push(v___x_951_, v___x_949_);
v___x_953_ = lean_array_push(v___x_952_, v___x_950_);
v___x_954_ = l_Lasm_JS_Web_Support_args(v___x_953_);
v___x_955_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_948_, v___x_954_, v___x_946_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_relative___boxed(lean_object* v_from_956_, lean_object* v_to_957_, lean_object* v_a_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l_Lasm_JS_Node_path_relative(v_from_956_, v_to_957_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_resolve(lean_object* v_paths_968_){
_start:
{
uint8_t v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; size_t v_sz_973_; size_t v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_970_ = 0;
v___x_971_ = ((lean_object*)(l_Lasm_JS_Node_path_resolve___closed__2));
v___x_972_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__3));
v_sz_973_ = lean_array_size(v_paths_968_);
v___x_974_ = ((size_t)0ULL);
v___x_975_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_973_, v___x_974_, v_paths_968_);
v___x_976_ = l_Lasm_JS_Web_Support_argsWith(v___x_972_, v___x_975_);
lean_dec_ref(v___x_975_);
v___x_977_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_971_, v___x_976_, v___x_970_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_resolve___boxed(lean_object* v_paths_978_, lean_object* v_a_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Lasm_JS_Node_path_resolve(v_paths_978_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_toNamespacedPath(lean_object* v_path___989_){
_start:
{
uint8_t v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_991_ = 0;
v___x_992_ = lean_unsigned_to_nat(1u);
v___x_993_ = ((lean_object*)(l_Lasm_JS_Node_path_toNamespacedPath___closed__2));
v___x_994_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_994_, 0, v_path___989_);
v___x_995_ = lean_mk_empty_array_with_capacity(v___x_992_);
v___x_996_ = lean_array_push(v___x_995_, v___x_994_);
v___x_997_ = l_Lasm_JS_Web_Support_args(v___x_996_);
v___x_998_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_993_, v___x_997_, v___x_991_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_toNamespacedPath___boxed(lean_object* v_path___999_, lean_object* v_a_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_Lasm_JS_Node_path_toNamespacedPath(v_path___999_);
return v_res_1001_;
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
