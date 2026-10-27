// Lean compiler output
// Module: Lasm.Web.Storage
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
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.Storage"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_localStorage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "localStorage"};
static const lean_object* l_Lasm_Web_localStorage___closed__0 = (const lean_object*)&l_Lasm_Web_localStorage___closed__0_value;
static const lean_string_object l_Lasm_Web_localStorage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:web"};
static const lean_object* l_Lasm_Web_localStorage___closed__1 = (const lean_object*)&l_Lasm_Web_localStorage___closed__1_value;
static const lean_ctor_object l_Lasm_Web_localStorage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_localStorage___closed__0_value),((lean_object*)&l_Lasm_Web_localStorage___closed__1_value),((lean_object*)&l_Lasm_Web_localStorage___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_localStorage___closed__2 = (const lean_object*)&l_Lasm_Web_localStorage___closed__2_value;
static const lean_array_object l_Lasm_Web_localStorage___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_localStorage___closed__3 = (const lean_object*)&l_Lasm_Web_localStorage___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Web_localStorage();
LEAN_EXPORT lean_object* l_Lasm_Web_localStorage___boxed(lean_object*);
static const lean_string_object l_Lasm_Web_sessionStorage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "sessionStorage"};
static const lean_object* l_Lasm_Web_sessionStorage___closed__0 = (const lean_object*)&l_Lasm_Web_sessionStorage___closed__0_value;
static const lean_ctor_object l_Lasm_Web_sessionStorage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_sessionStorage___closed__0_value),((lean_object*)&l_Lasm_Web_localStorage___closed__1_value),((lean_object*)&l_Lasm_Web_sessionStorage___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_sessionStorage___closed__1 = (const lean_object*)&l_Lasm_Web_sessionStorage___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_sessionStorage();
LEAN_EXPORT lean_object* l_Lasm_Web_sessionStorage___boxed(lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Storage_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "getItem"};
static const lean_object* l_Lasm_Web_Storage_get___closed__0 = (const lean_object*)&l_Lasm_Web_Storage_get___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_get___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Storage_set___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "setItem"};
static const lean_object* l_Lasm_Web_Storage_set___closed__0 = (const lean_object*)&l_Lasm_Web_Storage_set___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Storage_remove___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "removeItem"};
static const lean_object* l_Lasm_Web_Storage_remove___closed__0 = (const lean_object*)&l_Lasm_Web_Storage_remove___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_remove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_remove___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Storage_clear___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "clear"};
static const lean_object* l_Lasm_Web_Storage_clear___closed__0 = (const lean_object*)&l_Lasm_Web_Storage_clear___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_clear(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_clear___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__3;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Storage_length___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_Web_Storage_length___closed__0 = (const lean_object*)&l_Lasm_Web_Storage_length___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_length(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_length___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Storage_key___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_Web_Storage_key___closed__0 = (const lean_object*)&l_Lasm_Web_Storage_key___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_key(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_key___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_Web_Storage_keys___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_Storage_keys___closed__0 = (const lean_object*)&l_Lasm_Web_Storage_keys___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_keys(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_keys___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_9_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__7));
v___x_10_ = lean_unsigned_to_nat(46u);
v___x_11_ = lean_unsigned_to_nat(193u);
v___x_12_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6));
v___x_13_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__5));
v___x_14_ = l_mkPanicMessageWithDecl(v___x_13_, v___x_12_, v___x_11_, v___x_10_, v___x_9_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0(lean_object* v_context_16_, lean_object* v_d_17_){
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
v___x_38_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4));
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
v___x_47_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8);
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
v___x_50_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__9));
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
v___x_21_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
v___x_22_ = lean_string_append(v___x_21_, v_context_16_);
v___x_23_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1));
v___x_24_ = lean_string_append(v___x_22_, v___x_23_);
v___x_25_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__2));
v___x_26_ = lean_string_append(v___x_24_, v___x_25_);
v___x_27_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__3));
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___boxed(lean_object* v_context_51_, lean_object* v_d_52_, lean_object* v_a_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0(v_context_51_, v_d_52_);
lean_dec_ref(v_context_51_);
return v_res_54_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__1(void){
_start:
{
uint8_t v___x_56_; uint64_t v___x_57_; 
v___x_56_ = 1;
v___x_57_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0(lean_object* v_b_58_, lean_object* v_args_59_, uint8_t v_await_60_){
_start:
{
uint64_t v___y_63_; uint64_t v___y_64_; uint64_t v___x_99_; uint64_t v___y_101_; 
v___x_99_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__1);
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
v___x_74_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0(v___x_73_, v_a_72_);
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
v___x_87_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
v___x_88_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_58_);
v___x_89_ = lean_string_append(v___x_87_, v___x_88_);
lean_dec_ref(v___x_88_);
v___x_90_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__0));
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
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___boxed(lean_object* v_b_108_, lean_object* v_args_109_, lean_object* v_await_110_, lean_object* v_a_111_){
_start:
{
uint8_t v_await_boxed_112_; lean_object* v_res_113_; 
v_await_boxed_112_ = lean_unbox(v_await_110_);
v_res_113_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0(v_b_108_, v_args_109_, v_await_boxed_112_);
lean_dec_ref(v_b_108_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_localStorage(){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; lean_object* v___x_127_; 
v___x_124_ = ((lean_object*)(l_Lasm_Web_localStorage___closed__2));
v___x_125_ = ((lean_object*)(l_Lasm_Web_localStorage___closed__3));
v___x_126_ = 1;
v___x_127_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0(v___x_124_, v___x_125_, v___x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_localStorage___boxed(lean_object* v_a_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lasm_Web_localStorage();
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_sessionStorage(){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; lean_object* v___x_140_; 
v___x_137_ = ((lean_object*)(l_Lasm_Web_sessionStorage___closed__1));
v___x_138_ = ((lean_object*)(l_Lasm_Web_localStorage___closed__3));
v___x_139_ = 1;
v___x_140_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0(v___x_137_, v___x_138_, v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_sessionStorage___boxed(lean_object* v_a_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lasm_Web_sessionStorage();
return v_res_142_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_143_; uint64_t v___x_144_; 
v___x_143_ = 0;
v___x_144_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0(uint8_t v_await_145_, uint64_t v_extra_146_){
_start:
{
uint64_t v___x_147_; uint64_t v___y_149_; 
v___x_147_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0);
if (v_await_145_ == 0)
{
uint64_t v___x_152_; 
v___x_152_ = 0ULL;
v___y_149_ = v___x_152_;
goto v___jp_148_;
}
else
{
uint64_t v___x_153_; 
v___x_153_ = 2ULL;
v___y_149_ = v___x_153_;
goto v___jp_148_;
}
v___jp_148_:
{
uint64_t v___x_150_; uint64_t v___x_151_; 
v___x_150_ = lean_uint64_lor(v___x_147_, v___y_149_);
v___x_151_ = lean_uint64_lor(v___x_150_, v_extra_146_);
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___boxed(lean_object* v_await_154_, lean_object* v_extra_155_){
_start:
{
uint8_t v_await_boxed_156_; uint64_t v_extra_boxed_157_; uint64_t v_res_158_; lean_object* v_r_159_; 
v_await_boxed_156_ = lean_unbox(v_await_154_);
v_extra_boxed_157_ = lean_unbox_uint64(v_extra_155_);
lean_dec_ref(v_extra_155_);
v_res_158_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0(v_await_boxed_156_, v_extra_boxed_157_);
v_r_159_ = lean_box_uint64(v_res_158_);
return v_r_159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2(lean_object* v_context_161_, lean_object* v_d_162_){
_start:
{
lean_object* v_received_168_; 
switch(lean_obj_tag(v_d_162_))
{
case 1:
{
goto v___jp_164_;
}
case 0:
{
goto v___jp_164_;
}
default: 
{
if (lean_obj_tag(v_d_162_) == 4)
{
lean_object* v_s_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v_s_182_ = lean_ctor_get(v_d_162_, 0);
lean_inc_ref(v_s_182_);
lean_dec_ref_known(v_d_162_, 1);
v___x_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_183_, 0, v_s_182_);
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
else
{
if (lean_obj_tag(v_d_162_) == 9)
{
lean_object* v_value_185_; lean_object* v_description_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v_value_185_ = lean_ctor_get(v_d_162_, 0);
v_description_186_ = lean_ctor_get(v_d_162_, 1);
v___x_187_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4));
v___x_188_ = lean_string_dec_eq(v_description_186_, v___x_187_);
if (v___x_188_ == 0)
{
goto v___jp_180_;
}
else
{
uint32_t v___x_189_; uint64_t v___x_190_; lean_object* v___x_191_; uint32_t v___x_192_; lean_object* v___x_193_; 
lean_inc_n(v_value_185_, 2);
lean_dec_ref_known(v_d_162_, 2);
v___x_189_ = 206;
v___x_190_ = 0ULL;
v___x_191_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_191_, 0, v_value_185_);
lean_ctor_set(v___x_191_, 1, v___x_187_);
v___x_192_ = lasm_js_value_handle(v_value_185_);
lean_dec(v_value_185_);
v___x_193_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_189_, v___x_190_, v___x_191_, v___x_192_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; uint8_t v___x_195_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_a_194_);
lean_dec_ref_known(v___x_193_, 1);
v___x_195_ = lean_string_validate_utf8(v_a_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; 
lean_dec(v_a_194_);
v___x_196_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8);
v___x_197_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_196_);
v_received_168_ = v___x_197_;
goto v___jp_167_;
}
else
{
lean_object* v___x_198_; 
v___x_198_ = lean_string_from_utf8_unchecked(v_a_194_);
v_received_168_ = v___x_198_;
goto v___jp_167_;
}
}
else
{
lean_object* v___x_199_; 
lean_dec_ref_known(v___x_193_, 1);
v___x_199_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__9));
v_received_168_ = v___x_199_;
goto v___jp_167_;
}
}
}
else
{
goto v___jp_180_;
}
}
}
}
v___jp_164_:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_box(0);
v___x_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
return v___x_166_;
}
v___jp_167_:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_169_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
v___x_170_ = lean_string_append(v___x_169_, v_context_161_);
v___x_171_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1));
v___x_172_ = lean_string_append(v___x_170_, v___x_171_);
v___x_173_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2___closed__0));
v___x_174_ = lean_string_append(v___x_172_, v___x_173_);
v___x_175_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__3));
v___x_176_ = lean_string_append(v___x_174_, v___x_175_);
v___x_177_ = lean_string_append(v___x_176_, v_received_168_);
lean_dec_ref(v_received_168_);
v___x_178_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
v___x_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
return v___x_179_;
}
v___jp_180_:
{
lean_object* v___x_181_; 
v___x_181_ = l_Lasm_JS_Data_describe(v_d_162_);
v_received_168_ = v___x_181_;
goto v___jp_167_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2___boxed(lean_object* v_context_200_, lean_object* v_d_201_, lean_object* v_a_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2(v_context_200_, v_d_201_);
lean_dec_ref(v_context_200_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1(lean_object* v_context_204_, lean_object* v_bytes_205_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lasm_JS_Wire_decode(v_bytes_205_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v_a_208_; lean_object* v___x_209_; 
v_a_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc(v_a_208_);
lean_dec_ref_known(v___x_207_, 1);
v___x_209_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2(v_context_204_, v_a_208_);
return v___x_209_;
}
else
{
lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_217_; 
v_a_210_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_217_ == 0)
{
v___x_212_ = v___x_207_;
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_207_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1___boxed(lean_object* v_context_218_, lean_object* v_bytes_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1(v_context_218_, v_bytes_219_);
lean_dec_ref(v_bytes_219_);
lean_dec_ref(v_context_218_);
return v_res_221_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__0(void){
_start:
{
uint64_t v___x_222_; uint8_t v___x_223_; uint64_t v___x_224_; 
v___x_222_ = 8ULL;
v___x_223_ = 0;
v___x_224_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0(v___x_223_, v___x_222_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0(lean_object* v_o_226_, lean_object* v_name_227_, lean_object* v_args_228_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; uint64_t v___x_233_; lean_object* v___x_234_; 
v___x_230_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4));
v___x_231_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_231_, 0, v_o_226_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
lean_inc_ref(v_name_227_);
v___x_232_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_232_, 0, v_name_227_);
v___x_233_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__0);
v___x_234_ = l_Lasm_JS_Value_invokeRaw(v___x_231_, v___x_232_, v_args_228_, v___x_233_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v_a_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_a_235_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_a_235_);
lean_dec_ref_known(v___x_234_, 1);
v___x_236_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__1));
v___x_237_ = lean_string_append(v___x_236_, v_name_227_);
lean_dec_ref(v_name_227_);
v___x_238_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1(v___x_237_, v_a_235_);
lean_dec(v_a_235_);
lean_dec_ref(v___x_237_);
return v___x_238_;
}
else
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
lean_dec_ref(v_name_227_);
v_a_239_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___x_234_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_234_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_a_239_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___boxed(lean_object* v_o_247_, lean_object* v_name_248_, lean_object* v_args_249_, lean_object* v_a_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0(v_o_247_, v_name_248_, v_args_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_get(lean_object* v_s_253_, lean_object* v_key_254_){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_256_ = ((lean_object*)(l_Lasm_Web_Storage_get___closed__0));
v___x_257_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_257_, 0, v_key_254_);
v___x_258_ = lean_unsigned_to_nat(1u);
v___x_259_ = lean_mk_empty_array_with_capacity(v___x_258_);
v___x_260_ = lean_array_push(v___x_259_, v___x_257_);
v___x_261_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0(v_s_253_, v___x_256_, v___x_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_get___boxed(lean_object* v_s_262_, lean_object* v_key_263_, lean_object* v_a_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lasm_Web_Storage_get(v_s_262_, v_key_263_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_set(lean_object* v_s_267_, lean_object* v_key_268_, lean_object* v_value_269_){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_271_ = ((lean_object*)(l_Lasm_Web_Storage_set___closed__0));
v___x_272_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_272_, 0, v_key_268_);
v___x_273_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_273_, 0, v_value_269_);
v___x_274_ = lean_unsigned_to_nat(2u);
v___x_275_ = lean_mk_empty_array_with_capacity(v___x_274_);
v___x_276_ = lean_array_push(v___x_275_, v___x_272_);
v___x_277_ = lean_array_push(v___x_276_, v___x_273_);
v___x_278_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_s_267_, v___x_271_, v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_set___boxed(lean_object* v_s_279_, lean_object* v_key_280_, lean_object* v_value_281_, lean_object* v_a_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lasm_Web_Storage_set(v_s_279_, v_key_280_, v_value_281_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_remove(lean_object* v_s_285_, lean_object* v_key_286_){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_288_ = ((lean_object*)(l_Lasm_Web_Storage_remove___closed__0));
v___x_289_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_289_, 0, v_key_286_);
v___x_290_ = lean_unsigned_to_nat(1u);
v___x_291_ = lean_mk_empty_array_with_capacity(v___x_290_);
v___x_292_ = lean_array_push(v___x_291_, v___x_289_);
v___x_293_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_s_285_, v___x_288_, v___x_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_remove___boxed(lean_object* v_s_294_, lean_object* v_key_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lasm_Web_Storage_remove(v_s_294_, v_key_295_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_clear(lean_object* v_s_299_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_301_ = ((lean_object*)(l_Lasm_Web_Storage_clear___closed__0));
v___x_302_ = ((lean_object*)(l_Lasm_Web_localStorage___closed__3));
v___x_303_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_s_299_, v___x_301_, v___x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_clear___boxed(lean_object* v_s_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lasm_Web_Storage_clear(v_s_304_);
return v_res_306_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_unsigned_to_nat(0u);
v___x_311_ = lean_nat_to_int(v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1(lean_object* v_context_314_, lean_object* v_d_315_){
_start:
{
lean_object* v___y_318_; lean_object* v___y_319_; lean_object* v___y_324_; lean_object* v_received_325_; lean_object* v___y_344_; lean_object* v_a_347_; lean_object* v_a_372_; 
switch(lean_obj_tag(v_d_315_))
{
case 3:
{
double v_n_378_; lean_object* v___x_379_; 
v_n_378_ = lean_ctor_get_float(v_d_315_, 0);
v___x_379_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_378_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v___x_380_; 
v___x_380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__5));
v_a_347_ = v___x_380_;
goto v___jp_346_;
}
else
{
lean_object* v_val_381_; 
v_val_381_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_val_381_);
lean_dec_ref_known(v___x_379_, 1);
v_a_372_ = v_val_381_;
goto v___jp_371_;
}
}
case 5:
{
lean_object* v_i_382_; 
v_i_382_ = lean_ctor_get(v_d_315_, 0);
lean_inc(v_i_382_);
v_a_372_ = v_i_382_;
goto v___jp_371_;
}
default: 
{
lean_object* v___x_383_; 
v___x_383_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4));
v_a_347_ = v___x_383_;
goto v___jp_346_;
}
}
v___jp_317_:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = lean_string_append(v___y_318_, v___y_319_);
lean_dec_ref(v___y_319_);
v___x_321_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
v___x_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
return v___x_322_;
}
v___jp_323_:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_326_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
v___x_327_ = lean_string_append(v___x_326_, v_context_314_);
v___x_328_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1));
v___x_329_ = lean_string_append(v___x_327_, v___x_328_);
v___x_330_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__0));
v___x_331_ = lean_string_append(v___x_329_, v___x_330_);
v___x_332_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__3));
v___x_333_ = lean_string_append(v___x_331_, v___x_332_);
v___x_334_ = lean_string_append(v___x_333_, v_received_325_);
lean_dec_ref(v_received_325_);
v___x_335_ = lean_string_utf8_byte_size(v___y_324_);
v___x_336_ = lean_unsigned_to_nat(0u);
v___x_337_ = lean_nat_dec_eq(v___x_335_, v___x_336_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_338_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__1));
v___x_339_ = lean_string_append(v___x_338_, v___y_324_);
v___x_340_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__2));
v___x_341_ = lean_string_append(v___x_339_, v___x_340_);
v___y_318_ = v___x_334_;
v___y_319_ = v___x_341_;
goto v___jp_317_;
}
else
{
lean_object* v___x_342_; 
v___x_342_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4));
v___y_318_ = v___x_334_;
v___y_319_ = v___x_342_;
goto v___jp_317_;
}
}
v___jp_343_:
{
lean_object* v___x_345_; 
v___x_345_ = l_Lasm_JS_Data_describe(v_d_315_);
v___y_324_ = v___y_344_;
v_received_325_ = v___x_345_;
goto v___jp_323_;
}
v___jp_346_:
{
if (lean_obj_tag(v_d_315_) == 9)
{
lean_object* v_value_348_; lean_object* v_description_349_; lean_object* v___x_350_; uint8_t v___x_351_; 
v_value_348_ = lean_ctor_get(v_d_315_, 0);
v_description_349_ = lean_ctor_get(v_d_315_, 1);
v___x_350_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4));
v___x_351_ = lean_string_dec_eq(v_description_349_, v___x_350_);
if (v___x_351_ == 0)
{
v___y_344_ = v_a_347_;
goto v___jp_343_;
}
else
{
lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_368_; 
lean_inc(v_value_348_);
v_isSharedCheck_368_ = !lean_is_exclusive(v_d_315_);
if (v_isSharedCheck_368_ == 0)
{
lean_object* v_unused_369_; lean_object* v_unused_370_; 
v_unused_369_ = lean_ctor_get(v_d_315_, 1);
lean_dec(v_unused_369_);
v_unused_370_ = lean_ctor_get(v_d_315_, 0);
lean_dec(v_unused_370_);
v___x_353_ = v_d_315_;
v_isShared_354_ = v_isSharedCheck_368_;
goto v_resetjp_352_;
}
else
{
lean_dec(v_d_315_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_368_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
uint32_t v___x_355_; uint64_t v___x_356_; lean_object* v___x_358_; 
v___x_355_ = 206;
v___x_356_ = 0ULL;
lean_inc(v_value_348_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 1, v___x_350_);
v___x_358_ = v___x_353_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v_value_348_);
lean_ctor_set(v_reuseFailAlloc_367_, 1, v___x_350_);
v___x_358_ = v_reuseFailAlloc_367_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
uint32_t v___x_359_; lean_object* v___x_360_; 
v___x_359_ = lasm_js_value_handle(v_value_348_);
lean_dec(v_value_348_);
v___x_360_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_355_, v___x_356_, v___x_358_, v___x_359_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; uint8_t v___x_362_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_361_);
lean_dec_ref_known(v___x_360_, 1);
v___x_362_ = lean_string_validate_utf8(v_a_361_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; lean_object* v___x_364_; 
lean_dec(v_a_361_);
v___x_363_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8);
v___x_364_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_363_);
v___y_324_ = v_a_347_;
v_received_325_ = v___x_364_;
goto v___jp_323_;
}
else
{
lean_object* v___x_365_; 
v___x_365_ = lean_string_from_utf8_unchecked(v_a_361_);
v___y_324_ = v_a_347_;
v_received_325_ = v___x_365_;
goto v___jp_323_;
}
}
else
{
lean_object* v___x_366_; 
lean_dec_ref_known(v___x_360_, 1);
v___x_366_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__9));
v___y_324_ = v_a_347_;
v_received_325_ = v___x_366_;
goto v___jp_323_;
}
}
}
}
}
else
{
v___y_344_ = v_a_347_;
goto v___jp_343_;
}
}
v___jp_371_:
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__3);
v___x_374_ = lean_int_dec_le(v___x_373_, v_a_372_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; 
lean_dec(v_a_372_);
v___x_375_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__4));
v_a_347_ = v___x_375_;
goto v___jp_346_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; 
lean_dec(v_d_315_);
v___x_376_ = l_Int_toNat(v_a_372_);
lean_dec(v_a_372_);
v___x_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
return v___x_377_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___boxed(lean_object* v_context_384_, lean_object* v_d_385_, lean_object* v_a_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1(v_context_384_, v_d_385_);
lean_dec_ref(v_context_384_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0(lean_object* v_context_388_, lean_object* v_bytes_389_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = l_Lasm_JS_Wire_decode(v_bytes_389_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v_a_392_; lean_object* v___x_393_; 
v_a_392_ = lean_ctor_get(v___x_391_, 0);
lean_inc(v_a_392_);
lean_dec_ref_known(v___x_391_, 1);
v___x_393_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1(v_context_388_, v_a_392_);
return v___x_393_;
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
v_a_394_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_391_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_391_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0___boxed(lean_object* v_context_402_, lean_object* v_bytes_403_, lean_object* v_a_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0(v_context_402_, v_bytes_403_);
lean_dec_ref(v_bytes_403_);
lean_dec_ref(v_context_402_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0(lean_object* v_o_407_, lean_object* v_key_408_){
_start:
{
uint32_t v___x_410_; uint32_t v___x_411_; uint64_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_410_ = 203;
v___x_411_ = lasm_js_value_handle(v_o_407_);
v___x_412_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0);
lean_inc_ref(v_key_408_);
v___x_413_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_413_, 0, v_key_408_);
v___x_414_ = l_Lasm_JS_Wire_encode(v___x_413_);
v___x_415_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4));
v___x_416_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_416_, 0, v_o_407_);
lean_ctor_set(v___x_416_, 1, v___x_415_);
v___x_417_ = lasm_js_call(v___x_410_, v___x_411_, v___x_412_, v___x_414_, v___x_416_);
lean_dec_ref_known(v___x_416_, 2);
lean_dec_ref(v___x_414_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref_known(v___x_417_, 1);
v___x_419_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0___closed__0));
v___x_420_ = l_String_quote(v_key_408_);
v___x_421_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
v___x_422_ = lean_unsigned_to_nat(120u);
v___x_423_ = lean_unsigned_to_nat(0u);
v___x_424_ = l_Std_Format_pretty(v___x_421_, v___x_422_, v___x_423_, v___x_423_);
v___x_425_ = lean_string_append(v___x_419_, v___x_424_);
lean_dec_ref(v___x_424_);
v___x_426_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0(v___x_425_, v_a_418_);
lean_dec(v_a_418_);
lean_dec_ref(v___x_425_);
return v___x_426_;
}
else
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_434_; 
lean_dec_ref(v_key_408_);
v_a_427_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_434_ == 0)
{
v___x_429_ = v___x_417_;
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_417_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_432_; 
if (v_isShared_430_ == 0)
{
v___x_432_ = v___x_429_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_a_427_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0___boxed(lean_object* v_o_435_, lean_object* v_key_436_, lean_object* v_a_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0(v_o_435_, v_key_436_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_length(lean_object* v_s_440_){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = ((lean_object*)(l_Lasm_Web_Storage_length___closed__0));
v___x_443_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0(v_s_440_, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_length___boxed(lean_object* v_s_444_, lean_object* v_a_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lasm_Web_Storage_length(v_s_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_key(lean_object* v_s_448_, lean_object* v_i_449_){
_start:
{
lean_object* v___x_451_; lean_object* v___y_453_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_451_ = ((lean_object*)(l_Lasm_Web_Storage_key___closed__0));
v___x_458_ = lean_nat_to_int(v_i_449_);
v___x_459_ = lean_nat_abs(v___x_458_);
v___x_460_ = lean_cstr_to_nat("9007199254740991");
v___x_461_ = lean_nat_dec_le(v___x_459_, v___x_460_);
lean_dec(v___x_459_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; 
v___x_462_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_462_, 0, v___x_458_);
v___y_453_ = v___x_462_;
goto v___jp_452_;
}
else
{
double v___x_463_; lean_object* v___x_464_; 
v___x_463_ = l_Float_ofInt(v___x_458_);
lean_dec(v___x_458_);
v___x_464_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_464_, 0, v___x_463_);
v___y_453_ = v___x_464_;
goto v___jp_452_;
}
v___jp_452_:
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_454_ = lean_unsigned_to_nat(1u);
v___x_455_ = lean_mk_empty_array_with_capacity(v___x_454_);
v___x_456_ = lean_array_push(v___x_455_, v___y_453_);
v___x_457_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0(v_s_448_, v___x_451_, v___x_456_);
return v___x_457_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_key___boxed(lean_object* v_s_465_, lean_object* v_i_466_, lean_object* v_a_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lasm_Web_Storage_key(v_s_465_, v_i_466_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg(lean_object* v_s_469_, lean_object* v_range_470_, lean_object* v_b_471_, lean_object* v_i_472_){
_start:
{
lean_object* v_stop_474_; lean_object* v_step_475_; lean_object* v_a_477_; uint8_t v___x_480_; 
v_stop_474_ = lean_ctor_get(v_range_470_, 1);
v_step_475_ = lean_ctor_get(v_range_470_, 2);
v___x_480_ = lean_nat_dec_lt(v_i_472_, v_stop_474_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; 
lean_dec(v_i_472_);
lean_dec(v_s_469_);
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v_b_471_);
return v___x_481_;
}
else
{
lean_object* v___x_482_; 
lean_inc(v_i_472_);
lean_inc(v_s_469_);
v___x_482_ = l_Lasm_Web_Storage_key(v_s_469_, v_i_472_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_a_483_);
lean_dec_ref_known(v___x_482_, 1);
if (lean_obj_tag(v_a_483_) == 1)
{
lean_object* v_val_484_; lean_object* v___x_485_; 
v_val_484_ = lean_ctor_get(v_a_483_, 0);
lean_inc(v_val_484_);
lean_dec_ref_known(v_a_483_, 1);
v___x_485_ = lean_array_push(v_b_471_, v_val_484_);
v_a_477_ = v___x_485_;
goto v___jp_476_;
}
else
{
lean_dec(v_a_483_);
v_a_477_ = v_b_471_;
goto v___jp_476_;
}
}
else
{
lean_object* v_a_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
lean_dec(v_i_472_);
lean_dec_ref(v_b_471_);
lean_dec(v_s_469_);
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
v___jp_476_:
{
lean_object* v___x_478_; 
v___x_478_ = lean_nat_add(v_i_472_, v_step_475_);
lean_dec(v_i_472_);
v_b_471_ = v_a_477_;
v_i_472_ = v___x_478_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg___boxed(lean_object* v_s_494_, lean_object* v_range_495_, lean_object* v_b_496_, lean_object* v_i_497_, lean_object* v___y_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg(v_s_494_, v_range_495_, v_b_496_, v_i_497_);
lean_dec_ref(v_range_495_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_keys(lean_object* v_s_502_){
_start:
{
lean_object* v___x_504_; 
lean_inc(v_s_502_);
v___x_504_ = l_Lasm_Web_Storage_length(v_s_502_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v_a_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v_a_505_ = lean_ctor_get(v___x_504_, 0);
lean_inc(v_a_505_);
lean_dec_ref_known(v___x_504_, 1);
v___x_506_ = lean_unsigned_to_nat(0u);
v___x_507_ = ((lean_object*)(l_Lasm_Web_Storage_keys___closed__0));
v___x_508_ = lean_unsigned_to_nat(1u);
v___x_509_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_509_, 0, v___x_506_);
lean_ctor_set(v___x_509_, 1, v_a_505_);
lean_ctor_set(v___x_509_, 2, v___x_508_);
v___x_510_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg(v_s_502_, v___x_509_, v___x_507_, v___x_506_);
lean_dec_ref_known(v___x_509_, 3);
return v___x_510_;
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec(v_s_502_);
v_a_511_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_504_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_504_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_keys___boxed(lean_object* v_s_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lasm_Web_Storage_keys(v_s_519_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0(lean_object* v_s_522_, lean_object* v_range_523_, lean_object* v_b_524_, lean_object* v_i_525_, lean_object* v_hs_526_, lean_object* v_hl_527_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg(v_s_522_, v_range_523_, v_b_524_, v_i_525_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___boxed(lean_object* v_s_530_, lean_object* v_range_531_, lean_object* v_b_532_, lean_object* v_i_533_, lean_object* v_hs_534_, lean_object* v_hl_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0(v_s_530_, v_range_531_, v_b_532_, v_i_533_, v_hs_534_, v_hl_535_);
lean_dec_ref(v_range_531_);
return v_res_537_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_Web_Types(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_Storage(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
