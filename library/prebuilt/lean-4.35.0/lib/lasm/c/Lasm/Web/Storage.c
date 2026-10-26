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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.Storage"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__5;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__9_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__10_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__12 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__12_value;
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
v___x_7_ = lean_string_utf8_byte_size(v___x_6_);
return v___x_7_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_8_ = lean_unsigned_to_nat(0u);
v___x_9_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__5);
v___x_10_ = lean_nat_dec_eq(v___x_9_, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_15_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__10));
v___x_16_ = lean_unsigned_to_nat(46u);
v___x_17_ = lean_unsigned_to_nat(193u);
v___x_18_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__9));
v___x_19_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__8));
v___x_20_ = l_mkPanicMessageWithDecl(v___x_19_, v___x_18_, v___x_17_, v___x_16_, v___x_15_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0(lean_object* v_context_22_, lean_object* v_d_23_){
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
v___x_33_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
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
v___x_59_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11);
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
v___x_62_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__12));
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
v___x_36_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1));
v___x_37_ = lean_string_append(v___x_36_, v_context_22_);
v___x_38_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__2));
v___x_39_ = lean_string_append(v___x_37_, v___x_38_);
v___x_40_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__3));
v___x_41_ = lean_string_append(v___x_39_, v___x_40_);
v___x_42_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4));
v___x_43_ = lean_string_append(v___x_41_, v___x_42_);
v___x_44_ = lean_string_append(v___x_43_, v_received_35_);
lean_dec_ref(v_received_35_);
v___x_45_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6);
if (v___x_45_ == 0)
{
lean_object* v___x_46_; 
v___x_46_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__7));
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___boxed(lean_object* v_context_63_, lean_object* v_d_64_, lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0(v_context_63_, v_d_64_);
lean_dec_ref(v_context_63_);
return v_res_66_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__1(void){
_start:
{
uint8_t v___x_68_; uint64_t v___x_69_; 
v___x_68_ = 1;
v___x_69_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0(lean_object* v_b_70_, lean_object* v_args_71_, uint8_t v_await_72_){
_start:
{
uint64_t v___y_75_; uint64_t v___y_76_; uint64_t v___x_119_; uint64_t v___y_121_; 
v___x_119_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__1);
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
v___x_86_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0(v___x_85_, v_a_84_);
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
v___x_107_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1));
v___x_108_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_70_);
v___x_109_ = lean_string_append(v___x_107_, v___x_108_);
lean_dec_ref(v___x_108_);
v___x_110_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___closed__0));
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
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0___boxed(lean_object* v_b_128_, lean_object* v_args_129_, lean_object* v_await_130_, lean_object* v_a_131_){
_start:
{
uint8_t v_await_boxed_132_; lean_object* v_res_133_; 
v_await_boxed_132_ = lean_unbox(v_await_130_);
v_res_133_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0(v_b_128_, v_args_129_, v_await_boxed_132_);
lean_dec_ref(v_b_128_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_localStorage(){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; lean_object* v___x_147_; 
v___x_144_ = ((lean_object*)(l_Lasm_Web_localStorage___closed__2));
v___x_145_ = ((lean_object*)(l_Lasm_Web_localStorage___closed__3));
v___x_146_ = 1;
v___x_147_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0(v___x_144_, v___x_145_, v___x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_localStorage___boxed(lean_object* v_a_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lasm_Web_localStorage();
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_sessionStorage(){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; lean_object* v___x_160_; 
v___x_157_ = ((lean_object*)(l_Lasm_Web_sessionStorage___closed__1));
v___x_158_ = ((lean_object*)(l_Lasm_Web_localStorage___closed__3));
v___x_159_ = 1;
v___x_160_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0(v___x_157_, v___x_158_, v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_sessionStorage___boxed(lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lasm_Web_sessionStorage();
return v_res_162_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_163_; uint64_t v___x_164_; 
v___x_163_ = 0;
v___x_164_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0(uint8_t v_await_165_, uint64_t v_extra_166_){
_start:
{
uint64_t v___x_167_; uint64_t v___y_169_; 
v___x_167_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0);
if (v_await_165_ == 0)
{
uint64_t v___x_172_; 
v___x_172_ = 0ULL;
v___y_169_ = v___x_172_;
goto v___jp_168_;
}
else
{
uint64_t v___x_173_; 
v___x_173_ = 2ULL;
v___y_169_ = v___x_173_;
goto v___jp_168_;
}
v___jp_168_:
{
uint64_t v___x_170_; uint64_t v___x_171_; 
v___x_170_ = lean_uint64_lor(v___x_167_, v___y_169_);
v___x_171_ = lean_uint64_lor(v___x_170_, v_extra_166_);
return v___x_171_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___boxed(lean_object* v_await_174_, lean_object* v_extra_175_){
_start:
{
uint8_t v_await_boxed_176_; uint64_t v_extra_boxed_177_; uint64_t v_res_178_; lean_object* v_r_179_; 
v_await_boxed_176_ = lean_unbox(v_await_174_);
v_extra_boxed_177_ = lean_unbox_uint64(v_extra_175_);
lean_dec_ref(v_extra_175_);
v_res_178_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0(v_await_boxed_176_, v_extra_boxed_177_);
v_r_179_ = lean_box_uint64(v_res_178_);
return v_r_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2(lean_object* v_context_181_, lean_object* v_d_182_){
_start:
{
lean_object* v___y_188_; lean_object* v___y_189_; 
switch(lean_obj_tag(v_d_182_))
{
case 1:
{
goto v___jp_184_;
}
case 0:
{
goto v___jp_184_;
}
default: 
{
if (lean_obj_tag(v_d_182_) == 4)
{
lean_object* v_s_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_s_193_ = lean_ctor_get(v_d_182_, 0);
lean_inc_ref(v_s_193_);
lean_dec_ref_known(v_d_182_, 1);
v___x_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_194_, 0, v_s_193_);
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
return v___x_195_;
}
else
{
lean_object* v___x_196_; lean_object* v_received_198_; 
v___x_196_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_182_) == 9)
{
lean_object* v_value_212_; lean_object* v_description_213_; uint8_t v___x_214_; 
v_value_212_ = lean_ctor_get(v_d_182_, 0);
v_description_213_ = lean_ctor_get(v_d_182_, 1);
v___x_214_ = lean_string_dec_eq(v_description_213_, v___x_196_);
if (v___x_214_ == 0)
{
goto v___jp_210_;
}
else
{
uint32_t v___x_215_; uint64_t v___x_216_; lean_object* v___x_217_; uint32_t v___x_218_; lean_object* v___x_219_; 
lean_inc_n(v_value_212_, 2);
lean_dec_ref_known(v_d_182_, 2);
v___x_215_ = 206;
v___x_216_ = 0ULL;
v___x_217_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_217_, 0, v_value_212_);
lean_ctor_set(v___x_217_, 1, v___x_196_);
v___x_218_ = lasm_js_value_handle(v_value_212_);
lean_dec(v_value_212_);
v___x_219_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_215_, v___x_216_, v___x_217_, v___x_218_);
lean_dec_ref_known(v___x_217_, 2);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; uint8_t v___x_221_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
lean_inc(v_a_220_);
lean_dec_ref_known(v___x_219_, 1);
v___x_221_ = lean_string_validate_utf8(v_a_220_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; lean_object* v___x_223_; 
lean_dec(v_a_220_);
v___x_222_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11);
v___x_223_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_222_);
v_received_198_ = v___x_223_;
goto v___jp_197_;
}
else
{
lean_object* v___x_224_; 
v___x_224_ = lean_string_from_utf8_unchecked(v_a_220_);
v_received_198_ = v___x_224_;
goto v___jp_197_;
}
}
else
{
lean_object* v___x_225_; 
lean_dec_ref_known(v___x_219_, 1);
v___x_225_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__12));
v_received_198_ = v___x_225_;
goto v___jp_197_;
}
}
}
else
{
goto v___jp_210_;
}
v___jp_197_:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_199_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1));
v___x_200_ = lean_string_append(v___x_199_, v_context_181_);
v___x_201_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__2));
v___x_202_ = lean_string_append(v___x_200_, v___x_201_);
v___x_203_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2___closed__0));
v___x_204_ = lean_string_append(v___x_202_, v___x_203_);
v___x_205_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4));
v___x_206_ = lean_string_append(v___x_204_, v___x_205_);
v___x_207_ = lean_string_append(v___x_206_, v_received_198_);
lean_dec_ref(v_received_198_);
v___x_208_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__6);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; 
v___x_209_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__7));
v___y_188_ = v___x_207_;
v___y_189_ = v___x_209_;
goto v___jp_187_;
}
else
{
v___y_188_ = v___x_207_;
v___y_189_ = v___x_196_;
goto v___jp_187_;
}
}
v___jp_210_:
{
lean_object* v___x_211_; 
v___x_211_ = l_Lasm_JS_Data_describe(v_d_182_);
v_received_198_ = v___x_211_;
goto v___jp_197_;
}
}
}
}
v___jp_184_:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_box(0);
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
v___jp_187_:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_190_ = lean_string_append(v___y_188_, v___y_189_);
v___x_191_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
v___x_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
return v___x_192_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2___boxed(lean_object* v_context_226_, lean_object* v_d_227_, lean_object* v_a_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2(v_context_226_, v_d_227_);
lean_dec_ref(v_context_226_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1(lean_object* v_context_230_, lean_object* v_bytes_231_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l_Lasm_JS_Wire_decode(v_bytes_231_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v_a_234_; lean_object* v___x_235_; 
v_a_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc(v_a_234_);
lean_dec_ref_known(v___x_233_, 1);
v___x_235_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1_spec__2(v_context_230_, v_a_234_);
return v___x_235_;
}
else
{
lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_243_; 
v_a_236_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_243_ == 0)
{
v___x_238_ = v___x_233_;
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v___x_233_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_236_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1___boxed(lean_object* v_context_244_, lean_object* v_bytes_245_, lean_object* v_a_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1(v_context_244_, v_bytes_245_);
lean_dec_ref(v_bytes_245_);
lean_dec_ref(v_context_244_);
return v_res_247_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__0(void){
_start:
{
uint64_t v___x_248_; uint8_t v___x_249_; uint64_t v___x_250_; 
v___x_248_ = 8ULL;
v___x_249_ = 0;
v___x_250_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0(v___x_249_, v___x_248_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0(lean_object* v_o_252_, lean_object* v_name_253_, lean_object* v_args_254_){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint64_t v___x_259_; lean_object* v___x_260_; 
v___x_256_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
v___x_257_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_257_, 0, v_o_252_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
lean_inc_ref(v_name_253_);
v___x_258_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_258_, 0, v_name_253_);
v___x_259_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__0);
v___x_260_ = l_Lasm_JS_Value_invokeRaw(v___x_257_, v___x_258_, v_args_254_, v___x_259_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v_a_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v_a_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc(v_a_261_);
lean_dec_ref_known(v___x_260_, 1);
v___x_262_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___closed__1));
v___x_263_ = lean_string_append(v___x_262_, v_name_253_);
lean_dec_ref(v_name_253_);
v___x_264_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__1(v___x_263_, v_a_261_);
lean_dec(v_a_261_);
lean_dec_ref(v___x_263_);
return v___x_264_;
}
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_272_; 
lean_dec_ref(v_name_253_);
v_a_265_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_272_ == 0)
{
v___x_267_ = v___x_260_;
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_260_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_268_ == 0)
{
v___x_270_ = v___x_267_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_265_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0___boxed(lean_object* v_o_273_, lean_object* v_name_274_, lean_object* v_args_275_, lean_object* v_a_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0(v_o_273_, v_name_274_, v_args_275_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_get(lean_object* v_s_279_, lean_object* v_key_280_){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_282_ = ((lean_object*)(l_Lasm_Web_Storage_get___closed__0));
v___x_283_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_283_, 0, v_key_280_);
v___x_284_ = lean_unsigned_to_nat(1u);
v___x_285_ = lean_mk_empty_array_with_capacity(v___x_284_);
v___x_286_ = lean_array_push(v___x_285_, v___x_283_);
v___x_287_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0(v_s_279_, v___x_282_, v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_get___boxed(lean_object* v_s_288_, lean_object* v_key_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lasm_Web_Storage_get(v_s_288_, v_key_289_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_set(lean_object* v_s_293_, lean_object* v_key_294_, lean_object* v_value_295_){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_297_ = ((lean_object*)(l_Lasm_Web_Storage_set___closed__0));
v___x_298_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_298_, 0, v_key_294_);
v___x_299_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_299_, 0, v_value_295_);
v___x_300_ = lean_unsigned_to_nat(2u);
v___x_301_ = lean_mk_empty_array_with_capacity(v___x_300_);
v___x_302_ = lean_array_push(v___x_301_, v___x_298_);
v___x_303_ = lean_array_push(v___x_302_, v___x_299_);
v___x_304_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_s_293_, v___x_297_, v___x_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_set___boxed(lean_object* v_s_305_, lean_object* v_key_306_, lean_object* v_value_307_, lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lasm_Web_Storage_set(v_s_305_, v_key_306_, v_value_307_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_remove(lean_object* v_s_311_, lean_object* v_key_312_){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_314_ = ((lean_object*)(l_Lasm_Web_Storage_remove___closed__0));
v___x_315_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_315_, 0, v_key_312_);
v___x_316_ = lean_unsigned_to_nat(1u);
v___x_317_ = lean_mk_empty_array_with_capacity(v___x_316_);
v___x_318_ = lean_array_push(v___x_317_, v___x_315_);
v___x_319_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_s_311_, v___x_314_, v___x_318_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_remove___boxed(lean_object* v_s_320_, lean_object* v_key_321_, lean_object* v_a_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lasm_Web_Storage_remove(v_s_320_, v_key_321_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_clear(lean_object* v_s_325_){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_327_ = ((lean_object*)(l_Lasm_Web_Storage_clear___closed__0));
v___x_328_ = ((lean_object*)(l_Lasm_Web_localStorage___closed__3));
v___x_329_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_s_325_, v___x_327_, v___x_328_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_clear___boxed(lean_object* v_s_330_, lean_object* v_a_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lasm_Web_Storage_clear(v_s_330_);
return v_res_332_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_unsigned_to_nat(0u);
v___x_337_ = lean_nat_to_int(v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1(lean_object* v_context_340_, lean_object* v_d_341_){
_start:
{
lean_object* v___y_344_; lean_object* v___y_345_; lean_object* v___y_350_; lean_object* v_received_351_; lean_object* v___y_370_; lean_object* v_a_373_; lean_object* v_a_398_; 
switch(lean_obj_tag(v_d_341_))
{
case 3:
{
double v_n_404_; lean_object* v___x_405_; 
v_n_404_ = lean_ctor_get_float(v_d_341_, 0);
v___x_405_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_404_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v___x_406_; 
v___x_406_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__5));
v_a_373_ = v___x_406_;
goto v___jp_372_;
}
else
{
lean_object* v_val_407_; 
v_val_407_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_val_407_);
lean_dec_ref_known(v___x_405_, 1);
v_a_398_ = v_val_407_;
goto v___jp_397_;
}
}
case 5:
{
lean_object* v_i_408_; 
v_i_408_ = lean_ctor_get(v_d_341_, 0);
lean_inc(v_i_408_);
v_a_398_ = v_i_408_;
goto v___jp_397_;
}
default: 
{
lean_object* v___x_409_; 
v___x_409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
v_a_373_ = v___x_409_;
goto v___jp_372_;
}
}
v___jp_343_:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = lean_string_append(v___y_344_, v___y_345_);
lean_dec_ref(v___y_345_);
v___x_347_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
v___x_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
return v___x_348_;
}
v___jp_349_:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_352_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__1));
v___x_353_ = lean_string_append(v___x_352_, v_context_340_);
v___x_354_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__2));
v___x_355_ = lean_string_append(v___x_353_, v___x_354_);
v___x_356_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__0));
v___x_357_ = lean_string_append(v___x_355_, v___x_356_);
v___x_358_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__4));
v___x_359_ = lean_string_append(v___x_357_, v___x_358_);
v___x_360_ = lean_string_append(v___x_359_, v_received_351_);
lean_dec_ref(v_received_351_);
v___x_361_ = lean_string_utf8_byte_size(v___y_350_);
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = lean_nat_dec_eq(v___x_361_, v___x_362_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_364_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__1));
v___x_365_ = lean_string_append(v___x_364_, v___y_350_);
v___x_366_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__2));
v___x_367_ = lean_string_append(v___x_365_, v___x_366_);
v___y_344_ = v___x_360_;
v___y_345_ = v___x_367_;
goto v___jp_343_;
}
else
{
lean_object* v___x_368_; 
v___x_368_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
v___y_344_ = v___x_360_;
v___y_345_ = v___x_368_;
goto v___jp_343_;
}
}
v___jp_369_:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lasm_JS_Data_describe(v_d_341_);
v___y_350_ = v___y_370_;
v_received_351_ = v___x_371_;
goto v___jp_349_;
}
v___jp_372_:
{
if (lean_obj_tag(v_d_341_) == 9)
{
lean_object* v_value_374_; lean_object* v_description_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v_value_374_ = lean_ctor_get(v_d_341_, 0);
v_description_375_ = lean_ctor_get(v_d_341_, 1);
v___x_376_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
v___x_377_ = lean_string_dec_eq(v_description_375_, v___x_376_);
if (v___x_377_ == 0)
{
v___y_370_ = v_a_373_;
goto v___jp_369_;
}
else
{
lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_394_; 
lean_inc(v_value_374_);
v_isSharedCheck_394_ = !lean_is_exclusive(v_d_341_);
if (v_isSharedCheck_394_ == 0)
{
lean_object* v_unused_395_; lean_object* v_unused_396_; 
v_unused_395_ = lean_ctor_get(v_d_341_, 1);
lean_dec(v_unused_395_);
v_unused_396_ = lean_ctor_get(v_d_341_, 0);
lean_dec(v_unused_396_);
v___x_379_ = v_d_341_;
v_isShared_380_ = v_isSharedCheck_394_;
goto v_resetjp_378_;
}
else
{
lean_dec(v_d_341_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_394_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
uint32_t v___x_381_; uint64_t v___x_382_; lean_object* v___x_384_; 
v___x_381_ = 206;
v___x_382_ = 0ULL;
lean_inc(v_value_374_);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 1, v___x_376_);
v___x_384_ = v___x_379_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_value_374_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v___x_376_);
v___x_384_ = v_reuseFailAlloc_393_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
uint32_t v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lasm_js_value_handle(v_value_374_);
lean_dec(v_value_374_);
v___x_386_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_381_, v___x_382_, v___x_384_, v___x_385_);
lean_dec_ref(v___x_384_);
if (lean_obj_tag(v___x_386_) == 0)
{
lean_object* v_a_387_; uint8_t v___x_388_; 
v_a_387_ = lean_ctor_get(v___x_386_, 0);
lean_inc(v_a_387_);
lean_dec_ref_known(v___x_386_, 1);
v___x_388_ = lean_string_validate_utf8(v_a_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; 
lean_dec(v_a_387_);
v___x_389_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__11);
v___x_390_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_389_);
v___y_350_ = v_a_373_;
v_received_351_ = v___x_390_;
goto v___jp_349_;
}
else
{
lean_object* v___x_391_; 
v___x_391_ = lean_string_from_utf8_unchecked(v_a_387_);
v___y_350_ = v_a_373_;
v_received_351_ = v___x_391_;
goto v___jp_349_;
}
}
else
{
lean_object* v___x_392_; 
lean_dec_ref_known(v___x_386_, 1);
v___x_392_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__12));
v___y_350_ = v_a_373_;
v_received_351_ = v___x_392_;
goto v___jp_349_;
}
}
}
}
}
else
{
v___y_370_ = v_a_373_;
goto v___jp_369_;
}
}
v___jp_397_:
{
lean_object* v___x_399_; uint8_t v___x_400_; 
v___x_399_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__3);
v___x_400_ = lean_int_dec_le(v___x_399_, v_a_398_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; 
lean_dec(v_a_398_);
v___x_401_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___closed__4));
v_a_373_ = v___x_401_;
goto v___jp_372_;
}
else
{
lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec(v_d_341_);
v___x_402_ = l_Int_toNat(v_a_398_);
lean_dec(v_a_398_);
v___x_403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
return v___x_403_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1___boxed(lean_object* v_context_410_, lean_object* v_d_411_, lean_object* v_a_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1(v_context_410_, v_d_411_);
lean_dec_ref(v_context_410_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0(lean_object* v_context_414_, lean_object* v_bytes_415_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l_Lasm_JS_Wire_decode(v_bytes_415_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_419_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref_known(v___x_417_, 1);
v___x_419_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0_spec__1(v_context_414_, v_a_418_);
return v___x_419_;
}
else
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_427_; 
v_a_420_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_427_ == 0)
{
v___x_422_ = v___x_417_;
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_417_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_425_; 
if (v_isShared_423_ == 0)
{
v___x_425_ = v___x_422_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_a_420_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0___boxed(lean_object* v_context_428_, lean_object* v_bytes_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0(v_context_428_, v_bytes_429_);
lean_dec_ref(v_bytes_429_);
lean_dec_ref(v_context_428_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0(lean_object* v_o_433_, lean_object* v_key_434_){
_start:
{
uint32_t v___x_436_; uint32_t v___x_437_; uint64_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_436_ = 203;
v___x_437_ = lasm_js_value_handle(v_o_433_);
v___x_438_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0_spec__0___closed__0);
lean_inc_ref(v_key_434_);
v___x_439_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_439_, 0, v_key_434_);
v___x_440_ = l_Lasm_JS_Wire_encode(v___x_439_);
lean_dec_ref_known(v___x_439_, 1);
v___x_441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_localStorage_spec__0_spec__0___closed__0));
v___x_442_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_442_, 0, v_o_433_);
lean_ctor_set(v___x_442_, 1, v___x_441_);
v___x_443_ = lasm_js_call(v___x_436_, v___x_437_, v___x_438_, v___x_440_, v___x_442_);
lean_dec_ref_known(v___x_442_, 2);
lean_dec_ref(v___x_440_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_a_444_);
lean_dec_ref_known(v___x_443_, 1);
v___x_445_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0___closed__0));
v___x_446_ = l_String_quote(v_key_434_);
v___x_447_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
v___x_448_ = lean_unsigned_to_nat(120u);
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = l_Std_Format_pretty(v___x_447_, v___x_448_, v___x_449_, v___x_449_);
v___x_451_ = lean_string_append(v___x_445_, v___x_450_);
lean_dec_ref(v___x_450_);
v___x_452_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0_spec__0(v___x_451_, v_a_444_);
lean_dec(v_a_444_);
lean_dec_ref(v___x_451_);
return v___x_452_;
}
else
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_460_; 
lean_dec_ref(v_key_434_);
v_a_453_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_460_ == 0)
{
v___x_455_ = v___x_443_;
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v___x_443_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_458_; 
if (v_isShared_456_ == 0)
{
v___x_458_ = v___x_455_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_a_453_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0___boxed(lean_object* v_o_461_, lean_object* v_key_462_, lean_object* v_a_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0(v_o_461_, v_key_462_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_length(lean_object* v_s_466_){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = ((lean_object*)(l_Lasm_Web_Storage_length___closed__0));
v___x_469_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Storage_length_spec__0(v_s_466_, v___x_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_length___boxed(lean_object* v_s_470_, lean_object* v_a_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Lasm_Web_Storage_length(v_s_470_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_key(lean_object* v_s_474_, lean_object* v_i_475_){
_start:
{
lean_object* v___x_477_; lean_object* v___y_479_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_477_ = ((lean_object*)(l_Lasm_Web_Storage_key___closed__0));
v___x_484_ = lean_nat_to_int(v_i_475_);
v___x_485_ = lean_nat_abs(v___x_484_);
v___x_486_ = lean_cstr_to_nat("9007199254740991");
v___x_487_ = lean_nat_dec_le(v___x_485_, v___x_486_);
lean_dec(v___x_485_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; 
v___x_488_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_488_, 0, v___x_484_);
v___y_479_ = v___x_488_;
goto v___jp_478_;
}
else
{
double v___x_489_; lean_object* v___x_490_; 
v___x_489_ = l_Float_ofInt(v___x_484_);
lean_dec(v___x_484_);
v___x_490_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_490_, 0, v___x_489_);
v___y_479_ = v___x_490_;
goto v___jp_478_;
}
v___jp_478_:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_480_ = lean_unsigned_to_nat(1u);
v___x_481_ = lean_mk_empty_array_with_capacity(v___x_480_);
v___x_482_ = lean_array_push(v___x_481_, v___y_479_);
v___x_483_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Storage_get_spec__0(v_s_474_, v___x_477_, v___x_482_);
return v___x_483_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_key___boxed(lean_object* v_s_491_, lean_object* v_i_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Lasm_Web_Storage_key(v_s_491_, v_i_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg(lean_object* v_s_495_, lean_object* v_range_496_, lean_object* v_b_497_, lean_object* v_i_498_){
_start:
{
lean_object* v_stop_500_; lean_object* v_step_501_; lean_object* v_a_503_; uint8_t v___x_506_; 
v_stop_500_ = lean_ctor_get(v_range_496_, 1);
v_step_501_ = lean_ctor_get(v_range_496_, 2);
v___x_506_ = lean_nat_dec_lt(v_i_498_, v_stop_500_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
lean_dec(v_i_498_);
lean_dec(v_s_495_);
v___x_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_507_, 0, v_b_497_);
return v___x_507_;
}
else
{
lean_object* v___x_508_; 
lean_inc(v_i_498_);
lean_inc(v_s_495_);
v___x_508_ = l_Lasm_Web_Storage_key(v_s_495_, v_i_498_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_a_509_; 
v_a_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_a_509_);
lean_dec_ref_known(v___x_508_, 1);
if (lean_obj_tag(v_a_509_) == 1)
{
lean_object* v_val_510_; lean_object* v___x_511_; 
v_val_510_ = lean_ctor_get(v_a_509_, 0);
lean_inc(v_val_510_);
lean_dec_ref_known(v_a_509_, 1);
v___x_511_ = lean_array_push(v_b_497_, v_val_510_);
v_a_503_ = v___x_511_;
goto v___jp_502_;
}
else
{
lean_dec(v_a_509_);
v_a_503_ = v_b_497_;
goto v___jp_502_;
}
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
lean_dec(v_i_498_);
lean_dec_ref(v_b_497_);
lean_dec(v_s_495_);
v_a_512_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_508_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_508_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
v___jp_502_:
{
lean_object* v___x_504_; 
v___x_504_ = lean_nat_add(v_i_498_, v_step_501_);
lean_dec(v_i_498_);
v_b_497_ = v_a_503_;
v_i_498_ = v___x_504_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg___boxed(lean_object* v_s_520_, lean_object* v_range_521_, lean_object* v_b_522_, lean_object* v_i_523_, lean_object* v___y_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg(v_s_520_, v_range_521_, v_b_522_, v_i_523_);
lean_dec_ref(v_range_521_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_keys(lean_object* v_s_528_){
_start:
{
lean_object* v___x_530_; 
lean_inc(v_s_528_);
v___x_530_ = l_Lasm_Web_Storage_length(v_s_528_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_531_);
lean_dec_ref_known(v___x_530_, 1);
v___x_532_ = lean_unsigned_to_nat(0u);
v___x_533_ = ((lean_object*)(l_Lasm_Web_Storage_keys___closed__0));
v___x_534_ = lean_unsigned_to_nat(1u);
v___x_535_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_535_, 0, v___x_532_);
lean_ctor_set(v___x_535_, 1, v_a_531_);
lean_ctor_set(v___x_535_, 2, v___x_534_);
v___x_536_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg(v_s_528_, v___x_535_, v___x_533_, v___x_532_);
lean_dec_ref_known(v___x_535_, 3);
return v___x_536_;
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec(v_s_528_);
v_a_537_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_530_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_530_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Storage_keys___boxed(lean_object* v_s_545_, lean_object* v_a_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lasm_Web_Storage_keys(v_s_545_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0(lean_object* v_s_548_, lean_object* v_range_549_, lean_object* v_b_550_, lean_object* v_i_551_, lean_object* v_hs_552_, lean_object* v_hl_553_){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___redArg(v_s_548_, v_range_549_, v_b_550_, v_i_551_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0___boxed(lean_object* v_s_556_, lean_object* v_range_557_, lean_object* v_b_558_, lean_object* v_i_559_, lean_object* v_hs_560_, lean_object* v_hl_561_, lean_object* v___y_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Web_Storage_keys_spec__0(v_s_556_, v_range_557_, v_b_558_, v_i_559_, v_hs_560_, v_hl_561_);
lean_dec_ref(v_range_557_);
return v_res_563_;
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
