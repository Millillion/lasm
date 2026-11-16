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
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dir"};
static const lean_object* l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "root"};
static const lean_object* l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "base"};
static const lean_object* l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ext"};
static const lean_object* l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSPathPathObject___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSPathPathObject___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSPathPathObject___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathPathObject___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSPathPathObject___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSPathPathObject___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSPathPathObject___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSPathPathObject___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSPathPathObject___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSPathPathObject = (const lean_object*)&l_Lasm_JS_Node_instToJSPathPathObject___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Node_instFromJSPathPathObject___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___closed__0;
static lean_once_cell_t l_Lasm_JS_Node_instFromJSPathPathObject___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___closed__1;
static const lean_string_object l_Lasm_JS_Node_instFromJSPathPathObject___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node.path.PathObject"};
static const lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSPathPathObject___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Node_instFromJSPathPathObject___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathPathObject;
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_posix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "posix"};
static const lean_object* l_Lasm_JS_Node_path_posix___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_posix___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_path_posix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_posix___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_path_posix___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_posix___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_posix();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_posix___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_sep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sep"};
static const lean_object* l_Lasm_JS_Node_path_sep___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_sep___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_path_sep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_sep___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_path_sep___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_sep___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_path_win32___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "win32"};
static const lean_object* l_Lasm_JS_Node_path_win32___closed__0 = (const lean_object*)&l_Lasm_JS_Node_path_win32___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_path_win32___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_path_win32___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_path_win32___closed__1 = (const lean_object*)&l_Lasm_JS_Node_path_win32___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_win32();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_win32___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSPathPathObject___lam__0(lean_object* v___f_6_, lean_object* v_d_7_){
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
v___x_13_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__0));
lean_inc_ref_n(v___f_6_, 4);
v___x_14_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_6_, v_dir_8_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_13_);
lean_ctor_set(v___x_15_, 1, v___x_14_);
v___x_16_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__1));
v___x_17_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_6_, v_root_9_);
v___x_18_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_18_, 0, v___x_16_);
lean_ctor_set(v___x_18_, 1, v___x_17_);
v___x_19_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__2));
v___x_20_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_6_, v_base_10_);
v___x_21_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_21_, 0, v___x_19_);
lean_ctor_set(v___x_21_, 1, v___x_20_);
v___x_22_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__3));
v___x_23_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_6_, v_name_11_);
v___x_24_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_24_, 0, v___x_22_);
lean_ctor_set(v___x_24_, 1, v___x_23_);
v___x_25_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__4));
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___lam__0(lean_object* v___x_40_, lean_object* v_d_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__0));
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
v___x_53_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__1));
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
v___x_64_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__2));
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
v___x_75_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__3));
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
v___x_86_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__4));
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___lam__0___boxed(lean_object* v___x_105_, lean_object* v_d_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lasm_JS_Node_instFromJSPathPathObject___lam__0(v___x_105_, v_d_106_);
lean_dec(v_d_106_);
return v_res_107_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSPathPathObject___closed__0(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_108_ = l_Lasm_JS_instFromJSString;
v___x_109_ = l_Lasm_JS_instFromJSOption___redArg(v___x_108_);
return v___x_109_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSPathPathObject___closed__1(void){
_start:
{
lean_object* v___x_110_; lean_object* v___f_111_; 
v___x_110_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSPathPathObject___closed__0, &l_Lasm_JS_Node_instFromJSPathPathObject___closed__0_once, _init_l_Lasm_JS_Node_instFromJSPathPathObject___closed__0);
v___f_111_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSPathPathObject___lam__0___boxed), 2, 1);
lean_closure_set(v___f_111_, 0, v___x_110_);
return v___f_111_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSPathPathObject___closed__3(void){
_start:
{
uint8_t v___x_113_; lean_object* v___x_114_; lean_object* v___f_115_; lean_object* v___x_116_; 
v___x_113_ = 0;
v___x_114_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSPathPathObject___closed__2));
v___f_115_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSPathPathObject___closed__1, &l_Lasm_JS_Node_instFromJSPathPathObject___closed__1_once, _init_l_Lasm_JS_Node_instFromJSPathPathObject___closed__1);
v___x_116_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_116_, 0, v___f_115_);
lean_ctor_set(v___x_116_, 1, v___x_114_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*2, v___x_113_);
return v___x_116_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSPathPathObject(void){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_obj_once(&l_Lasm_JS_Node_instFromJSPathPathObject___closed__3, &l_Lasm_JS_Node_instFromJSPathPathObject___closed__3_once, _init_l_Lasm_JS_Node_instFromJSPathPathObject___closed__3);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_bytes_341_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_341_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_343_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_343_);
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
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 1, 0);
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
else
{
return v___x_343_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_bytes_352_, lean_object* v_a_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2___redArg(v_bytes_352_);
lean_dec_ref(v_bytes_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1(lean_object* v_o_355_, lean_object* v_key_356_){
_start:
{
lean_object* v_k_358_; lean_object* v___x_359_; 
v_k_358_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_358_, 0, v_key_356_);
v___x_359_ = l_Lasm_JS_Wire_encodeIO(v_k_358_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; uint32_t v___x_361_; uint32_t v___x_362_; uint64_t v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_a_360_);
lean_dec_ref_known(v___x_359_, 1);
v___x_361_ = 203;
v___x_362_ = lasm_js_value_handle(v_o_355_);
v___x_363_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
v___x_364_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_365_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_365_, 0, v_o_355_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = lean_unsigned_to_nat(2u);
v___x_367_ = lean_mk_empty_array_with_capacity(v___x_366_);
v___x_368_ = lean_array_push(v___x_367_, v_k_358_);
v___x_369_ = lean_array_push(v___x_368_, v___x_365_);
v___x_370_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
v___x_371_ = lasm_js_call(v___x_361_, v___x_362_, v___x_363_, v_a_360_, v___x_370_);
lean_dec_ref_known(v___x_370_, 1);
lean_dec(v_a_360_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___x_373_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
lean_inc(v_a_372_);
lean_dec_ref_known(v___x_371_, 1);
v___x_373_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2___redArg(v_a_372_);
lean_dec(v_a_372_);
return v___x_373_;
}
else
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_381_; 
v_a_374_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_381_ == 0)
{
v___x_376_ = v___x_371_;
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_371_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_379_; 
if (v_isShared_377_ == 0)
{
v___x_379_ = v___x_376_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_a_374_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
else
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_389_; 
lean_dec_ref_known(v_k_358_, 1);
lean_dec(v_o_355_);
v_a_382_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_389_ == 0)
{
v___x_384_ = v___x_359_;
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_359_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
if (v_isShared_385_ == 0)
{
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_a_382_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1___boxed(lean_object* v_o_390_, lean_object* v_key_391_, lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1(v_o_390_, v_key_391_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0(lean_object* v_module_394_, lean_object* v_o_395_, lean_object* v_a_396_){
_start:
{
if (lean_obj_tag(v_a_396_) == 0)
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
lean_dec(v_o_395_);
v___x_398_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1___closed__0));
v___x_399_ = lean_string_append(v___x_398_, v_module_394_);
v___x_400_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
v___x_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
return v___x_401_;
}
else
{
lean_object* v_tail_402_; 
v_tail_402_ = lean_ctor_get(v_a_396_, 1);
if (lean_obj_tag(v_tail_402_) == 0)
{
lean_object* v_head_403_; lean_object* v___x_404_; 
v_head_403_ = lean_ctor_get(v_a_396_, 0);
lean_inc(v_head_403_);
lean_dec_ref_known(v_a_396_, 2);
v___x_404_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1(v_o_395_, v_head_403_);
return v___x_404_;
}
else
{
lean_object* v_head_405_; lean_object* v___x_406_; 
lean_inc(v_tail_402_);
v_head_405_ = lean_ctor_get(v_a_396_, 0);
lean_inc(v_head_405_);
lean_dec_ref_known(v_a_396_, 2);
v___x_406_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_395_, v_head_405_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_a_407_);
lean_dec_ref_known(v___x_406_, 1);
v_o_395_ = v_a_407_;
v_a_396_ = v_tail_402_;
goto _start;
}
else
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
lean_dec(v_tail_402_);
v_a_409_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_416_ == 0)
{
v___x_411_ = v___x_406_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_406_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_409_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0___boxed(lean_object* v_module_417_, lean_object* v_o_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0(v_module_417_, v_o_418_, v_a_419_);
lean_dec_ref(v_module_417_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0(lean_object* v_module_422_, lean_object* v_path_423_){
_start:
{
lean_object* v___x_425_; 
lean_inc_ref(v_module_422_);
v___x_425_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__0(v_module_422_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_427_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_425_, 1);
v___x_427_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0(v_module_422_, v_a_426_, v_path_423_);
lean_dec_ref(v_module_422_);
return v___x_427_;
}
else
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
lean_dec(v_path_423_);
lean_dec_ref(v_module_422_);
v_a_428_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_435_ == 0)
{
v___x_430_ = v___x_425_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_425_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_428_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0___boxed(lean_object* v_module_436_, lean_object* v_path_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0(v_module_436_, v_path_437_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_posix(){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_445_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__0));
v___x_446_ = ((lean_object*)(l_Lasm_JS_Node_path_posix___closed__1));
v___x_447_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0(v___x_445_, v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_posix___boxed(lean_object* v_a_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lasm_JS_Node_path_posix();
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_d_450_){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_452_, 0, v_d_450_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_d_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_d_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_456_, lean_object* v_d_457_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v_d_457_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_460_, lean_object* v_d_461_, lean_object* v_a_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_460_, v_d_461_);
lean_dec_ref(v_context_460_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_464_, lean_object* v_bytes_465_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2___redArg(v_bytes_465_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_468_, lean_object* v_bytes_469_, lean_object* v_a_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0_spec__0_spec__1_spec__2(v_context_468_, v_bytes_469_);
lean_dec_ref(v_bytes_469_);
lean_dec_ref(v_context_468_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep(){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_477_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__0));
v___x_478_ = ((lean_object*)(l_Lasm_JS_Node_path_sep___closed__1));
v___x_479_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0(v___x_477_, v___x_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_sep___boxed(lean_object* v_a_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lasm_JS_Node_path_sep();
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_win32(){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_487_ = ((lean_object*)(l_Lasm_JS_Node_path_delimiter___closed__0));
v___x_488_ = ((lean_object*)(l_Lasm_JS_Node_path_win32___closed__1));
v___x_489_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_posix_spec__0(v___x_487_, v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_win32___boxed(lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lasm_JS_Node_path_win32();
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(lean_object* v_x_492_){
_start:
{
if (lean_obj_tag(v_x_492_) == 0)
{
lean_object* v___x_493_; 
v___x_493_ = lean_box(0);
return v___x_493_;
}
else
{
lean_object* v_val_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
v_val_494_ = lean_ctor_get(v_x_492_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v_x_492_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v_x_492_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_val_494_);
lean_dec(v_x_492_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
lean_ctor_set_tag(v___x_496_, 4);
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_val_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(lean_object* v_b_503_, lean_object* v_args_504_, uint8_t v_await_505_){
_start:
{
uint64_t v___y_508_; uint64_t v___y_509_; uint64_t v___x_552_; uint64_t v___y_554_; 
v___x_552_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_505_ == 0)
{
uint64_t v___x_559_; 
v___x_559_ = 0ULL;
v___y_554_ = v___x_559_;
goto v___jp_553_;
}
else
{
uint64_t v___x_560_; 
v___x_560_ = 2ULL;
v___y_554_ = v___x_560_;
goto v___jp_553_;
}
v___jp_507_:
{
uint64_t v_flags_510_; uint32_t v___x_511_; lean_object* v___x_512_; uint32_t v___x_513_; lean_object* v___x_514_; 
v_flags_510_ = lean_uint64_lor(v___y_508_, v___y_509_);
v___x_511_ = 214;
v___x_512_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_503_, v_args_504_);
v___x_513_ = 0;
v___x_514_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_511_, v_flags_510_, v___x_512_, v___x_513_);
lean_dec(v___x_512_);
if (lean_obj_tag(v___x_514_) == 0)
{
if (lean_obj_tag(v___x_514_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_516_; 
v_a_515_ = lean_ctor_get(v___x_514_, 0);
lean_inc(v_a_515_);
lean_dec_ref_known(v___x_514_, 1);
v___x_516_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_515_);
lean_dec(v_a_515_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
lean_inc(v_a_517_);
lean_dec_ref_known(v___x_516_, 1);
v___x_518_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_503_);
v___x_519_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4(v___x_518_, v_a_517_);
lean_dec_ref(v___x_518_);
return v___x_519_;
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
v_a_520_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_516_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_516_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
else
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
v_a_528_ = lean_ctor_get(v___x_514_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_535_ == 0)
{
v___x_530_ = v___x_514_;
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_514_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
lean_ctor_set_tag(v___x_530_, 1);
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_528_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
else
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_551_; 
v_a_536_ = lean_ctor_get(v___x_514_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_551_ == 0)
{
v___x_538_ = v___x_514_;
v_isShared_539_ = v_isSharedCheck_551_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_514_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_551_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_540_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_541_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_503_);
v___x_542_ = lean_string_append(v___x_540_, v___x_541_);
lean_dec_ref(v___x_541_);
v___x_543_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_544_ = lean_string_append(v___x_542_, v___x_543_);
v___x_545_ = lean_io_error_to_string(v_a_536_);
v___x_546_ = lean_string_append(v___x_544_, v___x_545_);
lean_dec_ref(v___x_545_);
v___x_547_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_547_);
v___x_549_ = v___x_538_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
v___jp_553_:
{
uint8_t v_construct_555_; uint64_t v___x_556_; 
v_construct_555_ = lean_ctor_get_uint8(v_b_503_, sizeof(void*)*4);
v___x_556_ = lean_uint64_lor(v___x_552_, v___y_554_);
if (v_construct_555_ == 0)
{
uint64_t v___x_557_; 
v___x_557_ = 0ULL;
v___y_508_ = v___x_556_;
v___y_509_ = v___x_557_;
goto v___jp_507_;
}
else
{
uint64_t v___x_558_; 
v___x_558_ = 4ULL;
v___y_508_ = v___x_556_;
v___y_509_ = v___x_558_;
goto v___jp_507_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___boxed(lean_object* v_b_561_, lean_object* v_args_562_, lean_object* v_await_563_, lean_object* v_a_564_){
_start:
{
uint8_t v_await_boxed_565_; lean_object* v_res_566_; 
v_await_boxed_565_ = lean_unbox(v_await_563_);
v_res_566_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v_b_561_, v_args_562_, v_await_boxed_565_);
lean_dec_ref(v_b_561_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_basename(lean_object* v_path___575_, lean_object* v_suffix_576_){
_start:
{
uint8_t v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_578_ = 0;
v___x_579_ = lean_unsigned_to_nat(2u);
v___x_580_ = ((lean_object*)(l_Lasm_JS_Node_path_basename___closed__2));
v___x_581_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_581_, 0, v_path___575_);
v___x_582_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_suffix_576_);
v___x_583_ = lean_mk_empty_array_with_capacity(v___x_579_);
v___x_584_ = lean_array_push(v___x_583_, v___x_581_);
v___x_585_ = lean_array_push(v___x_584_, v___x_582_);
v___x_586_ = l_Lasm_JS_Web_Support_args(v___x_585_);
v___x_587_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_580_, v___x_586_, v___x_578_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_basename___boxed(lean_object* v_path___588_, lean_object* v_suffix_589_, lean_object* v_a_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lasm_JS_Node_path_basename(v_path___588_, v_suffix_589_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_dirname(lean_object* v_path___600_){
_start:
{
uint8_t v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_602_ = 0;
v___x_603_ = lean_unsigned_to_nat(1u);
v___x_604_ = ((lean_object*)(l_Lasm_JS_Node_path_dirname___closed__2));
v___x_605_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_605_, 0, v_path___600_);
v___x_606_ = lean_mk_empty_array_with_capacity(v___x_603_);
v___x_607_ = lean_array_push(v___x_606_, v___x_605_);
v___x_608_ = l_Lasm_JS_Web_Support_args(v___x_607_);
v___x_609_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_604_, v___x_608_, v___x_602_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_dirname___boxed(lean_object* v_path___610_, lean_object* v_a_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lasm_JS_Node_path_dirname(v_path___610_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_extname(lean_object* v_path___621_){
_start:
{
uint8_t v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_623_ = 0;
v___x_624_ = lean_unsigned_to_nat(1u);
v___x_625_ = ((lean_object*)(l_Lasm_JS_Node_path_extname___closed__2));
v___x_626_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_626_, 0, v_path___621_);
v___x_627_ = lean_mk_empty_array_with_capacity(v___x_624_);
v___x_628_ = lean_array_push(v___x_627_, v___x_626_);
v___x_629_ = l_Lasm_JS_Web_Support_args(v___x_628_);
v___x_630_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_625_, v___x_629_, v___x_623_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_extname___boxed(lean_object* v_path___631_, lean_object* v_a_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Lasm_JS_Node_path_extname(v_path___631_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_format(lean_object* v_pathObject_642_){
_start:
{
lean_object* v_dir_644_; lean_object* v_root_645_; lean_object* v_base_646_; lean_object* v_name_647_; lean_object* v_ext_648_; uint8_t v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v_dir_644_ = lean_ctor_get(v_pathObject_642_, 0);
lean_inc(v_dir_644_);
v_root_645_ = lean_ctor_get(v_pathObject_642_, 1);
lean_inc(v_root_645_);
v_base_646_ = lean_ctor_get(v_pathObject_642_, 2);
lean_inc(v_base_646_);
v_name_647_ = lean_ctor_get(v_pathObject_642_, 3);
lean_inc(v_name_647_);
v_ext_648_ = lean_ctor_get(v_pathObject_642_, 4);
lean_inc(v_ext_648_);
lean_dec_ref(v_pathObject_642_);
v___x_649_ = 0;
v___x_650_ = lean_unsigned_to_nat(1u);
v___x_651_ = ((lean_object*)(l_Lasm_JS_Node_path_format___closed__2));
v___x_652_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__0));
v___x_653_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_dir_644_);
v___x_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_652_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__1));
v___x_656_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_root_645_);
v___x_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_655_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__2));
v___x_659_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_base_646_);
v___x_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_658_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
v___x_661_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__3));
v___x_662_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_name_647_);
v___x_663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_661_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___x_664_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__4));
v___x_665_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_path_basename_spec__0(v_ext_648_);
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_664_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v___x_667_ = lean_unsigned_to_nat(5u);
v___x_668_ = lean_mk_empty_array_with_capacity(v___x_667_);
v___x_669_ = lean_array_push(v___x_668_, v___x_654_);
v___x_670_ = lean_array_push(v___x_669_, v___x_657_);
v___x_671_ = lean_array_push(v___x_670_, v___x_660_);
v___x_672_ = lean_array_push(v___x_671_, v___x_663_);
v___x_673_ = lean_array_push(v___x_672_, v___x_666_);
v___x_674_ = l_Lasm_JS_Web_Support_fields(v___x_673_);
lean_dec_ref(v___x_673_);
v___x_675_ = lean_mk_empty_array_with_capacity(v___x_650_);
v___x_676_ = lean_array_push(v___x_675_, v___x_674_);
v___x_677_ = l_Lasm_JS_Web_Support_args(v___x_676_);
v___x_678_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_651_, v___x_677_, v___x_649_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_format___boxed(lean_object* v_pathObject_679_, lean_object* v_a_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Lasm_JS_Node_path_format(v_pathObject_679_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(lean_object* v_b_682_, lean_object* v_args_683_, uint8_t v_await_684_){
_start:
{
uint64_t v___y_687_; uint64_t v___y_688_; uint64_t v___x_731_; uint64_t v___y_733_; 
v___x_731_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_684_ == 0)
{
uint64_t v___x_738_; 
v___x_738_ = 0ULL;
v___y_733_ = v___x_738_;
goto v___jp_732_;
}
else
{
uint64_t v___x_739_; 
v___x_739_ = 2ULL;
v___y_733_ = v___x_739_;
goto v___jp_732_;
}
v___jp_686_:
{
uint64_t v_flags_689_; uint32_t v___x_690_; lean_object* v___x_691_; uint32_t v___x_692_; lean_object* v___x_693_; 
v_flags_689_ = lean_uint64_lor(v___y_687_, v___y_688_);
v___x_690_ = 214;
v___x_691_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_682_, v_args_683_);
v___x_692_ = 0;
v___x_693_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_690_, v_flags_689_, v___x_691_, v___x_692_);
lean_dec(v___x_691_);
if (lean_obj_tag(v___x_693_) == 0)
{
if (lean_obj_tag(v___x_693_) == 0)
{
lean_object* v_a_694_; lean_object* v___x_695_; 
v_a_694_ = lean_ctor_get(v___x_693_, 0);
lean_inc(v_a_694_);
lean_dec_ref_known(v___x_693_, 1);
v___x_695_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_694_);
lean_dec(v_a_694_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_object* v_a_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v_a_696_ = lean_ctor_get(v___x_695_, 0);
lean_inc(v_a_696_);
lean_dec_ref_known(v___x_695_, 1);
v___x_697_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_682_);
v___x_698_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(v___x_697_, v_a_696_);
lean_dec_ref(v___x_697_);
return v___x_698_;
}
else
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
v_a_699_ = lean_ctor_get(v___x_695_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_695_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_695_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
else
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_714_; 
v_a_707_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_714_ == 0)
{
v___x_709_ = v___x_693_;
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_693_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
lean_ctor_set_tag(v___x_709_, 1);
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_707_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
else
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_730_; 
v_a_715_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_730_ == 0)
{
v___x_717_ = v___x_693_;
v_isShared_718_ = v_isSharedCheck_730_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v___x_693_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_730_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_728_; 
v___x_719_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_720_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_682_);
v___x_721_ = lean_string_append(v___x_719_, v___x_720_);
lean_dec_ref(v___x_720_);
v___x_722_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_723_ = lean_string_append(v___x_721_, v___x_722_);
v___x_724_ = lean_io_error_to_string(v_a_715_);
v___x_725_ = lean_string_append(v___x_723_, v___x_724_);
lean_dec_ref(v___x_724_);
v___x_726_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 0, v___x_726_);
v___x_728_ = v___x_717_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
v___jp_732_:
{
uint8_t v_construct_734_; uint64_t v___x_735_; 
v_construct_734_ = lean_ctor_get_uint8(v_b_682_, sizeof(void*)*4);
v___x_735_ = lean_uint64_lor(v___x_731_, v___y_733_);
if (v_construct_734_ == 0)
{
uint64_t v___x_736_; 
v___x_736_ = 0ULL;
v___y_687_ = v___x_735_;
v___y_688_ = v___x_736_;
goto v___jp_686_;
}
else
{
uint64_t v___x_737_; 
v___x_737_ = 4ULL;
v___y_687_ = v___x_735_;
v___y_688_ = v___x_737_;
goto v___jp_686_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0___boxed(lean_object* v_b_740_, lean_object* v_args_741_, lean_object* v_await_742_, lean_object* v_a_743_){
_start:
{
uint8_t v_await_boxed_744_; lean_object* v_res_745_; 
v_await_boxed_744_ = lean_unbox(v_await_742_);
v_res_745_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v_b_740_, v_args_741_, v_await_boxed_744_);
lean_dec_ref(v_b_740_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_matchesGlob(lean_object* v_path___754_, lean_object* v_pattern_755_){
_start:
{
uint8_t v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_757_ = 0;
v___x_758_ = lean_unsigned_to_nat(2u);
v___x_759_ = ((lean_object*)(l_Lasm_JS_Node_path_matchesGlob___closed__2));
v___x_760_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_760_, 0, v_path___754_);
v___x_761_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_761_, 0, v_pattern_755_);
v___x_762_ = lean_mk_empty_array_with_capacity(v___x_758_);
v___x_763_ = lean_array_push(v___x_762_, v___x_760_);
v___x_764_ = lean_array_push(v___x_763_, v___x_761_);
v___x_765_ = l_Lasm_JS_Web_Support_args(v___x_764_);
v___x_766_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v___x_759_, v___x_765_, v___x_757_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_matchesGlob___boxed(lean_object* v_path___767_, lean_object* v_pattern_768_, lean_object* v_a_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lasm_JS_Node_path_matchesGlob(v_path___767_, v_pattern_768_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_isAbsolute(lean_object* v_path___779_){
_start:
{
uint8_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_781_ = 0;
v___x_782_ = lean_unsigned_to_nat(1u);
v___x_783_ = ((lean_object*)(l_Lasm_JS_Node_path_isAbsolute___closed__2));
v___x_784_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_784_, 0, v_path___779_);
v___x_785_ = lean_mk_empty_array_with_capacity(v___x_782_);
v___x_786_ = lean_array_push(v___x_785_, v___x_784_);
v___x_787_ = l_Lasm_JS_Web_Support_args(v___x_786_);
v___x_788_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_matchesGlob_spec__0(v___x_783_, v___x_787_, v___x_781_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_isAbsolute___boxed(lean_object* v_path___789_, lean_object* v_a_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lasm_JS_Node_path_isAbsolute(v_path___789_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(size_t v_sz_792_, size_t v_i_793_, lean_object* v_bs_794_){
_start:
{
uint8_t v___x_795_; 
v___x_795_ = lean_usize_dec_lt(v_i_793_, v_sz_792_);
if (v___x_795_ == 0)
{
return v_bs_794_;
}
else
{
lean_object* v_v_796_; lean_object* v___x_797_; lean_object* v_bs_x27_798_; lean_object* v___x_799_; size_t v___x_800_; size_t v___x_801_; lean_object* v___x_802_; 
v_v_796_ = lean_array_uget(v_bs_794_, v_i_793_);
v___x_797_ = lean_unsigned_to_nat(0u);
v_bs_x27_798_ = lean_array_uset(v_bs_794_, v_i_793_, v___x_797_);
v___x_799_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_799_, 0, v_v_796_);
v___x_800_ = ((size_t)1ULL);
v___x_801_ = lean_usize_add(v_i_793_, v___x_800_);
v___x_802_ = lean_array_uset(v_bs_x27_798_, v_i_793_, v___x_799_);
v_i_793_ = v___x_801_;
v_bs_794_ = v___x_802_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0___boxed(lean_object* v_sz_804_, lean_object* v_i_805_, lean_object* v_bs_806_){
_start:
{
size_t v_sz_boxed_807_; size_t v_i_boxed_808_; lean_object* v_res_809_; 
v_sz_boxed_807_ = lean_unbox_usize(v_sz_804_);
lean_dec(v_sz_804_);
v_i_boxed_808_ = lean_unbox_usize(v_i_805_);
lean_dec(v_i_805_);
v_res_809_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_boxed_807_, v_i_boxed_808_, v_bs_806_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_join(lean_object* v_paths_820_){
_start:
{
uint8_t v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; size_t v_sz_825_; size_t v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_822_ = 0;
v___x_823_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__2));
v___x_824_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__3));
v_sz_825_ = lean_array_size(v_paths_820_);
v___x_826_ = ((size_t)0ULL);
v___x_827_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_825_, v___x_826_, v_paths_820_);
v___x_828_ = l_Lasm_JS_Web_Support_argsWith(v___x_824_, v___x_827_);
lean_dec_ref(v___x_827_);
v___x_829_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_823_, v___x_828_, v___x_822_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_join___boxed(lean_object* v_paths_830_, lean_object* v_a_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Lasm_JS_Node_path_join(v_paths_830_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_normalize(lean_object* v_path___841_){
_start:
{
uint8_t v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_843_ = 0;
v___x_844_ = lean_unsigned_to_nat(1u);
v___x_845_ = ((lean_object*)(l_Lasm_JS_Node_path_normalize___closed__2));
v___x_846_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_846_, 0, v_path___841_);
v___x_847_ = lean_mk_empty_array_with_capacity(v___x_844_);
v___x_848_ = lean_array_push(v___x_847_, v___x_846_);
v___x_849_ = l_Lasm_JS_Web_Support_args(v___x_848_);
v___x_850_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_845_, v___x_849_, v___x_843_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_normalize___boxed(lean_object* v_path___851_, lean_object* v_a_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lasm_JS_Node_path_normalize(v_path___851_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(lean_object* v_d_863_, lean_object* v_key_864_){
_start:
{
if (lean_obj_tag(v_d_863_) == 8)
{
lean_object* v___x_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_895_; 
v___x_867_ = l_Lasm_JS_Data_field(v_d_863_, v_key_864_);
v_isSharedCheck_895_ = !lean_is_exclusive(v_d_863_);
if (v_isSharedCheck_895_ == 0)
{
lean_object* v_unused_896_; 
v_unused_896_ = lean_ctor_get(v_d_863_, 0);
lean_dec(v_unused_896_);
v___x_869_ = v_d_863_;
v_isShared_870_ = v_isSharedCheck_895_;
goto v_resetjp_868_;
}
else
{
lean_dec(v_d_863_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_895_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
switch(lean_obj_tag(v___x_867_))
{
case 1:
{
lean_del_object(v___x_869_);
goto v___jp_865_;
}
case 0:
{
lean_del_object(v___x_869_);
goto v___jp_865_;
}
default: 
{
if (lean_obj_tag(v___x_867_) == 4)
{
lean_object* v_s_871_; lean_object* v___x_873_; 
v_s_871_ = lean_ctor_get(v___x_867_, 0);
lean_inc_ref(v_s_871_);
lean_dec_ref_known(v___x_867_, 1);
if (v_isShared_870_ == 0)
{
lean_ctor_set_tag(v___x_869_, 1);
lean_ctor_set(v___x_869_, 0, v_s_871_);
v___x_873_ = v___x_869_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_s_871_);
v___x_873_ = v_reuseFailAlloc_875_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
lean_object* v___x_874_; 
v___x_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_874_, 0, v___x_873_);
return v___x_874_;
}
}
else
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v___x_876_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__1));
v___x_877_ = lean_string_append(v___x_876_, v_key_864_);
v___x_878_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__2));
v___x_879_ = lean_string_append(v___x_877_, v___x_878_);
v___x_880_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__3));
v___x_881_ = lean_string_append(v___x_879_, v___x_880_);
v___x_882_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__4));
v___x_883_ = lean_string_append(v___x_881_, v___x_882_);
v___x_884_ = l_Lasm_JS_Data_describe(v___x_867_);
v___x_885_ = lean_string_append(v___x_883_, v___x_884_);
lean_dec_ref(v___x_884_);
v___x_886_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6);
if (v___x_886_ == 0)
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_890_; 
v___x_887_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___x_888_ = lean_string_append(v___x_885_, v___x_887_);
if (v_isShared_870_ == 0)
{
lean_ctor_set_tag(v___x_869_, 0);
lean_ctor_set(v___x_869_, 0, v___x_888_);
v___x_890_ = v___x_869_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_888_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
else
{
lean_object* v___x_893_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set_tag(v___x_869_, 0);
lean_ctor_set(v___x_869_, 0, v___x_885_);
v___x_893_ = v___x_869_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v___x_885_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_897_; 
lean_dec(v_d_863_);
v___x_897_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__6));
return v___x_897_;
}
v___jp_865_:
{
lean_object* v___x_866_; 
v___x_866_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___closed__0));
return v___x_866_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1___boxed(lean_object* v_d_898_, lean_object* v_key_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_898_, v_key_899_);
lean_dec_ref(v_key_899_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(lean_object* v_context_903_, lean_object* v_d_904_){
_start:
{
lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_913_; lean_object* v_received_914_; lean_object* v___y_933_; lean_object* v_a_936_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_960_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__0));
lean_inc(v_d_904_);
v___x_961_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_904_, v___x_960_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v_a_962_; 
v_a_962_ = lean_ctor_get(v___x_961_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v___x_961_, 1);
v_a_936_ = v_a_962_;
goto v___jp_935_;
}
else
{
lean_object* v_a_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v_a_963_ = lean_ctor_get(v___x_961_, 0);
lean_inc(v_a_963_);
lean_dec_ref_known(v___x_961_, 1);
v___x_964_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__1));
lean_inc(v_d_904_);
v___x_965_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_904_, v___x_964_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; 
lean_dec(v_a_963_);
v_a_966_ = lean_ctor_get(v___x_965_, 0);
lean_inc(v_a_966_);
lean_dec_ref_known(v___x_965_, 1);
v_a_936_ = v_a_966_;
goto v___jp_935_;
}
else
{
lean_object* v_a_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v_a_967_ = lean_ctor_get(v___x_965_, 0);
lean_inc(v_a_967_);
lean_dec_ref_known(v___x_965_, 1);
v___x_968_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__2));
lean_inc(v_d_904_);
v___x_969_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_904_, v___x_968_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; 
lean_dec(v_a_967_);
lean_dec(v_a_963_);
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_969_, 1);
v_a_936_ = v_a_970_;
goto v___jp_935_;
}
else
{
lean_object* v_a_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v_a_971_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_971_);
lean_dec_ref_known(v___x_969_, 1);
v___x_972_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__3));
lean_inc(v_d_904_);
v___x_973_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_904_, v___x_972_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v_a_974_; 
lean_dec(v_a_971_);
lean_dec(v_a_967_);
lean_dec(v_a_963_);
v_a_974_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_a_974_);
lean_dec_ref_known(v___x_973_, 1);
v_a_936_ = v_a_974_;
goto v___jp_935_;
}
else
{
lean_object* v_a_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v_a_975_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_973_, 1);
v___x_976_ = ((lean_object*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0___closed__4));
lean_inc(v_d_904_);
v___x_977_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0_spec__1(v_d_904_, v___x_976_);
if (lean_obj_tag(v___x_977_) == 0)
{
lean_object* v_a_978_; 
lean_dec(v_a_975_);
lean_dec(v_a_971_);
lean_dec(v_a_967_);
lean_dec(v_a_963_);
v_a_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_a_978_);
lean_dec_ref_known(v___x_977_, 1);
v_a_936_ = v_a_978_;
goto v___jp_935_;
}
else
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_987_; 
lean_dec(v_d_904_);
v_a_979_ = lean_ctor_get(v___x_977_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_987_ == 0)
{
v___x_981_ = v___x_977_;
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_977_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_983_; lean_object* v___x_985_; 
v___x_983_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_983_, 0, v_a_963_);
lean_ctor_set(v___x_983_, 1, v_a_967_);
lean_ctor_set(v___x_983_, 2, v_a_971_);
lean_ctor_set(v___x_983_, 3, v_a_975_);
lean_ctor_set(v___x_983_, 4, v_a_979_);
if (v_isShared_982_ == 0)
{
lean_ctor_set_tag(v___x_981_, 0);
lean_ctor_set(v___x_981_, 0, v___x_983_);
v___x_985_ = v___x_981_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v___x_983_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
}
}
}
v___jp_906_:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_909_ = lean_string_append(v___y_907_, v___y_908_);
lean_dec_ref(v___y_908_);
v___x_910_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
v___x_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
v___jp_912_:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; 
v___x_915_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_916_ = lean_string_append(v___x_915_, v_context_903_);
v___x_917_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_918_ = lean_string_append(v___x_916_, v___x_917_);
v___x_919_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSPathPathObject___closed__2));
v___x_920_ = lean_string_append(v___x_918_, v___x_919_);
v___x_921_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_922_ = lean_string_append(v___x_920_, v___x_921_);
v___x_923_ = lean_string_append(v___x_922_, v_received_914_);
lean_dec_ref(v_received_914_);
v___x_924_ = lean_string_utf8_byte_size(v___y_913_);
v___x_925_ = lean_unsigned_to_nat(0u);
v___x_926_ = lean_nat_dec_eq(v___x_924_, v___x_925_);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_927_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__0));
v___x_928_ = lean_string_append(v___x_927_, v___y_913_);
lean_dec_ref(v___y_913_);
v___x_929_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___closed__1));
v___x_930_ = lean_string_append(v___x_928_, v___x_929_);
v___y_907_ = v___x_923_;
v___y_908_ = v___x_930_;
goto v___jp_906_;
}
else
{
lean_object* v___x_931_; 
lean_dec_ref(v___y_913_);
v___x_931_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___y_907_ = v___x_923_;
v___y_908_ = v___x_931_;
goto v___jp_906_;
}
}
v___jp_932_:
{
lean_object* v___x_934_; 
v___x_934_ = l_Lasm_JS_Data_describe(v_d_904_);
v___y_913_ = v___y_933_;
v_received_914_ = v___x_934_;
goto v___jp_912_;
}
v___jp_935_:
{
if (lean_obj_tag(v_d_904_) == 9)
{
lean_object* v_value_937_; lean_object* v_description_938_; lean_object* v___x_939_; uint8_t v___x_940_; 
v_value_937_ = lean_ctor_get(v_d_904_, 0);
v_description_938_ = lean_ctor_get(v_d_904_, 1);
v___x_939_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_940_ = lean_string_dec_eq(v_description_938_, v___x_939_);
if (v___x_940_ == 0)
{
v___y_933_ = v_a_936_;
goto v___jp_932_;
}
else
{
lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_957_; 
lean_inc(v_value_937_);
v_isSharedCheck_957_ = !lean_is_exclusive(v_d_904_);
if (v_isSharedCheck_957_ == 0)
{
lean_object* v_unused_958_; lean_object* v_unused_959_; 
v_unused_958_ = lean_ctor_get(v_d_904_, 1);
lean_dec(v_unused_958_);
v_unused_959_ = lean_ctor_get(v_d_904_, 0);
lean_dec(v_unused_959_);
v___x_942_ = v_d_904_;
v_isShared_943_ = v_isSharedCheck_957_;
goto v_resetjp_941_;
}
else
{
lean_dec(v_d_904_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_957_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
uint32_t v___x_944_; uint64_t v___x_945_; lean_object* v___x_947_; 
v___x_944_ = 206;
v___x_945_ = 0ULL;
lean_inc(v_value_937_);
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 1, v___x_939_);
v___x_947_ = v___x_942_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_value_937_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v___x_939_);
v___x_947_ = v_reuseFailAlloc_956_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
uint32_t v___x_948_; lean_object* v___x_949_; 
v___x_948_ = lasm_js_value_handle(v_value_937_);
lean_dec(v_value_937_);
v___x_949_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_944_, v___x_945_, v___x_947_, v___x_948_);
lean_dec_ref(v___x_947_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; uint8_t v___x_951_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
lean_inc(v_a_950_);
lean_dec_ref_known(v___x_949_, 1);
v___x_951_ = lean_string_validate_utf8(v_a_950_);
if (v___x_951_ == 0)
{
lean_object* v___x_952_; lean_object* v___x_953_; 
lean_dec(v_a_950_);
v___x_952_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11);
v___x_953_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_952_);
v___y_913_ = v_a_936_;
v_received_914_ = v___x_953_;
goto v___jp_912_;
}
else
{
lean_object* v___x_954_; 
v___x_954_ = lean_string_from_utf8_unchecked(v_a_950_);
v___y_913_ = v_a_936_;
v_received_914_ = v___x_954_;
goto v___jp_912_;
}
}
else
{
lean_object* v___x_955_; 
lean_dec_ref_known(v___x_949_, 1);
v___x_955_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__12));
v___y_913_ = v_a_936_;
v_received_914_ = v___x_955_;
goto v___jp_912_;
}
}
}
}
}
else
{
v___y_933_ = v_a_936_;
goto v___jp_932_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0___boxed(lean_object* v_context_988_, lean_object* v_d_989_, lean_object* v_a_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(v_context_988_, v_d_989_);
lean_dec_ref(v_context_988_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(lean_object* v_b_992_, lean_object* v_args_993_, uint8_t v_await_994_){
_start:
{
uint64_t v___y_997_; uint64_t v___y_998_; uint64_t v___x_1041_; uint64_t v___y_1043_; 
v___x_1041_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2___closed__0);
if (v_await_994_ == 0)
{
uint64_t v___x_1048_; 
v___x_1048_ = 0ULL;
v___y_1043_ = v___x_1048_;
goto v___jp_1042_;
}
else
{
uint64_t v___x_1049_; 
v___x_1049_ = 2ULL;
v___y_1043_ = v___x_1049_;
goto v___jp_1042_;
}
v___jp_996_:
{
uint64_t v_flags_999_; uint32_t v___x_1000_; lean_object* v___x_1001_; uint32_t v___x_1002_; lean_object* v___x_1003_; 
v_flags_999_ = lean_uint64_lor(v___y_997_, v___y_998_);
v___x_1000_ = 214;
v___x_1001_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_992_, v_args_993_);
v___x_1002_ = 0;
v___x_1003_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1000_, v_flags_999_, v___x_1001_, v___x_1002_);
lean_dec(v___x_1001_);
if (lean_obj_tag(v___x_1003_) == 0)
{
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v_a_1004_; lean_object* v___x_1005_; 
v_a_1004_ = lean_ctor_get(v___x_1003_, 0);
lean_inc(v_a_1004_);
lean_dec_ref_known(v___x_1003_, 1);
v___x_1005_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1004_);
lean_dec(v_a_1004_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_a_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
lean_inc(v_a_1006_);
lean_dec_ref_known(v___x_1005_, 1);
v___x_1007_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_992_);
v___x_1008_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0_spec__0(v___x_1007_, v_a_1006_);
lean_dec_ref(v___x_1007_);
return v___x_1008_;
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
v_a_1009_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_1005_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1005_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
v_a_1017_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1003_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1003_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
lean_ctor_set_tag(v___x_1019_, 1);
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1040_; 
v_a_1025_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1027_ = v___x_1003_;
v_isShared_1028_ = v_isSharedCheck_1040_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1003_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1040_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1038_; 
v___x_1029_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_path_delimiter_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1030_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_992_);
v___x_1031_ = lean_string_append(v___x_1029_, v___x_1030_);
lean_dec_ref(v___x_1030_);
v___x_1032_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1___closed__0));
v___x_1033_ = lean_string_append(v___x_1031_, v___x_1032_);
v___x_1034_ = lean_io_error_to_string(v_a_1025_);
v___x_1035_ = lean_string_append(v___x_1033_, v___x_1034_);
lean_dec_ref(v___x_1034_);
v___x_1036_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 0, v___x_1036_);
v___x_1038_ = v___x_1027_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v___x_1036_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
v___jp_1042_:
{
uint8_t v_construct_1044_; uint64_t v___x_1045_; 
v_construct_1044_ = lean_ctor_get_uint8(v_b_992_, sizeof(void*)*4);
v___x_1045_ = lean_uint64_lor(v___x_1041_, v___y_1043_);
if (v_construct_1044_ == 0)
{
uint64_t v___x_1046_; 
v___x_1046_ = 0ULL;
v___y_997_ = v___x_1045_;
v___y_998_ = v___x_1046_;
goto v___jp_996_;
}
else
{
uint64_t v___x_1047_; 
v___x_1047_ = 4ULL;
v___y_997_ = v___x_1045_;
v___y_998_ = v___x_1047_;
goto v___jp_996_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0___boxed(lean_object* v_b_1050_, lean_object* v_args_1051_, lean_object* v_await_1052_, lean_object* v_a_1053_){
_start:
{
uint8_t v_await_boxed_1054_; lean_object* v_res_1055_; 
v_await_boxed_1054_ = lean_unbox(v_await_1052_);
v_res_1055_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(v_b_1050_, v_args_1051_, v_await_boxed_1054_);
lean_dec_ref(v_b_1050_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_parse(lean_object* v_path___1064_){
_start:
{
uint8_t v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1066_ = 0;
v___x_1067_ = lean_unsigned_to_nat(1u);
v___x_1068_ = ((lean_object*)(l_Lasm_JS_Node_path_parse___closed__2));
v___x_1069_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1069_, 0, v_path___1064_);
v___x_1070_ = lean_mk_empty_array_with_capacity(v___x_1067_);
v___x_1071_ = lean_array_push(v___x_1070_, v___x_1069_);
v___x_1072_ = l_Lasm_JS_Web_Support_args(v___x_1071_);
v___x_1073_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_parse_spec__0(v___x_1068_, v___x_1072_, v___x_1066_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_parse___boxed(lean_object* v_path___1074_, lean_object* v_a_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Lasm_JS_Node_path_parse(v_path___1074_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_relative(lean_object* v_from_1085_, lean_object* v_to_1086_){
_start:
{
uint8_t v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1088_ = 0;
v___x_1089_ = lean_unsigned_to_nat(2u);
v___x_1090_ = ((lean_object*)(l_Lasm_JS_Node_path_relative___closed__2));
v___x_1091_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1091_, 0, v_from_1085_);
v___x_1092_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1092_, 0, v_to_1086_);
v___x_1093_ = lean_mk_empty_array_with_capacity(v___x_1089_);
v___x_1094_ = lean_array_push(v___x_1093_, v___x_1091_);
v___x_1095_ = lean_array_push(v___x_1094_, v___x_1092_);
v___x_1096_ = l_Lasm_JS_Web_Support_args(v___x_1095_);
v___x_1097_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_1090_, v___x_1096_, v___x_1088_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_relative___boxed(lean_object* v_from_1098_, lean_object* v_to_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lasm_JS_Node_path_relative(v_from_1098_, v_to_1099_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_resolve(lean_object* v_paths_1110_){
_start:
{
uint8_t v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; size_t v_sz_1115_; size_t v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1112_ = 0;
v___x_1113_ = ((lean_object*)(l_Lasm_JS_Node_path_resolve___closed__2));
v___x_1114_ = ((lean_object*)(l_Lasm_JS_Node_path_join___closed__3));
v_sz_1115_ = lean_array_size(v_paths_1110_);
v___x_1116_ = ((size_t)0ULL);
v___x_1117_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_path_join_spec__0(v_sz_1115_, v___x_1116_, v_paths_1110_);
v___x_1118_ = l_Lasm_JS_Web_Support_argsWith(v___x_1114_, v___x_1117_);
lean_dec_ref(v___x_1117_);
v___x_1119_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_1113_, v___x_1118_, v___x_1112_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_resolve___boxed(lean_object* v_paths_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lasm_JS_Node_path_resolve(v_paths_1120_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_toNamespacedPath(lean_object* v_path___1131_){
_start:
{
uint8_t v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1133_ = 0;
v___x_1134_ = lean_unsigned_to_nat(1u);
v___x_1135_ = ((lean_object*)(l_Lasm_JS_Node_path_toNamespacedPath___closed__2));
v___x_1136_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1136_, 0, v_path___1131_);
v___x_1137_ = lean_mk_empty_array_with_capacity(v___x_1134_);
v___x_1138_ = lean_array_push(v___x_1137_, v___x_1136_);
v___x_1139_ = l_Lasm_JS_Web_Support_args(v___x_1138_);
v___x_1140_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_path_basename_spec__1(v___x_1135_, v___x_1139_, v___x_1133_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_path_toNamespacedPath___boxed(lean_object* v_path___1141_, lean_object* v_a_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_Lasm_JS_Node_path_toNamespacedPath(v_path___1141_);
return v_res_1143_;
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
l_Lasm_JS_Node_instFromJSPathPathObject = _init_l_Lasm_JS_Node_instFromJSPathPathObject();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSPathPathObject);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
