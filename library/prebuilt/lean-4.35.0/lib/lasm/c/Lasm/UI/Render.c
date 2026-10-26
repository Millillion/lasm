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
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lasm_UI_Ns_ctorIdx(uint8_t);
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
static lean_once_cell_t l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1;
static lean_once_cell_t l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3;
static lean_once_cell_t l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__4;
static lean_once_cell_t l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__5;
static const lean_ctor_object l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__6 = (const lean_object*)&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__6_value;
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
static lean_once_cell_t l_Lasm_UI_Render_node___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Render_node___redArg___closed__2;
static const lean_string_object l_Lasm_UI_Render_node___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " style=\""};
static const lean_object* l_Lasm_UI_Render_node___redArg___closed__3 = (const lean_object*)&l_Lasm_UI_Render_node___redArg___closed__3_value;
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
lean_object* v___x_41_; uint8_t v___y_43_; uint32_t v___x_47_; uint32_t v___x_48_; uint8_t v___x_49_; 
v___x_41_ = lean_nat_add(v_startInclusive_37_, v_a_34_);
lean_dec(v_a_34_);
v___x_47_ = lean_string_utf8_get_fast(v_str_36_, v___x_41_);
v___x_48_ = 38;
v___x_49_ = lean_uint32_dec_eq(v___x_47_, v___x_48_);
if (v___x_49_ == 0)
{
uint32_t v___x_50_; uint8_t v___x_51_; 
v___x_50_ = 60;
v___x_51_ = lean_uint32_dec_eq(v___x_47_, v___x_50_);
if (v___x_51_ == 0)
{
uint32_t v___x_52_; uint8_t v___x_53_; 
v___x_52_ = 62;
v___x_53_ = lean_uint32_dec_eq(v___x_47_, v___x_52_);
v___y_43_ = v___x_53_;
goto v___jp_42_;
}
else
{
v___y_43_ = v___x_51_;
goto v___jp_42_;
}
}
else
{
v___y_43_ = v___x_49_;
goto v___jp_42_;
}
v___jp_42_:
{
if (v___y_43_ == 0)
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_string_utf8_next_fast(v_str_36_, v___x_41_);
lean_dec(v___x_41_);
v___x_45_ = lean_nat_sub(v___x_44_, v_startInclusive_37_);
v_a_34_ = v___x_45_;
v_b_35_ = v_decide_40_;
goto _start;
}
else
{
lean_dec(v___x_41_);
return v___y_43_;
}
}
}
else
{
lean_dec(v_a_34_);
return v_b_35_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___redArg___boxed(lean_object* v_s_54_, lean_object* v_a_55_, lean_object* v_b_56_){
_start:
{
uint8_t v_b_boxed_57_; uint8_t v_res_58_; lean_object* v_r_59_; 
v_b_boxed_57_ = lean_unbox(v_b_56_);
v_res_58_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___redArg(v_s_54_, v_a_55_, v_b_boxed_57_);
lean_dec_ref(v_s_54_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0(lean_object* v_s_60_){
_start:
{
lean_object* v_searcher_61_; uint8_t v___x_62_; uint8_t v___x_63_; 
v_searcher_61_ = lean_unsigned_to_nat(0u);
v___x_62_ = 0;
v___x_63_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___redArg(v_s_60_, v_searcher_61_, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0___boxed(lean_object* v_s_64_){
_start:
{
uint8_t v_res_65_; lean_object* v_r_66_; 
v_res_65_ = l_String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0(v_s_64_);
lean_dec_ref(v_s_64_);
v_r_66_ = lean_box(v_res_65_);
return v_r_66_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_escapeText(lean_object* v_s_68_){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = lean_string_utf8_byte_size(v_s_68_);
lean_inc_ref(v_s_68_);
v___x_71_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_71_, 0, v_s_68_);
lean_ctor_set(v___x_71_, 1, v___x_69_);
lean_ctor_set(v___x_71_, 2, v___x_70_);
v___x_72_ = l_String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0(v___x_71_);
lean_dec_ref_known(v___x_71_, 3);
if (v___x_72_ == 0)
{
return v_s_68_;
}
else
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___x_74_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg(v___x_70_, v_s_68_, v___x_69_, v___x_73_);
lean_dec_ref(v_s_68_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1(lean_object* v___x_75_, lean_object* v___x_76_, lean_object* v_s_77_, lean_object* v_inst_78_, lean_object* v_R_79_, lean_object* v_a_80_, lean_object* v_b_81_, lean_object* v_c_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg(v___x_76_, v_s_77_, v_a_80_, v_b_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___boxed(lean_object* v___x_84_, lean_object* v___x_85_, lean_object* v_s_86_, lean_object* v_inst_87_, lean_object* v_R_88_, lean_object* v_a_89_, lean_object* v_b_90_, lean_object* v_c_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1(v___x_84_, v___x_85_, v_s_86_, v_inst_87_, v_R_88_, v_a_89_, v_b_90_, v_c_91_);
lean_dec_ref(v_s_86_);
lean_dec(v___x_85_);
lean_dec_ref(v___x_84_);
return v_res_92_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0(lean_object* v_s_93_, lean_object* v_inst_94_, lean_object* v_R_95_, lean_object* v_a_96_, uint8_t v_b_97_, lean_object* v_c_98_){
_start:
{
uint8_t v___x_99_; 
v___x_99_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___redArg(v_s_93_, v_a_96_, v_b_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0___boxed(lean_object* v_s_100_, lean_object* v_inst_101_, lean_object* v_R_102_, lean_object* v_a_103_, lean_object* v_b_104_, lean_object* v_c_105_){
_start:
{
uint8_t v_b_boxed_106_; uint8_t v_res_107_; lean_object* v_r_108_; 
v_b_boxed_106_ = lean_unbox(v_b_104_);
v_res_107_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeText_spec__0_spec__0(v_s_100_, v_inst_101_, v_R_102_, v_a_103_, v_b_boxed_106_, v_c_105_);
lean_dec_ref(v_s_100_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg(lean_object* v___x_110_, lean_object* v_s_111_, lean_object* v_a_112_, lean_object* v_b_113_){
_start:
{
uint8_t v_decide_114_; 
v_decide_114_ = lean_nat_dec_eq(v_a_112_, v___x_110_);
if (v_decide_114_ == 0)
{
uint32_t v___x_115_; lean_object* v___x_116_; uint32_t v___x_117_; uint8_t v___x_118_; 
v___x_115_ = lean_string_utf8_get_fast(v_s_111_, v_a_112_);
v___x_116_ = lean_string_utf8_next_fast(v_s_111_, v_a_112_);
lean_dec(v_a_112_);
v___x_117_ = 38;
v___x_118_ = lean_uint32_dec_eq(v___x_115_, v___x_117_);
if (v___x_118_ == 0)
{
uint32_t v___x_119_; uint8_t v___x_120_; 
v___x_119_ = 34;
v___x_120_ = lean_uint32_dec_eq(v___x_115_, v___x_119_);
if (v___x_120_ == 0)
{
uint32_t v___x_121_; uint8_t v___x_122_; 
v___x_121_ = 60;
v___x_122_ = lean_uint32_dec_eq(v___x_115_, v___x_121_);
if (v___x_122_ == 0)
{
uint32_t v___x_123_; uint8_t v___x_124_; 
v___x_123_ = 62;
v___x_124_ = lean_uint32_dec_eq(v___x_115_, v___x_123_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; 
v___x_125_ = lean_string_push(v_b_113_, v___x_115_);
v_a_112_ = v___x_116_;
v_b_113_ = v___x_125_;
goto _start;
}
else
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__0));
v___x_128_ = lean_string_append(v_b_113_, v___x_127_);
v_a_112_ = v___x_116_;
v_b_113_ = v___x_128_;
goto _start;
}
}
else
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__1));
v___x_131_ = lean_string_append(v_b_113_, v___x_130_);
v_a_112_ = v___x_116_;
v_b_113_ = v___x_131_;
goto _start;
}
}
else
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg___closed__0));
v___x_134_ = lean_string_append(v_b_113_, v___x_133_);
v_a_112_ = v___x_116_;
v_b_113_ = v___x_134_;
goto _start;
}
}
else
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeText_spec__1___redArg___closed__2));
v___x_137_ = lean_string_append(v_b_113_, v___x_136_);
v_a_112_ = v___x_116_;
v_b_113_ = v___x_137_;
goto _start;
}
}
else
{
lean_dec(v_a_112_);
return v_b_113_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg___boxed(lean_object* v___x_139_, lean_object* v_s_140_, lean_object* v_a_141_, lean_object* v_b_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg(v___x_139_, v_s_140_, v_a_141_, v_b_142_);
lean_dec_ref(v_s_140_);
lean_dec(v___x_139_);
return v_res_143_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg(lean_object* v_s_144_, lean_object* v_a_145_, uint8_t v_b_146_){
_start:
{
lean_object* v_str_147_; lean_object* v_startInclusive_148_; lean_object* v_endExclusive_149_; lean_object* v___x_150_; uint8_t v_decide_151_; 
v_str_147_ = lean_ctor_get(v_s_144_, 0);
v_startInclusive_148_ = lean_ctor_get(v_s_144_, 1);
v_endExclusive_149_ = lean_ctor_get(v_s_144_, 2);
v___x_150_ = lean_nat_sub(v_endExclusive_149_, v_startInclusive_148_);
v_decide_151_ = lean_nat_dec_eq(v_a_145_, v___x_150_);
lean_dec(v___x_150_);
if (v_decide_151_ == 0)
{
lean_object* v___x_152_; uint8_t v___y_154_; uint32_t v___x_158_; uint32_t v___x_159_; uint8_t v___x_160_; 
v___x_152_ = lean_nat_add(v_startInclusive_148_, v_a_145_);
lean_dec(v_a_145_);
v___x_158_ = lean_string_utf8_get_fast(v_str_147_, v___x_152_);
v___x_159_ = 38;
v___x_160_ = lean_uint32_dec_eq(v___x_158_, v___x_159_);
if (v___x_160_ == 0)
{
uint32_t v___x_161_; uint8_t v___x_162_; 
v___x_161_ = 34;
v___x_162_ = lean_uint32_dec_eq(v___x_158_, v___x_161_);
if (v___x_162_ == 0)
{
uint32_t v___x_163_; uint8_t v___x_164_; 
v___x_163_ = 60;
v___x_164_ = lean_uint32_dec_eq(v___x_158_, v___x_163_);
if (v___x_164_ == 0)
{
uint32_t v___x_165_; uint8_t v___x_166_; 
v___x_165_ = 62;
v___x_166_ = lean_uint32_dec_eq(v___x_158_, v___x_165_);
v___y_154_ = v___x_166_;
goto v___jp_153_;
}
else
{
v___y_154_ = v___x_164_;
goto v___jp_153_;
}
}
else
{
v___y_154_ = v___x_162_;
goto v___jp_153_;
}
}
else
{
v___y_154_ = v___x_160_;
goto v___jp_153_;
}
v___jp_153_:
{
if (v___y_154_ == 0)
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_string_utf8_next_fast(v_str_147_, v___x_152_);
lean_dec(v___x_152_);
v___x_156_ = lean_nat_sub(v___x_155_, v_startInclusive_148_);
v_a_145_ = v___x_156_;
v_b_146_ = v_decide_151_;
goto _start;
}
else
{
lean_dec(v___x_152_);
return v___y_154_;
}
}
}
else
{
lean_dec(v_a_145_);
return v_b_146_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg___boxed(lean_object* v_s_167_, lean_object* v_a_168_, lean_object* v_b_169_){
_start:
{
uint8_t v_b_boxed_170_; uint8_t v_res_171_; lean_object* v_r_172_; 
v_b_boxed_170_ = lean_unbox(v_b_169_);
v_res_171_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg(v_s_167_, v_a_168_, v_b_boxed_170_);
lean_dec_ref(v_s_167_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0(lean_object* v_s_173_){
_start:
{
lean_object* v_searcher_174_; uint8_t v___x_175_; uint8_t v___x_176_; 
v_searcher_174_ = lean_unsigned_to_nat(0u);
v___x_175_ = 0;
v___x_176_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg(v_s_173_, v_searcher_174_, v___x_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0___boxed(lean_object* v_s_177_){
_start:
{
uint8_t v_res_178_; lean_object* v_r_179_; 
v_res_178_ = l_String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0(v_s_177_);
lean_dec_ref(v_s_177_);
v_r_179_ = lean_box(v_res_178_);
return v_r_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_escapeAttr(lean_object* v_s_180_){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_181_ = lean_unsigned_to_nat(0u);
v___x_182_ = lean_string_utf8_byte_size(v_s_180_);
lean_inc_ref(v_s_180_);
v___x_183_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_183_, 0, v_s_180_);
lean_ctor_set(v___x_183_, 1, v___x_181_);
lean_ctor_set(v___x_183_, 2, v___x_182_);
v___x_184_ = l_String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0(v___x_183_);
lean_dec_ref_known(v___x_183_, 3);
if (v___x_184_ == 0)
{
return v_s_180_;
}
else
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___x_186_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg(v___x_182_, v_s_180_, v___x_181_, v___x_185_);
lean_dec_ref(v_s_180_);
return v___x_186_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1(lean_object* v___x_187_, lean_object* v___x_188_, lean_object* v_s_189_, lean_object* v_inst_190_, lean_object* v_R_191_, lean_object* v_a_192_, lean_object* v_b_193_, lean_object* v_c_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___redArg(v___x_188_, v_s_189_, v_a_192_, v_b_193_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1___boxed(lean_object* v___x_196_, lean_object* v___x_197_, lean_object* v_s_198_, lean_object* v_inst_199_, lean_object* v_R_200_, lean_object* v_a_201_, lean_object* v_b_202_, lean_object* v_c_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Render_escapeAttr_spec__1(v___x_196_, v___x_197_, v_s_198_, v_inst_199_, v_R_200_, v_a_201_, v_b_202_, v_c_203_);
lean_dec_ref(v_s_198_);
lean_dec(v___x_197_);
lean_dec_ref(v___x_196_);
return v_res_204_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0(lean_object* v_s_205_, lean_object* v_inst_206_, lean_object* v_R_207_, lean_object* v_a_208_, uint8_t v_b_209_, lean_object* v_c_210_){
_start:
{
uint8_t v___x_211_; 
v___x_211_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___redArg(v_s_205_, v_a_208_, v_b_209_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0___boxed(lean_object* v_s_212_, lean_object* v_inst_213_, lean_object* v_R_214_, lean_object* v_a_215_, lean_object* v_b_216_, lean_object* v_c_217_){
_start:
{
uint8_t v_b_boxed_218_; uint8_t v_res_219_; lean_object* v_r_220_; 
v_b_boxed_218_ = lean_unbox(v_b_216_);
v_res_219_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Render_escapeAttr_spec__0_spec__0(v_s_212_, v_inst_213_, v_R_214_, v_a_215_, v_b_boxed_218_, v_c_217_);
lean_dec_ref(v_s_212_);
v_r_220_ = lean_box(v_res_219_);
return v_r_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_propAttribute(lean_object* v_x_294_){
_start:
{
lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_295_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__0));
v___x_296_ = lean_string_dec_eq(v_x_294_, v___x_295_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; uint8_t v___x_298_; 
v___x_297_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__1));
v___x_298_ = lean_string_dec_eq(v_x_294_, v___x_297_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__2));
v___x_300_ = lean_string_dec_eq(v_x_294_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_301_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__3));
v___x_302_ = lean_string_dec_eq(v_x_294_, v___x_301_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_303_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__4));
v___x_304_ = lean_string_dec_eq(v_x_294_, v___x_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_305_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__5));
v___x_306_ = lean_string_dec_eq(v_x_294_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_307_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__6));
v___x_308_ = lean_string_dec_eq(v_x_294_, v___x_307_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_309_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__7));
v___x_310_ = lean_string_dec_eq(v_x_294_, v___x_309_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__8));
v___x_312_ = lean_string_dec_eq(v_x_294_, v___x_311_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_313_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__9));
v___x_314_ = lean_string_dec_eq(v_x_294_, v___x_313_);
if (v___x_314_ == 0)
{
lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_315_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__10));
v___x_316_ = lean_string_dec_eq(v_x_294_, v___x_315_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__11));
v___x_318_ = lean_string_dec_eq(v_x_294_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_319_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__12));
v___x_320_ = lean_string_dec_eq(v_x_294_, v___x_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__13));
v___x_322_ = lean_string_dec_eq(v_x_294_, v___x_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_323_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__14));
v___x_324_ = lean_string_dec_eq(v_x_294_, v___x_323_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_325_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__15));
v___x_326_ = lean_string_dec_eq(v_x_294_, v___x_325_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_327_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__16));
v___x_328_ = lean_string_dec_eq(v_x_294_, v___x_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; uint8_t v___x_330_; 
v___x_329_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__17));
v___x_330_ = lean_string_dec_eq(v_x_294_, v___x_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_331_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__18));
v___x_332_ = lean_string_dec_eq(v_x_294_, v___x_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__19));
v___x_334_ = lean_string_dec_eq(v_x_294_, v___x_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_335_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__20));
v___x_336_ = lean_string_dec_eq(v_x_294_, v___x_335_);
if (v___x_336_ == 0)
{
lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_337_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__21));
v___x_338_ = lean_string_dec_eq(v_x_294_, v___x_337_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_339_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__22));
v___x_340_ = lean_string_dec_eq(v_x_294_, v___x_339_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; 
v___x_341_ = lean_box(0);
return v___x_341_;
}
else
{
lean_object* v___x_342_; 
v___x_342_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__23));
return v___x_342_;
}
}
else
{
lean_object* v___x_343_; 
v___x_343_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__24));
return v___x_343_;
}
}
else
{
lean_object* v___x_344_; 
v___x_344_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__25));
return v___x_344_;
}
}
else
{
lean_object* v___x_345_; 
v___x_345_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__27));
return v___x_345_;
}
}
else
{
lean_object* v___x_346_; 
v___x_346_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__28));
return v___x_346_;
}
}
else
{
lean_object* v___x_347_; 
v___x_347_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__29));
return v___x_347_;
}
}
else
{
lean_object* v___x_348_; 
v___x_348_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__30));
return v___x_348_;
}
}
else
{
lean_object* v___x_349_; 
v___x_349_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__31));
return v___x_349_;
}
}
else
{
lean_object* v___x_350_; 
v___x_350_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__32));
return v___x_350_;
}
}
else
{
lean_object* v___x_351_; 
v___x_351_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__33));
return v___x_351_;
}
}
else
{
lean_object* v___x_352_; 
v___x_352_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__34));
return v___x_352_;
}
}
else
{
lean_object* v___x_353_; 
v___x_353_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__35));
return v___x_353_;
}
}
else
{
lean_object* v___x_354_; 
v___x_354_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__36));
return v___x_354_;
}
}
else
{
lean_object* v___x_355_; 
v___x_355_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__37));
return v___x_355_;
}
}
else
{
lean_object* v___x_356_; 
v___x_356_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__38));
return v___x_356_;
}
}
else
{
lean_object* v___x_357_; 
v___x_357_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__40));
return v___x_357_;
}
}
else
{
lean_object* v___x_358_; 
v___x_358_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__41));
return v___x_358_;
}
}
else
{
lean_object* v___x_359_; 
v___x_359_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__42));
return v___x_359_;
}
}
else
{
lean_object* v___x_360_; 
v___x_360_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__43));
return v___x_360_;
}
}
else
{
lean_object* v___x_361_; 
v___x_361_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__44));
return v___x_361_;
}
}
else
{
lean_object* v___x_362_; 
v___x_362_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__45));
return v___x_362_;
}
}
else
{
lean_object* v___x_363_; 
v___x_363_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__47));
return v___x_363_;
}
}
else
{
lean_object* v___x_364_; 
v___x_364_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__49));
return v___x_364_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_propAttribute___boxed(lean_object* v_x_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lasm_UI_Render_propAttribute(v_x_365_);
lean_dec_ref(v_x_365_);
return v_res_366_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lasm_UI_Render_finalAttrs_spec__0(lean_object* v_a_367_, lean_object* v_x_368_){
_start:
{
if (lean_obj_tag(v_x_368_) == 0)
{
uint8_t v___x_369_; 
v___x_369_ = 0;
return v___x_369_;
}
else
{
lean_object* v_head_370_; lean_object* v_tail_371_; uint8_t v___x_372_; 
v_head_370_ = lean_ctor_get(v_x_368_, 0);
v_tail_371_ = lean_ctor_get(v_x_368_, 1);
v___x_372_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_a_367_, v_head_370_);
if (v___x_372_ == 0)
{
v_x_368_ = v_tail_371_;
goto _start;
}
else
{
return v___x_372_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lasm_UI_Render_finalAttrs_spec__0___boxed(lean_object* v_a_374_, lean_object* v_x_375_){
_start:
{
uint8_t v_res_376_; lean_object* v_r_377_; 
v_res_376_ = l_List_elem___at___00Lasm_UI_Render_finalAttrs_spec__0(v_a_374_, v_x_375_);
lean_dec(v_x_375_);
lean_dec_ref(v_a_374_);
v_r_377_ = lean_box(v_res_376_);
return v_r_377_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_finalAttrs_spec__1___redArg(lean_object* v_x_378_, lean_object* v_x_379_){
_start:
{
if (lean_obj_tag(v_x_379_) == 0)
{
return v_x_378_;
}
else
{
lean_object* v_head_380_; lean_object* v_tail_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_404_; 
v_head_380_ = lean_ctor_get(v_x_379_, 0);
v_tail_381_ = lean_ctor_get(v_x_379_, 1);
v_isSharedCheck_404_ = !lean_is_exclusive(v_x_379_);
if (v_isSharedCheck_404_ == 0)
{
v___x_383_ = v_x_379_;
v_isShared_384_ = v_isSharedCheck_404_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_tail_381_);
lean_inc(v_head_380_);
lean_dec(v_x_379_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_404_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v_fst_385_; lean_object* v_snd_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
v_fst_385_ = lean_ctor_get(v_x_378_, 0);
v_snd_386_ = lean_ctor_get(v_x_378_, 1);
v___x_387_ = l_Lasm_UI_Attr_key___redArg(v_head_380_);
v___x_388_ = l_List_elem___at___00Lasm_UI_Render_finalAttrs_spec__0(v___x_387_, v_fst_385_);
if (v___x_388_ == 0)
{
lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_400_; 
lean_inc(v_snd_386_);
lean_inc(v_fst_385_);
v_isSharedCheck_400_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_400_ == 0)
{
lean_object* v_unused_401_; lean_object* v_unused_402_; 
v_unused_401_ = lean_ctor_get(v_x_378_, 1);
lean_dec(v_unused_401_);
v_unused_402_ = lean_ctor_get(v_x_378_, 0);
lean_dec(v_unused_402_);
v___x_390_ = v_x_378_;
v_isShared_391_ = v_isSharedCheck_400_;
goto v_resetjp_389_;
}
else
{
lean_dec(v_x_378_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_400_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 1, v_fst_385_);
lean_ctor_set(v___x_383_, 0, v___x_387_);
v___x_393_ = v___x_383_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v___x_387_);
lean_ctor_set(v_reuseFailAlloc_399_, 1, v_fst_385_);
v___x_393_ = v_reuseFailAlloc_399_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_394_; lean_object* v___x_396_; 
v___x_394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_394_, 0, v_head_380_);
lean_ctor_set(v___x_394_, 1, v_snd_386_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 1, v___x_394_);
lean_ctor_set(v___x_390_, 0, v___x_393_);
v___x_396_ = v___x_390_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v___x_393_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v___x_394_);
v___x_396_ = v_reuseFailAlloc_398_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
v_x_378_ = v___x_396_;
v_x_379_ = v_tail_381_;
goto _start;
}
}
}
}
else
{
lean_dec_ref(v___x_387_);
lean_del_object(v___x_383_);
lean_dec(v_head_380_);
v_x_379_ = v_tail_381_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_finalAttrs___redArg(lean_object* v_attrs_407_){
_start:
{
lean_object* v_rev_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v_snd_411_; 
v_rev_408_ = l_List_reverse___redArg(v_attrs_407_);
v___x_409_ = ((lean_object*)(l_Lasm_UI_Render_finalAttrs___redArg___closed__0));
v___x_410_ = l_List_foldl___at___00Lasm_UI_Render_finalAttrs_spec__1___redArg(v___x_409_, v_rev_408_);
v_snd_411_ = lean_ctor_get(v___x_410_, 1);
lean_inc(v_snd_411_);
lean_dec_ref(v___x_410_);
return v_snd_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_finalAttrs(lean_object* v_Msg_412_, lean_object* v_attrs_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lasm_UI_Render_finalAttrs___redArg(v_attrs_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_finalAttrs_spec__1(lean_object* v_Msg_415_, lean_object* v_x_416_, lean_object* v_x_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_List_foldl___at___00Lasm_UI_Render_finalAttrs_spec__1___redArg(v_x_416_, v_x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg(lean_object* v_tag_428_, lean_object* v_x_429_, lean_object* v_x_430_){
_start:
{
if (lean_obj_tag(v_x_430_) == 0)
{
return v_x_429_;
}
else
{
lean_object* v_head_431_; lean_object* v_tail_432_; lean_object* v_n_434_; uint8_t v_b_435_; 
v_head_431_ = lean_ctor_get(v_x_430_, 0);
lean_inc(v_head_431_);
v_tail_432_ = lean_ctor_get(v_x_430_, 1);
lean_inc(v_tail_432_);
lean_dec_ref_known(v_x_430_, 2);
switch(lean_obj_tag(v_head_431_))
{
case 0:
{
lean_object* v_name_454_; lean_object* v_value_455_; lean_object* v_attrs_456_; lean_object* v_styles_457_; lean_object* v_content_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_475_; 
v_name_454_ = lean_ctor_get(v_head_431_, 0);
lean_inc_ref(v_name_454_);
v_value_455_ = lean_ctor_get(v_head_431_, 1);
lean_inc_ref(v_value_455_);
lean_dec_ref_known(v_head_431_, 2);
v_attrs_456_ = lean_ctor_get(v_x_429_, 0);
v_styles_457_ = lean_ctor_get(v_x_429_, 1);
v_content_458_ = lean_ctor_get(v_x_429_, 2);
v_isSharedCheck_475_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_475_ == 0)
{
v___x_460_ = v_x_429_;
v_isShared_461_ = v_isSharedCheck_475_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_content_458_);
lean_inc(v_styles_457_);
lean_inc(v_attrs_456_);
lean_dec(v_x_429_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_475_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_472_; 
v___x_462_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__0));
v___x_463_ = lean_string_append(v___x_462_, v_name_454_);
lean_dec_ref(v_name_454_);
v___x_464_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__1));
v___x_465_ = lean_string_append(v___x_463_, v___x_464_);
v___x_466_ = l_Lasm_UI_Render_escapeAttr(v_value_455_);
v___x_467_ = lean_string_append(v___x_465_, v___x_466_);
lean_dec_ref(v___x_466_);
v___x_468_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__2));
v___x_469_ = lean_string_append(v___x_467_, v___x_468_);
v___x_470_ = lean_string_append(v_attrs_456_, v___x_469_);
lean_dec_ref(v___x_469_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_470_);
v___x_472_ = v___x_460_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v___x_470_);
lean_ctor_set(v_reuseFailAlloc_474_, 1, v_styles_457_);
lean_ctor_set(v_reuseFailAlloc_474_, 2, v_content_458_);
v___x_472_ = v_reuseFailAlloc_474_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
v_x_429_ = v___x_472_;
v_x_430_ = v_tail_432_;
goto _start;
}
}
}
case 1:
{
lean_object* v_name_476_; lean_object* v_value_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v_name_476_ = lean_ctor_get(v_head_431_, 0);
lean_inc_ref(v_name_476_);
v_value_477_ = lean_ctor_get(v_head_431_, 1);
lean_inc_ref(v_value_477_);
lean_dec_ref_known(v_head_431_, 2);
v___x_478_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__3));
v___x_479_ = lean_string_dec_eq(v_name_476_, v___x_478_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_480_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__4));
v___x_481_ = lean_string_dec_eq(v_name_476_, v___x_480_);
if (v___x_481_ == 0)
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = ((lean_object*)(l_Lasm_UI_Render_propAttribute___closed__2));
v___x_483_ = lean_string_dec_eq(v_name_476_, v___x_482_);
if (v___x_483_ == 0)
{
if (lean_obj_tag(v_value_477_) == 0)
{
lean_object* v_s_484_; lean_object* v___x_485_; 
v_s_484_ = lean_ctor_get(v_value_477_, 0);
lean_inc_ref(v_s_484_);
lean_dec_ref_known(v_value_477_, 1);
v___x_485_ = l_Lasm_UI_Render_propAttribute(v_name_476_);
lean_dec_ref(v_name_476_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_dec_ref(v_s_484_);
v_x_430_ = v_tail_432_;
goto _start;
}
else
{
lean_object* v_val_487_; lean_object* v_attrs_488_; lean_object* v_styles_489_; lean_object* v_content_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_507_; 
v_val_487_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_val_487_);
lean_dec_ref_known(v___x_485_, 1);
v_attrs_488_ = lean_ctor_get(v_x_429_, 0);
v_styles_489_ = lean_ctor_get(v_x_429_, 1);
v_content_490_ = lean_ctor_get(v_x_429_, 2);
v_isSharedCheck_507_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_507_ == 0)
{
v___x_492_ = v_x_429_;
v_isShared_493_ = v_isSharedCheck_507_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_content_490_);
lean_inc(v_styles_489_);
lean_inc(v_attrs_488_);
lean_dec(v_x_429_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_507_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_494_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__0));
v___x_495_ = lean_string_append(v___x_494_, v_val_487_);
lean_dec(v_val_487_);
v___x_496_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__1));
v___x_497_ = lean_string_append(v___x_495_, v___x_496_);
v___x_498_ = l_Lasm_UI_Render_escapeAttr(v_s_484_);
v___x_499_ = lean_string_append(v___x_497_, v___x_498_);
lean_dec_ref(v___x_498_);
v___x_500_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__2));
v___x_501_ = lean_string_append(v___x_499_, v___x_500_);
v___x_502_ = lean_string_append(v_attrs_488_, v___x_501_);
lean_dec_ref(v___x_501_);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 0, v___x_502_);
v___x_504_ = v___x_492_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_502_);
lean_ctor_set(v_reuseFailAlloc_506_, 1, v_styles_489_);
lean_ctor_set(v_reuseFailAlloc_506_, 2, v_content_490_);
v___x_504_ = v_reuseFailAlloc_506_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
v_x_429_ = v___x_504_;
v_x_430_ = v_tail_432_;
goto _start;
}
}
}
}
else
{
uint8_t v_b_508_; 
v_b_508_ = lean_ctor_get_uint8(v_value_477_, 0);
lean_dec_ref_known(v_value_477_, 0);
v_n_434_ = v_name_476_;
v_b_435_ = v_b_508_;
goto v___jp_433_;
}
}
else
{
lean_dec_ref(v_name_476_);
if (lean_obj_tag(v_value_477_) == 0)
{
lean_object* v_s_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_547_; 
v_s_509_ = lean_ctor_get(v_value_477_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v_value_477_);
if (v_isSharedCheck_547_ == 0)
{
v___x_511_ = v_value_477_;
v_isShared_512_ = v_isSharedCheck_547_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_s_509_);
lean_dec(v_value_477_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_547_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_513_; uint8_t v___x_514_; 
v___x_513_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__5));
v___x_514_ = lean_string_dec_eq(v_tag_428_, v___x_513_);
if (v___x_514_ == 0)
{
lean_object* v_attrs_515_; lean_object* v_styles_516_; lean_object* v_content_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_531_; 
lean_del_object(v___x_511_);
v_attrs_515_ = lean_ctor_get(v_x_429_, 0);
v_styles_516_ = lean_ctor_get(v_x_429_, 1);
v_content_517_ = lean_ctor_get(v_x_429_, 2);
v_isSharedCheck_531_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_531_ == 0)
{
v___x_519_ = v_x_429_;
v_isShared_520_ = v_isSharedCheck_531_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_content_517_);
lean_inc(v_styles_516_);
lean_inc(v_attrs_515_);
lean_dec(v_x_429_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_531_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_521_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__6));
v___x_522_ = l_Lasm_UI_Render_escapeAttr(v_s_509_);
v___x_523_ = lean_string_append(v___x_521_, v___x_522_);
lean_dec_ref(v___x_522_);
v___x_524_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__2));
v___x_525_ = lean_string_append(v___x_523_, v___x_524_);
v___x_526_ = lean_string_append(v_attrs_515_, v___x_525_);
lean_dec_ref(v___x_525_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_526_);
v___x_528_ = v___x_519_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_styles_516_);
lean_ctor_set(v_reuseFailAlloc_530_, 2, v_content_517_);
v___x_528_ = v_reuseFailAlloc_530_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
v_x_429_ = v___x_528_;
v_x_430_ = v_tail_432_;
goto _start;
}
}
}
else
{
lean_object* v_attrs_532_; lean_object* v_styles_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_545_; 
v_attrs_532_ = lean_ctor_get(v_x_429_, 0);
v_styles_533_ = lean_ctor_get(v_x_429_, 1);
v_isSharedCheck_545_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_545_ == 0)
{
lean_object* v_unused_546_; 
v_unused_546_ = lean_ctor_get(v_x_429_, 2);
lean_dec(v_unused_546_);
v___x_535_ = v_x_429_;
v_isShared_536_ = v_isSharedCheck_545_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_styles_533_);
lean_inc(v_attrs_532_);
lean_dec(v_x_429_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_545_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_537_ = l_Lasm_UI_Render_escapeText(v_s_509_);
if (v_isShared_512_ == 0)
{
lean_ctor_set_tag(v___x_511_, 1);
lean_ctor_set(v___x_511_, 0, v___x_537_);
v___x_539_ = v___x_511_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_537_);
v___x_539_ = v_reuseFailAlloc_544_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
lean_object* v___x_541_; 
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 2, v___x_539_);
v___x_541_ = v___x_535_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_attrs_532_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v_styles_533_);
lean_ctor_set(v_reuseFailAlloc_543_, 2, v___x_539_);
v___x_541_ = v_reuseFailAlloc_543_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
v_x_429_ = v___x_541_;
v_x_430_ = v_tail_432_;
goto _start;
}
}
}
}
}
}
else
{
uint8_t v_b_548_; 
v_b_548_ = lean_ctor_get_uint8(v_value_477_, 0);
lean_dec_ref_known(v_value_477_, 0);
v_n_434_ = v___x_482_;
v_b_435_ = v_b_548_;
goto v___jp_433_;
}
}
}
else
{
lean_dec_ref(v_name_476_);
if (lean_obj_tag(v_value_477_) == 0)
{
lean_object* v_s_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_568_; 
v_s_549_ = lean_ctor_get(v_value_477_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v_value_477_);
if (v_isSharedCheck_568_ == 0)
{
v___x_551_ = v_value_477_;
v_isShared_552_ = v_isSharedCheck_568_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_s_549_);
lean_dec(v_value_477_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_568_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v_attrs_553_; lean_object* v_styles_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_566_; 
v_attrs_553_ = lean_ctor_get(v_x_429_, 0);
v_styles_554_ = lean_ctor_get(v_x_429_, 1);
v_isSharedCheck_566_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_566_ == 0)
{
lean_object* v_unused_567_; 
v_unused_567_ = lean_ctor_get(v_x_429_, 2);
lean_dec(v_unused_567_);
v___x_556_ = v_x_429_;
v_isShared_557_ = v_isSharedCheck_566_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_styles_554_);
lean_inc(v_attrs_553_);
lean_dec(v_x_429_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_566_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_558_; lean_object* v___x_560_; 
v___x_558_ = l_Lasm_UI_Render_escapeText(v_s_549_);
if (v_isShared_552_ == 0)
{
lean_ctor_set_tag(v___x_551_, 1);
lean_ctor_set(v___x_551_, 0, v___x_558_);
v___x_560_ = v___x_551_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_558_);
v___x_560_ = v_reuseFailAlloc_565_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
lean_object* v___x_562_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 2, v___x_560_);
v___x_562_ = v___x_556_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_attrs_553_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v_styles_554_);
lean_ctor_set(v_reuseFailAlloc_564_, 2, v___x_560_);
v___x_562_ = v_reuseFailAlloc_564_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
v_x_429_ = v___x_562_;
v_x_430_ = v_tail_432_;
goto _start;
}
}
}
}
}
else
{
uint8_t v_b_569_; 
v_b_569_ = lean_ctor_get_uint8(v_value_477_, 0);
lean_dec_ref_known(v_value_477_, 0);
v_n_434_ = v___x_480_;
v_b_435_ = v_b_569_;
goto v___jp_433_;
}
}
}
else
{
lean_dec_ref(v_name_476_);
if (lean_obj_tag(v_value_477_) == 0)
{
lean_object* v_s_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_588_; 
v_s_570_ = lean_ctor_get(v_value_477_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v_value_477_);
if (v_isSharedCheck_588_ == 0)
{
v___x_572_ = v_value_477_;
v_isShared_573_ = v_isSharedCheck_588_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_s_570_);
lean_dec(v_value_477_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_588_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v_attrs_574_; lean_object* v_styles_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_586_; 
v_attrs_574_ = lean_ctor_get(v_x_429_, 0);
v_styles_575_ = lean_ctor_get(v_x_429_, 1);
v_isSharedCheck_586_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_586_ == 0)
{
lean_object* v_unused_587_; 
v_unused_587_ = lean_ctor_get(v_x_429_, 2);
lean_dec(v_unused_587_);
v___x_577_ = v_x_429_;
v_isShared_578_ = v_isSharedCheck_586_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_styles_575_);
lean_inc(v_attrs_574_);
lean_dec(v_x_429_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_586_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_573_ == 0)
{
lean_ctor_set_tag(v___x_572_, 1);
v___x_580_ = v___x_572_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_s_570_);
v___x_580_ = v_reuseFailAlloc_585_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_582_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 2, v___x_580_);
v___x_582_ = v___x_577_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_attrs_574_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v_styles_575_);
lean_ctor_set(v_reuseFailAlloc_584_, 2, v___x_580_);
v___x_582_ = v_reuseFailAlloc_584_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
v_x_429_ = v___x_582_;
v_x_430_ = v_tail_432_;
goto _start;
}
}
}
}
}
else
{
uint8_t v_b_589_; 
v_b_589_ = lean_ctor_get_uint8(v_value_477_, 0);
lean_dec_ref_known(v_value_477_, 0);
v_n_434_ = v___x_478_;
v_b_435_ = v_b_589_;
goto v___jp_433_;
}
}
}
case 2:
{
lean_object* v_name_590_; lean_object* v_value_591_; lean_object* v_attrs_592_; lean_object* v_styles_593_; lean_object* v_content_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_614_; 
v_name_590_ = lean_ctor_get(v_head_431_, 0);
lean_inc_ref(v_name_590_);
v_value_591_ = lean_ctor_get(v_head_431_, 1);
lean_inc_ref(v_value_591_);
lean_dec_ref_known(v_head_431_, 2);
v_attrs_592_ = lean_ctor_get(v_x_429_, 0);
v_styles_593_ = lean_ctor_get(v_x_429_, 1);
v_content_594_ = lean_ctor_get(v_x_429_, 2);
v_isSharedCheck_614_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_614_ == 0)
{
v___x_596_ = v_x_429_;
v_isShared_597_ = v_isSharedCheck_614_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_content_594_);
lean_inc(v_styles_593_);
lean_inc(v_attrs_592_);
lean_dec(v_x_429_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_614_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___y_599_; lean_object* v___x_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
v___x_609_ = lean_string_utf8_byte_size(v_styles_593_);
v___x_610_ = lean_unsigned_to_nat(0u);
v___x_611_ = lean_nat_dec_eq(v___x_609_, v___x_610_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; 
v___x_612_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__8));
v___y_599_ = v___x_612_;
goto v___jp_598_;
}
else
{
lean_object* v___x_613_; 
v___x_613_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___y_599_ = v___x_613_;
goto v___jp_598_;
}
v___jp_598_:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_606_; 
v___x_600_ = lean_string_append(v_styles_593_, v___y_599_);
v___x_601_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__7));
v___x_602_ = lean_string_append(v_name_590_, v___x_601_);
v___x_603_ = lean_string_append(v___x_602_, v_value_591_);
lean_dec_ref(v_value_591_);
v___x_604_ = lean_string_append(v___x_600_, v___x_603_);
lean_dec_ref(v___x_603_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 1, v___x_604_);
v___x_606_ = v___x_596_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_attrs_592_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_608_, 2, v_content_594_);
v___x_606_ = v_reuseFailAlloc_608_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
v_x_429_ = v___x_606_;
v_x_430_ = v_tail_432_;
goto _start;
}
}
}
}
default: 
{
lean_dec_ref_known(v_head_431_, 2);
v_x_430_ = v_tail_432_;
goto _start;
}
}
v___jp_433_:
{
lean_object* v___x_436_; 
v___x_436_ = l_Lasm_UI_Render_propAttribute(v_n_434_);
lean_dec_ref(v_n_434_);
if (lean_obj_tag(v___x_436_) == 1)
{
if (v_b_435_ == 1)
{
lean_object* v_val_437_; lean_object* v_attrs_438_; lean_object* v_styles_439_; lean_object* v_content_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_451_; 
v_val_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_val_437_);
lean_dec_ref_known(v___x_436_, 1);
v_attrs_438_ = lean_ctor_get(v_x_429_, 0);
v_styles_439_ = lean_ctor_get(v_x_429_, 1);
v_content_440_ = lean_ctor_get(v_x_429_, 2);
v_isSharedCheck_451_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_451_ == 0)
{
v___x_442_ = v_x_429_;
v_isShared_443_ = v_isSharedCheck_451_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_content_440_);
lean_inc(v_styles_439_);
lean_inc(v_attrs_438_);
lean_dec(v_x_429_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_451_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_444_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__0));
v___x_445_ = lean_string_append(v___x_444_, v_val_437_);
lean_dec(v_val_437_);
v___x_446_ = lean_string_append(v_attrs_438_, v___x_445_);
lean_dec_ref(v___x_445_);
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 0, v___x_446_);
v___x_448_ = v___x_442_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_446_);
lean_ctor_set(v_reuseFailAlloc_450_, 1, v_styles_439_);
lean_ctor_set(v_reuseFailAlloc_450_, 2, v_content_440_);
v___x_448_ = v_reuseFailAlloc_450_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
v_x_429_ = v___x_448_;
v_x_430_ = v_tail_432_;
goto _start;
}
}
}
else
{
lean_dec_ref_known(v___x_436_, 1);
v_x_430_ = v_tail_432_;
goto _start;
}
}
else
{
lean_dec(v___x_436_);
v_x_430_ = v_tail_432_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___boxed(lean_object* v_tag_616_, lean_object* v_x_617_, lean_object* v_x_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg(v_tag_616_, v_x_617_, v_x_618_);
lean_dec_ref(v_tag_616_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts___redArg(lean_object* v_tag_623_, lean_object* v_attrs_624_){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_625_ = ((lean_object*)(l_Lasm_UI_Render_parts___redArg___closed__0));
v___x_626_ = l_Lasm_UI_Render_finalAttrs___redArg(v_attrs_624_);
v___x_627_ = l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg(v_tag_623_, v___x_625_, v___x_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts___redArg___boxed(lean_object* v_tag_628_, lean_object* v_attrs_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Lasm_UI_Render_parts___redArg(v_tag_628_, v_attrs_629_);
lean_dec_ref(v_tag_628_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts(lean_object* v_Msg_631_, lean_object* v_tag_632_, lean_object* v_attrs_633_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_Lasm_UI_Render_parts___redArg(v_tag_632_, v_attrs_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_parts___boxed(lean_object* v_Msg_635_, lean_object* v_tag_636_, lean_object* v_attrs_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lasm_UI_Render_parts(v_Msg_635_, v_tag_636_, v_attrs_637_);
lean_dec_ref(v_tag_636_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0(lean_object* v_Msg_639_, lean_object* v_tag_640_, lean_object* v_x_641_, lean_object* v_x_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg(v_tag_640_, v_x_641_, v_x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___boxed(lean_object* v_Msg_644_, lean_object* v_tag_645_, lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l_List_foldl___at___00Lasm_UI_Render_parts_spec__0(v_Msg_644_, v_tag_645_, v_x_646_, v_x_647_);
lean_dec_ref(v_tag_645_);
return v_res_648_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Render_rawText(lean_object* v_tag_651_){
_start:
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = ((lean_object*)(l_Lasm_UI_Render_rawText___closed__0));
v___x_653_ = lean_string_dec_eq(v_tag_651_, v___x_652_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_654_ = ((lean_object*)(l_Lasm_UI_Render_rawText___closed__1));
v___x_655_ = lean_string_dec_eq(v_tag_651_, v___x_654_);
return v___x_655_;
}
else
{
return v___x_653_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_rawText___boxed(lean_object* v_tag_656_){
_start:
{
uint8_t v_res_657_; lean_object* v_r_658_; 
v_res_657_ = l_Lasm_UI_Render_rawText(v_tag_656_);
lean_dec_ref(v_tag_656_);
v_r_658_ = lean_box(v_res_657_);
return v_r_658_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lasm_UI_Render_node_spec__2(lean_object* v_a_659_, lean_object* v_x_660_){
_start:
{
if (lean_obj_tag(v_x_660_) == 0)
{
uint8_t v___x_661_; 
v___x_661_ = 0;
return v___x_661_;
}
else
{
lean_object* v_head_662_; lean_object* v_tail_663_; uint8_t v___x_664_; 
v_head_662_ = lean_ctor_get(v_x_660_, 0);
v_tail_663_ = lean_ctor_get(v_x_660_, 1);
v___x_664_ = lean_string_dec_eq(v_a_659_, v_head_662_);
if (v___x_664_ == 0)
{
v_x_660_ = v_tail_663_;
goto _start;
}
else
{
return v___x_664_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lasm_UI_Render_node_spec__2___boxed(lean_object* v_a_666_, lean_object* v_x_667_){
_start:
{
uint8_t v_res_668_; lean_object* v_r_669_; 
v_res_668_ = l_List_elem___at___00Lasm_UI_Render_node_spec__2(v_a_666_, v_x_667_);
lean_dec(v_x_667_);
lean_dec_ref(v_a_666_);
v_r_669_ = lean_box(v_res_668_);
return v_r_669_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg(lean_object* v_s_670_, lean_object* v_replacement_671_, lean_object* v_a_672_, lean_object* v_b_673_){
_start:
{
lean_object* v_it_675_; lean_object* v_startPos_676_; lean_object* v_endPos_677_; lean_object* v_it_686_; 
switch(lean_obj_tag(v_a_672_))
{
case 0:
{
lean_object* v_pos_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_704_; 
v_pos_692_ = lean_ctor_get(v_a_672_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v_a_672_);
if (v_isSharedCheck_704_ == 0)
{
v___x_694_ = v_a_672_;
v_isShared_695_ = v_isSharedCheck_704_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_pos_692_);
lean_dec(v_a_672_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_704_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v_startInclusive_696_; lean_object* v_endExclusive_697_; lean_object* v___x_698_; uint8_t v_decide_699_; 
v_startInclusive_696_ = lean_ctor_get(v_s_670_, 1);
v_endExclusive_697_ = lean_ctor_get(v_s_670_, 2);
v___x_698_ = lean_nat_sub(v_endExclusive_697_, v_startInclusive_696_);
v_decide_699_ = lean_nat_dec_eq(v_pos_692_, v___x_698_);
lean_dec(v___x_698_);
if (v_decide_699_ == 0)
{
lean_object* v___x_701_; 
if (v_isShared_695_ == 0)
{
lean_ctor_set_tag(v___x_694_, 1);
v___x_701_ = v___x_694_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_pos_692_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
v_it_686_ = v___x_701_;
goto v___jp_685_;
}
}
else
{
lean_object* v___x_703_; 
lean_del_object(v___x_694_);
lean_dec(v_pos_692_);
v___x_703_ = lean_box(3);
v_it_686_ = v___x_703_;
goto v___jp_685_;
}
}
}
case 1:
{
lean_object* v_pos_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_717_; 
v_pos_705_ = lean_ctor_get(v_a_672_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v_a_672_);
if (v_isSharedCheck_717_ == 0)
{
v___x_707_ = v_a_672_;
v_isShared_708_ = v_isSharedCheck_717_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_pos_705_);
lean_dec(v_a_672_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_717_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v_str_709_; lean_object* v_startInclusive_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
v_str_709_ = lean_ctor_get(v_s_670_, 0);
v_startInclusive_710_ = lean_ctor_get(v_s_670_, 1);
v___x_711_ = lean_nat_add(v_startInclusive_710_, v_pos_705_);
v___x_712_ = lean_string_utf8_next_fast(v_str_709_, v___x_711_);
lean_dec(v___x_711_);
v___x_713_ = lean_nat_sub(v___x_712_, v_startInclusive_710_);
lean_inc(v___x_713_);
if (v_isShared_708_ == 0)
{
lean_ctor_set_tag(v___x_707_, 0);
lean_ctor_set(v___x_707_, 0, v___x_713_);
v___x_715_ = v___x_707_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v___x_713_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
v_it_675_ = v___x_715_;
v_startPos_676_ = v_pos_705_;
v_endPos_677_ = v___x_713_;
goto v___jp_674_;
}
}
}
case 2:
{
lean_object* v_needle_718_; lean_object* v_table_719_; lean_object* v_stackPos_720_; lean_object* v_needlePos_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_782_; 
v_needle_718_ = lean_ctor_get(v_a_672_, 0);
v_table_719_ = lean_ctor_get(v_a_672_, 1);
v_stackPos_720_ = lean_ctor_get(v_a_672_, 2);
v_needlePos_721_ = lean_ctor_get(v_a_672_, 3);
v_isSharedCheck_782_ = !lean_is_exclusive(v_a_672_);
if (v_isSharedCheck_782_ == 0)
{
v___x_723_ = v_a_672_;
v_isShared_724_ = v_isSharedCheck_782_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_needlePos_721_);
lean_inc(v_stackPos_720_);
lean_inc(v_table_719_);
lean_inc(v_needle_718_);
lean_dec(v_a_672_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_782_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v_str_725_; lean_object* v_startInclusive_726_; lean_object* v_endExclusive_727_; lean_object* v_str_728_; lean_object* v_startInclusive_729_; lean_object* v_endExclusive_730_; lean_object* v_basePos_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; uint8_t v___x_735_; 
v_str_725_ = lean_ctor_get(v_needle_718_, 0);
v_startInclusive_726_ = lean_ctor_get(v_needle_718_, 1);
v_endExclusive_727_ = lean_ctor_get(v_needle_718_, 2);
v_str_728_ = lean_ctor_get(v_s_670_, 0);
v_startInclusive_729_ = lean_ctor_get(v_s_670_, 1);
v_endExclusive_730_ = lean_ctor_get(v_s_670_, 2);
v_basePos_731_ = lean_nat_sub(v_stackPos_720_, v_needlePos_721_);
v___x_732_ = lean_nat_sub(v_endExclusive_727_, v_startInclusive_726_);
v___x_733_ = lean_nat_add(v_basePos_731_, v___x_732_);
v___x_734_ = lean_nat_sub(v_endExclusive_730_, v_startInclusive_729_);
v___x_735_ = lean_nat_dec_le(v___x_733_, v___x_734_);
lean_dec(v___x_733_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
lean_dec(v___x_732_);
lean_del_object(v___x_723_);
lean_dec(v_needlePos_721_);
lean_dec(v_stackPos_720_);
lean_dec_ref(v_table_719_);
lean_dec_ref(v_needle_718_);
v___x_736_ = lean_unsigned_to_nat(1u);
v___x_737_ = lean_nat_add(v_basePos_731_, v___x_736_);
v___x_738_ = lean_nat_dec_le(v___x_737_, v___x_734_);
lean_dec(v___x_737_);
if (v___x_738_ == 0)
{
lean_dec(v___x_734_);
lean_dec(v_basePos_731_);
lean_dec_ref(v_s_670_);
return v_b_673_;
}
else
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = l_String_Slice_pos_x21(v_s_670_, v_basePos_731_);
lean_dec(v_basePos_731_);
v___x_740_ = lean_box(3);
v_it_675_ = v___x_740_;
v_startPos_676_ = v___x_739_;
v_endPos_677_ = v___x_734_;
goto v___jp_674_;
}
}
else
{
lean_object* v___x_741_; uint8_t v_stackByte_742_; lean_object* v___x_743_; uint8_t v_patByte_744_; uint8_t v___x_745_; 
lean_dec(v___x_734_);
v___x_741_ = lean_nat_add(v_startInclusive_729_, v_stackPos_720_);
v_stackByte_742_ = lean_string_get_byte_fast(v_str_728_, v___x_741_);
v___x_743_ = lean_nat_add(v_startInclusive_726_, v_needlePos_721_);
v_patByte_744_ = lean_string_get_byte_fast(v_str_725_, v___x_743_);
v___x_745_ = lean_uint8_dec_eq(v_stackByte_742_, v_patByte_744_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; uint8_t v_decide_747_; 
lean_dec(v___x_732_);
v___x_746_ = lean_unsigned_to_nat(0u);
v_decide_747_ = lean_nat_dec_eq(v_needlePos_721_, v___x_746_);
if (v_decide_747_ == 0)
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v_newNeedlePos_750_; uint8_t v___x_751_; 
v___x_748_ = lean_unsigned_to_nat(1u);
v___x_749_ = lean_nat_sub(v_needlePos_721_, v___x_748_);
lean_dec(v_needlePos_721_);
v_newNeedlePos_750_ = lean_array_fget_borrowed(v_table_719_, v___x_749_);
lean_dec(v___x_749_);
v___x_751_ = lean_nat_dec_eq(v_newNeedlePos_750_, v___x_746_);
if (v___x_751_ == 0)
{
lean_object* v_oldBasePos_752_; lean_object* v___x_753_; lean_object* v_newBasePos_754_; lean_object* v___x_756_; 
lean_inc(v_newNeedlePos_750_);
v_oldBasePos_752_ = l_String_Slice_pos_x21(v_s_670_, v_basePos_731_);
lean_dec(v_basePos_731_);
v___x_753_ = lean_nat_sub(v_stackPos_720_, v_newNeedlePos_750_);
v_newBasePos_754_ = l_String_Slice_pos_x21(v_s_670_, v___x_753_);
lean_dec(v___x_753_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 3, v_newNeedlePos_750_);
v___x_756_ = v___x_723_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_needle_718_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_table_719_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v_stackPos_720_);
lean_ctor_set(v_reuseFailAlloc_757_, 3, v_newNeedlePos_750_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
v_it_675_ = v___x_756_;
v_startPos_676_ = v_oldBasePos_752_;
v_endPos_677_ = v_newBasePos_754_;
goto v___jp_674_;
}
}
else
{
lean_object* v_basePos_758_; lean_object* v_nextStackPos_759_; lean_object* v___x_761_; 
v_basePos_758_ = l_String_Slice_pos_x21(v_s_670_, v_basePos_731_);
lean_dec(v_basePos_731_);
v_nextStackPos_759_ = l_String_Slice_posGE___redArg(v_s_670_, v_stackPos_720_);
lean_inc(v_nextStackPos_759_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 3, v___x_746_);
lean_ctor_set(v___x_723_, 2, v_nextStackPos_759_);
v___x_761_ = v___x_723_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_needle_718_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v_table_719_);
lean_ctor_set(v_reuseFailAlloc_762_, 2, v_nextStackPos_759_);
lean_ctor_set(v_reuseFailAlloc_762_, 3, v___x_746_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
v_it_675_ = v___x_761_;
v_startPos_676_ = v_basePos_758_;
v_endPos_677_ = v_nextStackPos_759_;
goto v___jp_674_;
}
}
}
else
{
lean_object* v_basePos_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v_nextStackPos_766_; lean_object* v___x_768_; 
lean_dec(v_basePos_731_);
lean_dec(v_needlePos_721_);
v_basePos_763_ = l_String_Slice_pos_x21(v_s_670_, v_stackPos_720_);
v___x_764_ = lean_unsigned_to_nat(1u);
v___x_765_ = lean_nat_add(v_stackPos_720_, v___x_764_);
lean_dec(v_stackPos_720_);
v_nextStackPos_766_ = l_String_Slice_posGE___redArg(v_s_670_, v___x_765_);
lean_inc(v_nextStackPos_766_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 3, v___x_746_);
lean_ctor_set(v___x_723_, 2, v_nextStackPos_766_);
v___x_768_ = v___x_723_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_needle_718_);
lean_ctor_set(v_reuseFailAlloc_769_, 1, v_table_719_);
lean_ctor_set(v_reuseFailAlloc_769_, 2, v_nextStackPos_766_);
lean_ctor_set(v_reuseFailAlloc_769_, 3, v___x_746_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
v_it_675_ = v___x_768_;
v_startPos_676_ = v_basePos_763_;
v_endPos_677_ = v_nextStackPos_766_;
goto v___jp_674_;
}
}
}
else
{
lean_object* v___x_770_; lean_object* v_nextStackPos_771_; lean_object* v_nextNeedlePos_772_; uint8_t v_decide_773_; 
lean_dec(v_basePos_731_);
v___x_770_ = lean_unsigned_to_nat(1u);
v_nextStackPos_771_ = lean_nat_add(v_stackPos_720_, v___x_770_);
lean_dec(v_stackPos_720_);
v_nextNeedlePos_772_ = lean_nat_add(v_needlePos_721_, v___x_770_);
lean_dec(v_needlePos_721_);
v_decide_773_ = lean_nat_dec_eq(v_nextNeedlePos_772_, v___x_732_);
lean_dec(v___x_732_);
if (v_decide_773_ == 0)
{
lean_object* v___x_775_; 
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 3, v_nextNeedlePos_772_);
lean_ctor_set(v___x_723_, 2, v_nextStackPos_771_);
v___x_775_ = v___x_723_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_needle_718_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_table_719_);
lean_ctor_set(v_reuseFailAlloc_777_, 2, v_nextStackPos_771_);
lean_ctor_set(v_reuseFailAlloc_777_, 3, v_nextNeedlePos_772_);
v___x_775_ = v_reuseFailAlloc_777_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
v_a_672_ = v___x_775_;
goto _start;
}
}
else
{
lean_object* v___x_778_; lean_object* v___x_780_; 
lean_dec(v_nextNeedlePos_772_);
v___x_778_ = lean_unsigned_to_nat(0u);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 3, v___x_778_);
lean_ctor_set(v___x_723_, 2, v_nextStackPos_771_);
v___x_780_ = v___x_723_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_needle_718_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_table_719_);
lean_ctor_set(v_reuseFailAlloc_781_, 2, v_nextStackPos_771_);
lean_ctor_set(v_reuseFailAlloc_781_, 3, v___x_778_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
v_it_686_ = v___x_780_;
goto v___jp_685_;
}
}
}
}
}
}
default: 
{
lean_dec_ref(v_s_670_);
return v_b_673_;
}
}
v___jp_674_:
{
lean_object* v___x_678_; lean_object* v_str_679_; lean_object* v_startInclusive_680_; lean_object* v_endExclusive_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
lean_inc_ref(v_s_670_);
v___x_678_ = l_String_Slice_slice_x21(v_s_670_, v_startPos_676_, v_endPos_677_);
lean_dec(v_endPos_677_);
lean_dec(v_startPos_676_);
v_str_679_ = lean_ctor_get(v___x_678_, 0);
lean_inc_ref(v_str_679_);
v_startInclusive_680_ = lean_ctor_get(v___x_678_, 1);
lean_inc(v_startInclusive_680_);
v_endExclusive_681_ = lean_ctor_get(v___x_678_, 2);
lean_inc(v_endExclusive_681_);
lean_dec_ref(v___x_678_);
v___x_682_ = lean_string_utf8_extract_fast(v_str_679_, v_startInclusive_680_, v_endExclusive_681_);
lean_dec(v_endExclusive_681_);
lean_dec(v_startInclusive_680_);
lean_dec_ref(v_str_679_);
v___x_683_ = lean_string_append(v_b_673_, v___x_682_);
lean_dec_ref(v___x_682_);
v_a_672_ = v_it_675_;
v_b_673_ = v___x_683_;
goto _start;
}
v___jp_685_:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_687_ = lean_unsigned_to_nat(0u);
v___x_688_ = lean_string_utf8_byte_size(v_replacement_671_);
v___x_689_ = lean_string_utf8_extract_fast(v_replacement_671_, v___x_687_, v___x_688_);
v___x_690_ = lean_string_append(v_b_673_, v___x_689_);
lean_dec_ref(v___x_689_);
v_a_672_ = v_it_686_;
v_b_673_ = v___x_690_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg___boxed(lean_object* v_s_783_, lean_object* v_replacement_784_, lean_object* v_a_785_, lean_object* v_b_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg(v_s_783_, v_replacement_784_, v_a_785_, v_b_786_);
lean_dec_ref(v_replacement_784_);
return v_res_787_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = ((lean_object*)(l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__0));
v___x_790_ = lean_string_utf8_byte_size(v___x_789_);
return v___x_790_;
}
}
static uint8_t _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; uint8_t v___x_793_; 
v___x_791_ = lean_unsigned_to_nat(0u);
v___x_792_ = lean_obj_once(&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1, &l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1_once, _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1);
v___x_793_ = lean_nat_dec_eq(v___x_792_, v___x_791_);
return v___x_793_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_794_ = lean_obj_once(&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1, &l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1_once, _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__1);
v___x_795_ = lean_unsigned_to_nat(0u);
v___x_796_ = ((lean_object*)(l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__0));
v___x_797_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
lean_ctor_set(v___x_797_, 1, v___x_795_);
lean_ctor_set(v___x_797_, 2, v___x_794_);
return v___x_797_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_798_ = lean_obj_once(&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3, &l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3);
v___x_799_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_798_);
return v___x_799_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_800_ = lean_unsigned_to_nat(0u);
v___x_801_ = lean_obj_once(&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__4, &l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__4_once, _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__4);
v___x_802_ = lean_obj_once(&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3, &l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3_once, _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__3);
v___x_803_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
lean_ctor_set(v___x_803_, 1, v___x_801_);
lean_ctor_set(v___x_803_, 2, v___x_800_);
lean_ctor_set(v___x_803_, 3, v___x_800_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg(lean_object* v_s_806_, lean_object* v_replacement_807_){
_start:
{
lean_object* v___x_808_; uint8_t v___x_809_; 
v___x_808_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___x_809_ = lean_uint8_once(&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2, &l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2_once, _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__2);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_810_ = lean_obj_once(&l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__5, &l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__5_once, _init_l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__5);
v___x_811_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg(v_s_806_, v_replacement_807_, v___x_810_, v___x_808_);
return v___x_811_;
}
else
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = ((lean_object*)(l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__6));
v___x_813_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg(v_s_806_, v_replacement_807_, v___x_812_, v___x_808_);
return v___x_813_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___boxed(lean_object* v_s_814_, lean_object* v_replacement_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg(v_s_814_, v_replacement_815_);
lean_dec_ref(v_replacement_815_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg(lean_object* v_x_818_, lean_object* v_x_819_){
_start:
{
if (lean_obj_tag(v_x_819_) == 0)
{
return v_x_818_;
}
else
{
lean_object* v_head_820_; 
v_head_820_ = lean_ctor_get(v_x_819_, 0);
if (lean_obj_tag(v_head_820_) == 0)
{
lean_object* v_tail_821_; lean_object* v_s_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_tail_821_ = lean_ctor_get(v_x_819_, 1);
v_s_822_ = lean_ctor_get(v_head_820_, 0);
v___x_823_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg___closed__0));
v___x_824_ = lean_unsigned_to_nat(0u);
v___x_825_ = lean_string_utf8_byte_size(v_s_822_);
lean_inc_ref(v_s_822_);
v___x_826_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_826_, 0, v_s_822_);
lean_ctor_set(v___x_826_, 1, v___x_824_);
lean_ctor_set(v___x_826_, 2, v___x_825_);
v___x_827_ = l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg(v___x_826_, v___x_823_);
v___x_828_ = lean_string_append(v_x_818_, v___x_827_);
lean_dec_ref(v___x_827_);
v_x_818_ = v___x_828_;
v_x_819_ = v_tail_821_;
goto _start;
}
else
{
lean_object* v_tail_830_; 
v_tail_830_ = lean_ctor_get(v_x_819_, 1);
v_x_819_ = v_tail_830_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg___boxed(lean_object* v_x_832_, lean_object* v_x_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg(v_x_832_, v_x_833_);
lean_dec(v_x_833_);
return v_res_834_;
}
}
static lean_object* _init_l_Lasm_UI_Render_node___redArg___closed__2(void){
_start:
{
uint8_t v___x_838_; lean_object* v___x_839_; 
v___x_838_ = 0;
v___x_839_ = l_Lasm_UI_Ns_ctorIdx(v___x_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_node___redArg(lean_object* v_out_841_, lean_object* v_x_842_){
_start:
{
if (lean_obj_tag(v_x_842_) == 0)
{
lean_object* v_s_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_s_843_ = lean_ctor_get(v_x_842_, 0);
lean_inc_ref(v_s_843_);
lean_dec_ref_known(v_x_842_, 1);
v___x_844_ = l_Lasm_UI_Render_escapeText(v_s_843_);
v___x_845_ = lean_string_append(v_out_841_, v___x_844_);
lean_dec_ref(v___x_844_);
return v___x_845_;
}
else
{
uint8_t v_ns_846_; lean_object* v_tag_847_; lean_object* v_attrs_848_; lean_object* v_children_849_; lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v_p_857_; lean_object* v_attrs_858_; lean_object* v_styles_859_; lean_object* v_content_860_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___y_874_; lean_object* v___x_883_; lean_object* v___x_884_; uint8_t v___x_885_; 
v_ns_846_ = lean_ctor_get_uint8(v_x_842_, sizeof(void*)*4);
v_tag_847_ = lean_ctor_get(v_x_842_, 0);
lean_inc_ref(v_tag_847_);
v_attrs_848_ = lean_ctor_get(v_x_842_, 2);
lean_inc(v_attrs_848_);
v_children_849_ = lean_ctor_get(v_x_842_, 3);
lean_inc(v_children_849_);
lean_dec_ref_known(v_x_842_, 4);
v_p_857_ = l_Lasm_UI_Render_parts___redArg(v_tag_847_, v_attrs_848_);
v_attrs_858_ = lean_ctor_get(v_p_857_, 0);
lean_inc_ref(v_attrs_858_);
v_styles_859_ = lean_ctor_get(v_p_857_, 1);
lean_inc_ref(v_styles_859_);
v_content_860_ = lean_ctor_get(v_p_857_, 2);
lean_inc(v_content_860_);
lean_dec_ref(v_p_857_);
v___x_869_ = ((lean_object*)(l_Lasm_UI_Render_node___redArg___closed__0));
v___x_870_ = lean_string_append(v_out_841_, v___x_869_);
v___x_871_ = lean_string_append(v___x_870_, v_tag_847_);
v___x_872_ = lean_string_append(v___x_871_, v_attrs_858_);
lean_dec_ref(v_attrs_858_);
v___x_883_ = lean_string_utf8_byte_size(v_styles_859_);
v___x_884_ = lean_unsigned_to_nat(0u);
v___x_885_ = lean_nat_dec_eq(v___x_883_, v___x_884_);
if (v___x_885_ == 0)
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_886_ = ((lean_object*)(l_Lasm_UI_Render_node___redArg___closed__3));
v___x_887_ = l_Lasm_UI_Render_escapeAttr(v_styles_859_);
v___x_888_ = lean_string_append(v___x_886_, v___x_887_);
lean_dec_ref(v___x_887_);
v___x_889_ = ((lean_object*)(l_List_foldl___at___00Lasm_UI_Render_parts_spec__0___redArg___closed__2));
v___x_890_ = lean_string_append(v___x_888_, v___x_889_);
v___y_874_ = v___x_890_;
goto v___jp_873_;
}
else
{
lean_object* v___x_891_; 
lean_dec_ref(v_styles_859_);
v___x_891_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___y_874_ = v___x_891_;
goto v___jp_873_;
}
v___jp_850_:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_853_ = ((lean_object*)(l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg___closed__0));
v___x_854_ = lean_string_append(v___y_852_, v___x_853_);
v___x_855_ = lean_string_append(v___x_854_, v_tag_847_);
lean_dec_ref(v_tag_847_);
v___x_856_ = lean_string_append(v___x_855_, v___y_851_);
return v___x_856_;
}
v___jp_861_:
{
if (lean_obj_tag(v_content_860_) == 0)
{
uint8_t v___x_864_; 
v___x_864_ = l_Lasm_UI_Render_rawText(v_tag_847_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; 
v___x_865_ = l_Lasm_UI_Render_children___redArg(v___y_863_, v___x_864_, v_children_849_);
v___y_851_ = v___y_862_;
v___y_852_ = v___x_865_;
goto v___jp_850_;
}
else
{
lean_object* v___x_866_; 
v___x_866_ = l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg(v___y_863_, v_children_849_);
lean_dec(v_children_849_);
v___y_851_ = v___y_862_;
v___y_852_ = v___x_866_;
goto v___jp_850_;
}
}
else
{
lean_object* v_val_867_; lean_object* v___x_868_; 
lean_dec(v_children_849_);
v_val_867_ = lean_ctor_get(v_content_860_, 0);
lean_inc(v_val_867_);
lean_dec_ref_known(v_content_860_, 1);
v___x_868_ = lean_string_append(v___y_863_, v_val_867_);
lean_dec(v_val_867_);
v___y_851_ = v___y_862_;
v___y_852_ = v___x_868_;
goto v___jp_850_;
}
}
v___jp_873_:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v_out_877_; lean_object* v___x_878_; lean_object* v___x_879_; uint8_t v___x_880_; 
v___x_875_ = lean_string_append(v___x_872_, v___y_874_);
lean_dec_ref(v___y_874_);
v___x_876_ = ((lean_object*)(l_Lasm_UI_Render_node___redArg___closed__1));
v_out_877_ = lean_string_append(v___x_875_, v___x_876_);
v___x_878_ = l_Lasm_UI_Ns_ctorIdx(v_ns_846_);
v___x_879_ = lean_obj_once(&l_Lasm_UI_Render_node___redArg___closed__2, &l_Lasm_UI_Render_node___redArg___closed__2_once, _init_l_Lasm_UI_Render_node___redArg___closed__2);
v___x_880_ = lean_nat_dec_eq(v___x_878_, v___x_879_);
lean_dec(v___x_878_);
if (v___x_880_ == 0)
{
v___y_862_ = v___x_876_;
v___y_863_ = v_out_877_;
goto v___jp_861_;
}
else
{
lean_object* v___x_881_; uint8_t v___x_882_; 
v___x_881_ = l_Lasm_UI_voidTags;
v___x_882_ = l_List_elem___at___00Lasm_UI_Render_node_spec__2(v_tag_847_, v___x_881_);
if (v___x_882_ == 0)
{
v___y_862_ = v___x_876_;
v___y_863_ = v_out_877_;
goto v___jp_861_;
}
else
{
lean_dec(v_content_860_);
lean_dec(v_children_849_);
lean_dec_ref(v_tag_847_);
return v_out_877_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children___redArg(lean_object* v_out_892_, uint8_t v_afterText_893_, lean_object* v_x_894_){
_start:
{
if (lean_obj_tag(v_x_894_) == 0)
{
return v_out_892_;
}
else
{
lean_object* v_head_895_; 
v_head_895_ = lean_ctor_get(v_x_894_, 0);
lean_inc(v_head_895_);
if (lean_obj_tag(v_head_895_) == 0)
{
lean_object* v_tail_896_; uint8_t v___x_897_; lean_object* v___y_899_; 
v_tail_896_ = lean_ctor_get(v_x_894_, 1);
lean_inc(v_tail_896_);
lean_dec_ref_known(v_x_894_, 2);
v___x_897_ = 1;
if (v_afterText_893_ == 0)
{
v___y_899_ = v_out_892_;
goto v___jp_898_;
}
else
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = ((lean_object*)(l_Lasm_UI_Render_children___redArg___closed__0));
v___x_903_ = lean_string_append(v_out_892_, v___x_902_);
v___y_899_ = v___x_903_;
goto v___jp_898_;
}
v___jp_898_:
{
lean_object* v___x_900_; 
v___x_900_ = l_Lasm_UI_Render_node___redArg(v___y_899_, v_head_895_);
v_out_892_ = v___x_900_;
v_afterText_893_ = v___x_897_;
v_x_894_ = v_tail_896_;
goto _start;
}
}
else
{
lean_object* v_tail_904_; lean_object* v___x_905_; uint8_t v___x_906_; 
v_tail_904_ = lean_ctor_get(v_x_894_, 1);
lean_inc(v_tail_904_);
lean_dec_ref_known(v_x_894_, 2);
v___x_905_ = l_Lasm_UI_Render_node___redArg(v_out_892_, v_head_895_);
v___x_906_ = 0;
v_out_892_ = v___x_905_;
v_afterText_893_ = v___x_906_;
v_x_894_ = v_tail_904_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children___redArg___boxed(lean_object* v_out_908_, lean_object* v_afterText_909_, lean_object* v_x_910_){
_start:
{
uint8_t v_afterText_boxed_911_; lean_object* v_res_912_; 
v_afterText_boxed_911_ = lean_unbox(v_afterText_909_);
v_res_912_ = l_Lasm_UI_Render_children___redArg(v_out_908_, v_afterText_boxed_911_, v_x_910_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children(lean_object* v_Msg_913_, lean_object* v_out_914_, uint8_t v_afterText_915_, lean_object* v_x_916_){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = l_Lasm_UI_Render_children___redArg(v_out_914_, v_afterText_915_, v_x_916_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_children___boxed(lean_object* v_Msg_918_, lean_object* v_out_919_, lean_object* v_afterText_920_, lean_object* v_x_921_){
_start:
{
uint8_t v_afterText_boxed_922_; lean_object* v_res_923_; 
v_afterText_boxed_922_ = lean_unbox(v_afterText_920_);
v_res_923_ = l_Lasm_UI_Render_children(v_Msg_918_, v_out_919_, v_afterText_boxed_922_, v_x_921_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Render_node(lean_object* v_Msg_924_, lean_object* v_out_925_, lean_object* v_x_926_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = l_Lasm_UI_Render_node___redArg(v_out_925_, v_x_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0(lean_object* v_s_928_, lean_object* v_pattern_929_, lean_object* v_replacement_930_){
_start:
{
lean_object* v___x_931_; 
v___x_931_ = l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___redArg(v_s_928_, v_replacement_930_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0___boxed(lean_object* v_s_932_, lean_object* v_pattern_933_, lean_object* v_replacement_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_String_Slice_replace___at___00Lasm_UI_Render_node_spec__0(v_s_932_, v_pattern_933_, v_replacement_934_);
lean_dec_ref(v_replacement_934_);
lean_dec_ref(v_pattern_933_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1(lean_object* v_Msg_936_, lean_object* v_x_937_, lean_object* v_x_938_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = l_List_foldl___at___00Lasm_UI_Render_node_spec__1___redArg(v_x_937_, v_x_938_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Render_node_spec__1___boxed(lean_object* v_Msg_940_, lean_object* v_x_941_, lean_object* v_x_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_List_foldl___at___00Lasm_UI_Render_node_spec__1(v_Msg_940_, v_x_941_, v_x_942_);
lean_dec(v_x_942_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1(lean_object* v_s_944_, lean_object* v_replacement_945_, lean_object* v_inst_946_, lean_object* v_R_947_, lean_object* v_a_948_, lean_object* v_b_949_, lean_object* v_c_950_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___redArg(v_s_944_, v_replacement_945_, v_a_948_, v_b_949_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1___boxed(lean_object* v_s_952_, lean_object* v_replacement_953_, lean_object* v_inst_954_, lean_object* v_R_955_, lean_object* v_a_956_, lean_object* v_b_957_, lean_object* v_c_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Lasm_UI_Render_node_spec__0_spec__1(v_s_952_, v_replacement_953_, v_inst_954_, v_R_955_, v_a_956_, v_b_957_, v_c_958_);
lean_dec_ref(v_replacement_953_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__4_splitter___redArg(lean_object* v_x_960_, lean_object* v_h__1_961_, lean_object* v_h__2_962_){
_start:
{
if (lean_obj_tag(v_x_960_) == 0)
{
lean_object* v_s_963_; lean_object* v___x_964_; 
lean_dec(v_h__2_962_);
v_s_963_ = lean_ctor_get(v_x_960_, 0);
lean_inc_ref(v_s_963_);
lean_dec_ref_known(v_x_960_, 1);
v___x_964_ = lean_apply_1(v_h__1_961_, v_s_963_);
return v___x_964_;
}
else
{
uint8_t v_ns_965_; lean_object* v_tag_966_; lean_object* v_key_967_; lean_object* v_attrs_968_; lean_object* v_children_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
lean_dec(v_h__1_961_);
v_ns_965_ = lean_ctor_get_uint8(v_x_960_, sizeof(void*)*4);
v_tag_966_ = lean_ctor_get(v_x_960_, 0);
lean_inc_ref(v_tag_966_);
v_key_967_ = lean_ctor_get(v_x_960_, 1);
lean_inc(v_key_967_);
v_attrs_968_ = lean_ctor_get(v_x_960_, 2);
lean_inc(v_attrs_968_);
v_children_969_ = lean_ctor_get(v_x_960_, 3);
lean_inc(v_children_969_);
lean_dec_ref_known(v_x_960_, 4);
v___x_970_ = lean_box(v_ns_965_);
v___x_971_ = lean_apply_5(v_h__2_962_, v___x_970_, v_tag_966_, v_key_967_, v_attrs_968_, v_children_969_);
return v___x_971_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__4_splitter(lean_object* v_Msg_972_, lean_object* v_motive_973_, lean_object* v_x_974_, lean_object* v_h__1_975_, lean_object* v_h__2_976_){
_start:
{
if (lean_obj_tag(v_x_974_) == 0)
{
lean_object* v_s_977_; lean_object* v___x_978_; 
lean_dec(v_h__2_976_);
v_s_977_ = lean_ctor_get(v_x_974_, 0);
lean_inc_ref(v_s_977_);
lean_dec_ref_known(v_x_974_, 1);
v___x_978_ = lean_apply_1(v_h__1_975_, v_s_977_);
return v___x_978_;
}
else
{
uint8_t v_ns_979_; lean_object* v_tag_980_; lean_object* v_key_981_; lean_object* v_attrs_982_; lean_object* v_children_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
lean_dec(v_h__1_975_);
v_ns_979_ = lean_ctor_get_uint8(v_x_974_, sizeof(void*)*4);
v_tag_980_ = lean_ctor_get(v_x_974_, 0);
lean_inc_ref(v_tag_980_);
v_key_981_ = lean_ctor_get(v_x_974_, 1);
lean_inc(v_key_981_);
v_attrs_982_ = lean_ctor_get(v_x_974_, 2);
lean_inc(v_attrs_982_);
v_children_983_ = lean_ctor_get(v_x_974_, 3);
lean_inc(v_children_983_);
lean_dec_ref_known(v_x_974_, 4);
v___x_984_ = lean_box(v_ns_979_);
v___x_985_ = lean_apply_5(v_h__2_976_, v___x_984_, v_tag_980_, v_key_981_, v_attrs_982_, v_children_983_);
return v___x_985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_parts_match__1_splitter___redArg(lean_object* v_x_986_, lean_object* v_h__1_987_, lean_object* v_h__2_988_){
_start:
{
if (lean_obj_tag(v_x_986_) == 0)
{
lean_object* v___x_989_; lean_object* v___x_990_; 
lean_dec(v_h__1_987_);
v___x_989_ = lean_box(0);
v___x_990_ = lean_apply_1(v_h__2_988_, v___x_989_);
return v___x_990_;
}
else
{
lean_object* v_val_991_; lean_object* v___x_992_; 
lean_dec(v_h__2_988_);
v_val_991_ = lean_ctor_get(v_x_986_, 0);
lean_inc(v_val_991_);
lean_dec_ref_known(v_x_986_, 1);
v___x_992_ = lean_apply_1(v_h__1_987_, v_val_991_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_parts_match__1_splitter(lean_object* v_motive_993_, lean_object* v_x_994_, lean_object* v_h__1_995_, lean_object* v_h__2_996_){
_start:
{
if (lean_obj_tag(v_x_994_) == 0)
{
lean_object* v___x_997_; lean_object* v___x_998_; 
lean_dec(v_h__1_995_);
v___x_997_ = lean_box(0);
v___x_998_ = lean_apply_1(v_h__2_996_, v___x_997_);
return v___x_998_;
}
else
{
lean_object* v_val_999_; lean_object* v___x_1000_; 
lean_dec(v_h__2_996_);
v_val_999_ = lean_ctor_get(v_x_994_, 0);
lean_inc(v_val_999_);
lean_dec_ref_known(v_x_994_, 1);
v___x_1000_ = lean_apply_1(v_h__1_995_, v_val_999_);
return v___x_1000_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__List_map__unattach_match__1_splitter___redArg(lean_object* v_x_1001_, lean_object* v_h__1_1002_){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_apply_2(v_h__1_1002_, v_x_1001_, lean_box(0));
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__List_map__unattach_match__1_splitter(lean_object* v_00_u03b1_1004_, lean_object* v_P_1005_, lean_object* v_motive_1006_, lean_object* v_x_1007_, lean_object* v_h__1_1008_){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = lean_apply_2(v_h__1_1008_, v_x_1007_, lean_box(0));
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__1_splitter___redArg(lean_object* v_c_1010_, lean_object* v_h__1_1011_, lean_object* v_h__2_1012_){
_start:
{
if (lean_obj_tag(v_c_1010_) == 0)
{
lean_object* v_s_1013_; lean_object* v___x_1014_; 
lean_dec(v_h__2_1012_);
v_s_1013_ = lean_ctor_get(v_c_1010_, 0);
lean_inc_ref(v_s_1013_);
lean_dec_ref_known(v_c_1010_, 1);
v___x_1014_ = lean_apply_1(v_h__1_1011_, v_s_1013_);
return v___x_1014_;
}
else
{
lean_object* v___x_1015_; 
lean_dec(v_h__1_1011_);
v___x_1015_ = lean_apply_2(v_h__2_1012_, v_c_1010_, lean_box(0));
return v___x_1015_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_node_match__1_splitter(lean_object* v_Msg_1016_, lean_object* v_motive_1017_, lean_object* v_c_1018_, lean_object* v_h__1_1019_, lean_object* v_h__2_1020_){
_start:
{
if (lean_obj_tag(v_c_1018_) == 0)
{
lean_object* v_s_1021_; lean_object* v___x_1022_; 
lean_dec(v_h__2_1020_);
v_s_1021_ = lean_ctor_get(v_c_1018_, 0);
lean_inc_ref(v_s_1021_);
lean_dec_ref_known(v_c_1018_, 1);
v___x_1022_ = lean_apply_1(v_h__1_1019_, v_s_1021_);
return v___x_1022_;
}
else
{
lean_object* v___x_1023_; 
lean_dec(v_h__1_1019_);
v___x_1023_ = lean_apply_2(v_h__2_1020_, v_c_1018_, lean_box(0));
return v___x_1023_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_children_match__1_splitter___redArg(lean_object* v_x_1024_, lean_object* v_h__1_1025_, lean_object* v_h__2_1026_, lean_object* v_h__3_1027_){
_start:
{
if (lean_obj_tag(v_x_1024_) == 0)
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
lean_dec(v_h__3_1027_);
lean_dec(v_h__2_1026_);
v___x_1028_ = lean_box(0);
v___x_1029_ = lean_apply_1(v_h__1_1025_, v___x_1028_);
return v___x_1029_;
}
else
{
lean_object* v_head_1030_; 
lean_dec(v_h__1_1025_);
v_head_1030_ = lean_ctor_get(v_x_1024_, 0);
lean_inc(v_head_1030_);
if (lean_obj_tag(v_head_1030_) == 0)
{
lean_object* v_tail_1031_; lean_object* v_s_1032_; lean_object* v___x_1033_; 
lean_dec(v_h__3_1027_);
v_tail_1031_ = lean_ctor_get(v_x_1024_, 1);
lean_inc(v_tail_1031_);
lean_dec_ref_known(v_x_1024_, 2);
v_s_1032_ = lean_ctor_get(v_head_1030_, 0);
lean_inc_ref(v_s_1032_);
lean_dec_ref_known(v_head_1030_, 1);
v___x_1033_ = lean_apply_2(v_h__2_1026_, v_s_1032_, v_tail_1031_);
return v___x_1033_;
}
else
{
lean_object* v_tail_1034_; lean_object* v___x_1035_; 
lean_dec(v_h__2_1026_);
v_tail_1034_ = lean_ctor_get(v_x_1024_, 1);
lean_inc(v_tail_1034_);
lean_dec_ref_known(v_x_1024_, 2);
v___x_1035_ = lean_apply_3(v_h__3_1027_, v_head_1030_, v_tail_1034_, lean_box(0));
return v___x_1035_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Render_0__Lasm_UI_Render_children_match__1_splitter(lean_object* v_Msg_1036_, lean_object* v_motive_1037_, lean_object* v_x_1038_, lean_object* v_h__1_1039_, lean_object* v_h__2_1040_, lean_object* v_h__3_1041_){
_start:
{
if (lean_obj_tag(v_x_1038_) == 0)
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
lean_dec(v_h__3_1041_);
lean_dec(v_h__2_1040_);
v___x_1042_ = lean_box(0);
v___x_1043_ = lean_apply_1(v_h__1_1039_, v___x_1042_);
return v___x_1043_;
}
else
{
lean_object* v_head_1044_; 
lean_dec(v_h__1_1039_);
v_head_1044_ = lean_ctor_get(v_x_1038_, 0);
lean_inc(v_head_1044_);
if (lean_obj_tag(v_head_1044_) == 0)
{
lean_object* v_tail_1045_; lean_object* v_s_1046_; lean_object* v___x_1047_; 
lean_dec(v_h__3_1041_);
v_tail_1045_ = lean_ctor_get(v_x_1038_, 1);
lean_inc(v_tail_1045_);
lean_dec_ref_known(v_x_1038_, 2);
v_s_1046_ = lean_ctor_get(v_head_1044_, 0);
lean_inc_ref(v_s_1046_);
lean_dec_ref_known(v_head_1044_, 1);
v___x_1047_ = lean_apply_2(v_h__2_1040_, v_s_1046_, v_tail_1045_);
return v___x_1047_;
}
else
{
lean_object* v_tail_1048_; lean_object* v___x_1049_; 
lean_dec(v_h__2_1040_);
v_tail_1048_ = lean_ctor_get(v_x_1038_, 1);
lean_inc(v_tail_1048_);
lean_dec_ref_known(v_x_1038_, 2);
v___x_1049_ = lean_apply_3(v_h__3_1041_, v_head_1044_, v_tail_1048_, lean_box(0));
return v___x_1049_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_render___redArg(lean_object* v_h_1050_){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = ((lean_object*)(l_Lasm_UI_Render_escapeText___closed__0));
v___x_1052_ = l_Lasm_UI_Render_node___redArg(v___x_1051_, v_h_1050_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_render(lean_object* v_Msg_1053_, lean_object* v_h_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lasm_UI_render___redArg(v_h_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage___redArg(lean_object* v_title_1061_, lean_object* v_body_1062_, lean_object* v_head_1063_, lean_object* v_mountId_1064_){
_start:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1065_ = ((lean_object*)(l_Lasm_UI_renderPage___redArg___closed__0));
v___x_1066_ = l_Lasm_UI_Render_escapeText(v_title_1061_);
v___x_1067_ = lean_string_append(v___x_1065_, v___x_1066_);
lean_dec_ref(v___x_1066_);
v___x_1068_ = ((lean_object*)(l_Lasm_UI_renderPage___redArg___closed__1));
v___x_1069_ = lean_string_append(v___x_1067_, v___x_1068_);
v___x_1070_ = lean_string_append(v___x_1069_, v_head_1063_);
v___x_1071_ = ((lean_object*)(l_Lasm_UI_renderPage___redArg___closed__2));
v___x_1072_ = lean_string_append(v___x_1070_, v___x_1071_);
v___x_1073_ = l_Lasm_UI_Render_escapeAttr(v_mountId_1064_);
v___x_1074_ = lean_string_append(v___x_1072_, v___x_1073_);
lean_dec_ref(v___x_1073_);
v___x_1075_ = ((lean_object*)(l_Lasm_UI_renderPage___redArg___closed__3));
v___x_1076_ = lean_string_append(v___x_1074_, v___x_1075_);
v___x_1077_ = l_Lasm_UI_render___redArg(v_body_1062_);
v___x_1078_ = lean_string_append(v___x_1076_, v___x_1077_);
lean_dec_ref(v___x_1077_);
v___x_1079_ = ((lean_object*)(l_Lasm_UI_renderPage___redArg___closed__4));
v___x_1080_ = lean_string_append(v___x_1078_, v___x_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage___redArg___boxed(lean_object* v_title_1081_, lean_object* v_body_1082_, lean_object* v_head_1083_, lean_object* v_mountId_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Lasm_UI_renderPage___redArg(v_title_1081_, v_body_1082_, v_head_1083_, v_mountId_1084_);
lean_dec_ref(v_head_1083_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage(lean_object* v_Msg_1086_, lean_object* v_title_1087_, lean_object* v_body_1088_, lean_object* v_head_1089_, lean_object* v_mountId_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lasm_UI_renderPage___redArg(v_title_1087_, v_body_1088_, v_head_1089_, v_mountId_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_renderPage___boxed(lean_object* v_Msg_1092_, lean_object* v_title_1093_, lean_object* v_body_1094_, lean_object* v_head_1095_, lean_object* v_mountId_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l_Lasm_UI_renderPage(v_Msg_1092_, v_title_1093_, v_body_1094_, v_head_1095_, v_mountId_1096_);
lean_dec_ref(v_head_1095_);
return v_res_1097_;
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
