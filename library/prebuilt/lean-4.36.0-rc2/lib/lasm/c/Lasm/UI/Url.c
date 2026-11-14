// Lean compiler output
// Module: Lasm.UI.Url
// Imports: public import Init public meta import Init
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
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_byte_array_uget(lean_object*, size_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint32_t l_Char_ofNat(lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_uint8_of_nat(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqUrl_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqUrl_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqUrl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqUrl___boxed(lean_object*, lean_object*);
static const lean_string_object l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_instReprUrl_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__0_value;
static const lean_string_object l_Lasm_UI_instReprUrl_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "protocol"};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__2_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__3_value;
static const lean_string_object l_Lasm_UI_instReprUrl_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__3_value),((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lasm_UI_instReprUrl_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__7;
static const lean_string_object l_Lasm_UI_instReprUrl_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__8_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__9_value;
static const lean_string_object l_Lasm_UI_instReprUrl_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__10 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__10_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lasm_UI_instReprUrl_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__12;
static const lean_string_object l_Lasm_UI_instReprUrl_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__13 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__13_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__14 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__14_value;
static const lean_string_object l_Lasm_UI_instReprUrl_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__15 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__15_value;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__15_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__16 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__16_value;
static const lean_string_object l_Lasm_UI_instReprUrl_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "query"};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__17 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__17_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__18 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__18_value;
static lean_once_cell_t l_Lasm_UI_instReprUrl_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__19;
static const lean_string_object l_Lasm_UI_instReprUrl_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fragment"};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__20 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__20_value;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__20_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__21 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__21_value;
static const lean_string_object l_Lasm_UI_instReprUrl_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__22 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__22_value;
static lean_once_cell_t l_Lasm_UI_instReprUrl_repr___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__23;
static lean_once_cell_t l_Lasm_UI_instReprUrl_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__24;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__25 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__25_value;
static const lean_ctor_object l_Lasm_UI_instReprUrl_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__22_value)}};
static const lean_object* l_Lasm_UI_instReprUrl_repr___redArg___closed__26 = (const lean_object*)&l_Lasm_UI_instReprUrl_repr___redArg___closed__26_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instReprUrl_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprUrl_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprUrl_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instReprUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instReprUrl_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instReprUrl___closed__0 = (const lean_object*)&l_Lasm_UI_instReprUrl___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instReprUrl = (const lean_object*)&l_Lasm_UI_instReprUrl___closed__0_value;
static const lean_string_object l_Lasm_UI_instInhabitedUrl_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "https:"};
static const lean_object* l_Lasm_UI_instInhabitedUrl_default___closed__0 = (const lean_object*)&l_Lasm_UI_instInhabitedUrl_default___closed__0_value;
static const lean_string_object l_Lasm_UI_instInhabitedUrl_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_UI_instInhabitedUrl_default___closed__1 = (const lean_object*)&l_Lasm_UI_instInhabitedUrl_default___closed__1_value;
static const lean_string_object l_Lasm_UI_instInhabitedUrl_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lasm_UI_instInhabitedUrl_default___closed__2 = (const lean_object*)&l_Lasm_UI_instInhabitedUrl_default___closed__2_value;
static const lean_ctor_object l_Lasm_UI_instInhabitedUrl_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_instInhabitedUrl_default___closed__0_value),((lean_object*)&l_Lasm_UI_instInhabitedUrl_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_instInhabitedUrl_default___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instInhabitedUrl_default___closed__3 = (const lean_object*)&l_Lasm_UI_instInhabitedUrl_default___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedUrl_default = (const lean_object*)&l_Lasm_UI_instInhabitedUrl_default___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedUrl = (const lean_object*)&l_Lasm_UI_instInhabitedUrl_default___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexVal(uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexVal___boxed(lean_object*);
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_UI_Url_percentDecode___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Url_percentDecode___closed__0;
static lean_once_cell_t l_Lasm_UI_Url_percentDecode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Url_percentDecode___closed__1;
LEAN_EXPORT lean_object* l_Lasm_UI_Url_percentDecode(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Url_percentDecode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lasm_UI_Url_0__Lasm_UI_Url_unreserved(uint8_t);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_unreserved___boxed(lean_object*);
static const lean_string_object l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "0123456789ABCDEF"};
static const lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___closed__0 = (const lean_object*)&l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___closed__0_value;
static lean_once_cell_t l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___closed__1;
LEAN_EXPORT uint32_t l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_UI_Url_percentEncode_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_UI_Url_percentEncode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Url_percentEncode(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_splitOnce(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_splitOnce___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00Lasm_UI_Url_parse_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Url_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "://"};
static const lean_object* l_Lasm_UI_Url_parse___closed__0 = (const lean_object*)&l_Lasm_UI_Url_parse___closed__0_value;
static const lean_string_object l_Lasm_UI_Url_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lasm_UI_Url_parse___closed__1 = (const lean_object*)&l_Lasm_UI_Url_parse___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Url_parse(lean_object*);
static const lean_string_object l_Lasm_UI_Url_parseRelative___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lasm_UI_Url_parseRelative___closed__0 = (const lean_object*)&l_Lasm_UI_Url_parseRelative___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Url_parseRelative(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Url_origin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "//"};
static const lean_object* l_Lasm_UI_Url_origin___closed__0 = (const lean_object*)&l_Lasm_UI_Url_origin___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Url_origin(lean_object*);
static const lean_string_object l_Lasm_UI_Url_pathAndQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lasm_UI_Url_pathAndQuery___closed__0 = (const lean_object*)&l_Lasm_UI_Url_pathAndQuery___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Url_pathAndQuery(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Url_toString(lean_object*);
static const lean_closure_object l_Lasm_UI_Url_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Url_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Url_instToString___closed__0 = (const lean_object*)&l_Lasm_UI_Url_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Url_instToString = (const lean_object*)&l_Lasm_UI_Url_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Url_segments_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_Url_segments___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Url_segments___closed__0 = (const lean_object*)&l_Lasm_UI_Url_segments___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Url_segments(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Url_segments___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Url_params_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Url_params___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "&"};
static const lean_object* l_Lasm_UI_Url_params___closed__0 = (const lean_object*)&l_Lasm_UI_Url_params___closed__0_value;
static const lean_array_object l_Lasm_UI_Url_params___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Url_params___closed__1 = (const lean_object*)&l_Lasm_UI_Url_params___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Url_params(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Url_params___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Url_param_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Url_param_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Url_build_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lasm_UI_Url_build_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_List_mapTR_loop___at___00Lasm_UI_Url_build_spec__1___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lasm_UI_Url_build_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Url_build_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Url_build(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqUrl_decEq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_protocol_3_; lean_object* v_host_4_; lean_object* v_port_5_; lean_object* v_path_6_; lean_object* v_query_7_; lean_object* v_fragment_8_; lean_object* v_protocol_9_; lean_object* v_host_10_; lean_object* v_port_11_; lean_object* v_path_12_; lean_object* v_query_13_; lean_object* v_fragment_14_; uint8_t v___x_15_; 
v_protocol_3_ = lean_ctor_get(v_x_1_, 0);
lean_inc_ref(v_protocol_3_);
v_host_4_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_host_4_);
v_port_5_ = lean_ctor_get(v_x_1_, 2);
lean_inc(v_port_5_);
v_path_6_ = lean_ctor_get(v_x_1_, 3);
lean_inc_ref(v_path_6_);
v_query_7_ = lean_ctor_get(v_x_1_, 4);
lean_inc(v_query_7_);
v_fragment_8_ = lean_ctor_get(v_x_1_, 5);
lean_inc(v_fragment_8_);
lean_dec_ref(v_x_1_);
v_protocol_9_ = lean_ctor_get(v_x_2_, 0);
lean_inc_ref(v_protocol_9_);
v_host_10_ = lean_ctor_get(v_x_2_, 1);
lean_inc_ref(v_host_10_);
v_port_11_ = lean_ctor_get(v_x_2_, 2);
lean_inc(v_port_11_);
v_path_12_ = lean_ctor_get(v_x_2_, 3);
lean_inc_ref(v_path_12_);
v_query_13_ = lean_ctor_get(v_x_2_, 4);
lean_inc(v_query_13_);
v_fragment_14_ = lean_ctor_get(v_x_2_, 5);
lean_inc(v_fragment_14_);
lean_dec_ref(v_x_2_);
v___x_15_ = lean_string_dec_eq(v_protocol_3_, v_protocol_9_);
lean_dec_ref(v_protocol_9_);
lean_dec_ref(v_protocol_3_);
if (v___x_15_ == 0)
{
lean_dec(v_fragment_14_);
lean_dec(v_query_13_);
lean_dec_ref(v_path_12_);
lean_dec(v_port_11_);
lean_dec_ref(v_host_10_);
lean_dec(v_fragment_8_);
lean_dec(v_query_7_);
lean_dec_ref(v_path_6_);
lean_dec(v_port_5_);
lean_dec_ref(v_host_4_);
return v___x_15_;
}
else
{
uint8_t v___x_16_; 
v___x_16_ = lean_string_dec_eq(v_host_4_, v_host_10_);
lean_dec_ref(v_host_10_);
lean_dec_ref(v_host_4_);
if (v___x_16_ == 0)
{
lean_dec(v_fragment_14_);
lean_dec(v_query_13_);
lean_dec_ref(v_path_12_);
lean_dec(v_port_11_);
lean_dec(v_fragment_8_);
lean_dec(v_query_7_);
lean_dec_ref(v_path_6_);
lean_dec(v_port_5_);
return v___x_16_;
}
else
{
lean_object* v___x_17_; uint8_t v___x_18_; 
v___x_17_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_18_ = l_Option_instDecidableEq___redArg(v___x_17_, v_port_5_, v_port_11_);
if (v___x_18_ == 0)
{
lean_dec(v_fragment_14_);
lean_dec(v_query_13_);
lean_dec_ref(v_path_12_);
lean_dec(v_fragment_8_);
lean_dec(v_query_7_);
lean_dec_ref(v_path_6_);
return v___x_18_;
}
else
{
uint8_t v___x_19_; 
v___x_19_ = lean_string_dec_eq(v_path_6_, v_path_12_);
lean_dec_ref(v_path_12_);
lean_dec_ref(v_path_6_);
if (v___x_19_ == 0)
{
lean_dec(v_fragment_14_);
lean_dec(v_query_13_);
lean_dec(v_fragment_8_);
lean_dec(v_query_7_);
return v___x_19_;
}
else
{
lean_object* v___x_20_; uint8_t v___x_21_; 
v___x_20_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
lean_inc_ref(v___x_20_);
v___x_21_ = l_Option_instDecidableEq___redArg(v___x_20_, v_query_7_, v_query_13_);
if (v___x_21_ == 0)
{
lean_dec_ref(v___x_20_);
lean_dec(v_fragment_14_);
lean_dec(v_fragment_8_);
return v___x_21_;
}
else
{
uint8_t v___x_22_; 
v___x_22_ = l_Option_instDecidableEq___redArg(v___x_20_, v_fragment_8_, v_fragment_14_);
return v___x_22_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqUrl_decEq___boxed(lean_object* v_x_23_, lean_object* v_x_24_){
_start:
{
uint8_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = l_Lasm_UI_instDecidableEqUrl_decEq(v_x_23_, v_x_24_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqUrl(lean_object* v_x_27_, lean_object* v_x_28_){
_start:
{
uint8_t v___x_29_; 
v___x_29_ = l_Lasm_UI_instDecidableEqUrl_decEq(v_x_27_, v_x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqUrl___boxed(lean_object* v_x_30_, lean_object* v_x_31_){
_start:
{
uint8_t v_res_32_; lean_object* v_r_33_; 
v_res_32_ = l_Lasm_UI_instDecidableEqUrl(v_x_30_, v_x_31_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0(lean_object* v_x_40_, lean_object* v_x_41_){
_start:
{
if (lean_obj_tag(v_x_40_) == 0)
{
lean_object* v___x_42_; 
v___x_42_ = ((lean_object*)(l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__1));
return v___x_42_;
}
else
{
lean_object* v_val_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_54_; 
v_val_43_ = lean_ctor_get(v_x_40_, 0);
v_isSharedCheck_54_ = !lean_is_exclusive(v_x_40_);
if (v_isSharedCheck_54_ == 0)
{
v___x_45_ = v_x_40_;
v_isShared_46_ = v_isSharedCheck_54_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_val_43_);
lean_dec(v_x_40_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_54_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_50_; 
v___x_47_ = ((lean_object*)(l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___closed__3));
v___x_48_ = l_String_quote(v_val_43_);
if (v_isShared_46_ == 0)
{
lean_ctor_set_tag(v___x_45_, 3);
lean_ctor_set(v___x_45_, 0, v___x_48_);
v___x_50_ = v___x_45_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v___x_48_);
v___x_50_ = v_reuseFailAlloc_53_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_47_);
lean_ctor_set(v___x_51_, 1, v___x_50_);
v___x_52_ = l_Repr_addAppParen(v___x_51_, v_x_41_);
return v___x_52_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0___boxed(lean_object* v_x_55_, lean_object* v_x_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0(v_x_55_, v_x_56_);
lean_dec(v_x_56_);
return v_res_57_;
}
}
static lean_object* _init_l_Lasm_UI_instReprUrl_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_unsigned_to_nat(12u);
v___x_72_ = lean_nat_to_int(v___x_71_);
return v___x_72_;
}
}
static lean_object* _init_l_Lasm_UI_instReprUrl_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = lean_unsigned_to_nat(8u);
v___x_80_ = lean_nat_to_int(v___x_79_);
return v___x_80_;
}
}
static lean_object* _init_l_Lasm_UI_instReprUrl_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_unsigned_to_nat(9u);
v___x_91_ = lean_nat_to_int(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Lasm_UI_instReprUrl_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = ((lean_object*)(l_Lasm_UI_instReprUrl_repr___redArg___closed__0));
v___x_97_ = lean_string_length(v___x_96_);
return v___x_97_;
}
}
static lean_object* _init_l_Lasm_UI_instReprUrl_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = lean_obj_once(&l_Lasm_UI_instReprUrl_repr___redArg___closed__23, &l_Lasm_UI_instReprUrl_repr___redArg___closed__23_once, _init_l_Lasm_UI_instReprUrl_repr___redArg___closed__23);
v___x_99_ = lean_nat_to_int(v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprUrl_repr___redArg(lean_object* v_x_104_){
_start:
{
lean_object* v_protocol_105_; lean_object* v_host_106_; lean_object* v_port_107_; lean_object* v_path_108_; lean_object* v_query_109_; lean_object* v_fragment_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; uint8_t v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v_protocol_105_ = lean_ctor_get(v_x_104_, 0);
lean_inc_ref(v_protocol_105_);
v_host_106_ = lean_ctor_get(v_x_104_, 1);
lean_inc_ref(v_host_106_);
v_port_107_ = lean_ctor_get(v_x_104_, 2);
lean_inc(v_port_107_);
v_path_108_ = lean_ctor_get(v_x_104_, 3);
lean_inc_ref(v_path_108_);
v_query_109_ = lean_ctor_get(v_x_104_, 4);
lean_inc(v_query_109_);
v_fragment_110_ = lean_ctor_get(v_x_104_, 5);
lean_inc(v_fragment_110_);
lean_dec_ref(v_x_104_);
v___x_111_ = ((lean_object*)(l_Lasm_UI_instReprUrl_repr___redArg___closed__5));
v___x_112_ = ((lean_object*)(l_Lasm_UI_instReprUrl_repr___redArg___closed__6));
v___x_113_ = lean_obj_once(&l_Lasm_UI_instReprUrl_repr___redArg___closed__7, &l_Lasm_UI_instReprUrl_repr___redArg___closed__7_once, _init_l_Lasm_UI_instReprUrl_repr___redArg___closed__7);
v___x_114_ = l_String_quote(v_protocol_105_);
v___x_115_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
v___x_116_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_113_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v___x_117_ = 0;
v___x_118_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set_uint8(v___x_118_, sizeof(void*)*1, v___x_117_);
v___x_119_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_112_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = ((lean_object*)(l_Lasm_UI_instReprUrl_repr___redArg___closed__9));
v___x_121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_119_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = lean_box(1);
v___x_123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_121_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = ((lean_object*)(l_Lasm_UI_instReprUrl_repr___redArg___closed__11));
v___x_125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_111_);
v___x_127_ = lean_obj_once(&l_Lasm_UI_instReprUrl_repr___redArg___closed__12, &l_Lasm_UI_instReprUrl_repr___redArg___closed__12_once, _init_l_Lasm_UI_instReprUrl_repr___redArg___closed__12);
v___x_128_ = l_String_quote(v_host_106_);
v___x_129_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
v___x_130_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_127_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set_uint8(v___x_131_, sizeof(void*)*1, v___x_117_);
v___x_132_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_126_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
v___x_133_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v___x_120_);
v___x_134_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set(v___x_134_, 1, v___x_122_);
v___x_135_ = ((lean_object*)(l_Lasm_UI_instReprUrl_repr___redArg___closed__14));
v___x_136_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_134_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set(v___x_137_, 1, v___x_111_);
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(v_port_107_, v___x_138_);
v___x_140_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_127_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set_uint8(v___x_141_, sizeof(void*)*1, v___x_117_);
v___x_142_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_137_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v___x_120_);
v___x_144_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v___x_122_);
v___x_145_ = ((lean_object*)(l_Lasm_UI_instReprUrl_repr___redArg___closed__16));
v___x_146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_144_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
lean_ctor_set(v___x_147_, 1, v___x_111_);
v___x_148_ = l_String_quote(v_path_108_);
v___x_149_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
v___x_150_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_127_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
v___x_151_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set_uint8(v___x_151_, sizeof(void*)*1, v___x_117_);
v___x_152_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_152_, 0, v___x_147_);
lean_ctor_set(v___x_152_, 1, v___x_151_);
v___x_153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
lean_ctor_set(v___x_153_, 1, v___x_120_);
v___x_154_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
lean_ctor_set(v___x_154_, 1, v___x_122_);
v___x_155_ = ((lean_object*)(l_Lasm_UI_instReprUrl_repr___redArg___closed__18));
v___x_156_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_154_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
v___x_157_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___x_111_);
v___x_158_ = lean_obj_once(&l_Lasm_UI_instReprUrl_repr___redArg___closed__19, &l_Lasm_UI_instReprUrl_repr___redArg___closed__19_once, _init_l_Lasm_UI_instReprUrl_repr___redArg___closed__19);
v___x_159_ = l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0(v_query_109_, v___x_138_);
v___x_160_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_158_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
v___x_161_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set_uint8(v___x_161_, sizeof(void*)*1, v___x_117_);
v___x_162_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_157_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v___x_120_);
v___x_164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v___x_122_);
v___x_165_ = ((lean_object*)(l_Lasm_UI_instReprUrl_repr___redArg___closed__21));
v___x_166_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_164_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v___x_111_);
v___x_168_ = l_Option_repr___at___00Lasm_UI_instReprUrl_repr_spec__0(v_fragment_110_, v___x_138_);
v___x_169_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_113_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
v___x_170_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set_uint8(v___x_170_, sizeof(void*)*1, v___x_117_);
v___x_171_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_167_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = lean_obj_once(&l_Lasm_UI_instReprUrl_repr___redArg___closed__24, &l_Lasm_UI_instReprUrl_repr___redArg___closed__24_once, _init_l_Lasm_UI_instReprUrl_repr___redArg___closed__24);
v___x_173_ = ((lean_object*)(l_Lasm_UI_instReprUrl_repr___redArg___closed__25));
v___x_174_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
lean_ctor_set(v___x_174_, 1, v___x_171_);
v___x_175_ = ((lean_object*)(l_Lasm_UI_instReprUrl_repr___redArg___closed__26));
v___x_176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_172_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set_uint8(v___x_178_, sizeof(void*)*1, v___x_117_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprUrl_repr(lean_object* v_x_179_, lean_object* v_prec_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Lasm_UI_instReprUrl_repr___redArg(v_x_179_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprUrl_repr___boxed(lean_object* v_x_182_, lean_object* v_prec_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lasm_UI_instReprUrl_repr(v_x_182_, v_prec_183_);
lean_dec(v_prec_183_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexVal(uint32_t v_c_197_){
_start:
{
uint32_t v___x_222_; uint8_t v___x_223_; 
v___x_222_ = 48;
v___x_223_ = lean_uint32_dec_le(v___x_222_, v_c_197_);
if (v___x_223_ == 0)
{
goto v___jp_211_;
}
else
{
uint32_t v___x_224_; uint8_t v___x_225_; 
v___x_224_ = 57;
v___x_225_ = lean_uint32_dec_le(v_c_197_, v___x_224_);
if (v___x_225_ == 0)
{
goto v___jp_211_;
}
else
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_226_ = lean_uint32_to_nat(v_c_197_);
v___x_227_ = lean_unsigned_to_nat(48u);
v___x_228_ = lean_nat_sub(v___x_226_, v___x_227_);
lean_dec(v___x_226_);
v___x_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
return v___x_229_;
}
}
v___jp_198_:
{
uint32_t v___x_199_; uint8_t v___x_200_; 
v___x_199_ = 65;
v___x_200_ = lean_uint32_dec_le(v___x_199_, v_c_197_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; 
v___x_201_ = lean_box(0);
return v___x_201_;
}
else
{
uint32_t v___x_202_; uint8_t v___x_203_; 
v___x_202_ = 70;
v___x_203_ = lean_uint32_dec_le(v_c_197_, v___x_202_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; 
v___x_204_ = lean_box(0);
return v___x_204_;
}
else
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_205_ = lean_uint32_to_nat(v_c_197_);
v___x_206_ = lean_unsigned_to_nat(65u);
v___x_207_ = lean_nat_sub(v___x_205_, v___x_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_unsigned_to_nat(10u);
v___x_209_ = lean_nat_add(v___x_207_, v___x_208_);
lean_dec(v___x_207_);
v___x_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
return v___x_210_;
}
}
}
v___jp_211_:
{
uint32_t v___x_212_; uint8_t v___x_213_; 
v___x_212_ = 97;
v___x_213_ = lean_uint32_dec_le(v___x_212_, v_c_197_);
if (v___x_213_ == 0)
{
goto v___jp_198_;
}
else
{
uint32_t v___x_214_; uint8_t v___x_215_; 
v___x_214_ = 102;
v___x_215_ = lean_uint32_dec_le(v_c_197_, v___x_214_);
if (v___x_215_ == 0)
{
goto v___jp_198_;
}
else
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_216_ = lean_uint32_to_nat(v_c_197_);
v___x_217_ = lean_unsigned_to_nat(97u);
v___x_218_ = lean_nat_sub(v___x_216_, v___x_217_);
lean_dec(v___x_216_);
v___x_219_ = lean_unsigned_to_nat(10u);
v___x_220_ = lean_nat_add(v___x_218_, v___x_219_);
lean_dec(v___x_218_);
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexVal___boxed(lean_object* v_c_230_){
_start:
{
uint32_t v_c_boxed_231_; lean_object* v_res_232_; 
v_c_boxed_231_ = lean_unbox_uint32(v_c_230_);
lean_dec(v_c_230_);
v_res_232_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexVal(v_c_boxed_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1(lean_object* v_fst_235_, lean_object* v_snd_236_, lean_object* v_x_237_, lean_object* v_x_238_){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_239_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1___closed__0));
v___x_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_240_, 0, v_fst_235_);
lean_ctor_set(v___x_240_, 1, v_snd_236_);
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1___boxed(lean_object* v_fst_243_, lean_object* v_snd_244_, lean_object* v_x_245_, lean_object* v_x_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1(v_fst_243_, v_snd_244_, v_x_245_, v_x_246_);
lean_dec(v_x_246_);
lean_dec(v_x_245_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__0(lean_object* v_snd_248_, lean_object* v___x_249_, lean_object* v_____r_250_, lean_object* v_out_251_){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_252_ = lean_unsigned_to_nat(1u);
v___x_253_ = lean_nat_add(v_snd_248_, v___x_252_);
v___x_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_254_, 0, v_out_251_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_249_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__0___boxed(lean_object* v_snd_257_, lean_object* v___x_258_, lean_object* v_____r_259_, lean_object* v_out_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__0(v_snd_257_, v___x_258_, v_____r_259_, v_out_260_);
lean_dec(v_snd_257_);
return v_res_261_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_262_; lean_object* v___x_263_; 
v___x_262_ = 65;
v___x_263_ = lean_box_uint32(v___x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg(lean_object* v_cs_264_, uint8_t v_plus_265_, lean_object* v_a_266_){
_start:
{
lean_object* v___y_268_; lean_object* v_snd_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_356_; 
v_snd_272_ = lean_ctor_get(v_a_266_, 1);
v_isSharedCheck_356_ = !lean_is_exclusive(v_a_266_);
if (v_isSharedCheck_356_ == 0)
{
lean_object* v_unused_357_; 
v_unused_357_ = lean_ctor_get(v_a_266_, 0);
lean_dec(v_unused_357_);
v___x_274_ = v_a_266_;
v_isShared_275_ = v_isSharedCheck_356_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_snd_272_);
lean_dec(v_a_266_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_356_;
goto v_resetjp_273_;
}
v___jp_267_:
{
if (lean_obj_tag(v___y_268_) == 0)
{
lean_object* v_a_269_; 
v_a_269_ = lean_ctor_get(v___y_268_, 0);
lean_inc(v_a_269_);
lean_dec_ref_known(v___y_268_, 1);
return v_a_269_;
}
else
{
lean_object* v_a_270_; 
v_a_270_ = lean_ctor_get(v___y_268_, 0);
lean_inc(v_a_270_);
lean_dec_ref_known(v___y_268_, 1);
v_a_266_ = v_a_270_;
goto _start;
}
}
v_resetjp_273_:
{
lean_object* v_fst_276_; lean_object* v_snd_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_355_; 
v_fst_276_ = lean_ctor_get(v_snd_272_, 0);
v_snd_277_ = lean_ctor_get(v_snd_272_, 1);
v_isSharedCheck_355_ = !lean_is_exclusive(v_snd_272_);
if (v_isSharedCheck_355_ == 0)
{
v___x_279_ = v_snd_272_;
v_isShared_280_ = v_isSharedCheck_355_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_snd_277_);
lean_inc(v_fst_276_);
lean_dec(v_snd_272_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_355_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_281_ = lean_box(0);
v___x_282_ = lean_array_get_size(v_cs_264_);
v___x_283_ = lean_nat_dec_lt(v_snd_277_, v___x_282_);
if (v___x_283_ == 0)
{
lean_object* v___x_285_; 
if (v_isShared_280_ == 0)
{
v___x_285_ = v___x_279_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_fst_276_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_snd_277_);
v___x_285_ = v_reuseFailAlloc_289_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
lean_object* v___x_287_; 
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 1, v___x_285_);
lean_ctor_set(v___x_274_, 0, v___x_281_);
v___x_287_ = v___x_274_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v___x_285_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
else
{
lean_object* v___x_290_; lean_object* v___x_291_; uint32_t v___x_292_; uint32_t v___x_293_; uint8_t v___x_294_; 
v___x_290_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___boxed__const__1;
v___x_291_ = lean_array_get_borrowed(v___x_290_, v_cs_264_, v_snd_277_);
v___x_292_ = 37;
v___x_293_ = lean_unbox_uint32(v___x_291_);
v___x_294_ = lean_uint32_dec_eq(v___x_293_, v___x_292_);
if (v___x_294_ == 0)
{
uint8_t v___y_296_; 
lean_del_object(v___x_279_);
lean_del_object(v___x_274_);
if (v_plus_265_ == 0)
{
v___y_296_ = v___x_294_;
goto v___jp_295_;
}
else
{
uint32_t v___x_307_; uint32_t v___x_308_; uint8_t v___x_309_; 
v___x_307_ = 43;
v___x_308_ = lean_unbox_uint32(v___x_291_);
v___x_309_ = lean_uint32_dec_eq(v___x_308_, v___x_307_);
if (v___x_309_ == 0)
{
v___y_296_ = v___x_309_;
goto v___jp_295_;
}
else
{
uint8_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_310_ = 32;
v___x_311_ = lean_byte_array_push(v_fst_276_, v___x_310_);
v___x_312_ = lean_box(0);
v___x_313_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__0(v_snd_277_, v___x_281_, v___x_312_, v___x_311_);
lean_dec(v_snd_277_);
v___y_268_ = v___x_313_;
goto v___jp_267_;
}
}
v___jp_295_:
{
lean_object* v___x_297_; uint32_t v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_297_ = ((lean_object*)(l_Lasm_UI_instInhabitedUrl_default___closed__1));
v___x_298_ = lean_unbox_uint32(v___x_291_);
v___x_299_ = lean_string_push(v___x_297_, v___x_298_);
v___x_300_ = lean_string_to_utf8(v___x_299_);
v___x_301_ = lean_unsigned_to_nat(0u);
v___x_302_ = lean_byte_array_size(v_fst_276_);
v___x_303_ = lean_byte_array_size(v___x_300_);
v___x_304_ = lean_byte_array_copy_slice(v___x_300_, v___x_301_, v_fst_276_, v___x_302_, v___x_303_, v___y_296_);
lean_dec_ref(v___x_300_);
v___x_305_ = lean_box(0);
v___x_306_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__0(v_snd_277_, v___x_281_, v___x_305_, v___x_304_);
lean_dec(v_snd_277_);
v___y_268_ = v___x_306_;
goto v___jp_267_;
}
}
else
{
lean_object* v___y_315_; lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_324_ = lean_unsigned_to_nat(1u);
v___x_325_ = lean_nat_add(v_snd_277_, v___x_324_);
v___x_326_ = lean_nat_dec_lt(v___x_325_, v___x_282_);
if (v___x_326_ == 0)
{
lean_dec(v___x_325_);
lean_del_object(v___x_279_);
lean_del_object(v___x_274_);
v___y_315_ = v___x_281_;
goto v___jp_314_;
}
else
{
lean_object* v___x_327_; uint32_t v___x_328_; lean_object* v___x_329_; lean_object* v___y_331_; 
v___x_327_ = lean_array_fget_borrowed(v_cs_264_, v___x_325_);
lean_dec(v___x_325_);
v___x_328_ = lean_unbox_uint32(v___x_327_);
v___x_329_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexVal(v___x_328_);
if (lean_obj_tag(v___x_329_) == 1)
{
lean_object* v_val_333_; lean_object* v___x_334_; lean_object* v___x_335_; uint8_t v___x_336_; 
v_val_333_ = lean_ctor_get(v___x_329_, 0);
v___x_334_ = lean_unsigned_to_nat(2u);
v___x_335_ = lean_nat_add(v_snd_277_, v___x_334_);
v___x_336_ = lean_nat_dec_lt(v___x_335_, v___x_282_);
if (v___x_336_ == 0)
{
lean_dec(v___x_335_);
lean_del_object(v___x_279_);
lean_del_object(v___x_274_);
v___y_331_ = v___x_281_;
goto v___jp_330_;
}
else
{
lean_object* v___x_337_; uint32_t v___x_338_; lean_object* v___x_339_; 
v___x_337_ = lean_array_fget_borrowed(v_cs_264_, v___x_335_);
lean_dec(v___x_335_);
v___x_338_ = lean_unbox_uint32(v___x_337_);
v___x_339_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexVal(v___x_338_);
if (lean_obj_tag(v___x_339_) == 1)
{
lean_object* v_val_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; uint8_t v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_349_; 
lean_inc(v_val_333_);
lean_dec_ref_known(v___x_329_, 1);
v_val_340_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_val_340_);
lean_dec_ref_known(v___x_339_, 1);
v___x_341_ = lean_unsigned_to_nat(16u);
v___x_342_ = lean_nat_mul(v_val_333_, v___x_341_);
lean_dec(v_val_333_);
v___x_343_ = lean_nat_add(v___x_342_, v_val_340_);
lean_dec(v_val_340_);
lean_dec(v___x_342_);
v___x_344_ = lean_uint8_of_nat(v___x_343_);
lean_dec(v___x_343_);
v___x_345_ = lean_byte_array_push(v_fst_276_, v___x_344_);
v___x_346_ = lean_unsigned_to_nat(3u);
v___x_347_ = lean_nat_add(v_snd_277_, v___x_346_);
lean_dec(v_snd_277_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 1, v___x_347_);
lean_ctor_set(v___x_279_, 0, v___x_345_);
v___x_349_ = v___x_279_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_345_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v___x_347_);
v___x_349_ = v_reuseFailAlloc_354_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_351_; 
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 1, v___x_349_);
lean_ctor_set(v___x_274_, 0, v___x_281_);
v___x_351_ = v___x_274_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v___x_349_);
v___x_351_ = v_reuseFailAlloc_353_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
v_a_266_ = v___x_351_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_279_);
lean_del_object(v___x_274_);
v___y_331_ = v___x_339_;
goto v___jp_330_;
}
}
}
else
{
lean_del_object(v___x_279_);
lean_del_object(v___x_274_);
v___y_315_ = v___x_329_;
goto v___jp_314_;
}
v___jp_330_:
{
lean_object* v___x_332_; 
v___x_332_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1(v_fst_276_, v_snd_277_, v___x_329_, v___y_331_);
lean_dec(v___y_331_);
lean_dec(v___x_329_);
v___y_268_ = v___x_332_;
goto v___jp_267_;
}
}
v___jp_314_:
{
lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_316_ = lean_unsigned_to_nat(2u);
v___x_317_ = lean_nat_add(v_snd_277_, v___x_316_);
v___x_318_ = lean_nat_dec_lt(v___x_317_, v___x_282_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; 
lean_dec(v___x_317_);
v___x_319_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1(v_fst_276_, v_snd_277_, v___y_315_, v___x_281_);
lean_dec(v___y_315_);
v___y_268_ = v___x_319_;
goto v___jp_267_;
}
else
{
lean_object* v___x_320_; uint32_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_320_ = lean_array_fget_borrowed(v_cs_264_, v___x_317_);
lean_dec(v___x_317_);
v___x_321_ = lean_unbox_uint32(v___x_320_);
v___x_322_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexVal(v___x_321_);
v___x_323_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___lam__1(v_fst_276_, v_snd_277_, v___y_315_, v___x_322_);
lean_dec(v___x_322_);
lean_dec(v___y_315_);
v___y_268_ = v___x_323_;
goto v___jp_267_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___boxed(lean_object* v_cs_358_, lean_object* v_plus_359_, lean_object* v_a_360_){
_start:
{
uint8_t v_plus_boxed_361_; lean_object* v_res_362_; 
v_plus_boxed_361_ = lean_unbox(v_plus_359_);
v_res_362_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg(v_cs_358_, v_plus_boxed_361_, v_a_360_);
lean_dec_ref(v_cs_358_);
return v_res_362_;
}
}
static lean_object* _init_l_Lasm_UI_Url_percentDecode___closed__0(void){
_start:
{
lean_object* v_i_363_; lean_object* v_out_364_; lean_object* v___x_365_; 
v_i_363_ = lean_unsigned_to_nat(0u);
v_out_364_ = l_ByteArray_empty;
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v_out_364_);
lean_ctor_set(v___x_365_, 1, v_i_363_);
return v___x_365_;
}
}
static lean_object* _init_l_Lasm_UI_Url_percentDecode___closed__1(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_366_ = lean_obj_once(&l_Lasm_UI_Url_percentDecode___closed__0, &l_Lasm_UI_Url_percentDecode___closed__0_once, _init_l_Lasm_UI_Url_percentDecode___closed__0);
v___x_367_ = lean_box(0);
v___x_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
lean_ctor_set(v___x_368_, 1, v___x_366_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_percentDecode(lean_object* v_s_369_, uint8_t v_plus_370_){
_start:
{
lean_object* v___x_371_; lean_object* v_cs_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v_fst_376_; 
v___x_371_ = l_String_toListImpl(v_s_369_);
v_cs_372_ = lean_array_mk(v___x_371_);
v___x_373_ = lean_box(0);
v___x_374_ = lean_obj_once(&l_Lasm_UI_Url_percentDecode___closed__1, &l_Lasm_UI_Url_percentDecode___closed__1_once, _init_l_Lasm_UI_Url_percentDecode___closed__1);
v___x_375_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg(v_cs_372_, v_plus_370_, v___x_374_);
lean_dec_ref(v_cs_372_);
v_fst_376_ = lean_ctor_get(v___x_375_, 0);
if (lean_obj_tag(v_fst_376_) == 0)
{
lean_object* v_snd_377_; lean_object* v_fst_378_; uint8_t v___x_379_; 
v_snd_377_ = lean_ctor_get(v___x_375_, 1);
lean_inc(v_snd_377_);
lean_dec_ref(v___x_375_);
v_fst_378_ = lean_ctor_get(v_snd_377_, 0);
lean_inc(v_fst_378_);
lean_dec(v_snd_377_);
v___x_379_ = lean_string_validate_utf8(v_fst_378_);
if (v___x_379_ == 0)
{
lean_dec(v_fst_378_);
return v___x_373_;
}
else
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_string_from_utf8_unchecked(v_fst_378_);
v___x_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
}
else
{
lean_object* v_val_382_; 
lean_inc_ref(v_fst_376_);
lean_dec_ref(v___x_375_);
v_val_382_ = lean_ctor_get(v_fst_376_, 0);
lean_inc(v_val_382_);
lean_dec_ref_known(v_fst_376_, 1);
return v_val_382_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_percentDecode___boxed(lean_object* v_s_383_, lean_object* v_plus_384_){
_start:
{
uint8_t v_plus_boxed_385_; lean_object* v_res_386_; 
v_plus_boxed_385_ = lean_unbox(v_plus_384_);
v_res_386_ = l_Lasm_UI_Url_percentDecode(v_s_383_, v_plus_boxed_385_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0(lean_object* v_cs_387_, uint8_t v_plus_388_, lean_object* v_inst_389_, lean_object* v_a_390_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg(v_cs_387_, v_plus_388_, v_a_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___boxed(lean_object* v_cs_392_, lean_object* v_plus_393_, lean_object* v_inst_394_, lean_object* v_a_395_){
_start:
{
uint8_t v_plus_boxed_396_; lean_object* v_res_397_; 
v_plus_boxed_396_ = lean_unbox(v_plus_393_);
v_res_397_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0(v_cs_392_, v_plus_boxed_396_, v_inst_394_, v_a_395_);
lean_dec_ref(v_cs_392_);
return v_res_397_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_UI_Url_0__Lasm_UI_Url_unreserved(uint8_t v_b_398_){
_start:
{
uint8_t v___x_418_; uint8_t v___x_419_; 
v___x_418_ = 65;
v___x_419_ = lean_uint8_dec_le(v___x_418_, v_b_398_);
if (v___x_419_ == 0)
{
goto v___jp_413_;
}
else
{
uint8_t v___x_420_; uint8_t v___x_421_; 
v___x_420_ = 90;
v___x_421_ = lean_uint8_dec_le(v_b_398_, v___x_420_);
if (v___x_421_ == 0)
{
goto v___jp_413_;
}
else
{
return v___x_421_;
}
}
v___jp_399_:
{
uint8_t v___x_400_; uint8_t v___x_401_; 
v___x_400_ = 45;
v___x_401_ = lean_uint8_dec_eq(v_b_398_, v___x_400_);
if (v___x_401_ == 0)
{
uint8_t v___x_402_; uint8_t v___x_403_; 
v___x_402_ = 46;
v___x_403_ = lean_uint8_dec_eq(v_b_398_, v___x_402_);
if (v___x_403_ == 0)
{
uint8_t v___x_404_; uint8_t v___x_405_; 
v___x_404_ = 95;
v___x_405_ = lean_uint8_dec_eq(v_b_398_, v___x_404_);
if (v___x_405_ == 0)
{
uint8_t v___x_406_; uint8_t v___x_407_; 
v___x_406_ = 126;
v___x_407_ = lean_uint8_dec_eq(v_b_398_, v___x_406_);
return v___x_407_;
}
else
{
return v___x_405_;
}
}
else
{
return v___x_403_;
}
}
else
{
return v___x_401_;
}
}
v___jp_408_:
{
uint8_t v___x_409_; uint8_t v___x_410_; 
v___x_409_ = 48;
v___x_410_ = lean_uint8_dec_le(v___x_409_, v_b_398_);
if (v___x_410_ == 0)
{
goto v___jp_399_;
}
else
{
uint8_t v___x_411_; uint8_t v___x_412_; 
v___x_411_ = 57;
v___x_412_ = lean_uint8_dec_le(v_b_398_, v___x_411_);
if (v___x_412_ == 0)
{
goto v___jp_399_;
}
else
{
return v___x_412_;
}
}
}
v___jp_413_:
{
uint8_t v___x_414_; uint8_t v___x_415_; 
v___x_414_ = 97;
v___x_415_ = lean_uint8_dec_le(v___x_414_, v_b_398_);
if (v___x_415_ == 0)
{
goto v___jp_408_;
}
else
{
uint8_t v___x_416_; uint8_t v___x_417_; 
v___x_416_ = 122;
v___x_417_ = lean_uint8_dec_le(v_b_398_, v___x_416_);
if (v___x_417_ == 0)
{
goto v___jp_408_;
}
else
{
return v___x_417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_unreserved___boxed(lean_object* v_b_422_){
_start:
{
uint8_t v_b_boxed_423_; uint8_t v_res_424_; lean_object* v_r_425_; 
v_b_boxed_423_ = lean_unbox(v_b_422_);
v_res_424_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_unreserved(v_b_boxed_423_);
v_r_425_ = lean_box(v_res_424_);
return v_r_425_;
}
}
static lean_object* _init_l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___closed__1(void){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = ((lean_object*)(l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___closed__0));
v___x_428_ = l_String_toListImpl(v___x_427_);
return v___x_428_;
}
}
LEAN_EXPORT uint32_t l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit(lean_object* v_n_429_){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; uint32_t v___x_433_; 
v___x_430_ = lean_obj_once(&l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___closed__1, &l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___closed__1_once, _init_l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___closed__1);
v___x_431_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___boxed__const__1;
v___x_432_ = l_List_get_x21Internal___redArg(v___x_431_, v___x_430_, v_n_429_);
v___x_433_ = lean_unbox_uint32(v___x_432_);
lean_dec(v___x_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit___boxed(lean_object* v_n_434_){
_start:
{
uint32_t v_res_435_; lean_object* v_r_436_; 
v_res_435_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit(v_n_434_);
v_r_436_ = lean_box_uint32(v_res_435_);
return v_r_436_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_UI_Url_percentEncode_spec__0(lean_object* v_as_437_, size_t v_i_438_, size_t v_stop_439_, lean_object* v_b_440_){
_start:
{
lean_object* v___y_442_; uint8_t v___x_446_; 
v___x_446_ = lean_usize_dec_eq(v_i_438_, v_stop_439_);
if (v___x_446_ == 0)
{
uint8_t v___x_447_; uint8_t v___x_448_; 
v___x_447_ = lean_byte_array_uget(v_as_437_, v_i_438_);
v___x_448_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_unreserved(v___x_447_);
if (v___x_448_ == 0)
{
uint32_t v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; uint32_t v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; uint32_t v___x_458_; lean_object* v___x_459_; 
v___x_449_ = 37;
v___x_450_ = lean_string_push(v_b_440_, v___x_449_);
v___x_451_ = lean_uint8_to_nat(v___x_447_);
v___x_452_ = lean_unsigned_to_nat(16u);
v___x_453_ = lean_unsigned_to_nat(4u);
v___x_454_ = lean_nat_shiftr(v___x_451_, v___x_453_);
v___x_455_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit(v___x_454_);
v___x_456_ = lean_string_push(v___x_450_, v___x_455_);
v___x_457_ = lean_nat_mod(v___x_451_, v___x_452_);
v___x_458_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_hexDigit(v___x_457_);
v___x_459_ = lean_string_push(v___x_456_, v___x_458_);
v___y_442_ = v___x_459_;
goto v___jp_441_;
}
else
{
lean_object* v___x_460_; uint32_t v___x_461_; lean_object* v___x_462_; 
v___x_460_ = lean_uint8_to_nat(v___x_447_);
v___x_461_ = l_Char_ofNat(v___x_460_);
v___x_462_ = lean_string_push(v_b_440_, v___x_461_);
v___y_442_ = v___x_462_;
goto v___jp_441_;
}
}
else
{
return v_b_440_;
}
v___jp_441_:
{
size_t v___x_443_; size_t v___x_444_; 
v___x_443_ = ((size_t)1ULL);
v___x_444_ = lean_usize_add(v_i_438_, v___x_443_);
v_i_438_ = v___x_444_;
v_b_440_ = v___y_442_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lasm_UI_Url_percentEncode_spec__0___boxed(lean_object* v_as_463_, lean_object* v_i_464_, lean_object* v_stop_465_, lean_object* v_b_466_){
_start:
{
size_t v_i_boxed_467_; size_t v_stop_boxed_468_; lean_object* v_res_469_; 
v_i_boxed_467_ = lean_unbox_usize(v_i_464_);
lean_dec(v_i_464_);
v_stop_boxed_468_ = lean_unbox_usize(v_stop_465_);
lean_dec(v_stop_465_);
v_res_469_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_UI_Url_percentEncode_spec__0(v_as_463_, v_i_boxed_467_, v_stop_boxed_468_, v_b_466_);
lean_dec_ref(v_as_463_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_percentEncode(lean_object* v_s_470_){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_471_ = ((lean_object*)(l_Lasm_UI_instInhabitedUrl_default___closed__1));
v___x_472_ = lean_string_to_utf8(v_s_470_);
v___x_473_ = lean_unsigned_to_nat(0u);
v___x_474_ = lean_byte_array_size(v___x_472_);
v___x_475_ = lean_nat_dec_lt(v___x_473_, v___x_474_);
if (v___x_475_ == 0)
{
lean_dec_ref(v___x_472_);
return v___x_471_;
}
else
{
size_t v___x_476_; size_t v___x_477_; lean_object* v___x_478_; 
v___x_476_ = ((size_t)0ULL);
v___x_477_ = lean_usize_of_nat(v___x_474_);
v___x_478_ = l_ByteArray_foldlMUnsafe_fold___at___00Lasm_UI_Url_percentEncode_spec__0(v___x_472_, v___x_476_, v___x_477_, v___x_471_);
lean_dec_ref(v___x_472_);
return v___x_478_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_splitOnce(lean_object* v_s_479_, uint32_t v_c_480_){
_start:
{
lean_object* v_head_482_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_485_ = ((lean_object*)(l_Lasm_UI_instInhabitedUrl_default___closed__1));
v___x_486_ = lean_string_push(v___x_485_, v_c_480_);
v___x_487_ = lean_string_dec_eq(v___x_486_, v___x_485_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = lean_unsigned_to_nat(0u);
v___x_489_ = lean_box(0);
v___x_490_ = l_String_splitOnAux(v_s_479_, v___x_486_, v___x_488_, v___x_488_, v___x_488_, v___x_489_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; 
lean_dec_ref(v___x_486_);
v___x_491_ = lean_box(0);
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v_s_479_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
return v___x_492_;
}
else
{
lean_object* v_tail_493_; 
lean_dec_ref(v_s_479_);
v_tail_493_ = lean_ctor_get(v___x_490_, 1);
if (lean_obj_tag(v_tail_493_) == 0)
{
lean_object* v_head_494_; 
lean_dec_ref(v___x_486_);
v_head_494_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_head_494_);
lean_dec_ref_known(v___x_490_, 2);
v_head_482_ = v_head_494_;
goto v___jp_481_;
}
else
{
lean_object* v_head_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_504_; 
lean_inc(v_tail_493_);
v_head_495_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_504_ == 0)
{
lean_object* v_unused_505_; 
v_unused_505_ = lean_ctor_get(v___x_490_, 1);
lean_dec(v_unused_505_);
v___x_497_ = v___x_490_;
v_isShared_498_ = v_isSharedCheck_504_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_head_495_);
lean_dec(v___x_490_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_504_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_502_; 
v___x_499_ = l_String_intercalate(v___x_486_, v_tail_493_);
lean_dec_ref(v___x_486_);
v___x_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
if (v_isShared_498_ == 0)
{
lean_ctor_set_tag(v___x_497_, 0);
lean_ctor_set(v___x_497_, 1, v___x_500_);
v___x_502_ = v___x_497_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_head_495_);
lean_ctor_set(v_reuseFailAlloc_503_, 1, v___x_500_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_486_);
v_head_482_ = v_s_479_;
goto v___jp_481_;
}
v___jp_481_:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = lean_box(0);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v_head_482_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
return v___x_484_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Url_0__Lasm_UI_Url_splitOnce___boxed(lean_object* v_s_506_, lean_object* v_c_507_){
_start:
{
uint32_t v_c_boxed_508_; lean_object* v_res_509_; 
v_c_boxed_508_ = lean_unbox_uint32(v_c_507_);
lean_dec(v_c_507_);
v_res_509_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_splitOnce(v_s_506_, v_c_boxed_508_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00Lasm_UI_Url_parse_spec__0(lean_object* v_s_510_, lean_object* v_p_511_){
_start:
{
lean_object* v___y_513_; lean_object* v___y_514_; uint32_t v___y_518_; lean_object* v___x_530_; uint8_t v_decide_531_; 
v___x_530_ = lean_string_utf8_byte_size(v_s_510_);
v_decide_531_ = lean_nat_dec_eq(v_p_511_, v___x_530_);
if (v_decide_531_ == 0)
{
uint32_t v___x_532_; uint32_t v___x_533_; uint8_t v___x_534_; 
v___x_532_ = lean_string_utf8_get_fast(v_s_510_, v_p_511_);
v___x_533_ = 65;
v___x_534_ = lean_uint32_dec_le(v___x_533_, v___x_532_);
if (v___x_534_ == 0)
{
v___y_518_ = v___x_532_;
goto v___jp_517_;
}
else
{
uint32_t v___x_535_; uint8_t v___x_536_; 
v___x_535_ = 90;
v___x_536_ = lean_uint32_dec_le(v___x_532_, v___x_535_);
if (v___x_536_ == 0)
{
v___y_518_ = v___x_532_;
goto v___jp_517_;
}
else
{
uint32_t v___x_537_; uint32_t v___x_538_; 
v___x_537_ = 32;
v___x_538_ = lean_uint32_add(v___x_532_, v___x_537_);
v___y_518_ = v___x_538_;
goto v___jp_517_;
}
}
}
else
{
lean_dec(v_p_511_);
return v_s_510_;
}
v___jp_512_:
{
lean_object* v___x_515_; 
v___x_515_ = lean_nat_add(v_p_511_, v___y_514_);
lean_dec(v_p_511_);
v_s_510_ = v___y_513_;
v_p_511_ = v___x_515_;
goto _start;
}
v___jp_517_:
{
lean_object* v___x_519_; uint32_t v___x_520_; uint8_t v___x_521_; 
lean_inc(v_p_511_);
v___x_519_ = lean_string_utf8_set(v_s_510_, v_p_511_, v___y_518_);
v___x_520_ = 127;
v___x_521_ = lean_uint32_dec_le(v___y_518_, v___x_520_);
if (v___x_521_ == 0)
{
uint32_t v___x_522_; uint8_t v___x_523_; 
v___x_522_ = 2047;
v___x_523_ = lean_uint32_dec_le(v___y_518_, v___x_522_);
if (v___x_523_ == 0)
{
uint32_t v___x_524_; uint8_t v___x_525_; 
v___x_524_ = 65535;
v___x_525_ = lean_uint32_dec_le(v___y_518_, v___x_524_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; 
v___x_526_ = lean_unsigned_to_nat(4u);
v___y_513_ = v___x_519_;
v___y_514_ = v___x_526_;
goto v___jp_512_;
}
else
{
lean_object* v___x_527_; 
v___x_527_ = lean_unsigned_to_nat(3u);
v___y_513_ = v___x_519_;
v___y_514_ = v___x_527_;
goto v___jp_512_;
}
}
else
{
lean_object* v___x_528_; 
v___x_528_ = lean_unsigned_to_nat(2u);
v___y_513_ = v___x_519_;
v___y_514_ = v___x_528_;
goto v___jp_512_;
}
}
else
{
lean_object* v___x_529_; 
v___x_529_ = lean_unsigned_to_nat(1u);
v___y_513_ = v___x_519_;
v___y_514_ = v___x_529_;
goto v___jp_512_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_parse(lean_object* v_s_541_){
_start:
{
uint32_t v___x_542_; lean_object* v___x_543_; lean_object* v_fst_544_; lean_object* v_snd_545_; uint32_t v___x_546_; lean_object* v___x_547_; lean_object* v_fst_548_; lean_object* v_snd_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_542_ = 35;
v___x_543_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_splitOnce(v_s_541_, v___x_542_);
v_fst_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_fst_544_);
v_snd_545_ = lean_ctor_get(v___x_543_, 1);
lean_inc(v_snd_545_);
lean_dec_ref(v___x_543_);
v___x_546_ = 63;
v___x_547_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_splitOnce(v_fst_544_, v___x_546_);
v_fst_548_ = lean_ctor_get(v___x_547_, 0);
lean_inc(v_fst_548_);
v_snd_549_ = lean_ctor_get(v___x_547_, 1);
lean_inc(v_snd_549_);
lean_dec_ref(v___x_547_);
v___x_550_ = ((lean_object*)(l_Lasm_UI_Url_parse___closed__0));
v___x_551_ = lean_unsigned_to_nat(0u);
v___x_552_ = lean_box(0);
v___x_553_ = l_String_splitOnAux(v_fst_548_, v___x_550_, v___x_551_, v___x_551_, v___x_551_, v___x_552_);
lean_dec(v_fst_548_);
if (lean_obj_tag(v___x_553_) == 1)
{
lean_object* v_head_554_; lean_object* v_tail_555_; lean_object* v___y_557_; lean_object* v_fst_558_; lean_object* v_snd_559_; 
v_head_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc(v_head_554_);
v_tail_555_ = lean_ctor_get(v___x_553_, 1);
lean_inc(v_tail_555_);
lean_dec_ref_known(v___x_553_, 2);
if (lean_obj_tag(v_tail_555_) == 1)
{
lean_object* v_head_566_; lean_object* v_tail_567_; lean_object* v_fst_569_; lean_object* v_snd_570_; 
v_head_566_ = lean_ctor_get(v_tail_555_, 0);
lean_inc(v_head_566_);
v_tail_567_ = lean_ctor_get(v_tail_555_, 1);
lean_inc(v_tail_567_);
lean_dec_ref_known(v_tail_555_, 2);
if (lean_obj_tag(v_tail_567_) == 0)
{
lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_587_ = lean_string_utf8_byte_size(v_head_554_);
v___x_588_ = lean_nat_dec_eq(v___x_587_, v___x_551_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = ((lean_object*)(l_Lasm_UI_instInhabitedUrl_default___closed__2));
v___x_590_ = l_String_splitOnAux(v_head_566_, v___x_589_, v___x_551_, v___x_551_, v___x_551_, v_tail_567_);
lean_dec(v_head_566_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v___x_591_; 
v___x_591_ = ((lean_object*)(l_Lasm_UI_instInhabitedUrl_default___closed__1));
v_fst_569_ = v___x_591_;
v_snd_570_ = v___x_589_;
goto v___jp_568_;
}
else
{
lean_object* v_head_592_; lean_object* v_tail_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v_head_592_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_head_592_);
v_tail_593_ = lean_ctor_get(v___x_590_, 1);
lean_inc(v_tail_593_);
lean_dec_ref_known(v___x_590_, 2);
v___x_594_ = l_String_intercalate(v___x_589_, v_tail_593_);
v___x_595_ = lean_string_append(v___x_589_, v___x_594_);
lean_dec_ref(v___x_594_);
v_fst_569_ = v_head_592_;
v_snd_570_ = v___x_595_;
goto v___jp_568_;
}
}
else
{
lean_object* v___x_596_; 
lean_dec(v_head_566_);
lean_dec(v_head_554_);
lean_dec(v_snd_549_);
lean_dec(v_snd_545_);
v___x_596_ = lean_box(0);
return v___x_596_;
}
}
else
{
lean_object* v___x_597_; 
lean_dec(v_tail_567_);
lean_dec(v_head_566_);
lean_dec(v_head_554_);
lean_dec(v_snd_549_);
lean_dec(v_snd_545_);
v___x_597_ = lean_box(0);
return v___x_597_;
}
v___jp_568_:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = ((lean_object*)(l_Lasm_UI_Url_parse___closed__1));
v___x_572_ = l_String_splitOnAux(v_fst_569_, v___x_571_, v___x_551_, v___x_551_, v___x_551_, v_tail_567_);
lean_dec_ref(v_fst_569_);
if (lean_obj_tag(v___x_572_) == 1)
{
lean_object* v_tail_573_; 
v_tail_573_ = lean_ctor_get(v___x_572_, 1);
if (lean_obj_tag(v_tail_573_) == 0)
{
lean_object* v_head_574_; lean_object* v___x_575_; 
v_head_574_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_head_574_);
lean_dec_ref_known(v___x_572_, 2);
v___x_575_ = lean_box(0);
v___y_557_ = v_snd_570_;
v_fst_558_ = v_head_574_;
v_snd_559_ = v___x_575_;
goto v___jp_556_;
}
else
{
lean_object* v_tail_576_; 
lean_inc_ref(v_tail_573_);
v_tail_576_ = lean_ctor_get(v_tail_573_, 1);
if (lean_obj_tag(v_tail_576_) == 0)
{
lean_object* v_head_577_; lean_object* v_head_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v_head_577_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_head_577_);
lean_dec_ref_known(v___x_572_, 2);
v_head_578_ = lean_ctor_get(v_tail_573_, 0);
lean_inc(v_head_578_);
lean_dec_ref_known(v_tail_573_, 2);
v___x_579_ = lean_string_utf8_byte_size(v_head_578_);
v___x_580_ = lean_nat_dec_eq(v___x_579_, v___x_551_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_581_, 0, v_head_578_);
lean_ctor_set(v___x_581_, 1, v___x_551_);
lean_ctor_set(v___x_581_, 2, v___x_579_);
v___x_582_ = l_String_Slice_toNat_x3f(v___x_581_);
lean_dec_ref_known(v___x_581_, 3);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v___x_583_; 
lean_dec(v_head_577_);
lean_dec_ref(v_snd_570_);
lean_dec(v_head_554_);
lean_dec(v_snd_549_);
lean_dec(v_snd_545_);
v___x_583_ = lean_box(0);
return v___x_583_;
}
else
{
v___y_557_ = v_snd_570_;
v_fst_558_ = v_head_577_;
v_snd_559_ = v___x_582_;
goto v___jp_556_;
}
}
else
{
lean_object* v___x_584_; 
lean_dec(v_head_578_);
v___x_584_ = lean_box(0);
v___y_557_ = v_snd_570_;
v_fst_558_ = v_head_577_;
v_snd_559_ = v___x_584_;
goto v___jp_556_;
}
}
else
{
lean_object* v___x_585_; 
lean_dec_ref_known(v_tail_573_, 2);
lean_dec_ref_known(v___x_572_, 2);
lean_dec_ref(v_snd_570_);
lean_dec(v_head_554_);
lean_dec(v_snd_549_);
lean_dec(v_snd_545_);
v___x_585_ = lean_box(0);
return v___x_585_;
}
}
}
else
{
lean_object* v___x_586_; 
lean_dec(v___x_572_);
lean_dec_ref(v_snd_570_);
lean_dec(v_head_554_);
lean_dec(v_snd_549_);
lean_dec(v_snd_545_);
v___x_586_ = lean_box(0);
return v___x_586_;
}
}
}
else
{
lean_object* v___x_598_; 
lean_dec(v_tail_555_);
lean_dec(v_head_554_);
lean_dec(v_snd_549_);
lean_dec(v_snd_545_);
v___x_598_ = lean_box(0);
return v___x_598_;
}
v___jp_556_:
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_560_ = l_String_mapAux___at___00Lasm_UI_Url_parse_spec__0(v_head_554_, v___x_551_);
v___x_561_ = ((lean_object*)(l_Lasm_UI_Url_parse___closed__1));
v___x_562_ = lean_string_append(v___x_560_, v___x_561_);
v___x_563_ = l_String_mapAux___at___00Lasm_UI_Url_parse_spec__0(v_fst_558_, v___x_551_);
v___x_564_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_564_, 0, v___x_562_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
lean_ctor_set(v___x_564_, 2, v_snd_559_);
lean_ctor_set(v___x_564_, 3, v___y_557_);
lean_ctor_set(v___x_564_, 4, v_snd_549_);
lean_ctor_set(v___x_564_, 5, v_snd_545_);
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
return v___x_565_;
}
}
else
{
lean_object* v___x_599_; 
lean_dec(v___x_553_);
lean_dec(v_snd_549_);
lean_dec(v_snd_545_);
v___x_599_ = lean_box(0);
return v___x_599_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_parseRelative(lean_object* v_base_601_, lean_object* v_s_602_){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_603_ = lean_unsigned_to_nat(1u);
v___x_604_ = ((lean_object*)(l_Lasm_UI_Url_parse___closed__0));
v___x_605_ = lean_unsigned_to_nat(0u);
v___x_606_ = lean_box(0);
v___x_607_ = l_String_splitOnAux(v_s_602_, v___x_604_, v___x_605_, v___x_605_, v___x_605_, v___x_606_);
v___x_608_ = l_List_lengthTR___redArg(v___x_607_);
lean_dec(v___x_607_);
v___x_609_ = lean_nat_dec_lt(v___x_603_, v___x_608_);
lean_dec(v___x_608_);
if (v___x_609_ == 0)
{
uint32_t v___x_610_; lean_object* v___x_611_; lean_object* v_fst_612_; lean_object* v_snd_613_; uint32_t v___x_614_; lean_object* v___x_615_; lean_object* v_fst_616_; lean_object* v_snd_617_; lean_object* v___y_634_; lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_610_ = 35;
lean_inc_ref(v_s_602_);
v___x_611_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_splitOnce(v_s_602_, v___x_610_);
v_fst_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_fst_612_);
v_snd_613_ = lean_ctor_get(v___x_611_, 1);
lean_inc(v_snd_613_);
lean_dec_ref(v___x_611_);
v___x_614_ = 63;
v___x_615_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_splitOnce(v_fst_612_, v___x_614_);
v_fst_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_fst_616_);
v_snd_617_ = lean_ctor_get(v___x_615_, 1);
lean_inc(v_snd_617_);
lean_dec_ref(v___x_615_);
v___x_650_ = lean_string_utf8_byte_size(v_fst_616_);
v___x_651_ = lean_nat_dec_eq(v___x_650_, v___x_605_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; uint8_t v___x_661_; 
lean_dec_ref(v_s_602_);
v___x_652_ = ((lean_object*)(l_Lasm_UI_instInhabitedUrl_default___closed__2));
v___x_661_ = lean_nat_dec_le(v___x_603_, v___x_650_);
if (v___x_661_ == 0)
{
goto v___jp_653_;
}
else
{
uint8_t v___x_662_; 
v___x_662_ = lean_string_memcmp(v_fst_616_, v___x_652_, v___x_605_, v___x_605_, v___x_603_);
if (v___x_662_ == 0)
{
goto v___jp_653_;
}
else
{
lean_object* v_protocol_663_; lean_object* v_host_664_; lean_object* v_port_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_673_; 
v_protocol_663_ = lean_ctor_get(v_base_601_, 0);
v_host_664_ = lean_ctor_get(v_base_601_, 1);
v_port_665_ = lean_ctor_get(v_base_601_, 2);
v_isSharedCheck_673_ = !lean_is_exclusive(v_base_601_);
if (v_isSharedCheck_673_ == 0)
{
lean_object* v_unused_674_; lean_object* v_unused_675_; lean_object* v_unused_676_; 
v_unused_674_ = lean_ctor_get(v_base_601_, 5);
lean_dec(v_unused_674_);
v_unused_675_ = lean_ctor_get(v_base_601_, 4);
lean_dec(v_unused_675_);
v_unused_676_ = lean_ctor_get(v_base_601_, 3);
lean_dec(v_unused_676_);
v___x_667_ = v_base_601_;
v_isShared_668_ = v_isSharedCheck_673_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_port_665_);
lean_inc(v_host_664_);
lean_inc(v_protocol_663_);
lean_dec(v_base_601_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_673_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 5, v_snd_613_);
lean_ctor_set(v___x_667_, 4, v_snd_617_);
lean_ctor_set(v___x_667_, 3, v_fst_616_);
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_protocol_663_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v_host_664_);
lean_ctor_set(v_reuseFailAlloc_672_, 2, v_port_665_);
lean_ctor_set(v_reuseFailAlloc_672_, 3, v_fst_616_);
lean_ctor_set(v_reuseFailAlloc_672_, 4, v_snd_617_);
lean_ctor_set(v_reuseFailAlloc_672_, 5, v_snd_613_);
v___x_670_ = v_reuseFailAlloc_672_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
lean_object* v___x_671_; 
v___x_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
return v___x_671_;
}
}
}
}
v___jp_653_:
{
lean_object* v_path_654_; lean_object* v___x_655_; 
v_path_654_ = lean_ctor_get(v_base_601_, 3);
v___x_655_ = l_String_splitOnAux(v_path_654_, v___x_652_, v___x_605_, v___x_605_, v___x_605_, v___x_606_);
if (lean_obj_tag(v___x_655_) == 0)
{
v___y_634_ = v___x_652_;
goto v___jp_633_;
}
else
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_656_ = lean_array_mk(v___x_655_);
v___x_657_ = lean_array_pop(v___x_656_);
v___x_658_ = lean_array_to_list(v___x_657_);
v___x_659_ = l_String_intercalate(v___x_652_, v___x_658_);
v___x_660_ = lean_string_append(v___x_659_, v___x_652_);
v___y_634_ = v___x_660_;
goto v___jp_633_;
}
}
}
else
{
lean_object* v___x_677_; uint8_t v___x_678_; 
lean_dec(v_fst_616_);
v___x_677_ = lean_string_utf8_byte_size(v_s_602_);
v___x_678_ = lean_nat_dec_le(v___x_603_, v___x_677_);
if (v___x_678_ == 0)
{
lean_dec_ref(v_s_602_);
goto v___jp_618_;
}
else
{
lean_object* v___x_679_; uint8_t v___x_680_; 
v___x_679_ = ((lean_object*)(l_Lasm_UI_Url_parseRelative___closed__0));
v___x_680_ = lean_string_memcmp(v_s_602_, v___x_679_, v___x_605_, v___x_605_, v___x_603_);
lean_dec_ref(v_s_602_);
if (v___x_680_ == 0)
{
goto v___jp_618_;
}
else
{
lean_object* v_protocol_681_; lean_object* v_host_682_; lean_object* v_port_683_; lean_object* v_path_684_; lean_object* v_query_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
lean_dec(v_snd_617_);
v_protocol_681_ = lean_ctor_get(v_base_601_, 0);
v_host_682_ = lean_ctor_get(v_base_601_, 1);
v_port_683_ = lean_ctor_get(v_base_601_, 2);
v_path_684_ = lean_ctor_get(v_base_601_, 3);
v_query_685_ = lean_ctor_get(v_base_601_, 4);
v_isSharedCheck_693_ = !lean_is_exclusive(v_base_601_);
if (v_isSharedCheck_693_ == 0)
{
lean_object* v_unused_694_; 
v_unused_694_ = lean_ctor_get(v_base_601_, 5);
lean_dec(v_unused_694_);
v___x_687_ = v_base_601_;
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_query_685_);
lean_inc(v_path_684_);
lean_inc(v_port_683_);
lean_inc(v_host_682_);
lean_inc(v_protocol_681_);
lean_dec(v_base_601_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 5, v_snd_613_);
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_protocol_681_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_host_682_);
lean_ctor_set(v_reuseFailAlloc_692_, 2, v_port_683_);
lean_ctor_set(v_reuseFailAlloc_692_, 3, v_path_684_);
lean_ctor_set(v_reuseFailAlloc_692_, 4, v_query_685_);
lean_ctor_set(v_reuseFailAlloc_692_, 5, v_snd_613_);
v___x_690_ = v_reuseFailAlloc_692_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
}
}
}
}
v___jp_618_:
{
lean_object* v_protocol_619_; lean_object* v_host_620_; lean_object* v_port_621_; lean_object* v_path_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_630_; 
v_protocol_619_ = lean_ctor_get(v_base_601_, 0);
v_host_620_ = lean_ctor_get(v_base_601_, 1);
v_port_621_ = lean_ctor_get(v_base_601_, 2);
v_path_622_ = lean_ctor_get(v_base_601_, 3);
v_isSharedCheck_630_ = !lean_is_exclusive(v_base_601_);
if (v_isSharedCheck_630_ == 0)
{
lean_object* v_unused_631_; lean_object* v_unused_632_; 
v_unused_631_ = lean_ctor_get(v_base_601_, 5);
lean_dec(v_unused_631_);
v_unused_632_ = lean_ctor_get(v_base_601_, 4);
lean_dec(v_unused_632_);
v___x_624_ = v_base_601_;
v_isShared_625_ = v_isSharedCheck_630_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_path_622_);
lean_inc(v_port_621_);
lean_inc(v_host_620_);
lean_inc(v_protocol_619_);
lean_dec(v_base_601_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_630_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 5, v_snd_613_);
lean_ctor_set(v___x_624_, 4, v_snd_617_);
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_protocol_619_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v_host_620_);
lean_ctor_set(v_reuseFailAlloc_629_, 2, v_port_621_);
lean_ctor_set(v_reuseFailAlloc_629_, 3, v_path_622_);
lean_ctor_set(v_reuseFailAlloc_629_, 4, v_snd_617_);
lean_ctor_set(v_reuseFailAlloc_629_, 5, v_snd_613_);
v___x_627_ = v_reuseFailAlloc_629_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
lean_object* v___x_628_; 
v___x_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
return v___x_628_;
}
}
}
v___jp_633_:
{
lean_object* v_protocol_635_; lean_object* v_host_636_; lean_object* v_port_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_646_; 
v_protocol_635_ = lean_ctor_get(v_base_601_, 0);
v_host_636_ = lean_ctor_get(v_base_601_, 1);
v_port_637_ = lean_ctor_get(v_base_601_, 2);
v_isSharedCheck_646_ = !lean_is_exclusive(v_base_601_);
if (v_isSharedCheck_646_ == 0)
{
lean_object* v_unused_647_; lean_object* v_unused_648_; lean_object* v_unused_649_; 
v_unused_647_ = lean_ctor_get(v_base_601_, 5);
lean_dec(v_unused_647_);
v_unused_648_ = lean_ctor_get(v_base_601_, 4);
lean_dec(v_unused_648_);
v_unused_649_ = lean_ctor_get(v_base_601_, 3);
lean_dec(v_unused_649_);
v___x_639_ = v_base_601_;
v_isShared_640_ = v_isSharedCheck_646_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_port_637_);
lean_inc(v_host_636_);
lean_inc(v_protocol_635_);
lean_dec(v_base_601_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_646_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_641_; lean_object* v___x_643_; 
v___x_641_ = lean_string_append(v___y_634_, v_fst_616_);
lean_dec(v_fst_616_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 5, v_snd_613_);
lean_ctor_set(v___x_639_, 4, v_snd_617_);
lean_ctor_set(v___x_639_, 3, v___x_641_);
v___x_643_ = v___x_639_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_protocol_635_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v_host_636_);
lean_ctor_set(v_reuseFailAlloc_645_, 2, v_port_637_);
lean_ctor_set(v_reuseFailAlloc_645_, 3, v___x_641_);
lean_ctor_set(v_reuseFailAlloc_645_, 4, v_snd_617_);
lean_ctor_set(v_reuseFailAlloc_645_, 5, v_snd_613_);
v___x_643_ = v_reuseFailAlloc_645_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_644_; 
v___x_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
return v___x_644_;
}
}
}
}
else
{
lean_object* v___x_695_; 
lean_dec_ref(v_base_601_);
v___x_695_ = l_Lasm_UI_Url_parse(v_s_602_);
return v___x_695_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_origin(lean_object* v_u_697_){
_start:
{
lean_object* v_protocol_698_; lean_object* v_host_699_; lean_object* v_port_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v_protocol_698_ = lean_ctor_get(v_u_697_, 0);
lean_inc_ref(v_protocol_698_);
v_host_699_ = lean_ctor_get(v_u_697_, 1);
lean_inc_ref(v_host_699_);
v_port_700_ = lean_ctor_get(v_u_697_, 2);
lean_inc(v_port_700_);
lean_dec_ref(v_u_697_);
v___x_701_ = ((lean_object*)(l_Lasm_UI_Url_origin___closed__0));
v___x_702_ = lean_string_append(v_protocol_698_, v___x_701_);
v___x_703_ = lean_string_append(v___x_702_, v_host_699_);
lean_dec_ref(v_host_699_);
if (lean_obj_tag(v_port_700_) == 0)
{
return v___x_703_;
}
else
{
lean_object* v_val_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v_val_704_ = lean_ctor_get(v_port_700_, 0);
lean_inc(v_val_704_);
lean_dec_ref_known(v_port_700_, 1);
v___x_705_ = ((lean_object*)(l_Lasm_UI_Url_parse___closed__1));
v___x_706_ = l_Nat_reprFast(v_val_704_);
v___x_707_ = lean_string_append(v___x_705_, v___x_706_);
lean_dec_ref(v___x_706_);
v___x_708_ = lean_string_append(v___x_703_, v___x_707_);
lean_dec_ref(v___x_707_);
return v___x_708_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_pathAndQuery(lean_object* v_u_710_){
_start:
{
lean_object* v_path_711_; lean_object* v_query_712_; lean_object* v_fragment_713_; lean_object* v___y_715_; 
v_path_711_ = lean_ctor_get(v_u_710_, 3);
lean_inc_ref(v_path_711_);
v_query_712_ = lean_ctor_get(v_u_710_, 4);
lean_inc(v_query_712_);
v_fragment_713_ = lean_ctor_get(v_u_710_, 5);
lean_inc(v_fragment_713_);
lean_dec_ref(v_u_710_);
if (lean_obj_tag(v_query_712_) == 0)
{
lean_object* v___x_721_; 
v___x_721_ = ((lean_object*)(l_Lasm_UI_instInhabitedUrl_default___closed__1));
v___y_715_ = v___x_721_;
goto v___jp_714_;
}
else
{
lean_object* v_val_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v_val_722_ = lean_ctor_get(v_query_712_, 0);
lean_inc(v_val_722_);
lean_dec_ref_known(v_query_712_, 1);
v___x_723_ = ((lean_object*)(l_Lasm_UI_Url_pathAndQuery___closed__0));
v___x_724_ = lean_string_append(v___x_723_, v_val_722_);
lean_dec(v_val_722_);
v___y_715_ = v___x_724_;
goto v___jp_714_;
}
v___jp_714_:
{
lean_object* v___x_716_; 
v___x_716_ = lean_string_append(v_path_711_, v___y_715_);
lean_dec_ref(v___y_715_);
if (lean_obj_tag(v_fragment_713_) == 0)
{
return v___x_716_;
}
else
{
lean_object* v_val_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v_val_717_ = lean_ctor_get(v_fragment_713_, 0);
lean_inc(v_val_717_);
lean_dec_ref_known(v_fragment_713_, 1);
v___x_718_ = ((lean_object*)(l_Lasm_UI_Url_parseRelative___closed__0));
v___x_719_ = lean_string_append(v___x_718_, v_val_717_);
lean_dec(v_val_717_);
v___x_720_ = lean_string_append(v___x_716_, v___x_719_);
lean_dec_ref(v___x_719_);
return v___x_720_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_toString(lean_object* v_u_725_){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
lean_inc_ref(v_u_725_);
v___x_726_ = l_Lasm_UI_Url_origin(v_u_725_);
v___x_727_ = l_Lasm_UI_Url_pathAndQuery(v_u_725_);
v___x_728_ = lean_string_append(v___x_726_, v___x_727_);
lean_dec_ref(v___x_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Url_segments_spec__0(lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
if (lean_obj_tag(v_a_731_) == 0)
{
lean_object* v___x_733_; 
v___x_733_ = lean_array_to_list(v_a_732_);
return v___x_733_;
}
else
{
lean_object* v_head_734_; lean_object* v_tail_735_; lean_object* v_val_737_; lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v_head_734_ = lean_ctor_get(v_a_731_, 0);
lean_inc(v_head_734_);
v_tail_735_ = lean_ctor_get(v_a_731_, 1);
lean_inc(v_tail_735_);
lean_dec_ref_known(v_a_731_, 2);
v___x_740_ = lean_string_utf8_byte_size(v_head_734_);
v___x_741_ = lean_unsigned_to_nat(0u);
v___x_742_ = lean_nat_dec_eq(v___x_740_, v___x_741_);
if (v___x_742_ == 0)
{
lean_object* v___x_743_; 
lean_inc(v_head_734_);
v___x_743_ = l_Lasm_UI_Url_percentDecode(v_head_734_, v___x_742_);
if (lean_obj_tag(v___x_743_) == 0)
{
v_val_737_ = v_head_734_;
goto v___jp_736_;
}
else
{
lean_object* v_val_744_; 
lean_dec(v_head_734_);
v_val_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_val_744_);
lean_dec_ref_known(v___x_743_, 1);
v_val_737_ = v_val_744_;
goto v___jp_736_;
}
}
else
{
lean_dec(v_head_734_);
v_a_731_ = v_tail_735_;
goto _start;
}
v___jp_736_:
{
lean_object* v___x_738_; 
v___x_738_ = lean_array_push(v_a_732_, v_val_737_);
v_a_731_ = v_tail_735_;
v_a_732_ = v___x_738_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_segments(lean_object* v_u_748_){
_start:
{
lean_object* v_path_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v_path_749_ = lean_ctor_get(v_u_748_, 3);
v___x_750_ = ((lean_object*)(l_Lasm_UI_instInhabitedUrl_default___closed__2));
v___x_751_ = lean_unsigned_to_nat(0u);
v___x_752_ = lean_box(0);
v___x_753_ = l_String_splitOnAux(v_path_749_, v___x_750_, v___x_751_, v___x_751_, v___x_751_, v___x_752_);
v___x_754_ = ((lean_object*)(l_Lasm_UI_Url_segments___closed__0));
v___x_755_ = l_List_filterMapTR_go___at___00Lasm_UI_Url_segments_spec__0(v___x_753_, v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_segments___boxed(lean_object* v_u_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lasm_UI_Url_segments(v_u_756_);
lean_dec_ref(v_u_756_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Url_params_spec__0(lean_object* v_a_758_, lean_object* v_a_759_){
_start:
{
if (lean_obj_tag(v_a_758_) == 0)
{
lean_object* v___x_760_; 
v___x_760_ = lean_array_to_list(v_a_759_);
return v___x_760_;
}
else
{
lean_object* v_head_761_; lean_object* v_tail_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_794_; 
v_head_761_ = lean_ctor_get(v_a_758_, 0);
v_tail_762_ = lean_ctor_get(v_a_758_, 1);
v_isSharedCheck_794_ = !lean_is_exclusive(v_a_758_);
if (v_isSharedCheck_794_ == 0)
{
v___x_764_ = v_a_758_;
v_isShared_765_ = v_isSharedCheck_794_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_tail_762_);
lean_inc(v_head_761_);
lean_dec(v_a_758_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_794_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___x_774_; lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_774_ = lean_string_utf8_byte_size(v_head_761_);
v___x_775_ = lean_unsigned_to_nat(0u);
v___x_776_ = lean_nat_dec_eq(v___x_774_, v___x_775_);
if (v___x_776_ == 0)
{
uint32_t v___x_777_; lean_object* v___x_778_; lean_object* v_fst_779_; lean_object* v_snd_780_; uint8_t v___x_781_; lean_object* v___y_783_; lean_object* v___y_784_; lean_object* v___y_788_; 
v___x_777_ = 61;
v___x_778_ = l___private_Lasm_UI_Url_0__Lasm_UI_Url_splitOnce(v_head_761_, v___x_777_);
v_fst_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_fst_779_);
v_snd_780_ = lean_ctor_get(v___x_778_, 1);
lean_inc(v_snd_780_);
lean_dec_ref(v___x_778_);
v___x_781_ = 1;
if (lean_obj_tag(v_snd_780_) == 0)
{
lean_object* v___x_791_; 
v___x_791_ = ((lean_object*)(l_Lasm_UI_instInhabitedUrl_default___closed__1));
v___y_788_ = v___x_791_;
goto v___jp_787_;
}
else
{
lean_object* v_val_792_; 
v_val_792_ = lean_ctor_get(v_snd_780_, 0);
lean_inc(v_val_792_);
lean_dec_ref_known(v_snd_780_, 1);
v___y_788_ = v_val_792_;
goto v___jp_787_;
}
v___jp_782_:
{
lean_object* v___x_785_; 
lean_inc_ref(v___y_783_);
v___x_785_ = l_Lasm_UI_Url_percentDecode(v___y_783_, v___x_781_);
if (lean_obj_tag(v___x_785_) == 0)
{
v___y_767_ = v___y_784_;
v___y_768_ = v___y_783_;
goto v___jp_766_;
}
else
{
lean_object* v_val_786_; 
lean_dec_ref(v___y_783_);
v_val_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_val_786_);
lean_dec_ref_known(v___x_785_, 1);
v___y_767_ = v___y_784_;
v___y_768_ = v_val_786_;
goto v___jp_766_;
}
}
v___jp_787_:
{
lean_object* v___x_789_; 
lean_inc(v_fst_779_);
v___x_789_ = l_Lasm_UI_Url_percentDecode(v_fst_779_, v___x_781_);
if (lean_obj_tag(v___x_789_) == 0)
{
v___y_783_ = v___y_788_;
v___y_784_ = v_fst_779_;
goto v___jp_782_;
}
else
{
lean_object* v_val_790_; 
lean_dec(v_fst_779_);
v_val_790_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_val_790_);
lean_dec_ref_known(v___x_789_, 1);
v___y_783_ = v___y_788_;
v___y_784_ = v_val_790_;
goto v___jp_782_;
}
}
}
else
{
lean_del_object(v___x_764_);
lean_dec(v_head_761_);
v_a_758_ = v_tail_762_;
goto _start;
}
v___jp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_765_ == 0)
{
lean_ctor_set_tag(v___x_764_, 0);
lean_ctor_set(v___x_764_, 1, v___y_768_);
lean_ctor_set(v___x_764_, 0, v___y_767_);
v___x_770_ = v___x_764_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___y_767_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v___y_768_);
v___x_770_ = v_reuseFailAlloc_773_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
lean_object* v___x_771_; 
v___x_771_ = lean_array_push(v_a_759_, v___x_770_);
v_a_758_ = v_tail_762_;
v_a_759_ = v___x_771_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_params(lean_object* v_u_798_){
_start:
{
lean_object* v_query_799_; 
v_query_799_ = lean_ctor_get(v_u_798_, 4);
if (lean_obj_tag(v_query_799_) == 0)
{
lean_object* v___x_800_; 
v___x_800_ = lean_box(0);
return v___x_800_;
}
else
{
lean_object* v_val_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v_val_801_ = lean_ctor_get(v_query_799_, 0);
v___x_802_ = ((lean_object*)(l_Lasm_UI_Url_params___closed__0));
v___x_803_ = lean_unsigned_to_nat(0u);
v___x_804_ = lean_box(0);
v___x_805_ = l_String_splitOnAux(v_val_801_, v___x_802_, v___x_803_, v___x_803_, v___x_803_, v___x_804_);
v___x_806_ = ((lean_object*)(l_Lasm_UI_Url_params___closed__1));
v___x_807_ = l_List_filterMapTR_go___at___00Lasm_UI_Url_params_spec__0(v___x_805_, v___x_806_);
return v___x_807_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_params___boxed(lean_object* v_u_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Lasm_UI_Url_params(v_u_808_);
lean_dec_ref(v_u_808_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0___redArg(lean_object* v_x_810_, lean_object* v_x_811_){
_start:
{
if (lean_obj_tag(v_x_811_) == 0)
{
lean_object* v___x_812_; 
v___x_812_ = lean_box(0);
return v___x_812_;
}
else
{
lean_object* v_head_813_; lean_object* v_tail_814_; lean_object* v_fst_815_; lean_object* v_snd_816_; uint8_t v___x_817_; 
v_head_813_ = lean_ctor_get(v_x_811_, 0);
v_tail_814_ = lean_ctor_get(v_x_811_, 1);
v_fst_815_ = lean_ctor_get(v_head_813_, 0);
v_snd_816_ = lean_ctor_get(v_head_813_, 1);
v___x_817_ = lean_string_dec_eq(v_x_810_, v_fst_815_);
if (v___x_817_ == 0)
{
v_x_811_ = v_tail_814_;
goto _start;
}
else
{
lean_object* v___x_819_; 
lean_inc(v_snd_816_);
v___x_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_819_, 0, v_snd_816_);
return v___x_819_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0___redArg___boxed(lean_object* v_x_820_, lean_object* v_x_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0___redArg(v_x_820_, v_x_821_);
lean_dec(v_x_821_);
lean_dec_ref(v_x_820_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_param_x3f(lean_object* v_u_823_, lean_object* v_name_824_){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_825_ = l_Lasm_UI_Url_params(v_u_823_);
v___x_826_ = l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0___redArg(v_name_824_, v___x_825_);
lean_dec(v___x_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_param_x3f___boxed(lean_object* v_u_827_, lean_object* v_name_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Lasm_UI_Url_param_x3f(v_u_827_, v_name_828_);
lean_dec_ref(v_name_828_);
lean_dec_ref(v_u_827_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0(lean_object* v_00_u03b2_830_, lean_object* v_x_831_, lean_object* v_x_832_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0___redArg(v_x_831_, v_x_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0___boxed(lean_object* v_00_u03b2_834_, lean_object* v_x_835_, lean_object* v_x_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_List_lookup___at___00Lasm_UI_Url_param_x3f_spec__0(v_00_u03b2_834_, v_x_835_, v_x_836_);
lean_dec(v_x_836_);
lean_dec_ref(v_x_835_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Url_build_spec__0(lean_object* v_a_838_, lean_object* v_a_839_){
_start:
{
if (lean_obj_tag(v_a_838_) == 0)
{
lean_object* v___x_840_; 
v___x_840_ = l_List_reverse___redArg(v_a_839_);
return v___x_840_;
}
else
{
lean_object* v_head_841_; lean_object* v_tail_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_851_; 
v_head_841_ = lean_ctor_get(v_a_838_, 0);
v_tail_842_ = lean_ctor_get(v_a_838_, 1);
v_isSharedCheck_851_ = !lean_is_exclusive(v_a_838_);
if (v_isSharedCheck_851_ == 0)
{
v___x_844_ = v_a_838_;
v_isShared_845_ = v_isSharedCheck_851_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_tail_842_);
lean_inc(v_head_841_);
lean_dec(v_a_838_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_851_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_846_; lean_object* v___x_848_; 
v___x_846_ = l_Lasm_UI_Url_percentEncode(v_head_841_);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 1, v_a_839_);
lean_ctor_set(v___x_844_, 0, v___x_846_);
v___x_848_ = v___x_844_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_846_);
lean_ctor_set(v_reuseFailAlloc_850_, 1, v_a_839_);
v___x_848_ = v_reuseFailAlloc_850_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
v_a_838_ = v_tail_842_;
v_a_839_ = v___x_848_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Url_build_spec__1(lean_object* v_a_853_, lean_object* v_a_854_){
_start:
{
if (lean_obj_tag(v_a_853_) == 0)
{
lean_object* v___x_855_; 
v___x_855_ = l_List_reverse___redArg(v_a_854_);
return v___x_855_;
}
else
{
lean_object* v_head_856_; lean_object* v_tail_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_872_; 
v_head_856_ = lean_ctor_get(v_a_853_, 0);
v_tail_857_ = lean_ctor_get(v_a_853_, 1);
v_isSharedCheck_872_ = !lean_is_exclusive(v_a_853_);
if (v_isSharedCheck_872_ == 0)
{
v___x_859_ = v_a_853_;
v_isShared_860_ = v_isSharedCheck_872_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_tail_857_);
lean_inc(v_head_856_);
lean_dec(v_a_853_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_872_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v_fst_861_; lean_object* v_snd_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_869_; 
v_fst_861_ = lean_ctor_get(v_head_856_, 0);
lean_inc(v_fst_861_);
v_snd_862_ = lean_ctor_get(v_head_856_, 1);
lean_inc(v_snd_862_);
lean_dec(v_head_856_);
v___x_863_ = l_Lasm_UI_Url_percentEncode(v_fst_861_);
v___x_864_ = ((lean_object*)(l_List_mapTR_loop___at___00Lasm_UI_Url_build_spec__1___closed__0));
v___x_865_ = lean_string_append(v___x_863_, v___x_864_);
v___x_866_ = l_Lasm_UI_Url_percentEncode(v_snd_862_);
v___x_867_ = lean_string_append(v___x_865_, v___x_866_);
lean_dec_ref(v___x_866_);
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 1, v_a_854_);
lean_ctor_set(v___x_859_, 0, v___x_867_);
v___x_869_ = v___x_859_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v_a_854_);
v___x_869_ = v_reuseFailAlloc_871_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
v_a_853_ = v_tail_857_;
v_a_854_ = v___x_869_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Url_build(lean_object* v_segments_873_, lean_object* v_params_874_){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v_path_879_; 
v___x_875_ = ((lean_object*)(l_Lasm_UI_instInhabitedUrl_default___closed__2));
v___x_876_ = lean_box(0);
v___x_877_ = l_List_mapTR_loop___at___00Lasm_UI_Url_build_spec__0(v_segments_873_, v___x_876_);
v___x_878_ = l_String_intercalate(v___x_875_, v___x_877_);
v_path_879_ = lean_string_append(v___x_875_, v___x_878_);
lean_dec_ref(v___x_878_);
if (lean_obj_tag(v_params_874_) == 0)
{
return v_path_879_;
}
else
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_880_ = ((lean_object*)(l_Lasm_UI_Url_pathAndQuery___closed__0));
v___x_881_ = lean_string_append(v_path_879_, v___x_880_);
v___x_882_ = ((lean_object*)(l_Lasm_UI_Url_params___closed__0));
v___x_883_ = l_List_mapTR_loop___at___00Lasm_UI_Url_build_spec__1(v_params_874_, v___x_876_);
v___x_884_ = l_String_intercalate(v___x_882_, v___x_883_);
v___x_885_ = lean_string_append(v___x_881_, v___x_884_);
lean_dec_ref(v___x_884_);
return v___x_885_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Url(uint8_t builtin) {
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
l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___boxed__const__1 = _init_l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___boxed__const__1();
lean_mark_persistent(l___private_Init_While_0__repeatM_erased___at___00Lasm_UI_Url_percentDecode_spec__0___redArg___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
