// Lean compiler output
// Module: Lasm.UI.Render
// Imports: public import Init public meta import Init public import Lasm.UI.Html public import Lasm.UI.Elements
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lasm_UI_Attr_key___redArg(lean_object*);
uint8_t l_Lasm_UI_instDecidableEqAttrKey_decEq(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
extern lean_object* l_Lasm_UI_voidTags;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "&gt;"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "&lt;"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "&amp;"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_UI_Render_escapeText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_UI_Render_escapeText___closed__0 = (const lean_object*)&l_Lasm_UI_Render_escapeText___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Render_escapeText(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "&quot;"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_escapeAttr(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "className"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__0 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__0_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "htmlFor"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__1 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__1_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__2 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__2_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "checked"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__3 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__3_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "selected"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__4 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__4_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "disabled"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__5 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__5_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hidden"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__6 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__6_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "readOnly"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__7 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__7_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "required"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__8 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__8_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "multiple"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__9 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__9_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "autofocus"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__10 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__10_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__11 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__11_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__12 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__12_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "placeholder"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__13 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__13_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "href"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__14 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__14_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "src"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__15 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__15_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__16 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__16_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__17 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__17_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__18 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__18_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tabIndex"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__19 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__19_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "open"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__20 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__20_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "muted"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__21 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__21_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "controls"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__22 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__22_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__22_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__23 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__23_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__21_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__24 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__24_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__20_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__25 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__25_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tabindex"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__26 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__26_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__26_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__27 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__27_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__18_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__28 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__28_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__17_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__29 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__29_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__16_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__30 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__30_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__15_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__31 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__31_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__14_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__32 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__32_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__13_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__33 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__33_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__12_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__34 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__34_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__11_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__35 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__35_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__10_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__36 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__36_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__9_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__37 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__37_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__8_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__38 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__38_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "readonly"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__39 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__39_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__39_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__40 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__40_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__6_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__41 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__41_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__5_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__42 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__42_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__4_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__43 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__43_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__3_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__44 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__44_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__2_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__45 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__45_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "for"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__46 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__46_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__46_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__47 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__47_value;
static const lean_string_object l_Lasm_UI_Render_propAttribute___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__48 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__48_value;
static const lean_ctor_object l_Lasm_UI_Render_propAttribute___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_propAttribute___closed__48_value)}};
static const lean_object* l_Lasm_UI_Render_propAttribute___closed__49 = (const lean_object*)&l_Lasm_UI_Render_propAttribute___closed__49_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Render_propAttribute(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_propAttribute___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lasm_UI_Render_finalAttrs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lasm_UI_Render_finalAttrs_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_finalAttrs_spec__1___redArg(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_UI_Render_finalAttrs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Render_finalAttrs___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Render_finalAttrs___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Render_finalAttrs___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_finalAttrs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_finalAttrs_spec__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__0 = (const lean_object*)&l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__0_value;
static const lean_string_object l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=\""};
static const lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__1 = (const lean_object*)&l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__2 = (const lean_object*)&l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "innerHTML"};
static const lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__3 = (const lean_object*)&l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__3_value;
static const lean_string_object l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "textContent"};
static const lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__4 = (const lean_object*)&l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__4_value;
static const lean_string_object l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "textarea"};
static const lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__5 = (const lean_object*)&l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__5_value;
static const lean_string_object l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " value=\""};
static const lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__6 = (const lean_object*)&l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__6_value;
static const lean_string_object l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__7 = (const lean_object*)&l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__7_value;
static const lean_string_object l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__8 = (const lean_object*)&l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_UI_Render_parts___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Render_escapeText___closed__0_value),((lean_object*)&l_Lasm_UI_Render_escapeText___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Render_parts___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Render_parts___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Render_rawText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "script"};
static const lean_object* l_Lasm_UI_Render_rawText___closed__0 = (const lean_object*)&l_Lasm_UI_Render_rawText___closed__0_value;
static const lean_string_object l_Lasm_UI_Render_rawText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* l_Lasm_UI_Render_rawText___closed__1 = (const lean_object*)&l_Lasm_UI_Render_rawText___closed__1_value;
LEAN_EXPORT uint8_t l_Lasm_UI_Render_rawText(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_rawText___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lasm_UI_Render_node_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lasm_UI_Render_node_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "</"};
static const lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1 = (const lean_object*)&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<\\/"};
static const lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg___closed__0 = (const lean_object*)&l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Render_children___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<!---->"};
static const lean_object* l_Lasm_UI_Render_children___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Render_children___redArg___closed__0_value;
static const lean_string_object l_Lasm_UI_Render_node___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* l_Lasm_UI_Render_node___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Render_node___redArg___closed__0_value;
static const lean_string_object l_Lasm_UI_Render_node___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* l_Lasm_UI_Render_node___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_Render_node___redArg___closed__1_value;
static const lean_string_object l_Lasm_UI_Render_node___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " style=\""};
static const lean_object* l_Lasm_UI_Render_node___redArg___closed__2 = (const lean_object*)&l_Lasm_UI_Render_node___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Render_node___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Render_node(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_parts_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_parts_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__List_map__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__List_map__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_children_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_children_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_render___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_render(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_renderPage___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 125, .m_capacity = 125, .m_length = 124, .m_data = "<!doctype html><html><head><meta charset=\"utf-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"><title>"};
static const lean_object* l_Lasm_UI_renderPage___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_renderPage___redArg___closed__0_value;
static const lean_string_object l_Lasm_UI_renderPage___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "</title>"};
static const lean_object* l_Lasm_UI_renderPage___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_renderPage___redArg___closed__1_value;
static const lean_string_object l_Lasm_UI_renderPage___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "</head><body><div id=\""};
static const lean_object* l_Lasm_UI_renderPage___redArg___closed__2 = (const lean_object*)&l_Lasm_UI_renderPage___redArg___closed__2_value;
static const lean_string_object l_Lasm_UI_renderPage___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\">"};
static const lean_object* l_Lasm_UI_renderPage___redArg___closed__3 = (const lean_object*)&l_Lasm_UI_renderPage___redArg___closed__3_value;
static const lean_string_object l_Lasm_UI_renderPage___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "</div></body></html>"};
static const lean_object* l_Lasm_UI_renderPage___redArg___closed__4 = (const lean_object*)&l_Lasm_UI_renderPage___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg(lean_object* v___x_4_, lean_object* v_s_5_, lean_object* v_a_6_, lean_object* v_b_7_){
_start:
{
uint8_t v_decide_8_; 
v_decide_8_ = lean_nat_dec_eq(v_a_6_, v___x_4_);
if (v_decide_8_ == 0)
{
uint32_t v___x_9_; lean_object* v___x_10_; uint32_t v___x_11_; uint8_t v___x_12_; 
v___x_9_ = lean_string_utf8_get_fast(v_s_5_, v_a_6_);
v___x_10_ = lean_string_utf8_next_fast(v_s_5_, v_a_6_);
lean_dec(v_a_6_);
v___x_11_ = 38;
v___x_12_ = lean_uint32_dec_eq(v___x_9_, v___x_11_);
if (v___x_12_ == 0)
{
uint32_t v___x_13_; uint8_t v___x_14_; 
v___x_13_ = 60;
v___x_14_ = lean_uint32_dec_eq(v___x_9_, v___x_13_);
if (v___x_14_ == 0)
{
uint32_t v___x_15_; uint8_t v___x_16_; 
v___x_15_ = 62;
v___x_16_ = lean_uint32_dec_eq(v___x_9_, v___x_15_);
if (v___x_16_ == 0)
{
lean_object* v___x_17_; 
v___x_17_ = lean_string_push(v_b_7_, v___x_9_);
v_a_6_ = v___x_10_;
v_b_7_ = v___x_17_;
goto _start;
}
else
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__0));
v___x_20_ = lean_string_append(v_b_7_, v___x_19_);
v_a_6_ = v___x_10_;
v_b_7_ = v___x_20_;
goto _start;
}
}
else
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__1));
v___x_23_ = lean_string_append(v_b_7_, v___x_22_);
v_a_6_ = v___x_10_;
v_b_7_ = v___x_23_;
goto _start;
}
}
else
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__2));
v___x_26_ = lean_string_append(v_b_7_, v___x_25_);
v_a_6_ = v___x_10_;
v_b_7_ = v___x_26_;
goto _start;
}
}
else
{
lean_dec(v_a_6_);
return v_b_7_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___boxed(lean_object* v___x_28_, lean_object* v_s_29_, lean_object* v_a_30_, lean_object* v_b_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg(v___x_28_, v_s_29_, v_a_30_, v_b_31_);
lean_dec_ref(v_s_29_);
lean_dec(v___x_28_);
return v_res_32_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___redArg(lean_object* v_s_33_, lean_object* v_a_34_, uint8_t v_b_35_){
_start:
{
lean_object* v_str_36_; lean_object* v_startInclusive_37_; lean_object* v_endExclusive_38_; lean_object* v___x_39_; uint8_t v_decide_40_; 
v_str_36_ = lean_ctor_get(v_s_33_, 0);
v_startInclusive_37_ = lean_ctor_get(v_s_33_, 1);
v_endExclusive_38_ = lean_ctor_get(v_s_33_, 2);
v___x_39_ = lean_nat_sub(v_endExclusive_38_, v_startInclusive_37_);
v_decide_40_ = lean_nat_dec_eq(v_a_34_, v___x_39_);
lean_dec(v___x_39_);
if (v_decide_40_ == 0)
{
lean_object* v___x_41_; uint32_t v___x_42_; uint32_t v___x_43_; uint8_t v___x_44_; 
v___x_41_ = lean_nat_add(v_startInclusive_37_, v_a_34_);
lean_dec(v_a_34_);
v___x_42_ = lean_string_utf8_get_fast(v_str_36_, v___x_41_);
v___x_43_ = 38;
v___x_44_ = lean_uint32_dec_eq(v___x_42_, v___x_43_);
if (v___x_44_ == 0)
{
uint32_t v___x_45_; uint8_t v___x_46_; 
v___x_45_ = 60;
v___x_46_ = lean_uint32_dec_eq(v___x_42_, v___x_45_);
if (v___x_46_ == 0)
{
uint32_t v___x_47_; uint8_t v___x_48_; 
v___x_47_ = 62;
v___x_48_ = lean_uint32_dec_eq(v___x_42_, v___x_47_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_string_utf8_next_fast(v_str_36_, v___x_41_);
lean_dec(v___x_41_);
v___x_50_ = lean_nat_sub(v___x_49_, v_startInclusive_37_);
v_a_34_ = v___x_50_;
v_b_35_ = v___x_48_;
goto _start;
}
else
{
lean_dec(v___x_41_);
return v___x_48_;
}
}
else
{
lean_dec(v___x_41_);
return v___x_46_;
}
}
else
{
lean_dec(v___x_41_);
return v___x_44_;
}
}
else
{
lean_dec(v_a_34_);
return v_b_35_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___redArg___boxed(lean_object* v_s_52_, lean_object* v_a_53_, lean_object* v_b_54_){
_start:
{
uint8_t v_b_boxed_55_; uint8_t v_res_56_; lean_object* v_r_57_; 
v_b_boxed_55_ = lean_unbox(v_b_54_);
v_res_56_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___redArg(v_s_52_, v_a_53_, v_b_boxed_55_);
lean_dec_ref(v_s_52_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0(lean_object* v_s_58_){
_start:
{
lean_object* v_searcher_59_; uint8_t v___x_60_; uint8_t v___x_61_; 
v_searcher_59_ = lean_unsigned_to_nat(0u);
v___x_60_ = 0;
v___x_61_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___redArg(v_s_58_, v_searcher_59_, v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0___boxed(lean_object* v_s_62_){
_start:
{
uint8_t v_res_63_; lean_object* v_r_64_; 
v_res_63_ = l_String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0(v_s_62_);
lean_dec_ref(v_s_62_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_escapeText(lean_object* v_s_66_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; uint8_t v___x_70_; 
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = lean_string_utf8_byte_size(v_s_66_);
lean_inc_ref(v_s_66_);
v___x_69_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_69_, 0, v_s_66_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_68_);
v___x_70_ = l_String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0(v___x_69_);
lean_dec_ref_known(v___x_69_, 3);
if (v___x_70_ == 0)
{
return v_s_66_;
}
else
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___x_72_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg(v___x_68_, v_s_66_, v___x_67_, v___x_71_);
lean_dec_ref(v_s_66_);
return v___x_72_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1(lean_object* v___x_73_, lean_object* v___x_74_, lean_object* v_s_75_, lean_object* v_inst_76_, lean_object* v_R_77_, lean_object* v_a_78_, lean_object* v_b_79_, lean_object* v_c_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg(v___x_74_, v_s_75_, v_a_78_, v_b_79_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___boxed(lean_object* v___x_82_, lean_object* v___x_83_, lean_object* v_s_84_, lean_object* v_inst_85_, lean_object* v_R_86_, lean_object* v_a_87_, lean_object* v_b_88_, lean_object* v_c_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1(v___x_82_, v___x_83_, v_s_84_, v_inst_85_, v_R_86_, v_a_87_, v_b_88_, v_c_89_);
lean_dec_ref(v_s_84_);
lean_dec(v___x_83_);
lean_dec_ref(v___x_82_);
return v_res_90_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0(lean_object* v_s_91_, lean_object* v_inst_92_, lean_object* v_R_93_, lean_object* v_a_94_, uint8_t v_b_95_, lean_object* v_c_96_){
_start:
{
uint8_t v___x_97_; 
v___x_97_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___redArg(v_s_91_, v_a_94_, v_b_95_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___boxed(lean_object* v_s_98_, lean_object* v_inst_99_, lean_object* v_R_100_, lean_object* v_a_101_, lean_object* v_b_102_, lean_object* v_c_103_){
_start:
{
uint8_t v_b_boxed_104_; uint8_t v_res_105_; lean_object* v_r_106_; 
v_b_boxed_104_ = lean_unbox(v_b_102_);
v_res_105_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0(v_s_98_, v_inst_99_, v_R_100_, v_a_101_, v_b_boxed_104_, v_c_103_);
lean_dec_ref(v_s_98_);
v_r_106_ = lean_box(v_res_105_);
return v_r_106_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg(lean_object* v___x_108_, lean_object* v_s_109_, lean_object* v_a_110_, lean_object* v_b_111_){
_start:
{
uint8_t v_decide_112_; 
v_decide_112_ = lean_nat_dec_eq(v_a_110_, v___x_108_);
if (v_decide_112_ == 0)
{
uint32_t v___x_113_; lean_object* v___x_114_; uint32_t v___x_115_; uint8_t v___x_116_; 
v___x_113_ = lean_string_utf8_get_fast(v_s_109_, v_a_110_);
v___x_114_ = lean_string_utf8_next_fast(v_s_109_, v_a_110_);
lean_dec(v_a_110_);
v___x_115_ = 38;
v___x_116_ = lean_uint32_dec_eq(v___x_113_, v___x_115_);
if (v___x_116_ == 0)
{
uint32_t v___x_117_; uint8_t v___x_118_; 
v___x_117_ = 34;
v___x_118_ = lean_uint32_dec_eq(v___x_113_, v___x_117_);
if (v___x_118_ == 0)
{
uint32_t v___x_119_; uint8_t v___x_120_; 
v___x_119_ = 60;
v___x_120_ = lean_uint32_dec_eq(v___x_113_, v___x_119_);
if (v___x_120_ == 0)
{
uint32_t v___x_121_; uint8_t v___x_122_; 
v___x_121_ = 62;
v___x_122_ = lean_uint32_dec_eq(v___x_113_, v___x_121_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = lean_string_push(v_b_111_, v___x_113_);
v_a_110_ = v___x_114_;
v_b_111_ = v___x_123_;
goto _start;
}
else
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__0));
v___x_126_ = lean_string_append(v_b_111_, v___x_125_);
v_a_110_ = v___x_114_;
v_b_111_ = v___x_126_;
goto _start;
}
}
else
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__1));
v___x_129_ = lean_string_append(v_b_111_, v___x_128_);
v_a_110_ = v___x_114_;
v_b_111_ = v___x_129_;
goto _start;
}
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg___closed__0));
v___x_132_ = lean_string_append(v_b_111_, v___x_131_);
v_a_110_ = v___x_114_;
v_b_111_ = v___x_132_;
goto _start;
}
}
else
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__2));
v___x_135_ = lean_string_append(v_b_111_, v___x_134_);
v_a_110_ = v___x_114_;
v_b_111_ = v___x_135_;
goto _start;
}
}
else
{
lean_dec(v_a_110_);
return v_b_111_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg___boxed(lean_object* v___x_137_, lean_object* v_s_138_, lean_object* v_a_139_, lean_object* v_b_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg(v___x_137_, v_s_138_, v_a_139_, v_b_140_);
lean_dec_ref(v_s_138_);
lean_dec(v___x_137_);
return v_res_141_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg(lean_object* v_s_142_, lean_object* v_a_143_, uint8_t v_b_144_){
_start:
{
lean_object* v_str_145_; lean_object* v_startInclusive_146_; lean_object* v_endExclusive_147_; lean_object* v___x_148_; uint8_t v_decide_149_; 
v_str_145_ = lean_ctor_get(v_s_142_, 0);
v_startInclusive_146_ = lean_ctor_get(v_s_142_, 1);
v_endExclusive_147_ = lean_ctor_get(v_s_142_, 2);
v___x_148_ = lean_nat_sub(v_endExclusive_147_, v_startInclusive_146_);
v_decide_149_ = lean_nat_dec_eq(v_a_143_, v___x_148_);
lean_dec(v___x_148_);
if (v_decide_149_ == 0)
{
lean_object* v___x_150_; uint32_t v___x_151_; uint32_t v___x_152_; uint8_t v___x_153_; 
v___x_150_ = lean_nat_add(v_startInclusive_146_, v_a_143_);
lean_dec(v_a_143_);
v___x_151_ = lean_string_utf8_get_fast(v_str_145_, v___x_150_);
v___x_152_ = 38;
v___x_153_ = lean_uint32_dec_eq(v___x_151_, v___x_152_);
if (v___x_153_ == 0)
{
uint32_t v___x_154_; uint8_t v___x_155_; 
v___x_154_ = 34;
v___x_155_ = lean_uint32_dec_eq(v___x_151_, v___x_154_);
if (v___x_155_ == 0)
{
uint32_t v___x_156_; uint8_t v___x_157_; 
v___x_156_ = 60;
v___x_157_ = lean_uint32_dec_eq(v___x_151_, v___x_156_);
if (v___x_157_ == 0)
{
uint32_t v___x_158_; uint8_t v___x_159_; 
v___x_158_ = 62;
v___x_159_ = lean_uint32_dec_eq(v___x_151_, v___x_158_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_string_utf8_next_fast(v_str_145_, v___x_150_);
lean_dec(v___x_150_);
v___x_161_ = lean_nat_sub(v___x_160_, v_startInclusive_146_);
v_a_143_ = v___x_161_;
v_b_144_ = v___x_159_;
goto _start;
}
else
{
lean_dec(v___x_150_);
return v___x_159_;
}
}
else
{
lean_dec(v___x_150_);
return v___x_157_;
}
}
else
{
lean_dec(v___x_150_);
return v___x_155_;
}
}
else
{
lean_dec(v___x_150_);
return v___x_153_;
}
}
else
{
lean_dec(v_a_143_);
return v_b_144_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg___boxed(lean_object* v_s_163_, lean_object* v_a_164_, lean_object* v_b_165_){
_start:
{
uint8_t v_b_boxed_166_; uint8_t v_res_167_; lean_object* v_r_168_; 
v_b_boxed_166_ = lean_unbox(v_b_165_);
v_res_167_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg(v_s_163_, v_a_164_, v_b_boxed_166_);
lean_dec_ref(v_s_163_);
v_r_168_ = lean_box(v_res_167_);
return v_r_168_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0(lean_object* v_s_169_){
_start:
{
lean_object* v_searcher_170_; uint8_t v___x_171_; uint8_t v___x_172_; 
v_searcher_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = 0;
v___x_172_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg(v_s_169_, v_searcher_170_, v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0___boxed(lean_object* v_s_173_){
_start:
{
uint8_t v_res_174_; lean_object* v_r_175_; 
v_res_174_ = l_String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0(v_s_173_);
lean_dec_ref(v_s_173_);
v_r_175_ = lean_box(v_res_174_);
return v_r_175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_escapeAttr(lean_object* v_s_176_){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = lean_string_utf8_byte_size(v_s_176_);
lean_inc_ref(v_s_176_);
v___x_179_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_179_, 0, v_s_176_);
lean_ctor_set(v___x_179_, 1, v___x_177_);
lean_ctor_set(v___x_179_, 2, v___x_178_);
v___x_180_ = l_String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0(v___x_179_);
lean_dec_ref_known(v___x_179_, 3);
if (v___x_180_ == 0)
{
return v_s_176_;
}
else
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___x_182_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg(v___x_178_, v_s_176_, v___x_177_, v___x_181_);
lean_dec_ref(v_s_176_);
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1(lean_object* v___x_183_, lean_object* v___x_184_, lean_object* v_s_185_, lean_object* v_inst_186_, lean_object* v_R_187_, lean_object* v_a_188_, lean_object* v_b_189_, lean_object* v_c_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg(v___x_184_, v_s_185_, v_a_188_, v_b_189_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___boxed(lean_object* v___x_192_, lean_object* v___x_193_, lean_object* v_s_194_, lean_object* v_inst_195_, lean_object* v_R_196_, lean_object* v_a_197_, lean_object* v_b_198_, lean_object* v_c_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1(v___x_192_, v___x_193_, v_s_194_, v_inst_195_, v_R_196_, v_a_197_, v_b_198_, v_c_199_);
lean_dec_ref(v_s_194_);
lean_dec(v___x_193_);
lean_dec_ref(v___x_192_);
return v_res_200_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0(lean_object* v_s_201_, lean_object* v_inst_202_, lean_object* v_R_203_, lean_object* v_a_204_, uint8_t v_b_205_, lean_object* v_c_206_){
_start:
{
uint8_t v___x_207_; 
v___x_207_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg(v_s_201_, v_a_204_, v_b_205_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___boxed(lean_object* v_s_208_, lean_object* v_inst_209_, lean_object* v_R_210_, lean_object* v_a_211_, lean_object* v_b_212_, lean_object* v_c_213_){
_start:
{
uint8_t v_b_boxed_214_; uint8_t v_res_215_; lean_object* v_r_216_; 
v_b_boxed_214_ = lean_unbox(v_b_212_);
v_res_215_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0(v_s_208_, v_inst_209_, v_R_210_, v_a_211_, v_b_boxed_214_, v_c_213_);
lean_dec_ref(v_s_208_);
v_r_216_ = lean_box(v_res_215_);
return v_r_216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_propAttribute(lean_object* v_x_290_){
_start:
{
lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__0));
v___x_292_ = lean_string_dec_eq(v_x_290_, v___x_291_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_293_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__1));
v___x_294_ = lean_string_dec_eq(v_x_290_, v___x_293_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_295_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__2));
v___x_296_ = lean_string_dec_eq(v_x_290_, v___x_295_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; uint8_t v___x_298_; 
v___x_297_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__3));
v___x_298_ = lean_string_dec_eq(v_x_290_, v___x_297_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__4));
v___x_300_ = lean_string_dec_eq(v_x_290_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_301_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__5));
v___x_302_ = lean_string_dec_eq(v_x_290_, v___x_301_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_303_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__6));
v___x_304_ = lean_string_dec_eq(v_x_290_, v___x_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_305_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__7));
v___x_306_ = lean_string_dec_eq(v_x_290_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_307_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__8));
v___x_308_ = lean_string_dec_eq(v_x_290_, v___x_307_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_309_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__9));
v___x_310_ = lean_string_dec_eq(v_x_290_, v___x_309_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__10));
v___x_312_ = lean_string_dec_eq(v_x_290_, v___x_311_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_313_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__11));
v___x_314_ = lean_string_dec_eq(v_x_290_, v___x_313_);
if (v___x_314_ == 0)
{
lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_315_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__12));
v___x_316_ = lean_string_dec_eq(v_x_290_, v___x_315_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__13));
v___x_318_ = lean_string_dec_eq(v_x_290_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_319_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__14));
v___x_320_ = lean_string_dec_eq(v_x_290_, v___x_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__15));
v___x_322_ = lean_string_dec_eq(v_x_290_, v___x_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_323_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__16));
v___x_324_ = lean_string_dec_eq(v_x_290_, v___x_323_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_325_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__17));
v___x_326_ = lean_string_dec_eq(v_x_290_, v___x_325_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_327_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__18));
v___x_328_ = lean_string_dec_eq(v_x_290_, v___x_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; uint8_t v___x_330_; 
v___x_329_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__19));
v___x_330_ = lean_string_dec_eq(v_x_290_, v___x_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_331_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__20));
v___x_332_ = lean_string_dec_eq(v_x_290_, v___x_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__21));
v___x_334_ = lean_string_dec_eq(v_x_290_, v___x_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_335_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__22));
v___x_336_ = lean_string_dec_eq(v_x_290_, v___x_335_);
if (v___x_336_ == 0)
{
lean_object* v___x_337_; 
v___x_337_ = lean_box(0);
return v___x_337_;
}
else
{
lean_object* v___x_338_; 
v___x_338_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__23));
return v___x_338_;
}
}
else
{
lean_object* v___x_339_; 
v___x_339_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__24));
return v___x_339_;
}
}
else
{
lean_object* v___x_340_; 
v___x_340_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__25));
return v___x_340_;
}
}
else
{
lean_object* v___x_341_; 
v___x_341_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__27));
return v___x_341_;
}
}
else
{
lean_object* v___x_342_; 
v___x_342_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__28));
return v___x_342_;
}
}
else
{
lean_object* v___x_343_; 
v___x_343_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__29));
return v___x_343_;
}
}
else
{
lean_object* v___x_344_; 
v___x_344_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__30));
return v___x_344_;
}
}
else
{
lean_object* v___x_345_; 
v___x_345_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__31));
return v___x_345_;
}
}
else
{
lean_object* v___x_346_; 
v___x_346_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__32));
return v___x_346_;
}
}
else
{
lean_object* v___x_347_; 
v___x_347_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__33));
return v___x_347_;
}
}
else
{
lean_object* v___x_348_; 
v___x_348_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__34));
return v___x_348_;
}
}
else
{
lean_object* v___x_349_; 
v___x_349_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__35));
return v___x_349_;
}
}
else
{
lean_object* v___x_350_; 
v___x_350_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__36));
return v___x_350_;
}
}
else
{
lean_object* v___x_351_; 
v___x_351_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__37));
return v___x_351_;
}
}
else
{
lean_object* v___x_352_; 
v___x_352_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__38));
return v___x_352_;
}
}
else
{
lean_object* v___x_353_; 
v___x_353_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__40));
return v___x_353_;
}
}
else
{
lean_object* v___x_354_; 
v___x_354_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__41));
return v___x_354_;
}
}
else
{
lean_object* v___x_355_; 
v___x_355_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__42));
return v___x_355_;
}
}
else
{
lean_object* v___x_356_; 
v___x_356_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__43));
return v___x_356_;
}
}
else
{
lean_object* v___x_357_; 
v___x_357_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__44));
return v___x_357_;
}
}
else
{
lean_object* v___x_358_; 
v___x_358_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__45));
return v___x_358_;
}
}
else
{
lean_object* v___x_359_; 
v___x_359_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__47));
return v___x_359_;
}
}
else
{
lean_object* v___x_360_; 
v___x_360_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__49));
return v___x_360_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_propAttribute___boxed(lean_object* v_x_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lasm_UI_Render_propAttribute(v_x_361_);
lean_dec_ref(v_x_361_);
return v_res_362_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lasm_UI_Render_finalAttrs_spec__0(lean_object* v_a_363_, lean_object* v_x_364_){
_start:
{
if (lean_obj_tag(v_x_364_) == 0)
{
uint8_t v___x_365_; 
v___x_365_ = 0;
return v___x_365_;
}
else
{
lean_object* v_head_366_; lean_object* v_tail_367_; uint8_t v___x_368_; 
v_head_366_ = lean_ctor_get(v_x_364_, 0);
v_tail_367_ = lean_ctor_get(v_x_364_, 1);
v___x_368_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_a_363_, v_head_366_);
if (v___x_368_ == 0)
{
v_x_364_ = v_tail_367_;
goto _start;
}
else
{
return v___x_368_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lasm_UI_Render_finalAttrs_spec__0___boxed(lean_object* v_a_370_, lean_object* v_x_371_){
_start:
{
uint8_t v_res_372_; lean_object* v_r_373_; 
v_res_372_ = l_List_elem___at___00Lasm_UI_Render_finalAttrs_spec__0(v_a_370_, v_x_371_);
lean_dec(v_x_371_);
lean_dec_ref(v_a_370_);
v_r_373_ = lean_box(v_res_372_);
return v_r_373_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_finalAttrs_spec__1___redArg(lean_object* v_x_374_, lean_object* v_x_375_){
_start:
{
if (lean_obj_tag(v_x_375_) == 0)
{
return v_x_374_;
}
else
{
lean_object* v_head_376_; lean_object* v_tail_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_400_; 
v_head_376_ = lean_ctor_get(v_x_375_, 0);
v_tail_377_ = lean_ctor_get(v_x_375_, 1);
v_isSharedCheck_400_ = !lean_is_exclusive(v_x_375_);
if (v_isSharedCheck_400_ == 0)
{
v___x_379_ = v_x_375_;
v_isShared_380_ = v_isSharedCheck_400_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_tail_377_);
lean_inc(v_head_376_);
lean_dec(v_x_375_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_400_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v_fst_381_; lean_object* v_snd_382_; lean_object* v___x_383_; uint8_t v___x_384_; 
v_fst_381_ = lean_ctor_get(v_x_374_, 0);
v_snd_382_ = lean_ctor_get(v_x_374_, 1);
v___x_383_ = l_Lasm_UI_Attr_key___redArg(v_head_376_);
v___x_384_ = l_List_elem___at___00Lasm_UI_Render_finalAttrs_spec__0(v___x_383_, v_fst_381_);
if (v___x_384_ == 0)
{
lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_396_; 
lean_inc(v_snd_382_);
lean_inc(v_fst_381_);
v_isSharedCheck_396_ = !lean_is_exclusive(v_x_374_);
if (v_isSharedCheck_396_ == 0)
{
lean_object* v_unused_397_; lean_object* v_unused_398_; 
v_unused_397_ = lean_ctor_get(v_x_374_, 1);
lean_dec(v_unused_397_);
v_unused_398_ = lean_ctor_get(v_x_374_, 0);
lean_dec(v_unused_398_);
v___x_386_ = v_x_374_;
v_isShared_387_ = v_isSharedCheck_396_;
goto v_resetjp_385_;
}
else
{
lean_dec(v_x_374_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_396_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 1, v_fst_381_);
lean_ctor_set(v___x_379_, 0, v___x_383_);
v___x_389_ = v___x_379_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_383_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v_fst_381_);
v___x_389_ = v_reuseFailAlloc_395_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_390_; lean_object* v___x_392_; 
v___x_390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_390_, 0, v_head_376_);
lean_ctor_set(v___x_390_, 1, v_snd_382_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 1, v___x_390_);
lean_ctor_set(v___x_386_, 0, v___x_389_);
v___x_392_ = v___x_386_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_389_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v___x_390_);
v___x_392_ = v_reuseFailAlloc_394_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
v_x_374_ = v___x_392_;
v_x_375_ = v_tail_377_;
goto _start;
}
}
}
}
else
{
lean_dec_ref(v___x_383_);
lean_del_object(v___x_379_);
lean_dec(v_head_376_);
v_x_375_ = v_tail_377_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_finalAttrs___redArg(lean_object* v_attrs_403_){
_start:
{
lean_object* v_rev_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v_snd_407_; 
v_rev_404_ = l_List_reverse___redArg(v_attrs_403_);
v___x_405_ = ((lean_object*)(l_Lasm_UI_Render_finalAttrs___redArg___closed__0));
v___x_406_ = l_List_foldl___at___00Lasm_UI_Render_finalAttrs_spec__1___redArg(v___x_405_, v_rev_404_);
v_snd_407_ = lean_ctor_get(v___x_406_, 1);
lean_inc(v_snd_407_);
lean_dec_ref(v___x_406_);
return v_snd_407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_finalAttrs(lean_object* v_Msg_408_, lean_object* v_attrs_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Lasm_UI_Render_finalAttrs___redArg(v_attrs_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_finalAttrs_spec__1(lean_object* v_Msg_411_, lean_object* v_x_412_, lean_object* v_x_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_List_foldl___at___00Lasm_UI_Render_finalAttrs_spec__1___redArg(v_x_412_, v_x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg(lean_object* v_tag_424_, lean_object* v_x_425_, lean_object* v_x_426_){
_start:
{
if (lean_obj_tag(v_x_426_) == 0)
{
return v_x_425_;
}
else
{
lean_object* v_head_427_; lean_object* v_tail_428_; lean_object* v_n_430_; uint8_t v_b_431_; 
v_head_427_ = lean_ctor_get(v_x_426_, 0);
lean_inc(v_head_427_);
v_tail_428_ = lean_ctor_get(v_x_426_, 1);
lean_inc(v_tail_428_);
lean_dec_ref_known(v_x_426_, 2);
switch(lean_obj_tag(v_head_427_))
{
case 0:
{
lean_object* v_name_450_; lean_object* v_value_451_; lean_object* v_attrs_452_; lean_object* v_styles_453_; lean_object* v_content_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_471_; 
v_name_450_ = lean_ctor_get(v_head_427_, 0);
lean_inc_ref(v_name_450_);
v_value_451_ = lean_ctor_get(v_head_427_, 1);
lean_inc_ref(v_value_451_);
lean_dec_ref_known(v_head_427_, 2);
v_attrs_452_ = lean_ctor_get(v_x_425_, 0);
v_styles_453_ = lean_ctor_get(v_x_425_, 1);
v_content_454_ = lean_ctor_get(v_x_425_, 2);
v_isSharedCheck_471_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_471_ == 0)
{
v___x_456_ = v_x_425_;
v_isShared_457_ = v_isSharedCheck_471_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_content_454_);
lean_inc(v_styles_453_);
lean_inc(v_attrs_452_);
lean_dec(v_x_425_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_471_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_468_; 
v___x_458_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__0));
v___x_459_ = lean_string_append(v___x_458_, v_name_450_);
lean_dec_ref(v_name_450_);
v___x_460_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__1));
v___x_461_ = lean_string_append(v___x_459_, v___x_460_);
v___x_462_ = l_Lasm_UI_Render_escapeAttr(v_value_451_);
v___x_463_ = lean_string_append(v___x_461_, v___x_462_);
lean_dec_ref(v___x_462_);
v___x_464_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__2));
v___x_465_ = lean_string_append(v___x_463_, v___x_464_);
v___x_466_ = lean_string_append(v_attrs_452_, v___x_465_);
lean_dec_ref(v___x_465_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_466_);
v___x_468_ = v___x_456_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_466_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_styles_453_);
lean_ctor_set(v_reuseFailAlloc_470_, 2, v_content_454_);
v___x_468_ = v_reuseFailAlloc_470_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
v_x_425_ = v___x_468_;
v_x_426_ = v_tail_428_;
goto _start;
}
}
}
case 1:
{
lean_object* v_name_472_; lean_object* v_value_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v_name_472_ = lean_ctor_get(v_head_427_, 0);
lean_inc_ref(v_name_472_);
v_value_473_ = lean_ctor_get(v_head_427_, 1);
lean_inc_ref(v_value_473_);
lean_dec_ref_known(v_head_427_, 2);
v___x_474_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__3));
v___x_475_ = lean_string_dec_eq(v_name_472_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_476_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__4));
v___x_477_ = lean_string_dec_eq(v_name_472_, v___x_476_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_478_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__2));
v___x_479_ = lean_string_dec_eq(v_name_472_, v___x_478_);
if (v___x_479_ == 0)
{
if (lean_obj_tag(v_value_473_) == 0)
{
lean_object* v_s_480_; lean_object* v___x_481_; 
v_s_480_ = lean_ctor_get(v_value_473_, 0);
lean_inc_ref(v_s_480_);
lean_dec_ref_known(v_value_473_, 1);
v___x_481_ = l_Lasm_UI_Render_propAttribute(v_name_472_);
lean_dec_ref(v_name_472_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_dec_ref(v_s_480_);
v_x_426_ = v_tail_428_;
goto _start;
}
else
{
lean_object* v_val_483_; lean_object* v_attrs_484_; lean_object* v_styles_485_; lean_object* v_content_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_503_; 
v_val_483_ = lean_ctor_get(v___x_481_, 0);
lean_inc(v_val_483_);
lean_dec_ref_known(v___x_481_, 1);
v_attrs_484_ = lean_ctor_get(v_x_425_, 0);
v_styles_485_ = lean_ctor_get(v_x_425_, 1);
v_content_486_ = lean_ctor_get(v_x_425_, 2);
v_isSharedCheck_503_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_503_ == 0)
{
v___x_488_ = v_x_425_;
v_isShared_489_ = v_isSharedCheck_503_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_content_486_);
lean_inc(v_styles_485_);
lean_inc(v_attrs_484_);
lean_dec(v_x_425_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_503_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_500_; 
v___x_490_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__0));
v___x_491_ = lean_string_append(v___x_490_, v_val_483_);
lean_dec(v_val_483_);
v___x_492_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__1));
v___x_493_ = lean_string_append(v___x_491_, v___x_492_);
v___x_494_ = l_Lasm_UI_Render_escapeAttr(v_s_480_);
v___x_495_ = lean_string_append(v___x_493_, v___x_494_);
lean_dec_ref(v___x_494_);
v___x_496_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__2));
v___x_497_ = lean_string_append(v___x_495_, v___x_496_);
v___x_498_ = lean_string_append(v_attrs_484_, v___x_497_);
lean_dec_ref(v___x_497_);
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 0, v___x_498_);
v___x_500_ = v___x_488_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v___x_498_);
lean_ctor_set(v_reuseFailAlloc_502_, 1, v_styles_485_);
lean_ctor_set(v_reuseFailAlloc_502_, 2, v_content_486_);
v___x_500_ = v_reuseFailAlloc_502_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
v_x_425_ = v___x_500_;
v_x_426_ = v_tail_428_;
goto _start;
}
}
}
}
else
{
uint8_t v_b_504_; 
v_b_504_ = lean_ctor_get_uint8(v_value_473_, 0);
lean_dec_ref_known(v_value_473_, 0);
v_n_430_ = v_name_472_;
v_b_431_ = v_b_504_;
goto v___jp_429_;
}
}
else
{
lean_dec_ref(v_name_472_);
if (lean_obj_tag(v_value_473_) == 0)
{
lean_object* v_s_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_543_; 
v_s_505_ = lean_ctor_get(v_value_473_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v_value_473_);
if (v_isSharedCheck_543_ == 0)
{
v___x_507_ = v_value_473_;
v_isShared_508_ = v_isSharedCheck_543_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_s_505_);
lean_dec(v_value_473_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_543_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_509_; uint8_t v___x_510_; 
v___x_509_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__5));
v___x_510_ = lean_string_dec_eq(v_tag_424_, v___x_509_);
if (v___x_510_ == 0)
{
lean_object* v_attrs_511_; lean_object* v_styles_512_; lean_object* v_content_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_527_; 
lean_del_object(v___x_507_);
v_attrs_511_ = lean_ctor_get(v_x_425_, 0);
v_styles_512_ = lean_ctor_get(v_x_425_, 1);
v_content_513_ = lean_ctor_get(v_x_425_, 2);
v_isSharedCheck_527_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_527_ == 0)
{
v___x_515_ = v_x_425_;
v_isShared_516_ = v_isSharedCheck_527_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_content_513_);
lean_inc(v_styles_512_);
lean_inc(v_attrs_511_);
lean_dec(v_x_425_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_527_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_524_; 
v___x_517_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__6));
v___x_518_ = l_Lasm_UI_Render_escapeAttr(v_s_505_);
v___x_519_ = lean_string_append(v___x_517_, v___x_518_);
lean_dec_ref(v___x_518_);
v___x_520_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__2));
v___x_521_ = lean_string_append(v___x_519_, v___x_520_);
v___x_522_ = lean_string_append(v_attrs_511_, v___x_521_);
lean_dec_ref(v___x_521_);
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v___x_522_);
v___x_524_ = v___x_515_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_526_, 1, v_styles_512_);
lean_ctor_set(v_reuseFailAlloc_526_, 2, v_content_513_);
v___x_524_ = v_reuseFailAlloc_526_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
v_x_425_ = v___x_524_;
v_x_426_ = v_tail_428_;
goto _start;
}
}
}
else
{
lean_object* v_attrs_528_; lean_object* v_styles_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_541_; 
v_attrs_528_ = lean_ctor_get(v_x_425_, 0);
v_styles_529_ = lean_ctor_get(v_x_425_, 1);
v_isSharedCheck_541_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_541_ == 0)
{
lean_object* v_unused_542_; 
v_unused_542_ = lean_ctor_get(v_x_425_, 2);
lean_dec(v_unused_542_);
v___x_531_ = v_x_425_;
v_isShared_532_ = v_isSharedCheck_541_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_styles_529_);
lean_inc(v_attrs_528_);
lean_dec(v_x_425_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_541_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_533_; lean_object* v___x_535_; 
v___x_533_ = l_Lasm_UI_Render_escapeText(v_s_505_);
if (v_isShared_508_ == 0)
{
lean_ctor_set_tag(v___x_507_, 1);
lean_ctor_set(v___x_507_, 0, v___x_533_);
v___x_535_ = v___x_507_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_533_);
v___x_535_ = v_reuseFailAlloc_540_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
lean_object* v___x_537_; 
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 2, v___x_535_);
v___x_537_ = v___x_531_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_attrs_528_);
lean_ctor_set(v_reuseFailAlloc_539_, 1, v_styles_529_);
lean_ctor_set(v_reuseFailAlloc_539_, 2, v___x_535_);
v___x_537_ = v_reuseFailAlloc_539_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
v_x_425_ = v___x_537_;
v_x_426_ = v_tail_428_;
goto _start;
}
}
}
}
}
}
else
{
uint8_t v_b_544_; 
v_b_544_ = lean_ctor_get_uint8(v_value_473_, 0);
lean_dec_ref_known(v_value_473_, 0);
v_n_430_ = v___x_478_;
v_b_431_ = v_b_544_;
goto v___jp_429_;
}
}
}
else
{
lean_dec_ref(v_name_472_);
if (lean_obj_tag(v_value_473_) == 0)
{
lean_object* v_s_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_564_; 
v_s_545_ = lean_ctor_get(v_value_473_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v_value_473_);
if (v_isSharedCheck_564_ == 0)
{
v___x_547_ = v_value_473_;
v_isShared_548_ = v_isSharedCheck_564_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_s_545_);
lean_dec(v_value_473_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_564_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v_attrs_549_; lean_object* v_styles_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_562_; 
v_attrs_549_ = lean_ctor_get(v_x_425_, 0);
v_styles_550_ = lean_ctor_get(v_x_425_, 1);
v_isSharedCheck_562_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_562_ == 0)
{
lean_object* v_unused_563_; 
v_unused_563_ = lean_ctor_get(v_x_425_, 2);
lean_dec(v_unused_563_);
v___x_552_ = v_x_425_;
v_isShared_553_ = v_isSharedCheck_562_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_styles_550_);
lean_inc(v_attrs_549_);
lean_dec(v_x_425_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_562_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_554_ = l_Lasm_UI_Render_escapeText(v_s_545_);
if (v_isShared_548_ == 0)
{
lean_ctor_set_tag(v___x_547_, 1);
lean_ctor_set(v___x_547_, 0, v___x_554_);
v___x_556_ = v___x_547_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_554_);
v___x_556_ = v_reuseFailAlloc_561_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
lean_object* v___x_558_; 
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 2, v___x_556_);
v___x_558_ = v___x_552_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_attrs_549_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v_styles_550_);
lean_ctor_set(v_reuseFailAlloc_560_, 2, v___x_556_);
v___x_558_ = v_reuseFailAlloc_560_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
v_x_425_ = v___x_558_;
v_x_426_ = v_tail_428_;
goto _start;
}
}
}
}
}
else
{
uint8_t v_b_565_; 
v_b_565_ = lean_ctor_get_uint8(v_value_473_, 0);
lean_dec_ref_known(v_value_473_, 0);
v_n_430_ = v___x_476_;
v_b_431_ = v_b_565_;
goto v___jp_429_;
}
}
}
else
{
lean_dec_ref(v_name_472_);
if (lean_obj_tag(v_value_473_) == 0)
{
lean_object* v_s_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_584_; 
v_s_566_ = lean_ctor_get(v_value_473_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v_value_473_);
if (v_isSharedCheck_584_ == 0)
{
v___x_568_ = v_value_473_;
v_isShared_569_ = v_isSharedCheck_584_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_s_566_);
lean_dec(v_value_473_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_584_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v_attrs_570_; lean_object* v_styles_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_582_; 
v_attrs_570_ = lean_ctor_get(v_x_425_, 0);
v_styles_571_ = lean_ctor_get(v_x_425_, 1);
v_isSharedCheck_582_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_582_ == 0)
{
lean_object* v_unused_583_; 
v_unused_583_ = lean_ctor_get(v_x_425_, 2);
lean_dec(v_unused_583_);
v___x_573_ = v_x_425_;
v_isShared_574_ = v_isSharedCheck_582_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_styles_571_);
lean_inc(v_attrs_570_);
lean_dec(v_x_425_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_582_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_569_ == 0)
{
lean_ctor_set_tag(v___x_568_, 1);
v___x_576_ = v___x_568_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_s_566_);
v___x_576_ = v_reuseFailAlloc_581_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_578_; 
if (v_isShared_574_ == 0)
{
lean_ctor_set(v___x_573_, 2, v___x_576_);
v___x_578_ = v___x_573_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_attrs_570_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v_styles_571_);
lean_ctor_set(v_reuseFailAlloc_580_, 2, v___x_576_);
v___x_578_ = v_reuseFailAlloc_580_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
v_x_425_ = v___x_578_;
v_x_426_ = v_tail_428_;
goto _start;
}
}
}
}
}
else
{
uint8_t v_b_585_; 
v_b_585_ = lean_ctor_get_uint8(v_value_473_, 0);
lean_dec_ref_known(v_value_473_, 0);
v_n_430_ = v___x_474_;
v_b_431_ = v_b_585_;
goto v___jp_429_;
}
}
}
case 2:
{
lean_object* v_name_586_; lean_object* v_value_587_; lean_object* v_attrs_588_; lean_object* v_styles_589_; lean_object* v_content_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_610_; 
v_name_586_ = lean_ctor_get(v_head_427_, 0);
lean_inc_ref(v_name_586_);
v_value_587_ = lean_ctor_get(v_head_427_, 1);
lean_inc_ref(v_value_587_);
lean_dec_ref_known(v_head_427_, 2);
v_attrs_588_ = lean_ctor_get(v_x_425_, 0);
v_styles_589_ = lean_ctor_get(v_x_425_, 1);
v_content_590_ = lean_ctor_get(v_x_425_, 2);
v_isSharedCheck_610_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_610_ == 0)
{
v___x_592_ = v_x_425_;
v_isShared_593_ = v_isSharedCheck_610_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_content_590_);
lean_inc(v_styles_589_);
lean_inc(v_attrs_588_);
lean_dec(v_x_425_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_610_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___y_595_; lean_object* v___x_605_; lean_object* v___x_606_; uint8_t v___x_607_; 
v___x_605_ = lean_string_utf8_byte_size(v_styles_589_);
v___x_606_ = lean_unsigned_to_nat(0u);
v___x_607_ = lean_nat_dec_eq(v___x_605_, v___x_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; 
v___x_608_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__8));
v___y_595_ = v___x_608_;
goto v___jp_594_;
}
else
{
lean_object* v___x_609_; 
v___x_609_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___y_595_ = v___x_609_;
goto v___jp_594_;
}
v___jp_594_:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_602_; 
v___x_596_ = lean_string_append(v_styles_589_, v___y_595_);
v___x_597_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__7));
v___x_598_ = lean_string_append(v_name_586_, v___x_597_);
v___x_599_ = lean_string_append(v___x_598_, v_value_587_);
lean_dec_ref(v_value_587_);
v___x_600_ = lean_string_append(v___x_596_, v___x_599_);
lean_dec_ref(v___x_599_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 1, v___x_600_);
v___x_602_ = v___x_592_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_attrs_588_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v___x_600_);
lean_ctor_set(v_reuseFailAlloc_604_, 2, v_content_590_);
v___x_602_ = v_reuseFailAlloc_604_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
v_x_425_ = v___x_602_;
v_x_426_ = v_tail_428_;
goto _start;
}
}
}
}
default: 
{
lean_dec_ref_known(v_head_427_, 2);
v_x_426_ = v_tail_428_;
goto _start;
}
}
v___jp_429_:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lasm_UI_Render_propAttribute(v_n_430_);
lean_dec_ref(v_n_430_);
if (lean_obj_tag(v___x_432_) == 1)
{
if (v_b_431_ == 1)
{
lean_object* v_val_433_; lean_object* v_attrs_434_; lean_object* v_styles_435_; lean_object* v_content_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_447_; 
v_val_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_val_433_);
lean_dec_ref_known(v___x_432_, 1);
v_attrs_434_ = lean_ctor_get(v_x_425_, 0);
v_styles_435_ = lean_ctor_get(v_x_425_, 1);
v_content_436_ = lean_ctor_get(v_x_425_, 2);
v_isSharedCheck_447_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_447_ == 0)
{
v___x_438_ = v_x_425_;
v_isShared_439_ = v_isSharedCheck_447_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_content_436_);
lean_inc(v_styles_435_);
lean_inc(v_attrs_434_);
lean_dec(v_x_425_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_447_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_444_; 
v___x_440_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__0));
v___x_441_ = lean_string_append(v___x_440_, v_val_433_);
lean_dec(v_val_433_);
v___x_442_ = lean_string_append(v_attrs_434_, v___x_441_);
lean_dec_ref(v___x_441_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_442_);
v___x_444_ = v___x_438_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v___x_442_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v_styles_435_);
lean_ctor_set(v_reuseFailAlloc_446_, 2, v_content_436_);
v___x_444_ = v_reuseFailAlloc_446_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
v_x_425_ = v___x_444_;
v_x_426_ = v_tail_428_;
goto _start;
}
}
}
else
{
lean_dec_ref_known(v___x_432_, 1);
v_x_426_ = v_tail_428_;
goto _start;
}
}
else
{
lean_dec(v___x_432_);
v_x_426_ = v_tail_428_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___boxed(lean_object* v_tag_612_, lean_object* v_x_613_, lean_object* v_x_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg(v_tag_612_, v_x_613_, v_x_614_);
lean_dec_ref(v_tag_612_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts___redArg(lean_object* v_tag_619_, lean_object* v_attrs_620_){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_621_ = ((lean_object*)(l_Lasm_UI_Render_parts___redArg___closed__0));
v___x_622_ = l_Lasm_UI_Render_finalAttrs___redArg(v_attrs_620_);
v___x_623_ = l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg(v_tag_619_, v___x_621_, v___x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts___redArg___boxed(lean_object* v_tag_624_, lean_object* v_attrs_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lasm_UI_Render_parts___redArg(v_tag_624_, v_attrs_625_);
lean_dec_ref(v_tag_624_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts(lean_object* v_Msg_627_, lean_object* v_tag_628_, lean_object* v_attrs_629_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l_Lasm_UI_Render_parts___redArg(v_tag_628_, v_attrs_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts___boxed(lean_object* v_Msg_631_, lean_object* v_tag_632_, lean_object* v_attrs_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lasm_UI_Render_parts(v_Msg_631_, v_tag_632_, v_attrs_633_);
lean_dec_ref(v_tag_632_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0(lean_object* v_Msg_635_, lean_object* v_tag_636_, lean_object* v_x_637_, lean_object* v_x_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg(v_tag_636_, v_x_637_, v_x_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___boxed(lean_object* v_Msg_640_, lean_object* v_tag_641_, lean_object* v_x_642_, lean_object* v_x_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_List_foldl___at___00Lasm_UI_Render_parts_spec__0(v_Msg_640_, v_tag_641_, v_x_642_, v_x_643_);
lean_dec_ref(v_tag_641_);
return v_res_644_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Render_rawText(lean_object* v_tag_647_){
_start:
{
lean_object* v___x_648_; uint8_t v___x_649_; 
v___x_648_ = ((lean_object*)(l_Lasm_UI_Render_rawText___closed__0));
v___x_649_ = lean_string_dec_eq(v_tag_647_, v___x_648_);
if (v___x_649_ == 0)
{
lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_650_ = ((lean_object*)(l_Lasm_UI_Render_rawText___closed__1));
v___x_651_ = lean_string_dec_eq(v_tag_647_, v___x_650_);
return v___x_651_;
}
else
{
return v___x_649_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_rawText___boxed(lean_object* v_tag_652_){
_start:
{
uint8_t v_res_653_; lean_object* v_r_654_; 
v_res_653_ = l_Lasm_UI_Render_rawText(v_tag_652_);
lean_dec_ref(v_tag_652_);
v_r_654_ = lean_box(v_res_653_);
return v_r_654_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lasm_UI_Render_node_spec__2(lean_object* v_a_655_, lean_object* v_x_656_){
_start:
{
if (lean_obj_tag(v_x_656_) == 0)
{
uint8_t v___x_657_; 
v___x_657_ = 0;
return v___x_657_;
}
else
{
lean_object* v_head_658_; lean_object* v_tail_659_; uint8_t v___x_660_; 
v_head_658_ = lean_ctor_get(v_x_656_, 0);
v_tail_659_ = lean_ctor_get(v_x_656_, 1);
v___x_660_ = lean_string_dec_eq(v_a_655_, v_head_658_);
if (v___x_660_ == 0)
{
v_x_656_ = v_tail_659_;
goto _start;
}
else
{
return v___x_660_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lasm_UI_Render_node_spec__2___boxed(lean_object* v_a_662_, lean_object* v_x_663_){
_start:
{
uint8_t v_res_664_; lean_object* v_r_665_; 
v_res_664_ = l_List_elem___at___00Lasm_UI_Render_node_spec__2(v_a_662_, v_x_663_);
lean_dec(v_x_663_);
lean_dec_ref(v_a_662_);
v_r_665_ = lean_box(v_res_664_);
return v_r_665_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg(lean_object* v_s_666_, lean_object* v_replacement_667_, lean_object* v_a_668_, lean_object* v_b_669_){
_start:
{
lean_object* v_it_671_; lean_object* v_startPos_672_; lean_object* v_endPos_673_; lean_object* v_it_682_; 
switch(lean_obj_tag(v_a_668_))
{
case 0:
{
lean_object* v_pos_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_700_; 
v_pos_688_ = lean_ctor_get(v_a_668_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v_a_668_);
if (v_isSharedCheck_700_ == 0)
{
v___x_690_ = v_a_668_;
v_isShared_691_ = v_isSharedCheck_700_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_pos_688_);
lean_dec(v_a_668_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_700_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v_startInclusive_692_; lean_object* v_endExclusive_693_; lean_object* v___x_694_; uint8_t v_decide_695_; 
v_startInclusive_692_ = lean_ctor_get(v_s_666_, 1);
v_endExclusive_693_ = lean_ctor_get(v_s_666_, 2);
v___x_694_ = lean_nat_sub(v_endExclusive_693_, v_startInclusive_692_);
v_decide_695_ = lean_nat_dec_eq(v_pos_688_, v___x_694_);
lean_dec(v___x_694_);
if (v_decide_695_ == 0)
{
lean_object* v___x_697_; 
if (v_isShared_691_ == 0)
{
lean_ctor_set_tag(v___x_690_, 1);
v___x_697_ = v___x_690_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_pos_688_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
v_it_682_ = v___x_697_;
goto v___jp_681_;
}
}
else
{
lean_object* v___x_699_; 
lean_del_object(v___x_690_);
lean_dec(v_pos_688_);
v___x_699_ = lean_box(3);
v_it_682_ = v___x_699_;
goto v___jp_681_;
}
}
}
case 1:
{
lean_object* v_pos_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_713_; 
v_pos_701_ = lean_ctor_get(v_a_668_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v_a_668_);
if (v_isSharedCheck_713_ == 0)
{
v___x_703_ = v_a_668_;
v_isShared_704_ = v_isSharedCheck_713_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_pos_701_);
lean_dec(v_a_668_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_713_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v_str_705_; lean_object* v_startInclusive_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_711_; 
v_str_705_ = lean_ctor_get(v_s_666_, 0);
v_startInclusive_706_ = lean_ctor_get(v_s_666_, 1);
v___x_707_ = lean_nat_add(v_startInclusive_706_, v_pos_701_);
v___x_708_ = lean_string_utf8_next_fast(v_str_705_, v___x_707_);
lean_dec(v___x_707_);
v___x_709_ = lean_nat_sub(v___x_708_, v_startInclusive_706_);
lean_inc(v___x_709_);
if (v_isShared_704_ == 0)
{
lean_ctor_set_tag(v___x_703_, 0);
lean_ctor_set(v___x_703_, 0, v___x_709_);
v___x_711_ = v___x_703_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_709_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
v_it_671_ = v___x_711_;
v_startPos_672_ = v_pos_701_;
v_endPos_673_ = v___x_709_;
goto v___jp_670_;
}
}
}
case 2:
{
lean_object* v_needle_714_; lean_object* v_table_715_; lean_object* v_stackPos_716_; lean_object* v_needlePos_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_778_; 
v_needle_714_ = lean_ctor_get(v_a_668_, 0);
v_table_715_ = lean_ctor_get(v_a_668_, 1);
v_stackPos_716_ = lean_ctor_get(v_a_668_, 2);
v_needlePos_717_ = lean_ctor_get(v_a_668_, 3);
v_isSharedCheck_778_ = !lean_is_exclusive(v_a_668_);
if (v_isSharedCheck_778_ == 0)
{
v___x_719_ = v_a_668_;
v_isShared_720_ = v_isSharedCheck_778_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_needlePos_717_);
lean_inc(v_stackPos_716_);
lean_inc(v_table_715_);
lean_inc(v_needle_714_);
lean_dec(v_a_668_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_778_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v_str_721_; lean_object* v_startInclusive_722_; lean_object* v_endExclusive_723_; lean_object* v_str_724_; lean_object* v_startInclusive_725_; lean_object* v_endExclusive_726_; lean_object* v_basePos_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; uint8_t v___x_731_; 
v_str_721_ = lean_ctor_get(v_needle_714_, 0);
v_startInclusive_722_ = lean_ctor_get(v_needle_714_, 1);
v_endExclusive_723_ = lean_ctor_get(v_needle_714_, 2);
v_str_724_ = lean_ctor_get(v_s_666_, 0);
v_startInclusive_725_ = lean_ctor_get(v_s_666_, 1);
v_endExclusive_726_ = lean_ctor_get(v_s_666_, 2);
v_basePos_727_ = lean_nat_sub(v_stackPos_716_, v_needlePos_717_);
v___x_728_ = lean_nat_sub(v_endExclusive_723_, v_startInclusive_722_);
v___x_729_ = lean_nat_add(v_basePos_727_, v___x_728_);
v___x_730_ = lean_nat_sub(v_endExclusive_726_, v_startInclusive_725_);
v___x_731_ = lean_nat_dec_le(v___x_729_, v___x_730_);
lean_dec(v___x_729_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; uint8_t v___x_734_; 
lean_dec(v___x_728_);
lean_del_object(v___x_719_);
lean_dec(v_needlePos_717_);
lean_dec(v_stackPos_716_);
lean_dec_ref(v_table_715_);
lean_dec_ref(v_needle_714_);
v___x_732_ = lean_unsigned_to_nat(1u);
v___x_733_ = lean_nat_add(v_basePos_727_, v___x_732_);
v___x_734_ = lean_nat_dec_le(v___x_733_, v___x_730_);
lean_dec(v___x_733_);
if (v___x_734_ == 0)
{
lean_dec(v___x_730_);
lean_dec(v_basePos_727_);
lean_dec_ref(v_s_666_);
return v_b_669_;
}
else
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = l_String_Slice_pos_x21(v_s_666_, v_basePos_727_);
lean_dec(v_basePos_727_);
v___x_736_ = lean_box(3);
v_it_671_ = v___x_736_;
v_startPos_672_ = v___x_735_;
v_endPos_673_ = v___x_730_;
goto v___jp_670_;
}
}
else
{
lean_object* v___x_737_; uint8_t v_stackByte_738_; lean_object* v___x_739_; uint8_t v_patByte_740_; uint8_t v___x_741_; 
lean_dec(v___x_730_);
v___x_737_ = lean_nat_add(v_startInclusive_725_, v_stackPos_716_);
v_stackByte_738_ = lean_string_get_byte_fast(v_str_724_, v___x_737_);
v___x_739_ = lean_nat_add(v_startInclusive_722_, v_needlePos_717_);
v_patByte_740_ = lean_string_get_byte_fast(v_str_721_, v___x_739_);
v___x_741_ = lean_uint8_dec_eq(v_stackByte_738_, v_patByte_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; uint8_t v_decide_743_; 
lean_dec(v___x_728_);
v___x_742_ = lean_unsigned_to_nat(0u);
v_decide_743_ = lean_nat_dec_eq(v_needlePos_717_, v___x_742_);
if (v_decide_743_ == 0)
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v_newNeedlePos_746_; uint8_t v___x_747_; 
v___x_744_ = lean_unsigned_to_nat(1u);
v___x_745_ = lean_nat_sub(v_needlePos_717_, v___x_744_);
lean_dec(v_needlePos_717_);
v_newNeedlePos_746_ = lean_array_fget_borrowed(v_table_715_, v___x_745_);
lean_dec(v___x_745_);
v___x_747_ = lean_nat_dec_eq(v_newNeedlePos_746_, v___x_742_);
if (v___x_747_ == 0)
{
lean_object* v_oldBasePos_748_; lean_object* v___x_749_; lean_object* v_newBasePos_750_; lean_object* v___x_752_; 
lean_inc(v_newNeedlePos_746_);
v_oldBasePos_748_ = l_String_Slice_pos_x21(v_s_666_, v_basePos_727_);
lean_dec(v_basePos_727_);
v___x_749_ = lean_nat_sub(v_stackPos_716_, v_newNeedlePos_746_);
v_newBasePos_750_ = l_String_Slice_pos_x21(v_s_666_, v___x_749_);
lean_dec(v___x_749_);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 3, v_newNeedlePos_746_);
v___x_752_ = v___x_719_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_needle_714_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_table_715_);
lean_ctor_set(v_reuseFailAlloc_753_, 2, v_stackPos_716_);
lean_ctor_set(v_reuseFailAlloc_753_, 3, v_newNeedlePos_746_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
v_it_671_ = v___x_752_;
v_startPos_672_ = v_oldBasePos_748_;
v_endPos_673_ = v_newBasePos_750_;
goto v___jp_670_;
}
}
else
{
lean_object* v_basePos_754_; lean_object* v_nextStackPos_755_; lean_object* v___x_757_; 
v_basePos_754_ = l_String_Slice_pos_x21(v_s_666_, v_basePos_727_);
lean_dec(v_basePos_727_);
v_nextStackPos_755_ = l_String_Slice_posGE___redArg(v_s_666_, v_stackPos_716_);
lean_inc(v_nextStackPos_755_);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 3, v___x_742_);
lean_ctor_set(v___x_719_, 2, v_nextStackPos_755_);
v___x_757_ = v___x_719_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_needle_714_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v_table_715_);
lean_ctor_set(v_reuseFailAlloc_758_, 2, v_nextStackPos_755_);
lean_ctor_set(v_reuseFailAlloc_758_, 3, v___x_742_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
v_it_671_ = v___x_757_;
v_startPos_672_ = v_basePos_754_;
v_endPos_673_ = v_nextStackPos_755_;
goto v___jp_670_;
}
}
}
else
{
lean_object* v_basePos_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v_nextStackPos_762_; lean_object* v___x_764_; 
lean_dec(v_basePos_727_);
lean_dec(v_needlePos_717_);
v_basePos_759_ = l_String_Slice_pos_x21(v_s_666_, v_stackPos_716_);
v___x_760_ = lean_unsigned_to_nat(1u);
v___x_761_ = lean_nat_add(v_stackPos_716_, v___x_760_);
lean_dec(v_stackPos_716_);
v_nextStackPos_762_ = l_String_Slice_posGE___redArg(v_s_666_, v___x_761_);
lean_inc(v_nextStackPos_762_);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 3, v___x_742_);
lean_ctor_set(v___x_719_, 2, v_nextStackPos_762_);
v___x_764_ = v___x_719_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_needle_714_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v_table_715_);
lean_ctor_set(v_reuseFailAlloc_765_, 2, v_nextStackPos_762_);
lean_ctor_set(v_reuseFailAlloc_765_, 3, v___x_742_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
v_it_671_ = v___x_764_;
v_startPos_672_ = v_basePos_759_;
v_endPos_673_ = v_nextStackPos_762_;
goto v___jp_670_;
}
}
}
else
{
lean_object* v___x_766_; lean_object* v_nextStackPos_767_; lean_object* v_nextNeedlePos_768_; uint8_t v_decide_769_; 
lean_dec(v_basePos_727_);
v___x_766_ = lean_unsigned_to_nat(1u);
v_nextStackPos_767_ = lean_nat_add(v_stackPos_716_, v___x_766_);
lean_dec(v_stackPos_716_);
v_nextNeedlePos_768_ = lean_nat_add(v_needlePos_717_, v___x_766_);
lean_dec(v_needlePos_717_);
v_decide_769_ = lean_nat_dec_eq(v_nextNeedlePos_768_, v___x_728_);
lean_dec(v___x_728_);
if (v_decide_769_ == 0)
{
lean_object* v___x_771_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 3, v_nextNeedlePos_768_);
lean_ctor_set(v___x_719_, 2, v_nextStackPos_767_);
v___x_771_ = v___x_719_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_needle_714_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_table_715_);
lean_ctor_set(v_reuseFailAlloc_773_, 2, v_nextStackPos_767_);
lean_ctor_set(v_reuseFailAlloc_773_, 3, v_nextNeedlePos_768_);
v___x_771_ = v_reuseFailAlloc_773_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
v_a_668_ = v___x_771_;
goto _start;
}
}
else
{
lean_object* v___x_774_; lean_object* v___x_776_; 
lean_dec(v_nextNeedlePos_768_);
v___x_774_ = lean_unsigned_to_nat(0u);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 3, v___x_774_);
lean_ctor_set(v___x_719_, 2, v_nextStackPos_767_);
v___x_776_ = v___x_719_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_needle_714_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_table_715_);
lean_ctor_set(v_reuseFailAlloc_777_, 2, v_nextStackPos_767_);
lean_ctor_set(v_reuseFailAlloc_777_, 3, v___x_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
v_it_682_ = v___x_776_;
goto v___jp_681_;
}
}
}
}
}
}
default: 
{
lean_dec_ref(v_s_666_);
return v_b_669_;
}
}
v___jp_670_:
{
lean_object* v___x_674_; lean_object* v_str_675_; lean_object* v_startInclusive_676_; lean_object* v_endExclusive_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
lean_inc_ref(v_s_666_);
v___x_674_ = l_String_Slice_slice_x21(v_s_666_, v_startPos_672_, v_endPos_673_);
lean_dec(v_endPos_673_);
lean_dec(v_startPos_672_);
v_str_675_ = lean_ctor_get(v___x_674_, 0);
lean_inc_ref(v_str_675_);
v_startInclusive_676_ = lean_ctor_get(v___x_674_, 1);
lean_inc(v_startInclusive_676_);
v_endExclusive_677_ = lean_ctor_get(v___x_674_, 2);
lean_inc(v_endExclusive_677_);
lean_dec_ref(v___x_674_);
v___x_678_ = lean_string_utf8_extract_fast(v_str_675_, v_startInclusive_676_, v_endExclusive_677_);
lean_dec(v_endExclusive_677_);
lean_dec(v_startInclusive_676_);
lean_dec_ref(v_str_675_);
v___x_679_ = lean_string_append(v_b_669_, v___x_678_);
lean_dec_ref(v___x_678_);
v_a_668_ = v_it_671_;
v_b_669_ = v___x_679_;
goto _start;
}
v___jp_681_:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_683_ = lean_unsigned_to_nat(0u);
v___x_684_ = lean_string_utf8_byte_size(v_replacement_667_);
v___x_685_ = lean_string_utf8_extract_fast(v_replacement_667_, v___x_683_, v___x_684_);
v___x_686_ = lean_string_append(v_b_669_, v___x_685_);
lean_dec_ref(v___x_685_);
v_a_668_ = v_it_682_;
v_b_669_ = v___x_686_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg___boxed(lean_object* v_s_779_, lean_object* v_replacement_780_, lean_object* v_a_781_, lean_object* v_b_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg(v_s_779_, v_replacement_780_, v_a_781_, v_b_782_);
lean_dec_ref(v_replacement_780_);
return v_res_783_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = ((lean_object*)(l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1));
v___x_790_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_789_);
return v___x_790_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_791_ = lean_unsigned_to_nat(0u);
v___x_792_ = lean_obj_once(&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2, &l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2_once, _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2);
v___x_793_ = ((lean_object*)(l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1));
v___x_794_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
lean_ctor_set(v___x_794_, 1, v___x_792_);
lean_ctor_set(v___x_794_, 2, v___x_791_);
lean_ctor_set(v___x_794_, 3, v___x_791_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg(lean_object* v_s_795_, lean_object* v_replacement_796_){
_start:
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_797_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___x_798_ = lean_obj_once(&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3, &l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3);
v___x_799_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg(v_s_795_, v_replacement_796_, v___x_798_, v___x_797_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___boxed(lean_object* v_s_800_, lean_object* v_replacement_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg(v_s_800_, v_replacement_801_);
lean_dec_ref(v_replacement_801_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg(lean_object* v_x_804_, lean_object* v_x_805_){
_start:
{
if (lean_obj_tag(v_x_805_) == 0)
{
return v_x_804_;
}
else
{
lean_object* v_head_806_; 
v_head_806_ = lean_ctor_get(v_x_805_, 0);
if (lean_obj_tag(v_head_806_) == 0)
{
lean_object* v_tail_807_; lean_object* v_s_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v_tail_807_ = lean_ctor_get(v_x_805_, 1);
v_s_808_ = lean_ctor_get(v_head_806_, 0);
v___x_809_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg___closed__0));
v___x_810_ = lean_unsigned_to_nat(0u);
v___x_811_ = lean_string_utf8_byte_size(v_s_808_);
lean_inc_ref(v_s_808_);
v___x_812_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_812_, 0, v_s_808_);
lean_ctor_set(v___x_812_, 1, v___x_810_);
lean_ctor_set(v___x_812_, 2, v___x_811_);
v___x_813_ = l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg(v___x_812_, v___x_809_);
v___x_814_ = lean_string_append(v_x_804_, v___x_813_);
lean_dec_ref(v___x_813_);
v_x_804_ = v___x_814_;
v_x_805_ = v_tail_807_;
goto _start;
}
else
{
lean_object* v_tail_816_; 
v_tail_816_ = lean_ctor_get(v_x_805_, 1);
v_x_805_ = v_tail_816_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg___boxed(lean_object* v_x_818_, lean_object* v_x_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg(v_x_818_, v_x_819_);
lean_dec(v_x_819_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_node___redArg(lean_object* v_out_825_, lean_object* v_x_826_){
_start:
{
if (lean_obj_tag(v_x_826_) == 0)
{
lean_object* v_s_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v_s_827_ = lean_ctor_get(v_x_826_, 0);
lean_inc_ref(v_s_827_);
lean_dec_ref_known(v_x_826_, 1);
v___x_828_ = l_Lasm_UI_Render_escapeText(v_s_827_);
v___x_829_ = lean_string_append(v_out_825_, v___x_828_);
lean_dec_ref(v___x_828_);
return v___x_829_;
}
else
{
uint8_t v_ns_830_; lean_object* v_tag_831_; lean_object* v_attrs_832_; lean_object* v_children_833_; lean_object* v___y_835_; lean_object* v___y_836_; lean_object* v_p_841_; lean_object* v_attrs_842_; lean_object* v_styles_843_; lean_object* v_content_844_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___y_858_; lean_object* v___x_868_; lean_object* v___x_869_; uint8_t v___x_870_; 
v_ns_830_ = lean_ctor_get_uint8(v_x_826_, sizeof(void*)*4);
v_tag_831_ = lean_ctor_get(v_x_826_, 0);
lean_inc_ref(v_tag_831_);
v_attrs_832_ = lean_ctor_get(v_x_826_, 2);
lean_inc(v_attrs_832_);
v_children_833_ = lean_ctor_get(v_x_826_, 3);
lean_inc(v_children_833_);
lean_dec_ref_known(v_x_826_, 4);
v_p_841_ = l_Lasm_UI_Render_parts___redArg(v_tag_831_, v_attrs_832_);
v_attrs_842_ = lean_ctor_get(v_p_841_, 0);
lean_inc_ref(v_attrs_842_);
v_styles_843_ = lean_ctor_get(v_p_841_, 1);
lean_inc_ref(v_styles_843_);
v_content_844_ = lean_ctor_get(v_p_841_, 2);
lean_inc(v_content_844_);
lean_dec_ref(v_p_841_);
v___x_853_ = ((lean_object*)(l_Lasm_UI_Render_node___redArg___closed__0));
v___x_854_ = lean_string_append(v_out_825_, v___x_853_);
v___x_855_ = lean_string_append(v___x_854_, v_tag_831_);
v___x_856_ = lean_string_append(v___x_855_, v_attrs_842_);
lean_dec_ref(v_attrs_842_);
v___x_868_ = lean_string_utf8_byte_size(v_styles_843_);
v___x_869_ = lean_unsigned_to_nat(0u);
v___x_870_ = lean_nat_dec_eq(v___x_868_, v___x_869_);
if (v___x_870_ == 0)
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_871_ = ((lean_object*)(l_Lasm_UI_Render_node___redArg___closed__2));
v___x_872_ = l_Lasm_UI_Render_escapeAttr(v_styles_843_);
v___x_873_ = lean_string_append(v___x_871_, v___x_872_);
lean_dec_ref(v___x_872_);
v___x_874_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__2));
v___x_875_ = lean_string_append(v___x_873_, v___x_874_);
v___y_858_ = v___x_875_;
goto v___jp_857_;
}
else
{
lean_object* v___x_876_; 
lean_dec_ref(v_styles_843_);
v___x_876_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___y_858_ = v___x_876_;
goto v___jp_857_;
}
v___jp_834_:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_837_ = ((lean_object*)(l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__0));
v___x_838_ = lean_string_append(v___y_836_, v___x_837_);
v___x_839_ = lean_string_append(v___x_838_, v_tag_831_);
lean_dec_ref(v_tag_831_);
v___x_840_ = lean_string_append(v___x_839_, v___y_835_);
return v___x_840_;
}
v___jp_845_:
{
if (lean_obj_tag(v_content_844_) == 0)
{
uint8_t v___x_848_; 
v___x_848_ = l_Lasm_UI_Render_rawText(v_tag_831_);
if (v___x_848_ == 0)
{
lean_object* v___x_849_; 
v___x_849_ = l_Lasm_UI_Render_children___redArg(v___y_847_, v___x_848_, v_children_833_);
v___y_835_ = v___y_846_;
v___y_836_ = v___x_849_;
goto v___jp_834_;
}
else
{
lean_object* v___x_850_; 
v___x_850_ = l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg(v___y_847_, v_children_833_);
lean_dec(v_children_833_);
v___y_835_ = v___y_846_;
v___y_836_ = v___x_850_;
goto v___jp_834_;
}
}
else
{
lean_object* v_val_851_; lean_object* v___x_852_; 
lean_dec(v_children_833_);
v_val_851_ = lean_ctor_get(v_content_844_, 0);
lean_inc(v_val_851_);
lean_dec_ref_known(v_content_844_, 1);
v___x_852_ = lean_string_append(v___y_847_, v_val_851_);
lean_dec(v_val_851_);
v___y_835_ = v___y_846_;
v___y_836_ = v___x_852_;
goto v___jp_834_;
}
}
v___jp_857_:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v_out_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; 
v___x_859_ = lean_string_append(v___x_856_, v___y_858_);
lean_dec_ref(v___y_858_);
v___x_860_ = ((lean_object*)(l_Lasm_UI_Render_node___redArg___closed__1));
v_out_861_ = lean_string_append(v___x_859_, v___x_860_);
v___x_862_ = lean_box(v_ns_830_);
v___x_863_ = lean_obj_tag_nat(v___x_862_);
lean_dec(v___x_862_);
v___x_864_ = lean_unsigned_to_nat(0u);
v___x_865_ = lean_nat_dec_eq(v___x_863_, v___x_864_);
if (v___x_865_ == 0)
{
v___y_846_ = v___x_860_;
v___y_847_ = v_out_861_;
goto v___jp_845_;
}
else
{
lean_object* v___x_866_; uint8_t v___x_867_; 
v___x_866_ = l_Lasm_UI_voidTags;
v___x_867_ = l_List_elem___at___00Lasm_UI_Render_node_spec__2(v_tag_831_, v___x_866_);
if (v___x_867_ == 0)
{
v___y_846_ = v___x_860_;
v___y_847_ = v_out_861_;
goto v___jp_845_;
}
else
{
lean_dec(v_content_844_);
lean_dec(v_children_833_);
lean_dec_ref(v_tag_831_);
return v_out_861_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children___redArg(lean_object* v_out_877_, uint8_t v_afterText_878_, lean_object* v_x_879_){
_start:
{
if (lean_obj_tag(v_x_879_) == 0)
{
return v_out_877_;
}
else
{
lean_object* v_head_880_; 
v_head_880_ = lean_ctor_get(v_x_879_, 0);
lean_inc(v_head_880_);
if (lean_obj_tag(v_head_880_) == 0)
{
lean_object* v_tail_881_; uint8_t v___x_882_; lean_object* v___y_884_; 
v_tail_881_ = lean_ctor_get(v_x_879_, 1);
lean_inc(v_tail_881_);
lean_dec_ref_known(v_x_879_, 2);
v___x_882_ = 1;
if (v_afterText_878_ == 0)
{
v___y_884_ = v_out_877_;
goto v___jp_883_;
}
else
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = ((lean_object*)(l_Lasm_UI_Render_children___redArg___closed__0));
v___x_888_ = lean_string_append(v_out_877_, v___x_887_);
v___y_884_ = v___x_888_;
goto v___jp_883_;
}
v___jp_883_:
{
lean_object* v___x_885_; 
v___x_885_ = l_Lasm_UI_Render_node___redArg(v___y_884_, v_head_880_);
v_out_877_ = v___x_885_;
v_afterText_878_ = v___x_882_;
v_x_879_ = v_tail_881_;
goto _start;
}
}
else
{
lean_object* v_tail_889_; lean_object* v___x_890_; uint8_t v___x_891_; 
v_tail_889_ = lean_ctor_get(v_x_879_, 1);
lean_inc(v_tail_889_);
lean_dec_ref_known(v_x_879_, 2);
v___x_890_ = l_Lasm_UI_Render_node___redArg(v_out_877_, v_head_880_);
v___x_891_ = 0;
v_out_877_ = v___x_890_;
v_afterText_878_ = v___x_891_;
v_x_879_ = v_tail_889_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children___redArg___boxed(lean_object* v_out_893_, lean_object* v_afterText_894_, lean_object* v_x_895_){
_start:
{
uint8_t v_afterText_boxed_896_; lean_object* v_res_897_; 
v_afterText_boxed_896_ = lean_unbox(v_afterText_894_);
v_res_897_ = l_Lasm_UI_Render_children___redArg(v_out_893_, v_afterText_boxed_896_, v_x_895_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children(lean_object* v_Msg_898_, lean_object* v_out_899_, uint8_t v_afterText_900_, lean_object* v_x_901_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l_Lasm_UI_Render_children___redArg(v_out_899_, v_afterText_900_, v_x_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children___boxed(lean_object* v_Msg_903_, lean_object* v_out_904_, lean_object* v_afterText_905_, lean_object* v_x_906_){
_start:
{
uint8_t v_afterText_boxed_907_; lean_object* v_res_908_; 
v_afterText_boxed_907_ = lean_unbox(v_afterText_905_);
v_res_908_ = l_Lasm_UI_Render_children(v_Msg_903_, v_out_904_, v_afterText_boxed_907_, v_x_906_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_node(lean_object* v_Msg_909_, lean_object* v_out_910_, lean_object* v_x_911_){
_start:
{
lean_object* v___x_912_; 
v___x_912_ = l_Lasm_UI_Render_node___redArg(v_out_910_, v_x_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0(lean_object* v_s_913_, lean_object* v_pattern_914_, lean_object* v_replacement_915_){
_start:
{
lean_object* v___x_916_; 
v___x_916_ = l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg(v_s_913_, v_replacement_915_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___boxed(lean_object* v_s_917_, lean_object* v_pattern_918_, lean_object* v_replacement_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0(v_s_917_, v_pattern_918_, v_replacement_919_);
lean_dec_ref(v_replacement_919_);
lean_dec_ref(v_pattern_918_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1(lean_object* v_Msg_921_, lean_object* v_x_922_, lean_object* v_x_923_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg(v_x_922_, v_x_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1___boxed(lean_object* v_Msg_925_, lean_object* v_x_926_, lean_object* v_x_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l_List_foldl___at___00Lasm_UI_Render_node_spec__1(v_Msg_925_, v_x_926_, v_x_927_);
lean_dec(v_x_927_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1(lean_object* v_s_929_, lean_object* v_replacement_930_, lean_object* v_inst_931_, lean_object* v_R_932_, lean_object* v_a_933_, lean_object* v_b_934_, lean_object* v_c_935_){
_start:
{
lean_object* v___x_936_; 
v___x_936_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg(v_s_929_, v_replacement_930_, v_a_933_, v_b_934_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___boxed(lean_object* v_s_937_, lean_object* v_replacement_938_, lean_object* v_inst_939_, lean_object* v_R_940_, lean_object* v_a_941_, lean_object* v_b_942_, lean_object* v_c_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1(v_s_937_, v_replacement_938_, v_inst_939_, v_R_940_, v_a_941_, v_b_942_, v_c_943_);
lean_dec_ref(v_replacement_938_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__4_splitter___redArg(lean_object* v_x_945_, lean_object* v_h__1_946_, lean_object* v_h__2_947_){
_start:
{
if (lean_obj_tag(v_x_945_) == 0)
{
lean_object* v_s_948_; lean_object* v___x_949_; 
lean_dec(v_h__2_947_);
v_s_948_ = lean_ctor_get(v_x_945_, 0);
lean_inc_ref(v_s_948_);
lean_dec_ref_known(v_x_945_, 1);
v___x_949_ = lean_apply_1(v_h__1_946_, v_s_948_);
return v___x_949_;
}
else
{
uint8_t v_ns_950_; lean_object* v_tag_951_; lean_object* v_key_952_; lean_object* v_attrs_953_; lean_object* v_children_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
lean_dec(v_h__1_946_);
v_ns_950_ = lean_ctor_get_uint8(v_x_945_, sizeof(void*)*4);
v_tag_951_ = lean_ctor_get(v_x_945_, 0);
lean_inc_ref(v_tag_951_);
v_key_952_ = lean_ctor_get(v_x_945_, 1);
lean_inc(v_key_952_);
v_attrs_953_ = lean_ctor_get(v_x_945_, 2);
lean_inc(v_attrs_953_);
v_children_954_ = lean_ctor_get(v_x_945_, 3);
lean_inc(v_children_954_);
lean_dec_ref_known(v_x_945_, 4);
v___x_955_ = lean_box(v_ns_950_);
v___x_956_ = lean_apply_5(v_h__2_947_, v___x_955_, v_tag_951_, v_key_952_, v_attrs_953_, v_children_954_);
return v___x_956_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__4_splitter(lean_object* v_Msg_957_, lean_object* v_motive_958_, lean_object* v_x_959_, lean_object* v_h__1_960_, lean_object* v_h__2_961_){
_start:
{
if (lean_obj_tag(v_x_959_) == 0)
{
lean_object* v_s_962_; lean_object* v___x_963_; 
lean_dec(v_h__2_961_);
v_s_962_ = lean_ctor_get(v_x_959_, 0);
lean_inc_ref(v_s_962_);
lean_dec_ref_known(v_x_959_, 1);
v___x_963_ = lean_apply_1(v_h__1_960_, v_s_962_);
return v___x_963_;
}
else
{
uint8_t v_ns_964_; lean_object* v_tag_965_; lean_object* v_key_966_; lean_object* v_attrs_967_; lean_object* v_children_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
lean_dec(v_h__1_960_);
v_ns_964_ = lean_ctor_get_uint8(v_x_959_, sizeof(void*)*4);
v_tag_965_ = lean_ctor_get(v_x_959_, 0);
lean_inc_ref(v_tag_965_);
v_key_966_ = lean_ctor_get(v_x_959_, 1);
lean_inc(v_key_966_);
v_attrs_967_ = lean_ctor_get(v_x_959_, 2);
lean_inc(v_attrs_967_);
v_children_968_ = lean_ctor_get(v_x_959_, 3);
lean_inc(v_children_968_);
lean_dec_ref_known(v_x_959_, 4);
v___x_969_ = lean_box(v_ns_964_);
v___x_970_ = lean_apply_5(v_h__2_961_, v___x_969_, v_tag_965_, v_key_966_, v_attrs_967_, v_children_968_);
return v___x_970_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_parts_match__1_splitter___redArg(lean_object* v_x_971_, lean_object* v_h__1_972_, lean_object* v_h__2_973_){
_start:
{
if (lean_obj_tag(v_x_971_) == 0)
{
lean_object* v___x_974_; lean_object* v___x_975_; 
lean_dec(v_h__1_972_);
v___x_974_ = lean_box(0);
v___x_975_ = lean_apply_1(v_h__2_973_, v___x_974_);
return v___x_975_;
}
else
{
lean_object* v_val_976_; lean_object* v___x_977_; 
lean_dec(v_h__2_973_);
v_val_976_ = lean_ctor_get(v_x_971_, 0);
lean_inc(v_val_976_);
lean_dec_ref_known(v_x_971_, 1);
v___x_977_ = lean_apply_1(v_h__1_972_, v_val_976_);
return v___x_977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_parts_match__1_splitter(lean_object* v_motive_978_, lean_object* v_x_979_, lean_object* v_h__1_980_, lean_object* v_h__2_981_){
_start:
{
if (lean_obj_tag(v_x_979_) == 0)
{
lean_object* v___x_982_; lean_object* v___x_983_; 
lean_dec(v_h__1_980_);
v___x_982_ = lean_box(0);
v___x_983_ = lean_apply_1(v_h__2_981_, v___x_982_);
return v___x_983_;
}
else
{
lean_object* v_val_984_; lean_object* v___x_985_; 
lean_dec(v_h__2_981_);
v_val_984_ = lean_ctor_get(v_x_979_, 0);
lean_inc(v_val_984_);
lean_dec_ref_known(v_x_979_, 1);
v___x_985_ = lean_apply_1(v_h__1_980_, v_val_984_);
return v___x_985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__List_map__unattach_match__1_splitter___redArg(lean_object* v_x_986_, lean_object* v_h__1_987_){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = lean_apply_2(v_h__1_987_, v_x_986_, lean_box(0));
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__List_map__unattach_match__1_splitter(lean_object* v_00_u03b1_989_, lean_object* v_P_990_, lean_object* v_motive_991_, lean_object* v_x_992_, lean_object* v_h__1_993_){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = lean_apply_2(v_h__1_993_, v_x_992_, lean_box(0));
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__1_splitter___redArg(lean_object* v_c_995_, lean_object* v_h__1_996_, lean_object* v_h__2_997_){
_start:
{
if (lean_obj_tag(v_c_995_) == 0)
{
lean_object* v_s_998_; lean_object* v___x_999_; 
lean_dec(v_h__2_997_);
v_s_998_ = lean_ctor_get(v_c_995_, 0);
lean_inc_ref(v_s_998_);
lean_dec_ref_known(v_c_995_, 1);
v___x_999_ = lean_apply_1(v_h__1_996_, v_s_998_);
return v___x_999_;
}
else
{
lean_object* v___x_1000_; 
lean_dec(v_h__1_996_);
v___x_1000_ = lean_apply_2(v_h__2_997_, v_c_995_, lean_box(0));
return v___x_1000_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__1_splitter(lean_object* v_Msg_1001_, lean_object* v_motive_1002_, lean_object* v_c_1003_, lean_object* v_h__1_1004_, lean_object* v_h__2_1005_){
_start:
{
if (lean_obj_tag(v_c_1003_) == 0)
{
lean_object* v_s_1006_; lean_object* v___x_1007_; 
lean_dec(v_h__2_1005_);
v_s_1006_ = lean_ctor_get(v_c_1003_, 0);
lean_inc_ref(v_s_1006_);
lean_dec_ref_known(v_c_1003_, 1);
v___x_1007_ = lean_apply_1(v_h__1_1004_, v_s_1006_);
return v___x_1007_;
}
else
{
lean_object* v___x_1008_; 
lean_dec(v_h__1_1004_);
v___x_1008_ = lean_apply_2(v_h__2_1005_, v_c_1003_, lean_box(0));
return v___x_1008_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_children_match__1_splitter___redArg(lean_object* v_x_1009_, lean_object* v_h__1_1010_, lean_object* v_h__2_1011_, lean_object* v_h__3_1012_){
_start:
{
if (lean_obj_tag(v_x_1009_) == 0)
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
lean_dec(v_h__3_1012_);
lean_dec(v_h__2_1011_);
v___x_1013_ = lean_box(0);
v___x_1014_ = lean_apply_1(v_h__1_1010_, v___x_1013_);
return v___x_1014_;
}
else
{
lean_object* v_head_1015_; 
lean_dec(v_h__1_1010_);
v_head_1015_ = lean_ctor_get(v_x_1009_, 0);
lean_inc(v_head_1015_);
if (lean_obj_tag(v_head_1015_) == 0)
{
lean_object* v_tail_1016_; lean_object* v_s_1017_; lean_object* v___x_1018_; 
lean_dec(v_h__3_1012_);
v_tail_1016_ = lean_ctor_get(v_x_1009_, 1);
lean_inc(v_tail_1016_);
lean_dec_ref_known(v_x_1009_, 2);
v_s_1017_ = lean_ctor_get(v_head_1015_, 0);
lean_inc_ref(v_s_1017_);
lean_dec_ref_known(v_head_1015_, 1);
v___x_1018_ = lean_apply_2(v_h__2_1011_, v_s_1017_, v_tail_1016_);
return v___x_1018_;
}
else
{
lean_object* v_tail_1019_; lean_object* v___x_1020_; 
lean_dec(v_h__2_1011_);
v_tail_1019_ = lean_ctor_get(v_x_1009_, 1);
lean_inc(v_tail_1019_);
lean_dec_ref_known(v_x_1009_, 2);
v___x_1020_ = lean_apply_3(v_h__3_1012_, v_head_1015_, v_tail_1019_, lean_box(0));
return v___x_1020_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_children_match__1_splitter(lean_object* v_Msg_1021_, lean_object* v_motive_1022_, lean_object* v_x_1023_, lean_object* v_h__1_1024_, lean_object* v_h__2_1025_, lean_object* v_h__3_1026_){
_start:
{
if (lean_obj_tag(v_x_1023_) == 0)
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
lean_dec(v_h__3_1026_);
lean_dec(v_h__2_1025_);
v___x_1027_ = lean_box(0);
v___x_1028_ = lean_apply_1(v_h__1_1024_, v___x_1027_);
return v___x_1028_;
}
else
{
lean_object* v_head_1029_; 
lean_dec(v_h__1_1024_);
v_head_1029_ = lean_ctor_get(v_x_1023_, 0);
lean_inc(v_head_1029_);
if (lean_obj_tag(v_head_1029_) == 0)
{
lean_object* v_tail_1030_; lean_object* v_s_1031_; lean_object* v___x_1032_; 
lean_dec(v_h__3_1026_);
v_tail_1030_ = lean_ctor_get(v_x_1023_, 1);
lean_inc(v_tail_1030_);
lean_dec_ref_known(v_x_1023_, 2);
v_s_1031_ = lean_ctor_get(v_head_1029_, 0);
lean_inc_ref(v_s_1031_);
lean_dec_ref_known(v_head_1029_, 1);
v___x_1032_ = lean_apply_2(v_h__2_1025_, v_s_1031_, v_tail_1030_);
return v___x_1032_;
}
else
{
lean_object* v_tail_1033_; lean_object* v___x_1034_; 
lean_dec(v_h__2_1025_);
v_tail_1033_ = lean_ctor_get(v_x_1023_, 1);
lean_inc(v_tail_1033_);
lean_dec_ref_known(v_x_1023_, 2);
v___x_1034_ = lean_apply_3(v_h__3_1026_, v_head_1029_, v_tail_1033_, lean_box(0));
return v___x_1034_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_render___redArg(lean_object* v_h_1035_){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___x_1037_ = l_Lasm_UI_Render_node___redArg(v___x_1036_, v_h_1035_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_render(lean_object* v_Msg_1038_, lean_object* v_h_1039_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lasm_UI_render___redArg(v_h_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage___redArg(lean_object* v_title_1046_, lean_object* v_body_1047_, lean_object* v_head_1048_, lean_object* v_mountId_1049_){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1050_ = ((lean_object*)(l_Lasm_UI_renderPage___redArg___closed__0));
v___x_1051_ = l_Lasm_UI_Render_escapeText(v_title_1046_);
v___x_1052_ = lean_string_append(v___x_1050_, v___x_1051_);
lean_dec_ref(v___x_1051_);
v___x_1053_ = ((lean_object*)(l_Lasm_UI_renderPage___redArg___closed__1));
v___x_1054_ = lean_string_append(v___x_1052_, v___x_1053_);
v___x_1055_ = lean_string_append(v___x_1054_, v_head_1048_);
v___x_1056_ = ((lean_object*)(l_Lasm_UI_renderPage___redArg___closed__2));
v___x_1057_ = lean_string_append(v___x_1055_, v___x_1056_);
v___x_1058_ = l_Lasm_UI_Render_escapeAttr(v_mountId_1049_);
v___x_1059_ = lean_string_append(v___x_1057_, v___x_1058_);
lean_dec_ref(v___x_1058_);
v___x_1060_ = ((lean_object*)(l_Lasm_UI_renderPage___redArg___closed__3));
v___x_1061_ = lean_string_append(v___x_1059_, v___x_1060_);
v___x_1062_ = l_Lasm_UI_render___redArg(v_body_1047_);
v___x_1063_ = lean_string_append(v___x_1061_, v___x_1062_);
lean_dec_ref(v___x_1062_);
v___x_1064_ = ((lean_object*)(l_Lasm_UI_renderPage___redArg___closed__4));
v___x_1065_ = lean_string_append(v___x_1063_, v___x_1064_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage___redArg___boxed(lean_object* v_title_1066_, lean_object* v_body_1067_, lean_object* v_head_1068_, lean_object* v_mountId_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Lasm_UI_renderPage___redArg(v_title_1066_, v_body_1067_, v_head_1068_, v_mountId_1069_);
lean_dec_ref(v_head_1068_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage(lean_object* v_Msg_1071_, lean_object* v_title_1072_, lean_object* v_body_1073_, lean_object* v_head_1074_, lean_object* v_mountId_1075_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lasm_UI_renderPage___redArg(v_title_1072_, v_body_1073_, v_head_1074_, v_mountId_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage___boxed(lean_object* v_Msg_1077_, lean_object* v_title_1078_, lean_object* v_body_1079_, lean_object* v_head_1080_, lean_object* v_mountId_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l_Lasm_UI_renderPage(v_Msg_1077_, v_title_1078_, v_body_1079_, v_head_1080_, v_mountId_1081_);
lean_dec_ref(v_head_1080_);
return v_res_1082_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_UI_Html(uint8_t builtin);
lean_object* initialize_Lasm_UI_Elements(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Render(uint8_t builtin) {
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
res = initialize_Lasm_UI_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Elements(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
