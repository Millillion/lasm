// Lean compiler output
// Module: Lasm.Web.Dom
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Float_repr(double, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
double lean_uint64_to_float(uint64_t);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lasm.Web.Window"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_window___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "window"};
static const lean_object* l_Lasm_Web_window___closed__0 = (const lean_object*)&l_Lasm_Web_window___closed__0_value;
static const lean_string_object l_Lasm_Web_window___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:web"};
static const lean_object* l_Lasm_Web_window___closed__1 = (const lean_object*)&l_Lasm_Web_window___closed__1_value;
static const lean_ctor_object l_Lasm_Web_window___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_window___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_window___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_window___closed__2 = (const lean_object*)&l_Lasm_Web_window___closed__2_value;
static const lean_array_object l_Lasm_Web_window___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_window___closed__3 = (const lean_object*)&l_Lasm_Web_window___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Web_window();
LEAN_EXPORT lean_object* l_Lasm_Web_window___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.Document"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_document___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "document"};
static const lean_object* l_Lasm_Web_document___closed__0 = (const lean_object*)&l_Lasm_Web_document___closed__0_value;
static const lean_ctor_object l_Lasm_Web_document___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_document___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_document___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_document___closed__1 = (const lean_object*)&l_Lasm_Web_document___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_document();
LEAN_EXPORT lean_object* l_Lasm_Web_document___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.Element"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_createElement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "createElement"};
static const lean_object* l_Lasm_Web_createElement___closed__0 = (const lean_object*)&l_Lasm_Web_createElement___closed__0_value;
static const lean_ctor_object l_Lasm_Web_createElement___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_createElement___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_createElement___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_createElement___closed__1 = (const lean_object*)&l_Lasm_Web_createElement___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_createElement(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_createElement___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_createElementNS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "createElementNS"};
static const lean_object* l_Lasm_Web_createElementNS___closed__0 = (const lean_object*)&l_Lasm_Web_createElementNS___closed__0_value;
static const lean_ctor_object l_Lasm_Web_createElementNS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_createElementNS___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_createElementNS___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_createElementNS___closed__1 = (const lean_object*)&l_Lasm_Web_createElementNS___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_createElementNS(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_createElementNS___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_svgNamespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "http://www.w3.org/2000/svg"};
static const lean_object* l_Lasm_Web_svgNamespace___closed__0 = (const lean_object*)&l_Lasm_Web_svgNamespace___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_svgNamespace = (const lean_object*)&l_Lasm_Web_svgNamespace___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lasm.Web.Text"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_createTextNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "createTextNode"};
static const lean_object* l_Lasm_Web_createTextNode___closed__0 = (const lean_object*)&l_Lasm_Web_createTextNode___closed__0_value;
static const lean_ctor_object l_Lasm_Web_createTextNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_createTextNode___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_createTextNode___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_createTextNode___closed__1 = (const lean_object*)&l_Lasm_Web_createTextNode___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_createTextNode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_createTextNode___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.Fragment"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_createFragment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "createFragment"};
static const lean_object* l_Lasm_Web_createFragment___closed__0 = (const lean_object*)&l_Lasm_Web_createFragment___closed__0_value;
static const lean_ctor_object l_Lasm_Web_createFragment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_createFragment___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_createFragment___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_createFragment___closed__1 = (const lean_object*)&l_Lasm_Web_createFragment___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_createFragment();
LEAN_EXPORT lean_object* l_Lasm_Web_createFragment___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Option (Lasm.Web.Element)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_getElementById___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "getElementById"};
static const lean_object* l_Lasm_Web_getElementById___closed__0 = (const lean_object*)&l_Lasm_Web_getElementById___closed__0_value;
static const lean_ctor_object l_Lasm_Web_getElementById___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_getElementById___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_getElementById___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_getElementById___closed__1 = (const lean_object*)&l_Lasm_Web_getElementById___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_getElementById(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_getElementById___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_querySelectorIn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "querySelectorIn"};
static const lean_object* l_Lasm_Web_querySelectorIn___closed__0 = (const lean_object*)&l_Lasm_Web_querySelectorIn___closed__0_value;
static const lean_string_object l_Lasm_Web_querySelectorIn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "querySelector"};
static const lean_object* l_Lasm_Web_querySelectorIn___closed__1 = (const lean_object*)&l_Lasm_Web_querySelectorIn___closed__1_value;
static const lean_ctor_object l_Lasm_Web_querySelectorIn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_querySelectorIn___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_querySelectorIn___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_querySelectorIn___closed__2 = (const lean_object*)&l_Lasm_Web_querySelectorIn___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorIn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorIn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Array (Lasm.Web.Element)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "an element is not Lasm.Web.Element"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_querySelectorAllIn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "querySelectorAllIn"};
static const lean_object* l_Lasm_Web_querySelectorAllIn___closed__0 = (const lean_object*)&l_Lasm_Web_querySelectorAllIn___closed__0_value;
static const lean_string_object l_Lasm_Web_querySelectorAllIn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "querySelectorAll"};
static const lean_object* l_Lasm_Web_querySelectorAllIn___closed__1 = (const lean_object*)&l_Lasm_Web_querySelectorAllIn___closed__1_value;
static const lean_ctor_object l_Lasm_Web_querySelectorAllIn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_querySelectorAllIn___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_querySelectorAllIn___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_querySelectorAllIn___closed__2 = (const lean_object*)&l_Lasm_Web_querySelectorAllIn___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAllIn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAllIn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_querySelector(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_querySelector___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAll(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAll___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_appendChild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "appendChild"};
static const lean_object* l_Lasm_Web_Raw_appendChild___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_appendChild___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_appendChild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_appendChild___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_appendChild___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_appendChild___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_appendChild___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_appendChild(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_appendChild___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_insertBefore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "insertBefore"};
static const lean_object* l_Lasm_Web_Raw_insertBefore___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_insertBefore___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_insertBefore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_insertBefore___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_insertBefore___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_insertBefore___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_insertBefore___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_insertBefore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_insertBefore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_removeChild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "removeChild"};
static const lean_object* l_Lasm_Web_Raw_removeChild___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_removeChild___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_removeChild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_removeChild___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_removeChild___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_removeChild___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_removeChild___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeChild(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeChild___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_removeNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "removeNode"};
static const lean_object* l_Lasm_Web_Raw_removeNode___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_removeNode___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_removeNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_removeNode___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_removeNode___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_removeNode___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_removeNode___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeNode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeNode___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_replaceNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "replaceNode"};
static const lean_object* l_Lasm_Web_Raw_replaceNode___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_replaceNode___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_replaceNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_replaceNode___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_replaceNode___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_replaceNode___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_replaceNode___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceNode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceNode___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_append___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "append"};
static const lean_object* l_Lasm_Web_Raw_append___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_append___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_append___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_append___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_append___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_append___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_append___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_append___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_replaceChildren___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "replaceChildren"};
static const lean_object* l_Lasm_Web_Raw_replaceChildren___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_replaceChildren___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_replaceChildren___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_replaceChildren___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_replaceChildren___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_replaceChildren___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_replaceChildren___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceChildren(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceChildren___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_getText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "getText"};
static const lean_object* l_Lasm_Web_Raw_getText___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_getText___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_getText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_getText___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_getText___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_getText___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_getText___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getText(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getText___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_setText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "setText"};
static const lean_object* l_Lasm_Web_Raw_setText___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_setText___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_setText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_setText___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_setText___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_setText___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_setText___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setText___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Option (Lasm.Web.Node)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_parentNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "parentNode"};
static const lean_object* l_Lasm_Web_Raw_parentNode___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_parentNode___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_parentNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_parentNode___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_parentNode___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_parentNode___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_parentNode___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentNode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentNode___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_parentElement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "parentElement"};
static const lean_object* l_Lasm_Web_Raw_parentElement___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_parentElement___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_parentElement___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_parentElement___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_parentElement___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_parentElement___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_parentElement___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentElement(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentElement___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_firstChild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "firstChild"};
static const lean_object* l_Lasm_Web_Raw_firstChild___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_firstChild___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_firstChild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_firstChild___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_firstChild___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_firstChild___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_firstChild___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_firstChild(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_firstChild___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_lastChild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lastChild"};
static const lean_object* l_Lasm_Web_Raw_lastChild___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_lastChild___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_lastChild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_lastChild___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_lastChild___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_lastChild___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_lastChild___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_lastChild(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_lastChild___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_nextSibling___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "nextSibling"};
static const lean_object* l_Lasm_Web_Raw_nextSibling___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_nextSibling___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_nextSibling___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_nextSibling___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_nextSibling___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_nextSibling___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_nextSibling___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextSibling(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextSibling___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_previousSibling___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "previousSibling"};
static const lean_object* l_Lasm_Web_Raw_previousSibling___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_previousSibling___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_previousSibling___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_previousSibling___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_previousSibling___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_previousSibling___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_previousSibling___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_previousSibling(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_previousSibling___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Array (Lasm.Web.Node)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "an element is not Lasm.Web.Node"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_childNodes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "childNodes"};
static const lean_object* l_Lasm_Web_Raw_childNodes___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_childNodes___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_childNodes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_childNodes___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_childNodes___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_childNodes___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_childNodes___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_childNodes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_childNodes___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_contains___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "contains"};
static const lean_object* l_Lasm_Web_Raw_contains___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_contains___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_contains___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_contains___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_contains___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_contains___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_contains___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_contains___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lasm.Web.Node"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_cloneNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "cloneNode"};
static const lean_object* l_Lasm_Web_Raw_cloneNode___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_cloneNode___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_cloneNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_cloneNode___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_cloneNode___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_cloneNode___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_cloneNode___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cloneNode(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cloneNode___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_isConnected___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "isConnected"};
static const lean_object* l_Lasm_Web_Raw_isConnected___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_isConnected___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_isConnected___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_isConnected___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_isConnected___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_isConnected___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_isConnected___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_isConnected(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_isConnected___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_nodeName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "nodeName"};
static const lean_object* l_Lasm_Web_Raw_nodeName___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_nodeName___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_nodeName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_nodeName___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_nodeName___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_nodeName___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_nodeName___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nodeName(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nodeName___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_tagName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "tagName"};
static const lean_object* l_Lasm_Web_Raw_tagName___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_tagName___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_tagName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_tagName___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_tagName___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_tagName___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_tagName___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_tagName(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_tagName___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_children___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "children"};
static const lean_object* l_Lasm_Web_Raw_children___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_children___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_children___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_children___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_children___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_children___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_children___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_children(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_children___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_getAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "getAttribute"};
static const lean_object* l_Lasm_Web_Raw_getAttribute___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_getAttribute___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_getAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_getAttribute___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_getAttribute___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_getAttribute___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_getAttribute___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getAttribute___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_setAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "setAttribute"};
static const lean_object* l_Lasm_Web_Raw_setAttribute___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_setAttribute___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_setAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_setAttribute___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_setAttribute___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_setAttribute___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_setAttribute___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_setAttributes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "setAttributes"};
static const lean_object* l_Lasm_Web_Raw_setAttributes___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_setAttributes___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_setAttributes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_setAttributes___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_setAttributes___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_setAttributes___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_setAttributes___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttributes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttributes___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_removeAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "removeAttribute"};
static const lean_object* l_Lasm_Web_Raw_removeAttribute___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_removeAttribute___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_removeAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_removeAttribute___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_removeAttribute___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_removeAttribute___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_removeAttribute___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeAttribute___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_hasAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "hasAttribute"};
static const lean_object* l_Lasm_Web_Raw_hasAttribute___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_hasAttribute___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_hasAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_hasAttribute___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_hasAttribute___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_hasAttribute___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_hasAttribute___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_hasAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_hasAttribute___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_toggleAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "toggleAttribute"};
static const lean_object* l_Lasm_Web_Raw_toggleAttribute___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_toggleAttribute___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_toggleAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_toggleAttribute___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_toggleAttribute___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_toggleAttribute___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_toggleAttribute___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_toggleAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_toggleAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_classAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "classAdd"};
static const lean_object* l_Lasm_Web_Raw_classAdd___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_classAdd___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_classAdd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_classAdd___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_classAdd___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_classAdd___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_classAdd___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classAdd___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_classRemove___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "classRemove"};
static const lean_object* l_Lasm_Web_Raw_classRemove___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_classRemove___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_classRemove___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_classRemove___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_classRemove___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_classRemove___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_classRemove___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classRemove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classRemove___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_classToggle___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "classToggle"};
static const lean_object* l_Lasm_Web_Raw_classToggle___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_classToggle___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_classToggle___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_classToggle___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_classToggle___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_classToggle___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_classToggle___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classToggle(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classToggle___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_classContains___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "classContains"};
static const lean_object* l_Lasm_Web_Raw_classContains___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_classContains___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_classContains___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_classContains___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_classContains___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_classContains___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_classContains___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classContains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classContains___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_setStyles___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "setStyles"};
static const lean_object* l_Lasm_Web_Raw_setStyles___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_setStyles___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_setStyles___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_setStyles___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_setStyles___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_setStyles___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_setStyles___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setStyles(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setStyles___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_removeStyle___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "removeStyle"};
static const lean_object* l_Lasm_Web_Raw_removeStyle___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_removeStyle___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_removeStyle___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_removeStyle___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_removeStyle___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_removeStyle___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_removeStyle___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeStyle(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeStyle___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_style___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* l_Lasm_Web_Raw_style___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_style___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_style___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_style___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_style___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_style___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_style___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_style(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_style___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_getInnerHTML___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "getInnerHTML"};
static const lean_object* l_Lasm_Web_Raw_getInnerHTML___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_getInnerHTML___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_getInnerHTML___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_getInnerHTML___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_getInnerHTML___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_getInnerHTML___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_getInnerHTML___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getInnerHTML(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getInnerHTML___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_setInnerHTML___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "setInnerHTML"};
static const lean_object* l_Lasm_Web_Raw_setInnerHTML___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_setInnerHTML___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_setInnerHTML___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_setInnerHTML___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_setInnerHTML___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_setInnerHTML___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_setInnerHTML___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInnerHTML(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInnerHTML___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_getValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "getValue"};
static const lean_object* l_Lasm_Web_Raw_getValue___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_getValue___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_getValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_getValue___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_getValue___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_getValue___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_getValue___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getValue(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getValue___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_setValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "setValue"};
static const lean_object* l_Lasm_Web_Raw_setValue___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_setValue___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_setValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_setValue___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_setValue___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_setValue___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_setValue___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setValue___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_getChecked___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "getChecked"};
static const lean_object* l_Lasm_Web_Raw_getChecked___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_getChecked___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_getChecked___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_getChecked___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_getChecked___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_getChecked___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_getChecked___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getChecked(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getChecked___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_setChecked___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "setChecked"};
static const lean_object* l_Lasm_Web_Raw_setChecked___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_setChecked___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_setChecked___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_setChecked___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_setChecked___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_setChecked___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_setChecked___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setChecked(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setChecked___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_focus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "focus"};
static const lean_object* l_Lasm_Web_Raw_focus___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_focus___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_focus___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_focus___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_focus___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_focus___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_focus___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_focus(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_focus___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_blur___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "blur"};
static const lean_object* l_Lasm_Web_Raw_blur___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_blur___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_blur___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_blur___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_blur___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_blur___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_blur___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_blur(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_blur___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_click___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "click"};
static const lean_object* l_Lasm_Web_Raw_click___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_click___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_click___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_click___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_click___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_click___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_click___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_click(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_click___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_scrollIntoView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "scrollIntoView"};
static const lean_object* l_Lasm_Web_Raw_scrollIntoView___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_scrollIntoView___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_scrollIntoView___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_scrollIntoView___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_scrollIntoView___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_scrollIntoView___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_scrollIntoView___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_scrollIntoView(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_scrollIntoView___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_getProp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "getProp"};
static const lean_object* l_Lasm_Web_Raw_getProp___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_getProp___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_getProp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_getProp___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_getProp___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_getProp___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_getProp___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getProp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getProp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_getPropValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "getPropValue"};
static const lean_object* l_Lasm_Web_Raw_getPropValue___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_getPropValue___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_getPropValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_getPropValue___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_getProp___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_getPropValue___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_getPropValue___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getPropValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getPropValue___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_setProp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "setProp"};
static const lean_object* l_Lasm_Web_Raw_setProp___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_setProp___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_setProp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_setProp___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_setProp___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_setProp___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_setProp___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setProp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_instFromJSRect___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lasm_Web_instFromJSRect___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSRect___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l_Lasm_Web_instFromJSRect___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__1_value;
static const lean_string_object l_Lasm_Web_instFromJSRect___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "width"};
static const lean_object* l_Lasm_Web_instFromJSRect___lam__0___closed__2 = (const lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__2_value;
static const lean_string_object l_Lasm_Web_instFromJSRect___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "height"};
static const lean_object* l_Lasm_Web_instFromJSRect___lam__0___closed__3 = (const lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__3_value;
static const lean_string_object l_Lasm_Web_instFromJSRect___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "top"};
static const lean_object* l_Lasm_Web_instFromJSRect___lam__0___closed__4 = (const lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__4_value;
static const lean_string_object l_Lasm_Web_instFromJSRect___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "right"};
static const lean_object* l_Lasm_Web_instFromJSRect___lam__0___closed__5 = (const lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__5_value;
static const lean_string_object l_Lasm_Web_instFromJSRect___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "bottom"};
static const lean_object* l_Lasm_Web_instFromJSRect___lam__0___closed__6 = (const lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__6_value;
static const lean_string_object l_Lasm_Web_instFromJSRect___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "left"};
static const lean_object* l_Lasm_Web_instFromJSRect___lam__0___closed__7 = (const lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSRect___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSRect___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Web_instFromJSRect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSRect___closed__0;
static const lean_string_object l_Lasm_Web_instFromJSRect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lasm.Web.Rect"};
static const lean_object* l_Lasm_Web_instFromJSRect___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSRect___closed__1_value;
static lean_once_cell_t l_Lasm_Web_instFromJSRect___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSRect___closed__2;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSRect;
static lean_once_cell_t l_Lasm_Web_instInhabitedRect_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_Web_instInhabitedRect_default___closed__0;
static lean_once_cell_t l_Lasm_Web_instInhabitedRect_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instInhabitedRect_default___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instInhabitedRect_default;
LEAN_EXPORT lean_object* l_Lasm_Web_instInhabitedRect;
static const lean_string_object l_Lasm_Web_instReprRect_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__2_value;
static const lean_string_object l_Lasm_Web_instReprRect_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__2_value),((lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lasm_Web_instReprRect_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__6;
static const lean_string_object l_Lasm_Web_instReprRect_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__7 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__7_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__9_value;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__10 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__10_value;
static lean_once_cell_t l_Lasm_Web_instReprRect_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__11;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__12 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lasm_Web_instReprRect_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__13;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__14 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lasm_Web_instReprRect_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__15;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__5_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__16 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__17 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSRect___lam__0___closed__7_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__18 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__18_value;
static lean_once_cell_t l_Lasm_Web_instReprRect_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__19;
static const lean_string_object l_Lasm_Web_instReprRect_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__20 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__20_value;
static lean_once_cell_t l_Lasm_Web_instReprRect_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__21;
static lean_once_cell_t l_Lasm_Web_instReprRect_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__22;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__23 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__23_value;
static const lean_ctor_object l_Lasm_Web_instReprRect_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__20_value)}};
static const lean_object* l_Lasm_Web_instReprRect_repr___redArg___closed__24 = (const lean_object*)&l_Lasm_Web_instReprRect_repr___redArg___closed__24_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_instReprRect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instReprRect_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instReprRect___closed__0 = (const lean_object*)&l_Lasm_Web_instReprRect___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instReprRect = (const lean_object*)&l_Lasm_Web_instReprRect___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_rectOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rectOf"};
static const lean_object* l_Lasm_Web_rectOf___closed__0 = (const lean_object*)&l_Lasm_Web_rectOf___closed__0_value;
static const lean_string_object l_Lasm_Web_rectOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rect"};
static const lean_object* l_Lasm_Web_rectOf___closed__1 = (const lean_object*)&l_Lasm_Web_rectOf___closed__1_value;
static const lean_ctor_object l_Lasm_Web_rectOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_rectOf___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_rectOf___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_rectOf___closed__2 = (const lean_object*)&l_Lasm_Web_rectOf___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Web_rectOf(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_rectOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_appendChild(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_appendChild___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_append___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_insertBefore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_insertBefore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_removeChild(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_removeChild___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_remove(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_remove___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceWith(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceWith___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceChildren(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceChildren___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_textContent(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_textContent___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_setTextContent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_setTextContent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentNode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentNode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentElement(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentElement___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_firstChild(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_firstChild___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_lastChild(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_lastChild___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nextSibling(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nextSibling___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_previousSibling(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_previousSibling___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_childNodes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_childNodes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_cloneNode(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_cloneNode___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_isConnected(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_isConnected___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nodeName(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nodeName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelector(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelector___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelectorAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelectorAll___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_tagName(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_tagName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_children(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_children___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_getAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_getAttribute___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttributes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttributes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeAttribute___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasAttribute___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Element_id___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lasm_Web_Element_id___closed__0 = (const lean_object*)&l_Lasm_Web_Element_id___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Element_id(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_id___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setId___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Element_data___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "data-"};
static const lean_object* l_Lasm_Web_Element_data___closed__0 = (const lean_object*)&l_Lasm_Web_Element_data___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Element_data(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_data___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setData(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setData___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_addClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_addClass___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeClass___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleClass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleClass___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasClass___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Element_setClassName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* l_Lasm_Web_Element_setClassName___closed__0 = (const lean_object*)&l_Lasm_Web_Element_setClassName___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setClassName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setClassName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyle(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyle___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyles(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyles___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeStyle(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeStyle___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_style(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_style___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_innerHTML(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_innerHTML___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setInnerHTML(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setInnerHTML___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_value(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_value___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setValue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_checked(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_checked___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setChecked(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setChecked___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_focus(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_focus___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_blur(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_blur___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_click(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_click___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_scrollIntoView(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_scrollIntoView___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_rect(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_rect___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Element_prop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "property "};
static const lean_object* l_Lasm_Web_Element_prop___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_Element_prop___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Document_body___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l_Lasm_Web_Document_body___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_Document_body___redArg___closed__0_value;
static const lean_string_object l_Lasm_Web_Document_body___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.Web: the document has no body"};
static const lean_object* l_Lasm_Web_Document_body___redArg___closed__1 = (const lean_object*)&l_Lasm_Web_Document_body___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_Web_Document_body___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_Web_Document_body___redArg___closed__1_value)}};
static const lean_object* l_Lasm_Web_Document_body___redArg___closed__2 = (const lean_object*)&l_Lasm_Web_Document_body___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___redArg();
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Document_head___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "head"};
static const lean_object* l_Lasm_Web_Document_head___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_Document_head___redArg___closed__0_value;
static const lean_string_object l_Lasm_Web_Document_head___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.Web: the document has no head"};
static const lean_object* l_Lasm_Web_Document_head___redArg___closed__1 = (const lean_object*)&l_Lasm_Web_Document_head___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_Web_Document_head___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_Web_Document_head___redArg___closed__1_value)}};
static const lean_object* l_Lasm_Web_Document_head___redArg___closed__2 = (const lean_object*)&l_Lasm_Web_Document_head___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___redArg();
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Document_title___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lasm_Web_Document_title___closed__0 = (const lean_object*)&l_Lasm_Web_Document_title___closed__0_value;
static const lean_string_object l_Lasm_Web_Document_title___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "document.title"};
static const lean_object* l_Lasm_Web_Document_title___closed__1 = (const lean_object*)&l_Lasm_Web_Document_title___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Document_title(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Document_title___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Document_setTitle(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Document_setTitle___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Document_activeElement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "activeElement"};
static const lean_object* l_Lasm_Web_Document_activeElement___closed__0 = (const lean_object*)&l_Lasm_Web_Document_activeElement___closed__0_value;
static const lean_string_object l_Lasm_Web_Document_activeElement___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "document.activeElement"};
static const lean_object* l_Lasm_Web_Document_activeElement___closed__1 = (const lean_object*)&l_Lasm_Web_Document_activeElement___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Document_activeElement(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Document_activeElement___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_9_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___x_10_ = lean_unsigned_to_nat(46u);
v___x_11_ = lean_unsigned_to_nat(193u);
v___x_12_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6));
v___x_13_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__5));
v___x_14_ = l_mkPanicMessageWithDecl(v___x_13_, v___x_12_, v___x_11_, v___x_10_, v___x_9_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0(lean_object* v_context_16_, lean_object* v_d_17_){
_start:
{
lean_object* v_received_20_; 
if (lean_obj_tag(v_d_17_) == 9)
{
lean_object* v_value_34_; lean_object* v___x_35_; 
v_value_34_ = lean_ctor_get(v_d_17_, 0);
lean_inc(v_value_34_);
lean_dec_ref_known(v_d_17_, 2);
v___x_35_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_35_, 0, v_value_34_);
return v___x_35_;
}
else
{
if (lean_obj_tag(v_d_17_) == 9)
{
lean_object* v_value_36_; lean_object* v_description_37_; lean_object* v___x_38_; uint8_t v___x_39_; 
v_value_36_ = lean_ctor_get(v_d_17_, 0);
v_description_37_ = lean_ctor_get(v_d_17_, 1);
v___x_38_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_39_ = lean_string_dec_eq(v_description_37_, v___x_38_);
if (v___x_39_ == 0)
{
goto v___jp_32_;
}
else
{
uint32_t v___x_40_; uint64_t v___x_41_; lean_object* v___x_42_; uint32_t v___x_43_; lean_object* v___x_44_; 
lean_inc_n(v_value_36_, 2);
lean_dec_ref_known(v_d_17_, 2);
v___x_40_ = 206;
v___x_41_ = 0ULL;
v___x_42_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_42_, 0, v_value_36_);
lean_ctor_set(v___x_42_, 1, v___x_38_);
v___x_43_ = lasm_js_value_handle(v_value_36_);
lean_dec(v_value_36_);
v___x_44_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_40_, v___x_41_, v___x_42_, v___x_43_);
if (lean_obj_tag(v___x_44_) == 0)
{
lean_object* v_a_45_; uint8_t v___x_46_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
lean_inc(v_a_45_);
lean_dec_ref_known(v___x_44_, 1);
v___x_46_ = lean_string_validate_utf8(v_a_45_);
if (v___x_46_ == 0)
{
lean_object* v___x_47_; lean_object* v___x_48_; 
lean_dec(v_a_45_);
v___x_47_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_48_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_47_);
v_received_20_ = v___x_48_;
goto v___jp_19_;
}
else
{
lean_object* v___x_49_; 
v___x_49_ = lean_string_from_utf8_unchecked(v_a_45_);
v_received_20_ = v___x_49_;
goto v___jp_19_;
}
}
else
{
lean_object* v___x_50_; 
lean_dec_ref_known(v___x_44_, 1);
v___x_50_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v_received_20_ = v___x_50_;
goto v___jp_19_;
}
}
}
else
{
goto v___jp_32_;
}
}
v___jp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_21_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_22_ = lean_string_append(v___x_21_, v_context_16_);
v___x_23_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_24_ = lean_string_append(v___x_22_, v___x_23_);
v___x_25_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_26_ = lean_string_append(v___x_24_, v___x_25_);
v___x_27_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_28_ = lean_string_append(v___x_26_, v___x_27_);
v___x_29_ = lean_string_append(v___x_28_, v_received_20_);
lean_dec_ref(v_received_20_);
v___x_30_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
v___x_31_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
v___jp_32_:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lasm_JS_Data_describe(v_d_17_);
v_received_20_ = v___x_33_;
goto v___jp_19_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___boxed(lean_object* v_context_51_, lean_object* v_d_52_, lean_object* v_a_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0(v_context_51_, v_d_52_);
lean_dec_ref(v_context_51_);
return v_res_54_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1(void){
_start:
{
uint8_t v___x_56_; uint64_t v___x_57_; 
v___x_56_ = 1;
v___x_57_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0(lean_object* v_b_58_, lean_object* v_args_59_, uint8_t v_await_60_){
_start:
{
uint64_t v___y_63_; uint64_t v___y_64_; uint64_t v___x_99_; uint64_t v___y_101_; 
v___x_99_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_60_ == 0)
{
uint64_t v___x_106_; 
v___x_106_ = 0ULL;
v___y_101_ = v___x_106_;
goto v___jp_100_;
}
else
{
uint64_t v___x_107_; 
v___x_107_ = 2ULL;
v___y_101_ = v___x_107_;
goto v___jp_100_;
}
v___jp_62_:
{
uint64_t v_flags_65_; uint32_t v___x_66_; lean_object* v___x_67_; uint32_t v___x_68_; lean_object* v___x_69_; 
v_flags_65_ = lean_uint64_lor(v___y_63_, v___y_64_);
v___x_66_ = 214;
v___x_67_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_58_, v_args_59_);
v___x_68_ = 0;
v___x_69_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_66_, v_flags_65_, v___x_67_, v___x_68_);
if (lean_obj_tag(v___x_69_) == 0)
{
lean_object* v_a_70_; lean_object* v___x_71_; 
v_a_70_ = lean_ctor_get(v___x_69_, 0);
lean_inc(v_a_70_);
lean_dec_ref_known(v___x_69_, 1);
v___x_71_ = l_Lasm_JS_Wire_decode(v_a_70_);
lean_dec(v_a_70_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v_a_72_ = lean_ctor_get(v___x_71_, 0);
lean_inc(v_a_72_);
lean_dec_ref_known(v___x_71_, 1);
v___x_73_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_58_);
v___x_74_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0(v___x_73_, v_a_72_);
lean_dec_ref(v___x_73_);
return v___x_74_;
}
else
{
lean_object* v_a_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_82_; 
v_a_75_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_82_ == 0)
{
v___x_77_ = v___x_71_;
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_a_75_);
lean_dec(v___x_71_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_80_; 
if (v_isShared_78_ == 0)
{
v___x_80_ = v___x_77_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_a_75_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
}
else
{
lean_object* v_a_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_98_; 
v_a_83_ = lean_ctor_get(v___x_69_, 0);
v_isSharedCheck_98_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_98_ == 0)
{
v___x_85_ = v___x_69_;
v_isShared_86_ = v_isSharedCheck_98_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_a_83_);
lean_dec(v___x_69_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_98_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_96_; 
v___x_87_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_88_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_58_);
v___x_89_ = lean_string_append(v___x_87_, v___x_88_);
lean_dec_ref(v___x_88_);
v___x_90_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_91_ = lean_string_append(v___x_89_, v___x_90_);
v___x_92_ = lean_io_error_to_string(v_a_83_);
v___x_93_ = lean_string_append(v___x_91_, v___x_92_);
lean_dec_ref(v___x_92_);
v___x_94_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v___x_94_);
v___x_96_ = v___x_85_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v___x_94_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
}
}
v___jp_100_:
{
uint8_t v_construct_102_; uint64_t v___x_103_; 
v_construct_102_ = lean_ctor_get_uint8(v_b_58_, sizeof(void*)*4);
v___x_103_ = lean_uint64_lor(v___x_99_, v___y_101_);
if (v_construct_102_ == 0)
{
uint64_t v___x_104_; 
v___x_104_ = 0ULL;
v___y_63_ = v___x_103_;
v___y_64_ = v___x_104_;
goto v___jp_62_;
}
else
{
uint64_t v___x_105_; 
v___x_105_ = 4ULL;
v___y_63_ = v___x_103_;
v___y_64_ = v___x_105_;
goto v___jp_62_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___boxed(lean_object* v_b_108_, lean_object* v_args_109_, lean_object* v_await_110_, lean_object* v_a_111_){
_start:
{
uint8_t v_await_boxed_112_; lean_object* v_res_113_; 
v_await_boxed_112_ = lean_unbox(v_await_110_);
v_res_113_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0(v_b_108_, v_args_109_, v_await_boxed_112_);
lean_dec_ref(v_b_108_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_window(){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; lean_object* v___x_127_; 
v___x_124_ = ((lean_object*)(l_Lasm_Web_window___closed__2));
v___x_125_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_126_ = 1;
v___x_127_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0(v___x_124_, v___x_125_, v___x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_window___boxed(lean_object* v_a_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lasm_Web_window();
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0(lean_object* v_context_131_, lean_object* v_d_132_){
_start:
{
lean_object* v_received_135_; 
if (lean_obj_tag(v_d_132_) == 9)
{
lean_object* v_value_149_; lean_object* v___x_150_; 
v_value_149_ = lean_ctor_get(v_d_132_, 0);
lean_inc(v_value_149_);
lean_dec_ref_known(v_d_132_, 2);
v___x_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_150_, 0, v_value_149_);
return v___x_150_;
}
else
{
if (lean_obj_tag(v_d_132_) == 9)
{
lean_object* v_value_151_; lean_object* v_description_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v_value_151_ = lean_ctor_get(v_d_132_, 0);
v_description_152_ = lean_ctor_get(v_d_132_, 1);
v___x_153_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_154_ = lean_string_dec_eq(v_description_152_, v___x_153_);
if (v___x_154_ == 0)
{
goto v___jp_147_;
}
else
{
uint32_t v___x_155_; uint64_t v___x_156_; lean_object* v___x_157_; uint32_t v___x_158_; lean_object* v___x_159_; 
lean_inc_n(v_value_151_, 2);
lean_dec_ref_known(v_d_132_, 2);
v___x_155_ = 206;
v___x_156_ = 0ULL;
v___x_157_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_157_, 0, v_value_151_);
lean_ctor_set(v___x_157_, 1, v___x_153_);
v___x_158_ = lasm_js_value_handle(v_value_151_);
lean_dec(v_value_151_);
v___x_159_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_155_, v___x_156_, v___x_157_, v___x_158_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v_a_160_; uint8_t v___x_161_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_a_160_);
lean_dec_ref_known(v___x_159_, 1);
v___x_161_ = lean_string_validate_utf8(v_a_160_);
if (v___x_161_ == 0)
{
lean_object* v___x_162_; lean_object* v___x_163_; 
lean_dec(v_a_160_);
v___x_162_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_163_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_162_);
v_received_135_ = v___x_163_;
goto v___jp_134_;
}
else
{
lean_object* v___x_164_; 
v___x_164_ = lean_string_from_utf8_unchecked(v_a_160_);
v_received_135_ = v___x_164_;
goto v___jp_134_;
}
}
else
{
lean_object* v___x_165_; 
lean_dec_ref_known(v___x_159_, 1);
v___x_165_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v_received_135_ = v___x_165_;
goto v___jp_134_;
}
}
}
else
{
goto v___jp_147_;
}
}
v___jp_134_:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_136_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_137_ = lean_string_append(v___x_136_, v_context_131_);
v___x_138_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_139_ = lean_string_append(v___x_137_, v___x_138_);
v___x_140_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0___closed__0));
v___x_141_ = lean_string_append(v___x_139_, v___x_140_);
v___x_142_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_143_ = lean_string_append(v___x_141_, v___x_142_);
v___x_144_ = lean_string_append(v___x_143_, v_received_135_);
lean_dec_ref(v_received_135_);
v___x_145_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
v___x_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
return v___x_146_;
}
v___jp_147_:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lasm_JS_Data_describe(v_d_132_);
v_received_135_ = v___x_148_;
goto v___jp_134_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0___boxed(lean_object* v_context_166_, lean_object* v_d_167_, lean_object* v_a_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0(v_context_166_, v_d_167_);
lean_dec_ref(v_context_166_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0(lean_object* v_b_170_, lean_object* v_args_171_, uint8_t v_await_172_){
_start:
{
uint64_t v___y_175_; uint64_t v___y_176_; uint64_t v___x_211_; uint64_t v___y_213_; 
v___x_211_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_172_ == 0)
{
uint64_t v___x_218_; 
v___x_218_ = 0ULL;
v___y_213_ = v___x_218_;
goto v___jp_212_;
}
else
{
uint64_t v___x_219_; 
v___x_219_ = 2ULL;
v___y_213_ = v___x_219_;
goto v___jp_212_;
}
v___jp_174_:
{
uint64_t v_flags_177_; uint32_t v___x_178_; lean_object* v___x_179_; uint32_t v___x_180_; lean_object* v___x_181_; 
v_flags_177_ = lean_uint64_lor(v___y_175_, v___y_176_);
v___x_178_ = 214;
v___x_179_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_170_, v_args_171_);
v___x_180_ = 0;
v___x_181_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_178_, v_flags_177_, v___x_179_, v___x_180_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___x_183_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref_known(v___x_181_, 1);
v___x_183_ = l_Lasm_JS_Wire_decode(v_a_182_);
lean_dec(v_a_182_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_a_184_);
lean_dec_ref_known(v___x_183_, 1);
v___x_185_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_170_);
v___x_186_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0(v___x_185_, v_a_184_);
lean_dec_ref(v___x_185_);
return v___x_186_;
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
v_a_187_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_194_ == 0)
{
v___x_189_ = v___x_183_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_183_);
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
else
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_210_; 
v_a_195_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_210_ == 0)
{
v___x_197_ = v___x_181_;
v_isShared_198_ = v_isSharedCheck_210_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_181_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_210_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_208_; 
v___x_199_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_200_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_170_);
v___x_201_ = lean_string_append(v___x_199_, v___x_200_);
lean_dec_ref(v___x_200_);
v___x_202_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_203_ = lean_string_append(v___x_201_, v___x_202_);
v___x_204_ = lean_io_error_to_string(v_a_195_);
v___x_205_ = lean_string_append(v___x_203_, v___x_204_);
lean_dec_ref(v___x_204_);
v___x_206_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v___x_206_);
v___x_208_ = v___x_197_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_206_);
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
v___jp_212_:
{
uint8_t v_construct_214_; uint64_t v___x_215_; 
v_construct_214_ = lean_ctor_get_uint8(v_b_170_, sizeof(void*)*4);
v___x_215_ = lean_uint64_lor(v___x_211_, v___y_213_);
if (v_construct_214_ == 0)
{
uint64_t v___x_216_; 
v___x_216_ = 0ULL;
v___y_175_ = v___x_215_;
v___y_176_ = v___x_216_;
goto v___jp_174_;
}
else
{
uint64_t v___x_217_; 
v___x_217_ = 4ULL;
v___y_175_ = v___x_215_;
v___y_176_ = v___x_217_;
goto v___jp_174_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0___boxed(lean_object* v_b_220_, lean_object* v_args_221_, lean_object* v_await_222_, lean_object* v_a_223_){
_start:
{
uint8_t v_await_boxed_224_; lean_object* v_res_225_; 
v_await_boxed_224_ = lean_unbox(v_await_222_);
v_res_225_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0(v_b_220_, v_args_221_, v_await_boxed_224_);
lean_dec_ref(v_b_220_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_document(){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; uint8_t v___x_235_; lean_object* v___x_236_; 
v___x_233_ = ((lean_object*)(l_Lasm_Web_document___closed__1));
v___x_234_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_235_ = 1;
v___x_236_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0(v___x_233_, v___x_234_, v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_document___boxed(lean_object* v_a_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Lasm_Web_document();
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0(lean_object* v_context_240_, lean_object* v_d_241_){
_start:
{
lean_object* v_received_244_; 
if (lean_obj_tag(v_d_241_) == 9)
{
lean_object* v_value_258_; lean_object* v___x_259_; 
v_value_258_ = lean_ctor_get(v_d_241_, 0);
lean_inc(v_value_258_);
lean_dec_ref_known(v_d_241_, 2);
v___x_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_259_, 0, v_value_258_);
return v___x_259_;
}
else
{
if (lean_obj_tag(v_d_241_) == 9)
{
lean_object* v_value_260_; lean_object* v_description_261_; lean_object* v___x_262_; uint8_t v___x_263_; 
v_value_260_ = lean_ctor_get(v_d_241_, 0);
v_description_261_ = lean_ctor_get(v_d_241_, 1);
v___x_262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_263_ = lean_string_dec_eq(v_description_261_, v___x_262_);
if (v___x_263_ == 0)
{
goto v___jp_256_;
}
else
{
uint32_t v___x_264_; uint64_t v___x_265_; lean_object* v___x_266_; uint32_t v___x_267_; lean_object* v___x_268_; 
lean_inc_n(v_value_260_, 2);
lean_dec_ref_known(v_d_241_, 2);
v___x_264_ = 206;
v___x_265_ = 0ULL;
v___x_266_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_266_, 0, v_value_260_);
lean_ctor_set(v___x_266_, 1, v___x_262_);
v___x_267_ = lasm_js_value_handle(v_value_260_);
lean_dec(v_value_260_);
v___x_268_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_264_, v___x_265_, v___x_266_, v___x_267_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; uint8_t v___x_270_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_a_269_);
lean_dec_ref_known(v___x_268_, 1);
v___x_270_ = lean_string_validate_utf8(v_a_269_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; lean_object* v___x_272_; 
lean_dec(v_a_269_);
v___x_271_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_272_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_271_);
v_received_244_ = v___x_272_;
goto v___jp_243_;
}
else
{
lean_object* v___x_273_; 
v___x_273_ = lean_string_from_utf8_unchecked(v_a_269_);
v_received_244_ = v___x_273_;
goto v___jp_243_;
}
}
else
{
lean_object* v___x_274_; 
lean_dec_ref_known(v___x_268_, 1);
v___x_274_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v_received_244_ = v___x_274_;
goto v___jp_243_;
}
}
}
else
{
goto v___jp_256_;
}
}
v___jp_243_:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_245_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_246_ = lean_string_append(v___x_245_, v_context_240_);
v___x_247_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_248_ = lean_string_append(v___x_246_, v___x_247_);
v___x_249_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0___closed__0));
v___x_250_ = lean_string_append(v___x_248_, v___x_249_);
v___x_251_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_252_ = lean_string_append(v___x_250_, v___x_251_);
v___x_253_ = lean_string_append(v___x_252_, v_received_244_);
lean_dec_ref(v_received_244_);
v___x_254_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
v___x_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
return v___x_255_;
}
v___jp_256_:
{
lean_object* v___x_257_; 
v___x_257_ = l_Lasm_JS_Data_describe(v_d_241_);
v_received_244_ = v___x_257_;
goto v___jp_243_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0___boxed(lean_object* v_context_275_, lean_object* v_d_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0(v_context_275_, v_d_276_);
lean_dec_ref(v_context_275_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0(lean_object* v_b_279_, lean_object* v_args_280_, uint8_t v_await_281_){
_start:
{
uint64_t v___y_284_; uint64_t v___y_285_; uint64_t v___x_320_; uint64_t v___y_322_; 
v___x_320_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_281_ == 0)
{
uint64_t v___x_327_; 
v___x_327_ = 0ULL;
v___y_322_ = v___x_327_;
goto v___jp_321_;
}
else
{
uint64_t v___x_328_; 
v___x_328_ = 2ULL;
v___y_322_ = v___x_328_;
goto v___jp_321_;
}
v___jp_283_:
{
uint64_t v_flags_286_; uint32_t v___x_287_; lean_object* v___x_288_; uint32_t v___x_289_; lean_object* v___x_290_; 
v_flags_286_ = lean_uint64_lor(v___y_284_, v___y_285_);
v___x_287_ = 214;
v___x_288_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_279_, v_args_280_);
v___x_289_ = 0;
v___x_290_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_287_, v_flags_286_, v___x_288_, v___x_289_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; lean_object* v___x_292_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_291_);
lean_dec_ref_known(v___x_290_, 1);
v___x_292_ = l_Lasm_JS_Wire_decode(v_a_291_);
lean_dec(v_a_291_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v___x_294_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_279_);
v___x_295_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0(v___x_294_, v_a_293_);
lean_dec_ref(v___x_294_);
return v___x_295_;
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
v_a_296_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_292_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_292_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
else
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_319_; 
v_a_304_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_319_ == 0)
{
v___x_306_ = v___x_290_;
v_isShared_307_ = v_isSharedCheck_319_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_290_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_319_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_317_; 
v___x_308_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_309_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_279_);
v___x_310_ = lean_string_append(v___x_308_, v___x_309_);
lean_dec_ref(v___x_309_);
v___x_311_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_312_ = lean_string_append(v___x_310_, v___x_311_);
v___x_313_ = lean_io_error_to_string(v_a_304_);
v___x_314_ = lean_string_append(v___x_312_, v___x_313_);
lean_dec_ref(v___x_313_);
v___x_315_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 0, v___x_315_);
v___x_317_ = v___x_306_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_315_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
}
v___jp_321_:
{
uint8_t v_construct_323_; uint64_t v___x_324_; 
v_construct_323_ = lean_ctor_get_uint8(v_b_279_, sizeof(void*)*4);
v___x_324_ = lean_uint64_lor(v___x_320_, v___y_322_);
if (v_construct_323_ == 0)
{
uint64_t v___x_325_; 
v___x_325_ = 0ULL;
v___y_284_ = v___x_324_;
v___y_285_ = v___x_325_;
goto v___jp_283_;
}
else
{
uint64_t v___x_326_; 
v___x_326_ = 4ULL;
v___y_284_ = v___x_324_;
v___y_285_ = v___x_326_;
goto v___jp_283_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0___boxed(lean_object* v_b_329_, lean_object* v_args_330_, lean_object* v_await_331_, lean_object* v_a_332_){
_start:
{
uint8_t v_await_boxed_333_; lean_object* v_res_334_; 
v_await_boxed_333_ = lean_unbox(v_await_331_);
v_res_334_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0(v_b_329_, v_args_330_, v_await_boxed_333_);
lean_dec_ref(v_b_329_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createElement(lean_object* v_a_341_){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; uint8_t v___x_347_; lean_object* v___x_348_; 
v___x_343_ = ((lean_object*)(l_Lasm_Web_createElement___closed__1));
v___x_344_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_345_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_345_, 0, v_a_341_);
v___x_346_ = lean_array_push(v___x_344_, v___x_345_);
v___x_347_ = 1;
v___x_348_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0(v___x_343_, v___x_346_, v___x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createElement___boxed(lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lasm_Web_createElement(v_a_349_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createElementNS(lean_object* v_a_358_, lean_object* v_a_359_){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v___x_368_; 
v___x_361_ = ((lean_object*)(l_Lasm_Web_createElementNS___closed__1));
v___x_362_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_363_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_363_, 0, v_a_358_);
v___x_364_ = lean_array_push(v___x_362_, v___x_363_);
v___x_365_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_365_, 0, v_a_359_);
v___x_366_ = lean_array_push(v___x_364_, v___x_365_);
v___x_367_ = 1;
v___x_368_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0(v___x_361_, v___x_366_, v___x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createElementNS___boxed(lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lasm_Web_createElementNS(v_a_369_, v_a_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0(lean_object* v_context_376_, lean_object* v_d_377_){
_start:
{
lean_object* v_received_380_; 
if (lean_obj_tag(v_d_377_) == 9)
{
lean_object* v_value_394_; lean_object* v___x_395_; 
v_value_394_ = lean_ctor_get(v_d_377_, 0);
lean_inc(v_value_394_);
lean_dec_ref_known(v_d_377_, 2);
v___x_395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_395_, 0, v_value_394_);
return v___x_395_;
}
else
{
if (lean_obj_tag(v_d_377_) == 9)
{
lean_object* v_value_396_; lean_object* v_description_397_; lean_object* v___x_398_; uint8_t v___x_399_; 
v_value_396_ = lean_ctor_get(v_d_377_, 0);
v_description_397_ = lean_ctor_get(v_d_377_, 1);
v___x_398_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_399_ = lean_string_dec_eq(v_description_397_, v___x_398_);
if (v___x_399_ == 0)
{
goto v___jp_392_;
}
else
{
uint32_t v___x_400_; uint64_t v___x_401_; lean_object* v___x_402_; uint32_t v___x_403_; lean_object* v___x_404_; 
lean_inc_n(v_value_396_, 2);
lean_dec_ref_known(v_d_377_, 2);
v___x_400_ = 206;
v___x_401_ = 0ULL;
v___x_402_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_402_, 0, v_value_396_);
lean_ctor_set(v___x_402_, 1, v___x_398_);
v___x_403_ = lasm_js_value_handle(v_value_396_);
lean_dec(v_value_396_);
v___x_404_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_400_, v___x_401_, v___x_402_, v___x_403_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; uint8_t v___x_406_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
lean_inc(v_a_405_);
lean_dec_ref_known(v___x_404_, 1);
v___x_406_ = lean_string_validate_utf8(v_a_405_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; lean_object* v___x_408_; 
lean_dec(v_a_405_);
v___x_407_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_408_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_407_);
v_received_380_ = v___x_408_;
goto v___jp_379_;
}
else
{
lean_object* v___x_409_; 
v___x_409_ = lean_string_from_utf8_unchecked(v_a_405_);
v_received_380_ = v___x_409_;
goto v___jp_379_;
}
}
else
{
lean_object* v___x_410_; 
lean_dec_ref_known(v___x_404_, 1);
v___x_410_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v_received_380_ = v___x_410_;
goto v___jp_379_;
}
}
}
else
{
goto v___jp_392_;
}
}
v___jp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_381_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_382_ = lean_string_append(v___x_381_, v_context_376_);
v___x_383_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_384_ = lean_string_append(v___x_382_, v___x_383_);
v___x_385_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0___closed__0));
v___x_386_ = lean_string_append(v___x_384_, v___x_385_);
v___x_387_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_388_ = lean_string_append(v___x_386_, v___x_387_);
v___x_389_ = lean_string_append(v___x_388_, v_received_380_);
lean_dec_ref(v_received_380_);
v___x_390_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
v___x_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
return v___x_391_;
}
v___jp_392_:
{
lean_object* v___x_393_; 
v___x_393_ = l_Lasm_JS_Data_describe(v_d_377_);
v_received_380_ = v___x_393_;
goto v___jp_379_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0___boxed(lean_object* v_context_411_, lean_object* v_d_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0(v_context_411_, v_d_412_);
lean_dec_ref(v_context_411_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0(lean_object* v_b_415_, lean_object* v_args_416_, uint8_t v_await_417_){
_start:
{
uint64_t v___y_420_; uint64_t v___y_421_; uint64_t v___x_456_; uint64_t v___y_458_; 
v___x_456_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_417_ == 0)
{
uint64_t v___x_463_; 
v___x_463_ = 0ULL;
v___y_458_ = v___x_463_;
goto v___jp_457_;
}
else
{
uint64_t v___x_464_; 
v___x_464_ = 2ULL;
v___y_458_ = v___x_464_;
goto v___jp_457_;
}
v___jp_419_:
{
uint64_t v_flags_422_; uint32_t v___x_423_; lean_object* v___x_424_; uint32_t v___x_425_; lean_object* v___x_426_; 
v_flags_422_ = lean_uint64_lor(v___y_420_, v___y_421_);
v___x_423_ = 214;
v___x_424_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_415_, v_args_416_);
v___x_425_ = 0;
v___x_426_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_423_, v_flags_422_, v___x_424_, v___x_425_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_428_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc(v_a_427_);
lean_dec_ref_known(v___x_426_, 1);
v___x_428_ = l_Lasm_JS_Wire_decode(v_a_427_);
lean_dec(v_a_427_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_429_);
lean_dec_ref_known(v___x_428_, 1);
v___x_430_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_415_);
v___x_431_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0(v___x_430_, v_a_429_);
lean_dec_ref(v___x_430_);
return v___x_431_;
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_a_432_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_428_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_428_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
else
{
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_455_; 
v_a_440_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_455_ == 0)
{
v___x_442_ = v___x_426_;
v_isShared_443_ = v_isSharedCheck_455_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_426_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_455_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_453_; 
v___x_444_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_445_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_415_);
v___x_446_ = lean_string_append(v___x_444_, v___x_445_);
lean_dec_ref(v___x_445_);
v___x_447_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_448_ = lean_string_append(v___x_446_, v___x_447_);
v___x_449_ = lean_io_error_to_string(v_a_440_);
v___x_450_ = lean_string_append(v___x_448_, v___x_449_);
lean_dec_ref(v___x_449_);
v___x_451_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 0, v___x_451_);
v___x_453_ = v___x_442_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_451_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
v___jp_457_:
{
uint8_t v_construct_459_; uint64_t v___x_460_; 
v_construct_459_ = lean_ctor_get_uint8(v_b_415_, sizeof(void*)*4);
v___x_460_ = lean_uint64_lor(v___x_456_, v___y_458_);
if (v_construct_459_ == 0)
{
uint64_t v___x_461_; 
v___x_461_ = 0ULL;
v___y_420_ = v___x_460_;
v___y_421_ = v___x_461_;
goto v___jp_419_;
}
else
{
uint64_t v___x_462_; 
v___x_462_ = 4ULL;
v___y_420_ = v___x_460_;
v___y_421_ = v___x_462_;
goto v___jp_419_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0___boxed(lean_object* v_b_465_, lean_object* v_args_466_, lean_object* v_await_467_, lean_object* v_a_468_){
_start:
{
uint8_t v_await_boxed_469_; lean_object* v_res_470_; 
v_await_boxed_469_ = lean_unbox(v_await_467_);
v_res_470_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0(v_b_465_, v_args_466_, v_await_boxed_469_);
lean_dec_ref(v_b_465_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createTextNode(lean_object* v_a_477_){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; lean_object* v___x_484_; 
v___x_479_ = ((lean_object*)(l_Lasm_Web_createTextNode___closed__1));
v___x_480_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_481_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_481_, 0, v_a_477_);
v___x_482_ = lean_array_push(v___x_480_, v___x_481_);
v___x_483_ = 1;
v___x_484_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0(v___x_479_, v___x_482_, v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createTextNode___boxed(lean_object* v_a_485_, lean_object* v_a_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lasm_Web_createTextNode(v_a_485_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0(lean_object* v_context_489_, lean_object* v_d_490_){
_start:
{
lean_object* v_received_493_; 
if (lean_obj_tag(v_d_490_) == 9)
{
lean_object* v_value_507_; lean_object* v___x_508_; 
v_value_507_ = lean_ctor_get(v_d_490_, 0);
lean_inc(v_value_507_);
lean_dec_ref_known(v_d_490_, 2);
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v_value_507_);
return v___x_508_;
}
else
{
if (lean_obj_tag(v_d_490_) == 9)
{
lean_object* v_value_509_; lean_object* v_description_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v_value_509_ = lean_ctor_get(v_d_490_, 0);
v_description_510_ = lean_ctor_get(v_d_490_, 1);
v___x_511_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_512_ = lean_string_dec_eq(v_description_510_, v___x_511_);
if (v___x_512_ == 0)
{
goto v___jp_505_;
}
else
{
uint32_t v___x_513_; uint64_t v___x_514_; lean_object* v___x_515_; uint32_t v___x_516_; lean_object* v___x_517_; 
lean_inc_n(v_value_509_, 2);
lean_dec_ref_known(v_d_490_, 2);
v___x_513_ = 206;
v___x_514_ = 0ULL;
v___x_515_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_515_, 0, v_value_509_);
lean_ctor_set(v___x_515_, 1, v___x_511_);
v___x_516_ = lasm_js_value_handle(v_value_509_);
lean_dec(v_value_509_);
v___x_517_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_513_, v___x_514_, v___x_515_, v___x_516_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v_a_518_; uint8_t v___x_519_; 
v_a_518_ = lean_ctor_get(v___x_517_, 0);
lean_inc(v_a_518_);
lean_dec_ref_known(v___x_517_, 1);
v___x_519_ = lean_string_validate_utf8(v_a_518_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; 
lean_dec(v_a_518_);
v___x_520_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_521_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_520_);
v_received_493_ = v___x_521_;
goto v___jp_492_;
}
else
{
lean_object* v___x_522_; 
v___x_522_ = lean_string_from_utf8_unchecked(v_a_518_);
v_received_493_ = v___x_522_;
goto v___jp_492_;
}
}
else
{
lean_object* v___x_523_; 
lean_dec_ref_known(v___x_517_, 1);
v___x_523_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v_received_493_ = v___x_523_;
goto v___jp_492_;
}
}
}
else
{
goto v___jp_505_;
}
}
v___jp_492_:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_494_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_495_ = lean_string_append(v___x_494_, v_context_489_);
v___x_496_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_497_ = lean_string_append(v___x_495_, v___x_496_);
v___x_498_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0___closed__0));
v___x_499_ = lean_string_append(v___x_497_, v___x_498_);
v___x_500_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_501_ = lean_string_append(v___x_499_, v___x_500_);
v___x_502_ = lean_string_append(v___x_501_, v_received_493_);
lean_dec_ref(v_received_493_);
v___x_503_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
v___x_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
v___jp_505_:
{
lean_object* v___x_506_; 
v___x_506_ = l_Lasm_JS_Data_describe(v_d_490_);
v_received_493_ = v___x_506_;
goto v___jp_492_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0___boxed(lean_object* v_context_524_, lean_object* v_d_525_, lean_object* v_a_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0(v_context_524_, v_d_525_);
lean_dec_ref(v_context_524_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0(lean_object* v_b_528_, lean_object* v_args_529_, uint8_t v_await_530_){
_start:
{
uint64_t v___y_533_; uint64_t v___y_534_; uint64_t v___x_569_; uint64_t v___y_571_; 
v___x_569_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_530_ == 0)
{
uint64_t v___x_576_; 
v___x_576_ = 0ULL;
v___y_571_ = v___x_576_;
goto v___jp_570_;
}
else
{
uint64_t v___x_577_; 
v___x_577_ = 2ULL;
v___y_571_ = v___x_577_;
goto v___jp_570_;
}
v___jp_532_:
{
uint64_t v_flags_535_; uint32_t v___x_536_; lean_object* v___x_537_; uint32_t v___x_538_; lean_object* v___x_539_; 
v_flags_535_ = lean_uint64_lor(v___y_533_, v___y_534_);
v___x_536_ = 214;
v___x_537_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_528_, v_args_529_);
v___x_538_ = 0;
v___x_539_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_536_, v_flags_535_, v___x_537_, v___x_538_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_541_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_a_540_);
lean_dec_ref_known(v___x_539_, 1);
v___x_541_ = l_Lasm_JS_Wire_decode(v_a_540_);
lean_dec(v_a_540_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_a_542_);
lean_dec_ref_known(v___x_541_, 1);
v___x_543_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_528_);
v___x_544_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0(v___x_543_, v_a_542_);
lean_dec_ref(v___x_543_);
return v___x_544_;
}
else
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_552_; 
v_a_545_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_552_ == 0)
{
v___x_547_ = v___x_541_;
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_541_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_550_; 
if (v_isShared_548_ == 0)
{
v___x_550_ = v___x_547_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_a_545_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
else
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_568_; 
v_a_553_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_568_ == 0)
{
v___x_555_ = v___x_539_;
v_isShared_556_ = v_isSharedCheck_568_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_539_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_568_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_566_; 
v___x_557_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_558_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_528_);
v___x_559_ = lean_string_append(v___x_557_, v___x_558_);
lean_dec_ref(v___x_558_);
v___x_560_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_561_ = lean_string_append(v___x_559_, v___x_560_);
v___x_562_ = lean_io_error_to_string(v_a_553_);
v___x_563_ = lean_string_append(v___x_561_, v___x_562_);
lean_dec_ref(v___x_562_);
v___x_564_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_564_);
v___x_566_ = v___x_555_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v___x_564_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
v___jp_570_:
{
uint8_t v_construct_572_; uint64_t v___x_573_; 
v_construct_572_ = lean_ctor_get_uint8(v_b_528_, sizeof(void*)*4);
v___x_573_ = lean_uint64_lor(v___x_569_, v___y_571_);
if (v_construct_572_ == 0)
{
uint64_t v___x_574_; 
v___x_574_ = 0ULL;
v___y_533_ = v___x_573_;
v___y_534_ = v___x_574_;
goto v___jp_532_;
}
else
{
uint64_t v___x_575_; 
v___x_575_ = 4ULL;
v___y_533_ = v___x_573_;
v___y_534_ = v___x_575_;
goto v___jp_532_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0___boxed(lean_object* v_b_578_, lean_object* v_args_579_, lean_object* v_await_580_, lean_object* v_a_581_){
_start:
{
uint8_t v_await_boxed_582_; lean_object* v_res_583_; 
v_await_boxed_582_ = lean_unbox(v_await_580_);
v_res_583_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0(v_b_578_, v_args_579_, v_await_boxed_582_);
lean_dec_ref(v_b_578_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createFragment(){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; uint8_t v___x_593_; lean_object* v___x_594_; 
v___x_591_ = ((lean_object*)(l_Lasm_Web_createFragment___closed__1));
v___x_592_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_593_ = 1;
v___x_594_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0(v___x_591_, v___x_592_, v___x_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createFragment___boxed(lean_object* v_a_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lasm_Web_createFragment();
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0(lean_object* v_context_598_, lean_object* v_d_599_){
_start:
{
lean_object* v_received_605_; 
switch(lean_obj_tag(v_d_599_))
{
case 1:
{
goto v___jp_601_;
}
case 0:
{
goto v___jp_601_;
}
default: 
{
if (lean_obj_tag(v_d_599_) == 9)
{
lean_object* v_value_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v_value_619_ = lean_ctor_get(v_d_599_, 0);
lean_inc(v_value_619_);
lean_dec_ref_known(v_d_599_, 2);
v___x_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_620_, 0, v_value_619_);
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
return v___x_621_;
}
else
{
if (lean_obj_tag(v_d_599_) == 9)
{
lean_object* v_value_622_; lean_object* v_description_623_; lean_object* v___x_624_; uint8_t v___x_625_; 
v_value_622_ = lean_ctor_get(v_d_599_, 0);
v_description_623_ = lean_ctor_get(v_d_599_, 1);
v___x_624_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_625_ = lean_string_dec_eq(v_description_623_, v___x_624_);
if (v___x_625_ == 0)
{
goto v___jp_617_;
}
else
{
uint32_t v___x_626_; uint64_t v___x_627_; lean_object* v___x_628_; uint32_t v___x_629_; lean_object* v___x_630_; 
lean_inc_n(v_value_622_, 2);
lean_dec_ref_known(v_d_599_, 2);
v___x_626_ = 206;
v___x_627_ = 0ULL;
v___x_628_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_628_, 0, v_value_622_);
lean_ctor_set(v___x_628_, 1, v___x_624_);
v___x_629_ = lasm_js_value_handle(v_value_622_);
lean_dec(v_value_622_);
v___x_630_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_626_, v___x_627_, v___x_628_, v___x_629_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; uint8_t v___x_632_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v___x_630_, 1);
v___x_632_ = lean_string_validate_utf8(v_a_631_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; 
lean_dec(v_a_631_);
v___x_633_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_634_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_633_);
v_received_605_ = v___x_634_;
goto v___jp_604_;
}
else
{
lean_object* v___x_635_; 
v___x_635_ = lean_string_from_utf8_unchecked(v_a_631_);
v_received_605_ = v___x_635_;
goto v___jp_604_;
}
}
else
{
lean_object* v___x_636_; 
lean_dec_ref_known(v___x_630_, 1);
v___x_636_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v_received_605_ = v___x_636_;
goto v___jp_604_;
}
}
}
else
{
goto v___jp_617_;
}
}
}
}
v___jp_601_:
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = lean_box(0);
v___x_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
return v___x_603_;
}
v___jp_604_:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_606_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_607_ = lean_string_append(v___x_606_, v_context_598_);
v___x_608_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_609_ = lean_string_append(v___x_607_, v___x_608_);
v___x_610_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0___closed__0));
v___x_611_ = lean_string_append(v___x_609_, v___x_610_);
v___x_612_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_613_ = lean_string_append(v___x_611_, v___x_612_);
v___x_614_ = lean_string_append(v___x_613_, v_received_605_);
lean_dec_ref(v_received_605_);
v___x_615_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
v___x_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
return v___x_616_;
}
v___jp_617_:
{
lean_object* v___x_618_; 
v___x_618_ = l_Lasm_JS_Data_describe(v_d_599_);
v_received_605_ = v___x_618_;
goto v___jp_604_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0___boxed(lean_object* v_context_637_, lean_object* v_d_638_, lean_object* v_a_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0(v_context_637_, v_d_638_);
lean_dec_ref(v_context_637_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(lean_object* v_b_641_, lean_object* v_args_642_, uint8_t v_await_643_){
_start:
{
uint64_t v___y_646_; uint64_t v___y_647_; uint64_t v___x_682_; uint64_t v___y_684_; 
v___x_682_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_643_ == 0)
{
uint64_t v___x_689_; 
v___x_689_ = 0ULL;
v___y_684_ = v___x_689_;
goto v___jp_683_;
}
else
{
uint64_t v___x_690_; 
v___x_690_ = 2ULL;
v___y_684_ = v___x_690_;
goto v___jp_683_;
}
v___jp_645_:
{
uint64_t v_flags_648_; uint32_t v___x_649_; lean_object* v___x_650_; uint32_t v___x_651_; lean_object* v___x_652_; 
v_flags_648_ = lean_uint64_lor(v___y_646_, v___y_647_);
v___x_649_ = 214;
v___x_650_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_641_, v_args_642_);
v___x_651_ = 0;
v___x_652_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_649_, v_flags_648_, v___x_650_, v___x_651_);
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v_a_653_; lean_object* v___x_654_; 
v_a_653_ = lean_ctor_get(v___x_652_, 0);
lean_inc(v_a_653_);
lean_dec_ref_known(v___x_652_, 1);
v___x_654_ = l_Lasm_JS_Wire_decode(v_a_653_);
lean_dec(v_a_653_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v_a_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v_a_655_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_a_655_);
lean_dec_ref_known(v___x_654_, 1);
v___x_656_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_641_);
v___x_657_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0(v___x_656_, v_a_655_);
lean_dec_ref(v___x_656_);
return v___x_657_;
}
else
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_665_; 
v_a_658_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_665_ == 0)
{
v___x_660_ = v___x_654_;
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_654_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_663_; 
if (v_isShared_661_ == 0)
{
v___x_663_ = v___x_660_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_a_658_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_681_; 
v_a_666_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_681_ == 0)
{
v___x_668_ = v___x_652_;
v_isShared_669_ = v_isSharedCheck_681_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_652_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_681_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_670_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_671_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_641_);
v___x_672_ = lean_string_append(v___x_670_, v___x_671_);
lean_dec_ref(v___x_671_);
v___x_673_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_674_ = lean_string_append(v___x_672_, v___x_673_);
v___x_675_ = lean_io_error_to_string(v_a_666_);
v___x_676_ = lean_string_append(v___x_674_, v___x_675_);
lean_dec_ref(v___x_675_);
v___x_677_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 0, v___x_677_);
v___x_679_ = v___x_668_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_677_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
v___jp_683_:
{
uint8_t v_construct_685_; uint64_t v___x_686_; 
v_construct_685_ = lean_ctor_get_uint8(v_b_641_, sizeof(void*)*4);
v___x_686_ = lean_uint64_lor(v___x_682_, v___y_684_);
if (v_construct_685_ == 0)
{
uint64_t v___x_687_; 
v___x_687_ = 0ULL;
v___y_646_ = v___x_686_;
v___y_647_ = v___x_687_;
goto v___jp_645_;
}
else
{
uint64_t v___x_688_; 
v___x_688_ = 4ULL;
v___y_646_ = v___x_686_;
v___y_647_ = v___x_688_;
goto v___jp_645_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0___boxed(lean_object* v_b_691_, lean_object* v_args_692_, lean_object* v_await_693_, lean_object* v_a_694_){
_start:
{
uint8_t v_await_boxed_695_; lean_object* v_res_696_; 
v_await_boxed_695_ = lean_unbox(v_await_693_);
v_res_696_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(v_b_691_, v_args_692_, v_await_boxed_695_);
lean_dec_ref(v_b_691_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_getElementById(lean_object* v_a_703_){
_start:
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; uint8_t v___x_709_; lean_object* v___x_710_; 
v___x_705_ = ((lean_object*)(l_Lasm_Web_getElementById___closed__1));
v___x_706_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_707_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_707_, 0, v_a_703_);
v___x_708_ = lean_array_push(v___x_706_, v___x_707_);
v___x_709_ = 1;
v___x_710_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(v___x_705_, v___x_708_, v___x_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_getElementById___boxed(lean_object* v_a_711_, lean_object* v_a_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lasm_Web_getElementById(v_a_711_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorIn(lean_object* v_a_722_, lean_object* v_a_723_){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___y_730_; 
v___x_725_ = ((lean_object*)(l_Lasm_Web_querySelectorIn___closed__2));
v___x_726_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_727_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_727_, 0, v_a_722_);
v___x_728_ = lean_array_push(v___x_726_, v___x_727_);
if (lean_obj_tag(v_a_723_) == 0)
{
lean_object* v___x_734_; 
v___x_734_ = lean_box(1);
v___y_730_ = v___x_734_;
goto v___jp_729_;
}
else
{
lean_object* v_val_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v_val_735_ = lean_ctor_get(v_a_723_, 0);
v___x_736_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
lean_inc(v_val_735_);
v___x_737_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_737_, 0, v_val_735_);
lean_ctor_set(v___x_737_, 1, v___x_736_);
v___y_730_ = v___x_737_;
goto v___jp_729_;
}
v___jp_729_:
{
lean_object* v___x_731_; uint8_t v___x_732_; lean_object* v___x_733_; 
v___x_731_ = lean_array_push(v___x_728_, v___y_730_);
v___x_732_ = 1;
v___x_733_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(v___x_725_, v___x_731_, v___x_732_);
return v___x_733_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorIn___boxed(lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lasm_Web_querySelectorIn(v_a_738_, v_a_739_);
lean_dec(v_a_739_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1(size_t v_sz_744_, size_t v_i_745_, lean_object* v_bs_746_){
_start:
{
uint8_t v___x_747_; 
v___x_747_ = lean_usize_dec_lt(v_i_745_, v_sz_744_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; 
v___x_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_748_, 0, v_bs_746_);
return v___x_748_;
}
else
{
lean_object* v_v_749_; 
v_v_749_ = lean_array_uget_borrowed(v_bs_746_, v_i_745_);
if (lean_obj_tag(v_v_749_) == 9)
{
lean_object* v_value_750_; lean_object* v___x_751_; lean_object* v_bs_x27_752_; size_t v___x_753_; size_t v___x_754_; lean_object* v___x_755_; 
v_value_750_ = lean_ctor_get(v_v_749_, 0);
lean_inc(v_value_750_);
v___x_751_ = lean_unsigned_to_nat(0u);
v_bs_x27_752_ = lean_array_uset(v_bs_746_, v_i_745_, v___x_751_);
v___x_753_ = ((size_t)1ULL);
v___x_754_ = lean_usize_add(v_i_745_, v___x_753_);
v___x_755_ = lean_array_uset(v_bs_x27_752_, v_i_745_, v_value_750_);
v_i_745_ = v___x_754_;
v_bs_746_ = v___x_755_;
goto _start;
}
else
{
lean_object* v___x_757_; 
lean_dec_ref(v_bs_746_);
v___x_757_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___closed__0));
return v___x_757_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_758_, lean_object* v_i_759_, lean_object* v_bs_760_){
_start:
{
size_t v_sz_boxed_761_; size_t v_i_boxed_762_; lean_object* v_res_763_; 
v_sz_boxed_761_ = lean_unbox_usize(v_sz_758_);
lean_dec(v_sz_758_);
v_i_boxed_762_ = lean_unbox_usize(v_i_759_);
lean_dec(v_i_759_);
v_res_763_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1(v_sz_boxed_761_, v_i_boxed_762_, v_bs_760_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0(lean_object* v_context_768_, lean_object* v_d_769_){
_start:
{
lean_object* v___y_772_; lean_object* v___y_773_; lean_object* v___y_778_; lean_object* v_received_779_; lean_object* v___y_798_; lean_object* v_a_801_; 
if (lean_obj_tag(v_d_769_) == 7)
{
lean_object* v_items_825_; size_t v_sz_826_; size_t v___x_827_; lean_object* v___x_828_; 
v_items_825_ = lean_ctor_get(v_d_769_, 0);
v_sz_826_ = lean_array_size(v_items_825_);
v___x_827_ = ((size_t)0ULL);
lean_inc_ref(v_items_825_);
v___x_828_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1(v_sz_826_, v___x_827_, v_items_825_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; uint8_t v___x_833_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_a_829_);
lean_dec_ref_known(v___x_828_, 1);
v___x_830_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__3));
v___x_831_ = lean_string_utf8_byte_size(v_a_829_);
v___x_832_ = lean_unsigned_to_nat(0u);
v___x_833_ = lean_nat_dec_eq(v___x_831_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_834_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_835_ = lean_string_append(v___x_834_, v_a_829_);
lean_dec(v_a_829_);
v___x_836_ = lean_string_append(v___x_830_, v___x_835_);
lean_dec_ref(v___x_835_);
v_a_801_ = v___x_836_;
goto v___jp_800_;
}
else
{
lean_dec(v_a_829_);
v_a_801_ = v___x_830_;
goto v___jp_800_;
}
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
lean_dec_ref_known(v_d_769_, 1);
v_a_837_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_828_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_828_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
lean_ctor_set_tag(v___x_839_, 0);
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
else
{
lean_object* v___x_845_; 
v___x_845_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v_a_801_ = v___x_845_;
goto v___jp_800_;
}
v___jp_771_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_774_ = lean_string_append(v___y_772_, v___y_773_);
lean_dec_ref(v___y_773_);
v___x_775_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
v___x_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
return v___x_776_;
}
v___jp_777_:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; uint8_t v___x_791_; 
v___x_780_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_781_ = lean_string_append(v___x_780_, v_context_768_);
v___x_782_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_783_ = lean_string_append(v___x_781_, v___x_782_);
v___x_784_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__0));
v___x_785_ = lean_string_append(v___x_783_, v___x_784_);
v___x_786_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_787_ = lean_string_append(v___x_785_, v___x_786_);
v___x_788_ = lean_string_append(v___x_787_, v_received_779_);
lean_dec_ref(v_received_779_);
v___x_789_ = lean_string_utf8_byte_size(v___y_778_);
v___x_790_ = lean_unsigned_to_nat(0u);
v___x_791_ = lean_nat_dec_eq(v___x_789_, v___x_790_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_792_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__1));
v___x_793_ = lean_string_append(v___x_792_, v___y_778_);
lean_dec_ref(v___y_778_);
v___x_794_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__2));
v___x_795_ = lean_string_append(v___x_793_, v___x_794_);
v___y_772_ = v___x_788_;
v___y_773_ = v___x_795_;
goto v___jp_771_;
}
else
{
lean_object* v___x_796_; 
lean_dec_ref(v___y_778_);
v___x_796_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___y_772_ = v___x_788_;
v___y_773_ = v___x_796_;
goto v___jp_771_;
}
}
v___jp_797_:
{
lean_object* v___x_799_; 
v___x_799_ = l_Lasm_JS_Data_describe(v_d_769_);
v___y_778_ = v___y_798_;
v_received_779_ = v___x_799_;
goto v___jp_777_;
}
v___jp_800_:
{
if (lean_obj_tag(v_d_769_) == 9)
{
lean_object* v_value_802_; lean_object* v_description_803_; lean_object* v___x_804_; uint8_t v___x_805_; 
v_value_802_ = lean_ctor_get(v_d_769_, 0);
v_description_803_ = lean_ctor_get(v_d_769_, 1);
v___x_804_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_805_ = lean_string_dec_eq(v_description_803_, v___x_804_);
if (v___x_805_ == 0)
{
v___y_798_ = v_a_801_;
goto v___jp_797_;
}
else
{
lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_822_; 
lean_inc(v_value_802_);
v_isSharedCheck_822_ = !lean_is_exclusive(v_d_769_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; lean_object* v_unused_824_; 
v_unused_823_ = lean_ctor_get(v_d_769_, 1);
lean_dec(v_unused_823_);
v_unused_824_ = lean_ctor_get(v_d_769_, 0);
lean_dec(v_unused_824_);
v___x_807_ = v_d_769_;
v_isShared_808_ = v_isSharedCheck_822_;
goto v_resetjp_806_;
}
else
{
lean_dec(v_d_769_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_822_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
uint32_t v___x_809_; uint64_t v___x_810_; lean_object* v___x_812_; 
v___x_809_ = 206;
v___x_810_ = 0ULL;
lean_inc(v_value_802_);
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 1, v___x_804_);
v___x_812_ = v___x_807_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_value_802_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v___x_804_);
v___x_812_ = v_reuseFailAlloc_821_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
uint32_t v___x_813_; lean_object* v___x_814_; 
v___x_813_ = lasm_js_value_handle(v_value_802_);
lean_dec(v_value_802_);
v___x_814_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_809_, v___x_810_, v___x_812_, v___x_813_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; uint8_t v___x_816_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
lean_dec_ref_known(v___x_814_, 1);
v___x_816_ = lean_string_validate_utf8(v_a_815_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; lean_object* v___x_818_; 
lean_dec(v_a_815_);
v___x_817_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_818_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_817_);
v___y_778_ = v_a_801_;
v_received_779_ = v___x_818_;
goto v___jp_777_;
}
else
{
lean_object* v___x_819_; 
v___x_819_ = lean_string_from_utf8_unchecked(v_a_815_);
v___y_778_ = v_a_801_;
v_received_779_ = v___x_819_;
goto v___jp_777_;
}
}
else
{
lean_object* v___x_820_; 
lean_dec_ref_known(v___x_814_, 1);
v___x_820_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v___y_778_ = v_a_801_;
v_received_779_ = v___x_820_;
goto v___jp_777_;
}
}
}
}
}
else
{
v___y_798_ = v_a_801_;
goto v___jp_797_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___boxed(lean_object* v_context_846_, lean_object* v_d_847_, lean_object* v_a_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0(v_context_846_, v_d_847_);
lean_dec_ref(v_context_846_);
return v_res_849_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0(void){
_start:
{
uint8_t v___x_850_; uint64_t v___x_851_; 
v___x_850_ = 0;
v___x_851_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0(lean_object* v_b_852_, lean_object* v_args_853_, uint8_t v_await_854_){
_start:
{
uint64_t v___y_857_; uint64_t v___y_858_; uint64_t v___x_893_; uint64_t v___y_895_; 
v___x_893_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_854_ == 0)
{
uint64_t v___x_900_; 
v___x_900_ = 0ULL;
v___y_895_ = v___x_900_;
goto v___jp_894_;
}
else
{
uint64_t v___x_901_; 
v___x_901_ = 2ULL;
v___y_895_ = v___x_901_;
goto v___jp_894_;
}
v___jp_856_:
{
uint64_t v_flags_859_; uint32_t v___x_860_; lean_object* v___x_861_; uint32_t v___x_862_; lean_object* v___x_863_; 
v_flags_859_ = lean_uint64_lor(v___y_857_, v___y_858_);
v___x_860_ = 214;
v___x_861_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_852_, v_args_853_);
v___x_862_ = 0;
v___x_863_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_860_, v_flags_859_, v___x_861_, v___x_862_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
v___x_865_ = l_Lasm_JS_Wire_decode(v_a_864_);
lean_dec(v_a_864_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_865_, 1);
v___x_867_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_852_);
v___x_868_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0(v___x_867_, v_a_866_);
lean_dec_ref(v___x_867_);
return v___x_868_;
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
v_a_869_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_865_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_865_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_892_; 
v_a_877_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_892_ == 0)
{
v___x_879_ = v___x_863_;
v_isShared_880_ = v_isSharedCheck_892_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_863_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_892_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_890_; 
v___x_881_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_882_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_852_);
v___x_883_ = lean_string_append(v___x_881_, v___x_882_);
lean_dec_ref(v___x_882_);
v___x_884_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_885_ = lean_string_append(v___x_883_, v___x_884_);
v___x_886_ = lean_io_error_to_string(v_a_877_);
v___x_887_ = lean_string_append(v___x_885_, v___x_886_);
lean_dec_ref(v___x_886_);
v___x_888_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_888_);
v___x_890_ = v___x_879_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_888_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
v___jp_894_:
{
uint8_t v_construct_896_; uint64_t v___x_897_; 
v_construct_896_ = lean_ctor_get_uint8(v_b_852_, sizeof(void*)*4);
v___x_897_ = lean_uint64_lor(v___x_893_, v___y_895_);
if (v_construct_896_ == 0)
{
uint64_t v___x_898_; 
v___x_898_ = 0ULL;
v___y_857_ = v___x_897_;
v___y_858_ = v___x_898_;
goto v___jp_856_;
}
else
{
uint64_t v___x_899_; 
v___x_899_ = 4ULL;
v___y_857_ = v___x_897_;
v___y_858_ = v___x_899_;
goto v___jp_856_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___boxed(lean_object* v_b_902_, lean_object* v_args_903_, lean_object* v_await_904_, lean_object* v_a_905_){
_start:
{
uint8_t v_await_boxed_906_; lean_object* v_res_907_; 
v_await_boxed_906_ = lean_unbox(v_await_904_);
v_res_907_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0(v_b_902_, v_args_903_, v_await_boxed_906_);
lean_dec_ref(v_b_902_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAllIn(lean_object* v_a_916_, lean_object* v_a_917_){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___y_924_; 
v___x_919_ = ((lean_object*)(l_Lasm_Web_querySelectorAllIn___closed__2));
v___x_920_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_921_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_921_, 0, v_a_916_);
v___x_922_ = lean_array_push(v___x_920_, v___x_921_);
if (lean_obj_tag(v_a_917_) == 0)
{
lean_object* v___x_928_; 
v___x_928_ = lean_box(1);
v___y_924_ = v___x_928_;
goto v___jp_923_;
}
else
{
lean_object* v_val_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_val_929_ = lean_ctor_get(v_a_917_, 0);
v___x_930_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
lean_inc(v_val_929_);
v___x_931_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_931_, 0, v_val_929_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
v___y_924_ = v___x_931_;
goto v___jp_923_;
}
v___jp_923_:
{
lean_object* v___x_925_; uint8_t v___x_926_; lean_object* v___x_927_; 
v___x_925_ = lean_array_push(v___x_922_, v___y_924_);
v___x_926_ = 1;
v___x_927_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0(v___x_919_, v___x_925_, v___x_926_);
return v___x_927_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAllIn___boxed(lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_Lasm_Web_querySelectorAllIn(v_a_932_, v_a_933_);
lean_dec(v_a_933_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelector(lean_object* v_selector_936_){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_938_ = lean_box(0);
v___x_939_ = l_Lasm_Web_querySelectorIn(v_selector_936_, v___x_938_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelector___boxed(lean_object* v_selector_940_, lean_object* v_a_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lasm_Web_querySelector(v_selector_940_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAll(lean_object* v_selector_943_){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = lean_box(0);
v___x_946_ = l_Lasm_Web_querySelectorAllIn(v_selector_943_, v___x_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAll___boxed(lean_object* v_selector_947_, lean_object* v_a_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = l_Lasm_Web_querySelectorAll(v_selector_947_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(lean_object* v_b_950_, lean_object* v_args_951_, uint8_t v_await_952_){
_start:
{
uint64_t v___y_955_; uint64_t v___y_956_; uint64_t v___x_989_; uint64_t v___y_991_; 
v___x_989_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_952_ == 0)
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
v___jp_954_:
{
uint64_t v_flags_957_; uint32_t v___x_958_; lean_object* v___x_959_; uint32_t v___x_960_; lean_object* v___x_961_; 
v_flags_957_ = lean_uint64_lor(v___y_955_, v___y_956_);
v___x_958_ = 214;
v___x_959_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_950_, v_args_951_);
v___x_960_ = 0;
v___x_961_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_958_, v_flags_957_, v___x_959_, v___x_960_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v_a_962_; lean_object* v___x_963_; 
v_a_962_ = lean_ctor_get(v___x_961_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v___x_961_, 1);
v___x_963_ = l_Lasm_JS_Wire_decode(v_a_962_);
lean_dec(v_a_962_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v___x_964_; 
lean_dec_ref_known(v___x_963_, 1);
v___x_964_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_964_;
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
v_a_965_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_963_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_963_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
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
v_a_973_ = lean_ctor_get(v___x_961_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_961_);
if (v_isSharedCheck_988_ == 0)
{
v___x_975_ = v___x_961_;
v_isShared_976_ = v_isSharedCheck_988_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_961_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_988_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_986_; 
v___x_977_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_978_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_950_);
v___x_979_ = lean_string_append(v___x_977_, v___x_978_);
lean_dec_ref(v___x_978_);
v___x_980_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
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
v_construct_992_ = lean_ctor_get_uint8(v_b_950_, sizeof(void*)*4);
v___x_993_ = lean_uint64_lor(v___x_989_, v___y_991_);
if (v_construct_992_ == 0)
{
uint64_t v___x_994_; 
v___x_994_ = 0ULL;
v___y_955_ = v___x_993_;
v___y_956_ = v___x_994_;
goto v___jp_954_;
}
else
{
uint64_t v___x_995_; 
v___x_995_ = 4ULL;
v___y_955_ = v___x_993_;
v___y_956_ = v___x_995_;
goto v___jp_954_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0___boxed(lean_object* v_b_998_, lean_object* v_args_999_, lean_object* v_await_1000_, lean_object* v_a_1001_){
_start:
{
uint8_t v_await_boxed_1002_; lean_object* v_res_1003_; 
v_await_boxed_1002_ = lean_unbox(v_await_1000_);
v_res_1003_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v_b_998_, v_args_999_, v_await_boxed_1002_);
lean_dec_ref(v_b_998_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_appendChild(lean_object* v_a_1010_, lean_object* v_a_1011_){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; uint8_t v___x_1020_; lean_object* v___x_1021_; 
v___x_1013_ = ((lean_object*)(l_Lasm_Web_Raw_appendChild___closed__1));
v___x_1014_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1015_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1016_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1016_, 0, v_a_1010_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = lean_array_push(v___x_1014_, v___x_1016_);
v___x_1018_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1018_, 0, v_a_1011_);
lean_ctor_set(v___x_1018_, 1, v___x_1015_);
v___x_1019_ = lean_array_push(v___x_1017_, v___x_1018_);
v___x_1020_ = 1;
v___x_1021_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1013_, v___x_1019_, v___x_1020_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_appendChild___boxed(lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lasm_Web_Raw_appendChild(v_a_1022_, v_a_1023_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_insertBefore(lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___y_1044_; 
v___x_1036_ = ((lean_object*)(l_Lasm_Web_Raw_insertBefore___closed__1));
v___x_1037_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1038_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1039_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1039_, 0, v_a_1032_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = lean_array_push(v___x_1037_, v___x_1039_);
v___x_1041_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1041_, 0, v_a_1033_);
lean_ctor_set(v___x_1041_, 1, v___x_1038_);
v___x_1042_ = lean_array_push(v___x_1040_, v___x_1041_);
if (lean_obj_tag(v_a_1034_) == 0)
{
lean_object* v___x_1048_; 
v___x_1048_ = lean_box(1);
v___y_1044_ = v___x_1048_;
goto v___jp_1043_;
}
else
{
lean_object* v_val_1049_; lean_object* v___x_1050_; 
v_val_1049_ = lean_ctor_get(v_a_1034_, 0);
lean_inc(v_val_1049_);
v___x_1050_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1050_, 0, v_val_1049_);
lean_ctor_set(v___x_1050_, 1, v___x_1038_);
v___y_1044_ = v___x_1050_;
goto v___jp_1043_;
}
v___jp_1043_:
{
lean_object* v___x_1045_; uint8_t v___x_1046_; lean_object* v___x_1047_; 
v___x_1045_ = lean_array_push(v___x_1042_, v___y_1044_);
v___x_1046_ = 1;
v___x_1047_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1036_, v___x_1045_, v___x_1046_);
return v___x_1047_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_insertBefore___boxed(lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lasm_Web_Raw_insertBefore(v_a_1051_, v_a_1052_, v_a_1053_);
lean_dec(v_a_1053_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeChild(lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; lean_object* v___x_1073_; 
v___x_1065_ = ((lean_object*)(l_Lasm_Web_Raw_removeChild___closed__1));
v___x_1066_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1067_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1068_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1068_, 0, v_a_1062_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = lean_array_push(v___x_1066_, v___x_1068_);
v___x_1070_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1070_, 0, v_a_1063_);
lean_ctor_set(v___x_1070_, 1, v___x_1067_);
v___x_1071_ = lean_array_push(v___x_1069_, v___x_1070_);
v___x_1072_ = 1;
v___x_1073_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1065_, v___x_1071_, v___x_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeChild___boxed(lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lasm_Web_Raw_removeChild(v_a_1074_, v_a_1075_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeNode(lean_object* v_a_1084_){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; uint8_t v___x_1091_; lean_object* v___x_1092_; 
v___x_1086_ = ((lean_object*)(l_Lasm_Web_Raw_removeNode___closed__1));
v___x_1087_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1088_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1089_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1089_, 0, v_a_1084_);
lean_ctor_set(v___x_1089_, 1, v___x_1088_);
v___x_1090_ = lean_array_push(v___x_1087_, v___x_1089_);
v___x_1091_ = 1;
v___x_1092_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1086_, v___x_1090_, v___x_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeNode___boxed(lean_object* v_a_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lasm_Web_Raw_removeNode(v_a_1093_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceNode(lean_object* v_a_1102_, lean_object* v_a_1103_){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; uint8_t v___x_1112_; lean_object* v___x_1113_; 
v___x_1105_ = ((lean_object*)(l_Lasm_Web_Raw_replaceNode___closed__1));
v___x_1106_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1107_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1108_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1108_, 0, v_a_1102_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
v___x_1109_ = lean_array_push(v___x_1106_, v___x_1108_);
v___x_1110_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1110_, 0, v_a_1103_);
lean_ctor_set(v___x_1110_, 1, v___x_1107_);
v___x_1111_ = lean_array_push(v___x_1109_, v___x_1110_);
v___x_1112_ = 1;
v___x_1113_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1105_, v___x_1111_, v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceNode___boxed(lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lasm_Web_Raw_replaceNode(v_a_1114_, v_a_1115_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(size_t v_sz_1118_, size_t v_i_1119_, lean_object* v_bs_1120_){
_start:
{
uint8_t v___x_1121_; 
v___x_1121_ = lean_usize_dec_lt(v_i_1119_, v_sz_1118_);
if (v___x_1121_ == 0)
{
return v_bs_1120_;
}
else
{
lean_object* v_v_1122_; lean_object* v___x_1123_; lean_object* v_bs_x27_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; size_t v___x_1127_; size_t v___x_1128_; lean_object* v___x_1129_; 
v_v_1122_ = lean_array_uget(v_bs_1120_, v_i_1119_);
v___x_1123_ = lean_unsigned_to_nat(0u);
v_bs_x27_1124_ = lean_array_uset(v_bs_1120_, v_i_1119_, v___x_1123_);
v___x_1125_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1126_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1126_, 0, v_v_1122_);
lean_ctor_set(v___x_1126_, 1, v___x_1125_);
v___x_1127_ = ((size_t)1ULL);
v___x_1128_ = lean_usize_add(v_i_1119_, v___x_1127_);
v___x_1129_ = lean_array_uset(v_bs_x27_1124_, v_i_1119_, v___x_1126_);
v_i_1119_ = v___x_1128_;
v_bs_1120_ = v___x_1129_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0___boxed(lean_object* v_sz_1131_, lean_object* v_i_1132_, lean_object* v_bs_1133_){
_start:
{
size_t v_sz_boxed_1134_; size_t v_i_boxed_1135_; lean_object* v_res_1136_; 
v_sz_boxed_1134_ = lean_unbox_usize(v_sz_1131_);
lean_dec(v_sz_1131_);
v_i_boxed_1135_ = lean_unbox_usize(v_i_1132_);
lean_dec(v_i_1132_);
v_res_1136_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(v_sz_boxed_1134_, v_i_boxed_1135_, v_bs_1133_);
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_append(lean_object* v_a_1143_, lean_object* v_a_1144_){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; size_t v_sz_1151_; size_t v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; lean_object* v___x_1157_; 
v___x_1146_ = ((lean_object*)(l_Lasm_Web_Raw_append___closed__1));
v___x_1147_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1148_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1149_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1149_, 0, v_a_1143_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = lean_array_push(v___x_1147_, v___x_1149_);
v_sz_1151_ = lean_array_size(v_a_1144_);
v___x_1152_ = ((size_t)0ULL);
v___x_1153_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(v_sz_1151_, v___x_1152_, v_a_1144_);
v___x_1154_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
v___x_1155_ = lean_array_push(v___x_1150_, v___x_1154_);
v___x_1156_ = 1;
v___x_1157_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1146_, v___x_1155_, v___x_1156_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_append___boxed(lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lasm_Web_Raw_append(v_a_1158_, v_a_1159_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceChildren(lean_object* v_a_1168_, lean_object* v_a_1169_){
_start:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; size_t v_sz_1176_; size_t v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; uint8_t v___x_1181_; lean_object* v___x_1182_; 
v___x_1171_ = ((lean_object*)(l_Lasm_Web_Raw_replaceChildren___closed__1));
v___x_1172_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1173_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1174_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1174_, 0, v_a_1168_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_1175_ = lean_array_push(v___x_1172_, v___x_1174_);
v_sz_1176_ = lean_array_size(v_a_1169_);
v___x_1177_ = ((size_t)0ULL);
v___x_1178_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(v_sz_1176_, v___x_1177_, v_a_1169_);
v___x_1179_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
v___x_1180_ = lean_array_push(v___x_1175_, v___x_1179_);
v___x_1181_ = 1;
v___x_1182_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1171_, v___x_1180_, v___x_1181_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceChildren___boxed(lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l_Lasm_Web_Raw_replaceChildren(v_a_1183_, v_a_1184_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(lean_object* v_context_1188_, lean_object* v_d_1189_){
_start:
{
lean_object* v_received_1192_; 
if (lean_obj_tag(v_d_1189_) == 4)
{
lean_object* v_s_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
v_s_1206_ = lean_ctor_get(v_d_1189_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v_d_1189_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v_d_1189_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_s_1206_);
lean_dec(v_d_1189_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
lean_ctor_set_tag(v___x_1208_, 0);
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_s_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
else
{
if (lean_obj_tag(v_d_1189_) == 9)
{
lean_object* v_value_1214_; lean_object* v_description_1215_; lean_object* v___x_1216_; uint8_t v___x_1217_; 
v_value_1214_ = lean_ctor_get(v_d_1189_, 0);
v_description_1215_ = lean_ctor_get(v_d_1189_, 1);
v___x_1216_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1217_ = lean_string_dec_eq(v_description_1215_, v___x_1216_);
if (v___x_1217_ == 0)
{
goto v___jp_1204_;
}
else
{
uint32_t v___x_1218_; uint64_t v___x_1219_; lean_object* v___x_1220_; uint32_t v___x_1221_; lean_object* v___x_1222_; 
lean_inc_n(v_value_1214_, 2);
lean_dec_ref_known(v_d_1189_, 2);
v___x_1218_ = 206;
v___x_1219_ = 0ULL;
v___x_1220_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1220_, 0, v_value_1214_);
lean_ctor_set(v___x_1220_, 1, v___x_1216_);
v___x_1221_ = lasm_js_value_handle(v_value_1214_);
lean_dec(v_value_1214_);
v___x_1222_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1218_, v___x_1219_, v___x_1220_, v___x_1221_);
if (lean_obj_tag(v___x_1222_) == 0)
{
lean_object* v_a_1223_; uint8_t v___x_1224_; 
v_a_1223_ = lean_ctor_get(v___x_1222_, 0);
lean_inc(v_a_1223_);
lean_dec_ref_known(v___x_1222_, 1);
v___x_1224_ = lean_string_validate_utf8(v_a_1223_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
lean_dec(v_a_1223_);
v___x_1225_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_1226_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1225_);
v_received_1192_ = v___x_1226_;
goto v___jp_1191_;
}
else
{
lean_object* v___x_1227_; 
v___x_1227_ = lean_string_from_utf8_unchecked(v_a_1223_);
v_received_1192_ = v___x_1227_;
goto v___jp_1191_;
}
}
else
{
lean_object* v___x_1228_; 
lean_dec_ref_known(v___x_1222_, 1);
v___x_1228_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v_received_1192_ = v___x_1228_;
goto v___jp_1191_;
}
}
}
else
{
goto v___jp_1204_;
}
}
v___jp_1191_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1193_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1194_ = lean_string_append(v___x_1193_, v_context_1188_);
v___x_1195_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1196_ = lean_string_append(v___x_1194_, v___x_1195_);
v___x_1197_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0___closed__0));
v___x_1198_ = lean_string_append(v___x_1196_, v___x_1197_);
v___x_1199_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_1200_ = lean_string_append(v___x_1198_, v___x_1199_);
v___x_1201_ = lean_string_append(v___x_1200_, v_received_1192_);
lean_dec_ref(v_received_1192_);
v___x_1202_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
v___x_1203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
return v___x_1203_;
}
v___jp_1204_:
{
lean_object* v___x_1205_; 
v___x_1205_ = l_Lasm_JS_Data_describe(v_d_1189_);
v_received_1192_ = v___x_1205_;
goto v___jp_1191_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0___boxed(lean_object* v_context_1229_, lean_object* v_d_1230_, lean_object* v_a_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(v_context_1229_, v_d_1230_);
lean_dec_ref(v_context_1229_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(lean_object* v_b_1233_, lean_object* v_args_1234_, uint8_t v_await_1235_){
_start:
{
uint64_t v___y_1238_; uint64_t v___y_1239_; uint64_t v___x_1274_; uint64_t v___y_1276_; 
v___x_1274_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_1235_ == 0)
{
uint64_t v___x_1281_; 
v___x_1281_ = 0ULL;
v___y_1276_ = v___x_1281_;
goto v___jp_1275_;
}
else
{
uint64_t v___x_1282_; 
v___x_1282_ = 2ULL;
v___y_1276_ = v___x_1282_;
goto v___jp_1275_;
}
v___jp_1237_:
{
uint64_t v_flags_1240_; uint32_t v___x_1241_; lean_object* v___x_1242_; uint32_t v___x_1243_; lean_object* v___x_1244_; 
v_flags_1240_ = lean_uint64_lor(v___y_1238_, v___y_1239_);
v___x_1241_ = 214;
v___x_1242_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1233_, v_args_1234_);
v___x_1243_ = 0;
v___x_1244_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1241_, v_flags_1240_, v___x_1242_, v___x_1243_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; lean_object* v___x_1246_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
lean_dec_ref_known(v___x_1244_, 1);
v___x_1246_ = l_Lasm_JS_Wire_decode(v_a_1245_);
lean_dec(v_a_1245_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
lean_inc(v_a_1247_);
lean_dec_ref_known(v___x_1246_, 1);
v___x_1248_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1233_);
v___x_1249_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(v___x_1248_, v_a_1247_);
lean_dec_ref(v___x_1248_);
return v___x_1249_;
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
v_a_1250_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1246_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1246_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1273_; 
v_a_1258_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1260_ = v___x_1244_;
v_isShared_1261_ = v_isSharedCheck_1273_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1244_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1273_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1271_; 
v___x_1262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1263_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1233_);
v___x_1264_ = lean_string_append(v___x_1262_, v___x_1263_);
lean_dec_ref(v___x_1263_);
v___x_1265_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1266_ = lean_string_append(v___x_1264_, v___x_1265_);
v___x_1267_ = lean_io_error_to_string(v_a_1258_);
v___x_1268_ = lean_string_append(v___x_1266_, v___x_1267_);
lean_dec_ref(v___x_1267_);
v___x_1269_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
if (v_isShared_1261_ == 0)
{
lean_ctor_set(v___x_1260_, 0, v___x_1269_);
v___x_1271_ = v___x_1260_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1269_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
v___jp_1275_:
{
uint8_t v_construct_1277_; uint64_t v___x_1278_; 
v_construct_1277_ = lean_ctor_get_uint8(v_b_1233_, sizeof(void*)*4);
v___x_1278_ = lean_uint64_lor(v___x_1274_, v___y_1276_);
if (v_construct_1277_ == 0)
{
uint64_t v___x_1279_; 
v___x_1279_ = 0ULL;
v___y_1238_ = v___x_1278_;
v___y_1239_ = v___x_1279_;
goto v___jp_1237_;
}
else
{
uint64_t v___x_1280_; 
v___x_1280_ = 4ULL;
v___y_1238_ = v___x_1278_;
v___y_1239_ = v___x_1280_;
goto v___jp_1237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0___boxed(lean_object* v_b_1283_, lean_object* v_args_1284_, lean_object* v_await_1285_, lean_object* v_a_1286_){
_start:
{
uint8_t v_await_boxed_1287_; lean_object* v_res_1288_; 
v_await_boxed_1287_ = lean_unbox(v_await_1285_);
v_res_1288_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v_b_1283_, v_args_1284_, v_await_boxed_1287_);
lean_dec_ref(v_b_1283_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getText(lean_object* v_a_1295_){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; uint8_t v___x_1302_; lean_object* v___x_1303_; 
v___x_1297_ = ((lean_object*)(l_Lasm_Web_Raw_getText___closed__1));
v___x_1298_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1299_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1300_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1300_, 0, v_a_1295_);
lean_ctor_set(v___x_1300_, 1, v___x_1299_);
v___x_1301_ = lean_array_push(v___x_1298_, v___x_1300_);
v___x_1302_ = 1;
v___x_1303_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_1297_, v___x_1301_, v___x_1302_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getText___boxed(lean_object* v_a_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lasm_Web_Raw_getText(v_a_1304_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setText(lean_object* v_a_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; uint8_t v___x_1323_; lean_object* v___x_1324_; 
v___x_1316_ = ((lean_object*)(l_Lasm_Web_Raw_setText___closed__1));
v___x_1317_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1318_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1319_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1319_, 0, v_a_1313_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = lean_array_push(v___x_1317_, v___x_1319_);
v___x_1321_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1321_, 0, v_a_1314_);
v___x_1322_ = lean_array_push(v___x_1320_, v___x_1321_);
v___x_1323_ = 1;
v___x_1324_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1316_, v___x_1322_, v___x_1323_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setText___boxed(lean_object* v_a_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Lasm_Web_Raw_setText(v_a_1325_, v_a_1326_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0(lean_object* v_context_1330_, lean_object* v_d_1331_){
_start:
{
lean_object* v_received_1337_; 
switch(lean_obj_tag(v_d_1331_))
{
case 1:
{
goto v___jp_1333_;
}
case 0:
{
goto v___jp_1333_;
}
default: 
{
if (lean_obj_tag(v_d_1331_) == 9)
{
lean_object* v_value_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v_value_1351_ = lean_ctor_get(v_d_1331_, 0);
lean_inc(v_value_1351_);
lean_dec_ref_known(v_d_1331_, 2);
v___x_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1352_, 0, v_value_1351_);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
return v___x_1353_;
}
else
{
if (lean_obj_tag(v_d_1331_) == 9)
{
lean_object* v_value_1354_; lean_object* v_description_1355_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v_value_1354_ = lean_ctor_get(v_d_1331_, 0);
v_description_1355_ = lean_ctor_get(v_d_1331_, 1);
v___x_1356_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1357_ = lean_string_dec_eq(v_description_1355_, v___x_1356_);
if (v___x_1357_ == 0)
{
goto v___jp_1349_;
}
else
{
uint32_t v___x_1358_; uint64_t v___x_1359_; lean_object* v___x_1360_; uint32_t v___x_1361_; lean_object* v___x_1362_; 
lean_inc_n(v_value_1354_, 2);
lean_dec_ref_known(v_d_1331_, 2);
v___x_1358_ = 206;
v___x_1359_ = 0ULL;
v___x_1360_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1360_, 0, v_value_1354_);
lean_ctor_set(v___x_1360_, 1, v___x_1356_);
v___x_1361_ = lasm_js_value_handle(v_value_1354_);
lean_dec(v_value_1354_);
v___x_1362_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1358_, v___x_1359_, v___x_1360_, v___x_1361_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; uint8_t v___x_1364_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
lean_inc(v_a_1363_);
lean_dec_ref_known(v___x_1362_, 1);
v___x_1364_ = lean_string_validate_utf8(v_a_1363_);
if (v___x_1364_ == 0)
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
lean_dec(v_a_1363_);
v___x_1365_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_1366_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1365_);
v_received_1337_ = v___x_1366_;
goto v___jp_1336_;
}
else
{
lean_object* v___x_1367_; 
v___x_1367_ = lean_string_from_utf8_unchecked(v_a_1363_);
v_received_1337_ = v___x_1367_;
goto v___jp_1336_;
}
}
else
{
lean_object* v___x_1368_; 
lean_dec_ref_known(v___x_1362_, 1);
v___x_1368_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v_received_1337_ = v___x_1368_;
goto v___jp_1336_;
}
}
}
else
{
goto v___jp_1349_;
}
}
}
}
v___jp_1333_:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = lean_box(0);
v___x_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
return v___x_1335_;
}
v___jp_1336_:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1338_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1339_ = lean_string_append(v___x_1338_, v_context_1330_);
v___x_1340_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1341_ = lean_string_append(v___x_1339_, v___x_1340_);
v___x_1342_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0___closed__0));
v___x_1343_ = lean_string_append(v___x_1341_, v___x_1342_);
v___x_1344_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_1345_ = lean_string_append(v___x_1343_, v___x_1344_);
v___x_1346_ = lean_string_append(v___x_1345_, v_received_1337_);
lean_dec_ref(v_received_1337_);
v___x_1347_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
v___x_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
return v___x_1348_;
}
v___jp_1349_:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lasm_JS_Data_describe(v_d_1331_);
v_received_1337_ = v___x_1350_;
goto v___jp_1336_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0___boxed(lean_object* v_context_1369_, lean_object* v_d_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0(v_context_1369_, v_d_1370_);
lean_dec_ref(v_context_1369_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(lean_object* v_b_1373_, lean_object* v_args_1374_, uint8_t v_await_1375_){
_start:
{
uint64_t v___y_1378_; uint64_t v___y_1379_; uint64_t v___x_1414_; uint64_t v___y_1416_; 
v___x_1414_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_1375_ == 0)
{
uint64_t v___x_1421_; 
v___x_1421_ = 0ULL;
v___y_1416_ = v___x_1421_;
goto v___jp_1415_;
}
else
{
uint64_t v___x_1422_; 
v___x_1422_ = 2ULL;
v___y_1416_ = v___x_1422_;
goto v___jp_1415_;
}
v___jp_1377_:
{
uint64_t v_flags_1380_; uint32_t v___x_1381_; lean_object* v___x_1382_; uint32_t v___x_1383_; lean_object* v___x_1384_; 
v_flags_1380_ = lean_uint64_lor(v___y_1378_, v___y_1379_);
v___x_1381_ = 214;
v___x_1382_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1373_, v_args_1374_);
v___x_1383_ = 0;
v___x_1384_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1381_, v_flags_1380_, v___x_1382_, v___x_1383_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v_a_1385_; lean_object* v___x_1386_; 
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_a_1385_);
lean_dec_ref_known(v___x_1384_, 1);
v___x_1386_ = l_Lasm_JS_Wire_decode(v_a_1385_);
lean_dec(v_a_1385_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
lean_inc(v_a_1387_);
lean_dec_ref_known(v___x_1386_, 1);
v___x_1388_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1373_);
v___x_1389_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0(v___x_1388_, v_a_1387_);
lean_dec_ref(v___x_1388_);
return v___x_1389_;
}
else
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
v_a_1390_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1392_ = v___x_1386_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___x_1386_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_a_1390_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
}
else
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1413_; 
v_a_1398_ = lean_ctor_get(v___x_1384_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1384_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1400_ = v___x_1384_;
v_isShared_1401_ = v_isSharedCheck_1413_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1384_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1413_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1411_; 
v___x_1402_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1403_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1373_);
v___x_1404_ = lean_string_append(v___x_1402_, v___x_1403_);
lean_dec_ref(v___x_1403_);
v___x_1405_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1406_ = lean_string_append(v___x_1404_, v___x_1405_);
v___x_1407_ = lean_io_error_to_string(v_a_1398_);
v___x_1408_ = lean_string_append(v___x_1406_, v___x_1407_);
lean_dec_ref(v___x_1407_);
v___x_1409_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1408_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v___x_1409_);
v___x_1411_ = v___x_1400_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1409_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
v___jp_1415_:
{
uint8_t v_construct_1417_; uint64_t v___x_1418_; 
v_construct_1417_ = lean_ctor_get_uint8(v_b_1373_, sizeof(void*)*4);
v___x_1418_ = lean_uint64_lor(v___x_1414_, v___y_1416_);
if (v_construct_1417_ == 0)
{
uint64_t v___x_1419_; 
v___x_1419_ = 0ULL;
v___y_1378_ = v___x_1418_;
v___y_1379_ = v___x_1419_;
goto v___jp_1377_;
}
else
{
uint64_t v___x_1420_; 
v___x_1420_ = 4ULL;
v___y_1378_ = v___x_1418_;
v___y_1379_ = v___x_1420_;
goto v___jp_1377_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0___boxed(lean_object* v_b_1423_, lean_object* v_args_1424_, lean_object* v_await_1425_, lean_object* v_a_1426_){
_start:
{
uint8_t v_await_boxed_1427_; lean_object* v_res_1428_; 
v_await_boxed_1427_ = lean_unbox(v_await_1425_);
v_res_1428_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v_b_1423_, v_args_1424_, v_await_boxed_1427_);
lean_dec_ref(v_b_1423_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentNode(lean_object* v_a_1435_){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; uint8_t v___x_1442_; lean_object* v___x_1443_; 
v___x_1437_ = ((lean_object*)(l_Lasm_Web_Raw_parentNode___closed__1));
v___x_1438_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1440_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1440_, 0, v_a_1435_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = lean_array_push(v___x_1438_, v___x_1440_);
v___x_1442_ = 1;
v___x_1443_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1437_, v___x_1441_, v___x_1442_);
return v___x_1443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentNode___boxed(lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lasm_Web_Raw_parentNode(v_a_1444_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentElement(lean_object* v_a_1453_){
_start:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; lean_object* v___x_1461_; 
v___x_1455_ = ((lean_object*)(l_Lasm_Web_Raw_parentElement___closed__1));
v___x_1456_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1457_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1458_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1458_, 0, v_a_1453_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = lean_array_push(v___x_1456_, v___x_1458_);
v___x_1460_ = 1;
v___x_1461_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(v___x_1455_, v___x_1459_, v___x_1460_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentElement___boxed(lean_object* v_a_1462_, lean_object* v_a_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_Lasm_Web_Raw_parentElement(v_a_1462_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_firstChild(lean_object* v_a_1471_){
_start:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; uint8_t v___x_1478_; lean_object* v___x_1479_; 
v___x_1473_ = ((lean_object*)(l_Lasm_Web_Raw_firstChild___closed__1));
v___x_1474_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1475_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1476_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1476_, 0, v_a_1471_);
lean_ctor_set(v___x_1476_, 1, v___x_1475_);
v___x_1477_ = lean_array_push(v___x_1474_, v___x_1476_);
v___x_1478_ = 1;
v___x_1479_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1473_, v___x_1477_, v___x_1478_);
return v___x_1479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_firstChild___boxed(lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l_Lasm_Web_Raw_firstChild(v_a_1480_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_lastChild(lean_object* v_a_1489_){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; lean_object* v___x_1497_; 
v___x_1491_ = ((lean_object*)(l_Lasm_Web_Raw_lastChild___closed__1));
v___x_1492_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1493_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1494_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1494_, 0, v_a_1489_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = lean_array_push(v___x_1492_, v___x_1494_);
v___x_1496_ = 1;
v___x_1497_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1491_, v___x_1495_, v___x_1496_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_lastChild___boxed(lean_object* v_a_1498_, lean_object* v_a_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l_Lasm_Web_Raw_lastChild(v_a_1498_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextSibling(lean_object* v_a_1507_){
_start:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; lean_object* v___x_1515_; 
v___x_1509_ = ((lean_object*)(l_Lasm_Web_Raw_nextSibling___closed__1));
v___x_1510_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1511_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1512_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1512_, 0, v_a_1507_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = lean_array_push(v___x_1510_, v___x_1512_);
v___x_1514_ = 1;
v___x_1515_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1509_, v___x_1513_, v___x_1514_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextSibling___boxed(lean_object* v_a_1516_, lean_object* v_a_1517_){
_start:
{
lean_object* v_res_1518_; 
v_res_1518_ = l_Lasm_Web_Raw_nextSibling(v_a_1516_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_previousSibling(lean_object* v_a_1525_){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; lean_object* v___x_1533_; 
v___x_1527_ = ((lean_object*)(l_Lasm_Web_Raw_previousSibling___closed__1));
v___x_1528_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1529_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1530_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1530_, 0, v_a_1525_);
lean_ctor_set(v___x_1530_, 1, v___x_1529_);
v___x_1531_ = lean_array_push(v___x_1528_, v___x_1530_);
v___x_1532_ = 1;
v___x_1533_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1527_, v___x_1531_, v___x_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_previousSibling___boxed(lean_object* v_a_1534_, lean_object* v_a_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_Lasm_Web_Raw_previousSibling(v_a_1534_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1(size_t v_sz_1537_, size_t v_i_1538_, lean_object* v_bs_1539_){
_start:
{
uint8_t v___x_1540_; 
v___x_1540_ = lean_usize_dec_lt(v_i_1538_, v_sz_1537_);
if (v___x_1540_ == 0)
{
lean_object* v___x_1541_; 
v___x_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1541_, 0, v_bs_1539_);
return v___x_1541_;
}
else
{
lean_object* v_v_1542_; 
v_v_1542_ = lean_array_uget_borrowed(v_bs_1539_, v_i_1538_);
if (lean_obj_tag(v_v_1542_) == 9)
{
lean_object* v_value_1543_; lean_object* v___x_1544_; lean_object* v_bs_x27_1545_; size_t v___x_1546_; size_t v___x_1547_; lean_object* v___x_1548_; 
v_value_1543_ = lean_ctor_get(v_v_1542_, 0);
lean_inc(v_value_1543_);
v___x_1544_ = lean_unsigned_to_nat(0u);
v_bs_x27_1545_ = lean_array_uset(v_bs_1539_, v_i_1538_, v___x_1544_);
v___x_1546_ = ((size_t)1ULL);
v___x_1547_ = lean_usize_add(v_i_1538_, v___x_1546_);
v___x_1548_ = lean_array_uset(v_bs_x27_1545_, v_i_1538_, v_value_1543_);
v_i_1538_ = v___x_1547_;
v_bs_1539_ = v___x_1548_;
goto _start;
}
else
{
lean_object* v___x_1550_; 
lean_dec_ref(v_bs_1539_);
v___x_1550_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___closed__0));
return v___x_1550_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_1551_, lean_object* v_i_1552_, lean_object* v_bs_1553_){
_start:
{
size_t v_sz_boxed_1554_; size_t v_i_boxed_1555_; lean_object* v_res_1556_; 
v_sz_boxed_1554_ = lean_unbox_usize(v_sz_1551_);
lean_dec(v_sz_1551_);
v_i_boxed_1555_ = lean_unbox_usize(v_i_1552_);
lean_dec(v_i_1552_);
v_res_1556_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1(v_sz_boxed_1554_, v_i_boxed_1555_, v_bs_1553_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0(lean_object* v_context_1559_, lean_object* v_d_1560_){
_start:
{
lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1569_; lean_object* v_received_1570_; lean_object* v___y_1589_; lean_object* v_a_1592_; 
if (lean_obj_tag(v_d_1560_) == 7)
{
lean_object* v_items_1616_; size_t v_sz_1617_; size_t v___x_1618_; lean_object* v___x_1619_; 
v_items_1616_ = lean_ctor_get(v_d_1560_, 0);
v_sz_1617_ = lean_array_size(v_items_1616_);
v___x_1618_ = ((size_t)0ULL);
lean_inc_ref(v_items_1616_);
v___x_1619_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1(v_sz_1617_, v___x_1618_, v_items_1616_);
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v_a_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; uint8_t v___x_1624_; 
v_a_1620_ = lean_ctor_get(v___x_1619_, 0);
lean_inc(v_a_1620_);
lean_dec_ref_known(v___x_1619_, 1);
v___x_1621_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__1));
v___x_1622_ = lean_string_utf8_byte_size(v_a_1620_);
v___x_1623_ = lean_unsigned_to_nat(0u);
v___x_1624_ = lean_nat_dec_eq(v___x_1622_, v___x_1623_);
if (v___x_1624_ == 0)
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1625_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1626_ = lean_string_append(v___x_1625_, v_a_1620_);
lean_dec(v_a_1620_);
v___x_1627_ = lean_string_append(v___x_1621_, v___x_1626_);
lean_dec_ref(v___x_1626_);
v_a_1592_ = v___x_1627_;
goto v___jp_1591_;
}
else
{
lean_dec(v_a_1620_);
v_a_1592_ = v___x_1621_;
goto v___jp_1591_;
}
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
lean_dec_ref_known(v_d_1560_, 1);
v_a_1628_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1619_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1619_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
lean_ctor_set_tag(v___x_1630_, 0);
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
else
{
lean_object* v___x_1636_; 
v___x_1636_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v_a_1592_ = v___x_1636_;
goto v___jp_1591_;
}
v___jp_1562_:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1565_ = lean_string_append(v___y_1563_, v___y_1564_);
lean_dec_ref(v___y_1564_);
v___x_1566_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1565_);
v___x_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1566_);
return v___x_1567_;
}
v___jp_1568_:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; uint8_t v___x_1582_; 
v___x_1571_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1572_ = lean_string_append(v___x_1571_, v_context_1559_);
v___x_1573_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1574_ = lean_string_append(v___x_1572_, v___x_1573_);
v___x_1575_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__0));
v___x_1576_ = lean_string_append(v___x_1574_, v___x_1575_);
v___x_1577_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_1578_ = lean_string_append(v___x_1576_, v___x_1577_);
v___x_1579_ = lean_string_append(v___x_1578_, v_received_1570_);
lean_dec_ref(v_received_1570_);
v___x_1580_ = lean_string_utf8_byte_size(v___y_1569_);
v___x_1581_ = lean_unsigned_to_nat(0u);
v___x_1582_ = lean_nat_dec_eq(v___x_1580_, v___x_1581_);
if (v___x_1582_ == 0)
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1583_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__1));
v___x_1584_ = lean_string_append(v___x_1583_, v___y_1569_);
lean_dec_ref(v___y_1569_);
v___x_1585_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__2));
v___x_1586_ = lean_string_append(v___x_1584_, v___x_1585_);
v___y_1563_ = v___x_1579_;
v___y_1564_ = v___x_1586_;
goto v___jp_1562_;
}
else
{
lean_object* v___x_1587_; 
lean_dec_ref(v___y_1569_);
v___x_1587_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___y_1563_ = v___x_1579_;
v___y_1564_ = v___x_1587_;
goto v___jp_1562_;
}
}
v___jp_1588_:
{
lean_object* v___x_1590_; 
v___x_1590_ = l_Lasm_JS_Data_describe(v_d_1560_);
v___y_1569_ = v___y_1589_;
v_received_1570_ = v___x_1590_;
goto v___jp_1568_;
}
v___jp_1591_:
{
if (lean_obj_tag(v_d_1560_) == 9)
{
lean_object* v_value_1593_; lean_object* v_description_1594_; lean_object* v___x_1595_; uint8_t v___x_1596_; 
v_value_1593_ = lean_ctor_get(v_d_1560_, 0);
v_description_1594_ = lean_ctor_get(v_d_1560_, 1);
v___x_1595_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1596_ = lean_string_dec_eq(v_description_1594_, v___x_1595_);
if (v___x_1596_ == 0)
{
v___y_1589_ = v_a_1592_;
goto v___jp_1588_;
}
else
{
lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1613_; 
lean_inc(v_value_1593_);
v_isSharedCheck_1613_ = !lean_is_exclusive(v_d_1560_);
if (v_isSharedCheck_1613_ == 0)
{
lean_object* v_unused_1614_; lean_object* v_unused_1615_; 
v_unused_1614_ = lean_ctor_get(v_d_1560_, 1);
lean_dec(v_unused_1614_);
v_unused_1615_ = lean_ctor_get(v_d_1560_, 0);
lean_dec(v_unused_1615_);
v___x_1598_ = v_d_1560_;
v_isShared_1599_ = v_isSharedCheck_1613_;
goto v_resetjp_1597_;
}
else
{
lean_dec(v_d_1560_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1613_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
uint32_t v___x_1600_; uint64_t v___x_1601_; lean_object* v___x_1603_; 
v___x_1600_ = 206;
v___x_1601_ = 0ULL;
lean_inc(v_value_1593_);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 1, v___x_1595_);
v___x_1603_ = v___x_1598_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_value_1593_);
lean_ctor_set(v_reuseFailAlloc_1612_, 1, v___x_1595_);
v___x_1603_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
uint32_t v___x_1604_; lean_object* v___x_1605_; 
v___x_1604_ = lasm_js_value_handle(v_value_1593_);
lean_dec(v_value_1593_);
v___x_1605_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1600_, v___x_1601_, v___x_1603_, v___x_1604_);
if (lean_obj_tag(v___x_1605_) == 0)
{
lean_object* v_a_1606_; uint8_t v___x_1607_; 
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
lean_inc(v_a_1606_);
lean_dec_ref_known(v___x_1605_, 1);
v___x_1607_ = lean_string_validate_utf8(v_a_1606_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
lean_dec(v_a_1606_);
v___x_1608_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_1609_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1608_);
v___y_1569_ = v_a_1592_;
v_received_1570_ = v___x_1609_;
goto v___jp_1568_;
}
else
{
lean_object* v___x_1610_; 
v___x_1610_ = lean_string_from_utf8_unchecked(v_a_1606_);
v___y_1569_ = v_a_1592_;
v_received_1570_ = v___x_1610_;
goto v___jp_1568_;
}
}
else
{
lean_object* v___x_1611_; 
lean_dec_ref_known(v___x_1605_, 1);
v___x_1611_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v___y_1569_ = v_a_1592_;
v_received_1570_ = v___x_1611_;
goto v___jp_1568_;
}
}
}
}
}
else
{
v___y_1589_ = v_a_1592_;
goto v___jp_1588_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___boxed(lean_object* v_context_1637_, lean_object* v_d_1638_, lean_object* v_a_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0(v_context_1637_, v_d_1638_);
lean_dec_ref(v_context_1637_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0(lean_object* v_b_1641_, lean_object* v_args_1642_, uint8_t v_await_1643_){
_start:
{
uint64_t v___y_1646_; uint64_t v___y_1647_; uint64_t v___x_1682_; uint64_t v___y_1684_; 
v___x_1682_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_1643_ == 0)
{
uint64_t v___x_1689_; 
v___x_1689_ = 0ULL;
v___y_1684_ = v___x_1689_;
goto v___jp_1683_;
}
else
{
uint64_t v___x_1690_; 
v___x_1690_ = 2ULL;
v___y_1684_ = v___x_1690_;
goto v___jp_1683_;
}
v___jp_1645_:
{
uint64_t v_flags_1648_; uint32_t v___x_1649_; lean_object* v___x_1650_; uint32_t v___x_1651_; lean_object* v___x_1652_; 
v_flags_1648_ = lean_uint64_lor(v___y_1646_, v___y_1647_);
v___x_1649_ = 214;
v___x_1650_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1641_, v_args_1642_);
v___x_1651_ = 0;
v___x_1652_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1649_, v_flags_1648_, v___x_1650_, v___x_1651_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1654_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1653_);
lean_dec_ref_known(v___x_1652_, 1);
v___x_1654_ = l_Lasm_JS_Wire_decode(v_a_1653_);
lean_dec(v_a_1653_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1641_);
v___x_1657_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0(v___x_1656_, v_a_1655_);
lean_dec_ref(v___x_1656_);
return v___x_1657_;
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
v_a_1658_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1654_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1654_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1681_; 
v_a_1666_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1668_ = v___x_1652_;
v_isShared_1669_ = v_isSharedCheck_1681_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1652_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1681_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1679_; 
v___x_1670_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1671_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1641_);
v___x_1672_ = lean_string_append(v___x_1670_, v___x_1671_);
lean_dec_ref(v___x_1671_);
v___x_1673_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1674_ = lean_string_append(v___x_1672_, v___x_1673_);
v___x_1675_ = lean_io_error_to_string(v_a_1666_);
v___x_1676_ = lean_string_append(v___x_1674_, v___x_1675_);
lean_dec_ref(v___x_1675_);
v___x_1677_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set(v___x_1668_, 0, v___x_1677_);
v___x_1679_ = v___x_1668_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
}
v___jp_1683_:
{
uint8_t v_construct_1685_; uint64_t v___x_1686_; 
v_construct_1685_ = lean_ctor_get_uint8(v_b_1641_, sizeof(void*)*4);
v___x_1686_ = lean_uint64_lor(v___x_1682_, v___y_1684_);
if (v_construct_1685_ == 0)
{
uint64_t v___x_1687_; 
v___x_1687_ = 0ULL;
v___y_1646_ = v___x_1686_;
v___y_1647_ = v___x_1687_;
goto v___jp_1645_;
}
else
{
uint64_t v___x_1688_; 
v___x_1688_ = 4ULL;
v___y_1646_ = v___x_1686_;
v___y_1647_ = v___x_1688_;
goto v___jp_1645_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0___boxed(lean_object* v_b_1691_, lean_object* v_args_1692_, lean_object* v_await_1693_, lean_object* v_a_1694_){
_start:
{
uint8_t v_await_boxed_1695_; lean_object* v_res_1696_; 
v_await_boxed_1695_ = lean_unbox(v_await_1693_);
v_res_1696_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0(v_b_1691_, v_args_1692_, v_await_boxed_1695_);
lean_dec_ref(v_b_1691_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_childNodes(lean_object* v_a_1703_){
_start:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; uint8_t v___x_1710_; lean_object* v___x_1711_; 
v___x_1705_ = ((lean_object*)(l_Lasm_Web_Raw_childNodes___closed__1));
v___x_1706_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1707_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1708_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1708_, 0, v_a_1703_);
lean_ctor_set(v___x_1708_, 1, v___x_1707_);
v___x_1709_ = lean_array_push(v___x_1706_, v___x_1708_);
v___x_1710_ = 1;
v___x_1711_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0(v___x_1705_, v___x_1709_, v___x_1710_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_childNodes___boxed(lean_object* v_a_1712_, lean_object* v_a_1713_){
_start:
{
lean_object* v_res_1714_; 
v_res_1714_ = l_Lasm_Web_Raw_childNodes(v_a_1712_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0(lean_object* v_context_1716_, lean_object* v_d_1717_){
_start:
{
lean_object* v_received_1720_; 
if (lean_obj_tag(v_d_1717_) == 2)
{
uint8_t v_b_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v_b_1734_ = lean_ctor_get_uint8(v_d_1717_, 0);
lean_dec_ref_known(v_d_1717_, 0);
v___x_1735_ = lean_box(v_b_1734_);
v___x_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
return v___x_1736_;
}
else
{
if (lean_obj_tag(v_d_1717_) == 9)
{
lean_object* v_value_1737_; lean_object* v_description_1738_; lean_object* v___x_1739_; uint8_t v___x_1740_; 
v_value_1737_ = lean_ctor_get(v_d_1717_, 0);
v_description_1738_ = lean_ctor_get(v_d_1717_, 1);
v___x_1739_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1740_ = lean_string_dec_eq(v_description_1738_, v___x_1739_);
if (v___x_1740_ == 0)
{
goto v___jp_1732_;
}
else
{
uint32_t v___x_1741_; uint64_t v___x_1742_; lean_object* v___x_1743_; uint32_t v___x_1744_; lean_object* v___x_1745_; 
lean_inc_n(v_value_1737_, 2);
lean_dec_ref_known(v_d_1717_, 2);
v___x_1741_ = 206;
v___x_1742_ = 0ULL;
v___x_1743_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1743_, 0, v_value_1737_);
lean_ctor_set(v___x_1743_, 1, v___x_1739_);
v___x_1744_ = lasm_js_value_handle(v_value_1737_);
lean_dec(v_value_1737_);
v___x_1745_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1741_, v___x_1742_, v___x_1743_, v___x_1744_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; uint8_t v___x_1747_; 
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1745_, 1);
v___x_1747_ = lean_string_validate_utf8(v_a_1746_);
if (v___x_1747_ == 0)
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
lean_dec(v_a_1746_);
v___x_1748_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_1749_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1748_);
v_received_1720_ = v___x_1749_;
goto v___jp_1719_;
}
else
{
lean_object* v___x_1750_; 
v___x_1750_ = lean_string_from_utf8_unchecked(v_a_1746_);
v_received_1720_ = v___x_1750_;
goto v___jp_1719_;
}
}
else
{
lean_object* v___x_1751_; 
lean_dec_ref_known(v___x_1745_, 1);
v___x_1751_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v_received_1720_ = v___x_1751_;
goto v___jp_1719_;
}
}
}
else
{
goto v___jp_1732_;
}
}
v___jp_1719_:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1721_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1722_ = lean_string_append(v___x_1721_, v_context_1716_);
v___x_1723_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1724_ = lean_string_append(v___x_1722_, v___x_1723_);
v___x_1725_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0___closed__0));
v___x_1726_ = lean_string_append(v___x_1724_, v___x_1725_);
v___x_1727_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_1728_ = lean_string_append(v___x_1726_, v___x_1727_);
v___x_1729_ = lean_string_append(v___x_1728_, v_received_1720_);
lean_dec_ref(v_received_1720_);
v___x_1730_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1729_);
v___x_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1730_);
return v___x_1731_;
}
v___jp_1732_:
{
lean_object* v___x_1733_; 
v___x_1733_ = l_Lasm_JS_Data_describe(v_d_1717_);
v_received_1720_ = v___x_1733_;
goto v___jp_1719_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0___boxed(lean_object* v_context_1752_, lean_object* v_d_1753_, lean_object* v_a_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0(v_context_1752_, v_d_1753_);
lean_dec_ref(v_context_1752_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(lean_object* v_b_1756_, lean_object* v_args_1757_, uint8_t v_await_1758_){
_start:
{
uint64_t v___y_1761_; uint64_t v___y_1762_; uint64_t v___x_1797_; uint64_t v___y_1799_; 
v___x_1797_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_1758_ == 0)
{
uint64_t v___x_1804_; 
v___x_1804_ = 0ULL;
v___y_1799_ = v___x_1804_;
goto v___jp_1798_;
}
else
{
uint64_t v___x_1805_; 
v___x_1805_ = 2ULL;
v___y_1799_ = v___x_1805_;
goto v___jp_1798_;
}
v___jp_1760_:
{
uint64_t v_flags_1763_; uint32_t v___x_1764_; lean_object* v___x_1765_; uint32_t v___x_1766_; lean_object* v___x_1767_; 
v_flags_1763_ = lean_uint64_lor(v___y_1761_, v___y_1762_);
v___x_1764_ = 214;
v___x_1765_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1756_, v_args_1757_);
v___x_1766_ = 0;
v___x_1767_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1764_, v_flags_1763_, v___x_1765_, v___x_1766_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; lean_object* v___x_1769_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1768_);
lean_dec_ref_known(v___x_1767_, 1);
v___x_1769_ = l_Lasm_JS_Wire_decode(v_a_1768_);
lean_dec(v_a_1768_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1770_);
lean_dec_ref_known(v___x_1769_, 1);
v___x_1771_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1756_);
v___x_1772_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0(v___x_1771_, v_a_1770_);
lean_dec_ref(v___x_1771_);
return v___x_1772_;
}
else
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1780_; 
v_a_1773_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1775_ = v___x_1769_;
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1769_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1776_ == 0)
{
v___x_1778_ = v___x_1775_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1773_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1796_; 
v_a_1781_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1783_ = v___x_1767_;
v_isShared_1784_ = v_isSharedCheck_1796_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1767_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1796_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1794_; 
v___x_1785_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1786_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1756_);
v___x_1787_ = lean_string_append(v___x_1785_, v___x_1786_);
lean_dec_ref(v___x_1786_);
v___x_1788_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1789_ = lean_string_append(v___x_1787_, v___x_1788_);
v___x_1790_ = lean_io_error_to_string(v_a_1781_);
v___x_1791_ = lean_string_append(v___x_1789_, v___x_1790_);
lean_dec_ref(v___x_1790_);
v___x_1792_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1791_);
if (v_isShared_1784_ == 0)
{
lean_ctor_set(v___x_1783_, 0, v___x_1792_);
v___x_1794_ = v___x_1783_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v___x_1792_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
}
v___jp_1798_:
{
uint8_t v_construct_1800_; uint64_t v___x_1801_; 
v_construct_1800_ = lean_ctor_get_uint8(v_b_1756_, sizeof(void*)*4);
v___x_1801_ = lean_uint64_lor(v___x_1797_, v___y_1799_);
if (v_construct_1800_ == 0)
{
uint64_t v___x_1802_; 
v___x_1802_ = 0ULL;
v___y_1761_ = v___x_1801_;
v___y_1762_ = v___x_1802_;
goto v___jp_1760_;
}
else
{
uint64_t v___x_1803_; 
v___x_1803_ = 4ULL;
v___y_1761_ = v___x_1801_;
v___y_1762_ = v___x_1803_;
goto v___jp_1760_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0___boxed(lean_object* v_b_1806_, lean_object* v_args_1807_, lean_object* v_await_1808_, lean_object* v_a_1809_){
_start:
{
uint8_t v_await_boxed_1810_; lean_object* v_res_1811_; 
v_await_boxed_1810_ = lean_unbox(v_await_1808_);
v_res_1811_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v_b_1806_, v_args_1807_, v_await_boxed_1810_);
lean_dec_ref(v_b_1806_);
return v_res_1811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_contains(lean_object* v_a_1818_, lean_object* v_a_1819_){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; uint8_t v___x_1828_; lean_object* v___x_1829_; 
v___x_1821_ = ((lean_object*)(l_Lasm_Web_Raw_contains___closed__1));
v___x_1822_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1823_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1824_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1824_, 0, v_a_1818_);
lean_ctor_set(v___x_1824_, 1, v___x_1823_);
v___x_1825_ = lean_array_push(v___x_1822_, v___x_1824_);
v___x_1826_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1826_, 0, v_a_1819_);
lean_ctor_set(v___x_1826_, 1, v___x_1823_);
v___x_1827_ = lean_array_push(v___x_1825_, v___x_1826_);
v___x_1828_ = 1;
v___x_1829_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_1821_, v___x_1827_, v___x_1828_);
return v___x_1829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_contains___boxed(lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lasm_Web_Raw_contains(v_a_1830_, v_a_1831_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0(lean_object* v_context_1835_, lean_object* v_d_1836_){
_start:
{
lean_object* v_received_1839_; 
if (lean_obj_tag(v_d_1836_) == 9)
{
lean_object* v_value_1853_; lean_object* v___x_1854_; 
v_value_1853_ = lean_ctor_get(v_d_1836_, 0);
lean_inc(v_value_1853_);
lean_dec_ref_known(v_d_1836_, 2);
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v_value_1853_);
return v___x_1854_;
}
else
{
if (lean_obj_tag(v_d_1836_) == 9)
{
lean_object* v_value_1855_; lean_object* v_description_1856_; lean_object* v___x_1857_; uint8_t v___x_1858_; 
v_value_1855_ = lean_ctor_get(v_d_1836_, 0);
v_description_1856_ = lean_ctor_get(v_d_1836_, 1);
v___x_1857_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1858_ = lean_string_dec_eq(v_description_1856_, v___x_1857_);
if (v___x_1858_ == 0)
{
goto v___jp_1851_;
}
else
{
uint32_t v___x_1859_; uint64_t v___x_1860_; lean_object* v___x_1861_; uint32_t v___x_1862_; lean_object* v___x_1863_; 
lean_inc_n(v_value_1855_, 2);
lean_dec_ref_known(v_d_1836_, 2);
v___x_1859_ = 206;
v___x_1860_ = 0ULL;
v___x_1861_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1861_, 0, v_value_1855_);
lean_ctor_set(v___x_1861_, 1, v___x_1857_);
v___x_1862_ = lasm_js_value_handle(v_value_1855_);
lean_dec(v_value_1855_);
v___x_1863_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1859_, v___x_1860_, v___x_1861_, v___x_1862_);
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; uint8_t v___x_1865_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_a_1864_);
lean_dec_ref_known(v___x_1863_, 1);
v___x_1865_ = lean_string_validate_utf8(v_a_1864_);
if (v___x_1865_ == 0)
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
lean_dec(v_a_1864_);
v___x_1866_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_1867_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1866_);
v_received_1839_ = v___x_1867_;
goto v___jp_1838_;
}
else
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_string_from_utf8_unchecked(v_a_1864_);
v_received_1839_ = v___x_1868_;
goto v___jp_1838_;
}
}
else
{
lean_object* v___x_1869_; 
lean_dec_ref_known(v___x_1863_, 1);
v___x_1869_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v_received_1839_ = v___x_1869_;
goto v___jp_1838_;
}
}
}
else
{
goto v___jp_1851_;
}
}
v___jp_1838_:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1840_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1841_ = lean_string_append(v___x_1840_, v_context_1835_);
v___x_1842_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1843_ = lean_string_append(v___x_1841_, v___x_1842_);
v___x_1844_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0___closed__0));
v___x_1845_ = lean_string_append(v___x_1843_, v___x_1844_);
v___x_1846_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_1847_ = lean_string_append(v___x_1845_, v___x_1846_);
v___x_1848_ = lean_string_append(v___x_1847_, v_received_1839_);
lean_dec_ref(v_received_1839_);
v___x_1849_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
v___x_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
return v___x_1850_;
}
v___jp_1851_:
{
lean_object* v___x_1852_; 
v___x_1852_ = l_Lasm_JS_Data_describe(v_d_1836_);
v_received_1839_ = v___x_1852_;
goto v___jp_1838_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0___boxed(lean_object* v_context_1870_, lean_object* v_d_1871_, lean_object* v_a_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0(v_context_1870_, v_d_1871_);
lean_dec_ref(v_context_1870_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0(lean_object* v_b_1874_, lean_object* v_args_1875_, uint8_t v_await_1876_){
_start:
{
uint64_t v___y_1879_; uint64_t v___y_1880_; uint64_t v___x_1915_; uint64_t v___y_1917_; 
v___x_1915_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_1876_ == 0)
{
uint64_t v___x_1922_; 
v___x_1922_ = 0ULL;
v___y_1917_ = v___x_1922_;
goto v___jp_1916_;
}
else
{
uint64_t v___x_1923_; 
v___x_1923_ = 2ULL;
v___y_1917_ = v___x_1923_;
goto v___jp_1916_;
}
v___jp_1878_:
{
uint64_t v_flags_1881_; uint32_t v___x_1882_; lean_object* v___x_1883_; uint32_t v___x_1884_; lean_object* v___x_1885_; 
v_flags_1881_ = lean_uint64_lor(v___y_1879_, v___y_1880_);
v___x_1882_ = 214;
v___x_1883_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1874_, v_args_1875_);
v___x_1884_ = 0;
v___x_1885_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1882_, v_flags_1881_, v___x_1883_, v___x_1884_);
if (lean_obj_tag(v___x_1885_) == 0)
{
lean_object* v_a_1886_; lean_object* v___x_1887_; 
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
lean_inc(v_a_1886_);
lean_dec_ref_known(v___x_1885_, 1);
v___x_1887_ = l_Lasm_JS_Wire_decode(v_a_1886_);
lean_dec(v_a_1886_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v_a_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
lean_inc(v_a_1888_);
lean_dec_ref_known(v___x_1887_, 1);
v___x_1889_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1874_);
v___x_1890_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0(v___x_1889_, v_a_1888_);
lean_dec_ref(v___x_1889_);
return v___x_1890_;
}
else
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1898_; 
v_a_1891_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1893_ = v___x_1887_;
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1887_);
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
else
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1914_; 
v_a_1899_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1901_ = v___x_1885_;
v_isShared_1902_ = v_isSharedCheck_1914_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v___x_1885_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1914_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1912_; 
v___x_1903_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1904_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1874_);
v___x_1905_ = lean_string_append(v___x_1903_, v___x_1904_);
lean_dec_ref(v___x_1904_);
v___x_1906_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1907_ = lean_string_append(v___x_1905_, v___x_1906_);
v___x_1908_ = lean_io_error_to_string(v_a_1899_);
v___x_1909_ = lean_string_append(v___x_1907_, v___x_1908_);
lean_dec_ref(v___x_1908_);
v___x_1910_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1909_);
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 0, v___x_1910_);
v___x_1912_ = v___x_1901_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v___x_1910_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
v___jp_1916_:
{
uint8_t v_construct_1918_; uint64_t v___x_1919_; 
v_construct_1918_ = lean_ctor_get_uint8(v_b_1874_, sizeof(void*)*4);
v___x_1919_ = lean_uint64_lor(v___x_1915_, v___y_1917_);
if (v_construct_1918_ == 0)
{
uint64_t v___x_1920_; 
v___x_1920_ = 0ULL;
v___y_1879_ = v___x_1919_;
v___y_1880_ = v___x_1920_;
goto v___jp_1878_;
}
else
{
uint64_t v___x_1921_; 
v___x_1921_ = 4ULL;
v___y_1879_ = v___x_1919_;
v___y_1880_ = v___x_1921_;
goto v___jp_1878_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0___boxed(lean_object* v_b_1924_, lean_object* v_args_1925_, lean_object* v_await_1926_, lean_object* v_a_1927_){
_start:
{
uint8_t v_await_boxed_1928_; lean_object* v_res_1929_; 
v_await_boxed_1928_ = lean_unbox(v_await_1926_);
v_res_1929_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0(v_b_1924_, v_args_1925_, v_await_boxed_1928_);
lean_dec_ref(v_b_1924_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cloneNode(lean_object* v_a_1936_, uint8_t v_a_1937_){
_start:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; uint8_t v___x_1946_; lean_object* v___x_1947_; 
v___x_1939_ = ((lean_object*)(l_Lasm_Web_Raw_cloneNode___closed__1));
v___x_1940_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1941_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1942_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1942_, 0, v_a_1936_);
lean_ctor_set(v___x_1942_, 1, v___x_1941_);
v___x_1943_ = lean_array_push(v___x_1940_, v___x_1942_);
v___x_1944_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1944_, 0, v_a_1937_);
v___x_1945_ = lean_array_push(v___x_1943_, v___x_1944_);
v___x_1946_ = 1;
v___x_1947_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0(v___x_1939_, v___x_1945_, v___x_1946_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cloneNode___boxed(lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_){
_start:
{
uint8_t v_a_700__boxed_1951_; lean_object* v_res_1952_; 
v_a_700__boxed_1951_ = lean_unbox(v_a_1949_);
v_res_1952_ = l_Lasm_Web_Raw_cloneNode(v_a_1948_, v_a_700__boxed_1951_);
return v_res_1952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_isConnected(lean_object* v_a_1959_){
_start:
{
lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; uint8_t v___x_1966_; lean_object* v___x_1967_; 
v___x_1961_ = ((lean_object*)(l_Lasm_Web_Raw_isConnected___closed__1));
v___x_1962_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1963_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1964_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1964_, 0, v_a_1959_);
lean_ctor_set(v___x_1964_, 1, v___x_1963_);
v___x_1965_ = lean_array_push(v___x_1962_, v___x_1964_);
v___x_1966_ = 1;
v___x_1967_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_1961_, v___x_1965_, v___x_1966_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_isConnected___boxed(lean_object* v_a_1968_, lean_object* v_a_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_Lasm_Web_Raw_isConnected(v_a_1968_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nodeName(lean_object* v_a_1977_){
_start:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; uint8_t v___x_1984_; lean_object* v___x_1985_; 
v___x_1979_ = ((lean_object*)(l_Lasm_Web_Raw_nodeName___closed__1));
v___x_1980_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1981_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1982_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1982_, 0, v_a_1977_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
v___x_1983_ = lean_array_push(v___x_1980_, v___x_1982_);
v___x_1984_ = 1;
v___x_1985_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_1979_, v___x_1983_, v___x_1984_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nodeName___boxed(lean_object* v_a_1986_, lean_object* v_a_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l_Lasm_Web_Raw_nodeName(v_a_1986_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_tagName(lean_object* v_a_1995_){
_start:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; uint8_t v___x_2002_; lean_object* v___x_2003_; 
v___x_1997_ = ((lean_object*)(l_Lasm_Web_Raw_tagName___closed__1));
v___x_1998_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1999_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2000_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2000_, 0, v_a_1995_);
lean_ctor_set(v___x_2000_, 1, v___x_1999_);
v___x_2001_ = lean_array_push(v___x_1998_, v___x_2000_);
v___x_2002_ = 1;
v___x_2003_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_1997_, v___x_2001_, v___x_2002_);
return v___x_2003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_tagName___boxed(lean_object* v_a_2004_, lean_object* v_a_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l_Lasm_Web_Raw_tagName(v_a_2004_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_children(lean_object* v_a_2013_){
_start:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; lean_object* v___x_2021_; 
v___x_2015_ = ((lean_object*)(l_Lasm_Web_Raw_children___closed__1));
v___x_2016_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2017_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2018_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2018_, 0, v_a_2013_);
lean_ctor_set(v___x_2018_, 1, v___x_2017_);
v___x_2019_ = lean_array_push(v___x_2016_, v___x_2018_);
v___x_2020_ = 1;
v___x_2021_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0(v___x_2015_, v___x_2019_, v___x_2020_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_children___boxed(lean_object* v_a_2022_, lean_object* v_a_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l_Lasm_Web_Raw_children(v_a_2022_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0(lean_object* v_context_2026_, lean_object* v_d_2027_){
_start:
{
lean_object* v_received_2033_; 
switch(lean_obj_tag(v_d_2027_))
{
case 1:
{
goto v___jp_2029_;
}
case 0:
{
goto v___jp_2029_;
}
default: 
{
if (lean_obj_tag(v_d_2027_) == 4)
{
lean_object* v_s_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; 
v_s_2047_ = lean_ctor_get(v_d_2027_, 0);
lean_inc_ref(v_s_2047_);
lean_dec_ref_known(v_d_2027_, 1);
v___x_2048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2048_, 0, v_s_2047_);
v___x_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2048_);
return v___x_2049_;
}
else
{
if (lean_obj_tag(v_d_2027_) == 9)
{
lean_object* v_value_2050_; lean_object* v_description_2051_; lean_object* v___x_2052_; uint8_t v___x_2053_; 
v_value_2050_ = lean_ctor_get(v_d_2027_, 0);
v_description_2051_ = lean_ctor_get(v_d_2027_, 1);
v___x_2052_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2053_ = lean_string_dec_eq(v_description_2051_, v___x_2052_);
if (v___x_2053_ == 0)
{
goto v___jp_2045_;
}
else
{
uint32_t v___x_2054_; uint64_t v___x_2055_; lean_object* v___x_2056_; uint32_t v___x_2057_; lean_object* v___x_2058_; 
lean_inc_n(v_value_2050_, 2);
lean_dec_ref_known(v_d_2027_, 2);
v___x_2054_ = 206;
v___x_2055_ = 0ULL;
v___x_2056_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2056_, 0, v_value_2050_);
lean_ctor_set(v___x_2056_, 1, v___x_2052_);
v___x_2057_ = lasm_js_value_handle(v_value_2050_);
lean_dec(v_value_2050_);
v___x_2058_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2054_, v___x_2055_, v___x_2056_, v___x_2057_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; uint8_t v___x_2060_; 
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2059_);
lean_dec_ref_known(v___x_2058_, 1);
v___x_2060_ = lean_string_validate_utf8(v_a_2059_);
if (v___x_2060_ == 0)
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
lean_dec(v_a_2059_);
v___x_2061_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_2062_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2061_);
v_received_2033_ = v___x_2062_;
goto v___jp_2032_;
}
else
{
lean_object* v___x_2063_; 
v___x_2063_ = lean_string_from_utf8_unchecked(v_a_2059_);
v_received_2033_ = v___x_2063_;
goto v___jp_2032_;
}
}
else
{
lean_object* v___x_2064_; 
lean_dec_ref_known(v___x_2058_, 1);
v___x_2064_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v_received_2033_ = v___x_2064_;
goto v___jp_2032_;
}
}
}
else
{
goto v___jp_2045_;
}
}
}
}
v___jp_2029_:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = lean_box(0);
v___x_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2031_, 0, v___x_2030_);
return v___x_2031_;
}
v___jp_2032_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2034_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2035_ = lean_string_append(v___x_2034_, v_context_2026_);
v___x_2036_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_2037_ = lean_string_append(v___x_2035_, v___x_2036_);
v___x_2038_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0___closed__0));
v___x_2039_ = lean_string_append(v___x_2037_, v___x_2038_);
v___x_2040_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_2041_ = lean_string_append(v___x_2039_, v___x_2040_);
v___x_2042_ = lean_string_append(v___x_2041_, v_received_2033_);
lean_dec_ref(v_received_2033_);
v___x_2043_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
v___x_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2043_);
return v___x_2044_;
}
v___jp_2045_:
{
lean_object* v___x_2046_; 
v___x_2046_ = l_Lasm_JS_Data_describe(v_d_2027_);
v_received_2033_ = v___x_2046_;
goto v___jp_2032_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0___boxed(lean_object* v_context_2065_, lean_object* v_d_2066_, lean_object* v_a_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0(v_context_2065_, v_d_2066_);
lean_dec_ref(v_context_2065_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0(lean_object* v_b_2069_, lean_object* v_args_2070_, uint8_t v_await_2071_){
_start:
{
uint64_t v___y_2074_; uint64_t v___y_2075_; uint64_t v___x_2110_; uint64_t v___y_2112_; 
v___x_2110_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_2071_ == 0)
{
uint64_t v___x_2117_; 
v___x_2117_ = 0ULL;
v___y_2112_ = v___x_2117_;
goto v___jp_2111_;
}
else
{
uint64_t v___x_2118_; 
v___x_2118_ = 2ULL;
v___y_2112_ = v___x_2118_;
goto v___jp_2111_;
}
v___jp_2073_:
{
uint64_t v_flags_2076_; uint32_t v___x_2077_; lean_object* v___x_2078_; uint32_t v___x_2079_; lean_object* v___x_2080_; 
v_flags_2076_ = lean_uint64_lor(v___y_2074_, v___y_2075_);
v___x_2077_ = 214;
v___x_2078_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2069_, v_args_2070_);
v___x_2079_ = 0;
v___x_2080_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2077_, v_flags_2076_, v___x_2078_, v___x_2079_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v_a_2081_; lean_object* v___x_2082_; 
v_a_2081_ = lean_ctor_get(v___x_2080_, 0);
lean_inc(v_a_2081_);
lean_dec_ref_known(v___x_2080_, 1);
v___x_2082_ = l_Lasm_JS_Wire_decode(v_a_2081_);
lean_dec(v_a_2081_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_a_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
lean_inc(v_a_2083_);
lean_dec_ref_known(v___x_2082_, 1);
v___x_2084_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2069_);
v___x_2085_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0(v___x_2084_, v_a_2083_);
lean_dec_ref(v___x_2084_);
return v___x_2085_;
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
v_a_2086_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2082_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2082_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
else
{
lean_object* v_a_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2109_; 
v_a_2094_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2096_ = v___x_2080_;
v_isShared_2097_ = v_isSharedCheck_2109_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_a_2094_);
lean_dec(v___x_2080_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2109_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2107_; 
v___x_2098_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2099_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2069_);
v___x_2100_ = lean_string_append(v___x_2098_, v___x_2099_);
lean_dec_ref(v___x_2099_);
v___x_2101_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_2102_ = lean_string_append(v___x_2100_, v___x_2101_);
v___x_2103_ = lean_io_error_to_string(v_a_2094_);
v___x_2104_ = lean_string_append(v___x_2102_, v___x_2103_);
lean_dec_ref(v___x_2103_);
v___x_2105_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2104_);
if (v_isShared_2097_ == 0)
{
lean_ctor_set(v___x_2096_, 0, v___x_2105_);
v___x_2107_ = v___x_2096_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v___x_2105_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
v___jp_2111_:
{
uint8_t v_construct_2113_; uint64_t v___x_2114_; 
v_construct_2113_ = lean_ctor_get_uint8(v_b_2069_, sizeof(void*)*4);
v___x_2114_ = lean_uint64_lor(v___x_2110_, v___y_2112_);
if (v_construct_2113_ == 0)
{
uint64_t v___x_2115_; 
v___x_2115_ = 0ULL;
v___y_2074_ = v___x_2114_;
v___y_2075_ = v___x_2115_;
goto v___jp_2073_;
}
else
{
uint64_t v___x_2116_; 
v___x_2116_ = 4ULL;
v___y_2074_ = v___x_2114_;
v___y_2075_ = v___x_2116_;
goto v___jp_2073_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0___boxed(lean_object* v_b_2119_, lean_object* v_args_2120_, lean_object* v_await_2121_, lean_object* v_a_2122_){
_start:
{
uint8_t v_await_boxed_2123_; lean_object* v_res_2124_; 
v_await_boxed_2123_ = lean_unbox(v_await_2121_);
v_res_2124_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0(v_b_2119_, v_args_2120_, v_await_boxed_2123_);
lean_dec_ref(v_b_2119_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getAttribute(lean_object* v_a_2131_, lean_object* v_a_2132_){
_start:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; uint8_t v___x_2141_; lean_object* v___x_2142_; 
v___x_2134_ = ((lean_object*)(l_Lasm_Web_Raw_getAttribute___closed__1));
v___x_2135_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2136_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2137_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2137_, 0, v_a_2131_);
lean_ctor_set(v___x_2137_, 1, v___x_2136_);
v___x_2138_ = lean_array_push(v___x_2135_, v___x_2137_);
v___x_2139_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2139_, 0, v_a_2132_);
v___x_2140_ = lean_array_push(v___x_2138_, v___x_2139_);
v___x_2141_ = 1;
v___x_2142_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0(v___x_2134_, v___x_2140_, v___x_2141_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getAttribute___boxed(lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_){
_start:
{
lean_object* v_res_2146_; 
v_res_2146_ = l_Lasm_Web_Raw_getAttribute(v_a_2143_, v_a_2144_);
return v_res_2146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttribute(lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_){
_start:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; uint8_t v___x_2166_; lean_object* v___x_2167_; 
v___x_2157_ = ((lean_object*)(l_Lasm_Web_Raw_setAttribute___closed__1));
v___x_2158_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2159_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2160_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2160_, 0, v_a_2153_);
lean_ctor_set(v___x_2160_, 1, v___x_2159_);
v___x_2161_ = lean_array_push(v___x_2158_, v___x_2160_);
v___x_2162_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2162_, 0, v_a_2154_);
v___x_2163_ = lean_array_push(v___x_2161_, v___x_2162_);
v___x_2164_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2164_, 0, v_a_2155_);
v___x_2165_ = lean_array_push(v___x_2163_, v___x_2164_);
v___x_2166_ = 1;
v___x_2167_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2157_, v___x_2165_, v___x_2166_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttribute___boxed(lean_object* v_a_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Lasm_Web_Raw_setAttribute(v_a_2168_, v_a_2169_, v_a_2170_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(size_t v_sz_2173_, size_t v_i_2174_, lean_object* v_bs_2175_){
_start:
{
uint8_t v___x_2176_; 
v___x_2176_ = lean_usize_dec_lt(v_i_2174_, v_sz_2173_);
if (v___x_2176_ == 0)
{
return v_bs_2175_;
}
else
{
lean_object* v_v_2177_; lean_object* v_fst_2178_; lean_object* v_snd_2179_; lean_object* v___x_2180_; lean_object* v_bs_x27_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; size_t v___x_2189_; size_t v___x_2190_; lean_object* v___x_2191_; 
v_v_2177_ = lean_array_uget_borrowed(v_bs_2175_, v_i_2174_);
v_fst_2178_ = lean_ctor_get(v_v_2177_, 0);
lean_inc(v_fst_2178_);
v_snd_2179_ = lean_ctor_get(v_v_2177_, 1);
lean_inc(v_snd_2179_);
v___x_2180_ = lean_unsigned_to_nat(0u);
v_bs_x27_2181_ = lean_array_uset(v_bs_2175_, v_i_2174_, v___x_2180_);
v___x_2182_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2182_, 0, v_fst_2178_);
v___x_2183_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2183_, 0, v_snd_2179_);
v___x_2184_ = lean_unsigned_to_nat(2u);
v___x_2185_ = lean_mk_empty_array_with_capacity(v___x_2184_);
v___x_2186_ = lean_array_push(v___x_2185_, v___x_2182_);
v___x_2187_ = lean_array_push(v___x_2186_, v___x_2183_);
v___x_2188_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2187_);
v___x_2189_ = ((size_t)1ULL);
v___x_2190_ = lean_usize_add(v_i_2174_, v___x_2189_);
v___x_2191_ = lean_array_uset(v_bs_x27_2181_, v_i_2174_, v___x_2188_);
v_i_2174_ = v___x_2190_;
v_bs_2175_ = v___x_2191_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0___boxed(lean_object* v_sz_2193_, lean_object* v_i_2194_, lean_object* v_bs_2195_){
_start:
{
size_t v_sz_boxed_2196_; size_t v_i_boxed_2197_; lean_object* v_res_2198_; 
v_sz_boxed_2196_ = lean_unbox_usize(v_sz_2193_);
lean_dec(v_sz_2193_);
v_i_boxed_2197_ = lean_unbox_usize(v_i_2194_);
lean_dec(v_i_2194_);
v_res_2198_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(v_sz_boxed_2196_, v_i_boxed_2197_, v_bs_2195_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttributes(lean_object* v_a_2205_, lean_object* v_a_2206_){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; size_t v_sz_2213_; size_t v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; uint8_t v___x_2218_; lean_object* v___x_2219_; 
v___x_2208_ = ((lean_object*)(l_Lasm_Web_Raw_setAttributes___closed__1));
v___x_2209_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2210_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2211_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2211_, 0, v_a_2205_);
lean_ctor_set(v___x_2211_, 1, v___x_2210_);
v___x_2212_ = lean_array_push(v___x_2209_, v___x_2211_);
v_sz_2213_ = lean_array_size(v_a_2206_);
v___x_2214_ = ((size_t)0ULL);
v___x_2215_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(v_sz_2213_, v___x_2214_, v_a_2206_);
v___x_2216_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
v___x_2217_ = lean_array_push(v___x_2212_, v___x_2216_);
v___x_2218_ = 1;
v___x_2219_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2208_, v___x_2217_, v___x_2218_);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttributes___boxed(lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l_Lasm_Web_Raw_setAttributes(v_a_2220_, v_a_2221_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeAttribute(lean_object* v_a_2230_, lean_object* v_a_2231_){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; uint8_t v___x_2240_; lean_object* v___x_2241_; 
v___x_2233_ = ((lean_object*)(l_Lasm_Web_Raw_removeAttribute___closed__1));
v___x_2234_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2235_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2236_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2236_, 0, v_a_2230_);
lean_ctor_set(v___x_2236_, 1, v___x_2235_);
v___x_2237_ = lean_array_push(v___x_2234_, v___x_2236_);
v___x_2238_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2238_, 0, v_a_2231_);
v___x_2239_ = lean_array_push(v___x_2237_, v___x_2238_);
v___x_2240_ = 1;
v___x_2241_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2233_, v___x_2239_, v___x_2240_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeAttribute___boxed(lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l_Lasm_Web_Raw_removeAttribute(v_a_2242_, v_a_2243_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_hasAttribute(lean_object* v_a_2252_, lean_object* v_a_2253_){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; uint8_t v___x_2262_; lean_object* v___x_2263_; 
v___x_2255_ = ((lean_object*)(l_Lasm_Web_Raw_hasAttribute___closed__1));
v___x_2256_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2257_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2258_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2258_, 0, v_a_2252_);
lean_ctor_set(v___x_2258_, 1, v___x_2257_);
v___x_2259_ = lean_array_push(v___x_2256_, v___x_2258_);
v___x_2260_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2260_, 0, v_a_2253_);
v___x_2261_ = lean_array_push(v___x_2259_, v___x_2260_);
v___x_2262_ = 1;
v___x_2263_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2255_, v___x_2261_, v___x_2262_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_hasAttribute___boxed(lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l_Lasm_Web_Raw_hasAttribute(v_a_2264_, v_a_2265_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_toggleAttribute(lean_object* v_a_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_){
_start:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___y_2286_; 
v___x_2278_ = ((lean_object*)(l_Lasm_Web_Raw_toggleAttribute___closed__1));
v___x_2279_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2280_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2281_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2281_, 0, v_a_2274_);
lean_ctor_set(v___x_2281_, 1, v___x_2280_);
v___x_2282_ = lean_array_push(v___x_2279_, v___x_2281_);
v___x_2283_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2283_, 0, v_a_2275_);
v___x_2284_ = lean_array_push(v___x_2282_, v___x_2283_);
if (lean_obj_tag(v_a_2276_) == 0)
{
lean_object* v___x_2290_; 
v___x_2290_ = lean_box(1);
v___y_2286_ = v___x_2290_;
goto v___jp_2285_;
}
else
{
lean_object* v_val_2291_; lean_object* v___x_2292_; uint8_t v___x_2293_; 
v_val_2291_ = lean_ctor_get(v_a_2276_, 0);
v___x_2292_ = lean_alloc_ctor(2, 0, 1);
v___x_2293_ = lean_unbox(v_val_2291_);
lean_ctor_set_uint8(v___x_2292_, 0, v___x_2293_);
v___y_2286_ = v___x_2292_;
goto v___jp_2285_;
}
v___jp_2285_:
{
lean_object* v___x_2287_; uint8_t v___x_2288_; lean_object* v___x_2289_; 
v___x_2287_ = lean_array_push(v___x_2284_, v___y_2286_);
v___x_2288_ = 1;
v___x_2289_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2278_, v___x_2287_, v___x_2288_);
return v___x_2289_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_toggleAttribute___boxed(lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_){
_start:
{
lean_object* v_res_2298_; 
v_res_2298_ = l_Lasm_Web_Raw_toggleAttribute(v_a_2294_, v_a_2295_, v_a_2296_);
lean_dec(v_a_2296_);
return v_res_2298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(size_t v_sz_2299_, size_t v_i_2300_, lean_object* v_bs_2301_){
_start:
{
uint8_t v___x_2302_; 
v___x_2302_ = lean_usize_dec_lt(v_i_2300_, v_sz_2299_);
if (v___x_2302_ == 0)
{
return v_bs_2301_;
}
else
{
lean_object* v_v_2303_; lean_object* v___x_2304_; lean_object* v_bs_x27_2305_; lean_object* v___x_2306_; size_t v___x_2307_; size_t v___x_2308_; lean_object* v___x_2309_; 
v_v_2303_ = lean_array_uget(v_bs_2301_, v_i_2300_);
v___x_2304_ = lean_unsigned_to_nat(0u);
v_bs_x27_2305_ = lean_array_uset(v_bs_2301_, v_i_2300_, v___x_2304_);
v___x_2306_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2306_, 0, v_v_2303_);
v___x_2307_ = ((size_t)1ULL);
v___x_2308_ = lean_usize_add(v_i_2300_, v___x_2307_);
v___x_2309_ = lean_array_uset(v_bs_x27_2305_, v_i_2300_, v___x_2306_);
v_i_2300_ = v___x_2308_;
v_bs_2301_ = v___x_2309_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0___boxed(lean_object* v_sz_2311_, lean_object* v_i_2312_, lean_object* v_bs_2313_){
_start:
{
size_t v_sz_boxed_2314_; size_t v_i_boxed_2315_; lean_object* v_res_2316_; 
v_sz_boxed_2314_ = lean_unbox_usize(v_sz_2311_);
lean_dec(v_sz_2311_);
v_i_boxed_2315_ = lean_unbox_usize(v_i_2312_);
lean_dec(v_i_2312_);
v_res_2316_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(v_sz_boxed_2314_, v_i_boxed_2315_, v_bs_2313_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classAdd(lean_object* v_a_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; size_t v_sz_2331_; size_t v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; uint8_t v___x_2336_; lean_object* v___x_2337_; 
v___x_2326_ = ((lean_object*)(l_Lasm_Web_Raw_classAdd___closed__1));
v___x_2327_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2328_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2329_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2329_, 0, v_a_2323_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
v___x_2330_ = lean_array_push(v___x_2327_, v___x_2329_);
v_sz_2331_ = lean_array_size(v_a_2324_);
v___x_2332_ = ((size_t)0ULL);
v___x_2333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(v_sz_2331_, v___x_2332_, v_a_2324_);
v___x_2334_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2333_);
v___x_2335_ = lean_array_push(v___x_2330_, v___x_2334_);
v___x_2336_ = 1;
v___x_2337_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2326_, v___x_2335_, v___x_2336_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classAdd___boxed(lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_){
_start:
{
lean_object* v_res_2341_; 
v_res_2341_ = l_Lasm_Web_Raw_classAdd(v_a_2338_, v_a_2339_);
return v_res_2341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classRemove(lean_object* v_a_2348_, lean_object* v_a_2349_){
_start:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; size_t v_sz_2356_; size_t v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; uint8_t v___x_2361_; lean_object* v___x_2362_; 
v___x_2351_ = ((lean_object*)(l_Lasm_Web_Raw_classRemove___closed__1));
v___x_2352_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2353_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2354_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2354_, 0, v_a_2348_);
lean_ctor_set(v___x_2354_, 1, v___x_2353_);
v___x_2355_ = lean_array_push(v___x_2352_, v___x_2354_);
v_sz_2356_ = lean_array_size(v_a_2349_);
v___x_2357_ = ((size_t)0ULL);
v___x_2358_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(v_sz_2356_, v___x_2357_, v_a_2349_);
v___x_2359_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2358_);
v___x_2360_ = lean_array_push(v___x_2355_, v___x_2359_);
v___x_2361_ = 1;
v___x_2362_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2351_, v___x_2360_, v___x_2361_);
return v___x_2362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classRemove___boxed(lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l_Lasm_Web_Raw_classRemove(v_a_2363_, v_a_2364_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classToggle(lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_){
_start:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___y_2385_; 
v___x_2377_ = ((lean_object*)(l_Lasm_Web_Raw_classToggle___closed__1));
v___x_2378_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2379_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2380_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2380_, 0, v_a_2373_);
lean_ctor_set(v___x_2380_, 1, v___x_2379_);
v___x_2381_ = lean_array_push(v___x_2378_, v___x_2380_);
v___x_2382_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2382_, 0, v_a_2374_);
v___x_2383_ = lean_array_push(v___x_2381_, v___x_2382_);
if (lean_obj_tag(v_a_2375_) == 0)
{
lean_object* v___x_2389_; 
v___x_2389_ = lean_box(1);
v___y_2385_ = v___x_2389_;
goto v___jp_2384_;
}
else
{
lean_object* v_val_2390_; lean_object* v___x_2391_; uint8_t v___x_2392_; 
v_val_2390_ = lean_ctor_get(v_a_2375_, 0);
v___x_2391_ = lean_alloc_ctor(2, 0, 1);
v___x_2392_ = lean_unbox(v_val_2390_);
lean_ctor_set_uint8(v___x_2391_, 0, v___x_2392_);
v___y_2385_ = v___x_2391_;
goto v___jp_2384_;
}
v___jp_2384_:
{
lean_object* v___x_2386_; uint8_t v___x_2387_; lean_object* v___x_2388_; 
v___x_2386_ = lean_array_push(v___x_2383_, v___y_2385_);
v___x_2387_ = 1;
v___x_2388_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2377_, v___x_2386_, v___x_2387_);
return v___x_2388_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classToggle___boxed(lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_){
_start:
{
lean_object* v_res_2397_; 
v_res_2397_ = l_Lasm_Web_Raw_classToggle(v_a_2393_, v_a_2394_, v_a_2395_);
lean_dec(v_a_2395_);
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classContains(lean_object* v_a_2404_, lean_object* v_a_2405_){
_start:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; uint8_t v___x_2414_; lean_object* v___x_2415_; 
v___x_2407_ = ((lean_object*)(l_Lasm_Web_Raw_classContains___closed__1));
v___x_2408_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2410_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2410_, 0, v_a_2404_);
lean_ctor_set(v___x_2410_, 1, v___x_2409_);
v___x_2411_ = lean_array_push(v___x_2408_, v___x_2410_);
v___x_2412_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2412_, 0, v_a_2405_);
v___x_2413_ = lean_array_push(v___x_2411_, v___x_2412_);
v___x_2414_ = 1;
v___x_2415_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2407_, v___x_2413_, v___x_2414_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classContains___boxed(lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Lasm_Web_Raw_classContains(v_a_2416_, v_a_2417_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setStyles(lean_object* v_a_2426_, lean_object* v_a_2427_){
_start:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; size_t v_sz_2434_; size_t v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; uint8_t v___x_2439_; lean_object* v___x_2440_; 
v___x_2429_ = ((lean_object*)(l_Lasm_Web_Raw_setStyles___closed__1));
v___x_2430_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2431_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2432_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2432_, 0, v_a_2426_);
lean_ctor_set(v___x_2432_, 1, v___x_2431_);
v___x_2433_ = lean_array_push(v___x_2430_, v___x_2432_);
v_sz_2434_ = lean_array_size(v_a_2427_);
v___x_2435_ = ((size_t)0ULL);
v___x_2436_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(v_sz_2434_, v___x_2435_, v_a_2427_);
v___x_2437_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2437_, 0, v___x_2436_);
v___x_2438_ = lean_array_push(v___x_2433_, v___x_2437_);
v___x_2439_ = 1;
v___x_2440_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2429_, v___x_2438_, v___x_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setStyles___boxed(lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lasm_Web_Raw_setStyles(v_a_2441_, v_a_2442_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeStyle(lean_object* v_a_2451_, lean_object* v_a_2452_){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; uint8_t v___x_2461_; lean_object* v___x_2462_; 
v___x_2454_ = ((lean_object*)(l_Lasm_Web_Raw_removeStyle___closed__1));
v___x_2455_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2456_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2457_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2457_, 0, v_a_2451_);
lean_ctor_set(v___x_2457_, 1, v___x_2456_);
v___x_2458_ = lean_array_push(v___x_2455_, v___x_2457_);
v___x_2459_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2459_, 0, v_a_2452_);
v___x_2460_ = lean_array_push(v___x_2458_, v___x_2459_);
v___x_2461_ = 1;
v___x_2462_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2454_, v___x_2460_, v___x_2461_);
return v___x_2462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeStyle___boxed(lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_Lasm_Web_Raw_removeStyle(v_a_2463_, v_a_2464_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_style(lean_object* v_a_2473_, lean_object* v_a_2474_){
_start:
{
lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; uint8_t v___x_2483_; lean_object* v___x_2484_; 
v___x_2476_ = ((lean_object*)(l_Lasm_Web_Raw_style___closed__1));
v___x_2477_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2478_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2479_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2479_, 0, v_a_2473_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
v___x_2480_ = lean_array_push(v___x_2477_, v___x_2479_);
v___x_2481_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2481_, 0, v_a_2474_);
v___x_2482_ = lean_array_push(v___x_2480_, v___x_2481_);
v___x_2483_ = 1;
v___x_2484_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2476_, v___x_2482_, v___x_2483_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_style___boxed(lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_){
_start:
{
lean_object* v_res_2488_; 
v_res_2488_ = l_Lasm_Web_Raw_style(v_a_2485_, v_a_2486_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getInnerHTML(lean_object* v_a_2495_){
_start:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; uint8_t v___x_2502_; lean_object* v___x_2503_; 
v___x_2497_ = ((lean_object*)(l_Lasm_Web_Raw_getInnerHTML___closed__1));
v___x_2498_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2499_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2500_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2500_, 0, v_a_2495_);
lean_ctor_set(v___x_2500_, 1, v___x_2499_);
v___x_2501_ = lean_array_push(v___x_2498_, v___x_2500_);
v___x_2502_ = 1;
v___x_2503_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2497_, v___x_2501_, v___x_2502_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getInnerHTML___boxed(lean_object* v_a_2504_, lean_object* v_a_2505_){
_start:
{
lean_object* v_res_2506_; 
v_res_2506_ = l_Lasm_Web_Raw_getInnerHTML(v_a_2504_);
return v_res_2506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInnerHTML(lean_object* v_a_2513_, lean_object* v_a_2514_){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; uint8_t v___x_2523_; lean_object* v___x_2524_; 
v___x_2516_ = ((lean_object*)(l_Lasm_Web_Raw_setInnerHTML___closed__1));
v___x_2517_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2518_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2519_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2519_, 0, v_a_2513_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
v___x_2520_ = lean_array_push(v___x_2517_, v___x_2519_);
v___x_2521_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2521_, 0, v_a_2514_);
v___x_2522_ = lean_array_push(v___x_2520_, v___x_2521_);
v___x_2523_ = 1;
v___x_2524_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2516_, v___x_2522_, v___x_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInnerHTML___boxed(lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l_Lasm_Web_Raw_setInnerHTML(v_a_2525_, v_a_2526_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getValue(lean_object* v_a_2535_){
_start:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; lean_object* v___x_2543_; 
v___x_2537_ = ((lean_object*)(l_Lasm_Web_Raw_getValue___closed__1));
v___x_2538_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2539_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2540_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2540_, 0, v_a_2535_);
lean_ctor_set(v___x_2540_, 1, v___x_2539_);
v___x_2541_ = lean_array_push(v___x_2538_, v___x_2540_);
v___x_2542_ = 1;
v___x_2543_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2537_, v___x_2541_, v___x_2542_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getValue___boxed(lean_object* v_a_2544_, lean_object* v_a_2545_){
_start:
{
lean_object* v_res_2546_; 
v_res_2546_ = l_Lasm_Web_Raw_getValue(v_a_2544_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setValue(lean_object* v_a_2553_, lean_object* v_a_2554_){
_start:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; uint8_t v___x_2563_; lean_object* v___x_2564_; 
v___x_2556_ = ((lean_object*)(l_Lasm_Web_Raw_setValue___closed__1));
v___x_2557_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2558_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2559_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2559_, 0, v_a_2553_);
lean_ctor_set(v___x_2559_, 1, v___x_2558_);
v___x_2560_ = lean_array_push(v___x_2557_, v___x_2559_);
v___x_2561_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2561_, 0, v_a_2554_);
v___x_2562_ = lean_array_push(v___x_2560_, v___x_2561_);
v___x_2563_ = 1;
v___x_2564_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2556_, v___x_2562_, v___x_2563_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setValue___boxed(lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_){
_start:
{
lean_object* v_res_2568_; 
v_res_2568_ = l_Lasm_Web_Raw_setValue(v_a_2565_, v_a_2566_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getChecked(lean_object* v_a_2575_){
_start:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; uint8_t v___x_2582_; lean_object* v___x_2583_; 
v___x_2577_ = ((lean_object*)(l_Lasm_Web_Raw_getChecked___closed__1));
v___x_2578_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2579_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2580_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2580_, 0, v_a_2575_);
lean_ctor_set(v___x_2580_, 1, v___x_2579_);
v___x_2581_ = lean_array_push(v___x_2578_, v___x_2580_);
v___x_2582_ = 1;
v___x_2583_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2577_, v___x_2581_, v___x_2582_);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getChecked___boxed(lean_object* v_a_2584_, lean_object* v_a_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_Lasm_Web_Raw_getChecked(v_a_2584_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setChecked(lean_object* v_a_2593_, uint8_t v_a_2594_){
_start:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; uint8_t v___x_2603_; lean_object* v___x_2604_; 
v___x_2596_ = ((lean_object*)(l_Lasm_Web_Raw_setChecked___closed__1));
v___x_2597_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2598_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2599_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2599_, 0, v_a_2593_);
lean_ctor_set(v___x_2599_, 1, v___x_2598_);
v___x_2600_ = lean_array_push(v___x_2597_, v___x_2599_);
v___x_2601_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2601_, 0, v_a_2594_);
v___x_2602_ = lean_array_push(v___x_2600_, v___x_2601_);
v___x_2603_ = 1;
v___x_2604_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2596_, v___x_2602_, v___x_2603_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setChecked___boxed(lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_){
_start:
{
uint8_t v_a_137__boxed_2608_; lean_object* v_res_2609_; 
v_a_137__boxed_2608_ = lean_unbox(v_a_2606_);
v_res_2609_ = l_Lasm_Web_Raw_setChecked(v_a_2605_, v_a_137__boxed_2608_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_focus(lean_object* v_a_2616_){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; uint8_t v___x_2623_; lean_object* v___x_2624_; 
v___x_2618_ = ((lean_object*)(l_Lasm_Web_Raw_focus___closed__1));
v___x_2619_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2620_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2621_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2621_, 0, v_a_2616_);
lean_ctor_set(v___x_2621_, 1, v___x_2620_);
v___x_2622_ = lean_array_push(v___x_2619_, v___x_2621_);
v___x_2623_ = 1;
v___x_2624_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2618_, v___x_2622_, v___x_2623_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_focus___boxed(lean_object* v_a_2625_, lean_object* v_a_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lasm_Web_Raw_focus(v_a_2625_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_blur(lean_object* v_a_2634_){
_start:
{
lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; uint8_t v___x_2641_; lean_object* v___x_2642_; 
v___x_2636_ = ((lean_object*)(l_Lasm_Web_Raw_blur___closed__1));
v___x_2637_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2638_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2639_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2639_, 0, v_a_2634_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = lean_array_push(v___x_2637_, v___x_2639_);
v___x_2641_ = 1;
v___x_2642_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2636_, v___x_2640_, v___x_2641_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_blur___boxed(lean_object* v_a_2643_, lean_object* v_a_2644_){
_start:
{
lean_object* v_res_2645_; 
v_res_2645_ = l_Lasm_Web_Raw_blur(v_a_2643_);
return v_res_2645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_click(lean_object* v_a_2652_){
_start:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; uint8_t v___x_2659_; lean_object* v___x_2660_; 
v___x_2654_ = ((lean_object*)(l_Lasm_Web_Raw_click___closed__1));
v___x_2655_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2656_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2657_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2657_, 0, v_a_2652_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
v___x_2658_ = lean_array_push(v___x_2655_, v___x_2657_);
v___x_2659_ = 1;
v___x_2660_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2654_, v___x_2658_, v___x_2659_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_click___boxed(lean_object* v_a_2661_, lean_object* v_a_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Lasm_Web_Raw_click(v_a_2661_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_scrollIntoView(lean_object* v_a_2670_, uint8_t v_a_2671_){
_start:
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; uint8_t v___x_2680_; lean_object* v___x_2681_; 
v___x_2673_ = ((lean_object*)(l_Lasm_Web_Raw_scrollIntoView___closed__1));
v___x_2674_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2675_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2676_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2676_, 0, v_a_2670_);
lean_ctor_set(v___x_2676_, 1, v___x_2675_);
v___x_2677_ = lean_array_push(v___x_2674_, v___x_2676_);
v___x_2678_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2678_, 0, v_a_2671_);
v___x_2679_ = lean_array_push(v___x_2677_, v___x_2678_);
v___x_2680_ = 1;
v___x_2681_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2673_, v___x_2679_, v___x_2680_);
return v___x_2681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_scrollIntoView___boxed(lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_){
_start:
{
uint8_t v_a_137__boxed_2685_; lean_object* v_res_2686_; 
v_a_137__boxed_2685_ = lean_unbox(v_a_2683_);
v_res_2686_ = l_Lasm_Web_Raw_scrollIntoView(v_a_2682_, v_a_137__boxed_2685_);
return v_res_2686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0(lean_object* v_b_2687_, lean_object* v_args_2688_, uint8_t v_await_2689_){
_start:
{
uint64_t v___y_2692_; uint64_t v___y_2693_; uint64_t v___x_2725_; uint64_t v___y_2727_; 
v___x_2725_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_2689_ == 0)
{
uint64_t v___x_2732_; 
v___x_2732_ = 0ULL;
v___y_2727_ = v___x_2732_;
goto v___jp_2726_;
}
else
{
uint64_t v___x_2733_; 
v___x_2733_ = 2ULL;
v___y_2727_ = v___x_2733_;
goto v___jp_2726_;
}
v___jp_2691_:
{
uint64_t v_flags_2694_; uint32_t v___x_2695_; lean_object* v___x_2696_; uint32_t v___x_2697_; lean_object* v___x_2698_; 
v_flags_2694_ = lean_uint64_lor(v___y_2692_, v___y_2693_);
v___x_2695_ = 214;
v___x_2696_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2687_, v_args_2688_);
v___x_2697_ = 0;
v___x_2698_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2695_, v_flags_2694_, v___x_2696_, v___x_2697_);
if (lean_obj_tag(v___x_2698_) == 0)
{
lean_object* v_a_2699_; lean_object* v___x_2700_; 
v_a_2699_ = lean_ctor_get(v___x_2698_, 0);
lean_inc(v_a_2699_);
lean_dec_ref_known(v___x_2698_, 1);
v___x_2700_ = l_Lasm_JS_Wire_decode(v_a_2699_);
lean_dec(v_a_2699_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v_a_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2708_; 
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2703_ = v___x_2700_;
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_a_2701_);
lean_dec(v___x_2700_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2706_; 
if (v_isShared_2704_ == 0)
{
v___x_2706_ = v___x_2703_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v_a_2701_);
v___x_2706_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
return v___x_2706_;
}
}
}
else
{
return v___x_2700_;
}
}
else
{
lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2724_; 
v_a_2709_ = lean_ctor_get(v___x_2698_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2711_ = v___x_2698_;
v_isShared_2712_ = v_isSharedCheck_2724_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2698_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2724_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2722_; 
v___x_2713_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2714_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2687_);
v___x_2715_ = lean_string_append(v___x_2713_, v___x_2714_);
lean_dec_ref(v___x_2714_);
v___x_2716_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_2717_ = lean_string_append(v___x_2715_, v___x_2716_);
v___x_2718_ = lean_io_error_to_string(v_a_2709_);
v___x_2719_ = lean_string_append(v___x_2717_, v___x_2718_);
lean_dec_ref(v___x_2718_);
v___x_2720_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
if (v_isShared_2712_ == 0)
{
lean_ctor_set(v___x_2711_, 0, v___x_2720_);
v___x_2722_ = v___x_2711_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v___x_2720_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
}
}
}
}
v___jp_2726_:
{
uint8_t v_construct_2728_; uint64_t v___x_2729_; 
v_construct_2728_ = lean_ctor_get_uint8(v_b_2687_, sizeof(void*)*4);
v___x_2729_ = lean_uint64_lor(v___x_2725_, v___y_2727_);
if (v_construct_2728_ == 0)
{
uint64_t v___x_2730_; 
v___x_2730_ = 0ULL;
v___y_2692_ = v___x_2729_;
v___y_2693_ = v___x_2730_;
goto v___jp_2691_;
}
else
{
uint64_t v___x_2731_; 
v___x_2731_ = 4ULL;
v___y_2692_ = v___x_2729_;
v___y_2693_ = v___x_2731_;
goto v___jp_2691_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0___boxed(lean_object* v_b_2734_, lean_object* v_args_2735_, lean_object* v_await_2736_, lean_object* v_a_2737_){
_start:
{
uint8_t v_await_boxed_2738_; lean_object* v_res_2739_; 
v_await_boxed_2738_ = lean_unbox(v_await_2736_);
v_res_2739_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0(v_b_2734_, v_args_2735_, v_await_boxed_2738_);
lean_dec_ref(v_b_2734_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getProp(lean_object* v_a_2746_, lean_object* v_a_2747_){
_start:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; uint8_t v___x_2756_; lean_object* v___x_2757_; 
v___x_2749_ = ((lean_object*)(l_Lasm_Web_Raw_getProp___closed__1));
v___x_2750_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2751_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2752_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2752_, 0, v_a_2746_);
lean_ctor_set(v___x_2752_, 1, v___x_2751_);
v___x_2753_ = lean_array_push(v___x_2750_, v___x_2752_);
v___x_2754_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2754_, 0, v_a_2747_);
v___x_2755_ = lean_array_push(v___x_2753_, v___x_2754_);
v___x_2756_ = 1;
v___x_2757_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0(v___x_2749_, v___x_2755_, v___x_2756_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getProp___boxed(lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l_Lasm_Web_Raw_getProp(v_a_2758_, v_a_2759_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___redArg(lean_object* v_d_2762_){
_start:
{
lean_object* v___x_2764_; 
v___x_2764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2764_, 0, v_d_2762_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___redArg___boxed(lean_object* v_d_2765_, lean_object* v_a_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___redArg(v_d_2765_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0(lean_object* v_context_2768_, lean_object* v_d_2769_){
_start:
{
lean_object* v___x_2771_; 
v___x_2771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2771_, 0, v_d_2769_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___boxed(lean_object* v_context_2772_, lean_object* v_d_2773_, lean_object* v_a_2774_){
_start:
{
lean_object* v_res_2775_; 
v_res_2775_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0(v_context_2772_, v_d_2773_);
lean_dec_ref(v_context_2772_);
return v_res_2775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(lean_object* v_b_2776_, lean_object* v_args_2777_, uint8_t v_await_2778_){
_start:
{
uint64_t v___y_2781_; uint64_t v___y_2782_; uint64_t v___x_2817_; uint64_t v___y_2819_; 
v___x_2817_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_2778_ == 0)
{
uint64_t v___x_2824_; 
v___x_2824_ = 0ULL;
v___y_2819_ = v___x_2824_;
goto v___jp_2818_;
}
else
{
uint64_t v___x_2825_; 
v___x_2825_ = 2ULL;
v___y_2819_ = v___x_2825_;
goto v___jp_2818_;
}
v___jp_2780_:
{
uint64_t v_flags_2783_; uint32_t v___x_2784_; lean_object* v___x_2785_; uint32_t v___x_2786_; lean_object* v___x_2787_; 
v_flags_2783_ = lean_uint64_lor(v___y_2781_, v___y_2782_);
v___x_2784_ = 214;
v___x_2785_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2776_, v_args_2777_);
v___x_2786_ = 0;
v___x_2787_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2784_, v_flags_2783_, v___x_2785_, v___x_2786_);
if (lean_obj_tag(v___x_2787_) == 0)
{
lean_object* v_a_2788_; lean_object* v___x_2789_; 
v_a_2788_ = lean_ctor_get(v___x_2787_, 0);
lean_inc(v_a_2788_);
lean_dec_ref_known(v___x_2787_, 1);
v___x_2789_ = l_Lasm_JS_Wire_decode(v_a_2788_);
lean_dec(v_a_2788_);
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_object* v_a_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v_a_2790_ = lean_ctor_get(v___x_2789_, 0);
lean_inc(v_a_2790_);
lean_dec_ref_known(v___x_2789_, 1);
v___x_2791_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2776_);
v___x_2792_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_2791_, v_a_2790_);
lean_dec_ref(v___x_2791_);
return v___x_2792_;
}
else
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2800_; 
v_a_2793_ = lean_ctor_get(v___x_2789_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2795_ = v___x_2789_;
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v___x_2789_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___x_2798_; 
if (v_isShared_2796_ == 0)
{
v___x_2798_ = v___x_2795_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_a_2793_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
}
else
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2816_; 
v_a_2801_ = lean_ctor_get(v___x_2787_, 0);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2787_);
if (v_isSharedCheck_2816_ == 0)
{
v___x_2803_ = v___x_2787_;
v_isShared_2804_ = v_isSharedCheck_2816_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2787_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2816_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2814_; 
v___x_2805_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2806_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2776_);
v___x_2807_ = lean_string_append(v___x_2805_, v___x_2806_);
lean_dec_ref(v___x_2806_);
v___x_2808_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_2809_ = lean_string_append(v___x_2807_, v___x_2808_);
v___x_2810_ = lean_io_error_to_string(v_a_2801_);
v___x_2811_ = lean_string_append(v___x_2809_, v___x_2810_);
lean_dec_ref(v___x_2810_);
v___x_2812_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2812_, 0, v___x_2811_);
if (v_isShared_2804_ == 0)
{
lean_ctor_set(v___x_2803_, 0, v___x_2812_);
v___x_2814_ = v___x_2803_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2812_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
}
v___jp_2818_:
{
uint8_t v_construct_2820_; uint64_t v___x_2821_; 
v_construct_2820_ = lean_ctor_get_uint8(v_b_2776_, sizeof(void*)*4);
v___x_2821_ = lean_uint64_lor(v___x_2817_, v___y_2819_);
if (v_construct_2820_ == 0)
{
uint64_t v___x_2822_; 
v___x_2822_ = 0ULL;
v___y_2781_ = v___x_2821_;
v___y_2782_ = v___x_2822_;
goto v___jp_2780_;
}
else
{
uint64_t v___x_2823_; 
v___x_2823_ = 4ULL;
v___y_2781_ = v___x_2821_;
v___y_2782_ = v___x_2823_;
goto v___jp_2780_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0___boxed(lean_object* v_b_2826_, lean_object* v_args_2827_, lean_object* v_await_2828_, lean_object* v_a_2829_){
_start:
{
uint8_t v_await_boxed_2830_; lean_object* v_res_2831_; 
v_await_boxed_2830_ = lean_unbox(v_await_2828_);
v_res_2831_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(v_b_2826_, v_args_2827_, v_await_boxed_2830_);
lean_dec_ref(v_b_2826_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getPropValue(lean_object* v_a_2839_, lean_object* v_a_2840_){
_start:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; uint8_t v___x_2849_; lean_object* v___x_2850_; 
v___x_2842_ = ((lean_object*)(l_Lasm_Web_Raw_getPropValue___closed__1));
v___x_2843_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2844_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2845_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2845_, 0, v_a_2839_);
lean_ctor_set(v___x_2845_, 1, v___x_2844_);
v___x_2846_ = lean_array_push(v___x_2843_, v___x_2845_);
v___x_2847_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2847_, 0, v_a_2840_);
v___x_2848_ = lean_array_push(v___x_2846_, v___x_2847_);
v___x_2849_ = 1;
v___x_2850_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(v___x_2842_, v___x_2848_, v___x_2849_);
return v___x_2850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getPropValue___boxed(lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = l_Lasm_Web_Raw_getPropValue(v_a_2851_, v_a_2852_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setProp(lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_){
_start:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; uint8_t v___x_2873_; lean_object* v___x_2874_; 
v___x_2865_ = ((lean_object*)(l_Lasm_Web_Raw_setProp___closed__1));
v___x_2866_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2867_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2868_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2868_, 0, v_a_2861_);
lean_ctor_set(v___x_2868_, 1, v___x_2867_);
v___x_2869_ = lean_array_push(v___x_2866_, v___x_2868_);
v___x_2870_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2870_, 0, v_a_2862_);
v___x_2871_ = lean_array_push(v___x_2869_, v___x_2870_);
v___x_2872_ = lean_array_push(v___x_2871_, v_a_2863_);
v___x_2873_ = 1;
v___x_2874_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2865_, v___x_2872_, v___x_2873_);
return v___x_2874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setProp___boxed(lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l_Lasm_Web_Raw_setProp(v_a_2875_, v_a_2876_, v_a_2877_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSRect___lam__0(lean_object* v___x_2888_, lean_object* v_d_2889_){
_start:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2890_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__0));
lean_inc_ref(v___x_2888_);
v___x_2891_ = l_Lasm_JS_readField___redArg(v___x_2888_, v_d_2889_, v___x_2890_);
if (lean_obj_tag(v___x_2891_) == 0)
{
lean_object* v_a_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2899_; 
lean_dec_ref(v___x_2888_);
v_a_2892_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2894_ = v___x_2891_;
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_a_2892_);
lean_dec(v___x_2891_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2897_; 
if (v_isShared_2895_ == 0)
{
v___x_2897_ = v___x_2894_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_a_2892_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
else
{
lean_object* v_a_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
v_a_2900_ = lean_ctor_get(v___x_2891_, 0);
lean_inc(v_a_2900_);
lean_dec_ref_known(v___x_2891_, 1);
v___x_2901_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__1));
lean_inc_ref(v___x_2888_);
v___x_2902_ = l_Lasm_JS_readField___redArg(v___x_2888_, v_d_2889_, v___x_2901_);
if (lean_obj_tag(v___x_2902_) == 0)
{
lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2910_; 
lean_dec(v_a_2900_);
lean_dec_ref(v___x_2888_);
v_a_2903_ = lean_ctor_get(v___x_2902_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2902_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2905_ = v___x_2902_;
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_dec(v___x_2902_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2908_; 
if (v_isShared_2906_ == 0)
{
v___x_2908_ = v___x_2905_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_a_2903_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
else
{
lean_object* v_a_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v_a_2911_ = lean_ctor_get(v___x_2902_, 0);
lean_inc(v_a_2911_);
lean_dec_ref_known(v___x_2902_, 1);
v___x_2912_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__2));
lean_inc_ref(v___x_2888_);
v___x_2913_ = l_Lasm_JS_readField___redArg(v___x_2888_, v_d_2889_, v___x_2912_);
if (lean_obj_tag(v___x_2913_) == 0)
{
lean_object* v_a_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2921_; 
lean_dec(v_a_2911_);
lean_dec(v_a_2900_);
lean_dec_ref(v___x_2888_);
v_a_2914_ = lean_ctor_get(v___x_2913_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v___x_2913_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2916_ = v___x_2913_;
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_a_2914_);
lean_dec(v___x_2913_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
lean_object* v___x_2919_; 
if (v_isShared_2917_ == 0)
{
v___x_2919_ = v___x_2916_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_a_2914_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
return v___x_2919_;
}
}
}
else
{
lean_object* v_a_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v_a_2922_ = lean_ctor_get(v___x_2913_, 0);
lean_inc(v_a_2922_);
lean_dec_ref_known(v___x_2913_, 1);
v___x_2923_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__3));
lean_inc_ref(v___x_2888_);
v___x_2924_ = l_Lasm_JS_readField___redArg(v___x_2888_, v_d_2889_, v___x_2923_);
if (lean_obj_tag(v___x_2924_) == 0)
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2932_; 
lean_dec(v_a_2922_);
lean_dec(v_a_2911_);
lean_dec(v_a_2900_);
lean_dec_ref(v___x_2888_);
v_a_2925_ = lean_ctor_get(v___x_2924_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v___x_2924_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2927_ = v___x_2924_;
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v___x_2924_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
if (v_isShared_2928_ == 0)
{
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2925_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
else
{
lean_object* v_a_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; 
v_a_2933_ = lean_ctor_get(v___x_2924_, 0);
lean_inc(v_a_2933_);
lean_dec_ref_known(v___x_2924_, 1);
v___x_2934_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__4));
lean_inc_ref(v___x_2888_);
v___x_2935_ = l_Lasm_JS_readField___redArg(v___x_2888_, v_d_2889_, v___x_2934_);
if (lean_obj_tag(v___x_2935_) == 0)
{
lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2943_; 
lean_dec(v_a_2933_);
lean_dec(v_a_2922_);
lean_dec(v_a_2911_);
lean_dec(v_a_2900_);
lean_dec_ref(v___x_2888_);
v_a_2936_ = lean_ctor_get(v___x_2935_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2935_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2938_ = v___x_2935_;
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v___x_2935_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2941_; 
if (v_isShared_2939_ == 0)
{
v___x_2941_ = v___x_2938_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2936_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
return v___x_2941_;
}
}
}
else
{
lean_object* v_a_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; 
v_a_2944_ = lean_ctor_get(v___x_2935_, 0);
lean_inc(v_a_2944_);
lean_dec_ref_known(v___x_2935_, 1);
v___x_2945_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__5));
lean_inc_ref(v___x_2888_);
v___x_2946_ = l_Lasm_JS_readField___redArg(v___x_2888_, v_d_2889_, v___x_2945_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2954_; 
lean_dec(v_a_2944_);
lean_dec(v_a_2933_);
lean_dec(v_a_2922_);
lean_dec(v_a_2911_);
lean_dec(v_a_2900_);
lean_dec_ref(v___x_2888_);
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_2954_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_2954_ == 0)
{
v___x_2949_ = v___x_2946_;
v_isShared_2950_ = v_isSharedCheck_2954_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_a_2947_);
lean_dec(v___x_2946_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2954_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v___x_2952_; 
if (v_isShared_2950_ == 0)
{
v___x_2952_ = v___x_2949_;
goto v_reusejp_2951_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_a_2947_);
v___x_2952_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2951_;
}
v_reusejp_2951_:
{
return v___x_2952_;
}
}
}
else
{
lean_object* v_a_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v_a_2955_ = lean_ctor_get(v___x_2946_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2946_, 1);
v___x_2956_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__6));
lean_inc_ref(v___x_2888_);
v___x_2957_ = l_Lasm_JS_readField___redArg(v___x_2888_, v_d_2889_, v___x_2956_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v_a_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2965_; 
lean_dec(v_a_2955_);
lean_dec(v_a_2944_);
lean_dec(v_a_2933_);
lean_dec(v_a_2922_);
lean_dec(v_a_2911_);
lean_dec(v_a_2900_);
lean_dec_ref(v___x_2888_);
v_a_2958_ = lean_ctor_get(v___x_2957_, 0);
v_isSharedCheck_2965_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2960_ = v___x_2957_;
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_a_2958_);
lean_dec(v___x_2957_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2963_; 
if (v_isShared_2961_ == 0)
{
v___x_2963_ = v___x_2960_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_a_2958_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
return v___x_2963_;
}
}
}
else
{
lean_object* v_a_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v_a_2966_ = lean_ctor_get(v___x_2957_, 0);
lean_inc(v_a_2966_);
lean_dec_ref_known(v___x_2957_, 1);
v___x_2967_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__7));
v___x_2968_ = l_Lasm_JS_readField___redArg(v___x_2888_, v_d_2889_, v___x_2967_);
if (lean_obj_tag(v___x_2968_) == 0)
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2976_; 
lean_dec(v_a_2966_);
lean_dec(v_a_2955_);
lean_dec(v_a_2944_);
lean_dec(v_a_2933_);
lean_dec(v_a_2922_);
lean_dec(v_a_2911_);
lean_dec(v_a_2900_);
v_a_2969_ = lean_ctor_get(v___x_2968_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2968_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2971_ = v___x_2968_;
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v___x_2968_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
if (v_isShared_2972_ == 0)
{
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v_a_2969_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
return v___x_2974_;
}
}
}
else
{
lean_object* v_a_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_2993_; 
v_a_2977_ = lean_ctor_get(v___x_2968_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2968_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2979_ = v___x_2968_;
v_isShared_2980_ = v_isSharedCheck_2993_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_a_2977_);
lean_dec(v___x_2968_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_2993_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
lean_object* v___x_2981_; double v___x_2982_; double v___x_2983_; double v___x_2984_; double v___x_2985_; double v___x_2986_; double v___x_2987_; double v___x_2988_; double v___x_2989_; lean_object* v___x_2991_; 
v___x_2981_ = lean_alloc_ctor(0, 0, 64);
v___x_2982_ = lean_unbox_float(v_a_2900_);
lean_dec(v_a_2900_);
lean_ctor_set_float(v___x_2981_, 0, v___x_2982_);
v___x_2983_ = lean_unbox_float(v_a_2911_);
lean_dec(v_a_2911_);
lean_ctor_set_float(v___x_2981_, 8, v___x_2983_);
v___x_2984_ = lean_unbox_float(v_a_2922_);
lean_dec(v_a_2922_);
lean_ctor_set_float(v___x_2981_, 16, v___x_2984_);
v___x_2985_ = lean_unbox_float(v_a_2933_);
lean_dec(v_a_2933_);
lean_ctor_set_float(v___x_2981_, 24, v___x_2985_);
v___x_2986_ = lean_unbox_float(v_a_2944_);
lean_dec(v_a_2944_);
lean_ctor_set_float(v___x_2981_, 32, v___x_2986_);
v___x_2987_ = lean_unbox_float(v_a_2955_);
lean_dec(v_a_2955_);
lean_ctor_set_float(v___x_2981_, 40, v___x_2987_);
v___x_2988_ = lean_unbox_float(v_a_2966_);
lean_dec(v_a_2966_);
lean_ctor_set_float(v___x_2981_, 48, v___x_2988_);
v___x_2989_ = lean_unbox_float(v_a_2977_);
lean_dec(v_a_2977_);
lean_ctor_set_float(v___x_2981_, 56, v___x_2989_);
if (v_isShared_2980_ == 0)
{
lean_ctor_set(v___x_2979_, 0, v___x_2981_);
v___x_2991_ = v___x_2979_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v___x_2981_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
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
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSRect___lam__0___boxed(lean_object* v___x_2994_, lean_object* v_d_2995_){
_start:
{
lean_object* v_res_2996_; 
v_res_2996_ = l_Lasm_Web_instFromJSRect___lam__0(v___x_2994_, v_d_2995_);
lean_dec(v_d_2995_);
return v_res_2996_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSRect___closed__0(void){
_start:
{
lean_object* v___x_2997_; lean_object* v___f_2998_; 
v___x_2997_ = l_Lasm_JS_instFromJSFloat;
v___f_2998_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSRect___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2998_, 0, v___x_2997_);
return v___f_2998_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSRect___closed__2(void){
_start:
{
uint8_t v___x_3000_; lean_object* v___x_3001_; lean_object* v___f_3002_; lean_object* v___x_3003_; 
v___x_3000_ = 0;
v___x_3001_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___closed__1));
v___f_3002_ = lean_obj_once(&l_Lasm_Web_instFromJSRect___closed__0, &l_Lasm_Web_instFromJSRect___closed__0_once, _init_l_Lasm_Web_instFromJSRect___closed__0);
v___x_3003_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3003_, 0, v___f_3002_);
lean_ctor_set(v___x_3003_, 1, v___x_3001_);
lean_ctor_set_uint8(v___x_3003_, sizeof(void*)*2, v___x_3000_);
return v___x_3003_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSRect(void){
_start:
{
lean_object* v___x_3004_; 
v___x_3004_ = lean_obj_once(&l_Lasm_Web_instFromJSRect___closed__2, &l_Lasm_Web_instFromJSRect___closed__2_once, _init_l_Lasm_Web_instFromJSRect___closed__2);
return v___x_3004_;
}
}
static double _init_l_Lasm_Web_instInhabitedRect_default___closed__0(void){
_start:
{
uint64_t v___x_3005_; double v___x_3006_; 
v___x_3005_ = 0ULL;
v___x_3006_ = lean_uint64_to_float(v___x_3005_);
return v___x_3006_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedRect_default___closed__1(void){
_start:
{
double v___x_3007_; lean_object* v___x_3008_; 
v___x_3007_ = lean_float_once(&l_Lasm_Web_instInhabitedRect_default___closed__0, &l_Lasm_Web_instInhabitedRect_default___closed__0_once, _init_l_Lasm_Web_instInhabitedRect_default___closed__0);
v___x_3008_ = lean_alloc_ctor(0, 0, 64);
lean_ctor_set_float(v___x_3008_, 0, v___x_3007_);
lean_ctor_set_float(v___x_3008_, 8, v___x_3007_);
lean_ctor_set_float(v___x_3008_, 16, v___x_3007_);
lean_ctor_set_float(v___x_3008_, 24, v___x_3007_);
lean_ctor_set_float(v___x_3008_, 32, v___x_3007_);
lean_ctor_set_float(v___x_3008_, 40, v___x_3007_);
lean_ctor_set_float(v___x_3008_, 48, v___x_3007_);
lean_ctor_set_float(v___x_3008_, 56, v___x_3007_);
return v___x_3008_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedRect_default(void){
_start:
{
lean_object* v___x_3009_; 
v___x_3009_ = lean_obj_once(&l_Lasm_Web_instInhabitedRect_default___closed__1, &l_Lasm_Web_instInhabitedRect_default___closed__1_once, _init_l_Lasm_Web_instInhabitedRect_default___closed__1);
return v___x_3009_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedRect(void){
_start:
{
lean_object* v___x_3010_; 
v___x_3010_ = l_Lasm_Web_instInhabitedRect_default;
return v___x_3010_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3023_ = lean_unsigned_to_nat(5u);
v___x_3024_ = lean_nat_to_int(v___x_3023_);
return v___x_3024_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3032_ = lean_unsigned_to_nat(9u);
v___x_3033_ = lean_nat_to_int(v___x_3032_);
return v___x_3033_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; 
v___x_3036_ = lean_unsigned_to_nat(10u);
v___x_3037_ = lean_nat_to_int(v___x_3036_);
return v___x_3037_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_3040_; lean_object* v___x_3041_; 
v___x_3040_ = lean_unsigned_to_nat(7u);
v___x_3041_ = lean_nat_to_int(v___x_3040_);
return v___x_3041_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3048_ = lean_unsigned_to_nat(8u);
v___x_3049_ = lean_nat_to_int(v___x_3048_);
return v___x_3049_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3051_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__0));
v___x_3052_ = lean_string_length(v___x_3051_);
return v___x_3052_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_3053_; lean_object* v___x_3054_; 
v___x_3053_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__21, &l_Lasm_Web_instReprRect_repr___redArg___closed__21_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__21);
v___x_3054_ = lean_nat_to_int(v___x_3053_);
return v___x_3054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___redArg(lean_object* v_x_3059_){
_start:
{
double v_x_3060_; double v_y_3061_; double v_width_3062_; double v_height_3063_; double v_top_3064_; double v_right_3065_; double v_bottom_3066_; double v_left_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; uint8_t v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; 
v_x_3060_ = lean_ctor_get_float(v_x_3059_, 0);
v_y_3061_ = lean_ctor_get_float(v_x_3059_, 8);
v_width_3062_ = lean_ctor_get_float(v_x_3059_, 16);
v_height_3063_ = lean_ctor_get_float(v_x_3059_, 24);
v_top_3064_ = lean_ctor_get_float(v_x_3059_, 32);
v_right_3065_ = lean_ctor_get_float(v_x_3059_, 40);
v_bottom_3066_ = lean_ctor_get_float(v_x_3059_, 48);
v_left_3067_ = lean_ctor_get_float(v_x_3059_, 56);
v___x_3068_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__4));
v___x_3069_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__5));
v___x_3070_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__6, &l_Lasm_Web_instReprRect_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__6);
v___x_3071_ = lean_unsigned_to_nat(0u);
v___x_3072_ = l_Float_repr(v_x_3060_, v___x_3071_);
v___x_3073_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3070_);
lean_ctor_set(v___x_3073_, 1, v___x_3072_);
v___x_3074_ = 0;
v___x_3075_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3075_, 0, v___x_3073_);
lean_ctor_set_uint8(v___x_3075_, sizeof(void*)*1, v___x_3074_);
v___x_3076_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3069_);
lean_ctor_set(v___x_3076_, 1, v___x_3075_);
v___x_3077_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__8));
v___x_3078_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3076_);
lean_ctor_set(v___x_3078_, 1, v___x_3077_);
v___x_3079_ = lean_box(1);
v___x_3080_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3078_);
lean_ctor_set(v___x_3080_, 1, v___x_3079_);
v___x_3081_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__9));
v___x_3082_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3080_);
lean_ctor_set(v___x_3082_, 1, v___x_3081_);
v___x_3083_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3082_);
lean_ctor_set(v___x_3083_, 1, v___x_3068_);
v___x_3084_ = l_Float_repr(v_y_3061_, v___x_3071_);
v___x_3085_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3070_);
lean_ctor_set(v___x_3085_, 1, v___x_3084_);
v___x_3086_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3086_, 0, v___x_3085_);
lean_ctor_set_uint8(v___x_3086_, sizeof(void*)*1, v___x_3074_);
v___x_3087_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3083_);
lean_ctor_set(v___x_3087_, 1, v___x_3086_);
v___x_3088_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3088_, 0, v___x_3087_);
lean_ctor_set(v___x_3088_, 1, v___x_3077_);
v___x_3089_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3088_);
lean_ctor_set(v___x_3089_, 1, v___x_3079_);
v___x_3090_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__10));
v___x_3091_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3089_);
lean_ctor_set(v___x_3091_, 1, v___x_3090_);
v___x_3092_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3091_);
lean_ctor_set(v___x_3092_, 1, v___x_3068_);
v___x_3093_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__11, &l_Lasm_Web_instReprRect_repr___redArg___closed__11_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__11);
v___x_3094_ = l_Float_repr(v_width_3062_, v___x_3071_);
v___x_3095_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3093_);
lean_ctor_set(v___x_3095_, 1, v___x_3094_);
v___x_3096_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
lean_ctor_set_uint8(v___x_3096_, sizeof(void*)*1, v___x_3074_);
v___x_3097_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3092_);
lean_ctor_set(v___x_3097_, 1, v___x_3096_);
v___x_3098_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3097_);
lean_ctor_set(v___x_3098_, 1, v___x_3077_);
v___x_3099_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3098_);
lean_ctor_set(v___x_3099_, 1, v___x_3079_);
v___x_3100_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__12));
v___x_3101_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3099_);
lean_ctor_set(v___x_3101_, 1, v___x_3100_);
v___x_3102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3101_);
lean_ctor_set(v___x_3102_, 1, v___x_3068_);
v___x_3103_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__13, &l_Lasm_Web_instReprRect_repr___redArg___closed__13_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__13);
v___x_3104_ = l_Float_repr(v_height_3063_, v___x_3071_);
v___x_3105_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3105_, 0, v___x_3103_);
lean_ctor_set(v___x_3105_, 1, v___x_3104_);
v___x_3106_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3106_, 0, v___x_3105_);
lean_ctor_set_uint8(v___x_3106_, sizeof(void*)*1, v___x_3074_);
v___x_3107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3102_);
lean_ctor_set(v___x_3107_, 1, v___x_3106_);
v___x_3108_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3108_, 0, v___x_3107_);
lean_ctor_set(v___x_3108_, 1, v___x_3077_);
v___x_3109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3108_);
lean_ctor_set(v___x_3109_, 1, v___x_3079_);
v___x_3110_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__14));
v___x_3111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3109_);
lean_ctor_set(v___x_3111_, 1, v___x_3110_);
v___x_3112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3111_);
lean_ctor_set(v___x_3112_, 1, v___x_3068_);
v___x_3113_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__15, &l_Lasm_Web_instReprRect_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__15);
v___x_3114_ = l_Float_repr(v_top_3064_, v___x_3071_);
v___x_3115_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3113_);
lean_ctor_set(v___x_3115_, 1, v___x_3114_);
v___x_3116_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3116_, 0, v___x_3115_);
lean_ctor_set_uint8(v___x_3116_, sizeof(void*)*1, v___x_3074_);
v___x_3117_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3117_, 0, v___x_3112_);
lean_ctor_set(v___x_3117_, 1, v___x_3116_);
v___x_3118_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3117_);
lean_ctor_set(v___x_3118_, 1, v___x_3077_);
v___x_3119_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
lean_ctor_set(v___x_3119_, 1, v___x_3079_);
v___x_3120_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__16));
v___x_3121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3119_);
lean_ctor_set(v___x_3121_, 1, v___x_3120_);
v___x_3122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3121_);
lean_ctor_set(v___x_3122_, 1, v___x_3068_);
v___x_3123_ = l_Float_repr(v_right_3065_, v___x_3071_);
v___x_3124_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3093_);
lean_ctor_set(v___x_3124_, 1, v___x_3123_);
v___x_3125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3125_, 0, v___x_3124_);
lean_ctor_set_uint8(v___x_3125_, sizeof(void*)*1, v___x_3074_);
v___x_3126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3122_);
lean_ctor_set(v___x_3126_, 1, v___x_3125_);
v___x_3127_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3126_);
lean_ctor_set(v___x_3127_, 1, v___x_3077_);
v___x_3128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
lean_ctor_set(v___x_3128_, 1, v___x_3079_);
v___x_3129_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__17));
v___x_3130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3128_);
lean_ctor_set(v___x_3130_, 1, v___x_3129_);
v___x_3131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3130_);
lean_ctor_set(v___x_3131_, 1, v___x_3068_);
v___x_3132_ = l_Float_repr(v_bottom_3066_, v___x_3071_);
v___x_3133_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3103_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
v___x_3134_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3134_, 0, v___x_3133_);
lean_ctor_set_uint8(v___x_3134_, sizeof(void*)*1, v___x_3074_);
v___x_3135_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3131_);
lean_ctor_set(v___x_3135_, 1, v___x_3134_);
v___x_3136_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3135_);
lean_ctor_set(v___x_3136_, 1, v___x_3077_);
v___x_3137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
lean_ctor_set(v___x_3137_, 1, v___x_3079_);
v___x_3138_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__18));
v___x_3139_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3137_);
lean_ctor_set(v___x_3139_, 1, v___x_3138_);
v___x_3140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
lean_ctor_set(v___x_3140_, 1, v___x_3068_);
v___x_3141_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__19, &l_Lasm_Web_instReprRect_repr___redArg___closed__19_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__19);
v___x_3142_ = l_Float_repr(v_left_3067_, v___x_3071_);
v___x_3143_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3141_);
lean_ctor_set(v___x_3143_, 1, v___x_3142_);
v___x_3144_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
lean_ctor_set_uint8(v___x_3144_, sizeof(void*)*1, v___x_3074_);
v___x_3145_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3140_);
lean_ctor_set(v___x_3145_, 1, v___x_3144_);
v___x_3146_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__22, &l_Lasm_Web_instReprRect_repr___redArg___closed__22_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__22);
v___x_3147_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__23));
v___x_3148_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3147_);
lean_ctor_set(v___x_3148_, 1, v___x_3145_);
v___x_3149_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__24));
v___x_3150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3148_);
lean_ctor_set(v___x_3150_, 1, v___x_3149_);
v___x_3151_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3151_, 0, v___x_3146_);
lean_ctor_set(v___x_3151_, 1, v___x_3150_);
v___x_3152_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3152_, 0, v___x_3151_);
lean_ctor_set_uint8(v___x_3152_, sizeof(void*)*1, v___x_3074_);
return v___x_3152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___redArg___boxed(lean_object* v_x_3153_){
_start:
{
lean_object* v_res_3154_; 
v_res_3154_ = l_Lasm_Web_instReprRect_repr___redArg(v_x_3153_);
lean_dec_ref(v_x_3153_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr(lean_object* v_x_3155_, lean_object* v_prec_3156_){
_start:
{
lean_object* v___x_3157_; 
v___x_3157_ = l_Lasm_Web_instReprRect_repr___redArg(v_x_3155_);
return v___x_3157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___boxed(lean_object* v_x_3158_, lean_object* v_prec_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_Lasm_Web_instReprRect_repr(v_x_3158_, v_prec_3159_);
lean_dec(v_prec_3159_);
lean_dec_ref(v_x_3158_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(lean_object* v_d_3170_, lean_object* v_key_3171_){
_start:
{
if (lean_obj_tag(v_d_3170_) == 8)
{
lean_object* v___x_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3194_; 
v___x_3172_ = l_Lasm_JS_Data_field(v_d_3170_, v_key_3171_);
v_isSharedCheck_3194_ = !lean_is_exclusive(v_d_3170_);
if (v_isSharedCheck_3194_ == 0)
{
lean_object* v_unused_3195_; 
v_unused_3195_ = lean_ctor_get(v_d_3170_, 0);
lean_dec(v_unused_3195_);
v___x_3174_ = v_d_3170_;
v_isShared_3175_ = v_isSharedCheck_3194_;
goto v_resetjp_3173_;
}
else
{
lean_dec(v_d_3170_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3194_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
if (lean_obj_tag(v___x_3172_) == 3)
{
double v_n_3176_; lean_object* v___x_3177_; lean_object* v___x_3179_; 
v_n_3176_ = lean_ctor_get_float(v___x_3172_, 0);
lean_dec_ref_known(v___x_3172_, 0);
v___x_3177_ = lean_box_float(v_n_3176_);
if (v_isShared_3175_ == 0)
{
lean_ctor_set_tag(v___x_3174_, 1);
lean_ctor_set(v___x_3174_, 0, v___x_3177_);
v___x_3179_ = v___x_3174_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v___x_3177_);
v___x_3179_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
return v___x_3179_;
}
}
else
{
lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3192_; 
v___x_3181_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__0));
v___x_3182_ = lean_string_append(v___x_3181_, v_key_3171_);
v___x_3183_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__1));
v___x_3184_ = lean_string_append(v___x_3182_, v___x_3183_);
v___x_3185_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__2));
v___x_3186_ = lean_string_append(v___x_3184_, v___x_3185_);
v___x_3187_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__3));
v___x_3188_ = lean_string_append(v___x_3186_, v___x_3187_);
v___x_3189_ = l_Lasm_JS_Data_describe(v___x_3172_);
v___x_3190_ = lean_string_append(v___x_3188_, v___x_3189_);
lean_dec_ref(v___x_3189_);
if (v_isShared_3175_ == 0)
{
lean_ctor_set_tag(v___x_3174_, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3190_);
v___x_3192_ = v___x_3174_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v___x_3190_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
}
}
}
}
else
{
lean_object* v___x_3196_; 
lean_dec(v_d_3170_);
v___x_3196_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__5));
return v___x_3196_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___boxed(lean_object* v_d_3197_, lean_object* v_key_3198_){
_start:
{
lean_object* v_res_3199_; 
v_res_3199_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3197_, v_key_3198_);
lean_dec_ref(v_key_3198_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0(lean_object* v_context_3200_, lean_object* v_d_3201_){
_start:
{
lean_object* v___y_3204_; lean_object* v___y_3205_; lean_object* v___y_3210_; lean_object* v_received_3211_; lean_object* v___y_3230_; lean_object* v_a_3233_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v___x_3257_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__0));
lean_inc(v_d_3201_);
v___x_3258_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3201_, v___x_3257_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v_a_3259_; 
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
lean_inc(v_a_3259_);
lean_dec_ref_known(v___x_3258_, 1);
v_a_3233_ = v_a_3259_;
goto v___jp_3232_;
}
else
{
lean_object* v_a_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; 
v_a_3260_ = lean_ctor_get(v___x_3258_, 0);
lean_inc(v_a_3260_);
lean_dec_ref_known(v___x_3258_, 1);
v___x_3261_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__1));
lean_inc(v_d_3201_);
v___x_3262_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3201_, v___x_3261_);
if (lean_obj_tag(v___x_3262_) == 0)
{
lean_object* v_a_3263_; 
lean_dec(v_a_3260_);
v_a_3263_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_a_3263_);
lean_dec_ref_known(v___x_3262_, 1);
v_a_3233_ = v_a_3263_;
goto v___jp_3232_;
}
else
{
lean_object* v_a_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; 
v_a_3264_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_a_3264_);
lean_dec_ref_known(v___x_3262_, 1);
v___x_3265_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__2));
lean_inc(v_d_3201_);
v___x_3266_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3201_, v___x_3265_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_object* v_a_3267_; 
lean_dec(v_a_3264_);
lean_dec(v_a_3260_);
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3267_);
lean_dec_ref_known(v___x_3266_, 1);
v_a_3233_ = v_a_3267_;
goto v___jp_3232_;
}
else
{
lean_object* v_a_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; 
v_a_3268_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3268_);
lean_dec_ref_known(v___x_3266_, 1);
v___x_3269_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__3));
lean_inc(v_d_3201_);
v___x_3270_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3201_, v___x_3269_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; 
lean_dec(v_a_3268_);
lean_dec(v_a_3264_);
lean_dec(v_a_3260_);
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3270_, 1);
v_a_3233_ = v_a_3271_;
goto v___jp_3232_;
}
else
{
lean_object* v_a_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v_a_3272_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3272_);
lean_dec_ref_known(v___x_3270_, 1);
v___x_3273_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__4));
lean_inc(v_d_3201_);
v___x_3274_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3201_, v___x_3273_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v_a_3275_; 
lean_dec(v_a_3272_);
lean_dec(v_a_3268_);
lean_dec(v_a_3264_);
lean_dec(v_a_3260_);
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3275_);
lean_dec_ref_known(v___x_3274_, 1);
v_a_3233_ = v_a_3275_;
goto v___jp_3232_;
}
else
{
lean_object* v_a_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; 
v_a_3276_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3276_);
lean_dec_ref_known(v___x_3274_, 1);
v___x_3277_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__5));
lean_inc(v_d_3201_);
v___x_3278_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3201_, v___x_3277_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3279_; 
lean_dec(v_a_3276_);
lean_dec(v_a_3272_);
lean_dec(v_a_3268_);
lean_dec(v_a_3264_);
lean_dec(v_a_3260_);
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3279_);
lean_dec_ref_known(v___x_3278_, 1);
v_a_3233_ = v_a_3279_;
goto v___jp_3232_;
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; 
v_a_3280_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3280_);
lean_dec_ref_known(v___x_3278_, 1);
v___x_3281_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__6));
lean_inc(v_d_3201_);
v___x_3282_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3201_, v___x_3281_);
if (lean_obj_tag(v___x_3282_) == 0)
{
lean_object* v_a_3283_; 
lean_dec(v_a_3280_);
lean_dec(v_a_3276_);
lean_dec(v_a_3272_);
lean_dec(v_a_3268_);
lean_dec(v_a_3264_);
lean_dec(v_a_3260_);
v_a_3283_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_a_3283_);
lean_dec_ref_known(v___x_3282_, 1);
v_a_3233_ = v_a_3283_;
goto v___jp_3232_;
}
else
{
lean_object* v_a_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
v_a_3284_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_a_3284_);
lean_dec_ref_known(v___x_3282_, 1);
v___x_3285_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__7));
lean_inc(v_d_3201_);
v___x_3286_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3201_, v___x_3285_);
if (lean_obj_tag(v___x_3286_) == 0)
{
lean_object* v_a_3287_; 
lean_dec(v_a_3284_);
lean_dec(v_a_3280_);
lean_dec(v_a_3276_);
lean_dec(v_a_3272_);
lean_dec(v_a_3268_);
lean_dec(v_a_3264_);
lean_dec(v_a_3260_);
v_a_3287_ = lean_ctor_get(v___x_3286_, 0);
lean_inc(v_a_3287_);
lean_dec_ref_known(v___x_3286_, 1);
v_a_3233_ = v_a_3287_;
goto v___jp_3232_;
}
else
{
lean_object* v_a_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3304_; 
lean_dec(v_d_3201_);
v_a_3288_ = lean_ctor_get(v___x_3286_, 0);
v_isSharedCheck_3304_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3304_ == 0)
{
v___x_3290_ = v___x_3286_;
v_isShared_3291_ = v_isSharedCheck_3304_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_a_3288_);
lean_dec(v___x_3286_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3304_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___x_3292_; double v___x_3293_; double v___x_3294_; double v___x_3295_; double v___x_3296_; double v___x_3297_; double v___x_3298_; double v___x_3299_; double v___x_3300_; lean_object* v___x_3302_; 
v___x_3292_ = lean_alloc_ctor(0, 0, 64);
v___x_3293_ = lean_unbox_float(v_a_3260_);
lean_dec(v_a_3260_);
lean_ctor_set_float(v___x_3292_, 0, v___x_3293_);
v___x_3294_ = lean_unbox_float(v_a_3264_);
lean_dec(v_a_3264_);
lean_ctor_set_float(v___x_3292_, 8, v___x_3294_);
v___x_3295_ = lean_unbox_float(v_a_3268_);
lean_dec(v_a_3268_);
lean_ctor_set_float(v___x_3292_, 16, v___x_3295_);
v___x_3296_ = lean_unbox_float(v_a_3272_);
lean_dec(v_a_3272_);
lean_ctor_set_float(v___x_3292_, 24, v___x_3296_);
v___x_3297_ = lean_unbox_float(v_a_3276_);
lean_dec(v_a_3276_);
lean_ctor_set_float(v___x_3292_, 32, v___x_3297_);
v___x_3298_ = lean_unbox_float(v_a_3280_);
lean_dec(v_a_3280_);
lean_ctor_set_float(v___x_3292_, 40, v___x_3298_);
v___x_3299_ = lean_unbox_float(v_a_3284_);
lean_dec(v_a_3284_);
lean_ctor_set_float(v___x_3292_, 48, v___x_3299_);
v___x_3300_ = lean_unbox_float(v_a_3288_);
lean_dec(v_a_3288_);
lean_ctor_set_float(v___x_3292_, 56, v___x_3300_);
if (v_isShared_3291_ == 0)
{
lean_ctor_set_tag(v___x_3290_, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3292_);
v___x_3302_ = v___x_3290_;
goto v_reusejp_3301_;
}
else
{
lean_object* v_reuseFailAlloc_3303_; 
v_reuseFailAlloc_3303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3303_, 0, v___x_3292_);
v___x_3302_ = v_reuseFailAlloc_3303_;
goto v_reusejp_3301_;
}
v_reusejp_3301_:
{
return v___x_3302_;
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
v___jp_3203_:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3206_ = lean_string_append(v___y_3204_, v___y_3205_);
lean_dec_ref(v___y_3205_);
v___x_3207_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3206_);
v___x_3208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3207_);
return v___x_3208_;
}
v___jp_3209_:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; uint8_t v___x_3223_; 
v___x_3212_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_3213_ = lean_string_append(v___x_3212_, v_context_3200_);
v___x_3214_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_3215_ = lean_string_append(v___x_3213_, v___x_3214_);
v___x_3216_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___closed__1));
v___x_3217_ = lean_string_append(v___x_3215_, v___x_3216_);
v___x_3218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_3219_ = lean_string_append(v___x_3217_, v___x_3218_);
v___x_3220_ = lean_string_append(v___x_3219_, v_received_3211_);
lean_dec_ref(v_received_3211_);
v___x_3221_ = lean_string_utf8_byte_size(v___y_3210_);
v___x_3222_ = lean_unsigned_to_nat(0u);
v___x_3223_ = lean_nat_dec_eq(v___x_3221_, v___x_3222_);
if (v___x_3223_ == 0)
{
lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; 
v___x_3224_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__1));
v___x_3225_ = lean_string_append(v___x_3224_, v___y_3210_);
lean_dec_ref(v___y_3210_);
v___x_3226_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__2));
v___x_3227_ = lean_string_append(v___x_3225_, v___x_3226_);
v___y_3204_ = v___x_3220_;
v___y_3205_ = v___x_3227_;
goto v___jp_3203_;
}
else
{
lean_object* v___x_3228_; 
lean_dec_ref(v___y_3210_);
v___x_3228_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___y_3204_ = v___x_3220_;
v___y_3205_ = v___x_3228_;
goto v___jp_3203_;
}
}
v___jp_3229_:
{
lean_object* v___x_3231_; 
v___x_3231_ = l_Lasm_JS_Data_describe(v_d_3201_);
v___y_3210_ = v___y_3230_;
v_received_3211_ = v___x_3231_;
goto v___jp_3209_;
}
v___jp_3232_:
{
if (lean_obj_tag(v_d_3201_) == 9)
{
lean_object* v_value_3234_; lean_object* v_description_3235_; lean_object* v___x_3236_; uint8_t v___x_3237_; 
v_value_3234_ = lean_ctor_get(v_d_3201_, 0);
v_description_3235_ = lean_ctor_get(v_d_3201_, 1);
v___x_3236_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_3237_ = lean_string_dec_eq(v_description_3235_, v___x_3236_);
if (v___x_3237_ == 0)
{
v___y_3230_ = v_a_3233_;
goto v___jp_3229_;
}
else
{
lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3254_; 
lean_inc(v_value_3234_);
v_isSharedCheck_3254_ = !lean_is_exclusive(v_d_3201_);
if (v_isSharedCheck_3254_ == 0)
{
lean_object* v_unused_3255_; lean_object* v_unused_3256_; 
v_unused_3255_ = lean_ctor_get(v_d_3201_, 1);
lean_dec(v_unused_3255_);
v_unused_3256_ = lean_ctor_get(v_d_3201_, 0);
lean_dec(v_unused_3256_);
v___x_3239_ = v_d_3201_;
v_isShared_3240_ = v_isSharedCheck_3254_;
goto v_resetjp_3238_;
}
else
{
lean_dec(v_d_3201_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3254_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
uint32_t v___x_3241_; uint64_t v___x_3242_; lean_object* v___x_3244_; 
v___x_3241_ = 206;
v___x_3242_ = 0ULL;
lean_inc(v_value_3234_);
if (v_isShared_3240_ == 0)
{
lean_ctor_set(v___x_3239_, 1, v___x_3236_);
v___x_3244_ = v___x_3239_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v_value_3234_);
lean_ctor_set(v_reuseFailAlloc_3253_, 1, v___x_3236_);
v___x_3244_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
uint32_t v___x_3245_; lean_object* v___x_3246_; 
v___x_3245_ = lasm_js_value_handle(v_value_3234_);
lean_dec(v_value_3234_);
v___x_3246_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3241_, v___x_3242_, v___x_3244_, v___x_3245_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v_a_3247_; uint8_t v___x_3248_; 
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
lean_inc(v_a_3247_);
lean_dec_ref_known(v___x_3246_, 1);
v___x_3248_ = lean_string_validate_utf8(v_a_3247_);
if (v___x_3248_ == 0)
{
lean_object* v___x_3249_; lean_object* v___x_3250_; 
lean_dec(v_a_3247_);
v___x_3249_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8);
v___x_3250_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_3249_);
v___y_3210_ = v_a_3233_;
v_received_3211_ = v___x_3250_;
goto v___jp_3209_;
}
else
{
lean_object* v___x_3251_; 
v___x_3251_ = lean_string_from_utf8_unchecked(v_a_3247_);
v___y_3210_ = v_a_3233_;
v_received_3211_ = v___x_3251_;
goto v___jp_3209_;
}
}
else
{
lean_object* v___x_3252_; 
lean_dec_ref_known(v___x_3246_, 1);
v___x_3252_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v___y_3210_ = v_a_3233_;
v_received_3211_ = v___x_3252_;
goto v___jp_3209_;
}
}
}
}
}
else
{
v___y_3230_ = v_a_3233_;
goto v___jp_3229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0___boxed(lean_object* v_context_3305_, lean_object* v_d_3306_, lean_object* v_a_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0(v_context_3305_, v_d_3306_);
lean_dec_ref(v_context_3305_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0(lean_object* v_b_3309_, lean_object* v_args_3310_, uint8_t v_await_3311_){
_start:
{
uint64_t v___y_3314_; uint64_t v___y_3315_; uint64_t v___x_3350_; uint64_t v___y_3352_; 
v___x_3350_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_3311_ == 0)
{
uint64_t v___x_3357_; 
v___x_3357_ = 0ULL;
v___y_3352_ = v___x_3357_;
goto v___jp_3351_;
}
else
{
uint64_t v___x_3358_; 
v___x_3358_ = 2ULL;
v___y_3352_ = v___x_3358_;
goto v___jp_3351_;
}
v___jp_3313_:
{
uint64_t v_flags_3316_; uint32_t v___x_3317_; lean_object* v___x_3318_; uint32_t v___x_3319_; lean_object* v___x_3320_; 
v_flags_3316_ = lean_uint64_lor(v___y_3314_, v___y_3315_);
v___x_3317_ = 214;
v___x_3318_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3309_, v_args_3310_);
v___x_3319_ = 0;
v___x_3320_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3317_, v_flags_3316_, v___x_3318_, v___x_3319_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; lean_object* v___x_3322_; 
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_a_3321_);
lean_dec_ref_known(v___x_3320_, 1);
v___x_3322_ = l_Lasm_JS_Wire_decode(v_a_3321_);
lean_dec(v_a_3321_);
if (lean_obj_tag(v___x_3322_) == 0)
{
lean_object* v_a_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v_a_3323_ = lean_ctor_get(v___x_3322_, 0);
lean_inc(v_a_3323_);
lean_dec_ref_known(v___x_3322_, 1);
v___x_3324_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3309_);
v___x_3325_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0(v___x_3324_, v_a_3323_);
lean_dec_ref(v___x_3324_);
return v___x_3325_;
}
else
{
lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3333_; 
v_a_3326_ = lean_ctor_get(v___x_3322_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v___x_3322_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3328_ = v___x_3322_;
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v___x_3322_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3331_; 
if (v_isShared_3329_ == 0)
{
v___x_3331_ = v___x_3328_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v_a_3326_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
return v___x_3331_;
}
}
}
}
else
{
lean_object* v_a_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3349_; 
v_a_3334_ = lean_ctor_get(v___x_3320_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3336_ = v___x_3320_;
v_isShared_3337_ = v_isSharedCheck_3349_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_a_3334_);
lean_dec(v___x_3320_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3349_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3347_; 
v___x_3338_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_3339_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3309_);
v___x_3340_ = lean_string_append(v___x_3338_, v___x_3339_);
lean_dec_ref(v___x_3339_);
v___x_3341_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_3342_ = lean_string_append(v___x_3340_, v___x_3341_);
v___x_3343_ = lean_io_error_to_string(v_a_3334_);
v___x_3344_ = lean_string_append(v___x_3342_, v___x_3343_);
lean_dec_ref(v___x_3343_);
v___x_3345_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3344_);
if (v_isShared_3337_ == 0)
{
lean_ctor_set(v___x_3336_, 0, v___x_3345_);
v___x_3347_ = v___x_3336_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v___x_3345_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
}
}
v___jp_3351_:
{
uint8_t v_construct_3353_; uint64_t v___x_3354_; 
v_construct_3353_ = lean_ctor_get_uint8(v_b_3309_, sizeof(void*)*4);
v___x_3354_ = lean_uint64_lor(v___x_3350_, v___y_3352_);
if (v_construct_3353_ == 0)
{
uint64_t v___x_3355_; 
v___x_3355_ = 0ULL;
v___y_3314_ = v___x_3354_;
v___y_3315_ = v___x_3355_;
goto v___jp_3313_;
}
else
{
uint64_t v___x_3356_; 
v___x_3356_ = 4ULL;
v___y_3314_ = v___x_3354_;
v___y_3315_ = v___x_3356_;
goto v___jp_3313_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0___boxed(lean_object* v_b_3359_, lean_object* v_args_3360_, lean_object* v_await_3361_, lean_object* v_a_3362_){
_start:
{
uint8_t v_await_boxed_3363_; lean_object* v_res_3364_; 
v_await_boxed_3363_ = lean_unbox(v_await_3361_);
v_res_3364_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0(v_b_3359_, v_args_3360_, v_await_boxed_3363_);
lean_dec_ref(v_b_3359_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_rectOf(lean_object* v_a_3373_){
_start:
{
lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; uint8_t v___x_3380_; lean_object* v___x_3381_; 
v___x_3375_ = ((lean_object*)(l_Lasm_Web_rectOf___closed__2));
v___x_3376_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_3377_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_3378_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3378_, 0, v_a_3373_);
lean_ctor_set(v___x_3378_, 1, v___x_3377_);
v___x_3379_ = lean_array_push(v___x_3376_, v___x_3378_);
v___x_3380_ = 1;
v___x_3381_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0(v___x_3375_, v___x_3379_, v___x_3380_);
return v___x_3381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_rectOf___boxed(lean_object* v_a_3382_, lean_object* v_a_3383_){
_start:
{
lean_object* v_res_3384_; 
v_res_3384_ = l_Lasm_Web_rectOf(v_a_3382_);
return v_res_3384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_appendChild(lean_object* v_parent_3385_, lean_object* v_child_3386_){
_start:
{
lean_object* v___x_3388_; 
v___x_3388_ = l_Lasm_Web_Raw_appendChild(v_parent_3385_, v_child_3386_);
return v___x_3388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_appendChild___boxed(lean_object* v_parent_3389_, lean_object* v_child_3390_, lean_object* v_a_3391_){
_start:
{
lean_object* v_res_3392_; 
v_res_3392_ = l_Lasm_Web_Node_appendChild(v_parent_3389_, v_child_3390_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_append(lean_object* v_parent_3393_, lean_object* v_children_3394_){
_start:
{
lean_object* v___x_3396_; 
v___x_3396_ = l_Lasm_Web_Raw_append(v_parent_3393_, v_children_3394_);
return v___x_3396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_append___boxed(lean_object* v_parent_3397_, lean_object* v_children_3398_, lean_object* v_a_3399_){
_start:
{
lean_object* v_res_3400_; 
v_res_3400_ = l_Lasm_Web_Node_append(v_parent_3397_, v_children_3398_);
return v_res_3400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_insertBefore(lean_object* v_parent_3401_, lean_object* v_child_3402_, lean_object* v_reference_3403_){
_start:
{
lean_object* v___x_3405_; 
v___x_3405_ = l_Lasm_Web_Raw_insertBefore(v_parent_3401_, v_child_3402_, v_reference_3403_);
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_insertBefore___boxed(lean_object* v_parent_3406_, lean_object* v_child_3407_, lean_object* v_reference_3408_, lean_object* v_a_3409_){
_start:
{
lean_object* v_res_3410_; 
v_res_3410_ = l_Lasm_Web_Node_insertBefore(v_parent_3406_, v_child_3407_, v_reference_3408_);
lean_dec(v_reference_3408_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_removeChild(lean_object* v_parent_3411_, lean_object* v_child_3412_){
_start:
{
lean_object* v___x_3414_; 
v___x_3414_ = l_Lasm_Web_Raw_removeChild(v_parent_3411_, v_child_3412_);
return v___x_3414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_removeChild___boxed(lean_object* v_parent_3415_, lean_object* v_child_3416_, lean_object* v_a_3417_){
_start:
{
lean_object* v_res_3418_; 
v_res_3418_ = l_Lasm_Web_Node_removeChild(v_parent_3415_, v_child_3416_);
return v_res_3418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_remove(lean_object* v_node_3419_){
_start:
{
lean_object* v___x_3421_; 
v___x_3421_ = l_Lasm_Web_Raw_removeNode(v_node_3419_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_remove___boxed(lean_object* v_node_3422_, lean_object* v_a_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l_Lasm_Web_Node_remove(v_node_3422_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceWith(lean_object* v_node_3425_, lean_object* v_replacement_3426_){
_start:
{
lean_object* v___x_3428_; 
v___x_3428_ = l_Lasm_Web_Raw_replaceNode(v_node_3425_, v_replacement_3426_);
return v___x_3428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceWith___boxed(lean_object* v_node_3429_, lean_object* v_replacement_3430_, lean_object* v_a_3431_){
_start:
{
lean_object* v_res_3432_; 
v_res_3432_ = l_Lasm_Web_Node_replaceWith(v_node_3429_, v_replacement_3430_);
return v_res_3432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceChildren(lean_object* v_parent_3433_, lean_object* v_children_3434_){
_start:
{
lean_object* v___x_3436_; 
v___x_3436_ = l_Lasm_Web_Raw_replaceChildren(v_parent_3433_, v_children_3434_);
return v___x_3436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceChildren___boxed(lean_object* v_parent_3437_, lean_object* v_children_3438_, lean_object* v_a_3439_){
_start:
{
lean_object* v_res_3440_; 
v_res_3440_ = l_Lasm_Web_Node_replaceChildren(v_parent_3437_, v_children_3438_);
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_textContent(lean_object* v_node_3441_){
_start:
{
lean_object* v___x_3443_; 
v___x_3443_ = l_Lasm_Web_Raw_getText(v_node_3441_);
return v___x_3443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_textContent___boxed(lean_object* v_node_3444_, lean_object* v_a_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l_Lasm_Web_Node_textContent(v_node_3444_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_setTextContent(lean_object* v_node_3447_, lean_object* v_text_3448_){
_start:
{
lean_object* v___x_3450_; 
v___x_3450_ = l_Lasm_Web_Raw_setText(v_node_3447_, v_text_3448_);
return v___x_3450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_setTextContent___boxed(lean_object* v_node_3451_, lean_object* v_text_3452_, lean_object* v_a_3453_){
_start:
{
lean_object* v_res_3454_; 
v_res_3454_ = l_Lasm_Web_Node_setTextContent(v_node_3451_, v_text_3452_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentNode(lean_object* v_node_3455_){
_start:
{
lean_object* v___x_3457_; 
v___x_3457_ = l_Lasm_Web_Raw_parentNode(v_node_3455_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentNode___boxed(lean_object* v_node_3458_, lean_object* v_a_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l_Lasm_Web_Node_parentNode(v_node_3458_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentElement(lean_object* v_node_3461_){
_start:
{
lean_object* v___x_3463_; 
v___x_3463_ = l_Lasm_Web_Raw_parentElement(v_node_3461_);
return v___x_3463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentElement___boxed(lean_object* v_node_3464_, lean_object* v_a_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Lasm_Web_Node_parentElement(v_node_3464_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_firstChild(lean_object* v_node_3467_){
_start:
{
lean_object* v___x_3469_; 
v___x_3469_ = l_Lasm_Web_Raw_firstChild(v_node_3467_);
return v___x_3469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_firstChild___boxed(lean_object* v_node_3470_, lean_object* v_a_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Lasm_Web_Node_firstChild(v_node_3470_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_lastChild(lean_object* v_node_3473_){
_start:
{
lean_object* v___x_3475_; 
v___x_3475_ = l_Lasm_Web_Raw_lastChild(v_node_3473_);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_lastChild___boxed(lean_object* v_node_3476_, lean_object* v_a_3477_){
_start:
{
lean_object* v_res_3478_; 
v_res_3478_ = l_Lasm_Web_Node_lastChild(v_node_3476_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nextSibling(lean_object* v_node_3479_){
_start:
{
lean_object* v___x_3481_; 
v___x_3481_ = l_Lasm_Web_Raw_nextSibling(v_node_3479_);
return v___x_3481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nextSibling___boxed(lean_object* v_node_3482_, lean_object* v_a_3483_){
_start:
{
lean_object* v_res_3484_; 
v_res_3484_ = l_Lasm_Web_Node_nextSibling(v_node_3482_);
return v_res_3484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_previousSibling(lean_object* v_node_3485_){
_start:
{
lean_object* v___x_3487_; 
v___x_3487_ = l_Lasm_Web_Raw_previousSibling(v_node_3485_);
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_previousSibling___boxed(lean_object* v_node_3488_, lean_object* v_a_3489_){
_start:
{
lean_object* v_res_3490_; 
v_res_3490_ = l_Lasm_Web_Node_previousSibling(v_node_3488_);
return v_res_3490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_childNodes(lean_object* v_node_3491_){
_start:
{
lean_object* v___x_3493_; 
v___x_3493_ = l_Lasm_Web_Raw_childNodes(v_node_3491_);
return v___x_3493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_childNodes___boxed(lean_object* v_node_3494_, lean_object* v_a_3495_){
_start:
{
lean_object* v_res_3496_; 
v_res_3496_ = l_Lasm_Web_Node_childNodes(v_node_3494_);
return v_res_3496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_contains(lean_object* v_node_3497_, lean_object* v_other_3498_){
_start:
{
lean_object* v___x_3500_; 
v___x_3500_ = l_Lasm_Web_Raw_contains(v_node_3497_, v_other_3498_);
return v___x_3500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_contains___boxed(lean_object* v_node_3501_, lean_object* v_other_3502_, lean_object* v_a_3503_){
_start:
{
lean_object* v_res_3504_; 
v_res_3504_ = l_Lasm_Web_Node_contains(v_node_3501_, v_other_3502_);
return v_res_3504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_cloneNode(lean_object* v_node_3505_, uint8_t v_deep_3506_){
_start:
{
lean_object* v___x_3508_; 
v___x_3508_ = l_Lasm_Web_Raw_cloneNode(v_node_3505_, v_deep_3506_);
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_cloneNode___boxed(lean_object* v_node_3509_, lean_object* v_deep_3510_, lean_object* v_a_3511_){
_start:
{
uint8_t v_deep_boxed_3512_; lean_object* v_res_3513_; 
v_deep_boxed_3512_ = lean_unbox(v_deep_3510_);
v_res_3513_ = l_Lasm_Web_Node_cloneNode(v_node_3509_, v_deep_boxed_3512_);
return v_res_3513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_isConnected(lean_object* v_node_3514_){
_start:
{
lean_object* v___x_3516_; 
v___x_3516_ = l_Lasm_Web_Raw_isConnected(v_node_3514_);
return v___x_3516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_isConnected___boxed(lean_object* v_node_3517_, lean_object* v_a_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l_Lasm_Web_Node_isConnected(v_node_3517_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nodeName(lean_object* v_node_3520_){
_start:
{
lean_object* v___x_3522_; 
v___x_3522_ = l_Lasm_Web_Raw_nodeName(v_node_3520_);
return v___x_3522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nodeName___boxed(lean_object* v_node_3523_, lean_object* v_a_3524_){
_start:
{
lean_object* v_res_3525_; 
v_res_3525_ = l_Lasm_Web_Node_nodeName(v_node_3523_);
return v_res_3525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelector(lean_object* v_node_3526_, lean_object* v_selector_3527_){
_start:
{
lean_object* v___x_3529_; lean_object* v___x_3530_; 
v___x_3529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3529_, 0, v_node_3526_);
v___x_3530_ = l_Lasm_Web_querySelectorIn(v_selector_3527_, v___x_3529_);
lean_dec_ref_known(v___x_3529_, 1);
return v___x_3530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelector___boxed(lean_object* v_node_3531_, lean_object* v_selector_3532_, lean_object* v_a_3533_){
_start:
{
lean_object* v_res_3534_; 
v_res_3534_ = l_Lasm_Web_Node_querySelector(v_node_3531_, v_selector_3532_);
return v_res_3534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelectorAll(lean_object* v_node_3535_, lean_object* v_selector_3536_){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; 
v___x_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3538_, 0, v_node_3535_);
v___x_3539_ = l_Lasm_Web_querySelectorAllIn(v_selector_3536_, v___x_3538_);
lean_dec_ref_known(v___x_3538_, 1);
return v___x_3539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelectorAll___boxed(lean_object* v_node_3540_, lean_object* v_selector_3541_, lean_object* v_a_3542_){
_start:
{
lean_object* v_res_3543_; 
v_res_3543_ = l_Lasm_Web_Node_querySelectorAll(v_node_3540_, v_selector_3541_);
return v_res_3543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_tagName(lean_object* v_e_3544_){
_start:
{
lean_object* v___x_3546_; 
v___x_3546_ = l_Lasm_Web_Raw_tagName(v_e_3544_);
return v___x_3546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_tagName___boxed(lean_object* v_e_3547_, lean_object* v_a_3548_){
_start:
{
lean_object* v_res_3549_; 
v_res_3549_ = l_Lasm_Web_Element_tagName(v_e_3547_);
return v_res_3549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_children(lean_object* v_e_3550_){
_start:
{
lean_object* v___x_3552_; 
v___x_3552_ = l_Lasm_Web_Raw_children(v_e_3550_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_children___boxed(lean_object* v_e_3553_, lean_object* v_a_3554_){
_start:
{
lean_object* v_res_3555_; 
v_res_3555_ = l_Lasm_Web_Element_children(v_e_3553_);
return v_res_3555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_getAttribute(lean_object* v_e_3556_, lean_object* v_name_3557_){
_start:
{
lean_object* v___x_3559_; 
v___x_3559_ = l_Lasm_Web_Raw_getAttribute(v_e_3556_, v_name_3557_);
return v___x_3559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_getAttribute___boxed(lean_object* v_e_3560_, lean_object* v_name_3561_, lean_object* v_a_3562_){
_start:
{
lean_object* v_res_3563_; 
v_res_3563_ = l_Lasm_Web_Element_getAttribute(v_e_3560_, v_name_3561_);
return v_res_3563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttribute(lean_object* v_e_3564_, lean_object* v_name_3565_, lean_object* v_value_3566_){
_start:
{
lean_object* v___x_3568_; 
v___x_3568_ = l_Lasm_Web_Raw_setAttribute(v_e_3564_, v_name_3565_, v_value_3566_);
return v___x_3568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttribute___boxed(lean_object* v_e_3569_, lean_object* v_name_3570_, lean_object* v_value_3571_, lean_object* v_a_3572_){
_start:
{
lean_object* v_res_3573_; 
v_res_3573_ = l_Lasm_Web_Element_setAttribute(v_e_3569_, v_name_3570_, v_value_3571_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttributes(lean_object* v_e_3574_, lean_object* v_attributes_3575_){
_start:
{
lean_object* v___x_3577_; 
v___x_3577_ = l_Lasm_Web_Raw_setAttributes(v_e_3574_, v_attributes_3575_);
return v___x_3577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttributes___boxed(lean_object* v_e_3578_, lean_object* v_attributes_3579_, lean_object* v_a_3580_){
_start:
{
lean_object* v_res_3581_; 
v_res_3581_ = l_Lasm_Web_Element_setAttributes(v_e_3578_, v_attributes_3579_);
return v_res_3581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeAttribute(lean_object* v_e_3582_, lean_object* v_name_3583_){
_start:
{
lean_object* v___x_3585_; 
v___x_3585_ = l_Lasm_Web_Raw_removeAttribute(v_e_3582_, v_name_3583_);
return v___x_3585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeAttribute___boxed(lean_object* v_e_3586_, lean_object* v_name_3587_, lean_object* v_a_3588_){
_start:
{
lean_object* v_res_3589_; 
v_res_3589_ = l_Lasm_Web_Element_removeAttribute(v_e_3586_, v_name_3587_);
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasAttribute(lean_object* v_e_3590_, lean_object* v_name_3591_){
_start:
{
lean_object* v___x_3593_; 
v___x_3593_ = l_Lasm_Web_Raw_hasAttribute(v_e_3590_, v_name_3591_);
return v___x_3593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasAttribute___boxed(lean_object* v_e_3594_, lean_object* v_name_3595_, lean_object* v_a_3596_){
_start:
{
lean_object* v_res_3597_; 
v_res_3597_ = l_Lasm_Web_Element_hasAttribute(v_e_3594_, v_name_3595_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleAttribute(lean_object* v_e_3598_, lean_object* v_name_3599_, lean_object* v_force_3600_){
_start:
{
lean_object* v___x_3602_; 
v___x_3602_ = l_Lasm_Web_Raw_toggleAttribute(v_e_3598_, v_name_3599_, v_force_3600_);
return v___x_3602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleAttribute___boxed(lean_object* v_e_3603_, lean_object* v_name_3604_, lean_object* v_force_3605_, lean_object* v_a_3606_){
_start:
{
lean_object* v_res_3607_; 
v_res_3607_ = l_Lasm_Web_Element_toggleAttribute(v_e_3603_, v_name_3604_, v_force_3605_);
lean_dec(v_force_3605_);
return v_res_3607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_id(lean_object* v_e_3609_){
_start:
{
lean_object* v___x_3611_; lean_object* v___x_3612_; 
v___x_3611_ = ((lean_object*)(l_Lasm_Web_Element_id___closed__0));
v___x_3612_ = l_Lasm_Web_Raw_getAttribute(v_e_3609_, v___x_3611_);
if (lean_obj_tag(v___x_3612_) == 0)
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3625_; 
v_a_3613_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3615_ = v___x_3612_;
v_isShared_3616_ = v_isSharedCheck_3625_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3612_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3625_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
if (lean_obj_tag(v_a_3613_) == 0)
{
lean_object* v___x_3617_; lean_object* v___x_3619_; 
v___x_3617_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
if (v_isShared_3616_ == 0)
{
lean_ctor_set(v___x_3615_, 0, v___x_3617_);
v___x_3619_ = v___x_3615_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v___x_3617_);
v___x_3619_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
return v___x_3619_;
}
}
else
{
lean_object* v_val_3621_; lean_object* v___x_3623_; 
v_val_3621_ = lean_ctor_get(v_a_3613_, 0);
lean_inc(v_val_3621_);
lean_dec_ref_known(v_a_3613_, 1);
if (v_isShared_3616_ == 0)
{
lean_ctor_set(v___x_3615_, 0, v_val_3621_);
v___x_3623_ = v___x_3615_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_val_3621_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
}
}
}
}
else
{
lean_object* v_a_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3633_; 
v_a_3626_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3628_ = v___x_3612_;
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_a_3626_);
lean_dec(v___x_3612_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3631_; 
if (v_isShared_3629_ == 0)
{
v___x_3631_ = v___x_3628_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_a_3626_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_id___boxed(lean_object* v_e_3634_, lean_object* v_a_3635_){
_start:
{
lean_object* v_res_3636_; 
v_res_3636_ = l_Lasm_Web_Element_id(v_e_3634_);
return v_res_3636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setId(lean_object* v_e_3637_, lean_object* v_id_3638_){
_start:
{
lean_object* v___x_3640_; lean_object* v___x_3641_; 
v___x_3640_ = ((lean_object*)(l_Lasm_Web_Element_id___closed__0));
v___x_3641_ = l_Lasm_Web_Raw_setAttribute(v_e_3637_, v___x_3640_, v_id_3638_);
return v___x_3641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setId___boxed(lean_object* v_e_3642_, lean_object* v_id_3643_, lean_object* v_a_3644_){
_start:
{
lean_object* v_res_3645_; 
v_res_3645_ = l_Lasm_Web_Element_setId(v_e_3642_, v_id_3643_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_data(lean_object* v_e_3647_, lean_object* v_key_3648_){
_start:
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3650_ = ((lean_object*)(l_Lasm_Web_Element_data___closed__0));
v___x_3651_ = lean_string_append(v___x_3650_, v_key_3648_);
v___x_3652_ = l_Lasm_Web_Raw_getAttribute(v_e_3647_, v___x_3651_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_data___boxed(lean_object* v_e_3653_, lean_object* v_key_3654_, lean_object* v_a_3655_){
_start:
{
lean_object* v_res_3656_; 
v_res_3656_ = l_Lasm_Web_Element_data(v_e_3653_, v_key_3654_);
lean_dec_ref(v_key_3654_);
return v_res_3656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setData(lean_object* v_e_3657_, lean_object* v_key_3658_, lean_object* v_value_3659_){
_start:
{
lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v___x_3661_ = ((lean_object*)(l_Lasm_Web_Element_data___closed__0));
v___x_3662_ = lean_string_append(v___x_3661_, v_key_3658_);
v___x_3663_ = l_Lasm_Web_Raw_setAttribute(v_e_3657_, v___x_3662_, v_value_3659_);
return v___x_3663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setData___boxed(lean_object* v_e_3664_, lean_object* v_key_3665_, lean_object* v_value_3666_, lean_object* v_a_3667_){
_start:
{
lean_object* v_res_3668_; 
v_res_3668_ = l_Lasm_Web_Element_setData(v_e_3664_, v_key_3665_, v_value_3666_);
lean_dec_ref(v_key_3665_);
return v_res_3668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_addClass(lean_object* v_e_3669_, lean_object* v_names_3670_){
_start:
{
lean_object* v___x_3672_; 
v___x_3672_ = l_Lasm_Web_Raw_classAdd(v_e_3669_, v_names_3670_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_addClass___boxed(lean_object* v_e_3673_, lean_object* v_names_3674_, lean_object* v_a_3675_){
_start:
{
lean_object* v_res_3676_; 
v_res_3676_ = l_Lasm_Web_Element_addClass(v_e_3673_, v_names_3674_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeClass(lean_object* v_e_3677_, lean_object* v_names_3678_){
_start:
{
lean_object* v___x_3680_; 
v___x_3680_ = l_Lasm_Web_Raw_classRemove(v_e_3677_, v_names_3678_);
return v___x_3680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeClass___boxed(lean_object* v_e_3681_, lean_object* v_names_3682_, lean_object* v_a_3683_){
_start:
{
lean_object* v_res_3684_; 
v_res_3684_ = l_Lasm_Web_Element_removeClass(v_e_3681_, v_names_3682_);
return v_res_3684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleClass(lean_object* v_e_3685_, lean_object* v_name_3686_, lean_object* v_force_3687_){
_start:
{
lean_object* v___x_3689_; 
v___x_3689_ = l_Lasm_Web_Raw_classToggle(v_e_3685_, v_name_3686_, v_force_3687_);
return v___x_3689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleClass___boxed(lean_object* v_e_3690_, lean_object* v_name_3691_, lean_object* v_force_3692_, lean_object* v_a_3693_){
_start:
{
lean_object* v_res_3694_; 
v_res_3694_ = l_Lasm_Web_Element_toggleClass(v_e_3690_, v_name_3691_, v_force_3692_);
lean_dec(v_force_3692_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasClass(lean_object* v_e_3695_, lean_object* v_name_3696_){
_start:
{
lean_object* v___x_3698_; 
v___x_3698_ = l_Lasm_Web_Raw_classContains(v_e_3695_, v_name_3696_);
return v___x_3698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasClass___boxed(lean_object* v_e_3699_, lean_object* v_name_3700_, lean_object* v_a_3701_){
_start:
{
lean_object* v_res_3702_; 
v_res_3702_ = l_Lasm_Web_Element_hasClass(v_e_3699_, v_name_3700_);
return v_res_3702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setClassName(lean_object* v_e_3704_, lean_object* v_names_3705_){
_start:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3707_ = ((lean_object*)(l_Lasm_Web_Element_setClassName___closed__0));
v___x_3708_ = l_Lasm_Web_Raw_setAttribute(v_e_3704_, v___x_3707_, v_names_3705_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setClassName___boxed(lean_object* v_e_3709_, lean_object* v_names_3710_, lean_object* v_a_3711_){
_start:
{
lean_object* v_res_3712_; 
v_res_3712_ = l_Lasm_Web_Element_setClassName(v_e_3709_, v_names_3710_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyle(lean_object* v_e_3713_, lean_object* v_property_3714_, lean_object* v_value_3715_){
_start:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; 
v___x_3717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3717_, 0, v_property_3714_);
lean_ctor_set(v___x_3717_, 1, v_value_3715_);
v___x_3718_ = lean_unsigned_to_nat(1u);
v___x_3719_ = lean_mk_empty_array_with_capacity(v___x_3718_);
v___x_3720_ = lean_array_push(v___x_3719_, v___x_3717_);
v___x_3721_ = l_Lasm_Web_Raw_setStyles(v_e_3713_, v___x_3720_);
return v___x_3721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyle___boxed(lean_object* v_e_3722_, lean_object* v_property_3723_, lean_object* v_value_3724_, lean_object* v_a_3725_){
_start:
{
lean_object* v_res_3726_; 
v_res_3726_ = l_Lasm_Web_Element_setStyle(v_e_3722_, v_property_3723_, v_value_3724_);
return v_res_3726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyles(lean_object* v_e_3727_, lean_object* v_properties_3728_){
_start:
{
lean_object* v___x_3730_; 
v___x_3730_ = l_Lasm_Web_Raw_setStyles(v_e_3727_, v_properties_3728_);
return v___x_3730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyles___boxed(lean_object* v_e_3731_, lean_object* v_properties_3732_, lean_object* v_a_3733_){
_start:
{
lean_object* v_res_3734_; 
v_res_3734_ = l_Lasm_Web_Element_setStyles(v_e_3731_, v_properties_3732_);
return v_res_3734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeStyle(lean_object* v_e_3735_, lean_object* v_property_3736_){
_start:
{
lean_object* v___x_3738_; 
v___x_3738_ = l_Lasm_Web_Raw_removeStyle(v_e_3735_, v_property_3736_);
return v___x_3738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeStyle___boxed(lean_object* v_e_3739_, lean_object* v_property_3740_, lean_object* v_a_3741_){
_start:
{
lean_object* v_res_3742_; 
v_res_3742_ = l_Lasm_Web_Element_removeStyle(v_e_3739_, v_property_3740_);
return v_res_3742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_style(lean_object* v_e_3743_, lean_object* v_property_3744_){
_start:
{
lean_object* v___x_3746_; 
v___x_3746_ = l_Lasm_Web_Raw_style(v_e_3743_, v_property_3744_);
return v___x_3746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_style___boxed(lean_object* v_e_3747_, lean_object* v_property_3748_, lean_object* v_a_3749_){
_start:
{
lean_object* v_res_3750_; 
v_res_3750_ = l_Lasm_Web_Element_style(v_e_3747_, v_property_3748_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_innerHTML(lean_object* v_e_3751_){
_start:
{
lean_object* v___x_3753_; 
v___x_3753_ = l_Lasm_Web_Raw_getInnerHTML(v_e_3751_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_innerHTML___boxed(lean_object* v_e_3754_, lean_object* v_a_3755_){
_start:
{
lean_object* v_res_3756_; 
v_res_3756_ = l_Lasm_Web_Element_innerHTML(v_e_3754_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setInnerHTML(lean_object* v_e_3757_, lean_object* v_html_3758_){
_start:
{
lean_object* v___x_3760_; 
v___x_3760_ = l_Lasm_Web_Raw_setInnerHTML(v_e_3757_, v_html_3758_);
return v___x_3760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setInnerHTML___boxed(lean_object* v_e_3761_, lean_object* v_html_3762_, lean_object* v_a_3763_){
_start:
{
lean_object* v_res_3764_; 
v_res_3764_ = l_Lasm_Web_Element_setInnerHTML(v_e_3761_, v_html_3762_);
return v_res_3764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_value(lean_object* v_e_3765_){
_start:
{
lean_object* v___x_3767_; 
v___x_3767_ = l_Lasm_Web_Raw_getValue(v_e_3765_);
return v___x_3767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_value___boxed(lean_object* v_e_3768_, lean_object* v_a_3769_){
_start:
{
lean_object* v_res_3770_; 
v_res_3770_ = l_Lasm_Web_Element_value(v_e_3768_);
return v_res_3770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setValue(lean_object* v_e_3771_, lean_object* v_value_3772_){
_start:
{
lean_object* v___x_3774_; 
v___x_3774_ = l_Lasm_Web_Raw_setValue(v_e_3771_, v_value_3772_);
return v___x_3774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setValue___boxed(lean_object* v_e_3775_, lean_object* v_value_3776_, lean_object* v_a_3777_){
_start:
{
lean_object* v_res_3778_; 
v_res_3778_ = l_Lasm_Web_Element_setValue(v_e_3775_, v_value_3776_);
return v_res_3778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_checked(lean_object* v_e_3779_){
_start:
{
lean_object* v___x_3781_; 
v___x_3781_ = l_Lasm_Web_Raw_getChecked(v_e_3779_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_checked___boxed(lean_object* v_e_3782_, lean_object* v_a_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l_Lasm_Web_Element_checked(v_e_3782_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setChecked(lean_object* v_e_3785_, uint8_t v_checked_3786_){
_start:
{
lean_object* v___x_3788_; 
v___x_3788_ = l_Lasm_Web_Raw_setChecked(v_e_3785_, v_checked_3786_);
return v___x_3788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setChecked___boxed(lean_object* v_e_3789_, lean_object* v_checked_3790_, lean_object* v_a_3791_){
_start:
{
uint8_t v_checked_boxed_3792_; lean_object* v_res_3793_; 
v_checked_boxed_3792_ = lean_unbox(v_checked_3790_);
v_res_3793_ = l_Lasm_Web_Element_setChecked(v_e_3789_, v_checked_boxed_3792_);
return v_res_3793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_focus(lean_object* v_e_3794_){
_start:
{
lean_object* v___x_3796_; 
v___x_3796_ = l_Lasm_Web_Raw_focus(v_e_3794_);
return v___x_3796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_focus___boxed(lean_object* v_e_3797_, lean_object* v_a_3798_){
_start:
{
lean_object* v_res_3799_; 
v_res_3799_ = l_Lasm_Web_Element_focus(v_e_3797_);
return v_res_3799_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_blur(lean_object* v_e_3800_){
_start:
{
lean_object* v___x_3802_; 
v___x_3802_ = l_Lasm_Web_Raw_blur(v_e_3800_);
return v___x_3802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_blur___boxed(lean_object* v_e_3803_, lean_object* v_a_3804_){
_start:
{
lean_object* v_res_3805_; 
v_res_3805_ = l_Lasm_Web_Element_blur(v_e_3803_);
return v_res_3805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_click(lean_object* v_e_3806_){
_start:
{
lean_object* v___x_3808_; 
v___x_3808_ = l_Lasm_Web_Raw_click(v_e_3806_);
return v___x_3808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_click___boxed(lean_object* v_e_3809_, lean_object* v_a_3810_){
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l_Lasm_Web_Element_click(v_e_3809_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_scrollIntoView(lean_object* v_e_3812_, uint8_t v_smooth_3813_){
_start:
{
lean_object* v___x_3815_; 
v___x_3815_ = l_Lasm_Web_Raw_scrollIntoView(v_e_3812_, v_smooth_3813_);
return v___x_3815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_scrollIntoView___boxed(lean_object* v_e_3816_, lean_object* v_smooth_3817_, lean_object* v_a_3818_){
_start:
{
uint8_t v_smooth_boxed_3819_; lean_object* v_res_3820_; 
v_smooth_boxed_3819_ = lean_unbox(v_smooth_3817_);
v_res_3820_ = l_Lasm_Web_Element_scrollIntoView(v_e_3816_, v_smooth_boxed_3819_);
return v_res_3820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_rect(lean_object* v_e_3821_){
_start:
{
lean_object* v___x_3823_; 
v___x_3823_ = l_Lasm_Web_rectOf(v_e_3821_);
return v___x_3823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_rect___boxed(lean_object* v_e_3824_, lean_object* v_a_3825_){
_start:
{
lean_object* v_res_3826_; 
v_res_3826_ = l_Lasm_Web_Element_rect(v_e_3824_);
return v_res_3826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___redArg(lean_object* v_e_3828_, lean_object* v_name_3829_, lean_object* v_inst_3830_){
_start:
{
lean_object* v___x_3832_; 
lean_inc_ref(v_name_3829_);
v___x_3832_ = l_Lasm_Web_Raw_getProp(v_e_3828_, v_name_3829_);
if (lean_obj_tag(v___x_3832_) == 0)
{
lean_object* v_a_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; 
v_a_3833_ = lean_ctor_get(v___x_3832_, 0);
lean_inc(v_a_3833_);
lean_dec_ref_known(v___x_3832_, 1);
v___x_3834_ = ((lean_object*)(l_Lasm_Web_Element_prop___redArg___closed__0));
v___x_3835_ = lean_string_append(v___x_3834_, v_name_3829_);
lean_dec_ref(v_name_3829_);
v___x_3836_ = l_Lasm_JS_decodeAs___redArg(v_inst_3830_, v___x_3835_, v_a_3833_);
lean_dec_ref(v___x_3835_);
return v___x_3836_;
}
else
{
lean_object* v_a_3837_; lean_object* v___x_3839_; uint8_t v_isShared_3840_; uint8_t v_isSharedCheck_3844_; 
lean_dec_ref(v_inst_3830_);
lean_dec_ref(v_name_3829_);
v_a_3837_ = lean_ctor_get(v___x_3832_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v___x_3832_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3839_ = v___x_3832_;
v_isShared_3840_ = v_isSharedCheck_3844_;
goto v_resetjp_3838_;
}
else
{
lean_inc(v_a_3837_);
lean_dec(v___x_3832_);
v___x_3839_ = lean_box(0);
v_isShared_3840_ = v_isSharedCheck_3844_;
goto v_resetjp_3838_;
}
v_resetjp_3838_:
{
lean_object* v___x_3842_; 
if (v_isShared_3840_ == 0)
{
v___x_3842_ = v___x_3839_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v_a_3837_);
v___x_3842_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
return v___x_3842_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___redArg___boxed(lean_object* v_e_3845_, lean_object* v_name_3846_, lean_object* v_inst_3847_, lean_object* v_a_3848_){
_start:
{
lean_object* v_res_3849_; 
v_res_3849_ = l_Lasm_Web_Element_prop___redArg(v_e_3845_, v_name_3846_, v_inst_3847_);
return v_res_3849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop(lean_object* v_e_3850_, lean_object* v_name_3851_, lean_object* v_00_u03b1_3852_, lean_object* v_inst_3853_){
_start:
{
lean_object* v___x_3855_; 
v___x_3855_ = l_Lasm_Web_Element_prop___redArg(v_e_3850_, v_name_3851_, v_inst_3853_);
return v___x_3855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___boxed(lean_object* v_e_3856_, lean_object* v_name_3857_, lean_object* v_00_u03b1_3858_, lean_object* v_inst_3859_, lean_object* v_a_3860_){
_start:
{
lean_object* v_res_3861_; 
v_res_3861_ = l_Lasm_Web_Element_prop(v_e_3856_, v_name_3857_, v_00_u03b1_3858_, v_inst_3859_);
return v_res_3861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___redArg(lean_object* v_inst_3862_, lean_object* v_e_3863_, lean_object* v_name_3864_, lean_object* v_x_3865_){
_start:
{
lean_object* v___x_3867_; lean_object* v___x_3868_; 
v___x_3867_ = lean_apply_1(v_inst_3862_, v_x_3865_);
v___x_3868_ = l_Lasm_Web_Raw_setProp(v_e_3863_, v_name_3864_, v___x_3867_);
return v___x_3868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___redArg___boxed(lean_object* v_inst_3869_, lean_object* v_e_3870_, lean_object* v_name_3871_, lean_object* v_x_3872_, lean_object* v_a_3873_){
_start:
{
lean_object* v_res_3874_; 
v_res_3874_ = l_Lasm_Web_Element_setProp___redArg(v_inst_3869_, v_e_3870_, v_name_3871_, v_x_3872_);
return v_res_3874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp(lean_object* v_00_u03b1_3875_, lean_object* v_inst_3876_, lean_object* v_e_3877_, lean_object* v_name_3878_, lean_object* v_x_3879_){
_start:
{
lean_object* v___x_3881_; 
v___x_3881_ = l_Lasm_Web_Element_setProp___redArg(v_inst_3876_, v_e_3877_, v_name_3878_, v_x_3879_);
return v___x_3881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___boxed(lean_object* v_00_u03b1_3882_, lean_object* v_inst_3883_, lean_object* v_e_3884_, lean_object* v_name_3885_, lean_object* v_x_3886_, lean_object* v_a_3887_){
_start:
{
lean_object* v_res_3888_; 
v_res_3888_ = l_Lasm_Web_Element_setProp(v_00_u03b1_3882_, v_inst_3883_, v_e_3884_, v_name_3885_, v_x_3886_);
return v_res_3888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___redArg(){
_start:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3894_ = ((lean_object*)(l_Lasm_Web_Document_body___redArg___closed__0));
v___x_3895_ = l_Lasm_Web_querySelector(v___x_3894_);
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v_a_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3908_; 
v_a_3896_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3908_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3908_ == 0)
{
v___x_3898_ = v___x_3895_;
v_isShared_3899_ = v_isSharedCheck_3908_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_a_3896_);
lean_dec(v___x_3895_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3908_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
if (lean_obj_tag(v_a_3896_) == 0)
{
lean_object* v___x_3900_; lean_object* v___x_3902_; 
v___x_3900_ = ((lean_object*)(l_Lasm_Web_Document_body___redArg___closed__2));
if (v_isShared_3899_ == 0)
{
lean_ctor_set_tag(v___x_3898_, 1);
lean_ctor_set(v___x_3898_, 0, v___x_3900_);
v___x_3902_ = v___x_3898_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v___x_3900_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
else
{
lean_object* v_val_3904_; lean_object* v___x_3906_; 
v_val_3904_ = lean_ctor_get(v_a_3896_, 0);
lean_inc(v_val_3904_);
lean_dec_ref_known(v_a_3896_, 1);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 0, v_val_3904_);
v___x_3906_ = v___x_3898_;
goto v_reusejp_3905_;
}
else
{
lean_object* v_reuseFailAlloc_3907_; 
v_reuseFailAlloc_3907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3907_, 0, v_val_3904_);
v___x_3906_ = v_reuseFailAlloc_3907_;
goto v_reusejp_3905_;
}
v_reusejp_3905_:
{
return v___x_3906_;
}
}
}
}
else
{
lean_object* v_a_3909_; lean_object* v___x_3911_; uint8_t v_isShared_3912_; uint8_t v_isSharedCheck_3916_; 
v_a_3909_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3916_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3916_ == 0)
{
v___x_3911_ = v___x_3895_;
v_isShared_3912_ = v_isSharedCheck_3916_;
goto v_resetjp_3910_;
}
else
{
lean_inc(v_a_3909_);
lean_dec(v___x_3895_);
v___x_3911_ = lean_box(0);
v_isShared_3912_ = v_isSharedCheck_3916_;
goto v_resetjp_3910_;
}
v_resetjp_3910_:
{
lean_object* v___x_3914_; 
if (v_isShared_3912_ == 0)
{
v___x_3914_ = v___x_3911_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v_a_3909_);
v___x_3914_ = v_reuseFailAlloc_3915_;
goto v_reusejp_3913_;
}
v_reusejp_3913_:
{
return v___x_3914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___redArg___boxed(lean_object* v_a_3917_){
_start:
{
lean_object* v_res_3918_; 
v_res_3918_ = l_Lasm_Web_Document_body___redArg();
return v_res_3918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body(lean_object* v_x_3919_){
_start:
{
lean_object* v___x_3921_; 
v___x_3921_ = l_Lasm_Web_Document_body___redArg();
return v___x_3921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___boxed(lean_object* v_x_3922_, lean_object* v_a_3923_){
_start:
{
lean_object* v_res_3924_; 
v_res_3924_ = l_Lasm_Web_Document_body(v_x_3922_);
lean_dec(v_x_3922_);
return v_res_3924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___redArg(){
_start:
{
lean_object* v___x_3930_; lean_object* v___x_3931_; 
v___x_3930_ = ((lean_object*)(l_Lasm_Web_Document_head___redArg___closed__0));
v___x_3931_ = l_Lasm_Web_querySelector(v___x_3930_);
if (lean_obj_tag(v___x_3931_) == 0)
{
lean_object* v_a_3932_; lean_object* v___x_3934_; uint8_t v_isShared_3935_; uint8_t v_isSharedCheck_3944_; 
v_a_3932_ = lean_ctor_get(v___x_3931_, 0);
v_isSharedCheck_3944_ = !lean_is_exclusive(v___x_3931_);
if (v_isSharedCheck_3944_ == 0)
{
v___x_3934_ = v___x_3931_;
v_isShared_3935_ = v_isSharedCheck_3944_;
goto v_resetjp_3933_;
}
else
{
lean_inc(v_a_3932_);
lean_dec(v___x_3931_);
v___x_3934_ = lean_box(0);
v_isShared_3935_ = v_isSharedCheck_3944_;
goto v_resetjp_3933_;
}
v_resetjp_3933_:
{
if (lean_obj_tag(v_a_3932_) == 0)
{
lean_object* v___x_3936_; lean_object* v___x_3938_; 
v___x_3936_ = ((lean_object*)(l_Lasm_Web_Document_head___redArg___closed__2));
if (v_isShared_3935_ == 0)
{
lean_ctor_set_tag(v___x_3934_, 1);
lean_ctor_set(v___x_3934_, 0, v___x_3936_);
v___x_3938_ = v___x_3934_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v___x_3936_);
v___x_3938_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
return v___x_3938_;
}
}
else
{
lean_object* v_val_3940_; lean_object* v___x_3942_; 
v_val_3940_ = lean_ctor_get(v_a_3932_, 0);
lean_inc(v_val_3940_);
lean_dec_ref_known(v_a_3932_, 1);
if (v_isShared_3935_ == 0)
{
lean_ctor_set(v___x_3934_, 0, v_val_3940_);
v___x_3942_ = v___x_3934_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_val_3940_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
return v___x_3942_;
}
}
}
}
else
{
lean_object* v_a_3945_; lean_object* v___x_3947_; uint8_t v_isShared_3948_; uint8_t v_isSharedCheck_3952_; 
v_a_3945_ = lean_ctor_get(v___x_3931_, 0);
v_isSharedCheck_3952_ = !lean_is_exclusive(v___x_3931_);
if (v_isSharedCheck_3952_ == 0)
{
v___x_3947_ = v___x_3931_;
v_isShared_3948_ = v_isSharedCheck_3952_;
goto v_resetjp_3946_;
}
else
{
lean_inc(v_a_3945_);
lean_dec(v___x_3931_);
v___x_3947_ = lean_box(0);
v_isShared_3948_ = v_isSharedCheck_3952_;
goto v_resetjp_3946_;
}
v_resetjp_3946_:
{
lean_object* v___x_3950_; 
if (v_isShared_3948_ == 0)
{
v___x_3950_ = v___x_3947_;
goto v_reusejp_3949_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v_a_3945_);
v___x_3950_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3949_;
}
v_reusejp_3949_:
{
return v___x_3950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___redArg___boxed(lean_object* v_a_3953_){
_start:
{
lean_object* v_res_3954_; 
v_res_3954_ = l_Lasm_Web_Document_head___redArg();
return v_res_3954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head(lean_object* v_x_3955_){
_start:
{
lean_object* v___x_3957_; 
v___x_3957_ = l_Lasm_Web_Document_head___redArg();
return v___x_3957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___boxed(lean_object* v_x_3958_, lean_object* v_a_3959_){
_start:
{
lean_object* v_res_3960_; 
v_res_3960_ = l_Lasm_Web_Document_head(v_x_3958_);
lean_dec(v_x_3958_);
return v_res_3960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_title(lean_object* v_d_3963_){
_start:
{
lean_object* v___x_3965_; lean_object* v___x_3966_; 
v___x_3965_ = ((lean_object*)(l_Lasm_Web_Document_title___closed__0));
v___x_3966_ = l_Lasm_Web_Raw_getProp(v_d_3963_, v___x_3965_);
if (lean_obj_tag(v___x_3966_) == 0)
{
lean_object* v_a_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; 
v_a_3967_ = lean_ctor_get(v___x_3966_, 0);
lean_inc(v_a_3967_);
lean_dec_ref_known(v___x_3966_, 1);
v___x_3968_ = ((lean_object*)(l_Lasm_Web_Document_title___closed__1));
v___x_3969_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(v___x_3968_, v_a_3967_);
return v___x_3969_;
}
else
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
v_a_3970_ = lean_ctor_get(v___x_3966_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3966_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3972_ = v___x_3966_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v___x_3966_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3970_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_title___boxed(lean_object* v_d_3978_, lean_object* v_a_3979_){
_start:
{
lean_object* v_res_3980_; 
v_res_3980_ = l_Lasm_Web_Document_title(v_d_3978_);
return v_res_3980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_setTitle(lean_object* v_d_3981_, lean_object* v_title_3982_){
_start:
{
lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; 
v___x_3984_ = ((lean_object*)(l_Lasm_Web_Document_title___closed__0));
v___x_3985_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3985_, 0, v_title_3982_);
v___x_3986_ = l_Lasm_Web_Raw_setProp(v_d_3981_, v___x_3984_, v___x_3985_);
return v___x_3986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_setTitle___boxed(lean_object* v_d_3987_, lean_object* v_title_3988_, lean_object* v_a_3989_){
_start:
{
lean_object* v_res_3990_; 
v_res_3990_ = l_Lasm_Web_Document_setTitle(v_d_3987_, v_title_3988_);
return v_res_3990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_activeElement(lean_object* v_d_3993_){
_start:
{
lean_object* v___x_3995_; lean_object* v___x_3996_; 
v___x_3995_ = ((lean_object*)(l_Lasm_Web_Document_activeElement___closed__0));
v___x_3996_ = l_Lasm_Web_Raw_getProp(v_d_3993_, v___x_3995_);
if (lean_obj_tag(v___x_3996_) == 0)
{
lean_object* v_a_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; 
v_a_3997_ = lean_ctor_get(v___x_3996_, 0);
lean_inc(v_a_3997_);
lean_dec_ref_known(v___x_3996_, 1);
v___x_3998_ = ((lean_object*)(l_Lasm_Web_Document_activeElement___closed__1));
v___x_3999_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0(v___x_3998_, v_a_3997_);
return v___x_3999_;
}
else
{
lean_object* v_a_4000_; lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4007_; 
v_a_4000_ = lean_ctor_get(v___x_3996_, 0);
v_isSharedCheck_4007_ = !lean_is_exclusive(v___x_3996_);
if (v_isSharedCheck_4007_ == 0)
{
v___x_4002_ = v___x_3996_;
v_isShared_4003_ = v_isSharedCheck_4007_;
goto v_resetjp_4001_;
}
else
{
lean_inc(v_a_4000_);
lean_dec(v___x_3996_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4007_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
lean_object* v___x_4005_; 
if (v_isShared_4003_ == 0)
{
v___x_4005_ = v___x_4002_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4006_; 
v_reuseFailAlloc_4006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4006_, 0, v_a_4000_);
v___x_4005_ = v_reuseFailAlloc_4006_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
return v___x_4005_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_activeElement___boxed(lean_object* v_d_4008_, lean_object* v_a_4009_){
_start:
{
lean_object* v_res_4010_; 
v_res_4010_ = l_Lasm_Web_Document_activeElement(v_d_4008_);
return v_res_4010_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_Web_Types(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_Dom(uint8_t builtin) {
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
l_Lasm_Web_instFromJSRect = _init_l_Lasm_Web_instFromJSRect();
lean_mark_persistent(l_Lasm_Web_instFromJSRect);
l_Lasm_Web_instInhabitedRect_default = _init_l_Lasm_Web_instInhabitedRect_default();
lean_mark_persistent(l_Lasm_Web_instInhabitedRect_default);
l_Lasm_Web_instInhabitedRect = _init_l_Lasm_Web_instInhabitedRect();
lean_mark_persistent(l_Lasm_Web_instInhabitedRect);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
