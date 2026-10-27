// Lean compiler output
// Module: Lasm.UI.Html
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_float_isnan(double);
uint8_t lean_float_isinf(double);
double round(double);
uint8_t lean_float_beq(double, double);
double lean_float_of_nat(lean_object*);
uint8_t lean_float_decLt(double, double);
uint64_t lean_float_to_uint64(double);
lean_object* lean_uint64_to_nat(uint64_t);
double lean_float_negate(double);
lean_object* lean_int_neg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Function_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Float_repr(double, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Ns_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqNs(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqNs___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_instReprNs_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lasm.UI.Ns.html"};
static const lean_object* l_Lasm_UI_instReprNs_repr___closed__0 = (const lean_object*)&l_Lasm_UI_instReprNs_repr___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instReprNs_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprNs_repr___closed__0_value)}};
static const lean_object* l_Lasm_UI_instReprNs_repr___closed__1 = (const lean_object*)&l_Lasm_UI_instReprNs_repr___closed__1_value;
static const lean_string_object l_Lasm_UI_instReprNs_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lasm.UI.Ns.svg"};
static const lean_object* l_Lasm_UI_instReprNs_repr___closed__2 = (const lean_object*)&l_Lasm_UI_instReprNs_repr___closed__2_value;
static const lean_ctor_object l_Lasm_UI_instReprNs_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprNs_repr___closed__2_value)}};
static const lean_object* l_Lasm_UI_instReprNs_repr___closed__3 = (const lean_object*)&l_Lasm_UI_instReprNs_repr___closed__3_value;
static const lean_string_object l_Lasm_UI_instReprNs_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.UI.Ns.mathml"};
static const lean_object* l_Lasm_UI_instReprNs_repr___closed__4 = (const lean_object*)&l_Lasm_UI_instReprNs_repr___closed__4_value;
static const lean_ctor_object l_Lasm_UI_instReprNs_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprNs_repr___closed__4_value)}};
static const lean_object* l_Lasm_UI_instReprNs_repr___closed__5 = (const lean_object*)&l_Lasm_UI_instReprNs_repr___closed__5_value;
static lean_once_cell_t l_Lasm_UI_instReprNs_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprNs_repr___closed__6;
static lean_once_cell_t l_Lasm_UI_instReprNs_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprNs_repr___closed__7;
LEAN_EXPORT lean_object* l_Lasm_UI_instReprNs_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprNs_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instReprNs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instReprNs_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instReprNs___closed__0 = (const lean_object*)&l_Lasm_UI_instReprNs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instReprNs = (const lean_object*)&l_Lasm_UI_instReprNs___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_UI_instInhabitedNs_default;
LEAN_EXPORT uint8_t l_Lasm_UI_instInhabitedNs;
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableNs_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableNs_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_instHashableNs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instHashableNs_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instHashableNs___closed__0 = (const lean_object*)&l_Lasm_UI_instHashableNs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instHashableNs = (const lean_object*)&l_Lasm_UI_instHashableNs___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_undefined_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_undefined_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_null_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_null_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_bool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_bool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_num_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_num_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_str_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_str_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedEvVal_default;
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedEvVal;
static const lean_string_object l_Lasm_UI_instReprEvVal_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.UI.EvVal.null"};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__0 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instReprEvVal_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__0_value)}};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__1 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__1_value;
static const lean_string_object l_Lasm_UI_instReprEvVal_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.UI.EvVal.undefined"};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__2 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__2_value;
static const lean_ctor_object l_Lasm_UI_instReprEvVal_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__2_value)}};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__3 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__3_value;
static const lean_string_object l_Lasm_UI_instReprEvVal_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.UI.EvVal.bool"};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__4 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__4_value;
static const lean_ctor_object l_Lasm_UI_instReprEvVal_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__4_value)}};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__5 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__5_value;
static const lean_ctor_object l_Lasm_UI_instReprEvVal_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__6 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__6_value;
static const lean_string_object l_Lasm_UI_instReprEvVal_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.UI.EvVal.num"};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__7 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__7_value;
static const lean_ctor_object l_Lasm_UI_instReprEvVal_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__7_value)}};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__8 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__8_value;
static const lean_ctor_object l_Lasm_UI_instReprEvVal_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__9 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__9_value;
static const lean_string_object l_Lasm_UI_instReprEvVal_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.UI.EvVal.str"};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__10 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__10_value;
static const lean_ctor_object l_Lasm_UI_instReprEvVal_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__10_value)}};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__11 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__11_value;
static const lean_ctor_object l_Lasm_UI_instReprEvVal_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__11_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprEvVal_repr___closed__12 = (const lean_object*)&l_Lasm_UI_instReprEvVal_repr___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instReprEvVal_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprEvVal_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instReprEvVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instReprEvVal_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instReprEvVal___closed__0 = (const lean_object*)&l_Lasm_UI_instReprEvVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instReprEvVal = (const lean_object*)&l_Lasm_UI_instReprEvVal___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toBool_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toBool_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toFloat_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toFloat_x3f___boxed(lean_object*);
static lean_once_cell_t l_Lasm_UI_EvVal_toInt_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_UI_EvVal_toInt_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toInt_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toInt_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_str_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_str_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_bool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_bool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqPropVal_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqPropVal_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqPropVal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqPropVal___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_instReprPropVal_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.UI.PropVal.str"};
static const lean_object* l_Lasm_UI_instReprPropVal_repr___closed__0 = (const lean_object*)&l_Lasm_UI_instReprPropVal_repr___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instReprPropVal_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprPropVal_repr___closed__0_value)}};
static const lean_object* l_Lasm_UI_instReprPropVal_repr___closed__1 = (const lean_object*)&l_Lasm_UI_instReprPropVal_repr___closed__1_value;
static const lean_ctor_object l_Lasm_UI_instReprPropVal_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprPropVal_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprPropVal_repr___closed__2 = (const lean_object*)&l_Lasm_UI_instReprPropVal_repr___closed__2_value;
static const lean_string_object l_Lasm_UI_instReprPropVal_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.UI.PropVal.bool"};
static const lean_object* l_Lasm_UI_instReprPropVal_repr___closed__3 = (const lean_object*)&l_Lasm_UI_instReprPropVal_repr___closed__3_value;
static const lean_ctor_object l_Lasm_UI_instReprPropVal_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprPropVal_repr___closed__3_value)}};
static const lean_object* l_Lasm_UI_instReprPropVal_repr___closed__4 = (const lean_object*)&l_Lasm_UI_instReprPropVal_repr___closed__4_value;
static const lean_ctor_object l_Lasm_UI_instReprPropVal_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprPropVal_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprPropVal_repr___closed__5 = (const lean_object*)&l_Lasm_UI_instReprPropVal_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instReprPropVal_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprPropVal_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instReprPropVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instReprPropVal_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instReprPropVal___closed__0 = (const lean_object*)&l_Lasm_UI_instReprPropVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instReprPropVal = (const lean_object*)&l_Lasm_UI_instReprPropVal___closed__0_value;
static const lean_string_object l_Lasm_UI_instInhabitedPropVal_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_UI_instInhabitedPropVal_default___closed__0 = (const lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instInhabitedPropVal_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__0_value)}};
static const lean_object* l_Lasm_UI_instInhabitedPropVal_default___closed__1 = (const lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedPropVal_default = (const lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedPropVal = (const lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__1_value;
LEAN_EXPORT uint64_t l_Lasm_UI_instHashablePropVal_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instHashablePropVal_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_instHashablePropVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instHashablePropVal_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instHashablePropVal___closed__0 = (const lean_object*)&l_Lasm_UI_instHashablePropVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instHashablePropVal = (const lean_object*)&l_Lasm_UI_instHashablePropVal___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_Decoder_fail___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Decoder_fail___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Decoder_fail___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_fail___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_fail___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Decoder_fail___redArg___closed__0_value)}};
static const lean_object* l_Lasm_UI_Decoder_fail___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_fail___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lasm_UI_Decoder_fail___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_fail___closed__0;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_field___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_field___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_field(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_Decoder_map2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Decoder_map2___redArg___lam__0___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_map2___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filterMap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filterMap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filterMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filter___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instFunctor___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instFunctor___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_Decoder_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Decoder_instFunctor___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Decoder_instFunctor___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_instFunctor___closed__0_value;
static const lean_closure_object l_Lasm_UI_Decoder_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Decoder_map, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Decoder_instFunctor___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_instFunctor___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Decoder_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_instFunctor___closed__1_value),((lean_object*)&l_Lasm_UI_Decoder_instFunctor___closed__0_value)}};
static const lean_object* l_Lasm_UI_Decoder_instFunctor___closed__2 = (const lean_object*)&l_Lasm_UI_Decoder_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Decoder_instFunctor = (const lean_object*)&l_Lasm_UI_Decoder_instFunctor___closed__2_value;
static const lean_closure_object l_Lasm_UI_Decoder_instPure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Decoder_succeed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Decoder_instPure___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_instPure___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Decoder_instPure = (const lean_object*)&l_Lasm_UI_Decoder_instPure___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instSeq___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instSeq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_Decoder_instSeq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Decoder_instSeq___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Decoder_instSeq___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_instSeq___closed__0_value;
static const lean_closure_object l_Lasm_UI_Decoder_instSeq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Decoder_instSeq___lam__1, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_instSeq___closed__0_value)} };
static const lean_object* l_Lasm_UI_Decoder_instSeq___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_instSeq___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Decoder_instSeq = (const lean_object*)&l_Lasm_UI_Decoder_instSeq___closed__1_value;
static const lean_closure_object l_Lasm_UI_Decoder_instApplicative___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_const___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_UI_Decoder_instApplicative___lam__1___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_instApplicative___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instApplicative___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_Decoder_instApplicative___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_UI_Decoder_instApplicative___lam__2___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_instApplicative___lam__2___closed__0_value;
static const lean_closure_object l_Lasm_UI_Decoder_instApplicative___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_const___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Decoder_instApplicative___lam__2___closed__0_value)} };
static const lean_object* l_Lasm_UI_Decoder_instApplicative___lam__2___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_instApplicative___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instApplicative___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_Decoder_instApplicative___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Decoder_instApplicative___lam__1, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_instSeq___closed__0_value)} };
static const lean_object* l_Lasm_UI_Decoder_instApplicative___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_instApplicative___closed__0_value;
static const lean_closure_object l_Lasm_UI_Decoder_instApplicative___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Decoder_instApplicative___lam__2, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_instSeq___closed__0_value)} };
static const lean_object* l_Lasm_UI_Decoder_instApplicative___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_instApplicative___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Decoder_instApplicative___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_instFunctor___closed__2_value),((lean_object*)&l_Lasm_UI_Decoder_instPure___closed__0_value),((lean_object*)&l_Lasm_UI_Decoder_instSeq___closed__1_value),((lean_object*)&l_Lasm_UI_Decoder_instApplicative___closed__0_value),((lean_object*)&l_Lasm_UI_Decoder_instApplicative___closed__1_value)}};
static const lean_object* l_Lasm_UI_Decoder_instApplicative___closed__2 = (const lean_object*)&l_Lasm_UI_Decoder_instApplicative___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Decoder_instApplicative = (const lean_object*)&l_Lasm_UI_Decoder_instApplicative___closed__2_value;
static const lean_closure_object l_Lasm_UI_Decoder_string___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_EvVal_toString_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Decoder_string___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_string___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_string(lean_object*);
static const lean_closure_object l_Lasm_UI_Decoder_bool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_EvVal_toBool_x3f___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Decoder_bool___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_bool___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_bool(lean_object*);
static const lean_closure_object l_Lasm_UI_Decoder_float___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_EvVal_toFloat_x3f___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Decoder_float___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_float___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_float(lean_object*);
static const lean_closure_object l_Lasm_UI_Decoder_int___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_EvVal_toInt_x3f___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Decoder_int___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_int___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_int(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_value___lam__0(lean_object*);
static const lean_closure_object l_Lasm_UI_Decoder_value___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Decoder_value___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Decoder_value___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_value___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_value(lean_object*);
static const lean_string_object l_Lasm_UI_Decoder_targetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* l_Lasm_UI_Decoder_targetValue___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_targetValue___closed__0_value;
static const lean_string_object l_Lasm_UI_Decoder_targetValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_UI_Decoder_targetValue___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_targetValue___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Decoder_targetValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_targetValue___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_targetValue___closed__2 = (const lean_object*)&l_Lasm_UI_Decoder_targetValue___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Decoder_targetValue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_targetValue___closed__0_value),((lean_object*)&l_Lasm_UI_Decoder_targetValue___closed__2_value)}};
static const lean_object* l_Lasm_UI_Decoder_targetValue___closed__3 = (const lean_object*)&l_Lasm_UI_Decoder_targetValue___closed__3_value;
static lean_once_cell_t l_Lasm_UI_Decoder_targetValue___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_targetValue___closed__4;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_targetValue;
static const lean_string_object l_Lasm_UI_Decoder_targetChecked___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "checked"};
static const lean_object* l_Lasm_UI_Decoder_targetChecked___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_targetChecked___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_targetChecked___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_targetChecked___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_targetChecked___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_targetChecked___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Decoder_targetChecked___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_targetValue___closed__0_value),((lean_object*)&l_Lasm_UI_Decoder_targetChecked___closed__1_value)}};
static const lean_object* l_Lasm_UI_Decoder_targetChecked___closed__2 = (const lean_object*)&l_Lasm_UI_Decoder_targetChecked___closed__2_value;
static lean_once_cell_t l_Lasm_UI_Decoder_targetChecked___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_targetChecked___closed__3;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_targetChecked;
static const lean_string_object l_Lasm_UI_Decoder_key___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_UI_Decoder_key___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_key___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_key___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_key___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_key___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_key___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_key___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_key___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_key;
static const lean_string_object l_Lasm_UI_Decoder_ctrlKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ctrlKey"};
static const lean_object* l_Lasm_UI_Decoder_ctrlKey___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_ctrlKey___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_ctrlKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_ctrlKey___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_ctrlKey___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_ctrlKey___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_ctrlKey___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_ctrlKey___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_ctrlKey;
static const lean_string_object l_Lasm_UI_Decoder_shiftKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "shiftKey"};
static const lean_object* l_Lasm_UI_Decoder_shiftKey___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_shiftKey___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_shiftKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_shiftKey___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_shiftKey___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_shiftKey___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_shiftKey___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_shiftKey___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_shiftKey;
static const lean_string_object l_Lasm_UI_Decoder_altKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "altKey"};
static const lean_object* l_Lasm_UI_Decoder_altKey___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_altKey___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_altKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_altKey___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_altKey___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_altKey___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_altKey___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_altKey___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_altKey;
static const lean_string_object l_Lasm_UI_Decoder_metaKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "metaKey"};
static const lean_object* l_Lasm_UI_Decoder_metaKey___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_metaKey___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_metaKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_metaKey___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_metaKey___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_metaKey___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_metaKey___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_metaKey___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_metaKey;
static const lean_string_object l_Lasm_UI_Decoder_clientX___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "clientX"};
static const lean_object* l_Lasm_UI_Decoder_clientX___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_clientX___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_clientX___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_clientX___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_clientX___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_clientX___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_clientX___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_clientX___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_clientX;
static const lean_string_object l_Lasm_UI_Decoder_clientY___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "clientY"};
static const lean_object* l_Lasm_UI_Decoder_clientY___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_clientY___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_clientY___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_clientY___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_clientY___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_clientY___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_clientY___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_clientY___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_clientY;
static const lean_string_object l_Lasm_UI_Decoder_offsetX___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "offsetX"};
static const lean_object* l_Lasm_UI_Decoder_offsetX___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_offsetX___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_offsetX___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_offsetX___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_offsetX___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_offsetX___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_offsetX___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_offsetX___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_offsetX;
static const lean_string_object l_Lasm_UI_Decoder_offsetY___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "offsetY"};
static const lean_object* l_Lasm_UI_Decoder_offsetY___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_offsetY___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_offsetY___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_offsetY___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_offsetY___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_offsetY___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_offsetY___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_offsetY___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_offsetY;
static const lean_string_object l_Lasm_UI_Decoder_button___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "button"};
static const lean_object* l_Lasm_UI_Decoder_button___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_button___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_button___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_button___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_button___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_button___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_button___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_button___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_button;
static const lean_string_object l_Lasm_UI_Decoder_deltaY___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "deltaY"};
static const lean_object* l_Lasm_UI_Decoder_deltaY___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_deltaY___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_deltaY___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_deltaY___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_deltaY___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_deltaY___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_deltaY___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_deltaY___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_deltaY;
static const lean_string_object l_Lasm_UI_Decoder_timeStamp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "timeStamp"};
static const lean_object* l_Lasm_UI_Decoder_timeStamp___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_timeStamp___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_timeStamp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_timeStamp___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_timeStamp___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_timeStamp___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_timeStamp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_timeStamp___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_timeStamp;
static const lean_string_object l_Lasm_UI_Decoder_dataset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "dataset"};
static const lean_object* l_Lasm_UI_Decoder_dataset___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_dataset___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_dataset(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener_decEq___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener_decEq___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instDecidableEqListener_decEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instDecidableEqListener_decEq___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instDecidableEqListener_decEq___closed__0 = (const lean_object*)&l_Lasm_UI_instDecidableEqListener_decEq___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__3 = (const lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__4 = (const lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__5_value;
static const lean_string_object l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__6 = (const lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7;
static lean_once_cell_t l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8;
static const lean_ctor_object l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__9 = (const lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__9_value;
static const lean_ctor_object l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__10 = (const lean_object*)&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Lasm_UI_instReprListener_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__0_value;
static const lean_string_object l_Lasm_UI_instReprListener_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "event"};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_UI_instReprListener_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_UI_instReprListener_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__2_value)}};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__3_value;
static const lean_string_object l_Lasm_UI_instReprListener_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_UI_instReprListener_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_UI_instReprListener_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__3_value),((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lasm_UI_instReprListener_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__7;
static const lean_string_object l_Lasm_UI_instReprListener_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paths"};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_UI_instReprListener_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__8_value)}};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__9_value;
static const lean_string_object l_Lasm_UI_instReprListener_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "preventDefault"};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__10 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lasm_UI_instReprListener_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__10_value)}};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lasm_UI_instReprListener_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__12;
static const lean_string_object l_Lasm_UI_instReprListener_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "stopPropagation"};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__13 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lasm_UI_instReprListener_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__13_value)}};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__14 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lasm_UI_instReprListener_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__15;
static const lean_string_object l_Lasm_UI_instReprListener_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__16 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__16_value;
static lean_once_cell_t l_Lasm_UI_instReprListener_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__17;
static lean_once_cell_t l_Lasm_UI_instReprListener_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__18;
static const lean_ctor_object l_Lasm_UI_instReprListener_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__19 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__19_value;
static const lean_ctor_object l_Lasm_UI_instReprListener_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__16_value)}};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__20 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__20_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instReprListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instReprListener_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instReprListener___closed__0 = (const lean_object*)&l_Lasm_UI_instReprListener___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instReprListener = (const lean_object*)&l_Lasm_UI_instReprListener___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instInhabitedListener_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_instInhabitedListener_default___closed__0 = (const lean_object*)&l_Lasm_UI_instInhabitedListener_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedListener_default = (const lean_object*)&l_Lasm_UI_instInhabitedListener_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedListener = (const lean_object*)&l_Lasm_UI_instInhabitedListener_default___closed__0_value;
LEAN_EXPORT uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableListener_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableListener_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_instHashableListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instHashableListener_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instHashableListener___closed__0 = (const lean_object*)&l_Lasm_UI_instHashableListener___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instHashableListener = (const lean_object*)&l_Lasm_UI_instHashableListener___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_attr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_attr_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_prop_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_prop_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_style_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_style_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_on_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_on_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_UI_instInhabitedAttr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__0_value),((lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__0_value)}};
static const lean_object* l_Lasm_UI_instInhabitedAttr___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_instInhabitedAttr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lasm_UI_instInhabitedAttr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instInhabitedAttr___closed__0;
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_attr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_attr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_prop_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_prop_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_style_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_style_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_on_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_on_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrKey_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrKey_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrKey(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrKey___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_instReprAttrKey_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.UI.AttrKey.attr"};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__0 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrKey_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__0_value)}};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__1 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__1_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrKey_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__2 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__2_value;
static const lean_string_object l_Lasm_UI_instReprAttrKey_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.UI.AttrKey.prop"};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__3 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__3_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrKey_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__3_value)}};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__4 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__4_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrKey_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__5 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__5_value;
static const lean_string_object l_Lasm_UI_instReprAttrKey_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.UI.AttrKey.style"};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__6 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__6_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrKey_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__6_value)}};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__7 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__7_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrKey_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__8 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__8_value;
static const lean_string_object l_Lasm_UI_instReprAttrKey_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.UI.AttrKey.on"};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__9 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__9_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrKey_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__9_value)}};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__10 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__10_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrKey_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprAttrKey_repr___closed__11 = (const lean_object*)&l_Lasm_UI_instReprAttrKey_repr___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrKey_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrKey_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instReprAttrKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instReprAttrKey_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instReprAttrKey___closed__0 = (const lean_object*)&l_Lasm_UI_instReprAttrKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instReprAttrKey = (const lean_object*)&l_Lasm_UI_instReprAttrKey___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instInhabitedAttrKey_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__0_value)}};
static const lean_object* l_Lasm_UI_instInhabitedAttrKey_default___closed__0 = (const lean_object*)&l_Lasm_UI_instInhabitedAttrKey_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedAttrKey_default = (const lean_object*)&l_Lasm_UI_instInhabitedAttrKey_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedAttrKey = (const lean_object*)&l_Lasm_UI_instInhabitedAttrKey_default___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableAttrKey_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableAttrKey_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_instHashableAttrKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instHashableAttrKey_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instHashableAttrKey___closed__0 = (const lean_object*)&l_Lasm_UI_instHashableAttrKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instHashableAttrKey = (const lean_object*)&l_Lasm_UI_instHashableAttrKey___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_str_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_str_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_prop_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_prop_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_listener_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_listener_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrVal_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrVal_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrVal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrVal___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_instReprAttrVal_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.UI.AttrVal.str"};
static const lean_object* l_Lasm_UI_instReprAttrVal_repr___closed__0 = (const lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrVal_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__0_value)}};
static const lean_object* l_Lasm_UI_instReprAttrVal_repr___closed__1 = (const lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__1_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrVal_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprAttrVal_repr___closed__2 = (const lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__2_value;
static const lean_string_object l_Lasm_UI_instReprAttrVal_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.UI.AttrVal.prop"};
static const lean_object* l_Lasm_UI_instReprAttrVal_repr___closed__3 = (const lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__3_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrVal_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__3_value)}};
static const lean_object* l_Lasm_UI_instReprAttrVal_repr___closed__4 = (const lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__4_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrVal_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprAttrVal_repr___closed__5 = (const lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__5_value;
static const lean_string_object l_Lasm_UI_instReprAttrVal_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.UI.AttrVal.listener"};
static const lean_object* l_Lasm_UI_instReprAttrVal_repr___closed__6 = (const lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__6_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrVal_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__6_value)}};
static const lean_object* l_Lasm_UI_instReprAttrVal_repr___closed__7 = (const lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__7_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrVal_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprAttrVal_repr___closed__8 = (const lean_object*)&l_Lasm_UI_instReprAttrVal_repr___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrVal_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrVal_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instReprAttrVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instReprAttrVal_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instReprAttrVal___closed__0 = (const lean_object*)&l_Lasm_UI_instReprAttrVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instReprAttrVal = (const lean_object*)&l_Lasm_UI_instReprAttrVal___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instInhabitedAttrVal_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__0_value)}};
static const lean_object* l_Lasm_UI_instInhabitedAttrVal_default___closed__0 = (const lean_object*)&l_Lasm_UI_instInhabitedAttrVal_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedAttrVal_default = (const lean_object*)&l_Lasm_UI_instInhabitedAttrVal_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedAttrVal = (const lean_object*)&l_Lasm_UI_instInhabitedAttrVal_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___redArg(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_text_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_elem_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_elem_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_UI_instInhabitedHtml___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__0_value)}};
static const lean_object* l_Lasm_UI_instInhabitedHtml___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_instInhabitedHtml___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lasm_UI_instInhabitedHtml___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instInhabitedHtml___closed__0;
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_keyed___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_keyed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__List_map__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__List_map__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum___at___00Lasm_UI_Html_size_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_sum___at___00Lasm_UI_Html_size_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instFunctorHtml___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instFunctorHtml___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instFunctorHtml___closed__0 = (const lean_object*)&l_Lasm_UI_instFunctorHtml___closed__0_value;
static const lean_closure_object l_Lasm_UI_instFunctorHtml___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Html_map, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instFunctorHtml___closed__1 = (const lean_object*)&l_Lasm_UI_instFunctorHtml___closed__1_value;
static const lean_ctor_object l_Lasm_UI_instFunctorHtml___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_instFunctorHtml___closed__1_value),((lean_object*)&l_Lasm_UI_instFunctorHtml___closed__0_value)}};
static const lean_object* l_Lasm_UI_instFunctorHtml___closed__2 = (const lean_object*)&l_Lasm_UI_instFunctorHtml___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instFunctorHtml = (const lean_object*)&l_Lasm_UI_instFunctorHtml___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lasm_UI_Ns_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lasm_UI_Ns_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lasm_UI_Ns_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim___redArg(lean_object* v_html_22_){
_start:
{
lean_inc(v_html_22_);
return v_html_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim___redArg___boxed(lean_object* v_html_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_UI_Ns_html_elim___redArg(v_html_23_);
lean_dec(v_html_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_html_28_){
_start:
{
lean_inc(v_html_28_);
return v_html_28_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_html_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lasm_UI_Ns_html_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_html_32_);
lean_dec(v_html_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim___redArg(lean_object* v_svg_35_){
_start:
{
lean_inc(v_svg_35_);
return v_svg_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim___redArg___boxed(lean_object* v_svg_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lasm_UI_Ns_svg_elim___redArg(v_svg_36_);
lean_dec(v_svg_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_svg_41_){
_start:
{
lean_inc(v_svg_41_);
return v_svg_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_svg_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lasm_UI_Ns_svg_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_svg_45_);
lean_dec(v_svg_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim___redArg(lean_object* v_mathml_48_){
_start:
{
lean_inc(v_mathml_48_);
return v_mathml_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim___redArg___boxed(lean_object* v_mathml_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lasm_UI_Ns_mathml_elim___redArg(v_mathml_49_);
lean_dec(v_mathml_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_mathml_54_){
_start:
{
lean_inc(v_mathml_54_);
return v_mathml_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_mathml_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lasm_UI_Ns_mathml_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_mathml_58_);
lean_dec(v_mathml_58_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Ns_ofNat(lean_object* v_n_61_){
_start:
{
lean_object* v___x_62_; uint8_t v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(0u);
v___x_63_ = lean_nat_dec_le(v_n_61_, v___x_62_);
if (v___x_63_ == 0)
{
lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_64_ = lean_unsigned_to_nat(1u);
v___x_65_ = lean_nat_dec_le(v_n_61_, v___x_64_);
if (v___x_65_ == 0)
{
uint8_t v___x_66_; 
v___x_66_ = 2;
return v___x_66_;
}
else
{
uint8_t v___x_67_; 
v___x_67_ = 1;
return v___x_67_;
}
}
else
{
uint8_t v___x_68_; 
v___x_68_ = 0;
return v___x_68_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ofNat___boxed(lean_object* v_n_69_){
_start:
{
uint8_t v_res_70_; lean_object* v_r_71_; 
v_res_70_ = l_Lasm_UI_Ns_ofNat(v_n_69_);
lean_dec(v_n_69_);
v_r_71_ = lean_box(v_res_70_);
return v_r_71_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqNs(uint8_t v_x_72_, uint8_t v_y_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_74_ = lean_box(v_x_72_);
v___x_75_ = lean_obj_tag_nat(v___x_74_);
lean_dec(v___x_74_);
v___x_76_ = lean_box(v_y_73_);
v___x_77_ = lean_obj_tag_nat(v___x_76_);
lean_dec(v___x_76_);
v___x_78_ = lean_nat_dec_eq(v___x_75_, v___x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqNs___boxed(lean_object* v_x_79_, lean_object* v_y_80_){
_start:
{
uint8_t v_x_23__boxed_81_; uint8_t v_y_24__boxed_82_; uint8_t v_res_83_; lean_object* v_r_84_; 
v_x_23__boxed_81_ = lean_unbox(v_x_79_);
v_y_24__boxed_82_ = lean_unbox(v_y_80_);
v_res_83_ = l_Lasm_UI_instDecidableEqNs(v_x_23__boxed_81_, v_y_24__boxed_82_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
static lean_object* _init_l_Lasm_UI_instReprNs_repr___closed__6(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_unsigned_to_nat(2u);
v___x_95_ = lean_nat_to_int(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lasm_UI_instReprNs_repr___closed__7(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_unsigned_to_nat(1u);
v___x_97_ = lean_nat_to_int(v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprNs_repr(uint8_t v_x_98_, lean_object* v_prec_99_){
_start:
{
lean_object* v___y_101_; lean_object* v___y_108_; lean_object* v___y_115_; 
switch(v_x_98_)
{
case 0:
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1024u);
v___x_122_ = lean_nat_dec_le(v___x_121_, v_prec_99_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_101_ = v___x_123_;
goto v___jp_100_;
}
else
{
lean_object* v___x_124_; 
v___x_124_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_101_ = v___x_124_;
goto v___jp_100_;
}
}
case 1:
{
lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(1024u);
v___x_126_ = lean_nat_dec_le(v___x_125_, v_prec_99_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; 
v___x_127_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_108_ = v___x_127_;
goto v___jp_107_;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_108_ = v___x_128_;
goto v___jp_107_;
}
}
default: 
{
lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = lean_unsigned_to_nat(1024u);
v___x_130_ = lean_nat_dec_le(v___x_129_, v_prec_99_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; 
v___x_131_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_115_ = v___x_131_;
goto v___jp_114_;
}
else
{
lean_object* v___x_132_; 
v___x_132_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_115_ = v___x_132_;
goto v___jp_114_;
}
}
}
v___jp_100_:
{
lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_102_ = ((lean_object*)(l_Lasm_UI_instReprNs_repr___closed__1));
lean_inc(v___y_101_);
v___x_103_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_103_, 0, v___y_101_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
v___x_104_ = 0;
v___x_105_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_105_, 0, v___x_103_);
lean_ctor_set_uint8(v___x_105_, sizeof(void*)*1, v___x_104_);
v___x_106_ = l_Repr_addAppParen(v___x_105_, v_prec_99_);
return v___x_106_;
}
v___jp_107_:
{
lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_109_ = ((lean_object*)(l_Lasm_UI_instReprNs_repr___closed__3));
lean_inc(v___y_108_);
v___x_110_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_110_, 0, v___y_108_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = 0;
v___x_112_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_112_, 0, v___x_110_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*1, v___x_111_);
v___x_113_ = l_Repr_addAppParen(v___x_112_, v_prec_99_);
return v___x_113_;
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_116_ = ((lean_object*)(l_Lasm_UI_instReprNs_repr___closed__5));
lean_inc(v___y_115_);
v___x_117_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_117_, 0, v___y_115_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = 0;
v___x_119_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_119_, 0, v___x_117_);
lean_ctor_set_uint8(v___x_119_, sizeof(void*)*1, v___x_118_);
v___x_120_ = l_Repr_addAppParen(v___x_119_, v_prec_99_);
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprNs_repr___boxed(lean_object* v_x_133_, lean_object* v_prec_134_){
_start:
{
uint8_t v_x_171__boxed_135_; lean_object* v_res_136_; 
v_x_171__boxed_135_ = lean_unbox(v_x_133_);
v_res_136_ = l_Lasm_UI_instReprNs_repr(v_x_171__boxed_135_, v_prec_134_);
lean_dec(v_prec_134_);
return v_res_136_;
}
}
static uint8_t _init_l_Lasm_UI_instInhabitedNs_default(void){
_start:
{
uint8_t v___x_139_; 
v___x_139_ = 0;
return v___x_139_;
}
}
static uint8_t _init_l_Lasm_UI_instInhabitedNs(void){
_start:
{
uint8_t v___x_140_; 
v___x_140_ = 0;
return v___x_140_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableNs_hash(uint8_t v_x_141_){
_start:
{
switch(v_x_141_)
{
case 0:
{
uint64_t v___x_142_; 
v___x_142_ = 0ULL;
return v___x_142_;
}
case 1:
{
uint64_t v___x_143_; 
v___x_143_ = 1ULL;
return v___x_143_;
}
default: 
{
uint64_t v___x_144_; 
v___x_144_ = 2ULL;
return v___x_144_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableNs_hash___boxed(lean_object* v_x_145_){
_start:
{
uint8_t v_x_40__boxed_146_; uint64_t v_res_147_; lean_object* v_r_148_; 
v_x_40__boxed_146_ = lean_unbox(v_x_145_);
v_res_147_ = l_Lasm_UI_instHashableNs_hash(v_x_40__boxed_146_);
v_r_148_ = lean_box_uint64(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorIdx___impl(lean_object* v_x_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_obj_tag_nat(v_x_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorIdx___impl___boxed(lean_object* v_x_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Lasm_UI_EvVal_ctorIdx___impl(v_x_153_);
lean_dec(v_x_153_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorElim___redArg(lean_object* v_t_155_, lean_object* v_k_156_){
_start:
{
switch(lean_obj_tag(v_t_155_))
{
case 2:
{
uint8_t v_b_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v_b_157_ = lean_ctor_get_uint8(v_t_155_, 0);
lean_dec_ref_known(v_t_155_, 0);
v___x_158_ = lean_box(v_b_157_);
v___x_159_ = lean_apply_1(v_k_156_, v___x_158_);
return v___x_159_;
}
case 3:
{
double v_n_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v_n_160_ = lean_ctor_get_float(v_t_155_, 0);
lean_dec_ref_known(v_t_155_, 0);
v___x_161_ = lean_box_float(v_n_160_);
v___x_162_ = lean_apply_1(v_k_156_, v___x_161_);
return v___x_162_;
}
case 4:
{
lean_object* v_s_163_; lean_object* v___x_164_; 
v_s_163_ = lean_ctor_get(v_t_155_, 0);
lean_inc_ref(v_s_163_);
lean_dec_ref_known(v_t_155_, 1);
v___x_164_ = lean_apply_1(v_k_156_, v_s_163_);
return v___x_164_;
}
default: 
{
lean_dec(v_t_155_);
return v_k_156_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorElim(lean_object* v_motive_165_, lean_object* v_ctorIdx_166_, lean_object* v_t_167_, lean_object* v_h_168_, lean_object* v_k_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_167_, v_k_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorElim___boxed(lean_object* v_motive_171_, lean_object* v_ctorIdx_172_, lean_object* v_t_173_, lean_object* v_h_174_, lean_object* v_k_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lasm_UI_EvVal_ctorElim(v_motive_171_, v_ctorIdx_172_, v_t_173_, v_h_174_, v_k_175_);
lean_dec(v_ctorIdx_172_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_undefined_elim___redArg(lean_object* v_t_177_, lean_object* v_undefined_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_177_, v_undefined_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_undefined_elim(lean_object* v_motive_180_, lean_object* v_t_181_, lean_object* v_h_182_, lean_object* v_undefined_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_181_, v_undefined_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_null_elim___redArg(lean_object* v_t_185_, lean_object* v_null_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_185_, v_null_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_null_elim(lean_object* v_motive_188_, lean_object* v_t_189_, lean_object* v_h_190_, lean_object* v_null_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_189_, v_null_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_bool_elim___redArg(lean_object* v_t_193_, lean_object* v_bool_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_193_, v_bool_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_bool_elim(lean_object* v_motive_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_bool_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_197_, v_bool_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_num_elim___redArg(lean_object* v_t_201_, lean_object* v_num_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_201_, v_num_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_num_elim(lean_object* v_motive_204_, lean_object* v_t_205_, lean_object* v_h_206_, lean_object* v_num_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_205_, v_num_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_str_elim___redArg(lean_object* v_t_209_, lean_object* v_str_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_209_, v_str_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_str_elim(lean_object* v_motive_212_, lean_object* v_t_213_, lean_object* v_h_214_, lean_object* v_str_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_213_, v_str_215_);
return v___x_216_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedEvVal_default(void){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = lean_box(0);
return v___x_217_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedEvVal(void){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = lean_box(0);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprEvVal_repr(lean_object* v_x_243_, lean_object* v_prec_244_){
_start:
{
lean_object* v___y_246_; lean_object* v___y_253_; 
switch(lean_obj_tag(v_x_243_))
{
case 0:
{
lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_259_ = lean_unsigned_to_nat(1024u);
v___x_260_ = lean_nat_dec_le(v___x_259_, v_prec_244_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_253_ = v___x_261_;
goto v___jp_252_;
}
else
{
lean_object* v___x_262_; 
v___x_262_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_253_ = v___x_262_;
goto v___jp_252_;
}
}
case 1:
{
lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = lean_unsigned_to_nat(1024u);
v___x_264_ = lean_nat_dec_le(v___x_263_, v_prec_244_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; 
v___x_265_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_246_ = v___x_265_;
goto v___jp_245_;
}
else
{
lean_object* v___x_266_; 
v___x_266_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_246_ = v___x_266_;
goto v___jp_245_;
}
}
case 2:
{
uint8_t v_b_267_; lean_object* v___y_269_; lean_object* v___x_277_; uint8_t v___x_278_; 
v_b_267_ = lean_ctor_get_uint8(v_x_243_, 0);
lean_dec_ref_known(v_x_243_, 0);
v___x_277_ = lean_unsigned_to_nat(1024u);
v___x_278_ = lean_nat_dec_le(v___x_277_, v_prec_244_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; 
v___x_279_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_269_ = v___x_279_;
goto v___jp_268_;
}
else
{
lean_object* v___x_280_; 
v___x_280_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_269_ = v___x_280_;
goto v___jp_268_;
}
v___jp_268_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; uint8_t v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_270_ = ((lean_object*)(l_Lasm_UI_instReprEvVal_repr___closed__6));
v___x_271_ = l_Bool_repr___redArg(v_b_267_);
v___x_272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_270_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
lean_inc(v___y_269_);
v___x_273_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_273_, 0, v___y_269_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
v___x_274_ = 0;
v___x_275_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set_uint8(v___x_275_, sizeof(void*)*1, v___x_274_);
v___x_276_ = l_Repr_addAppParen(v___x_275_, v_prec_244_);
return v___x_276_;
}
}
case 3:
{
double v_n_281_; lean_object* v___y_283_; lean_object* v___x_292_; uint8_t v___x_293_; 
v_n_281_ = lean_ctor_get_float(v_x_243_, 0);
lean_dec_ref_known(v_x_243_, 0);
v___x_292_ = lean_unsigned_to_nat(1024u);
v___x_293_ = lean_nat_dec_le(v___x_292_, v_prec_244_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; 
v___x_294_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_283_ = v___x_294_;
goto v___jp_282_;
}
else
{
lean_object* v___x_295_; 
v___x_295_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_283_ = v___x_295_;
goto v___jp_282_;
}
v___jp_282_:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; uint8_t v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_284_ = ((lean_object*)(l_Lasm_UI_instReprEvVal_repr___closed__9));
v___x_285_ = lean_unsigned_to_nat(1024u);
v___x_286_ = l_Float_repr(v_n_281_, v___x_285_);
v___x_287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_284_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
lean_inc(v___y_283_);
v___x_288_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_288_, 0, v___y_283_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = 0;
v___x_290_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_290_, 0, v___x_288_);
lean_ctor_set_uint8(v___x_290_, sizeof(void*)*1, v___x_289_);
v___x_291_ = l_Repr_addAppParen(v___x_290_, v_prec_244_);
return v___x_291_;
}
}
default: 
{
lean_object* v_s_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_316_; 
v_s_296_ = lean_ctor_get(v_x_243_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v_x_243_);
if (v_isSharedCheck_316_ == 0)
{
v___x_298_ = v_x_243_;
v_isShared_299_ = v_isSharedCheck_316_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_s_296_);
lean_dec(v_x_243_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_316_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___y_301_; lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_312_ = lean_unsigned_to_nat(1024u);
v___x_313_ = lean_nat_dec_le(v___x_312_, v_prec_244_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; 
v___x_314_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_301_ = v___x_314_;
goto v___jp_300_;
}
else
{
lean_object* v___x_315_; 
v___x_315_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_301_ = v___x_315_;
goto v___jp_300_;
}
v___jp_300_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_305_; 
v___x_302_ = ((lean_object*)(l_Lasm_UI_instReprEvVal_repr___closed__12));
v___x_303_ = l_String_quote(v_s_296_);
if (v_isShared_299_ == 0)
{
lean_ctor_set_tag(v___x_298_, 3);
lean_ctor_set(v___x_298_, 0, v___x_303_);
v___x_305_ = v___x_298_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_303_);
v___x_305_ = v_reuseFailAlloc_311_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
lean_object* v___x_306_; lean_object* v___x_307_; uint8_t v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_302_);
lean_ctor_set(v___x_306_, 1, v___x_305_);
lean_inc(v___y_301_);
v___x_307_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_307_, 0, v___y_301_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
v___x_308_ = 0;
v___x_309_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_309_, 0, v___x_307_);
lean_ctor_set_uint8(v___x_309_, sizeof(void*)*1, v___x_308_);
v___x_310_ = l_Repr_addAppParen(v___x_309_, v_prec_244_);
return v___x_310_;
}
}
}
}
}
v___jp_245_:
{
lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_247_ = ((lean_object*)(l_Lasm_UI_instReprEvVal_repr___closed__1));
lean_inc(v___y_246_);
v___x_248_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_248_, 0, v___y_246_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = 0;
v___x_250_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_250_, 0, v___x_248_);
lean_ctor_set_uint8(v___x_250_, sizeof(void*)*1, v___x_249_);
v___x_251_ = l_Repr_addAppParen(v___x_250_, v_prec_244_);
return v___x_251_;
}
v___jp_252_:
{
lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_254_ = ((lean_object*)(l_Lasm_UI_instReprEvVal_repr___closed__3));
lean_inc(v___y_253_);
v___x_255_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_255_, 0, v___y_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = 0;
v___x_257_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_257_, 0, v___x_255_);
lean_ctor_set_uint8(v___x_257_, sizeof(void*)*1, v___x_256_);
v___x_258_ = l_Repr_addAppParen(v___x_257_, v_prec_244_);
return v___x_258_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprEvVal_repr___boxed(lean_object* v_x_317_, lean_object* v_prec_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lasm_UI_instReprEvVal_repr(v_x_317_, v_prec_318_);
lean_dec(v_prec_318_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toString_x3f(lean_object* v_x_322_){
_start:
{
if (lean_obj_tag(v_x_322_) == 4)
{
lean_object* v_s_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
v_s_323_ = lean_ctor_get(v_x_322_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v_x_322_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v_x_322_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_s_323_);
lean_dec(v_x_322_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
lean_ctor_set_tag(v___x_325_, 1);
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_s_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
else
{
lean_object* v___x_331_; 
lean_dec(v_x_322_);
v___x_331_ = lean_box(0);
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toBool_x3f(lean_object* v_x_332_){
_start:
{
if (lean_obj_tag(v_x_332_) == 2)
{
uint8_t v_b_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_b_333_ = lean_ctor_get_uint8(v_x_332_, 0);
v___x_334_ = lean_box(v_b_333_);
v___x_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
return v___x_335_;
}
else
{
lean_object* v___x_336_; 
v___x_336_ = lean_box(0);
return v___x_336_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toBool_x3f___boxed(lean_object* v_x_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lasm_UI_EvVal_toBool_x3f(v_x_337_);
lean_dec(v_x_337_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toFloat_x3f(lean_object* v_x_339_){
_start:
{
if (lean_obj_tag(v_x_339_) == 3)
{
double v_n_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v_n_340_ = lean_ctor_get_float(v_x_339_, 0);
v___x_341_ = lean_box_float(v_n_340_);
v___x_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
return v___x_342_;
}
else
{
lean_object* v___x_343_; 
v___x_343_ = lean_box(0);
return v___x_343_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toFloat_x3f___boxed(lean_object* v_x_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Lasm_UI_EvVal_toFloat_x3f(v_x_344_);
lean_dec(v_x_344_);
return v_res_345_;
}
}
static double _init_l_Lasm_UI_EvVal_toInt_x3f___closed__0(void){
_start:
{
lean_object* v___x_346_; double v___x_347_; 
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_float_of_nat(v___x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toInt_x3f(lean_object* v_x_348_){
_start:
{
if (lean_obj_tag(v_x_348_) == 3)
{
double v_n_349_; uint8_t v___x_350_; 
v_n_349_ = lean_ctor_get_float(v_x_348_, 0);
v___x_350_ = lean_float_isnan(v_n_349_);
if (v___x_350_ == 0)
{
uint8_t v___x_351_; 
v___x_351_ = lean_float_isinf(v_n_349_);
if (v___x_351_ == 0)
{
double v___x_352_; uint8_t v___x_353_; 
v___x_352_ = round(v_n_349_);
v___x_353_ = lean_float_beq(v_n_349_, v___x_352_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; 
v___x_354_ = lean_box(0);
return v___x_354_;
}
else
{
double v___x_355_; uint8_t v___x_356_; 
v___x_355_ = lean_float_once(&l_Lasm_UI_EvVal_toInt_x3f___closed__0, &l_Lasm_UI_EvVal_toInt_x3f___closed__0_once, _init_l_Lasm_UI_EvVal_toInt_x3f___closed__0);
v___x_356_ = lean_float_decLt(v_n_349_, v___x_355_);
if (v___x_356_ == 0)
{
uint64_t v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_357_ = lean_float_to_uint64(v_n_349_);
v___x_358_ = lean_uint64_to_nat(v___x_357_);
v___x_359_ = lean_nat_to_int(v___x_358_);
v___x_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
return v___x_360_;
}
else
{
double v___x_361_; uint64_t v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_361_ = lean_float_negate(v_n_349_);
v___x_362_ = lean_float_to_uint64(v___x_361_);
v___x_363_ = lean_uint64_to_nat(v___x_362_);
v___x_364_ = lean_nat_to_int(v___x_363_);
v___x_365_ = lean_int_neg(v___x_364_);
lean_dec(v___x_364_);
v___x_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
return v___x_366_;
}
}
}
else
{
lean_object* v___x_367_; 
v___x_367_ = lean_box(0);
return v___x_367_;
}
}
else
{
lean_object* v___x_368_; 
v___x_368_ = lean_box(0);
return v___x_368_;
}
}
else
{
lean_object* v___x_369_; 
v___x_369_ = lean_box(0);
return v___x_369_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toInt_x3f___boxed(lean_object* v_x_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lasm_UI_EvVal_toInt_x3f(v_x_370_);
lean_dec(v_x_370_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorIdx___impl(lean_object* v_x_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lean_obj_tag_nat(v_x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorIdx___impl___boxed(lean_object* v_x_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lasm_UI_PropVal_ctorIdx___impl(v_x_374_);
lean_dec_ref(v_x_374_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorElim___redArg(lean_object* v_t_376_, lean_object* v_k_377_){
_start:
{
if (lean_obj_tag(v_t_376_) == 0)
{
lean_object* v_s_378_; lean_object* v___x_379_; 
v_s_378_ = lean_ctor_get(v_t_376_, 0);
lean_inc_ref(v_s_378_);
lean_dec_ref_known(v_t_376_, 1);
v___x_379_ = lean_apply_1(v_k_377_, v_s_378_);
return v___x_379_;
}
else
{
uint8_t v_b_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_b_380_ = lean_ctor_get_uint8(v_t_376_, 0);
lean_dec_ref_known(v_t_376_, 0);
v___x_381_ = lean_box(v_b_380_);
v___x_382_ = lean_apply_1(v_k_377_, v___x_381_);
return v___x_382_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorElim(lean_object* v_motive_383_, lean_object* v_ctorIdx_384_, lean_object* v_t_385_, lean_object* v_h_386_, lean_object* v_k_387_){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = l_Lasm_UI_PropVal_ctorElim___redArg(v_t_385_, v_k_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorElim___boxed(lean_object* v_motive_389_, lean_object* v_ctorIdx_390_, lean_object* v_t_391_, lean_object* v_h_392_, lean_object* v_k_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lasm_UI_PropVal_ctorElim(v_motive_389_, v_ctorIdx_390_, v_t_391_, v_h_392_, v_k_393_);
lean_dec(v_ctorIdx_390_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_str_elim___redArg(lean_object* v_t_395_, lean_object* v_str_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lasm_UI_PropVal_ctorElim___redArg(v_t_395_, v_str_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_str_elim(lean_object* v_motive_398_, lean_object* v_t_399_, lean_object* v_h_400_, lean_object* v_str_401_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Lasm_UI_PropVal_ctorElim___redArg(v_t_399_, v_str_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_bool_elim___redArg(lean_object* v_t_403_, lean_object* v_bool_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lasm_UI_PropVal_ctorElim___redArg(v_t_403_, v_bool_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_bool_elim(lean_object* v_motive_406_, lean_object* v_t_407_, lean_object* v_h_408_, lean_object* v_bool_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Lasm_UI_PropVal_ctorElim___redArg(v_t_407_, v_bool_409_);
return v___x_410_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqPropVal_decEq(lean_object* v_x_411_, lean_object* v_x_412_){
_start:
{
if (lean_obj_tag(v_x_411_) == 0)
{
if (lean_obj_tag(v_x_412_) == 0)
{
lean_object* v_s_413_; lean_object* v_s_414_; uint8_t v___x_415_; 
v_s_413_ = lean_ctor_get(v_x_411_, 0);
v_s_414_ = lean_ctor_get(v_x_412_, 0);
v___x_415_ = lean_string_dec_eq(v_s_413_, v_s_414_);
return v___x_415_;
}
else
{
uint8_t v___x_416_; 
v___x_416_ = 0;
return v___x_416_;
}
}
else
{
if (lean_obj_tag(v_x_412_) == 0)
{
uint8_t v___x_417_; 
v___x_417_ = 0;
return v___x_417_;
}
else
{
uint8_t v_b_418_; 
v_b_418_ = lean_ctor_get_uint8(v_x_412_, 0);
if (v_b_418_ == 0)
{
uint8_t v_b_419_; 
v_b_419_ = lean_ctor_get_uint8(v_x_411_, 0);
if (v_b_419_ == 0)
{
uint8_t v___x_420_; 
v___x_420_ = 1;
return v___x_420_;
}
else
{
return v_b_418_;
}
}
else
{
uint8_t v_b_421_; 
v_b_421_ = lean_ctor_get_uint8(v_x_411_, 0);
return v_b_421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqPropVal_decEq___boxed(lean_object* v_x_422_, lean_object* v_x_423_){
_start:
{
uint8_t v_res_424_; lean_object* v_r_425_; 
v_res_424_ = l_Lasm_UI_instDecidableEqPropVal_decEq(v_x_422_, v_x_423_);
lean_dec_ref(v_x_423_);
lean_dec_ref(v_x_422_);
v_r_425_ = lean_box(v_res_424_);
return v_r_425_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqPropVal(lean_object* v_x_426_, lean_object* v_x_427_){
_start:
{
uint8_t v___x_428_; 
v___x_428_ = l_Lasm_UI_instDecidableEqPropVal_decEq(v_x_426_, v_x_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqPropVal___boxed(lean_object* v_x_429_, lean_object* v_x_430_){
_start:
{
uint8_t v_res_431_; lean_object* v_r_432_; 
v_res_431_ = l_Lasm_UI_instDecidableEqPropVal(v_x_429_, v_x_430_);
lean_dec_ref(v_x_430_);
lean_dec_ref(v_x_429_);
v_r_432_ = lean_box(v_res_431_);
return v_r_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprPropVal_repr(lean_object* v_x_445_, lean_object* v_prec_446_){
_start:
{
if (lean_obj_tag(v_x_445_) == 0)
{
lean_object* v_s_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_467_; 
v_s_447_ = lean_ctor_get(v_x_445_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v_x_445_);
if (v_isSharedCheck_467_ == 0)
{
v___x_449_ = v_x_445_;
v_isShared_450_ = v_isSharedCheck_467_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_s_447_);
lean_dec(v_x_445_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_467_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___y_452_; lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_463_ = lean_unsigned_to_nat(1024u);
v___x_464_ = lean_nat_dec_le(v___x_463_, v_prec_446_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; 
v___x_465_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_452_ = v___x_465_;
goto v___jp_451_;
}
else
{
lean_object* v___x_466_; 
v___x_466_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_452_ = v___x_466_;
goto v___jp_451_;
}
v___jp_451_:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_453_ = ((lean_object*)(l_Lasm_UI_instReprPropVal_repr___closed__2));
v___x_454_ = l_String_quote(v_s_447_);
if (v_isShared_450_ == 0)
{
lean_ctor_set_tag(v___x_449_, 3);
lean_ctor_set(v___x_449_, 0, v___x_454_);
v___x_456_ = v___x_449_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_454_);
v___x_456_ = v_reuseFailAlloc_462_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_457_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_453_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
lean_inc(v___y_452_);
v___x_458_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_458_, 0, v___y_452_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___x_459_ = 0;
v___x_460_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_460_, 0, v___x_458_);
lean_ctor_set_uint8(v___x_460_, sizeof(void*)*1, v___x_459_);
v___x_461_ = l_Repr_addAppParen(v___x_460_, v_prec_446_);
return v___x_461_;
}
}
}
}
else
{
uint8_t v_b_468_; lean_object* v___y_470_; lean_object* v___x_478_; uint8_t v___x_479_; 
v_b_468_ = lean_ctor_get_uint8(v_x_445_, 0);
lean_dec_ref_known(v_x_445_, 0);
v___x_478_ = lean_unsigned_to_nat(1024u);
v___x_479_ = lean_nat_dec_le(v___x_478_, v_prec_446_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; 
v___x_480_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_470_ = v___x_480_;
goto v___jp_469_;
}
else
{
lean_object* v___x_481_; 
v___x_481_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_470_ = v___x_481_;
goto v___jp_469_;
}
v___jp_469_:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_471_ = ((lean_object*)(l_Lasm_UI_instReprPropVal_repr___closed__5));
v___x_472_ = l_Bool_repr___redArg(v_b_468_);
v___x_473_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
lean_inc(v___y_470_);
v___x_474_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_474_, 0, v___y_470_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
v___x_475_ = 0;
v___x_476_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_476_, 0, v___x_474_);
lean_ctor_set_uint8(v___x_476_, sizeof(void*)*1, v___x_475_);
v___x_477_ = l_Repr_addAppParen(v___x_476_, v_prec_446_);
return v___x_477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprPropVal_repr___boxed(lean_object* v_x_482_, lean_object* v_prec_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lasm_UI_instReprPropVal_repr(v_x_482_, v_prec_483_);
lean_dec(v_prec_483_);
return v_res_484_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashablePropVal_hash(lean_object* v_x_492_){
_start:
{
if (lean_obj_tag(v_x_492_) == 0)
{
lean_object* v_s_493_; uint64_t v___x_494_; uint64_t v___x_495_; uint64_t v___x_496_; 
v_s_493_ = lean_ctor_get(v_x_492_, 0);
v___x_494_ = 0ULL;
v___x_495_ = lean_string_hash(v_s_493_);
v___x_496_ = lean_uint64_mix_hash(v___x_494_, v___x_495_);
return v___x_496_;
}
else
{
uint8_t v_b_497_; 
v_b_497_ = lean_ctor_get_uint8(v_x_492_, 0);
if (v_b_497_ == 0)
{
uint64_t v___x_498_; 
v___x_498_ = 6634225825881527916ULL;
return v___x_498_;
}
else
{
uint64_t v___x_499_; 
v___x_499_ = 5934453574740161273ULL;
return v___x_499_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashablePropVal_hash___boxed(lean_object* v_x_500_){
_start:
{
uint64_t v_res_501_; lean_object* v_r_502_; 
v_res_501_ = l_Lasm_UI_instHashablePropVal_hash(v_x_500_);
lean_dec_ref(v_x_500_);
v_r_502_ = lean_box_uint64(v_res_501_);
return v_r_502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed___redArg___lam__0(lean_object* v_a_505_, lean_object* v_x_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_507_, 0, v_a_505_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed___redArg___lam__0___boxed(lean_object* v_a_508_, lean_object* v_x_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Lasm_UI_Decoder_succeed___redArg___lam__0(v_a_508_, v_x_509_);
lean_dec(v_x_509_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed___redArg(lean_object* v_a_511_){
_start:
{
lean_object* v___f_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___f_512_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_succeed___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_512_, 0, v_a_511_);
v___x_513_ = lean_box(0);
v___x_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
lean_ctor_set(v___x_514_, 1, v___f_512_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed(lean_object* v_00_u03b1_515_, lean_object* v_a_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Lasm_UI_Decoder_succeed___redArg(v_a_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg___lam__0(lean_object* v_x_518_){
_start:
{
lean_object* v___x_519_; 
v___x_519_ = lean_box(0);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg___lam__0___boxed(lean_object* v_x_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lasm_UI_Decoder_fail___redArg___lam__0(v_x_520_);
lean_dec(v_x_520_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg(){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = ((lean_object*)(l_Lasm_UI_Decoder_fail___redArg___closed__1));
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg___boxed(lean_object* v___dummy_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Lasm_UI_Decoder_fail___redArg();
return v_res_529_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_fail___closed__0(void){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l_Lasm_UI_Decoder_fail___redArg();
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail(lean_object* v_00_u03b1_531_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = lean_obj_once(&l_Lasm_UI_Decoder_fail___closed__0, &l_Lasm_UI_Decoder_fail___closed__0_once, _init_l_Lasm_UI_Decoder_fail___closed__0);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_field___redArg___lam__0(lean_object* v_f_533_, lean_object* v_x_534_){
_start:
{
if (lean_obj_tag(v_x_534_) == 0)
{
lean_object* v___x_535_; 
lean_dec_ref(v_f_533_);
v___x_535_ = lean_box(0);
return v___x_535_;
}
else
{
lean_object* v_head_536_; lean_object* v___x_537_; 
v_head_536_ = lean_ctor_get(v_x_534_, 0);
lean_inc(v_head_536_);
lean_dec_ref_known(v_x_534_, 2);
v___x_537_ = lean_apply_1(v_f_533_, v_head_536_);
return v___x_537_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_field___redArg(lean_object* v_p_538_, lean_object* v_f_539_){
_start:
{
lean_object* v___f_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___f_540_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_field___redArg___lam__0), 2, 1);
lean_closure_set(v___f_540_, 0, v_f_539_);
v___x_541_ = lean_box(0);
v___x_542_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_542_, 0, v_p_538_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
v___x_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
lean_ctor_set(v___x_543_, 1, v___f_540_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_field(lean_object* v_00_u03b1_544_, lean_object* v_p_545_, lean_object* v_f_546_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = l_Lasm_UI_Decoder_field___redArg(v_p_545_, v_f_546_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map___redArg___lam__0(lean_object* v_run_548_, lean_object* v_f_549_, lean_object* v_vs_550_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = lean_apply_1(v_run_548_, v_vs_550_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v___x_552_; 
lean_dec(v_f_549_);
v___x_552_ = lean_box(0);
return v___x_552_;
}
else
{
lean_object* v_val_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_561_; 
v_val_553_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_561_ == 0)
{
v___x_555_ = v___x_551_;
v_isShared_556_ = v_isSharedCheck_561_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_val_553_);
lean_dec(v___x_551_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_561_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_557_; lean_object* v___x_559_; 
v___x_557_ = lean_apply_1(v_f_549_, v_val_553_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_557_);
v___x_559_ = v___x_555_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_557_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map___redArg(lean_object* v_f_562_, lean_object* v_d_563_){
_start:
{
lean_object* v_paths_564_; lean_object* v_run_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_573_; 
v_paths_564_ = lean_ctor_get(v_d_563_, 0);
v_run_565_ = lean_ctor_get(v_d_563_, 1);
v_isSharedCheck_573_ = !lean_is_exclusive(v_d_563_);
if (v_isSharedCheck_573_ == 0)
{
v___x_567_ = v_d_563_;
v_isShared_568_ = v_isSharedCheck_573_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_run_565_);
lean_inc(v_paths_564_);
lean_dec(v_d_563_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_573_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___f_569_; lean_object* v___x_571_; 
v___f_569_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_map___redArg___lam__0), 3, 2);
lean_closure_set(v___f_569_, 0, v_run_565_);
lean_closure_set(v___f_569_, 1, v_f_562_);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 1, v___f_569_);
v___x_571_ = v___x_567_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_paths_564_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v___f_569_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map(lean_object* v_00_u03b1_574_, lean_object* v_00_u03b2_575_, lean_object* v_f_576_, lean_object* v_d_577_){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = l_Lasm_UI_Decoder_map___redArg(v_f_576_, v_d_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2___redArg___lam__0(lean_object* v_paths_581_, lean_object* v_run_582_, lean_object* v_run_583_, lean_object* v_f_584_, lean_object* v_vs_585_){
_start:
{
lean_object* v_n_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_n_586_ = l_List_lengthTR___redArg(v_paths_581_);
v___x_587_ = ((lean_object*)(l_Lasm_UI_Decoder_map2___redArg___lam__0___closed__0));
lean_inc(v_n_586_);
lean_inc(v_vs_585_);
v___x_588_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_vs_585_, v_vs_585_, v_n_586_, v___x_587_);
v___x_589_ = lean_apply_1(v_run_582_, v___x_588_);
if (lean_obj_tag(v___x_589_) == 1)
{
lean_object* v_val_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v_val_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_val_590_);
lean_dec_ref_known(v___x_589_, 1);
v___x_591_ = l_List_drop___redArg(v_n_586_, v_vs_585_);
lean_dec(v_vs_585_);
v___x_592_ = lean_apply_1(v_run_583_, v___x_591_);
if (lean_obj_tag(v___x_592_) == 1)
{
lean_object* v_val_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_601_; 
v_val_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_601_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_601_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_val_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_601_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_597_; lean_object* v___x_599_; 
v___x_597_ = lean_apply_2(v_f_584_, v_val_590_, v_val_593_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_597_);
v___x_599_ = v___x_595_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_597_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
else
{
lean_object* v___x_602_; 
lean_dec(v___x_592_);
lean_dec(v_val_590_);
lean_dec(v_f_584_);
v___x_602_ = lean_box(0);
return v___x_602_;
}
}
else
{
lean_object* v___x_603_; 
lean_dec(v___x_589_);
lean_dec(v_n_586_);
lean_dec(v_vs_585_);
lean_dec(v_f_584_);
lean_dec_ref(v_run_583_);
v___x_603_ = lean_box(0);
return v___x_603_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2___redArg___lam__0___boxed(lean_object* v_paths_604_, lean_object* v_run_605_, lean_object* v_run_606_, lean_object* v_f_607_, lean_object* v_vs_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Lasm_UI_Decoder_map2___redArg___lam__0(v_paths_604_, v_run_605_, v_run_606_, v_f_607_, v_vs_608_);
lean_dec(v_paths_604_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2___redArg(lean_object* v_f_610_, lean_object* v_d_u2081_611_, lean_object* v_d_u2082_612_){
_start:
{
lean_object* v_paths_613_; lean_object* v_run_614_; lean_object* v_paths_615_; lean_object* v_run_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_625_; 
v_paths_613_ = lean_ctor_get(v_d_u2081_611_, 0);
lean_inc(v_paths_613_);
v_run_614_ = lean_ctor_get(v_d_u2081_611_, 1);
lean_inc_ref(v_run_614_);
lean_dec_ref(v_d_u2081_611_);
v_paths_615_ = lean_ctor_get(v_d_u2082_612_, 0);
v_run_616_ = lean_ctor_get(v_d_u2082_612_, 1);
v_isSharedCheck_625_ = !lean_is_exclusive(v_d_u2082_612_);
if (v_isSharedCheck_625_ == 0)
{
v___x_618_ = v_d_u2082_612_;
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_run_616_);
lean_inc(v_paths_615_);
lean_dec(v_d_u2082_612_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___f_620_; lean_object* v___x_621_; lean_object* v___x_623_; 
lean_inc(v_paths_613_);
v___f_620_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_map2___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_620_, 0, v_paths_613_);
lean_closure_set(v___f_620_, 1, v_run_614_);
lean_closure_set(v___f_620_, 2, v_run_616_);
lean_closure_set(v___f_620_, 3, v_f_610_);
v___x_621_ = l_List_appendTR___redArg(v_paths_613_, v_paths_615_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 1, v___f_620_);
lean_ctor_set(v___x_618_, 0, v___x_621_);
v___x_623_ = v___x_618_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v___f_620_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2(lean_object* v_00_u03b1_626_, lean_object* v_00_u03b2_627_, lean_object* v_00_u03b3_628_, lean_object* v_f_629_, lean_object* v_d_u2081_630_, lean_object* v_d_u2082_631_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = l_Lasm_UI_Decoder_map2___redArg(v_f_629_, v_d_u2081_630_, v_d_u2082_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filterMap___redArg___lam__0(lean_object* v_run_633_, lean_object* v_f_634_, lean_object* v_vs_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = lean_apply_1(v_run_633_, v_vs_635_);
if (lean_obj_tag(v___x_636_) == 0)
{
lean_object* v___x_637_; 
lean_dec_ref(v_f_634_);
v___x_637_ = lean_box(0);
return v___x_637_;
}
else
{
lean_object* v_val_638_; lean_object* v___x_639_; 
v_val_638_ = lean_ctor_get(v___x_636_, 0);
lean_inc(v_val_638_);
lean_dec_ref_known(v___x_636_, 1);
v___x_639_ = lean_apply_1(v_f_634_, v_val_638_);
return v___x_639_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filterMap___redArg(lean_object* v_f_640_, lean_object* v_d_641_){
_start:
{
lean_object* v_paths_642_; lean_object* v_run_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_651_; 
v_paths_642_ = lean_ctor_get(v_d_641_, 0);
v_run_643_ = lean_ctor_get(v_d_641_, 1);
v_isSharedCheck_651_ = !lean_is_exclusive(v_d_641_);
if (v_isSharedCheck_651_ == 0)
{
v___x_645_ = v_d_641_;
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_run_643_);
lean_inc(v_paths_642_);
lean_dec(v_d_641_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___f_647_; lean_object* v___x_649_; 
v___f_647_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_filterMap___redArg___lam__0), 3, 2);
lean_closure_set(v___f_647_, 0, v_run_643_);
lean_closure_set(v___f_647_, 1, v_f_640_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 1, v___f_647_);
v___x_649_ = v___x_645_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_paths_642_);
lean_ctor_set(v_reuseFailAlloc_650_, 1, v___f_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filterMap(lean_object* v_00_u03b1_652_, lean_object* v_00_u03b2_653_, lean_object* v_f_654_, lean_object* v_d_655_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l_Lasm_UI_Decoder_filterMap___redArg(v_f_654_, v_d_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filter___redArg___lam__0(lean_object* v_p_657_, lean_object* v_a_658_){
_start:
{
lean_object* v___x_659_; uint8_t v___x_660_; 
lean_inc(v_a_658_);
v___x_659_ = lean_apply_1(v_p_657_, v_a_658_);
v___x_660_ = lean_unbox(v___x_659_);
if (v___x_660_ == 0)
{
lean_object* v___x_661_; 
lean_dec(v_a_658_);
v___x_661_ = lean_box(0);
return v___x_661_;
}
else
{
lean_object* v___x_662_; 
v___x_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_662_, 0, v_a_658_);
return v___x_662_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filter___redArg(lean_object* v_p_663_, lean_object* v_d_664_){
_start:
{
lean_object* v___f_665_; lean_object* v___x_666_; 
v___f_665_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_filter___redArg___lam__0), 2, 1);
lean_closure_set(v___f_665_, 0, v_p_663_);
v___x_666_ = l_Lasm_UI_Decoder_filterMap___redArg(v___f_665_, v_d_664_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filter(lean_object* v_00_u03b1_667_, lean_object* v_p_668_, lean_object* v_d_669_){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = l_Lasm_UI_Decoder_filter___redArg(v_p_668_, v_d_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instFunctor___lam__0(lean_object* v_a_671_, lean_object* v_x_672_){
_start:
{
lean_inc(v_a_671_);
return v_a_671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instFunctor___lam__0___boxed(lean_object* v_a_673_, lean_object* v_x_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_Lasm_UI_Decoder_instFunctor___lam__0(v_a_673_, v_x_674_);
lean_dec(v_x_674_);
lean_dec(v_a_673_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instFunctor___lam__1(lean_object* v_00_u03b1_676_, lean_object* v_00_u03b2_677_, lean_object* v_a_678_, lean_object* v_d_679_){
_start:
{
lean_object* v___f_680_; lean_object* v___x_681_; 
v___f_680_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_instFunctor___lam__0___boxed), 2, 1);
lean_closure_set(v___f_680_, 0, v_a_678_);
v___x_681_ = l_Lasm_UI_Decoder_map___redArg(v___f_680_, v_d_679_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instSeq___lam__0(lean_object* v_x1_690_, lean_object* v_x2_691_){
_start:
{
lean_object* v___x_692_; 
v___x_692_ = lean_apply_1(v_x1_690_, v_x2_691_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instSeq___lam__1(lean_object* v___f_693_, lean_object* v_00_u03b1_694_, lean_object* v_00_u03b2_695_, lean_object* v_f_696_, lean_object* v_x_697_){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_698_ = lean_box(0);
v___x_699_ = lean_apply_1(v_x_697_, v___x_698_);
v___x_700_ = l_Lasm_UI_Decoder_map2___redArg(v___f_693_, v_f_696_, v___x_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instApplicative___lam__1(lean_object* v___f_706_, lean_object* v_00_u03b1_707_, lean_object* v_00_u03b2_708_, lean_object* v_a_709_, lean_object* v_b_710_){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_711_ = ((lean_object*)(l_Lasm_UI_Decoder_instApplicative___lam__1___closed__0));
v___x_712_ = l_Lasm_UI_Decoder_map___redArg(v___x_711_, v_a_709_);
v___x_713_ = lean_box(0);
v___x_714_ = lean_apply_1(v_b_710_, v___x_713_);
v___x_715_ = l_Lasm_UI_Decoder_map2___redArg(v___f_706_, v___x_712_, v___x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instApplicative___lam__2(lean_object* v___f_719_, lean_object* v_00_u03b1_720_, lean_object* v_00_u03b2_721_, lean_object* v_a_722_, lean_object* v_b_723_){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_724_ = ((lean_object*)(l_Lasm_UI_Decoder_instApplicative___lam__2___closed__1));
v___x_725_ = l_Lasm_UI_Decoder_map___redArg(v___x_724_, v_a_722_);
v___x_726_ = lean_box(0);
v___x_727_ = lean_apply_1(v_b_723_, v___x_726_);
v___x_728_ = l_Lasm_UI_Decoder_map2___redArg(v___f_719_, v___x_725_, v___x_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_string(lean_object* v_p_741_){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = ((lean_object*)(l_Lasm_UI_Decoder_string___closed__0));
v___x_743_ = l_Lasm_UI_Decoder_field___redArg(v_p_741_, v___x_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_bool(lean_object* v_p_745_){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = ((lean_object*)(l_Lasm_UI_Decoder_bool___closed__0));
v___x_747_ = l_Lasm_UI_Decoder_field___redArg(v_p_745_, v___x_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_float(lean_object* v_p_749_){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = ((lean_object*)(l_Lasm_UI_Decoder_float___closed__0));
v___x_751_ = l_Lasm_UI_Decoder_field___redArg(v_p_749_, v___x_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_int(lean_object* v_p_753_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = ((lean_object*)(l_Lasm_UI_Decoder_int___closed__0));
v___x_755_ = l_Lasm_UI_Decoder_field___redArg(v_p_753_, v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_value___lam__0(lean_object* v_val_756_){
_start:
{
lean_object* v___x_757_; 
v___x_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_757_, 0, v_val_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_value(lean_object* v_p_759_){
_start:
{
lean_object* v___f_760_; lean_object* v___x_761_; 
v___f_760_ = ((lean_object*)(l_Lasm_UI_Decoder_value___closed__0));
v___x_761_ = l_Lasm_UI_Decoder_field___redArg(v_p_759_, v___f_760_);
return v___x_761_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_targetValue___closed__4(void){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = ((lean_object*)(l_Lasm_UI_Decoder_targetValue___closed__3));
v___x_771_ = l_Lasm_UI_Decoder_string(v___x_770_);
return v___x_771_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_targetValue(void){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = lean_obj_once(&l_Lasm_UI_Decoder_targetValue___closed__4, &l_Lasm_UI_Decoder_targetValue___closed__4_once, _init_l_Lasm_UI_Decoder_targetValue___closed__4);
return v___x_772_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_targetChecked___closed__3(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = ((lean_object*)(l_Lasm_UI_Decoder_targetChecked___closed__2));
v___x_781_ = l_Lasm_UI_Decoder_bool(v___x_780_);
return v___x_781_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_targetChecked(void){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = lean_obj_once(&l_Lasm_UI_Decoder_targetChecked___closed__3, &l_Lasm_UI_Decoder_targetChecked___closed__3_once, _init_l_Lasm_UI_Decoder_targetChecked___closed__3);
return v___x_782_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_key___closed__2(void){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = ((lean_object*)(l_Lasm_UI_Decoder_key___closed__1));
v___x_788_ = l_Lasm_UI_Decoder_string(v___x_787_);
return v___x_788_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_key(void){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = lean_obj_once(&l_Lasm_UI_Decoder_key___closed__2, &l_Lasm_UI_Decoder_key___closed__2_once, _init_l_Lasm_UI_Decoder_key___closed__2);
return v___x_789_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_ctrlKey___closed__2(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_794_ = ((lean_object*)(l_Lasm_UI_Decoder_ctrlKey___closed__1));
v___x_795_ = l_Lasm_UI_Decoder_bool(v___x_794_);
return v___x_795_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_ctrlKey(void){
_start:
{
lean_object* v___x_796_; 
v___x_796_ = lean_obj_once(&l_Lasm_UI_Decoder_ctrlKey___closed__2, &l_Lasm_UI_Decoder_ctrlKey___closed__2_once, _init_l_Lasm_UI_Decoder_ctrlKey___closed__2);
return v___x_796_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_shiftKey___closed__2(void){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = ((lean_object*)(l_Lasm_UI_Decoder_shiftKey___closed__1));
v___x_802_ = l_Lasm_UI_Decoder_bool(v___x_801_);
return v___x_802_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_shiftKey(void){
_start:
{
lean_object* v___x_803_; 
v___x_803_ = lean_obj_once(&l_Lasm_UI_Decoder_shiftKey___closed__2, &l_Lasm_UI_Decoder_shiftKey___closed__2_once, _init_l_Lasm_UI_Decoder_shiftKey___closed__2);
return v___x_803_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_altKey___closed__2(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = ((lean_object*)(l_Lasm_UI_Decoder_altKey___closed__1));
v___x_809_ = l_Lasm_UI_Decoder_bool(v___x_808_);
return v___x_809_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_altKey(void){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = lean_obj_once(&l_Lasm_UI_Decoder_altKey___closed__2, &l_Lasm_UI_Decoder_altKey___closed__2_once, _init_l_Lasm_UI_Decoder_altKey___closed__2);
return v___x_810_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_metaKey___closed__2(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_815_ = ((lean_object*)(l_Lasm_UI_Decoder_metaKey___closed__1));
v___x_816_ = l_Lasm_UI_Decoder_bool(v___x_815_);
return v___x_816_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_metaKey(void){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = lean_obj_once(&l_Lasm_UI_Decoder_metaKey___closed__2, &l_Lasm_UI_Decoder_metaKey___closed__2_once, _init_l_Lasm_UI_Decoder_metaKey___closed__2);
return v___x_817_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientX___closed__2(void){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = ((lean_object*)(l_Lasm_UI_Decoder_clientX___closed__1));
v___x_823_ = l_Lasm_UI_Decoder_float(v___x_822_);
return v___x_823_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientX(void){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = lean_obj_once(&l_Lasm_UI_Decoder_clientX___closed__2, &l_Lasm_UI_Decoder_clientX___closed__2_once, _init_l_Lasm_UI_Decoder_clientX___closed__2);
return v___x_824_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientY___closed__2(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = ((lean_object*)(l_Lasm_UI_Decoder_clientY___closed__1));
v___x_830_ = l_Lasm_UI_Decoder_float(v___x_829_);
return v___x_830_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientY(void){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = lean_obj_once(&l_Lasm_UI_Decoder_clientY___closed__2, &l_Lasm_UI_Decoder_clientY___closed__2_once, _init_l_Lasm_UI_Decoder_clientY___closed__2);
return v___x_831_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetX___closed__2(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = ((lean_object*)(l_Lasm_UI_Decoder_offsetX___closed__1));
v___x_837_ = l_Lasm_UI_Decoder_float(v___x_836_);
return v___x_837_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetX(void){
_start:
{
lean_object* v___x_838_; 
v___x_838_ = lean_obj_once(&l_Lasm_UI_Decoder_offsetX___closed__2, &l_Lasm_UI_Decoder_offsetX___closed__2_once, _init_l_Lasm_UI_Decoder_offsetX___closed__2);
return v___x_838_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetY___closed__2(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = ((lean_object*)(l_Lasm_UI_Decoder_offsetY___closed__1));
v___x_844_ = l_Lasm_UI_Decoder_float(v___x_843_);
return v___x_844_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetY(void){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = lean_obj_once(&l_Lasm_UI_Decoder_offsetY___closed__2, &l_Lasm_UI_Decoder_offsetY___closed__2_once, _init_l_Lasm_UI_Decoder_offsetY___closed__2);
return v___x_845_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_button___closed__2(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = ((lean_object*)(l_Lasm_UI_Decoder_button___closed__1));
v___x_851_ = l_Lasm_UI_Decoder_int(v___x_850_);
return v___x_851_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_button(void){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = lean_obj_once(&l_Lasm_UI_Decoder_button___closed__2, &l_Lasm_UI_Decoder_button___closed__2_once, _init_l_Lasm_UI_Decoder_button___closed__2);
return v___x_852_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_deltaY___closed__2(void){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_857_ = ((lean_object*)(l_Lasm_UI_Decoder_deltaY___closed__1));
v___x_858_ = l_Lasm_UI_Decoder_float(v___x_857_);
return v___x_858_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_deltaY(void){
_start:
{
lean_object* v___x_859_; 
v___x_859_ = lean_obj_once(&l_Lasm_UI_Decoder_deltaY___closed__2, &l_Lasm_UI_Decoder_deltaY___closed__2_once, _init_l_Lasm_UI_Decoder_deltaY___closed__2);
return v___x_859_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_timeStamp___closed__2(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = ((lean_object*)(l_Lasm_UI_Decoder_timeStamp___closed__1));
v___x_865_ = l_Lasm_UI_Decoder_float(v___x_864_);
return v___x_865_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_timeStamp(void){
_start:
{
lean_object* v___x_866_; 
v___x_866_ = lean_obj_once(&l_Lasm_UI_Decoder_timeStamp___closed__2, &l_Lasm_UI_Decoder_timeStamp___closed__2_once, _init_l_Lasm_UI_Decoder_timeStamp___closed__2);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_dataset(lean_object* v_name_868_){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_869_ = ((lean_object*)(l_Lasm_UI_Decoder_targetValue___closed__0));
v___x_870_ = ((lean_object*)(l_Lasm_UI_Decoder_dataset___closed__0));
v___x_871_ = lean_box(0);
v___x_872_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_872_, 0, v_name_868_);
lean_ctor_set(v___x_872_, 1, v___x_871_);
v___x_873_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_870_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_869_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
v___x_875_ = l_Lasm_UI_Decoder_string(v___x_874_);
return v___x_875_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener_decEq___lam__0(lean_object* v_a_876_, lean_object* v_b_877_){
_start:
{
lean_object* v___x_878_; uint8_t v___x_879_; 
v___x_878_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___x_879_ = l_instDecidableEqList___redArg(v___x_878_, v_a_876_, v_b_877_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener_decEq___lam__0___boxed(lean_object* v_a_880_, lean_object* v_b_881_){
_start:
{
uint8_t v_res_882_; lean_object* v_r_883_; 
v_res_882_ = l_Lasm_UI_instDecidableEqListener_decEq___lam__0(v_a_880_, v_b_881_);
v_r_883_ = lean_box(v_res_882_);
return v_r_883_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener_decEq(lean_object* v_x_885_, lean_object* v_x_886_){
_start:
{
lean_object* v_event_887_; lean_object* v_paths_888_; uint8_t v_preventDefault_889_; uint8_t v_stopPropagation_890_; lean_object* v_event_891_; lean_object* v_paths_892_; uint8_t v_preventDefault_893_; uint8_t v_stopPropagation_894_; uint8_t v___y_896_; uint8_t v___x_897_; 
v_event_887_ = lean_ctor_get(v_x_885_, 0);
lean_inc_ref(v_event_887_);
v_paths_888_ = lean_ctor_get(v_x_885_, 1);
lean_inc(v_paths_888_);
v_preventDefault_889_ = lean_ctor_get_uint8(v_x_885_, sizeof(void*)*2);
v_stopPropagation_890_ = lean_ctor_get_uint8(v_x_885_, sizeof(void*)*2 + 1);
lean_dec_ref(v_x_885_);
v_event_891_ = lean_ctor_get(v_x_886_, 0);
lean_inc_ref(v_event_891_);
v_paths_892_ = lean_ctor_get(v_x_886_, 1);
lean_inc(v_paths_892_);
v_preventDefault_893_ = lean_ctor_get_uint8(v_x_886_, sizeof(void*)*2);
v_stopPropagation_894_ = lean_ctor_get_uint8(v_x_886_, sizeof(void*)*2 + 1);
lean_dec_ref(v_x_886_);
v___x_897_ = lean_string_dec_eq(v_event_887_, v_event_891_);
lean_dec_ref(v_event_891_);
lean_dec_ref(v_event_887_);
if (v___x_897_ == 0)
{
lean_dec(v_paths_892_);
lean_dec(v_paths_888_);
return v___x_897_;
}
else
{
lean_object* v___f_898_; uint8_t v___x_899_; 
v___f_898_ = ((lean_object*)(l_Lasm_UI_instDecidableEqListener_decEq___closed__0));
v___x_899_ = l_instDecidableEqList___redArg(v___f_898_, v_paths_888_, v_paths_892_);
if (v___x_899_ == 0)
{
return v___x_899_;
}
else
{
if (v_preventDefault_893_ == 0)
{
if (v_preventDefault_889_ == 0)
{
v___y_896_ = v___x_899_;
goto v___jp_895_;
}
else
{
return v_preventDefault_893_;
}
}
else
{
if (v_preventDefault_889_ == 0)
{
return v_preventDefault_889_;
}
else
{
v___y_896_ = v_preventDefault_889_;
goto v___jp_895_;
}
}
}
}
v___jp_895_:
{
if (v_stopPropagation_894_ == 0)
{
if (v_stopPropagation_890_ == 0)
{
return v___y_896_;
}
else
{
return v_stopPropagation_894_;
}
}
else
{
return v_stopPropagation_890_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener_decEq___boxed(lean_object* v_x_900_, lean_object* v_x_901_){
_start:
{
uint8_t v_res_902_; lean_object* v_r_903_; 
v_res_902_ = l_Lasm_UI_instDecidableEqListener_decEq(v_x_900_, v_x_901_);
v_r_903_ = lean_box(v_res_902_);
return v_r_903_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener(lean_object* v_x_904_, lean_object* v_x_905_){
_start:
{
uint8_t v___x_906_; 
v___x_906_ = l_Lasm_UI_instDecidableEqListener_decEq(v_x_904_, v_x_905_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener___boxed(lean_object* v_x_907_, lean_object* v_x_908_){
_start:
{
uint8_t v_res_909_; lean_object* v_r_910_; 
v_res_909_ = l_Lasm_UI_instDecidableEqListener(v_x_907_, v_x_908_);
v_r_910_ = lean_box(v_res_909_);
return v_r_910_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_911_, lean_object* v_x_912_, lean_object* v_x_913_){
_start:
{
if (lean_obj_tag(v_x_913_) == 0)
{
lean_dec(v_x_911_);
return v_x_912_;
}
else
{
lean_object* v_head_914_; lean_object* v_tail_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_925_; 
v_head_914_ = lean_ctor_get(v_x_913_, 0);
v_tail_915_ = lean_ctor_get(v_x_913_, 1);
v_isSharedCheck_925_ = !lean_is_exclusive(v_x_913_);
if (v_isSharedCheck_925_ == 0)
{
v___x_917_ = v_x_913_;
v_isShared_918_ = v_isSharedCheck_925_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_tail_915_);
lean_inc(v_head_914_);
lean_dec(v_x_913_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_925_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
lean_inc(v_x_911_);
if (v_isShared_918_ == 0)
{
lean_ctor_set_tag(v___x_917_, 5);
lean_ctor_set(v___x_917_, 1, v_x_911_);
lean_ctor_set(v___x_917_, 0, v_x_912_);
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_x_912_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v_x_911_);
v___x_920_ = v_reuseFailAlloc_924_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_921_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_914_);
v___x_922_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_920_);
lean_ctor_set(v___x_922_, 1, v___x_921_);
v_x_912_ = v___x_922_;
v_x_913_ = v_tail_915_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1(lean_object* v_x_926_, lean_object* v_x_927_, lean_object* v_x_928_){
_start:
{
if (lean_obj_tag(v_x_928_) == 0)
{
lean_dec(v_x_926_);
return v_x_927_;
}
else
{
lean_object* v_head_929_; lean_object* v_tail_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_940_; 
v_head_929_ = lean_ctor_get(v_x_928_, 0);
v_tail_930_ = lean_ctor_get(v_x_928_, 1);
v_isSharedCheck_940_ = !lean_is_exclusive(v_x_928_);
if (v_isSharedCheck_940_ == 0)
{
v___x_932_ = v_x_928_;
v_isShared_933_ = v_isSharedCheck_940_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_tail_930_);
lean_inc(v_head_929_);
lean_dec(v_x_928_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_940_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_935_; 
lean_inc(v_x_926_);
if (v_isShared_933_ == 0)
{
lean_ctor_set_tag(v___x_932_, 5);
lean_ctor_set(v___x_932_, 1, v_x_926_);
lean_ctor_set(v___x_932_, 0, v_x_927_);
v___x_935_ = v___x_932_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_x_927_);
lean_ctor_set(v_reuseFailAlloc_939_, 1, v_x_926_);
v___x_935_ = v_reuseFailAlloc_939_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_936_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_929_);
v___x_937_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_935_);
lean_ctor_set(v___x_937_, 1, v___x_936_);
v___x_938_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1_spec__2(v_x_926_, v___x_937_, v_tail_930_);
return v___x_938_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0(lean_object* v_x_941_, lean_object* v_x_942_){
_start:
{
if (lean_obj_tag(v_x_941_) == 0)
{
lean_object* v___x_943_; 
lean_dec(v_x_942_);
v___x_943_ = lean_box(0);
return v___x_943_;
}
else
{
lean_object* v_tail_944_; 
v_tail_944_ = lean_ctor_get(v_x_941_, 1);
if (lean_obj_tag(v_tail_944_) == 0)
{
lean_object* v_head_945_; lean_object* v___x_946_; 
lean_dec(v_x_942_);
v_head_945_ = lean_ctor_get(v_x_941_, 0);
lean_inc(v_head_945_);
lean_dec_ref_known(v_x_941_, 2);
v___x_946_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_945_);
return v___x_946_;
}
else
{
lean_object* v_head_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
lean_inc(v_tail_944_);
v_head_947_ = lean_ctor_get(v_x_941_, 0);
lean_inc(v_head_947_);
lean_dec_ref_known(v_x_941_, 2);
v___x_948_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_947_);
v___x_949_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1(v_x_942_, v___x_948_, v_tail_944_);
return v___x_949_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_961_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__2));
v___x_962_ = lean_string_length(v___x_961_);
return v___x_962_;
}
}
static lean_object* _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = lean_obj_once(&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7, &l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7_once, _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7);
v___x_964_ = lean_nat_to_int(v___x_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(lean_object* v_a_969_){
_start:
{
if (lean_obj_tag(v_a_969_) == 0)
{
lean_object* v___x_970_; 
v___x_970_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__1));
return v___x_970_;
}
else
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; lean_object* v___x_980_; 
v___x_971_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__5));
v___x_972_ = l_Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0(v_a_969_, v___x_971_);
v___x_973_ = lean_obj_once(&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8, &l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8_once, _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8);
v___x_974_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__9));
v___x_975_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
lean_ctor_set(v___x_975_, 1, v___x_972_);
v___x_976_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__10));
v___x_977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_975_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_973_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = 0;
v___x_980_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*1, v___x_979_);
return v___x_980_;
}
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = lean_unsigned_to_nat(9u);
v___x_995_ = lean_nat_to_int(v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1002_ = lean_unsigned_to_nat(18u);
v___x_1003_ = lean_nat_to_int(v___x_1002_);
return v___x_1003_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = lean_unsigned_to_nat(19u);
v___x_1008_ = lean_nat_to_int(v___x_1007_);
return v___x_1008_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__0));
v___x_1011_ = lean_string_length(v___x_1010_);
return v___x_1011_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1012_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__17, &l_Lasm_UI_instReprListener_repr___redArg___closed__17_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__17);
v___x_1013_ = lean_nat_to_int(v___x_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___redArg(lean_object* v_x_1018_){
_start:
{
lean_object* v_event_1019_; lean_object* v_paths_1020_; uint8_t v_preventDefault_1021_; uint8_t v_stopPropagation_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; uint8_t v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v_event_1019_ = lean_ctor_get(v_x_1018_, 0);
lean_inc_ref(v_event_1019_);
v_paths_1020_ = lean_ctor_get(v_x_1018_, 1);
lean_inc(v_paths_1020_);
v_preventDefault_1021_ = lean_ctor_get_uint8(v_x_1018_, sizeof(void*)*2);
v_stopPropagation_1022_ = lean_ctor_get_uint8(v_x_1018_, sizeof(void*)*2 + 1);
lean_dec_ref(v_x_1018_);
v___x_1023_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__5));
v___x_1024_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__6));
v___x_1025_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__7, &l_Lasm_UI_instReprListener_repr___redArg___closed__7_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__7);
v___x_1026_ = l_String_quote(v_event_1019_);
v___x_1027_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
v___x_1028_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1025_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = 0;
v___x_1030_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1030_, 0, v___x_1028_);
lean_ctor_set_uint8(v___x_1030_, sizeof(void*)*1, v___x_1029_);
v___x_1031_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1024_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
v___x_1032_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__4));
v___x_1033_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1031_);
lean_ctor_set(v___x_1033_, 1, v___x_1032_);
v___x_1034_ = lean_box(1);
v___x_1035_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1033_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__9));
v___x_1037_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1035_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
lean_ctor_set(v___x_1038_, 1, v___x_1023_);
v___x_1039_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_paths_1020_);
v___x_1040_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1025_);
lean_ctor_set(v___x_1040_, 1, v___x_1039_);
v___x_1041_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
lean_ctor_set_uint8(v___x_1041_, sizeof(void*)*1, v___x_1029_);
v___x_1042_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1038_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
lean_ctor_set(v___x_1043_, 1, v___x_1032_);
v___x_1044_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
lean_ctor_set(v___x_1044_, 1, v___x_1034_);
v___x_1045_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__11));
v___x_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1044_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
lean_ctor_set(v___x_1047_, 1, v___x_1023_);
v___x_1048_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__12, &l_Lasm_UI_instReprListener_repr___redArg___closed__12_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__12);
v___x_1049_ = l_Bool_repr___redArg(v_preventDefault_1021_);
v___x_1050_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1048_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
lean_ctor_set_uint8(v___x_1051_, sizeof(void*)*1, v___x_1029_);
v___x_1052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1047_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
lean_ctor_set(v___x_1053_, 1, v___x_1032_);
v___x_1054_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
lean_ctor_set(v___x_1054_, 1, v___x_1034_);
v___x_1055_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__14));
v___x_1056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
lean_ctor_set(v___x_1057_, 1, v___x_1023_);
v___x_1058_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__15, &l_Lasm_UI_instReprListener_repr___redArg___closed__15_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__15);
v___x_1059_ = l_Bool_repr___redArg(v_stopPropagation_1022_);
v___x_1060_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1058_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1061_, 0, v___x_1060_);
lean_ctor_set_uint8(v___x_1061_, sizeof(void*)*1, v___x_1029_);
v___x_1062_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1057_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
v___x_1063_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__18, &l_Lasm_UI_instReprListener_repr___redArg___closed__18_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__18);
v___x_1064_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__19));
v___x_1065_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
lean_ctor_set(v___x_1065_, 1, v___x_1062_);
v___x_1066_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__20));
v___x_1067_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1063_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*1, v___x_1029_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr(lean_object* v_x_1070_, lean_object* v_prec_1071_){
_start:
{
lean_object* v___x_1072_; 
v___x_1072_ = l_Lasm_UI_instReprListener_repr___redArg(v_x_1070_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___boxed(lean_object* v_x_1073_, lean_object* v_prec_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l_Lasm_UI_instReprListener_repr(v_x_1073_, v_prec_1074_);
lean_dec(v_prec_1074_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0(lean_object* v_a_1076_, lean_object* v_n_1077_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_a_1076_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___boxed(lean_object* v_a_1079_, lean_object* v_n_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0(v_a_1079_, v_n_1080_);
lean_dec(v_n_1080_);
return v_res_1081_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(uint64_t v_x_1090_, lean_object* v_x_1091_){
_start:
{
if (lean_obj_tag(v_x_1091_) == 0)
{
return v_x_1090_;
}
else
{
lean_object* v_head_1092_; lean_object* v_tail_1093_; uint64_t v___x_1094_; uint64_t v___x_1095_; 
v_head_1092_ = lean_ctor_get(v_x_1091_, 0);
v_tail_1093_ = lean_ctor_get(v_x_1091_, 1);
v___x_1094_ = lean_string_hash(v_head_1092_);
v___x_1095_ = lean_uint64_mix_hash(v_x_1090_, v___x_1094_);
v_x_1090_ = v___x_1095_;
v_x_1091_ = v_tail_1093_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0___boxed(lean_object* v_x_1097_, lean_object* v_x_1098_){
_start:
{
uint64_t v_x_131__boxed_1099_; uint64_t v_res_1100_; lean_object* v_r_1101_; 
v_x_131__boxed_1099_ = lean_unbox_uint64(v_x_1097_);
lean_dec_ref(v_x_1097_);
v_res_1100_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(v_x_131__boxed_1099_, v_x_1098_);
lean_dec(v_x_1098_);
v_r_1101_ = lean_box_uint64(v_res_1100_);
return v_r_1101_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(uint64_t v_x_1102_, lean_object* v_x_1103_){
_start:
{
if (lean_obj_tag(v_x_1103_) == 0)
{
return v_x_1102_;
}
else
{
lean_object* v_head_1104_; lean_object* v_tail_1105_; uint64_t v___x_1106_; uint64_t v___x_1107_; uint64_t v___x_1108_; 
v_head_1104_ = lean_ctor_get(v_x_1103_, 0);
v_tail_1105_ = lean_ctor_get(v_x_1103_, 1);
v___x_1106_ = 7ULL;
v___x_1107_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(v___x_1106_, v_head_1104_);
v___x_1108_ = lean_uint64_mix_hash(v_x_1102_, v___x_1107_);
v_x_1102_ = v___x_1108_;
v_x_1103_ = v_tail_1105_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1___boxed(lean_object* v_x_1110_, lean_object* v_x_1111_){
_start:
{
uint64_t v_x_147__boxed_1112_; uint64_t v_res_1113_; lean_object* v_r_1114_; 
v_x_147__boxed_1112_ = lean_unbox_uint64(v_x_1110_);
lean_dec_ref(v_x_1110_);
v_res_1113_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v_x_147__boxed_1112_, v_x_1111_);
lean_dec(v_x_1111_);
v_r_1114_ = lean_box_uint64(v_res_1113_);
return v_r_1114_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableListener_hash(lean_object* v_x_1115_){
_start:
{
lean_object* v_event_1116_; lean_object* v_paths_1117_; uint8_t v_preventDefault_1118_; uint8_t v_stopPropagation_1119_; uint64_t v___x_1120_; uint64_t v___x_1121_; uint64_t v___x_1122_; uint64_t v___x_1123_; uint64_t v___x_1124_; uint64_t v___x_1125_; uint64_t v___y_1127_; 
v_event_1116_ = lean_ctor_get(v_x_1115_, 0);
v_paths_1117_ = lean_ctor_get(v_x_1115_, 1);
v_preventDefault_1118_ = lean_ctor_get_uint8(v_x_1115_, sizeof(void*)*2);
v_stopPropagation_1119_ = lean_ctor_get_uint8(v_x_1115_, sizeof(void*)*2 + 1);
v___x_1120_ = 0ULL;
v___x_1121_ = lean_string_hash(v_event_1116_);
v___x_1122_ = lean_uint64_mix_hash(v___x_1120_, v___x_1121_);
v___x_1123_ = 7ULL;
v___x_1124_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_1123_, v_paths_1117_);
v___x_1125_ = lean_uint64_mix_hash(v___x_1122_, v___x_1124_);
if (v_preventDefault_1118_ == 0)
{
uint64_t v___x_1133_; 
v___x_1133_ = 13ULL;
v___y_1127_ = v___x_1133_;
goto v___jp_1126_;
}
else
{
uint64_t v___x_1134_; 
v___x_1134_ = 11ULL;
v___y_1127_ = v___x_1134_;
goto v___jp_1126_;
}
v___jp_1126_:
{
uint64_t v___x_1128_; 
v___x_1128_ = lean_uint64_mix_hash(v___x_1125_, v___y_1127_);
if (v_stopPropagation_1119_ == 0)
{
uint64_t v___x_1129_; uint64_t v___x_1130_; 
v___x_1129_ = 13ULL;
v___x_1130_ = lean_uint64_mix_hash(v___x_1128_, v___x_1129_);
return v___x_1130_;
}
else
{
uint64_t v___x_1131_; uint64_t v___x_1132_; 
v___x_1131_ = 11ULL;
v___x_1132_ = lean_uint64_mix_hash(v___x_1128_, v___x_1131_);
return v___x_1132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableListener_hash___boxed(lean_object* v_x_1135_){
_start:
{
uint64_t v_res_1136_; lean_object* v_r_1137_; 
v_res_1136_ = l_Lasm_UI_instHashableListener_hash(v_x_1135_);
lean_dec_ref(v_x_1135_);
v_r_1137_ = lean_box_uint64(v_res_1136_);
return v_r_1137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl___redArg(lean_object* v_x_1140_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = lean_obj_tag_nat(v_x_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl___redArg___boxed(lean_object* v_x_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_Lasm_UI_Attr_ctorIdx___impl___redArg(v_x_1142_);
lean_dec_ref(v_x_1142_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl(lean_object* v_Msg_1144_, lean_object* v_x_1145_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = lean_obj_tag_nat(v_x_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl___boxed(lean_object* v_Msg_1147_, lean_object* v_x_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lasm_UI_Attr_ctorIdx___impl(v_Msg_1147_, v_x_1148_);
lean_dec_ref(v_x_1148_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim___redArg(lean_object* v_t_1150_, lean_object* v_k_1151_){
_start:
{
lean_object* v_name_1152_; lean_object* v_value_1153_; lean_object* v___x_1154_; 
v_name_1152_ = lean_ctor_get(v_t_1150_, 0);
lean_inc_ref(v_name_1152_);
v_value_1153_ = lean_ctor_get(v_t_1150_, 1);
lean_inc_ref(v_value_1153_);
lean_dec_ref(v_t_1150_);
v___x_1154_ = lean_apply_2(v_k_1151_, v_name_1152_, v_value_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim(lean_object* v_Msg_1155_, lean_object* v_motive_1156_, lean_object* v_ctorIdx_1157_, lean_object* v_t_1158_, lean_object* v_h_1159_, lean_object* v_k_1160_){
_start:
{
lean_object* v___x_1161_; 
v___x_1161_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1158_, v_k_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim___boxed(lean_object* v_Msg_1162_, lean_object* v_motive_1163_, lean_object* v_ctorIdx_1164_, lean_object* v_t_1165_, lean_object* v_h_1166_, lean_object* v_k_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lasm_UI_Attr_ctorElim(v_Msg_1162_, v_motive_1163_, v_ctorIdx_1164_, v_t_1165_, v_h_1166_, v_k_1167_);
lean_dec(v_ctorIdx_1164_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_attr_elim___redArg(lean_object* v_t_1169_, lean_object* v_attr_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1169_, v_attr_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_attr_elim(lean_object* v_Msg_1172_, lean_object* v_motive_1173_, lean_object* v_t_1174_, lean_object* v_h_1175_, lean_object* v_attr_1176_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1174_, v_attr_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_prop_elim___redArg(lean_object* v_t_1178_, lean_object* v_prop_1179_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1178_, v_prop_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_prop_elim(lean_object* v_Msg_1181_, lean_object* v_motive_1182_, lean_object* v_t_1183_, lean_object* v_h_1184_, lean_object* v_prop_1185_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1183_, v_prop_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_style_elim___redArg(lean_object* v_t_1187_, lean_object* v_style_1188_){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1187_, v_style_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_style_elim(lean_object* v_Msg_1190_, lean_object* v_motive_1191_, lean_object* v_t_1192_, lean_object* v_h_1193_, lean_object* v_style_1194_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1192_, v_style_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_on_elim___redArg(lean_object* v_t_1196_, lean_object* v_on_1197_){
_start:
{
lean_object* v___x_1198_; 
v___x_1198_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1196_, v_on_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_on_elim(lean_object* v_Msg_1199_, lean_object* v_motive_1200_, lean_object* v_t_1201_, lean_object* v_h_1202_, lean_object* v_on_1203_){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1201_, v_on_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr___redArg(){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = ((lean_object*)(l_Lasm_UI_instInhabitedAttr___redArg___closed__0));
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr___redArg___boxed(lean_object* v___dummy_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l_Lasm_UI_instInhabitedAttr___redArg();
return v_res_1210_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedAttr___closed__0(void){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Lasm_UI_instInhabitedAttr___redArg();
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr(lean_object* v_Msg_1212_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = lean_obj_once(&l_Lasm_UI_instInhabitedAttr___closed__0, &l_Lasm_UI_instInhabitedAttr___closed__0_once, _init_l_Lasm_UI_instInhabitedAttr___closed__0);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx___impl(lean_object* v_x_1214_){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = lean_obj_tag_nat(v_x_1214_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx___impl___boxed(lean_object* v_x_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l_Lasm_UI_AttrKey_ctorIdx___impl(v_x_1216_);
lean_dec_ref(v_x_1216_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim___redArg(lean_object* v_t_1218_, lean_object* v_k_1219_){
_start:
{
lean_object* v_name_1220_; lean_object* v___x_1221_; 
v_name_1220_ = lean_ctor_get(v_t_1218_, 0);
lean_inc_ref(v_name_1220_);
lean_dec_ref(v_t_1218_);
v___x_1221_ = lean_apply_1(v_k_1219_, v_name_1220_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim(lean_object* v_motive_1222_, lean_object* v_ctorIdx_1223_, lean_object* v_t_1224_, lean_object* v_h_1225_, lean_object* v_k_1226_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1224_, v_k_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim___boxed(lean_object* v_motive_1228_, lean_object* v_ctorIdx_1229_, lean_object* v_t_1230_, lean_object* v_h_1231_, lean_object* v_k_1232_){
_start:
{
lean_object* v_res_1233_; 
v_res_1233_ = l_Lasm_UI_AttrKey_ctorElim(v_motive_1228_, v_ctorIdx_1229_, v_t_1230_, v_h_1231_, v_k_1232_);
lean_dec(v_ctorIdx_1229_);
return v_res_1233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_attr_elim___redArg(lean_object* v_t_1234_, lean_object* v_attr_1235_){
_start:
{
lean_object* v___x_1236_; 
v___x_1236_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1234_, v_attr_1235_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_attr_elim(lean_object* v_motive_1237_, lean_object* v_t_1238_, lean_object* v_h_1239_, lean_object* v_attr_1240_){
_start:
{
lean_object* v___x_1241_; 
v___x_1241_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1238_, v_attr_1240_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_prop_elim___redArg(lean_object* v_t_1242_, lean_object* v_prop_1243_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1242_, v_prop_1243_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_prop_elim(lean_object* v_motive_1245_, lean_object* v_t_1246_, lean_object* v_h_1247_, lean_object* v_prop_1248_){
_start:
{
lean_object* v___x_1249_; 
v___x_1249_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1246_, v_prop_1248_);
return v___x_1249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_style_elim___redArg(lean_object* v_t_1250_, lean_object* v_style_1251_){
_start:
{
lean_object* v___x_1252_; 
v___x_1252_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1250_, v_style_1251_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_style_elim(lean_object* v_motive_1253_, lean_object* v_t_1254_, lean_object* v_h_1255_, lean_object* v_style_1256_){
_start:
{
lean_object* v___x_1257_; 
v___x_1257_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1254_, v_style_1256_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_on_elim___redArg(lean_object* v_t_1258_, lean_object* v_on_1259_){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1258_, v_on_1259_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_on_elim(lean_object* v_motive_1261_, lean_object* v_t_1262_, lean_object* v_h_1263_, lean_object* v_on_1264_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1262_, v_on_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrKey_decEq(lean_object* v_x_1266_, lean_object* v_x_1267_){
_start:
{
switch(lean_obj_tag(v_x_1266_))
{
case 0:
{
if (lean_obj_tag(v_x_1267_) == 0)
{
lean_object* v_name_1268_; lean_object* v_name_1269_; uint8_t v___x_1270_; 
v_name_1268_ = lean_ctor_get(v_x_1266_, 0);
v_name_1269_ = lean_ctor_get(v_x_1267_, 0);
v___x_1270_ = lean_string_dec_eq(v_name_1268_, v_name_1269_);
return v___x_1270_;
}
else
{
uint8_t v___x_1271_; 
v___x_1271_ = 0;
return v___x_1271_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1267_) == 1)
{
lean_object* v_name_1272_; lean_object* v_name_1273_; uint8_t v___x_1274_; 
v_name_1272_ = lean_ctor_get(v_x_1266_, 0);
v_name_1273_ = lean_ctor_get(v_x_1267_, 0);
v___x_1274_ = lean_string_dec_eq(v_name_1272_, v_name_1273_);
return v___x_1274_;
}
else
{
uint8_t v___x_1275_; 
v___x_1275_ = 0;
return v___x_1275_;
}
}
case 2:
{
if (lean_obj_tag(v_x_1267_) == 2)
{
lean_object* v_name_1276_; lean_object* v_name_1277_; uint8_t v___x_1278_; 
v_name_1276_ = lean_ctor_get(v_x_1266_, 0);
v_name_1277_ = lean_ctor_get(v_x_1267_, 0);
v___x_1278_ = lean_string_dec_eq(v_name_1276_, v_name_1277_);
return v___x_1278_;
}
else
{
uint8_t v___x_1279_; 
v___x_1279_ = 0;
return v___x_1279_;
}
}
default: 
{
if (lean_obj_tag(v_x_1267_) == 3)
{
lean_object* v_event_1280_; lean_object* v_event_1281_; uint8_t v___x_1282_; 
v_event_1280_ = lean_ctor_get(v_x_1266_, 0);
v_event_1281_ = lean_ctor_get(v_x_1267_, 0);
v___x_1282_ = lean_string_dec_eq(v_event_1280_, v_event_1281_);
return v___x_1282_;
}
else
{
uint8_t v___x_1283_; 
v___x_1283_ = 0;
return v___x_1283_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrKey_decEq___boxed(lean_object* v_x_1284_, lean_object* v_x_1285_){
_start:
{
uint8_t v_res_1286_; lean_object* v_r_1287_; 
v_res_1286_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_x_1284_, v_x_1285_);
lean_dec_ref(v_x_1285_);
lean_dec_ref(v_x_1284_);
v_r_1287_ = lean_box(v_res_1286_);
return v_r_1287_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrKey(lean_object* v_x_1288_, lean_object* v_x_1289_){
_start:
{
uint8_t v___x_1290_; 
v___x_1290_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_x_1288_, v_x_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrKey___boxed(lean_object* v_x_1291_, lean_object* v_x_1292_){
_start:
{
uint8_t v_res_1293_; lean_object* v_r_1294_; 
v_res_1293_ = l_Lasm_UI_instDecidableEqAttrKey(v_x_1291_, v_x_1292_);
lean_dec_ref(v_x_1292_);
lean_dec_ref(v_x_1291_);
v_r_1294_ = lean_box(v_res_1293_);
return v_r_1294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrKey_repr(lean_object* v_x_1319_, lean_object* v_prec_1320_){
_start:
{
switch(lean_obj_tag(v_x_1319_))
{
case 0:
{
lean_object* v_name_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1341_; 
v_name_1321_ = lean_ctor_get(v_x_1319_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v_x_1319_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1323_ = v_x_1319_;
v_isShared_1324_ = v_isSharedCheck_1341_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_name_1321_);
lean_dec(v_x_1319_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1341_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___y_1326_; lean_object* v___x_1337_; uint8_t v___x_1338_; 
v___x_1337_ = lean_unsigned_to_nat(1024u);
v___x_1338_ = lean_nat_dec_le(v___x_1337_, v_prec_1320_);
if (v___x_1338_ == 0)
{
lean_object* v___x_1339_; 
v___x_1339_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1326_ = v___x_1339_;
goto v___jp_1325_;
}
else
{
lean_object* v___x_1340_; 
v___x_1340_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1326_ = v___x_1340_;
goto v___jp_1325_;
}
v___jp_1325_:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1330_; 
v___x_1327_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__2));
v___x_1328_ = l_String_quote(v_name_1321_);
if (v_isShared_1324_ == 0)
{
lean_ctor_set_tag(v___x_1323_, 3);
lean_ctor_set(v___x_1323_, 0, v___x_1328_);
v___x_1330_ = v___x_1323_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v___x_1328_);
v___x_1330_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; uint8_t v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1327_);
lean_ctor_set(v___x_1331_, 1, v___x_1330_);
lean_inc(v___y_1326_);
v___x_1332_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___y_1326_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
v___x_1333_ = 0;
v___x_1334_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1334_, 0, v___x_1332_);
lean_ctor_set_uint8(v___x_1334_, sizeof(void*)*1, v___x_1333_);
v___x_1335_ = l_Repr_addAppParen(v___x_1334_, v_prec_1320_);
return v___x_1335_;
}
}
}
}
case 1:
{
lean_object* v_name_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1362_; 
v_name_1342_ = lean_ctor_get(v_x_1319_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v_x_1319_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1344_ = v_x_1319_;
v_isShared_1345_ = v_isSharedCheck_1362_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_name_1342_);
lean_dec(v_x_1319_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1362_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___y_1347_; lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1358_ = lean_unsigned_to_nat(1024u);
v___x_1359_ = lean_nat_dec_le(v___x_1358_, v_prec_1320_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; 
v___x_1360_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1347_ = v___x_1360_;
goto v___jp_1346_;
}
else
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1347_ = v___x_1361_;
goto v___jp_1346_;
}
v___jp_1346_:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1351_; 
v___x_1348_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__5));
v___x_1349_ = l_String_quote(v_name_1342_);
if (v_isShared_1345_ == 0)
{
lean_ctor_set_tag(v___x_1344_, 3);
lean_ctor_set(v___x_1344_, 0, v___x_1349_);
v___x_1351_ = v___x_1344_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; uint8_t v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1352_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1348_);
lean_ctor_set(v___x_1352_, 1, v___x_1351_);
lean_inc(v___y_1347_);
v___x_1353_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1353_, 0, v___y_1347_);
lean_ctor_set(v___x_1353_, 1, v___x_1352_);
v___x_1354_ = 0;
v___x_1355_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1355_, 0, v___x_1353_);
lean_ctor_set_uint8(v___x_1355_, sizeof(void*)*1, v___x_1354_);
v___x_1356_ = l_Repr_addAppParen(v___x_1355_, v_prec_1320_);
return v___x_1356_;
}
}
}
}
case 2:
{
lean_object* v_name_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1383_; 
v_name_1363_ = lean_ctor_get(v_x_1319_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v_x_1319_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1365_ = v_x_1319_;
v_isShared_1366_ = v_isSharedCheck_1383_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_name_1363_);
lean_dec(v_x_1319_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1383_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___y_1368_; lean_object* v___x_1379_; uint8_t v___x_1380_; 
v___x_1379_ = lean_unsigned_to_nat(1024u);
v___x_1380_ = lean_nat_dec_le(v___x_1379_, v_prec_1320_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1368_ = v___x_1381_;
goto v___jp_1367_;
}
else
{
lean_object* v___x_1382_; 
v___x_1382_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1368_ = v___x_1382_;
goto v___jp_1367_;
}
v___jp_1367_:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1372_; 
v___x_1369_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__8));
v___x_1370_ = l_String_quote(v_name_1363_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set_tag(v___x_1365_, 3);
lean_ctor_set(v___x_1365_, 0, v___x_1370_);
v___x_1372_ = v___x_1365_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1370_);
v___x_1372_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; uint8_t v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1373_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1369_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
lean_inc(v___y_1368_);
v___x_1374_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1374_, 0, v___y_1368_);
lean_ctor_set(v___x_1374_, 1, v___x_1373_);
v___x_1375_ = 0;
v___x_1376_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1376_, 0, v___x_1374_);
lean_ctor_set_uint8(v___x_1376_, sizeof(void*)*1, v___x_1375_);
v___x_1377_ = l_Repr_addAppParen(v___x_1376_, v_prec_1320_);
return v___x_1377_;
}
}
}
}
default: 
{
lean_object* v_event_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1404_; 
v_event_1384_ = lean_ctor_get(v_x_1319_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v_x_1319_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1386_ = v_x_1319_;
v_isShared_1387_ = v_isSharedCheck_1404_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_event_1384_);
lean_dec(v_x_1319_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1404_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___y_1389_; lean_object* v___x_1400_; uint8_t v___x_1401_; 
v___x_1400_ = lean_unsigned_to_nat(1024u);
v___x_1401_ = lean_nat_dec_le(v___x_1400_, v_prec_1320_);
if (v___x_1401_ == 0)
{
lean_object* v___x_1402_; 
v___x_1402_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1389_ = v___x_1402_;
goto v___jp_1388_;
}
else
{
lean_object* v___x_1403_; 
v___x_1403_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1389_ = v___x_1403_;
goto v___jp_1388_;
}
v___jp_1388_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1393_; 
v___x_1390_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__11));
v___x_1391_ = l_String_quote(v_event_1384_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 0, v___x_1391_);
v___x_1393_ = v___x_1386_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v___x_1391_);
v___x_1393_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; uint8_t v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1390_);
lean_ctor_set(v___x_1394_, 1, v___x_1393_);
lean_inc(v___y_1389_);
v___x_1395_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___y_1389_);
lean_ctor_set(v___x_1395_, 1, v___x_1394_);
v___x_1396_ = 0;
v___x_1397_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1397_, 0, v___x_1395_);
lean_ctor_set_uint8(v___x_1397_, sizeof(void*)*1, v___x_1396_);
v___x_1398_ = l_Repr_addAppParen(v___x_1397_, v_prec_1320_);
return v___x_1398_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrKey_repr___boxed(lean_object* v_x_1405_, lean_object* v_prec_1406_){
_start:
{
lean_object* v_res_1407_; 
v_res_1407_ = l_Lasm_UI_instReprAttrKey_repr(v_x_1405_, v_prec_1406_);
lean_dec(v_prec_1406_);
return v_res_1407_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableAttrKey_hash(lean_object* v_x_1414_){
_start:
{
switch(lean_obj_tag(v_x_1414_))
{
case 0:
{
lean_object* v_name_1415_; uint64_t v___x_1416_; uint64_t v___x_1417_; uint64_t v___x_1418_; 
v_name_1415_ = lean_ctor_get(v_x_1414_, 0);
v___x_1416_ = 0ULL;
v___x_1417_ = lean_string_hash(v_name_1415_);
v___x_1418_ = lean_uint64_mix_hash(v___x_1416_, v___x_1417_);
return v___x_1418_;
}
case 1:
{
lean_object* v_name_1419_; uint64_t v___x_1420_; uint64_t v___x_1421_; uint64_t v___x_1422_; 
v_name_1419_ = lean_ctor_get(v_x_1414_, 0);
v___x_1420_ = 1ULL;
v___x_1421_ = lean_string_hash(v_name_1419_);
v___x_1422_ = lean_uint64_mix_hash(v___x_1420_, v___x_1421_);
return v___x_1422_;
}
case 2:
{
lean_object* v_name_1423_; uint64_t v___x_1424_; uint64_t v___x_1425_; uint64_t v___x_1426_; 
v_name_1423_ = lean_ctor_get(v_x_1414_, 0);
v___x_1424_ = 2ULL;
v___x_1425_ = lean_string_hash(v_name_1423_);
v___x_1426_ = lean_uint64_mix_hash(v___x_1424_, v___x_1425_);
return v___x_1426_;
}
default: 
{
lean_object* v_event_1427_; uint64_t v___x_1428_; uint64_t v___x_1429_; uint64_t v___x_1430_; 
v_event_1427_ = lean_ctor_get(v_x_1414_, 0);
v___x_1428_ = 3ULL;
v___x_1429_ = lean_string_hash(v_event_1427_);
v___x_1430_ = lean_uint64_mix_hash(v___x_1428_, v___x_1429_);
return v___x_1430_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableAttrKey_hash___boxed(lean_object* v_x_1431_){
_start:
{
uint64_t v_res_1432_; lean_object* v_r_1433_; 
v_res_1432_ = l_Lasm_UI_instHashableAttrKey_hash(v_x_1431_);
lean_dec_ref(v_x_1431_);
v_r_1433_ = lean_box_uint64(v_res_1432_);
return v_r_1433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx___impl(lean_object* v_x_1436_){
_start:
{
lean_object* v___x_1437_; 
v___x_1437_ = lean_obj_tag_nat(v_x_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx___impl___boxed(lean_object* v_x_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l_Lasm_UI_AttrVal_ctorIdx___impl(v_x_1438_);
lean_dec_ref(v_x_1438_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim___redArg(lean_object* v_t_1440_, lean_object* v_k_1441_){
_start:
{
lean_object* v_s_1442_; lean_object* v___x_1443_; 
v_s_1442_ = lean_ctor_get(v_t_1440_, 0);
lean_inc_ref(v_s_1442_);
lean_dec_ref(v_t_1440_);
v___x_1443_ = lean_apply_1(v_k_1441_, v_s_1442_);
return v___x_1443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim(lean_object* v_motive_1444_, lean_object* v_ctorIdx_1445_, lean_object* v_t_1446_, lean_object* v_h_1447_, lean_object* v_k_1448_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1446_, v_k_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim___boxed(lean_object* v_motive_1450_, lean_object* v_ctorIdx_1451_, lean_object* v_t_1452_, lean_object* v_h_1453_, lean_object* v_k_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l_Lasm_UI_AttrVal_ctorElim(v_motive_1450_, v_ctorIdx_1451_, v_t_1452_, v_h_1453_, v_k_1454_);
lean_dec(v_ctorIdx_1451_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_str_elim___redArg(lean_object* v_t_1456_, lean_object* v_str_1457_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1456_, v_str_1457_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_str_elim(lean_object* v_motive_1459_, lean_object* v_t_1460_, lean_object* v_h_1461_, lean_object* v_str_1462_){
_start:
{
lean_object* v___x_1463_; 
v___x_1463_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1460_, v_str_1462_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_prop_elim___redArg(lean_object* v_t_1464_, lean_object* v_prop_1465_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1464_, v_prop_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_prop_elim(lean_object* v_motive_1467_, lean_object* v_t_1468_, lean_object* v_h_1469_, lean_object* v_prop_1470_){
_start:
{
lean_object* v___x_1471_; 
v___x_1471_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1468_, v_prop_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_listener_elim___redArg(lean_object* v_t_1472_, lean_object* v_listener_1473_){
_start:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1472_, v_listener_1473_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_listener_elim(lean_object* v_motive_1475_, lean_object* v_t_1476_, lean_object* v_h_1477_, lean_object* v_listener_1478_){
_start:
{
lean_object* v___x_1479_; 
v___x_1479_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1476_, v_listener_1478_);
return v___x_1479_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrVal_decEq(lean_object* v_x_1480_, lean_object* v_x_1481_){
_start:
{
switch(lean_obj_tag(v_x_1480_))
{
case 0:
{
if (lean_obj_tag(v_x_1481_) == 0)
{
lean_object* v_s_1482_; lean_object* v_s_1483_; uint8_t v___x_1484_; 
v_s_1482_ = lean_ctor_get(v_x_1480_, 0);
lean_inc_ref(v_s_1482_);
lean_dec_ref_known(v_x_1480_, 1);
v_s_1483_ = lean_ctor_get(v_x_1481_, 0);
lean_inc_ref(v_s_1483_);
lean_dec_ref_known(v_x_1481_, 1);
v___x_1484_ = lean_string_dec_eq(v_s_1482_, v_s_1483_);
lean_dec_ref(v_s_1483_);
lean_dec_ref(v_s_1482_);
return v___x_1484_;
}
else
{
uint8_t v___x_1485_; 
lean_dec_ref_known(v_x_1480_, 1);
lean_dec_ref(v_x_1481_);
v___x_1485_ = 0;
return v___x_1485_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1481_) == 1)
{
lean_object* v_v_1486_; lean_object* v_v_1487_; uint8_t v___x_1488_; 
v_v_1486_ = lean_ctor_get(v_x_1480_, 0);
lean_inc_ref(v_v_1486_);
lean_dec_ref_known(v_x_1480_, 1);
v_v_1487_ = lean_ctor_get(v_x_1481_, 0);
lean_inc_ref(v_v_1487_);
lean_dec_ref_known(v_x_1481_, 1);
v___x_1488_ = l_Lasm_UI_instDecidableEqPropVal_decEq(v_v_1486_, v_v_1487_);
lean_dec_ref(v_v_1487_);
lean_dec_ref(v_v_1486_);
return v___x_1488_;
}
else
{
uint8_t v___x_1489_; 
lean_dec_ref_known(v_x_1480_, 1);
lean_dec_ref(v_x_1481_);
v___x_1489_ = 0;
return v___x_1489_;
}
}
default: 
{
if (lean_obj_tag(v_x_1481_) == 2)
{
lean_object* v_l_1490_; lean_object* v_l_1491_; uint8_t v___x_1492_; 
v_l_1490_ = lean_ctor_get(v_x_1480_, 0);
lean_inc_ref(v_l_1490_);
lean_dec_ref_known(v_x_1480_, 1);
v_l_1491_ = lean_ctor_get(v_x_1481_, 0);
lean_inc_ref(v_l_1491_);
lean_dec_ref_known(v_x_1481_, 1);
v___x_1492_ = l_Lasm_UI_instDecidableEqListener_decEq(v_l_1490_, v_l_1491_);
return v___x_1492_;
}
else
{
uint8_t v___x_1493_; 
lean_dec_ref_known(v_x_1480_, 1);
lean_dec_ref(v_x_1481_);
v___x_1493_ = 0;
return v___x_1493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrVal_decEq___boxed(lean_object* v_x_1494_, lean_object* v_x_1495_){
_start:
{
uint8_t v_res_1496_; lean_object* v_r_1497_; 
v_res_1496_ = l_Lasm_UI_instDecidableEqAttrVal_decEq(v_x_1494_, v_x_1495_);
v_r_1497_ = lean_box(v_res_1496_);
return v_r_1497_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrVal(lean_object* v_x_1498_, lean_object* v_x_1499_){
_start:
{
uint8_t v___x_1500_; 
v___x_1500_ = l_Lasm_UI_instDecidableEqAttrVal_decEq(v_x_1498_, v_x_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrVal___boxed(lean_object* v_x_1501_, lean_object* v_x_1502_){
_start:
{
uint8_t v_res_1503_; lean_object* v_r_1504_; 
v_res_1503_ = l_Lasm_UI_instDecidableEqAttrVal(v_x_1501_, v_x_1502_);
v_r_1504_ = lean_box(v_res_1503_);
return v_r_1504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrVal_repr(lean_object* v_x_1523_, lean_object* v_prec_1524_){
_start:
{
switch(lean_obj_tag(v_x_1523_))
{
case 0:
{
lean_object* v_s_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1545_; 
v_s_1525_ = lean_ctor_get(v_x_1523_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v_x_1523_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1527_ = v_x_1523_;
v_isShared_1528_ = v_isSharedCheck_1545_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_s_1525_);
lean_dec(v_x_1523_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1545_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___y_1530_; lean_object* v___x_1541_; uint8_t v___x_1542_; 
v___x_1541_ = lean_unsigned_to_nat(1024u);
v___x_1542_ = lean_nat_dec_le(v___x_1541_, v_prec_1524_);
if (v___x_1542_ == 0)
{
lean_object* v___x_1543_; 
v___x_1543_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1530_ = v___x_1543_;
goto v___jp_1529_;
}
else
{
lean_object* v___x_1544_; 
v___x_1544_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1530_ = v___x_1544_;
goto v___jp_1529_;
}
v___jp_1529_:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1534_; 
v___x_1531_ = ((lean_object*)(l_Lasm_UI_instReprAttrVal_repr___closed__2));
v___x_1532_ = l_String_quote(v_s_1525_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set_tag(v___x_1527_, 3);
lean_ctor_set(v___x_1527_, 0, v___x_1532_);
v___x_1534_ = v___x_1527_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; uint8_t v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1535_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1531_);
lean_ctor_set(v___x_1535_, 1, v___x_1534_);
lean_inc(v___y_1530_);
v___x_1536_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1536_, 0, v___y_1530_);
lean_ctor_set(v___x_1536_, 1, v___x_1535_);
v___x_1537_ = 0;
v___x_1538_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1538_, 0, v___x_1536_);
lean_ctor_set_uint8(v___x_1538_, sizeof(void*)*1, v___x_1537_);
v___x_1539_ = l_Repr_addAppParen(v___x_1538_, v_prec_1524_);
return v___x_1539_;
}
}
}
}
case 1:
{
lean_object* v_v_1546_; lean_object* v___y_1548_; lean_object* v___x_1557_; uint8_t v___x_1558_; 
v_v_1546_ = lean_ctor_get(v_x_1523_, 0);
lean_inc_ref(v_v_1546_);
lean_dec_ref_known(v_x_1523_, 1);
v___x_1557_ = lean_unsigned_to_nat(1024u);
v___x_1558_ = lean_nat_dec_le(v___x_1557_, v_prec_1524_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1548_ = v___x_1559_;
goto v___jp_1547_;
}
else
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1548_ = v___x_1560_;
goto v___jp_1547_;
}
v___jp_1547_:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1549_ = ((lean_object*)(l_Lasm_UI_instReprAttrVal_repr___closed__5));
v___x_1550_ = lean_unsigned_to_nat(1024u);
v___x_1551_ = l_Lasm_UI_instReprPropVal_repr(v_v_1546_, v___x_1550_);
v___x_1552_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1549_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
lean_inc(v___y_1548_);
v___x_1553_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___y_1548_);
lean_ctor_set(v___x_1553_, 1, v___x_1552_);
v___x_1554_ = 0;
v___x_1555_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1555_, 0, v___x_1553_);
lean_ctor_set_uint8(v___x_1555_, sizeof(void*)*1, v___x_1554_);
v___x_1556_ = l_Repr_addAppParen(v___x_1555_, v_prec_1524_);
return v___x_1556_;
}
}
default: 
{
lean_object* v_l_1561_; lean_object* v___y_1563_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v_l_1561_ = lean_ctor_get(v_x_1523_, 0);
lean_inc_ref(v_l_1561_);
lean_dec_ref_known(v_x_1523_, 1);
v___x_1571_ = lean_unsigned_to_nat(1024u);
v___x_1572_ = lean_nat_dec_le(v___x_1571_, v_prec_1524_);
if (v___x_1572_ == 0)
{
lean_object* v___x_1573_; 
v___x_1573_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1563_ = v___x_1573_;
goto v___jp_1562_;
}
else
{
lean_object* v___x_1574_; 
v___x_1574_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1563_ = v___x_1574_;
goto v___jp_1562_;
}
v___jp_1562_:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; uint8_t v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1564_ = ((lean_object*)(l_Lasm_UI_instReprAttrVal_repr___closed__8));
v___x_1565_ = l_Lasm_UI_instReprListener_repr___redArg(v_l_1561_);
v___x_1566_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1564_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
lean_inc(v___y_1563_);
v___x_1567_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1567_, 0, v___y_1563_);
lean_ctor_set(v___x_1567_, 1, v___x_1566_);
v___x_1568_ = 0;
v___x_1569_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1569_, 0, v___x_1567_);
lean_ctor_set_uint8(v___x_1569_, sizeof(void*)*1, v___x_1568_);
v___x_1570_ = l_Repr_addAppParen(v___x_1569_, v_prec_1524_);
return v___x_1570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrVal_repr___boxed(lean_object* v_x_1575_, lean_object* v_prec_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_Lasm_UI_instReprAttrVal_repr(v_x_1575_, v_prec_1576_);
lean_dec(v_prec_1576_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___redArg(lean_object* v_x_1584_){
_start:
{
switch(lean_obj_tag(v_x_1584_))
{
case 0:
{
lean_object* v_name_1585_; lean_object* v___x_1586_; 
v_name_1585_ = lean_ctor_get(v_x_1584_, 0);
lean_inc_ref(v_name_1585_);
v___x_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1586_, 0, v_name_1585_);
return v___x_1586_;
}
case 1:
{
lean_object* v_name_1587_; lean_object* v___x_1588_; 
v_name_1587_ = lean_ctor_get(v_x_1584_, 0);
lean_inc_ref(v_name_1587_);
v___x_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1588_, 0, v_name_1587_);
return v___x_1588_;
}
case 2:
{
lean_object* v_name_1589_; lean_object* v___x_1590_; 
v_name_1589_ = lean_ctor_get(v_x_1584_, 0);
lean_inc_ref(v_name_1589_);
v___x_1590_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1590_, 0, v_name_1589_);
return v___x_1590_;
}
default: 
{
lean_object* v_listener_1591_; lean_object* v_event_1592_; lean_object* v___x_1593_; 
v_listener_1591_ = lean_ctor_get(v_x_1584_, 0);
v_event_1592_ = lean_ctor_get(v_listener_1591_, 0);
lean_inc_ref(v_event_1592_);
v___x_1593_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1593_, 0, v_event_1592_);
return v___x_1593_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___redArg___boxed(lean_object* v_x_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Lasm_UI_Attr_key___redArg(v_x_1594_);
lean_dec_ref(v_x_1594_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key(lean_object* v_Msg_1596_, lean_object* v_x_1597_){
_start:
{
lean_object* v___x_1598_; 
v___x_1598_ = l_Lasm_UI_Attr_key___redArg(v_x_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___boxed(lean_object* v_Msg_1599_, lean_object* v_x_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l_Lasm_UI_Attr_key(v_Msg_1599_, v_x_1600_);
lean_dec_ref(v_x_1600_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___redArg(lean_object* v_x_1602_){
_start:
{
switch(lean_obj_tag(v_x_1602_))
{
case 1:
{
lean_object* v_value_1603_; lean_object* v___x_1604_; 
v_value_1603_ = lean_ctor_get(v_x_1602_, 1);
lean_inc_ref(v_value_1603_);
v___x_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1604_, 0, v_value_1603_);
return v___x_1604_;
}
case 3:
{
lean_object* v_listener_1605_; lean_object* v___x_1606_; 
v_listener_1605_ = lean_ctor_get(v_x_1602_, 0);
lean_inc_ref(v_listener_1605_);
v___x_1606_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1606_, 0, v_listener_1605_);
return v___x_1606_;
}
default: 
{
lean_object* v_value_1607_; lean_object* v___x_1608_; 
v_value_1607_ = lean_ctor_get(v_x_1602_, 1);
lean_inc_ref(v_value_1607_);
v___x_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1608_, 0, v_value_1607_);
return v___x_1608_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___redArg___boxed(lean_object* v_x_1609_){
_start:
{
lean_object* v_res_1610_; 
v_res_1610_ = l_Lasm_UI_Attr_val___redArg(v_x_1609_);
lean_dec_ref(v_x_1609_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val(lean_object* v_Msg_1611_, lean_object* v_x_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = l_Lasm_UI_Attr_val___redArg(v_x_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___boxed(lean_object* v_Msg_1614_, lean_object* v_x_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Lasm_UI_Attr_val(v_Msg_1614_, v_x_1615_);
lean_dec_ref(v_x_1615_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map___redArg___lam__0(lean_object* v_handle_1617_, lean_object* v_f_1618_, lean_object* v_vs_1619_){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = lean_apply_1(v_handle_1617_, v_vs_1619_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v___x_1621_; 
lean_dec(v_f_1618_);
v___x_1621_ = lean_box(0);
return v___x_1621_;
}
else
{
lean_object* v_val_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1630_; 
v_val_1622_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1624_ = v___x_1620_;
v_isShared_1625_ = v_isSharedCheck_1630_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_val_1622_);
lean_dec(v___x_1620_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1630_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1626_; lean_object* v___x_1628_; 
v___x_1626_ = lean_apply_1(v_f_1618_, v_val_1622_);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 0, v___x_1626_);
v___x_1628_ = v___x_1624_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v___x_1626_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
return v___x_1628_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map___redArg(lean_object* v_f_1631_, lean_object* v_x_1632_){
_start:
{
switch(lean_obj_tag(v_x_1632_))
{
case 0:
{
lean_object* v_name_1633_; lean_object* v_value_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1641_; 
lean_dec(v_f_1631_);
v_name_1633_ = lean_ctor_get(v_x_1632_, 0);
v_value_1634_ = lean_ctor_get(v_x_1632_, 1);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_x_1632_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1636_ = v_x_1632_;
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_value_1634_);
lean_inc(v_name_1633_);
lean_dec(v_x_1632_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1639_; 
if (v_isShared_1637_ == 0)
{
v___x_1639_ = v___x_1636_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_name_1633_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v_value_1634_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
case 1:
{
lean_object* v_name_1642_; lean_object* v_value_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1650_; 
lean_dec(v_f_1631_);
v_name_1642_ = lean_ctor_get(v_x_1632_, 0);
v_value_1643_ = lean_ctor_get(v_x_1632_, 1);
v_isSharedCheck_1650_ = !lean_is_exclusive(v_x_1632_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1645_ = v_x_1632_;
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_value_1643_);
lean_inc(v_name_1642_);
lean_dec(v_x_1632_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1648_; 
if (v_isShared_1646_ == 0)
{
v___x_1648_ = v___x_1645_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_name_1642_);
lean_ctor_set(v_reuseFailAlloc_1649_, 1, v_value_1643_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
case 2:
{
lean_object* v_name_1651_; lean_object* v_value_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1659_; 
lean_dec(v_f_1631_);
v_name_1651_ = lean_ctor_get(v_x_1632_, 0);
v_value_1652_ = lean_ctor_get(v_x_1632_, 1);
v_isSharedCheck_1659_ = !lean_is_exclusive(v_x_1632_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1654_ = v_x_1632_;
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_value_1652_);
lean_inc(v_name_1651_);
lean_dec(v_x_1632_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1657_; 
if (v_isShared_1655_ == 0)
{
v___x_1657_ = v___x_1654_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_name_1651_);
lean_ctor_set(v_reuseFailAlloc_1658_, 1, v_value_1652_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
return v___x_1657_;
}
}
}
default: 
{
lean_object* v_listener_1660_; lean_object* v_handle_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1669_; 
v_listener_1660_ = lean_ctor_get(v_x_1632_, 0);
v_handle_1661_ = lean_ctor_get(v_x_1632_, 1);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_x_1632_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1663_ = v_x_1632_;
v_isShared_1664_ = v_isSharedCheck_1669_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_handle_1661_);
lean_inc(v_listener_1660_);
lean_dec(v_x_1632_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1669_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
lean_object* v___f_1665_; lean_object* v___x_1667_; 
v___f_1665_ = lean_alloc_closure((void*)(l_Lasm_UI_Attr_map___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1665_, 0, v_handle_1661_);
lean_closure_set(v___f_1665_, 1, v_f_1631_);
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 1, v___f_1665_);
v___x_1667_ = v___x_1663_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_listener_1660_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v___f_1665_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map(lean_object* v_00_u03b1_1670_, lean_object* v_00_u03b2_1671_, lean_object* v_f_1672_, lean_object* v_x_1673_){
_start:
{
lean_object* v___x_1674_; 
v___x_1674_ = l_Lasm_UI_Attr_map___redArg(v_f_1672_, v_x_1673_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___redArg(lean_object* v_event_1675_, lean_object* v_d_1676_, uint8_t v_preventDefault_1677_, uint8_t v_stopPropagation_1678_){
_start:
{
lean_object* v_paths_1679_; lean_object* v_run_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1688_; 
v_paths_1679_ = lean_ctor_get(v_d_1676_, 0);
v_run_1680_ = lean_ctor_get(v_d_1676_, 1);
v_isSharedCheck_1688_ = !lean_is_exclusive(v_d_1676_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1682_ = v_d_1676_;
v_isShared_1683_ = v_isSharedCheck_1688_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_run_1680_);
lean_inc(v_paths_1679_);
lean_dec(v_d_1676_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1688_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1684_; lean_object* v___x_1686_; 
v___x_1684_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_1684_, 0, v_event_1675_);
lean_ctor_set(v___x_1684_, 1, v_paths_1679_);
lean_ctor_set_uint8(v___x_1684_, sizeof(void*)*2, v_preventDefault_1677_);
lean_ctor_set_uint8(v___x_1684_, sizeof(void*)*2 + 1, v_stopPropagation_1678_);
if (v_isShared_1683_ == 0)
{
lean_ctor_set_tag(v___x_1682_, 3);
lean_ctor_set(v___x_1682_, 0, v___x_1684_);
v___x_1686_ = v___x_1682_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v_run_1680_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___redArg___boxed(lean_object* v_event_1689_, lean_object* v_d_1690_, lean_object* v_preventDefault_1691_, lean_object* v_stopPropagation_1692_){
_start:
{
uint8_t v_preventDefault_boxed_1693_; uint8_t v_stopPropagation_boxed_1694_; lean_object* v_res_1695_; 
v_preventDefault_boxed_1693_ = lean_unbox(v_preventDefault_1691_);
v_stopPropagation_boxed_1694_ = lean_unbox(v_stopPropagation_1692_);
v_res_1695_ = l_Lasm_UI_Attr_onWith___redArg(v_event_1689_, v_d_1690_, v_preventDefault_boxed_1693_, v_stopPropagation_boxed_1694_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith(lean_object* v_Msg_1696_, lean_object* v_event_1697_, lean_object* v_d_1698_, uint8_t v_preventDefault_1699_, uint8_t v_stopPropagation_1700_){
_start:
{
lean_object* v___x_1701_; 
v___x_1701_ = l_Lasm_UI_Attr_onWith___redArg(v_event_1697_, v_d_1698_, v_preventDefault_1699_, v_stopPropagation_1700_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___boxed(lean_object* v_Msg_1702_, lean_object* v_event_1703_, lean_object* v_d_1704_, lean_object* v_preventDefault_1705_, lean_object* v_stopPropagation_1706_){
_start:
{
uint8_t v_preventDefault_boxed_1707_; uint8_t v_stopPropagation_boxed_1708_; lean_object* v_res_1709_; 
v_preventDefault_boxed_1707_ = lean_unbox(v_preventDefault_1705_);
v_stopPropagation_boxed_1708_ = lean_unbox(v_stopPropagation_1706_);
v_res_1709_ = l_Lasm_UI_Attr_onWith(v_Msg_1702_, v_event_1703_, v_d_1704_, v_preventDefault_boxed_1707_, v_stopPropagation_boxed_1708_);
return v_res_1709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl___redArg(lean_object* v_x_1710_){
_start:
{
lean_object* v___x_1711_; 
v___x_1711_ = lean_obj_tag_nat(v_x_1710_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl___redArg___boxed(lean_object* v_x_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lasm_UI_Html_ctorIdx___impl___redArg(v_x_1712_);
lean_dec_ref(v_x_1712_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl(lean_object* v_Msg_1714_, lean_object* v_x_1715_){
_start:
{
lean_object* v___x_1716_; 
v___x_1716_ = lean_obj_tag_nat(v_x_1715_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl___boxed(lean_object* v_Msg_1717_, lean_object* v_x_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lasm_UI_Html_ctorIdx___impl(v_Msg_1717_, v_x_1718_);
lean_dec_ref(v_x_1718_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim___redArg(lean_object* v_t_1720_, lean_object* v_k_1721_){
_start:
{
if (lean_obj_tag(v_t_1720_) == 0)
{
lean_object* v_s_1722_; lean_object* v___x_1723_; 
v_s_1722_ = lean_ctor_get(v_t_1720_, 0);
lean_inc_ref(v_s_1722_);
lean_dec_ref_known(v_t_1720_, 1);
v___x_1723_ = lean_apply_1(v_k_1721_, v_s_1722_);
return v___x_1723_;
}
else
{
uint8_t v_ns_1724_; lean_object* v_tag_1725_; lean_object* v_key_1726_; lean_object* v_attrs_1727_; lean_object* v_children_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
v_ns_1724_ = lean_ctor_get_uint8(v_t_1720_, sizeof(void*)*4);
v_tag_1725_ = lean_ctor_get(v_t_1720_, 0);
lean_inc_ref(v_tag_1725_);
v_key_1726_ = lean_ctor_get(v_t_1720_, 1);
lean_inc(v_key_1726_);
v_attrs_1727_ = lean_ctor_get(v_t_1720_, 2);
lean_inc(v_attrs_1727_);
v_children_1728_ = lean_ctor_get(v_t_1720_, 3);
lean_inc(v_children_1728_);
lean_dec_ref_known(v_t_1720_, 4);
v___x_1729_ = lean_box(v_ns_1724_);
v___x_1730_ = lean_apply_5(v_k_1721_, v___x_1729_, v_tag_1725_, v_key_1726_, v_attrs_1727_, v_children_1728_);
return v___x_1730_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim(lean_object* v_Msg_1731_, lean_object* v_motive__1_1732_, lean_object* v_ctorIdx_1733_, lean_object* v_t_1734_, lean_object* v_h_1735_, lean_object* v_k_1736_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1734_, v_k_1736_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim___boxed(lean_object* v_Msg_1738_, lean_object* v_motive__1_1739_, lean_object* v_ctorIdx_1740_, lean_object* v_t_1741_, lean_object* v_h_1742_, lean_object* v_k_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_Lasm_UI_Html_ctorElim(v_Msg_1738_, v_motive__1_1739_, v_ctorIdx_1740_, v_t_1741_, v_h_1742_, v_k_1743_);
lean_dec(v_ctorIdx_1740_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_text_elim___redArg(lean_object* v_t_1745_, lean_object* v_text_1746_){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1745_, v_text_1746_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_text_elim(lean_object* v_Msg_1748_, lean_object* v_motive__1_1749_, lean_object* v_t_1750_, lean_object* v_h_1751_, lean_object* v_text_1752_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1750_, v_text_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_elem_elim___redArg(lean_object* v_t_1754_, lean_object* v_elem_1755_){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1754_, v_elem_1755_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_elem_elim(lean_object* v_Msg_1757_, lean_object* v_motive__1_1758_, lean_object* v_t_1759_, lean_object* v_h_1760_, lean_object* v_elem_1761_){
_start:
{
lean_object* v___x_1762_; 
v___x_1762_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1759_, v_elem_1761_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml___redArg(){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = ((lean_object*)(l_Lasm_UI_instInhabitedHtml___redArg___closed__0));
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml___redArg___boxed(lean_object* v___dummy_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l_Lasm_UI_instInhabitedHtml___redArg();
return v_res_1768_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedHtml___closed__0(void){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = l_Lasm_UI_instInhabitedHtml___redArg();
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml(lean_object* v_Msg_1770_){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = lean_obj_once(&l_Lasm_UI_instInhabitedHtml___closed__0, &l_Lasm_UI_instInhabitedHtml___closed__0_once, _init_l_Lasm_UI_instInhabitedHtml___closed__0);
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_keyed___redArg(lean_object* v_k_1772_, lean_object* v_x_1773_){
_start:
{
if (lean_obj_tag(v_x_1773_) == 1)
{
uint8_t v_ns_1774_; lean_object* v_tag_1775_; lean_object* v_attrs_1776_; lean_object* v_children_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1785_; 
v_ns_1774_ = lean_ctor_get_uint8(v_x_1773_, sizeof(void*)*4);
v_tag_1775_ = lean_ctor_get(v_x_1773_, 0);
v_attrs_1776_ = lean_ctor_get(v_x_1773_, 2);
v_children_1777_ = lean_ctor_get(v_x_1773_, 3);
v_isSharedCheck_1785_ = !lean_is_exclusive(v_x_1773_);
if (v_isSharedCheck_1785_ == 0)
{
lean_object* v_unused_1786_; 
v_unused_1786_ = lean_ctor_get(v_x_1773_, 1);
lean_dec(v_unused_1786_);
v___x_1779_ = v_x_1773_;
v_isShared_1780_ = v_isSharedCheck_1785_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_children_1777_);
lean_inc(v_attrs_1776_);
lean_inc(v_tag_1775_);
lean_dec(v_x_1773_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1785_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1781_; lean_object* v___x_1783_; 
v___x_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1781_, 0, v_k_1772_);
if (v_isShared_1780_ == 0)
{
lean_ctor_set(v___x_1779_, 1, v___x_1781_);
v___x_1783_ = v___x_1779_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_tag_1775_);
lean_ctor_set(v_reuseFailAlloc_1784_, 1, v___x_1781_);
lean_ctor_set(v_reuseFailAlloc_1784_, 2, v_attrs_1776_);
lean_ctor_set(v_reuseFailAlloc_1784_, 3, v_children_1777_);
lean_ctor_set_uint8(v_reuseFailAlloc_1784_, sizeof(void*)*4, v_ns_1774_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
else
{
lean_dec_ref(v_k_1772_);
return v_x_1773_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_keyed(lean_object* v_Msg_1787_, lean_object* v_k_1788_, lean_object* v_x_1789_){
_start:
{
lean_object* v___x_1790_; 
v___x_1790_ = l_Lasm_UI_Html_keyed___redArg(v_k_1788_, v_x_1789_);
return v___x_1790_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(lean_object* v_f_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_){
_start:
{
if (lean_obj_tag(v_a_1792_) == 0)
{
lean_object* v___x_1794_; 
lean_dec(v_f_1791_);
v___x_1794_ = l_List_reverse___redArg(v_a_1793_);
return v___x_1794_;
}
else
{
lean_object* v_head_1795_; lean_object* v_tail_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1805_; 
v_head_1795_ = lean_ctor_get(v_a_1792_, 0);
v_tail_1796_ = lean_ctor_get(v_a_1792_, 1);
v_isSharedCheck_1805_ = !lean_is_exclusive(v_a_1792_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1798_ = v_a_1792_;
v_isShared_1799_ = v_isSharedCheck_1805_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_tail_1796_);
lean_inc(v_head_1795_);
lean_dec(v_a_1792_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1805_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1800_; lean_object* v___x_1802_; 
lean_inc(v_f_1791_);
v___x_1800_ = l_Lasm_UI_Attr_map___redArg(v_f_1791_, v_head_1795_);
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 1, v_a_1793_);
lean_ctor_set(v___x_1798_, 0, v___x_1800_);
v___x_1802_ = v___x_1798_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v___x_1800_);
lean_ctor_set(v_reuseFailAlloc_1804_, 1, v_a_1793_);
v___x_1802_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
v_a_1792_ = v_tail_1796_;
v_a_1793_ = v___x_1802_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_map___redArg(lean_object* v_f_1806_, lean_object* v_x_1807_){
_start:
{
if (lean_obj_tag(v_x_1807_) == 0)
{
lean_object* v_s_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1815_; 
lean_dec(v_f_1806_);
v_s_1808_ = lean_ctor_get(v_x_1807_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v_x_1807_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1810_ = v_x_1807_;
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_s_1808_);
lean_dec(v_x_1807_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1813_; 
if (v_isShared_1811_ == 0)
{
v___x_1813_ = v___x_1810_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_s_1808_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
}
else
{
uint8_t v_ns_1816_; lean_object* v_tag_1817_; lean_object* v_key_1818_; lean_object* v_attrs_1819_; lean_object* v_children_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1830_; 
v_ns_1816_ = lean_ctor_get_uint8(v_x_1807_, sizeof(void*)*4);
v_tag_1817_ = lean_ctor_get(v_x_1807_, 0);
v_key_1818_ = lean_ctor_get(v_x_1807_, 1);
v_attrs_1819_ = lean_ctor_get(v_x_1807_, 2);
v_children_1820_ = lean_ctor_get(v_x_1807_, 3);
v_isSharedCheck_1830_ = !lean_is_exclusive(v_x_1807_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1822_ = v_x_1807_;
v_isShared_1823_ = v_isSharedCheck_1830_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_children_1820_);
lean_inc(v_attrs_1819_);
lean_inc(v_key_1818_);
lean_inc(v_tag_1817_);
lean_dec(v_x_1807_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1830_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1828_; 
v___x_1824_ = lean_box(0);
lean_inc(v_f_1806_);
v___x_1825_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(v_f_1806_, v_attrs_1819_, v___x_1824_);
v___x_1826_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(v_f_1806_, v_children_1820_, v___x_1824_);
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 3, v___x_1826_);
lean_ctor_set(v___x_1822_, 2, v___x_1825_);
v___x_1828_ = v___x_1822_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_tag_1817_);
lean_ctor_set(v_reuseFailAlloc_1829_, 1, v_key_1818_);
lean_ctor_set(v_reuseFailAlloc_1829_, 2, v___x_1825_);
lean_ctor_set(v_reuseFailAlloc_1829_, 3, v___x_1826_);
lean_ctor_set_uint8(v_reuseFailAlloc_1829_, sizeof(void*)*4, v_ns_1816_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(lean_object* v_f_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_){
_start:
{
if (lean_obj_tag(v_a_1832_) == 0)
{
lean_object* v___x_1834_; 
lean_dec(v_f_1831_);
v___x_1834_ = l_List_reverse___redArg(v_a_1833_);
return v___x_1834_;
}
else
{
lean_object* v_head_1835_; lean_object* v_tail_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1845_; 
v_head_1835_ = lean_ctor_get(v_a_1832_, 0);
v_tail_1836_ = lean_ctor_get(v_a_1832_, 1);
v_isSharedCheck_1845_ = !lean_is_exclusive(v_a_1832_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1838_ = v_a_1832_;
v_isShared_1839_ = v_isSharedCheck_1845_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_tail_1836_);
lean_inc(v_head_1835_);
lean_dec(v_a_1832_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1845_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v___x_1840_; lean_object* v___x_1842_; 
lean_inc(v_f_1831_);
v___x_1840_ = l_Lasm_UI_Html_map___redArg(v_f_1831_, v_head_1835_);
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 1, v_a_1833_);
lean_ctor_set(v___x_1838_, 0, v___x_1840_);
v___x_1842_ = v___x_1838_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v___x_1840_);
lean_ctor_set(v_reuseFailAlloc_1844_, 1, v_a_1833_);
v___x_1842_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
v_a_1832_ = v_tail_1836_;
v_a_1833_ = v___x_1842_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_map(lean_object* v_00_u03b1_1846_, lean_object* v_00_u03b2_1847_, lean_object* v_f_1848_, lean_object* v_x_1849_){
_start:
{
lean_object* v___x_1850_; 
v___x_1850_ = l_Lasm_UI_Html_map___redArg(v_f_1848_, v_x_1849_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0(lean_object* v_00_u03b1_1851_, lean_object* v_00_u03b2_1852_, lean_object* v_f_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_){
_start:
{
lean_object* v___x_1856_; 
v___x_1856_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(v_f_1853_, v_a_1854_, v_a_1855_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1(lean_object* v_00_u03b1_1857_, lean_object* v_00_u03b2_1858_, lean_object* v_f_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(v_f_1859_, v_a_1860_, v_a_1861_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__3_splitter___redArg(lean_object* v_x_1863_, lean_object* v_h__1_1864_, lean_object* v_h__2_1865_){
_start:
{
if (lean_obj_tag(v_x_1863_) == 0)
{
lean_object* v_s_1866_; lean_object* v___x_1867_; 
lean_dec(v_h__2_1865_);
v_s_1866_ = lean_ctor_get(v_x_1863_, 0);
lean_inc_ref(v_s_1866_);
lean_dec_ref_known(v_x_1863_, 1);
v___x_1867_ = lean_apply_1(v_h__1_1864_, v_s_1866_);
return v___x_1867_;
}
else
{
uint8_t v_ns_1868_; lean_object* v_tag_1869_; lean_object* v_key_1870_; lean_object* v_attrs_1871_; lean_object* v_children_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
lean_dec(v_h__1_1864_);
v_ns_1868_ = lean_ctor_get_uint8(v_x_1863_, sizeof(void*)*4);
v_tag_1869_ = lean_ctor_get(v_x_1863_, 0);
lean_inc_ref(v_tag_1869_);
v_key_1870_ = lean_ctor_get(v_x_1863_, 1);
lean_inc(v_key_1870_);
v_attrs_1871_ = lean_ctor_get(v_x_1863_, 2);
lean_inc(v_attrs_1871_);
v_children_1872_ = lean_ctor_get(v_x_1863_, 3);
lean_inc(v_children_1872_);
lean_dec_ref_known(v_x_1863_, 4);
v___x_1873_ = lean_box(v_ns_1868_);
v___x_1874_ = lean_apply_5(v_h__2_1865_, v___x_1873_, v_tag_1869_, v_key_1870_, v_attrs_1871_, v_children_1872_);
return v___x_1874_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__3_splitter(lean_object* v_00_u03b1_1875_, lean_object* v_motive_1876_, lean_object* v_x_1877_, lean_object* v_h__1_1878_, lean_object* v_h__2_1879_){
_start:
{
if (lean_obj_tag(v_x_1877_) == 0)
{
lean_object* v_s_1880_; lean_object* v___x_1881_; 
lean_dec(v_h__2_1879_);
v_s_1880_ = lean_ctor_get(v_x_1877_, 0);
lean_inc_ref(v_s_1880_);
lean_dec_ref_known(v_x_1877_, 1);
v___x_1881_ = lean_apply_1(v_h__1_1878_, v_s_1880_);
return v___x_1881_;
}
else
{
uint8_t v_ns_1882_; lean_object* v_tag_1883_; lean_object* v_key_1884_; lean_object* v_attrs_1885_; lean_object* v_children_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
lean_dec(v_h__1_1878_);
v_ns_1882_ = lean_ctor_get_uint8(v_x_1877_, sizeof(void*)*4);
v_tag_1883_ = lean_ctor_get(v_x_1877_, 0);
lean_inc_ref(v_tag_1883_);
v_key_1884_ = lean_ctor_get(v_x_1877_, 1);
lean_inc(v_key_1884_);
v_attrs_1885_ = lean_ctor_get(v_x_1877_, 2);
lean_inc(v_attrs_1885_);
v_children_1886_ = lean_ctor_get(v_x_1877_, 3);
lean_inc(v_children_1886_);
lean_dec_ref_known(v_x_1877_, 4);
v___x_1887_ = lean_box(v_ns_1882_);
v___x_1888_ = lean_apply_5(v_h__2_1879_, v___x_1887_, v_tag_1883_, v_key_1884_, v_attrs_1885_, v_children_1886_);
return v___x_1888_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__List_map__unattach_match__1_splitter___redArg(lean_object* v_x_1889_, lean_object* v_h__1_1890_){
_start:
{
lean_object* v___x_1891_; 
v___x_1891_ = lean_apply_2(v_h__1_1890_, v_x_1889_, lean_box(0));
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__List_map__unattach_match__1_splitter(lean_object* v_00_u03b1_1892_, lean_object* v_P_1893_, lean_object* v_motive_1894_, lean_object* v_x_1895_, lean_object* v_h__1_1896_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = lean_apply_2(v_h__1_1896_, v_x_1895_, lean_box(0));
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter___redArg(lean_object* v_x_1898_, lean_object* v_h__1_1899_){
_start:
{
lean_object* v___x_1900_; 
v___x_1900_ = lean_apply_2(v_h__1_1899_, v_x_1898_, lean_box(0));
return v___x_1900_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter(lean_object* v_00_u03b1_1901_, lean_object* v_children_1902_, lean_object* v_motive_1903_, lean_object* v_x_1904_, lean_object* v_h__1_1905_){
_start:
{
lean_object* v___x_1906_; 
v___x_1906_ = lean_apply_2(v_h__1_1905_, v_x_1904_, lean_box(0));
return v___x_1906_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter___boxed(lean_object* v_00_u03b1_1907_, lean_object* v_children_1908_, lean_object* v_motive_1909_, lean_object* v_x_1910_, lean_object* v_h__1_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter(v_00_u03b1_1907_, v_children_1908_, v_motive_1909_, v_x_1910_, v_h__1_1911_);
lean_dec(v_children_1908_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(lean_object* v_init_1913_, lean_object* v_x_1914_){
_start:
{
if (lean_obj_tag(v_x_1914_) == 0)
{
lean_inc(v_init_1913_);
return v_init_1913_;
}
else
{
lean_object* v_head_1915_; lean_object* v_tail_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v_head_1915_ = lean_ctor_get(v_x_1914_, 0);
v_tail_1916_ = lean_ctor_get(v_x_1914_, 1);
v___x_1917_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v_init_1913_, v_tail_1916_);
v___x_1918_ = lean_nat_add(v_head_1915_, v___x_1917_);
lean_dec(v___x_1917_);
return v___x_1918_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1___boxed(lean_object* v_init_1919_, lean_object* v_x_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v_init_1919_, v_x_1920_);
lean_dec(v_x_1920_);
lean_dec(v_init_1919_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l_List_sum___at___00Lasm_UI_Html_size_spec__1(lean_object* v_l_1922_){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1923_ = lean_unsigned_to_nat(0u);
v___x_1924_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v___x_1923_, v_l_1922_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l_List_sum___at___00Lasm_UI_Html_size_spec__1___boxed(lean_object* v_l_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_List_sum___at___00Lasm_UI_Html_size_spec__1(v_l_1925_);
lean_dec(v_l_1925_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_size___redArg(lean_object* v_x_1927_){
_start:
{
if (lean_obj_tag(v_x_1927_) == 0)
{
lean_object* v___x_1928_; 
lean_dec_ref_known(v_x_1927_, 1);
v___x_1928_ = lean_unsigned_to_nat(1u);
return v___x_1928_;
}
else
{
lean_object* v_children_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v_children_1929_ = lean_ctor_get(v_x_1927_, 3);
lean_inc(v_children_1929_);
lean_dec_ref_known(v_x_1927_, 4);
v___x_1930_ = lean_box(0);
v___x_1931_ = l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(v_children_1929_, v___x_1930_);
v___x_1932_ = l_List_sum___at___00Lasm_UI_Html_size_spec__1(v___x_1931_);
lean_dec(v___x_1931_);
v___x_1933_ = lean_unsigned_to_nat(1u);
v___x_1934_ = lean_nat_add(v___x_1932_, v___x_1933_);
lean_dec(v___x_1932_);
return v___x_1934_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(lean_object* v_a_1935_, lean_object* v_a_1936_){
_start:
{
if (lean_obj_tag(v_a_1935_) == 0)
{
lean_object* v___x_1937_; 
v___x_1937_ = l_List_reverse___redArg(v_a_1936_);
return v___x_1937_;
}
else
{
lean_object* v_head_1938_; lean_object* v_tail_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1948_; 
v_head_1938_ = lean_ctor_get(v_a_1935_, 0);
v_tail_1939_ = lean_ctor_get(v_a_1935_, 1);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_a_1935_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1941_ = v_a_1935_;
v_isShared_1942_ = v_isSharedCheck_1948_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_tail_1939_);
lean_inc(v_head_1938_);
lean_dec(v_a_1935_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1948_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1943_ = l_Lasm_UI_Html_size___redArg(v_head_1938_);
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 1, v_a_1936_);
lean_ctor_set(v___x_1941_, 0, v___x_1943_);
v___x_1945_ = v___x_1941_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___x_1943_);
lean_ctor_set(v_reuseFailAlloc_1947_, 1, v_a_1936_);
v___x_1945_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
v_a_1935_ = v_tail_1939_;
v_a_1936_ = v___x_1945_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_size(lean_object* v_Msg_1949_, lean_object* v_x_1950_){
_start:
{
lean_object* v___x_1951_; 
v___x_1951_ = l_Lasm_UI_Html_size___redArg(v_x_1950_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0(lean_object* v_Msg_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v___x_1955_; 
v___x_1955_ = l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(v_a_1953_, v_a_1954_);
return v___x_1955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__0(lean_object* v_b_1956_, lean_object* v_x_1957_){
_start:
{
lean_inc(v_b_1956_);
return v_b_1956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__0___boxed(lean_object* v_b_1958_, lean_object* v_x_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lasm_UI_instFunctorHtml___lam__0(v_b_1958_, v_x_1959_);
lean_dec(v_x_1959_);
lean_dec(v_b_1958_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__1(lean_object* v_00_u03b1_1961_, lean_object* v_00_u03b2_1962_, lean_object* v_b_1963_, lean_object* v_h_1964_){
_start:
{
lean_object* v___f_1965_; lean_object* v___x_1966_; 
v___f_1965_ = lean_alloc_closure((void*)(l_Lasm_UI_instFunctorHtml___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1965_, 0, v_b_1963_);
v___x_1966_ = l_Lasm_UI_Html_map___redArg(v___f_1965_, v_h_1964_);
return v___x_1966_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Html(uint8_t builtin) {
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
l_Lasm_UI_instInhabitedNs_default = _init_l_Lasm_UI_instInhabitedNs_default();
l_Lasm_UI_instInhabitedNs = _init_l_Lasm_UI_instInhabitedNs();
l_Lasm_UI_instInhabitedEvVal_default = _init_l_Lasm_UI_instInhabitedEvVal_default();
lean_mark_persistent(l_Lasm_UI_instInhabitedEvVal_default);
l_Lasm_UI_instInhabitedEvVal = _init_l_Lasm_UI_instInhabitedEvVal();
lean_mark_persistent(l_Lasm_UI_instInhabitedEvVal);
l_Lasm_UI_Decoder_targetValue = _init_l_Lasm_UI_Decoder_targetValue();
lean_mark_persistent(l_Lasm_UI_Decoder_targetValue);
l_Lasm_UI_Decoder_targetChecked = _init_l_Lasm_UI_Decoder_targetChecked();
lean_mark_persistent(l_Lasm_UI_Decoder_targetChecked);
l_Lasm_UI_Decoder_key = _init_l_Lasm_UI_Decoder_key();
lean_mark_persistent(l_Lasm_UI_Decoder_key);
l_Lasm_UI_Decoder_ctrlKey = _init_l_Lasm_UI_Decoder_ctrlKey();
lean_mark_persistent(l_Lasm_UI_Decoder_ctrlKey);
l_Lasm_UI_Decoder_shiftKey = _init_l_Lasm_UI_Decoder_shiftKey();
lean_mark_persistent(l_Lasm_UI_Decoder_shiftKey);
l_Lasm_UI_Decoder_altKey = _init_l_Lasm_UI_Decoder_altKey();
lean_mark_persistent(l_Lasm_UI_Decoder_altKey);
l_Lasm_UI_Decoder_metaKey = _init_l_Lasm_UI_Decoder_metaKey();
lean_mark_persistent(l_Lasm_UI_Decoder_metaKey);
l_Lasm_UI_Decoder_clientX = _init_l_Lasm_UI_Decoder_clientX();
lean_mark_persistent(l_Lasm_UI_Decoder_clientX);
l_Lasm_UI_Decoder_clientY = _init_l_Lasm_UI_Decoder_clientY();
lean_mark_persistent(l_Lasm_UI_Decoder_clientY);
l_Lasm_UI_Decoder_offsetX = _init_l_Lasm_UI_Decoder_offsetX();
lean_mark_persistent(l_Lasm_UI_Decoder_offsetX);
l_Lasm_UI_Decoder_offsetY = _init_l_Lasm_UI_Decoder_offsetY();
lean_mark_persistent(l_Lasm_UI_Decoder_offsetY);
l_Lasm_UI_Decoder_button = _init_l_Lasm_UI_Decoder_button();
lean_mark_persistent(l_Lasm_UI_Decoder_button);
l_Lasm_UI_Decoder_deltaY = _init_l_Lasm_UI_Decoder_deltaY();
lean_mark_persistent(l_Lasm_UI_Decoder_deltaY);
l_Lasm_UI_Decoder_timeStamp = _init_l_Lasm_UI_Decoder_timeStamp();
lean_mark_persistent(l_Lasm_UI_Decoder_timeStamp);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
