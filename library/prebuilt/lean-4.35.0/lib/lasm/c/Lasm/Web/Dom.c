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
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
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
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(lean_object* v_b_1049_, lean_object* v_args_1050_, uint8_t v_await_1051_){
_start:
{
uint64_t v___y_1054_; uint64_t v___y_1055_; uint64_t v___x_1096_; uint64_t v___y_1098_; 
v___x_1096_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_1051_ == 0)
{
uint64_t v___x_1103_; 
v___x_1103_ = 0ULL;
v___y_1098_ = v___x_1103_;
goto v___jp_1097_;
}
else
{
uint64_t v___x_1104_; 
v___x_1104_ = 2ULL;
v___y_1098_ = v___x_1104_;
goto v___jp_1097_;
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
v___x_1062_ = l_Lasm_JS_Wire_decode(v_a_1061_);
lean_dec(v_a_1061_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v___x_1063_; 
lean_dec_ref_known(v___x_1062_, 1);
v___x_1063_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_1063_;
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
v_a_1064_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v___x_1062_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___x_1062_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_a_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
v_a_1072_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1060_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1060_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
lean_ctor_set_tag(v___x_1074_, 1);
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1095_; 
v_a_1080_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1082_ = v___x_1060_;
v_isShared_1083_ = v_isSharedCheck_1095_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1060_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1095_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1093_; 
v___x_1084_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1085_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1049_);
v___x_1086_ = lean_string_append(v___x_1084_, v___x_1085_);
lean_dec_ref(v___x_1085_);
v___x_1087_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1088_ = lean_string_append(v___x_1086_, v___x_1087_);
v___x_1089_ = lean_io_error_to_string(v_a_1080_);
v___x_1090_ = lean_string_append(v___x_1088_, v___x_1089_);
lean_dec_ref(v___x_1089_);
v___x_1091_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 0, v___x_1091_);
v___x_1093_ = v___x_1082_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
v___jp_1097_:
{
uint8_t v_construct_1099_; uint64_t v___x_1100_; 
v_construct_1099_ = lean_ctor_get_uint8(v_b_1049_, sizeof(void*)*4);
v___x_1100_ = lean_uint64_lor(v___x_1096_, v___y_1098_);
if (v_construct_1099_ == 0)
{
uint64_t v___x_1101_; 
v___x_1101_ = 0ULL;
v___y_1054_ = v___x_1100_;
v___y_1055_ = v___x_1101_;
goto v___jp_1053_;
}
else
{
uint64_t v___x_1102_; 
v___x_1102_ = 4ULL;
v___y_1054_ = v___x_1100_;
v___y_1055_ = v___x_1102_;
goto v___jp_1053_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0___boxed(lean_object* v_b_1105_, lean_object* v_args_1106_, lean_object* v_await_1107_, lean_object* v_a_1108_){
_start:
{
uint8_t v_await_boxed_1109_; lean_object* v_res_1110_; 
v_await_boxed_1109_ = lean_unbox(v_await_1107_);
v_res_1110_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v_b_1105_, v_args_1106_, v_await_boxed_1109_);
lean_dec_ref(v_b_1105_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_appendChild(lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; uint8_t v___x_1127_; lean_object* v___x_1128_; 
v___x_1120_ = ((lean_object*)(l_Lasm_Web_Raw_appendChild___closed__1));
v___x_1121_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1122_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1123_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1123_, 0, v_a_1117_);
lean_ctor_set(v___x_1123_, 1, v___x_1122_);
v___x_1124_ = lean_array_push(v___x_1121_, v___x_1123_);
v___x_1125_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1125_, 0, v_a_1118_);
lean_ctor_set(v___x_1125_, 1, v___x_1122_);
v___x_1126_ = lean_array_push(v___x_1124_, v___x_1125_);
v___x_1127_ = 1;
v___x_1128_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1120_, v___x_1126_, v___x_1127_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_appendChild___boxed(lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l_Lasm_Web_Raw_appendChild(v_a_1129_, v_a_1130_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_insertBefore(lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___y_1151_; 
v___x_1143_ = ((lean_object*)(l_Lasm_Web_Raw_insertBefore___closed__1));
v___x_1144_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1145_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1146_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1146_, 0, v_a_1139_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___x_1147_ = lean_array_push(v___x_1144_, v___x_1146_);
v___x_1148_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1148_, 0, v_a_1140_);
lean_ctor_set(v___x_1148_, 1, v___x_1145_);
v___x_1149_ = lean_array_push(v___x_1147_, v___x_1148_);
if (lean_obj_tag(v_a_1141_) == 0)
{
lean_object* v___x_1155_; 
v___x_1155_ = lean_box(1);
v___y_1151_ = v___x_1155_;
goto v___jp_1150_;
}
else
{
lean_object* v_val_1156_; lean_object* v___x_1157_; 
v_val_1156_ = lean_ctor_get(v_a_1141_, 0);
lean_inc(v_val_1156_);
v___x_1157_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1157_, 0, v_val_1156_);
lean_ctor_set(v___x_1157_, 1, v___x_1145_);
v___y_1151_ = v___x_1157_;
goto v___jp_1150_;
}
v___jp_1150_:
{
lean_object* v___x_1152_; uint8_t v___x_1153_; lean_object* v___x_1154_; 
v___x_1152_ = lean_array_push(v___x_1149_, v___y_1151_);
v___x_1153_ = 1;
v___x_1154_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1143_, v___x_1152_, v___x_1153_);
return v___x_1154_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_insertBefore___boxed(lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Lasm_Web_Raw_insertBefore(v_a_1158_, v_a_1159_, v_a_1160_);
lean_dec(v_a_1160_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeChild(lean_object* v_a_1169_, lean_object* v_a_1170_){
_start:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; lean_object* v___x_1180_; 
v___x_1172_ = ((lean_object*)(l_Lasm_Web_Raw_removeChild___closed__1));
v___x_1173_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1174_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1175_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1175_, 0, v_a_1169_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
v___x_1176_ = lean_array_push(v___x_1173_, v___x_1175_);
v___x_1177_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1177_, 0, v_a_1170_);
lean_ctor_set(v___x_1177_, 1, v___x_1174_);
v___x_1178_ = lean_array_push(v___x_1176_, v___x_1177_);
v___x_1179_ = 1;
v___x_1180_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1172_, v___x_1178_, v___x_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeChild___boxed(lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Lasm_Web_Raw_removeChild(v_a_1181_, v_a_1182_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeNode(lean_object* v_a_1191_){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; uint8_t v___x_1198_; lean_object* v___x_1199_; 
v___x_1193_ = ((lean_object*)(l_Lasm_Web_Raw_removeNode___closed__1));
v___x_1194_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1195_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1196_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1196_, 0, v_a_1191_);
lean_ctor_set(v___x_1196_, 1, v___x_1195_);
v___x_1197_ = lean_array_push(v___x_1194_, v___x_1196_);
v___x_1198_ = 1;
v___x_1199_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1193_, v___x_1197_, v___x_1198_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeNode___boxed(lean_object* v_a_1200_, lean_object* v_a_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Lasm_Web_Raw_removeNode(v_a_1200_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceNode(lean_object* v_a_1209_, lean_object* v_a_1210_){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; uint8_t v___x_1219_; lean_object* v___x_1220_; 
v___x_1212_ = ((lean_object*)(l_Lasm_Web_Raw_replaceNode___closed__1));
v___x_1213_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1214_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1215_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1215_, 0, v_a_1209_);
lean_ctor_set(v___x_1215_, 1, v___x_1214_);
v___x_1216_ = lean_array_push(v___x_1213_, v___x_1215_);
v___x_1217_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1217_, 0, v_a_1210_);
lean_ctor_set(v___x_1217_, 1, v___x_1214_);
v___x_1218_ = lean_array_push(v___x_1216_, v___x_1217_);
v___x_1219_ = 1;
v___x_1220_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1212_, v___x_1218_, v___x_1219_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceNode___boxed(lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lasm_Web_Raw_replaceNode(v_a_1221_, v_a_1222_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(size_t v_sz_1225_, size_t v_i_1226_, lean_object* v_bs_1227_){
_start:
{
uint8_t v___x_1228_; 
v___x_1228_ = lean_usize_dec_lt(v_i_1226_, v_sz_1225_);
if (v___x_1228_ == 0)
{
return v_bs_1227_;
}
else
{
lean_object* v_v_1229_; lean_object* v___x_1230_; lean_object* v_bs_x27_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; size_t v___x_1234_; size_t v___x_1235_; lean_object* v___x_1236_; 
v_v_1229_ = lean_array_uget(v_bs_1227_, v_i_1226_);
v___x_1230_ = lean_unsigned_to_nat(0u);
v_bs_x27_1231_ = lean_array_uset(v_bs_1227_, v_i_1226_, v___x_1230_);
v___x_1232_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1233_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1233_, 0, v_v_1229_);
lean_ctor_set(v___x_1233_, 1, v___x_1232_);
v___x_1234_ = ((size_t)1ULL);
v___x_1235_ = lean_usize_add(v_i_1226_, v___x_1234_);
v___x_1236_ = lean_array_uset(v_bs_x27_1231_, v_i_1226_, v___x_1233_);
v_i_1226_ = v___x_1235_;
v_bs_1227_ = v___x_1236_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0___boxed(lean_object* v_sz_1238_, lean_object* v_i_1239_, lean_object* v_bs_1240_){
_start:
{
size_t v_sz_boxed_1241_; size_t v_i_boxed_1242_; lean_object* v_res_1243_; 
v_sz_boxed_1241_ = lean_unbox_usize(v_sz_1238_);
lean_dec(v_sz_1238_);
v_i_boxed_1242_ = lean_unbox_usize(v_i_1239_);
lean_dec(v_i_1239_);
v_res_1243_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(v_sz_boxed_1241_, v_i_boxed_1242_, v_bs_1240_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_append(lean_object* v_a_1250_, lean_object* v_a_1251_){
_start:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; size_t v_sz_1258_; size_t v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; lean_object* v___x_1264_; 
v___x_1253_ = ((lean_object*)(l_Lasm_Web_Raw_append___closed__1));
v___x_1254_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1255_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1256_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1256_, 0, v_a_1250_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
v___x_1257_ = lean_array_push(v___x_1254_, v___x_1256_);
v_sz_1258_ = lean_array_size(v_a_1251_);
v___x_1259_ = ((size_t)0ULL);
v___x_1260_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(v_sz_1258_, v___x_1259_, v_a_1251_);
v___x_1261_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
v___x_1262_ = lean_array_push(v___x_1257_, v___x_1261_);
v___x_1263_ = 1;
v___x_1264_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1253_, v___x_1262_, v___x_1263_);
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_append___boxed(lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lasm_Web_Raw_append(v_a_1265_, v_a_1266_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceChildren(lean_object* v_a_1275_, lean_object* v_a_1276_){
_start:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; size_t v_sz_1283_; size_t v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; lean_object* v___x_1289_; 
v___x_1278_ = ((lean_object*)(l_Lasm_Web_Raw_replaceChildren___closed__1));
v___x_1279_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1280_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1281_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1281_, 0, v_a_1275_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
v___x_1282_ = lean_array_push(v___x_1279_, v___x_1281_);
v_sz_1283_ = lean_array_size(v_a_1276_);
v___x_1284_ = ((size_t)0ULL);
v___x_1285_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_append_spec__0(v_sz_1283_, v___x_1284_, v_a_1276_);
v___x_1286_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1285_);
v___x_1287_ = lean_array_push(v___x_1282_, v___x_1286_);
v___x_1288_ = 1;
v___x_1289_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1278_, v___x_1287_, v___x_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_replaceChildren___boxed(lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Lasm_Web_Raw_replaceChildren(v_a_1290_, v_a_1291_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(lean_object* v_context_1295_, lean_object* v_d_1296_){
_start:
{
lean_object* v___y_1299_; lean_object* v___y_1300_; 
if (lean_obj_tag(v_d_1296_) == 4)
{
lean_object* v_s_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1311_; 
v_s_1304_ = lean_ctor_get(v_d_1296_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_d_1296_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1306_ = v_d_1296_;
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_s_1304_);
lean_dec(v_d_1296_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
lean_ctor_set_tag(v___x_1306_, 0);
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_s_1304_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
else
{
lean_object* v___x_1312_; lean_object* v_received_1314_; 
v___x_1312_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_1296_) == 9)
{
lean_object* v_value_1328_; lean_object* v_description_1329_; uint8_t v___x_1330_; 
v_value_1328_ = lean_ctor_get(v_d_1296_, 0);
v_description_1329_ = lean_ctor_get(v_d_1296_, 1);
v___x_1330_ = lean_string_dec_eq(v_description_1329_, v___x_1312_);
if (v___x_1330_ == 0)
{
goto v___jp_1326_;
}
else
{
uint32_t v___x_1331_; uint64_t v___x_1332_; lean_object* v___x_1333_; uint32_t v___x_1334_; lean_object* v___x_1335_; 
lean_inc_n(v_value_1328_, 2);
lean_dec_ref_known(v_d_1296_, 2);
v___x_1331_ = 206;
v___x_1332_ = 0ULL;
v___x_1333_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1333_, 0, v_value_1328_);
lean_ctor_set(v___x_1333_, 1, v___x_1312_);
v___x_1334_ = lasm_js_value_handle(v_value_1328_);
lean_dec(v_value_1328_);
v___x_1335_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1331_, v___x_1332_, v___x_1333_, v___x_1334_);
lean_dec_ref_known(v___x_1333_, 2);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; uint8_t v___x_1337_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_a_1336_);
lean_dec_ref_known(v___x_1335_, 1);
v___x_1337_ = lean_string_validate_utf8(v_a_1336_);
if (v___x_1337_ == 0)
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
lean_dec(v_a_1336_);
v___x_1338_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_1339_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1338_);
v_received_1314_ = v___x_1339_;
goto v___jp_1313_;
}
else
{
lean_object* v___x_1340_; 
v___x_1340_ = lean_string_from_utf8_unchecked(v_a_1336_);
v_received_1314_ = v___x_1340_;
goto v___jp_1313_;
}
}
else
{
lean_object* v___x_1341_; 
lean_dec_ref_known(v___x_1335_, 1);
v___x_1341_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_1314_ = v___x_1341_;
goto v___jp_1313_;
}
}
}
else
{
goto v___jp_1326_;
}
v___jp_1313_:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; uint8_t v___x_1324_; 
v___x_1315_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1316_ = lean_string_append(v___x_1315_, v_context_1295_);
v___x_1317_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_1318_ = lean_string_append(v___x_1316_, v___x_1317_);
v___x_1319_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0___closed__0));
v___x_1320_ = lean_string_append(v___x_1318_, v___x_1319_);
v___x_1321_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1322_ = lean_string_append(v___x_1320_, v___x_1321_);
v___x_1323_ = lean_string_append(v___x_1322_, v_received_1314_);
lean_dec_ref(v_received_1314_);
v___x_1324_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_1324_ == 0)
{
lean_object* v___x_1325_; 
v___x_1325_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_1299_ = v___x_1323_;
v___y_1300_ = v___x_1325_;
goto v___jp_1298_;
}
else
{
v___y_1299_ = v___x_1323_;
v___y_1300_ = v___x_1312_;
goto v___jp_1298_;
}
}
v___jp_1326_:
{
lean_object* v___x_1327_; 
v___x_1327_ = l_Lasm_JS_Data_describe(v_d_1296_);
v_received_1314_ = v___x_1327_;
goto v___jp_1313_;
}
}
v___jp_1298_:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1301_ = lean_string_append(v___y_1299_, v___y_1300_);
v___x_1302_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
v___x_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
return v___x_1303_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0___boxed(lean_object* v_context_1342_, lean_object* v_d_1343_, lean_object* v_a_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(v_context_1342_, v_d_1343_);
lean_dec_ref(v_context_1342_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(lean_object* v_b_1346_, lean_object* v_args_1347_, uint8_t v_await_1348_){
_start:
{
uint64_t v___y_1351_; uint64_t v___y_1352_; uint64_t v___x_1395_; uint64_t v___y_1397_; 
v___x_1395_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_1348_ == 0)
{
uint64_t v___x_1402_; 
v___x_1402_ = 0ULL;
v___y_1397_ = v___x_1402_;
goto v___jp_1396_;
}
else
{
uint64_t v___x_1403_; 
v___x_1403_ = 2ULL;
v___y_1397_ = v___x_1403_;
goto v___jp_1396_;
}
v___jp_1350_:
{
uint64_t v_flags_1353_; uint32_t v___x_1354_; lean_object* v___x_1355_; uint32_t v___x_1356_; lean_object* v___x_1357_; 
v_flags_1353_ = lean_uint64_lor(v___y_1351_, v___y_1352_);
v___x_1354_ = 214;
v___x_1355_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1346_, v_args_1347_);
v___x_1356_ = 0;
v___x_1357_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1354_, v_flags_1353_, v___x_1355_, v___x_1356_);
lean_dec(v___x_1355_);
if (lean_obj_tag(v___x_1357_) == 0)
{
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; lean_object* v___x_1359_; 
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_a_1358_);
lean_dec_ref_known(v___x_1357_, 1);
v___x_1359_ = l_Lasm_JS_Wire_decode(v_a_1358_);
lean_dec(v_a_1358_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v_a_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
lean_inc(v_a_1360_);
lean_dec_ref_known(v___x_1359_, 1);
v___x_1361_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1346_);
v___x_1362_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(v___x_1361_, v_a_1360_);
lean_dec_ref(v___x_1361_);
return v___x_1362_;
}
else
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
v_a_1363_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1359_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1359_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1378_; 
v_a_1371_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1373_ = v___x_1357_;
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1357_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1374_ == 0)
{
lean_ctor_set_tag(v___x_1373_, 1);
v___x_1376_ = v___x_1373_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
else
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1394_; 
v_a_1379_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1381_ = v___x_1357_;
v_isShared_1382_ = v_isSharedCheck_1394_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1357_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1394_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1392_; 
v___x_1383_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1384_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1346_);
v___x_1385_ = lean_string_append(v___x_1383_, v___x_1384_);
lean_dec_ref(v___x_1384_);
v___x_1386_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1387_ = lean_string_append(v___x_1385_, v___x_1386_);
v___x_1388_ = lean_io_error_to_string(v_a_1379_);
v___x_1389_ = lean_string_append(v___x_1387_, v___x_1388_);
lean_dec_ref(v___x_1388_);
v___x_1390_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
if (v_isShared_1382_ == 0)
{
lean_ctor_set(v___x_1381_, 0, v___x_1390_);
v___x_1392_ = v___x_1381_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1390_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
}
}
v___jp_1396_:
{
uint8_t v_construct_1398_; uint64_t v___x_1399_; 
v_construct_1398_ = lean_ctor_get_uint8(v_b_1346_, sizeof(void*)*4);
v___x_1399_ = lean_uint64_lor(v___x_1395_, v___y_1397_);
if (v_construct_1398_ == 0)
{
uint64_t v___x_1400_; 
v___x_1400_ = 0ULL;
v___y_1351_ = v___x_1399_;
v___y_1352_ = v___x_1400_;
goto v___jp_1350_;
}
else
{
uint64_t v___x_1401_; 
v___x_1401_ = 4ULL;
v___y_1351_ = v___x_1399_;
v___y_1352_ = v___x_1401_;
goto v___jp_1350_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0___boxed(lean_object* v_b_1404_, lean_object* v_args_1405_, lean_object* v_await_1406_, lean_object* v_a_1407_){
_start:
{
uint8_t v_await_boxed_1408_; lean_object* v_res_1409_; 
v_await_boxed_1408_ = lean_unbox(v_await_1406_);
v_res_1409_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v_b_1404_, v_args_1405_, v_await_boxed_1408_);
lean_dec_ref(v_b_1404_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getText(lean_object* v_a_1416_){
_start:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; lean_object* v___x_1424_; 
v___x_1418_ = ((lean_object*)(l_Lasm_Web_Raw_getText___closed__1));
v___x_1419_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1420_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1421_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1421_, 0, v_a_1416_);
lean_ctor_set(v___x_1421_, 1, v___x_1420_);
v___x_1422_ = lean_array_push(v___x_1419_, v___x_1421_);
v___x_1423_ = 1;
v___x_1424_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_1418_, v___x_1422_, v___x_1423_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getText___boxed(lean_object* v_a_1425_, lean_object* v_a_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l_Lasm_Web_Raw_getText(v_a_1425_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setText(lean_object* v_a_1434_, lean_object* v_a_1435_){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; uint8_t v___x_1444_; lean_object* v___x_1445_; 
v___x_1437_ = ((lean_object*)(l_Lasm_Web_Raw_setText___closed__1));
v___x_1438_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1440_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1440_, 0, v_a_1434_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = lean_array_push(v___x_1438_, v___x_1440_);
v___x_1442_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1442_, 0, v_a_1435_);
v___x_1443_ = lean_array_push(v___x_1441_, v___x_1442_);
v___x_1444_ = 1;
v___x_1445_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_1437_, v___x_1443_, v___x_1444_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setText___boxed(lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_Lasm_Web_Raw_setText(v_a_1446_, v_a_1447_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0(lean_object* v_context_1451_, lean_object* v_d_1452_){
_start:
{
lean_object* v___y_1458_; lean_object* v___y_1459_; 
switch(lean_obj_tag(v_d_1452_))
{
case 1:
{
goto v___jp_1454_;
}
case 0:
{
goto v___jp_1454_;
}
default: 
{
if (lean_obj_tag(v_d_1452_) == 9)
{
lean_object* v_value_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v_value_1463_ = lean_ctor_get(v_d_1452_, 0);
lean_inc(v_value_1463_);
lean_dec_ref_known(v_d_1452_, 2);
v___x_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1464_, 0, v_value_1463_);
v___x_1465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1464_);
return v___x_1465_;
}
else
{
lean_object* v___x_1466_; lean_object* v_received_1468_; 
v___x_1466_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_1452_) == 9)
{
lean_object* v_value_1482_; lean_object* v_description_1483_; uint8_t v___x_1484_; 
v_value_1482_ = lean_ctor_get(v_d_1452_, 0);
v_description_1483_ = lean_ctor_get(v_d_1452_, 1);
v___x_1484_ = lean_string_dec_eq(v_description_1483_, v___x_1466_);
if (v___x_1484_ == 0)
{
goto v___jp_1480_;
}
else
{
uint32_t v___x_1485_; uint64_t v___x_1486_; lean_object* v___x_1487_; uint32_t v___x_1488_; lean_object* v___x_1489_; 
lean_inc_n(v_value_1482_, 2);
lean_dec_ref_known(v_d_1452_, 2);
v___x_1485_ = 206;
v___x_1486_ = 0ULL;
v___x_1487_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1487_, 0, v_value_1482_);
lean_ctor_set(v___x_1487_, 1, v___x_1466_);
v___x_1488_ = lasm_js_value_handle(v_value_1482_);
lean_dec(v_value_1482_);
v___x_1489_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1485_, v___x_1486_, v___x_1487_, v___x_1488_);
lean_dec_ref_known(v___x_1487_, 2);
if (lean_obj_tag(v___x_1489_) == 0)
{
lean_object* v_a_1490_; uint8_t v___x_1491_; 
v_a_1490_ = lean_ctor_get(v___x_1489_, 0);
lean_inc(v_a_1490_);
lean_dec_ref_known(v___x_1489_, 1);
v___x_1491_ = lean_string_validate_utf8(v_a_1490_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_dec(v_a_1490_);
v___x_1492_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_1493_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1492_);
v_received_1468_ = v___x_1493_;
goto v___jp_1467_;
}
else
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_string_from_utf8_unchecked(v_a_1490_);
v_received_1468_ = v___x_1494_;
goto v___jp_1467_;
}
}
else
{
lean_object* v___x_1495_; 
lean_dec_ref_known(v___x_1489_, 1);
v___x_1495_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_1468_ = v___x_1495_;
goto v___jp_1467_;
}
}
}
else
{
goto v___jp_1480_;
}
v___jp_1467_:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; uint8_t v___x_1478_; 
v___x_1469_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1470_ = lean_string_append(v___x_1469_, v_context_1451_);
v___x_1471_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_1472_ = lean_string_append(v___x_1470_, v___x_1471_);
v___x_1473_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0___closed__0));
v___x_1474_ = lean_string_append(v___x_1472_, v___x_1473_);
v___x_1475_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1476_ = lean_string_append(v___x_1474_, v___x_1475_);
v___x_1477_ = lean_string_append(v___x_1476_, v_received_1468_);
lean_dec_ref(v_received_1468_);
v___x_1478_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_1478_ == 0)
{
lean_object* v___x_1479_; 
v___x_1479_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_1458_ = v___x_1477_;
v___y_1459_ = v___x_1479_;
goto v___jp_1457_;
}
else
{
v___y_1458_ = v___x_1477_;
v___y_1459_ = v___x_1466_;
goto v___jp_1457_;
}
}
v___jp_1480_:
{
lean_object* v___x_1481_; 
v___x_1481_ = l_Lasm_JS_Data_describe(v_d_1452_);
v_received_1468_ = v___x_1481_;
goto v___jp_1467_;
}
}
}
}
v___jp_1454_:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1455_ = lean_box(0);
v___x_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
return v___x_1456_;
}
v___jp_1457_:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1460_ = lean_string_append(v___y_1458_, v___y_1459_);
v___x_1461_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1460_);
v___x_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
return v___x_1462_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0___boxed(lean_object* v_context_1496_, lean_object* v_d_1497_, lean_object* v_a_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0(v_context_1496_, v_d_1497_);
lean_dec_ref(v_context_1496_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(lean_object* v_b_1500_, lean_object* v_args_1501_, uint8_t v_await_1502_){
_start:
{
uint64_t v___y_1505_; uint64_t v___y_1506_; uint64_t v___x_1549_; uint64_t v___y_1551_; 
v___x_1549_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_1502_ == 0)
{
uint64_t v___x_1556_; 
v___x_1556_ = 0ULL;
v___y_1551_ = v___x_1556_;
goto v___jp_1550_;
}
else
{
uint64_t v___x_1557_; 
v___x_1557_ = 2ULL;
v___y_1551_ = v___x_1557_;
goto v___jp_1550_;
}
v___jp_1504_:
{
uint64_t v_flags_1507_; uint32_t v___x_1508_; lean_object* v___x_1509_; uint32_t v___x_1510_; lean_object* v___x_1511_; 
v_flags_1507_ = lean_uint64_lor(v___y_1505_, v___y_1506_);
v___x_1508_ = 214;
v___x_1509_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1500_, v_args_1501_);
v___x_1510_ = 0;
v___x_1511_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1508_, v_flags_1507_, v___x_1509_, v___x_1510_);
lean_dec(v___x_1509_);
if (lean_obj_tag(v___x_1511_) == 0)
{
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_object* v_a_1512_; lean_object* v___x_1513_; 
v_a_1512_ = lean_ctor_get(v___x_1511_, 0);
lean_inc(v_a_1512_);
lean_dec_ref_known(v___x_1511_, 1);
v___x_1513_ = l_Lasm_JS_Wire_decode(v_a_1512_);
lean_dec(v_a_1512_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_a_1514_);
lean_dec_ref_known(v___x_1513_, 1);
v___x_1515_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1500_);
v___x_1516_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0_spec__0(v___x_1515_, v_a_1514_);
lean_dec_ref(v___x_1515_);
return v___x_1516_;
}
else
{
lean_object* v_a_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1524_; 
v_a_1517_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1519_ = v___x_1513_;
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_a_1517_);
lean_dec(v___x_1513_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1522_; 
if (v_isShared_1520_ == 0)
{
v___x_1522_ = v___x_1519_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_a_1517_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
v_a_1525_ = lean_ctor_get(v___x_1511_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1511_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1511_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
lean_ctor_set_tag(v___x_1527_, 1);
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
}
else
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1548_; 
v_a_1533_ = lean_ctor_get(v___x_1511_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1535_ = v___x_1511_;
v_isShared_1536_ = v_isSharedCheck_1548_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1511_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1548_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1546_; 
v___x_1537_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1538_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1500_);
v___x_1539_ = lean_string_append(v___x_1537_, v___x_1538_);
lean_dec_ref(v___x_1538_);
v___x_1540_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1541_ = lean_string_append(v___x_1539_, v___x_1540_);
v___x_1542_ = lean_io_error_to_string(v_a_1533_);
v___x_1543_ = lean_string_append(v___x_1541_, v___x_1542_);
lean_dec_ref(v___x_1542_);
v___x_1544_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1543_);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 0, v___x_1544_);
v___x_1546_ = v___x_1535_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1544_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
v___jp_1550_:
{
uint8_t v_construct_1552_; uint64_t v___x_1553_; 
v_construct_1552_ = lean_ctor_get_uint8(v_b_1500_, sizeof(void*)*4);
v___x_1553_ = lean_uint64_lor(v___x_1549_, v___y_1551_);
if (v_construct_1552_ == 0)
{
uint64_t v___x_1554_; 
v___x_1554_ = 0ULL;
v___y_1505_ = v___x_1553_;
v___y_1506_ = v___x_1554_;
goto v___jp_1504_;
}
else
{
uint64_t v___x_1555_; 
v___x_1555_ = 4ULL;
v___y_1505_ = v___x_1553_;
v___y_1506_ = v___x_1555_;
goto v___jp_1504_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0___boxed(lean_object* v_b_1558_, lean_object* v_args_1559_, lean_object* v_await_1560_, lean_object* v_a_1561_){
_start:
{
uint8_t v_await_boxed_1562_; lean_object* v_res_1563_; 
v_await_boxed_1562_ = lean_unbox(v_await_1560_);
v_res_1563_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v_b_1558_, v_args_1559_, v_await_boxed_1562_);
lean_dec_ref(v_b_1558_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentNode(lean_object* v_a_1570_){
_start:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; uint8_t v___x_1577_; lean_object* v___x_1578_; 
v___x_1572_ = ((lean_object*)(l_Lasm_Web_Raw_parentNode___closed__1));
v___x_1573_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1574_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1575_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1575_, 0, v_a_1570_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
v___x_1576_ = lean_array_push(v___x_1573_, v___x_1575_);
v___x_1577_ = 1;
v___x_1578_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1572_, v___x_1576_, v___x_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentNode___boxed(lean_object* v_a_1579_, lean_object* v_a_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = l_Lasm_Web_Raw_parentNode(v_a_1579_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentElement(lean_object* v_a_1588_){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; lean_object* v___x_1596_; 
v___x_1590_ = ((lean_object*)(l_Lasm_Web_Raw_parentElement___closed__1));
v___x_1591_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1592_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1593_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1593_, 0, v_a_1588_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = lean_array_push(v___x_1591_, v___x_1593_);
v___x_1595_ = 1;
v___x_1596_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0(v___x_1590_, v___x_1594_, v___x_1595_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_parentElement___boxed(lean_object* v_a_1597_, lean_object* v_a_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l_Lasm_Web_Raw_parentElement(v_a_1597_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_firstChild(lean_object* v_a_1606_){
_start:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; uint8_t v___x_1613_; lean_object* v___x_1614_; 
v___x_1608_ = ((lean_object*)(l_Lasm_Web_Raw_firstChild___closed__1));
v___x_1609_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1610_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1611_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1611_, 0, v_a_1606_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
v___x_1612_ = lean_array_push(v___x_1609_, v___x_1611_);
v___x_1613_ = 1;
v___x_1614_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1608_, v___x_1612_, v___x_1613_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_firstChild___boxed(lean_object* v_a_1615_, lean_object* v_a_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Lasm_Web_Raw_firstChild(v_a_1615_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_lastChild(lean_object* v_a_1624_){
_start:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; uint8_t v___x_1631_; lean_object* v___x_1632_; 
v___x_1626_ = ((lean_object*)(l_Lasm_Web_Raw_lastChild___closed__1));
v___x_1627_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1628_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1629_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1629_, 0, v_a_1624_);
lean_ctor_set(v___x_1629_, 1, v___x_1628_);
v___x_1630_ = lean_array_push(v___x_1627_, v___x_1629_);
v___x_1631_ = 1;
v___x_1632_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1626_, v___x_1630_, v___x_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_lastChild___boxed(lean_object* v_a_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lasm_Web_Raw_lastChild(v_a_1633_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextSibling(lean_object* v_a_1642_){
_start:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; uint8_t v___x_1649_; lean_object* v___x_1650_; 
v___x_1644_ = ((lean_object*)(l_Lasm_Web_Raw_nextSibling___closed__1));
v___x_1645_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1646_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1647_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1647_, 0, v_a_1642_);
lean_ctor_set(v___x_1647_, 1, v___x_1646_);
v___x_1648_ = lean_array_push(v___x_1645_, v___x_1647_);
v___x_1649_ = 1;
v___x_1650_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1644_, v___x_1648_, v___x_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextSibling___boxed(lean_object* v_a_1651_, lean_object* v_a_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l_Lasm_Web_Raw_nextSibling(v_a_1651_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_previousSibling(lean_object* v_a_1660_){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; uint8_t v___x_1667_; lean_object* v___x_1668_; 
v___x_1662_ = ((lean_object*)(l_Lasm_Web_Raw_previousSibling___closed__1));
v___x_1663_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1665_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1665_, 0, v_a_1660_);
lean_ctor_set(v___x_1665_, 1, v___x_1664_);
v___x_1666_ = lean_array_push(v___x_1663_, v___x_1665_);
v___x_1667_ = 1;
v___x_1668_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_parentNode_spec__0(v___x_1662_, v___x_1666_, v___x_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_previousSibling___boxed(lean_object* v_a_1669_, lean_object* v_a_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l_Lasm_Web_Raw_previousSibling(v_a_1669_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1(size_t v_sz_1672_, size_t v_i_1673_, lean_object* v_bs_1674_){
_start:
{
uint8_t v___x_1675_; 
v___x_1675_ = lean_usize_dec_lt(v_i_1673_, v_sz_1672_);
if (v___x_1675_ == 0)
{
lean_object* v___x_1676_; 
v___x_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1676_, 0, v_bs_1674_);
return v___x_1676_;
}
else
{
lean_object* v_v_1677_; 
v_v_1677_ = lean_array_uget_borrowed(v_bs_1674_, v_i_1673_);
if (lean_obj_tag(v_v_1677_) == 9)
{
lean_object* v_value_1678_; lean_object* v___x_1679_; lean_object* v_bs_x27_1680_; size_t v___x_1681_; size_t v___x_1682_; lean_object* v___x_1683_; 
v_value_1678_ = lean_ctor_get(v_v_1677_, 0);
lean_inc(v_value_1678_);
v___x_1679_ = lean_unsigned_to_nat(0u);
v_bs_x27_1680_ = lean_array_uset(v_bs_1674_, v_i_1673_, v___x_1679_);
v___x_1681_ = ((size_t)1ULL);
v___x_1682_ = lean_usize_add(v_i_1673_, v___x_1681_);
v___x_1683_ = lean_array_uset(v_bs_x27_1680_, v_i_1673_, v_value_1678_);
v_i_1673_ = v___x_1682_;
v_bs_1674_ = v___x_1683_;
goto _start;
}
else
{
lean_object* v___x_1685_; 
lean_dec_ref(v_bs_1674_);
v___x_1685_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0_spec__1___closed__0));
return v___x_1685_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_1686_, lean_object* v_i_1687_, lean_object* v_bs_1688_){
_start:
{
size_t v_sz_boxed_1689_; size_t v_i_boxed_1690_; lean_object* v_res_1691_; 
v_sz_boxed_1689_ = lean_unbox_usize(v_sz_1686_);
lean_dec(v_sz_1686_);
v_i_boxed_1690_ = lean_unbox_usize(v_i_1687_);
lean_dec(v_i_1687_);
v_res_1691_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1(v_sz_boxed_1689_, v_i_boxed_1690_, v_bs_1688_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0(lean_object* v_context_1694_, lean_object* v_d_1695_){
_start:
{
lean_object* v___y_1698_; lean_object* v___y_1699_; lean_object* v___y_1704_; lean_object* v_received_1705_; lean_object* v___y_1724_; lean_object* v_a_1727_; 
if (lean_obj_tag(v_d_1695_) == 7)
{
lean_object* v_items_1751_; size_t v_sz_1752_; size_t v___x_1753_; lean_object* v___x_1754_; 
v_items_1751_ = lean_ctor_get(v_d_1695_, 0);
v_sz_1752_ = lean_array_size(v_items_1751_);
v___x_1753_ = ((size_t)0ULL);
lean_inc_ref(v_items_1751_);
v___x_1754_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0_spec__1(v_sz_1752_, v___x_1753_, v_items_1751_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; 
v_a_1755_ = lean_ctor_get(v___x_1754_, 0);
lean_inc(v_a_1755_);
lean_dec_ref_known(v___x_1754_, 1);
v___x_1756_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__1));
v___x_1757_ = lean_string_utf8_byte_size(v_a_1755_);
v___x_1758_ = lean_unsigned_to_nat(0u);
v___x_1759_ = lean_nat_dec_eq(v___x_1757_, v___x_1758_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1760_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1761_ = lean_string_append(v___x_1760_, v_a_1755_);
lean_dec(v_a_1755_);
v___x_1762_ = lean_string_append(v___x_1756_, v___x_1761_);
lean_dec_ref(v___x_1761_);
v_a_1727_ = v___x_1762_;
goto v___jp_1726_;
}
else
{
lean_dec(v_a_1755_);
v_a_1727_ = v___x_1756_;
goto v___jp_1726_;
}
}
else
{
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1763_; 
v_a_1763_ = lean_ctor_get(v___x_1754_, 0);
lean_inc(v_a_1763_);
lean_dec_ref_known(v___x_1754_, 1);
v_a_1727_ = v_a_1763_;
goto v___jp_1726_;
}
else
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
lean_dec_ref_known(v_d_1695_, 1);
v_a_1764_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1754_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1754_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
lean_ctor_set_tag(v___x_1766_, 0);
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
}
}
else
{
lean_object* v___x_1772_; 
v___x_1772_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v_a_1727_ = v___x_1772_;
goto v___jp_1726_;
}
v___jp_1697_:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; 
v___x_1700_ = lean_string_append(v___y_1698_, v___y_1699_);
lean_dec_ref(v___y_1699_);
v___x_1701_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1700_);
v___x_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1701_);
return v___x_1702_;
}
v___jp_1703_:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; uint8_t v___x_1717_; 
v___x_1706_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1707_ = lean_string_append(v___x_1706_, v_context_1694_);
v___x_1708_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_1709_ = lean_string_append(v___x_1707_, v___x_1708_);
v___x_1710_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___closed__0));
v___x_1711_ = lean_string_append(v___x_1709_, v___x_1710_);
v___x_1712_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1713_ = lean_string_append(v___x_1711_, v___x_1712_);
v___x_1714_ = lean_string_append(v___x_1713_, v_received_1705_);
lean_dec_ref(v_received_1705_);
v___x_1715_ = lean_string_utf8_byte_size(v___y_1704_);
v___x_1716_ = lean_unsigned_to_nat(0u);
v___x_1717_ = lean_nat_dec_eq(v___x_1715_, v___x_1716_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1718_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__1));
v___x_1719_ = lean_string_append(v___x_1718_, v___y_1704_);
lean_dec_ref(v___y_1704_);
v___x_1720_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__2));
v___x_1721_ = lean_string_append(v___x_1719_, v___x_1720_);
v___y_1698_ = v___x_1714_;
v___y_1699_ = v___x_1721_;
goto v___jp_1697_;
}
else
{
lean_object* v___x_1722_; 
lean_dec_ref(v___y_1704_);
v___x_1722_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___y_1698_ = v___x_1714_;
v___y_1699_ = v___x_1722_;
goto v___jp_1697_;
}
}
v___jp_1723_:
{
lean_object* v___x_1725_; 
v___x_1725_ = l_Lasm_JS_Data_describe(v_d_1695_);
v___y_1704_ = v___y_1724_;
v_received_1705_ = v___x_1725_;
goto v___jp_1703_;
}
v___jp_1726_:
{
if (lean_obj_tag(v_d_1695_) == 9)
{
lean_object* v_value_1728_; lean_object* v_description_1729_; lean_object* v___x_1730_; uint8_t v___x_1731_; 
v_value_1728_ = lean_ctor_get(v_d_1695_, 0);
v_description_1729_ = lean_ctor_get(v_d_1695_, 1);
v___x_1730_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1731_ = lean_string_dec_eq(v_description_1729_, v___x_1730_);
if (v___x_1731_ == 0)
{
v___y_1724_ = v_a_1727_;
goto v___jp_1723_;
}
else
{
lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1748_; 
lean_inc(v_value_1728_);
v_isSharedCheck_1748_ = !lean_is_exclusive(v_d_1695_);
if (v_isSharedCheck_1748_ == 0)
{
lean_object* v_unused_1749_; lean_object* v_unused_1750_; 
v_unused_1749_ = lean_ctor_get(v_d_1695_, 1);
lean_dec(v_unused_1749_);
v_unused_1750_ = lean_ctor_get(v_d_1695_, 0);
lean_dec(v_unused_1750_);
v___x_1733_ = v_d_1695_;
v_isShared_1734_ = v_isSharedCheck_1748_;
goto v_resetjp_1732_;
}
else
{
lean_dec(v_d_1695_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1748_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
uint32_t v___x_1735_; uint64_t v___x_1736_; lean_object* v___x_1738_; 
v___x_1735_ = 206;
v___x_1736_ = 0ULL;
lean_inc(v_value_1728_);
if (v_isShared_1734_ == 0)
{
lean_ctor_set(v___x_1733_, 1, v___x_1730_);
v___x_1738_ = v___x_1733_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_value_1728_);
lean_ctor_set(v_reuseFailAlloc_1747_, 1, v___x_1730_);
v___x_1738_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
uint32_t v___x_1739_; lean_object* v___x_1740_; 
v___x_1739_ = lasm_js_value_handle(v_value_1728_);
lean_dec(v_value_1728_);
v___x_1740_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1735_, v___x_1736_, v___x_1738_, v___x_1739_);
lean_dec_ref(v___x_1738_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; uint8_t v___x_1742_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_a_1741_);
lean_dec_ref_known(v___x_1740_, 1);
v___x_1742_ = lean_string_validate_utf8(v_a_1741_);
if (v___x_1742_ == 0)
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
lean_dec(v_a_1741_);
v___x_1743_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_1744_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1743_);
v___y_1704_ = v_a_1727_;
v_received_1705_ = v___x_1744_;
goto v___jp_1703_;
}
else
{
lean_object* v___x_1745_; 
v___x_1745_ = lean_string_from_utf8_unchecked(v_a_1741_);
v___y_1704_ = v_a_1727_;
v_received_1705_ = v___x_1745_;
goto v___jp_1703_;
}
}
else
{
lean_object* v___x_1746_; 
lean_dec_ref_known(v___x_1740_, 1);
v___x_1746_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v___y_1704_ = v_a_1727_;
v_received_1705_ = v___x_1746_;
goto v___jp_1703_;
}
}
}
}
}
else
{
v___y_1724_ = v_a_1727_;
goto v___jp_1723_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0___boxed(lean_object* v_context_1773_, lean_object* v_d_1774_, lean_object* v_a_1775_){
_start:
{
lean_object* v_res_1776_; 
v_res_1776_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0(v_context_1773_, v_d_1774_);
lean_dec_ref(v_context_1773_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0(lean_object* v_b_1777_, lean_object* v_args_1778_, uint8_t v_await_1779_){
_start:
{
uint64_t v___y_1782_; uint64_t v___y_1783_; uint64_t v___x_1826_; uint64_t v___y_1828_; 
v___x_1826_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_1779_ == 0)
{
uint64_t v___x_1833_; 
v___x_1833_ = 0ULL;
v___y_1828_ = v___x_1833_;
goto v___jp_1827_;
}
else
{
uint64_t v___x_1834_; 
v___x_1834_ = 2ULL;
v___y_1828_ = v___x_1834_;
goto v___jp_1827_;
}
v___jp_1781_:
{
uint64_t v_flags_1784_; uint32_t v___x_1785_; lean_object* v___x_1786_; uint32_t v___x_1787_; lean_object* v___x_1788_; 
v_flags_1784_ = lean_uint64_lor(v___y_1782_, v___y_1783_);
v___x_1785_ = 214;
v___x_1786_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1777_, v_args_1778_);
v___x_1787_ = 0;
v___x_1788_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1785_, v_flags_1784_, v___x_1786_, v___x_1787_);
lean_dec(v___x_1786_);
if (lean_obj_tag(v___x_1788_) == 0)
{
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; lean_object* v___x_1790_; 
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_a_1789_);
lean_dec_ref_known(v___x_1788_, 1);
v___x_1790_ = l_Lasm_JS_Wire_decode(v_a_1789_);
lean_dec(v_a_1789_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v_a_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v_a_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1790_, 1);
v___x_1792_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1777_);
v___x_1793_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0_spec__0(v___x_1792_, v_a_1791_);
lean_dec_ref(v___x_1792_);
return v___x_1793_;
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
v_a_1794_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1790_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1790_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1799_; 
if (v_isShared_1797_ == 0)
{
v___x_1799_ = v___x_1796_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1794_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
else
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
v_a_1802_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1804_ = v___x_1788_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1788_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
lean_ctor_set_tag(v___x_1804_, 1);
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
else
{
lean_object* v_a_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1825_; 
v_a_1810_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1812_ = v___x_1788_;
v_isShared_1813_ = v_isSharedCheck_1825_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_a_1810_);
lean_dec(v___x_1788_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1825_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1823_; 
v___x_1814_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1815_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1777_);
v___x_1816_ = lean_string_append(v___x_1814_, v___x_1815_);
lean_dec_ref(v___x_1815_);
v___x_1817_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1818_ = lean_string_append(v___x_1816_, v___x_1817_);
v___x_1819_ = lean_io_error_to_string(v_a_1810_);
v___x_1820_ = lean_string_append(v___x_1818_, v___x_1819_);
lean_dec_ref(v___x_1819_);
v___x_1821_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1820_);
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 0, v___x_1821_);
v___x_1823_ = v___x_1812_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
}
v___jp_1827_:
{
uint8_t v_construct_1829_; uint64_t v___x_1830_; 
v_construct_1829_ = lean_ctor_get_uint8(v_b_1777_, sizeof(void*)*4);
v___x_1830_ = lean_uint64_lor(v___x_1826_, v___y_1828_);
if (v_construct_1829_ == 0)
{
uint64_t v___x_1831_; 
v___x_1831_ = 0ULL;
v___y_1782_ = v___x_1830_;
v___y_1783_ = v___x_1831_;
goto v___jp_1781_;
}
else
{
uint64_t v___x_1832_; 
v___x_1832_ = 4ULL;
v___y_1782_ = v___x_1830_;
v___y_1783_ = v___x_1832_;
goto v___jp_1781_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0___boxed(lean_object* v_b_1835_, lean_object* v_args_1836_, lean_object* v_await_1837_, lean_object* v_a_1838_){
_start:
{
uint8_t v_await_boxed_1839_; lean_object* v_res_1840_; 
v_await_boxed_1839_ = lean_unbox(v_await_1837_);
v_res_1840_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0(v_b_1835_, v_args_1836_, v_await_boxed_1839_);
lean_dec_ref(v_b_1835_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_childNodes(lean_object* v_a_1847_){
_start:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; uint8_t v___x_1854_; lean_object* v___x_1855_; 
v___x_1849_ = ((lean_object*)(l_Lasm_Web_Raw_childNodes___closed__1));
v___x_1850_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1851_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1852_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1852_, 0, v_a_1847_);
lean_ctor_set(v___x_1852_, 1, v___x_1851_);
v___x_1853_ = lean_array_push(v___x_1850_, v___x_1852_);
v___x_1854_ = 1;
v___x_1855_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_childNodes_spec__0(v___x_1849_, v___x_1853_, v___x_1854_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_childNodes___boxed(lean_object* v_a_1856_, lean_object* v_a_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l_Lasm_Web_Raw_childNodes(v_a_1856_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0(lean_object* v_context_1860_, lean_object* v_d_1861_){
_start:
{
lean_object* v___y_1864_; lean_object* v___y_1865_; 
if (lean_obj_tag(v_d_1861_) == 2)
{
uint8_t v_b_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v_b_1869_ = lean_ctor_get_uint8(v_d_1861_, 0);
lean_dec_ref_known(v_d_1861_, 0);
v___x_1870_ = lean_box(v_b_1869_);
v___x_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1871_, 0, v___x_1870_);
return v___x_1871_;
}
else
{
lean_object* v___x_1872_; lean_object* v_received_1874_; 
v___x_1872_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_1861_) == 9)
{
lean_object* v_value_1888_; lean_object* v_description_1889_; uint8_t v___x_1890_; 
v_value_1888_ = lean_ctor_get(v_d_1861_, 0);
v_description_1889_ = lean_ctor_get(v_d_1861_, 1);
v___x_1890_ = lean_string_dec_eq(v_description_1889_, v___x_1872_);
if (v___x_1890_ == 0)
{
goto v___jp_1886_;
}
else
{
uint32_t v___x_1891_; uint64_t v___x_1892_; lean_object* v___x_1893_; uint32_t v___x_1894_; lean_object* v___x_1895_; 
lean_inc_n(v_value_1888_, 2);
lean_dec_ref_known(v_d_1861_, 2);
v___x_1891_ = 206;
v___x_1892_ = 0ULL;
v___x_1893_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1893_, 0, v_value_1888_);
lean_ctor_set(v___x_1893_, 1, v___x_1872_);
v___x_1894_ = lasm_js_value_handle(v_value_1888_);
lean_dec(v_value_1888_);
v___x_1895_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1891_, v___x_1892_, v___x_1893_, v___x_1894_);
lean_dec_ref_known(v___x_1893_, 2);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_a_1896_; uint8_t v___x_1897_; 
v_a_1896_ = lean_ctor_get(v___x_1895_, 0);
lean_inc(v_a_1896_);
lean_dec_ref_known(v___x_1895_, 1);
v___x_1897_ = lean_string_validate_utf8(v_a_1896_);
if (v___x_1897_ == 0)
{
lean_object* v___x_1898_; lean_object* v___x_1899_; 
lean_dec(v_a_1896_);
v___x_1898_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_1899_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1898_);
v_received_1874_ = v___x_1899_;
goto v___jp_1873_;
}
else
{
lean_object* v___x_1900_; 
v___x_1900_ = lean_string_from_utf8_unchecked(v_a_1896_);
v_received_1874_ = v___x_1900_;
goto v___jp_1873_;
}
}
else
{
lean_object* v___x_1901_; 
lean_dec_ref_known(v___x_1895_, 1);
v___x_1901_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_1874_ = v___x_1901_;
goto v___jp_1873_;
}
}
}
else
{
goto v___jp_1886_;
}
v___jp_1873_:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; uint8_t v___x_1884_; 
v___x_1875_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1876_ = lean_string_append(v___x_1875_, v_context_1860_);
v___x_1877_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_1878_ = lean_string_append(v___x_1876_, v___x_1877_);
v___x_1879_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0___closed__0));
v___x_1880_ = lean_string_append(v___x_1878_, v___x_1879_);
v___x_1881_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_1882_ = lean_string_append(v___x_1880_, v___x_1881_);
v___x_1883_ = lean_string_append(v___x_1882_, v_received_1874_);
lean_dec_ref(v_received_1874_);
v___x_1884_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_1884_ == 0)
{
lean_object* v___x_1885_; 
v___x_1885_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_1864_ = v___x_1883_;
v___y_1865_ = v___x_1885_;
goto v___jp_1863_;
}
else
{
v___y_1864_ = v___x_1883_;
v___y_1865_ = v___x_1872_;
goto v___jp_1863_;
}
}
v___jp_1886_:
{
lean_object* v___x_1887_; 
v___x_1887_ = l_Lasm_JS_Data_describe(v_d_1861_);
v_received_1874_ = v___x_1887_;
goto v___jp_1873_;
}
}
v___jp_1863_:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1866_ = lean_string_append(v___y_1864_, v___y_1865_);
v___x_1867_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1866_);
v___x_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1867_);
return v___x_1868_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0___boxed(lean_object* v_context_1902_, lean_object* v_d_1903_, lean_object* v_a_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0(v_context_1902_, v_d_1903_);
lean_dec_ref(v_context_1902_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(lean_object* v_b_1906_, lean_object* v_args_1907_, uint8_t v_await_1908_){
_start:
{
uint64_t v___y_1911_; uint64_t v___y_1912_; uint64_t v___x_1955_; uint64_t v___y_1957_; 
v___x_1955_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_1908_ == 0)
{
uint64_t v___x_1962_; 
v___x_1962_ = 0ULL;
v___y_1957_ = v___x_1962_;
goto v___jp_1956_;
}
else
{
uint64_t v___x_1963_; 
v___x_1963_ = 2ULL;
v___y_1957_ = v___x_1963_;
goto v___jp_1956_;
}
v___jp_1910_:
{
uint64_t v_flags_1913_; uint32_t v___x_1914_; lean_object* v___x_1915_; uint32_t v___x_1916_; lean_object* v___x_1917_; 
v_flags_1913_ = lean_uint64_lor(v___y_1911_, v___y_1912_);
v___x_1914_ = 214;
v___x_1915_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1906_, v_args_1907_);
v___x_1916_ = 0;
v___x_1917_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1914_, v_flags_1913_, v___x_1915_, v___x_1916_);
lean_dec(v___x_1915_);
if (lean_obj_tag(v___x_1917_) == 0)
{
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; lean_object* v___x_1919_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
lean_dec_ref_known(v___x_1917_, 1);
v___x_1919_ = l_Lasm_JS_Wire_decode(v_a_1918_);
lean_dec(v_a_1918_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1919_, 1);
v___x_1921_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1906_);
v___x_1922_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0_spec__0(v___x_1921_, v_a_1920_);
lean_dec_ref(v___x_1921_);
return v___x_1922_;
}
else
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1930_; 
v_a_1923_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1925_ = v___x_1919_;
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1919_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1928_; 
if (v_isShared_1926_ == 0)
{
v___x_1928_ = v___x_1925_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_a_1923_);
v___x_1928_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
return v___x_1928_;
}
}
}
}
else
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
v_a_1931_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1917_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1917_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1936_; 
if (v_isShared_1934_ == 0)
{
lean_ctor_set_tag(v___x_1933_, 1);
v___x_1936_ = v___x_1933_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_a_1931_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
}
else
{
lean_object* v_a_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1954_; 
v_a_1939_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1941_ = v___x_1917_;
v_isShared_1942_ = v_isSharedCheck_1954_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_a_1939_);
lean_dec(v___x_1917_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1954_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1952_; 
v___x_1943_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_1944_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1906_);
v___x_1945_ = lean_string_append(v___x_1943_, v___x_1944_);
lean_dec_ref(v___x_1944_);
v___x_1946_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_1947_ = lean_string_append(v___x_1945_, v___x_1946_);
v___x_1948_ = lean_io_error_to_string(v_a_1939_);
v___x_1949_ = lean_string_append(v___x_1947_, v___x_1948_);
lean_dec_ref(v___x_1948_);
v___x_1950_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1949_);
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 0, v___x_1950_);
v___x_1952_ = v___x_1941_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v___x_1950_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
}
v___jp_1956_:
{
uint8_t v_construct_1958_; uint64_t v___x_1959_; 
v_construct_1958_ = lean_ctor_get_uint8(v_b_1906_, sizeof(void*)*4);
v___x_1959_ = lean_uint64_lor(v___x_1955_, v___y_1957_);
if (v_construct_1958_ == 0)
{
uint64_t v___x_1960_; 
v___x_1960_ = 0ULL;
v___y_1911_ = v___x_1959_;
v___y_1912_ = v___x_1960_;
goto v___jp_1910_;
}
else
{
uint64_t v___x_1961_; 
v___x_1961_ = 4ULL;
v___y_1911_ = v___x_1959_;
v___y_1912_ = v___x_1961_;
goto v___jp_1910_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0___boxed(lean_object* v_b_1964_, lean_object* v_args_1965_, lean_object* v_await_1966_, lean_object* v_a_1967_){
_start:
{
uint8_t v_await_boxed_1968_; lean_object* v_res_1969_; 
v_await_boxed_1968_ = lean_unbox(v_await_1966_);
v_res_1969_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v_b_1964_, v_args_1965_, v_await_boxed_1968_);
lean_dec_ref(v_b_1964_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_contains(lean_object* v_a_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; uint8_t v___x_1986_; lean_object* v___x_1987_; 
v___x_1979_ = ((lean_object*)(l_Lasm_Web_Raw_contains___closed__1));
v___x_1980_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_1981_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_1982_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1982_, 0, v_a_1976_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
v___x_1983_ = lean_array_push(v___x_1980_, v___x_1982_);
v___x_1984_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1984_, 0, v_a_1977_);
lean_ctor_set(v___x_1984_, 1, v___x_1981_);
v___x_1985_ = lean_array_push(v___x_1983_, v___x_1984_);
v___x_1986_ = 1;
v___x_1987_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_1979_, v___x_1985_, v___x_1986_);
return v___x_1987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_contains___boxed(lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_){
_start:
{
lean_object* v_res_1991_; 
v_res_1991_ = l_Lasm_Web_Raw_contains(v_a_1988_, v_a_1989_);
return v_res_1991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0(lean_object* v_context_1993_, lean_object* v_d_1994_){
_start:
{
lean_object* v___y_1997_; lean_object* v___y_1998_; 
if (lean_obj_tag(v_d_1994_) == 9)
{
lean_object* v_value_2002_; lean_object* v___x_2003_; 
v_value_2002_ = lean_ctor_get(v_d_1994_, 0);
lean_inc(v_value_2002_);
lean_dec_ref_known(v_d_1994_, 2);
v___x_2003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2003_, 0, v_value_2002_);
return v___x_2003_;
}
else
{
lean_object* v___x_2004_; lean_object* v_received_2006_; 
v___x_2004_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_1994_) == 9)
{
lean_object* v_value_2020_; lean_object* v_description_2021_; uint8_t v___x_2022_; 
v_value_2020_ = lean_ctor_get(v_d_1994_, 0);
v_description_2021_ = lean_ctor_get(v_d_1994_, 1);
v___x_2022_ = lean_string_dec_eq(v_description_2021_, v___x_2004_);
if (v___x_2022_ == 0)
{
goto v___jp_2018_;
}
else
{
uint32_t v___x_2023_; uint64_t v___x_2024_; lean_object* v___x_2025_; uint32_t v___x_2026_; lean_object* v___x_2027_; 
lean_inc_n(v_value_2020_, 2);
lean_dec_ref_known(v_d_1994_, 2);
v___x_2023_ = 206;
v___x_2024_ = 0ULL;
v___x_2025_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2025_, 0, v_value_2020_);
lean_ctor_set(v___x_2025_, 1, v___x_2004_);
v___x_2026_ = lasm_js_value_handle(v_value_2020_);
lean_dec(v_value_2020_);
v___x_2027_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2023_, v___x_2024_, v___x_2025_, v___x_2026_);
lean_dec_ref_known(v___x_2025_, 2);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v_a_2028_; uint8_t v___x_2029_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
lean_inc(v_a_2028_);
lean_dec_ref_known(v___x_2027_, 1);
v___x_2029_ = lean_string_validate_utf8(v_a_2028_);
if (v___x_2029_ == 0)
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
lean_dec(v_a_2028_);
v___x_2030_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_2031_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2030_);
v_received_2006_ = v___x_2031_;
goto v___jp_2005_;
}
else
{
lean_object* v___x_2032_; 
v___x_2032_ = lean_string_from_utf8_unchecked(v_a_2028_);
v_received_2006_ = v___x_2032_;
goto v___jp_2005_;
}
}
else
{
lean_object* v___x_2033_; 
lean_dec_ref_known(v___x_2027_, 1);
v___x_2033_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_2006_ = v___x_2033_;
goto v___jp_2005_;
}
}
}
else
{
goto v___jp_2018_;
}
v___jp_2005_:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; uint8_t v___x_2016_; 
v___x_2007_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_2008_ = lean_string_append(v___x_2007_, v_context_1993_);
v___x_2009_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_2010_ = lean_string_append(v___x_2008_, v___x_2009_);
v___x_2011_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0___closed__0));
v___x_2012_ = lean_string_append(v___x_2010_, v___x_2011_);
v___x_2013_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2014_ = lean_string_append(v___x_2012_, v___x_2013_);
v___x_2015_ = lean_string_append(v___x_2014_, v_received_2006_);
lean_dec_ref(v_received_2006_);
v___x_2016_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_2016_ == 0)
{
lean_object* v___x_2017_; 
v___x_2017_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_1997_ = v___x_2015_;
v___y_1998_ = v___x_2017_;
goto v___jp_1996_;
}
else
{
v___y_1997_ = v___x_2015_;
v___y_1998_ = v___x_2004_;
goto v___jp_1996_;
}
}
v___jp_2018_:
{
lean_object* v___x_2019_; 
v___x_2019_ = l_Lasm_JS_Data_describe(v_d_1994_);
v_received_2006_ = v___x_2019_;
goto v___jp_2005_;
}
}
v___jp_1996_:
{
lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1999_ = lean_string_append(v___y_1997_, v___y_1998_);
v___x_2000_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1999_);
v___x_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2001_, 0, v___x_2000_);
return v___x_2001_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0___boxed(lean_object* v_context_2034_, lean_object* v_d_2035_, lean_object* v_a_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0(v_context_2034_, v_d_2035_);
lean_dec_ref(v_context_2034_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0(lean_object* v_b_2038_, lean_object* v_args_2039_, uint8_t v_await_2040_){
_start:
{
uint64_t v___y_2043_; uint64_t v___y_2044_; uint64_t v___x_2087_; uint64_t v___y_2089_; 
v___x_2087_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_2040_ == 0)
{
uint64_t v___x_2094_; 
v___x_2094_ = 0ULL;
v___y_2089_ = v___x_2094_;
goto v___jp_2088_;
}
else
{
uint64_t v___x_2095_; 
v___x_2095_ = 2ULL;
v___y_2089_ = v___x_2095_;
goto v___jp_2088_;
}
v___jp_2042_:
{
uint64_t v_flags_2045_; uint32_t v___x_2046_; lean_object* v___x_2047_; uint32_t v___x_2048_; lean_object* v___x_2049_; 
v_flags_2045_ = lean_uint64_lor(v___y_2043_, v___y_2044_);
v___x_2046_ = 214;
v___x_2047_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2038_, v_args_2039_);
v___x_2048_ = 0;
v___x_2049_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2046_, v_flags_2045_, v___x_2047_, v___x_2048_);
lean_dec(v___x_2047_);
if (lean_obj_tag(v___x_2049_) == 0)
{
if (lean_obj_tag(v___x_2049_) == 0)
{
lean_object* v_a_2050_; lean_object* v___x_2051_; 
v_a_2050_ = lean_ctor_get(v___x_2049_, 0);
lean_inc(v_a_2050_);
lean_dec_ref_known(v___x_2049_, 1);
v___x_2051_ = l_Lasm_JS_Wire_decode(v_a_2050_);
lean_dec(v_a_2050_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
lean_inc(v_a_2052_);
lean_dec_ref_known(v___x_2051_, 1);
v___x_2053_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2038_);
v___x_2054_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0_spec__0(v___x_2053_, v_a_2052_);
lean_dec_ref(v___x_2053_);
return v___x_2054_;
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
v_a_2055_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_2051_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2051_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
v_a_2063_ = lean_ctor_get(v___x_2049_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2049_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2049_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
lean_ctor_set_tag(v___x_2065_, 1);
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
else
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2086_; 
v_a_2071_ = lean_ctor_get(v___x_2049_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2073_ = v___x_2049_;
v_isShared_2074_ = v_isSharedCheck_2086_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_2049_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2086_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2084_; 
v___x_2075_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_2076_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2038_);
v___x_2077_ = lean_string_append(v___x_2075_, v___x_2076_);
lean_dec_ref(v___x_2076_);
v___x_2078_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_2079_ = lean_string_append(v___x_2077_, v___x_2078_);
v___x_2080_ = lean_io_error_to_string(v_a_2071_);
v___x_2081_ = lean_string_append(v___x_2079_, v___x_2080_);
lean_dec_ref(v___x_2080_);
v___x_2082_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 0, v___x_2082_);
v___x_2084_ = v___x_2073_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v___x_2082_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
}
v___jp_2088_:
{
uint8_t v_construct_2090_; uint64_t v___x_2091_; 
v_construct_2090_ = lean_ctor_get_uint8(v_b_2038_, sizeof(void*)*4);
v___x_2091_ = lean_uint64_lor(v___x_2087_, v___y_2089_);
if (v_construct_2090_ == 0)
{
uint64_t v___x_2092_; 
v___x_2092_ = 0ULL;
v___y_2043_ = v___x_2091_;
v___y_2044_ = v___x_2092_;
goto v___jp_2042_;
}
else
{
uint64_t v___x_2093_; 
v___x_2093_ = 4ULL;
v___y_2043_ = v___x_2091_;
v___y_2044_ = v___x_2093_;
goto v___jp_2042_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0___boxed(lean_object* v_b_2096_, lean_object* v_args_2097_, lean_object* v_await_2098_, lean_object* v_a_2099_){
_start:
{
uint8_t v_await_boxed_2100_; lean_object* v_res_2101_; 
v_await_boxed_2100_ = lean_unbox(v_await_2098_);
v_res_2101_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0(v_b_2096_, v_args_2097_, v_await_boxed_2100_);
lean_dec_ref(v_b_2096_);
return v_res_2101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cloneNode(lean_object* v_a_2108_, uint8_t v_a_2109_){
_start:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; uint8_t v___x_2118_; lean_object* v___x_2119_; 
v___x_2111_ = ((lean_object*)(l_Lasm_Web_Raw_cloneNode___closed__1));
v___x_2112_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2113_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2114_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2114_, 0, v_a_2108_);
lean_ctor_set(v___x_2114_, 1, v___x_2113_);
v___x_2115_ = lean_array_push(v___x_2112_, v___x_2114_);
v___x_2116_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2116_, 0, v_a_2109_);
v___x_2117_ = lean_array_push(v___x_2115_, v___x_2116_);
v___x_2118_ = 1;
v___x_2119_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_cloneNode_spec__0(v___x_2111_, v___x_2117_, v___x_2118_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cloneNode___boxed(lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_){
_start:
{
uint8_t v_a_743__boxed_2123_; lean_object* v_res_2124_; 
v_a_743__boxed_2123_ = lean_unbox(v_a_2121_);
v_res_2124_ = l_Lasm_Web_Raw_cloneNode(v_a_2120_, v_a_743__boxed_2123_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_isConnected(lean_object* v_a_2131_){
_start:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; uint8_t v___x_2138_; lean_object* v___x_2139_; 
v___x_2133_ = ((lean_object*)(l_Lasm_Web_Raw_isConnected___closed__1));
v___x_2134_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2135_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2136_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2136_, 0, v_a_2131_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = lean_array_push(v___x_2134_, v___x_2136_);
v___x_2138_ = 1;
v___x_2139_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2133_, v___x_2137_, v___x_2138_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_isConnected___boxed(lean_object* v_a_2140_, lean_object* v_a_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_Lasm_Web_Raw_isConnected(v_a_2140_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nodeName(lean_object* v_a_2149_){
_start:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; uint8_t v___x_2156_; lean_object* v___x_2157_; 
v___x_2151_ = ((lean_object*)(l_Lasm_Web_Raw_nodeName___closed__1));
v___x_2152_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2153_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2154_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2154_, 0, v_a_2149_);
lean_ctor_set(v___x_2154_, 1, v___x_2153_);
v___x_2155_ = lean_array_push(v___x_2152_, v___x_2154_);
v___x_2156_ = 1;
v___x_2157_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2151_, v___x_2155_, v___x_2156_);
return v___x_2157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nodeName___boxed(lean_object* v_a_2158_, lean_object* v_a_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l_Lasm_Web_Raw_nodeName(v_a_2158_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_tagName(lean_object* v_a_2167_){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; uint8_t v___x_2174_; lean_object* v___x_2175_; 
v___x_2169_ = ((lean_object*)(l_Lasm_Web_Raw_tagName___closed__1));
v___x_2170_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2171_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2172_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2172_, 0, v_a_2167_);
lean_ctor_set(v___x_2172_, 1, v___x_2171_);
v___x_2173_ = lean_array_push(v___x_2170_, v___x_2172_);
v___x_2174_ = 1;
v___x_2175_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2169_, v___x_2173_, v___x_2174_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_tagName___boxed(lean_object* v_a_2176_, lean_object* v_a_2177_){
_start:
{
lean_object* v_res_2178_; 
v_res_2178_ = l_Lasm_Web_Raw_tagName(v_a_2176_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_children(lean_object* v_a_2185_){
_start:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; uint8_t v___x_2192_; lean_object* v___x_2193_; 
v___x_2187_ = ((lean_object*)(l_Lasm_Web_Raw_children___closed__1));
v___x_2188_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2189_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2190_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2190_, 0, v_a_2185_);
lean_ctor_set(v___x_2190_, 1, v___x_2189_);
v___x_2191_ = lean_array_push(v___x_2188_, v___x_2190_);
v___x_2192_ = 1;
v___x_2193_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0(v___x_2187_, v___x_2191_, v___x_2192_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_children___boxed(lean_object* v_a_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l_Lasm_Web_Raw_children(v_a_2194_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0(lean_object* v_context_2198_, lean_object* v_d_2199_){
_start:
{
lean_object* v___y_2205_; lean_object* v___y_2206_; 
switch(lean_obj_tag(v_d_2199_))
{
case 1:
{
goto v___jp_2201_;
}
case 0:
{
goto v___jp_2201_;
}
default: 
{
if (lean_obj_tag(v_d_2199_) == 4)
{
lean_object* v_s_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v_s_2210_ = lean_ctor_get(v_d_2199_, 0);
lean_inc_ref(v_s_2210_);
lean_dec_ref_known(v_d_2199_, 1);
v___x_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2211_, 0, v_s_2210_);
v___x_2212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2211_);
return v___x_2212_;
}
else
{
lean_object* v___x_2213_; lean_object* v_received_2215_; 
v___x_2213_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_2199_) == 9)
{
lean_object* v_value_2229_; lean_object* v_description_2230_; uint8_t v___x_2231_; 
v_value_2229_ = lean_ctor_get(v_d_2199_, 0);
v_description_2230_ = lean_ctor_get(v_d_2199_, 1);
v___x_2231_ = lean_string_dec_eq(v_description_2230_, v___x_2213_);
if (v___x_2231_ == 0)
{
goto v___jp_2227_;
}
else
{
uint32_t v___x_2232_; uint64_t v___x_2233_; lean_object* v___x_2234_; uint32_t v___x_2235_; lean_object* v___x_2236_; 
lean_inc_n(v_value_2229_, 2);
lean_dec_ref_known(v_d_2199_, 2);
v___x_2232_ = 206;
v___x_2233_ = 0ULL;
v___x_2234_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2234_, 0, v_value_2229_);
lean_ctor_set(v___x_2234_, 1, v___x_2213_);
v___x_2235_ = lasm_js_value_handle(v_value_2229_);
lean_dec(v_value_2229_);
v___x_2236_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2232_, v___x_2233_, v___x_2234_, v___x_2235_);
lean_dec_ref_known(v___x_2234_, 2);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v_a_2237_; uint8_t v___x_2238_; 
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
lean_inc(v_a_2237_);
lean_dec_ref_known(v___x_2236_, 1);
v___x_2238_ = lean_string_validate_utf8(v_a_2237_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; lean_object* v___x_2240_; 
lean_dec(v_a_2237_);
v___x_2239_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_2240_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2239_);
v_received_2215_ = v___x_2240_;
goto v___jp_2214_;
}
else
{
lean_object* v___x_2241_; 
v___x_2241_ = lean_string_from_utf8_unchecked(v_a_2237_);
v_received_2215_ = v___x_2241_;
goto v___jp_2214_;
}
}
else
{
lean_object* v___x_2242_; 
lean_dec_ref_known(v___x_2236_, 1);
v___x_2242_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v_received_2215_ = v___x_2242_;
goto v___jp_2214_;
}
}
}
else
{
goto v___jp_2227_;
}
v___jp_2214_:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; uint8_t v___x_2225_; 
v___x_2216_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_2217_ = lean_string_append(v___x_2216_, v_context_2198_);
v___x_2218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_2219_ = lean_string_append(v___x_2217_, v___x_2218_);
v___x_2220_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0___closed__0));
v___x_2221_ = lean_string_append(v___x_2219_, v___x_2220_);
v___x_2222_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_2223_ = lean_string_append(v___x_2221_, v___x_2222_);
v___x_2224_ = lean_string_append(v___x_2223_, v_received_2215_);
lean_dec_ref(v_received_2215_);
v___x_2225_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_2225_ == 0)
{
lean_object* v___x_2226_; 
v___x_2226_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___y_2205_ = v___x_2224_;
v___y_2206_ = v___x_2226_;
goto v___jp_2204_;
}
else
{
v___y_2205_ = v___x_2224_;
v___y_2206_ = v___x_2213_;
goto v___jp_2204_;
}
}
v___jp_2227_:
{
lean_object* v___x_2228_; 
v___x_2228_ = l_Lasm_JS_Data_describe(v_d_2199_);
v_received_2215_ = v___x_2228_;
goto v___jp_2214_;
}
}
}
}
v___jp_2201_:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2202_ = lean_box(0);
v___x_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
return v___x_2203_;
}
v___jp_2204_:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2207_ = lean_string_append(v___y_2205_, v___y_2206_);
v___x_2208_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2207_);
v___x_2209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2208_);
return v___x_2209_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0___boxed(lean_object* v_context_2243_, lean_object* v_d_2244_, lean_object* v_a_2245_){
_start:
{
lean_object* v_res_2246_; 
v_res_2246_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0(v_context_2243_, v_d_2244_);
lean_dec_ref(v_context_2243_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0(lean_object* v_b_2247_, lean_object* v_args_2248_, uint8_t v_await_2249_){
_start:
{
uint64_t v___y_2252_; uint64_t v___y_2253_; uint64_t v___x_2296_; uint64_t v___y_2298_; 
v___x_2296_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_2249_ == 0)
{
uint64_t v___x_2303_; 
v___x_2303_ = 0ULL;
v___y_2298_ = v___x_2303_;
goto v___jp_2297_;
}
else
{
uint64_t v___x_2304_; 
v___x_2304_ = 2ULL;
v___y_2298_ = v___x_2304_;
goto v___jp_2297_;
}
v___jp_2251_:
{
uint64_t v_flags_2254_; uint32_t v___x_2255_; lean_object* v___x_2256_; uint32_t v___x_2257_; lean_object* v___x_2258_; 
v_flags_2254_ = lean_uint64_lor(v___y_2252_, v___y_2253_);
v___x_2255_ = 214;
v___x_2256_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2247_, v_args_2248_);
v___x_2257_ = 0;
v___x_2258_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2255_, v_flags_2254_, v___x_2256_, v___x_2257_);
lean_dec(v___x_2256_);
if (lean_obj_tag(v___x_2258_) == 0)
{
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2260_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_a_2259_);
lean_dec_ref_known(v___x_2258_, 1);
v___x_2260_ = l_Lasm_JS_Wire_decode(v_a_2259_);
lean_dec(v_a_2259_);
if (lean_obj_tag(v___x_2260_) == 0)
{
lean_object* v_a_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v_a_2261_ = lean_ctor_get(v___x_2260_, 0);
lean_inc(v_a_2261_);
lean_dec_ref_known(v___x_2260_, 1);
v___x_2262_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2247_);
v___x_2263_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0_spec__0(v___x_2262_, v_a_2261_);
lean_dec_ref(v___x_2262_);
return v___x_2263_;
}
else
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2271_; 
v_a_2264_ = lean_ctor_get(v___x_2260_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2266_ = v___x_2260_;
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2260_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2269_; 
if (v_isShared_2267_ == 0)
{
v___x_2269_ = v___x_2266_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_a_2264_);
v___x_2269_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
return v___x_2269_;
}
}
}
}
else
{
lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2279_; 
v_a_2272_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2274_ = v___x_2258_;
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v___x_2258_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2277_; 
if (v_isShared_2275_ == 0)
{
lean_ctor_set_tag(v___x_2274_, 1);
v___x_2277_ = v___x_2274_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_a_2272_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
}
}
else
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2295_; 
v_a_2280_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2282_ = v___x_2258_;
v_isShared_2283_ = v_isSharedCheck_2295_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2258_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2295_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2293_; 
v___x_2284_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_2285_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2247_);
v___x_2286_ = lean_string_append(v___x_2284_, v___x_2285_);
lean_dec_ref(v___x_2285_);
v___x_2287_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_2288_ = lean_string_append(v___x_2286_, v___x_2287_);
v___x_2289_ = lean_io_error_to_string(v_a_2280_);
v___x_2290_ = lean_string_append(v___x_2288_, v___x_2289_);
lean_dec_ref(v___x_2289_);
v___x_2291_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2290_);
if (v_isShared_2283_ == 0)
{
lean_ctor_set(v___x_2282_, 0, v___x_2291_);
v___x_2293_ = v___x_2282_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v___x_2291_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
v___jp_2297_:
{
uint8_t v_construct_2299_; uint64_t v___x_2300_; 
v_construct_2299_ = lean_ctor_get_uint8(v_b_2247_, sizeof(void*)*4);
v___x_2300_ = lean_uint64_lor(v___x_2296_, v___y_2298_);
if (v_construct_2299_ == 0)
{
uint64_t v___x_2301_; 
v___x_2301_ = 0ULL;
v___y_2252_ = v___x_2300_;
v___y_2253_ = v___x_2301_;
goto v___jp_2251_;
}
else
{
uint64_t v___x_2302_; 
v___x_2302_ = 4ULL;
v___y_2252_ = v___x_2300_;
v___y_2253_ = v___x_2302_;
goto v___jp_2251_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0___boxed(lean_object* v_b_2305_, lean_object* v_args_2306_, lean_object* v_await_2307_, lean_object* v_a_2308_){
_start:
{
uint8_t v_await_boxed_2309_; lean_object* v_res_2310_; 
v_await_boxed_2309_ = lean_unbox(v_await_2307_);
v_res_2310_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0(v_b_2305_, v_args_2306_, v_await_boxed_2309_);
lean_dec_ref(v_b_2305_);
return v_res_2310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getAttribute(lean_object* v_a_2317_, lean_object* v_a_2318_){
_start:
{
lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; uint8_t v___x_2327_; lean_object* v___x_2328_; 
v___x_2320_ = ((lean_object*)(l_Lasm_Web_Raw_getAttribute___closed__1));
v___x_2321_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2322_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2323_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2323_, 0, v_a_2317_);
lean_ctor_set(v___x_2323_, 1, v___x_2322_);
v___x_2324_ = lean_array_push(v___x_2321_, v___x_2323_);
v___x_2325_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2325_, 0, v_a_2318_);
v___x_2326_ = lean_array_push(v___x_2324_, v___x_2325_);
v___x_2327_ = 1;
v___x_2328_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getAttribute_spec__0(v___x_2320_, v___x_2326_, v___x_2327_);
return v___x_2328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getAttribute___boxed(lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Lasm_Web_Raw_getAttribute(v_a_2329_, v_a_2330_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttribute(lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_){
_start:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; uint8_t v___x_2352_; lean_object* v___x_2353_; 
v___x_2343_ = ((lean_object*)(l_Lasm_Web_Raw_setAttribute___closed__1));
v___x_2344_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2345_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2346_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2346_, 0, v_a_2339_);
lean_ctor_set(v___x_2346_, 1, v___x_2345_);
v___x_2347_ = lean_array_push(v___x_2344_, v___x_2346_);
v___x_2348_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2348_, 0, v_a_2340_);
v___x_2349_ = lean_array_push(v___x_2347_, v___x_2348_);
v___x_2350_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2350_, 0, v_a_2341_);
v___x_2351_ = lean_array_push(v___x_2349_, v___x_2350_);
v___x_2352_ = 1;
v___x_2353_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2343_, v___x_2351_, v___x_2352_);
return v___x_2353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttribute___boxed(lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = l_Lasm_Web_Raw_setAttribute(v_a_2354_, v_a_2355_, v_a_2356_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(size_t v_sz_2359_, size_t v_i_2360_, lean_object* v_bs_2361_){
_start:
{
uint8_t v___x_2362_; 
v___x_2362_ = lean_usize_dec_lt(v_i_2360_, v_sz_2359_);
if (v___x_2362_ == 0)
{
return v_bs_2361_;
}
else
{
lean_object* v_v_2363_; lean_object* v_fst_2364_; lean_object* v_snd_2365_; lean_object* v___x_2366_; lean_object* v_bs_x27_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; size_t v___x_2375_; size_t v___x_2376_; lean_object* v___x_2377_; 
v_v_2363_ = lean_array_uget_borrowed(v_bs_2361_, v_i_2360_);
v_fst_2364_ = lean_ctor_get(v_v_2363_, 0);
lean_inc(v_fst_2364_);
v_snd_2365_ = lean_ctor_get(v_v_2363_, 1);
lean_inc(v_snd_2365_);
v___x_2366_ = lean_unsigned_to_nat(0u);
v_bs_x27_2367_ = lean_array_uset(v_bs_2361_, v_i_2360_, v___x_2366_);
v___x_2368_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2368_, 0, v_fst_2364_);
v___x_2369_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2369_, 0, v_snd_2365_);
v___x_2370_ = lean_unsigned_to_nat(2u);
v___x_2371_ = lean_mk_empty_array_with_capacity(v___x_2370_);
v___x_2372_ = lean_array_push(v___x_2371_, v___x_2368_);
v___x_2373_ = lean_array_push(v___x_2372_, v___x_2369_);
v___x_2374_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2373_);
v___x_2375_ = ((size_t)1ULL);
v___x_2376_ = lean_usize_add(v_i_2360_, v___x_2375_);
v___x_2377_ = lean_array_uset(v_bs_x27_2367_, v_i_2360_, v___x_2374_);
v_i_2360_ = v___x_2376_;
v_bs_2361_ = v___x_2377_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0___boxed(lean_object* v_sz_2379_, lean_object* v_i_2380_, lean_object* v_bs_2381_){
_start:
{
size_t v_sz_boxed_2382_; size_t v_i_boxed_2383_; lean_object* v_res_2384_; 
v_sz_boxed_2382_ = lean_unbox_usize(v_sz_2379_);
lean_dec(v_sz_2379_);
v_i_boxed_2383_ = lean_unbox_usize(v_i_2380_);
lean_dec(v_i_2380_);
v_res_2384_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(v_sz_boxed_2382_, v_i_boxed_2383_, v_bs_2381_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttributes(lean_object* v_a_2391_, lean_object* v_a_2392_){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; size_t v_sz_2399_; size_t v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; uint8_t v___x_2404_; lean_object* v___x_2405_; 
v___x_2394_ = ((lean_object*)(l_Lasm_Web_Raw_setAttributes___closed__1));
v___x_2395_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2396_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2397_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2397_, 0, v_a_2391_);
lean_ctor_set(v___x_2397_, 1, v___x_2396_);
v___x_2398_ = lean_array_push(v___x_2395_, v___x_2397_);
v_sz_2399_ = lean_array_size(v_a_2392_);
v___x_2400_ = ((size_t)0ULL);
v___x_2401_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(v_sz_2399_, v___x_2400_, v_a_2392_);
v___x_2402_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2401_);
v___x_2403_ = lean_array_push(v___x_2398_, v___x_2402_);
v___x_2404_ = 1;
v___x_2405_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2394_, v___x_2403_, v___x_2404_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setAttributes___boxed(lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l_Lasm_Web_Raw_setAttributes(v_a_2406_, v_a_2407_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeAttribute(lean_object* v_a_2416_, lean_object* v_a_2417_){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; uint8_t v___x_2426_; lean_object* v___x_2427_; 
v___x_2419_ = ((lean_object*)(l_Lasm_Web_Raw_removeAttribute___closed__1));
v___x_2420_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2421_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2422_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2422_, 0, v_a_2416_);
lean_ctor_set(v___x_2422_, 1, v___x_2421_);
v___x_2423_ = lean_array_push(v___x_2420_, v___x_2422_);
v___x_2424_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2424_, 0, v_a_2417_);
v___x_2425_ = lean_array_push(v___x_2423_, v___x_2424_);
v___x_2426_ = 1;
v___x_2427_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2419_, v___x_2425_, v___x_2426_);
return v___x_2427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeAttribute___boxed(lean_object* v_a_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l_Lasm_Web_Raw_removeAttribute(v_a_2428_, v_a_2429_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_hasAttribute(lean_object* v_a_2438_, lean_object* v_a_2439_){
_start:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; uint8_t v___x_2448_; lean_object* v___x_2449_; 
v___x_2441_ = ((lean_object*)(l_Lasm_Web_Raw_hasAttribute___closed__1));
v___x_2442_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2443_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2444_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2444_, 0, v_a_2438_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = lean_array_push(v___x_2442_, v___x_2444_);
v___x_2446_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2446_, 0, v_a_2439_);
v___x_2447_ = lean_array_push(v___x_2445_, v___x_2446_);
v___x_2448_ = 1;
v___x_2449_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2441_, v___x_2447_, v___x_2448_);
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_hasAttribute___boxed(lean_object* v_a_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_){
_start:
{
lean_object* v_res_2453_; 
v_res_2453_ = l_Lasm_Web_Raw_hasAttribute(v_a_2450_, v_a_2451_);
return v_res_2453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_toggleAttribute(lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_){
_start:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___y_2472_; 
v___x_2464_ = ((lean_object*)(l_Lasm_Web_Raw_toggleAttribute___closed__1));
v___x_2465_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2466_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2467_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2467_, 0, v_a_2460_);
lean_ctor_set(v___x_2467_, 1, v___x_2466_);
v___x_2468_ = lean_array_push(v___x_2465_, v___x_2467_);
v___x_2469_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2469_, 0, v_a_2461_);
v___x_2470_ = lean_array_push(v___x_2468_, v___x_2469_);
if (lean_obj_tag(v_a_2462_) == 0)
{
lean_object* v___x_2476_; 
v___x_2476_ = lean_box(1);
v___y_2472_ = v___x_2476_;
goto v___jp_2471_;
}
else
{
lean_object* v_val_2477_; lean_object* v___x_2478_; uint8_t v___x_2479_; 
v_val_2477_ = lean_ctor_get(v_a_2462_, 0);
v___x_2478_ = lean_alloc_ctor(2, 0, 1);
v___x_2479_ = lean_unbox(v_val_2477_);
lean_ctor_set_uint8(v___x_2478_, 0, v___x_2479_);
v___y_2472_ = v___x_2478_;
goto v___jp_2471_;
}
v___jp_2471_:
{
lean_object* v___x_2473_; uint8_t v___x_2474_; lean_object* v___x_2475_; 
v___x_2473_ = lean_array_push(v___x_2470_, v___y_2472_);
v___x_2474_ = 1;
v___x_2475_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2464_, v___x_2473_, v___x_2474_);
return v___x_2475_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_toggleAttribute___boxed(lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_Lasm_Web_Raw_toggleAttribute(v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v_a_2482_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(size_t v_sz_2485_, size_t v_i_2486_, lean_object* v_bs_2487_){
_start:
{
uint8_t v___x_2488_; 
v___x_2488_ = lean_usize_dec_lt(v_i_2486_, v_sz_2485_);
if (v___x_2488_ == 0)
{
return v_bs_2487_;
}
else
{
lean_object* v_v_2489_; lean_object* v___x_2490_; lean_object* v_bs_x27_2491_; lean_object* v___x_2492_; size_t v___x_2493_; size_t v___x_2494_; lean_object* v___x_2495_; 
v_v_2489_ = lean_array_uget(v_bs_2487_, v_i_2486_);
v___x_2490_ = lean_unsigned_to_nat(0u);
v_bs_x27_2491_ = lean_array_uset(v_bs_2487_, v_i_2486_, v___x_2490_);
v___x_2492_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2492_, 0, v_v_2489_);
v___x_2493_ = ((size_t)1ULL);
v___x_2494_ = lean_usize_add(v_i_2486_, v___x_2493_);
v___x_2495_ = lean_array_uset(v_bs_x27_2491_, v_i_2486_, v___x_2492_);
v_i_2486_ = v___x_2494_;
v_bs_2487_ = v___x_2495_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0___boxed(lean_object* v_sz_2497_, lean_object* v_i_2498_, lean_object* v_bs_2499_){
_start:
{
size_t v_sz_boxed_2500_; size_t v_i_boxed_2501_; lean_object* v_res_2502_; 
v_sz_boxed_2500_ = lean_unbox_usize(v_sz_2497_);
lean_dec(v_sz_2497_);
v_i_boxed_2501_ = lean_unbox_usize(v_i_2498_);
lean_dec(v_i_2498_);
v_res_2502_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(v_sz_boxed_2500_, v_i_boxed_2501_, v_bs_2499_);
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classAdd(lean_object* v_a_2509_, lean_object* v_a_2510_){
_start:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; size_t v_sz_2517_; size_t v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; uint8_t v___x_2522_; lean_object* v___x_2523_; 
v___x_2512_ = ((lean_object*)(l_Lasm_Web_Raw_classAdd___closed__1));
v___x_2513_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2514_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2515_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2515_, 0, v_a_2509_);
lean_ctor_set(v___x_2515_, 1, v___x_2514_);
v___x_2516_ = lean_array_push(v___x_2513_, v___x_2515_);
v_sz_2517_ = lean_array_size(v_a_2510_);
v___x_2518_ = ((size_t)0ULL);
v___x_2519_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(v_sz_2517_, v___x_2518_, v_a_2510_);
v___x_2520_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2519_);
v___x_2521_ = lean_array_push(v___x_2516_, v___x_2520_);
v___x_2522_ = 1;
v___x_2523_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2512_, v___x_2521_, v___x_2522_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classAdd___boxed(lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_Lasm_Web_Raw_classAdd(v_a_2524_, v_a_2525_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classRemove(lean_object* v_a_2534_, lean_object* v_a_2535_){
_start:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; size_t v_sz_2542_; size_t v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; uint8_t v___x_2547_; lean_object* v___x_2548_; 
v___x_2537_ = ((lean_object*)(l_Lasm_Web_Raw_classRemove___closed__1));
v___x_2538_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2539_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2540_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2540_, 0, v_a_2534_);
lean_ctor_set(v___x_2540_, 1, v___x_2539_);
v___x_2541_ = lean_array_push(v___x_2538_, v___x_2540_);
v_sz_2542_ = lean_array_size(v_a_2535_);
v___x_2543_ = ((size_t)0ULL);
v___x_2544_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(v_sz_2542_, v___x_2543_, v_a_2535_);
v___x_2545_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2545_, 0, v___x_2544_);
v___x_2546_ = lean_array_push(v___x_2541_, v___x_2545_);
v___x_2547_ = 1;
v___x_2548_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2537_, v___x_2546_, v___x_2547_);
return v___x_2548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classRemove___boxed(lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_){
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l_Lasm_Web_Raw_classRemove(v_a_2549_, v_a_2550_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classToggle(lean_object* v_a_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___y_2571_; 
v___x_2563_ = ((lean_object*)(l_Lasm_Web_Raw_classToggle___closed__1));
v___x_2564_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2565_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2566_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2566_, 0, v_a_2559_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
v___x_2567_ = lean_array_push(v___x_2564_, v___x_2566_);
v___x_2568_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2568_, 0, v_a_2560_);
v___x_2569_ = lean_array_push(v___x_2567_, v___x_2568_);
if (lean_obj_tag(v_a_2561_) == 0)
{
lean_object* v___x_2575_; 
v___x_2575_ = lean_box(1);
v___y_2571_ = v___x_2575_;
goto v___jp_2570_;
}
else
{
lean_object* v_val_2576_; lean_object* v___x_2577_; uint8_t v___x_2578_; 
v_val_2576_ = lean_ctor_get(v_a_2561_, 0);
v___x_2577_ = lean_alloc_ctor(2, 0, 1);
v___x_2578_ = lean_unbox(v_val_2576_);
lean_ctor_set_uint8(v___x_2577_, 0, v___x_2578_);
v___y_2571_ = v___x_2577_;
goto v___jp_2570_;
}
v___jp_2570_:
{
lean_object* v___x_2572_; uint8_t v___x_2573_; lean_object* v___x_2574_; 
v___x_2572_ = lean_array_push(v___x_2569_, v___y_2571_);
v___x_2573_ = 1;
v___x_2574_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2563_, v___x_2572_, v___x_2573_);
return v___x_2574_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classToggle___boxed(lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_){
_start:
{
lean_object* v_res_2583_; 
v_res_2583_ = l_Lasm_Web_Raw_classToggle(v_a_2579_, v_a_2580_, v_a_2581_);
lean_dec(v_a_2581_);
return v_res_2583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classContains(lean_object* v_a_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; uint8_t v___x_2600_; lean_object* v___x_2601_; 
v___x_2593_ = ((lean_object*)(l_Lasm_Web_Raw_classContains___closed__1));
v___x_2594_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2595_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2596_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2596_, 0, v_a_2590_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
v___x_2597_ = lean_array_push(v___x_2594_, v___x_2596_);
v___x_2598_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2598_, 0, v_a_2591_);
v___x_2599_ = lean_array_push(v___x_2597_, v___x_2598_);
v___x_2600_ = 1;
v___x_2601_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2593_, v___x_2599_, v___x_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_classContains___boxed(lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_){
_start:
{
lean_object* v_res_2605_; 
v_res_2605_ = l_Lasm_Web_Raw_classContains(v_a_2602_, v_a_2603_);
return v_res_2605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setStyles(lean_object* v_a_2612_, lean_object* v_a_2613_){
_start:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; size_t v_sz_2620_; size_t v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; uint8_t v___x_2625_; lean_object* v___x_2626_; 
v___x_2615_ = ((lean_object*)(l_Lasm_Web_Raw_setStyles___closed__1));
v___x_2616_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2617_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2618_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2618_, 0, v_a_2612_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
v___x_2619_ = lean_array_push(v___x_2616_, v___x_2618_);
v_sz_2620_ = lean_array_size(v_a_2613_);
v___x_2621_ = ((size_t)0ULL);
v___x_2622_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_setAttributes_spec__0(v_sz_2620_, v___x_2621_, v_a_2613_);
v___x_2623_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
v___x_2624_ = lean_array_push(v___x_2619_, v___x_2623_);
v___x_2625_ = 1;
v___x_2626_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2615_, v___x_2624_, v___x_2625_);
return v___x_2626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setStyles___boxed(lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_){
_start:
{
lean_object* v_res_2630_; 
v_res_2630_ = l_Lasm_Web_Raw_setStyles(v_a_2627_, v_a_2628_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeStyle(lean_object* v_a_2637_, lean_object* v_a_2638_){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; uint8_t v___x_2647_; lean_object* v___x_2648_; 
v___x_2640_ = ((lean_object*)(l_Lasm_Web_Raw_removeStyle___closed__1));
v___x_2641_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2642_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2643_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2643_, 0, v_a_2637_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
v___x_2644_ = lean_array_push(v___x_2641_, v___x_2643_);
v___x_2645_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2645_, 0, v_a_2638_);
v___x_2646_ = lean_array_push(v___x_2644_, v___x_2645_);
v___x_2647_ = 1;
v___x_2648_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2640_, v___x_2646_, v___x_2647_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_removeStyle___boxed(lean_object* v_a_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_){
_start:
{
lean_object* v_res_2652_; 
v_res_2652_ = l_Lasm_Web_Raw_removeStyle(v_a_2649_, v_a_2650_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_style(lean_object* v_a_2659_, lean_object* v_a_2660_){
_start:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; uint8_t v___x_2669_; lean_object* v___x_2670_; 
v___x_2662_ = ((lean_object*)(l_Lasm_Web_Raw_style___closed__1));
v___x_2663_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2665_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2665_, 0, v_a_2659_);
lean_ctor_set(v___x_2665_, 1, v___x_2664_);
v___x_2666_ = lean_array_push(v___x_2663_, v___x_2665_);
v___x_2667_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2667_, 0, v_a_2660_);
v___x_2668_ = lean_array_push(v___x_2666_, v___x_2667_);
v___x_2669_ = 1;
v___x_2670_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2662_, v___x_2668_, v___x_2669_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_style___boxed(lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_){
_start:
{
lean_object* v_res_2674_; 
v_res_2674_ = l_Lasm_Web_Raw_style(v_a_2671_, v_a_2672_);
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getInnerHTML(lean_object* v_a_2681_){
_start:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; uint8_t v___x_2688_; lean_object* v___x_2689_; 
v___x_2683_ = ((lean_object*)(l_Lasm_Web_Raw_getInnerHTML___closed__1));
v___x_2684_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2685_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2686_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2686_, 0, v_a_2681_);
lean_ctor_set(v___x_2686_, 1, v___x_2685_);
v___x_2687_ = lean_array_push(v___x_2684_, v___x_2686_);
v___x_2688_ = 1;
v___x_2689_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2683_, v___x_2687_, v___x_2688_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getInnerHTML___boxed(lean_object* v_a_2690_, lean_object* v_a_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = l_Lasm_Web_Raw_getInnerHTML(v_a_2690_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInnerHTML(lean_object* v_a_2699_, lean_object* v_a_2700_){
_start:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; uint8_t v___x_2709_; lean_object* v___x_2710_; 
v___x_2702_ = ((lean_object*)(l_Lasm_Web_Raw_setInnerHTML___closed__1));
v___x_2703_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2704_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2705_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2705_, 0, v_a_2699_);
lean_ctor_set(v___x_2705_, 1, v___x_2704_);
v___x_2706_ = lean_array_push(v___x_2703_, v___x_2705_);
v___x_2707_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2707_, 0, v_a_2700_);
v___x_2708_ = lean_array_push(v___x_2706_, v___x_2707_);
v___x_2709_ = 1;
v___x_2710_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2702_, v___x_2708_, v___x_2709_);
return v___x_2710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInnerHTML___boxed(lean_object* v_a_2711_, lean_object* v_a_2712_, lean_object* v_a_2713_){
_start:
{
lean_object* v_res_2714_; 
v_res_2714_ = l_Lasm_Web_Raw_setInnerHTML(v_a_2711_, v_a_2712_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getValue(lean_object* v_a_2721_){
_start:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; uint8_t v___x_2728_; lean_object* v___x_2729_; 
v___x_2723_ = ((lean_object*)(l_Lasm_Web_Raw_getValue___closed__1));
v___x_2724_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2725_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2726_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2726_, 0, v_a_2721_);
lean_ctor_set(v___x_2726_, 1, v___x_2725_);
v___x_2727_ = lean_array_push(v___x_2724_, v___x_2726_);
v___x_2728_ = 1;
v___x_2729_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0(v___x_2723_, v___x_2727_, v___x_2728_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getValue___boxed(lean_object* v_a_2730_, lean_object* v_a_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = l_Lasm_Web_Raw_getValue(v_a_2730_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setValue(lean_object* v_a_2739_, lean_object* v_a_2740_){
_start:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; uint8_t v___x_2749_; lean_object* v___x_2750_; 
v___x_2742_ = ((lean_object*)(l_Lasm_Web_Raw_setValue___closed__1));
v___x_2743_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2744_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2745_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2745_, 0, v_a_2739_);
lean_ctor_set(v___x_2745_, 1, v___x_2744_);
v___x_2746_ = lean_array_push(v___x_2743_, v___x_2745_);
v___x_2747_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2747_, 0, v_a_2740_);
v___x_2748_ = lean_array_push(v___x_2746_, v___x_2747_);
v___x_2749_ = 1;
v___x_2750_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2742_, v___x_2748_, v___x_2749_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setValue___boxed(lean_object* v_a_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l_Lasm_Web_Raw_setValue(v_a_2751_, v_a_2752_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getChecked(lean_object* v_a_2761_){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; uint8_t v___x_2768_; lean_object* v___x_2769_; 
v___x_2763_ = ((lean_object*)(l_Lasm_Web_Raw_getChecked___closed__1));
v___x_2764_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2765_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2766_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2766_, 0, v_a_2761_);
lean_ctor_set(v___x_2766_, 1, v___x_2765_);
v___x_2767_ = lean_array_push(v___x_2764_, v___x_2766_);
v___x_2768_ = 1;
v___x_2769_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_contains_spec__0(v___x_2763_, v___x_2767_, v___x_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getChecked___boxed(lean_object* v_a_2770_, lean_object* v_a_2771_){
_start:
{
lean_object* v_res_2772_; 
v_res_2772_ = l_Lasm_Web_Raw_getChecked(v_a_2770_);
return v_res_2772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setChecked(lean_object* v_a_2779_, uint8_t v_a_2780_){
_start:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; uint8_t v___x_2789_; lean_object* v___x_2790_; 
v___x_2782_ = ((lean_object*)(l_Lasm_Web_Raw_setChecked___closed__1));
v___x_2783_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2784_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2785_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2785_, 0, v_a_2779_);
lean_ctor_set(v___x_2785_, 1, v___x_2784_);
v___x_2786_ = lean_array_push(v___x_2783_, v___x_2785_);
v___x_2787_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2787_, 0, v_a_2780_);
v___x_2788_ = lean_array_push(v___x_2786_, v___x_2787_);
v___x_2789_ = 1;
v___x_2790_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2782_, v___x_2788_, v___x_2789_);
return v___x_2790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setChecked___boxed(lean_object* v_a_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_){
_start:
{
uint8_t v_a_137__boxed_2794_; lean_object* v_res_2795_; 
v_a_137__boxed_2794_ = lean_unbox(v_a_2792_);
v_res_2795_ = l_Lasm_Web_Raw_setChecked(v_a_2791_, v_a_137__boxed_2794_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_focus(lean_object* v_a_2802_){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; uint8_t v___x_2809_; lean_object* v___x_2810_; 
v___x_2804_ = ((lean_object*)(l_Lasm_Web_Raw_focus___closed__1));
v___x_2805_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2806_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2807_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2807_, 0, v_a_2802_);
lean_ctor_set(v___x_2807_, 1, v___x_2806_);
v___x_2808_ = lean_array_push(v___x_2805_, v___x_2807_);
v___x_2809_ = 1;
v___x_2810_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2804_, v___x_2808_, v___x_2809_);
return v___x_2810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_focus___boxed(lean_object* v_a_2811_, lean_object* v_a_2812_){
_start:
{
lean_object* v_res_2813_; 
v_res_2813_ = l_Lasm_Web_Raw_focus(v_a_2811_);
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_blur(lean_object* v_a_2820_){
_start:
{
lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; uint8_t v___x_2827_; lean_object* v___x_2828_; 
v___x_2822_ = ((lean_object*)(l_Lasm_Web_Raw_blur___closed__1));
v___x_2823_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2824_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2825_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2825_, 0, v_a_2820_);
lean_ctor_set(v___x_2825_, 1, v___x_2824_);
v___x_2826_ = lean_array_push(v___x_2823_, v___x_2825_);
v___x_2827_ = 1;
v___x_2828_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2822_, v___x_2826_, v___x_2827_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_blur___boxed(lean_object* v_a_2829_, lean_object* v_a_2830_){
_start:
{
lean_object* v_res_2831_; 
v_res_2831_ = l_Lasm_Web_Raw_blur(v_a_2829_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_click(lean_object* v_a_2838_){
_start:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; uint8_t v___x_2845_; lean_object* v___x_2846_; 
v___x_2840_ = ((lean_object*)(l_Lasm_Web_Raw_click___closed__1));
v___x_2841_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2842_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2843_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2843_, 0, v_a_2838_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
v___x_2844_ = lean_array_push(v___x_2841_, v___x_2843_);
v___x_2845_ = 1;
v___x_2846_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2840_, v___x_2844_, v___x_2845_);
return v___x_2846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_click___boxed(lean_object* v_a_2847_, lean_object* v_a_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_Lasm_Web_Raw_click(v_a_2847_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_scrollIntoView(lean_object* v_a_2856_, uint8_t v_a_2857_){
_start:
{
lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; uint8_t v___x_2866_; lean_object* v___x_2867_; 
v___x_2859_ = ((lean_object*)(l_Lasm_Web_Raw_scrollIntoView___closed__1));
v___x_2860_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2861_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2862_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2862_, 0, v_a_2856_);
lean_ctor_set(v___x_2862_, 1, v___x_2861_);
v___x_2863_ = lean_array_push(v___x_2860_, v___x_2862_);
v___x_2864_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2864_, 0, v_a_2857_);
v___x_2865_ = lean_array_push(v___x_2863_, v___x_2864_);
v___x_2866_ = 1;
v___x_2867_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_2859_, v___x_2865_, v___x_2866_);
return v___x_2867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_scrollIntoView___boxed(lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_){
_start:
{
uint8_t v_a_137__boxed_2871_; lean_object* v_res_2872_; 
v_a_137__boxed_2871_ = lean_unbox(v_a_2869_);
v_res_2872_ = l_Lasm_Web_Raw_scrollIntoView(v_a_2868_, v_a_137__boxed_2871_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0(lean_object* v_b_2873_, lean_object* v_args_2874_, uint8_t v_await_2875_){
_start:
{
uint64_t v___y_2878_; uint64_t v___y_2879_; uint64_t v___x_2919_; uint64_t v___y_2921_; 
v___x_2919_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_2875_ == 0)
{
uint64_t v___x_2926_; 
v___x_2926_ = 0ULL;
v___y_2921_ = v___x_2926_;
goto v___jp_2920_;
}
else
{
uint64_t v___x_2927_; 
v___x_2927_ = 2ULL;
v___y_2921_ = v___x_2927_;
goto v___jp_2920_;
}
v___jp_2877_:
{
uint64_t v_flags_2880_; uint32_t v___x_2881_; lean_object* v___x_2882_; uint32_t v___x_2883_; lean_object* v___x_2884_; 
v_flags_2880_ = lean_uint64_lor(v___y_2878_, v___y_2879_);
v___x_2881_ = 214;
v___x_2882_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2873_, v_args_2874_);
v___x_2883_ = 0;
v___x_2884_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2881_, v_flags_2880_, v___x_2882_, v___x_2883_);
lean_dec(v___x_2882_);
if (lean_obj_tag(v___x_2884_) == 0)
{
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_a_2885_; lean_object* v___x_2886_; 
v_a_2885_ = lean_ctor_get(v___x_2884_, 0);
lean_inc(v_a_2885_);
lean_dec_ref_known(v___x_2884_, 1);
v___x_2886_ = l_Lasm_JS_Wire_decode(v_a_2885_);
lean_dec(v_a_2885_);
if (lean_obj_tag(v___x_2886_) == 0)
{
lean_object* v_a_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2894_; 
v_a_2887_ = lean_ctor_get(v___x_2886_, 0);
v_isSharedCheck_2894_ = !lean_is_exclusive(v___x_2886_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2889_ = v___x_2886_;
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_a_2887_);
lean_dec(v___x_2886_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
lean_object* v___x_2892_; 
if (v_isShared_2890_ == 0)
{
v___x_2892_ = v___x_2889_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v_a_2887_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
return v___x_2892_;
}
}
}
else
{
return v___x_2886_;
}
}
else
{
lean_object* v_a_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2902_; 
v_a_2895_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2897_ = v___x_2884_;
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_a_2895_);
lean_dec(v___x_2884_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v___x_2900_; 
if (v_isShared_2898_ == 0)
{
lean_ctor_set_tag(v___x_2897_, 1);
v___x_2900_ = v___x_2897_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_a_2895_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
return v___x_2900_;
}
}
}
}
else
{
lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2918_; 
v_a_2903_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2905_ = v___x_2884_;
v_isShared_2906_ = v_isSharedCheck_2918_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_dec(v___x_2884_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2918_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2916_; 
v___x_2907_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_2908_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2873_);
v___x_2909_ = lean_string_append(v___x_2907_, v___x_2908_);
lean_dec_ref(v___x_2908_);
v___x_2910_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_2911_ = lean_string_append(v___x_2909_, v___x_2910_);
v___x_2912_ = lean_io_error_to_string(v_a_2903_);
v___x_2913_ = lean_string_append(v___x_2911_, v___x_2912_);
lean_dec_ref(v___x_2912_);
v___x_2914_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2913_);
if (v_isShared_2906_ == 0)
{
lean_ctor_set(v___x_2905_, 0, v___x_2914_);
v___x_2916_ = v___x_2905_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___x_2914_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
}
v___jp_2920_:
{
uint8_t v_construct_2922_; uint64_t v___x_2923_; 
v_construct_2922_ = lean_ctor_get_uint8(v_b_2873_, sizeof(void*)*4);
v___x_2923_ = lean_uint64_lor(v___x_2919_, v___y_2921_);
if (v_construct_2922_ == 0)
{
uint64_t v___x_2924_; 
v___x_2924_ = 0ULL;
v___y_2878_ = v___x_2923_;
v___y_2879_ = v___x_2924_;
goto v___jp_2877_;
}
else
{
uint64_t v___x_2925_; 
v___x_2925_ = 4ULL;
v___y_2878_ = v___x_2923_;
v___y_2879_ = v___x_2925_;
goto v___jp_2877_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0___boxed(lean_object* v_b_2928_, lean_object* v_args_2929_, lean_object* v_await_2930_, lean_object* v_a_2931_){
_start:
{
uint8_t v_await_boxed_2932_; lean_object* v_res_2933_; 
v_await_boxed_2932_ = lean_unbox(v_await_2930_);
v_res_2933_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0(v_b_2928_, v_args_2929_, v_await_boxed_2932_);
lean_dec_ref(v_b_2928_);
return v_res_2933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getProp(lean_object* v_a_2940_, lean_object* v_a_2941_){
_start:
{
lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; uint8_t v___x_2950_; lean_object* v___x_2951_; 
v___x_2943_ = ((lean_object*)(l_Lasm_Web_Raw_getProp___closed__1));
v___x_2944_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_2945_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_2946_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2946_, 0, v_a_2940_);
lean_ctor_set(v___x_2946_, 1, v___x_2945_);
v___x_2947_ = lean_array_push(v___x_2944_, v___x_2946_);
v___x_2948_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2948_, 0, v_a_2941_);
v___x_2949_ = lean_array_push(v___x_2947_, v___x_2948_);
v___x_2950_ = 1;
v___x_2951_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0(v___x_2943_, v___x_2949_, v___x_2950_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getProp___boxed(lean_object* v_a_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l_Lasm_Web_Raw_getProp(v_a_2952_, v_a_2953_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___redArg(lean_object* v_d_2956_){
_start:
{
lean_object* v___x_2958_; 
v___x_2958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2958_, 0, v_d_2956_);
return v___x_2958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___redArg___boxed(lean_object* v_d_2959_, lean_object* v_a_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___redArg(v_d_2959_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0(lean_object* v_context_2962_, lean_object* v_d_2963_){
_start:
{
lean_object* v___x_2965_; 
v___x_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2965_, 0, v_d_2963_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0___boxed(lean_object* v_context_2966_, lean_object* v_d_2967_, lean_object* v_a_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getProp_spec__0_spec__0(v_context_2966_, v_d_2967_);
lean_dec_ref(v_context_2966_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(lean_object* v_b_2970_, lean_object* v_args_2971_, uint8_t v_await_2972_){
_start:
{
uint64_t v___y_2975_; uint64_t v___y_2976_; uint64_t v___x_3019_; uint64_t v___y_3021_; 
v___x_3019_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__1);
if (v_await_2972_ == 0)
{
uint64_t v___x_3026_; 
v___x_3026_ = 0ULL;
v___y_3021_ = v___x_3026_;
goto v___jp_3020_;
}
else
{
uint64_t v___x_3027_; 
v___x_3027_ = 2ULL;
v___y_3021_ = v___x_3027_;
goto v___jp_3020_;
}
v___jp_2974_:
{
uint64_t v_flags_2977_; uint32_t v___x_2978_; lean_object* v___x_2979_; uint32_t v___x_2980_; lean_object* v___x_2981_; 
v_flags_2977_ = lean_uint64_lor(v___y_2975_, v___y_2976_);
v___x_2978_ = 214;
v___x_2979_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2970_, v_args_2971_);
v___x_2980_ = 0;
v___x_2981_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2978_, v_flags_2977_, v___x_2979_, v___x_2980_);
lean_dec(v___x_2979_);
if (lean_obj_tag(v___x_2981_) == 0)
{
if (lean_obj_tag(v___x_2981_) == 0)
{
lean_object* v_a_2982_; lean_object* v___x_2983_; 
v_a_2982_ = lean_ctor_get(v___x_2981_, 0);
lean_inc(v_a_2982_);
lean_dec_ref_known(v___x_2981_, 1);
v___x_2983_ = l_Lasm_JS_Wire_decode(v_a_2982_);
lean_dec(v_a_2982_);
if (lean_obj_tag(v___x_2983_) == 0)
{
lean_object* v_a_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v_a_2984_ = lean_ctor_get(v___x_2983_, 0);
lean_inc(v_a_2984_);
lean_dec_ref_known(v___x_2983_, 1);
v___x_2985_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2970_);
v___x_2986_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_2985_, v_a_2984_);
lean_dec_ref(v___x_2985_);
return v___x_2986_;
}
else
{
lean_object* v_a_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2994_; 
v_a_2987_ = lean_ctor_get(v___x_2983_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v___x_2983_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2989_ = v___x_2983_;
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_a_2987_);
lean_dec(v___x_2983_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2992_; 
if (v_isShared_2990_ == 0)
{
v___x_2992_ = v___x_2989_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_a_2987_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
}
}
else
{
lean_object* v_a_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3002_; 
v_a_2995_ = lean_ctor_get(v___x_2981_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v___x_2981_);
if (v_isSharedCheck_3002_ == 0)
{
v___x_2997_ = v___x_2981_;
v_isShared_2998_ = v_isSharedCheck_3002_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_a_2995_);
lean_dec(v___x_2981_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3002_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v___x_3000_; 
if (v_isShared_2998_ == 0)
{
lean_ctor_set_tag(v___x_2997_, 1);
v___x_3000_ = v___x_2997_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v_a_2995_);
v___x_3000_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
return v___x_3000_;
}
}
}
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3018_; 
v_a_3003_ = lean_ctor_get(v___x_2981_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_2981_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_3005_ = v___x_2981_;
v_isShared_3006_ = v_isSharedCheck_3018_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_2981_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3018_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3016_; 
v___x_3007_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_3008_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2970_);
v___x_3009_ = lean_string_append(v___x_3007_, v___x_3008_);
lean_dec_ref(v___x_3008_);
v___x_3010_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_3011_ = lean_string_append(v___x_3009_, v___x_3010_);
v___x_3012_ = lean_io_error_to_string(v_a_3003_);
v___x_3013_ = lean_string_append(v___x_3011_, v___x_3012_);
lean_dec_ref(v___x_3012_);
v___x_3014_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3013_);
if (v_isShared_3006_ == 0)
{
lean_ctor_set(v___x_3005_, 0, v___x_3014_);
v___x_3016_ = v___x_3005_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v___x_3014_);
v___x_3016_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
return v___x_3016_;
}
}
}
}
v___jp_3020_:
{
uint8_t v_construct_3022_; uint64_t v___x_3023_; 
v_construct_3022_ = lean_ctor_get_uint8(v_b_2970_, sizeof(void*)*4);
v___x_3023_ = lean_uint64_lor(v___x_3019_, v___y_3021_);
if (v_construct_3022_ == 0)
{
uint64_t v___x_3024_; 
v___x_3024_ = 0ULL;
v___y_2975_ = v___x_3023_;
v___y_2976_ = v___x_3024_;
goto v___jp_2974_;
}
else
{
uint64_t v___x_3025_; 
v___x_3025_ = 4ULL;
v___y_2975_ = v___x_3023_;
v___y_2976_ = v___x_3025_;
goto v___jp_2974_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0___boxed(lean_object* v_b_3028_, lean_object* v_args_3029_, lean_object* v_await_3030_, lean_object* v_a_3031_){
_start:
{
uint8_t v_await_boxed_3032_; lean_object* v_res_3033_; 
v_await_boxed_3032_ = lean_unbox(v_await_3030_);
v_res_3033_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(v_b_3028_, v_args_3029_, v_await_boxed_3032_);
lean_dec_ref(v_b_3028_);
return v_res_3033_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getPropValue(lean_object* v_a_3041_, lean_object* v_a_3042_){
_start:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; uint8_t v___x_3051_; lean_object* v___x_3052_; 
v___x_3044_ = ((lean_object*)(l_Lasm_Web_Raw_getPropValue___closed__1));
v___x_3045_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_3046_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_3047_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3047_, 0, v_a_3041_);
lean_ctor_set(v___x_3047_, 1, v___x_3046_);
v___x_3048_ = lean_array_push(v___x_3045_, v___x_3047_);
v___x_3049_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3049_, 0, v_a_3042_);
v___x_3050_ = lean_array_push(v___x_3048_, v___x_3049_);
v___x_3051_ = 1;
v___x_3052_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(v___x_3044_, v___x_3050_, v___x_3051_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_getPropValue___boxed(lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l_Lasm_Web_Raw_getPropValue(v_a_3053_, v_a_3054_);
return v_res_3056_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setProp(lean_object* v_a_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_){
_start:
{
lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; uint8_t v___x_3075_; lean_object* v___x_3076_; 
v___x_3067_ = ((lean_object*)(l_Lasm_Web_Raw_setProp___closed__1));
v___x_3068_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_3069_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_3070_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3070_, 0, v_a_3063_);
lean_ctor_set(v___x_3070_, 1, v___x_3069_);
v___x_3071_ = lean_array_push(v___x_3068_, v___x_3070_);
v___x_3072_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3072_, 0, v_a_3064_);
v___x_3073_ = lean_array_push(v___x_3071_, v___x_3072_);
v___x_3074_ = lean_array_push(v___x_3073_, v_a_3065_);
v___x_3075_ = 1;
v___x_3076_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_appendChild_spec__0(v___x_3067_, v___x_3074_, v___x_3075_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setProp___boxed(lean_object* v_a_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_){
_start:
{
lean_object* v_res_3081_; 
v_res_3081_ = l_Lasm_Web_Raw_setProp(v_a_3077_, v_a_3078_, v_a_3079_);
return v_res_3081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSRect___lam__0(lean_object* v___x_3090_, lean_object* v_d_3091_){
_start:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3092_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__0));
lean_inc_ref(v___x_3090_);
v___x_3093_ = l_Lasm_JS_readField___redArg(v___x_3090_, v_d_3091_, v___x_3092_);
if (lean_obj_tag(v___x_3093_) == 0)
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3101_; 
lean_dec_ref(v___x_3090_);
v_a_3094_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3096_ = v___x_3093_;
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v___x_3093_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3094_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
else
{
lean_object* v_a_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v_a_3102_ = lean_ctor_get(v___x_3093_, 0);
lean_inc(v_a_3102_);
lean_dec_ref_known(v___x_3093_, 1);
v___x_3103_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__1));
lean_inc_ref(v___x_3090_);
v___x_3104_ = l_Lasm_JS_readField___redArg(v___x_3090_, v_d_3091_, v___x_3103_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3112_; 
lean_dec(v_a_3102_);
lean_dec_ref(v___x_3090_);
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3107_ = v___x_3104_;
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3104_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3110_; 
if (v_isShared_3108_ == 0)
{
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_a_3105_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
else
{
lean_object* v_a_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
v_a_3113_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_a_3113_);
lean_dec_ref_known(v___x_3104_, 1);
v___x_3114_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__2));
lean_inc_ref(v___x_3090_);
v___x_3115_ = l_Lasm_JS_readField___redArg(v___x_3090_, v_d_3091_, v___x_3114_);
if (lean_obj_tag(v___x_3115_) == 0)
{
lean_object* v_a_3116_; lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3123_; 
lean_dec(v_a_3113_);
lean_dec(v_a_3102_);
lean_dec_ref(v___x_3090_);
v_a_3116_ = lean_ctor_get(v___x_3115_, 0);
v_isSharedCheck_3123_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3123_ == 0)
{
v___x_3118_ = v___x_3115_;
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
else
{
lean_inc(v_a_3116_);
lean_dec(v___x_3115_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3121_; 
if (v_isShared_3119_ == 0)
{
v___x_3121_ = v___x_3118_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3122_; 
v_reuseFailAlloc_3122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3122_, 0, v_a_3116_);
v___x_3121_ = v_reuseFailAlloc_3122_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
return v___x_3121_;
}
}
}
else
{
lean_object* v_a_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v_a_3124_ = lean_ctor_get(v___x_3115_, 0);
lean_inc(v_a_3124_);
lean_dec_ref_known(v___x_3115_, 1);
v___x_3125_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__3));
lean_inc_ref(v___x_3090_);
v___x_3126_ = l_Lasm_JS_readField___redArg(v___x_3090_, v_d_3091_, v___x_3125_);
if (lean_obj_tag(v___x_3126_) == 0)
{
lean_object* v_a_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3134_; 
lean_dec(v_a_3124_);
lean_dec(v_a_3113_);
lean_dec(v_a_3102_);
lean_dec_ref(v___x_3090_);
v_a_3127_ = lean_ctor_get(v___x_3126_, 0);
v_isSharedCheck_3134_ = !lean_is_exclusive(v___x_3126_);
if (v_isSharedCheck_3134_ == 0)
{
v___x_3129_ = v___x_3126_;
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_a_3127_);
lean_dec(v___x_3126_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3132_; 
if (v_isShared_3130_ == 0)
{
v___x_3132_ = v___x_3129_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_a_3127_);
v___x_3132_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
return v___x_3132_;
}
}
}
else
{
lean_object* v_a_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v_a_3135_ = lean_ctor_get(v___x_3126_, 0);
lean_inc(v_a_3135_);
lean_dec_ref_known(v___x_3126_, 1);
v___x_3136_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__4));
lean_inc_ref(v___x_3090_);
v___x_3137_ = l_Lasm_JS_readField___redArg(v___x_3090_, v_d_3091_, v___x_3136_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_a_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3145_; 
lean_dec(v_a_3135_);
lean_dec(v_a_3124_);
lean_dec(v_a_3113_);
lean_dec(v_a_3102_);
lean_dec_ref(v___x_3090_);
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3140_ = v___x_3137_;
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_a_3138_);
lean_dec(v___x_3137_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3143_; 
if (v_isShared_3141_ == 0)
{
v___x_3143_ = v___x_3140_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v_a_3138_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
else
{
lean_object* v_a_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
v_a_3146_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3146_);
lean_dec_ref_known(v___x_3137_, 1);
v___x_3147_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__5));
lean_inc_ref(v___x_3090_);
v___x_3148_ = l_Lasm_JS_readField___redArg(v___x_3090_, v_d_3091_, v___x_3147_);
if (lean_obj_tag(v___x_3148_) == 0)
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec(v_a_3146_);
lean_dec(v_a_3135_);
lean_dec(v_a_3124_);
lean_dec(v_a_3113_);
lean_dec(v_a_3102_);
lean_dec_ref(v___x_3090_);
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3148_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3148_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v_a_3157_ = lean_ctor_get(v___x_3148_, 0);
lean_inc(v_a_3157_);
lean_dec_ref_known(v___x_3148_, 1);
v___x_3158_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__6));
lean_inc_ref(v___x_3090_);
v___x_3159_ = l_Lasm_JS_readField___redArg(v___x_3090_, v_d_3091_, v___x_3158_);
if (lean_obj_tag(v___x_3159_) == 0)
{
lean_object* v_a_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3167_; 
lean_dec(v_a_3157_);
lean_dec(v_a_3146_);
lean_dec(v_a_3135_);
lean_dec(v_a_3124_);
lean_dec(v_a_3113_);
lean_dec(v_a_3102_);
lean_dec_ref(v___x_3090_);
v_a_3160_ = lean_ctor_get(v___x_3159_, 0);
v_isSharedCheck_3167_ = !lean_is_exclusive(v___x_3159_);
if (v_isSharedCheck_3167_ == 0)
{
v___x_3162_ = v___x_3159_;
v_isShared_3163_ = v_isSharedCheck_3167_;
goto v_resetjp_3161_;
}
else
{
lean_inc(v_a_3160_);
lean_dec(v___x_3159_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3167_;
goto v_resetjp_3161_;
}
v_resetjp_3161_:
{
lean_object* v___x_3165_; 
if (v_isShared_3163_ == 0)
{
v___x_3165_ = v___x_3162_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v_a_3160_);
v___x_3165_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
return v___x_3165_;
}
}
}
else
{
lean_object* v_a_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; 
v_a_3168_ = lean_ctor_get(v___x_3159_, 0);
lean_inc(v_a_3168_);
lean_dec_ref_known(v___x_3159_, 1);
v___x_3169_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__7));
v___x_3170_ = l_Lasm_JS_readField___redArg(v___x_3090_, v_d_3091_, v___x_3169_);
if (lean_obj_tag(v___x_3170_) == 0)
{
lean_object* v_a_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
lean_dec(v_a_3168_);
lean_dec(v_a_3157_);
lean_dec(v_a_3146_);
lean_dec(v_a_3135_);
lean_dec(v_a_3124_);
lean_dec(v_a_3113_);
lean_dec(v_a_3102_);
v_a_3171_ = lean_ctor_get(v___x_3170_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3170_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3173_ = v___x_3170_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_a_3171_);
lean_dec(v___x_3170_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_a_3171_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
}
else
{
lean_object* v_a_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3195_; 
v_a_3179_ = lean_ctor_get(v___x_3170_, 0);
v_isSharedCheck_3195_ = !lean_is_exclusive(v___x_3170_);
if (v_isSharedCheck_3195_ == 0)
{
v___x_3181_ = v___x_3170_;
v_isShared_3182_ = v_isSharedCheck_3195_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_a_3179_);
lean_dec(v___x_3170_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3195_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v___x_3183_; double v___x_3184_; double v___x_3185_; double v___x_3186_; double v___x_3187_; double v___x_3188_; double v___x_3189_; double v___x_3190_; double v___x_3191_; lean_object* v___x_3193_; 
v___x_3183_ = lean_alloc_ctor(0, 0, 64);
v___x_3184_ = lean_unbox_float(v_a_3102_);
lean_dec(v_a_3102_);
lean_ctor_set_float(v___x_3183_, 0, v___x_3184_);
v___x_3185_ = lean_unbox_float(v_a_3113_);
lean_dec(v_a_3113_);
lean_ctor_set_float(v___x_3183_, 8, v___x_3185_);
v___x_3186_ = lean_unbox_float(v_a_3124_);
lean_dec(v_a_3124_);
lean_ctor_set_float(v___x_3183_, 16, v___x_3186_);
v___x_3187_ = lean_unbox_float(v_a_3135_);
lean_dec(v_a_3135_);
lean_ctor_set_float(v___x_3183_, 24, v___x_3187_);
v___x_3188_ = lean_unbox_float(v_a_3146_);
lean_dec(v_a_3146_);
lean_ctor_set_float(v___x_3183_, 32, v___x_3188_);
v___x_3189_ = lean_unbox_float(v_a_3157_);
lean_dec(v_a_3157_);
lean_ctor_set_float(v___x_3183_, 40, v___x_3189_);
v___x_3190_ = lean_unbox_float(v_a_3168_);
lean_dec(v_a_3168_);
lean_ctor_set_float(v___x_3183_, 48, v___x_3190_);
v___x_3191_ = lean_unbox_float(v_a_3179_);
lean_dec(v_a_3179_);
lean_ctor_set_float(v___x_3183_, 56, v___x_3191_);
if (v_isShared_3182_ == 0)
{
lean_ctor_set(v___x_3181_, 0, v___x_3183_);
v___x_3193_ = v___x_3181_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v___x_3183_);
v___x_3193_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
return v___x_3193_;
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
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSRect___lam__0___boxed(lean_object* v___x_3196_, lean_object* v_d_3197_){
_start:
{
lean_object* v_res_3198_; 
v_res_3198_ = l_Lasm_Web_instFromJSRect___lam__0(v___x_3196_, v_d_3197_);
lean_dec(v_d_3197_);
return v_res_3198_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSRect___closed__0(void){
_start:
{
lean_object* v___x_3199_; lean_object* v___f_3200_; 
v___x_3199_ = l_Lasm_JS_instFromJSFloat;
v___f_3200_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSRect___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3200_, 0, v___x_3199_);
return v___f_3200_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSRect___closed__2(void){
_start:
{
uint8_t v___x_3202_; lean_object* v___x_3203_; lean_object* v___f_3204_; lean_object* v___x_3205_; 
v___x_3202_ = 0;
v___x_3203_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___closed__1));
v___f_3204_ = lean_obj_once(&l_Lasm_Web_instFromJSRect___closed__0, &l_Lasm_Web_instFromJSRect___closed__0_once, _init_l_Lasm_Web_instFromJSRect___closed__0);
v___x_3205_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3205_, 0, v___f_3204_);
lean_ctor_set(v___x_3205_, 1, v___x_3203_);
lean_ctor_set_uint8(v___x_3205_, sizeof(void*)*2, v___x_3202_);
return v___x_3205_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSRect(void){
_start:
{
lean_object* v___x_3206_; 
v___x_3206_ = lean_obj_once(&l_Lasm_Web_instFromJSRect___closed__2, &l_Lasm_Web_instFromJSRect___closed__2_once, _init_l_Lasm_Web_instFromJSRect___closed__2);
return v___x_3206_;
}
}
static double _init_l_Lasm_Web_instInhabitedRect_default___closed__0(void){
_start:
{
uint64_t v___x_3207_; double v___x_3208_; 
v___x_3207_ = 0ULL;
v___x_3208_ = lean_uint64_to_float(v___x_3207_);
return v___x_3208_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedRect_default___closed__1(void){
_start:
{
double v___x_3209_; lean_object* v___x_3210_; 
v___x_3209_ = lean_float_once(&l_Lasm_Web_instInhabitedRect_default___closed__0, &l_Lasm_Web_instInhabitedRect_default___closed__0_once, _init_l_Lasm_Web_instInhabitedRect_default___closed__0);
v___x_3210_ = lean_alloc_ctor(0, 0, 64);
lean_ctor_set_float(v___x_3210_, 0, v___x_3209_);
lean_ctor_set_float(v___x_3210_, 8, v___x_3209_);
lean_ctor_set_float(v___x_3210_, 16, v___x_3209_);
lean_ctor_set_float(v___x_3210_, 24, v___x_3209_);
lean_ctor_set_float(v___x_3210_, 32, v___x_3209_);
lean_ctor_set_float(v___x_3210_, 40, v___x_3209_);
lean_ctor_set_float(v___x_3210_, 48, v___x_3209_);
lean_ctor_set_float(v___x_3210_, 56, v___x_3209_);
return v___x_3210_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedRect_default(void){
_start:
{
lean_object* v___x_3211_; 
v___x_3211_ = lean_obj_once(&l_Lasm_Web_instInhabitedRect_default___closed__1, &l_Lasm_Web_instInhabitedRect_default___closed__1_once, _init_l_Lasm_Web_instInhabitedRect_default___closed__1);
return v___x_3211_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedRect(void){
_start:
{
lean_object* v___x_3212_; 
v___x_3212_ = l_Lasm_Web_instInhabitedRect_default;
return v___x_3212_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3225_ = lean_unsigned_to_nat(5u);
v___x_3226_ = lean_nat_to_int(v___x_3225_);
return v___x_3226_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3234_ = lean_unsigned_to_nat(9u);
v___x_3235_ = lean_nat_to_int(v___x_3234_);
return v___x_3235_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3238_ = lean_unsigned_to_nat(10u);
v___x_3239_ = lean_nat_to_int(v___x_3238_);
return v___x_3239_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; 
v___x_3242_ = lean_unsigned_to_nat(7u);
v___x_3243_ = lean_nat_to_int(v___x_3242_);
return v___x_3243_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; 
v___x_3250_ = lean_unsigned_to_nat(8u);
v___x_3251_ = lean_nat_to_int(v___x_3250_);
return v___x_3251_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3253_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__0));
v___x_3254_ = lean_string_length(v___x_3253_);
return v___x_3254_;
}
}
static lean_object* _init_l_Lasm_Web_instReprRect_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3255_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__21, &l_Lasm_Web_instReprRect_repr___redArg___closed__21_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__21);
v___x_3256_ = lean_nat_to_int(v___x_3255_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___redArg(lean_object* v_x_3261_){
_start:
{
double v_x_3262_; double v_y_3263_; double v_width_3264_; double v_height_3265_; double v_top_3266_; double v_right_3267_; double v_bottom_3268_; double v_left_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; uint8_t v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; 
v_x_3262_ = lean_ctor_get_float(v_x_3261_, 0);
v_y_3263_ = lean_ctor_get_float(v_x_3261_, 8);
v_width_3264_ = lean_ctor_get_float(v_x_3261_, 16);
v_height_3265_ = lean_ctor_get_float(v_x_3261_, 24);
v_top_3266_ = lean_ctor_get_float(v_x_3261_, 32);
v_right_3267_ = lean_ctor_get_float(v_x_3261_, 40);
v_bottom_3268_ = lean_ctor_get_float(v_x_3261_, 48);
v_left_3269_ = lean_ctor_get_float(v_x_3261_, 56);
v___x_3270_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__4));
v___x_3271_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__5));
v___x_3272_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__6, &l_Lasm_Web_instReprRect_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__6);
v___x_3273_ = lean_unsigned_to_nat(0u);
v___x_3274_ = l_Float_repr(v_x_3262_, v___x_3273_);
v___x_3275_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3272_);
lean_ctor_set(v___x_3275_, 1, v___x_3274_);
v___x_3276_ = 0;
v___x_3277_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3277_, 0, v___x_3275_);
lean_ctor_set_uint8(v___x_3277_, sizeof(void*)*1, v___x_3276_);
v___x_3278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3271_);
lean_ctor_set(v___x_3278_, 1, v___x_3277_);
v___x_3279_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__8));
v___x_3280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3278_);
lean_ctor_set(v___x_3280_, 1, v___x_3279_);
v___x_3281_ = lean_box(1);
v___x_3282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3280_);
lean_ctor_set(v___x_3282_, 1, v___x_3281_);
v___x_3283_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__9));
v___x_3284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3282_);
lean_ctor_set(v___x_3284_, 1, v___x_3283_);
v___x_3285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3284_);
lean_ctor_set(v___x_3285_, 1, v___x_3270_);
v___x_3286_ = l_Float_repr(v_y_3263_, v___x_3273_);
v___x_3287_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3272_);
lean_ctor_set(v___x_3287_, 1, v___x_3286_);
v___x_3288_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3288_, 0, v___x_3287_);
lean_ctor_set_uint8(v___x_3288_, sizeof(void*)*1, v___x_3276_);
v___x_3289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3285_);
lean_ctor_set(v___x_3289_, 1, v___x_3288_);
v___x_3290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3289_);
lean_ctor_set(v___x_3290_, 1, v___x_3279_);
v___x_3291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3291_, 0, v___x_3290_);
lean_ctor_set(v___x_3291_, 1, v___x_3281_);
v___x_3292_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__10));
v___x_3293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3291_);
lean_ctor_set(v___x_3293_, 1, v___x_3292_);
v___x_3294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3293_);
lean_ctor_set(v___x_3294_, 1, v___x_3270_);
v___x_3295_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__11, &l_Lasm_Web_instReprRect_repr___redArg___closed__11_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__11);
v___x_3296_ = l_Float_repr(v_width_3264_, v___x_3273_);
v___x_3297_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3297_, 0, v___x_3295_);
lean_ctor_set(v___x_3297_, 1, v___x_3296_);
v___x_3298_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3298_, 0, v___x_3297_);
lean_ctor_set_uint8(v___x_3298_, sizeof(void*)*1, v___x_3276_);
v___x_3299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3294_);
lean_ctor_set(v___x_3299_, 1, v___x_3298_);
v___x_3300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3299_);
lean_ctor_set(v___x_3300_, 1, v___x_3279_);
v___x_3301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3301_, 0, v___x_3300_);
lean_ctor_set(v___x_3301_, 1, v___x_3281_);
v___x_3302_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__12));
v___x_3303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3301_);
lean_ctor_set(v___x_3303_, 1, v___x_3302_);
v___x_3304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3303_);
lean_ctor_set(v___x_3304_, 1, v___x_3270_);
v___x_3305_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__13, &l_Lasm_Web_instReprRect_repr___redArg___closed__13_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__13);
v___x_3306_ = l_Float_repr(v_height_3265_, v___x_3273_);
v___x_3307_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3305_);
lean_ctor_set(v___x_3307_, 1, v___x_3306_);
v___x_3308_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3308_, 0, v___x_3307_);
lean_ctor_set_uint8(v___x_3308_, sizeof(void*)*1, v___x_3276_);
v___x_3309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3304_);
lean_ctor_set(v___x_3309_, 1, v___x_3308_);
v___x_3310_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3309_);
lean_ctor_set(v___x_3310_, 1, v___x_3279_);
v___x_3311_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3310_);
lean_ctor_set(v___x_3311_, 1, v___x_3281_);
v___x_3312_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__14));
v___x_3313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3313_, 0, v___x_3311_);
lean_ctor_set(v___x_3313_, 1, v___x_3312_);
v___x_3314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3313_);
lean_ctor_set(v___x_3314_, 1, v___x_3270_);
v___x_3315_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__15, &l_Lasm_Web_instReprRect_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__15);
v___x_3316_ = l_Float_repr(v_top_3266_, v___x_3273_);
v___x_3317_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3315_);
lean_ctor_set(v___x_3317_, 1, v___x_3316_);
v___x_3318_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
lean_ctor_set_uint8(v___x_3318_, sizeof(void*)*1, v___x_3276_);
v___x_3319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3314_);
lean_ctor_set(v___x_3319_, 1, v___x_3318_);
v___x_3320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3319_);
lean_ctor_set(v___x_3320_, 1, v___x_3279_);
v___x_3321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3321_, 0, v___x_3320_);
lean_ctor_set(v___x_3321_, 1, v___x_3281_);
v___x_3322_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__16));
v___x_3323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3321_);
lean_ctor_set(v___x_3323_, 1, v___x_3322_);
v___x_3324_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3323_);
lean_ctor_set(v___x_3324_, 1, v___x_3270_);
v___x_3325_ = l_Float_repr(v_right_3267_, v___x_3273_);
v___x_3326_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3295_);
lean_ctor_set(v___x_3326_, 1, v___x_3325_);
v___x_3327_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3327_, 0, v___x_3326_);
lean_ctor_set_uint8(v___x_3327_, sizeof(void*)*1, v___x_3276_);
v___x_3328_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3328_, 0, v___x_3324_);
lean_ctor_set(v___x_3328_, 1, v___x_3327_);
v___x_3329_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3329_, 0, v___x_3328_);
lean_ctor_set(v___x_3329_, 1, v___x_3279_);
v___x_3330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3329_);
lean_ctor_set(v___x_3330_, 1, v___x_3281_);
v___x_3331_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__17));
v___x_3332_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3330_);
lean_ctor_set(v___x_3332_, 1, v___x_3331_);
v___x_3333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3332_);
lean_ctor_set(v___x_3333_, 1, v___x_3270_);
v___x_3334_ = l_Float_repr(v_bottom_3268_, v___x_3273_);
v___x_3335_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3305_);
lean_ctor_set(v___x_3335_, 1, v___x_3334_);
v___x_3336_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
lean_ctor_set_uint8(v___x_3336_, sizeof(void*)*1, v___x_3276_);
v___x_3337_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3337_, 0, v___x_3333_);
lean_ctor_set(v___x_3337_, 1, v___x_3336_);
v___x_3338_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3337_);
lean_ctor_set(v___x_3338_, 1, v___x_3279_);
v___x_3339_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
lean_ctor_set(v___x_3339_, 1, v___x_3281_);
v___x_3340_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__18));
v___x_3341_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3339_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
v___x_3342_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
lean_ctor_set(v___x_3342_, 1, v___x_3270_);
v___x_3343_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__19, &l_Lasm_Web_instReprRect_repr___redArg___closed__19_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__19);
v___x_3344_ = l_Float_repr(v_left_3269_, v___x_3273_);
v___x_3345_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3343_);
lean_ctor_set(v___x_3345_, 1, v___x_3344_);
v___x_3346_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3346_, 0, v___x_3345_);
lean_ctor_set_uint8(v___x_3346_, sizeof(void*)*1, v___x_3276_);
v___x_3347_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3342_);
lean_ctor_set(v___x_3347_, 1, v___x_3346_);
v___x_3348_ = lean_obj_once(&l_Lasm_Web_instReprRect_repr___redArg___closed__22, &l_Lasm_Web_instReprRect_repr___redArg___closed__22_once, _init_l_Lasm_Web_instReprRect_repr___redArg___closed__22);
v___x_3349_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__23));
v___x_3350_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3349_);
lean_ctor_set(v___x_3350_, 1, v___x_3347_);
v___x_3351_ = ((lean_object*)(l_Lasm_Web_instReprRect_repr___redArg___closed__24));
v___x_3352_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3350_);
lean_ctor_set(v___x_3352_, 1, v___x_3351_);
v___x_3353_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3348_);
lean_ctor_set(v___x_3353_, 1, v___x_3352_);
v___x_3354_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3354_, 0, v___x_3353_);
lean_ctor_set_uint8(v___x_3354_, sizeof(void*)*1, v___x_3276_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___redArg___boxed(lean_object* v_x_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = l_Lasm_Web_instReprRect_repr___redArg(v_x_3355_);
lean_dec_ref(v_x_3355_);
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr(lean_object* v_x_3357_, lean_object* v_prec_3358_){
_start:
{
lean_object* v___x_3359_; 
v___x_3359_ = l_Lasm_Web_instReprRect_repr___redArg(v_x_3357_);
return v___x_3359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprRect_repr___boxed(lean_object* v_x_3360_, lean_object* v_prec_3361_){
_start:
{
lean_object* v_res_3362_; 
v_res_3362_ = l_Lasm_Web_instReprRect_repr(v_x_3360_, v_prec_3361_);
lean_dec(v_prec_3361_);
lean_dec_ref(v_x_3360_);
return v_res_3362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(lean_object* v_d_3372_, lean_object* v_key_3373_){
_start:
{
if (lean_obj_tag(v_d_3372_) == 8)
{
lean_object* v___x_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3402_; 
v___x_3374_ = l_Lasm_JS_Data_field(v_d_3372_, v_key_3373_);
v_isSharedCheck_3402_ = !lean_is_exclusive(v_d_3372_);
if (v_isSharedCheck_3402_ == 0)
{
lean_object* v_unused_3403_; 
v_unused_3403_ = lean_ctor_get(v_d_3372_, 0);
lean_dec(v_unused_3403_);
v___x_3376_ = v_d_3372_;
v_isShared_3377_ = v_isSharedCheck_3402_;
goto v_resetjp_3375_;
}
else
{
lean_dec(v_d_3372_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3402_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
if (lean_obj_tag(v___x_3374_) == 3)
{
double v_n_3378_; lean_object* v___x_3379_; lean_object* v___x_3381_; 
v_n_3378_ = lean_ctor_get_float(v___x_3374_, 0);
lean_dec_ref_known(v___x_3374_, 0);
v___x_3379_ = lean_box_float(v_n_3378_);
if (v_isShared_3377_ == 0)
{
lean_ctor_set_tag(v___x_3376_, 1);
lean_ctor_set(v___x_3376_, 0, v___x_3379_);
v___x_3381_ = v___x_3376_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v___x_3379_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
else
{
lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; uint8_t v___x_3393_; 
v___x_3383_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__0));
v___x_3384_ = lean_string_append(v___x_3383_, v_key_3373_);
v___x_3385_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__1));
v___x_3386_ = lean_string_append(v___x_3384_, v___x_3385_);
v___x_3387_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__2));
v___x_3388_ = lean_string_append(v___x_3386_, v___x_3387_);
v___x_3389_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__3));
v___x_3390_ = lean_string_append(v___x_3388_, v___x_3389_);
v___x_3391_ = l_Lasm_JS_Data_describe(v___x_3374_);
v___x_3392_ = lean_string_append(v___x_3390_, v___x_3391_);
lean_dec_ref(v___x_3391_);
v___x_3393_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__6);
if (v___x_3393_ == 0)
{
lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3397_; 
v___x_3394_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__7));
v___x_3395_ = lean_string_append(v___x_3392_, v___x_3394_);
if (v_isShared_3377_ == 0)
{
lean_ctor_set_tag(v___x_3376_, 0);
lean_ctor_set(v___x_3376_, 0, v___x_3395_);
v___x_3397_ = v___x_3376_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v___x_3395_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
}
}
else
{
lean_object* v___x_3400_; 
if (v_isShared_3377_ == 0)
{
lean_ctor_set_tag(v___x_3376_, 0);
lean_ctor_set(v___x_3376_, 0, v___x_3392_);
v___x_3400_ = v___x_3376_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v___x_3392_);
v___x_3400_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
return v___x_3400_;
}
}
}
}
}
else
{
lean_object* v___x_3404_; 
lean_dec(v_d_3372_);
v___x_3404_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___closed__5));
return v___x_3404_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1___boxed(lean_object* v_d_3405_, lean_object* v_key_3406_){
_start:
{
lean_object* v_res_3407_; 
v_res_3407_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3405_, v_key_3406_);
lean_dec_ref(v_key_3406_);
return v_res_3407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0(lean_object* v_context_3408_, lean_object* v_d_3409_){
_start:
{
lean_object* v___y_3412_; lean_object* v___y_3413_; lean_object* v___y_3418_; lean_object* v_received_3419_; lean_object* v___y_3438_; lean_object* v_a_3441_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
v___x_3465_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__0));
lean_inc(v_d_3409_);
v___x_3466_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3409_, v___x_3465_);
if (lean_obj_tag(v___x_3466_) == 0)
{
lean_object* v_a_3467_; 
v_a_3467_ = lean_ctor_get(v___x_3466_, 0);
lean_inc(v_a_3467_);
lean_dec_ref_known(v___x_3466_, 1);
v_a_3441_ = v_a_3467_;
goto v___jp_3440_;
}
else
{
lean_object* v_a_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v_a_3468_ = lean_ctor_get(v___x_3466_, 0);
lean_inc(v_a_3468_);
lean_dec_ref_known(v___x_3466_, 1);
v___x_3469_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__1));
lean_inc(v_d_3409_);
v___x_3470_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3409_, v___x_3469_);
if (lean_obj_tag(v___x_3470_) == 0)
{
lean_object* v_a_3471_; 
lean_dec(v_a_3468_);
v_a_3471_ = lean_ctor_get(v___x_3470_, 0);
lean_inc(v_a_3471_);
lean_dec_ref_known(v___x_3470_, 1);
v_a_3441_ = v_a_3471_;
goto v___jp_3440_;
}
else
{
lean_object* v_a_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; 
v_a_3472_ = lean_ctor_get(v___x_3470_, 0);
lean_inc(v_a_3472_);
lean_dec_ref_known(v___x_3470_, 1);
v___x_3473_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__2));
lean_inc(v_d_3409_);
v___x_3474_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3409_, v___x_3473_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v_a_3475_; 
lean_dec(v_a_3472_);
lean_dec(v_a_3468_);
v_a_3475_ = lean_ctor_get(v___x_3474_, 0);
lean_inc(v_a_3475_);
lean_dec_ref_known(v___x_3474_, 1);
v_a_3441_ = v_a_3475_;
goto v___jp_3440_;
}
else
{
lean_object* v_a_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; 
v_a_3476_ = lean_ctor_get(v___x_3474_, 0);
lean_inc(v_a_3476_);
lean_dec_ref_known(v___x_3474_, 1);
v___x_3477_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__3));
lean_inc(v_d_3409_);
v___x_3478_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3409_, v___x_3477_);
if (lean_obj_tag(v___x_3478_) == 0)
{
lean_object* v_a_3479_; 
lean_dec(v_a_3476_);
lean_dec(v_a_3472_);
lean_dec(v_a_3468_);
v_a_3479_ = lean_ctor_get(v___x_3478_, 0);
lean_inc(v_a_3479_);
lean_dec_ref_known(v___x_3478_, 1);
v_a_3441_ = v_a_3479_;
goto v___jp_3440_;
}
else
{
lean_object* v_a_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
v_a_3480_ = lean_ctor_get(v___x_3478_, 0);
lean_inc(v_a_3480_);
lean_dec_ref_known(v___x_3478_, 1);
v___x_3481_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__4));
lean_inc(v_d_3409_);
v___x_3482_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3409_, v___x_3481_);
if (lean_obj_tag(v___x_3482_) == 0)
{
lean_object* v_a_3483_; 
lean_dec(v_a_3480_);
lean_dec(v_a_3476_);
lean_dec(v_a_3472_);
lean_dec(v_a_3468_);
v_a_3483_ = lean_ctor_get(v___x_3482_, 0);
lean_inc(v_a_3483_);
lean_dec_ref_known(v___x_3482_, 1);
v_a_3441_ = v_a_3483_;
goto v___jp_3440_;
}
else
{
lean_object* v_a_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; 
v_a_3484_ = lean_ctor_get(v___x_3482_, 0);
lean_inc(v_a_3484_);
lean_dec_ref_known(v___x_3482_, 1);
v___x_3485_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__5));
lean_inc(v_d_3409_);
v___x_3486_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3409_, v___x_3485_);
if (lean_obj_tag(v___x_3486_) == 0)
{
lean_object* v_a_3487_; 
lean_dec(v_a_3484_);
lean_dec(v_a_3480_);
lean_dec(v_a_3476_);
lean_dec(v_a_3472_);
lean_dec(v_a_3468_);
v_a_3487_ = lean_ctor_get(v___x_3486_, 0);
lean_inc(v_a_3487_);
lean_dec_ref_known(v___x_3486_, 1);
v_a_3441_ = v_a_3487_;
goto v___jp_3440_;
}
else
{
lean_object* v_a_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
v_a_3488_ = lean_ctor_get(v___x_3486_, 0);
lean_inc(v_a_3488_);
lean_dec_ref_known(v___x_3486_, 1);
v___x_3489_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__6));
lean_inc(v_d_3409_);
v___x_3490_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3409_, v___x_3489_);
if (lean_obj_tag(v___x_3490_) == 0)
{
lean_object* v_a_3491_; 
lean_dec(v_a_3488_);
lean_dec(v_a_3484_);
lean_dec(v_a_3480_);
lean_dec(v_a_3476_);
lean_dec(v_a_3472_);
lean_dec(v_a_3468_);
v_a_3491_ = lean_ctor_get(v___x_3490_, 0);
lean_inc(v_a_3491_);
lean_dec_ref_known(v___x_3490_, 1);
v_a_3441_ = v_a_3491_;
goto v___jp_3440_;
}
else
{
lean_object* v_a_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; 
v_a_3492_ = lean_ctor_get(v___x_3490_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3490_, 1);
v___x_3493_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___lam__0___closed__7));
lean_inc(v_d_3409_);
v___x_3494_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0_spec__1(v_d_3409_, v___x_3493_);
if (lean_obj_tag(v___x_3494_) == 0)
{
lean_object* v_a_3495_; 
lean_dec(v_a_3492_);
lean_dec(v_a_3488_);
lean_dec(v_a_3484_);
lean_dec(v_a_3480_);
lean_dec(v_a_3476_);
lean_dec(v_a_3472_);
lean_dec(v_a_3468_);
v_a_3495_ = lean_ctor_get(v___x_3494_, 0);
lean_inc(v_a_3495_);
lean_dec_ref_known(v___x_3494_, 1);
v_a_3441_ = v_a_3495_;
goto v___jp_3440_;
}
else
{
lean_object* v_a_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3512_; 
lean_dec(v_d_3409_);
v_a_3496_ = lean_ctor_get(v___x_3494_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3494_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3498_ = v___x_3494_;
v_isShared_3499_ = v_isSharedCheck_3512_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_a_3496_);
lean_dec(v___x_3494_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3512_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v___x_3500_; double v___x_3501_; double v___x_3502_; double v___x_3503_; double v___x_3504_; double v___x_3505_; double v___x_3506_; double v___x_3507_; double v___x_3508_; lean_object* v___x_3510_; 
v___x_3500_ = lean_alloc_ctor(0, 0, 64);
v___x_3501_ = lean_unbox_float(v_a_3468_);
lean_dec(v_a_3468_);
lean_ctor_set_float(v___x_3500_, 0, v___x_3501_);
v___x_3502_ = lean_unbox_float(v_a_3472_);
lean_dec(v_a_3472_);
lean_ctor_set_float(v___x_3500_, 8, v___x_3502_);
v___x_3503_ = lean_unbox_float(v_a_3476_);
lean_dec(v_a_3476_);
lean_ctor_set_float(v___x_3500_, 16, v___x_3503_);
v___x_3504_ = lean_unbox_float(v_a_3480_);
lean_dec(v_a_3480_);
lean_ctor_set_float(v___x_3500_, 24, v___x_3504_);
v___x_3505_ = lean_unbox_float(v_a_3484_);
lean_dec(v_a_3484_);
lean_ctor_set_float(v___x_3500_, 32, v___x_3505_);
v___x_3506_ = lean_unbox_float(v_a_3488_);
lean_dec(v_a_3488_);
lean_ctor_set_float(v___x_3500_, 40, v___x_3506_);
v___x_3507_ = lean_unbox_float(v_a_3492_);
lean_dec(v_a_3492_);
lean_ctor_set_float(v___x_3500_, 48, v___x_3507_);
v___x_3508_ = lean_unbox_float(v_a_3496_);
lean_dec(v_a_3496_);
lean_ctor_set_float(v___x_3500_, 56, v___x_3508_);
if (v_isShared_3499_ == 0)
{
lean_ctor_set_tag(v___x_3498_, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3500_);
v___x_3510_ = v___x_3498_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v___x_3500_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
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
v___jp_3411_:
{
lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3414_ = lean_string_append(v___y_3412_, v___y_3413_);
lean_dec_ref(v___y_3413_);
v___x_3415_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
v___x_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3415_);
return v___x_3416_;
}
v___jp_3417_:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; uint8_t v___x_3431_; 
v___x_3420_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_3421_ = lean_string_append(v___x_3420_, v_context_3408_);
v___x_3422_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__2));
v___x_3423_ = lean_string_append(v___x_3421_, v___x_3422_);
v___x_3424_ = ((lean_object*)(l_Lasm_Web_instFromJSRect___closed__1));
v___x_3425_ = lean_string_append(v___x_3423_, v___x_3424_);
v___x_3426_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__4));
v___x_3427_ = lean_string_append(v___x_3425_, v___x_3426_);
v___x_3428_ = lean_string_append(v___x_3427_, v_received_3419_);
lean_dec_ref(v_received_3419_);
v___x_3429_ = lean_string_utf8_byte_size(v___y_3418_);
v___x_3430_ = lean_unsigned_to_nat(0u);
v___x_3431_ = lean_nat_dec_eq(v___x_3429_, v___x_3430_);
if (v___x_3431_ == 0)
{
lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
v___x_3432_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__1));
v___x_3433_ = lean_string_append(v___x_3432_, v___y_3418_);
lean_dec_ref(v___y_3418_);
v___x_3434_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0_spec__0___closed__2));
v___x_3435_ = lean_string_append(v___x_3433_, v___x_3434_);
v___y_3412_ = v___x_3428_;
v___y_3413_ = v___x_3435_;
goto v___jp_3411_;
}
else
{
lean_object* v___x_3436_; 
lean_dec_ref(v___y_3418_);
v___x_3436_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___y_3412_ = v___x_3428_;
v___y_3413_ = v___x_3436_;
goto v___jp_3411_;
}
}
v___jp_3437_:
{
lean_object* v___x_3439_; 
v___x_3439_ = l_Lasm_JS_Data_describe(v_d_3409_);
v___y_3418_ = v___y_3438_;
v_received_3419_ = v___x_3439_;
goto v___jp_3417_;
}
v___jp_3440_:
{
if (lean_obj_tag(v_d_3409_) == 9)
{
lean_object* v_value_3442_; lean_object* v_description_3443_; lean_object* v___x_3444_; uint8_t v___x_3445_; 
v_value_3442_ = lean_ctor_get(v_d_3409_, 0);
v_description_3443_ = lean_ctor_get(v_d_3409_, 1);
v___x_3444_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_3445_ = lean_string_dec_eq(v_description_3443_, v___x_3444_);
if (v___x_3445_ == 0)
{
v___y_3438_ = v_a_3441_;
goto v___jp_3437_;
}
else
{
lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3462_; 
lean_inc(v_value_3442_);
v_isSharedCheck_3462_ = !lean_is_exclusive(v_d_3409_);
if (v_isSharedCheck_3462_ == 0)
{
lean_object* v_unused_3463_; lean_object* v_unused_3464_; 
v_unused_3463_ = lean_ctor_get(v_d_3409_, 1);
lean_dec(v_unused_3463_);
v_unused_3464_ = lean_ctor_get(v_d_3409_, 0);
lean_dec(v_unused_3464_);
v___x_3447_ = v_d_3409_;
v_isShared_3448_ = v_isSharedCheck_3462_;
goto v_resetjp_3446_;
}
else
{
lean_dec(v_d_3409_);
v___x_3447_ = lean_box(0);
v_isShared_3448_ = v_isSharedCheck_3462_;
goto v_resetjp_3446_;
}
v_resetjp_3446_:
{
uint32_t v___x_3449_; uint64_t v___x_3450_; lean_object* v___x_3452_; 
v___x_3449_ = 206;
v___x_3450_ = 0ULL;
lean_inc(v_value_3442_);
if (v_isShared_3448_ == 0)
{
lean_ctor_set(v___x_3447_, 1, v___x_3444_);
v___x_3452_ = v___x_3447_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_value_3442_);
lean_ctor_set(v_reuseFailAlloc_3461_, 1, v___x_3444_);
v___x_3452_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
uint32_t v___x_3453_; lean_object* v___x_3454_; 
v___x_3453_ = lasm_js_value_handle(v_value_3442_);
lean_dec(v_value_3442_);
v___x_3454_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3449_, v___x_3450_, v___x_3452_, v___x_3453_);
lean_dec_ref(v___x_3452_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v_a_3455_; uint8_t v___x_3456_; 
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
lean_inc(v_a_3455_);
lean_dec_ref_known(v___x_3454_, 1);
v___x_3456_ = lean_string_validate_utf8(v_a_3455_);
if (v___x_3456_ == 0)
{
lean_object* v___x_3457_; lean_object* v___x_3458_; 
lean_dec(v_a_3455_);
v___x_3457_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__11);
v___x_3458_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_3457_);
v___y_3418_ = v_a_3441_;
v_received_3419_ = v___x_3458_;
goto v___jp_3417_;
}
else
{
lean_object* v___x_3459_; 
v___x_3459_ = lean_string_from_utf8_unchecked(v_a_3455_);
v___y_3418_ = v_a_3441_;
v_received_3419_ = v___x_3459_;
goto v___jp_3417_;
}
}
else
{
lean_object* v___x_3460_; 
lean_dec_ref_known(v___x_3454_, 1);
v___x_3460_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__12));
v___y_3418_ = v_a_3441_;
v_received_3419_ = v___x_3460_;
goto v___jp_3417_;
}
}
}
}
}
else
{
v___y_3438_ = v_a_3441_;
goto v___jp_3437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0___boxed(lean_object* v_context_3513_, lean_object* v_d_3514_, lean_object* v_a_3515_){
_start:
{
lean_object* v_res_3516_; 
v_res_3516_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0(v_context_3513_, v_d_3514_);
lean_dec_ref(v_context_3513_);
return v_res_3516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0(lean_object* v_b_3517_, lean_object* v_args_3518_, uint8_t v_await_3519_){
_start:
{
uint64_t v___y_3522_; uint64_t v___y_3523_; uint64_t v___x_3566_; uint64_t v___y_3568_; 
v___x_3566_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_querySelectorAllIn_spec__0___closed__0);
if (v_await_3519_ == 0)
{
uint64_t v___x_3573_; 
v___x_3573_ = 0ULL;
v___y_3568_ = v___x_3573_;
goto v___jp_3567_;
}
else
{
uint64_t v___x_3574_; 
v___x_3574_ = 2ULL;
v___y_3568_ = v___x_3574_;
goto v___jp_3567_;
}
v___jp_3521_:
{
uint64_t v_flags_3524_; uint32_t v___x_3525_; lean_object* v___x_3526_; uint32_t v___x_3527_; lean_object* v___x_3528_; 
v_flags_3524_ = lean_uint64_lor(v___y_3522_, v___y_3523_);
v___x_3525_ = 214;
v___x_3526_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3517_, v_args_3518_);
v___x_3527_ = 0;
v___x_3528_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3525_, v_flags_3524_, v___x_3526_, v___x_3527_);
lean_dec(v___x_3526_);
if (lean_obj_tag(v___x_3528_) == 0)
{
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3530_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v___x_3528_, 1);
v___x_3530_ = l_Lasm_JS_Wire_decode(v_a_3529_);
lean_dec(v_a_3529_);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_a_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; 
v_a_3531_ = lean_ctor_get(v___x_3530_, 0);
lean_inc(v_a_3531_);
lean_dec_ref_known(v___x_3530_, 1);
v___x_3532_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3517_);
v___x_3533_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0_spec__0(v___x_3532_, v_a_3531_);
lean_dec_ref(v___x_3532_);
return v___x_3533_;
}
else
{
lean_object* v_a_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3541_; 
v_a_3534_ = lean_ctor_get(v___x_3530_, 0);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3536_ = v___x_3530_;
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_a_3534_);
lean_dec(v___x_3530_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v___x_3539_; 
if (v_isShared_3537_ == 0)
{
v___x_3539_ = v___x_3536_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_a_3534_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
return v___x_3539_;
}
}
}
}
else
{
lean_object* v_a_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3549_; 
v_a_3542_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3544_ = v___x_3528_;
v_isShared_3545_ = v_isSharedCheck_3549_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_a_3542_);
lean_dec(v___x_3528_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3549_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___x_3547_; 
if (v_isShared_3545_ == 0)
{
lean_ctor_set_tag(v___x_3544_, 1);
v___x_3547_ = v___x_3544_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v_a_3542_);
v___x_3547_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
return v___x_3547_;
}
}
}
}
else
{
lean_object* v_a_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3565_; 
v_a_3550_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3552_ = v___x_3528_;
v_isShared_3553_ = v_isSharedCheck_3565_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_a_3550_);
lean_dec(v___x_3528_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3565_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3563_; 
v___x_3554_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__1));
v___x_3555_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3517_);
v___x_3556_ = lean_string_append(v___x_3554_, v___x_3555_);
lean_dec_ref(v___x_3555_);
v___x_3557_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0___closed__0));
v___x_3558_ = lean_string_append(v___x_3556_, v___x_3557_);
v___x_3559_ = lean_io_error_to_string(v_a_3550_);
v___x_3560_ = lean_string_append(v___x_3558_, v___x_3559_);
lean_dec_ref(v___x_3559_);
v___x_3561_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3561_, 0, v___x_3560_);
if (v_isShared_3553_ == 0)
{
lean_ctor_set(v___x_3552_, 0, v___x_3561_);
v___x_3563_ = v___x_3552_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v___x_3561_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
return v___x_3563_;
}
}
}
}
v___jp_3567_:
{
uint8_t v_construct_3569_; uint64_t v___x_3570_; 
v_construct_3569_ = lean_ctor_get_uint8(v_b_3517_, sizeof(void*)*4);
v___x_3570_ = lean_uint64_lor(v___x_3566_, v___y_3568_);
if (v_construct_3569_ == 0)
{
uint64_t v___x_3571_; 
v___x_3571_ = 0ULL;
v___y_3522_ = v___x_3570_;
v___y_3523_ = v___x_3571_;
goto v___jp_3521_;
}
else
{
uint64_t v___x_3572_; 
v___x_3572_ = 4ULL;
v___y_3522_ = v___x_3570_;
v___y_3523_ = v___x_3572_;
goto v___jp_3521_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0___boxed(lean_object* v_b_3575_, lean_object* v_args_3576_, lean_object* v_await_3577_, lean_object* v_a_3578_){
_start:
{
uint8_t v_await_boxed_3579_; lean_object* v_res_3580_; 
v_await_boxed_3579_ = lean_unbox(v_await_3577_);
v_res_3580_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0(v_b_3575_, v_args_3576_, v_await_boxed_3579_);
lean_dec_ref(v_b_3575_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_rectOf(lean_object* v_a_3589_){
_start:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; uint8_t v___x_3596_; lean_object* v___x_3597_; 
v___x_3591_ = ((lean_object*)(l_Lasm_Web_rectOf___closed__2));
v___x_3592_ = ((lean_object*)(l_Lasm_Web_window___closed__3));
v___x_3593_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
v___x_3594_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3594_, 0, v_a_3589_);
lean_ctor_set(v___x_3594_, 1, v___x_3593_);
v___x_3595_ = lean_array_push(v___x_3592_, v___x_3594_);
v___x_3596_ = 1;
v___x_3597_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_rectOf_spec__0(v___x_3591_, v___x_3595_, v___x_3596_);
return v___x_3597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_rectOf___boxed(lean_object* v_a_3598_, lean_object* v_a_3599_){
_start:
{
lean_object* v_res_3600_; 
v_res_3600_ = l_Lasm_Web_rectOf(v_a_3598_);
return v_res_3600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_appendChild(lean_object* v_parent_3601_, lean_object* v_child_3602_){
_start:
{
lean_object* v___x_3604_; 
v___x_3604_ = l_Lasm_Web_Raw_appendChild(v_parent_3601_, v_child_3602_);
return v___x_3604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_appendChild___boxed(lean_object* v_parent_3605_, lean_object* v_child_3606_, lean_object* v_a_3607_){
_start:
{
lean_object* v_res_3608_; 
v_res_3608_ = l_Lasm_Web_Node_appendChild(v_parent_3605_, v_child_3606_);
return v_res_3608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_append(lean_object* v_parent_3609_, lean_object* v_children_3610_){
_start:
{
lean_object* v___x_3612_; 
v___x_3612_ = l_Lasm_Web_Raw_append(v_parent_3609_, v_children_3610_);
return v___x_3612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_append___boxed(lean_object* v_parent_3613_, lean_object* v_children_3614_, lean_object* v_a_3615_){
_start:
{
lean_object* v_res_3616_; 
v_res_3616_ = l_Lasm_Web_Node_append(v_parent_3613_, v_children_3614_);
return v_res_3616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_insertBefore(lean_object* v_parent_3617_, lean_object* v_child_3618_, lean_object* v_reference_3619_){
_start:
{
lean_object* v___x_3621_; 
v___x_3621_ = l_Lasm_Web_Raw_insertBefore(v_parent_3617_, v_child_3618_, v_reference_3619_);
return v___x_3621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_insertBefore___boxed(lean_object* v_parent_3622_, lean_object* v_child_3623_, lean_object* v_reference_3624_, lean_object* v_a_3625_){
_start:
{
lean_object* v_res_3626_; 
v_res_3626_ = l_Lasm_Web_Node_insertBefore(v_parent_3622_, v_child_3623_, v_reference_3624_);
lean_dec(v_reference_3624_);
return v_res_3626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_removeChild(lean_object* v_parent_3627_, lean_object* v_child_3628_){
_start:
{
lean_object* v___x_3630_; 
v___x_3630_ = l_Lasm_Web_Raw_removeChild(v_parent_3627_, v_child_3628_);
return v___x_3630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_removeChild___boxed(lean_object* v_parent_3631_, lean_object* v_child_3632_, lean_object* v_a_3633_){
_start:
{
lean_object* v_res_3634_; 
v_res_3634_ = l_Lasm_Web_Node_removeChild(v_parent_3631_, v_child_3632_);
return v_res_3634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_remove(lean_object* v_node_3635_){
_start:
{
lean_object* v___x_3637_; 
v___x_3637_ = l_Lasm_Web_Raw_removeNode(v_node_3635_);
return v___x_3637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_remove___boxed(lean_object* v_node_3638_, lean_object* v_a_3639_){
_start:
{
lean_object* v_res_3640_; 
v_res_3640_ = l_Lasm_Web_Node_remove(v_node_3638_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceWith(lean_object* v_node_3641_, lean_object* v_replacement_3642_){
_start:
{
lean_object* v___x_3644_; 
v___x_3644_ = l_Lasm_Web_Raw_replaceNode(v_node_3641_, v_replacement_3642_);
return v___x_3644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceWith___boxed(lean_object* v_node_3645_, lean_object* v_replacement_3646_, lean_object* v_a_3647_){
_start:
{
lean_object* v_res_3648_; 
v_res_3648_ = l_Lasm_Web_Node_replaceWith(v_node_3645_, v_replacement_3646_);
return v_res_3648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceChildren(lean_object* v_parent_3649_, lean_object* v_children_3650_){
_start:
{
lean_object* v___x_3652_; 
v___x_3652_ = l_Lasm_Web_Raw_replaceChildren(v_parent_3649_, v_children_3650_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_replaceChildren___boxed(lean_object* v_parent_3653_, lean_object* v_children_3654_, lean_object* v_a_3655_){
_start:
{
lean_object* v_res_3656_; 
v_res_3656_ = l_Lasm_Web_Node_replaceChildren(v_parent_3653_, v_children_3654_);
return v_res_3656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_textContent(lean_object* v_node_3657_){
_start:
{
lean_object* v___x_3659_; 
v___x_3659_ = l_Lasm_Web_Raw_getText(v_node_3657_);
return v___x_3659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_textContent___boxed(lean_object* v_node_3660_, lean_object* v_a_3661_){
_start:
{
lean_object* v_res_3662_; 
v_res_3662_ = l_Lasm_Web_Node_textContent(v_node_3660_);
return v_res_3662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_setTextContent(lean_object* v_node_3663_, lean_object* v_text_3664_){
_start:
{
lean_object* v___x_3666_; 
v___x_3666_ = l_Lasm_Web_Raw_setText(v_node_3663_, v_text_3664_);
return v___x_3666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_setTextContent___boxed(lean_object* v_node_3667_, lean_object* v_text_3668_, lean_object* v_a_3669_){
_start:
{
lean_object* v_res_3670_; 
v_res_3670_ = l_Lasm_Web_Node_setTextContent(v_node_3667_, v_text_3668_);
return v_res_3670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentNode(lean_object* v_node_3671_){
_start:
{
lean_object* v___x_3673_; 
v___x_3673_ = l_Lasm_Web_Raw_parentNode(v_node_3671_);
return v___x_3673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentNode___boxed(lean_object* v_node_3674_, lean_object* v_a_3675_){
_start:
{
lean_object* v_res_3676_; 
v_res_3676_ = l_Lasm_Web_Node_parentNode(v_node_3674_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentElement(lean_object* v_node_3677_){
_start:
{
lean_object* v___x_3679_; 
v___x_3679_ = l_Lasm_Web_Raw_parentElement(v_node_3677_);
return v___x_3679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_parentElement___boxed(lean_object* v_node_3680_, lean_object* v_a_3681_){
_start:
{
lean_object* v_res_3682_; 
v_res_3682_ = l_Lasm_Web_Node_parentElement(v_node_3680_);
return v_res_3682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_firstChild(lean_object* v_node_3683_){
_start:
{
lean_object* v___x_3685_; 
v___x_3685_ = l_Lasm_Web_Raw_firstChild(v_node_3683_);
return v___x_3685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_firstChild___boxed(lean_object* v_node_3686_, lean_object* v_a_3687_){
_start:
{
lean_object* v_res_3688_; 
v_res_3688_ = l_Lasm_Web_Node_firstChild(v_node_3686_);
return v_res_3688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_lastChild(lean_object* v_node_3689_){
_start:
{
lean_object* v___x_3691_; 
v___x_3691_ = l_Lasm_Web_Raw_lastChild(v_node_3689_);
return v___x_3691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_lastChild___boxed(lean_object* v_node_3692_, lean_object* v_a_3693_){
_start:
{
lean_object* v_res_3694_; 
v_res_3694_ = l_Lasm_Web_Node_lastChild(v_node_3692_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nextSibling(lean_object* v_node_3695_){
_start:
{
lean_object* v___x_3697_; 
v___x_3697_ = l_Lasm_Web_Raw_nextSibling(v_node_3695_);
return v___x_3697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nextSibling___boxed(lean_object* v_node_3698_, lean_object* v_a_3699_){
_start:
{
lean_object* v_res_3700_; 
v_res_3700_ = l_Lasm_Web_Node_nextSibling(v_node_3698_);
return v_res_3700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_previousSibling(lean_object* v_node_3701_){
_start:
{
lean_object* v___x_3703_; 
v___x_3703_ = l_Lasm_Web_Raw_previousSibling(v_node_3701_);
return v___x_3703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_previousSibling___boxed(lean_object* v_node_3704_, lean_object* v_a_3705_){
_start:
{
lean_object* v_res_3706_; 
v_res_3706_ = l_Lasm_Web_Node_previousSibling(v_node_3704_);
return v_res_3706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_childNodes(lean_object* v_node_3707_){
_start:
{
lean_object* v___x_3709_; 
v___x_3709_ = l_Lasm_Web_Raw_childNodes(v_node_3707_);
return v___x_3709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_childNodes___boxed(lean_object* v_node_3710_, lean_object* v_a_3711_){
_start:
{
lean_object* v_res_3712_; 
v_res_3712_ = l_Lasm_Web_Node_childNodes(v_node_3710_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_contains(lean_object* v_node_3713_, lean_object* v_other_3714_){
_start:
{
lean_object* v___x_3716_; 
v___x_3716_ = l_Lasm_Web_Raw_contains(v_node_3713_, v_other_3714_);
return v___x_3716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_contains___boxed(lean_object* v_node_3717_, lean_object* v_other_3718_, lean_object* v_a_3719_){
_start:
{
lean_object* v_res_3720_; 
v_res_3720_ = l_Lasm_Web_Node_contains(v_node_3717_, v_other_3718_);
return v_res_3720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_cloneNode(lean_object* v_node_3721_, uint8_t v_deep_3722_){
_start:
{
lean_object* v___x_3724_; 
v___x_3724_ = l_Lasm_Web_Raw_cloneNode(v_node_3721_, v_deep_3722_);
return v___x_3724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_cloneNode___boxed(lean_object* v_node_3725_, lean_object* v_deep_3726_, lean_object* v_a_3727_){
_start:
{
uint8_t v_deep_boxed_3728_; lean_object* v_res_3729_; 
v_deep_boxed_3728_ = lean_unbox(v_deep_3726_);
v_res_3729_ = l_Lasm_Web_Node_cloneNode(v_node_3725_, v_deep_boxed_3728_);
return v_res_3729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_isConnected(lean_object* v_node_3730_){
_start:
{
lean_object* v___x_3732_; 
v___x_3732_ = l_Lasm_Web_Raw_isConnected(v_node_3730_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_isConnected___boxed(lean_object* v_node_3733_, lean_object* v_a_3734_){
_start:
{
lean_object* v_res_3735_; 
v_res_3735_ = l_Lasm_Web_Node_isConnected(v_node_3733_);
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nodeName(lean_object* v_node_3736_){
_start:
{
lean_object* v___x_3738_; 
v___x_3738_ = l_Lasm_Web_Raw_nodeName(v_node_3736_);
return v___x_3738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_nodeName___boxed(lean_object* v_node_3739_, lean_object* v_a_3740_){
_start:
{
lean_object* v_res_3741_; 
v_res_3741_ = l_Lasm_Web_Node_nodeName(v_node_3739_);
return v_res_3741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelector(lean_object* v_node_3742_, lean_object* v_selector_3743_){
_start:
{
lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3745_, 0, v_node_3742_);
v___x_3746_ = l_Lasm_Web_querySelectorIn(v_selector_3743_, v___x_3745_);
lean_dec_ref_known(v___x_3745_, 1);
return v___x_3746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelector___boxed(lean_object* v_node_3747_, lean_object* v_selector_3748_, lean_object* v_a_3749_){
_start:
{
lean_object* v_res_3750_; 
v_res_3750_ = l_Lasm_Web_Node_querySelector(v_node_3747_, v_selector_3748_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelectorAll(lean_object* v_node_3751_, lean_object* v_selector_3752_){
_start:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; 
v___x_3754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3754_, 0, v_node_3751_);
v___x_3755_ = l_Lasm_Web_querySelectorAllIn(v_selector_3752_, v___x_3754_);
lean_dec_ref_known(v___x_3754_, 1);
return v___x_3755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Node_querySelectorAll___boxed(lean_object* v_node_3756_, lean_object* v_selector_3757_, lean_object* v_a_3758_){
_start:
{
lean_object* v_res_3759_; 
v_res_3759_ = l_Lasm_Web_Node_querySelectorAll(v_node_3756_, v_selector_3757_);
return v_res_3759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_tagName(lean_object* v_e_3760_){
_start:
{
lean_object* v___x_3762_; 
v___x_3762_ = l_Lasm_Web_Raw_tagName(v_e_3760_);
return v___x_3762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_tagName___boxed(lean_object* v_e_3763_, lean_object* v_a_3764_){
_start:
{
lean_object* v_res_3765_; 
v_res_3765_ = l_Lasm_Web_Element_tagName(v_e_3763_);
return v_res_3765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_children(lean_object* v_e_3766_){
_start:
{
lean_object* v___x_3768_; 
v___x_3768_ = l_Lasm_Web_Raw_children(v_e_3766_);
return v___x_3768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_children___boxed(lean_object* v_e_3769_, lean_object* v_a_3770_){
_start:
{
lean_object* v_res_3771_; 
v_res_3771_ = l_Lasm_Web_Element_children(v_e_3769_);
return v_res_3771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_getAttribute(lean_object* v_e_3772_, lean_object* v_name_3773_){
_start:
{
lean_object* v___x_3775_; 
v___x_3775_ = l_Lasm_Web_Raw_getAttribute(v_e_3772_, v_name_3773_);
return v___x_3775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_getAttribute___boxed(lean_object* v_e_3776_, lean_object* v_name_3777_, lean_object* v_a_3778_){
_start:
{
lean_object* v_res_3779_; 
v_res_3779_ = l_Lasm_Web_Element_getAttribute(v_e_3776_, v_name_3777_);
return v_res_3779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttribute(lean_object* v_e_3780_, lean_object* v_name_3781_, lean_object* v_value_3782_){
_start:
{
lean_object* v___x_3784_; 
v___x_3784_ = l_Lasm_Web_Raw_setAttribute(v_e_3780_, v_name_3781_, v_value_3782_);
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttribute___boxed(lean_object* v_e_3785_, lean_object* v_name_3786_, lean_object* v_value_3787_, lean_object* v_a_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l_Lasm_Web_Element_setAttribute(v_e_3785_, v_name_3786_, v_value_3787_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttributes(lean_object* v_e_3790_, lean_object* v_attributes_3791_){
_start:
{
lean_object* v___x_3793_; 
v___x_3793_ = l_Lasm_Web_Raw_setAttributes(v_e_3790_, v_attributes_3791_);
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setAttributes___boxed(lean_object* v_e_3794_, lean_object* v_attributes_3795_, lean_object* v_a_3796_){
_start:
{
lean_object* v_res_3797_; 
v_res_3797_ = l_Lasm_Web_Element_setAttributes(v_e_3794_, v_attributes_3795_);
return v_res_3797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeAttribute(lean_object* v_e_3798_, lean_object* v_name_3799_){
_start:
{
lean_object* v___x_3801_; 
v___x_3801_ = l_Lasm_Web_Raw_removeAttribute(v_e_3798_, v_name_3799_);
return v___x_3801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeAttribute___boxed(lean_object* v_e_3802_, lean_object* v_name_3803_, lean_object* v_a_3804_){
_start:
{
lean_object* v_res_3805_; 
v_res_3805_ = l_Lasm_Web_Element_removeAttribute(v_e_3802_, v_name_3803_);
return v_res_3805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasAttribute(lean_object* v_e_3806_, lean_object* v_name_3807_){
_start:
{
lean_object* v___x_3809_; 
v___x_3809_ = l_Lasm_Web_Raw_hasAttribute(v_e_3806_, v_name_3807_);
return v___x_3809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasAttribute___boxed(lean_object* v_e_3810_, lean_object* v_name_3811_, lean_object* v_a_3812_){
_start:
{
lean_object* v_res_3813_; 
v_res_3813_ = l_Lasm_Web_Element_hasAttribute(v_e_3810_, v_name_3811_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleAttribute(lean_object* v_e_3814_, lean_object* v_name_3815_, lean_object* v_force_3816_){
_start:
{
lean_object* v___x_3818_; 
v___x_3818_ = l_Lasm_Web_Raw_toggleAttribute(v_e_3814_, v_name_3815_, v_force_3816_);
return v___x_3818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleAttribute___boxed(lean_object* v_e_3819_, lean_object* v_name_3820_, lean_object* v_force_3821_, lean_object* v_a_3822_){
_start:
{
lean_object* v_res_3823_; 
v_res_3823_ = l_Lasm_Web_Element_toggleAttribute(v_e_3819_, v_name_3820_, v_force_3821_);
lean_dec(v_force_3821_);
return v_res_3823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_id(lean_object* v_e_3825_){
_start:
{
lean_object* v___x_3827_; lean_object* v___x_3828_; 
v___x_3827_ = ((lean_object*)(l_Lasm_Web_Element_id___closed__0));
v___x_3828_ = l_Lasm_Web_Raw_getAttribute(v_e_3825_, v___x_3827_);
if (lean_obj_tag(v___x_3828_) == 0)
{
lean_object* v_a_3829_; lean_object* v___x_3831_; uint8_t v_isShared_3832_; uint8_t v_isSharedCheck_3841_; 
v_a_3829_ = lean_ctor_get(v___x_3828_, 0);
v_isSharedCheck_3841_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3841_ == 0)
{
v___x_3831_ = v___x_3828_;
v_isShared_3832_ = v_isSharedCheck_3841_;
goto v_resetjp_3830_;
}
else
{
lean_inc(v_a_3829_);
lean_dec(v___x_3828_);
v___x_3831_ = lean_box(0);
v_isShared_3832_ = v_isSharedCheck_3841_;
goto v_resetjp_3830_;
}
v_resetjp_3830_:
{
if (lean_obj_tag(v_a_3829_) == 0)
{
lean_object* v___x_3833_; lean_object* v___x_3835_; 
v___x_3833_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_window_spec__0_spec__0___closed__0));
if (v_isShared_3832_ == 0)
{
lean_ctor_set(v___x_3831_, 0, v___x_3833_);
v___x_3835_ = v___x_3831_;
goto v_reusejp_3834_;
}
else
{
lean_object* v_reuseFailAlloc_3836_; 
v_reuseFailAlloc_3836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3836_, 0, v___x_3833_);
v___x_3835_ = v_reuseFailAlloc_3836_;
goto v_reusejp_3834_;
}
v_reusejp_3834_:
{
return v___x_3835_;
}
}
else
{
lean_object* v_val_3837_; lean_object* v___x_3839_; 
v_val_3837_ = lean_ctor_get(v_a_3829_, 0);
lean_inc(v_val_3837_);
lean_dec_ref_known(v_a_3829_, 1);
if (v_isShared_3832_ == 0)
{
lean_ctor_set(v___x_3831_, 0, v_val_3837_);
v___x_3839_ = v___x_3831_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v_val_3837_);
v___x_3839_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
return v___x_3839_;
}
}
}
}
else
{
lean_object* v_a_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3849_; 
v_a_3842_ = lean_ctor_get(v___x_3828_, 0);
v_isSharedCheck_3849_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3844_ = v___x_3828_;
v_isShared_3845_ = v_isSharedCheck_3849_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_a_3842_);
lean_dec(v___x_3828_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3849_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
lean_object* v___x_3847_; 
if (v_isShared_3845_ == 0)
{
v___x_3847_ = v___x_3844_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v_a_3842_);
v___x_3847_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
return v___x_3847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_id___boxed(lean_object* v_e_3850_, lean_object* v_a_3851_){
_start:
{
lean_object* v_res_3852_; 
v_res_3852_ = l_Lasm_Web_Element_id(v_e_3850_);
return v_res_3852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setId(lean_object* v_e_3853_, lean_object* v_id_3854_){
_start:
{
lean_object* v___x_3856_; lean_object* v___x_3857_; 
v___x_3856_ = ((lean_object*)(l_Lasm_Web_Element_id___closed__0));
v___x_3857_ = l_Lasm_Web_Raw_setAttribute(v_e_3853_, v___x_3856_, v_id_3854_);
return v___x_3857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setId___boxed(lean_object* v_e_3858_, lean_object* v_id_3859_, lean_object* v_a_3860_){
_start:
{
lean_object* v_res_3861_; 
v_res_3861_ = l_Lasm_Web_Element_setId(v_e_3858_, v_id_3859_);
return v_res_3861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_data(lean_object* v_e_3863_, lean_object* v_key_3864_){
_start:
{
lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; 
v___x_3866_ = ((lean_object*)(l_Lasm_Web_Element_data___closed__0));
v___x_3867_ = lean_string_append(v___x_3866_, v_key_3864_);
v___x_3868_ = l_Lasm_Web_Raw_getAttribute(v_e_3863_, v___x_3867_);
return v___x_3868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_data___boxed(lean_object* v_e_3869_, lean_object* v_key_3870_, lean_object* v_a_3871_){
_start:
{
lean_object* v_res_3872_; 
v_res_3872_ = l_Lasm_Web_Element_data(v_e_3869_, v_key_3870_);
lean_dec_ref(v_key_3870_);
return v_res_3872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setData(lean_object* v_e_3873_, lean_object* v_key_3874_, lean_object* v_value_3875_){
_start:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v___x_3877_ = ((lean_object*)(l_Lasm_Web_Element_data___closed__0));
v___x_3878_ = lean_string_append(v___x_3877_, v_key_3874_);
v___x_3879_ = l_Lasm_Web_Raw_setAttribute(v_e_3873_, v___x_3878_, v_value_3875_);
return v___x_3879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setData___boxed(lean_object* v_e_3880_, lean_object* v_key_3881_, lean_object* v_value_3882_, lean_object* v_a_3883_){
_start:
{
lean_object* v_res_3884_; 
v_res_3884_ = l_Lasm_Web_Element_setData(v_e_3880_, v_key_3881_, v_value_3882_);
lean_dec_ref(v_key_3881_);
return v_res_3884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_addClass(lean_object* v_e_3885_, lean_object* v_names_3886_){
_start:
{
lean_object* v___x_3888_; 
v___x_3888_ = l_Lasm_Web_Raw_classAdd(v_e_3885_, v_names_3886_);
return v___x_3888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_addClass___boxed(lean_object* v_e_3889_, lean_object* v_names_3890_, lean_object* v_a_3891_){
_start:
{
lean_object* v_res_3892_; 
v_res_3892_ = l_Lasm_Web_Element_addClass(v_e_3889_, v_names_3890_);
return v_res_3892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeClass(lean_object* v_e_3893_, lean_object* v_names_3894_){
_start:
{
lean_object* v___x_3896_; 
v___x_3896_ = l_Lasm_Web_Raw_classRemove(v_e_3893_, v_names_3894_);
return v___x_3896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeClass___boxed(lean_object* v_e_3897_, lean_object* v_names_3898_, lean_object* v_a_3899_){
_start:
{
lean_object* v_res_3900_; 
v_res_3900_ = l_Lasm_Web_Element_removeClass(v_e_3897_, v_names_3898_);
return v_res_3900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleClass(lean_object* v_e_3901_, lean_object* v_name_3902_, lean_object* v_force_3903_){
_start:
{
lean_object* v___x_3905_; 
v___x_3905_ = l_Lasm_Web_Raw_classToggle(v_e_3901_, v_name_3902_, v_force_3903_);
return v___x_3905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_toggleClass___boxed(lean_object* v_e_3906_, lean_object* v_name_3907_, lean_object* v_force_3908_, lean_object* v_a_3909_){
_start:
{
lean_object* v_res_3910_; 
v_res_3910_ = l_Lasm_Web_Element_toggleClass(v_e_3906_, v_name_3907_, v_force_3908_);
lean_dec(v_force_3908_);
return v_res_3910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasClass(lean_object* v_e_3911_, lean_object* v_name_3912_){
_start:
{
lean_object* v___x_3914_; 
v___x_3914_ = l_Lasm_Web_Raw_classContains(v_e_3911_, v_name_3912_);
return v___x_3914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_hasClass___boxed(lean_object* v_e_3915_, lean_object* v_name_3916_, lean_object* v_a_3917_){
_start:
{
lean_object* v_res_3918_; 
v_res_3918_ = l_Lasm_Web_Element_hasClass(v_e_3915_, v_name_3916_);
return v_res_3918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setClassName(lean_object* v_e_3920_, lean_object* v_names_3921_){
_start:
{
lean_object* v___x_3923_; lean_object* v___x_3924_; 
v___x_3923_ = ((lean_object*)(l_Lasm_Web_Element_setClassName___closed__0));
v___x_3924_ = l_Lasm_Web_Raw_setAttribute(v_e_3920_, v___x_3923_, v_names_3921_);
return v___x_3924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setClassName___boxed(lean_object* v_e_3925_, lean_object* v_names_3926_, lean_object* v_a_3927_){
_start:
{
lean_object* v_res_3928_; 
v_res_3928_ = l_Lasm_Web_Element_setClassName(v_e_3925_, v_names_3926_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyle(lean_object* v_e_3929_, lean_object* v_property_3930_, lean_object* v_value_3931_){
_start:
{
lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
v___x_3933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3933_, 0, v_property_3930_);
lean_ctor_set(v___x_3933_, 1, v_value_3931_);
v___x_3934_ = lean_unsigned_to_nat(1u);
v___x_3935_ = lean_mk_empty_array_with_capacity(v___x_3934_);
v___x_3936_ = lean_array_push(v___x_3935_, v___x_3933_);
v___x_3937_ = l_Lasm_Web_Raw_setStyles(v_e_3929_, v___x_3936_);
return v___x_3937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyle___boxed(lean_object* v_e_3938_, lean_object* v_property_3939_, lean_object* v_value_3940_, lean_object* v_a_3941_){
_start:
{
lean_object* v_res_3942_; 
v_res_3942_ = l_Lasm_Web_Element_setStyle(v_e_3938_, v_property_3939_, v_value_3940_);
return v_res_3942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyles(lean_object* v_e_3943_, lean_object* v_properties_3944_){
_start:
{
lean_object* v___x_3946_; 
v___x_3946_ = l_Lasm_Web_Raw_setStyles(v_e_3943_, v_properties_3944_);
return v___x_3946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setStyles___boxed(lean_object* v_e_3947_, lean_object* v_properties_3948_, lean_object* v_a_3949_){
_start:
{
lean_object* v_res_3950_; 
v_res_3950_ = l_Lasm_Web_Element_setStyles(v_e_3947_, v_properties_3948_);
return v_res_3950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeStyle(lean_object* v_e_3951_, lean_object* v_property_3952_){
_start:
{
lean_object* v___x_3954_; 
v___x_3954_ = l_Lasm_Web_Raw_removeStyle(v_e_3951_, v_property_3952_);
return v___x_3954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_removeStyle___boxed(lean_object* v_e_3955_, lean_object* v_property_3956_, lean_object* v_a_3957_){
_start:
{
lean_object* v_res_3958_; 
v_res_3958_ = l_Lasm_Web_Element_removeStyle(v_e_3955_, v_property_3956_);
return v_res_3958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_style(lean_object* v_e_3959_, lean_object* v_property_3960_){
_start:
{
lean_object* v___x_3962_; 
v___x_3962_ = l_Lasm_Web_Raw_style(v_e_3959_, v_property_3960_);
return v___x_3962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_style___boxed(lean_object* v_e_3963_, lean_object* v_property_3964_, lean_object* v_a_3965_){
_start:
{
lean_object* v_res_3966_; 
v_res_3966_ = l_Lasm_Web_Element_style(v_e_3963_, v_property_3964_);
return v_res_3966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_innerHTML(lean_object* v_e_3967_){
_start:
{
lean_object* v___x_3969_; 
v___x_3969_ = l_Lasm_Web_Raw_getInnerHTML(v_e_3967_);
return v___x_3969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_innerHTML___boxed(lean_object* v_e_3970_, lean_object* v_a_3971_){
_start:
{
lean_object* v_res_3972_; 
v_res_3972_ = l_Lasm_Web_Element_innerHTML(v_e_3970_);
return v_res_3972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setInnerHTML(lean_object* v_e_3973_, lean_object* v_html_3974_){
_start:
{
lean_object* v___x_3976_; 
v___x_3976_ = l_Lasm_Web_Raw_setInnerHTML(v_e_3973_, v_html_3974_);
return v___x_3976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setInnerHTML___boxed(lean_object* v_e_3977_, lean_object* v_html_3978_, lean_object* v_a_3979_){
_start:
{
lean_object* v_res_3980_; 
v_res_3980_ = l_Lasm_Web_Element_setInnerHTML(v_e_3977_, v_html_3978_);
return v_res_3980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_value(lean_object* v_e_3981_){
_start:
{
lean_object* v___x_3983_; 
v___x_3983_ = l_Lasm_Web_Raw_getValue(v_e_3981_);
return v___x_3983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_value___boxed(lean_object* v_e_3984_, lean_object* v_a_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Lasm_Web_Element_value(v_e_3984_);
return v_res_3986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setValue(lean_object* v_e_3987_, lean_object* v_value_3988_){
_start:
{
lean_object* v___x_3990_; 
v___x_3990_ = l_Lasm_Web_Raw_setValue(v_e_3987_, v_value_3988_);
return v___x_3990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setValue___boxed(lean_object* v_e_3991_, lean_object* v_value_3992_, lean_object* v_a_3993_){
_start:
{
lean_object* v_res_3994_; 
v_res_3994_ = l_Lasm_Web_Element_setValue(v_e_3991_, v_value_3992_);
return v_res_3994_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_checked(lean_object* v_e_3995_){
_start:
{
lean_object* v___x_3997_; 
v___x_3997_ = l_Lasm_Web_Raw_getChecked(v_e_3995_);
return v___x_3997_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_checked___boxed(lean_object* v_e_3998_, lean_object* v_a_3999_){
_start:
{
lean_object* v_res_4000_; 
v_res_4000_ = l_Lasm_Web_Element_checked(v_e_3998_);
return v_res_4000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setChecked(lean_object* v_e_4001_, uint8_t v_checked_4002_){
_start:
{
lean_object* v___x_4004_; 
v___x_4004_ = l_Lasm_Web_Raw_setChecked(v_e_4001_, v_checked_4002_);
return v___x_4004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setChecked___boxed(lean_object* v_e_4005_, lean_object* v_checked_4006_, lean_object* v_a_4007_){
_start:
{
uint8_t v_checked_boxed_4008_; lean_object* v_res_4009_; 
v_checked_boxed_4008_ = lean_unbox(v_checked_4006_);
v_res_4009_ = l_Lasm_Web_Element_setChecked(v_e_4005_, v_checked_boxed_4008_);
return v_res_4009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_focus(lean_object* v_e_4010_){
_start:
{
lean_object* v___x_4012_; 
v___x_4012_ = l_Lasm_Web_Raw_focus(v_e_4010_);
return v___x_4012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_focus___boxed(lean_object* v_e_4013_, lean_object* v_a_4014_){
_start:
{
lean_object* v_res_4015_; 
v_res_4015_ = l_Lasm_Web_Element_focus(v_e_4013_);
return v_res_4015_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_blur(lean_object* v_e_4016_){
_start:
{
lean_object* v___x_4018_; 
v___x_4018_ = l_Lasm_Web_Raw_blur(v_e_4016_);
return v___x_4018_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_blur___boxed(lean_object* v_e_4019_, lean_object* v_a_4020_){
_start:
{
lean_object* v_res_4021_; 
v_res_4021_ = l_Lasm_Web_Element_blur(v_e_4019_);
return v_res_4021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_click(lean_object* v_e_4022_){
_start:
{
lean_object* v___x_4024_; 
v___x_4024_ = l_Lasm_Web_Raw_click(v_e_4022_);
return v___x_4024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_click___boxed(lean_object* v_e_4025_, lean_object* v_a_4026_){
_start:
{
lean_object* v_res_4027_; 
v_res_4027_ = l_Lasm_Web_Element_click(v_e_4025_);
return v_res_4027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_scrollIntoView(lean_object* v_e_4028_, uint8_t v_smooth_4029_){
_start:
{
lean_object* v___x_4031_; 
v___x_4031_ = l_Lasm_Web_Raw_scrollIntoView(v_e_4028_, v_smooth_4029_);
return v___x_4031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_scrollIntoView___boxed(lean_object* v_e_4032_, lean_object* v_smooth_4033_, lean_object* v_a_4034_){
_start:
{
uint8_t v_smooth_boxed_4035_; lean_object* v_res_4036_; 
v_smooth_boxed_4035_ = lean_unbox(v_smooth_4033_);
v_res_4036_ = l_Lasm_Web_Element_scrollIntoView(v_e_4032_, v_smooth_boxed_4035_);
return v_res_4036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_rect(lean_object* v_e_4037_){
_start:
{
lean_object* v___x_4039_; 
v___x_4039_ = l_Lasm_Web_rectOf(v_e_4037_);
return v___x_4039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_rect___boxed(lean_object* v_e_4040_, lean_object* v_a_4041_){
_start:
{
lean_object* v_res_4042_; 
v_res_4042_ = l_Lasm_Web_Element_rect(v_e_4040_);
return v_res_4042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___redArg(lean_object* v_e_4044_, lean_object* v_name_4045_, lean_object* v_inst_4046_){
_start:
{
lean_object* v___x_4048_; 
lean_inc_ref(v_name_4045_);
v___x_4048_ = l_Lasm_Web_Raw_getProp(v_e_4044_, v_name_4045_);
if (lean_obj_tag(v___x_4048_) == 0)
{
lean_object* v_a_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; 
v_a_4049_ = lean_ctor_get(v___x_4048_, 0);
lean_inc(v_a_4049_);
lean_dec_ref_known(v___x_4048_, 1);
v___x_4050_ = ((lean_object*)(l_Lasm_Web_Element_prop___redArg___closed__0));
v___x_4051_ = lean_string_append(v___x_4050_, v_name_4045_);
lean_dec_ref(v_name_4045_);
v___x_4052_ = l_Lasm_JS_decodeAs___redArg(v_inst_4046_, v___x_4051_, v_a_4049_);
lean_dec_ref(v___x_4051_);
return v___x_4052_;
}
else
{
lean_object* v_a_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4060_; 
lean_dec_ref(v_inst_4046_);
lean_dec_ref(v_name_4045_);
v_a_4053_ = lean_ctor_get(v___x_4048_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4048_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4055_ = v___x_4048_;
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_a_4053_);
lean_dec(v___x_4048_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v___x_4058_; 
if (v_isShared_4056_ == 0)
{
v___x_4058_ = v___x_4055_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v_a_4053_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
return v___x_4058_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___redArg___boxed(lean_object* v_e_4061_, lean_object* v_name_4062_, lean_object* v_inst_4063_, lean_object* v_a_4064_){
_start:
{
lean_object* v_res_4065_; 
v_res_4065_ = l_Lasm_Web_Element_prop___redArg(v_e_4061_, v_name_4062_, v_inst_4063_);
return v_res_4065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop(lean_object* v_e_4066_, lean_object* v_name_4067_, lean_object* v_00_u03b1_4068_, lean_object* v_inst_4069_){
_start:
{
lean_object* v___x_4071_; 
v___x_4071_ = l_Lasm_Web_Element_prop___redArg(v_e_4066_, v_name_4067_, v_inst_4069_);
return v___x_4071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_prop___boxed(lean_object* v_e_4072_, lean_object* v_name_4073_, lean_object* v_00_u03b1_4074_, lean_object* v_inst_4075_, lean_object* v_a_4076_){
_start:
{
lean_object* v_res_4077_; 
v_res_4077_ = l_Lasm_Web_Element_prop(v_e_4072_, v_name_4073_, v_00_u03b1_4074_, v_inst_4075_);
return v_res_4077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___redArg(lean_object* v_inst_4078_, lean_object* v_e_4079_, lean_object* v_name_4080_, lean_object* v_x_4081_){
_start:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4083_ = lean_apply_1(v_inst_4078_, v_x_4081_);
v___x_4084_ = l_Lasm_Web_Raw_setProp(v_e_4079_, v_name_4080_, v___x_4083_);
return v___x_4084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___redArg___boxed(lean_object* v_inst_4085_, lean_object* v_e_4086_, lean_object* v_name_4087_, lean_object* v_x_4088_, lean_object* v_a_4089_){
_start:
{
lean_object* v_res_4090_; 
v_res_4090_ = l_Lasm_Web_Element_setProp___redArg(v_inst_4085_, v_e_4086_, v_name_4087_, v_x_4088_);
return v_res_4090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp(lean_object* v_00_u03b1_4091_, lean_object* v_inst_4092_, lean_object* v_e_4093_, lean_object* v_name_4094_, lean_object* v_x_4095_){
_start:
{
lean_object* v___x_4097_; 
v___x_4097_ = l_Lasm_Web_Element_setProp___redArg(v_inst_4092_, v_e_4093_, v_name_4094_, v_x_4095_);
return v___x_4097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_setProp___boxed(lean_object* v_00_u03b1_4098_, lean_object* v_inst_4099_, lean_object* v_e_4100_, lean_object* v_name_4101_, lean_object* v_x_4102_, lean_object* v_a_4103_){
_start:
{
lean_object* v_res_4104_; 
v_res_4104_ = l_Lasm_Web_Element_setProp(v_00_u03b1_4098_, v_inst_4099_, v_e_4100_, v_name_4101_, v_x_4102_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___redArg(){
_start:
{
lean_object* v___x_4110_; lean_object* v___x_4111_; 
v___x_4110_ = ((lean_object*)(l_Lasm_Web_Document_body___redArg___closed__0));
v___x_4111_ = l_Lasm_Web_querySelector(v___x_4110_);
if (lean_obj_tag(v___x_4111_) == 0)
{
lean_object* v_a_4112_; lean_object* v___x_4114_; uint8_t v_isShared_4115_; uint8_t v_isSharedCheck_4124_; 
v_a_4112_ = lean_ctor_get(v___x_4111_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4124_ == 0)
{
v___x_4114_ = v___x_4111_;
v_isShared_4115_ = v_isSharedCheck_4124_;
goto v_resetjp_4113_;
}
else
{
lean_inc(v_a_4112_);
lean_dec(v___x_4111_);
v___x_4114_ = lean_box(0);
v_isShared_4115_ = v_isSharedCheck_4124_;
goto v_resetjp_4113_;
}
v_resetjp_4113_:
{
if (lean_obj_tag(v_a_4112_) == 0)
{
lean_object* v___x_4116_; lean_object* v___x_4118_; 
v___x_4116_ = ((lean_object*)(l_Lasm_Web_Document_body___redArg___closed__2));
if (v_isShared_4115_ == 0)
{
lean_ctor_set_tag(v___x_4114_, 1);
lean_ctor_set(v___x_4114_, 0, v___x_4116_);
v___x_4118_ = v___x_4114_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4119_, 0, v___x_4116_);
v___x_4118_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
return v___x_4118_;
}
}
else
{
lean_object* v_val_4120_; lean_object* v___x_4122_; 
v_val_4120_ = lean_ctor_get(v_a_4112_, 0);
lean_inc(v_val_4120_);
lean_dec_ref_known(v_a_4112_, 1);
if (v_isShared_4115_ == 0)
{
lean_ctor_set(v___x_4114_, 0, v_val_4120_);
v___x_4122_ = v___x_4114_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v_val_4120_);
v___x_4122_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
return v___x_4122_;
}
}
}
}
else
{
lean_object* v_a_4125_; lean_object* v___x_4127_; uint8_t v_isShared_4128_; uint8_t v_isSharedCheck_4132_; 
v_a_4125_ = lean_ctor_get(v___x_4111_, 0);
v_isSharedCheck_4132_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4132_ == 0)
{
v___x_4127_ = v___x_4111_;
v_isShared_4128_ = v_isSharedCheck_4132_;
goto v_resetjp_4126_;
}
else
{
lean_inc(v_a_4125_);
lean_dec(v___x_4111_);
v___x_4127_ = lean_box(0);
v_isShared_4128_ = v_isSharedCheck_4132_;
goto v_resetjp_4126_;
}
v_resetjp_4126_:
{
lean_object* v___x_4130_; 
if (v_isShared_4128_ == 0)
{
v___x_4130_ = v___x_4127_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v_a_4125_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
return v___x_4130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___redArg___boxed(lean_object* v_a_4133_){
_start:
{
lean_object* v_res_4134_; 
v_res_4134_ = l_Lasm_Web_Document_body___redArg();
return v_res_4134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body(lean_object* v_x_4135_){
_start:
{
lean_object* v___x_4137_; 
v___x_4137_ = l_Lasm_Web_Document_body___redArg();
return v___x_4137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_body___boxed(lean_object* v_x_4138_, lean_object* v_a_4139_){
_start:
{
lean_object* v_res_4140_; 
v_res_4140_ = l_Lasm_Web_Document_body(v_x_4138_);
lean_dec(v_x_4138_);
return v_res_4140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___redArg(){
_start:
{
lean_object* v___x_4146_; lean_object* v___x_4147_; 
v___x_4146_ = ((lean_object*)(l_Lasm_Web_Document_head___redArg___closed__0));
v___x_4147_ = l_Lasm_Web_querySelector(v___x_4146_);
if (lean_obj_tag(v___x_4147_) == 0)
{
lean_object* v_a_4148_; lean_object* v___x_4150_; uint8_t v_isShared_4151_; uint8_t v_isSharedCheck_4160_; 
v_a_4148_ = lean_ctor_get(v___x_4147_, 0);
v_isSharedCheck_4160_ = !lean_is_exclusive(v___x_4147_);
if (v_isSharedCheck_4160_ == 0)
{
v___x_4150_ = v___x_4147_;
v_isShared_4151_ = v_isSharedCheck_4160_;
goto v_resetjp_4149_;
}
else
{
lean_inc(v_a_4148_);
lean_dec(v___x_4147_);
v___x_4150_ = lean_box(0);
v_isShared_4151_ = v_isSharedCheck_4160_;
goto v_resetjp_4149_;
}
v_resetjp_4149_:
{
if (lean_obj_tag(v_a_4148_) == 0)
{
lean_object* v___x_4152_; lean_object* v___x_4154_; 
v___x_4152_ = ((lean_object*)(l_Lasm_Web_Document_head___redArg___closed__2));
if (v_isShared_4151_ == 0)
{
lean_ctor_set_tag(v___x_4150_, 1);
lean_ctor_set(v___x_4150_, 0, v___x_4152_);
v___x_4154_ = v___x_4150_;
goto v_reusejp_4153_;
}
else
{
lean_object* v_reuseFailAlloc_4155_; 
v_reuseFailAlloc_4155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4155_, 0, v___x_4152_);
v___x_4154_ = v_reuseFailAlloc_4155_;
goto v_reusejp_4153_;
}
v_reusejp_4153_:
{
return v___x_4154_;
}
}
else
{
lean_object* v_val_4156_; lean_object* v___x_4158_; 
v_val_4156_ = lean_ctor_get(v_a_4148_, 0);
lean_inc(v_val_4156_);
lean_dec_ref_known(v_a_4148_, 1);
if (v_isShared_4151_ == 0)
{
lean_ctor_set(v___x_4150_, 0, v_val_4156_);
v___x_4158_ = v___x_4150_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v_val_4156_);
v___x_4158_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
return v___x_4158_;
}
}
}
}
else
{
lean_object* v_a_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4168_; 
v_a_4161_ = lean_ctor_get(v___x_4147_, 0);
v_isSharedCheck_4168_ = !lean_is_exclusive(v___x_4147_);
if (v_isSharedCheck_4168_ == 0)
{
v___x_4163_ = v___x_4147_;
v_isShared_4164_ = v_isSharedCheck_4168_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_a_4161_);
lean_dec(v___x_4147_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4168_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v___x_4166_; 
if (v_isShared_4164_ == 0)
{
v___x_4166_ = v___x_4163_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4167_; 
v_reuseFailAlloc_4167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4167_, 0, v_a_4161_);
v___x_4166_ = v_reuseFailAlloc_4167_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
return v___x_4166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___redArg___boxed(lean_object* v_a_4169_){
_start:
{
lean_object* v_res_4170_; 
v_res_4170_ = l_Lasm_Web_Document_head___redArg();
return v_res_4170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head(lean_object* v_x_4171_){
_start:
{
lean_object* v___x_4173_; 
v___x_4173_ = l_Lasm_Web_Document_head___redArg();
return v___x_4173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_head___boxed(lean_object* v_x_4174_, lean_object* v_a_4175_){
_start:
{
lean_object* v_res_4176_; 
v_res_4176_ = l_Lasm_Web_Document_head(v_x_4174_);
lean_dec(v_x_4174_);
return v_res_4176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_title(lean_object* v_d_4179_){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; 
v___x_4181_ = ((lean_object*)(l_Lasm_Web_Document_title___closed__0));
v___x_4182_ = l_Lasm_Web_Raw_getProp(v_d_4179_, v___x_4181_);
if (lean_obj_tag(v___x_4182_) == 0)
{
lean_object* v_a_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; 
v_a_4183_ = lean_ctor_get(v___x_4182_, 0);
lean_inc(v_a_4183_);
lean_dec_ref_known(v___x_4182_, 1);
v___x_4184_ = ((lean_object*)(l_Lasm_Web_Document_title___closed__1));
v___x_4185_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getText_spec__0_spec__0(v___x_4184_, v_a_4183_);
return v___x_4185_;
}
else
{
lean_object* v_a_4186_; lean_object* v___x_4188_; uint8_t v_isShared_4189_; uint8_t v_isSharedCheck_4193_; 
v_a_4186_ = lean_ctor_get(v___x_4182_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v___x_4182_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4188_ = v___x_4182_;
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
else
{
lean_inc(v_a_4186_);
lean_dec(v___x_4182_);
v___x_4188_ = lean_box(0);
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
v_resetjp_4187_:
{
lean_object* v___x_4191_; 
if (v_isShared_4189_ == 0)
{
v___x_4191_ = v___x_4188_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v_a_4186_);
v___x_4191_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
return v___x_4191_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_title___boxed(lean_object* v_d_4194_, lean_object* v_a_4195_){
_start:
{
lean_object* v_res_4196_; 
v_res_4196_ = l_Lasm_Web_Document_title(v_d_4194_);
return v_res_4196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_setTitle(lean_object* v_d_4197_, lean_object* v_title_4198_){
_start:
{
lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4200_ = ((lean_object*)(l_Lasm_Web_Document_title___closed__0));
v___x_4201_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4201_, 0, v_title_4198_);
v___x_4202_ = l_Lasm_Web_Raw_setProp(v_d_4197_, v___x_4200_, v___x_4201_);
return v___x_4202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_setTitle___boxed(lean_object* v_d_4203_, lean_object* v_title_4204_, lean_object* v_a_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = l_Lasm_Web_Document_setTitle(v_d_4203_, v_title_4204_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_activeElement(lean_object* v_d_4209_){
_start:
{
lean_object* v___x_4211_; lean_object* v___x_4212_; 
v___x_4211_ = ((lean_object*)(l_Lasm_Web_Document_activeElement___closed__0));
v___x_4212_ = l_Lasm_Web_Raw_getProp(v_d_4209_, v___x_4211_);
if (lean_obj_tag(v___x_4212_) == 0)
{
lean_object* v_a_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; 
v_a_4213_ = lean_ctor_get(v___x_4212_, 0);
lean_inc(v_a_4213_);
lean_dec_ref_known(v___x_4212_, 1);
v___x_4214_ = ((lean_object*)(l_Lasm_Web_Document_activeElement___closed__1));
v___x_4215_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_getElementById_spec__0_spec__0(v___x_4214_, v_a_4213_);
return v___x_4215_;
}
else
{
lean_object* v_a_4216_; lean_object* v___x_4218_; uint8_t v_isShared_4219_; uint8_t v_isSharedCheck_4223_; 
v_a_4216_ = lean_ctor_get(v___x_4212_, 0);
v_isSharedCheck_4223_ = !lean_is_exclusive(v___x_4212_);
if (v_isSharedCheck_4223_ == 0)
{
v___x_4218_ = v___x_4212_;
v_isShared_4219_ = v_isSharedCheck_4223_;
goto v_resetjp_4217_;
}
else
{
lean_inc(v_a_4216_);
lean_dec(v___x_4212_);
v___x_4218_ = lean_box(0);
v_isShared_4219_ = v_isSharedCheck_4223_;
goto v_resetjp_4217_;
}
v_resetjp_4217_:
{
lean_object* v___x_4221_; 
if (v_isShared_4219_ == 0)
{
v___x_4221_ = v___x_4218_;
goto v_reusejp_4220_;
}
else
{
lean_object* v_reuseFailAlloc_4222_; 
v_reuseFailAlloc_4222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4222_, 0, v_a_4216_);
v___x_4221_ = v_reuseFailAlloc_4222_;
goto v_reusejp_4220_;
}
v_reusejp_4220_:
{
return v___x_4221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Document_activeElement___boxed(lean_object* v_d_4224_, lean_object* v_a_4225_){
_start:
{
lean_object* v_res_4226_; 
v_res_4226_ = l_Lasm_Web_Document_activeElement(v_d_4224_);
return v_res_4226_;
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
