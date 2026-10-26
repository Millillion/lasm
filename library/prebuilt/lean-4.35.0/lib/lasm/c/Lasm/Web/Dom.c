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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Float_repr(double, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
double lean_uint64_to_float(uint64_t);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lasm.Web.Window"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__5;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__10_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12_value;
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0_value)}};
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_appendChild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "appendChild"};
static const lean_object* l_Lasm_Web_Raw_appendChild___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_appendChild___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_appendChild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_appendChild___closed__0_value),((lean_object*)&l_Lasm_Web_window___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_appendChild___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_appendChild___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_appendChild___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_appendChild(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_appendChild___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_7_ = lean_string_utf8_byte_size(v___x_6_);
return v___x_7_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_8_ = lean_unsigned_to_nat(0u);
v___x_9_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__5);
v___x_10_ = lean_nat_dec_eq(v___x_9_, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_15_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__10));
v___x_16_ = lean_unsigned_to_nat(46u);
v___x_17_ = lean_unsigned_to_nat(193u);
v___x_18_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__9));
v___x_19_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__8));
v___x_20_ = l_mkPanicMessageWithDecl(v___x_19_, v___x_18_, v___x_17_, v___x_16_, v___x_15_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0(lean_object* v_context_22_, lean_object* v_d_23_){
_start:
{
lean_object* v___y_26_; lean_object* v___y_27_; 
if (lean_obj_tag(v_d_23_) == 9)
{
lean_object* v_value_31_; lean_object* v___x_32_; 
v_value_31_ = lean_ctor_get(v_d_23_, 0);
lean_inc(v_value_31_);
lean_dec_ref_known(v_d_23_, 2);
v___x_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_32_, 0, v_value_31_);
return v___x_32_;
}
else
{
lean_object* v___x_33_; lean_object* v_received_35_; 
v___x_33_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_23_) == 9)
{
lean_object* v_value_49_; lean_object* v_description_50_; uint8_t v___x_51_; 
v_value_49_ = lean_ctor_get(v_d_23_, 0);
v_description_50_ = lean_ctor_get(v_d_23_, 1);
v___x_51_ = lean_string_dec_eq(v_description_50_, v___x_33_);
if (v___x_51_ == 0)
{
goto v___jp_47_;
}
else
{
uint32_t v___x_52_; uint64_t v___x_53_; lean_object* v___x_54_; uint32_t v___x_55_; lean_object* v___x_56_; 
lean_inc_n(v_value_49_, 2);
lean_dec_ref_known(v_d_23_, 2);
v___x_52_ = 206;
v___x_53_ = 0ULL;
v___x_54_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_54_, 0, v_value_49_);
lean_ctor_set(v___x_54_, 1, v___x_33_);
v___x_55_ = lasm_js_value_handle(v_value_49_);
lean_dec(v_value_49_);
v___x_56_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_52_, v___x_53_, v___x_54_, v___x_55_);
lean_dec_ref_known(v___x_54_, 2);
if (lean_obj_tag(v___x_56_) == 0)
{
lean_object* v_a_57_; uint8_t v___x_58_; 
v_a_57_ = lean_ctor_get(v___x_56_, 0);
lean_inc(v_a_57_);
lean_dec_ref_known(v___x_56_, 1);
v___x_58_ = lean_string_validate_utf8(v_a_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec(v_a_57_);
v___x_59_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_60_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_59_);
v_received_35_ = v___x_60_;
goto v___jp_34_;
}
else
{
lean_object* v___x_61_; 
v___x_61_ = lean_string_from_utf8_unchecked(v_a_57_);
v_received_35_ = v___x_61_;
goto v___jp_34_;
}
}
else
{
lean_object* v___x_62_; 
lean_dec_ref_known(v___x_56_, 1);
v___x_62_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_35_ = v___x_62_;
goto v___jp_34_;
}
}
}
else
{
goto v___jp_47_;
}
v___jp_34_:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; uint8_t v___x_45_; 
v___x_36_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_37_ = lean_string_append(v___x_36_, v_context_22_);
v___x_38_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_39_ = lean_string_append(v___x_37_, v___x_38_);
v___x_40_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__3));
v___x_41_ = lean_string_append(v___x_39_, v___x_40_);
v___x_42_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_43_ = lean_string_append(v___x_41_, v___x_42_);
v___x_44_ = lean_string_append(v___x_43_, v_received_35_);
lean_dec_ref(v_received_35_);
v___x_45_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_45_ == 0)
{
lean_object* v___x_46_; 
v___x_46_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_26_ = v___x_44_;
v___y_27_ = v___x_46_;
goto v___jp_25_;
}
else
{
v___y_26_ = v___x_44_;
v___y_27_ = v___x_33_;
goto v___jp_25_;
}
}
v___jp_47_:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lasm_JS_Data_describe(v_d_23_);
v_received_35_ = v___x_48_;
goto v___jp_34_;
}
}
v___jp_25_:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_string_append(v___y_26_, v___y_27_);
v___x_29_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
v___x_30_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___boxed(lean_object* v_context_63_, lean_object* v_d_64_, lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0(v_context_63_, v_d_64_);
lean_dec_ref(v_context_63_);
return v_res_66_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1(void){
_start:
{
uint8_t v___x_68_; uint64_t v___x_69_; 
v___x_68_ = 1;
v___x_69_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0(lean_object* v_b_70_, lean_object* v_args_71_, uint8_t v_await_72_){
_start:
{
uint64_t v___y_75_; uint64_t v___y_76_; uint64_t v___x_119_; uint64_t v___y_121_; 
v___x_119_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_72_ == 0)
{
uint64_t v___x_126_; 
v___x_126_ = 0ULL;
v___y_121_ = v___x_126_;
goto v___jp_120_;
}
else
{
uint64_t v___x_127_; 
v___x_127_ = 2ULL;
v___y_121_ = v___x_127_;
goto v___jp_120_;
}
v___jp_74_:
{
uint64_t v_flags_77_; uint32_t v___x_78_; lean_object* v___x_79_; uint32_t v___x_80_; lean_object* v___x_81_; 
v_flags_77_ = lean_uint64_lor(v___y_75_, v___y_76_);
v___x_78_ = 214;
v___x_79_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_70_, v_args_71_);
v___x_80_ = 0;
v___x_81_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_78_, v_flags_77_, v___x_79_, v___x_80_);
lean_dec(v___x_79_);
if (lean_obj_tag(v___x_81_) == 0)
{
if (lean_obj_tag(v___x_81_) == 0)
{
lean_object* v_a_82_; lean_object* v___x_83_; 
v_a_82_ = lean_ctor_get(v___x_81_, 0);
lean_inc(v_a_82_);
lean_dec_ref_known(v___x_81_, 1);
v___x_83_ = l_Lasm_JS_Wire_decode(v_a_82_);
lean_dec(v_a_82_);
if (lean_obj_tag(v___x_83_) == 0)
{
lean_object* v_a_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_a_84_ = lean_ctor_get(v___x_83_, 0);
lean_inc(v_a_84_);
lean_dec_ref_known(v___x_83_, 1);
v___x_85_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_70_);
v___x_86_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0(v___x_85_, v_a_84_);
lean_dec_ref(v___x_85_);
return v___x_86_;
}
else
{
lean_object* v_a_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_94_; 
v_a_87_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_94_ == 0)
{
v___x_89_ = v___x_83_;
v_isShared_90_ = v_isSharedCheck_94_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_a_87_);
lean_dec(v___x_83_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_94_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_92_; 
if (v_isShared_90_ == 0)
{
v___x_92_ = v___x_89_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v_a_87_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
}
}
else
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
v_a_95_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v___x_81_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_81_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_100_; 
if (v_isShared_98_ == 0)
{
lean_ctor_set_tag(v___x_97_, 1);
v___x_100_ = v___x_97_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_a_95_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
}
else
{
lean_object* v_a_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_118_; 
v_a_103_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_118_ == 0)
{
v___x_105_ = v___x_81_;
v_isShared_106_ = v_isSharedCheck_118_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_a_103_);
lean_dec(v___x_81_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_118_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_107_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_108_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_70_);
v___x_109_ = lean_string_append(v___x_107_, v___x_108_);
lean_dec_ref(v___x_108_);
v___x_110_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_111_ = lean_string_append(v___x_109_, v___x_110_);
v___x_112_ = lean_io_error_to_string(v_a_103_);
v___x_113_ = lean_string_append(v___x_111_, v___x_112_);
lean_dec_ref(v___x_112_);
v___x_114_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 0, v___x_114_);
v___x_116_ = v___x_105_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_114_);
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
v___jp_120_:
{
uint8_t v_construct_122_; uint64_t v___x_123_; 
v_construct_122_ = lean_ctor_get_uint8(v_b_70_, sizeof(void*)*4);
v___x_123_ = lean_uint64_lor(v___x_119_, v___y_121_);
if (v_construct_122_ == 0)
{
uint64_t v___x_124_; 
v___x_124_ = 0ULL;
v___y_75_ = v___x_123_;
v___y_76_ = v___x_124_;
goto v___jp_74_;
}
else
{
uint64_t v___x_125_; 
v___x_125_ = 4ULL;
v___y_75_ = v___x_123_;
v___y_76_ = v___x_125_;
goto v___jp_74_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___boxed(lean_object* v_b_128_, lean_object* v_args_129_, lean_object* v_await_130_, lean_object* v_a_131_){
_start:
{
uint8_t v_await_boxed_132_; lean_object* v_res_133_; 
v_await_boxed_132_ = lean_unbox(v_await_130_);
v_res_133_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0(v_b_128_, v_args_129_, v_await_boxed_132_);
lean_dec_ref(v_b_128_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_window(){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; lean_object* v___x_147_; 
v___x_144_ = ((lean_object*)(l_Lasm_Web_window___closed__2));
v___x_145_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_146_ = 1;
v___x_147_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0(v___x_144_, v___x_145_, v___x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_window___boxed(lean_object* v_a_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lasm_Web_window();
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0(lean_object* v_context_151_, lean_object* v_d_152_){
_start:
{
lean_object* v___y_155_; lean_object* v___y_156_; 
if (lean_obj_tag(v_d_152_) == 9)
{
lean_object* v_value_160_; lean_object* v___x_161_; 
v_value_160_ = lean_ctor_get(v_d_152_, 0);
lean_inc(v_value_160_);
lean_dec_ref_known(v_d_152_, 2);
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v_value_160_);
return v___x_161_;
}
else
{
lean_object* v___x_162_; lean_object* v_received_164_; 
v___x_162_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_152_) == 9)
{
lean_object* v_value_178_; lean_object* v_description_179_; uint8_t v___x_180_; 
v_value_178_ = lean_ctor_get(v_d_152_, 0);
v_description_179_ = lean_ctor_get(v_d_152_, 1);
v___x_180_ = lean_string_dec_eq(v_description_179_, v___x_162_);
if (v___x_180_ == 0)
{
goto v___jp_176_;
}
else
{
uint32_t v___x_181_; uint64_t v___x_182_; lean_object* v___x_183_; uint32_t v___x_184_; lean_object* v___x_185_; 
lean_inc_n(v_value_178_, 2);
lean_dec_ref_known(v_d_152_, 2);
v___x_181_ = 206;
v___x_182_ = 0ULL;
v___x_183_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_183_, 0, v_value_178_);
lean_ctor_set(v___x_183_, 1, v___x_162_);
v___x_184_ = lasm_js_value_handle(v_value_178_);
lean_dec(v_value_178_);
v___x_185_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_181_, v___x_182_, v___x_183_, v___x_184_);
lean_dec_ref_known(v___x_183_, 2);
if (lean_obj_tag(v___x_185_) == 0)
{
lean_object* v_a_186_; uint8_t v___x_187_; 
v_a_186_ = lean_ctor_get(v___x_185_, 0);
lean_inc(v_a_186_);
lean_dec_ref_known(v___x_185_, 1);
v___x_187_ = lean_string_validate_utf8(v_a_186_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; lean_object* v___x_189_; 
lean_dec(v_a_186_);
v___x_188_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_189_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_188_);
v_received_164_ = v___x_189_;
goto v___jp_163_;
}
else
{
lean_object* v___x_190_; 
v___x_190_ = lean_string_from_utf8_unchecked(v_a_186_);
v_received_164_ = v___x_190_;
goto v___jp_163_;
}
}
else
{
lean_object* v___x_191_; 
lean_dec_ref_known(v___x_185_, 1);
v___x_191_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_164_ = v___x_191_;
goto v___jp_163_;
}
}
}
else
{
goto v___jp_176_;
}
v___jp_163_:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_165_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_166_ = lean_string_append(v___x_165_, v_context_151_);
v___x_167_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_168_ = lean_string_append(v___x_166_, v___x_167_);
v___x_169_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0___closed__0));
v___x_170_ = lean_string_append(v___x_168_, v___x_169_);
v___x_171_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_172_ = lean_string_append(v___x_170_, v___x_171_);
v___x_173_ = lean_string_append(v___x_172_, v_received_164_);
lean_dec_ref(v_received_164_);
v___x_174_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; 
v___x_175_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_155_ = v___x_173_;
v___y_156_ = v___x_175_;
goto v___jp_154_;
}
else
{
v___y_155_ = v___x_173_;
v___y_156_ = v___x_162_;
goto v___jp_154_;
}
}
v___jp_176_:
{
lean_object* v___x_177_; 
v___x_177_ = l_Lasm_JS_Data_describe(v_d_152_);
v_received_164_ = v___x_177_;
goto v___jp_163_;
}
}
v___jp_154_:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_157_ = lean_string_append(v___y_155_, v___y_156_);
v___x_158_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
v___x_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_159_, 0, v___x_158_);
return v___x_159_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0___boxed(lean_object* v_context_192_, lean_object* v_d_193_, lean_object* v_a_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0(v_context_192_, v_d_193_);
lean_dec_ref(v_context_192_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0(lean_object* v_b_196_, lean_object* v_args_197_, uint8_t v_await_198_){
_start:
{
uint64_t v___y_201_; uint64_t v___y_202_; uint64_t v___x_245_; uint64_t v___y_247_; 
v___x_245_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_198_ == 0)
{
uint64_t v___x_252_; 
v___x_252_ = 0ULL;
v___y_247_ = v___x_252_;
goto v___jp_246_;
}
else
{
uint64_t v___x_253_; 
v___x_253_ = 2ULL;
v___y_247_ = v___x_253_;
goto v___jp_246_;
}
v___jp_200_:
{
uint64_t v_flags_203_; uint32_t v___x_204_; lean_object* v___x_205_; uint32_t v___x_206_; lean_object* v___x_207_; 
v_flags_203_ = lean_uint64_lor(v___y_201_, v___y_202_);
v___x_204_ = 214;
v___x_205_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_196_, v_args_197_);
v___x_206_ = 0;
v___x_207_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_204_, v_flags_203_, v___x_205_, v___x_206_);
lean_dec(v___x_205_);
if (lean_obj_tag(v___x_207_) == 0)
{
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v_a_208_; lean_object* v___x_209_; 
v_a_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc(v_a_208_);
lean_dec_ref_known(v___x_207_, 1);
v___x_209_ = l_Lasm_JS_Wire_decode(v_a_208_);
lean_dec(v_a_208_);
if (lean_obj_tag(v___x_209_) == 0)
{
lean_object* v_a_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v_a_210_ = lean_ctor_get(v___x_209_, 0);
lean_inc(v_a_210_);
lean_dec_ref_known(v___x_209_, 1);
v___x_211_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_196_);
v___x_212_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0_spec__0(v___x_211_, v_a_210_);
lean_dec_ref(v___x_211_);
return v___x_212_;
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
v_a_213_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_209_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_209_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
else
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
v_a_221_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_207_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_207_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
lean_ctor_set_tag(v___x_223_, 1);
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
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_244_; 
v_a_229_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_244_ == 0)
{
v___x_231_ = v___x_207_;
v_isShared_232_ = v_isSharedCheck_244_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_207_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_244_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_233_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_234_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_196_);
v___x_235_ = lean_string_append(v___x_233_, v___x_234_);
lean_dec_ref(v___x_234_);
v___x_236_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_237_ = lean_string_append(v___x_235_, v___x_236_);
v___x_238_ = lean_io_error_to_string(v_a_229_);
v___x_239_ = lean_string_append(v___x_237_, v___x_238_);
lean_dec_ref(v___x_238_);
v___x_240_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 0, v___x_240_);
v___x_242_ = v___x_231_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
v___jp_246_:
{
uint8_t v_construct_248_; uint64_t v___x_249_; 
v_construct_248_ = lean_ctor_get_uint8(v_b_196_, sizeof(void*)*4);
v___x_249_ = lean_uint64_lor(v___x_245_, v___y_247_);
if (v_construct_248_ == 0)
{
uint64_t v___x_250_; 
v___x_250_ = 0ULL;
v___y_201_ = v___x_249_;
v___y_202_ = v___x_250_;
goto v___jp_200_;
}
else
{
uint64_t v___x_251_; 
v___x_251_ = 4ULL;
v___y_201_ = v___x_249_;
v___y_202_ = v___x_251_;
goto v___jp_200_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0___boxed(lean_object* v_b_254_, lean_object* v_args_255_, lean_object* v_await_256_, lean_object* v_a_257_){
_start:
{
uint8_t v_await_boxed_258_; lean_object* v_res_259_; 
v_await_boxed_258_ = lean_unbox(v_await_256_);
v_res_259_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0(v_b_254_, v_args_255_, v_await_boxed_258_);
lean_dec_ref(v_b_254_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_document(){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; lean_object* v___x_270_; 
v___x_267_ = ((lean_object*)(l_Lasm_Web_document___closed__1));
v___x_268_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_269_ = 1;
v___x_270_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_document_spec__0(v___x_267_, v___x_268_, v___x_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_document___boxed(lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lasm_Web_document();
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0(lean_object* v_context_274_, lean_object* v_d_275_){
_start:
{
lean_object* v___y_278_; lean_object* v___y_279_; 
if (lean_obj_tag(v_d_275_) == 9)
{
lean_object* v_value_283_; lean_object* v___x_284_; 
v_value_283_ = lean_ctor_get(v_d_275_, 0);
lean_inc(v_value_283_);
lean_dec_ref_known(v_d_275_, 2);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v_value_283_);
return v___x_284_;
}
else
{
lean_object* v___x_285_; lean_object* v_received_287_; 
v___x_285_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_275_) == 9)
{
lean_object* v_value_301_; lean_object* v_description_302_; uint8_t v___x_303_; 
v_value_301_ = lean_ctor_get(v_d_275_, 0);
v_description_302_ = lean_ctor_get(v_d_275_, 1);
v___x_303_ = lean_string_dec_eq(v_description_302_, v___x_285_);
if (v___x_303_ == 0)
{
goto v___jp_299_;
}
else
{
uint32_t v___x_304_; uint64_t v___x_305_; lean_object* v___x_306_; uint32_t v___x_307_; lean_object* v___x_308_; 
lean_inc_n(v_value_301_, 2);
lean_dec_ref_known(v_d_275_, 2);
v___x_304_ = 206;
v___x_305_ = 0ULL;
v___x_306_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_306_, 0, v_value_301_);
lean_ctor_set(v___x_306_, 1, v___x_285_);
v___x_307_ = lasm_js_value_handle(v_value_301_);
lean_dec(v_value_301_);
v___x_308_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_304_, v___x_305_, v___x_306_, v___x_307_);
lean_dec_ref_known(v___x_306_, 2);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; uint8_t v___x_310_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_309_);
lean_dec_ref_known(v___x_308_, 1);
v___x_310_ = lean_string_validate_utf8(v_a_309_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; lean_object* v___x_312_; 
lean_dec(v_a_309_);
v___x_311_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_312_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_311_);
v_received_287_ = v___x_312_;
goto v___jp_286_;
}
else
{
lean_object* v___x_313_; 
v___x_313_ = lean_string_from_utf8_unchecked(v_a_309_);
v_received_287_ = v___x_313_;
goto v___jp_286_;
}
}
else
{
lean_object* v___x_314_; 
lean_dec_ref_known(v___x_308_, 1);
v___x_314_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_287_ = v___x_314_;
goto v___jp_286_;
}
}
}
else
{
goto v___jp_299_;
}
v___jp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_288_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_289_ = lean_string_append(v___x_288_, v_context_274_);
v___x_290_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_291_ = lean_string_append(v___x_289_, v___x_290_);
v___x_292_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0___closed__0));
v___x_293_ = lean_string_append(v___x_291_, v___x_292_);
v___x_294_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_295_ = lean_string_append(v___x_293_, v___x_294_);
v___x_296_ = lean_string_append(v___x_295_, v_received_287_);
lean_dec_ref(v_received_287_);
v___x_297_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_297_ == 0)
{
lean_object* v___x_298_; 
v___x_298_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_278_ = v___x_296_;
v___y_279_ = v___x_298_;
goto v___jp_277_;
}
else
{
v___y_278_ = v___x_296_;
v___y_279_ = v___x_285_;
goto v___jp_277_;
}
}
v___jp_299_:
{
lean_object* v___x_300_; 
v___x_300_ = l_Lasm_JS_Data_describe(v_d_275_);
v_received_287_ = v___x_300_;
goto v___jp_286_;
}
}
v___jp_277_:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_280_ = lean_string_append(v___y_278_, v___y_279_);
v___x_281_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
v___x_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
return v___x_282_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0___boxed(lean_object* v_context_315_, lean_object* v_d_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0(v_context_315_, v_d_316_);
lean_dec_ref(v_context_315_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0(lean_object* v_b_319_, lean_object* v_args_320_, uint8_t v_await_321_){
_start:
{
uint64_t v___y_324_; uint64_t v___y_325_; uint64_t v___x_368_; uint64_t v___y_370_; 
v___x_368_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_321_ == 0)
{
uint64_t v___x_375_; 
v___x_375_ = 0ULL;
v___y_370_ = v___x_375_;
goto v___jp_369_;
}
else
{
uint64_t v___x_376_; 
v___x_376_ = 2ULL;
v___y_370_ = v___x_376_;
goto v___jp_369_;
}
v___jp_323_:
{
uint64_t v_flags_326_; uint32_t v___x_327_; lean_object* v___x_328_; uint32_t v___x_329_; lean_object* v___x_330_; 
v_flags_326_ = lean_uint64_lor(v___y_324_, v___y_325_);
v___x_327_ = 214;
v___x_328_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_319_, v_args_320_);
v___x_329_ = 0;
v___x_330_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_327_, v_flags_326_, v___x_328_, v___x_329_);
lean_dec(v___x_328_);
if (lean_obj_tag(v___x_330_) == 0)
{
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_332_; 
v_a_331_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_a_331_);
lean_dec_ref_known(v___x_330_, 1);
v___x_332_ = l_Lasm_JS_Wire_decode(v_a_331_);
lean_dec(v_a_331_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v___x_332_, 1);
v___x_334_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_319_);
v___x_335_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0_spec__0(v___x_334_, v_a_333_);
lean_dec_ref(v___x_334_);
return v___x_335_;
}
else
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
v_a_336_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_332_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_332_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_344_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_330_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_330_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
lean_ctor_set_tag(v___x_346_, 1);
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_367_; 
v_a_352_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_367_ == 0)
{
v___x_354_ = v___x_330_;
v_isShared_355_ = v_isSharedCheck_367_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_330_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_367_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_356_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_357_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_319_);
v___x_358_ = lean_string_append(v___x_356_, v___x_357_);
lean_dec_ref(v___x_357_);
v___x_359_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_360_ = lean_string_append(v___x_358_, v___x_359_);
v___x_361_ = lean_io_error_to_string(v_a_352_);
v___x_362_ = lean_string_append(v___x_360_, v___x_361_);
lean_dec_ref(v___x_361_);
v___x_363_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 0, v___x_363_);
v___x_365_ = v___x_354_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_363_);
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
v___jp_369_:
{
uint8_t v_construct_371_; uint64_t v___x_372_; 
v_construct_371_ = lean_ctor_get_uint8(v_b_319_, sizeof(void*)*4);
v___x_372_ = lean_uint64_lor(v___x_368_, v___y_370_);
if (v_construct_371_ == 0)
{
uint64_t v___x_373_; 
v___x_373_ = 0ULL;
v___y_324_ = v___x_372_;
v___y_325_ = v___x_373_;
goto v___jp_323_;
}
else
{
uint64_t v___x_374_; 
v___x_374_ = 4ULL;
v___y_324_ = v___x_372_;
v___y_325_ = v___x_374_;
goto v___jp_323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0___boxed(lean_object* v_b_377_, lean_object* v_args_378_, lean_object* v_await_379_, lean_object* v_a_380_){
_start:
{
uint8_t v_await_boxed_381_; lean_object* v_res_382_; 
v_await_boxed_381_ = lean_unbox(v_await_379_);
v_res_382_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0(v_b_377_, v_args_378_, v_await_boxed_381_);
lean_dec_ref(v_b_377_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createElement(lean_object* v_a_389_){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; uint8_t v___x_395_; lean_object* v___x_396_; 
v___x_391_ = ((lean_object*)(l_Lasm_Web_createElement___closed__1));
v___x_392_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_393_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_393_, 0, v_a_389_);
v___x_394_ = lean_array_push(v___x_392_, v___x_393_);
v___x_395_ = 1;
v___x_396_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0(v___x_391_, v___x_394_, v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createElement___boxed(lean_object* v_a_397_, lean_object* v_a_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lasm_Web_createElement(v_a_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createElementNS(lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; uint8_t v___x_415_; lean_object* v___x_416_; 
v___x_409_ = ((lean_object*)(l_Lasm_Web_createElementNS___closed__1));
v___x_410_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_411_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_411_, 0, v_a_406_);
v___x_412_ = lean_array_push(v___x_410_, v___x_411_);
v___x_413_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_413_, 0, v_a_407_);
v___x_414_ = lean_array_push(v___x_412_, v___x_413_);
v___x_415_ = 1;
v___x_416_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createElement_spec__0(v___x_409_, v___x_414_, v___x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createElementNS___boxed(lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lasm_Web_createElementNS(v_a_417_, v_a_418_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0(lean_object* v_context_424_, lean_object* v_d_425_){
_start:
{
lean_object* v___y_428_; lean_object* v___y_429_; 
if (lean_obj_tag(v_d_425_) == 9)
{
lean_object* v_value_433_; lean_object* v___x_434_; 
v_value_433_ = lean_ctor_get(v_d_425_, 0);
lean_inc(v_value_433_);
lean_dec_ref_known(v_d_425_, 2);
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v_value_433_);
return v___x_434_;
}
else
{
lean_object* v___x_435_; lean_object* v_received_437_; 
v___x_435_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_425_) == 9)
{
lean_object* v_value_451_; lean_object* v_description_452_; uint8_t v___x_453_; 
v_value_451_ = lean_ctor_get(v_d_425_, 0);
v_description_452_ = lean_ctor_get(v_d_425_, 1);
v___x_453_ = lean_string_dec_eq(v_description_452_, v___x_435_);
if (v___x_453_ == 0)
{
goto v___jp_449_;
}
else
{
uint32_t v___x_454_; uint64_t v___x_455_; lean_object* v___x_456_; uint32_t v___x_457_; lean_object* v___x_458_; 
lean_inc_n(v_value_451_, 2);
lean_dec_ref_known(v_d_425_, 2);
v___x_454_ = 206;
v___x_455_ = 0ULL;
v___x_456_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_456_, 0, v_value_451_);
lean_ctor_set(v___x_456_, 1, v___x_435_);
v___x_457_ = lasm_js_value_handle(v_value_451_);
lean_dec(v_value_451_);
v___x_458_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_454_, v___x_455_, v___x_456_, v___x_457_);
lean_dec_ref_known(v___x_456_, 2);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; uint8_t v___x_460_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v___x_460_ = lean_string_validate_utf8(v_a_459_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; 
lean_dec(v_a_459_);
v___x_461_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_462_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_461_);
v_received_437_ = v___x_462_;
goto v___jp_436_;
}
else
{
lean_object* v___x_463_; 
v___x_463_ = lean_string_from_utf8_unchecked(v_a_459_);
v_received_437_ = v___x_463_;
goto v___jp_436_;
}
}
else
{
lean_object* v___x_464_; 
lean_dec_ref_known(v___x_458_, 1);
v___x_464_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_437_ = v___x_464_;
goto v___jp_436_;
}
}
}
else
{
goto v___jp_449_;
}
v___jp_436_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_438_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_439_ = lean_string_append(v___x_438_, v_context_424_);
v___x_440_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_441_ = lean_string_append(v___x_439_, v___x_440_);
v___x_442_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0___closed__0));
v___x_443_ = lean_string_append(v___x_441_, v___x_442_);
v___x_444_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_445_ = lean_string_append(v___x_443_, v___x_444_);
v___x_446_ = lean_string_append(v___x_445_, v_received_437_);
lean_dec_ref(v_received_437_);
v___x_447_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; 
v___x_448_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_428_ = v___x_446_;
v___y_429_ = v___x_448_;
goto v___jp_427_;
}
else
{
v___y_428_ = v___x_446_;
v___y_429_ = v___x_435_;
goto v___jp_427_;
}
}
v___jp_449_:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lasm_JS_Data_describe(v_d_425_);
v_received_437_ = v___x_450_;
goto v___jp_436_;
}
}
v___jp_427_:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_430_ = lean_string_append(v___y_428_, v___y_429_);
v___x_431_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
v___x_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
return v___x_432_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0___boxed(lean_object* v_context_465_, lean_object* v_d_466_, lean_object* v_a_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0(v_context_465_, v_d_466_);
lean_dec_ref(v_context_465_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0(lean_object* v_b_469_, lean_object* v_args_470_, uint8_t v_await_471_){
_start:
{
uint64_t v___y_474_; uint64_t v___y_475_; uint64_t v___x_518_; uint64_t v___y_520_; 
v___x_518_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_471_ == 0)
{
uint64_t v___x_525_; 
v___x_525_ = 0ULL;
v___y_520_ = v___x_525_;
goto v___jp_519_;
}
else
{
uint64_t v___x_526_; 
v___x_526_ = 2ULL;
v___y_520_ = v___x_526_;
goto v___jp_519_;
}
v___jp_473_:
{
uint64_t v_flags_476_; uint32_t v___x_477_; lean_object* v___x_478_; uint32_t v___x_479_; lean_object* v___x_480_; 
v_flags_476_ = lean_uint64_lor(v___y_474_, v___y_475_);
v___x_477_ = 214;
v___x_478_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_469_, v_args_470_);
v___x_479_ = 0;
v___x_480_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_477_, v_flags_476_, v___x_478_, v___x_479_);
lean_dec(v___x_478_);
if (lean_obj_tag(v___x_480_) == 0)
{
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_482_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_a_481_);
lean_dec_ref_known(v___x_480_, 1);
v___x_482_ = l_Lasm_JS_Wire_decode(v_a_481_);
lean_dec(v_a_481_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_a_483_);
lean_dec_ref_known(v___x_482_, 1);
v___x_484_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_469_);
v___x_485_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0_spec__0(v___x_484_, v_a_483_);
lean_dec_ref(v___x_484_);
return v___x_485_;
}
else
{
lean_object* v_a_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
v_a_486_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_493_ == 0)
{
v___x_488_ = v___x_482_;
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_a_486_);
lean_dec(v___x_482_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_a_486_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
}
else
{
lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
v_a_494_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v___x_480_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_dec(v___x_480_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
lean_ctor_set_tag(v___x_496_, 1);
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_494_);
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
else
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_517_; 
v_a_502_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_517_ == 0)
{
v___x_504_ = v___x_480_;
v_isShared_505_ = v_isSharedCheck_517_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_480_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_517_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_515_; 
v___x_506_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_507_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_469_);
v___x_508_ = lean_string_append(v___x_506_, v___x_507_);
lean_dec_ref(v___x_507_);
v___x_509_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_510_ = lean_string_append(v___x_508_, v___x_509_);
v___x_511_ = lean_io_error_to_string(v_a_502_);
v___x_512_ = lean_string_append(v___x_510_, v___x_511_);
lean_dec_ref(v___x_511_);
v___x_513_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v___x_513_);
v___x_515_ = v___x_504_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_513_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
v___jp_519_:
{
uint8_t v_construct_521_; uint64_t v___x_522_; 
v_construct_521_ = lean_ctor_get_uint8(v_b_469_, sizeof(void*)*4);
v___x_522_ = lean_uint64_lor(v___x_518_, v___y_520_);
if (v_construct_521_ == 0)
{
uint64_t v___x_523_; 
v___x_523_ = 0ULL;
v___y_474_ = v___x_522_;
v___y_475_ = v___x_523_;
goto v___jp_473_;
}
else
{
uint64_t v___x_524_; 
v___x_524_ = 4ULL;
v___y_474_ = v___x_522_;
v___y_475_ = v___x_524_;
goto v___jp_473_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0___boxed(lean_object* v_b_527_, lean_object* v_args_528_, lean_object* v_await_529_, lean_object* v_a_530_){
_start:
{
uint8_t v_await_boxed_531_; lean_object* v_res_532_; 
v_await_boxed_531_ = lean_unbox(v_await_529_);
v_res_532_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0(v_b_527_, v_args_528_, v_await_boxed_531_);
lean_dec_ref(v_b_527_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createTextNode(lean_object* v_a_539_){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; lean_object* v___x_546_; 
v___x_541_ = ((lean_object*)(l_Lasm_Web_createTextNode___closed__1));
v___x_542_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_543_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_543_, 0, v_a_539_);
v___x_544_ = lean_array_push(v___x_542_, v___x_543_);
v___x_545_ = 1;
v___x_546_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createTextNode_spec__0(v___x_541_, v___x_544_, v___x_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createTextNode___boxed(lean_object* v_a_547_, lean_object* v_a_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Lasm_Web_createTextNode(v_a_547_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0(lean_object* v_context_551_, lean_object* v_d_552_){
_start:
{
lean_object* v___y_555_; lean_object* v___y_556_; 
if (lean_obj_tag(v_d_552_) == 9)
{
lean_object* v_value_560_; lean_object* v___x_561_; 
v_value_560_ = lean_ctor_get(v_d_552_, 0);
lean_inc(v_value_560_);
lean_dec_ref_known(v_d_552_, 2);
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v_value_560_);
return v___x_561_;
}
else
{
lean_object* v___x_562_; lean_object* v_received_564_; 
v___x_562_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_552_) == 9)
{
lean_object* v_value_578_; lean_object* v_description_579_; uint8_t v___x_580_; 
v_value_578_ = lean_ctor_get(v_d_552_, 0);
v_description_579_ = lean_ctor_get(v_d_552_, 1);
v___x_580_ = lean_string_dec_eq(v_description_579_, v___x_562_);
if (v___x_580_ == 0)
{
goto v___jp_576_;
}
else
{
uint32_t v___x_581_; uint64_t v___x_582_; lean_object* v___x_583_; uint32_t v___x_584_; lean_object* v___x_585_; 
lean_inc_n(v_value_578_, 2);
lean_dec_ref_known(v_d_552_, 2);
v___x_581_ = 206;
v___x_582_ = 0ULL;
v___x_583_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_583_, 0, v_value_578_);
lean_ctor_set(v___x_583_, 1, v___x_562_);
v___x_584_ = lasm_js_value_handle(v_value_578_);
lean_dec(v_value_578_);
v___x_585_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_581_, v___x_582_, v___x_583_, v___x_584_);
lean_dec_ref_known(v___x_583_, 2);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; uint8_t v___x_587_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_586_);
lean_dec_ref_known(v___x_585_, 1);
v___x_587_ = lean_string_validate_utf8(v_a_586_);
if (v___x_587_ == 0)
{
lean_object* v___x_588_; lean_object* v___x_589_; 
lean_dec(v_a_586_);
v___x_588_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_589_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_588_);
v_received_564_ = v___x_589_;
goto v___jp_563_;
}
else
{
lean_object* v___x_590_; 
v___x_590_ = lean_string_from_utf8_unchecked(v_a_586_);
v_received_564_ = v___x_590_;
goto v___jp_563_;
}
}
else
{
lean_object* v___x_591_; 
lean_dec_ref_known(v___x_585_, 1);
v___x_591_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_564_ = v___x_591_;
goto v___jp_563_;
}
}
}
else
{
goto v___jp_576_;
}
v___jp_563_:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; uint8_t v___x_574_; 
v___x_565_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_566_ = lean_string_append(v___x_565_, v_context_551_);
v___x_567_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_568_ = lean_string_append(v___x_566_, v___x_567_);
v___x_569_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0___closed__0));
v___x_570_ = lean_string_append(v___x_568_, v___x_569_);
v___x_571_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_572_ = lean_string_append(v___x_570_, v___x_571_);
v___x_573_ = lean_string_append(v___x_572_, v_received_564_);
lean_dec_ref(v_received_564_);
v___x_574_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; 
v___x_575_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_555_ = v___x_573_;
v___y_556_ = v___x_575_;
goto v___jp_554_;
}
else
{
v___y_555_ = v___x_573_;
v___y_556_ = v___x_562_;
goto v___jp_554_;
}
}
v___jp_576_:
{
lean_object* v___x_577_; 
v___x_577_ = l_Lasm_JS_Data_describe(v_d_552_);
v_received_564_ = v___x_577_;
goto v___jp_563_;
}
}
v___jp_554_:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_557_ = lean_string_append(v___y_555_, v___y_556_);
v___x_558_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
v___x_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
return v___x_559_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0___boxed(lean_object* v_context_592_, lean_object* v_d_593_, lean_object* v_a_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0(v_context_592_, v_d_593_);
lean_dec_ref(v_context_592_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0(lean_object* v_b_596_, lean_object* v_args_597_, uint8_t v_await_598_){
_start:
{
uint64_t v___y_601_; uint64_t v___y_602_; uint64_t v___x_645_; uint64_t v___y_647_; 
v___x_645_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_598_ == 0)
{
uint64_t v___x_652_; 
v___x_652_ = 0ULL;
v___y_647_ = v___x_652_;
goto v___jp_646_;
}
else
{
uint64_t v___x_653_; 
v___x_653_ = 2ULL;
v___y_647_ = v___x_653_;
goto v___jp_646_;
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
lean_object* v_a_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_a_610_);
lean_dec_ref_known(v___x_609_, 1);
v___x_611_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_596_);
v___x_612_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0_spec__0(v___x_611_, v_a_610_);
lean_dec_ref(v___x_611_);
return v___x_612_;
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
v_a_613_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_609_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_609_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
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
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
v_a_621_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_607_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_607_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
lean_ctor_set_tag(v___x_623_, 1);
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
else
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_644_; 
v_a_629_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_644_ == 0)
{
v___x_631_ = v___x_607_;
v_isShared_632_ = v_isSharedCheck_644_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_607_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_644_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v___x_633_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_634_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_596_);
v___x_635_ = lean_string_append(v___x_633_, v___x_634_);
lean_dec_ref(v___x_634_);
v___x_636_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_637_ = lean_string_append(v___x_635_, v___x_636_);
v___x_638_ = lean_io_error_to_string(v_a_629_);
v___x_639_ = lean_string_append(v___x_637_, v___x_638_);
lean_dec_ref(v___x_638_);
v___x_640_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 0, v___x_640_);
v___x_642_ = v___x_631_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
v___jp_646_:
{
uint8_t v_construct_648_; uint64_t v___x_649_; 
v_construct_648_ = lean_ctor_get_uint8(v_b_596_, sizeof(void*)*4);
v___x_649_ = lean_uint64_lor(v___x_645_, v___y_647_);
if (v_construct_648_ == 0)
{
uint64_t v___x_650_; 
v___x_650_ = 0ULL;
v___y_601_ = v___x_649_;
v___y_602_ = v___x_650_;
goto v___jp_600_;
}
else
{
uint64_t v___x_651_; 
v___x_651_ = 4ULL;
v___y_601_ = v___x_649_;
v___y_602_ = v___x_651_;
goto v___jp_600_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0___boxed(lean_object* v_b_654_, lean_object* v_args_655_, lean_object* v_await_656_, lean_object* v_a_657_){
_start:
{
uint8_t v_await_boxed_658_; lean_object* v_res_659_; 
v_await_boxed_658_ = lean_unbox(v_await_656_);
v_res_659_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0(v_b_654_, v_args_655_, v_await_boxed_658_);
lean_dec_ref(v_b_654_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createFragment(){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; lean_object* v___x_670_; 
v___x_667_ = ((lean_object*)(l_Lasm_Web_createFragment___closed__1));
v___x_668_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_669_ = 1;
v___x_670_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_createFragment_spec__0(v___x_667_, v___x_668_, v___x_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_createFragment___boxed(lean_object* v_a_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lasm_Web_createFragment();
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0(lean_object* v_context_674_, lean_object* v_d_675_){
_start:
{
lean_object* v___y_681_; lean_object* v___y_682_; 
switch(lean_obj_tag(v_d_675_))
{
case 1:
{
goto v___jp_677_;
}
case 0:
{
goto v___jp_677_;
}
default: 
{
if (lean_obj_tag(v_d_675_) == 9)
{
lean_object* v_value_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v_value_686_ = lean_ctor_get(v_d_675_, 0);
lean_inc(v_value_686_);
lean_dec_ref_known(v_d_675_, 2);
v___x_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_687_, 0, v_value_686_);
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
return v___x_688_;
}
else
{
lean_object* v___x_689_; lean_object* v_received_691_; 
v___x_689_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_675_) == 9)
{
lean_object* v_value_705_; lean_object* v_description_706_; uint8_t v___x_707_; 
v_value_705_ = lean_ctor_get(v_d_675_, 0);
v_description_706_ = lean_ctor_get(v_d_675_, 1);
v___x_707_ = lean_string_dec_eq(v_description_706_, v___x_689_);
if (v___x_707_ == 0)
{
goto v___jp_703_;
}
else
{
uint32_t v___x_708_; uint64_t v___x_709_; lean_object* v___x_710_; uint32_t v___x_711_; lean_object* v___x_712_; 
lean_inc_n(v_value_705_, 2);
lean_dec_ref_known(v_d_675_, 2);
v___x_708_ = 206;
v___x_709_ = 0ULL;
v___x_710_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_710_, 0, v_value_705_);
lean_ctor_set(v___x_710_, 1, v___x_689_);
v___x_711_ = lasm_js_value_handle(v_value_705_);
lean_dec(v_value_705_);
v___x_712_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_708_, v___x_709_, v___x_710_, v___x_711_);
lean_dec_ref_known(v___x_710_, 2);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; uint8_t v___x_714_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_713_);
lean_dec_ref_known(v___x_712_, 1);
v___x_714_ = lean_string_validate_utf8(v_a_713_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; lean_object* v___x_716_; 
lean_dec(v_a_713_);
v___x_715_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_716_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_715_);
v_received_691_ = v___x_716_;
goto v___jp_690_;
}
else
{
lean_object* v___x_717_; 
v___x_717_ = lean_string_from_utf8_unchecked(v_a_713_);
v_received_691_ = v___x_717_;
goto v___jp_690_;
}
}
else
{
lean_object* v___x_718_; 
lean_dec_ref_known(v___x_712_, 1);
v___x_718_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_691_ = v___x_718_;
goto v___jp_690_;
}
}
}
else
{
goto v___jp_703_;
}
v___jp_690_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
v___x_692_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_693_ = lean_string_append(v___x_692_, v_context_674_);
v___x_694_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_695_ = lean_string_append(v___x_693_, v___x_694_);
v___x_696_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0___closed__0));
v___x_697_ = lean_string_append(v___x_695_, v___x_696_);
v___x_698_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_699_ = lean_string_append(v___x_697_, v___x_698_);
v___x_700_ = lean_string_append(v___x_699_, v_received_691_);
lean_dec_ref(v_received_691_);
v___x_701_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; 
v___x_702_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_681_ = v___x_700_;
v___y_682_ = v___x_702_;
goto v___jp_680_;
}
else
{
v___y_681_ = v___x_700_;
v___y_682_ = v___x_689_;
goto v___jp_680_;
}
}
v___jp_703_:
{
lean_object* v___x_704_; 
v___x_704_ = l_Lasm_JS_Data_describe(v_d_675_);
v_received_691_ = v___x_704_;
goto v___jp_690_;
}
}
}
}
v___jp_677_:
{
lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_678_ = lean_box(0);
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
return v___x_679_;
}
v___jp_680_:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_683_ = lean_string_append(v___y_681_, v___y_682_);
v___x_684_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
v___x_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
return v___x_685_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0___boxed(lean_object* v_context_719_, lean_object* v_d_720_, lean_object* v_a_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0(v_context_719_, v_d_720_);
lean_dec_ref(v_context_719_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(lean_object* v_b_723_, lean_object* v_args_724_, uint8_t v_await_725_){
_start:
{
uint64_t v___y_728_; uint64_t v___y_729_; uint64_t v___x_772_; uint64_t v___y_774_; 
v___x_772_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_725_ == 0)
{
uint64_t v___x_779_; 
v___x_779_ = 0ULL;
v___y_774_ = v___x_779_;
goto v___jp_773_;
}
else
{
uint64_t v___x_780_; 
v___x_780_ = 2ULL;
v___y_774_ = v___x_780_;
goto v___jp_773_;
}
v___jp_727_:
{
uint64_t v_flags_730_; uint32_t v___x_731_; lean_object* v___x_732_; uint32_t v___x_733_; lean_object* v___x_734_; 
v_flags_730_ = lean_uint64_lor(v___y_728_, v___y_729_);
v___x_731_ = 214;
v___x_732_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_723_, v_args_724_);
v___x_733_ = 0;
v___x_734_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_731_, v_flags_730_, v___x_732_, v___x_733_);
lean_dec(v___x_732_);
if (lean_obj_tag(v___x_734_) == 0)
{
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_736_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_a_735_);
lean_dec_ref_known(v___x_734_, 1);
v___x_736_ = l_Lasm_JS_Wire_decode(v_a_735_);
lean_dec(v_a_735_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_a_737_);
lean_dec_ref_known(v___x_736_, 1);
v___x_738_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_723_);
v___x_739_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0(v___x_738_, v_a_737_);
lean_dec_ref(v___x_738_);
return v___x_739_;
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
v_a_740_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_736_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_736_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
v_a_748_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v___x_734_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_734_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
lean_ctor_set_tag(v___x_750_, 1);
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_748_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_771_; 
v_a_756_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_771_ == 0)
{
v___x_758_ = v___x_734_;
v_isShared_759_ = v_isSharedCheck_771_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_734_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_771_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_769_; 
v___x_760_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_761_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_723_);
v___x_762_ = lean_string_append(v___x_760_, v___x_761_);
lean_dec_ref(v___x_761_);
v___x_763_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_764_ = lean_string_append(v___x_762_, v___x_763_);
v___x_765_ = lean_io_error_to_string(v_a_756_);
v___x_766_ = lean_string_append(v___x_764_, v___x_765_);
lean_dec_ref(v___x_765_);
v___x_767_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_767_, 0, v___x_766_);
if (v_isShared_759_ == 0)
{
lean_ctor_set(v___x_758_, 0, v___x_767_);
v___x_769_ = v___x_758_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v___x_767_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
v___jp_773_:
{
uint8_t v_construct_775_; uint64_t v___x_776_; 
v_construct_775_ = lean_ctor_get_uint8(v_b_723_, sizeof(void*)*4);
v___x_776_ = lean_uint64_lor(v___x_772_, v___y_774_);
if (v_construct_775_ == 0)
{
uint64_t v___x_777_; 
v___x_777_ = 0ULL;
v___y_728_ = v___x_776_;
v___y_729_ = v___x_777_;
goto v___jp_727_;
}
else
{
uint64_t v___x_778_; 
v___x_778_ = 4ULL;
v___y_728_ = v___x_776_;
v___y_729_ = v___x_778_;
goto v___jp_727_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0___boxed(lean_object* v_b_781_, lean_object* v_args_782_, lean_object* v_await_783_, lean_object* v_a_784_){
_start:
{
uint8_t v_await_boxed_785_; lean_object* v_res_786_; 
v_await_boxed_785_ = lean_unbox(v_await_783_);
v_res_786_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(v_b_781_, v_args_782_, v_await_boxed_785_);
lean_dec_ref(v_b_781_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_getElementById(lean_object* v_a_793_){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; uint8_t v___x_799_; lean_object* v___x_800_; 
v___x_795_ = ((lean_object*)(l_Lasm_Web_getElementById___closed__1));
v___x_796_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_797_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_797_, 0, v_a_793_);
v___x_798_ = lean_array_push(v___x_796_, v___x_797_);
v___x_799_ = 1;
v___x_800_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(v___x_795_, v___x_798_, v___x_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_getElementById___boxed(lean_object* v_a_801_, lean_object* v_a_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lasm_Web_getElementById(v_a_801_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorIn(lean_object* v_a_812_, lean_object* v_a_813_){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___y_820_; 
v___x_815_ = ((lean_object*)(l_Lasm_Web_querySelectorIn___closed__2));
v___x_816_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_817_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_817_, 0, v_a_812_);
v___x_818_ = lean_array_push(v___x_816_, v___x_817_);
if (lean_obj_tag(v_a_813_) == 0)
{
lean_object* v___x_824_; 
v___x_824_ = lean_box(1);
v___y_820_ = v___x_824_;
goto v___jp_819_;
}
else
{
lean_object* v_val_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v_val_825_ = lean_ctor_get(v_a_813_, 0);
v___x_826_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
lean_inc(v_val_825_);
v___x_827_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_827_, 0, v_val_825_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
v___y_820_ = v___x_827_;
goto v___jp_819_;
}
v___jp_819_:
{
lean_object* v___x_821_; uint8_t v___x_822_; lean_object* v___x_823_; 
v___x_821_ = lean_array_push(v___x_818_, v___y_820_);
v___x_822_ = 1;
v___x_823_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(v___x_815_, v___x_821_, v___x_822_);
return v___x_823_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorIn___boxed(lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Lasm_Web_querySelectorIn(v_a_828_, v_a_829_);
lean_dec(v_a_829_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1(size_t v_sz_834_, size_t v_i_835_, lean_object* v_bs_836_){
_start:
{
uint8_t v___x_837_; 
v___x_837_ = lean_usize_dec_lt(v_i_835_, v_sz_834_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; 
v___x_838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_838_, 0, v_bs_836_);
return v___x_838_;
}
else
{
lean_object* v_v_839_; 
v_v_839_ = lean_array_uget_borrowed(v_bs_836_, v_i_835_);
if (lean_obj_tag(v_v_839_) == 9)
{
lean_object* v_value_840_; lean_object* v___x_841_; lean_object* v_bs_x27_842_; size_t v___x_843_; size_t v___x_844_; lean_object* v___x_845_; 
v_value_840_ = lean_ctor_get(v_v_839_, 0);
lean_inc(v_value_840_);
v___x_841_ = lean_unsigned_to_nat(0u);
v_bs_x27_842_ = lean_array_uset(v_bs_836_, v_i_835_, v___x_841_);
v___x_843_ = ((size_t)1ULL);
v___x_844_ = lean_usize_add(v_i_835_, v___x_843_);
v___x_845_ = lean_array_uset(v_bs_x27_842_, v_i_835_, v_value_840_);
v_i_835_ = v___x_844_;
v_bs_836_ = v___x_845_;
goto _start;
}
else
{
lean_object* v___x_847_; 
lean_dec_ref(v_bs_836_);
v___x_847_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___closed__0));
return v___x_847_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_848_, lean_object* v_i_849_, lean_object* v_bs_850_){
_start:
{
size_t v_sz_boxed_851_; size_t v_i_boxed_852_; lean_object* v_res_853_; 
v_sz_boxed_851_ = lean_unbox_usize(v_sz_848_);
lean_dec(v_sz_848_);
v_i_boxed_852_ = lean_unbox_usize(v_i_849_);
lean_dec(v_i_849_);
v_res_853_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1(v_sz_boxed_851_, v_i_boxed_852_, v_bs_850_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0(lean_object* v_context_858_, lean_object* v_d_859_){
_start:
{
lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_868_; lean_object* v_received_869_; lean_object* v___y_888_; lean_object* v_a_891_; 
if (lean_obj_tag(v_d_859_) == 7)
{
lean_object* v_items_915_; size_t v_sz_916_; size_t v___x_917_; lean_object* v___x_918_; 
v_items_915_ = lean_ctor_get(v_d_859_, 0);
v_sz_916_ = lean_array_size(v_items_915_);
v___x_917_ = ((size_t)0ULL);
lean_inc_ref(v_items_915_);
v___x_918_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1(v_sz_916_, v___x_917_, v_items_915_);
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v_a_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; uint8_t v___x_923_; 
v_a_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_a_919_);
lean_dec_ref_known(v___x_918_, 1);
v___x_920_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__3));
v___x_921_ = lean_string_utf8_byte_size(v_a_919_);
v___x_922_ = lean_unsigned_to_nat(0u);
v___x_923_ = lean_nat_dec_eq(v___x_921_, v___x_922_);
if (v___x_923_ == 0)
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_924_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_925_ = lean_string_append(v___x_924_, v_a_919_);
lean_dec(v_a_919_);
v___x_926_ = lean_string_append(v___x_920_, v___x_925_);
lean_dec_ref(v___x_925_);
v_a_891_ = v___x_926_;
goto v___jp_890_;
}
else
{
lean_dec(v_a_919_);
v_a_891_ = v___x_920_;
goto v___jp_890_;
}
}
else
{
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v_a_927_; 
v_a_927_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_a_927_);
lean_dec_ref_known(v___x_918_, 1);
v_a_891_ = v_a_927_;
goto v___jp_890_;
}
else
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
lean_dec_ref_known(v_d_859_, 1);
v_a_928_ = lean_ctor_get(v___x_918_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_918_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_918_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
lean_ctor_set_tag(v___x_930_, 0);
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
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
else
{
lean_object* v___x_936_; 
v___x_936_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v_a_891_ = v___x_936_;
goto v___jp_890_;
}
v___jp_861_:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_864_ = lean_string_append(v___y_862_, v___y_863_);
lean_dec_ref(v___y_863_);
v___x_865_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_865_, 0, v___x_864_);
v___x_866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_866_, 0, v___x_865_);
return v___x_866_;
}
v___jp_867_:
{
lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; uint8_t v___x_881_; 
v___x_870_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_871_ = lean_string_append(v___x_870_, v_context_858_);
v___x_872_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_873_ = lean_string_append(v___x_871_, v___x_872_);
v___x_874_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__0));
v___x_875_ = lean_string_append(v___x_873_, v___x_874_);
v___x_876_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_877_ = lean_string_append(v___x_875_, v___x_876_);
v___x_878_ = lean_string_append(v___x_877_, v_received_869_);
lean_dec_ref(v_received_869_);
v___x_879_ = lean_string_utf8_byte_size(v___y_868_);
v___x_880_ = lean_unsigned_to_nat(0u);
v___x_881_ = lean_nat_dec_eq(v___x_879_, v___x_880_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_882_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__1));
v___x_883_ = lean_string_append(v___x_882_, v___y_868_);
lean_dec_ref(v___y_868_);
v___x_884_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__2));
v___x_885_ = lean_string_append(v___x_883_, v___x_884_);
v___y_862_ = v___x_878_;
v___y_863_ = v___x_885_;
goto v___jp_861_;
}
else
{
lean_object* v___x_886_; 
lean_dec_ref(v___y_868_);
v___x_886_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___y_862_ = v___x_878_;
v___y_863_ = v___x_886_;
goto v___jp_861_;
}
}
v___jp_887_:
{
lean_object* v___x_889_; 
v___x_889_ = l_Lasm_JS_Data_describe(v_d_859_);
v___y_868_ = v___y_888_;
v_received_869_ = v___x_889_;
goto v___jp_867_;
}
v___jp_890_:
{
if (lean_obj_tag(v_d_859_) == 9)
{
lean_object* v_value_892_; lean_object* v_description_893_; lean_object* v___x_894_; uint8_t v___x_895_; 
v_value_892_ = lean_ctor_get(v_d_859_, 0);
v_description_893_ = lean_ctor_get(v_d_859_, 1);
v___x_894_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_895_ = lean_string_dec_eq(v_description_893_, v___x_894_);
if (v___x_895_ == 0)
{
v___y_888_ = v_a_891_;
goto v___jp_887_;
}
else
{
lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_912_; 
lean_inc(v_value_892_);
v_isSharedCheck_912_ = !lean_is_exclusive(v_d_859_);
if (v_isSharedCheck_912_ == 0)
{
lean_object* v_unused_913_; lean_object* v_unused_914_; 
v_unused_913_ = lean_ctor_get(v_d_859_, 1);
lean_dec(v_unused_913_);
v_unused_914_ = lean_ctor_get(v_d_859_, 0);
lean_dec(v_unused_914_);
v___x_897_ = v_d_859_;
v_isShared_898_ = v_isSharedCheck_912_;
goto v_resetjp_896_;
}
else
{
lean_dec(v_d_859_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_912_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
uint32_t v___x_899_; uint64_t v___x_900_; lean_object* v___x_902_; 
v___x_899_ = 206;
v___x_900_ = 0ULL;
lean_inc(v_value_892_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 1, v___x_894_);
v___x_902_ = v___x_897_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_value_892_);
lean_ctor_set(v_reuseFailAlloc_911_, 1, v___x_894_);
v___x_902_ = v_reuseFailAlloc_911_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
uint32_t v___x_903_; lean_object* v___x_904_; 
v___x_903_ = lasm_js_value_handle(v_value_892_);
lean_dec(v_value_892_);
v___x_904_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_899_, v___x_900_, v___x_902_, v___x_903_);
lean_dec_ref(v___x_902_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; uint8_t v___x_906_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_904_, 1);
v___x_906_ = lean_string_validate_utf8(v_a_905_);
if (v___x_906_ == 0)
{
lean_object* v___x_907_; lean_object* v___x_908_; 
lean_dec(v_a_905_);
v___x_907_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_908_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_907_);
v___y_868_ = v_a_891_;
v_received_869_ = v___x_908_;
goto v___jp_867_;
}
else
{
lean_object* v___x_909_; 
v___x_909_ = lean_string_from_utf8_unchecked(v_a_905_);
v___y_868_ = v_a_891_;
v_received_869_ = v___x_909_;
goto v___jp_867_;
}
}
else
{
lean_object* v___x_910_; 
lean_dec_ref_known(v___x_904_, 1);
v___x_910_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v___y_868_ = v_a_891_;
v_received_869_ = v___x_910_;
goto v___jp_867_;
}
}
}
}
}
else
{
v___y_888_ = v_a_891_;
goto v___jp_887_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___boxed(lean_object* v_context_937_, lean_object* v_d_938_, lean_object* v_a_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0(v_context_937_, v_d_938_);
lean_dec_ref(v_context_937_);
return v_res_940_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0(void){
_start:
{
uint8_t v___x_941_; uint64_t v___x_942_; 
v___x_941_ = 0;
v___x_942_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_941_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0(lean_object* v_b_943_, lean_object* v_args_944_, uint8_t v_await_945_){
_start:
{
uint64_t v___y_948_; uint64_t v___y_949_; uint64_t v___x_992_; uint64_t v___y_994_; 
v___x_992_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_945_ == 0)
{
uint64_t v___x_999_; 
v___x_999_ = 0ULL;
v___y_994_ = v___x_999_;
goto v___jp_993_;
}
else
{
uint64_t v___x_1000_; 
v___x_1000_ = 2ULL;
v___y_994_ = v___x_1000_;
goto v___jp_993_;
}
v___jp_947_:
{
uint64_t v_flags_950_; uint32_t v___x_951_; lean_object* v___x_952_; uint32_t v___x_953_; lean_object* v___x_954_; 
v_flags_950_ = lean_uint64_lor(v___y_948_, v___y_949_);
v___x_951_ = 214;
v___x_952_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_943_, v_args_944_);
v___x_953_ = 0;
v___x_954_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_951_, v_flags_950_, v___x_952_, v___x_953_);
lean_dec(v___x_952_);
if (lean_obj_tag(v___x_954_) == 0)
{
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v_a_955_; lean_object* v___x_956_; 
v_a_955_ = lean_ctor_get(v___x_954_, 0);
lean_inc(v_a_955_);
lean_dec_ref_known(v___x_954_, 1);
v___x_956_ = l_Lasm_JS_Wire_decode(v_a_955_);
lean_dec(v_a_955_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v_a_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v_a_957_ = lean_ctor_get(v___x_956_, 0);
lean_inc(v_a_957_);
lean_dec_ref_known(v___x_956_, 1);
v___x_958_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_943_);
v___x_959_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0(v___x_958_, v_a_957_);
lean_dec_ref(v___x_958_);
return v___x_959_;
}
else
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_967_; 
v_a_960_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_967_ == 0)
{
v___x_962_ = v___x_956_;
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_956_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
v_a_968_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_954_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_954_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
lean_ctor_set_tag(v___x_970_, 1);
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
else
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_991_; 
v_a_976_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_991_ == 0)
{
v___x_978_ = v___x_954_;
v_isShared_979_ = v_isSharedCheck_991_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_954_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_991_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_989_; 
v___x_980_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_981_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_943_);
v___x_982_ = lean_string_append(v___x_980_, v___x_981_);
lean_dec_ref(v___x_981_);
v___x_983_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_984_ = lean_string_append(v___x_982_, v___x_983_);
v___x_985_ = lean_io_error_to_string(v_a_976_);
v___x_986_ = lean_string_append(v___x_984_, v___x_985_);
lean_dec_ref(v___x_985_);
v___x_987_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v___x_987_);
v___x_989_ = v___x_978_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_987_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
v___jp_993_:
{
uint8_t v_construct_995_; uint64_t v___x_996_; 
v_construct_995_ = lean_ctor_get_uint8(v_b_943_, sizeof(void*)*4);
v___x_996_ = lean_uint64_lor(v___x_992_, v___y_994_);
if (v_construct_995_ == 0)
{
uint64_t v___x_997_; 
v___x_997_ = 0ULL;
v___y_948_ = v___x_996_;
v___y_949_ = v___x_997_;
goto v___jp_947_;
}
else
{
uint64_t v___x_998_; 
v___x_998_ = 4ULL;
v___y_948_ = v___x_996_;
v___y_949_ = v___x_998_;
goto v___jp_947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___boxed(lean_object* v_b_1001_, lean_object* v_args_1002_, lean_object* v_await_1003_, lean_object* v_a_1004_){
_start:
{
uint8_t v_await_boxed_1005_; lean_object* v_res_1006_; 
v_await_boxed_1005_ = lean_unbox(v_await_1003_);
v_res_1006_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0(v_b_1001_, v_args_1002_, v_await_boxed_1005_);
lean_dec_ref(v_b_1001_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAllIn(lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___y_1023_; 
v___x_1018_ = ((lean_object*)(l_Lasm_Web_querySelectorAllIn___closed__2));
v___x_1019_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1020_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1020_, 0, v_a_1015_);
v___x_1021_ = lean_array_push(v___x_1019_, v___x_1020_);
if (lean_obj_tag(v_a_1016_) == 0)
{
lean_object* v___x_1027_; 
v___x_1027_ = lean_box(1);
v___y_1023_ = v___x_1027_;
goto v___jp_1022_;
}
else
{
lean_object* v_val_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v_val_1028_ = lean_ctor_get(v_a_1016_, 0);
v___x_1029_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
lean_inc(v_val_1028_);
v___x_1030_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1030_, 0, v_val_1028_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___y_1023_ = v___x_1030_;
goto v___jp_1022_;
}
v___jp_1022_:
{
lean_object* v___x_1024_; uint8_t v___x_1025_; lean_object* v___x_1026_; 
v___x_1024_ = lean_array_push(v___x_1021_, v___y_1023_);
v___x_1025_ = 1;
v___x_1026_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0(v___x_1018_, v___x_1024_, v___x_1025_);
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAllIn___boxed(lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_Lasm_Web_querySelectorAllIn(v_a_1031_, v_a_1032_);
lean_dec(v_a_1032_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelector(lean_object* v_selector_1035_){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = lean_box(0);
v___x_1038_ = l_Lasm_Web_querySelectorIn(v_selector_1035_, v___x_1037_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelector___boxed(lean_object* v_selector_1039_, lean_object* v_a_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lasm_Web_querySelector(v_selector_1039_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAll(lean_object* v_selector_1042_){
_start:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = lean_box(0);
v___x_1045_ = l_Lasm_Web_querySelectorAllIn(v_selector_1042_, v___x_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_querySelectorAll___boxed(lean_object* v_selector_1046_, lean_object* v_a_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lasm_Web_querySelectorAll(v_selector_1046_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = lean_box(0);
v___x_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0___redArg___boxed(lean_object* v_a_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0___redArg();
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(lean_object* v_b_1054_, lean_object* v_args_1055_, uint8_t v_await_1056_){
_start:
{
uint64_t v___y_1059_; uint64_t v___y_1060_; uint64_t v___x_1101_; uint64_t v___y_1103_; 
v___x_1101_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_1056_ == 0)
{
uint64_t v___x_1108_; 
v___x_1108_ = 0ULL;
v___y_1103_ = v___x_1108_;
goto v___jp_1102_;
}
else
{
uint64_t v___x_1109_; 
v___x_1109_ = 2ULL;
v___y_1103_ = v___x_1109_;
goto v___jp_1102_;
}
v___jp_1058_:
{
uint64_t v_flags_1061_; uint32_t v___x_1062_; lean_object* v___x_1063_; uint32_t v___x_1064_; lean_object* v___x_1065_; 
v_flags_1061_ = lean_uint64_lor(v___y_1059_, v___y_1060_);
v___x_1062_ = 214;
v___x_1063_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1054_, v_args_1055_);
v___x_1064_ = 0;
v___x_1065_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1062_, v_flags_1061_, v___x_1063_, v___x_1064_);
lean_dec(v___x_1063_);
if (lean_obj_tag(v___x_1065_) == 0)
{
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1067_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1066_);
lean_dec_ref_known(v___x_1065_, 1);
v___x_1067_ = l_Lasm_JS_Wire_decode(v_a_1066_);
lean_dec(v_a_1066_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v___x_1068_; 
lean_dec_ref_known(v___x_1067_, 1);
v___x_1068_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0___redArg();
return v___x_1068_;
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_a_1069_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1067_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1067_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
v_a_1077_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___x_1065_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1065_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
lean_ctor_set_tag(v___x_1079_, 1);
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1100_; 
v_a_1085_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1087_ = v___x_1065_;
v_isShared_1088_ = v_isSharedCheck_1100_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1065_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1100_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___x_1089_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1090_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1054_);
v___x_1091_ = lean_string_append(v___x_1089_, v___x_1090_);
lean_dec_ref(v___x_1090_);
v___x_1092_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1093_ = lean_string_append(v___x_1091_, v___x_1092_);
v___x_1094_ = lean_io_error_to_string(v_a_1085_);
v___x_1095_ = lean_string_append(v___x_1093_, v___x_1094_);
lean_dec_ref(v___x_1094_);
v___x_1096_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 0, v___x_1096_);
v___x_1098_ = v___x_1087_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
}
v___jp_1102_:
{
uint8_t v_construct_1104_; uint64_t v___x_1105_; 
v_construct_1104_ = lean_ctor_get_uint8(v_b_1054_, sizeof(void*)*4);
v___x_1105_ = lean_uint64_lor(v___x_1101_, v___y_1103_);
if (v_construct_1104_ == 0)
{
uint64_t v___x_1106_; 
v___x_1106_ = 0ULL;
v___y_1059_ = v___x_1105_;
v___y_1060_ = v___x_1106_;
goto v___jp_1058_;
}
else
{
uint64_t v___x_1107_; 
v___x_1107_ = 4ULL;
v___y_1059_ = v___x_1105_;
v___y_1060_ = v___x_1107_;
goto v___jp_1058_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0___boxed(lean_object* v_b_1110_, lean_object* v_args_1111_, lean_object* v_await_1112_, lean_object* v_a_1113_){
_start:
{
uint8_t v_await_boxed_1114_; lean_object* v_res_1115_; 
v_await_boxed_1114_ = lean_unbox(v_await_1112_);
v_res_1115_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v_b_1110_, v_args_1111_, v_await_boxed_1114_);
lean_dec_ref(v_b_1110_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_appendChild(lean_object* v_a_1122_, lean_object* v_a_1123_){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; lean_object* v___x_1133_; 
v___x_1125_ = ((lean_object*)(l_Lasm_Web_Raw_appendChild___closed__1));
v___x_1126_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1127_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1128_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1128_, 0, v_a_1122_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = lean_array_push(v___x_1126_, v___x_1128_);
v___x_1130_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1130_, 0, v_a_1123_);
lean_ctor_set(v___x_1130_, 1, v___x_1127_);
v___x_1131_ = lean_array_push(v___x_1129_, v___x_1130_);
v___x_1132_ = 1;
v___x_1133_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1125_, v___x_1131_, v___x_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_appendChild___boxed(lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Lasm_Web_Raw_appendChild(v_a_1134_, v_a_1135_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0(lean_object* v_context_1138_, lean_object* v_d_1139_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0___redArg();
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0___boxed(lean_object* v_context_1142_, lean_object* v_d_1143_, lean_object* v_a_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0_spec__0(v_context_1142_, v_d_1143_);
lean_dec(v_d_1143_);
lean_dec_ref(v_context_1142_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_insertBefore(lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_){
_start:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___y_1164_; 
v___x_1156_ = ((lean_object*)(l_Lasm_Web_Raw_insertBefore___closed__1));
v___x_1157_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1158_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1159_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1159_, 0, v_a_1152_);
lean_ctor_set(v___x_1159_, 1, v___x_1158_);
v___x_1160_ = lean_array_push(v___x_1157_, v___x_1159_);
v___x_1161_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1161_, 0, v_a_1153_);
lean_ctor_set(v___x_1161_, 1, v___x_1158_);
v___x_1162_ = lean_array_push(v___x_1160_, v___x_1161_);
if (lean_obj_tag(v_a_1154_) == 0)
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_box(1);
v___y_1164_ = v___x_1168_;
goto v___jp_1163_;
}
else
{
lean_object* v_val_1169_; lean_object* v___x_1170_; 
v_val_1169_ = lean_ctor_get(v_a_1154_, 0);
lean_inc(v_val_1169_);
v___x_1170_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1170_, 0, v_val_1169_);
lean_ctor_set(v___x_1170_, 1, v___x_1158_);
v___y_1164_ = v___x_1170_;
goto v___jp_1163_;
}
v___jp_1163_:
{
lean_object* v___x_1165_; uint8_t v___x_1166_; lean_object* v___x_1167_; 
v___x_1165_ = lean_array_push(v___x_1162_, v___y_1164_);
v___x_1166_ = 1;
v___x_1167_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1156_, v___x_1165_, v___x_1166_);
return v___x_1167_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_insertBefore___boxed(lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Lasm_Web_Raw_insertBefore(v_a_1171_, v_a_1172_, v_a_1173_);
lean_dec(v_a_1173_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeChild(lean_object* v_a_1182_, lean_object* v_a_1183_){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; uint8_t v___x_1192_; lean_object* v___x_1193_; 
v___x_1185_ = ((lean_object*)(l_Lasm_Web_Raw_removeChild___closed__1));
v___x_1186_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1187_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1188_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1188_, 0, v_a_1182_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = lean_array_push(v___x_1186_, v___x_1188_);
v___x_1190_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1190_, 0, v_a_1183_);
lean_ctor_set(v___x_1190_, 1, v___x_1187_);
v___x_1191_ = lean_array_push(v___x_1189_, v___x_1190_);
v___x_1192_ = 1;
v___x_1193_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1185_, v___x_1191_, v___x_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeChild___boxed(lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lasm_Web_Raw_removeChild(v_a_1194_, v_a_1195_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeNode(lean_object* v_a_1204_){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; uint8_t v___x_1211_; lean_object* v___x_1212_; 
v___x_1206_ = ((lean_object*)(l_Lasm_Web_Raw_removeNode___closed__1));
v___x_1207_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1208_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1209_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1209_, 0, v_a_1204_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = lean_array_push(v___x_1207_, v___x_1209_);
v___x_1211_ = 1;
v___x_1212_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1206_, v___x_1210_, v___x_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeNode___boxed(lean_object* v_a_1213_, lean_object* v_a_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Lasm_Web_Raw_removeNode(v_a_1213_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceNode(lean_object* v_a_1222_, lean_object* v_a_1223_){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; uint8_t v___x_1232_; lean_object* v___x_1233_; 
v___x_1225_ = ((lean_object*)(l_Lasm_Web_Raw_replaceNode___closed__1));
v___x_1226_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1227_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1228_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1228_, 0, v_a_1222_);
lean_ctor_set(v___x_1228_, 1, v___x_1227_);
v___x_1229_ = lean_array_push(v___x_1226_, v___x_1228_);
v___x_1230_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1230_, 0, v_a_1223_);
lean_ctor_set(v___x_1230_, 1, v___x_1227_);
v___x_1231_ = lean_array_push(v___x_1229_, v___x_1230_);
v___x_1232_ = 1;
v___x_1233_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1225_, v___x_1231_, v___x_1232_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceNode___boxed(lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Lasm_Web_Raw_replaceNode(v_a_1234_, v_a_1235_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(size_t v_sz_1238_, size_t v_i_1239_, lean_object* v_bs_1240_){
_start:
{
uint8_t v___x_1241_; 
v___x_1241_ = lean_usize_dec_lt(v_i_1239_, v_sz_1238_);
if (v___x_1241_ == 0)
{
return v_bs_1240_;
}
else
{
lean_object* v_v_1242_; lean_object* v___x_1243_; lean_object* v_bs_x27_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; size_t v___x_1247_; size_t v___x_1248_; lean_object* v___x_1249_; 
v_v_1242_ = lean_array_uget(v_bs_1240_, v_i_1239_);
v___x_1243_ = lean_unsigned_to_nat(0u);
v_bs_x27_1244_ = lean_array_uset(v_bs_1240_, v_i_1239_, v___x_1243_);
v___x_1245_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1246_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1246_, 0, v_v_1242_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = ((size_t)1ULL);
v___x_1248_ = lean_usize_add(v_i_1239_, v___x_1247_);
v___x_1249_ = lean_array_uset(v_bs_x27_1244_, v_i_1239_, v___x_1246_);
v_i_1239_ = v___x_1248_;
v_bs_1240_ = v___x_1249_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0___boxed(lean_object* v_sz_1251_, lean_object* v_i_1252_, lean_object* v_bs_1253_){
_start:
{
size_t v_sz_boxed_1254_; size_t v_i_boxed_1255_; lean_object* v_res_1256_; 
v_sz_boxed_1254_ = lean_unbox_usize(v_sz_1251_);
lean_dec(v_sz_1251_);
v_i_boxed_1255_ = lean_unbox_usize(v_i_1252_);
lean_dec(v_i_1252_);
v_res_1256_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(v_sz_boxed_1254_, v_i_boxed_1255_, v_bs_1253_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_append(lean_object* v_a_1263_, lean_object* v_a_1264_){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; size_t v_sz_1271_; size_t v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; uint8_t v___x_1276_; lean_object* v___x_1277_; 
v___x_1266_ = ((lean_object*)(l_Lasm_Web_Raw_append___closed__1));
v___x_1267_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1268_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1269_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1269_, 0, v_a_1263_);
lean_ctor_set(v___x_1269_, 1, v___x_1268_);
v___x_1270_ = lean_array_push(v___x_1267_, v___x_1269_);
v_sz_1271_ = lean_array_size(v_a_1264_);
v___x_1272_ = ((size_t)0ULL);
v___x_1273_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(v_sz_1271_, v___x_1272_, v_a_1264_);
v___x_1274_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
v___x_1275_ = lean_array_push(v___x_1270_, v___x_1274_);
v___x_1276_ = 1;
v___x_1277_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1266_, v___x_1275_, v___x_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_append___boxed(lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l_Lasm_Web_Raw_append(v_a_1278_, v_a_1279_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceChildren(lean_object* v_a_1288_, lean_object* v_a_1289_){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; size_t v_sz_1296_; size_t v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; uint8_t v___x_1301_; lean_object* v___x_1302_; 
v___x_1291_ = ((lean_object*)(l_Lasm_Web_Raw_replaceChildren___closed__1));
v___x_1292_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1293_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1294_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1294_, 0, v_a_1288_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
v___x_1295_ = lean_array_push(v___x_1292_, v___x_1294_);
v_sz_1296_ = lean_array_size(v_a_1289_);
v___x_1297_ = ((size_t)0ULL);
v___x_1298_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(v_sz_1296_, v___x_1297_, v_a_1289_);
v___x_1299_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
v___x_1300_ = lean_array_push(v___x_1295_, v___x_1299_);
v___x_1301_ = 1;
v___x_1302_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1291_, v___x_1300_, v___x_1301_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceChildren___boxed(lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lasm_Web_Raw_replaceChildren(v_a_1303_, v_a_1304_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(lean_object* v_context_1308_, lean_object* v_d_1309_){
_start:
{
lean_object* v___y_1312_; lean_object* v___y_1313_; 
if (lean_obj_tag(v_d_1309_) == 4)
{
lean_object* v_s_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1324_; 
v_s_1317_ = lean_ctor_get(v_d_1309_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v_d_1309_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1319_ = v_d_1309_;
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_s_1317_);
lean_dec(v_d_1309_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1322_; 
if (v_isShared_1320_ == 0)
{
lean_ctor_set_tag(v___x_1319_, 0);
v___x_1322_ = v___x_1319_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_s_1317_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
else
{
lean_object* v___x_1325_; lean_object* v_received_1327_; 
v___x_1325_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_1309_) == 9)
{
lean_object* v_value_1341_; lean_object* v_description_1342_; uint8_t v___x_1343_; 
v_value_1341_ = lean_ctor_get(v_d_1309_, 0);
v_description_1342_ = lean_ctor_get(v_d_1309_, 1);
v___x_1343_ = lean_string_dec_eq(v_description_1342_, v___x_1325_);
if (v___x_1343_ == 0)
{
goto v___jp_1339_;
}
else
{
uint32_t v___x_1344_; uint64_t v___x_1345_; lean_object* v___x_1346_; uint32_t v___x_1347_; lean_object* v___x_1348_; 
lean_inc_n(v_value_1341_, 2);
lean_dec_ref_known(v_d_1309_, 2);
v___x_1344_ = 206;
v___x_1345_ = 0ULL;
v___x_1346_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1346_, 0, v_value_1341_);
lean_ctor_set(v___x_1346_, 1, v___x_1325_);
v___x_1347_ = lasm_js_value_handle(v_value_1341_);
lean_dec(v_value_1341_);
v___x_1348_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1344_, v___x_1345_, v___x_1346_, v___x_1347_);
lean_dec_ref_known(v___x_1346_, 2);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; uint8_t v___x_1350_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref_known(v___x_1348_, 1);
v___x_1350_ = lean_string_validate_utf8(v_a_1349_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec(v_a_1349_);
v___x_1351_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_1352_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1351_);
v_received_1327_ = v___x_1352_;
goto v___jp_1326_;
}
else
{
lean_object* v___x_1353_; 
v___x_1353_ = lean_string_from_utf8_unchecked(v_a_1349_);
v_received_1327_ = v___x_1353_;
goto v___jp_1326_;
}
}
else
{
lean_object* v___x_1354_; 
lean_dec_ref_known(v___x_1348_, 1);
v___x_1354_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_1327_ = v___x_1354_;
goto v___jp_1326_;
}
}
}
else
{
goto v___jp_1339_;
}
v___jp_1326_:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; uint8_t v___x_1337_; 
v___x_1328_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1329_ = lean_string_append(v___x_1328_, v_context_1308_);
v___x_1330_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_1331_ = lean_string_append(v___x_1329_, v___x_1330_);
v___x_1332_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0___closed__0));
v___x_1333_ = lean_string_append(v___x_1331_, v___x_1332_);
v___x_1334_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1335_ = lean_string_append(v___x_1333_, v___x_1334_);
v___x_1336_ = lean_string_append(v___x_1335_, v_received_1327_);
lean_dec_ref(v_received_1327_);
v___x_1337_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_1337_ == 0)
{
lean_object* v___x_1338_; 
v___x_1338_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_1312_ = v___x_1336_;
v___y_1313_ = v___x_1338_;
goto v___jp_1311_;
}
else
{
v___y_1312_ = v___x_1336_;
v___y_1313_ = v___x_1325_;
goto v___jp_1311_;
}
}
v___jp_1339_:
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lasm_JS_Data_describe(v_d_1309_);
v_received_1327_ = v___x_1340_;
goto v___jp_1326_;
}
}
v___jp_1311_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1314_ = lean_string_append(v___y_1312_, v___y_1313_);
v___x_1315_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
v___x_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
return v___x_1316_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0___boxed(lean_object* v_context_1355_, lean_object* v_d_1356_, lean_object* v_a_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(v_context_1355_, v_d_1356_);
lean_dec_ref(v_context_1355_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(lean_object* v_b_1359_, lean_object* v_args_1360_, uint8_t v_await_1361_){
_start:
{
uint64_t v___y_1364_; uint64_t v___y_1365_; uint64_t v___x_1408_; uint64_t v___y_1410_; 
v___x_1408_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_1361_ == 0)
{
uint64_t v___x_1415_; 
v___x_1415_ = 0ULL;
v___y_1410_ = v___x_1415_;
goto v___jp_1409_;
}
else
{
uint64_t v___x_1416_; 
v___x_1416_ = 2ULL;
v___y_1410_ = v___x_1416_;
goto v___jp_1409_;
}
v___jp_1363_:
{
uint64_t v_flags_1366_; uint32_t v___x_1367_; lean_object* v___x_1368_; uint32_t v___x_1369_; lean_object* v___x_1370_; 
v_flags_1366_ = lean_uint64_lor(v___y_1364_, v___y_1365_);
v___x_1367_ = 214;
v___x_1368_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1359_, v_args_1360_);
v___x_1369_ = 0;
v___x_1370_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1367_, v_flags_1366_, v___x_1368_, v___x_1369_);
lean_dec(v___x_1368_);
if (lean_obj_tag(v___x_1370_) == 0)
{
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v___x_1372_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_a_1371_);
lean_dec_ref_known(v___x_1370_, 1);
v___x_1372_ = l_Lasm_JS_Wire_decode(v_a_1371_);
lean_dec(v_a_1371_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_a_1373_);
lean_dec_ref_known(v___x_1372_, 1);
v___x_1374_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1359_);
v___x_1375_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(v___x_1374_, v_a_1373_);
lean_dec_ref(v___x_1374_);
return v___x_1375_;
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
v_a_1376_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1372_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1372_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
v_a_1384_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___x_1370_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1370_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
lean_ctor_set_tag(v___x_1386_, 1);
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
else
{
lean_object* v_a_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1407_; 
v_a_1392_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1407_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1394_ = v___x_1370_;
v_isShared_1395_ = v_isSharedCheck_1407_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_a_1392_);
lean_dec(v___x_1370_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1407_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1405_; 
v___x_1396_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1397_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1359_);
v___x_1398_ = lean_string_append(v___x_1396_, v___x_1397_);
lean_dec_ref(v___x_1397_);
v___x_1399_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1400_ = lean_string_append(v___x_1398_, v___x_1399_);
v___x_1401_ = lean_io_error_to_string(v_a_1392_);
v___x_1402_ = lean_string_append(v___x_1400_, v___x_1401_);
lean_dec_ref(v___x_1401_);
v___x_1403_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1402_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 0, v___x_1403_);
v___x_1405_ = v___x_1394_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v___x_1403_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
}
}
v___jp_1409_:
{
uint8_t v_construct_1411_; uint64_t v___x_1412_; 
v_construct_1411_ = lean_ctor_get_uint8(v_b_1359_, sizeof(void*)*4);
v___x_1412_ = lean_uint64_lor(v___x_1408_, v___y_1410_);
if (v_construct_1411_ == 0)
{
uint64_t v___x_1413_; 
v___x_1413_ = 0ULL;
v___y_1364_ = v___x_1412_;
v___y_1365_ = v___x_1413_;
goto v___jp_1363_;
}
else
{
uint64_t v___x_1414_; 
v___x_1414_ = 4ULL;
v___y_1364_ = v___x_1412_;
v___y_1365_ = v___x_1414_;
goto v___jp_1363_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0___boxed(lean_object* v_b_1417_, lean_object* v_args_1418_, lean_object* v_await_1419_, lean_object* v_a_1420_){
_start:
{
uint8_t v_await_boxed_1421_; lean_object* v_res_1422_; 
v_await_boxed_1421_ = lean_unbox(v_await_1419_);
v_res_1422_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v_b_1417_, v_args_1418_, v_await_boxed_1421_);
lean_dec_ref(v_b_1417_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getText(lean_object* v_a_1429_){
_start:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; uint8_t v___x_1436_; lean_object* v___x_1437_; 
v___x_1431_ = ((lean_object*)(l_Lasm_Web_Raw_getText___closed__1));
v___x_1432_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1433_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1434_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1434_, 0, v_a_1429_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
v___x_1435_ = lean_array_push(v___x_1432_, v___x_1434_);
v___x_1436_ = 1;
v___x_1437_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_1431_, v___x_1435_, v___x_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getText___boxed(lean_object* v_a_1438_, lean_object* v_a_1439_){
_start:
{
lean_object* v_res_1440_; 
v_res_1440_ = l_Lasm_Web_Raw_getText(v_a_1438_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setText(lean_object* v_a_1447_, lean_object* v_a_1448_){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; uint8_t v___x_1457_; lean_object* v___x_1458_; 
v___x_1450_ = ((lean_object*)(l_Lasm_Web_Raw_setText___closed__1));
v___x_1451_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1452_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1453_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1453_, 0, v_a_1447_);
lean_ctor_set(v___x_1453_, 1, v___x_1452_);
v___x_1454_ = lean_array_push(v___x_1451_, v___x_1453_);
v___x_1455_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1455_, 0, v_a_1448_);
v___x_1456_ = lean_array_push(v___x_1454_, v___x_1455_);
v___x_1457_ = 1;
v___x_1458_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1450_, v___x_1456_, v___x_1457_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setText___boxed(lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l_Lasm_Web_Raw_setText(v_a_1459_, v_a_1460_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0(lean_object* v_context_1464_, lean_object* v_d_1465_){
_start:
{
lean_object* v___y_1471_; lean_object* v___y_1472_; 
switch(lean_obj_tag(v_d_1465_))
{
case 1:
{
goto v___jp_1467_;
}
case 0:
{
goto v___jp_1467_;
}
default: 
{
if (lean_obj_tag(v_d_1465_) == 9)
{
lean_object* v_value_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v_value_1476_ = lean_ctor_get(v_d_1465_, 0);
lean_inc(v_value_1476_);
lean_dec_ref_known(v_d_1465_, 2);
v___x_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1477_, 0, v_value_1476_);
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
return v___x_1478_;
}
else
{
lean_object* v___x_1479_; lean_object* v_received_1481_; 
v___x_1479_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_1465_) == 9)
{
lean_object* v_value_1495_; lean_object* v_description_1496_; uint8_t v___x_1497_; 
v_value_1495_ = lean_ctor_get(v_d_1465_, 0);
v_description_1496_ = lean_ctor_get(v_d_1465_, 1);
v___x_1497_ = lean_string_dec_eq(v_description_1496_, v___x_1479_);
if (v___x_1497_ == 0)
{
goto v___jp_1493_;
}
else
{
uint32_t v___x_1498_; uint64_t v___x_1499_; lean_object* v___x_1500_; uint32_t v___x_1501_; lean_object* v___x_1502_; 
lean_inc_n(v_value_1495_, 2);
lean_dec_ref_known(v_d_1465_, 2);
v___x_1498_ = 206;
v___x_1499_ = 0ULL;
v___x_1500_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1500_, 0, v_value_1495_);
lean_ctor_set(v___x_1500_, 1, v___x_1479_);
v___x_1501_ = lasm_js_value_handle(v_value_1495_);
lean_dec(v_value_1495_);
v___x_1502_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1498_, v___x_1499_, v___x_1500_, v___x_1501_);
lean_dec_ref_known(v___x_1500_, 2);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_a_1503_; uint8_t v___x_1504_; 
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_a_1503_);
lean_dec_ref_known(v___x_1502_, 1);
v___x_1504_ = lean_string_validate_utf8(v_a_1503_);
if (v___x_1504_ == 0)
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
lean_dec(v_a_1503_);
v___x_1505_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_1506_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1505_);
v_received_1481_ = v___x_1506_;
goto v___jp_1480_;
}
else
{
lean_object* v___x_1507_; 
v___x_1507_ = lean_string_from_utf8_unchecked(v_a_1503_);
v_received_1481_ = v___x_1507_;
goto v___jp_1480_;
}
}
else
{
lean_object* v___x_1508_; 
lean_dec_ref_known(v___x_1502_, 1);
v___x_1508_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_1481_ = v___x_1508_;
goto v___jp_1480_;
}
}
}
else
{
goto v___jp_1493_;
}
v___jp_1480_:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; uint8_t v___x_1491_; 
v___x_1482_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1483_ = lean_string_append(v___x_1482_, v_context_1464_);
v___x_1484_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_1485_ = lean_string_append(v___x_1483_, v___x_1484_);
v___x_1486_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0___closed__0));
v___x_1487_ = lean_string_append(v___x_1485_, v___x_1486_);
v___x_1488_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1489_ = lean_string_append(v___x_1487_, v___x_1488_);
v___x_1490_ = lean_string_append(v___x_1489_, v_received_1481_);
lean_dec_ref(v_received_1481_);
v___x_1491_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; 
v___x_1492_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_1471_ = v___x_1490_;
v___y_1472_ = v___x_1492_;
goto v___jp_1470_;
}
else
{
v___y_1471_ = v___x_1490_;
v___y_1472_ = v___x_1479_;
goto v___jp_1470_;
}
}
v___jp_1493_:
{
lean_object* v___x_1494_; 
v___x_1494_ = l_Lasm_JS_Data_describe(v_d_1465_);
v_received_1481_ = v___x_1494_;
goto v___jp_1480_;
}
}
}
}
v___jp_1467_:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1468_ = lean_box(0);
v___x_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
return v___x_1469_;
}
v___jp_1470_:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1473_ = lean_string_append(v___y_1471_, v___y_1472_);
v___x_1474_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1473_);
v___x_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1474_);
return v___x_1475_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0___boxed(lean_object* v_context_1509_, lean_object* v_d_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0(v_context_1509_, v_d_1510_);
lean_dec_ref(v_context_1509_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(lean_object* v_b_1513_, lean_object* v_args_1514_, uint8_t v_await_1515_){
_start:
{
uint64_t v___y_1518_; uint64_t v___y_1519_; uint64_t v___x_1562_; uint64_t v___y_1564_; 
v___x_1562_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_1515_ == 0)
{
uint64_t v___x_1569_; 
v___x_1569_ = 0ULL;
v___y_1564_ = v___x_1569_;
goto v___jp_1563_;
}
else
{
uint64_t v___x_1570_; 
v___x_1570_ = 2ULL;
v___y_1564_ = v___x_1570_;
goto v___jp_1563_;
}
v___jp_1517_:
{
uint64_t v_flags_1520_; uint32_t v___x_1521_; lean_object* v___x_1522_; uint32_t v___x_1523_; lean_object* v___x_1524_; 
v_flags_1520_ = lean_uint64_lor(v___y_1518_, v___y_1519_);
v___x_1521_ = 214;
v___x_1522_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1513_, v_args_1514_);
v___x_1523_ = 0;
v___x_1524_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1521_, v_flags_1520_, v___x_1522_, v___x_1523_);
lean_dec(v___x_1522_);
if (lean_obj_tag(v___x_1524_) == 0)
{
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; lean_object* v___x_1526_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
lean_inc(v_a_1525_);
lean_dec_ref_known(v___x_1524_, 1);
v___x_1526_ = l_Lasm_JS_Wire_decode(v_a_1525_);
lean_dec(v_a_1525_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
lean_dec_ref_known(v___x_1526_, 1);
v___x_1528_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1513_);
v___x_1529_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0(v___x_1528_, v_a_1527_);
lean_dec_ref(v___x_1528_);
return v___x_1529_;
}
else
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1537_; 
v_a_1530_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1532_ = v___x_1526_;
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1526_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1535_; 
if (v_isShared_1533_ == 0)
{
v___x_1535_ = v___x_1532_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_a_1530_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
v_a_1538_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1524_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1524_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
lean_ctor_set_tag(v___x_1540_, 1);
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1561_; 
v_a_1546_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1548_ = v___x_1524_;
v_isShared_1549_ = v_isSharedCheck_1561_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1524_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1561_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1559_; 
v___x_1550_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1551_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1513_);
v___x_1552_ = lean_string_append(v___x_1550_, v___x_1551_);
lean_dec_ref(v___x_1551_);
v___x_1553_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1554_ = lean_string_append(v___x_1552_, v___x_1553_);
v___x_1555_ = lean_io_error_to_string(v_a_1546_);
v___x_1556_ = lean_string_append(v___x_1554_, v___x_1555_);
lean_dec_ref(v___x_1555_);
v___x_1557_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 0, v___x_1557_);
v___x_1559_ = v___x_1548_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1557_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
v___jp_1563_:
{
uint8_t v_construct_1565_; uint64_t v___x_1566_; 
v_construct_1565_ = lean_ctor_get_uint8(v_b_1513_, sizeof(void*)*4);
v___x_1566_ = lean_uint64_lor(v___x_1562_, v___y_1564_);
if (v_construct_1565_ == 0)
{
uint64_t v___x_1567_; 
v___x_1567_ = 0ULL;
v___y_1518_ = v___x_1566_;
v___y_1519_ = v___x_1567_;
goto v___jp_1517_;
}
else
{
uint64_t v___x_1568_; 
v___x_1568_ = 4ULL;
v___y_1518_ = v___x_1566_;
v___y_1519_ = v___x_1568_;
goto v___jp_1517_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0___boxed(lean_object* v_b_1571_, lean_object* v_args_1572_, lean_object* v_await_1573_, lean_object* v_a_1574_){
_start:
{
uint8_t v_await_boxed_1575_; lean_object* v_res_1576_; 
v_await_boxed_1575_ = lean_unbox(v_await_1573_);
v_res_1576_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v_b_1571_, v_args_1572_, v_await_boxed_1575_);
lean_dec_ref(v_b_1571_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentNode(lean_object* v_a_1583_){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; uint8_t v___x_1590_; lean_object* v___x_1591_; 
v___x_1585_ = ((lean_object*)(l_Lasm_Web_Raw_parentNode___closed__1));
v___x_1586_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1587_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1588_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1588_, 0, v_a_1583_);
lean_ctor_set(v___x_1588_, 1, v___x_1587_);
v___x_1589_ = lean_array_push(v___x_1586_, v___x_1588_);
v___x_1590_ = 1;
v___x_1591_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1585_, v___x_1589_, v___x_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentNode___boxed(lean_object* v_a_1592_, lean_object* v_a_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = l_Lasm_Web_Raw_parentNode(v_a_1592_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentElement(lean_object* v_a_1601_){
_start:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; uint8_t v___x_1608_; lean_object* v___x_1609_; 
v___x_1603_ = ((lean_object*)(l_Lasm_Web_Raw_parentElement___closed__1));
v___x_1604_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1605_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1606_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1606_, 0, v_a_1601_);
lean_ctor_set(v___x_1606_, 1, v___x_1605_);
v___x_1607_ = lean_array_push(v___x_1604_, v___x_1606_);
v___x_1608_ = 1;
v___x_1609_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(v___x_1603_, v___x_1607_, v___x_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentElement___boxed(lean_object* v_a_1610_, lean_object* v_a_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l_Lasm_Web_Raw_parentElement(v_a_1610_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_firstChild(lean_object* v_a_1619_){
_start:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; uint8_t v___x_1626_; lean_object* v___x_1627_; 
v___x_1621_ = ((lean_object*)(l_Lasm_Web_Raw_firstChild___closed__1));
v___x_1622_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1623_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1624_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1624_, 0, v_a_1619_);
lean_ctor_set(v___x_1624_, 1, v___x_1623_);
v___x_1625_ = lean_array_push(v___x_1622_, v___x_1624_);
v___x_1626_ = 1;
v___x_1627_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1621_, v___x_1625_, v___x_1626_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_firstChild___boxed(lean_object* v_a_1628_, lean_object* v_a_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l_Lasm_Web_Raw_firstChild(v_a_1628_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_lastChild(lean_object* v_a_1637_){
_start:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; uint8_t v___x_1644_; lean_object* v___x_1645_; 
v___x_1639_ = ((lean_object*)(l_Lasm_Web_Raw_lastChild___closed__1));
v___x_1640_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1641_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1642_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1642_, 0, v_a_1637_);
lean_ctor_set(v___x_1642_, 1, v___x_1641_);
v___x_1643_ = lean_array_push(v___x_1640_, v___x_1642_);
v___x_1644_ = 1;
v___x_1645_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1639_, v___x_1643_, v___x_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_lastChild___boxed(lean_object* v_a_1646_, lean_object* v_a_1647_){
_start:
{
lean_object* v_res_1648_; 
v_res_1648_ = l_Lasm_Web_Raw_lastChild(v_a_1646_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextSibling(lean_object* v_a_1655_){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; uint8_t v___x_1662_; lean_object* v___x_1663_; 
v___x_1657_ = ((lean_object*)(l_Lasm_Web_Raw_nextSibling___closed__1));
v___x_1658_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1659_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1660_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1660_, 0, v_a_1655_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
v___x_1661_ = lean_array_push(v___x_1658_, v___x_1660_);
v___x_1662_ = 1;
v___x_1663_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1657_, v___x_1661_, v___x_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextSibling___boxed(lean_object* v_a_1664_, lean_object* v_a_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l_Lasm_Web_Raw_nextSibling(v_a_1664_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_previousSibling(lean_object* v_a_1673_){
_start:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; uint8_t v___x_1680_; lean_object* v___x_1681_; 
v___x_1675_ = ((lean_object*)(l_Lasm_Web_Raw_previousSibling___closed__1));
v___x_1676_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1677_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1678_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1678_, 0, v_a_1673_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
v___x_1679_ = lean_array_push(v___x_1676_, v___x_1678_);
v___x_1680_ = 1;
v___x_1681_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1675_, v___x_1679_, v___x_1680_);
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_previousSibling___boxed(lean_object* v_a_1682_, lean_object* v_a_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l_Lasm_Web_Raw_previousSibling(v_a_1682_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1(size_t v_sz_1685_, size_t v_i_1686_, lean_object* v_bs_1687_){
_start:
{
uint8_t v___x_1688_; 
v___x_1688_ = lean_usize_dec_lt(v_i_1686_, v_sz_1685_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1689_, 0, v_bs_1687_);
return v___x_1689_;
}
else
{
lean_object* v_v_1690_; 
v_v_1690_ = lean_array_uget_borrowed(v_bs_1687_, v_i_1686_);
if (lean_obj_tag(v_v_1690_) == 9)
{
lean_object* v_value_1691_; lean_object* v___x_1692_; lean_object* v_bs_x27_1693_; size_t v___x_1694_; size_t v___x_1695_; lean_object* v___x_1696_; 
v_value_1691_ = lean_ctor_get(v_v_1690_, 0);
lean_inc(v_value_1691_);
v___x_1692_ = lean_unsigned_to_nat(0u);
v_bs_x27_1693_ = lean_array_uset(v_bs_1687_, v_i_1686_, v___x_1692_);
v___x_1694_ = ((size_t)1ULL);
v___x_1695_ = lean_usize_add(v_i_1686_, v___x_1694_);
v___x_1696_ = lean_array_uset(v_bs_x27_1693_, v_i_1686_, v_value_1691_);
v_i_1686_ = v___x_1695_;
v_bs_1687_ = v___x_1696_;
goto _start;
}
else
{
lean_object* v___x_1698_; 
lean_dec_ref(v_bs_1687_);
v___x_1698_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___closed__0));
return v___x_1698_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_1699_, lean_object* v_i_1700_, lean_object* v_bs_1701_){
_start:
{
size_t v_sz_boxed_1702_; size_t v_i_boxed_1703_; lean_object* v_res_1704_; 
v_sz_boxed_1702_ = lean_unbox_usize(v_sz_1699_);
lean_dec(v_sz_1699_);
v_i_boxed_1703_ = lean_unbox_usize(v_i_1700_);
lean_dec(v_i_1700_);
v_res_1704_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1(v_sz_boxed_1702_, v_i_boxed_1703_, v_bs_1701_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0(lean_object* v_context_1707_, lean_object* v_d_1708_){
_start:
{
lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1717_; lean_object* v_received_1718_; lean_object* v___y_1737_; lean_object* v_a_1740_; 
if (lean_obj_tag(v_d_1708_) == 7)
{
lean_object* v_items_1764_; size_t v_sz_1765_; size_t v___x_1766_; lean_object* v___x_1767_; 
v_items_1764_ = lean_ctor_get(v_d_1708_, 0);
v_sz_1765_ = lean_array_size(v_items_1764_);
v___x_1766_ = ((size_t)0ULL);
lean_inc_ref(v_items_1764_);
v___x_1767_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1(v_sz_1765_, v___x_1766_, v_items_1764_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; uint8_t v___x_1772_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1768_);
lean_dec_ref_known(v___x_1767_, 1);
v___x_1769_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__1));
v___x_1770_ = lean_string_utf8_byte_size(v_a_1768_);
v___x_1771_ = lean_unsigned_to_nat(0u);
v___x_1772_ = lean_nat_dec_eq(v___x_1770_, v___x_1771_);
if (v___x_1772_ == 0)
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1773_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1774_ = lean_string_append(v___x_1773_, v_a_1768_);
lean_dec(v_a_1768_);
v___x_1775_ = lean_string_append(v___x_1769_, v___x_1774_);
lean_dec_ref(v___x_1774_);
v_a_1740_ = v___x_1775_;
goto v___jp_1739_;
}
else
{
lean_dec(v_a_1768_);
v_a_1740_ = v___x_1769_;
goto v___jp_1739_;
}
}
else
{
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1776_; 
v_a_1776_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1776_);
lean_dec_ref_known(v___x_1767_, 1);
v_a_1740_ = v_a_1776_;
goto v___jp_1739_;
}
else
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
lean_dec_ref_known(v_d_1708_, 1);
v_a_1777_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1767_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1767_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
lean_ctor_set_tag(v___x_1779_, 0);
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
}
else
{
lean_object* v___x_1785_; 
v___x_1785_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v_a_1740_ = v___x_1785_;
goto v___jp_1739_;
}
v___jp_1710_:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1713_ = lean_string_append(v___y_1711_, v___y_1712_);
lean_dec_ref(v___y_1712_);
v___x_1714_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
v___x_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1714_);
return v___x_1715_;
}
v___jp_1716_:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; uint8_t v___x_1730_; 
v___x_1719_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1720_ = lean_string_append(v___x_1719_, v_context_1707_);
v___x_1721_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_1722_ = lean_string_append(v___x_1720_, v___x_1721_);
v___x_1723_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__0));
v___x_1724_ = lean_string_append(v___x_1722_, v___x_1723_);
v___x_1725_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1726_ = lean_string_append(v___x_1724_, v___x_1725_);
v___x_1727_ = lean_string_append(v___x_1726_, v_received_1718_);
lean_dec_ref(v_received_1718_);
v___x_1728_ = lean_string_utf8_byte_size(v___y_1717_);
v___x_1729_ = lean_unsigned_to_nat(0u);
v___x_1730_ = lean_nat_dec_eq(v___x_1728_, v___x_1729_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1731_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__1));
v___x_1732_ = lean_string_append(v___x_1731_, v___y_1717_);
lean_dec_ref(v___y_1717_);
v___x_1733_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__2));
v___x_1734_ = lean_string_append(v___x_1732_, v___x_1733_);
v___y_1711_ = v___x_1727_;
v___y_1712_ = v___x_1734_;
goto v___jp_1710_;
}
else
{
lean_object* v___x_1735_; 
lean_dec_ref(v___y_1717_);
v___x_1735_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___y_1711_ = v___x_1727_;
v___y_1712_ = v___x_1735_;
goto v___jp_1710_;
}
}
v___jp_1736_:
{
lean_object* v___x_1738_; 
v___x_1738_ = l_Lasm_JS_Data_describe(v_d_1708_);
v___y_1717_ = v___y_1737_;
v_received_1718_ = v___x_1738_;
goto v___jp_1716_;
}
v___jp_1739_:
{
if (lean_obj_tag(v_d_1708_) == 9)
{
lean_object* v_value_1741_; lean_object* v_description_1742_; lean_object* v___x_1743_; uint8_t v___x_1744_; 
v_value_1741_ = lean_ctor_get(v_d_1708_, 0);
v_description_1742_ = lean_ctor_get(v_d_1708_, 1);
v___x_1743_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1744_ = lean_string_dec_eq(v_description_1742_, v___x_1743_);
if (v___x_1744_ == 0)
{
v___y_1737_ = v_a_1740_;
goto v___jp_1736_;
}
else
{
lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1761_; 
lean_inc(v_value_1741_);
v_isSharedCheck_1761_ = !lean_is_exclusive(v_d_1708_);
if (v_isSharedCheck_1761_ == 0)
{
lean_object* v_unused_1762_; lean_object* v_unused_1763_; 
v_unused_1762_ = lean_ctor_get(v_d_1708_, 1);
lean_dec(v_unused_1762_);
v_unused_1763_ = lean_ctor_get(v_d_1708_, 0);
lean_dec(v_unused_1763_);
v___x_1746_ = v_d_1708_;
v_isShared_1747_ = v_isSharedCheck_1761_;
goto v_resetjp_1745_;
}
else
{
lean_dec(v_d_1708_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1761_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
uint32_t v___x_1748_; uint64_t v___x_1749_; lean_object* v___x_1751_; 
v___x_1748_ = 206;
v___x_1749_ = 0ULL;
lean_inc(v_value_1741_);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 1, v___x_1743_);
v___x_1751_ = v___x_1746_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_value_1741_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v___x_1743_);
v___x_1751_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
uint32_t v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = lasm_js_value_handle(v_value_1741_);
lean_dec(v_value_1741_);
v___x_1753_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1748_, v___x_1749_, v___x_1751_, v___x_1752_);
lean_dec_ref(v___x_1751_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; uint8_t v___x_1755_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___x_1753_, 1);
v___x_1755_ = lean_string_validate_utf8(v_a_1754_);
if (v___x_1755_ == 0)
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
lean_dec(v_a_1754_);
v___x_1756_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_1757_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1756_);
v___y_1717_ = v_a_1740_;
v_received_1718_ = v___x_1757_;
goto v___jp_1716_;
}
else
{
lean_object* v___x_1758_; 
v___x_1758_ = lean_string_from_utf8_unchecked(v_a_1754_);
v___y_1717_ = v_a_1740_;
v_received_1718_ = v___x_1758_;
goto v___jp_1716_;
}
}
else
{
lean_object* v___x_1759_; 
lean_dec_ref_known(v___x_1753_, 1);
v___x_1759_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v___y_1717_ = v_a_1740_;
v_received_1718_ = v___x_1759_;
goto v___jp_1716_;
}
}
}
}
}
else
{
v___y_1737_ = v_a_1740_;
goto v___jp_1736_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___boxed(lean_object* v_context_1786_, lean_object* v_d_1787_, lean_object* v_a_1788_){
_start:
{
lean_object* v_res_1789_; 
v_res_1789_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0(v_context_1786_, v_d_1787_);
lean_dec_ref(v_context_1786_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0(lean_object* v_b_1790_, lean_object* v_args_1791_, uint8_t v_await_1792_){
_start:
{
uint64_t v___y_1795_; uint64_t v___y_1796_; uint64_t v___x_1839_; uint64_t v___y_1841_; 
v___x_1839_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_1792_ == 0)
{
uint64_t v___x_1846_; 
v___x_1846_ = 0ULL;
v___y_1841_ = v___x_1846_;
goto v___jp_1840_;
}
else
{
uint64_t v___x_1847_; 
v___x_1847_ = 2ULL;
v___y_1841_ = v___x_1847_;
goto v___jp_1840_;
}
v___jp_1794_:
{
uint64_t v_flags_1797_; uint32_t v___x_1798_; lean_object* v___x_1799_; uint32_t v___x_1800_; lean_object* v___x_1801_; 
v_flags_1797_ = lean_uint64_lor(v___y_1795_, v___y_1796_);
v___x_1798_ = 214;
v___x_1799_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1790_, v_args_1791_);
v___x_1800_ = 0;
v___x_1801_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1798_, v_flags_1797_, v___x_1799_, v___x_1800_);
lean_dec(v___x_1799_);
if (lean_obj_tag(v___x_1801_) == 0)
{
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_object* v_a_1802_; lean_object* v___x_1803_; 
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_a_1802_);
lean_dec_ref_known(v___x_1801_, 1);
v___x_1803_ = l_Lasm_JS_Wire_decode(v_a_1802_);
lean_dec(v_a_1802_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
lean_inc(v_a_1804_);
lean_dec_ref_known(v___x_1803_, 1);
v___x_1805_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1790_);
v___x_1806_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0(v___x_1805_, v_a_1804_);
lean_dec_ref(v___x_1805_);
return v___x_1806_;
}
else
{
lean_object* v_a_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1814_; 
v_a_1807_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1809_ = v___x_1803_;
v_isShared_1810_ = v_isSharedCheck_1814_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_a_1807_);
lean_dec(v___x_1803_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1814_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v___x_1812_; 
if (v_isShared_1810_ == 0)
{
v___x_1812_ = v___x_1809_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v_a_1807_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
return v___x_1812_;
}
}
}
}
else
{
lean_object* v_a_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1822_; 
v_a_1815_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1822_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1817_ = v___x_1801_;
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_a_1815_);
lean_dec(v___x_1801_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v___x_1820_; 
if (v_isShared_1818_ == 0)
{
lean_ctor_set_tag(v___x_1817_, 1);
v___x_1820_ = v___x_1817_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v_a_1815_);
v___x_1820_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
return v___x_1820_;
}
}
}
}
else
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1838_; 
v_a_1823_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1825_ = v___x_1801_;
v_isShared_1826_ = v_isSharedCheck_1838_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1801_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1838_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1836_; 
v___x_1827_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1828_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1790_);
v___x_1829_ = lean_string_append(v___x_1827_, v___x_1828_);
lean_dec_ref(v___x_1828_);
v___x_1830_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1831_ = lean_string_append(v___x_1829_, v___x_1830_);
v___x_1832_ = lean_io_error_to_string(v_a_1823_);
v___x_1833_ = lean_string_append(v___x_1831_, v___x_1832_);
lean_dec_ref(v___x_1832_);
v___x_1834_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1833_);
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 0, v___x_1834_);
v___x_1836_ = v___x_1825_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v___x_1834_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
}
}
v___jp_1840_:
{
uint8_t v_construct_1842_; uint64_t v___x_1843_; 
v_construct_1842_ = lean_ctor_get_uint8(v_b_1790_, sizeof(void*)*4);
v___x_1843_ = lean_uint64_lor(v___x_1839_, v___y_1841_);
if (v_construct_1842_ == 0)
{
uint64_t v___x_1844_; 
v___x_1844_ = 0ULL;
v___y_1795_ = v___x_1843_;
v___y_1796_ = v___x_1844_;
goto v___jp_1794_;
}
else
{
uint64_t v___x_1845_; 
v___x_1845_ = 4ULL;
v___y_1795_ = v___x_1843_;
v___y_1796_ = v___x_1845_;
goto v___jp_1794_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0___boxed(lean_object* v_b_1848_, lean_object* v_args_1849_, lean_object* v_await_1850_, lean_object* v_a_1851_){
_start:
{
uint8_t v_await_boxed_1852_; lean_object* v_res_1853_; 
v_await_boxed_1852_ = lean_unbox(v_await_1850_);
v_res_1853_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0(v_b_1848_, v_args_1849_, v_await_boxed_1852_);
lean_dec_ref(v_b_1848_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_childNodes(lean_object* v_a_1860_){
_start:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; uint8_t v___x_1867_; lean_object* v___x_1868_; 
v___x_1862_ = ((lean_object*)(l_Lasm_Web_Raw_childNodes___closed__1));
v___x_1863_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1864_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1865_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1865_, 0, v_a_1860_);
lean_ctor_set(v___x_1865_, 1, v___x_1864_);
v___x_1866_ = lean_array_push(v___x_1863_, v___x_1865_);
v___x_1867_ = 1;
v___x_1868_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0(v___x_1862_, v___x_1866_, v___x_1867_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_childNodes___boxed(lean_object* v_a_1869_, lean_object* v_a_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lasm_Web_Raw_childNodes(v_a_1869_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0(lean_object* v_context_1873_, lean_object* v_d_1874_){
_start:
{
lean_object* v___y_1877_; lean_object* v___y_1878_; 
if (lean_obj_tag(v_d_1874_) == 2)
{
uint8_t v_b_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v_b_1882_ = lean_ctor_get_uint8(v_d_1874_, 0);
lean_dec_ref_known(v_d_1874_, 0);
v___x_1883_ = lean_box(v_b_1882_);
v___x_1884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1883_);
return v___x_1884_;
}
else
{
lean_object* v___x_1885_; lean_object* v_received_1887_; 
v___x_1885_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_1874_) == 9)
{
lean_object* v_value_1901_; lean_object* v_description_1902_; uint8_t v___x_1903_; 
v_value_1901_ = lean_ctor_get(v_d_1874_, 0);
v_description_1902_ = lean_ctor_get(v_d_1874_, 1);
v___x_1903_ = lean_string_dec_eq(v_description_1902_, v___x_1885_);
if (v___x_1903_ == 0)
{
goto v___jp_1899_;
}
else
{
uint32_t v___x_1904_; uint64_t v___x_1905_; lean_object* v___x_1906_; uint32_t v___x_1907_; lean_object* v___x_1908_; 
lean_inc_n(v_value_1901_, 2);
lean_dec_ref_known(v_d_1874_, 2);
v___x_1904_ = 206;
v___x_1905_ = 0ULL;
v___x_1906_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1906_, 0, v_value_1901_);
lean_ctor_set(v___x_1906_, 1, v___x_1885_);
v___x_1907_ = lasm_js_value_handle(v_value_1901_);
lean_dec(v_value_1901_);
v___x_1908_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1904_, v___x_1905_, v___x_1906_, v___x_1907_);
lean_dec_ref_known(v___x_1906_, 2);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; uint8_t v___x_1910_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1908_, 1);
v___x_1910_ = lean_string_validate_utf8(v_a_1909_);
if (v___x_1910_ == 0)
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
lean_dec(v_a_1909_);
v___x_1911_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_1912_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1911_);
v_received_1887_ = v___x_1912_;
goto v___jp_1886_;
}
else
{
lean_object* v___x_1913_; 
v___x_1913_ = lean_string_from_utf8_unchecked(v_a_1909_);
v_received_1887_ = v___x_1913_;
goto v___jp_1886_;
}
}
else
{
lean_object* v___x_1914_; 
lean_dec_ref_known(v___x_1908_, 1);
v___x_1914_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_1887_ = v___x_1914_;
goto v___jp_1886_;
}
}
}
else
{
goto v___jp_1899_;
}
v___jp_1886_:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; uint8_t v___x_1897_; 
v___x_1888_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1889_ = lean_string_append(v___x_1888_, v_context_1873_);
v___x_1890_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_1891_ = lean_string_append(v___x_1889_, v___x_1890_);
v___x_1892_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0___closed__0));
v___x_1893_ = lean_string_append(v___x_1891_, v___x_1892_);
v___x_1894_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1895_ = lean_string_append(v___x_1893_, v___x_1894_);
v___x_1896_ = lean_string_append(v___x_1895_, v_received_1887_);
lean_dec_ref(v_received_1887_);
v___x_1897_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_1897_ == 0)
{
lean_object* v___x_1898_; 
v___x_1898_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_1877_ = v___x_1896_;
v___y_1878_ = v___x_1898_;
goto v___jp_1876_;
}
else
{
v___y_1877_ = v___x_1896_;
v___y_1878_ = v___x_1885_;
goto v___jp_1876_;
}
}
v___jp_1899_:
{
lean_object* v___x_1900_; 
v___x_1900_ = l_Lasm_JS_Data_describe(v_d_1874_);
v_received_1887_ = v___x_1900_;
goto v___jp_1886_;
}
}
v___jp_1876_:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1879_ = lean_string_append(v___y_1877_, v___y_1878_);
v___x_1880_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
v___x_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1880_);
return v___x_1881_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0___boxed(lean_object* v_context_1915_, lean_object* v_d_1916_, lean_object* v_a_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0(v_context_1915_, v_d_1916_);
lean_dec_ref(v_context_1915_);
return v_res_1918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(lean_object* v_b_1919_, lean_object* v_args_1920_, uint8_t v_await_1921_){
_start:
{
uint64_t v___y_1924_; uint64_t v___y_1925_; uint64_t v___x_1968_; uint64_t v___y_1970_; 
v___x_1968_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_1921_ == 0)
{
uint64_t v___x_1975_; 
v___x_1975_ = 0ULL;
v___y_1970_ = v___x_1975_;
goto v___jp_1969_;
}
else
{
uint64_t v___x_1976_; 
v___x_1976_ = 2ULL;
v___y_1970_ = v___x_1976_;
goto v___jp_1969_;
}
v___jp_1923_:
{
uint64_t v_flags_1926_; uint32_t v___x_1927_; lean_object* v___x_1928_; uint32_t v___x_1929_; lean_object* v___x_1930_; 
v_flags_1926_ = lean_uint64_lor(v___y_1924_, v___y_1925_);
v___x_1927_ = 214;
v___x_1928_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1919_, v_args_1920_);
v___x_1929_ = 0;
v___x_1930_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1927_, v_flags_1926_, v___x_1928_, v___x_1929_);
lean_dec(v___x_1928_);
if (lean_obj_tag(v___x_1930_) == 0)
{
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1932_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v___x_1932_ = l_Lasm_JS_Wire_decode(v_a_1931_);
lean_dec(v_a_1931_);
if (lean_obj_tag(v___x_1932_) == 0)
{
lean_object* v_a_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v_a_1933_ = lean_ctor_get(v___x_1932_, 0);
lean_inc(v_a_1933_);
lean_dec_ref_known(v___x_1932_, 1);
v___x_1934_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1919_);
v___x_1935_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0(v___x_1934_, v_a_1933_);
lean_dec_ref(v___x_1934_);
return v___x_1935_;
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
v_a_1936_ = lean_ctor_get(v___x_1932_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1932_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1932_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
v_a_1944_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1930_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1930_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
lean_ctor_set_tag(v___x_1946_, 1);
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1967_; 
v_a_1952_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1954_ = v___x_1930_;
v_isShared_1955_ = v_isSharedCheck_1967_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1930_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1967_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1965_; 
v___x_1956_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1957_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1919_);
v___x_1958_ = lean_string_append(v___x_1956_, v___x_1957_);
lean_dec_ref(v___x_1957_);
v___x_1959_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1960_ = lean_string_append(v___x_1958_, v___x_1959_);
v___x_1961_ = lean_io_error_to_string(v_a_1952_);
v___x_1962_ = lean_string_append(v___x_1960_, v___x_1961_);
lean_dec_ref(v___x_1961_);
v___x_1963_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 0, v___x_1963_);
v___x_1965_ = v___x_1954_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
v___jp_1969_:
{
uint8_t v_construct_1971_; uint64_t v___x_1972_; 
v_construct_1971_ = lean_ctor_get_uint8(v_b_1919_, sizeof(void*)*4);
v___x_1972_ = lean_uint64_lor(v___x_1968_, v___y_1970_);
if (v_construct_1971_ == 0)
{
uint64_t v___x_1973_; 
v___x_1973_ = 0ULL;
v___y_1924_ = v___x_1972_;
v___y_1925_ = v___x_1973_;
goto v___jp_1923_;
}
else
{
uint64_t v___x_1974_; 
v___x_1974_ = 4ULL;
v___y_1924_ = v___x_1972_;
v___y_1925_ = v___x_1974_;
goto v___jp_1923_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0___boxed(lean_object* v_b_1977_, lean_object* v_args_1978_, lean_object* v_await_1979_, lean_object* v_a_1980_){
_start:
{
uint8_t v_await_boxed_1981_; lean_object* v_res_1982_; 
v_await_boxed_1981_ = lean_unbox(v_await_1979_);
v_res_1982_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v_b_1977_, v_args_1978_, v_await_boxed_1981_);
lean_dec_ref(v_b_1977_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_contains(lean_object* v_a_1989_, lean_object* v_a_1990_){
_start:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; uint8_t v___x_1999_; lean_object* v___x_2000_; 
v___x_1992_ = ((lean_object*)(l_Lasm_Web_Raw_contains___closed__1));
v___x_1993_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1994_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1995_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1995_, 0, v_a_1989_);
lean_ctor_set(v___x_1995_, 1, v___x_1994_);
v___x_1996_ = lean_array_push(v___x_1993_, v___x_1995_);
v___x_1997_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1997_, 0, v_a_1990_);
lean_ctor_set(v___x_1997_, 1, v___x_1994_);
v___x_1998_ = lean_array_push(v___x_1996_, v___x_1997_);
v___x_1999_ = 1;
v___x_2000_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_1992_, v___x_1998_, v___x_1999_);
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_contains___boxed(lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l_Lasm_Web_Raw_contains(v_a_2001_, v_a_2002_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0(lean_object* v_context_2006_, lean_object* v_d_2007_){
_start:
{
lean_object* v___y_2010_; lean_object* v___y_2011_; 
if (lean_obj_tag(v_d_2007_) == 9)
{
lean_object* v_value_2015_; lean_object* v___x_2016_; 
v_value_2015_ = lean_ctor_get(v_d_2007_, 0);
lean_inc(v_value_2015_);
lean_dec_ref_known(v_d_2007_, 2);
v___x_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2016_, 0, v_value_2015_);
return v___x_2016_;
}
else
{
lean_object* v___x_2017_; lean_object* v_received_2019_; 
v___x_2017_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_2007_) == 9)
{
lean_object* v_value_2033_; lean_object* v_description_2034_; uint8_t v___x_2035_; 
v_value_2033_ = lean_ctor_get(v_d_2007_, 0);
v_description_2034_ = lean_ctor_get(v_d_2007_, 1);
v___x_2035_ = lean_string_dec_eq(v_description_2034_, v___x_2017_);
if (v___x_2035_ == 0)
{
goto v___jp_2031_;
}
else
{
uint32_t v___x_2036_; uint64_t v___x_2037_; lean_object* v___x_2038_; uint32_t v___x_2039_; lean_object* v___x_2040_; 
lean_inc_n(v_value_2033_, 2);
lean_dec_ref_known(v_d_2007_, 2);
v___x_2036_ = 206;
v___x_2037_ = 0ULL;
v___x_2038_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2038_, 0, v_value_2033_);
lean_ctor_set(v___x_2038_, 1, v___x_2017_);
v___x_2039_ = lasm_js_value_handle(v_value_2033_);
lean_dec(v_value_2033_);
v___x_2040_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2036_, v___x_2037_, v___x_2038_, v___x_2039_);
lean_dec_ref_known(v___x_2038_, 2);
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v_a_2041_; uint8_t v___x_2042_; 
v_a_2041_ = lean_ctor_get(v___x_2040_, 0);
lean_inc(v_a_2041_);
lean_dec_ref_known(v___x_2040_, 1);
v___x_2042_ = lean_string_validate_utf8(v_a_2041_);
if (v___x_2042_ == 0)
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
lean_dec(v_a_2041_);
v___x_2043_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_2044_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2043_);
v_received_2019_ = v___x_2044_;
goto v___jp_2018_;
}
else
{
lean_object* v___x_2045_; 
v___x_2045_ = lean_string_from_utf8_unchecked(v_a_2041_);
v_received_2019_ = v___x_2045_;
goto v___jp_2018_;
}
}
else
{
lean_object* v___x_2046_; 
lean_dec_ref_known(v___x_2040_, 1);
v___x_2046_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_2019_ = v___x_2046_;
goto v___jp_2018_;
}
}
}
else
{
goto v___jp_2031_;
}
v___jp_2018_:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; uint8_t v___x_2029_; 
v___x_2020_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_2021_ = lean_string_append(v___x_2020_, v_context_2006_);
v___x_2022_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_2023_ = lean_string_append(v___x_2021_, v___x_2022_);
v___x_2024_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0___closed__0));
v___x_2025_ = lean_string_append(v___x_2023_, v___x_2024_);
v___x_2026_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2027_ = lean_string_append(v___x_2025_, v___x_2026_);
v___x_2028_ = lean_string_append(v___x_2027_, v_received_2019_);
lean_dec_ref(v_received_2019_);
v___x_2029_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_2029_ == 0)
{
lean_object* v___x_2030_; 
v___x_2030_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_2010_ = v___x_2028_;
v___y_2011_ = v___x_2030_;
goto v___jp_2009_;
}
else
{
v___y_2010_ = v___x_2028_;
v___y_2011_ = v___x_2017_;
goto v___jp_2009_;
}
}
v___jp_2031_:
{
lean_object* v___x_2032_; 
v___x_2032_ = l_Lasm_JS_Data_describe(v_d_2007_);
v_received_2019_ = v___x_2032_;
goto v___jp_2018_;
}
}
v___jp_2009_:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2012_ = lean_string_append(v___y_2010_, v___y_2011_);
v___x_2013_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2013_, 0, v___x_2012_);
v___x_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2013_);
return v___x_2014_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0___boxed(lean_object* v_context_2047_, lean_object* v_d_2048_, lean_object* v_a_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0(v_context_2047_, v_d_2048_);
lean_dec_ref(v_context_2047_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0(lean_object* v_b_2051_, lean_object* v_args_2052_, uint8_t v_await_2053_){
_start:
{
uint64_t v___y_2056_; uint64_t v___y_2057_; uint64_t v___x_2100_; uint64_t v___y_2102_; 
v___x_2100_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_2053_ == 0)
{
uint64_t v___x_2107_; 
v___x_2107_ = 0ULL;
v___y_2102_ = v___x_2107_;
goto v___jp_2101_;
}
else
{
uint64_t v___x_2108_; 
v___x_2108_ = 2ULL;
v___y_2102_ = v___x_2108_;
goto v___jp_2101_;
}
v___jp_2055_:
{
uint64_t v_flags_2058_; uint32_t v___x_2059_; lean_object* v___x_2060_; uint32_t v___x_2061_; lean_object* v___x_2062_; 
v_flags_2058_ = lean_uint64_lor(v___y_2056_, v___y_2057_);
v___x_2059_ = 214;
v___x_2060_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2051_, v_args_2052_);
v___x_2061_ = 0;
v___x_2062_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2059_, v_flags_2058_, v___x_2060_, v___x_2061_);
lean_dec(v___x_2060_);
if (lean_obj_tag(v___x_2062_) == 0)
{
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2064_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2063_);
lean_dec_ref_known(v___x_2062_, 1);
v___x_2064_ = l_Lasm_JS_Wire_decode(v_a_2063_);
lean_dec(v_a_2063_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v_a_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v_a_2065_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_a_2065_);
lean_dec_ref_known(v___x_2064_, 1);
v___x_2066_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2051_);
v___x_2067_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0(v___x_2066_, v_a_2065_);
lean_dec_ref(v___x_2066_);
return v___x_2067_;
}
else
{
lean_object* v_a_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2075_; 
v_a_2068_ = lean_ctor_get(v___x_2064_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2070_ = v___x_2064_;
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_a_2068_);
lean_dec(v___x_2064_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___x_2073_; 
if (v_isShared_2071_ == 0)
{
v___x_2073_ = v___x_2070_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_a_2068_);
v___x_2073_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
return v___x_2073_;
}
}
}
}
else
{
lean_object* v_a_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2083_; 
v_a_2076_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2078_ = v___x_2062_;
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_a_2076_);
lean_dec(v___x_2062_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___x_2081_; 
if (v_isShared_2079_ == 0)
{
lean_ctor_set_tag(v___x_2078_, 1);
v___x_2081_ = v___x_2078_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_a_2076_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
return v___x_2081_;
}
}
}
}
else
{
lean_object* v_a_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2099_; 
v_a_2084_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2086_ = v___x_2062_;
v_isShared_2087_ = v_isSharedCheck_2099_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_a_2084_);
lean_dec(v___x_2062_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2099_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2097_; 
v___x_2088_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_2089_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2051_);
v___x_2090_ = lean_string_append(v___x_2088_, v___x_2089_);
lean_dec_ref(v___x_2089_);
v___x_2091_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_2092_ = lean_string_append(v___x_2090_, v___x_2091_);
v___x_2093_ = lean_io_error_to_string(v_a_2084_);
v___x_2094_ = lean_string_append(v___x_2092_, v___x_2093_);
lean_dec_ref(v___x_2093_);
v___x_2095_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 0, v___x_2095_);
v___x_2097_ = v___x_2086_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v___x_2095_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
}
v___jp_2101_:
{
uint8_t v_construct_2103_; uint64_t v___x_2104_; 
v_construct_2103_ = lean_ctor_get_uint8(v_b_2051_, sizeof(void*)*4);
v___x_2104_ = lean_uint64_lor(v___x_2100_, v___y_2102_);
if (v_construct_2103_ == 0)
{
uint64_t v___x_2105_; 
v___x_2105_ = 0ULL;
v___y_2056_ = v___x_2104_;
v___y_2057_ = v___x_2105_;
goto v___jp_2055_;
}
else
{
uint64_t v___x_2106_; 
v___x_2106_ = 4ULL;
v___y_2056_ = v___x_2104_;
v___y_2057_ = v___x_2106_;
goto v___jp_2055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0___boxed(lean_object* v_b_2109_, lean_object* v_args_2110_, lean_object* v_await_2111_, lean_object* v_a_2112_){
_start:
{
uint8_t v_await_boxed_2113_; lean_object* v_res_2114_; 
v_await_boxed_2113_ = lean_unbox(v_await_2111_);
v_res_2114_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0(v_b_2109_, v_args_2110_, v_await_boxed_2113_);
lean_dec_ref(v_b_2109_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cloneNode(lean_object* v_a_2121_, uint8_t v_a_2122_){
_start:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; uint8_t v___x_2131_; lean_object* v___x_2132_; 
v___x_2124_ = ((lean_object*)(l_Lasm_Web_Raw_cloneNode___closed__1));
v___x_2125_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2126_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2127_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2127_, 0, v_a_2121_);
lean_ctor_set(v___x_2127_, 1, v___x_2126_);
v___x_2128_ = lean_array_push(v___x_2125_, v___x_2127_);
v___x_2129_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2129_, 0, v_a_2122_);
v___x_2130_ = lean_array_push(v___x_2128_, v___x_2129_);
v___x_2131_ = 1;
v___x_2132_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0(v___x_2124_, v___x_2130_, v___x_2131_);
return v___x_2132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cloneNode___boxed(lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_){
_start:
{
uint8_t v_a_743__boxed_2136_; lean_object* v_res_2137_; 
v_a_743__boxed_2136_ = lean_unbox(v_a_2134_);
v_res_2137_ = l_Lasm_Web_Raw_cloneNode(v_a_2133_, v_a_743__boxed_2136_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_isConnected(lean_object* v_a_2144_){
_start:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; uint8_t v___x_2151_; lean_object* v___x_2152_; 
v___x_2146_ = ((lean_object*)(l_Lasm_Web_Raw_isConnected___closed__1));
v___x_2147_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2148_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2149_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2149_, 0, v_a_2144_);
lean_ctor_set(v___x_2149_, 1, v___x_2148_);
v___x_2150_ = lean_array_push(v___x_2147_, v___x_2149_);
v___x_2151_ = 1;
v___x_2152_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2146_, v___x_2150_, v___x_2151_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_isConnected___boxed(lean_object* v_a_2153_, lean_object* v_a_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l_Lasm_Web_Raw_isConnected(v_a_2153_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nodeName(lean_object* v_a_2162_){
_start:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; uint8_t v___x_2169_; lean_object* v___x_2170_; 
v___x_2164_ = ((lean_object*)(l_Lasm_Web_Raw_nodeName___closed__1));
v___x_2165_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2166_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2167_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2167_, 0, v_a_2162_);
lean_ctor_set(v___x_2167_, 1, v___x_2166_);
v___x_2168_ = lean_array_push(v___x_2165_, v___x_2167_);
v___x_2169_ = 1;
v___x_2170_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2164_, v___x_2168_, v___x_2169_);
return v___x_2170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nodeName___boxed(lean_object* v_a_2171_, lean_object* v_a_2172_){
_start:
{
lean_object* v_res_2173_; 
v_res_2173_ = l_Lasm_Web_Raw_nodeName(v_a_2171_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_tagName(lean_object* v_a_2180_){
_start:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; lean_object* v___x_2188_; 
v___x_2182_ = ((lean_object*)(l_Lasm_Web_Raw_tagName___closed__1));
v___x_2183_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2184_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2185_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2185_, 0, v_a_2180_);
lean_ctor_set(v___x_2185_, 1, v___x_2184_);
v___x_2186_ = lean_array_push(v___x_2183_, v___x_2185_);
v___x_2187_ = 1;
v___x_2188_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2182_, v___x_2186_, v___x_2187_);
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_tagName___boxed(lean_object* v_a_2189_, lean_object* v_a_2190_){
_start:
{
lean_object* v_res_2191_; 
v_res_2191_ = l_Lasm_Web_Raw_tagName(v_a_2189_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_children(lean_object* v_a_2198_){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; uint8_t v___x_2205_; lean_object* v___x_2206_; 
v___x_2200_ = ((lean_object*)(l_Lasm_Web_Raw_children___closed__1));
v___x_2201_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2202_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2203_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2203_, 0, v_a_2198_);
lean_ctor_set(v___x_2203_, 1, v___x_2202_);
v___x_2204_ = lean_array_push(v___x_2201_, v___x_2203_);
v___x_2205_ = 1;
v___x_2206_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0(v___x_2200_, v___x_2204_, v___x_2205_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_children___boxed(lean_object* v_a_2207_, lean_object* v_a_2208_){
_start:
{
lean_object* v_res_2209_; 
v_res_2209_ = l_Lasm_Web_Raw_children(v_a_2207_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0(lean_object* v_context_2211_, lean_object* v_d_2212_){
_start:
{
lean_object* v___y_2218_; lean_object* v___y_2219_; 
switch(lean_obj_tag(v_d_2212_))
{
case 1:
{
goto v___jp_2214_;
}
case 0:
{
goto v___jp_2214_;
}
default: 
{
if (lean_obj_tag(v_d_2212_) == 4)
{
lean_object* v_s_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
v_s_2223_ = lean_ctor_get(v_d_2212_, 0);
lean_inc_ref(v_s_2223_);
lean_dec_ref_known(v_d_2212_, 1);
v___x_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2224_, 0, v_s_2223_);
v___x_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
return v___x_2225_;
}
else
{
lean_object* v___x_2226_; lean_object* v_received_2228_; 
v___x_2226_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_2212_) == 9)
{
lean_object* v_value_2242_; lean_object* v_description_2243_; uint8_t v___x_2244_; 
v_value_2242_ = lean_ctor_get(v_d_2212_, 0);
v_description_2243_ = lean_ctor_get(v_d_2212_, 1);
v___x_2244_ = lean_string_dec_eq(v_description_2243_, v___x_2226_);
if (v___x_2244_ == 0)
{
goto v___jp_2240_;
}
else
{
uint32_t v___x_2245_; uint64_t v___x_2246_; lean_object* v___x_2247_; uint32_t v___x_2248_; lean_object* v___x_2249_; 
lean_inc_n(v_value_2242_, 2);
lean_dec_ref_known(v_d_2212_, 2);
v___x_2245_ = 206;
v___x_2246_ = 0ULL;
v___x_2247_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2247_, 0, v_value_2242_);
lean_ctor_set(v___x_2247_, 1, v___x_2226_);
v___x_2248_ = lasm_js_value_handle(v_value_2242_);
lean_dec(v_value_2242_);
v___x_2249_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2245_, v___x_2246_, v___x_2247_, v___x_2248_);
lean_dec_ref_known(v___x_2247_, 2);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v_a_2250_; uint8_t v___x_2251_; 
v_a_2250_ = lean_ctor_get(v___x_2249_, 0);
lean_inc(v_a_2250_);
lean_dec_ref_known(v___x_2249_, 1);
v___x_2251_ = lean_string_validate_utf8(v_a_2250_);
if (v___x_2251_ == 0)
{
lean_object* v___x_2252_; lean_object* v___x_2253_; 
lean_dec(v_a_2250_);
v___x_2252_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_2253_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2252_);
v_received_2228_ = v___x_2253_;
goto v___jp_2227_;
}
else
{
lean_object* v___x_2254_; 
v___x_2254_ = lean_string_from_utf8_unchecked(v_a_2250_);
v_received_2228_ = v___x_2254_;
goto v___jp_2227_;
}
}
else
{
lean_object* v___x_2255_; 
lean_dec_ref_known(v___x_2249_, 1);
v___x_2255_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_2228_ = v___x_2255_;
goto v___jp_2227_;
}
}
}
else
{
goto v___jp_2240_;
}
v___jp_2227_:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; uint8_t v___x_2238_; 
v___x_2229_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_2230_ = lean_string_append(v___x_2229_, v_context_2211_);
v___x_2231_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_2232_ = lean_string_append(v___x_2230_, v___x_2231_);
v___x_2233_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0___closed__0));
v___x_2234_ = lean_string_append(v___x_2232_, v___x_2233_);
v___x_2235_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2236_ = lean_string_append(v___x_2234_, v___x_2235_);
v___x_2237_ = lean_string_append(v___x_2236_, v_received_2228_);
lean_dec_ref(v_received_2228_);
v___x_2238_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; 
v___x_2239_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_2218_ = v___x_2237_;
v___y_2219_ = v___x_2239_;
goto v___jp_2217_;
}
else
{
v___y_2218_ = v___x_2237_;
v___y_2219_ = v___x_2226_;
goto v___jp_2217_;
}
}
v___jp_2240_:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_Lasm_JS_Data_describe(v_d_2212_);
v_received_2228_ = v___x_2241_;
goto v___jp_2227_;
}
}
}
}
v___jp_2214_:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = lean_box(0);
v___x_2216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
return v___x_2216_;
}
v___jp_2217_:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2220_ = lean_string_append(v___y_2218_, v___y_2219_);
v___x_2221_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
v___x_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2221_);
return v___x_2222_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0___boxed(lean_object* v_context_2256_, lean_object* v_d_2257_, lean_object* v_a_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0(v_context_2256_, v_d_2257_);
lean_dec_ref(v_context_2256_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0(lean_object* v_b_2260_, lean_object* v_args_2261_, uint8_t v_await_2262_){
_start:
{
uint64_t v___y_2265_; uint64_t v___y_2266_; uint64_t v___x_2309_; uint64_t v___y_2311_; 
v___x_2309_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_2262_ == 0)
{
uint64_t v___x_2316_; 
v___x_2316_ = 0ULL;
v___y_2311_ = v___x_2316_;
goto v___jp_2310_;
}
else
{
uint64_t v___x_2317_; 
v___x_2317_ = 2ULL;
v___y_2311_ = v___x_2317_;
goto v___jp_2310_;
}
v___jp_2264_:
{
uint64_t v_flags_2267_; uint32_t v___x_2268_; lean_object* v___x_2269_; uint32_t v___x_2270_; lean_object* v___x_2271_; 
v_flags_2267_ = lean_uint64_lor(v___y_2265_, v___y_2266_);
v___x_2268_ = 214;
v___x_2269_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2260_, v_args_2261_);
v___x_2270_ = 0;
v___x_2271_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2268_, v_flags_2267_, v___x_2269_, v___x_2270_);
lean_dec(v___x_2269_);
if (lean_obj_tag(v___x_2271_) == 0)
{
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v___x_2273_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 1);
v___x_2273_ = l_Lasm_JS_Wire_decode(v_a_2272_);
lean_dec(v_a_2272_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_a_2274_);
lean_dec_ref_known(v___x_2273_, 1);
v___x_2275_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2260_);
v___x_2276_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0(v___x_2275_, v_a_2274_);
lean_dec_ref(v___x_2275_);
return v___x_2276_;
}
else
{
lean_object* v_a_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2284_; 
v_a_2277_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2279_ = v___x_2273_;
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_a_2277_);
lean_dec(v___x_2273_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2282_; 
if (v_isShared_2280_ == 0)
{
v___x_2282_ = v___x_2279_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v_a_2277_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
v_a_2285_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2271_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2271_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2290_; 
if (v_isShared_2288_ == 0)
{
lean_ctor_set_tag(v___x_2287_, 1);
v___x_2290_ = v___x_2287_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2285_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2308_; 
v_a_2293_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2295_ = v___x_2271_;
v_isShared_2296_ = v_isSharedCheck_2308_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2271_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2308_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2306_; 
v___x_2297_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_2298_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2260_);
v___x_2299_ = lean_string_append(v___x_2297_, v___x_2298_);
lean_dec_ref(v___x_2298_);
v___x_2300_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_2301_ = lean_string_append(v___x_2299_, v___x_2300_);
v___x_2302_ = lean_io_error_to_string(v_a_2293_);
v___x_2303_ = lean_string_append(v___x_2301_, v___x_2302_);
lean_dec_ref(v___x_2302_);
v___x_2304_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
if (v_isShared_2296_ == 0)
{
lean_ctor_set(v___x_2295_, 0, v___x_2304_);
v___x_2306_ = v___x_2295_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v___x_2304_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
}
v___jp_2310_:
{
uint8_t v_construct_2312_; uint64_t v___x_2313_; 
v_construct_2312_ = lean_ctor_get_uint8(v_b_2260_, sizeof(void*)*4);
v___x_2313_ = lean_uint64_lor(v___x_2309_, v___y_2311_);
if (v_construct_2312_ == 0)
{
uint64_t v___x_2314_; 
v___x_2314_ = 0ULL;
v___y_2265_ = v___x_2313_;
v___y_2266_ = v___x_2314_;
goto v___jp_2264_;
}
else
{
uint64_t v___x_2315_; 
v___x_2315_ = 4ULL;
v___y_2265_ = v___x_2313_;
v___y_2266_ = v___x_2315_;
goto v___jp_2264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0___boxed(lean_object* v_b_2318_, lean_object* v_args_2319_, lean_object* v_await_2320_, lean_object* v_a_2321_){
_start:
{
uint8_t v_await_boxed_2322_; lean_object* v_res_2323_; 
v_await_boxed_2322_ = lean_unbox(v_await_2320_);
v_res_2323_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0(v_b_2318_, v_args_2319_, v_await_boxed_2322_);
lean_dec_ref(v_b_2318_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getAttribute(lean_object* v_a_2330_, lean_object* v_a_2331_){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; uint8_t v___x_2340_; lean_object* v___x_2341_; 
v___x_2333_ = ((lean_object*)(l_Lasm_Web_Raw_getAttribute___closed__1));
v___x_2334_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2335_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2336_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2336_, 0, v_a_2330_);
lean_ctor_set(v___x_2336_, 1, v___x_2335_);
v___x_2337_ = lean_array_push(v___x_2334_, v___x_2336_);
v___x_2338_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2338_, 0, v_a_2331_);
v___x_2339_ = lean_array_push(v___x_2337_, v___x_2338_);
v___x_2340_ = 1;
v___x_2341_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0(v___x_2333_, v___x_2339_, v___x_2340_);
return v___x_2341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getAttribute___boxed(lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l_Lasm_Web_Raw_getAttribute(v_a_2342_, v_a_2343_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttribute(lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_){
_start:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; uint8_t v___x_2365_; lean_object* v___x_2366_; 
v___x_2356_ = ((lean_object*)(l_Lasm_Web_Raw_setAttribute___closed__1));
v___x_2357_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2358_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2359_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2359_, 0, v_a_2352_);
lean_ctor_set(v___x_2359_, 1, v___x_2358_);
v___x_2360_ = lean_array_push(v___x_2357_, v___x_2359_);
v___x_2361_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2361_, 0, v_a_2353_);
v___x_2362_ = lean_array_push(v___x_2360_, v___x_2361_);
v___x_2363_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2363_, 0, v_a_2354_);
v___x_2364_ = lean_array_push(v___x_2362_, v___x_2363_);
v___x_2365_ = 1;
v___x_2366_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2356_, v___x_2364_, v___x_2365_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttribute___boxed(lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_){
_start:
{
lean_object* v_res_2371_; 
v_res_2371_ = l_Lasm_Web_Raw_setAttribute(v_a_2367_, v_a_2368_, v_a_2369_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(size_t v_sz_2372_, size_t v_i_2373_, lean_object* v_bs_2374_){
_start:
{
uint8_t v___x_2375_; 
v___x_2375_ = lean_usize_dec_lt(v_i_2373_, v_sz_2372_);
if (v___x_2375_ == 0)
{
return v_bs_2374_;
}
else
{
lean_object* v_v_2376_; lean_object* v_fst_2377_; lean_object* v_snd_2378_; lean_object* v___x_2379_; lean_object* v_bs_x27_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; size_t v___x_2388_; size_t v___x_2389_; lean_object* v___x_2390_; 
v_v_2376_ = lean_array_uget_borrowed(v_bs_2374_, v_i_2373_);
v_fst_2377_ = lean_ctor_get(v_v_2376_, 0);
lean_inc(v_fst_2377_);
v_snd_2378_ = lean_ctor_get(v_v_2376_, 1);
lean_inc(v_snd_2378_);
v___x_2379_ = lean_unsigned_to_nat(0u);
v_bs_x27_2380_ = lean_array_uset(v_bs_2374_, v_i_2373_, v___x_2379_);
v___x_2381_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2381_, 0, v_fst_2377_);
v___x_2382_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2382_, 0, v_snd_2378_);
v___x_2383_ = lean_unsigned_to_nat(2u);
v___x_2384_ = lean_mk_empty_array_with_capacity(v___x_2383_);
v___x_2385_ = lean_array_push(v___x_2384_, v___x_2381_);
v___x_2386_ = lean_array_push(v___x_2385_, v___x_2382_);
v___x_2387_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2386_);
v___x_2388_ = ((size_t)1ULL);
v___x_2389_ = lean_usize_add(v_i_2373_, v___x_2388_);
v___x_2390_ = lean_array_uset(v_bs_x27_2380_, v_i_2373_, v___x_2387_);
v_i_2373_ = v___x_2389_;
v_bs_2374_ = v___x_2390_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0___boxed(lean_object* v_sz_2392_, lean_object* v_i_2393_, lean_object* v_bs_2394_){
_start:
{
size_t v_sz_boxed_2395_; size_t v_i_boxed_2396_; lean_object* v_res_2397_; 
v_sz_boxed_2395_ = lean_unbox_usize(v_sz_2392_);
lean_dec(v_sz_2392_);
v_i_boxed_2396_ = lean_unbox_usize(v_i_2393_);
lean_dec(v_i_2393_);
v_res_2397_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(v_sz_boxed_2395_, v_i_boxed_2396_, v_bs_2394_);
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttributes(lean_object* v_a_2404_, lean_object* v_a_2405_){
_start:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; size_t v_sz_2412_; size_t v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; uint8_t v___x_2417_; lean_object* v___x_2418_; 
v___x_2407_ = ((lean_object*)(l_Lasm_Web_Raw_setAttributes___closed__1));
v___x_2408_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2410_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2410_, 0, v_a_2404_);
lean_ctor_set(v___x_2410_, 1, v___x_2409_);
v___x_2411_ = lean_array_push(v___x_2408_, v___x_2410_);
v_sz_2412_ = lean_array_size(v_a_2405_);
v___x_2413_ = ((size_t)0ULL);
v___x_2414_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(v_sz_2412_, v___x_2413_, v_a_2405_);
v___x_2415_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2415_, 0, v___x_2414_);
v___x_2416_ = lean_array_push(v___x_2411_, v___x_2415_);
v___x_2417_ = 1;
v___x_2418_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2407_, v___x_2416_, v___x_2417_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttributes___boxed(lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l_Lasm_Web_Raw_setAttributes(v_a_2419_, v_a_2420_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeAttribute(lean_object* v_a_2429_, lean_object* v_a_2430_){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; uint8_t v___x_2439_; lean_object* v___x_2440_; 
v___x_2432_ = ((lean_object*)(l_Lasm_Web_Raw_removeAttribute___closed__1));
v___x_2433_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2434_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2435_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2435_, 0, v_a_2429_);
lean_ctor_set(v___x_2435_, 1, v___x_2434_);
v___x_2436_ = lean_array_push(v___x_2433_, v___x_2435_);
v___x_2437_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2437_, 0, v_a_2430_);
v___x_2438_ = lean_array_push(v___x_2436_, v___x_2437_);
v___x_2439_ = 1;
v___x_2440_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2432_, v___x_2438_, v___x_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeAttribute___boxed(lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lasm_Web_Raw_removeAttribute(v_a_2441_, v_a_2442_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_hasAttribute(lean_object* v_a_2451_, lean_object* v_a_2452_){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; uint8_t v___x_2461_; lean_object* v___x_2462_; 
v___x_2454_ = ((lean_object*)(l_Lasm_Web_Raw_hasAttribute___closed__1));
v___x_2455_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2456_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2457_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2457_, 0, v_a_2451_);
lean_ctor_set(v___x_2457_, 1, v___x_2456_);
v___x_2458_ = lean_array_push(v___x_2455_, v___x_2457_);
v___x_2459_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2459_, 0, v_a_2452_);
v___x_2460_ = lean_array_push(v___x_2458_, v___x_2459_);
v___x_2461_ = 1;
v___x_2462_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2454_, v___x_2460_, v___x_2461_);
return v___x_2462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_hasAttribute___boxed(lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_Lasm_Web_Raw_hasAttribute(v_a_2463_, v_a_2464_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_toggleAttribute(lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_){
_start:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___y_2485_; 
v___x_2477_ = ((lean_object*)(l_Lasm_Web_Raw_toggleAttribute___closed__1));
v___x_2478_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2479_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2480_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2480_, 0, v_a_2473_);
lean_ctor_set(v___x_2480_, 1, v___x_2479_);
v___x_2481_ = lean_array_push(v___x_2478_, v___x_2480_);
v___x_2482_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2482_, 0, v_a_2474_);
v___x_2483_ = lean_array_push(v___x_2481_, v___x_2482_);
if (lean_obj_tag(v_a_2475_) == 0)
{
lean_object* v___x_2489_; 
v___x_2489_ = lean_box(1);
v___y_2485_ = v___x_2489_;
goto v___jp_2484_;
}
else
{
lean_object* v_val_2490_; lean_object* v___x_2491_; uint8_t v___x_2492_; 
v_val_2490_ = lean_ctor_get(v_a_2475_, 0);
v___x_2491_ = lean_alloc_ctor(2, 0, 1);
v___x_2492_ = lean_unbox(v_val_2490_);
lean_ctor_set_uint8(v___x_2491_, 0, v___x_2492_);
v___y_2485_ = v___x_2491_;
goto v___jp_2484_;
}
v___jp_2484_:
{
lean_object* v___x_2486_; uint8_t v___x_2487_; lean_object* v___x_2488_; 
v___x_2486_ = lean_array_push(v___x_2483_, v___y_2485_);
v___x_2487_ = 1;
v___x_2488_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2477_, v___x_2486_, v___x_2487_);
return v___x_2488_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_toggleAttribute___boxed(lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_){
_start:
{
lean_object* v_res_2497_; 
v_res_2497_ = l_Lasm_Web_Raw_toggleAttribute(v_a_2493_, v_a_2494_, v_a_2495_);
lean_dec(v_a_2495_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(size_t v_sz_2498_, size_t v_i_2499_, lean_object* v_bs_2500_){
_start:
{
uint8_t v___x_2501_; 
v___x_2501_ = lean_usize_dec_lt(v_i_2499_, v_sz_2498_);
if (v___x_2501_ == 0)
{
return v_bs_2500_;
}
else
{
lean_object* v_v_2502_; lean_object* v___x_2503_; lean_object* v_bs_x27_2504_; lean_object* v___x_2505_; size_t v___x_2506_; size_t v___x_2507_; lean_object* v___x_2508_; 
v_v_2502_ = lean_array_uget(v_bs_2500_, v_i_2499_);
v___x_2503_ = lean_unsigned_to_nat(0u);
v_bs_x27_2504_ = lean_array_uset(v_bs_2500_, v_i_2499_, v___x_2503_);
v___x_2505_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2505_, 0, v_v_2502_);
v___x_2506_ = ((size_t)1ULL);
v___x_2507_ = lean_usize_add(v_i_2499_, v___x_2506_);
v___x_2508_ = lean_array_uset(v_bs_x27_2504_, v_i_2499_, v___x_2505_);
v_i_2499_ = v___x_2507_;
v_bs_2500_ = v___x_2508_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0___boxed(lean_object* v_sz_2510_, lean_object* v_i_2511_, lean_object* v_bs_2512_){
_start:
{
size_t v_sz_boxed_2513_; size_t v_i_boxed_2514_; lean_object* v_res_2515_; 
v_sz_boxed_2513_ = lean_unbox_usize(v_sz_2510_);
lean_dec(v_sz_2510_);
v_i_boxed_2514_ = lean_unbox_usize(v_i_2511_);
lean_dec(v_i_2511_);
v_res_2515_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(v_sz_boxed_2513_, v_i_boxed_2514_, v_bs_2512_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classAdd(lean_object* v_a_2522_, lean_object* v_a_2523_){
_start:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; size_t v_sz_2530_; size_t v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; uint8_t v___x_2535_; lean_object* v___x_2536_; 
v___x_2525_ = ((lean_object*)(l_Lasm_Web_Raw_classAdd___closed__1));
v___x_2526_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2527_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2528_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2528_, 0, v_a_2522_);
lean_ctor_set(v___x_2528_, 1, v___x_2527_);
v___x_2529_ = lean_array_push(v___x_2526_, v___x_2528_);
v_sz_2530_ = lean_array_size(v_a_2523_);
v___x_2531_ = ((size_t)0ULL);
v___x_2532_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(v_sz_2530_, v___x_2531_, v_a_2523_);
v___x_2533_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2532_);
v___x_2534_ = lean_array_push(v___x_2529_, v___x_2533_);
v___x_2535_ = 1;
v___x_2536_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2525_, v___x_2534_, v___x_2535_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classAdd___boxed(lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_){
_start:
{
lean_object* v_res_2540_; 
v_res_2540_ = l_Lasm_Web_Raw_classAdd(v_a_2537_, v_a_2538_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classRemove(lean_object* v_a_2547_, lean_object* v_a_2548_){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; size_t v_sz_2555_; size_t v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; uint8_t v___x_2560_; lean_object* v___x_2561_; 
v___x_2550_ = ((lean_object*)(l_Lasm_Web_Raw_classRemove___closed__1));
v___x_2551_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2552_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2553_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2553_, 0, v_a_2547_);
lean_ctor_set(v___x_2553_, 1, v___x_2552_);
v___x_2554_ = lean_array_push(v___x_2551_, v___x_2553_);
v_sz_2555_ = lean_array_size(v_a_2548_);
v___x_2556_ = ((size_t)0ULL);
v___x_2557_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(v_sz_2555_, v___x_2556_, v_a_2548_);
v___x_2558_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2557_);
v___x_2559_ = lean_array_push(v___x_2554_, v___x_2558_);
v___x_2560_ = 1;
v___x_2561_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2550_, v___x_2559_, v___x_2560_);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classRemove___boxed(lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_){
_start:
{
lean_object* v_res_2565_; 
v_res_2565_ = l_Lasm_Web_Raw_classRemove(v_a_2562_, v_a_2563_);
return v_res_2565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classToggle(lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_){
_start:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___y_2584_; 
v___x_2576_ = ((lean_object*)(l_Lasm_Web_Raw_classToggle___closed__1));
v___x_2577_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2578_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2579_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2579_, 0, v_a_2572_);
lean_ctor_set(v___x_2579_, 1, v___x_2578_);
v___x_2580_ = lean_array_push(v___x_2577_, v___x_2579_);
v___x_2581_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2581_, 0, v_a_2573_);
v___x_2582_ = lean_array_push(v___x_2580_, v___x_2581_);
if (lean_obj_tag(v_a_2574_) == 0)
{
lean_object* v___x_2588_; 
v___x_2588_ = lean_box(1);
v___y_2584_ = v___x_2588_;
goto v___jp_2583_;
}
else
{
lean_object* v_val_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; 
v_val_2589_ = lean_ctor_get(v_a_2574_, 0);
v___x_2590_ = lean_alloc_ctor(2, 0, 1);
v___x_2591_ = lean_unbox(v_val_2589_);
lean_ctor_set_uint8(v___x_2590_, 0, v___x_2591_);
v___y_2584_ = v___x_2590_;
goto v___jp_2583_;
}
v___jp_2583_:
{
lean_object* v___x_2585_; uint8_t v___x_2586_; lean_object* v___x_2587_; 
v___x_2585_ = lean_array_push(v___x_2582_, v___y_2584_);
v___x_2586_ = 1;
v___x_2587_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2576_, v___x_2585_, v___x_2586_);
return v___x_2587_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classToggle___boxed(lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l_Lasm_Web_Raw_classToggle(v_a_2592_, v_a_2593_, v_a_2594_);
lean_dec(v_a_2594_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classContains(lean_object* v_a_2603_, lean_object* v_a_2604_){
_start:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; uint8_t v___x_2613_; lean_object* v___x_2614_; 
v___x_2606_ = ((lean_object*)(l_Lasm_Web_Raw_classContains___closed__1));
v___x_2607_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2608_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2609_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2609_, 0, v_a_2603_);
lean_ctor_set(v___x_2609_, 1, v___x_2608_);
v___x_2610_ = lean_array_push(v___x_2607_, v___x_2609_);
v___x_2611_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2611_, 0, v_a_2604_);
v___x_2612_ = lean_array_push(v___x_2610_, v___x_2611_);
v___x_2613_ = 1;
v___x_2614_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2606_, v___x_2612_, v___x_2613_);
return v___x_2614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classContains___boxed(lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_){
_start:
{
lean_object* v_res_2618_; 
v_res_2618_ = l_Lasm_Web_Raw_classContains(v_a_2615_, v_a_2616_);
return v_res_2618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setStyles(lean_object* v_a_2625_, lean_object* v_a_2626_){
_start:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; size_t v_sz_2633_; size_t v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; uint8_t v___x_2638_; lean_object* v___x_2639_; 
v___x_2628_ = ((lean_object*)(l_Lasm_Web_Raw_setStyles___closed__1));
v___x_2629_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2630_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2631_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2631_, 0, v_a_2625_);
lean_ctor_set(v___x_2631_, 1, v___x_2630_);
v___x_2632_ = lean_array_push(v___x_2629_, v___x_2631_);
v_sz_2633_ = lean_array_size(v_a_2626_);
v___x_2634_ = ((size_t)0ULL);
v___x_2635_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(v_sz_2633_, v___x_2634_, v_a_2626_);
v___x_2636_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2636_, 0, v___x_2635_);
v___x_2637_ = lean_array_push(v___x_2632_, v___x_2636_);
v___x_2638_ = 1;
v___x_2639_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2628_, v___x_2637_, v___x_2638_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setStyles___boxed(lean_object* v_a_2640_, lean_object* v_a_2641_, lean_object* v_a_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l_Lasm_Web_Raw_setStyles(v_a_2640_, v_a_2641_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeStyle(lean_object* v_a_2650_, lean_object* v_a_2651_){
_start:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; uint8_t v___x_2660_; lean_object* v___x_2661_; 
v___x_2653_ = ((lean_object*)(l_Lasm_Web_Raw_removeStyle___closed__1));
v___x_2654_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2655_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2656_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2656_, 0, v_a_2650_);
lean_ctor_set(v___x_2656_, 1, v___x_2655_);
v___x_2657_ = lean_array_push(v___x_2654_, v___x_2656_);
v___x_2658_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2658_, 0, v_a_2651_);
v___x_2659_ = lean_array_push(v___x_2657_, v___x_2658_);
v___x_2660_ = 1;
v___x_2661_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2653_, v___x_2659_, v___x_2660_);
return v___x_2661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeStyle___boxed(lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Lasm_Web_Raw_removeStyle(v_a_2662_, v_a_2663_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_style(lean_object* v_a_2672_, lean_object* v_a_2673_){
_start:
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; uint8_t v___x_2682_; lean_object* v___x_2683_; 
v___x_2675_ = ((lean_object*)(l_Lasm_Web_Raw_style___closed__1));
v___x_2676_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2677_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2678_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2678_, 0, v_a_2672_);
lean_ctor_set(v___x_2678_, 1, v___x_2677_);
v___x_2679_ = lean_array_push(v___x_2676_, v___x_2678_);
v___x_2680_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2680_, 0, v_a_2673_);
v___x_2681_ = lean_array_push(v___x_2679_, v___x_2680_);
v___x_2682_ = 1;
v___x_2683_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2675_, v___x_2681_, v___x_2682_);
return v___x_2683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_style___boxed(lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_){
_start:
{
lean_object* v_res_2687_; 
v_res_2687_ = l_Lasm_Web_Raw_style(v_a_2684_, v_a_2685_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getInnerHTML(lean_object* v_a_2694_){
_start:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; uint8_t v___x_2701_; lean_object* v___x_2702_; 
v___x_2696_ = ((lean_object*)(l_Lasm_Web_Raw_getInnerHTML___closed__1));
v___x_2697_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2698_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2699_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2699_, 0, v_a_2694_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
v___x_2700_ = lean_array_push(v___x_2697_, v___x_2699_);
v___x_2701_ = 1;
v___x_2702_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2696_, v___x_2700_, v___x_2701_);
return v___x_2702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getInnerHTML___boxed(lean_object* v_a_2703_, lean_object* v_a_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l_Lasm_Web_Raw_getInnerHTML(v_a_2703_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInnerHTML(lean_object* v_a_2712_, lean_object* v_a_2713_){
_start:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; uint8_t v___x_2722_; lean_object* v___x_2723_; 
v___x_2715_ = ((lean_object*)(l_Lasm_Web_Raw_setInnerHTML___closed__1));
v___x_2716_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2717_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2718_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2718_, 0, v_a_2712_);
lean_ctor_set(v___x_2718_, 1, v___x_2717_);
v___x_2719_ = lean_array_push(v___x_2716_, v___x_2718_);
v___x_2720_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2720_, 0, v_a_2713_);
v___x_2721_ = lean_array_push(v___x_2719_, v___x_2720_);
v___x_2722_ = 1;
v___x_2723_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2715_, v___x_2721_, v___x_2722_);
return v___x_2723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInnerHTML___boxed(lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_Lasm_Web_Raw_setInnerHTML(v_a_2724_, v_a_2725_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getValue(lean_object* v_a_2734_){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; uint8_t v___x_2741_; lean_object* v___x_2742_; 
v___x_2736_ = ((lean_object*)(l_Lasm_Web_Raw_getValue___closed__1));
v___x_2737_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2738_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2739_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2739_, 0, v_a_2734_);
lean_ctor_set(v___x_2739_, 1, v___x_2738_);
v___x_2740_ = lean_array_push(v___x_2737_, v___x_2739_);
v___x_2741_ = 1;
v___x_2742_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2736_, v___x_2740_, v___x_2741_);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getValue___boxed(lean_object* v_a_2743_, lean_object* v_a_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l_Lasm_Web_Raw_getValue(v_a_2743_);
return v_res_2745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setValue(lean_object* v_a_2752_, lean_object* v_a_2753_){
_start:
{
lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; uint8_t v___x_2762_; lean_object* v___x_2763_; 
v___x_2755_ = ((lean_object*)(l_Lasm_Web_Raw_setValue___closed__1));
v___x_2756_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2757_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2758_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2758_, 0, v_a_2752_);
lean_ctor_set(v___x_2758_, 1, v___x_2757_);
v___x_2759_ = lean_array_push(v___x_2756_, v___x_2758_);
v___x_2760_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2760_, 0, v_a_2753_);
v___x_2761_ = lean_array_push(v___x_2759_, v___x_2760_);
v___x_2762_ = 1;
v___x_2763_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2755_, v___x_2761_, v___x_2762_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setValue___boxed(lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l_Lasm_Web_Raw_setValue(v_a_2764_, v_a_2765_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getChecked(lean_object* v_a_2774_){
_start:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; uint8_t v___x_2781_; lean_object* v___x_2782_; 
v___x_2776_ = ((lean_object*)(l_Lasm_Web_Raw_getChecked___closed__1));
v___x_2777_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2778_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2779_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2779_, 0, v_a_2774_);
lean_ctor_set(v___x_2779_, 1, v___x_2778_);
v___x_2780_ = lean_array_push(v___x_2777_, v___x_2779_);
v___x_2781_ = 1;
v___x_2782_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2776_, v___x_2780_, v___x_2781_);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getChecked___boxed(lean_object* v_a_2783_, lean_object* v_a_2784_){
_start:
{
lean_object* v_res_2785_; 
v_res_2785_ = l_Lasm_Web_Raw_getChecked(v_a_2783_);
return v_res_2785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setChecked(lean_object* v_a_2792_, uint8_t v_a_2793_){
_start:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; uint8_t v___x_2802_; lean_object* v___x_2803_; 
v___x_2795_ = ((lean_object*)(l_Lasm_Web_Raw_setChecked___closed__1));
v___x_2796_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2797_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2798_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2798_, 0, v_a_2792_);
lean_ctor_set(v___x_2798_, 1, v___x_2797_);
v___x_2799_ = lean_array_push(v___x_2796_, v___x_2798_);
v___x_2800_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2800_, 0, v_a_2793_);
v___x_2801_ = lean_array_push(v___x_2799_, v___x_2800_);
v___x_2802_ = 1;
v___x_2803_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2795_, v___x_2801_, v___x_2802_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setChecked___boxed(lean_object* v_a_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_){
_start:
{
uint8_t v_a_137__boxed_2807_; lean_object* v_res_2808_; 
v_a_137__boxed_2807_ = lean_unbox(v_a_2805_);
v_res_2808_ = l_Lasm_Web_Raw_setChecked(v_a_2804_, v_a_137__boxed_2807_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_focus(lean_object* v_a_2815_){
_start:
{
lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; uint8_t v___x_2822_; lean_object* v___x_2823_; 
v___x_2817_ = ((lean_object*)(l_Lasm_Web_Raw_focus___closed__1));
v___x_2818_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2819_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2820_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2820_, 0, v_a_2815_);
lean_ctor_set(v___x_2820_, 1, v___x_2819_);
v___x_2821_ = lean_array_push(v___x_2818_, v___x_2820_);
v___x_2822_ = 1;
v___x_2823_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2817_, v___x_2821_, v___x_2822_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_focus___boxed(lean_object* v_a_2824_, lean_object* v_a_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_Lasm_Web_Raw_focus(v_a_2824_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_blur(lean_object* v_a_2833_){
_start:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; uint8_t v___x_2840_; lean_object* v___x_2841_; 
v___x_2835_ = ((lean_object*)(l_Lasm_Web_Raw_blur___closed__1));
v___x_2836_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2837_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2838_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2838_, 0, v_a_2833_);
lean_ctor_set(v___x_2838_, 1, v___x_2837_);
v___x_2839_ = lean_array_push(v___x_2836_, v___x_2838_);
v___x_2840_ = 1;
v___x_2841_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2835_, v___x_2839_, v___x_2840_);
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_blur___boxed(lean_object* v_a_2842_, lean_object* v_a_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_Lasm_Web_Raw_blur(v_a_2842_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_click(lean_object* v_a_2851_){
_start:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; uint8_t v___x_2858_; lean_object* v___x_2859_; 
v___x_2853_ = ((lean_object*)(l_Lasm_Web_Raw_click___closed__1));
v___x_2854_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2855_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2856_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2856_, 0, v_a_2851_);
lean_ctor_set(v___x_2856_, 1, v___x_2855_);
v___x_2857_ = lean_array_push(v___x_2854_, v___x_2856_);
v___x_2858_ = 1;
v___x_2859_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2853_, v___x_2857_, v___x_2858_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_click___boxed(lean_object* v_a_2860_, lean_object* v_a_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l_Lasm_Web_Raw_click(v_a_2860_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_scrollIntoView(lean_object* v_a_2869_, uint8_t v_a_2870_){
_start:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; uint8_t v___x_2879_; lean_object* v___x_2880_; 
v___x_2872_ = ((lean_object*)(l_Lasm_Web_Raw_scrollIntoView___closed__1));
v___x_2873_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2874_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2875_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2875_, 0, v_a_2869_);
lean_ctor_set(v___x_2875_, 1, v___x_2874_);
v___x_2876_ = lean_array_push(v___x_2873_, v___x_2875_);
v___x_2877_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2877_, 0, v_a_2870_);
v___x_2878_ = lean_array_push(v___x_2876_, v___x_2877_);
v___x_2879_ = 1;
v___x_2880_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2872_, v___x_2878_, v___x_2879_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_scrollIntoView___boxed(lean_object* v_a_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_){
_start:
{
uint8_t v_a_137__boxed_2884_; lean_object* v_res_2885_; 
v_a_137__boxed_2884_ = lean_unbox(v_a_2882_);
v_res_2885_ = l_Lasm_Web_Raw_scrollIntoView(v_a_2881_, v_a_137__boxed_2884_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0(lean_object* v_b_2886_, lean_object* v_args_2887_, uint8_t v_await_2888_){
_start:
{
uint64_t v___y_2891_; uint64_t v___y_2892_; uint64_t v___x_2932_; uint64_t v___y_2934_; 
v___x_2932_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_2888_ == 0)
{
uint64_t v___x_2939_; 
v___x_2939_ = 0ULL;
v___y_2934_ = v___x_2939_;
goto v___jp_2933_;
}
else
{
uint64_t v___x_2940_; 
v___x_2940_ = 2ULL;
v___y_2934_ = v___x_2940_;
goto v___jp_2933_;
}
v___jp_2890_:
{
uint64_t v_flags_2893_; uint32_t v___x_2894_; lean_object* v___x_2895_; uint32_t v___x_2896_; lean_object* v___x_2897_; 
v_flags_2893_ = lean_uint64_lor(v___y_2891_, v___y_2892_);
v___x_2894_ = 214;
v___x_2895_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2886_, v_args_2887_);
v___x_2896_ = 0;
v___x_2897_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2894_, v_flags_2893_, v___x_2895_, v___x_2896_);
lean_dec(v___x_2895_);
if (lean_obj_tag(v___x_2897_) == 0)
{
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_a_2898_; lean_object* v___x_2899_; 
v_a_2898_ = lean_ctor_get(v___x_2897_, 0);
lean_inc(v_a_2898_);
lean_dec_ref_known(v___x_2897_, 1);
v___x_2899_ = l_Lasm_JS_Wire_decode(v_a_2898_);
lean_dec(v_a_2898_);
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2907_; 
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2902_ = v___x_2899_;
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2899_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
else
{
return v___x_2899_;
}
}
else
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2915_; 
v_a_2908_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2910_ = v___x_2897_;
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2897_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
lean_ctor_set_tag(v___x_2910_, 1);
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
else
{
lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2931_; 
v_a_2916_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2918_ = v___x_2897_;
v_isShared_2919_ = v_isSharedCheck_2931_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_dec(v___x_2897_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2931_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2929_; 
v___x_2920_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_2921_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2886_);
v___x_2922_ = lean_string_append(v___x_2920_, v___x_2921_);
lean_dec_ref(v___x_2921_);
v___x_2923_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_2924_ = lean_string_append(v___x_2922_, v___x_2923_);
v___x_2925_ = lean_io_error_to_string(v_a_2916_);
v___x_2926_ = lean_string_append(v___x_2924_, v___x_2925_);
lean_dec_ref(v___x_2925_);
v___x_2927_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2926_);
if (v_isShared_2919_ == 0)
{
lean_ctor_set(v___x_2918_, 0, v___x_2927_);
v___x_2929_ = v___x_2918_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v___x_2927_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
}
v___jp_2933_:
{
uint8_t v_construct_2935_; uint64_t v___x_2936_; 
v_construct_2935_ = lean_ctor_get_uint8(v_b_2886_, sizeof(void*)*4);
v___x_2936_ = lean_uint64_lor(v___x_2932_, v___y_2934_);
if (v_construct_2935_ == 0)
{
uint64_t v___x_2937_; 
v___x_2937_ = 0ULL;
v___y_2891_ = v___x_2936_;
v___y_2892_ = v___x_2937_;
goto v___jp_2890_;
}
else
{
uint64_t v___x_2938_; 
v___x_2938_ = 4ULL;
v___y_2891_ = v___x_2936_;
v___y_2892_ = v___x_2938_;
goto v___jp_2890_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0___boxed(lean_object* v_b_2941_, lean_object* v_args_2942_, lean_object* v_await_2943_, lean_object* v_a_2944_){
_start:
{
uint8_t v_await_boxed_2945_; lean_object* v_res_2946_; 
v_await_boxed_2945_ = lean_unbox(v_await_2943_);
v_res_2946_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0(v_b_2941_, v_args_2942_, v_await_boxed_2945_);
lean_dec_ref(v_b_2941_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getProp(lean_object* v_a_2953_, lean_object* v_a_2954_){
_start:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; uint8_t v___x_2963_; lean_object* v___x_2964_; 
v___x_2956_ = ((lean_object*)(l_Lasm_Web_Raw_getProp___closed__1));
v___x_2957_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2958_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2959_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2959_, 0, v_a_2953_);
lean_ctor_set(v___x_2959_, 1, v___x_2958_);
v___x_2960_ = lean_array_push(v___x_2957_, v___x_2959_);
v___x_2961_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2961_, 0, v_a_2954_);
v___x_2962_ = lean_array_push(v___x_2960_, v___x_2961_);
v___x_2963_ = 1;
v___x_2964_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0(v___x_2956_, v___x_2962_, v___x_2963_);
return v___x_2964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getProp___boxed(lean_object* v_a_2965_, lean_object* v_a_2966_, lean_object* v_a_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = l_Lasm_Web_Raw_getProp(v_a_2965_, v_a_2966_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___redArg(lean_object* v_d_2969_){
_start:
{
lean_object* v___x_2971_; 
v___x_2971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2971_, 0, v_d_2969_);
return v___x_2971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___redArg___boxed(lean_object* v_d_2972_, lean_object* v_a_2973_){
_start:
{
lean_object* v_res_2974_; 
v_res_2974_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___redArg(v_d_2972_);
return v_res_2974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0(lean_object* v_context_2975_, lean_object* v_d_2976_){
_start:
{
lean_object* v___x_2978_; 
v___x_2978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2978_, 0, v_d_2976_);
return v___x_2978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___boxed(lean_object* v_context_2979_, lean_object* v_d_2980_, lean_object* v_a_2981_){
_start:
{
lean_object* v_res_2982_; 
v_res_2982_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0(v_context_2979_, v_d_2980_);
lean_dec_ref(v_context_2979_);
return v_res_2982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(lean_object* v_b_2983_, lean_object* v_args_2984_, uint8_t v_await_2985_){
_start:
{
uint64_t v___y_2988_; uint64_t v___y_2989_; uint64_t v___x_3032_; uint64_t v___y_3034_; 
v___x_3032_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_2985_ == 0)
{
uint64_t v___x_3039_; 
v___x_3039_ = 0ULL;
v___y_3034_ = v___x_3039_;
goto v___jp_3033_;
}
else
{
uint64_t v___x_3040_; 
v___x_3040_ = 2ULL;
v___y_3034_ = v___x_3040_;
goto v___jp_3033_;
}
v___jp_2987_:
{
uint64_t v_flags_2990_; uint32_t v___x_2991_; lean_object* v___x_2992_; uint32_t v___x_2993_; lean_object* v___x_2994_; 
v_flags_2990_ = lean_uint64_lor(v___y_2988_, v___y_2989_);
v___x_2991_ = 214;
v___x_2992_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2983_, v_args_2984_);
v___x_2993_ = 0;
v___x_2994_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2991_, v_flags_2990_, v___x_2992_, v___x_2993_);
lean_dec(v___x_2992_);
if (lean_obj_tag(v___x_2994_) == 0)
{
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_object* v_a_2995_; lean_object* v___x_2996_; 
v_a_2995_ = lean_ctor_get(v___x_2994_, 0);
lean_inc(v_a_2995_);
lean_dec_ref_known(v___x_2994_, 1);
v___x_2996_ = l_Lasm_JS_Wire_decode(v_a_2995_);
lean_dec(v_a_2995_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_a_2997_);
lean_dec_ref_known(v___x_2996_, 1);
v___x_2998_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2983_);
v___x_2999_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_2998_, v_a_2997_);
lean_dec_ref(v___x_2998_);
return v___x_2999_;
}
else
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3007_; 
v_a_3000_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_3002_ = v___x_2996_;
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2996_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3005_; 
if (v_isShared_3003_ == 0)
{
v___x_3005_ = v___x_3002_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_3000_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
v_a_3008_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_2994_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2994_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
lean_ctor_set_tag(v___x_3010_, 1);
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
else
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3031_; 
v_a_3016_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3018_ = v___x_2994_;
v_isShared_3019_ = v_isSharedCheck_3031_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_2994_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3031_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3029_; 
v___x_3020_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_3021_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2983_);
v___x_3022_ = lean_string_append(v___x_3020_, v___x_3021_);
lean_dec_ref(v___x_3021_);
v___x_3023_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_3024_ = lean_string_append(v___x_3022_, v___x_3023_);
v___x_3025_ = lean_io_error_to_string(v_a_3016_);
v___x_3026_ = lean_string_append(v___x_3024_, v___x_3025_);
lean_dec_ref(v___x_3025_);
v___x_3027_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 0, v___x_3027_);
v___x_3029_ = v___x_3018_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v___x_3027_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
v___jp_3033_:
{
uint8_t v_construct_3035_; uint64_t v___x_3036_; 
v_construct_3035_ = lean_ctor_get_uint8(v_b_2983_, sizeof(void*)*4);
v___x_3036_ = lean_uint64_lor(v___x_3032_, v___y_3034_);
if (v_construct_3035_ == 0)
{
uint64_t v___x_3037_; 
v___x_3037_ = 0ULL;
v___y_2988_ = v___x_3036_;
v___y_2989_ = v___x_3037_;
goto v___jp_2987_;
}
else
{
uint64_t v___x_3038_; 
v___x_3038_ = 4ULL;
v___y_2988_ = v___x_3036_;
v___y_2989_ = v___x_3038_;
goto v___jp_2987_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0___boxed(lean_object* v_b_3041_, lean_object* v_args_3042_, lean_object* v_await_3043_, lean_object* v_a_3044_){
_start:
{
uint8_t v_await_boxed_3045_; lean_object* v_res_3046_; 
v_await_boxed_3045_ = lean_unbox(v_await_3043_);
v_res_3046_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(v_b_3041_, v_args_3042_, v_await_boxed_3045_);
lean_dec_ref(v_b_3041_);
return v_res_3046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getPropValue(lean_object* v_a_3054_, lean_object* v_a_3055_){
_start:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; uint8_t v___x_3064_; lean_object* v___x_3065_; 
v___x_3057_ = ((lean_object*)(l_Lasm_Web_Raw_getPropValue___closed__1));
v___x_3058_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_3059_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_3060_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3060_, 0, v_a_3054_);
lean_ctor_set(v___x_3060_, 1, v___x_3059_);
v___x_3061_ = lean_array_push(v___x_3058_, v___x_3060_);
v___x_3062_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3062_, 0, v_a_3055_);
v___x_3063_ = lean_array_push(v___x_3061_, v___x_3062_);
v___x_3064_ = 1;
v___x_3065_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(v___x_3057_, v___x_3063_, v___x_3064_);
return v___x_3065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getPropValue___boxed(lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_){
_start:
{
lean_object* v_res_3069_; 
v_res_3069_ = l_Lasm_Web_Raw_getPropValue(v_a_3066_, v_a_3067_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setProp(lean_object* v_a_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_){
_start:
{
lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; uint8_t v___x_3088_; lean_object* v___x_3089_; 
v___x_3080_ = ((lean_object*)(l_Lasm_Web_Raw_setProp___closed__1));
v___x_3081_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_3082_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_3083_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3083_, 0, v_a_3076_);
lean_ctor_set(v___x_3083_, 1, v___x_3082_);
v___x_3084_ = lean_array_push(v___x_3081_, v___x_3083_);
v___x_3085_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3085_, 0, v_a_3077_);
v___x_3086_ = lean_array_push(v___x_3084_, v___x_3085_);
v___x_3087_ = lean_array_push(v___x_3086_, v_a_3078_);
v___x_3088_ = 1;
v___x_3089_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_3080_, v___x_3087_, v___x_3088_);
return v___x_3089_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setProp___boxed(lean_object* v_a_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_){
_start:
{
lean_object* v_res_3094_; 
v_res_3094_ = l_Lasm_Web_Raw_setProp(v_a_3090_, v_a_3091_, v_a_3092_);
return v_res_3094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSRect___lam__0(lean_object* v___x_3103_, lean_object* v_d_3104_){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; 
v___x_3105_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__0));
lean_inc_ref(v___x_3103_);
v___x_3106_ = l_Lasm_JS_readField___redArg(v___x_3103_, v_d_3104_, v___x_3105_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v_a_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3114_; 
lean_dec_ref(v___x_3103_);
v_a_3107_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3109_ = v___x_3106_;
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_a_3107_);
lean_dec(v___x_3106_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3107_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
else
{
lean_object* v_a_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; 
v_a_3115_ = lean_ctor_get(v___x_3106_, 0);
lean_inc(v_a_3115_);
lean_dec_ref_known(v___x_3106_, 1);
v___x_3116_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__1));
lean_inc_ref(v___x_3103_);
v___x_3117_ = l_Lasm_JS_readField___redArg(v___x_3103_, v_d_3104_, v___x_3116_);
if (lean_obj_tag(v___x_3117_) == 0)
{
lean_object* v_a_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3125_; 
lean_dec(v_a_3115_);
lean_dec_ref(v___x_3103_);
v_a_3118_ = lean_ctor_get(v___x_3117_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3117_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3120_ = v___x_3117_;
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_a_3118_);
lean_dec(v___x_3117_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v___x_3123_; 
if (v_isShared_3121_ == 0)
{
v___x_3123_ = v___x_3120_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_a_3118_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v_a_3126_ = lean_ctor_get(v___x_3117_, 0);
lean_inc(v_a_3126_);
lean_dec_ref_known(v___x_3117_, 1);
v___x_3127_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__2));
lean_inc_ref(v___x_3103_);
v___x_3128_ = l_Lasm_JS_readField___redArg(v___x_3103_, v_d_3104_, v___x_3127_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
lean_dec(v_a_3126_);
lean_dec(v_a_3115_);
lean_dec_ref(v___x_3103_);
v_a_3129_ = lean_ctor_get(v___x_3128_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3128_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3128_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v_a_3137_ = lean_ctor_get(v___x_3128_, 0);
lean_inc(v_a_3137_);
lean_dec_ref_known(v___x_3128_, 1);
v___x_3138_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__3));
lean_inc_ref(v___x_3103_);
v___x_3139_ = l_Lasm_JS_readField___redArg(v___x_3103_, v_d_3104_, v___x_3138_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
lean_dec(v_a_3137_);
lean_dec(v_a_3126_);
lean_dec(v_a_3115_);
lean_dec_ref(v___x_3103_);
v_a_3140_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3139_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3139_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3145_; 
if (v_isShared_3143_ == 0)
{
v___x_3145_ = v___x_3142_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3140_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
return v___x_3145_;
}
}
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; 
v_a_3148_ = lean_ctor_get(v___x_3139_, 0);
lean_inc(v_a_3148_);
lean_dec_ref_known(v___x_3139_, 1);
v___x_3149_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__4));
lean_inc_ref(v___x_3103_);
v___x_3150_ = l_Lasm_JS_readField___redArg(v___x_3103_, v_d_3104_, v___x_3149_);
if (lean_obj_tag(v___x_3150_) == 0)
{
lean_object* v_a_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3158_; 
lean_dec(v_a_3148_);
lean_dec(v_a_3137_);
lean_dec(v_a_3126_);
lean_dec(v_a_3115_);
lean_dec_ref(v___x_3103_);
v_a_3151_ = lean_ctor_get(v___x_3150_, 0);
v_isSharedCheck_3158_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3158_ == 0)
{
v___x_3153_ = v___x_3150_;
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_a_3151_);
lean_dec(v___x_3150_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3156_; 
if (v_isShared_3154_ == 0)
{
v___x_3156_ = v___x_3153_;
goto v_reusejp_3155_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_a_3151_);
v___x_3156_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3155_;
}
v_reusejp_3155_:
{
return v___x_3156_;
}
}
}
else
{
lean_object* v_a_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
v_a_3159_ = lean_ctor_get(v___x_3150_, 0);
lean_inc(v_a_3159_);
lean_dec_ref_known(v___x_3150_, 1);
v___x_3160_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__5));
lean_inc_ref(v___x_3103_);
v___x_3161_ = l_Lasm_JS_readField___redArg(v___x_3103_, v_d_3104_, v___x_3160_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_object* v_a_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3169_; 
lean_dec(v_a_3159_);
lean_dec(v_a_3148_);
lean_dec(v_a_3137_);
lean_dec(v_a_3126_);
lean_dec(v_a_3115_);
lean_dec_ref(v___x_3103_);
v_a_3162_ = lean_ctor_get(v___x_3161_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3161_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3164_ = v___x_3161_;
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_a_3162_);
lean_dec(v___x_3161_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3167_; 
if (v_isShared_3165_ == 0)
{
v___x_3167_ = v___x_3164_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_a_3162_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
}
}
}
else
{
lean_object* v_a_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v_a_3170_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_a_3170_);
lean_dec_ref_known(v___x_3161_, 1);
v___x_3171_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__6));
lean_inc_ref(v___x_3103_);
v___x_3172_ = l_Lasm_JS_readField___redArg(v___x_3103_, v_d_3104_, v___x_3171_);
if (lean_obj_tag(v___x_3172_) == 0)
{
lean_object* v_a_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3180_; 
lean_dec(v_a_3170_);
lean_dec(v_a_3159_);
lean_dec(v_a_3148_);
lean_dec(v_a_3137_);
lean_dec(v_a_3126_);
lean_dec(v_a_3115_);
lean_dec_ref(v___x_3103_);
v_a_3173_ = lean_ctor_get(v___x_3172_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3172_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3175_ = v___x_3172_;
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_a_3173_);
lean_dec(v___x_3172_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3178_; 
if (v_isShared_3176_ == 0)
{
v___x_3178_ = v___x_3175_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_a_3173_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
else
{
lean_object* v_a_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v_a_3181_ = lean_ctor_get(v___x_3172_, 0);
lean_inc(v_a_3181_);
lean_dec_ref_known(v___x_3172_, 1);
v___x_3182_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__7));
v___x_3183_ = l_Lasm_JS_readField___redArg(v___x_3103_, v_d_3104_, v___x_3182_);
if (lean_obj_tag(v___x_3183_) == 0)
{
lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3191_; 
lean_dec(v_a_3181_);
lean_dec(v_a_3170_);
lean_dec(v_a_3159_);
lean_dec(v_a_3148_);
lean_dec(v_a_3137_);
lean_dec(v_a_3126_);
lean_dec(v_a_3115_);
v_a_3184_ = lean_ctor_get(v___x_3183_, 0);
v_isSharedCheck_3191_ = !lean_is_exclusive(v___x_3183_);
if (v_isSharedCheck_3191_ == 0)
{
v___x_3186_ = v___x_3183_;
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v___x_3183_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3189_; 
if (v_isShared_3187_ == 0)
{
v___x_3189_ = v___x_3186_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v_a_3184_);
v___x_3189_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
return v___x_3189_;
}
}
}
else
{
lean_object* v_a_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3208_; 
v_a_3192_ = lean_ctor_get(v___x_3183_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v___x_3183_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3194_ = v___x_3183_;
v_isShared_3195_ = v_isSharedCheck_3208_;
goto v_resetjp_3193_;
}
else
{
lean_inc(v_a_3192_);
lean_dec(v___x_3183_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3208_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
lean_object* v___x_3196_; double v___x_3197_; double v___x_3198_; double v___x_3199_; double v___x_3200_; double v___x_3201_; double v___x_3202_; double v___x_3203_; double v___x_3204_; lean_object* v___x_3206_; 
v___x_3196_ = lean_alloc_ctor(0, 0, 64);
v___x_3197_ = lean_unbox_float(v_a_3115_);
lean_dec(v_a_3115_);
lean_ctor_set_float(v___x_3196_, 0, v___x_3197_);
v___x_3198_ = lean_unbox_float(v_a_3126_);
lean_dec(v_a_3126_);
lean_ctor_set_float(v___x_3196_, 8, v___x_3198_);
v___x_3199_ = lean_unbox_float(v_a_3137_);
lean_dec(v_a_3137_);
lean_ctor_set_float(v___x_3196_, 16, v___x_3199_);
v___x_3200_ = lean_unbox_float(v_a_3148_);
lean_dec(v_a_3148_);
lean_ctor_set_float(v___x_3196_, 24, v___x_3200_);
v___x_3201_ = lean_unbox_float(v_a_3159_);
lean_dec(v_a_3159_);
lean_ctor_set_float(v___x_3196_, 32, v___x_3201_);
v___x_3202_ = lean_unbox_float(v_a_3170_);
lean_dec(v_a_3170_);
lean_ctor_set_float(v___x_3196_, 40, v___x_3202_);
v___x_3203_ = lean_unbox_float(v_a_3181_);
lean_dec(v_a_3181_);
lean_ctor_set_float(v___x_3196_, 48, v___x_3203_);
v___x_3204_ = lean_unbox_float(v_a_3192_);
lean_dec(v_a_3192_);
lean_ctor_set_float(v___x_3196_, 56, v___x_3204_);
if (v_isShared_3195_ == 0)
{
lean_ctor_set(v___x_3194_, 0, v___x_3196_);
v___x_3206_ = v___x_3194_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v___x_3196_);
v___x_3206_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
return v___x_3206_;
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
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSRect___lam__0___boxed(lean_object* v___x_3209_, lean_object* v_d_3210_){
_start:
{
lean_object* v_res_3211_; 
v_res_3211_ = l_Lasm_Web_instFromJSRect___lam__0(v___x_3209_, v_d_3210_);
lean_dec(v_d_3210_);
return v_res_3211_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSRect___closed__0(void){
_start:
{
lean_object* v___x_3212_; lean_object* v___f_3213_; 
v___x_3212_ = l_Lasm_JS_instFromJSFloat;
v___f_3213_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSRect___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3213_, 0, v___x_3212_);
return v___f_3213_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSRect___closed__2(void){
_start:
{
uint8_t v___x_3215_; lean_object* v___x_3216_; lean_object* v___f_3217_; lean_object* v___x_3218_; 
v___x_3215_ = 0;
v___x_3216_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___closed__1));
v___f_3217_ = lean_obj_once(&l_Lasm_Web_instFromJSRect___closed__0, &l_Lasm_Web_instFromJSRect___closed__0_once, _init_l_Lasm_Web_instFromJSRect___closed__0);
v___x_3218_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3218_, 0, v___f_3217_);
lean_ctor_set(v___x_3218_, 1, v___x_3216_);
lean_ctor_set_uint8(v___x_3218_, sizeof(void*)*2, v___x_3215_);
return v___x_3218_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSRect(void){
_start:
{
lean_object* v___x_3219_; 
v___x_3219_ = lean_obj_once(&l_Lasm_Web_instFromJSRect___closed__2, &l_Lasm_Web_instFromJSRect___closed__2_once, _init_l_Lasm_Web_instFromJSRect___closed__2);
return v___x_3219_;
}
}
static double _init_l_Lasm_Web_instInhabitedRect_default___closed__0(void){
_start:
{
uint64_t v___x_3220_; double v___x_3221_; 
v___x_3220_ = 0ULL;
v___x_3221_ = lean_uint64_to_float(v___x_3220_);
return v___x_3221_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedRect_default___closed__1(void){
_start:
{
double v___x_3222_; lean_object* v___x_3223_; 
v___x_3222_ = lean_float_once(&l_Lasm_Web_instInhabitedRect_default___closed__0, &l_Lasm_Web_instInhabitedRect_default___closed__0_once, _init_l_Lasm_Web_instInhabitedRect_default___closed__0);
v___x_3223_ = lean_alloc_ctor(0, 0, 64);
lean_ctor_set_float(v___x_3223_, 0, v___x_3222_);
lean_ctor_set_float(v___x_3223_, 8, v___x_3222_);
lean_ctor_set_float(v___x_3223_, 16, v___x_3222_);
lean_ctor_set_float(v___x_3223_, 24, v___x_3222_);
lean_ctor_set_float(v___x_3223_, 32, v___x_3222_);
lean_ctor_set_float(v___x_3223_, 40, v___x_3222_);
lean_ctor_set_float(v___x_3223_, 48, v___x_3222_);
lean_ctor_set_float(v___x_3223_, 56, v___x_3222_);
return v___x_3223_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedRect_default(void){
_start:
{
lean_object* v___x_3224_; 
v___x_3224_ = lean_obj_once(&l_Lasm_Web_instInhabitedRect_default___closed__1, &l_Lasm_Web_instInhabitedRect_default___closed__1_once, _init_l_Lasm_Web_instInhabitedRect_default___closed__1);
return v___x_3224_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedRect(void){
_start:
{
lean_object* v___x_3225_; 
v___x_3225_ = l_Lasm_Web_instInhabitedRect_default;
return v___x_3225_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3238_ = lean_unsigned_to_nat(5u);
v___x_3239_ = lean_nat_to_int(v___x_3238_);
return v___x_3239_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; 
v___x_3247_ = lean_unsigned_to_nat(9u);
v___x_3248_ = lean_nat_to_int(v___x_3247_);
return v___x_3248_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; 
v___x_3251_ = lean_unsigned_to_nat(10u);
v___x_3252_ = lean_nat_to_int(v___x_3251_);
return v___x_3252_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3255_ = lean_unsigned_to_nat(7u);
v___x_3256_ = lean_nat_to_int(v___x_3255_);
return v___x_3256_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_3263_; lean_object* v___x_3264_; 
v___x_3263_ = lean_unsigned_to_nat(8u);
v___x_3264_ = lean_nat_to_int(v___x_3263_);
return v___x_3264_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_3266_; lean_object* v___x_3267_; 
v___x_3266_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__0));
v___x_3267_ = lean_string_length(v___x_3266_);
return v___x_3267_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3268_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__21, &l_Lasm_Web_instReprRect_repr___redArg___closed__21_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__21);
v___x_3269_ = lean_nat_to_int(v___x_3268_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___redArg(lean_object* v_x_3274_){
_start:
{
double v_x_3275_; double v_y_3276_; double v_width_3277_; double v_height_3278_; double v_top_3279_; double v_right_3280_; double v_bottom_3281_; double v_left_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; uint8_t v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v_x_3275_ = lean_ctor_get_float(v_x_3274_, 0);
v_y_3276_ = lean_ctor_get_float(v_x_3274_, 8);
v_width_3277_ = lean_ctor_get_float(v_x_3274_, 16);
v_height_3278_ = lean_ctor_get_float(v_x_3274_, 24);
v_top_3279_ = lean_ctor_get_float(v_x_3274_, 32);
v_right_3280_ = lean_ctor_get_float(v_x_3274_, 40);
v_bottom_3281_ = lean_ctor_get_float(v_x_3274_, 48);
v_left_3282_ = lean_ctor_get_float(v_x_3274_, 56);
v___x_3283_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__4));
v___x_3284_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__5));
v___x_3285_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__6, &l_Lasm_Web_instReprRect_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__6);
v___x_3286_ = lean_unsigned_to_nat(0u);
v___x_3287_ = l_Float_repr(v_x_3275_, v___x_3286_);
v___x_3288_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3285_);
lean_ctor_set(v___x_3288_, 1, v___x_3287_);
v___x_3289_ = 0;
v___x_3290_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3290_, 0, v___x_3288_);
lean_ctor_set_uint8(v___x_3290_, sizeof(void*)*1, v___x_3289_);
v___x_3291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3291_, 0, v___x_3284_);
lean_ctor_set(v___x_3291_, 1, v___x_3290_);
v___x_3292_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__8));
v___x_3293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3291_);
lean_ctor_set(v___x_3293_, 1, v___x_3292_);
v___x_3294_ = lean_box(1);
v___x_3295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3295_, 0, v___x_3293_);
lean_ctor_set(v___x_3295_, 1, v___x_3294_);
v___x_3296_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__9));
v___x_3297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3297_, 0, v___x_3295_);
lean_ctor_set(v___x_3297_, 1, v___x_3296_);
v___x_3298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3298_, 0, v___x_3297_);
lean_ctor_set(v___x_3298_, 1, v___x_3283_);
v___x_3299_ = l_Float_repr(v_y_3276_, v___x_3286_);
v___x_3300_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3285_);
lean_ctor_set(v___x_3300_, 1, v___x_3299_);
v___x_3301_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3301_, 0, v___x_3300_);
lean_ctor_set_uint8(v___x_3301_, sizeof(void*)*1, v___x_3289_);
v___x_3302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3302_, 0, v___x_3298_);
lean_ctor_set(v___x_3302_, 1, v___x_3301_);
v___x_3303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3302_);
lean_ctor_set(v___x_3303_, 1, v___x_3292_);
v___x_3304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3303_);
lean_ctor_set(v___x_3304_, 1, v___x_3294_);
v___x_3305_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__10));
v___x_3306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3304_);
lean_ctor_set(v___x_3306_, 1, v___x_3305_);
v___x_3307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3306_);
lean_ctor_set(v___x_3307_, 1, v___x_3283_);
v___x_3308_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__11, &l_Lasm_Web_instReprRect_repr___redArg___closed__11_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__11);
v___x_3309_ = l_Float_repr(v_width_3277_, v___x_3286_);
v___x_3310_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3308_);
lean_ctor_set(v___x_3310_, 1, v___x_3309_);
v___x_3311_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3311_, 0, v___x_3310_);
lean_ctor_set_uint8(v___x_3311_, sizeof(void*)*1, v___x_3289_);
v___x_3312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3307_);
lean_ctor_set(v___x_3312_, 1, v___x_3311_);
v___x_3313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3313_, 0, v___x_3312_);
lean_ctor_set(v___x_3313_, 1, v___x_3292_);
v___x_3314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3313_);
lean_ctor_set(v___x_3314_, 1, v___x_3294_);
v___x_3315_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__12));
v___x_3316_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3314_);
lean_ctor_set(v___x_3316_, 1, v___x_3315_);
v___x_3317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3316_);
lean_ctor_set(v___x_3317_, 1, v___x_3283_);
v___x_3318_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__13, &l_Lasm_Web_instReprRect_repr___redArg___closed__13_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__13);
v___x_3319_ = l_Float_repr(v_height_3278_, v___x_3286_);
v___x_3320_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3318_);
lean_ctor_set(v___x_3320_, 1, v___x_3319_);
v___x_3321_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3321_, 0, v___x_3320_);
lean_ctor_set_uint8(v___x_3321_, sizeof(void*)*1, v___x_3289_);
v___x_3322_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3322_, 0, v___x_3317_);
lean_ctor_set(v___x_3322_, 1, v___x_3321_);
v___x_3323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3322_);
lean_ctor_set(v___x_3323_, 1, v___x_3292_);
v___x_3324_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3323_);
lean_ctor_set(v___x_3324_, 1, v___x_3294_);
v___x_3325_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__14));
v___x_3326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3324_);
lean_ctor_set(v___x_3326_, 1, v___x_3325_);
v___x_3327_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3326_);
lean_ctor_set(v___x_3327_, 1, v___x_3283_);
v___x_3328_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__15, &l_Lasm_Web_instReprRect_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__15);
v___x_3329_ = l_Float_repr(v_top_3279_, v___x_3286_);
v___x_3330_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3328_);
lean_ctor_set(v___x_3330_, 1, v___x_3329_);
v___x_3331_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3331_, 0, v___x_3330_);
lean_ctor_set_uint8(v___x_3331_, sizeof(void*)*1, v___x_3289_);
v___x_3332_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3327_);
lean_ctor_set(v___x_3332_, 1, v___x_3331_);
v___x_3333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3332_);
lean_ctor_set(v___x_3333_, 1, v___x_3292_);
v___x_3334_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3334_, 0, v___x_3333_);
lean_ctor_set(v___x_3334_, 1, v___x_3294_);
v___x_3335_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__16));
v___x_3336_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3334_);
lean_ctor_set(v___x_3336_, 1, v___x_3335_);
v___x_3337_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3337_, 0, v___x_3336_);
lean_ctor_set(v___x_3337_, 1, v___x_3283_);
v___x_3338_ = l_Float_repr(v_right_3280_, v___x_3286_);
v___x_3339_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3308_);
lean_ctor_set(v___x_3339_, 1, v___x_3338_);
v___x_3340_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3340_, 0, v___x_3339_);
lean_ctor_set_uint8(v___x_3340_, sizeof(void*)*1, v___x_3289_);
v___x_3341_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3337_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
v___x_3342_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
lean_ctor_set(v___x_3342_, 1, v___x_3292_);
v___x_3343_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3342_);
lean_ctor_set(v___x_3343_, 1, v___x_3294_);
v___x_3344_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__17));
v___x_3345_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3343_);
lean_ctor_set(v___x_3345_, 1, v___x_3344_);
v___x_3346_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3345_);
lean_ctor_set(v___x_3346_, 1, v___x_3283_);
v___x_3347_ = l_Float_repr(v_bottom_3281_, v___x_3286_);
v___x_3348_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3348_, 0, v___x_3318_);
lean_ctor_set(v___x_3348_, 1, v___x_3347_);
v___x_3349_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3349_, 0, v___x_3348_);
lean_ctor_set_uint8(v___x_3349_, sizeof(void*)*1, v___x_3289_);
v___x_3350_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3346_);
lean_ctor_set(v___x_3350_, 1, v___x_3349_);
v___x_3351_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3350_);
lean_ctor_set(v___x_3351_, 1, v___x_3292_);
v___x_3352_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3351_);
lean_ctor_set(v___x_3352_, 1, v___x_3294_);
v___x_3353_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__18));
v___x_3354_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3354_, 0, v___x_3352_);
lean_ctor_set(v___x_3354_, 1, v___x_3353_);
v___x_3355_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3354_);
lean_ctor_set(v___x_3355_, 1, v___x_3283_);
v___x_3356_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__19, &l_Lasm_Web_instReprRect_repr___redArg___closed__19_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__19);
v___x_3357_ = l_Float_repr(v_left_3282_, v___x_3286_);
v___x_3358_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3356_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v___x_3359_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3359_, 0, v___x_3358_);
lean_ctor_set_uint8(v___x_3359_, sizeof(void*)*1, v___x_3289_);
v___x_3360_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3355_);
lean_ctor_set(v___x_3360_, 1, v___x_3359_);
v___x_3361_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__22, &l_Lasm_Web_instReprRect_repr___redArg___closed__22_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__22);
v___x_3362_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__23));
v___x_3363_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3363_, 0, v___x_3362_);
lean_ctor_set(v___x_3363_, 1, v___x_3360_);
v___x_3364_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__24));
v___x_3365_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3365_, 0, v___x_3363_);
lean_ctor_set(v___x_3365_, 1, v___x_3364_);
v___x_3366_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3366_, 0, v___x_3361_);
lean_ctor_set(v___x_3366_, 1, v___x_3365_);
v___x_3367_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3367_, 0, v___x_3366_);
lean_ctor_set_uint8(v___x_3367_, sizeof(void*)*1, v___x_3289_);
return v___x_3367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___redArg___boxed(lean_object* v_x_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l_Lasm_Web_instReprRect_repr___redArg(v_x_3368_);
lean_dec_ref(v_x_3368_);
return v_res_3369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr(lean_object* v_x_3370_, lean_object* v_prec_3371_){
_start:
{
lean_object* v___x_3372_; 
v___x_3372_ = l_Lasm_Web_instReprRect_repr___redArg(v_x_3370_);
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___boxed(lean_object* v_x_3373_, lean_object* v_prec_3374_){
_start:
{
lean_object* v_res_3375_; 
v_res_3375_ = l_Lasm_Web_instReprRect_repr(v_x_3373_, v_prec_3374_);
lean_dec(v_prec_3374_);
lean_dec_ref(v_x_3373_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(lean_object* v_d_3385_, lean_object* v_key_3386_){
_start:
{
if (lean_obj_tag(v_d_3385_) == 8)
{
lean_object* v___x_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3415_; 
v___x_3387_ = l_Lasm_JS_Data_field(v_d_3385_, v_key_3386_);
v_isSharedCheck_3415_ = !lean_is_exclusive(v_d_3385_);
if (v_isSharedCheck_3415_ == 0)
{
lean_object* v_unused_3416_; 
v_unused_3416_ = lean_ctor_get(v_d_3385_, 0);
lean_dec(v_unused_3416_);
v___x_3389_ = v_d_3385_;
v_isShared_3390_ = v_isSharedCheck_3415_;
goto v_resetjp_3388_;
}
else
{
lean_dec(v_d_3385_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3415_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
if (lean_obj_tag(v___x_3387_) == 3)
{
double v_n_3391_; lean_object* v___x_3392_; lean_object* v___x_3394_; 
v_n_3391_ = lean_ctor_get_float(v___x_3387_, 0);
lean_dec_ref_known(v___x_3387_, 0);
v___x_3392_ = lean_box_float(v_n_3391_);
if (v_isShared_3390_ == 0)
{
lean_ctor_set_tag(v___x_3389_, 1);
lean_ctor_set(v___x_3389_, 0, v___x_3392_);
v___x_3394_ = v___x_3389_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v___x_3392_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
else
{
lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; uint8_t v___x_3406_; 
v___x_3396_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__0));
v___x_3397_ = lean_string_append(v___x_3396_, v_key_3386_);
v___x_3398_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__1));
v___x_3399_ = lean_string_append(v___x_3397_, v___x_3398_);
v___x_3400_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__2));
v___x_3401_ = lean_string_append(v___x_3399_, v___x_3400_);
v___x_3402_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__3));
v___x_3403_ = lean_string_append(v___x_3401_, v___x_3402_);
v___x_3404_ = l_Lasm_JS_Data_describe(v___x_3387_);
v___x_3405_ = lean_string_append(v___x_3403_, v___x_3404_);
lean_dec_ref(v___x_3404_);
v___x_3406_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_3406_ == 0)
{
lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3410_; 
v___x_3407_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___x_3408_ = lean_string_append(v___x_3405_, v___x_3407_);
if (v_isShared_3390_ == 0)
{
lean_ctor_set_tag(v___x_3389_, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3408_);
v___x_3410_ = v___x_3389_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v___x_3408_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
else
{
lean_object* v___x_3413_; 
if (v_isShared_3390_ == 0)
{
lean_ctor_set_tag(v___x_3389_, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3405_);
v___x_3413_ = v___x_3389_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v___x_3405_);
v___x_3413_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
return v___x_3413_;
}
}
}
}
}
else
{
lean_object* v___x_3417_; 
lean_dec(v_d_3385_);
v___x_3417_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__5));
return v___x_3417_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___boxed(lean_object* v_d_3418_, lean_object* v_key_3419_){
_start:
{
lean_object* v_res_3420_; 
v_res_3420_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3418_, v_key_3419_);
lean_dec_ref(v_key_3419_);
return v_res_3420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0(lean_object* v_context_3421_, lean_object* v_d_3422_){
_start:
{
lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3431_; lean_object* v_received_3432_; lean_object* v___y_3451_; lean_object* v_a_3454_; lean_object* v___x_3478_; lean_object* v___x_3479_; 
v___x_3478_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__0));
lean_inc(v_d_3422_);
v___x_3479_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3422_, v___x_3478_);
if (lean_obj_tag(v___x_3479_) == 0)
{
lean_object* v_a_3480_; 
v_a_3480_ = lean_ctor_get(v___x_3479_, 0);
lean_inc(v_a_3480_);
lean_dec_ref_known(v___x_3479_, 1);
v_a_3454_ = v_a_3480_;
goto v___jp_3453_;
}
else
{
lean_object* v_a_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v_a_3481_ = lean_ctor_get(v___x_3479_, 0);
lean_inc(v_a_3481_);
lean_dec_ref_known(v___x_3479_, 1);
v___x_3482_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__1));
lean_inc(v_d_3422_);
v___x_3483_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3422_, v___x_3482_);
if (lean_obj_tag(v___x_3483_) == 0)
{
lean_object* v_a_3484_; 
lean_dec(v_a_3481_);
v_a_3484_ = lean_ctor_get(v___x_3483_, 0);
lean_inc(v_a_3484_);
lean_dec_ref_known(v___x_3483_, 1);
v_a_3454_ = v_a_3484_;
goto v___jp_3453_;
}
else
{
lean_object* v_a_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v_a_3485_ = lean_ctor_get(v___x_3483_, 0);
lean_inc(v_a_3485_);
lean_dec_ref_known(v___x_3483_, 1);
v___x_3486_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__2));
lean_inc(v_d_3422_);
v___x_3487_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3422_, v___x_3486_);
if (lean_obj_tag(v___x_3487_) == 0)
{
lean_object* v_a_3488_; 
lean_dec(v_a_3485_);
lean_dec(v_a_3481_);
v_a_3488_ = lean_ctor_get(v___x_3487_, 0);
lean_inc(v_a_3488_);
lean_dec_ref_known(v___x_3487_, 1);
v_a_3454_ = v_a_3488_;
goto v___jp_3453_;
}
else
{
lean_object* v_a_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v_a_3489_ = lean_ctor_get(v___x_3487_, 0);
lean_inc(v_a_3489_);
lean_dec_ref_known(v___x_3487_, 1);
v___x_3490_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__3));
lean_inc(v_d_3422_);
v___x_3491_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3422_, v___x_3490_);
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v_a_3492_; 
lean_dec(v_a_3489_);
lean_dec(v_a_3485_);
lean_dec(v_a_3481_);
v_a_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3491_, 1);
v_a_3454_ = v_a_3492_;
goto v___jp_3453_;
}
else
{
lean_object* v_a_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; 
v_a_3493_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3493_);
lean_dec_ref_known(v___x_3491_, 1);
v___x_3494_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__4));
lean_inc(v_d_3422_);
v___x_3495_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3422_, v___x_3494_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; 
lean_dec(v_a_3493_);
lean_dec(v_a_3489_);
lean_dec(v_a_3485_);
lean_dec(v_a_3481_);
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3496_);
lean_dec_ref_known(v___x_3495_, 1);
v_a_3454_ = v_a_3496_;
goto v___jp_3453_;
}
else
{
lean_object* v_a_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; 
v_a_3497_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3497_);
lean_dec_ref_known(v___x_3495_, 1);
v___x_3498_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__5));
lean_inc(v_d_3422_);
v___x_3499_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3422_, v___x_3498_);
if (lean_obj_tag(v___x_3499_) == 0)
{
lean_object* v_a_3500_; 
lean_dec(v_a_3497_);
lean_dec(v_a_3493_);
lean_dec(v_a_3489_);
lean_dec(v_a_3485_);
lean_dec(v_a_3481_);
v_a_3500_ = lean_ctor_get(v___x_3499_, 0);
lean_inc(v_a_3500_);
lean_dec_ref_known(v___x_3499_, 1);
v_a_3454_ = v_a_3500_;
goto v___jp_3453_;
}
else
{
lean_object* v_a_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v_a_3501_ = lean_ctor_get(v___x_3499_, 0);
lean_inc(v_a_3501_);
lean_dec_ref_known(v___x_3499_, 1);
v___x_3502_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__6));
lean_inc(v_d_3422_);
v___x_3503_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3422_, v___x_3502_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; 
lean_dec(v_a_3501_);
lean_dec(v_a_3497_);
lean_dec(v_a_3493_);
lean_dec(v_a_3489_);
lean_dec(v_a_3485_);
lean_dec(v_a_3481_);
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3504_);
lean_dec_ref_known(v___x_3503_, 1);
v_a_3454_ = v_a_3504_;
goto v___jp_3453_;
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; 
v_a_3505_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3505_);
lean_dec_ref_known(v___x_3503_, 1);
v___x_3506_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__7));
lean_inc(v_d_3422_);
v___x_3507_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3422_, v___x_3506_);
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v_a_3508_; 
lean_dec(v_a_3505_);
lean_dec(v_a_3501_);
lean_dec(v_a_3497_);
lean_dec(v_a_3493_);
lean_dec(v_a_3489_);
lean_dec(v_a_3485_);
lean_dec(v_a_3481_);
v_a_3508_ = lean_ctor_get(v___x_3507_, 0);
lean_inc(v_a_3508_);
lean_dec_ref_known(v___x_3507_, 1);
v_a_3454_ = v_a_3508_;
goto v___jp_3453_;
}
else
{
lean_object* v_a_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3525_; 
lean_dec(v_d_3422_);
v_a_3509_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3525_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3525_ == 0)
{
v___x_3511_ = v___x_3507_;
v_isShared_3512_ = v_isSharedCheck_3525_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_a_3509_);
lean_dec(v___x_3507_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3525_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
lean_object* v___x_3513_; double v___x_3514_; double v___x_3515_; double v___x_3516_; double v___x_3517_; double v___x_3518_; double v___x_3519_; double v___x_3520_; double v___x_3521_; lean_object* v___x_3523_; 
v___x_3513_ = lean_alloc_ctor(0, 0, 64);
v___x_3514_ = lean_unbox_float(v_a_3481_);
lean_dec(v_a_3481_);
lean_ctor_set_float(v___x_3513_, 0, v___x_3514_);
v___x_3515_ = lean_unbox_float(v_a_3485_);
lean_dec(v_a_3485_);
lean_ctor_set_float(v___x_3513_, 8, v___x_3515_);
v___x_3516_ = lean_unbox_float(v_a_3489_);
lean_dec(v_a_3489_);
lean_ctor_set_float(v___x_3513_, 16, v___x_3516_);
v___x_3517_ = lean_unbox_float(v_a_3493_);
lean_dec(v_a_3493_);
lean_ctor_set_float(v___x_3513_, 24, v___x_3517_);
v___x_3518_ = lean_unbox_float(v_a_3497_);
lean_dec(v_a_3497_);
lean_ctor_set_float(v___x_3513_, 32, v___x_3518_);
v___x_3519_ = lean_unbox_float(v_a_3501_);
lean_dec(v_a_3501_);
lean_ctor_set_float(v___x_3513_, 40, v___x_3519_);
v___x_3520_ = lean_unbox_float(v_a_3505_);
lean_dec(v_a_3505_);
lean_ctor_set_float(v___x_3513_, 48, v___x_3520_);
v___x_3521_ = lean_unbox_float(v_a_3509_);
lean_dec(v_a_3509_);
lean_ctor_set_float(v___x_3513_, 56, v___x_3521_);
if (v_isShared_3512_ == 0)
{
lean_ctor_set_tag(v___x_3511_, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3513_);
v___x_3523_ = v___x_3511_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v___x_3513_);
v___x_3523_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
return v___x_3523_;
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
v___jp_3424_:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3427_ = lean_string_append(v___y_3425_, v___y_3426_);
lean_dec_ref(v___y_3426_);
v___x_3428_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3427_);
v___x_3429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3429_, 0, v___x_3428_);
return v___x_3429_;
}
v___jp_3430_:
{
lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; uint8_t v___x_3444_; 
v___x_3433_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_3434_ = lean_string_append(v___x_3433_, v_context_3421_);
v___x_3435_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_3436_ = lean_string_append(v___x_3434_, v___x_3435_);
v___x_3437_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___closed__1));
v___x_3438_ = lean_string_append(v___x_3436_, v___x_3437_);
v___x_3439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_3440_ = lean_string_append(v___x_3438_, v___x_3439_);
v___x_3441_ = lean_string_append(v___x_3440_, v_received_3432_);
lean_dec_ref(v_received_3432_);
v___x_3442_ = lean_string_utf8_byte_size(v___y_3431_);
v___x_3443_ = lean_unsigned_to_nat(0u);
v___x_3444_ = lean_nat_dec_eq(v___x_3442_, v___x_3443_);
if (v___x_3444_ == 0)
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3445_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__1));
v___x_3446_ = lean_string_append(v___x_3445_, v___y_3431_);
lean_dec_ref(v___y_3431_);
v___x_3447_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__2));
v___x_3448_ = lean_string_append(v___x_3446_, v___x_3447_);
v___y_3425_ = v___x_3441_;
v___y_3426_ = v___x_3448_;
goto v___jp_3424_;
}
else
{
lean_object* v___x_3449_; 
lean_dec_ref(v___y_3431_);
v___x_3449_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___y_3425_ = v___x_3441_;
v___y_3426_ = v___x_3449_;
goto v___jp_3424_;
}
}
v___jp_3450_:
{
lean_object* v___x_3452_; 
v___x_3452_ = l_Lasm_JS_Data_describe(v_d_3422_);
v___y_3431_ = v___y_3451_;
v_received_3432_ = v___x_3452_;
goto v___jp_3430_;
}
v___jp_3453_:
{
if (lean_obj_tag(v_d_3422_) == 9)
{
lean_object* v_value_3455_; lean_object* v_description_3456_; lean_object* v___x_3457_; uint8_t v___x_3458_; 
v_value_3455_ = lean_ctor_get(v_d_3422_, 0);
v_description_3456_ = lean_ctor_get(v_d_3422_, 1);
v___x_3457_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_3458_ = lean_string_dec_eq(v_description_3456_, v___x_3457_);
if (v___x_3458_ == 0)
{
v___y_3451_ = v_a_3454_;
goto v___jp_3450_;
}
else
{
lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3475_; 
lean_inc(v_value_3455_);
v_isSharedCheck_3475_ = !lean_is_exclusive(v_d_3422_);
if (v_isSharedCheck_3475_ == 0)
{
lean_object* v_unused_3476_; lean_object* v_unused_3477_; 
v_unused_3476_ = lean_ctor_get(v_d_3422_, 1);
lean_dec(v_unused_3476_);
v_unused_3477_ = lean_ctor_get(v_d_3422_, 0);
lean_dec(v_unused_3477_);
v___x_3460_ = v_d_3422_;
v_isShared_3461_ = v_isSharedCheck_3475_;
goto v_resetjp_3459_;
}
else
{
lean_dec(v_d_3422_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3475_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
uint32_t v___x_3462_; uint64_t v___x_3463_; lean_object* v___x_3465_; 
v___x_3462_ = 206;
v___x_3463_ = 0ULL;
lean_inc(v_value_3455_);
if (v_isShared_3461_ == 0)
{
lean_ctor_set(v___x_3460_, 1, v___x_3457_);
v___x_3465_ = v___x_3460_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_value_3455_);
lean_ctor_set(v_reuseFailAlloc_3474_, 1, v___x_3457_);
v___x_3465_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
uint32_t v___x_3466_; lean_object* v___x_3467_; 
v___x_3466_ = lasm_js_value_handle(v_value_3455_);
lean_dec(v_value_3455_);
v___x_3467_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3462_, v___x_3463_, v___x_3465_, v___x_3466_);
lean_dec_ref(v___x_3465_);
if (lean_obj_tag(v___x_3467_) == 0)
{
lean_object* v_a_3468_; uint8_t v___x_3469_; 
v_a_3468_ = lean_ctor_get(v___x_3467_, 0);
lean_inc(v_a_3468_);
lean_dec_ref_known(v___x_3467_, 1);
v___x_3469_ = lean_string_validate_utf8(v_a_3468_);
if (v___x_3469_ == 0)
{
lean_object* v___x_3470_; lean_object* v___x_3471_; 
lean_dec(v_a_3468_);
v___x_3470_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_3471_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_3470_);
v___y_3431_ = v_a_3454_;
v_received_3432_ = v___x_3471_;
goto v___jp_3430_;
}
else
{
lean_object* v___x_3472_; 
v___x_3472_ = lean_string_from_utf8_unchecked(v_a_3468_);
v___y_3431_ = v_a_3454_;
v_received_3432_ = v___x_3472_;
goto v___jp_3430_;
}
}
else
{
lean_object* v___x_3473_; 
lean_dec_ref_known(v___x_3467_, 1);
v___x_3473_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v___y_3431_ = v_a_3454_;
v_received_3432_ = v___x_3473_;
goto v___jp_3430_;
}
}
}
}
}
else
{
v___y_3451_ = v_a_3454_;
goto v___jp_3450_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0___boxed(lean_object* v_context_3526_, lean_object* v_d_3527_, lean_object* v_a_3528_){
_start:
{
lean_object* v_res_3529_; 
v_res_3529_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0(v_context_3526_, v_d_3527_);
lean_dec_ref(v_context_3526_);
return v_res_3529_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0(lean_object* v_b_3530_, lean_object* v_args_3531_, uint8_t v_await_3532_){
_start:
{
uint64_t v___y_3535_; uint64_t v___y_3536_; uint64_t v___x_3579_; uint64_t v___y_3581_; 
v___x_3579_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_3532_ == 0)
{
uint64_t v___x_3586_; 
v___x_3586_ = 0ULL;
v___y_3581_ = v___x_3586_;
goto v___jp_3580_;
}
else
{
uint64_t v___x_3587_; 
v___x_3587_ = 2ULL;
v___y_3581_ = v___x_3587_;
goto v___jp_3580_;
}
v___jp_3534_:
{
uint64_t v_flags_3537_; uint32_t v___x_3538_; lean_object* v___x_3539_; uint32_t v___x_3540_; lean_object* v___x_3541_; 
v_flags_3537_ = lean_uint64_lor(v___y_3535_, v___y_3536_);
v___x_3538_ = 214;
v___x_3539_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3530_, v_args_3531_);
v___x_3540_ = 0;
v___x_3541_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3538_, v_flags_3537_, v___x_3539_, v___x_3540_);
lean_dec(v___x_3539_);
if (lean_obj_tag(v___x_3541_) == 0)
{
if (lean_obj_tag(v___x_3541_) == 0)
{
lean_object* v_a_3542_; lean_object* v___x_3543_; 
v_a_3542_ = lean_ctor_get(v___x_3541_, 0);
lean_inc(v_a_3542_);
lean_dec_ref_known(v___x_3541_, 1);
v___x_3543_ = l_Lasm_JS_Wire_decode(v_a_3542_);
lean_dec(v_a_3542_);
if (lean_obj_tag(v___x_3543_) == 0)
{
lean_object* v_a_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; 
v_a_3544_ = lean_ctor_get(v___x_3543_, 0);
lean_inc(v_a_3544_);
lean_dec_ref_known(v___x_3543_, 1);
v___x_3545_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3530_);
v___x_3546_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0(v___x_3545_, v_a_3544_);
lean_dec_ref(v___x_3545_);
return v___x_3546_;
}
else
{
lean_object* v_a_3547_; lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3554_; 
v_a_3547_ = lean_ctor_get(v___x_3543_, 0);
v_isSharedCheck_3554_ = !lean_is_exclusive(v___x_3543_);
if (v_isSharedCheck_3554_ == 0)
{
v___x_3549_ = v___x_3543_;
v_isShared_3550_ = v_isSharedCheck_3554_;
goto v_resetjp_3548_;
}
else
{
lean_inc(v_a_3547_);
lean_dec(v___x_3543_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3554_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
lean_object* v___x_3552_; 
if (v_isShared_3550_ == 0)
{
v___x_3552_ = v___x_3549_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v_a_3547_);
v___x_3552_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
return v___x_3552_;
}
}
}
}
else
{
lean_object* v_a_3555_; lean_object* v___x_3557_; uint8_t v_isShared_3558_; uint8_t v_isSharedCheck_3562_; 
v_a_3555_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3562_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3562_ == 0)
{
v___x_3557_ = v___x_3541_;
v_isShared_3558_ = v_isSharedCheck_3562_;
goto v_resetjp_3556_;
}
else
{
lean_inc(v_a_3555_);
lean_dec(v___x_3541_);
v___x_3557_ = lean_box(0);
v_isShared_3558_ = v_isSharedCheck_3562_;
goto v_resetjp_3556_;
}
v_resetjp_3556_:
{
lean_object* v___x_3560_; 
if (v_isShared_3558_ == 0)
{
lean_ctor_set_tag(v___x_3557_, 1);
v___x_3560_ = v___x_3557_;
goto v_reusejp_3559_;
}
else
{
lean_object* v_reuseFailAlloc_3561_; 
v_reuseFailAlloc_3561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3561_, 0, v_a_3555_);
v___x_3560_ = v_reuseFailAlloc_3561_;
goto v_reusejp_3559_;
}
v_reusejp_3559_:
{
return v___x_3560_;
}
}
}
}
else
{
lean_object* v_a_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3578_; 
v_a_3563_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3565_ = v___x_3541_;
v_isShared_3566_ = v_isSharedCheck_3578_;
goto v_resetjp_3564_;
}
else
{
lean_inc(v_a_3563_);
lean_dec(v___x_3541_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3578_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3576_; 
v___x_3567_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_3568_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3530_);
v___x_3569_ = lean_string_append(v___x_3567_, v___x_3568_);
lean_dec_ref(v___x_3568_);
v___x_3570_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_3571_ = lean_string_append(v___x_3569_, v___x_3570_);
v___x_3572_ = lean_io_error_to_string(v_a_3563_);
v___x_3573_ = lean_string_append(v___x_3571_, v___x_3572_);
lean_dec_ref(v___x_3572_);
v___x_3574_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3574_, 0, v___x_3573_);
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 0, v___x_3574_);
v___x_3576_ = v___x_3565_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v___x_3574_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
return v___x_3576_;
}
}
}
}
v___jp_3580_:
{
uint8_t v_construct_3582_; uint64_t v___x_3583_; 
v_construct_3582_ = lean_ctor_get_uint8(v_b_3530_, sizeof(void*)*4);
v___x_3583_ = lean_uint64_lor(v___x_3579_, v___y_3581_);
if (v_construct_3582_ == 0)
{
uint64_t v___x_3584_; 
v___x_3584_ = 0ULL;
v___y_3535_ = v___x_3583_;
v___y_3536_ = v___x_3584_;
goto v___jp_3534_;
}
else
{
uint64_t v___x_3585_; 
v___x_3585_ = 4ULL;
v___y_3535_ = v___x_3583_;
v___y_3536_ = v___x_3585_;
goto v___jp_3534_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0___boxed(lean_object* v_b_3588_, lean_object* v_args_3589_, lean_object* v_await_3590_, lean_object* v_a_3591_){
_start:
{
uint8_t v_await_boxed_3592_; lean_object* v_res_3593_; 
v_await_boxed_3592_ = lean_unbox(v_await_3590_);
v_res_3593_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0(v_b_3588_, v_args_3589_, v_await_boxed_3592_);
lean_dec_ref(v_b_3588_);
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_rectOf(lean_object* v_a_3602_){
_start:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; uint8_t v___x_3609_; lean_object* v___x_3610_; 
v___x_3604_ = ((lean_object*)(l_Lasm_Web_rectOf___closed__2));
v___x_3605_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_3606_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_3607_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3607_, 0, v_a_3602_);
lean_ctor_set(v___x_3607_, 1, v___x_3606_);
v___x_3608_ = lean_array_push(v___x_3605_, v___x_3607_);
v___x_3609_ = 1;
v___x_3610_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0(v___x_3604_, v___x_3608_, v___x_3609_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_rectOf___boxed(lean_object* v_a_3611_, lean_object* v_a_3612_){
_start:
{
lean_object* v_res_3613_; 
v_res_3613_ = l_Lasm_Web_rectOf(v_a_3611_);
return v_res_3613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_appendChild(lean_object* v_parent_3614_, lean_object* v_child_3615_){
_start:
{
lean_object* v___x_3617_; 
v___x_3617_ = l_Lasm_Web_Raw_appendChild(v_parent_3614_, v_child_3615_);
return v___x_3617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_appendChild___boxed(lean_object* v_parent_3618_, lean_object* v_child_3619_, lean_object* v_a_3620_){
_start:
{
lean_object* v_res_3621_; 
v_res_3621_ = l_Lasm_Web_Node_appendChild(v_parent_3618_, v_child_3619_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_append(lean_object* v_parent_3622_, lean_object* v_children_3623_){
_start:
{
lean_object* v___x_3625_; 
v___x_3625_ = l_Lasm_Web_Raw_append(v_parent_3622_, v_children_3623_);
return v___x_3625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_append___boxed(lean_object* v_parent_3626_, lean_object* v_children_3627_, lean_object* v_a_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l_Lasm_Web_Node_append(v_parent_3626_, v_children_3627_);
return v_res_3629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_insertBefore(lean_object* v_parent_3630_, lean_object* v_child_3631_, lean_object* v_reference_3632_){
_start:
{
lean_object* v___x_3634_; 
v___x_3634_ = l_Lasm_Web_Raw_insertBefore(v_parent_3630_, v_child_3631_, v_reference_3632_);
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_insertBefore___boxed(lean_object* v_parent_3635_, lean_object* v_child_3636_, lean_object* v_reference_3637_, lean_object* v_a_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = l_Lasm_Web_Node_insertBefore(v_parent_3635_, v_child_3636_, v_reference_3637_);
lean_dec(v_reference_3637_);
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_removeChild(lean_object* v_parent_3640_, lean_object* v_child_3641_){
_start:
{
lean_object* v___x_3643_; 
v___x_3643_ = l_Lasm_Web_Raw_removeChild(v_parent_3640_, v_child_3641_);
return v___x_3643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_removeChild___boxed(lean_object* v_parent_3644_, lean_object* v_child_3645_, lean_object* v_a_3646_){
_start:
{
lean_object* v_res_3647_; 
v_res_3647_ = l_Lasm_Web_Node_removeChild(v_parent_3644_, v_child_3645_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_remove(lean_object* v_node_3648_){
_start:
{
lean_object* v___x_3650_; 
v___x_3650_ = l_Lasm_Web_Raw_removeNode(v_node_3648_);
return v___x_3650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_remove___boxed(lean_object* v_node_3651_, lean_object* v_a_3652_){
_start:
{
lean_object* v_res_3653_; 
v_res_3653_ = l_Lasm_Web_Node_remove(v_node_3651_);
return v_res_3653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceWith(lean_object* v_node_3654_, lean_object* v_replacement_3655_){
_start:
{
lean_object* v___x_3657_; 
v___x_3657_ = l_Lasm_Web_Raw_replaceNode(v_node_3654_, v_replacement_3655_);
return v___x_3657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceWith___boxed(lean_object* v_node_3658_, lean_object* v_replacement_3659_, lean_object* v_a_3660_){
_start:
{
lean_object* v_res_3661_; 
v_res_3661_ = l_Lasm_Web_Node_replaceWith(v_node_3658_, v_replacement_3659_);
return v_res_3661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceChildren(lean_object* v_parent_3662_, lean_object* v_children_3663_){
_start:
{
lean_object* v___x_3665_; 
v___x_3665_ = l_Lasm_Web_Raw_replaceChildren(v_parent_3662_, v_children_3663_);
return v___x_3665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceChildren___boxed(lean_object* v_parent_3666_, lean_object* v_children_3667_, lean_object* v_a_3668_){
_start:
{
lean_object* v_res_3669_; 
v_res_3669_ = l_Lasm_Web_Node_replaceChildren(v_parent_3666_, v_children_3667_);
return v_res_3669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_textContent(lean_object* v_node_3670_){
_start:
{
lean_object* v___x_3672_; 
v___x_3672_ = l_Lasm_Web_Raw_getText(v_node_3670_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_textContent___boxed(lean_object* v_node_3673_, lean_object* v_a_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l_Lasm_Web_Node_textContent(v_node_3673_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_setTextContent(lean_object* v_node_3676_, lean_object* v_text_3677_){
_start:
{
lean_object* v___x_3679_; 
v___x_3679_ = l_Lasm_Web_Raw_setText(v_node_3676_, v_text_3677_);
return v___x_3679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_setTextContent___boxed(lean_object* v_node_3680_, lean_object* v_text_3681_, lean_object* v_a_3682_){
_start:
{
lean_object* v_res_3683_; 
v_res_3683_ = l_Lasm_Web_Node_setTextContent(v_node_3680_, v_text_3681_);
return v_res_3683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentNode(lean_object* v_node_3684_){
_start:
{
lean_object* v___x_3686_; 
v___x_3686_ = l_Lasm_Web_Raw_parentNode(v_node_3684_);
return v___x_3686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentNode___boxed(lean_object* v_node_3687_, lean_object* v_a_3688_){
_start:
{
lean_object* v_res_3689_; 
v_res_3689_ = l_Lasm_Web_Node_parentNode(v_node_3687_);
return v_res_3689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentElement(lean_object* v_node_3690_){
_start:
{
lean_object* v___x_3692_; 
v___x_3692_ = l_Lasm_Web_Raw_parentElement(v_node_3690_);
return v___x_3692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentElement___boxed(lean_object* v_node_3693_, lean_object* v_a_3694_){
_start:
{
lean_object* v_res_3695_; 
v_res_3695_ = l_Lasm_Web_Node_parentElement(v_node_3693_);
return v_res_3695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_firstChild(lean_object* v_node_3696_){
_start:
{
lean_object* v___x_3698_; 
v___x_3698_ = l_Lasm_Web_Raw_firstChild(v_node_3696_);
return v___x_3698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_firstChild___boxed(lean_object* v_node_3699_, lean_object* v_a_3700_){
_start:
{
lean_object* v_res_3701_; 
v_res_3701_ = l_Lasm_Web_Node_firstChild(v_node_3699_);
return v_res_3701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_lastChild(lean_object* v_node_3702_){
_start:
{
lean_object* v___x_3704_; 
v___x_3704_ = l_Lasm_Web_Raw_lastChild(v_node_3702_);
return v___x_3704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_lastChild___boxed(lean_object* v_node_3705_, lean_object* v_a_3706_){
_start:
{
lean_object* v_res_3707_; 
v_res_3707_ = l_Lasm_Web_Node_lastChild(v_node_3705_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nextSibling(lean_object* v_node_3708_){
_start:
{
lean_object* v___x_3710_; 
v___x_3710_ = l_Lasm_Web_Raw_nextSibling(v_node_3708_);
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nextSibling___boxed(lean_object* v_node_3711_, lean_object* v_a_3712_){
_start:
{
lean_object* v_res_3713_; 
v_res_3713_ = l_Lasm_Web_Node_nextSibling(v_node_3711_);
return v_res_3713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_previousSibling(lean_object* v_node_3714_){
_start:
{
lean_object* v___x_3716_; 
v___x_3716_ = l_Lasm_Web_Raw_previousSibling(v_node_3714_);
return v___x_3716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_previousSibling___boxed(lean_object* v_node_3717_, lean_object* v_a_3718_){
_start:
{
lean_object* v_res_3719_; 
v_res_3719_ = l_Lasm_Web_Node_previousSibling(v_node_3717_);
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_childNodes(lean_object* v_node_3720_){
_start:
{
lean_object* v___x_3722_; 
v___x_3722_ = l_Lasm_Web_Raw_childNodes(v_node_3720_);
return v___x_3722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_childNodes___boxed(lean_object* v_node_3723_, lean_object* v_a_3724_){
_start:
{
lean_object* v_res_3725_; 
v_res_3725_ = l_Lasm_Web_Node_childNodes(v_node_3723_);
return v_res_3725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_contains(lean_object* v_node_3726_, lean_object* v_other_3727_){
_start:
{
lean_object* v___x_3729_; 
v___x_3729_ = l_Lasm_Web_Raw_contains(v_node_3726_, v_other_3727_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_contains___boxed(lean_object* v_node_3730_, lean_object* v_other_3731_, lean_object* v_a_3732_){
_start:
{
lean_object* v_res_3733_; 
v_res_3733_ = l_Lasm_Web_Node_contains(v_node_3730_, v_other_3731_);
return v_res_3733_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_cloneNode(lean_object* v_node_3734_, uint8_t v_deep_3735_){
_start:
{
lean_object* v___x_3737_; 
v___x_3737_ = l_Lasm_Web_Raw_cloneNode(v_node_3734_, v_deep_3735_);
return v___x_3737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_cloneNode___boxed(lean_object* v_node_3738_, lean_object* v_deep_3739_, lean_object* v_a_3740_){
_start:
{
uint8_t v_deep_boxed_3741_; lean_object* v_res_3742_; 
v_deep_boxed_3741_ = lean_unbox(v_deep_3739_);
v_res_3742_ = l_Lasm_Web_Node_cloneNode(v_node_3738_, v_deep_boxed_3741_);
return v_res_3742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_isConnected(lean_object* v_node_3743_){
_start:
{
lean_object* v___x_3745_; 
v___x_3745_ = l_Lasm_Web_Raw_isConnected(v_node_3743_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_isConnected___boxed(lean_object* v_node_3746_, lean_object* v_a_3747_){
_start:
{
lean_object* v_res_3748_; 
v_res_3748_ = l_Lasm_Web_Node_isConnected(v_node_3746_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nodeName(lean_object* v_node_3749_){
_start:
{
lean_object* v___x_3751_; 
v___x_3751_ = l_Lasm_Web_Raw_nodeName(v_node_3749_);
return v___x_3751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nodeName___boxed(lean_object* v_node_3752_, lean_object* v_a_3753_){
_start:
{
lean_object* v_res_3754_; 
v_res_3754_ = l_Lasm_Web_Node_nodeName(v_node_3752_);
return v_res_3754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelector(lean_object* v_node_3755_, lean_object* v_selector_3756_){
_start:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; 
v___x_3758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3758_, 0, v_node_3755_);
v___x_3759_ = l_Lasm_Web_querySelectorIn(v_selector_3756_, v___x_3758_);
lean_dec_ref_known(v___x_3758_, 1);
return v___x_3759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelector___boxed(lean_object* v_node_3760_, lean_object* v_selector_3761_, lean_object* v_a_3762_){
_start:
{
lean_object* v_res_3763_; 
v_res_3763_ = l_Lasm_Web_Node_querySelector(v_node_3760_, v_selector_3761_);
return v_res_3763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelectorAll(lean_object* v_node_3764_, lean_object* v_selector_3765_){
_start:
{
lean_object* v___x_3767_; lean_object* v___x_3768_; 
v___x_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3767_, 0, v_node_3764_);
v___x_3768_ = l_Lasm_Web_querySelectorAllIn(v_selector_3765_, v___x_3767_);
lean_dec_ref_known(v___x_3767_, 1);
return v___x_3768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelectorAll___boxed(lean_object* v_node_3769_, lean_object* v_selector_3770_, lean_object* v_a_3771_){
_start:
{
lean_object* v_res_3772_; 
v_res_3772_ = l_Lasm_Web_Node_querySelectorAll(v_node_3769_, v_selector_3770_);
return v_res_3772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_tagName(lean_object* v_e_3773_){
_start:
{
lean_object* v___x_3775_; 
v___x_3775_ = l_Lasm_Web_Raw_tagName(v_e_3773_);
return v___x_3775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_tagName___boxed(lean_object* v_e_3776_, lean_object* v_a_3777_){
_start:
{
lean_object* v_res_3778_; 
v_res_3778_ = l_Lasm_Web_Element_tagName(v_e_3776_);
return v_res_3778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_children(lean_object* v_e_3779_){
_start:
{
lean_object* v___x_3781_; 
v___x_3781_ = l_Lasm_Web_Raw_children(v_e_3779_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_children___boxed(lean_object* v_e_3782_, lean_object* v_a_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l_Lasm_Web_Element_children(v_e_3782_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_getAttribute(lean_object* v_e_3785_, lean_object* v_name_3786_){
_start:
{
lean_object* v___x_3788_; 
v___x_3788_ = l_Lasm_Web_Raw_getAttribute(v_e_3785_, v_name_3786_);
return v___x_3788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_getAttribute___boxed(lean_object* v_e_3789_, lean_object* v_name_3790_, lean_object* v_a_3791_){
_start:
{
lean_object* v_res_3792_; 
v_res_3792_ = l_Lasm_Web_Element_getAttribute(v_e_3789_, v_name_3790_);
return v_res_3792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttribute(lean_object* v_e_3793_, lean_object* v_name_3794_, lean_object* v_value_3795_){
_start:
{
lean_object* v___x_3797_; 
v___x_3797_ = l_Lasm_Web_Raw_setAttribute(v_e_3793_, v_name_3794_, v_value_3795_);
return v___x_3797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttribute___boxed(lean_object* v_e_3798_, lean_object* v_name_3799_, lean_object* v_value_3800_, lean_object* v_a_3801_){
_start:
{
lean_object* v_res_3802_; 
v_res_3802_ = l_Lasm_Web_Element_setAttribute(v_e_3798_, v_name_3799_, v_value_3800_);
return v_res_3802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttributes(lean_object* v_e_3803_, lean_object* v_attributes_3804_){
_start:
{
lean_object* v___x_3806_; 
v___x_3806_ = l_Lasm_Web_Raw_setAttributes(v_e_3803_, v_attributes_3804_);
return v___x_3806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttributes___boxed(lean_object* v_e_3807_, lean_object* v_attributes_3808_, lean_object* v_a_3809_){
_start:
{
lean_object* v_res_3810_; 
v_res_3810_ = l_Lasm_Web_Element_setAttributes(v_e_3807_, v_attributes_3808_);
return v_res_3810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeAttribute(lean_object* v_e_3811_, lean_object* v_name_3812_){
_start:
{
lean_object* v___x_3814_; 
v___x_3814_ = l_Lasm_Web_Raw_removeAttribute(v_e_3811_, v_name_3812_);
return v___x_3814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeAttribute___boxed(lean_object* v_e_3815_, lean_object* v_name_3816_, lean_object* v_a_3817_){
_start:
{
lean_object* v_res_3818_; 
v_res_3818_ = l_Lasm_Web_Element_removeAttribute(v_e_3815_, v_name_3816_);
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasAttribute(lean_object* v_e_3819_, lean_object* v_name_3820_){
_start:
{
lean_object* v___x_3822_; 
v___x_3822_ = l_Lasm_Web_Raw_hasAttribute(v_e_3819_, v_name_3820_);
return v___x_3822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasAttribute___boxed(lean_object* v_e_3823_, lean_object* v_name_3824_, lean_object* v_a_3825_){
_start:
{
lean_object* v_res_3826_; 
v_res_3826_ = l_Lasm_Web_Element_hasAttribute(v_e_3823_, v_name_3824_);
return v_res_3826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleAttribute(lean_object* v_e_3827_, lean_object* v_name_3828_, lean_object* v_force_3829_){
_start:
{
lean_object* v___x_3831_; 
v___x_3831_ = l_Lasm_Web_Raw_toggleAttribute(v_e_3827_, v_name_3828_, v_force_3829_);
return v___x_3831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleAttribute___boxed(lean_object* v_e_3832_, lean_object* v_name_3833_, lean_object* v_force_3834_, lean_object* v_a_3835_){
_start:
{
lean_object* v_res_3836_; 
v_res_3836_ = l_Lasm_Web_Element_toggleAttribute(v_e_3832_, v_name_3833_, v_force_3834_);
lean_dec(v_force_3834_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_id(lean_object* v_e_3838_){
_start:
{
lean_object* v___x_3840_; lean_object* v___x_3841_; 
v___x_3840_ = ((lean_object*)(l_Lasm_Web_Element_id___closed__0));
v___x_3841_ = l_Lasm_Web_Raw_getAttribute(v_e_3838_, v___x_3840_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v_a_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3854_; 
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3844_ = v___x_3841_;
v_isShared_3845_ = v_isSharedCheck_3854_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_a_3842_);
lean_dec(v___x_3841_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3854_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
if (lean_obj_tag(v_a_3842_) == 0)
{
lean_object* v___x_3846_; lean_object* v___x_3848_; 
v___x_3846_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (v_isShared_3845_ == 0)
{
lean_ctor_set(v___x_3844_, 0, v___x_3846_);
v___x_3848_ = v___x_3844_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v___x_3846_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
else
{
lean_object* v_val_3850_; lean_object* v___x_3852_; 
v_val_3850_ = lean_ctor_get(v_a_3842_, 0);
lean_inc(v_val_3850_);
lean_dec_ref_known(v_a_3842_, 1);
if (v_isShared_3845_ == 0)
{
lean_ctor_set(v___x_3844_, 0, v_val_3850_);
v___x_3852_ = v___x_3844_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v_val_3850_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
}
else
{
lean_object* v_a_3855_; lean_object* v___x_3857_; uint8_t v_isShared_3858_; uint8_t v_isSharedCheck_3862_; 
v_a_3855_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3862_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3862_ == 0)
{
v___x_3857_ = v___x_3841_;
v_isShared_3858_ = v_isSharedCheck_3862_;
goto v_resetjp_3856_;
}
else
{
lean_inc(v_a_3855_);
lean_dec(v___x_3841_);
v___x_3857_ = lean_box(0);
v_isShared_3858_ = v_isSharedCheck_3862_;
goto v_resetjp_3856_;
}
v_resetjp_3856_:
{
lean_object* v___x_3860_; 
if (v_isShared_3858_ == 0)
{
v___x_3860_ = v___x_3857_;
goto v_reusejp_3859_;
}
else
{
lean_object* v_reuseFailAlloc_3861_; 
v_reuseFailAlloc_3861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3861_, 0, v_a_3855_);
v___x_3860_ = v_reuseFailAlloc_3861_;
goto v_reusejp_3859_;
}
v_reusejp_3859_:
{
return v___x_3860_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_id___boxed(lean_object* v_e_3863_, lean_object* v_a_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_Lasm_Web_Element_id(v_e_3863_);
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setId(lean_object* v_e_3866_, lean_object* v_id_3867_){
_start:
{
lean_object* v___x_3869_; lean_object* v___x_3870_; 
v___x_3869_ = ((lean_object*)(l_Lasm_Web_Element_id___closed__0));
v___x_3870_ = l_Lasm_Web_Raw_setAttribute(v_e_3866_, v___x_3869_, v_id_3867_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setId___boxed(lean_object* v_e_3871_, lean_object* v_id_3872_, lean_object* v_a_3873_){
_start:
{
lean_object* v_res_3874_; 
v_res_3874_ = l_Lasm_Web_Element_setId(v_e_3871_, v_id_3872_);
return v_res_3874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_data(lean_object* v_e_3876_, lean_object* v_key_3877_){
_start:
{
lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; 
v___x_3879_ = ((lean_object*)(l_Lasm_Web_Element_data___closed__0));
v___x_3880_ = lean_string_append(v___x_3879_, v_key_3877_);
v___x_3881_ = l_Lasm_Web_Raw_getAttribute(v_e_3876_, v___x_3880_);
return v___x_3881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_data___boxed(lean_object* v_e_3882_, lean_object* v_key_3883_, lean_object* v_a_3884_){
_start:
{
lean_object* v_res_3885_; 
v_res_3885_ = l_Lasm_Web_Element_data(v_e_3882_, v_key_3883_);
lean_dec_ref(v_key_3883_);
return v_res_3885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setData(lean_object* v_e_3886_, lean_object* v_key_3887_, lean_object* v_value_3888_){
_start:
{
lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3890_ = ((lean_object*)(l_Lasm_Web_Element_data___closed__0));
v___x_3891_ = lean_string_append(v___x_3890_, v_key_3887_);
v___x_3892_ = l_Lasm_Web_Raw_setAttribute(v_e_3886_, v___x_3891_, v_value_3888_);
return v___x_3892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setData___boxed(lean_object* v_e_3893_, lean_object* v_key_3894_, lean_object* v_value_3895_, lean_object* v_a_3896_){
_start:
{
lean_object* v_res_3897_; 
v_res_3897_ = l_Lasm_Web_Element_setData(v_e_3893_, v_key_3894_, v_value_3895_);
lean_dec_ref(v_key_3894_);
return v_res_3897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_addClass(lean_object* v_e_3898_, lean_object* v_names_3899_){
_start:
{
lean_object* v___x_3901_; 
v___x_3901_ = l_Lasm_Web_Raw_classAdd(v_e_3898_, v_names_3899_);
return v___x_3901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_addClass___boxed(lean_object* v_e_3902_, lean_object* v_names_3903_, lean_object* v_a_3904_){
_start:
{
lean_object* v_res_3905_; 
v_res_3905_ = l_Lasm_Web_Element_addClass(v_e_3902_, v_names_3903_);
return v_res_3905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeClass(lean_object* v_e_3906_, lean_object* v_names_3907_){
_start:
{
lean_object* v___x_3909_; 
v___x_3909_ = l_Lasm_Web_Raw_classRemove(v_e_3906_, v_names_3907_);
return v___x_3909_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeClass___boxed(lean_object* v_e_3910_, lean_object* v_names_3911_, lean_object* v_a_3912_){
_start:
{
lean_object* v_res_3913_; 
v_res_3913_ = l_Lasm_Web_Element_removeClass(v_e_3910_, v_names_3911_);
return v_res_3913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleClass(lean_object* v_e_3914_, lean_object* v_name_3915_, lean_object* v_force_3916_){
_start:
{
lean_object* v___x_3918_; 
v___x_3918_ = l_Lasm_Web_Raw_classToggle(v_e_3914_, v_name_3915_, v_force_3916_);
return v___x_3918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleClass___boxed(lean_object* v_e_3919_, lean_object* v_name_3920_, lean_object* v_force_3921_, lean_object* v_a_3922_){
_start:
{
lean_object* v_res_3923_; 
v_res_3923_ = l_Lasm_Web_Element_toggleClass(v_e_3919_, v_name_3920_, v_force_3921_);
lean_dec(v_force_3921_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasClass(lean_object* v_e_3924_, lean_object* v_name_3925_){
_start:
{
lean_object* v___x_3927_; 
v___x_3927_ = l_Lasm_Web_Raw_classContains(v_e_3924_, v_name_3925_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasClass___boxed(lean_object* v_e_3928_, lean_object* v_name_3929_, lean_object* v_a_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l_Lasm_Web_Element_hasClass(v_e_3928_, v_name_3929_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setClassName(lean_object* v_e_3933_, lean_object* v_names_3934_){
_start:
{
lean_object* v___x_3936_; lean_object* v___x_3937_; 
v___x_3936_ = ((lean_object*)(l_Lasm_Web_Element_setClassName___closed__0));
v___x_3937_ = l_Lasm_Web_Raw_setAttribute(v_e_3933_, v___x_3936_, v_names_3934_);
return v___x_3937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setClassName___boxed(lean_object* v_e_3938_, lean_object* v_names_3939_, lean_object* v_a_3940_){
_start:
{
lean_object* v_res_3941_; 
v_res_3941_ = l_Lasm_Web_Element_setClassName(v_e_3938_, v_names_3939_);
return v_res_3941_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyle(lean_object* v_e_3942_, lean_object* v_property_3943_, lean_object* v_value_3944_){
_start:
{
lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; 
v___x_3946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3946_, 0, v_property_3943_);
lean_ctor_set(v___x_3946_, 1, v_value_3944_);
v___x_3947_ = lean_unsigned_to_nat(1u);
v___x_3948_ = lean_mk_empty_array_with_capacity(v___x_3947_);
v___x_3949_ = lean_array_push(v___x_3948_, v___x_3946_);
v___x_3950_ = l_Lasm_Web_Raw_setStyles(v_e_3942_, v___x_3949_);
return v___x_3950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyle___boxed(lean_object* v_e_3951_, lean_object* v_property_3952_, lean_object* v_value_3953_, lean_object* v_a_3954_){
_start:
{
lean_object* v_res_3955_; 
v_res_3955_ = l_Lasm_Web_Element_setStyle(v_e_3951_, v_property_3952_, v_value_3953_);
return v_res_3955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyles(lean_object* v_e_3956_, lean_object* v_properties_3957_){
_start:
{
lean_object* v___x_3959_; 
v___x_3959_ = l_Lasm_Web_Raw_setStyles(v_e_3956_, v_properties_3957_);
return v___x_3959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyles___boxed(lean_object* v_e_3960_, lean_object* v_properties_3961_, lean_object* v_a_3962_){
_start:
{
lean_object* v_res_3963_; 
v_res_3963_ = l_Lasm_Web_Element_setStyles(v_e_3960_, v_properties_3961_);
return v_res_3963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeStyle(lean_object* v_e_3964_, lean_object* v_property_3965_){
_start:
{
lean_object* v___x_3967_; 
v___x_3967_ = l_Lasm_Web_Raw_removeStyle(v_e_3964_, v_property_3965_);
return v___x_3967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeStyle___boxed(lean_object* v_e_3968_, lean_object* v_property_3969_, lean_object* v_a_3970_){
_start:
{
lean_object* v_res_3971_; 
v_res_3971_ = l_Lasm_Web_Element_removeStyle(v_e_3968_, v_property_3969_);
return v_res_3971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_style(lean_object* v_e_3972_, lean_object* v_property_3973_){
_start:
{
lean_object* v___x_3975_; 
v___x_3975_ = l_Lasm_Web_Raw_style(v_e_3972_, v_property_3973_);
return v___x_3975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_style___boxed(lean_object* v_e_3976_, lean_object* v_property_3977_, lean_object* v_a_3978_){
_start:
{
lean_object* v_res_3979_; 
v_res_3979_ = l_Lasm_Web_Element_style(v_e_3976_, v_property_3977_);
return v_res_3979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_innerHTML(lean_object* v_e_3980_){
_start:
{
lean_object* v___x_3982_; 
v___x_3982_ = l_Lasm_Web_Raw_getInnerHTML(v_e_3980_);
return v___x_3982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_innerHTML___boxed(lean_object* v_e_3983_, lean_object* v_a_3984_){
_start:
{
lean_object* v_res_3985_; 
v_res_3985_ = l_Lasm_Web_Element_innerHTML(v_e_3983_);
return v_res_3985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setInnerHTML(lean_object* v_e_3986_, lean_object* v_html_3987_){
_start:
{
lean_object* v___x_3989_; 
v___x_3989_ = l_Lasm_Web_Raw_setInnerHTML(v_e_3986_, v_html_3987_);
return v___x_3989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setInnerHTML___boxed(lean_object* v_e_3990_, lean_object* v_html_3991_, lean_object* v_a_3992_){
_start:
{
lean_object* v_res_3993_; 
v_res_3993_ = l_Lasm_Web_Element_setInnerHTML(v_e_3990_, v_html_3991_);
return v_res_3993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_value(lean_object* v_e_3994_){
_start:
{
lean_object* v___x_3996_; 
v___x_3996_ = l_Lasm_Web_Raw_getValue(v_e_3994_);
return v___x_3996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_value___boxed(lean_object* v_e_3997_, lean_object* v_a_3998_){
_start:
{
lean_object* v_res_3999_; 
v_res_3999_ = l_Lasm_Web_Element_value(v_e_3997_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setValue(lean_object* v_e_4000_, lean_object* v_value_4001_){
_start:
{
lean_object* v___x_4003_; 
v___x_4003_ = l_Lasm_Web_Raw_setValue(v_e_4000_, v_value_4001_);
return v___x_4003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setValue___boxed(lean_object* v_e_4004_, lean_object* v_value_4005_, lean_object* v_a_4006_){
_start:
{
lean_object* v_res_4007_; 
v_res_4007_ = l_Lasm_Web_Element_setValue(v_e_4004_, v_value_4005_);
return v_res_4007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_checked(lean_object* v_e_4008_){
_start:
{
lean_object* v___x_4010_; 
v___x_4010_ = l_Lasm_Web_Raw_getChecked(v_e_4008_);
return v___x_4010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_checked___boxed(lean_object* v_e_4011_, lean_object* v_a_4012_){
_start:
{
lean_object* v_res_4013_; 
v_res_4013_ = l_Lasm_Web_Element_checked(v_e_4011_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setChecked(lean_object* v_e_4014_, uint8_t v_checked_4015_){
_start:
{
lean_object* v___x_4017_; 
v___x_4017_ = l_Lasm_Web_Raw_setChecked(v_e_4014_, v_checked_4015_);
return v___x_4017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setChecked___boxed(lean_object* v_e_4018_, lean_object* v_checked_4019_, lean_object* v_a_4020_){
_start:
{
uint8_t v_checked_boxed_4021_; lean_object* v_res_4022_; 
v_checked_boxed_4021_ = lean_unbox(v_checked_4019_);
v_res_4022_ = l_Lasm_Web_Element_setChecked(v_e_4018_, v_checked_boxed_4021_);
return v_res_4022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_focus(lean_object* v_e_4023_){
_start:
{
lean_object* v___x_4025_; 
v___x_4025_ = l_Lasm_Web_Raw_focus(v_e_4023_);
return v___x_4025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_focus___boxed(lean_object* v_e_4026_, lean_object* v_a_4027_){
_start:
{
lean_object* v_res_4028_; 
v_res_4028_ = l_Lasm_Web_Element_focus(v_e_4026_);
return v_res_4028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_blur(lean_object* v_e_4029_){
_start:
{
lean_object* v___x_4031_; 
v___x_4031_ = l_Lasm_Web_Raw_blur(v_e_4029_);
return v___x_4031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_blur___boxed(lean_object* v_e_4032_, lean_object* v_a_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_Lasm_Web_Element_blur(v_e_4032_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_click(lean_object* v_e_4035_){
_start:
{
lean_object* v___x_4037_; 
v___x_4037_ = l_Lasm_Web_Raw_click(v_e_4035_);
return v___x_4037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_click___boxed(lean_object* v_e_4038_, lean_object* v_a_4039_){
_start:
{
lean_object* v_res_4040_; 
v_res_4040_ = l_Lasm_Web_Element_click(v_e_4038_);
return v_res_4040_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_scrollIntoView(lean_object* v_e_4041_, uint8_t v_smooth_4042_){
_start:
{
lean_object* v___x_4044_; 
v___x_4044_ = l_Lasm_Web_Raw_scrollIntoView(v_e_4041_, v_smooth_4042_);
return v___x_4044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_scrollIntoView___boxed(lean_object* v_e_4045_, lean_object* v_smooth_4046_, lean_object* v_a_4047_){
_start:
{
uint8_t v_smooth_boxed_4048_; lean_object* v_res_4049_; 
v_smooth_boxed_4048_ = lean_unbox(v_smooth_4046_);
v_res_4049_ = l_Lasm_Web_Element_scrollIntoView(v_e_4045_, v_smooth_boxed_4048_);
return v_res_4049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_rect(lean_object* v_e_4050_){
_start:
{
lean_object* v___x_4052_; 
v___x_4052_ = l_Lasm_Web_rectOf(v_e_4050_);
return v___x_4052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_rect___boxed(lean_object* v_e_4053_, lean_object* v_a_4054_){
_start:
{
lean_object* v_res_4055_; 
v_res_4055_ = l_Lasm_Web_Element_rect(v_e_4053_);
return v_res_4055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___redArg(lean_object* v_e_4057_, lean_object* v_name_4058_, lean_object* v_inst_4059_){
_start:
{
lean_object* v___x_4061_; 
lean_inc_ref(v_name_4058_);
v___x_4061_ = l_Lasm_Web_Raw_getProp(v_e_4057_, v_name_4058_);
if (lean_obj_tag(v___x_4061_) == 0)
{
lean_object* v_a_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; 
v_a_4062_ = lean_ctor_get(v___x_4061_, 0);
lean_inc(v_a_4062_);
lean_dec_ref_known(v___x_4061_, 1);
v___x_4063_ = ((lean_object*)(l_Lasm_Web_Element_prop___redArg___closed__0));
v___x_4064_ = lean_string_append(v___x_4063_, v_name_4058_);
lean_dec_ref(v_name_4058_);
v___x_4065_ = l_Lasm_JS_decodeAs___redArg(v_inst_4059_, v___x_4064_, v_a_4062_);
lean_dec_ref(v___x_4064_);
return v___x_4065_;
}
else
{
lean_object* v_a_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4073_; 
lean_dec_ref(v_inst_4059_);
lean_dec_ref(v_name_4058_);
v_a_4066_ = lean_ctor_get(v___x_4061_, 0);
v_isSharedCheck_4073_ = !lean_is_exclusive(v___x_4061_);
if (v_isSharedCheck_4073_ == 0)
{
v___x_4068_ = v___x_4061_;
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_a_4066_);
lean_dec(v___x_4061_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___x_4071_; 
if (v_isShared_4069_ == 0)
{
v___x_4071_ = v___x_4068_;
goto v_reusejp_4070_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v_a_4066_);
v___x_4071_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4070_;
}
v_reusejp_4070_:
{
return v___x_4071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___redArg___boxed(lean_object* v_e_4074_, lean_object* v_name_4075_, lean_object* v_inst_4076_, lean_object* v_a_4077_){
_start:
{
lean_object* v_res_4078_; 
v_res_4078_ = l_Lasm_Web_Element_prop___redArg(v_e_4074_, v_name_4075_, v_inst_4076_);
return v_res_4078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop(lean_object* v_e_4079_, lean_object* v_name_4080_, lean_object* v_00_u03b1_4081_, lean_object* v_inst_4082_){
_start:
{
lean_object* v___x_4084_; 
v___x_4084_ = l_Lasm_Web_Element_prop___redArg(v_e_4079_, v_name_4080_, v_inst_4082_);
return v___x_4084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___boxed(lean_object* v_e_4085_, lean_object* v_name_4086_, lean_object* v_00_u03b1_4087_, lean_object* v_inst_4088_, lean_object* v_a_4089_){
_start:
{
lean_object* v_res_4090_; 
v_res_4090_ = l_Lasm_Web_Element_prop(v_e_4085_, v_name_4086_, v_00_u03b1_4087_, v_inst_4088_);
return v_res_4090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___redArg(lean_object* v_inst_4091_, lean_object* v_e_4092_, lean_object* v_name_4093_, lean_object* v_x_4094_){
_start:
{
lean_object* v___x_4096_; lean_object* v___x_4097_; 
v___x_4096_ = lean_apply_1(v_inst_4091_, v_x_4094_);
v___x_4097_ = l_Lasm_Web_Raw_setProp(v_e_4092_, v_name_4093_, v___x_4096_);
return v___x_4097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___redArg___boxed(lean_object* v_inst_4098_, lean_object* v_e_4099_, lean_object* v_name_4100_, lean_object* v_x_4101_, lean_object* v_a_4102_){
_start:
{
lean_object* v_res_4103_; 
v_res_4103_ = l_Lasm_Web_Element_setProp___redArg(v_inst_4098_, v_e_4099_, v_name_4100_, v_x_4101_);
return v_res_4103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp(lean_object* v_00_u03b1_4104_, lean_object* v_inst_4105_, lean_object* v_e_4106_, lean_object* v_name_4107_, lean_object* v_x_4108_){
_start:
{
lean_object* v___x_4110_; 
v___x_4110_ = l_Lasm_Web_Element_setProp___redArg(v_inst_4105_, v_e_4106_, v_name_4107_, v_x_4108_);
return v___x_4110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___boxed(lean_object* v_00_u03b1_4111_, lean_object* v_inst_4112_, lean_object* v_e_4113_, lean_object* v_name_4114_, lean_object* v_x_4115_, lean_object* v_a_4116_){
_start:
{
lean_object* v_res_4117_; 
v_res_4117_ = l_Lasm_Web_Element_setProp(v_00_u03b1_4111_, v_inst_4112_, v_e_4113_, v_name_4114_, v_x_4115_);
return v_res_4117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___redArg(){
_start:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; 
v___x_4123_ = ((lean_object*)(l_Lasm_Web_Document_body___redArg___closed__0));
v___x_4124_ = l_Lasm_Web_querySelector(v___x_4123_);
if (lean_obj_tag(v___x_4124_) == 0)
{
lean_object* v_a_4125_; lean_object* v___x_4127_; uint8_t v_isShared_4128_; uint8_t v_isSharedCheck_4137_; 
v_a_4125_ = lean_ctor_get(v___x_4124_, 0);
v_isSharedCheck_4137_ = !lean_is_exclusive(v___x_4124_);
if (v_isSharedCheck_4137_ == 0)
{
v___x_4127_ = v___x_4124_;
v_isShared_4128_ = v_isSharedCheck_4137_;
goto v_resetjp_4126_;
}
else
{
lean_inc(v_a_4125_);
lean_dec(v___x_4124_);
v___x_4127_ = lean_box(0);
v_isShared_4128_ = v_isSharedCheck_4137_;
goto v_resetjp_4126_;
}
v_resetjp_4126_:
{
if (lean_obj_tag(v_a_4125_) == 0)
{
lean_object* v___x_4129_; lean_object* v___x_4131_; 
v___x_4129_ = ((lean_object*)(l_Lasm_Web_Document_body___redArg___closed__2));
if (v_isShared_4128_ == 0)
{
lean_ctor_set_tag(v___x_4127_, 1);
lean_ctor_set(v___x_4127_, 0, v___x_4129_);
v___x_4131_ = v___x_4127_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v___x_4129_);
v___x_4131_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
return v___x_4131_;
}
}
else
{
lean_object* v_val_4133_; lean_object* v___x_4135_; 
v_val_4133_ = lean_ctor_get(v_a_4125_, 0);
lean_inc(v_val_4133_);
lean_dec_ref_known(v_a_4125_, 1);
if (v_isShared_4128_ == 0)
{
lean_ctor_set(v___x_4127_, 0, v_val_4133_);
v___x_4135_ = v___x_4127_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_val_4133_);
v___x_4135_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
return v___x_4135_;
}
}
}
}
else
{
lean_object* v_a_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4145_; 
v_a_4138_ = lean_ctor_get(v___x_4124_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v___x_4124_);
if (v_isSharedCheck_4145_ == 0)
{
v___x_4140_ = v___x_4124_;
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_a_4138_);
lean_dec(v___x_4124_);
v___x_4140_ = lean_box(0);
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
v_resetjp_4139_:
{
lean_object* v___x_4143_; 
if (v_isShared_4141_ == 0)
{
v___x_4143_ = v___x_4140_;
goto v_reusejp_4142_;
}
else
{
lean_object* v_reuseFailAlloc_4144_; 
v_reuseFailAlloc_4144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4144_, 0, v_a_4138_);
v___x_4143_ = v_reuseFailAlloc_4144_;
goto v_reusejp_4142_;
}
v_reusejp_4142_:
{
return v___x_4143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___redArg___boxed(lean_object* v_a_4146_){
_start:
{
lean_object* v_res_4147_; 
v_res_4147_ = l_Lasm_Web_Document_body___redArg();
return v_res_4147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body(lean_object* v_x_4148_){
_start:
{
lean_object* v___x_4150_; 
v___x_4150_ = l_Lasm_Web_Document_body___redArg();
return v___x_4150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___boxed(lean_object* v_x_4151_, lean_object* v_a_4152_){
_start:
{
lean_object* v_res_4153_; 
v_res_4153_ = l_Lasm_Web_Document_body(v_x_4151_);
lean_dec(v_x_4151_);
return v_res_4153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___redArg(){
_start:
{
lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4159_ = ((lean_object*)(l_Lasm_Web_Document_head___redArg___closed__0));
v___x_4160_ = l_Lasm_Web_querySelector(v___x_4159_);
if (lean_obj_tag(v___x_4160_) == 0)
{
lean_object* v_a_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4173_; 
v_a_4161_ = lean_ctor_get(v___x_4160_, 0);
v_isSharedCheck_4173_ = !lean_is_exclusive(v___x_4160_);
if (v_isSharedCheck_4173_ == 0)
{
v___x_4163_ = v___x_4160_;
v_isShared_4164_ = v_isSharedCheck_4173_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_a_4161_);
lean_dec(v___x_4160_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4173_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
if (lean_obj_tag(v_a_4161_) == 0)
{
lean_object* v___x_4165_; lean_object* v___x_4167_; 
v___x_4165_ = ((lean_object*)(l_Lasm_Web_Document_head___redArg___closed__2));
if (v_isShared_4164_ == 0)
{
lean_ctor_set_tag(v___x_4163_, 1);
lean_ctor_set(v___x_4163_, 0, v___x_4165_);
v___x_4167_ = v___x_4163_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4168_; 
v_reuseFailAlloc_4168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4168_, 0, v___x_4165_);
v___x_4167_ = v_reuseFailAlloc_4168_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
return v___x_4167_;
}
}
else
{
lean_object* v_val_4169_; lean_object* v___x_4171_; 
v_val_4169_ = lean_ctor_get(v_a_4161_, 0);
lean_inc(v_val_4169_);
lean_dec_ref_known(v_a_4161_, 1);
if (v_isShared_4164_ == 0)
{
lean_ctor_set(v___x_4163_, 0, v_val_4169_);
v___x_4171_ = v___x_4163_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v_val_4169_);
v___x_4171_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
return v___x_4171_;
}
}
}
}
else
{
lean_object* v_a_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4181_; 
v_a_4174_ = lean_ctor_get(v___x_4160_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4160_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4176_ = v___x_4160_;
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_a_4174_);
lean_dec(v___x_4160_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
lean_object* v___x_4179_; 
if (v_isShared_4177_ == 0)
{
v___x_4179_ = v___x_4176_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v_a_4174_);
v___x_4179_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
return v___x_4179_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___redArg___boxed(lean_object* v_a_4182_){
_start:
{
lean_object* v_res_4183_; 
v_res_4183_ = l_Lasm_Web_Document_head___redArg();
return v_res_4183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head(lean_object* v_x_4184_){
_start:
{
lean_object* v___x_4186_; 
v___x_4186_ = l_Lasm_Web_Document_head___redArg();
return v___x_4186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___boxed(lean_object* v_x_4187_, lean_object* v_a_4188_){
_start:
{
lean_object* v_res_4189_; 
v_res_4189_ = l_Lasm_Web_Document_head(v_x_4187_);
lean_dec(v_x_4187_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_title(lean_object* v_d_4192_){
_start:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4194_ = ((lean_object*)(l_Lasm_Web_Document_title___closed__0));
v___x_4195_ = l_Lasm_Web_Raw_getProp(v_d_4192_, v___x_4194_);
if (lean_obj_tag(v___x_4195_) == 0)
{
lean_object* v_a_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; 
v_a_4196_ = lean_ctor_get(v___x_4195_, 0);
lean_inc(v_a_4196_);
lean_dec_ref_known(v___x_4195_, 1);
v___x_4197_ = ((lean_object*)(l_Lasm_Web_Document_title___closed__1));
v___x_4198_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(v___x_4197_, v_a_4196_);
return v___x_4198_;
}
else
{
lean_object* v_a_4199_; lean_object* v___x_4201_; uint8_t v_isShared_4202_; uint8_t v_isSharedCheck_4206_; 
v_a_4199_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4201_ = v___x_4195_;
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
else
{
lean_inc(v_a_4199_);
lean_dec(v___x_4195_);
v___x_4201_ = lean_box(0);
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
v_resetjp_4200_:
{
lean_object* v___x_4204_; 
if (v_isShared_4202_ == 0)
{
v___x_4204_ = v___x_4201_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4199_);
v___x_4204_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4203_;
}
v_reusejp_4203_:
{
return v___x_4204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_title___boxed(lean_object* v_d_4207_, lean_object* v_a_4208_){
_start:
{
lean_object* v_res_4209_; 
v_res_4209_ = l_Lasm_Web_Document_title(v_d_4207_);
return v_res_4209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_setTitle(lean_object* v_d_4210_, lean_object* v_title_4211_){
_start:
{
lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; 
v___x_4213_ = ((lean_object*)(l_Lasm_Web_Document_title___closed__0));
v___x_4214_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4214_, 0, v_title_4211_);
v___x_4215_ = l_Lasm_Web_Raw_setProp(v_d_4210_, v___x_4213_, v___x_4214_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_setTitle___boxed(lean_object* v_d_4216_, lean_object* v_title_4217_, lean_object* v_a_4218_){
_start:
{
lean_object* v_res_4219_; 
v_res_4219_ = l_Lasm_Web_Document_setTitle(v_d_4216_, v_title_4217_);
return v_res_4219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_activeElement(lean_object* v_d_4222_){
_start:
{
lean_object* v___x_4224_; lean_object* v___x_4225_; 
v___x_4224_ = ((lean_object*)(l_Lasm_Web_Document_activeElement___closed__0));
v___x_4225_ = l_Lasm_Web_Raw_getProp(v_d_4222_, v___x_4224_);
if (lean_obj_tag(v___x_4225_) == 0)
{
lean_object* v_a_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; 
v_a_4226_ = lean_ctor_get(v___x_4225_, 0);
lean_inc(v_a_4226_);
lean_dec_ref_known(v___x_4225_, 1);
v___x_4227_ = ((lean_object*)(l_Lasm_Web_Document_activeElement___closed__1));
v___x_4228_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0(v___x_4227_, v_a_4226_);
return v___x_4228_;
}
else
{
lean_object* v_a_4229_; lean_object* v___x_4231_; uint8_t v_isShared_4232_; uint8_t v_isSharedCheck_4236_; 
v_a_4229_ = lean_ctor_get(v___x_4225_, 0);
v_isSharedCheck_4236_ = !lean_is_exclusive(v___x_4225_);
if (v_isSharedCheck_4236_ == 0)
{
v___x_4231_ = v___x_4225_;
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
else
{
lean_inc(v_a_4229_);
lean_dec(v___x_4225_);
v___x_4231_ = lean_box(0);
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
v_resetjp_4230_:
{
lean_object* v___x_4234_; 
if (v_isShared_4232_ == 0)
{
v___x_4234_ = v___x_4231_;
goto v_reusejp_4233_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v_a_4229_);
v___x_4234_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4233_;
}
v_reusejp_4233_:
{
return v___x_4234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_activeElement___boxed(lean_object* v_d_4237_, lean_object* v_a_4238_){
_start:
{
lean_object* v_res_4239_; 
v_res_4239_ = l_Lasm_Web_Document_activeElement(v_d_4237_);
return v_res_4239_;
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
