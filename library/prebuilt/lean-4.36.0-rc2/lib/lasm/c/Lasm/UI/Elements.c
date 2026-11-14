// Lean compiler output
// Module: Lasm.UI.Elements
// Imports: public import Init public meta import Init public import Lasm.UI.Html
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
lean_object* l_Lasm_UI_Decoder_map___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Attr_custom___redArg(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Int_repr(lean_object*);
extern lean_object* l_Lasm_UI_Decoder_targetChecked;
lean_object* l_Lasm_UI_Decoder_succeed___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lasm_UI_Decoder_key;
lean_object* l_Lasm_UI_Decoder_filter___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Html_keyed___redArg(lean_object*, lean_object*);
extern lean_object* l_Lasm_UI_Decoder_targetValue;
LEAN_EXPORT lean_object* l_Lasm_UI_text___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_text(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_node___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_node(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_nodeNS___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_nodeNS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_nodeNS(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_nodeNS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_keyed___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_keyed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_empty___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_UI_empty___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_empty___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_UI_empty___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_empty___redArg___closed__0_value)}};
static const lean_object* l_Lasm_UI_empty___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_empty___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_empty___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lasm_UI_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_empty___closed__0;
LEAN_EXPORT lean_object* l_Lasm_UI_empty(lean_object*);
static const lean_string_object l_Lasm_UI_htmlTags___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "tr"};
static const lean_object* l_Lasm_UI_htmlTags___closed__0 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__0_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "track"};
static const lean_object* l_Lasm_UI_htmlTags___closed__1 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__1_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l_Lasm_UI_htmlTags___closed__2 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__2_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ul"};
static const lean_object* l_Lasm_UI_htmlTags___closed__3 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__3_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "var"};
static const lean_object* l_Lasm_UI_htmlTags___closed__4 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__4_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "video"};
static const lean_object* l_Lasm_UI_htmlTags___closed__5 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__5_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "wbr"};
static const lean_object* l_Lasm_UI_htmlTags___closed__6 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__6_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_htmlTags___closed__7 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__7_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__5_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__7_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__8 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__8_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__4_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__8_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__9 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__9_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__3_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__9_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__10 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__10_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__2_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__10_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__11 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__11_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__1_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__11_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__12 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__12_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__0_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__12_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__13 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__13_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "template"};
static const lean_object* l_Lasm_UI_htmlTags___closed__14 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__14_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "textarea"};
static const lean_object* l_Lasm_UI_htmlTags___closed__15 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__15_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tfoot"};
static const lean_object* l_Lasm_UI_htmlTags___closed__16 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__16_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "th"};
static const lean_object* l_Lasm_UI_htmlTags___closed__17 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__17_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "thead"};
static const lean_object* l_Lasm_UI_htmlTags___closed__18 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__18_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "time"};
static const lean_object* l_Lasm_UI_htmlTags___closed__19 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__19_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lasm_UI_htmlTags___closed__20 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__20_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__20_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__13_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__21 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__21_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__19_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__21_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__22 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__22_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__18_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__22_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__23 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__23_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__17_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__23_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__24 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__24_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__16_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__24_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__25 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__25_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__15_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__25_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__26 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__26_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__14_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__26_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__27 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__27_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* l_Lasm_UI_htmlTags___closed__28 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__28_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* l_Lasm_UI_htmlTags___closed__29 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__29_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "summary"};
static const lean_object* l_Lasm_UI_htmlTags___closed__30 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__30_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sup"};
static const lean_object* l_Lasm_UI_htmlTags___closed__31 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__31_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "table"};
static const lean_object* l_Lasm_UI_htmlTags___closed__32 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__32_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tbody"};
static const lean_object* l_Lasm_UI_htmlTags___closed__33 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__33_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "td"};
static const lean_object* l_Lasm_UI_htmlTags___closed__34 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__34_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__34_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__27_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__35 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__35_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__33_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__35_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__36 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__36_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__32_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__36_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__37 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__37_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__31_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__37_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__38 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__38_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__30_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__38_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__39 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__39_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__29_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__39_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__40 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__40_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__28_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__40_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__41 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__41_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "section"};
static const lean_object* l_Lasm_UI_htmlTags___closed__42 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__42_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "select"};
static const lean_object* l_Lasm_UI_htmlTags___closed__43 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__43_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "slot"};
static const lean_object* l_Lasm_UI_htmlTags___closed__44 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__44_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "small"};
static const lean_object* l_Lasm_UI_htmlTags___closed__45 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__45_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "source"};
static const lean_object* l_Lasm_UI_htmlTags___closed__46 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__46_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "span"};
static const lean_object* l_Lasm_UI_htmlTags___closed__47 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__47_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strong"};
static const lean_object* l_Lasm_UI_htmlTags___closed__48 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__48_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__48_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__41_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__49 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__49_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__47_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__49_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__50 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__50_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__46_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__50_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__51 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__51_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__45_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__51_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__52 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__52_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__44_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__52_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__53 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__53_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__43_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__53_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__54 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__54_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__42_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__54_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__55 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__55_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "rp"};
static const lean_object* l_Lasm_UI_htmlTags___closed__56 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__56_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "rt"};
static const lean_object* l_Lasm_UI_htmlTags___closed__57 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__57_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ruby"};
static const lean_object* l_Lasm_UI_htmlTags___closed__58 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__58_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Lasm_UI_htmlTags___closed__59 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__59_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "samp"};
static const lean_object* l_Lasm_UI_htmlTags___closed__60 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__60_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "script"};
static const lean_object* l_Lasm_UI_htmlTags___closed__61 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__61_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "search"};
static const lean_object* l_Lasm_UI_htmlTags___closed__62 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__62_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__62_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__55_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__63 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__63_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__61_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__63_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__64 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__64_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__60_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__64_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__65 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__65_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__59_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__65_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__66 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__66_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__58_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__66_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__67 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__67_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__57_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__67_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__68 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__68_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__56_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__68_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__69 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__69_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "output"};
static const lean_object* l_Lasm_UI_htmlTags___closed__70 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__70_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l_Lasm_UI_htmlTags___closed__71 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__71_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "param"};
static const lean_object* l_Lasm_UI_htmlTags___closed__72 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__72_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "picture"};
static const lean_object* l_Lasm_UI_htmlTags___closed__73 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__73_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pre"};
static const lean_object* l_Lasm_UI_htmlTags___closed__74 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__74_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "progress"};
static const lean_object* l_Lasm_UI_htmlTags___closed__75 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__75_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "q"};
static const lean_object* l_Lasm_UI_htmlTags___closed__76 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__76_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__76_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__69_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__77 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__77_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__75_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__77_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__78 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__78_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__74_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__78_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__79 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__79_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__73_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__79_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__80 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__80_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__72_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__80_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__81 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__81_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__71_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__81_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__82 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__82_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__70_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__82_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__83 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__83_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "meter"};
static const lean_object* l_Lasm_UI_htmlTags___closed__84 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__84_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nav"};
static const lean_object* l_Lasm_UI_htmlTags___closed__85 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__85_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "noscript"};
static const lean_object* l_Lasm_UI_htmlTags___closed__86 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__86_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "object"};
static const lean_object* l_Lasm_UI_htmlTags___closed__87 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__87_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ol"};
static const lean_object* l_Lasm_UI_htmlTags___closed__88 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__88_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optgroup"};
static const lean_object* l_Lasm_UI_htmlTags___closed__89 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__89_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "option"};
static const lean_object* l_Lasm_UI_htmlTags___closed__90 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__90_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__90_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__83_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__91 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__91_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__89_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__91_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__92 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__92_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__88_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__92_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__93 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__93_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__87_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__93_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__94 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__94_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__86_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__94_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__95 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__95_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__85_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__95_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__96 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__96_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__84_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__96_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__97 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__97_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "li"};
static const lean_object* l_Lasm_UI_htmlTags___closed__98 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__98_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "link"};
static const lean_object* l_Lasm_UI_htmlTags___closed__99 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__99_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "main"};
static const lean_object* l_Lasm_UI_htmlTags___closed__100 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__100_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "map"};
static const lean_object* l_Lasm_UI_htmlTags___closed__101 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__101_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mark"};
static const lean_object* l_Lasm_UI_htmlTags___closed__102 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__102_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "menu"};
static const lean_object* l_Lasm_UI_htmlTags___closed__103 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__103_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l_Lasm_UI_htmlTags___closed__104 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__104_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__104_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__97_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__105 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__105_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__103_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__105_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__106 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__106_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__102_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__106_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__107 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__107_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__101_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__107_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__108 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__108_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__100_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__108_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__109 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__109_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__99_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__109_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__110 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__110_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__98_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__110_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__111 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__111_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "iframe"};
static const lean_object* l_Lasm_UI_htmlTags___closed__112 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__112_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "img"};
static const lean_object* l_Lasm_UI_htmlTags___closed__113 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__113_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "input"};
static const lean_object* l_Lasm_UI_htmlTags___closed__114 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__114_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ins"};
static const lean_object* l_Lasm_UI_htmlTags___closed__115 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__115_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "kbd"};
static const lean_object* l_Lasm_UI_htmlTags___closed__116 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__116_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "label"};
static const lean_object* l_Lasm_UI_htmlTags___closed__117 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__117_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "legend"};
static const lean_object* l_Lasm_UI_htmlTags___closed__118 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__118_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__118_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__111_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__119 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__119_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__117_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__119_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__120 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__120_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__116_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__120_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__121 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__121_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__115_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__121_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__122 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__122_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__114_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__122_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__123 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__123_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__113_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__123_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__124 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__124_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__112_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__124_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__125 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__125_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__126_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "h6"};
static const lean_object* l_Lasm_UI_htmlTags___closed__126 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__126_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__127_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "head"};
static const lean_object* l_Lasm_UI_htmlTags___closed__127 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__127_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l_Lasm_UI_htmlTags___closed__128 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__128_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__129_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hgroup"};
static const lean_object* l_Lasm_UI_htmlTags___closed__129 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__129_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "hr"};
static const lean_object* l_Lasm_UI_htmlTags___closed__130 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__130_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "html"};
static const lean_object* l_Lasm_UI_htmlTags___closed__131 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__131_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l_Lasm_UI_htmlTags___closed__132 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__132_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__132_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__125_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__133 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__133_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__134_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__131_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__133_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__134 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__134_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__135_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__130_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__134_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__135 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__135_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__136_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__129_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__135_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__136 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__136_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__137_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__128_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__136_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__137 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__137_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__138_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__127_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__137_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__138 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__138_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__126_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__138_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__139 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__139_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__140_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "footer"};
static const lean_object* l_Lasm_UI_htmlTags___closed__140 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__140_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "form"};
static const lean_object* l_Lasm_UI_htmlTags___closed__141 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__141_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__142_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "h1"};
static const lean_object* l_Lasm_UI_htmlTags___closed__142 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__142_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "h2"};
static const lean_object* l_Lasm_UI_htmlTags___closed__143 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__143_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__144_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "h3"};
static const lean_object* l_Lasm_UI_htmlTags___closed__144 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__144_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "h4"};
static const lean_object* l_Lasm_UI_htmlTags___closed__145 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__145_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__146_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "h5"};
static const lean_object* l_Lasm_UI_htmlTags___closed__146 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__146_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__147_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__146_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__139_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__147 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__147_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__148_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__145_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__147_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__148 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__148_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__149_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__144_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__148_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__149 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__149_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__150_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__143_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__149_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__150 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__150_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__151_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__142_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__150_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__151 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__151_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__152_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__141_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__151_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__152 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__152_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__153_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__140_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__152_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__153 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__153_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__154_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dl"};
static const lean_object* l_Lasm_UI_htmlTags___closed__154 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__154_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__155_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dt"};
static const lean_object* l_Lasm_UI_htmlTags___closed__155 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__155_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__156_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "em"};
static const lean_object* l_Lasm_UI_htmlTags___closed__156 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__156_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__157_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "embed"};
static const lean_object* l_Lasm_UI_htmlTags___closed__157 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__157_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__158_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fieldset"};
static const lean_object* l_Lasm_UI_htmlTags___closed__158 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__158_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__159_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "figcaption"};
static const lean_object* l_Lasm_UI_htmlTags___closed__159 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__159_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__160_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "figure"};
static const lean_object* l_Lasm_UI_htmlTags___closed__160 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__160_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__161_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__160_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__153_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__161 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__161_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__162_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__159_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__161_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__162 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__162_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__163_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__158_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__162_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__163 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__163_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__164_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__157_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__163_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__164 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__164_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__165_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__156_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__164_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__165 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__165_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__166_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__155_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__165_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__166 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__166_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__167_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__154_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__166_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__167 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__167_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__168_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "datalist"};
static const lean_object* l_Lasm_UI_htmlTags___closed__168 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__168_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__169_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dd"};
static const lean_object* l_Lasm_UI_htmlTags___closed__169 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__169_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__170_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "del"};
static const lean_object* l_Lasm_UI_htmlTags___closed__170 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__170_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__171_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "details"};
static const lean_object* l_Lasm_UI_htmlTags___closed__171 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__171_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__172_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dfn"};
static const lean_object* l_Lasm_UI_htmlTags___closed__172 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__172_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__173_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "dialog"};
static const lean_object* l_Lasm_UI_htmlTags___closed__173 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__173_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__174_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "div"};
static const lean_object* l_Lasm_UI_htmlTags___closed__174 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__174_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__175_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__174_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__167_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__175 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__175_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__176_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__173_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__175_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__176 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__176_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__177_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__172_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__176_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__177 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__177_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__178_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__171_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__177_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__178 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__178_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__179_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__170_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__178_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__179 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__179_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__180_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__169_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__179_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__180 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__180_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__181_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__168_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__180_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__181 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__181_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__182_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "button"};
static const lean_object* l_Lasm_UI_htmlTags___closed__182 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__182_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__183_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "canvas"};
static const lean_object* l_Lasm_UI_htmlTags___closed__183 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__183_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__184_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caption"};
static const lean_object* l_Lasm_UI_htmlTags___closed__184 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__184_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__185_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cite"};
static const lean_object* l_Lasm_UI_htmlTags___closed__185 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__185_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__186_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lasm_UI_htmlTags___closed__186 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__186_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__187_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "col"};
static const lean_object* l_Lasm_UI_htmlTags___closed__187 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__187_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__188_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "colgroup"};
static const lean_object* l_Lasm_UI_htmlTags___closed__188 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__188_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__189_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__188_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__181_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__189 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__189_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__190_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__187_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__189_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__190 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__190_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__191_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__186_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__190_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__191 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__191_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__192_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__185_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__191_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__192 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__192_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__193_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__184_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__192_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__193 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__193_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__194_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__183_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__193_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__194 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__194_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__195_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__182_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__194_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__195 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__195_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__196_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l_Lasm_UI_htmlTags___closed__196 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__196_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__197_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "base"};
static const lean_object* l_Lasm_UI_htmlTags___closed__197 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__197_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__198_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bdi"};
static const lean_object* l_Lasm_UI_htmlTags___closed__198 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__198_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__199_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bdo"};
static const lean_object* l_Lasm_UI_htmlTags___closed__199 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__199_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__200_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "blockquote"};
static const lean_object* l_Lasm_UI_htmlTags___closed__200 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__200_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__201_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l_Lasm_UI_htmlTags___closed__201 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__201_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__202_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "br"};
static const lean_object* l_Lasm_UI_htmlTags___closed__202 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__202_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__203_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__202_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__195_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__203 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__203_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__204_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__201_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__203_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__204 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__204_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__205_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__200_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__204_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__205 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__205_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__206_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__199_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__205_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__206 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__206_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__207_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__198_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__206_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__207 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__207_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__208_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__197_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__207_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__208 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__208_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__209_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__196_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__208_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__209 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__209_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__210_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lasm_UI_htmlTags___closed__210 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__210_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__211_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "abbr"};
static const lean_object* l_Lasm_UI_htmlTags___closed__211 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__211_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__212_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "address"};
static const lean_object* l_Lasm_UI_htmlTags___closed__212 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__212_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__213_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "area"};
static const lean_object* l_Lasm_UI_htmlTags___closed__213 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__213_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__214_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "article"};
static const lean_object* l_Lasm_UI_htmlTags___closed__214 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__214_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__215_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "aside"};
static const lean_object* l_Lasm_UI_htmlTags___closed__215 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__215_value;
static const lean_string_object l_Lasm_UI_htmlTags___closed__216_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "audio"};
static const lean_object* l_Lasm_UI_htmlTags___closed__216 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__216_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__217_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__216_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__209_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__217 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__217_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__218_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__215_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__217_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__218 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__218_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__219_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__214_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__218_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__219 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__219_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__220_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__213_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__219_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__220 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__220_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__221_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__212_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__220_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__221 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__221_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__222_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__211_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__221_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__222 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__222_value;
static const lean_ctor_object l_Lasm_UI_htmlTags___closed__223_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__210_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__222_value)}};
static const lean_object* l_Lasm_UI_htmlTags___closed__223 = (const lean_object*)&l_Lasm_UI_htmlTags___closed__223_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_htmlTags = (const lean_object*)&l_Lasm_UI_htmlTags___closed__223_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__1_value),((lean_object*)&l_Lasm_UI_htmlTags___closed__7_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__0 = (const lean_object*)&l_Lasm_UI_voidTags___closed__0_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__46_value),((lean_object*)&l_Lasm_UI_voidTags___closed__0_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__1 = (const lean_object*)&l_Lasm_UI_voidTags___closed__1_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__72_value),((lean_object*)&l_Lasm_UI_voidTags___closed__1_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__2 = (const lean_object*)&l_Lasm_UI_voidTags___closed__2_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__104_value),((lean_object*)&l_Lasm_UI_voidTags___closed__2_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__3 = (const lean_object*)&l_Lasm_UI_voidTags___closed__3_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__99_value),((lean_object*)&l_Lasm_UI_voidTags___closed__3_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__4 = (const lean_object*)&l_Lasm_UI_voidTags___closed__4_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__114_value),((lean_object*)&l_Lasm_UI_voidTags___closed__4_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__5 = (const lean_object*)&l_Lasm_UI_voidTags___closed__5_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__113_value),((lean_object*)&l_Lasm_UI_voidTags___closed__5_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__6 = (const lean_object*)&l_Lasm_UI_voidTags___closed__6_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__130_value),((lean_object*)&l_Lasm_UI_voidTags___closed__6_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__7 = (const lean_object*)&l_Lasm_UI_voidTags___closed__7_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__157_value),((lean_object*)&l_Lasm_UI_voidTags___closed__7_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__8 = (const lean_object*)&l_Lasm_UI_voidTags___closed__8_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__187_value),((lean_object*)&l_Lasm_UI_voidTags___closed__8_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__9 = (const lean_object*)&l_Lasm_UI_voidTags___closed__9_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__202_value),((lean_object*)&l_Lasm_UI_voidTags___closed__9_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__10 = (const lean_object*)&l_Lasm_UI_voidTags___closed__10_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__197_value),((lean_object*)&l_Lasm_UI_voidTags___closed__10_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__11 = (const lean_object*)&l_Lasm_UI_voidTags___closed__11_value;
static const lean_ctor_object l_Lasm_UI_voidTags___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__213_value),((lean_object*)&l_Lasm_UI_voidTags___closed__11_value)}};
static const lean_object* l_Lasm_UI_voidTags___closed__12 = (const lean_object*)&l_Lasm_UI_voidTags___closed__12_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_voidTags = (const lean_object*)&l_Lasm_UI_voidTags___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_UI_a___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_a(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_abbr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_abbr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_address___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_address(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_article___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_article(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_aside___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_aside(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_audio___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_audio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_b___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_b(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_bdi___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_bdi(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_bdo___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_bdo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_blockquote___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_blockquote(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_br___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_br(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_button___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_button(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_canvas___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_canvas(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_caption___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_caption(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_cite___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_cite(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_code___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_code(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_col___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_col(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_colgroup___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_colgroup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_datalist___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_datalist(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_dd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_dd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_del___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_del(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_details___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_details(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_dfn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_dfn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_dialog___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_dialog(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_div___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_div(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_dl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_dl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_dt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_dt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_em___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_em(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_embed___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_embed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_fieldset___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_fieldset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_figcaption___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_figcaption(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_figure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_figure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_footer___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_footer(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_form___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_form(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_h6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_header___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_header(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_hgroup___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_hgroup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_hr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_hr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_i___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_i(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_iframe___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_iframe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_img___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_img(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_input___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_input(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_ins___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_ins(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_kbd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_kbd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_label___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_label(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_legend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_legend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_li___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_li(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_main___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_main__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_map___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_map__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_mark___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_mark(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_menu___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_menu(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_meter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_meter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_nav___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_nav(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_noscript___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_noscript(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_object___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_object__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_ol___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_ol(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_optgroup___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_optgroup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_option___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_option(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_output___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_output(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_p___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_p(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_param___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_param(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_picture___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_picture(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_pre___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_pre(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_progress___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_progress(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_q___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_q(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_rp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_rp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_rt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_rt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_ruby___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_ruby(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_s___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_s(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_samp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_samp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_search___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_search(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_section___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_section__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_select___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_select(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_slot___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_slot__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_small___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_small(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_source___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_source(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_span___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_span(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_strong___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_strong(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_sub___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_sub__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_summary___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_summary(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_sup___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_sup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_table___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_table(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_tbody___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_tbody(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_td___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_td(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_template___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_template__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_textarea___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_textarea(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_tfoot___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_tfoot(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_th___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_th(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_thead___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_thead(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_time___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_time(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_tr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_tr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_track___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_track(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_u___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_u(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_ul___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_ul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_var___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_var__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_video___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_video(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_wbr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_wbr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_prop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_prop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_boolProp___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_boolProp___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_boolProp(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_boolProp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_stringProp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_stringProp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_style___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_style(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_data___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "data-"};
static const lean_object* l_Lasm_UI_data___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_data___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_data___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_data___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_data(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_data___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_aria___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "aria-"};
static const lean_object* l_Lasm_UI_aria___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_aria___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_aria___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_aria___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_aria(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_aria___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_class___00__redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* l_Lasm_UI_class___00__redArg___closed__0 = (const lean_object*)&l_Lasm_UI_class___00__redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_class___00__redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_class__(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_classList_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_classList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lasm_UI_classList___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_classList___redArg___closed__0_value;
static const lean_array_object l_Lasm_UI_classList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_classList___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_classList___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_classList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_classList(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_id___00__redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lasm_UI_id___00__redArg___closed__0 = (const lean_object*)&l_Lasm_UI_id___00__redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_id___00__redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_id__(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_type___00__redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_UI_type___00__redArg___closed__0 = (const lean_object*)&l_Lasm_UI_type___00__redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_type___00__redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_type__(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_for___00__redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "for"};
static const lean_object* l_Lasm_UI_for___00__redArg___closed__0 = (const lean_object*)&l_Lasm_UI_for___00__redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_for___00__redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_for__(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_max___00__redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l_Lasm_UI_max___00__redArg___closed__0 = (const lean_object*)&l_Lasm_UI_max___00__redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_max___00__redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_max__(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_min___00__redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "min"};
static const lean_object* l_Lasm_UI_min___00__redArg___closed__0 = (const lean_object*)&l_Lasm_UI_min___00__redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_min___00__redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_min__(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_value___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_UI_value___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_value___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_value___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_value(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_checked___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "checked"};
static const lean_object* l_Lasm_UI_checked___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_checked___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_checked___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_checked___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_checked(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_checked___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_selected___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "selected"};
static const lean_object* l_Lasm_UI_selected___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_selected___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_selected___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_selected___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_selected(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_selected___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_disabled___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "disabled"};
static const lean_object* l_Lasm_UI_disabled___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_disabled___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_disabled___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_disabled___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_disabled(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_disabled___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_hidden___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hidden"};
static const lean_object* l_Lasm_UI_hidden___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_hidden___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_hidden___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_hidden___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_hidden(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_hidden___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_readonly___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "readOnly"};
static const lean_object* l_Lasm_UI_readonly___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_readonly___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_readonly___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_readonly___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_readonly(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_readonly___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_required___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "required"};
static const lean_object* l_Lasm_UI_required___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_required___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_required___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_required___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_required(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_required___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_multiple___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "multiple"};
static const lean_object* l_Lasm_UI_multiple___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_multiple___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_multiple___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_multiple___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_multiple(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_multiple___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_autofocus___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "autofocus"};
static const lean_object* l_Lasm_UI_autofocus___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_autofocus___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_autofocus___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_autofocus___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_autofocus(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_autofocus___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_tabindex___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tabindex"};
static const lean_object* l_Lasm_UI_tabindex___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_tabindex___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_tabindex___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_tabindex___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_tabindex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_tabindex___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_colspan___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "colspan"};
static const lean_object* l_Lasm_UI_colspan___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_colspan___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_colspan___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_colspan(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_rowspan___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "rowspan"};
static const lean_object* l_Lasm_UI_rowspan___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_rowspan___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_rowspan___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_rowspan(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_width___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "width"};
static const lean_object* l_Lasm_UI_width___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_width___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_width___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_width(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_height___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "height"};
static const lean_object* l_Lasm_UI_height___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_height___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_height___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_height(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_title___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_title(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_placeholder___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "placeholder"};
static const lean_object* l_Lasm_UI_placeholder___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_placeholder___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_placeholder___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_placeholder(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_href___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "href"};
static const lean_object* l_Lasm_UI_href___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_href___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_href___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_href(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_src___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "src"};
static const lean_object* l_Lasm_UI_src___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_src___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_src___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_src(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_alt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* l_Lasm_UI_alt___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_alt___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_alt___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_alt(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_name___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_UI_name___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_name___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_name___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_name(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_target___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* l_Lasm_UI_target___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_target___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_target___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_target(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_rel___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l_Lasm_UI_rel___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_rel___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_rel___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_rel(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_action___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "action"};
static const lean_object* l_Lasm_UI_action___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_action___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_action___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_action(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_method___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "method"};
static const lean_object* l_Lasm_UI_method___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_method___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_method___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_method(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_lang___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lang"};
static const lean_object* l_Lasm_UI_lang___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_lang___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_lang___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_lang(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_dir___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dir"};
static const lean_object* l_Lasm_UI_dir___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_dir___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_dir___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_dir(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_role___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "role"};
static const lean_object* l_Lasm_UI_role___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_role___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_role___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_role(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_pattern___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pattern"};
static const lean_object* l_Lasm_UI_pattern___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_pattern___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_pattern___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_pattern(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_step___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "step"};
static const lean_object* l_Lasm_UI_step___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_step___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_step___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_step(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_accept___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "accept"};
static const lean_object* l_Lasm_UI_accept___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_accept___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_accept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_accept(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_autocomplete___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "autocomplete"};
static const lean_object* l_Lasm_UI_autocomplete___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_autocomplete___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_autocomplete___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_autocomplete(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_download___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "download"};
static const lean_object* l_Lasm_UI_download___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_download___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_download___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_download(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_srcset___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "srcset"};
static const lean_object* l_Lasm_UI_srcset___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_srcset___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_srcset___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_srcset(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_sizes___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sizes"};
static const lean_object* l_Lasm_UI_sizes___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_sizes___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_sizes___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_sizes(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_loading___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "loading"};
static const lean_object* l_Lasm_UI_loading___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_loading___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_loading___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_loading(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_media___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "media"};
static const lean_object* l_Lasm_UI_media___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_media___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_media___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_media(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_enctype___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "enctype"};
static const lean_object* l_Lasm_UI_enctype___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_enctype___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_enctype___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_enctype(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_list___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "list"};
static const lean_object* l_Lasm_UI_list___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_list___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_list___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_list(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_wrap___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "wrap"};
static const lean_object* l_Lasm_UI_wrap___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_wrap___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_wrap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_wrap(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_cols___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cols"};
static const lean_object* l_Lasm_UI_cols___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_cols___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_cols___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_cols(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_rows___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rows"};
static const lean_object* l_Lasm_UI_rows___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_rows___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_rows___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_rows(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_maxlength___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "maxlength"};
static const lean_object* l_Lasm_UI_maxlength___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_maxlength___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_maxlength___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_maxlength(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_minlength___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "minlength"};
static const lean_object* l_Lasm_UI_minlength___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_minlength___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_minlength___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_minlength(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_size___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* l_Lasm_UI_size___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_size___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_size(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_start___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* l_Lasm_UI_start___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_start___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_start___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_start(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_scope___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "scope"};
static const lean_object* l_Lasm_UI_scope___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_scope___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_scope___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_scope(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_headers___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "headers"};
static const lean_object* l_Lasm_UI_headers___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_headers___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_headers___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_headers(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_kind___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lasm_UI_kind___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_kind___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_kind___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_kind(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_srclang___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "srclang"};
static const lean_object* l_Lasm_UI_srclang___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_srclang___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_srclang___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_srclang(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_poster___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "poster"};
static const lean_object* l_Lasm_UI_poster___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_poster___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_poster___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_poster(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_preload___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "preload"};
static const lean_object* l_Lasm_UI_preload___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_preload___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_preload___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_preload(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_sandbox___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sandbox"};
static const lean_object* l_Lasm_UI_sandbox___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_sandbox___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_sandbox___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_sandbox(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_srcdoc___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "srcdoc"};
static const lean_object* l_Lasm_UI_srcdoc___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_srcdoc___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_srcdoc___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_srcdoc(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_datetime___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "datetime"};
static const lean_object* l_Lasm_UI_datetime___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_datetime___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_datetime___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_datetime(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_spellcheck___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "spellcheck"};
static const lean_object* l_Lasm_UI_spellcheck___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_spellcheck___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_spellcheck___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_spellcheck(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_draggable___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "draggable"};
static const lean_object* l_Lasm_UI_draggable___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_draggable___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_draggable___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_draggable(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_contenteditable___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "contenteditable"};
static const lean_object* l_Lasm_UI_contenteditable___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_contenteditable___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_contenteditable___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_contenteditable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_on___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lasm_UI_on___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_on___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_on___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_on___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_on___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_on(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_preventDefaultOn___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_preventDefaultOn___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_preventDefaultOn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_preventDefaultOn___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_preventDefaultOn___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_preventDefaultOn___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_preventDefaultOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_preventDefaultOn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_stopPropagationOn___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_stopPropagationOn___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_stopPropagationOn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_stopPropagationOn___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_stopPropagationOn___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_stopPropagationOn___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_stopPropagationOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_stopPropagationOn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_custom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_custom(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onClick___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "click"};
static const lean_object* l_Lasm_UI_onClick___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onClick___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onClick___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onClick(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onDoubleClick___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dblclick"};
static const lean_object* l_Lasm_UI_onDoubleClick___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onDoubleClick___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onDoubleClick___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onDoubleClick(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onMouseDown___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "mousedown"};
static const lean_object* l_Lasm_UI_onMouseDown___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onMouseDown___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseDown___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseDown(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onMouseUp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mouseup"};
static const lean_object* l_Lasm_UI_onMouseUp___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onMouseUp___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseUp___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseUp(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onMouseEnter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mouseenter"};
static const lean_object* l_Lasm_UI_onMouseEnter___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onMouseEnter___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseEnter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseEnter(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onMouseLeave___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mouseleave"};
static const lean_object* l_Lasm_UI_onMouseLeave___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onMouseLeave___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseLeave___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseLeave(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onMouseOver___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "mouseover"};
static const lean_object* l_Lasm_UI_onMouseOver___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onMouseOver___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseOver___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseOver(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onMouseOut___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mouseout"};
static const lean_object* l_Lasm_UI_onMouseOut___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onMouseOut___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseOut___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseOut(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onFocus___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "focus"};
static const lean_object* l_Lasm_UI_onFocus___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onFocus___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onFocus___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onFocus(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onBlur___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "blur"};
static const lean_object* l_Lasm_UI_onBlur___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onBlur___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onBlur___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onBlur(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onInput___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onInput(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onChange___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "change"};
static const lean_object* l_Lasm_UI_onChange___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onChange___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onChange(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onCheck___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onCheck(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onSubmit___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "submit"};
static const lean_object* l_Lasm_UI_onSubmit___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onSubmit___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onSubmit___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onSubmit(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onKeyDown___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "keydown"};
static const lean_object* l_Lasm_UI_onKeyDown___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onKeyDown___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onKeyDown___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onKeyDown(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onKeyUp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "keyup"};
static const lean_object* l_Lasm_UI_onKeyUp___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onKeyUp___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_onKeyUp___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onKeyUp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onEnter___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onEnter___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onEnter___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Enter"};
static const lean_object* l_Lasm_UI_onEnter___redArg___lam__1___closed__0 = (const lean_object*)&l_Lasm_UI_onEnter___redArg___lam__1___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_UI_onEnter___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onEnter___redArg___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_onEnter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_onEnter___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_onEnter___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onEnter___redArg___closed__0_value;
static lean_once_cell_t l_Lasm_UI_onEnter___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_onEnter___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lasm_UI_onEnter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onEnter(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_onEscape___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Escape"};
static const lean_object* l_Lasm_UI_onEscape___redArg___lam__1___closed__0 = (const lean_object*)&l_Lasm_UI_onEscape___redArg___lam__1___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_UI_onEscape___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onEscape___redArg___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_onEscape___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_onEscape___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_onEscape___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_onEscape___redArg___closed__0_value;
static lean_once_cell_t l_Lasm_UI_onEscape___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_onEscape___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lasm_UI_onEscape___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_onEscape(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_node___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_node(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_tags___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "image"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__0_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "desc"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__1 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__1_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "animate"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__2 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__2_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "animateTransform"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__3 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__4 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__2_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__4_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__5 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__1_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__5_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__6 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_htmlTags___closed__20_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__6_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__7 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__0_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__7_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__8 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__8_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "feColorMatrix"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__9 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__9_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "feMerge"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__10 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__10_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "feMergeNode"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__11 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__11_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "foreignObject"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__12 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__12_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__12_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__8_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__13 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__13_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__11_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__13_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__14 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__14_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__10_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__14_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__15 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__15_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__9_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__15_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__16 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__16_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stop"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__17 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__17_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "filter"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__18 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__18_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "feGaussianBlur"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__19 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__19_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "feOffset"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__20 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__20_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "feBlend"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__21 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__21_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__21_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__16_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__22 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__22_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__20_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__22_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__23 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__23_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__19_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__23_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__24 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__24_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__18_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__24_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__25 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__25_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__17_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__25_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__26 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__26_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "clipPath"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__27 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__27_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mask"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__28 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__28_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "linearGradient"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__29 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__29_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "radialGradient"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__30 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__30_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__30_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__26_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__31 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__31_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__29_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__31_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__32 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__32_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__28_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__32_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__33 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__33_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__27_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__33_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__34 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__34_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__35 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__35_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tspan"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__36 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__36_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "textPath"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__37 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__37_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "marker"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__38 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__38_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_pattern___redArg___closed__0_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__34_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__39 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__39_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__38_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__39_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__40 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__40_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__37_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__40_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__41 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__41_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__36_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__41_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__42 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__42_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__35_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__42_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__43 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__43_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ellipse"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__44 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__44_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "line"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__45 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__45_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "polyline"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__46 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__46_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "polygon"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__47 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__47_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__47_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__43_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__48 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__48_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__46_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__48_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__49 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__49_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__45_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__49_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__50 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__50_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__44_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__50_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__51 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__51_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "use"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__52 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__52_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__53 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__53_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rect"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__54 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__54_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "circle"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__55 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__55_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__55_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__51_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__56 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__56_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__54_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__56_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__57 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__57_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__53_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__57_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__58 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__58_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__52_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__58_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__59 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__59_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "svg"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__60 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__60_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "g"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__61 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__61_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "defs"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__62 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__62_value;
static const lean_string_object l_Lasm_UI_Svg_tags___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "symbol"};
static const lean_object* l_Lasm_UI_Svg_tags___closed__63 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__63_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__63_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__59_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__64 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__64_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__62_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__64_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__65 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__65_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__61_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__65_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__66 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__66_value;
static const lean_ctor_object l_Lasm_UI_Svg_tags___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Svg_tags___closed__60_value),((lean_object*)&l_Lasm_UI_Svg_tags___closed__66_value)}};
static const lean_object* l_Lasm_UI_Svg_tags___closed__67 = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__67_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Svg_tags = (const lean_object*)&l_Lasm_UI_Svg_tags___closed__67_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_svg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_svg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_g___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_g(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_defs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_defs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_symbol___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_symbol(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_use___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_use__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_path___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_path(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_rect___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_rect(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_circle___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_circle(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_ellipse___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_ellipse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_line___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_line(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_polyline___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_polyline(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_polygon___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_polygon(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_text___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_text__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_tspan___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_tspan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_textPath___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_textPath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_marker___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_marker(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_pattern___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_pattern(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_clipPath___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_clipPath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_mask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_mask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_linearGradient___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_linearGradient(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_radialGradient___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_radialGradient(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_stop___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_stop__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_filter___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_filter__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feGaussianBlur___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feGaussianBlur(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feOffset___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feOffset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feBlend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feBlend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feColorMatrix___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feColorMatrix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feMerge___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feMerge(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feMergeNode___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feMergeNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_foreignObject___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_foreignObject(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_image___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_image(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_title___00__redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_title__(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_desc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_desc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_animate___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_animate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_animateTransform___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_animateTransform(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_viewBox___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "viewBox"};
static const lean_object* l_Lasm_UI_Svg_viewBox___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_viewBox___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_viewBox___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_viewBox(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_d___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "d"};
static const lean_object* l_Lasm_UI_Svg_d___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_d___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_d___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_d(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_fill___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fill"};
static const lean_object* l_Lasm_UI_Svg_fill___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_fill___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fill___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fill(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_stroke___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stroke"};
static const lean_object* l_Lasm_UI_Svg_stroke___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_stroke___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_stroke___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_stroke(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_cx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "cx"};
static const lean_object* l_Lasm_UI_Svg_cx___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_cx___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_cx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_cx(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_cy___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "cy"};
static const lean_object* l_Lasm_UI_Svg_cy___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_cy___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_cy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_cy(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_r___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l_Lasm_UI_Svg_r___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_r___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_r___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_r(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_rx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "rx"};
static const lean_object* l_Lasm_UI_Svg_rx___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_rx___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_rx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_rx(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_ry___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ry"};
static const lean_object* l_Lasm_UI_Svg_ry___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_ry___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_ry___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_ry(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_x___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lasm_UI_Svg_x___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_x___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_y___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l_Lasm_UI_Svg_y___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_y___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_x1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "x1"};
static const lean_object* l_Lasm_UI_Svg_x1___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_x1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x1(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_y1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "y1"};
static const lean_object* l_Lasm_UI_Svg_y1___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_y1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y1(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_x2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "x2"};
static const lean_object* l_Lasm_UI_Svg_x2___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_x2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x2(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_y2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "y2"};
static const lean_object* l_Lasm_UI_Svg_y2___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_y2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y2(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_points___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "points"};
static const lean_object* l_Lasm_UI_Svg_points___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_points___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_points___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_points(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_transform___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l_Lasm_UI_Svg_transform___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_transform___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_transform___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_transform(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_opacity___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "opacity"};
static const lean_object* l_Lasm_UI_Svg_opacity___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_opacity___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_opacity___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_opacity(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_offset___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "offset"};
static const lean_object* l_Lasm_UI_Svg_offset___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_offset___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_offset___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_offset(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_strokeWidth___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "stroke-width"};
static const lean_object* l_Lasm_UI_Svg_strokeWidth___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_strokeWidth___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeWidth___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeWidth(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_fillOpacity___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "fill-opacity"};
static const lean_object* l_Lasm_UI_Svg_fillOpacity___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_fillOpacity___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fillOpacity___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fillOpacity(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_strokeLinecap___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "stroke-linecap"};
static const lean_object* l_Lasm_UI_Svg_strokeLinecap___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_strokeLinecap___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeLinecap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeLinecap(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_strokeDasharray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "stroke-dasharray"};
static const lean_object* l_Lasm_UI_Svg_strokeDasharray___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_strokeDasharray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeDasharray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeDasharray(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_textAnchor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "text-anchor"};
static const lean_object* l_Lasm_UI_Svg_textAnchor___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_textAnchor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_textAnchor___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_textAnchor(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Svg_fontSize___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "font-size"};
static const lean_object* l_Lasm_UI_Svg_fontSize___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Svg_fontSize___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fontSize___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fontSize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_width___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_width(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_height___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_height(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_text___redArg(lean_object* v_s_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2_, 0, v_s_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_text(lean_object* v_Msg_3_, lean_object* v_s_4_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_s_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_node___redArg(lean_object* v_tag_6_, lean_object* v_attrs_7_, lean_object* v_children_8_){
_start:
{
uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = 0;
v___x_10_ = lean_box(0);
v___x_11_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_11_, 0, v_tag_6_);
lean_ctor_set(v___x_11_, 1, v___x_10_);
lean_ctor_set(v___x_11_, 2, v_attrs_7_);
lean_ctor_set(v___x_11_, 3, v_children_8_);
lean_ctor_set_uint8(v___x_11_, sizeof(void*)*4, v___x_9_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_node(lean_object* v_Msg_12_, lean_object* v_tag_13_, lean_object* v_attrs_14_, lean_object* v_children_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lasm_UI_node___redArg(v_tag_13_, v_attrs_14_, v_children_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_nodeNS___redArg(uint8_t v_ns_17_, lean_object* v_tag_18_, lean_object* v_attrs_19_, lean_object* v_children_20_){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_box(0);
v___x_22_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_22_, 0, v_tag_18_);
lean_ctor_set(v___x_22_, 1, v___x_21_);
lean_ctor_set(v___x_22_, 2, v_attrs_19_);
lean_ctor_set(v___x_22_, 3, v_children_20_);
lean_ctor_set_uint8(v___x_22_, sizeof(void*)*4, v_ns_17_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_nodeNS___redArg___boxed(lean_object* v_ns_23_, lean_object* v_tag_24_, lean_object* v_attrs_25_, lean_object* v_children_26_){
_start:
{
uint8_t v_ns_boxed_27_; lean_object* v_res_28_; 
v_ns_boxed_27_ = lean_unbox(v_ns_23_);
v_res_28_ = l_Lasm_UI_nodeNS___redArg(v_ns_boxed_27_, v_tag_24_, v_attrs_25_, v_children_26_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_nodeNS(lean_object* v_Msg_29_, uint8_t v_ns_30_, lean_object* v_tag_31_, lean_object* v_attrs_32_, lean_object* v_children_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lasm_UI_nodeNS___redArg(v_ns_30_, v_tag_31_, v_attrs_32_, v_children_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_nodeNS___boxed(lean_object* v_Msg_35_, lean_object* v_ns_36_, lean_object* v_tag_37_, lean_object* v_attrs_38_, lean_object* v_children_39_){
_start:
{
uint8_t v_ns_boxed_40_; lean_object* v_res_41_; 
v_ns_boxed_40_ = lean_unbox(v_ns_36_);
v_res_41_ = l_Lasm_UI_nodeNS(v_Msg_35_, v_ns_boxed_40_, v_tag_37_, v_attrs_38_, v_children_39_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyed___redArg(lean_object* v_k_42_, lean_object* v_h_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lasm_UI_Html_keyed___redArg(v_k_42_, v_h_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyed(lean_object* v_Msg_45_, lean_object* v_k_46_, lean_object* v_h_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lasm_UI_Html_keyed___redArg(v_k_46_, v_h_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_empty___redArg(){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = ((lean_object*)(l_Lasm_UI_empty___redArg___closed__1));
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_empty___redArg___boxed(lean_object* v___dummy_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lasm_UI_empty___redArg();
return v_res_55_;
}
}
static lean_object* _init_l_Lasm_UI_empty___closed__0(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lasm_UI_empty___redArg();
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_empty(lean_object* v_Msg_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lean_obj_once(&l_Lasm_UI_empty___closed__0, &l_Lasm_UI_empty___closed__0_once, _init_l_Lasm_UI_empty___closed__0);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_a___redArg(lean_object* v_attrs_548_, lean_object* v_children_549_){
_start:
{
uint8_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_550_ = 0;
v___x_551_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__210));
v___x_552_ = lean_box(0);
v___x_553_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_553_, 0, v___x_551_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
lean_ctor_set(v___x_553_, 2, v_attrs_548_);
lean_ctor_set(v___x_553_, 3, v_children_549_);
lean_ctor_set_uint8(v___x_553_, sizeof(void*)*4, v___x_550_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_a(lean_object* v_Msg_554_, lean_object* v_attrs_555_, lean_object* v_children_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Lasm_UI_a___redArg(v_attrs_555_, v_children_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_abbr___redArg(lean_object* v_attrs_558_, lean_object* v_children_559_){
_start:
{
uint8_t v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_560_ = 0;
v___x_561_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__211));
v___x_562_ = lean_box(0);
v___x_563_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_563_, 0, v___x_561_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
lean_ctor_set(v___x_563_, 2, v_attrs_558_);
lean_ctor_set(v___x_563_, 3, v_children_559_);
lean_ctor_set_uint8(v___x_563_, sizeof(void*)*4, v___x_560_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_abbr(lean_object* v_Msg_564_, lean_object* v_attrs_565_, lean_object* v_children_566_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = l_Lasm_UI_abbr___redArg(v_attrs_565_, v_children_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_address___redArg(lean_object* v_attrs_568_, lean_object* v_children_569_){
_start:
{
uint8_t v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_570_ = 0;
v___x_571_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__212));
v___x_572_ = lean_box(0);
v___x_573_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_573_, 0, v___x_571_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
lean_ctor_set(v___x_573_, 2, v_attrs_568_);
lean_ctor_set(v___x_573_, 3, v_children_569_);
lean_ctor_set_uint8(v___x_573_, sizeof(void*)*4, v___x_570_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_address(lean_object* v_Msg_574_, lean_object* v_attrs_575_, lean_object* v_children_576_){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Lasm_UI_address___redArg(v_attrs_575_, v_children_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_article___redArg(lean_object* v_attrs_578_, lean_object* v_children_579_){
_start:
{
uint8_t v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_580_ = 0;
v___x_581_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__214));
v___x_582_ = lean_box(0);
v___x_583_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_583_, 0, v___x_581_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
lean_ctor_set(v___x_583_, 2, v_attrs_578_);
lean_ctor_set(v___x_583_, 3, v_children_579_);
lean_ctor_set_uint8(v___x_583_, sizeof(void*)*4, v___x_580_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_article(lean_object* v_Msg_584_, lean_object* v_attrs_585_, lean_object* v_children_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lasm_UI_article___redArg(v_attrs_585_, v_children_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_aside___redArg(lean_object* v_attrs_588_, lean_object* v_children_589_){
_start:
{
uint8_t v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_590_ = 0;
v___x_591_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__215));
v___x_592_ = lean_box(0);
v___x_593_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_593_, 0, v___x_591_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
lean_ctor_set(v___x_593_, 2, v_attrs_588_);
lean_ctor_set(v___x_593_, 3, v_children_589_);
lean_ctor_set_uint8(v___x_593_, sizeof(void*)*4, v___x_590_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_aside(lean_object* v_Msg_594_, lean_object* v_attrs_595_, lean_object* v_children_596_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lasm_UI_aside___redArg(v_attrs_595_, v_children_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_audio___redArg(lean_object* v_attrs_598_, lean_object* v_children_599_){
_start:
{
uint8_t v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_600_ = 0;
v___x_601_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__216));
v___x_602_ = lean_box(0);
v___x_603_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_603_, 0, v___x_601_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
lean_ctor_set(v___x_603_, 2, v_attrs_598_);
lean_ctor_set(v___x_603_, 3, v_children_599_);
lean_ctor_set_uint8(v___x_603_, sizeof(void*)*4, v___x_600_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_audio(lean_object* v_Msg_604_, lean_object* v_attrs_605_, lean_object* v_children_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lasm_UI_audio___redArg(v_attrs_605_, v_children_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_b___redArg(lean_object* v_attrs_608_, lean_object* v_children_609_){
_start:
{
uint8_t v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_610_ = 0;
v___x_611_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__196));
v___x_612_ = lean_box(0);
v___x_613_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_613_, 0, v___x_611_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
lean_ctor_set(v___x_613_, 2, v_attrs_608_);
lean_ctor_set(v___x_613_, 3, v_children_609_);
lean_ctor_set_uint8(v___x_613_, sizeof(void*)*4, v___x_610_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_b(lean_object* v_Msg_614_, lean_object* v_attrs_615_, lean_object* v_children_616_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l_Lasm_UI_b___redArg(v_attrs_615_, v_children_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_bdi___redArg(lean_object* v_attrs_618_, lean_object* v_children_619_){
_start:
{
uint8_t v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_620_ = 0;
v___x_621_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__198));
v___x_622_ = lean_box(0);
v___x_623_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_623_, 0, v___x_621_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
lean_ctor_set(v___x_623_, 2, v_attrs_618_);
lean_ctor_set(v___x_623_, 3, v_children_619_);
lean_ctor_set_uint8(v___x_623_, sizeof(void*)*4, v___x_620_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_bdi(lean_object* v_Msg_624_, lean_object* v_attrs_625_, lean_object* v_children_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l_Lasm_UI_bdi___redArg(v_attrs_625_, v_children_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_bdo___redArg(lean_object* v_attrs_628_, lean_object* v_children_629_){
_start:
{
uint8_t v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_630_ = 0;
v___x_631_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__199));
v___x_632_ = lean_box(0);
v___x_633_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_633_, 0, v___x_631_);
lean_ctor_set(v___x_633_, 1, v___x_632_);
lean_ctor_set(v___x_633_, 2, v_attrs_628_);
lean_ctor_set(v___x_633_, 3, v_children_629_);
lean_ctor_set_uint8(v___x_633_, sizeof(void*)*4, v___x_630_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_bdo(lean_object* v_Msg_634_, lean_object* v_attrs_635_, lean_object* v_children_636_){
_start:
{
lean_object* v___x_637_; 
v___x_637_ = l_Lasm_UI_bdo___redArg(v_attrs_635_, v_children_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_blockquote___redArg(lean_object* v_attrs_638_, lean_object* v_children_639_){
_start:
{
uint8_t v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_640_ = 0;
v___x_641_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__200));
v___x_642_ = lean_box(0);
v___x_643_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_643_, 0, v___x_641_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
lean_ctor_set(v___x_643_, 2, v_attrs_638_);
lean_ctor_set(v___x_643_, 3, v_children_639_);
lean_ctor_set_uint8(v___x_643_, sizeof(void*)*4, v___x_640_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_blockquote(lean_object* v_Msg_644_, lean_object* v_attrs_645_, lean_object* v_children_646_){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = l_Lasm_UI_blockquote___redArg(v_attrs_645_, v_children_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_br___redArg(lean_object* v_attrs_648_){
_start:
{
uint8_t v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_649_ = 0;
v___x_650_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__202));
v___x_651_ = lean_box(0);
v___x_652_ = lean_box(0);
v___x_653_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_653_, 0, v___x_650_);
lean_ctor_set(v___x_653_, 1, v___x_651_);
lean_ctor_set(v___x_653_, 2, v_attrs_648_);
lean_ctor_set(v___x_653_, 3, v___x_652_);
lean_ctor_set_uint8(v___x_653_, sizeof(void*)*4, v___x_649_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_br(lean_object* v_Msg_654_, lean_object* v_attrs_655_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l_Lasm_UI_br___redArg(v_attrs_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_button___redArg(lean_object* v_attrs_657_, lean_object* v_children_658_){
_start:
{
uint8_t v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_659_ = 0;
v___x_660_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__182));
v___x_661_ = lean_box(0);
v___x_662_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_662_, 0, v___x_660_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
lean_ctor_set(v___x_662_, 2, v_attrs_657_);
lean_ctor_set(v___x_662_, 3, v_children_658_);
lean_ctor_set_uint8(v___x_662_, sizeof(void*)*4, v___x_659_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_button(lean_object* v_Msg_663_, lean_object* v_attrs_664_, lean_object* v_children_665_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = l_Lasm_UI_button___redArg(v_attrs_664_, v_children_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_canvas___redArg(lean_object* v_attrs_667_, lean_object* v_children_668_){
_start:
{
uint8_t v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_669_ = 0;
v___x_670_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__183));
v___x_671_ = lean_box(0);
v___x_672_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_672_, 0, v___x_670_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
lean_ctor_set(v___x_672_, 2, v_attrs_667_);
lean_ctor_set(v___x_672_, 3, v_children_668_);
lean_ctor_set_uint8(v___x_672_, sizeof(void*)*4, v___x_669_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_canvas(lean_object* v_Msg_673_, lean_object* v_attrs_674_, lean_object* v_children_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Lasm_UI_canvas___redArg(v_attrs_674_, v_children_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_caption___redArg(lean_object* v_attrs_677_, lean_object* v_children_678_){
_start:
{
uint8_t v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_679_ = 0;
v___x_680_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__184));
v___x_681_ = lean_box(0);
v___x_682_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_682_, 0, v___x_680_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
lean_ctor_set(v___x_682_, 2, v_attrs_677_);
lean_ctor_set(v___x_682_, 3, v_children_678_);
lean_ctor_set_uint8(v___x_682_, sizeof(void*)*4, v___x_679_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_caption(lean_object* v_Msg_683_, lean_object* v_attrs_684_, lean_object* v_children_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l_Lasm_UI_caption___redArg(v_attrs_684_, v_children_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_cite___redArg(lean_object* v_attrs_687_, lean_object* v_children_688_){
_start:
{
uint8_t v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_689_ = 0;
v___x_690_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__185));
v___x_691_ = lean_box(0);
v___x_692_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_692_, 0, v___x_690_);
lean_ctor_set(v___x_692_, 1, v___x_691_);
lean_ctor_set(v___x_692_, 2, v_attrs_687_);
lean_ctor_set(v___x_692_, 3, v_children_688_);
lean_ctor_set_uint8(v___x_692_, sizeof(void*)*4, v___x_689_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_cite(lean_object* v_Msg_693_, lean_object* v_attrs_694_, lean_object* v_children_695_){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = l_Lasm_UI_cite___redArg(v_attrs_694_, v_children_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_code___redArg(lean_object* v_attrs_697_, lean_object* v_children_698_){
_start:
{
uint8_t v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_699_ = 0;
v___x_700_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__186));
v___x_701_ = lean_box(0);
v___x_702_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_702_, 0, v___x_700_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
lean_ctor_set(v___x_702_, 2, v_attrs_697_);
lean_ctor_set(v___x_702_, 3, v_children_698_);
lean_ctor_set_uint8(v___x_702_, sizeof(void*)*4, v___x_699_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_code(lean_object* v_Msg_703_, lean_object* v_attrs_704_, lean_object* v_children_705_){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = l_Lasm_UI_code___redArg(v_attrs_704_, v_children_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_col___redArg(lean_object* v_attrs_707_){
_start:
{
uint8_t v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_708_ = 0;
v___x_709_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__187));
v___x_710_ = lean_box(0);
v___x_711_ = lean_box(0);
v___x_712_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_712_, 0, v___x_709_);
lean_ctor_set(v___x_712_, 1, v___x_710_);
lean_ctor_set(v___x_712_, 2, v_attrs_707_);
lean_ctor_set(v___x_712_, 3, v___x_711_);
lean_ctor_set_uint8(v___x_712_, sizeof(void*)*4, v___x_708_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_col(lean_object* v_Msg_713_, lean_object* v_attrs_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lasm_UI_col___redArg(v_attrs_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_colgroup___redArg(lean_object* v_attrs_716_, lean_object* v_children_717_){
_start:
{
uint8_t v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_718_ = 0;
v___x_719_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__188));
v___x_720_ = lean_box(0);
v___x_721_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_721_, 0, v___x_719_);
lean_ctor_set(v___x_721_, 1, v___x_720_);
lean_ctor_set(v___x_721_, 2, v_attrs_716_);
lean_ctor_set(v___x_721_, 3, v_children_717_);
lean_ctor_set_uint8(v___x_721_, sizeof(void*)*4, v___x_718_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_colgroup(lean_object* v_Msg_722_, lean_object* v_attrs_723_, lean_object* v_children_724_){
_start:
{
lean_object* v___x_725_; 
v___x_725_ = l_Lasm_UI_colgroup___redArg(v_attrs_723_, v_children_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_datalist___redArg(lean_object* v_attrs_726_, lean_object* v_children_727_){
_start:
{
uint8_t v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_728_ = 0;
v___x_729_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__168));
v___x_730_ = lean_box(0);
v___x_731_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_731_, 0, v___x_729_);
lean_ctor_set(v___x_731_, 1, v___x_730_);
lean_ctor_set(v___x_731_, 2, v_attrs_726_);
lean_ctor_set(v___x_731_, 3, v_children_727_);
lean_ctor_set_uint8(v___x_731_, sizeof(void*)*4, v___x_728_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_datalist(lean_object* v_Msg_732_, lean_object* v_attrs_733_, lean_object* v_children_734_){
_start:
{
lean_object* v___x_735_; 
v___x_735_ = l_Lasm_UI_datalist___redArg(v_attrs_733_, v_children_734_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dd___redArg(lean_object* v_attrs_736_, lean_object* v_children_737_){
_start:
{
uint8_t v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_738_ = 0;
v___x_739_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__169));
v___x_740_ = lean_box(0);
v___x_741_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_741_, 0, v___x_739_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
lean_ctor_set(v___x_741_, 2, v_attrs_736_);
lean_ctor_set(v___x_741_, 3, v_children_737_);
lean_ctor_set_uint8(v___x_741_, sizeof(void*)*4, v___x_738_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dd(lean_object* v_Msg_742_, lean_object* v_attrs_743_, lean_object* v_children_744_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lasm_UI_dd___redArg(v_attrs_743_, v_children_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_del___redArg(lean_object* v_attrs_746_, lean_object* v_children_747_){
_start:
{
uint8_t v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_748_ = 0;
v___x_749_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__170));
v___x_750_ = lean_box(0);
v___x_751_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_751_, 0, v___x_749_);
lean_ctor_set(v___x_751_, 1, v___x_750_);
lean_ctor_set(v___x_751_, 2, v_attrs_746_);
lean_ctor_set(v___x_751_, 3, v_children_747_);
lean_ctor_set_uint8(v___x_751_, sizeof(void*)*4, v___x_748_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_del(lean_object* v_Msg_752_, lean_object* v_attrs_753_, lean_object* v_children_754_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Lasm_UI_del___redArg(v_attrs_753_, v_children_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_details___redArg(lean_object* v_attrs_756_, lean_object* v_children_757_){
_start:
{
uint8_t v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_758_ = 0;
v___x_759_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__171));
v___x_760_ = lean_box(0);
v___x_761_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_761_, 0, v___x_759_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
lean_ctor_set(v___x_761_, 2, v_attrs_756_);
lean_ctor_set(v___x_761_, 3, v_children_757_);
lean_ctor_set_uint8(v___x_761_, sizeof(void*)*4, v___x_758_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_details(lean_object* v_Msg_762_, lean_object* v_attrs_763_, lean_object* v_children_764_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_Lasm_UI_details___redArg(v_attrs_763_, v_children_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dfn___redArg(lean_object* v_attrs_766_, lean_object* v_children_767_){
_start:
{
uint8_t v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_768_ = 0;
v___x_769_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__172));
v___x_770_ = lean_box(0);
v___x_771_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_771_, 0, v___x_769_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
lean_ctor_set(v___x_771_, 2, v_attrs_766_);
lean_ctor_set(v___x_771_, 3, v_children_767_);
lean_ctor_set_uint8(v___x_771_, sizeof(void*)*4, v___x_768_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dfn(lean_object* v_Msg_772_, lean_object* v_attrs_773_, lean_object* v_children_774_){
_start:
{
lean_object* v___x_775_; 
v___x_775_ = l_Lasm_UI_dfn___redArg(v_attrs_773_, v_children_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dialog___redArg(lean_object* v_attrs_776_, lean_object* v_children_777_){
_start:
{
uint8_t v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_778_ = 0;
v___x_779_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__173));
v___x_780_ = lean_box(0);
v___x_781_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_781_, 0, v___x_779_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
lean_ctor_set(v___x_781_, 2, v_attrs_776_);
lean_ctor_set(v___x_781_, 3, v_children_777_);
lean_ctor_set_uint8(v___x_781_, sizeof(void*)*4, v___x_778_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dialog(lean_object* v_Msg_782_, lean_object* v_attrs_783_, lean_object* v_children_784_){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = l_Lasm_UI_dialog___redArg(v_attrs_783_, v_children_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_div___redArg(lean_object* v_attrs_786_, lean_object* v_children_787_){
_start:
{
uint8_t v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_788_ = 0;
v___x_789_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__174));
v___x_790_ = lean_box(0);
v___x_791_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_791_, 0, v___x_789_);
lean_ctor_set(v___x_791_, 1, v___x_790_);
lean_ctor_set(v___x_791_, 2, v_attrs_786_);
lean_ctor_set(v___x_791_, 3, v_children_787_);
lean_ctor_set_uint8(v___x_791_, sizeof(void*)*4, v___x_788_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_div(lean_object* v_Msg_792_, lean_object* v_attrs_793_, lean_object* v_children_794_){
_start:
{
lean_object* v___x_795_; 
v___x_795_ = l_Lasm_UI_div___redArg(v_attrs_793_, v_children_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dl___redArg(lean_object* v_attrs_796_, lean_object* v_children_797_){
_start:
{
uint8_t v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_798_ = 0;
v___x_799_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__154));
v___x_800_ = lean_box(0);
v___x_801_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_801_, 0, v___x_799_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
lean_ctor_set(v___x_801_, 2, v_attrs_796_);
lean_ctor_set(v___x_801_, 3, v_children_797_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*4, v___x_798_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dl(lean_object* v_Msg_802_, lean_object* v_attrs_803_, lean_object* v_children_804_){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = l_Lasm_UI_dl___redArg(v_attrs_803_, v_children_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dt___redArg(lean_object* v_attrs_806_, lean_object* v_children_807_){
_start:
{
uint8_t v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_808_ = 0;
v___x_809_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__155));
v___x_810_ = lean_box(0);
v___x_811_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_811_, 0, v___x_809_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
lean_ctor_set(v___x_811_, 2, v_attrs_806_);
lean_ctor_set(v___x_811_, 3, v_children_807_);
lean_ctor_set_uint8(v___x_811_, sizeof(void*)*4, v___x_808_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dt(lean_object* v_Msg_812_, lean_object* v_attrs_813_, lean_object* v_children_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_Lasm_UI_dt___redArg(v_attrs_813_, v_children_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_em___redArg(lean_object* v_attrs_816_, lean_object* v_children_817_){
_start:
{
uint8_t v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_818_ = 0;
v___x_819_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__156));
v___x_820_ = lean_box(0);
v___x_821_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_821_, 0, v___x_819_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
lean_ctor_set(v___x_821_, 2, v_attrs_816_);
lean_ctor_set(v___x_821_, 3, v_children_817_);
lean_ctor_set_uint8(v___x_821_, sizeof(void*)*4, v___x_818_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_em(lean_object* v_Msg_822_, lean_object* v_attrs_823_, lean_object* v_children_824_){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = l_Lasm_UI_em___redArg(v_attrs_823_, v_children_824_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_embed___redArg(lean_object* v_attrs_826_){
_start:
{
uint8_t v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_827_ = 0;
v___x_828_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__157));
v___x_829_ = lean_box(0);
v___x_830_ = lean_box(0);
v___x_831_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_831_, 0, v___x_828_);
lean_ctor_set(v___x_831_, 1, v___x_829_);
lean_ctor_set(v___x_831_, 2, v_attrs_826_);
lean_ctor_set(v___x_831_, 3, v___x_830_);
lean_ctor_set_uint8(v___x_831_, sizeof(void*)*4, v___x_827_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_embed(lean_object* v_Msg_832_, lean_object* v_attrs_833_){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l_Lasm_UI_embed___redArg(v_attrs_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_fieldset___redArg(lean_object* v_attrs_835_, lean_object* v_children_836_){
_start:
{
uint8_t v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_837_ = 0;
v___x_838_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__158));
v___x_839_ = lean_box(0);
v___x_840_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_840_, 0, v___x_838_);
lean_ctor_set(v___x_840_, 1, v___x_839_);
lean_ctor_set(v___x_840_, 2, v_attrs_835_);
lean_ctor_set(v___x_840_, 3, v_children_836_);
lean_ctor_set_uint8(v___x_840_, sizeof(void*)*4, v___x_837_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_fieldset(lean_object* v_Msg_841_, lean_object* v_attrs_842_, lean_object* v_children_843_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Lasm_UI_fieldset___redArg(v_attrs_842_, v_children_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_figcaption___redArg(lean_object* v_attrs_845_, lean_object* v_children_846_){
_start:
{
uint8_t v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_847_ = 0;
v___x_848_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__159));
v___x_849_ = lean_box(0);
v___x_850_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_850_, 0, v___x_848_);
lean_ctor_set(v___x_850_, 1, v___x_849_);
lean_ctor_set(v___x_850_, 2, v_attrs_845_);
lean_ctor_set(v___x_850_, 3, v_children_846_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*4, v___x_847_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_figcaption(lean_object* v_Msg_851_, lean_object* v_attrs_852_, lean_object* v_children_853_){
_start:
{
lean_object* v___x_854_; 
v___x_854_ = l_Lasm_UI_figcaption___redArg(v_attrs_852_, v_children_853_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_figure___redArg(lean_object* v_attrs_855_, lean_object* v_children_856_){
_start:
{
uint8_t v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_857_ = 0;
v___x_858_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__160));
v___x_859_ = lean_box(0);
v___x_860_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_860_, 0, v___x_858_);
lean_ctor_set(v___x_860_, 1, v___x_859_);
lean_ctor_set(v___x_860_, 2, v_attrs_855_);
lean_ctor_set(v___x_860_, 3, v_children_856_);
lean_ctor_set_uint8(v___x_860_, sizeof(void*)*4, v___x_857_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_figure(lean_object* v_Msg_861_, lean_object* v_attrs_862_, lean_object* v_children_863_){
_start:
{
lean_object* v___x_864_; 
v___x_864_ = l_Lasm_UI_figure___redArg(v_attrs_862_, v_children_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_footer___redArg(lean_object* v_attrs_865_, lean_object* v_children_866_){
_start:
{
uint8_t v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_867_ = 0;
v___x_868_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__140));
v___x_869_ = lean_box(0);
v___x_870_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_870_, 0, v___x_868_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
lean_ctor_set(v___x_870_, 2, v_attrs_865_);
lean_ctor_set(v___x_870_, 3, v_children_866_);
lean_ctor_set_uint8(v___x_870_, sizeof(void*)*4, v___x_867_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_footer(lean_object* v_Msg_871_, lean_object* v_attrs_872_, lean_object* v_children_873_){
_start:
{
lean_object* v___x_874_; 
v___x_874_ = l_Lasm_UI_footer___redArg(v_attrs_872_, v_children_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_form___redArg(lean_object* v_attrs_875_, lean_object* v_children_876_){
_start:
{
uint8_t v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_877_ = 0;
v___x_878_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__141));
v___x_879_ = lean_box(0);
v___x_880_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_880_, 0, v___x_878_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
lean_ctor_set(v___x_880_, 2, v_attrs_875_);
lean_ctor_set(v___x_880_, 3, v_children_876_);
lean_ctor_set_uint8(v___x_880_, sizeof(void*)*4, v___x_877_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_form(lean_object* v_Msg_881_, lean_object* v_attrs_882_, lean_object* v_children_883_){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = l_Lasm_UI_form___redArg(v_attrs_882_, v_children_883_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h1___redArg(lean_object* v_attrs_885_, lean_object* v_children_886_){
_start:
{
uint8_t v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_887_ = 0;
v___x_888_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__142));
v___x_889_ = lean_box(0);
v___x_890_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_890_, 0, v___x_888_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
lean_ctor_set(v___x_890_, 2, v_attrs_885_);
lean_ctor_set(v___x_890_, 3, v_children_886_);
lean_ctor_set_uint8(v___x_890_, sizeof(void*)*4, v___x_887_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h1(lean_object* v_Msg_891_, lean_object* v_attrs_892_, lean_object* v_children_893_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lasm_UI_h1___redArg(v_attrs_892_, v_children_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h2___redArg(lean_object* v_attrs_895_, lean_object* v_children_896_){
_start:
{
uint8_t v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_897_ = 0;
v___x_898_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__143));
v___x_899_ = lean_box(0);
v___x_900_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_900_, 0, v___x_898_);
lean_ctor_set(v___x_900_, 1, v___x_899_);
lean_ctor_set(v___x_900_, 2, v_attrs_895_);
lean_ctor_set(v___x_900_, 3, v_children_896_);
lean_ctor_set_uint8(v___x_900_, sizeof(void*)*4, v___x_897_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h2(lean_object* v_Msg_901_, lean_object* v_attrs_902_, lean_object* v_children_903_){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = l_Lasm_UI_h2___redArg(v_attrs_902_, v_children_903_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h3___redArg(lean_object* v_attrs_905_, lean_object* v_children_906_){
_start:
{
uint8_t v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_907_ = 0;
v___x_908_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__144));
v___x_909_ = lean_box(0);
v___x_910_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_910_, 0, v___x_908_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
lean_ctor_set(v___x_910_, 2, v_attrs_905_);
lean_ctor_set(v___x_910_, 3, v_children_906_);
lean_ctor_set_uint8(v___x_910_, sizeof(void*)*4, v___x_907_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h3(lean_object* v_Msg_911_, lean_object* v_attrs_912_, lean_object* v_children_913_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_Lasm_UI_h3___redArg(v_attrs_912_, v_children_913_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h4___redArg(lean_object* v_attrs_915_, lean_object* v_children_916_){
_start:
{
uint8_t v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_917_ = 0;
v___x_918_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__145));
v___x_919_ = lean_box(0);
v___x_920_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_920_, 0, v___x_918_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
lean_ctor_set(v___x_920_, 2, v_attrs_915_);
lean_ctor_set(v___x_920_, 3, v_children_916_);
lean_ctor_set_uint8(v___x_920_, sizeof(void*)*4, v___x_917_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h4(lean_object* v_Msg_921_, lean_object* v_attrs_922_, lean_object* v_children_923_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_Lasm_UI_h4___redArg(v_attrs_922_, v_children_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h5___redArg(lean_object* v_attrs_925_, lean_object* v_children_926_){
_start:
{
uint8_t v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_927_ = 0;
v___x_928_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__146));
v___x_929_ = lean_box(0);
v___x_930_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_930_, 0, v___x_928_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
lean_ctor_set(v___x_930_, 2, v_attrs_925_);
lean_ctor_set(v___x_930_, 3, v_children_926_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*4, v___x_927_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h5(lean_object* v_Msg_931_, lean_object* v_attrs_932_, lean_object* v_children_933_){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l_Lasm_UI_h5___redArg(v_attrs_932_, v_children_933_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h6___redArg(lean_object* v_attrs_935_, lean_object* v_children_936_){
_start:
{
uint8_t v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_937_ = 0;
v___x_938_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__126));
v___x_939_ = lean_box(0);
v___x_940_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_940_, 0, v___x_938_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
lean_ctor_set(v___x_940_, 2, v_attrs_935_);
lean_ctor_set(v___x_940_, 3, v_children_936_);
lean_ctor_set_uint8(v___x_940_, sizeof(void*)*4, v___x_937_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_h6(lean_object* v_Msg_941_, lean_object* v_attrs_942_, lean_object* v_children_943_){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = l_Lasm_UI_h6___redArg(v_attrs_942_, v_children_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_header___redArg(lean_object* v_attrs_945_, lean_object* v_children_946_){
_start:
{
uint8_t v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_947_ = 0;
v___x_948_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__128));
v___x_949_ = lean_box(0);
v___x_950_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_950_, 0, v___x_948_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
lean_ctor_set(v___x_950_, 2, v_attrs_945_);
lean_ctor_set(v___x_950_, 3, v_children_946_);
lean_ctor_set_uint8(v___x_950_, sizeof(void*)*4, v___x_947_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_header(lean_object* v_Msg_951_, lean_object* v_attrs_952_, lean_object* v_children_953_){
_start:
{
lean_object* v___x_954_; 
v___x_954_ = l_Lasm_UI_header___redArg(v_attrs_952_, v_children_953_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hgroup___redArg(lean_object* v_attrs_955_, lean_object* v_children_956_){
_start:
{
uint8_t v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_957_ = 0;
v___x_958_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__129));
v___x_959_ = lean_box(0);
v___x_960_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_960_, 0, v___x_958_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
lean_ctor_set(v___x_960_, 2, v_attrs_955_);
lean_ctor_set(v___x_960_, 3, v_children_956_);
lean_ctor_set_uint8(v___x_960_, sizeof(void*)*4, v___x_957_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hgroup(lean_object* v_Msg_961_, lean_object* v_attrs_962_, lean_object* v_children_963_){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = l_Lasm_UI_hgroup___redArg(v_attrs_962_, v_children_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hr___redArg(lean_object* v_attrs_965_){
_start:
{
uint8_t v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_966_ = 0;
v___x_967_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__130));
v___x_968_ = lean_box(0);
v___x_969_ = lean_box(0);
v___x_970_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_970_, 0, v___x_967_);
lean_ctor_set(v___x_970_, 1, v___x_968_);
lean_ctor_set(v___x_970_, 2, v_attrs_965_);
lean_ctor_set(v___x_970_, 3, v___x_969_);
lean_ctor_set_uint8(v___x_970_, sizeof(void*)*4, v___x_966_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hr(lean_object* v_Msg_971_, lean_object* v_attrs_972_){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = l_Lasm_UI_hr___redArg(v_attrs_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_i___redArg(lean_object* v_attrs_974_, lean_object* v_children_975_){
_start:
{
uint8_t v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_976_ = 0;
v___x_977_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__132));
v___x_978_ = lean_box(0);
v___x_979_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_979_, 0, v___x_977_);
lean_ctor_set(v___x_979_, 1, v___x_978_);
lean_ctor_set(v___x_979_, 2, v_attrs_974_);
lean_ctor_set(v___x_979_, 3, v_children_975_);
lean_ctor_set_uint8(v___x_979_, sizeof(void*)*4, v___x_976_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_i(lean_object* v_Msg_980_, lean_object* v_attrs_981_, lean_object* v_children_982_){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = l_Lasm_UI_i___redArg(v_attrs_981_, v_children_982_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_iframe___redArg(lean_object* v_attrs_984_, lean_object* v_children_985_){
_start:
{
uint8_t v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_986_ = 0;
v___x_987_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__112));
v___x_988_ = lean_box(0);
v___x_989_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_989_, 0, v___x_987_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
lean_ctor_set(v___x_989_, 2, v_attrs_984_);
lean_ctor_set(v___x_989_, 3, v_children_985_);
lean_ctor_set_uint8(v___x_989_, sizeof(void*)*4, v___x_986_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_iframe(lean_object* v_Msg_990_, lean_object* v_attrs_991_, lean_object* v_children_992_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l_Lasm_UI_iframe___redArg(v_attrs_991_, v_children_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_img___redArg(lean_object* v_attrs_994_){
_start:
{
uint8_t v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_995_ = 0;
v___x_996_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__113));
v___x_997_ = lean_box(0);
v___x_998_ = lean_box(0);
v___x_999_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_999_, 0, v___x_996_);
lean_ctor_set(v___x_999_, 1, v___x_997_);
lean_ctor_set(v___x_999_, 2, v_attrs_994_);
lean_ctor_set(v___x_999_, 3, v___x_998_);
lean_ctor_set_uint8(v___x_999_, sizeof(void*)*4, v___x_995_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_img(lean_object* v_Msg_1000_, lean_object* v_attrs_1001_){
_start:
{
lean_object* v___x_1002_; 
v___x_1002_ = l_Lasm_UI_img___redArg(v_attrs_1001_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_input___redArg(lean_object* v_attrs_1003_){
_start:
{
uint8_t v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1004_ = 0;
v___x_1005_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__114));
v___x_1006_ = lean_box(0);
v___x_1007_ = lean_box(0);
v___x_1008_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1008_, 0, v___x_1005_);
lean_ctor_set(v___x_1008_, 1, v___x_1006_);
lean_ctor_set(v___x_1008_, 2, v_attrs_1003_);
lean_ctor_set(v___x_1008_, 3, v___x_1007_);
lean_ctor_set_uint8(v___x_1008_, sizeof(void*)*4, v___x_1004_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_input(lean_object* v_Msg_1009_, lean_object* v_attrs_1010_){
_start:
{
lean_object* v___x_1011_; 
v___x_1011_ = l_Lasm_UI_input___redArg(v_attrs_1010_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_ins___redArg(lean_object* v_attrs_1012_, lean_object* v_children_1013_){
_start:
{
uint8_t v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1014_ = 0;
v___x_1015_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__115));
v___x_1016_ = lean_box(0);
v___x_1017_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1017_, 0, v___x_1015_);
lean_ctor_set(v___x_1017_, 1, v___x_1016_);
lean_ctor_set(v___x_1017_, 2, v_attrs_1012_);
lean_ctor_set(v___x_1017_, 3, v_children_1013_);
lean_ctor_set_uint8(v___x_1017_, sizeof(void*)*4, v___x_1014_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_ins(lean_object* v_Msg_1018_, lean_object* v_attrs_1019_, lean_object* v_children_1020_){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Lasm_UI_ins___redArg(v_attrs_1019_, v_children_1020_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_kbd___redArg(lean_object* v_attrs_1022_, lean_object* v_children_1023_){
_start:
{
uint8_t v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1024_ = 0;
v___x_1025_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__116));
v___x_1026_ = lean_box(0);
v___x_1027_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1027_, 0, v___x_1025_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
lean_ctor_set(v___x_1027_, 2, v_attrs_1022_);
lean_ctor_set(v___x_1027_, 3, v_children_1023_);
lean_ctor_set_uint8(v___x_1027_, sizeof(void*)*4, v___x_1024_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_kbd(lean_object* v_Msg_1028_, lean_object* v_attrs_1029_, lean_object* v_children_1030_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lasm_UI_kbd___redArg(v_attrs_1029_, v_children_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_label___redArg(lean_object* v_attrs_1032_, lean_object* v_children_1033_){
_start:
{
uint8_t v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1034_ = 0;
v___x_1035_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__117));
v___x_1036_ = lean_box(0);
v___x_1037_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1037_, 0, v___x_1035_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
lean_ctor_set(v___x_1037_, 2, v_attrs_1032_);
lean_ctor_set(v___x_1037_, 3, v_children_1033_);
lean_ctor_set_uint8(v___x_1037_, sizeof(void*)*4, v___x_1034_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_label(lean_object* v_Msg_1038_, lean_object* v_attrs_1039_, lean_object* v_children_1040_){
_start:
{
lean_object* v___x_1041_; 
v___x_1041_ = l_Lasm_UI_label___redArg(v_attrs_1039_, v_children_1040_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_legend___redArg(lean_object* v_attrs_1042_, lean_object* v_children_1043_){
_start:
{
uint8_t v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1044_ = 0;
v___x_1045_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__118));
v___x_1046_ = lean_box(0);
v___x_1047_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1047_, 0, v___x_1045_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
lean_ctor_set(v___x_1047_, 2, v_attrs_1042_);
lean_ctor_set(v___x_1047_, 3, v_children_1043_);
lean_ctor_set_uint8(v___x_1047_, sizeof(void*)*4, v___x_1044_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_legend(lean_object* v_Msg_1048_, lean_object* v_attrs_1049_, lean_object* v_children_1050_){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Lasm_UI_legend___redArg(v_attrs_1049_, v_children_1050_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_li___redArg(lean_object* v_attrs_1052_, lean_object* v_children_1053_){
_start:
{
uint8_t v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1054_ = 0;
v___x_1055_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__98));
v___x_1056_ = lean_box(0);
v___x_1057_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1057_, 0, v___x_1055_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
lean_ctor_set(v___x_1057_, 2, v_attrs_1052_);
lean_ctor_set(v___x_1057_, 3, v_children_1053_);
lean_ctor_set_uint8(v___x_1057_, sizeof(void*)*4, v___x_1054_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_li(lean_object* v_Msg_1058_, lean_object* v_attrs_1059_, lean_object* v_children_1060_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lasm_UI_li___redArg(v_attrs_1059_, v_children_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_main___00__redArg(lean_object* v_attrs_1062_, lean_object* v_children_1063_){
_start:
{
uint8_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1064_ = 0;
v___x_1065_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__100));
v___x_1066_ = lean_box(0);
v___x_1067_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1067_, 0, v___x_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
lean_ctor_set(v___x_1067_, 2, v_attrs_1062_);
lean_ctor_set(v___x_1067_, 3, v_children_1063_);
lean_ctor_set_uint8(v___x_1067_, sizeof(void*)*4, v___x_1064_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_main__(lean_object* v_Msg_1068_, lean_object* v_attrs_1069_, lean_object* v_children_1070_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lasm_UI_main___00__redArg(v_attrs_1069_, v_children_1070_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_map___00__redArg(lean_object* v_attrs_1072_, lean_object* v_children_1073_){
_start:
{
uint8_t v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1074_ = 0;
v___x_1075_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__101));
v___x_1076_ = lean_box(0);
v___x_1077_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1077_, 0, v___x_1075_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
lean_ctor_set(v___x_1077_, 2, v_attrs_1072_);
lean_ctor_set(v___x_1077_, 3, v_children_1073_);
lean_ctor_set_uint8(v___x_1077_, sizeof(void*)*4, v___x_1074_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_map__(lean_object* v_Msg_1078_, lean_object* v_attrs_1079_, lean_object* v_children_1080_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lasm_UI_map___00__redArg(v_attrs_1079_, v_children_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_mark___redArg(lean_object* v_attrs_1082_, lean_object* v_children_1083_){
_start:
{
uint8_t v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1084_ = 0;
v___x_1085_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__102));
v___x_1086_ = lean_box(0);
v___x_1087_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
lean_ctor_set(v___x_1087_, 2, v_attrs_1082_);
lean_ctor_set(v___x_1087_, 3, v_children_1083_);
lean_ctor_set_uint8(v___x_1087_, sizeof(void*)*4, v___x_1084_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_mark(lean_object* v_Msg_1088_, lean_object* v_attrs_1089_, lean_object* v_children_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lasm_UI_mark___redArg(v_attrs_1089_, v_children_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_menu___redArg(lean_object* v_attrs_1092_, lean_object* v_children_1093_){
_start:
{
uint8_t v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1094_ = 0;
v___x_1095_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__103));
v___x_1096_ = lean_box(0);
v___x_1097_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
lean_ctor_set(v___x_1097_, 2, v_attrs_1092_);
lean_ctor_set(v___x_1097_, 3, v_children_1093_);
lean_ctor_set_uint8(v___x_1097_, sizeof(void*)*4, v___x_1094_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_menu(lean_object* v_Msg_1098_, lean_object* v_attrs_1099_, lean_object* v_children_1100_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Lasm_UI_menu___redArg(v_attrs_1099_, v_children_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_meter___redArg(lean_object* v_attrs_1102_, lean_object* v_children_1103_){
_start:
{
uint8_t v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1104_ = 0;
v___x_1105_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__84));
v___x_1106_ = lean_box(0);
v___x_1107_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1107_, 0, v___x_1105_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
lean_ctor_set(v___x_1107_, 2, v_attrs_1102_);
lean_ctor_set(v___x_1107_, 3, v_children_1103_);
lean_ctor_set_uint8(v___x_1107_, sizeof(void*)*4, v___x_1104_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_meter(lean_object* v_Msg_1108_, lean_object* v_attrs_1109_, lean_object* v_children_1110_){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = l_Lasm_UI_meter___redArg(v_attrs_1109_, v_children_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_nav___redArg(lean_object* v_attrs_1112_, lean_object* v_children_1113_){
_start:
{
uint8_t v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1114_ = 0;
v___x_1115_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__85));
v___x_1116_ = lean_box(0);
v___x_1117_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1117_, 0, v___x_1115_);
lean_ctor_set(v___x_1117_, 1, v___x_1116_);
lean_ctor_set(v___x_1117_, 2, v_attrs_1112_);
lean_ctor_set(v___x_1117_, 3, v_children_1113_);
lean_ctor_set_uint8(v___x_1117_, sizeof(void*)*4, v___x_1114_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_nav(lean_object* v_Msg_1118_, lean_object* v_attrs_1119_, lean_object* v_children_1120_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = l_Lasm_UI_nav___redArg(v_attrs_1119_, v_children_1120_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_noscript___redArg(lean_object* v_attrs_1122_, lean_object* v_children_1123_){
_start:
{
uint8_t v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1124_ = 0;
v___x_1125_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__86));
v___x_1126_ = lean_box(0);
v___x_1127_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1127_, 0, v___x_1125_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
lean_ctor_set(v___x_1127_, 2, v_attrs_1122_);
lean_ctor_set(v___x_1127_, 3, v_children_1123_);
lean_ctor_set_uint8(v___x_1127_, sizeof(void*)*4, v___x_1124_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_noscript(lean_object* v_Msg_1128_, lean_object* v_attrs_1129_, lean_object* v_children_1130_){
_start:
{
lean_object* v___x_1131_; 
v___x_1131_ = l_Lasm_UI_noscript___redArg(v_attrs_1129_, v_children_1130_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_object___00__redArg(lean_object* v_attrs_1132_, lean_object* v_children_1133_){
_start:
{
uint8_t v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1134_ = 0;
v___x_1135_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__87));
v___x_1136_ = lean_box(0);
v___x_1137_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1137_, 0, v___x_1135_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
lean_ctor_set(v___x_1137_, 2, v_attrs_1132_);
lean_ctor_set(v___x_1137_, 3, v_children_1133_);
lean_ctor_set_uint8(v___x_1137_, sizeof(void*)*4, v___x_1134_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_object__(lean_object* v_Msg_1138_, lean_object* v_attrs_1139_, lean_object* v_children_1140_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lasm_UI_object___00__redArg(v_attrs_1139_, v_children_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_ol___redArg(lean_object* v_attrs_1142_, lean_object* v_children_1143_){
_start:
{
uint8_t v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1144_ = 0;
v___x_1145_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__88));
v___x_1146_ = lean_box(0);
v___x_1147_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1147_, 0, v___x_1145_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
lean_ctor_set(v___x_1147_, 2, v_attrs_1142_);
lean_ctor_set(v___x_1147_, 3, v_children_1143_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*4, v___x_1144_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_ol(lean_object* v_Msg_1148_, lean_object* v_attrs_1149_, lean_object* v_children_1150_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = l_Lasm_UI_ol___redArg(v_attrs_1149_, v_children_1150_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_optgroup___redArg(lean_object* v_attrs_1152_, lean_object* v_children_1153_){
_start:
{
uint8_t v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1154_ = 0;
v___x_1155_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__89));
v___x_1156_ = lean_box(0);
v___x_1157_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1157_, 0, v___x_1155_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
lean_ctor_set(v___x_1157_, 2, v_attrs_1152_);
lean_ctor_set(v___x_1157_, 3, v_children_1153_);
lean_ctor_set_uint8(v___x_1157_, sizeof(void*)*4, v___x_1154_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_optgroup(lean_object* v_Msg_1158_, lean_object* v_attrs_1159_, lean_object* v_children_1160_){
_start:
{
lean_object* v___x_1161_; 
v___x_1161_ = l_Lasm_UI_optgroup___redArg(v_attrs_1159_, v_children_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_option___redArg(lean_object* v_attrs_1162_, lean_object* v_children_1163_){
_start:
{
uint8_t v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1164_ = 0;
v___x_1165_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__90));
v___x_1166_ = lean_box(0);
v___x_1167_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1167_, 0, v___x_1165_);
lean_ctor_set(v___x_1167_, 1, v___x_1166_);
lean_ctor_set(v___x_1167_, 2, v_attrs_1162_);
lean_ctor_set(v___x_1167_, 3, v_children_1163_);
lean_ctor_set_uint8(v___x_1167_, sizeof(void*)*4, v___x_1164_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_option(lean_object* v_Msg_1168_, lean_object* v_attrs_1169_, lean_object* v_children_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_Lasm_UI_option___redArg(v_attrs_1169_, v_children_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_output___redArg(lean_object* v_attrs_1172_, lean_object* v_children_1173_){
_start:
{
uint8_t v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1174_ = 0;
v___x_1175_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__70));
v___x_1176_ = lean_box(0);
v___x_1177_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1177_, 0, v___x_1175_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
lean_ctor_set(v___x_1177_, 2, v_attrs_1172_);
lean_ctor_set(v___x_1177_, 3, v_children_1173_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*4, v___x_1174_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_output(lean_object* v_Msg_1178_, lean_object* v_attrs_1179_, lean_object* v_children_1180_){
_start:
{
lean_object* v___x_1181_; 
v___x_1181_ = l_Lasm_UI_output___redArg(v_attrs_1179_, v_children_1180_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_p___redArg(lean_object* v_attrs_1182_, lean_object* v_children_1183_){
_start:
{
uint8_t v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1184_ = 0;
v___x_1185_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__71));
v___x_1186_ = lean_box(0);
v___x_1187_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1187_, 0, v___x_1185_);
lean_ctor_set(v___x_1187_, 1, v___x_1186_);
lean_ctor_set(v___x_1187_, 2, v_attrs_1182_);
lean_ctor_set(v___x_1187_, 3, v_children_1183_);
lean_ctor_set_uint8(v___x_1187_, sizeof(void*)*4, v___x_1184_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_p(lean_object* v_Msg_1188_, lean_object* v_attrs_1189_, lean_object* v_children_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l_Lasm_UI_p___redArg(v_attrs_1189_, v_children_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_param___redArg(lean_object* v_attrs_1192_){
_start:
{
uint8_t v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1193_ = 0;
v___x_1194_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__72));
v___x_1195_ = lean_box(0);
v___x_1196_ = lean_box(0);
v___x_1197_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1197_, 0, v___x_1194_);
lean_ctor_set(v___x_1197_, 1, v___x_1195_);
lean_ctor_set(v___x_1197_, 2, v_attrs_1192_);
lean_ctor_set(v___x_1197_, 3, v___x_1196_);
lean_ctor_set_uint8(v___x_1197_, sizeof(void*)*4, v___x_1193_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_param(lean_object* v_Msg_1198_, lean_object* v_attrs_1199_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lasm_UI_param___redArg(v_attrs_1199_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_picture___redArg(lean_object* v_attrs_1201_, lean_object* v_children_1202_){
_start:
{
uint8_t v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1203_ = 0;
v___x_1204_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__73));
v___x_1205_ = lean_box(0);
v___x_1206_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1206_, 0, v___x_1204_);
lean_ctor_set(v___x_1206_, 1, v___x_1205_);
lean_ctor_set(v___x_1206_, 2, v_attrs_1201_);
lean_ctor_set(v___x_1206_, 3, v_children_1202_);
lean_ctor_set_uint8(v___x_1206_, sizeof(void*)*4, v___x_1203_);
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_picture(lean_object* v_Msg_1207_, lean_object* v_attrs_1208_, lean_object* v_children_1209_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = l_Lasm_UI_picture___redArg(v_attrs_1208_, v_children_1209_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_pre___redArg(lean_object* v_attrs_1211_, lean_object* v_children_1212_){
_start:
{
uint8_t v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1213_ = 0;
v___x_1214_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__74));
v___x_1215_ = lean_box(0);
v___x_1216_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1216_, 0, v___x_1214_);
lean_ctor_set(v___x_1216_, 1, v___x_1215_);
lean_ctor_set(v___x_1216_, 2, v_attrs_1211_);
lean_ctor_set(v___x_1216_, 3, v_children_1212_);
lean_ctor_set_uint8(v___x_1216_, sizeof(void*)*4, v___x_1213_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_pre(lean_object* v_Msg_1217_, lean_object* v_attrs_1218_, lean_object* v_children_1219_){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = l_Lasm_UI_pre___redArg(v_attrs_1218_, v_children_1219_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_progress___redArg(lean_object* v_attrs_1221_, lean_object* v_children_1222_){
_start:
{
uint8_t v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1223_ = 0;
v___x_1224_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__75));
v___x_1225_ = lean_box(0);
v___x_1226_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1226_, 0, v___x_1224_);
lean_ctor_set(v___x_1226_, 1, v___x_1225_);
lean_ctor_set(v___x_1226_, 2, v_attrs_1221_);
lean_ctor_set(v___x_1226_, 3, v_children_1222_);
lean_ctor_set_uint8(v___x_1226_, sizeof(void*)*4, v___x_1223_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_progress(lean_object* v_Msg_1227_, lean_object* v_attrs_1228_, lean_object* v_children_1229_){
_start:
{
lean_object* v___x_1230_; 
v___x_1230_ = l_Lasm_UI_progress___redArg(v_attrs_1228_, v_children_1229_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_q___redArg(lean_object* v_attrs_1231_, lean_object* v_children_1232_){
_start:
{
uint8_t v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1233_ = 0;
v___x_1234_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__76));
v___x_1235_ = lean_box(0);
v___x_1236_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1236_, 0, v___x_1234_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
lean_ctor_set(v___x_1236_, 2, v_attrs_1231_);
lean_ctor_set(v___x_1236_, 3, v_children_1232_);
lean_ctor_set_uint8(v___x_1236_, sizeof(void*)*4, v___x_1233_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_q(lean_object* v_Msg_1237_, lean_object* v_attrs_1238_, lean_object* v_children_1239_){
_start:
{
lean_object* v___x_1240_; 
v___x_1240_ = l_Lasm_UI_q___redArg(v_attrs_1238_, v_children_1239_);
return v___x_1240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_rp___redArg(lean_object* v_attrs_1241_, lean_object* v_children_1242_){
_start:
{
uint8_t v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1243_ = 0;
v___x_1244_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__56));
v___x_1245_ = lean_box(0);
v___x_1246_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
lean_ctor_set(v___x_1246_, 2, v_attrs_1241_);
lean_ctor_set(v___x_1246_, 3, v_children_1242_);
lean_ctor_set_uint8(v___x_1246_, sizeof(void*)*4, v___x_1243_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_rp(lean_object* v_Msg_1247_, lean_object* v_attrs_1248_, lean_object* v_children_1249_){
_start:
{
lean_object* v___x_1250_; 
v___x_1250_ = l_Lasm_UI_rp___redArg(v_attrs_1248_, v_children_1249_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_rt___redArg(lean_object* v_attrs_1251_, lean_object* v_children_1252_){
_start:
{
uint8_t v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1253_ = 0;
v___x_1254_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__57));
v___x_1255_ = lean_box(0);
v___x_1256_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1256_, 0, v___x_1254_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
lean_ctor_set(v___x_1256_, 2, v_attrs_1251_);
lean_ctor_set(v___x_1256_, 3, v_children_1252_);
lean_ctor_set_uint8(v___x_1256_, sizeof(void*)*4, v___x_1253_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_rt(lean_object* v_Msg_1257_, lean_object* v_attrs_1258_, lean_object* v_children_1259_){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = l_Lasm_UI_rt___redArg(v_attrs_1258_, v_children_1259_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_ruby___redArg(lean_object* v_attrs_1261_, lean_object* v_children_1262_){
_start:
{
uint8_t v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1263_ = 0;
v___x_1264_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__58));
v___x_1265_ = lean_box(0);
v___x_1266_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1266_, 0, v___x_1264_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
lean_ctor_set(v___x_1266_, 2, v_attrs_1261_);
lean_ctor_set(v___x_1266_, 3, v_children_1262_);
lean_ctor_set_uint8(v___x_1266_, sizeof(void*)*4, v___x_1263_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_ruby(lean_object* v_Msg_1267_, lean_object* v_attrs_1268_, lean_object* v_children_1269_){
_start:
{
lean_object* v___x_1270_; 
v___x_1270_ = l_Lasm_UI_ruby___redArg(v_attrs_1268_, v_children_1269_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_s___redArg(lean_object* v_attrs_1271_, lean_object* v_children_1272_){
_start:
{
uint8_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1273_ = 0;
v___x_1274_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__59));
v___x_1275_ = lean_box(0);
v___x_1276_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1276_, 0, v___x_1274_);
lean_ctor_set(v___x_1276_, 1, v___x_1275_);
lean_ctor_set(v___x_1276_, 2, v_attrs_1271_);
lean_ctor_set(v___x_1276_, 3, v_children_1272_);
lean_ctor_set_uint8(v___x_1276_, sizeof(void*)*4, v___x_1273_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_s(lean_object* v_Msg_1277_, lean_object* v_attrs_1278_, lean_object* v_children_1279_){
_start:
{
lean_object* v___x_1280_; 
v___x_1280_ = l_Lasm_UI_s___redArg(v_attrs_1278_, v_children_1279_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_samp___redArg(lean_object* v_attrs_1281_, lean_object* v_children_1282_){
_start:
{
uint8_t v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1283_ = 0;
v___x_1284_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__60));
v___x_1285_ = lean_box(0);
v___x_1286_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1286_, 0, v___x_1284_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
lean_ctor_set(v___x_1286_, 2, v_attrs_1281_);
lean_ctor_set(v___x_1286_, 3, v_children_1282_);
lean_ctor_set_uint8(v___x_1286_, sizeof(void*)*4, v___x_1283_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_samp(lean_object* v_Msg_1287_, lean_object* v_attrs_1288_, lean_object* v_children_1289_){
_start:
{
lean_object* v___x_1290_; 
v___x_1290_ = l_Lasm_UI_samp___redArg(v_attrs_1288_, v_children_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_search___redArg(lean_object* v_attrs_1291_, lean_object* v_children_1292_){
_start:
{
uint8_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1293_ = 0;
v___x_1294_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__62));
v___x_1295_ = lean_box(0);
v___x_1296_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1296_, 0, v___x_1294_);
lean_ctor_set(v___x_1296_, 1, v___x_1295_);
lean_ctor_set(v___x_1296_, 2, v_attrs_1291_);
lean_ctor_set(v___x_1296_, 3, v_children_1292_);
lean_ctor_set_uint8(v___x_1296_, sizeof(void*)*4, v___x_1293_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_search(lean_object* v_Msg_1297_, lean_object* v_attrs_1298_, lean_object* v_children_1299_){
_start:
{
lean_object* v___x_1300_; 
v___x_1300_ = l_Lasm_UI_search___redArg(v_attrs_1298_, v_children_1299_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_section___00__redArg(lean_object* v_attrs_1301_, lean_object* v_children_1302_){
_start:
{
uint8_t v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1303_ = 0;
v___x_1304_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__42));
v___x_1305_ = lean_box(0);
v___x_1306_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1306_, 0, v___x_1304_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
lean_ctor_set(v___x_1306_, 2, v_attrs_1301_);
lean_ctor_set(v___x_1306_, 3, v_children_1302_);
lean_ctor_set_uint8(v___x_1306_, sizeof(void*)*4, v___x_1303_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_section__(lean_object* v_Msg_1307_, lean_object* v_attrs_1308_, lean_object* v_children_1309_){
_start:
{
lean_object* v___x_1310_; 
v___x_1310_ = l_Lasm_UI_section___00__redArg(v_attrs_1308_, v_children_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_select___redArg(lean_object* v_attrs_1311_, lean_object* v_children_1312_){
_start:
{
uint8_t v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1313_ = 0;
v___x_1314_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__43));
v___x_1315_ = lean_box(0);
v___x_1316_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1316_, 0, v___x_1314_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
lean_ctor_set(v___x_1316_, 2, v_attrs_1311_);
lean_ctor_set(v___x_1316_, 3, v_children_1312_);
lean_ctor_set_uint8(v___x_1316_, sizeof(void*)*4, v___x_1313_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_select(lean_object* v_Msg_1317_, lean_object* v_attrs_1318_, lean_object* v_children_1319_){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = l_Lasm_UI_select___redArg(v_attrs_1318_, v_children_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_slot___00__redArg(lean_object* v_attrs_1321_, lean_object* v_children_1322_){
_start:
{
uint8_t v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1323_ = 0;
v___x_1324_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__44));
v___x_1325_ = lean_box(0);
v___x_1326_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
lean_ctor_set(v___x_1326_, 2, v_attrs_1321_);
lean_ctor_set(v___x_1326_, 3, v_children_1322_);
lean_ctor_set_uint8(v___x_1326_, sizeof(void*)*4, v___x_1323_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_slot__(lean_object* v_Msg_1327_, lean_object* v_attrs_1328_, lean_object* v_children_1329_){
_start:
{
lean_object* v___x_1330_; 
v___x_1330_ = l_Lasm_UI_slot___00__redArg(v_attrs_1328_, v_children_1329_);
return v___x_1330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_small___redArg(lean_object* v_attrs_1331_, lean_object* v_children_1332_){
_start:
{
uint8_t v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1333_ = 0;
v___x_1334_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__45));
v___x_1335_ = lean_box(0);
v___x_1336_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1336_, 0, v___x_1334_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
lean_ctor_set(v___x_1336_, 2, v_attrs_1331_);
lean_ctor_set(v___x_1336_, 3, v_children_1332_);
lean_ctor_set_uint8(v___x_1336_, sizeof(void*)*4, v___x_1333_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_small(lean_object* v_Msg_1337_, lean_object* v_attrs_1338_, lean_object* v_children_1339_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lasm_UI_small___redArg(v_attrs_1338_, v_children_1339_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_source___redArg(lean_object* v_attrs_1341_){
_start:
{
uint8_t v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1342_ = 0;
v___x_1343_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__46));
v___x_1344_ = lean_box(0);
v___x_1345_ = lean_box(0);
v___x_1346_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1346_, 0, v___x_1343_);
lean_ctor_set(v___x_1346_, 1, v___x_1344_);
lean_ctor_set(v___x_1346_, 2, v_attrs_1341_);
lean_ctor_set(v___x_1346_, 3, v___x_1345_);
lean_ctor_set_uint8(v___x_1346_, sizeof(void*)*4, v___x_1342_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_source(lean_object* v_Msg_1347_, lean_object* v_attrs_1348_){
_start:
{
lean_object* v___x_1349_; 
v___x_1349_ = l_Lasm_UI_source___redArg(v_attrs_1348_);
return v___x_1349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_span___redArg(lean_object* v_attrs_1350_, lean_object* v_children_1351_){
_start:
{
uint8_t v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1352_ = 0;
v___x_1353_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__47));
v___x_1354_ = lean_box(0);
v___x_1355_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1355_, 0, v___x_1353_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
lean_ctor_set(v___x_1355_, 2, v_attrs_1350_);
lean_ctor_set(v___x_1355_, 3, v_children_1351_);
lean_ctor_set_uint8(v___x_1355_, sizeof(void*)*4, v___x_1352_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_span(lean_object* v_Msg_1356_, lean_object* v_attrs_1357_, lean_object* v_children_1358_){
_start:
{
lean_object* v___x_1359_; 
v___x_1359_ = l_Lasm_UI_span___redArg(v_attrs_1357_, v_children_1358_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_strong___redArg(lean_object* v_attrs_1360_, lean_object* v_children_1361_){
_start:
{
uint8_t v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1362_ = 0;
v___x_1363_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__48));
v___x_1364_ = lean_box(0);
v___x_1365_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1365_, 0, v___x_1363_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
lean_ctor_set(v___x_1365_, 2, v_attrs_1360_);
lean_ctor_set(v___x_1365_, 3, v_children_1361_);
lean_ctor_set_uint8(v___x_1365_, sizeof(void*)*4, v___x_1362_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_strong(lean_object* v_Msg_1366_, lean_object* v_attrs_1367_, lean_object* v_children_1368_){
_start:
{
lean_object* v___x_1369_; 
v___x_1369_ = l_Lasm_UI_strong___redArg(v_attrs_1367_, v_children_1368_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_sub___00__redArg(lean_object* v_attrs_1370_, lean_object* v_children_1371_){
_start:
{
uint8_t v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1372_ = 0;
v___x_1373_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__29));
v___x_1374_ = lean_box(0);
v___x_1375_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1375_, 0, v___x_1373_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
lean_ctor_set(v___x_1375_, 2, v_attrs_1370_);
lean_ctor_set(v___x_1375_, 3, v_children_1371_);
lean_ctor_set_uint8(v___x_1375_, sizeof(void*)*4, v___x_1372_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_sub__(lean_object* v_Msg_1376_, lean_object* v_attrs_1377_, lean_object* v_children_1378_){
_start:
{
lean_object* v___x_1379_; 
v___x_1379_ = l_Lasm_UI_sub___00__redArg(v_attrs_1377_, v_children_1378_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_summary___redArg(lean_object* v_attrs_1380_, lean_object* v_children_1381_){
_start:
{
uint8_t v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1382_ = 0;
v___x_1383_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__30));
v___x_1384_ = lean_box(0);
v___x_1385_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1385_, 0, v___x_1383_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
lean_ctor_set(v___x_1385_, 2, v_attrs_1380_);
lean_ctor_set(v___x_1385_, 3, v_children_1381_);
lean_ctor_set_uint8(v___x_1385_, sizeof(void*)*4, v___x_1382_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_summary(lean_object* v_Msg_1386_, lean_object* v_attrs_1387_, lean_object* v_children_1388_){
_start:
{
lean_object* v___x_1389_; 
v___x_1389_ = l_Lasm_UI_summary___redArg(v_attrs_1387_, v_children_1388_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_sup___redArg(lean_object* v_attrs_1390_, lean_object* v_children_1391_){
_start:
{
uint8_t v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1392_ = 0;
v___x_1393_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__31));
v___x_1394_ = lean_box(0);
v___x_1395_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1395_, 0, v___x_1393_);
lean_ctor_set(v___x_1395_, 1, v___x_1394_);
lean_ctor_set(v___x_1395_, 2, v_attrs_1390_);
lean_ctor_set(v___x_1395_, 3, v_children_1391_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*4, v___x_1392_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_sup(lean_object* v_Msg_1396_, lean_object* v_attrs_1397_, lean_object* v_children_1398_){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = l_Lasm_UI_sup___redArg(v_attrs_1397_, v_children_1398_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_table___redArg(lean_object* v_attrs_1400_, lean_object* v_children_1401_){
_start:
{
uint8_t v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1402_ = 0;
v___x_1403_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__32));
v___x_1404_ = lean_box(0);
v___x_1405_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1405_, 0, v___x_1403_);
lean_ctor_set(v___x_1405_, 1, v___x_1404_);
lean_ctor_set(v___x_1405_, 2, v_attrs_1400_);
lean_ctor_set(v___x_1405_, 3, v_children_1401_);
lean_ctor_set_uint8(v___x_1405_, sizeof(void*)*4, v___x_1402_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_table(lean_object* v_Msg_1406_, lean_object* v_attrs_1407_, lean_object* v_children_1408_){
_start:
{
lean_object* v___x_1409_; 
v___x_1409_ = l_Lasm_UI_table___redArg(v_attrs_1407_, v_children_1408_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_tbody___redArg(lean_object* v_attrs_1410_, lean_object* v_children_1411_){
_start:
{
uint8_t v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1412_ = 0;
v___x_1413_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__33));
v___x_1414_ = lean_box(0);
v___x_1415_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1415_, 0, v___x_1413_);
lean_ctor_set(v___x_1415_, 1, v___x_1414_);
lean_ctor_set(v___x_1415_, 2, v_attrs_1410_);
lean_ctor_set(v___x_1415_, 3, v_children_1411_);
lean_ctor_set_uint8(v___x_1415_, sizeof(void*)*4, v___x_1412_);
return v___x_1415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_tbody(lean_object* v_Msg_1416_, lean_object* v_attrs_1417_, lean_object* v_children_1418_){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = l_Lasm_UI_tbody___redArg(v_attrs_1417_, v_children_1418_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_td___redArg(lean_object* v_attrs_1420_, lean_object* v_children_1421_){
_start:
{
uint8_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1422_ = 0;
v___x_1423_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__34));
v___x_1424_ = lean_box(0);
v___x_1425_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1425_, 0, v___x_1423_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
lean_ctor_set(v___x_1425_, 2, v_attrs_1420_);
lean_ctor_set(v___x_1425_, 3, v_children_1421_);
lean_ctor_set_uint8(v___x_1425_, sizeof(void*)*4, v___x_1422_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_td(lean_object* v_Msg_1426_, lean_object* v_attrs_1427_, lean_object* v_children_1428_){
_start:
{
lean_object* v___x_1429_; 
v___x_1429_ = l_Lasm_UI_td___redArg(v_attrs_1427_, v_children_1428_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_template___00__redArg(lean_object* v_attrs_1430_, lean_object* v_children_1431_){
_start:
{
uint8_t v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1432_ = 0;
v___x_1433_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__14));
v___x_1434_ = lean_box(0);
v___x_1435_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1435_, 0, v___x_1433_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
lean_ctor_set(v___x_1435_, 2, v_attrs_1430_);
lean_ctor_set(v___x_1435_, 3, v_children_1431_);
lean_ctor_set_uint8(v___x_1435_, sizeof(void*)*4, v___x_1432_);
return v___x_1435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_template__(lean_object* v_Msg_1436_, lean_object* v_attrs_1437_, lean_object* v_children_1438_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Lasm_UI_template___00__redArg(v_attrs_1437_, v_children_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_textarea___redArg(lean_object* v_attrs_1440_, lean_object* v_children_1441_){
_start:
{
uint8_t v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1442_ = 0;
v___x_1443_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__15));
v___x_1444_ = lean_box(0);
v___x_1445_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1445_, 0, v___x_1443_);
lean_ctor_set(v___x_1445_, 1, v___x_1444_);
lean_ctor_set(v___x_1445_, 2, v_attrs_1440_);
lean_ctor_set(v___x_1445_, 3, v_children_1441_);
lean_ctor_set_uint8(v___x_1445_, sizeof(void*)*4, v___x_1442_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_textarea(lean_object* v_Msg_1446_, lean_object* v_attrs_1447_, lean_object* v_children_1448_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = l_Lasm_UI_textarea___redArg(v_attrs_1447_, v_children_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_tfoot___redArg(lean_object* v_attrs_1450_, lean_object* v_children_1451_){
_start:
{
uint8_t v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1452_ = 0;
v___x_1453_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__16));
v___x_1454_ = lean_box(0);
v___x_1455_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1455_, 0, v___x_1453_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
lean_ctor_set(v___x_1455_, 2, v_attrs_1450_);
lean_ctor_set(v___x_1455_, 3, v_children_1451_);
lean_ctor_set_uint8(v___x_1455_, sizeof(void*)*4, v___x_1452_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_tfoot(lean_object* v_Msg_1456_, lean_object* v_attrs_1457_, lean_object* v_children_1458_){
_start:
{
lean_object* v___x_1459_; 
v___x_1459_ = l_Lasm_UI_tfoot___redArg(v_attrs_1457_, v_children_1458_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_th___redArg(lean_object* v_attrs_1460_, lean_object* v_children_1461_){
_start:
{
uint8_t v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1462_ = 0;
v___x_1463_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__17));
v___x_1464_ = lean_box(0);
v___x_1465_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1465_, 0, v___x_1463_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
lean_ctor_set(v___x_1465_, 2, v_attrs_1460_);
lean_ctor_set(v___x_1465_, 3, v_children_1461_);
lean_ctor_set_uint8(v___x_1465_, sizeof(void*)*4, v___x_1462_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_th(lean_object* v_Msg_1466_, lean_object* v_attrs_1467_, lean_object* v_children_1468_){
_start:
{
lean_object* v___x_1469_; 
v___x_1469_ = l_Lasm_UI_th___redArg(v_attrs_1467_, v_children_1468_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_thead___redArg(lean_object* v_attrs_1470_, lean_object* v_children_1471_){
_start:
{
uint8_t v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1472_ = 0;
v___x_1473_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__18));
v___x_1474_ = lean_box(0);
v___x_1475_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1475_, 0, v___x_1473_);
lean_ctor_set(v___x_1475_, 1, v___x_1474_);
lean_ctor_set(v___x_1475_, 2, v_attrs_1470_);
lean_ctor_set(v___x_1475_, 3, v_children_1471_);
lean_ctor_set_uint8(v___x_1475_, sizeof(void*)*4, v___x_1472_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_thead(lean_object* v_Msg_1476_, lean_object* v_attrs_1477_, lean_object* v_children_1478_){
_start:
{
lean_object* v___x_1479_; 
v___x_1479_ = l_Lasm_UI_thead___redArg(v_attrs_1477_, v_children_1478_);
return v___x_1479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_time___redArg(lean_object* v_attrs_1480_, lean_object* v_children_1481_){
_start:
{
uint8_t v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1482_ = 0;
v___x_1483_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__19));
v___x_1484_ = lean_box(0);
v___x_1485_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1485_, 0, v___x_1483_);
lean_ctor_set(v___x_1485_, 1, v___x_1484_);
lean_ctor_set(v___x_1485_, 2, v_attrs_1480_);
lean_ctor_set(v___x_1485_, 3, v_children_1481_);
lean_ctor_set_uint8(v___x_1485_, sizeof(void*)*4, v___x_1482_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_time(lean_object* v_Msg_1486_, lean_object* v_attrs_1487_, lean_object* v_children_1488_){
_start:
{
lean_object* v___x_1489_; 
v___x_1489_ = l_Lasm_UI_time___redArg(v_attrs_1487_, v_children_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_tr___redArg(lean_object* v_attrs_1490_, lean_object* v_children_1491_){
_start:
{
uint8_t v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1492_ = 0;
v___x_1493_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__0));
v___x_1494_ = lean_box(0);
v___x_1495_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1495_, 0, v___x_1493_);
lean_ctor_set(v___x_1495_, 1, v___x_1494_);
lean_ctor_set(v___x_1495_, 2, v_attrs_1490_);
lean_ctor_set(v___x_1495_, 3, v_children_1491_);
lean_ctor_set_uint8(v___x_1495_, sizeof(void*)*4, v___x_1492_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_tr(lean_object* v_Msg_1496_, lean_object* v_attrs_1497_, lean_object* v_children_1498_){
_start:
{
lean_object* v___x_1499_; 
v___x_1499_ = l_Lasm_UI_tr___redArg(v_attrs_1497_, v_children_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_track___redArg(lean_object* v_attrs_1500_){
_start:
{
uint8_t v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1501_ = 0;
v___x_1502_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__1));
v___x_1503_ = lean_box(0);
v___x_1504_ = lean_box(0);
v___x_1505_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1505_, 0, v___x_1502_);
lean_ctor_set(v___x_1505_, 1, v___x_1503_);
lean_ctor_set(v___x_1505_, 2, v_attrs_1500_);
lean_ctor_set(v___x_1505_, 3, v___x_1504_);
lean_ctor_set_uint8(v___x_1505_, sizeof(void*)*4, v___x_1501_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_track(lean_object* v_Msg_1506_, lean_object* v_attrs_1507_){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = l_Lasm_UI_track___redArg(v_attrs_1507_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_u___redArg(lean_object* v_attrs_1509_, lean_object* v_children_1510_){
_start:
{
uint8_t v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1511_ = 0;
v___x_1512_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__2));
v___x_1513_ = lean_box(0);
v___x_1514_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1514_, 0, v___x_1512_);
lean_ctor_set(v___x_1514_, 1, v___x_1513_);
lean_ctor_set(v___x_1514_, 2, v_attrs_1509_);
lean_ctor_set(v___x_1514_, 3, v_children_1510_);
lean_ctor_set_uint8(v___x_1514_, sizeof(void*)*4, v___x_1511_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_u(lean_object* v_Msg_1515_, lean_object* v_attrs_1516_, lean_object* v_children_1517_){
_start:
{
lean_object* v___x_1518_; 
v___x_1518_ = l_Lasm_UI_u___redArg(v_attrs_1516_, v_children_1517_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_ul___redArg(lean_object* v_attrs_1519_, lean_object* v_children_1520_){
_start:
{
uint8_t v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1521_ = 0;
v___x_1522_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__3));
v___x_1523_ = lean_box(0);
v___x_1524_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1524_, 0, v___x_1522_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
lean_ctor_set(v___x_1524_, 2, v_attrs_1519_);
lean_ctor_set(v___x_1524_, 3, v_children_1520_);
lean_ctor_set_uint8(v___x_1524_, sizeof(void*)*4, v___x_1521_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_ul(lean_object* v_Msg_1525_, lean_object* v_attrs_1526_, lean_object* v_children_1527_){
_start:
{
lean_object* v___x_1528_; 
v___x_1528_ = l_Lasm_UI_ul___redArg(v_attrs_1526_, v_children_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_var___00__redArg(lean_object* v_attrs_1529_, lean_object* v_children_1530_){
_start:
{
uint8_t v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1531_ = 0;
v___x_1532_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__4));
v___x_1533_ = lean_box(0);
v___x_1534_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1534_, 0, v___x_1532_);
lean_ctor_set(v___x_1534_, 1, v___x_1533_);
lean_ctor_set(v___x_1534_, 2, v_attrs_1529_);
lean_ctor_set(v___x_1534_, 3, v_children_1530_);
lean_ctor_set_uint8(v___x_1534_, sizeof(void*)*4, v___x_1531_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_var__(lean_object* v_Msg_1535_, lean_object* v_attrs_1536_, lean_object* v_children_1537_){
_start:
{
lean_object* v___x_1538_; 
v___x_1538_ = l_Lasm_UI_var___00__redArg(v_attrs_1536_, v_children_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_video___redArg(lean_object* v_attrs_1539_, lean_object* v_children_1540_){
_start:
{
uint8_t v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1541_ = 0;
v___x_1542_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__5));
v___x_1543_ = lean_box(0);
v___x_1544_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1544_, 0, v___x_1542_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
lean_ctor_set(v___x_1544_, 2, v_attrs_1539_);
lean_ctor_set(v___x_1544_, 3, v_children_1540_);
lean_ctor_set_uint8(v___x_1544_, sizeof(void*)*4, v___x_1541_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_video(lean_object* v_Msg_1545_, lean_object* v_attrs_1546_, lean_object* v_children_1547_){
_start:
{
lean_object* v___x_1548_; 
v___x_1548_ = l_Lasm_UI_video___redArg(v_attrs_1546_, v_children_1547_);
return v___x_1548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_wbr___redArg(lean_object* v_attrs_1549_){
_start:
{
uint8_t v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1550_ = 0;
v___x_1551_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__6));
v___x_1552_ = lean_box(0);
v___x_1553_ = lean_box(0);
v___x_1554_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1554_, 0, v___x_1551_);
lean_ctor_set(v___x_1554_, 1, v___x_1552_);
lean_ctor_set(v___x_1554_, 2, v_attrs_1549_);
lean_ctor_set(v___x_1554_, 3, v___x_1553_);
lean_ctor_set_uint8(v___x_1554_, sizeof(void*)*4, v___x_1550_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_wbr(lean_object* v_Msg_1555_, lean_object* v_attrs_1556_){
_start:
{
lean_object* v___x_1557_; 
v___x_1557_ = l_Lasm_UI_wbr___redArg(v_attrs_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attr___redArg(lean_object* v_name_1558_, lean_object* v_value_1559_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1560_, 0, v_name_1558_);
lean_ctor_set(v___x_1560_, 1, v_value_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attr(lean_object* v_Msg_1561_, lean_object* v_name_1562_, lean_object* v_value_1563_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1564_, 0, v_name_1562_);
lean_ctor_set(v___x_1564_, 1, v_value_1563_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prop___redArg(lean_object* v_name_1565_, lean_object* v_value_1566_){
_start:
{
lean_object* v___x_1567_; 
v___x_1567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1567_, 0, v_name_1565_);
lean_ctor_set(v___x_1567_, 1, v_value_1566_);
return v___x_1567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prop(lean_object* v_Msg_1568_, lean_object* v_name_1569_, lean_object* v_value_1570_){
_start:
{
lean_object* v___x_1571_; 
v___x_1571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1571_, 0, v_name_1569_);
lean_ctor_set(v___x_1571_, 1, v_value_1570_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_boolProp___redArg(lean_object* v_name_1572_, uint8_t v_b_1573_){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1574_, 0, v_b_1573_);
v___x_1575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1575_, 0, v_name_1572_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_boolProp___redArg___boxed(lean_object* v_name_1576_, lean_object* v_b_1577_){
_start:
{
uint8_t v_b_boxed_1578_; lean_object* v_res_1579_; 
v_b_boxed_1578_ = lean_unbox(v_b_1577_);
v_res_1579_ = l_Lasm_UI_boolProp___redArg(v_name_1576_, v_b_boxed_1578_);
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_boolProp(lean_object* v_Msg_1580_, lean_object* v_name_1581_, uint8_t v_b_1582_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = l_Lasm_UI_boolProp___redArg(v_name_1581_, v_b_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_boolProp___boxed(lean_object* v_Msg_1584_, lean_object* v_name_1585_, lean_object* v_b_1586_){
_start:
{
uint8_t v_b_boxed_1587_; lean_object* v_res_1588_; 
v_b_boxed_1587_ = lean_unbox(v_b_1586_);
v_res_1588_ = l_Lasm_UI_boolProp(v_Msg_1584_, v_name_1585_, v_b_boxed_1587_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_stringProp___redArg(lean_object* v_name_1589_, lean_object* v_s_1590_){
_start:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1591_, 0, v_s_1590_);
v___x_1592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1592_, 0, v_name_1589_);
lean_ctor_set(v___x_1592_, 1, v___x_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_stringProp(lean_object* v_Msg_1593_, lean_object* v_name_1594_, lean_object* v_s_1595_){
_start:
{
lean_object* v___x_1596_; 
v___x_1596_ = l_Lasm_UI_stringProp___redArg(v_name_1594_, v_s_1595_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_style___redArg(lean_object* v_name_1597_, lean_object* v_value_1598_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1599_, 0, v_name_1597_);
lean_ctor_set(v___x_1599_, 1, v_value_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_style(lean_object* v_Msg_1600_, lean_object* v_name_1601_, lean_object* v_value_1602_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1603_, 0, v_name_1601_);
lean_ctor_set(v___x_1603_, 1, v_value_1602_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_data___redArg(lean_object* v_name_1605_, lean_object* v_value_1606_){
_start:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1607_ = ((lean_object*)(l_Lasm_UI_data___redArg___closed__0));
v___x_1608_ = lean_string_append(v___x_1607_, v_name_1605_);
v___x_1609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
lean_ctor_set(v___x_1609_, 1, v_value_1606_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_data___redArg___boxed(lean_object* v_name_1610_, lean_object* v_value_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l_Lasm_UI_data___redArg(v_name_1610_, v_value_1611_);
lean_dec_ref(v_name_1610_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_data(lean_object* v_Msg_1613_, lean_object* v_name_1614_, lean_object* v_value_1615_){
_start:
{
lean_object* v___x_1616_; 
v___x_1616_ = l_Lasm_UI_data___redArg(v_name_1614_, v_value_1615_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_data___boxed(lean_object* v_Msg_1617_, lean_object* v_name_1618_, lean_object* v_value_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_Lasm_UI_data(v_Msg_1617_, v_name_1618_, v_value_1619_);
lean_dec_ref(v_name_1618_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_aria___redArg(lean_object* v_name_1622_, lean_object* v_value_1623_){
_start:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1624_ = ((lean_object*)(l_Lasm_UI_aria___redArg___closed__0));
v___x_1625_ = lean_string_append(v___x_1624_, v_name_1622_);
v___x_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1625_);
lean_ctor_set(v___x_1626_, 1, v_value_1623_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_aria___redArg___boxed(lean_object* v_name_1627_, lean_object* v_value_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l_Lasm_UI_aria___redArg(v_name_1627_, v_value_1628_);
lean_dec_ref(v_name_1627_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_aria(lean_object* v_Msg_1630_, lean_object* v_name_1631_, lean_object* v_value_1632_){
_start:
{
lean_object* v___x_1633_; 
v___x_1633_ = l_Lasm_UI_aria___redArg(v_name_1631_, v_value_1632_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_aria___boxed(lean_object* v_Msg_1634_, lean_object* v_name_1635_, lean_object* v_value_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l_Lasm_UI_aria(v_Msg_1634_, v_name_1635_, v_value_1636_);
lean_dec_ref(v_name_1635_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_class___00__redArg(lean_object* v_c_1639_){
_start:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1640_ = ((lean_object*)(l_Lasm_UI_class___00__redArg___closed__0));
v___x_1641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
lean_ctor_set(v___x_1641_, 1, v_c_1639_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_class__(lean_object* v_Msg_1642_, lean_object* v_c_1643_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l_Lasm_UI_class___00__redArg(v_c_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_classList_spec__0(lean_object* v_a_1645_, lean_object* v_a_1646_){
_start:
{
if (lean_obj_tag(v_a_1645_) == 0)
{
lean_object* v___x_1647_; 
v___x_1647_ = lean_array_to_list(v_a_1646_);
return v___x_1647_;
}
else
{
lean_object* v_head_1648_; lean_object* v_snd_1649_; uint8_t v___x_1650_; 
v_head_1648_ = lean_ctor_get(v_a_1645_, 0);
v_snd_1649_ = lean_ctor_get(v_head_1648_, 1);
v___x_1650_ = lean_unbox(v_snd_1649_);
if (v___x_1650_ == 0)
{
lean_object* v_tail_1651_; 
v_tail_1651_ = lean_ctor_get(v_a_1645_, 1);
lean_inc(v_tail_1651_);
lean_dec_ref_known(v_a_1645_, 2);
v_a_1645_ = v_tail_1651_;
goto _start;
}
else
{
lean_object* v_tail_1653_; lean_object* v_fst_1654_; lean_object* v___x_1655_; 
lean_inc(v_head_1648_);
v_tail_1653_ = lean_ctor_get(v_a_1645_, 1);
lean_inc(v_tail_1653_);
lean_dec_ref_known(v_a_1645_, 2);
v_fst_1654_ = lean_ctor_get(v_head_1648_, 0);
lean_inc(v_fst_1654_);
lean_dec(v_head_1648_);
v___x_1655_ = lean_array_push(v_a_1646_, v_fst_1654_);
v_a_1645_ = v_tail_1653_;
v_a_1646_ = v___x_1655_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_classList___redArg(lean_object* v_cs_1660_){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1661_ = ((lean_object*)(l_Lasm_UI_class___00__redArg___closed__0));
v___x_1662_ = ((lean_object*)(l_Lasm_UI_classList___redArg___closed__0));
v___x_1663_ = ((lean_object*)(l_Lasm_UI_classList___redArg___closed__1));
v___x_1664_ = l_List_filterMapTR_go___at___00Lasm_UI_classList_spec__0(v_cs_1660_, v___x_1663_);
v___x_1665_ = l_String_intercalate(v___x_1662_, v___x_1664_);
v___x_1666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1661_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_classList(lean_object* v_Msg_1667_, lean_object* v_cs_1668_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l_Lasm_UI_classList___redArg(v_cs_1668_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_id___00__redArg(lean_object* v_i_1671_){
_start:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1672_ = ((lean_object*)(l_Lasm_UI_id___00__redArg___closed__0));
v___x_1673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1672_);
lean_ctor_set(v___x_1673_, 1, v_i_1671_);
return v___x_1673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_id__(lean_object* v_Msg_1674_, lean_object* v_i_1675_){
_start:
{
lean_object* v___x_1676_; 
v___x_1676_ = l_Lasm_UI_id___00__redArg(v_i_1675_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_type___00__redArg(lean_object* v_t_1678_){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1679_ = ((lean_object*)(l_Lasm_UI_type___00__redArg___closed__0));
v___x_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1679_);
lean_ctor_set(v___x_1680_, 1, v_t_1678_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_type__(lean_object* v_Msg_1681_, lean_object* v_t_1682_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = l_Lasm_UI_type___00__redArg(v_t_1682_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_for___00__redArg(lean_object* v_i_1685_){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = ((lean_object*)(l_Lasm_UI_for___00__redArg___closed__0));
v___x_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1686_);
lean_ctor_set(v___x_1687_, 1, v_i_1685_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_for__(lean_object* v_Msg_1688_, lean_object* v_i_1689_){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = l_Lasm_UI_for___00__redArg(v_i_1689_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_max___00__redArg(lean_object* v_v_1692_){
_start:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1693_ = ((lean_object*)(l_Lasm_UI_max___00__redArg___closed__0));
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1693_);
lean_ctor_set(v___x_1694_, 1, v_v_1692_);
return v___x_1694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_max__(lean_object* v_Msg_1695_, lean_object* v_v_1696_){
_start:
{
lean_object* v___x_1697_; 
v___x_1697_ = l_Lasm_UI_max___00__redArg(v_v_1696_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_min___00__redArg(lean_object* v_v_1699_){
_start:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = ((lean_object*)(l_Lasm_UI_min___00__redArg___closed__0));
v___x_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1700_);
lean_ctor_set(v___x_1701_, 1, v_v_1699_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_min__(lean_object* v_Msg_1702_, lean_object* v_v_1703_){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = l_Lasm_UI_min___00__redArg(v_v_1703_);
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_value___redArg(lean_object* v_v_1706_){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1707_ = ((lean_object*)(l_Lasm_UI_value___redArg___closed__0));
v___x_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1708_, 0, v_v_1706_);
v___x_1709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1707_);
lean_ctor_set(v___x_1709_, 1, v___x_1708_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_value(lean_object* v_Msg_1710_, lean_object* v_v_1711_){
_start:
{
lean_object* v___x_1712_; 
v___x_1712_ = l_Lasm_UI_value___redArg(v_v_1711_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_checked___redArg(uint8_t v_b_1714_){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1715_ = ((lean_object*)(l_Lasm_UI_checked___redArg___closed__0));
v___x_1716_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1716_, 0, v_b_1714_);
v___x_1717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1715_);
lean_ctor_set(v___x_1717_, 1, v___x_1716_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_checked___redArg___boxed(lean_object* v_b_1718_){
_start:
{
uint8_t v_b_boxed_1719_; lean_object* v_res_1720_; 
v_b_boxed_1719_ = lean_unbox(v_b_1718_);
v_res_1720_ = l_Lasm_UI_checked___redArg(v_b_boxed_1719_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_checked(lean_object* v_Msg_1721_, uint8_t v_b_1722_){
_start:
{
lean_object* v___x_1723_; 
v___x_1723_ = l_Lasm_UI_checked___redArg(v_b_1722_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_checked___boxed(lean_object* v_Msg_1724_, lean_object* v_b_1725_){
_start:
{
uint8_t v_b_boxed_1726_; lean_object* v_res_1727_; 
v_b_boxed_1726_ = lean_unbox(v_b_1725_);
v_res_1727_ = l_Lasm_UI_checked(v_Msg_1724_, v_b_boxed_1726_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_selected___redArg(uint8_t v_b_1729_){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1730_ = ((lean_object*)(l_Lasm_UI_selected___redArg___closed__0));
v___x_1731_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1731_, 0, v_b_1729_);
v___x_1732_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1730_);
lean_ctor_set(v___x_1732_, 1, v___x_1731_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_selected___redArg___boxed(lean_object* v_b_1733_){
_start:
{
uint8_t v_b_boxed_1734_; lean_object* v_res_1735_; 
v_b_boxed_1734_ = lean_unbox(v_b_1733_);
v_res_1735_ = l_Lasm_UI_selected___redArg(v_b_boxed_1734_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_selected(lean_object* v_Msg_1736_, uint8_t v_b_1737_){
_start:
{
lean_object* v___x_1738_; 
v___x_1738_ = l_Lasm_UI_selected___redArg(v_b_1737_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_selected___boxed(lean_object* v_Msg_1739_, lean_object* v_b_1740_){
_start:
{
uint8_t v_b_boxed_1741_; lean_object* v_res_1742_; 
v_b_boxed_1741_ = lean_unbox(v_b_1740_);
v_res_1742_ = l_Lasm_UI_selected(v_Msg_1739_, v_b_boxed_1741_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_disabled___redArg(uint8_t v_b_1744_){
_start:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1745_ = ((lean_object*)(l_Lasm_UI_disabled___redArg___closed__0));
v___x_1746_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1746_, 0, v_b_1744_);
v___x_1747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1745_);
lean_ctor_set(v___x_1747_, 1, v___x_1746_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_disabled___redArg___boxed(lean_object* v_b_1748_){
_start:
{
uint8_t v_b_boxed_1749_; lean_object* v_res_1750_; 
v_b_boxed_1749_ = lean_unbox(v_b_1748_);
v_res_1750_ = l_Lasm_UI_disabled___redArg(v_b_boxed_1749_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_disabled(lean_object* v_Msg_1751_, uint8_t v_b_1752_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Lasm_UI_disabled___redArg(v_b_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_disabled___boxed(lean_object* v_Msg_1754_, lean_object* v_b_1755_){
_start:
{
uint8_t v_b_boxed_1756_; lean_object* v_res_1757_; 
v_b_boxed_1756_ = lean_unbox(v_b_1755_);
v_res_1757_ = l_Lasm_UI_disabled(v_Msg_1754_, v_b_boxed_1756_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hidden___redArg(uint8_t v_b_1759_){
_start:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1760_ = ((lean_object*)(l_Lasm_UI_hidden___redArg___closed__0));
v___x_1761_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1761_, 0, v_b_1759_);
v___x_1762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1760_);
lean_ctor_set(v___x_1762_, 1, v___x_1761_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hidden___redArg___boxed(lean_object* v_b_1763_){
_start:
{
uint8_t v_b_boxed_1764_; lean_object* v_res_1765_; 
v_b_boxed_1764_ = lean_unbox(v_b_1763_);
v_res_1765_ = l_Lasm_UI_hidden___redArg(v_b_boxed_1764_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hidden(lean_object* v_Msg_1766_, uint8_t v_b_1767_){
_start:
{
lean_object* v___x_1768_; 
v___x_1768_ = l_Lasm_UI_hidden___redArg(v_b_1767_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hidden___boxed(lean_object* v_Msg_1769_, lean_object* v_b_1770_){
_start:
{
uint8_t v_b_boxed_1771_; lean_object* v_res_1772_; 
v_b_boxed_1771_ = lean_unbox(v_b_1770_);
v_res_1772_ = l_Lasm_UI_hidden(v_Msg_1769_, v_b_boxed_1771_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_readonly___redArg(uint8_t v_b_1774_){
_start:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1775_ = ((lean_object*)(l_Lasm_UI_readonly___redArg___closed__0));
v___x_1776_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1776_, 0, v_b_1774_);
v___x_1777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1775_);
lean_ctor_set(v___x_1777_, 1, v___x_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_readonly___redArg___boxed(lean_object* v_b_1778_){
_start:
{
uint8_t v_b_boxed_1779_; lean_object* v_res_1780_; 
v_b_boxed_1779_ = lean_unbox(v_b_1778_);
v_res_1780_ = l_Lasm_UI_readonly___redArg(v_b_boxed_1779_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_readonly(lean_object* v_Msg_1781_, uint8_t v_b_1782_){
_start:
{
lean_object* v___x_1783_; 
v___x_1783_ = l_Lasm_UI_readonly___redArg(v_b_1782_);
return v___x_1783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_readonly___boxed(lean_object* v_Msg_1784_, lean_object* v_b_1785_){
_start:
{
uint8_t v_b_boxed_1786_; lean_object* v_res_1787_; 
v_b_boxed_1786_ = lean_unbox(v_b_1785_);
v_res_1787_ = l_Lasm_UI_readonly(v_Msg_1784_, v_b_boxed_1786_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_required___redArg(uint8_t v_b_1789_){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1790_ = ((lean_object*)(l_Lasm_UI_required___redArg___closed__0));
v___x_1791_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1791_, 0, v_b_1789_);
v___x_1792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1790_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_required___redArg___boxed(lean_object* v_b_1793_){
_start:
{
uint8_t v_b_boxed_1794_; lean_object* v_res_1795_; 
v_b_boxed_1794_ = lean_unbox(v_b_1793_);
v_res_1795_ = l_Lasm_UI_required___redArg(v_b_boxed_1794_);
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_required(lean_object* v_Msg_1796_, uint8_t v_b_1797_){
_start:
{
lean_object* v___x_1798_; 
v___x_1798_ = l_Lasm_UI_required___redArg(v_b_1797_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_required___boxed(lean_object* v_Msg_1799_, lean_object* v_b_1800_){
_start:
{
uint8_t v_b_boxed_1801_; lean_object* v_res_1802_; 
v_b_boxed_1801_ = lean_unbox(v_b_1800_);
v_res_1802_ = l_Lasm_UI_required(v_Msg_1799_, v_b_boxed_1801_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_multiple___redArg(uint8_t v_b_1804_){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1805_ = ((lean_object*)(l_Lasm_UI_multiple___redArg___closed__0));
v___x_1806_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1806_, 0, v_b_1804_);
v___x_1807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1805_);
lean_ctor_set(v___x_1807_, 1, v___x_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_multiple___redArg___boxed(lean_object* v_b_1808_){
_start:
{
uint8_t v_b_boxed_1809_; lean_object* v_res_1810_; 
v_b_boxed_1809_ = lean_unbox(v_b_1808_);
v_res_1810_ = l_Lasm_UI_multiple___redArg(v_b_boxed_1809_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_multiple(lean_object* v_Msg_1811_, uint8_t v_b_1812_){
_start:
{
lean_object* v___x_1813_; 
v___x_1813_ = l_Lasm_UI_multiple___redArg(v_b_1812_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_multiple___boxed(lean_object* v_Msg_1814_, lean_object* v_b_1815_){
_start:
{
uint8_t v_b_boxed_1816_; lean_object* v_res_1817_; 
v_b_boxed_1816_ = lean_unbox(v_b_1815_);
v_res_1817_ = l_Lasm_UI_multiple(v_Msg_1814_, v_b_boxed_1816_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_autofocus___redArg(uint8_t v_b_1819_){
_start:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___x_1820_ = ((lean_object*)(l_Lasm_UI_autofocus___redArg___closed__0));
v___x_1821_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1821_, 0, v_b_1819_);
v___x_1822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1820_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_autofocus___redArg___boxed(lean_object* v_b_1823_){
_start:
{
uint8_t v_b_boxed_1824_; lean_object* v_res_1825_; 
v_b_boxed_1824_ = lean_unbox(v_b_1823_);
v_res_1825_ = l_Lasm_UI_autofocus___redArg(v_b_boxed_1824_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_autofocus(lean_object* v_Msg_1826_, uint8_t v_b_1827_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = l_Lasm_UI_autofocus___redArg(v_b_1827_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_autofocus___boxed(lean_object* v_Msg_1829_, lean_object* v_b_1830_){
_start:
{
uint8_t v_b_boxed_1831_; lean_object* v_res_1832_; 
v_b_boxed_1831_ = lean_unbox(v_b_1830_);
v_res_1832_ = l_Lasm_UI_autofocus(v_Msg_1829_, v_b_boxed_1831_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_tabindex___redArg(lean_object* v_n_1834_){
_start:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1835_ = ((lean_object*)(l_Lasm_UI_tabindex___redArg___closed__0));
v___x_1836_ = l_Int_repr(v_n_1834_);
v___x_1837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1835_);
lean_ctor_set(v___x_1837_, 1, v___x_1836_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_tabindex___redArg___boxed(lean_object* v_n_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Lasm_UI_tabindex___redArg(v_n_1838_);
lean_dec(v_n_1838_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_tabindex(lean_object* v_Msg_1840_, lean_object* v_n_1841_){
_start:
{
lean_object* v___x_1842_; 
v___x_1842_ = l_Lasm_UI_tabindex___redArg(v_n_1841_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_tabindex___boxed(lean_object* v_Msg_1843_, lean_object* v_n_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l_Lasm_UI_tabindex(v_Msg_1843_, v_n_1844_);
lean_dec(v_n_1844_);
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_colspan___redArg(lean_object* v_n_1847_){
_start:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1848_ = ((lean_object*)(l_Lasm_UI_colspan___redArg___closed__0));
v___x_1849_ = l_Nat_reprFast(v_n_1847_);
v___x_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1848_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_colspan(lean_object* v_Msg_1851_, lean_object* v_n_1852_){
_start:
{
lean_object* v___x_1853_; 
v___x_1853_ = l_Lasm_UI_colspan___redArg(v_n_1852_);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_rowspan___redArg(lean_object* v_n_1855_){
_start:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1856_ = ((lean_object*)(l_Lasm_UI_rowspan___redArg___closed__0));
v___x_1857_ = l_Nat_reprFast(v_n_1855_);
v___x_1858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1856_);
lean_ctor_set(v___x_1858_, 1, v___x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_rowspan(lean_object* v_Msg_1859_, lean_object* v_n_1860_){
_start:
{
lean_object* v___x_1861_; 
v___x_1861_ = l_Lasm_UI_rowspan___redArg(v_n_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_width___redArg(lean_object* v_n_1863_){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1864_ = ((lean_object*)(l_Lasm_UI_width___redArg___closed__0));
v___x_1865_ = l_Nat_reprFast(v_n_1863_);
v___x_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1864_);
lean_ctor_set(v___x_1866_, 1, v___x_1865_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_width(lean_object* v_Msg_1867_, lean_object* v_n_1868_){
_start:
{
lean_object* v___x_1869_; 
v___x_1869_ = l_Lasm_UI_width___redArg(v_n_1868_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_height___redArg(lean_object* v_n_1871_){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1872_ = ((lean_object*)(l_Lasm_UI_height___redArg___closed__0));
v___x_1873_ = l_Nat_reprFast(v_n_1871_);
v___x_1874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1872_);
lean_ctor_set(v___x_1874_, 1, v___x_1873_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_height(lean_object* v_Msg_1875_, lean_object* v_n_1876_){
_start:
{
lean_object* v___x_1877_; 
v___x_1877_ = l_Lasm_UI_height___redArg(v_n_1876_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_title___redArg(lean_object* v_v_1878_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__20));
v___x_1880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
lean_ctor_set(v___x_1880_, 1, v_v_1878_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_title(lean_object* v_Msg_1881_, lean_object* v_v_1882_){
_start:
{
lean_object* v___x_1883_; 
v___x_1883_ = l_Lasm_UI_title___redArg(v_v_1882_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_placeholder___redArg(lean_object* v_v_1885_){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1886_ = ((lean_object*)(l_Lasm_UI_placeholder___redArg___closed__0));
v___x_1887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1886_);
lean_ctor_set(v___x_1887_, 1, v_v_1885_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_placeholder(lean_object* v_Msg_1888_, lean_object* v_v_1889_){
_start:
{
lean_object* v___x_1890_; 
v___x_1890_ = l_Lasm_UI_placeholder___redArg(v_v_1889_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_href___redArg(lean_object* v_v_1892_){
_start:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1893_ = ((lean_object*)(l_Lasm_UI_href___redArg___closed__0));
v___x_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1893_);
lean_ctor_set(v___x_1894_, 1, v_v_1892_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_href(lean_object* v_Msg_1895_, lean_object* v_v_1896_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = l_Lasm_UI_href___redArg(v_v_1896_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_src___redArg(lean_object* v_v_1899_){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1900_ = ((lean_object*)(l_Lasm_UI_src___redArg___closed__0));
v___x_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
lean_ctor_set(v___x_1901_, 1, v_v_1899_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_src(lean_object* v_Msg_1902_, lean_object* v_v_1903_){
_start:
{
lean_object* v___x_1904_; 
v___x_1904_ = l_Lasm_UI_src___redArg(v_v_1903_);
return v___x_1904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_alt___redArg(lean_object* v_v_1906_){
_start:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1907_ = ((lean_object*)(l_Lasm_UI_alt___redArg___closed__0));
v___x_1908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1907_);
lean_ctor_set(v___x_1908_, 1, v_v_1906_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_alt(lean_object* v_Msg_1909_, lean_object* v_v_1910_){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Lasm_UI_alt___redArg(v_v_1910_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_name___redArg(lean_object* v_v_1913_){
_start:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1914_ = ((lean_object*)(l_Lasm_UI_name___redArg___closed__0));
v___x_1915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1914_);
lean_ctor_set(v___x_1915_, 1, v_v_1913_);
return v___x_1915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_name(lean_object* v_Msg_1916_, lean_object* v_v_1917_){
_start:
{
lean_object* v___x_1918_; 
v___x_1918_ = l_Lasm_UI_name___redArg(v_v_1917_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_target___redArg(lean_object* v_v_1920_){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1921_ = ((lean_object*)(l_Lasm_UI_target___redArg___closed__0));
v___x_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
lean_ctor_set(v___x_1922_, 1, v_v_1920_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_target(lean_object* v_Msg_1923_, lean_object* v_v_1924_){
_start:
{
lean_object* v___x_1925_; 
v___x_1925_ = l_Lasm_UI_target___redArg(v_v_1924_);
return v___x_1925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_rel___redArg(lean_object* v_v_1927_){
_start:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1928_ = ((lean_object*)(l_Lasm_UI_rel___redArg___closed__0));
v___x_1929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1928_);
lean_ctor_set(v___x_1929_, 1, v_v_1927_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_rel(lean_object* v_Msg_1930_, lean_object* v_v_1931_){
_start:
{
lean_object* v___x_1932_; 
v___x_1932_ = l_Lasm_UI_rel___redArg(v_v_1931_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_action___redArg(lean_object* v_v_1934_){
_start:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1935_ = ((lean_object*)(l_Lasm_UI_action___redArg___closed__0));
v___x_1936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1935_);
lean_ctor_set(v___x_1936_, 1, v_v_1934_);
return v___x_1936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_action(lean_object* v_Msg_1937_, lean_object* v_v_1938_){
_start:
{
lean_object* v___x_1939_; 
v___x_1939_ = l_Lasm_UI_action___redArg(v_v_1938_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_method___redArg(lean_object* v_v_1941_){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = ((lean_object*)(l_Lasm_UI_method___redArg___closed__0));
v___x_1943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
lean_ctor_set(v___x_1943_, 1, v_v_1941_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_method(lean_object* v_Msg_1944_, lean_object* v_v_1945_){
_start:
{
lean_object* v___x_1946_; 
v___x_1946_ = l_Lasm_UI_method___redArg(v_v_1945_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_lang___redArg(lean_object* v_v_1948_){
_start:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1949_ = ((lean_object*)(l_Lasm_UI_lang___redArg___closed__0));
v___x_1950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1949_);
lean_ctor_set(v___x_1950_, 1, v_v_1948_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_lang(lean_object* v_Msg_1951_, lean_object* v_v_1952_){
_start:
{
lean_object* v___x_1953_; 
v___x_1953_ = l_Lasm_UI_lang___redArg(v_v_1952_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dir___redArg(lean_object* v_v_1955_){
_start:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1956_ = ((lean_object*)(l_Lasm_UI_dir___redArg___closed__0));
v___x_1957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
lean_ctor_set(v___x_1957_, 1, v_v_1955_);
return v___x_1957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_dir(lean_object* v_Msg_1958_, lean_object* v_v_1959_){
_start:
{
lean_object* v___x_1960_; 
v___x_1960_ = l_Lasm_UI_dir___redArg(v_v_1959_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_role___redArg(lean_object* v_v_1962_){
_start:
{
lean_object* v___x_1963_; lean_object* v___x_1964_; 
v___x_1963_ = ((lean_object*)(l_Lasm_UI_role___redArg___closed__0));
v___x_1964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1963_);
lean_ctor_set(v___x_1964_, 1, v_v_1962_);
return v___x_1964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_role(lean_object* v_Msg_1965_, lean_object* v_v_1966_){
_start:
{
lean_object* v___x_1967_; 
v___x_1967_ = l_Lasm_UI_role___redArg(v_v_1966_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_pattern___redArg(lean_object* v_v_1969_){
_start:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1970_ = ((lean_object*)(l_Lasm_UI_pattern___redArg___closed__0));
v___x_1971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1970_);
lean_ctor_set(v___x_1971_, 1, v_v_1969_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_pattern(lean_object* v_Msg_1972_, lean_object* v_v_1973_){
_start:
{
lean_object* v___x_1974_; 
v___x_1974_ = l_Lasm_UI_pattern___redArg(v_v_1973_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_step___redArg(lean_object* v_v_1976_){
_start:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = ((lean_object*)(l_Lasm_UI_step___redArg___closed__0));
v___x_1978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1977_);
lean_ctor_set(v___x_1978_, 1, v_v_1976_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_step(lean_object* v_Msg_1979_, lean_object* v_v_1980_){
_start:
{
lean_object* v___x_1981_; 
v___x_1981_ = l_Lasm_UI_step___redArg(v_v_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_accept___redArg(lean_object* v_v_1983_){
_start:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = ((lean_object*)(l_Lasm_UI_accept___redArg___closed__0));
v___x_1985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1984_);
lean_ctor_set(v___x_1985_, 1, v_v_1983_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_accept(lean_object* v_Msg_1986_, lean_object* v_v_1987_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = l_Lasm_UI_accept___redArg(v_v_1987_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_autocomplete___redArg(lean_object* v_v_1990_){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1991_ = ((lean_object*)(l_Lasm_UI_autocomplete___redArg___closed__0));
v___x_1992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1991_);
lean_ctor_set(v___x_1992_, 1, v_v_1990_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_autocomplete(lean_object* v_Msg_1993_, lean_object* v_v_1994_){
_start:
{
lean_object* v___x_1995_; 
v___x_1995_ = l_Lasm_UI_autocomplete___redArg(v_v_1994_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_download___redArg(lean_object* v_v_1997_){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1998_ = ((lean_object*)(l_Lasm_UI_download___redArg___closed__0));
v___x_1999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1999_, 0, v___x_1998_);
lean_ctor_set(v___x_1999_, 1, v_v_1997_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_download(lean_object* v_Msg_2000_, lean_object* v_v_2001_){
_start:
{
lean_object* v___x_2002_; 
v___x_2002_ = l_Lasm_UI_download___redArg(v_v_2001_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_srcset___redArg(lean_object* v_v_2004_){
_start:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = ((lean_object*)(l_Lasm_UI_srcset___redArg___closed__0));
v___x_2006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2005_);
lean_ctor_set(v___x_2006_, 1, v_v_2004_);
return v___x_2006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_srcset(lean_object* v_Msg_2007_, lean_object* v_v_2008_){
_start:
{
lean_object* v___x_2009_; 
v___x_2009_ = l_Lasm_UI_srcset___redArg(v_v_2008_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_sizes___redArg(lean_object* v_v_2011_){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = ((lean_object*)(l_Lasm_UI_sizes___redArg___closed__0));
v___x_2013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2013_, 0, v___x_2012_);
lean_ctor_set(v___x_2013_, 1, v_v_2011_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_sizes(lean_object* v_Msg_2014_, lean_object* v_v_2015_){
_start:
{
lean_object* v___x_2016_; 
v___x_2016_ = l_Lasm_UI_sizes___redArg(v_v_2015_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_loading___redArg(lean_object* v_v_2018_){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = ((lean_object*)(l_Lasm_UI_loading___redArg___closed__0));
v___x_2020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
lean_ctor_set(v___x_2020_, 1, v_v_2018_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_loading(lean_object* v_Msg_2021_, lean_object* v_v_2022_){
_start:
{
lean_object* v___x_2023_; 
v___x_2023_ = l_Lasm_UI_loading___redArg(v_v_2022_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_media___redArg(lean_object* v_v_2025_){
_start:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2026_ = ((lean_object*)(l_Lasm_UI_media___redArg___closed__0));
v___x_2027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2026_);
lean_ctor_set(v___x_2027_, 1, v_v_2025_);
return v___x_2027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_media(lean_object* v_Msg_2028_, lean_object* v_v_2029_){
_start:
{
lean_object* v___x_2030_; 
v___x_2030_ = l_Lasm_UI_media___redArg(v_v_2029_);
return v___x_2030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_enctype___redArg(lean_object* v_v_2032_){
_start:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2033_ = ((lean_object*)(l_Lasm_UI_enctype___redArg___closed__0));
v___x_2034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2033_);
lean_ctor_set(v___x_2034_, 1, v_v_2032_);
return v___x_2034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_enctype(lean_object* v_Msg_2035_, lean_object* v_v_2036_){
_start:
{
lean_object* v___x_2037_; 
v___x_2037_ = l_Lasm_UI_enctype___redArg(v_v_2036_);
return v___x_2037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_list___redArg(lean_object* v_v_2039_){
_start:
{
lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2040_ = ((lean_object*)(l_Lasm_UI_list___redArg___closed__0));
v___x_2041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
lean_ctor_set(v___x_2041_, 1, v_v_2039_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_list(lean_object* v_Msg_2042_, lean_object* v_v_2043_){
_start:
{
lean_object* v___x_2044_; 
v___x_2044_ = l_Lasm_UI_list___redArg(v_v_2043_);
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_wrap___redArg(lean_object* v_v_2046_){
_start:
{
lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2047_ = ((lean_object*)(l_Lasm_UI_wrap___redArg___closed__0));
v___x_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2047_);
lean_ctor_set(v___x_2048_, 1, v_v_2046_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_wrap(lean_object* v_Msg_2049_, lean_object* v_v_2050_){
_start:
{
lean_object* v___x_2051_; 
v___x_2051_ = l_Lasm_UI_wrap___redArg(v_v_2050_);
return v___x_2051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_cols___redArg(lean_object* v_v_2053_){
_start:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2054_ = ((lean_object*)(l_Lasm_UI_cols___redArg___closed__0));
v___x_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2054_);
lean_ctor_set(v___x_2055_, 1, v_v_2053_);
return v___x_2055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_cols(lean_object* v_Msg_2056_, lean_object* v_v_2057_){
_start:
{
lean_object* v___x_2058_; 
v___x_2058_ = l_Lasm_UI_cols___redArg(v_v_2057_);
return v___x_2058_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_rows___redArg(lean_object* v_v_2060_){
_start:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2061_ = ((lean_object*)(l_Lasm_UI_rows___redArg___closed__0));
v___x_2062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2061_);
lean_ctor_set(v___x_2062_, 1, v_v_2060_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_rows(lean_object* v_Msg_2063_, lean_object* v_v_2064_){
_start:
{
lean_object* v___x_2065_; 
v___x_2065_ = l_Lasm_UI_rows___redArg(v_v_2064_);
return v___x_2065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_maxlength___redArg(lean_object* v_v_2067_){
_start:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2068_ = ((lean_object*)(l_Lasm_UI_maxlength___redArg___closed__0));
v___x_2069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
lean_ctor_set(v___x_2069_, 1, v_v_2067_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_maxlength(lean_object* v_Msg_2070_, lean_object* v_v_2071_){
_start:
{
lean_object* v___x_2072_; 
v___x_2072_ = l_Lasm_UI_maxlength___redArg(v_v_2071_);
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_minlength___redArg(lean_object* v_v_2074_){
_start:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; 
v___x_2075_ = ((lean_object*)(l_Lasm_UI_minlength___redArg___closed__0));
v___x_2076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2075_);
lean_ctor_set(v___x_2076_, 1, v_v_2074_);
return v___x_2076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_minlength(lean_object* v_Msg_2077_, lean_object* v_v_2078_){
_start:
{
lean_object* v___x_2079_; 
v___x_2079_ = l_Lasm_UI_minlength___redArg(v_v_2078_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_size___redArg(lean_object* v_v_2081_){
_start:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___x_2082_ = ((lean_object*)(l_Lasm_UI_size___redArg___closed__0));
v___x_2083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2082_);
lean_ctor_set(v___x_2083_, 1, v_v_2081_);
return v___x_2083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_size(lean_object* v_Msg_2084_, lean_object* v_v_2085_){
_start:
{
lean_object* v___x_2086_; 
v___x_2086_ = l_Lasm_UI_size___redArg(v_v_2085_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_start___redArg(lean_object* v_v_2088_){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = ((lean_object*)(l_Lasm_UI_start___redArg___closed__0));
v___x_2090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
lean_ctor_set(v___x_2090_, 1, v_v_2088_);
return v___x_2090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_start(lean_object* v_Msg_2091_, lean_object* v_v_2092_){
_start:
{
lean_object* v___x_2093_; 
v___x_2093_ = l_Lasm_UI_start___redArg(v_v_2092_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_scope___redArg(lean_object* v_v_2095_){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2096_ = ((lean_object*)(l_Lasm_UI_scope___redArg___closed__0));
v___x_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2096_);
lean_ctor_set(v___x_2097_, 1, v_v_2095_);
return v___x_2097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_scope(lean_object* v_Msg_2098_, lean_object* v_v_2099_){
_start:
{
lean_object* v___x_2100_; 
v___x_2100_ = l_Lasm_UI_scope___redArg(v_v_2099_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_headers___redArg(lean_object* v_v_2102_){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = ((lean_object*)(l_Lasm_UI_headers___redArg___closed__0));
v___x_2104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2103_);
lean_ctor_set(v___x_2104_, 1, v_v_2102_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_headers(lean_object* v_Msg_2105_, lean_object* v_v_2106_){
_start:
{
lean_object* v___x_2107_; 
v___x_2107_ = l_Lasm_UI_headers___redArg(v_v_2106_);
return v___x_2107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_kind___redArg(lean_object* v_v_2109_){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = ((lean_object*)(l_Lasm_UI_kind___redArg___closed__0));
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2110_);
lean_ctor_set(v___x_2111_, 1, v_v_2109_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_kind(lean_object* v_Msg_2112_, lean_object* v_v_2113_){
_start:
{
lean_object* v___x_2114_; 
v___x_2114_ = l_Lasm_UI_kind___redArg(v_v_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_srclang___redArg(lean_object* v_v_2116_){
_start:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = ((lean_object*)(l_Lasm_UI_srclang___redArg___closed__0));
v___x_2118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
lean_ctor_set(v___x_2118_, 1, v_v_2116_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_srclang(lean_object* v_Msg_2119_, lean_object* v_v_2120_){
_start:
{
lean_object* v___x_2121_; 
v___x_2121_ = l_Lasm_UI_srclang___redArg(v_v_2120_);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_poster___redArg(lean_object* v_v_2123_){
_start:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2124_ = ((lean_object*)(l_Lasm_UI_poster___redArg___closed__0));
v___x_2125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2124_);
lean_ctor_set(v___x_2125_, 1, v_v_2123_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_poster(lean_object* v_Msg_2126_, lean_object* v_v_2127_){
_start:
{
lean_object* v___x_2128_; 
v___x_2128_ = l_Lasm_UI_poster___redArg(v_v_2127_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_preload___redArg(lean_object* v_v_2130_){
_start:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2131_ = ((lean_object*)(l_Lasm_UI_preload___redArg___closed__0));
v___x_2132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2131_);
lean_ctor_set(v___x_2132_, 1, v_v_2130_);
return v___x_2132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_preload(lean_object* v_Msg_2133_, lean_object* v_v_2134_){
_start:
{
lean_object* v___x_2135_; 
v___x_2135_ = l_Lasm_UI_preload___redArg(v_v_2134_);
return v___x_2135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_sandbox___redArg(lean_object* v_v_2137_){
_start:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2138_ = ((lean_object*)(l_Lasm_UI_sandbox___redArg___closed__0));
v___x_2139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2138_);
lean_ctor_set(v___x_2139_, 1, v_v_2137_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_sandbox(lean_object* v_Msg_2140_, lean_object* v_v_2141_){
_start:
{
lean_object* v___x_2142_; 
v___x_2142_ = l_Lasm_UI_sandbox___redArg(v_v_2141_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_srcdoc___redArg(lean_object* v_v_2144_){
_start:
{
lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2145_ = ((lean_object*)(l_Lasm_UI_srcdoc___redArg___closed__0));
v___x_2146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2145_);
lean_ctor_set(v___x_2146_, 1, v_v_2144_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_srcdoc(lean_object* v_Msg_2147_, lean_object* v_v_2148_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = l_Lasm_UI_srcdoc___redArg(v_v_2148_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_datetime___redArg(lean_object* v_v_2151_){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2152_ = ((lean_object*)(l_Lasm_UI_datetime___redArg___closed__0));
v___x_2153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2153_, 0, v___x_2152_);
lean_ctor_set(v___x_2153_, 1, v_v_2151_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_datetime(lean_object* v_Msg_2154_, lean_object* v_v_2155_){
_start:
{
lean_object* v___x_2156_; 
v___x_2156_ = l_Lasm_UI_datetime___redArg(v_v_2155_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_spellcheck___redArg(lean_object* v_v_2158_){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = ((lean_object*)(l_Lasm_UI_spellcheck___redArg___closed__0));
v___x_2160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2159_);
lean_ctor_set(v___x_2160_, 1, v_v_2158_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_spellcheck(lean_object* v_Msg_2161_, lean_object* v_v_2162_){
_start:
{
lean_object* v___x_2163_; 
v___x_2163_ = l_Lasm_UI_spellcheck___redArg(v_v_2162_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_draggable___redArg(lean_object* v_v_2165_){
_start:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; 
v___x_2166_ = ((lean_object*)(l_Lasm_UI_draggable___redArg___closed__0));
v___x_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
lean_ctor_set(v___x_2167_, 1, v_v_2165_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_draggable(lean_object* v_Msg_2168_, lean_object* v_v_2169_){
_start:
{
lean_object* v___x_2170_; 
v___x_2170_ = l_Lasm_UI_draggable___redArg(v_v_2169_);
return v___x_2170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_contenteditable___redArg(lean_object* v_v_2172_){
_start:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2173_ = ((lean_object*)(l_Lasm_UI_contenteditable___redArg___closed__0));
v___x_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
lean_ctor_set(v___x_2174_, 1, v_v_2172_);
return v___x_2174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_contenteditable(lean_object* v_Msg_2175_, lean_object* v_v_2176_){
_start:
{
lean_object* v___x_2177_; 
v___x_2177_ = l_Lasm_UI_contenteditable___redArg(v_v_2176_);
return v___x_2177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_on___redArg___lam__0(lean_object* v_m_2178_){
_start:
{
uint8_t v___x_2179_; lean_object* v___x_2180_; 
v___x_2179_ = 0;
v___x_2180_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2180_, 0, v_m_2178_);
lean_ctor_set_uint8(v___x_2180_, sizeof(void*)*1, v___x_2179_);
lean_ctor_set_uint8(v___x_2180_, sizeof(void*)*1 + 1, v___x_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_on___redArg(lean_object* v_event_2182_, lean_object* v_d_2183_){
_start:
{
lean_object* v___f_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; 
v___f_2184_ = ((lean_object*)(l_Lasm_UI_on___redArg___closed__0));
v___x_2185_ = l_Lasm_UI_Decoder_map___redArg(v___f_2184_, v_d_2183_);
v___x_2186_ = l_Lasm_UI_Attr_custom___redArg(v_event_2182_, v___x_2185_);
return v___x_2186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_on(lean_object* v_Msg_2187_, lean_object* v_event_2188_, lean_object* v_d_2189_){
_start:
{
lean_object* v___x_2190_; 
v___x_2190_ = l_Lasm_UI_on___redArg(v_event_2188_, v_d_2189_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_preventDefaultOn___redArg___lam__0(lean_object* v_x_2191_){
_start:
{
lean_object* v_fst_2192_; lean_object* v_snd_2193_; uint8_t v___x_2194_; lean_object* v___x_2195_; uint8_t v___x_2196_; 
v_fst_2192_ = lean_ctor_get(v_x_2191_, 0);
v_snd_2193_ = lean_ctor_get(v_x_2191_, 1);
v___x_2194_ = 0;
lean_inc(v_fst_2192_);
v___x_2195_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2195_, 0, v_fst_2192_);
v___x_2196_ = lean_unbox(v_snd_2193_);
lean_ctor_set_uint8(v___x_2195_, sizeof(void*)*1, v___x_2196_);
lean_ctor_set_uint8(v___x_2195_, sizeof(void*)*1 + 1, v___x_2194_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_preventDefaultOn___redArg___lam__0___boxed(lean_object* v_x_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Lasm_UI_preventDefaultOn___redArg___lam__0(v_x_2197_);
lean_dec_ref(v_x_2197_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_preventDefaultOn___redArg(lean_object* v_event_2200_, lean_object* v_d_2201_){
_start:
{
lean_object* v___f_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___f_2202_ = ((lean_object*)(l_Lasm_UI_preventDefaultOn___redArg___closed__0));
v___x_2203_ = l_Lasm_UI_Decoder_map___redArg(v___f_2202_, v_d_2201_);
v___x_2204_ = l_Lasm_UI_Attr_custom___redArg(v_event_2200_, v___x_2203_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_preventDefaultOn(lean_object* v_Msg_2205_, lean_object* v_event_2206_, lean_object* v_d_2207_){
_start:
{
lean_object* v___x_2208_; 
v___x_2208_ = l_Lasm_UI_preventDefaultOn___redArg(v_event_2206_, v_d_2207_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_stopPropagationOn___redArg___lam__0(lean_object* v_x_2209_){
_start:
{
lean_object* v_fst_2210_; lean_object* v_snd_2211_; uint8_t v___x_2212_; lean_object* v___x_2213_; uint8_t v___x_2214_; 
v_fst_2210_ = lean_ctor_get(v_x_2209_, 0);
v_snd_2211_ = lean_ctor_get(v_x_2209_, 1);
v___x_2212_ = 0;
lean_inc(v_fst_2210_);
v___x_2213_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2213_, 0, v_fst_2210_);
lean_ctor_set_uint8(v___x_2213_, sizeof(void*)*1, v___x_2212_);
v___x_2214_ = lean_unbox(v_snd_2211_);
lean_ctor_set_uint8(v___x_2213_, sizeof(void*)*1 + 1, v___x_2214_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_stopPropagationOn___redArg___lam__0___boxed(lean_object* v_x_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l_Lasm_UI_stopPropagationOn___redArg___lam__0(v_x_2215_);
lean_dec_ref(v_x_2215_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_stopPropagationOn___redArg(lean_object* v_event_2218_, lean_object* v_d_2219_){
_start:
{
lean_object* v___f_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___f_2220_ = ((lean_object*)(l_Lasm_UI_stopPropagationOn___redArg___closed__0));
v___x_2221_ = l_Lasm_UI_Decoder_map___redArg(v___f_2220_, v_d_2219_);
v___x_2222_ = l_Lasm_UI_Attr_custom___redArg(v_event_2218_, v___x_2221_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_stopPropagationOn(lean_object* v_Msg_2223_, lean_object* v_event_2224_, lean_object* v_d_2225_){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = l_Lasm_UI_stopPropagationOn___redArg(v_event_2224_, v_d_2225_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_custom___redArg(lean_object* v_event_2227_, lean_object* v_d_2228_){
_start:
{
lean_object* v___x_2229_; 
v___x_2229_ = l_Lasm_UI_Attr_custom___redArg(v_event_2227_, v_d_2228_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_custom(lean_object* v_Msg_2230_, lean_object* v_event_2231_, lean_object* v_d_2232_){
_start:
{
lean_object* v___x_2233_; 
v___x_2233_ = l_Lasm_UI_Attr_custom___redArg(v_event_2231_, v_d_2232_);
return v___x_2233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onClick___redArg(lean_object* v_msg_2235_){
_start:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2236_ = ((lean_object*)(l_Lasm_UI_onClick___redArg___closed__0));
v___x_2237_ = l_Lasm_UI_Decoder_succeed___redArg(v_msg_2235_);
v___x_2238_ = l_Lasm_UI_on___redArg(v___x_2236_, v___x_2237_);
return v___x_2238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onClick(lean_object* v_Msg_2239_, lean_object* v_msg_2240_){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_Lasm_UI_onClick___redArg(v_msg_2240_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onDoubleClick___redArg(lean_object* v_msg_2243_){
_start:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2244_ = ((lean_object*)(l_Lasm_UI_onDoubleClick___redArg___closed__0));
v___x_2245_ = l_Lasm_UI_Decoder_succeed___redArg(v_msg_2243_);
v___x_2246_ = l_Lasm_UI_on___redArg(v___x_2244_, v___x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onDoubleClick(lean_object* v_Msg_2247_, lean_object* v_msg_2248_){
_start:
{
lean_object* v___x_2249_; 
v___x_2249_ = l_Lasm_UI_onDoubleClick___redArg(v_msg_2248_);
return v___x_2249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseDown___redArg(lean_object* v_msg_2251_){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2252_ = ((lean_object*)(l_Lasm_UI_onMouseDown___redArg___closed__0));
v___x_2253_ = l_Lasm_UI_Decoder_succeed___redArg(v_msg_2251_);
v___x_2254_ = l_Lasm_UI_on___redArg(v___x_2252_, v___x_2253_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseDown(lean_object* v_Msg_2255_, lean_object* v_msg_2256_){
_start:
{
lean_object* v___x_2257_; 
v___x_2257_ = l_Lasm_UI_onMouseDown___redArg(v_msg_2256_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseUp___redArg(lean_object* v_msg_2259_){
_start:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2260_ = ((lean_object*)(l_Lasm_UI_onMouseUp___redArg___closed__0));
v___x_2261_ = l_Lasm_UI_Decoder_succeed___redArg(v_msg_2259_);
v___x_2262_ = l_Lasm_UI_on___redArg(v___x_2260_, v___x_2261_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseUp(lean_object* v_Msg_2263_, lean_object* v_msg_2264_){
_start:
{
lean_object* v___x_2265_; 
v___x_2265_ = l_Lasm_UI_onMouseUp___redArg(v_msg_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseEnter___redArg(lean_object* v_msg_2267_){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2268_ = ((lean_object*)(l_Lasm_UI_onMouseEnter___redArg___closed__0));
v___x_2269_ = l_Lasm_UI_Decoder_succeed___redArg(v_msg_2267_);
v___x_2270_ = l_Lasm_UI_on___redArg(v___x_2268_, v___x_2269_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseEnter(lean_object* v_Msg_2271_, lean_object* v_msg_2272_){
_start:
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Lasm_UI_onMouseEnter___redArg(v_msg_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseLeave___redArg(lean_object* v_msg_2275_){
_start:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2276_ = ((lean_object*)(l_Lasm_UI_onMouseLeave___redArg___closed__0));
v___x_2277_ = l_Lasm_UI_Decoder_succeed___redArg(v_msg_2275_);
v___x_2278_ = l_Lasm_UI_on___redArg(v___x_2276_, v___x_2277_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseLeave(lean_object* v_Msg_2279_, lean_object* v_msg_2280_){
_start:
{
lean_object* v___x_2281_; 
v___x_2281_ = l_Lasm_UI_onMouseLeave___redArg(v_msg_2280_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseOver___redArg(lean_object* v_msg_2283_){
_start:
{
lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2284_ = ((lean_object*)(l_Lasm_UI_onMouseOver___redArg___closed__0));
v___x_2285_ = l_Lasm_UI_Decoder_succeed___redArg(v_msg_2283_);
v___x_2286_ = l_Lasm_UI_on___redArg(v___x_2284_, v___x_2285_);
return v___x_2286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseOver(lean_object* v_Msg_2287_, lean_object* v_msg_2288_){
_start:
{
lean_object* v___x_2289_; 
v___x_2289_ = l_Lasm_UI_onMouseOver___redArg(v_msg_2288_);
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseOut___redArg(lean_object* v_msg_2291_){
_start:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2292_ = ((lean_object*)(l_Lasm_UI_onMouseOut___redArg___closed__0));
v___x_2293_ = l_Lasm_UI_Decoder_succeed___redArg(v_msg_2291_);
v___x_2294_ = l_Lasm_UI_on___redArg(v___x_2292_, v___x_2293_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onMouseOut(lean_object* v_Msg_2295_, lean_object* v_msg_2296_){
_start:
{
lean_object* v___x_2297_; 
v___x_2297_ = l_Lasm_UI_onMouseOut___redArg(v_msg_2296_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onFocus___redArg(lean_object* v_msg_2299_){
_start:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2300_ = ((lean_object*)(l_Lasm_UI_onFocus___redArg___closed__0));
v___x_2301_ = l_Lasm_UI_Decoder_succeed___redArg(v_msg_2299_);
v___x_2302_ = l_Lasm_UI_on___redArg(v___x_2300_, v___x_2301_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onFocus(lean_object* v_Msg_2303_, lean_object* v_msg_2304_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Lasm_UI_onFocus___redArg(v_msg_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onBlur___redArg(lean_object* v_msg_2307_){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v___x_2308_ = ((lean_object*)(l_Lasm_UI_onBlur___redArg___closed__0));
v___x_2309_ = l_Lasm_UI_Decoder_succeed___redArg(v_msg_2307_);
v___x_2310_ = l_Lasm_UI_on___redArg(v___x_2308_, v___x_2309_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onBlur(lean_object* v_Msg_2311_, lean_object* v_msg_2312_){
_start:
{
lean_object* v___x_2313_; 
v___x_2313_ = l_Lasm_UI_onBlur___redArg(v_msg_2312_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onInput___redArg(lean_object* v_f_2314_){
_start:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2315_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__114));
v___x_2316_ = l_Lasm_UI_Decoder_targetValue;
v___x_2317_ = l_Lasm_UI_Decoder_map___redArg(v_f_2314_, v___x_2316_);
v___x_2318_ = l_Lasm_UI_on___redArg(v___x_2315_, v___x_2317_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onInput(lean_object* v_Msg_2319_, lean_object* v_f_2320_){
_start:
{
lean_object* v___x_2321_; 
v___x_2321_ = l_Lasm_UI_onInput___redArg(v_f_2320_);
return v___x_2321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onChange___redArg(lean_object* v_f_2323_){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2324_ = ((lean_object*)(l_Lasm_UI_onChange___redArg___closed__0));
v___x_2325_ = l_Lasm_UI_Decoder_targetValue;
v___x_2326_ = l_Lasm_UI_Decoder_map___redArg(v_f_2323_, v___x_2325_);
v___x_2327_ = l_Lasm_UI_on___redArg(v___x_2324_, v___x_2326_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onChange(lean_object* v_Msg_2328_, lean_object* v_f_2329_){
_start:
{
lean_object* v___x_2330_; 
v___x_2330_ = l_Lasm_UI_onChange___redArg(v_f_2329_);
return v___x_2330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onCheck___redArg(lean_object* v_f_2331_){
_start:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2332_ = ((lean_object*)(l_Lasm_UI_onChange___redArg___closed__0));
v___x_2333_ = l_Lasm_UI_Decoder_targetChecked;
v___x_2334_ = l_Lasm_UI_Decoder_map___redArg(v_f_2331_, v___x_2333_);
v___x_2335_ = l_Lasm_UI_on___redArg(v___x_2332_, v___x_2334_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onCheck(lean_object* v_Msg_2336_, lean_object* v_f_2337_){
_start:
{
lean_object* v___x_2338_; 
v___x_2338_ = l_Lasm_UI_onCheck___redArg(v_f_2337_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onSubmit___redArg(lean_object* v_msg_2340_){
_start:
{
lean_object* v___x_2341_; uint8_t v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2341_ = ((lean_object*)(l_Lasm_UI_onSubmit___redArg___closed__0));
v___x_2342_ = 1;
v___x_2343_ = lean_box(v___x_2342_);
v___x_2344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2344_, 0, v_msg_2340_);
lean_ctor_set(v___x_2344_, 1, v___x_2343_);
v___x_2345_ = l_Lasm_UI_Decoder_succeed___redArg(v___x_2344_);
v___x_2346_ = l_Lasm_UI_preventDefaultOn___redArg(v___x_2341_, v___x_2345_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onSubmit(lean_object* v_Msg_2347_, lean_object* v_msg_2348_){
_start:
{
lean_object* v___x_2349_; 
v___x_2349_ = l_Lasm_UI_onSubmit___redArg(v_msg_2348_);
return v___x_2349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onKeyDown___redArg(lean_object* v_f_2351_){
_start:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2352_ = ((lean_object*)(l_Lasm_UI_onKeyDown___redArg___closed__0));
v___x_2353_ = l_Lasm_UI_Decoder_key;
v___x_2354_ = l_Lasm_UI_Decoder_map___redArg(v_f_2351_, v___x_2353_);
v___x_2355_ = l_Lasm_UI_on___redArg(v___x_2352_, v___x_2354_);
return v___x_2355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onKeyDown(lean_object* v_Msg_2356_, lean_object* v_f_2357_){
_start:
{
lean_object* v___x_2358_; 
v___x_2358_ = l_Lasm_UI_onKeyDown___redArg(v_f_2357_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onKeyUp___redArg(lean_object* v_f_2360_){
_start:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2361_ = ((lean_object*)(l_Lasm_UI_onKeyUp___redArg___closed__0));
v___x_2362_ = l_Lasm_UI_Decoder_key;
v___x_2363_ = l_Lasm_UI_Decoder_map___redArg(v_f_2360_, v___x_2362_);
v___x_2364_ = l_Lasm_UI_on___redArg(v___x_2361_, v___x_2363_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onKeyUp(lean_object* v_Msg_2365_, lean_object* v_f_2366_){
_start:
{
lean_object* v___x_2367_; 
v___x_2367_ = l_Lasm_UI_onKeyUp___redArg(v_f_2366_);
return v___x_2367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onEnter___redArg___lam__0(lean_object* v_msg_2368_, lean_object* v_x_2369_){
_start:
{
lean_inc(v_msg_2368_);
return v_msg_2368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onEnter___redArg___lam__0___boxed(lean_object* v_msg_2370_, lean_object* v_x_2371_){
_start:
{
lean_object* v_res_2372_; 
v_res_2372_ = l_Lasm_UI_onEnter___redArg___lam__0(v_msg_2370_, v_x_2371_);
lean_dec_ref(v_x_2371_);
lean_dec(v_msg_2370_);
return v_res_2372_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_onEnter___redArg___lam__1(lean_object* v_x_2374_){
_start:
{
lean_object* v___x_2375_; uint8_t v___x_2376_; 
v___x_2375_ = ((lean_object*)(l_Lasm_UI_onEnter___redArg___lam__1___closed__0));
v___x_2376_ = lean_string_dec_eq(v_x_2374_, v___x_2375_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onEnter___redArg___lam__1___boxed(lean_object* v_x_2377_){
_start:
{
uint8_t v_res_2378_; lean_object* v_r_2379_; 
v_res_2378_ = l_Lasm_UI_onEnter___redArg___lam__1(v_x_2377_);
lean_dec_ref(v_x_2377_);
v_r_2379_ = lean_box(v_res_2378_);
return v_r_2379_;
}
}
static lean_object* _init_l_Lasm_UI_onEnter___redArg___closed__1(void){
_start:
{
lean_object* v___x_2381_; lean_object* v___f_2382_; lean_object* v___x_2383_; 
v___x_2381_ = l_Lasm_UI_Decoder_key;
v___f_2382_ = ((lean_object*)(l_Lasm_UI_onEnter___redArg___closed__0));
v___x_2383_ = l_Lasm_UI_Decoder_filter___redArg(v___f_2382_, v___x_2381_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onEnter___redArg(lean_object* v_msg_2384_){
_start:
{
lean_object* v___f_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___f_2385_ = lean_alloc_closure((void*)(l_Lasm_UI_onEnter___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2385_, 0, v_msg_2384_);
v___x_2386_ = ((lean_object*)(l_Lasm_UI_onKeyDown___redArg___closed__0));
v___x_2387_ = lean_obj_once(&l_Lasm_UI_onEnter___redArg___closed__1, &l_Lasm_UI_onEnter___redArg___closed__1_once, _init_l_Lasm_UI_onEnter___redArg___closed__1);
v___x_2388_ = l_Lasm_UI_Decoder_map___redArg(v___f_2385_, v___x_2387_);
v___x_2389_ = l_Lasm_UI_on___redArg(v___x_2386_, v___x_2388_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onEnter(lean_object* v_Msg_2390_, lean_object* v_msg_2391_){
_start:
{
lean_object* v___x_2392_; 
v___x_2392_ = l_Lasm_UI_onEnter___redArg(v_msg_2391_);
return v___x_2392_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_onEscape___redArg___lam__1(lean_object* v_x_2394_){
_start:
{
lean_object* v___x_2395_; uint8_t v___x_2396_; 
v___x_2395_ = ((lean_object*)(l_Lasm_UI_onEscape___redArg___lam__1___closed__0));
v___x_2396_ = lean_string_dec_eq(v_x_2394_, v___x_2395_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onEscape___redArg___lam__1___boxed(lean_object* v_x_2397_){
_start:
{
uint8_t v_res_2398_; lean_object* v_r_2399_; 
v_res_2398_ = l_Lasm_UI_onEscape___redArg___lam__1(v_x_2397_);
lean_dec_ref(v_x_2397_);
v_r_2399_ = lean_box(v_res_2398_);
return v_r_2399_;
}
}
static lean_object* _init_l_Lasm_UI_onEscape___redArg___closed__1(void){
_start:
{
lean_object* v___x_2401_; lean_object* v___f_2402_; lean_object* v___x_2403_; 
v___x_2401_ = l_Lasm_UI_Decoder_key;
v___f_2402_ = ((lean_object*)(l_Lasm_UI_onEscape___redArg___closed__0));
v___x_2403_ = l_Lasm_UI_Decoder_filter___redArg(v___f_2402_, v___x_2401_);
return v___x_2403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onEscape___redArg(lean_object* v_msg_2404_){
_start:
{
lean_object* v___f_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___f_2405_ = lean_alloc_closure((void*)(l_Lasm_UI_onEnter___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2405_, 0, v_msg_2404_);
v___x_2406_ = ((lean_object*)(l_Lasm_UI_onKeyDown___redArg___closed__0));
v___x_2407_ = lean_obj_once(&l_Lasm_UI_onEscape___redArg___closed__1, &l_Lasm_UI_onEscape___redArg___closed__1_once, _init_l_Lasm_UI_onEscape___redArg___closed__1);
v___x_2408_ = l_Lasm_UI_Decoder_map___redArg(v___f_2405_, v___x_2407_);
v___x_2409_ = l_Lasm_UI_on___redArg(v___x_2406_, v___x_2408_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_onEscape(lean_object* v_Msg_2410_, lean_object* v_msg_2411_){
_start:
{
lean_object* v___x_2412_; 
v___x_2412_ = l_Lasm_UI_onEscape___redArg(v_msg_2411_);
return v___x_2412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_node___redArg(lean_object* v_tag_2413_, lean_object* v_attrs_2414_, lean_object* v_children_2415_){
_start:
{
uint8_t v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2416_ = 1;
v___x_2417_ = lean_box(0);
v___x_2418_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2418_, 0, v_tag_2413_);
lean_ctor_set(v___x_2418_, 1, v___x_2417_);
lean_ctor_set(v___x_2418_, 2, v_attrs_2414_);
lean_ctor_set(v___x_2418_, 3, v_children_2415_);
lean_ctor_set_uint8(v___x_2418_, sizeof(void*)*4, v___x_2416_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_node(lean_object* v_Msg_2419_, lean_object* v_tag_2420_, lean_object* v_attrs_2421_, lean_object* v_children_2422_){
_start:
{
lean_object* v___x_2423_; 
v___x_2423_ = l_Lasm_UI_Svg_node___redArg(v_tag_2420_, v_attrs_2421_, v_children_2422_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_svg___redArg(lean_object* v_attrs_2563_, lean_object* v_children_2564_){
_start:
{
uint8_t v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2565_ = 1;
v___x_2566_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__60));
v___x_2567_ = lean_box(0);
v___x_2568_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2568_, 0, v___x_2566_);
lean_ctor_set(v___x_2568_, 1, v___x_2567_);
lean_ctor_set(v___x_2568_, 2, v_attrs_2563_);
lean_ctor_set(v___x_2568_, 3, v_children_2564_);
lean_ctor_set_uint8(v___x_2568_, sizeof(void*)*4, v___x_2565_);
return v___x_2568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_svg(lean_object* v_Msg_2569_, lean_object* v_attrs_2570_, lean_object* v_children_2571_){
_start:
{
lean_object* v___x_2572_; 
v___x_2572_ = l_Lasm_UI_Svg_svg___redArg(v_attrs_2570_, v_children_2571_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_g___redArg(lean_object* v_attrs_2573_, lean_object* v_children_2574_){
_start:
{
uint8_t v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2575_ = 1;
v___x_2576_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__61));
v___x_2577_ = lean_box(0);
v___x_2578_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2578_, 0, v___x_2576_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
lean_ctor_set(v___x_2578_, 2, v_attrs_2573_);
lean_ctor_set(v___x_2578_, 3, v_children_2574_);
lean_ctor_set_uint8(v___x_2578_, sizeof(void*)*4, v___x_2575_);
return v___x_2578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_g(lean_object* v_Msg_2579_, lean_object* v_attrs_2580_, lean_object* v_children_2581_){
_start:
{
lean_object* v___x_2582_; 
v___x_2582_ = l_Lasm_UI_Svg_g___redArg(v_attrs_2580_, v_children_2581_);
return v___x_2582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_defs___redArg(lean_object* v_attrs_2583_, lean_object* v_children_2584_){
_start:
{
uint8_t v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; 
v___x_2585_ = 1;
v___x_2586_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__62));
v___x_2587_ = lean_box(0);
v___x_2588_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2588_, 0, v___x_2586_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
lean_ctor_set(v___x_2588_, 2, v_attrs_2583_);
lean_ctor_set(v___x_2588_, 3, v_children_2584_);
lean_ctor_set_uint8(v___x_2588_, sizeof(void*)*4, v___x_2585_);
return v___x_2588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_defs(lean_object* v_Msg_2589_, lean_object* v_attrs_2590_, lean_object* v_children_2591_){
_start:
{
lean_object* v___x_2592_; 
v___x_2592_ = l_Lasm_UI_Svg_defs___redArg(v_attrs_2590_, v_children_2591_);
return v___x_2592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_symbol___redArg(lean_object* v_attrs_2593_, lean_object* v_children_2594_){
_start:
{
uint8_t v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2595_ = 1;
v___x_2596_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__63));
v___x_2597_ = lean_box(0);
v___x_2598_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2598_, 0, v___x_2596_);
lean_ctor_set(v___x_2598_, 1, v___x_2597_);
lean_ctor_set(v___x_2598_, 2, v_attrs_2593_);
lean_ctor_set(v___x_2598_, 3, v_children_2594_);
lean_ctor_set_uint8(v___x_2598_, sizeof(void*)*4, v___x_2595_);
return v___x_2598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_symbol(lean_object* v_Msg_2599_, lean_object* v_attrs_2600_, lean_object* v_children_2601_){
_start:
{
lean_object* v___x_2602_; 
v___x_2602_ = l_Lasm_UI_Svg_symbol___redArg(v_attrs_2600_, v_children_2601_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_use___00__redArg(lean_object* v_attrs_2603_, lean_object* v_children_2604_){
_start:
{
uint8_t v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2605_ = 1;
v___x_2606_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__52));
v___x_2607_ = lean_box(0);
v___x_2608_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2608_, 0, v___x_2606_);
lean_ctor_set(v___x_2608_, 1, v___x_2607_);
lean_ctor_set(v___x_2608_, 2, v_attrs_2603_);
lean_ctor_set(v___x_2608_, 3, v_children_2604_);
lean_ctor_set_uint8(v___x_2608_, sizeof(void*)*4, v___x_2605_);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_use__(lean_object* v_Msg_2609_, lean_object* v_attrs_2610_, lean_object* v_children_2611_){
_start:
{
lean_object* v___x_2612_; 
v___x_2612_ = l_Lasm_UI_Svg_use___00__redArg(v_attrs_2610_, v_children_2611_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_path___redArg(lean_object* v_attrs_2613_, lean_object* v_children_2614_){
_start:
{
uint8_t v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2615_ = 1;
v___x_2616_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__53));
v___x_2617_ = lean_box(0);
v___x_2618_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2618_, 0, v___x_2616_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
lean_ctor_set(v___x_2618_, 2, v_attrs_2613_);
lean_ctor_set(v___x_2618_, 3, v_children_2614_);
lean_ctor_set_uint8(v___x_2618_, sizeof(void*)*4, v___x_2615_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_path(lean_object* v_Msg_2619_, lean_object* v_attrs_2620_, lean_object* v_children_2621_){
_start:
{
lean_object* v___x_2622_; 
v___x_2622_ = l_Lasm_UI_Svg_path___redArg(v_attrs_2620_, v_children_2621_);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_rect___redArg(lean_object* v_attrs_2623_, lean_object* v_children_2624_){
_start:
{
uint8_t v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2625_ = 1;
v___x_2626_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__54));
v___x_2627_ = lean_box(0);
v___x_2628_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2628_, 0, v___x_2626_);
lean_ctor_set(v___x_2628_, 1, v___x_2627_);
lean_ctor_set(v___x_2628_, 2, v_attrs_2623_);
lean_ctor_set(v___x_2628_, 3, v_children_2624_);
lean_ctor_set_uint8(v___x_2628_, sizeof(void*)*4, v___x_2625_);
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_rect(lean_object* v_Msg_2629_, lean_object* v_attrs_2630_, lean_object* v_children_2631_){
_start:
{
lean_object* v___x_2632_; 
v___x_2632_ = l_Lasm_UI_Svg_rect___redArg(v_attrs_2630_, v_children_2631_);
return v___x_2632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_circle___redArg(lean_object* v_attrs_2633_, lean_object* v_children_2634_){
_start:
{
uint8_t v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2635_ = 1;
v___x_2636_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__55));
v___x_2637_ = lean_box(0);
v___x_2638_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2638_, 0, v___x_2636_);
lean_ctor_set(v___x_2638_, 1, v___x_2637_);
lean_ctor_set(v___x_2638_, 2, v_attrs_2633_);
lean_ctor_set(v___x_2638_, 3, v_children_2634_);
lean_ctor_set_uint8(v___x_2638_, sizeof(void*)*4, v___x_2635_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_circle(lean_object* v_Msg_2639_, lean_object* v_attrs_2640_, lean_object* v_children_2641_){
_start:
{
lean_object* v___x_2642_; 
v___x_2642_ = l_Lasm_UI_Svg_circle___redArg(v_attrs_2640_, v_children_2641_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_ellipse___redArg(lean_object* v_attrs_2643_, lean_object* v_children_2644_){
_start:
{
uint8_t v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; 
v___x_2645_ = 1;
v___x_2646_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__44));
v___x_2647_ = lean_box(0);
v___x_2648_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2648_, 0, v___x_2646_);
lean_ctor_set(v___x_2648_, 1, v___x_2647_);
lean_ctor_set(v___x_2648_, 2, v_attrs_2643_);
lean_ctor_set(v___x_2648_, 3, v_children_2644_);
lean_ctor_set_uint8(v___x_2648_, sizeof(void*)*4, v___x_2645_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_ellipse(lean_object* v_Msg_2649_, lean_object* v_attrs_2650_, lean_object* v_children_2651_){
_start:
{
lean_object* v___x_2652_; 
v___x_2652_ = l_Lasm_UI_Svg_ellipse___redArg(v_attrs_2650_, v_children_2651_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_line___redArg(lean_object* v_attrs_2653_, lean_object* v_children_2654_){
_start:
{
uint8_t v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; 
v___x_2655_ = 1;
v___x_2656_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__45));
v___x_2657_ = lean_box(0);
v___x_2658_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2658_, 0, v___x_2656_);
lean_ctor_set(v___x_2658_, 1, v___x_2657_);
lean_ctor_set(v___x_2658_, 2, v_attrs_2653_);
lean_ctor_set(v___x_2658_, 3, v_children_2654_);
lean_ctor_set_uint8(v___x_2658_, sizeof(void*)*4, v___x_2655_);
return v___x_2658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_line(lean_object* v_Msg_2659_, lean_object* v_attrs_2660_, lean_object* v_children_2661_){
_start:
{
lean_object* v___x_2662_; 
v___x_2662_ = l_Lasm_UI_Svg_line___redArg(v_attrs_2660_, v_children_2661_);
return v___x_2662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_polyline___redArg(lean_object* v_attrs_2663_, lean_object* v_children_2664_){
_start:
{
uint8_t v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___x_2665_ = 1;
v___x_2666_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__46));
v___x_2667_ = lean_box(0);
v___x_2668_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2668_, 0, v___x_2666_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
lean_ctor_set(v___x_2668_, 2, v_attrs_2663_);
lean_ctor_set(v___x_2668_, 3, v_children_2664_);
lean_ctor_set_uint8(v___x_2668_, sizeof(void*)*4, v___x_2665_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_polyline(lean_object* v_Msg_2669_, lean_object* v_attrs_2670_, lean_object* v_children_2671_){
_start:
{
lean_object* v___x_2672_; 
v___x_2672_ = l_Lasm_UI_Svg_polyline___redArg(v_attrs_2670_, v_children_2671_);
return v___x_2672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_polygon___redArg(lean_object* v_attrs_2673_, lean_object* v_children_2674_){
_start:
{
uint8_t v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2675_ = 1;
v___x_2676_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__47));
v___x_2677_ = lean_box(0);
v___x_2678_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2678_, 0, v___x_2676_);
lean_ctor_set(v___x_2678_, 1, v___x_2677_);
lean_ctor_set(v___x_2678_, 2, v_attrs_2673_);
lean_ctor_set(v___x_2678_, 3, v_children_2674_);
lean_ctor_set_uint8(v___x_2678_, sizeof(void*)*4, v___x_2675_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_polygon(lean_object* v_Msg_2679_, lean_object* v_attrs_2680_, lean_object* v_children_2681_){
_start:
{
lean_object* v___x_2682_; 
v___x_2682_ = l_Lasm_UI_Svg_polygon___redArg(v_attrs_2680_, v_children_2681_);
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_text___00__redArg(lean_object* v_attrs_2683_, lean_object* v_children_2684_){
_start:
{
uint8_t v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2685_ = 1;
v___x_2686_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__35));
v___x_2687_ = lean_box(0);
v___x_2688_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2688_, 0, v___x_2686_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
lean_ctor_set(v___x_2688_, 2, v_attrs_2683_);
lean_ctor_set(v___x_2688_, 3, v_children_2684_);
lean_ctor_set_uint8(v___x_2688_, sizeof(void*)*4, v___x_2685_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_text__(lean_object* v_Msg_2689_, lean_object* v_attrs_2690_, lean_object* v_children_2691_){
_start:
{
lean_object* v___x_2692_; 
v___x_2692_ = l_Lasm_UI_Svg_text___00__redArg(v_attrs_2690_, v_children_2691_);
return v___x_2692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_tspan___redArg(lean_object* v_attrs_2693_, lean_object* v_children_2694_){
_start:
{
uint8_t v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
v___x_2695_ = 1;
v___x_2696_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__36));
v___x_2697_ = lean_box(0);
v___x_2698_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2698_, 0, v___x_2696_);
lean_ctor_set(v___x_2698_, 1, v___x_2697_);
lean_ctor_set(v___x_2698_, 2, v_attrs_2693_);
lean_ctor_set(v___x_2698_, 3, v_children_2694_);
lean_ctor_set_uint8(v___x_2698_, sizeof(void*)*4, v___x_2695_);
return v___x_2698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_tspan(lean_object* v_Msg_2699_, lean_object* v_attrs_2700_, lean_object* v_children_2701_){
_start:
{
lean_object* v___x_2702_; 
v___x_2702_ = l_Lasm_UI_Svg_tspan___redArg(v_attrs_2700_, v_children_2701_);
return v___x_2702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_textPath___redArg(lean_object* v_attrs_2703_, lean_object* v_children_2704_){
_start:
{
uint8_t v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2705_ = 1;
v___x_2706_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__37));
v___x_2707_ = lean_box(0);
v___x_2708_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2708_, 0, v___x_2706_);
lean_ctor_set(v___x_2708_, 1, v___x_2707_);
lean_ctor_set(v___x_2708_, 2, v_attrs_2703_);
lean_ctor_set(v___x_2708_, 3, v_children_2704_);
lean_ctor_set_uint8(v___x_2708_, sizeof(void*)*4, v___x_2705_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_textPath(lean_object* v_Msg_2709_, lean_object* v_attrs_2710_, lean_object* v_children_2711_){
_start:
{
lean_object* v___x_2712_; 
v___x_2712_ = l_Lasm_UI_Svg_textPath___redArg(v_attrs_2710_, v_children_2711_);
return v___x_2712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_marker___redArg(lean_object* v_attrs_2713_, lean_object* v_children_2714_){
_start:
{
uint8_t v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2715_ = 1;
v___x_2716_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__38));
v___x_2717_ = lean_box(0);
v___x_2718_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2718_, 0, v___x_2716_);
lean_ctor_set(v___x_2718_, 1, v___x_2717_);
lean_ctor_set(v___x_2718_, 2, v_attrs_2713_);
lean_ctor_set(v___x_2718_, 3, v_children_2714_);
lean_ctor_set_uint8(v___x_2718_, sizeof(void*)*4, v___x_2715_);
return v___x_2718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_marker(lean_object* v_Msg_2719_, lean_object* v_attrs_2720_, lean_object* v_children_2721_){
_start:
{
lean_object* v___x_2722_; 
v___x_2722_ = l_Lasm_UI_Svg_marker___redArg(v_attrs_2720_, v_children_2721_);
return v___x_2722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_pattern___redArg(lean_object* v_attrs_2723_, lean_object* v_children_2724_){
_start:
{
uint8_t v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2725_ = 1;
v___x_2726_ = ((lean_object*)(l_Lasm_UI_pattern___redArg___closed__0));
v___x_2727_ = lean_box(0);
v___x_2728_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2728_, 0, v___x_2726_);
lean_ctor_set(v___x_2728_, 1, v___x_2727_);
lean_ctor_set(v___x_2728_, 2, v_attrs_2723_);
lean_ctor_set(v___x_2728_, 3, v_children_2724_);
lean_ctor_set_uint8(v___x_2728_, sizeof(void*)*4, v___x_2725_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_pattern(lean_object* v_Msg_2729_, lean_object* v_attrs_2730_, lean_object* v_children_2731_){
_start:
{
lean_object* v___x_2732_; 
v___x_2732_ = l_Lasm_UI_Svg_pattern___redArg(v_attrs_2730_, v_children_2731_);
return v___x_2732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_clipPath___redArg(lean_object* v_attrs_2733_, lean_object* v_children_2734_){
_start:
{
uint8_t v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2735_ = 1;
v___x_2736_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__27));
v___x_2737_ = lean_box(0);
v___x_2738_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2738_, 0, v___x_2736_);
lean_ctor_set(v___x_2738_, 1, v___x_2737_);
lean_ctor_set(v___x_2738_, 2, v_attrs_2733_);
lean_ctor_set(v___x_2738_, 3, v_children_2734_);
lean_ctor_set_uint8(v___x_2738_, sizeof(void*)*4, v___x_2735_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_clipPath(lean_object* v_Msg_2739_, lean_object* v_attrs_2740_, lean_object* v_children_2741_){
_start:
{
lean_object* v___x_2742_; 
v___x_2742_ = l_Lasm_UI_Svg_clipPath___redArg(v_attrs_2740_, v_children_2741_);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_mask___redArg(lean_object* v_attrs_2743_, lean_object* v_children_2744_){
_start:
{
uint8_t v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2745_ = 1;
v___x_2746_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__28));
v___x_2747_ = lean_box(0);
v___x_2748_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2748_, 0, v___x_2746_);
lean_ctor_set(v___x_2748_, 1, v___x_2747_);
lean_ctor_set(v___x_2748_, 2, v_attrs_2743_);
lean_ctor_set(v___x_2748_, 3, v_children_2744_);
lean_ctor_set_uint8(v___x_2748_, sizeof(void*)*4, v___x_2745_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_mask(lean_object* v_Msg_2749_, lean_object* v_attrs_2750_, lean_object* v_children_2751_){
_start:
{
lean_object* v___x_2752_; 
v___x_2752_ = l_Lasm_UI_Svg_mask___redArg(v_attrs_2750_, v_children_2751_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_linearGradient___redArg(lean_object* v_attrs_2753_, lean_object* v_children_2754_){
_start:
{
uint8_t v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
v___x_2755_ = 1;
v___x_2756_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__29));
v___x_2757_ = lean_box(0);
v___x_2758_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2758_, 0, v___x_2756_);
lean_ctor_set(v___x_2758_, 1, v___x_2757_);
lean_ctor_set(v___x_2758_, 2, v_attrs_2753_);
lean_ctor_set(v___x_2758_, 3, v_children_2754_);
lean_ctor_set_uint8(v___x_2758_, sizeof(void*)*4, v___x_2755_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_linearGradient(lean_object* v_Msg_2759_, lean_object* v_attrs_2760_, lean_object* v_children_2761_){
_start:
{
lean_object* v___x_2762_; 
v___x_2762_ = l_Lasm_UI_Svg_linearGradient___redArg(v_attrs_2760_, v_children_2761_);
return v___x_2762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_radialGradient___redArg(lean_object* v_attrs_2763_, lean_object* v_children_2764_){
_start:
{
uint8_t v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2765_ = 1;
v___x_2766_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__30));
v___x_2767_ = lean_box(0);
v___x_2768_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2768_, 0, v___x_2766_);
lean_ctor_set(v___x_2768_, 1, v___x_2767_);
lean_ctor_set(v___x_2768_, 2, v_attrs_2763_);
lean_ctor_set(v___x_2768_, 3, v_children_2764_);
lean_ctor_set_uint8(v___x_2768_, sizeof(void*)*4, v___x_2765_);
return v___x_2768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_radialGradient(lean_object* v_Msg_2769_, lean_object* v_attrs_2770_, lean_object* v_children_2771_){
_start:
{
lean_object* v___x_2772_; 
v___x_2772_ = l_Lasm_UI_Svg_radialGradient___redArg(v_attrs_2770_, v_children_2771_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_stop___00__redArg(lean_object* v_attrs_2773_, lean_object* v_children_2774_){
_start:
{
uint8_t v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2775_ = 1;
v___x_2776_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__17));
v___x_2777_ = lean_box(0);
v___x_2778_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2778_, 0, v___x_2776_);
lean_ctor_set(v___x_2778_, 1, v___x_2777_);
lean_ctor_set(v___x_2778_, 2, v_attrs_2773_);
lean_ctor_set(v___x_2778_, 3, v_children_2774_);
lean_ctor_set_uint8(v___x_2778_, sizeof(void*)*4, v___x_2775_);
return v___x_2778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_stop__(lean_object* v_Msg_2779_, lean_object* v_attrs_2780_, lean_object* v_children_2781_){
_start:
{
lean_object* v___x_2782_; 
v___x_2782_ = l_Lasm_UI_Svg_stop___00__redArg(v_attrs_2780_, v_children_2781_);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_filter___00__redArg(lean_object* v_attrs_2783_, lean_object* v_children_2784_){
_start:
{
uint8_t v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2785_ = 1;
v___x_2786_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__18));
v___x_2787_ = lean_box(0);
v___x_2788_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2788_, 0, v___x_2786_);
lean_ctor_set(v___x_2788_, 1, v___x_2787_);
lean_ctor_set(v___x_2788_, 2, v_attrs_2783_);
lean_ctor_set(v___x_2788_, 3, v_children_2784_);
lean_ctor_set_uint8(v___x_2788_, sizeof(void*)*4, v___x_2785_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_filter__(lean_object* v_Msg_2789_, lean_object* v_attrs_2790_, lean_object* v_children_2791_){
_start:
{
lean_object* v___x_2792_; 
v___x_2792_ = l_Lasm_UI_Svg_filter___00__redArg(v_attrs_2790_, v_children_2791_);
return v___x_2792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feGaussianBlur___redArg(lean_object* v_attrs_2793_, lean_object* v_children_2794_){
_start:
{
uint8_t v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2795_ = 1;
v___x_2796_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__19));
v___x_2797_ = lean_box(0);
v___x_2798_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2798_, 0, v___x_2796_);
lean_ctor_set(v___x_2798_, 1, v___x_2797_);
lean_ctor_set(v___x_2798_, 2, v_attrs_2793_);
lean_ctor_set(v___x_2798_, 3, v_children_2794_);
lean_ctor_set_uint8(v___x_2798_, sizeof(void*)*4, v___x_2795_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feGaussianBlur(lean_object* v_Msg_2799_, lean_object* v_attrs_2800_, lean_object* v_children_2801_){
_start:
{
lean_object* v___x_2802_; 
v___x_2802_ = l_Lasm_UI_Svg_feGaussianBlur___redArg(v_attrs_2800_, v_children_2801_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feOffset___redArg(lean_object* v_attrs_2803_, lean_object* v_children_2804_){
_start:
{
uint8_t v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2805_ = 1;
v___x_2806_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__20));
v___x_2807_ = lean_box(0);
v___x_2808_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2808_, 0, v___x_2806_);
lean_ctor_set(v___x_2808_, 1, v___x_2807_);
lean_ctor_set(v___x_2808_, 2, v_attrs_2803_);
lean_ctor_set(v___x_2808_, 3, v_children_2804_);
lean_ctor_set_uint8(v___x_2808_, sizeof(void*)*4, v___x_2805_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feOffset(lean_object* v_Msg_2809_, lean_object* v_attrs_2810_, lean_object* v_children_2811_){
_start:
{
lean_object* v___x_2812_; 
v___x_2812_ = l_Lasm_UI_Svg_feOffset___redArg(v_attrs_2810_, v_children_2811_);
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feBlend___redArg(lean_object* v_attrs_2813_, lean_object* v_children_2814_){
_start:
{
uint8_t v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2815_ = 1;
v___x_2816_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__21));
v___x_2817_ = lean_box(0);
v___x_2818_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2818_, 0, v___x_2816_);
lean_ctor_set(v___x_2818_, 1, v___x_2817_);
lean_ctor_set(v___x_2818_, 2, v_attrs_2813_);
lean_ctor_set(v___x_2818_, 3, v_children_2814_);
lean_ctor_set_uint8(v___x_2818_, sizeof(void*)*4, v___x_2815_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feBlend(lean_object* v_Msg_2819_, lean_object* v_attrs_2820_, lean_object* v_children_2821_){
_start:
{
lean_object* v___x_2822_; 
v___x_2822_ = l_Lasm_UI_Svg_feBlend___redArg(v_attrs_2820_, v_children_2821_);
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feColorMatrix___redArg(lean_object* v_attrs_2823_, lean_object* v_children_2824_){
_start:
{
uint8_t v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2825_ = 1;
v___x_2826_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__9));
v___x_2827_ = lean_box(0);
v___x_2828_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2828_, 0, v___x_2826_);
lean_ctor_set(v___x_2828_, 1, v___x_2827_);
lean_ctor_set(v___x_2828_, 2, v_attrs_2823_);
lean_ctor_set(v___x_2828_, 3, v_children_2824_);
lean_ctor_set_uint8(v___x_2828_, sizeof(void*)*4, v___x_2825_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feColorMatrix(lean_object* v_Msg_2829_, lean_object* v_attrs_2830_, lean_object* v_children_2831_){
_start:
{
lean_object* v___x_2832_; 
v___x_2832_ = l_Lasm_UI_Svg_feColorMatrix___redArg(v_attrs_2830_, v_children_2831_);
return v___x_2832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feMerge___redArg(lean_object* v_attrs_2833_, lean_object* v_children_2834_){
_start:
{
uint8_t v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2835_ = 1;
v___x_2836_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__10));
v___x_2837_ = lean_box(0);
v___x_2838_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2838_, 0, v___x_2836_);
lean_ctor_set(v___x_2838_, 1, v___x_2837_);
lean_ctor_set(v___x_2838_, 2, v_attrs_2833_);
lean_ctor_set(v___x_2838_, 3, v_children_2834_);
lean_ctor_set_uint8(v___x_2838_, sizeof(void*)*4, v___x_2835_);
return v___x_2838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feMerge(lean_object* v_Msg_2839_, lean_object* v_attrs_2840_, lean_object* v_children_2841_){
_start:
{
lean_object* v___x_2842_; 
v___x_2842_ = l_Lasm_UI_Svg_feMerge___redArg(v_attrs_2840_, v_children_2841_);
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feMergeNode___redArg(lean_object* v_attrs_2843_, lean_object* v_children_2844_){
_start:
{
uint8_t v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2845_ = 1;
v___x_2846_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__11));
v___x_2847_ = lean_box(0);
v___x_2848_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2848_, 0, v___x_2846_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
lean_ctor_set(v___x_2848_, 2, v_attrs_2843_);
lean_ctor_set(v___x_2848_, 3, v_children_2844_);
lean_ctor_set_uint8(v___x_2848_, sizeof(void*)*4, v___x_2845_);
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_feMergeNode(lean_object* v_Msg_2849_, lean_object* v_attrs_2850_, lean_object* v_children_2851_){
_start:
{
lean_object* v___x_2852_; 
v___x_2852_ = l_Lasm_UI_Svg_feMergeNode___redArg(v_attrs_2850_, v_children_2851_);
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_foreignObject___redArg(lean_object* v_attrs_2853_, lean_object* v_children_2854_){
_start:
{
uint8_t v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2855_ = 1;
v___x_2856_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__12));
v___x_2857_ = lean_box(0);
v___x_2858_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2858_, 0, v___x_2856_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
lean_ctor_set(v___x_2858_, 2, v_attrs_2853_);
lean_ctor_set(v___x_2858_, 3, v_children_2854_);
lean_ctor_set_uint8(v___x_2858_, sizeof(void*)*4, v___x_2855_);
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_foreignObject(lean_object* v_Msg_2859_, lean_object* v_attrs_2860_, lean_object* v_children_2861_){
_start:
{
lean_object* v___x_2862_; 
v___x_2862_ = l_Lasm_UI_Svg_foreignObject___redArg(v_attrs_2860_, v_children_2861_);
return v___x_2862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_image___redArg(lean_object* v_attrs_2863_, lean_object* v_children_2864_){
_start:
{
uint8_t v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2865_ = 1;
v___x_2866_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__0));
v___x_2867_ = lean_box(0);
v___x_2868_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2868_, 0, v___x_2866_);
lean_ctor_set(v___x_2868_, 1, v___x_2867_);
lean_ctor_set(v___x_2868_, 2, v_attrs_2863_);
lean_ctor_set(v___x_2868_, 3, v_children_2864_);
lean_ctor_set_uint8(v___x_2868_, sizeof(void*)*4, v___x_2865_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_image(lean_object* v_Msg_2869_, lean_object* v_attrs_2870_, lean_object* v_children_2871_){
_start:
{
lean_object* v___x_2872_; 
v___x_2872_ = l_Lasm_UI_Svg_image___redArg(v_attrs_2870_, v_children_2871_);
return v___x_2872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_title___00__redArg(lean_object* v_attrs_2873_, lean_object* v_children_2874_){
_start:
{
uint8_t v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; 
v___x_2875_ = 1;
v___x_2876_ = ((lean_object*)(l_Lasm_UI_htmlTags___closed__20));
v___x_2877_ = lean_box(0);
v___x_2878_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2878_, 0, v___x_2876_);
lean_ctor_set(v___x_2878_, 1, v___x_2877_);
lean_ctor_set(v___x_2878_, 2, v_attrs_2873_);
lean_ctor_set(v___x_2878_, 3, v_children_2874_);
lean_ctor_set_uint8(v___x_2878_, sizeof(void*)*4, v___x_2875_);
return v___x_2878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_title__(lean_object* v_Msg_2879_, lean_object* v_attrs_2880_, lean_object* v_children_2881_){
_start:
{
lean_object* v___x_2882_; 
v___x_2882_ = l_Lasm_UI_Svg_title___00__redArg(v_attrs_2880_, v_children_2881_);
return v___x_2882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_desc___redArg(lean_object* v_attrs_2883_, lean_object* v_children_2884_){
_start:
{
uint8_t v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2885_ = 1;
v___x_2886_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__1));
v___x_2887_ = lean_box(0);
v___x_2888_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2888_, 0, v___x_2886_);
lean_ctor_set(v___x_2888_, 1, v___x_2887_);
lean_ctor_set(v___x_2888_, 2, v_attrs_2883_);
lean_ctor_set(v___x_2888_, 3, v_children_2884_);
lean_ctor_set_uint8(v___x_2888_, sizeof(void*)*4, v___x_2885_);
return v___x_2888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_desc(lean_object* v_Msg_2889_, lean_object* v_attrs_2890_, lean_object* v_children_2891_){
_start:
{
lean_object* v___x_2892_; 
v___x_2892_ = l_Lasm_UI_Svg_desc___redArg(v_attrs_2890_, v_children_2891_);
return v___x_2892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_animate___redArg(lean_object* v_attrs_2893_, lean_object* v_children_2894_){
_start:
{
uint8_t v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
v___x_2895_ = 1;
v___x_2896_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__2));
v___x_2897_ = lean_box(0);
v___x_2898_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2898_, 0, v___x_2896_);
lean_ctor_set(v___x_2898_, 1, v___x_2897_);
lean_ctor_set(v___x_2898_, 2, v_attrs_2893_);
lean_ctor_set(v___x_2898_, 3, v_children_2894_);
lean_ctor_set_uint8(v___x_2898_, sizeof(void*)*4, v___x_2895_);
return v___x_2898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_animate(lean_object* v_Msg_2899_, lean_object* v_attrs_2900_, lean_object* v_children_2901_){
_start:
{
lean_object* v___x_2902_; 
v___x_2902_ = l_Lasm_UI_Svg_animate___redArg(v_attrs_2900_, v_children_2901_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_animateTransform___redArg(lean_object* v_attrs_2903_, lean_object* v_children_2904_){
_start:
{
uint8_t v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2905_ = 1;
v___x_2906_ = ((lean_object*)(l_Lasm_UI_Svg_tags___closed__3));
v___x_2907_ = lean_box(0);
v___x_2908_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_2908_, 0, v___x_2906_);
lean_ctor_set(v___x_2908_, 1, v___x_2907_);
lean_ctor_set(v___x_2908_, 2, v_attrs_2903_);
lean_ctor_set(v___x_2908_, 3, v_children_2904_);
lean_ctor_set_uint8(v___x_2908_, sizeof(void*)*4, v___x_2905_);
return v___x_2908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_animateTransform(lean_object* v_Msg_2909_, lean_object* v_attrs_2910_, lean_object* v_children_2911_){
_start:
{
lean_object* v___x_2912_; 
v___x_2912_ = l_Lasm_UI_Svg_animateTransform___redArg(v_attrs_2910_, v_children_2911_);
return v___x_2912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_viewBox___redArg(lean_object* v_v_2914_){
_start:
{
lean_object* v___x_2915_; lean_object* v___x_2916_; 
v___x_2915_ = ((lean_object*)(l_Lasm_UI_Svg_viewBox___redArg___closed__0));
v___x_2916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2915_);
lean_ctor_set(v___x_2916_, 1, v_v_2914_);
return v___x_2916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_viewBox(lean_object* v_Msg_2917_, lean_object* v_v_2918_){
_start:
{
lean_object* v___x_2919_; 
v___x_2919_ = l_Lasm_UI_Svg_viewBox___redArg(v_v_2918_);
return v___x_2919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_d___redArg(lean_object* v_v_2921_){
_start:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2922_ = ((lean_object*)(l_Lasm_UI_Svg_d___redArg___closed__0));
v___x_2923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2922_);
lean_ctor_set(v___x_2923_, 1, v_v_2921_);
return v___x_2923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_d(lean_object* v_Msg_2924_, lean_object* v_v_2925_){
_start:
{
lean_object* v___x_2926_; 
v___x_2926_ = l_Lasm_UI_Svg_d___redArg(v_v_2925_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fill___redArg(lean_object* v_v_2928_){
_start:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; 
v___x_2929_ = ((lean_object*)(l_Lasm_UI_Svg_fill___redArg___closed__0));
v___x_2930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2930_, 0, v___x_2929_);
lean_ctor_set(v___x_2930_, 1, v_v_2928_);
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fill(lean_object* v_Msg_2931_, lean_object* v_v_2932_){
_start:
{
lean_object* v___x_2933_; 
v___x_2933_ = l_Lasm_UI_Svg_fill___redArg(v_v_2932_);
return v___x_2933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_stroke___redArg(lean_object* v_v_2935_){
_start:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2936_ = ((lean_object*)(l_Lasm_UI_Svg_stroke___redArg___closed__0));
v___x_2937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2936_);
lean_ctor_set(v___x_2937_, 1, v_v_2935_);
return v___x_2937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_stroke(lean_object* v_Msg_2938_, lean_object* v_v_2939_){
_start:
{
lean_object* v___x_2940_; 
v___x_2940_ = l_Lasm_UI_Svg_stroke___redArg(v_v_2939_);
return v___x_2940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_cx___redArg(lean_object* v_v_2942_){
_start:
{
lean_object* v___x_2943_; lean_object* v___x_2944_; 
v___x_2943_ = ((lean_object*)(l_Lasm_UI_Svg_cx___redArg___closed__0));
v___x_2944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2943_);
lean_ctor_set(v___x_2944_, 1, v_v_2942_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_cx(lean_object* v_Msg_2945_, lean_object* v_v_2946_){
_start:
{
lean_object* v___x_2947_; 
v___x_2947_ = l_Lasm_UI_Svg_cx___redArg(v_v_2946_);
return v___x_2947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_cy___redArg(lean_object* v_v_2949_){
_start:
{
lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2950_ = ((lean_object*)(l_Lasm_UI_Svg_cy___redArg___closed__0));
v___x_2951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
lean_ctor_set(v___x_2951_, 1, v_v_2949_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_cy(lean_object* v_Msg_2952_, lean_object* v_v_2953_){
_start:
{
lean_object* v___x_2954_; 
v___x_2954_ = l_Lasm_UI_Svg_cy___redArg(v_v_2953_);
return v___x_2954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_r___redArg(lean_object* v_v_2956_){
_start:
{
lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2957_ = ((lean_object*)(l_Lasm_UI_Svg_r___redArg___closed__0));
v___x_2958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2958_, 0, v___x_2957_);
lean_ctor_set(v___x_2958_, 1, v_v_2956_);
return v___x_2958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_r(lean_object* v_Msg_2959_, lean_object* v_v_2960_){
_start:
{
lean_object* v___x_2961_; 
v___x_2961_ = l_Lasm_UI_Svg_r___redArg(v_v_2960_);
return v___x_2961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_rx___redArg(lean_object* v_v_2963_){
_start:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2964_ = ((lean_object*)(l_Lasm_UI_Svg_rx___redArg___closed__0));
v___x_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
lean_ctor_set(v___x_2965_, 1, v_v_2963_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_rx(lean_object* v_Msg_2966_, lean_object* v_v_2967_){
_start:
{
lean_object* v___x_2968_; 
v___x_2968_ = l_Lasm_UI_Svg_rx___redArg(v_v_2967_);
return v___x_2968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_ry___redArg(lean_object* v_v_2970_){
_start:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = ((lean_object*)(l_Lasm_UI_Svg_ry___redArg___closed__0));
v___x_2972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2971_);
lean_ctor_set(v___x_2972_, 1, v_v_2970_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_ry(lean_object* v_Msg_2973_, lean_object* v_v_2974_){
_start:
{
lean_object* v___x_2975_; 
v___x_2975_ = l_Lasm_UI_Svg_ry___redArg(v_v_2974_);
return v___x_2975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x___redArg(lean_object* v_v_2977_){
_start:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2978_ = ((lean_object*)(l_Lasm_UI_Svg_x___redArg___closed__0));
v___x_2979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2978_);
lean_ctor_set(v___x_2979_, 1, v_v_2977_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x(lean_object* v_Msg_2980_, lean_object* v_v_2981_){
_start:
{
lean_object* v___x_2982_; 
v___x_2982_ = l_Lasm_UI_Svg_x___redArg(v_v_2981_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y___redArg(lean_object* v_v_2984_){
_start:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2985_ = ((lean_object*)(l_Lasm_UI_Svg_y___redArg___closed__0));
v___x_2986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2985_);
lean_ctor_set(v___x_2986_, 1, v_v_2984_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y(lean_object* v_Msg_2987_, lean_object* v_v_2988_){
_start:
{
lean_object* v___x_2989_; 
v___x_2989_ = l_Lasm_UI_Svg_y___redArg(v_v_2988_);
return v___x_2989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x1___redArg(lean_object* v_v_2991_){
_start:
{
lean_object* v___x_2992_; lean_object* v___x_2993_; 
v___x_2992_ = ((lean_object*)(l_Lasm_UI_Svg_x1___redArg___closed__0));
v___x_2993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2993_, 0, v___x_2992_);
lean_ctor_set(v___x_2993_, 1, v_v_2991_);
return v___x_2993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x1(lean_object* v_Msg_2994_, lean_object* v_v_2995_){
_start:
{
lean_object* v___x_2996_; 
v___x_2996_ = l_Lasm_UI_Svg_x1___redArg(v_v_2995_);
return v___x_2996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y1___redArg(lean_object* v_v_2998_){
_start:
{
lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2999_ = ((lean_object*)(l_Lasm_UI_Svg_y1___redArg___closed__0));
v___x_3000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3000_, 0, v___x_2999_);
lean_ctor_set(v___x_3000_, 1, v_v_2998_);
return v___x_3000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y1(lean_object* v_Msg_3001_, lean_object* v_v_3002_){
_start:
{
lean_object* v___x_3003_; 
v___x_3003_ = l_Lasm_UI_Svg_y1___redArg(v_v_3002_);
return v___x_3003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x2___redArg(lean_object* v_v_3005_){
_start:
{
lean_object* v___x_3006_; lean_object* v___x_3007_; 
v___x_3006_ = ((lean_object*)(l_Lasm_UI_Svg_x2___redArg___closed__0));
v___x_3007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3006_);
lean_ctor_set(v___x_3007_, 1, v_v_3005_);
return v___x_3007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_x2(lean_object* v_Msg_3008_, lean_object* v_v_3009_){
_start:
{
lean_object* v___x_3010_; 
v___x_3010_ = l_Lasm_UI_Svg_x2___redArg(v_v_3009_);
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y2___redArg(lean_object* v_v_3012_){
_start:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3013_ = ((lean_object*)(l_Lasm_UI_Svg_y2___redArg___closed__0));
v___x_3014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3013_);
lean_ctor_set(v___x_3014_, 1, v_v_3012_);
return v___x_3014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_y2(lean_object* v_Msg_3015_, lean_object* v_v_3016_){
_start:
{
lean_object* v___x_3017_; 
v___x_3017_ = l_Lasm_UI_Svg_y2___redArg(v_v_3016_);
return v___x_3017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_points___redArg(lean_object* v_v_3019_){
_start:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; 
v___x_3020_ = ((lean_object*)(l_Lasm_UI_Svg_points___redArg___closed__0));
v___x_3021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3020_);
lean_ctor_set(v___x_3021_, 1, v_v_3019_);
return v___x_3021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_points(lean_object* v_Msg_3022_, lean_object* v_v_3023_){
_start:
{
lean_object* v___x_3024_; 
v___x_3024_ = l_Lasm_UI_Svg_points___redArg(v_v_3023_);
return v___x_3024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_transform___redArg(lean_object* v_v_3026_){
_start:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3027_ = ((lean_object*)(l_Lasm_UI_Svg_transform___redArg___closed__0));
v___x_3028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3027_);
lean_ctor_set(v___x_3028_, 1, v_v_3026_);
return v___x_3028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_transform(lean_object* v_Msg_3029_, lean_object* v_v_3030_){
_start:
{
lean_object* v___x_3031_; 
v___x_3031_ = l_Lasm_UI_Svg_transform___redArg(v_v_3030_);
return v___x_3031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_opacity___redArg(lean_object* v_v_3033_){
_start:
{
lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3034_ = ((lean_object*)(l_Lasm_UI_Svg_opacity___redArg___closed__0));
v___x_3035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3034_);
lean_ctor_set(v___x_3035_, 1, v_v_3033_);
return v___x_3035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_opacity(lean_object* v_Msg_3036_, lean_object* v_v_3037_){
_start:
{
lean_object* v___x_3038_; 
v___x_3038_ = l_Lasm_UI_Svg_opacity___redArg(v_v_3037_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_offset___redArg(lean_object* v_v_3040_){
_start:
{
lean_object* v___x_3041_; lean_object* v___x_3042_; 
v___x_3041_ = ((lean_object*)(l_Lasm_UI_Svg_offset___redArg___closed__0));
v___x_3042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3042_, 0, v___x_3041_);
lean_ctor_set(v___x_3042_, 1, v_v_3040_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_offset(lean_object* v_Msg_3043_, lean_object* v_v_3044_){
_start:
{
lean_object* v___x_3045_; 
v___x_3045_ = l_Lasm_UI_Svg_offset___redArg(v_v_3044_);
return v___x_3045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeWidth___redArg(lean_object* v_v_3047_){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3048_ = ((lean_object*)(l_Lasm_UI_Svg_strokeWidth___redArg___closed__0));
v___x_3049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3049_, 0, v___x_3048_);
lean_ctor_set(v___x_3049_, 1, v_v_3047_);
return v___x_3049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeWidth(lean_object* v_Msg_3050_, lean_object* v_v_3051_){
_start:
{
lean_object* v___x_3052_; 
v___x_3052_ = l_Lasm_UI_Svg_strokeWidth___redArg(v_v_3051_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fillOpacity___redArg(lean_object* v_v_3054_){
_start:
{
lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3055_ = ((lean_object*)(l_Lasm_UI_Svg_fillOpacity___redArg___closed__0));
v___x_3056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3055_);
lean_ctor_set(v___x_3056_, 1, v_v_3054_);
return v___x_3056_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fillOpacity(lean_object* v_Msg_3057_, lean_object* v_v_3058_){
_start:
{
lean_object* v___x_3059_; 
v___x_3059_ = l_Lasm_UI_Svg_fillOpacity___redArg(v_v_3058_);
return v___x_3059_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeLinecap___redArg(lean_object* v_v_3061_){
_start:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3062_ = ((lean_object*)(l_Lasm_UI_Svg_strokeLinecap___redArg___closed__0));
v___x_3063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3062_);
lean_ctor_set(v___x_3063_, 1, v_v_3061_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeLinecap(lean_object* v_Msg_3064_, lean_object* v_v_3065_){
_start:
{
lean_object* v___x_3066_; 
v___x_3066_ = l_Lasm_UI_Svg_strokeLinecap___redArg(v_v_3065_);
return v___x_3066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeDasharray___redArg(lean_object* v_v_3068_){
_start:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3069_ = ((lean_object*)(l_Lasm_UI_Svg_strokeDasharray___redArg___closed__0));
v___x_3070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3069_);
lean_ctor_set(v___x_3070_, 1, v_v_3068_);
return v___x_3070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_strokeDasharray(lean_object* v_Msg_3071_, lean_object* v_v_3072_){
_start:
{
lean_object* v___x_3073_; 
v___x_3073_ = l_Lasm_UI_Svg_strokeDasharray___redArg(v_v_3072_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_textAnchor___redArg(lean_object* v_v_3075_){
_start:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3076_ = ((lean_object*)(l_Lasm_UI_Svg_textAnchor___redArg___closed__0));
v___x_3077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3076_);
lean_ctor_set(v___x_3077_, 1, v_v_3075_);
return v___x_3077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_textAnchor(lean_object* v_Msg_3078_, lean_object* v_v_3079_){
_start:
{
lean_object* v___x_3080_; 
v___x_3080_ = l_Lasm_UI_Svg_textAnchor___redArg(v_v_3079_);
return v___x_3080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fontSize___redArg(lean_object* v_v_3082_){
_start:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; 
v___x_3083_ = ((lean_object*)(l_Lasm_UI_Svg_fontSize___redArg___closed__0));
v___x_3084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3084_, 0, v___x_3083_);
lean_ctor_set(v___x_3084_, 1, v_v_3082_);
return v___x_3084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_fontSize(lean_object* v_Msg_3085_, lean_object* v_v_3086_){
_start:
{
lean_object* v___x_3087_; 
v___x_3087_ = l_Lasm_UI_Svg_fontSize___redArg(v_v_3086_);
return v___x_3087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_width___redArg(lean_object* v_v_3088_){
_start:
{
lean_object* v___x_3089_; lean_object* v___x_3090_; 
v___x_3089_ = ((lean_object*)(l_Lasm_UI_width___redArg___closed__0));
v___x_3090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3089_);
lean_ctor_set(v___x_3090_, 1, v_v_3088_);
return v___x_3090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_width(lean_object* v_Msg_3091_, lean_object* v_v_3092_){
_start:
{
lean_object* v___x_3093_; 
v___x_3093_ = l_Lasm_UI_Svg_width___redArg(v_v_3092_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_height___redArg(lean_object* v_v_3094_){
_start:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3095_ = ((lean_object*)(l_Lasm_UI_height___redArg___closed__0));
v___x_3096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
lean_ctor_set(v___x_3096_, 1, v_v_3094_);
return v___x_3096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Svg_height(lean_object* v_Msg_3097_, lean_object* v_v_3098_){
_start:
{
lean_object* v___x_3099_; 
v___x_3099_ = l_Lasm_UI_Svg_height___redArg(v_v_3098_);
return v___x_3099_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_UI_Html(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Elements(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
