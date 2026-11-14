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
static const lean_string_object l_Lasm_UI_Decoder_isComposing___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "isComposing"};
static const lean_object* l_Lasm_UI_Decoder_isComposing___closed__0 = (const lean_object*)&l_Lasm_UI_Decoder_isComposing___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Decoder_isComposing___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Decoder_isComposing___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Decoder_isComposing___closed__1 = (const lean_object*)&l_Lasm_UI_Decoder_isComposing___closed__1_value;
static lean_once_cell_t l_Lasm_UI_Decoder_isComposing___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Decoder_isComposing___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_isComposing;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Handled_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Handled_map(lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_UI_instReprListener_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__10 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__10_value;
static lean_once_cell_t l_Lasm_UI_instReprListener_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__11;
static lean_once_cell_t l_Lasm_UI_instReprListener_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__12;
static const lean_ctor_object l_Lasm_UI_instReprListener_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__13 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lasm_UI_instReprListener_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__10_value)}};
static const lean_object* l_Lasm_UI_instReprListener_repr___redArg___closed__14 = (const lean_object*)&l_Lasm_UI_instReprListener_repr___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instReprListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instReprListener_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instReprListener___closed__0 = (const lean_object*)&l_Lasm_UI_instReprListener___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instReprListener = (const lean_object*)&l_Lasm_UI_instReprListener___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instInhabitedListener_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_instInhabitedPropVal_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
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
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_custom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_custom(lean_object*, lean_object*, lean_object*);
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
static lean_object* _init_l_Lasm_UI_Decoder_isComposing___closed__2(void){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = ((lean_object*)(l_Lasm_UI_Decoder_isComposing___closed__1));
v___x_823_ = l_Lasm_UI_Decoder_bool(v___x_822_);
return v___x_823_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_isComposing(void){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = lean_obj_once(&l_Lasm_UI_Decoder_isComposing___closed__2, &l_Lasm_UI_Decoder_isComposing___closed__2_once, _init_l_Lasm_UI_Decoder_isComposing___closed__2);
return v___x_824_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientX___closed__2(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = ((lean_object*)(l_Lasm_UI_Decoder_clientX___closed__1));
v___x_830_ = l_Lasm_UI_Decoder_float(v___x_829_);
return v___x_830_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientX(void){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = lean_obj_once(&l_Lasm_UI_Decoder_clientX___closed__2, &l_Lasm_UI_Decoder_clientX___closed__2_once, _init_l_Lasm_UI_Decoder_clientX___closed__2);
return v___x_831_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientY___closed__2(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = ((lean_object*)(l_Lasm_UI_Decoder_clientY___closed__1));
v___x_837_ = l_Lasm_UI_Decoder_float(v___x_836_);
return v___x_837_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientY(void){
_start:
{
lean_object* v___x_838_; 
v___x_838_ = lean_obj_once(&l_Lasm_UI_Decoder_clientY___closed__2, &l_Lasm_UI_Decoder_clientY___closed__2_once, _init_l_Lasm_UI_Decoder_clientY___closed__2);
return v___x_838_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetX___closed__2(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = ((lean_object*)(l_Lasm_UI_Decoder_offsetX___closed__1));
v___x_844_ = l_Lasm_UI_Decoder_float(v___x_843_);
return v___x_844_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetX(void){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = lean_obj_once(&l_Lasm_UI_Decoder_offsetX___closed__2, &l_Lasm_UI_Decoder_offsetX___closed__2_once, _init_l_Lasm_UI_Decoder_offsetX___closed__2);
return v___x_845_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetY___closed__2(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = ((lean_object*)(l_Lasm_UI_Decoder_offsetY___closed__1));
v___x_851_ = l_Lasm_UI_Decoder_float(v___x_850_);
return v___x_851_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetY(void){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = lean_obj_once(&l_Lasm_UI_Decoder_offsetY___closed__2, &l_Lasm_UI_Decoder_offsetY___closed__2_once, _init_l_Lasm_UI_Decoder_offsetY___closed__2);
return v___x_852_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_button___closed__2(void){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_857_ = ((lean_object*)(l_Lasm_UI_Decoder_button___closed__1));
v___x_858_ = l_Lasm_UI_Decoder_int(v___x_857_);
return v___x_858_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_button(void){
_start:
{
lean_object* v___x_859_; 
v___x_859_ = lean_obj_once(&l_Lasm_UI_Decoder_button___closed__2, &l_Lasm_UI_Decoder_button___closed__2_once, _init_l_Lasm_UI_Decoder_button___closed__2);
return v___x_859_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_deltaY___closed__2(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = ((lean_object*)(l_Lasm_UI_Decoder_deltaY___closed__1));
v___x_865_ = l_Lasm_UI_Decoder_float(v___x_864_);
return v___x_865_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_deltaY(void){
_start:
{
lean_object* v___x_866_; 
v___x_866_ = lean_obj_once(&l_Lasm_UI_Decoder_deltaY___closed__2, &l_Lasm_UI_Decoder_deltaY___closed__2_once, _init_l_Lasm_UI_Decoder_deltaY___closed__2);
return v___x_866_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_timeStamp___closed__2(void){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_871_ = ((lean_object*)(l_Lasm_UI_Decoder_timeStamp___closed__1));
v___x_872_ = l_Lasm_UI_Decoder_float(v___x_871_);
return v___x_872_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_timeStamp(void){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = lean_obj_once(&l_Lasm_UI_Decoder_timeStamp___closed__2, &l_Lasm_UI_Decoder_timeStamp___closed__2_once, _init_l_Lasm_UI_Decoder_timeStamp___closed__2);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_dataset(lean_object* v_name_875_){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_876_ = ((lean_object*)(l_Lasm_UI_Decoder_targetValue___closed__0));
v___x_877_ = ((lean_object*)(l_Lasm_UI_Decoder_dataset___closed__0));
v___x_878_ = lean_box(0);
v___x_879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_879_, 0, v_name_875_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_880_, 0, v___x_877_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
v___x_881_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_876_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = l_Lasm_UI_Decoder_string(v___x_881_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Handled_map___redArg(lean_object* v_f_883_, lean_object* v_h_884_){
_start:
{
lean_object* v_message_885_; uint8_t v_preventDefault_886_; uint8_t v_stopPropagation_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_895_; 
v_message_885_ = lean_ctor_get(v_h_884_, 0);
v_preventDefault_886_ = lean_ctor_get_uint8(v_h_884_, sizeof(void*)*1);
v_stopPropagation_887_ = lean_ctor_get_uint8(v_h_884_, sizeof(void*)*1 + 1);
v_isSharedCheck_895_ = !lean_is_exclusive(v_h_884_);
if (v_isSharedCheck_895_ == 0)
{
v___x_889_ = v_h_884_;
v_isShared_890_ = v_isSharedCheck_895_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_message_885_);
lean_dec(v_h_884_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_895_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_891_; lean_object* v___x_893_; 
v___x_891_ = lean_apply_1(v_f_883_, v_message_885_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v___x_891_);
v___x_893_ = v___x_889_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v___x_891_);
lean_ctor_set_uint8(v_reuseFailAlloc_894_, sizeof(void*)*1, v_preventDefault_886_);
lean_ctor_set_uint8(v_reuseFailAlloc_894_, sizeof(void*)*1 + 1, v_stopPropagation_887_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Handled_map(lean_object* v_00_u03b1_896_, lean_object* v_00_u03b2_897_, lean_object* v_f_898_, lean_object* v_h_899_){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = l_Lasm_UI_Handled_map___redArg(v_f_898_, v_h_899_);
return v___x_900_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener_decEq___lam__0(lean_object* v_a_901_, lean_object* v_b_902_){
_start:
{
lean_object* v___x_903_; uint8_t v___x_904_; 
v___x_903_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___x_904_ = l_instDecidableEqList___redArg(v___x_903_, v_a_901_, v_b_902_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener_decEq___lam__0___boxed(lean_object* v_a_905_, lean_object* v_b_906_){
_start:
{
uint8_t v_res_907_; lean_object* v_r_908_; 
v_res_907_ = l_Lasm_UI_instDecidableEqListener_decEq___lam__0(v_a_905_, v_b_906_);
v_r_908_ = lean_box(v_res_907_);
return v_r_908_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener_decEq(lean_object* v_x_910_, lean_object* v_x_911_){
_start:
{
lean_object* v_event_912_; lean_object* v_paths_913_; lean_object* v_event_914_; lean_object* v_paths_915_; uint8_t v___x_916_; 
v_event_912_ = lean_ctor_get(v_x_910_, 0);
lean_inc_ref(v_event_912_);
v_paths_913_ = lean_ctor_get(v_x_910_, 1);
lean_inc(v_paths_913_);
lean_dec_ref(v_x_910_);
v_event_914_ = lean_ctor_get(v_x_911_, 0);
lean_inc_ref(v_event_914_);
v_paths_915_ = lean_ctor_get(v_x_911_, 1);
lean_inc(v_paths_915_);
lean_dec_ref(v_x_911_);
v___x_916_ = lean_string_dec_eq(v_event_912_, v_event_914_);
lean_dec_ref(v_event_914_);
lean_dec_ref(v_event_912_);
if (v___x_916_ == 0)
{
lean_dec(v_paths_915_);
lean_dec(v_paths_913_);
return v___x_916_;
}
else
{
lean_object* v___f_917_; uint8_t v___x_918_; 
v___f_917_ = ((lean_object*)(l_Lasm_UI_instDecidableEqListener_decEq___closed__0));
v___x_918_ = l_instDecidableEqList___redArg(v___f_917_, v_paths_913_, v_paths_915_);
return v___x_918_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener_decEq___boxed(lean_object* v_x_919_, lean_object* v_x_920_){
_start:
{
uint8_t v_res_921_; lean_object* v_r_922_; 
v_res_921_ = l_Lasm_UI_instDecidableEqListener_decEq(v_x_919_, v_x_920_);
v_r_922_ = lean_box(v_res_921_);
return v_r_922_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener(lean_object* v_x_923_, lean_object* v_x_924_){
_start:
{
uint8_t v___x_925_; 
v___x_925_ = l_Lasm_UI_instDecidableEqListener_decEq(v_x_923_, v_x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener___boxed(lean_object* v_x_926_, lean_object* v_x_927_){
_start:
{
uint8_t v_res_928_; lean_object* v_r_929_; 
v_res_928_ = l_Lasm_UI_instDecidableEqListener(v_x_926_, v_x_927_);
v_r_929_ = lean_box(v_res_928_);
return v_r_929_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_930_, lean_object* v_x_931_, lean_object* v_x_932_){
_start:
{
if (lean_obj_tag(v_x_932_) == 0)
{
lean_dec(v_x_930_);
return v_x_931_;
}
else
{
lean_object* v_head_933_; lean_object* v_tail_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_944_; 
v_head_933_ = lean_ctor_get(v_x_932_, 0);
v_tail_934_ = lean_ctor_get(v_x_932_, 1);
v_isSharedCheck_944_ = !lean_is_exclusive(v_x_932_);
if (v_isSharedCheck_944_ == 0)
{
v___x_936_ = v_x_932_;
v_isShared_937_ = v_isSharedCheck_944_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_tail_934_);
lean_inc(v_head_933_);
lean_dec(v_x_932_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_944_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
lean_inc(v_x_930_);
if (v_isShared_937_ == 0)
{
lean_ctor_set_tag(v___x_936_, 5);
lean_ctor_set(v___x_936_, 1, v_x_930_);
lean_ctor_set(v___x_936_, 0, v_x_931_);
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_x_931_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v_x_930_);
v___x_939_ = v_reuseFailAlloc_943_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_933_);
v___x_941_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_939_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v_x_931_ = v___x_941_;
v_x_932_ = v_tail_934_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1(lean_object* v_x_945_, lean_object* v_x_946_, lean_object* v_x_947_){
_start:
{
if (lean_obj_tag(v_x_947_) == 0)
{
lean_dec(v_x_945_);
return v_x_946_;
}
else
{
lean_object* v_head_948_; lean_object* v_tail_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_959_; 
v_head_948_ = lean_ctor_get(v_x_947_, 0);
v_tail_949_ = lean_ctor_get(v_x_947_, 1);
v_isSharedCheck_959_ = !lean_is_exclusive(v_x_947_);
if (v_isSharedCheck_959_ == 0)
{
v___x_951_ = v_x_947_;
v_isShared_952_ = v_isSharedCheck_959_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_tail_949_);
lean_inc(v_head_948_);
lean_dec(v_x_947_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_959_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
lean_inc(v_x_945_);
if (v_isShared_952_ == 0)
{
lean_ctor_set_tag(v___x_951_, 5);
lean_ctor_set(v___x_951_, 1, v_x_945_);
lean_ctor_set(v___x_951_, 0, v_x_946_);
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_x_946_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v_x_945_);
v___x_954_ = v_reuseFailAlloc_958_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_955_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_948_);
v___x_956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_954_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1_spec__2(v_x_945_, v___x_956_, v_tail_949_);
return v___x_957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0(lean_object* v_x_960_, lean_object* v_x_961_){
_start:
{
if (lean_obj_tag(v_x_960_) == 0)
{
lean_object* v___x_962_; 
lean_dec(v_x_961_);
v___x_962_ = lean_box(0);
return v___x_962_;
}
else
{
lean_object* v_tail_963_; 
v_tail_963_ = lean_ctor_get(v_x_960_, 1);
if (lean_obj_tag(v_tail_963_) == 0)
{
lean_object* v_head_964_; lean_object* v___x_965_; 
lean_dec(v_x_961_);
v_head_964_ = lean_ctor_get(v_x_960_, 0);
lean_inc(v_head_964_);
lean_dec_ref_known(v_x_960_, 2);
v___x_965_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_964_);
return v___x_965_;
}
else
{
lean_object* v_head_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
lean_inc(v_tail_963_);
v_head_966_ = lean_ctor_get(v_x_960_, 0);
lean_inc(v_head_966_);
lean_dec_ref_known(v_x_960_, 2);
v___x_967_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_966_);
v___x_968_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1(v_x_961_, v___x_967_, v_tail_963_);
return v___x_968_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__2));
v___x_981_ = lean_string_length(v___x_980_);
return v___x_981_;
}
}
static lean_object* _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_982_ = lean_obj_once(&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7, &l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7_once, _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7);
v___x_983_ = lean_nat_to_int(v___x_982_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(lean_object* v_a_988_){
_start:
{
if (lean_obj_tag(v_a_988_) == 0)
{
lean_object* v___x_989_; 
v___x_989_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__1));
return v___x_989_;
}
else
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; uint8_t v___x_998_; lean_object* v___x_999_; 
v___x_990_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__5));
v___x_991_ = l_Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0(v_a_988_, v___x_990_);
v___x_992_ = lean_obj_once(&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8, &l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8_once, _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8);
v___x_993_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__9));
v___x_994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
lean_ctor_set(v___x_994_, 1, v___x_991_);
v___x_995_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__10));
v___x_996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_994_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_992_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = 0;
v___x_999_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_999_, 0, v___x_997_);
lean_ctor_set_uint8(v___x_999_, sizeof(void*)*1, v___x_998_);
return v___x_999_;
}
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_unsigned_to_nat(9u);
v___x_1014_ = lean_nat_to_int(v___x_1013_);
return v___x_1014_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__0));
v___x_1020_ = lean_string_length(v___x_1019_);
return v___x_1020_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__11, &l_Lasm_UI_instReprListener_repr___redArg___closed__11_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__11);
v___x_1022_ = lean_nat_to_int(v___x_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___redArg(lean_object* v_x_1027_){
_start:
{
lean_object* v_event_1028_; lean_object* v_paths_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1062_; 
v_event_1028_ = lean_ctor_get(v_x_1027_, 0);
v_paths_1029_ = lean_ctor_get(v_x_1027_, 1);
v_isSharedCheck_1062_ = !lean_is_exclusive(v_x_1027_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1031_ = v_x_1027_;
v_isShared_1032_ = v_isSharedCheck_1062_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_paths_1029_);
lean_inc(v_event_1028_);
lean_dec(v_x_1027_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1062_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1039_; 
v___x_1033_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__5));
v___x_1034_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__6));
v___x_1035_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__7, &l_Lasm_UI_instReprListener_repr___redArg___closed__7_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__7);
v___x_1036_ = l_String_quote(v_event_1028_);
v___x_1037_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1036_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set_tag(v___x_1031_, 4);
lean_ctor_set(v___x_1031_, 1, v___x_1037_);
lean_ctor_set(v___x_1031_, 0, v___x_1035_);
v___x_1039_ = v___x_1031_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1035_);
lean_ctor_set(v_reuseFailAlloc_1061_, 1, v___x_1037_);
v___x_1039_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
uint8_t v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1040_ = 0;
v___x_1041_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1041_, 0, v___x_1039_);
lean_ctor_set_uint8(v___x_1041_, sizeof(void*)*1, v___x_1040_);
v___x_1042_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1034_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__4));
v___x_1044_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1042_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
v___x_1045_ = lean_box(1);
v___x_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1044_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__9));
v___x_1048_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1046_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
lean_ctor_set(v___x_1049_, 1, v___x_1033_);
v___x_1050_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_paths_1029_);
v___x_1051_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1035_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
lean_ctor_set_uint8(v___x_1052_, sizeof(void*)*1, v___x_1040_);
v___x_1053_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1049_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
v___x_1054_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__12, &l_Lasm_UI_instReprListener_repr___redArg___closed__12_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__12);
v___x_1055_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__13));
v___x_1056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1055_);
lean_ctor_set(v___x_1056_, 1, v___x_1053_);
v___x_1057_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__14));
v___x_1058_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1056_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v___x_1059_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1054_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
lean_ctor_set_uint8(v___x_1060_, sizeof(void*)*1, v___x_1040_);
return v___x_1060_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr(lean_object* v_x_1063_, lean_object* v_prec_1064_){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = l_Lasm_UI_instReprListener_repr___redArg(v_x_1063_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___boxed(lean_object* v_x_1066_, lean_object* v_prec_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lasm_UI_instReprListener_repr(v_x_1066_, v_prec_1067_);
lean_dec(v_prec_1067_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0(lean_object* v_a_1069_, lean_object* v_n_1070_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_a_1069_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___boxed(lean_object* v_a_1072_, lean_object* v_n_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0(v_a_1072_, v_n_1073_);
lean_dec(v_n_1073_);
return v_res_1074_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(uint64_t v_x_1082_, lean_object* v_x_1083_){
_start:
{
if (lean_obj_tag(v_x_1083_) == 0)
{
return v_x_1082_;
}
else
{
lean_object* v_head_1084_; lean_object* v_tail_1085_; uint64_t v___x_1086_; uint64_t v___x_1087_; 
v_head_1084_ = lean_ctor_get(v_x_1083_, 0);
v_tail_1085_ = lean_ctor_get(v_x_1083_, 1);
v___x_1086_ = lean_string_hash(v_head_1084_);
v___x_1087_ = lean_uint64_mix_hash(v_x_1082_, v___x_1086_);
v_x_1082_ = v___x_1087_;
v_x_1083_ = v_tail_1085_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0___boxed(lean_object* v_x_1089_, lean_object* v_x_1090_){
_start:
{
uint64_t v_x_96__boxed_1091_; uint64_t v_res_1092_; lean_object* v_r_1093_; 
v_x_96__boxed_1091_ = lean_unbox_uint64(v_x_1089_);
lean_dec_ref(v_x_1089_);
v_res_1092_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(v_x_96__boxed_1091_, v_x_1090_);
lean_dec(v_x_1090_);
v_r_1093_ = lean_box_uint64(v_res_1092_);
return v_r_1093_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(uint64_t v_x_1094_, lean_object* v_x_1095_){
_start:
{
if (lean_obj_tag(v_x_1095_) == 0)
{
return v_x_1094_;
}
else
{
lean_object* v_head_1096_; lean_object* v_tail_1097_; uint64_t v___x_1098_; uint64_t v___x_1099_; uint64_t v___x_1100_; 
v_head_1096_ = lean_ctor_get(v_x_1095_, 0);
v_tail_1097_ = lean_ctor_get(v_x_1095_, 1);
v___x_1098_ = 7ULL;
v___x_1099_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(v___x_1098_, v_head_1096_);
v___x_1100_ = lean_uint64_mix_hash(v_x_1094_, v___x_1099_);
v_x_1094_ = v___x_1100_;
v_x_1095_ = v_tail_1097_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1___boxed(lean_object* v_x_1102_, lean_object* v_x_1103_){
_start:
{
uint64_t v_x_112__boxed_1104_; uint64_t v_res_1105_; lean_object* v_r_1106_; 
v_x_112__boxed_1104_ = lean_unbox_uint64(v_x_1102_);
lean_dec_ref(v_x_1102_);
v_res_1105_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v_x_112__boxed_1104_, v_x_1103_);
lean_dec(v_x_1103_);
v_r_1106_ = lean_box_uint64(v_res_1105_);
return v_r_1106_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableListener_hash(lean_object* v_x_1107_){
_start:
{
lean_object* v_event_1108_; lean_object* v_paths_1109_; uint64_t v___x_1110_; uint64_t v___x_1111_; uint64_t v___x_1112_; uint64_t v___x_1113_; uint64_t v___x_1114_; uint64_t v___x_1115_; 
v_event_1108_ = lean_ctor_get(v_x_1107_, 0);
v_paths_1109_ = lean_ctor_get(v_x_1107_, 1);
v___x_1110_ = 0ULL;
v___x_1111_ = lean_string_hash(v_event_1108_);
v___x_1112_ = lean_uint64_mix_hash(v___x_1110_, v___x_1111_);
v___x_1113_ = 7ULL;
v___x_1114_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_1113_, v_paths_1109_);
v___x_1115_ = lean_uint64_mix_hash(v___x_1112_, v___x_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableListener_hash___boxed(lean_object* v_x_1116_){
_start:
{
uint64_t v_res_1117_; lean_object* v_r_1118_; 
v_res_1117_ = l_Lasm_UI_instHashableListener_hash(v_x_1116_);
lean_dec_ref(v_x_1116_);
v_r_1118_ = lean_box_uint64(v_res_1117_);
return v_r_1118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl___redArg(lean_object* v_x_1121_){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = lean_obj_tag_nat(v_x_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl___redArg___boxed(lean_object* v_x_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = l_Lasm_UI_Attr_ctorIdx___impl___redArg(v_x_1123_);
lean_dec_ref(v_x_1123_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl(lean_object* v_Msg_1125_, lean_object* v_x_1126_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_obj_tag_nat(v_x_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___impl___boxed(lean_object* v_Msg_1128_, lean_object* v_x_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lasm_UI_Attr_ctorIdx___impl(v_Msg_1128_, v_x_1129_);
lean_dec_ref(v_x_1129_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim___redArg(lean_object* v_t_1131_, lean_object* v_k_1132_){
_start:
{
lean_object* v_name_1133_; lean_object* v_value_1134_; lean_object* v___x_1135_; 
v_name_1133_ = lean_ctor_get(v_t_1131_, 0);
lean_inc_ref(v_name_1133_);
v_value_1134_ = lean_ctor_get(v_t_1131_, 1);
lean_inc_ref(v_value_1134_);
lean_dec_ref(v_t_1131_);
v___x_1135_ = lean_apply_2(v_k_1132_, v_name_1133_, v_value_1134_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim(lean_object* v_Msg_1136_, lean_object* v_motive_1137_, lean_object* v_ctorIdx_1138_, lean_object* v_t_1139_, lean_object* v_h_1140_, lean_object* v_k_1141_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1139_, v_k_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim___boxed(lean_object* v_Msg_1143_, lean_object* v_motive_1144_, lean_object* v_ctorIdx_1145_, lean_object* v_t_1146_, lean_object* v_h_1147_, lean_object* v_k_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lasm_UI_Attr_ctorElim(v_Msg_1143_, v_motive_1144_, v_ctorIdx_1145_, v_t_1146_, v_h_1147_, v_k_1148_);
lean_dec(v_ctorIdx_1145_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_attr_elim___redArg(lean_object* v_t_1150_, lean_object* v_attr_1151_){
_start:
{
lean_object* v___x_1152_; 
v___x_1152_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1150_, v_attr_1151_);
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_attr_elim(lean_object* v_Msg_1153_, lean_object* v_motive_1154_, lean_object* v_t_1155_, lean_object* v_h_1156_, lean_object* v_attr_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1155_, v_attr_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_prop_elim___redArg(lean_object* v_t_1159_, lean_object* v_prop_1160_){
_start:
{
lean_object* v___x_1161_; 
v___x_1161_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1159_, v_prop_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_prop_elim(lean_object* v_Msg_1162_, lean_object* v_motive_1163_, lean_object* v_t_1164_, lean_object* v_h_1165_, lean_object* v_prop_1166_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1164_, v_prop_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_style_elim___redArg(lean_object* v_t_1168_, lean_object* v_style_1169_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1168_, v_style_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_style_elim(lean_object* v_Msg_1171_, lean_object* v_motive_1172_, lean_object* v_t_1173_, lean_object* v_h_1174_, lean_object* v_style_1175_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1173_, v_style_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_on_elim___redArg(lean_object* v_t_1177_, lean_object* v_on_1178_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1177_, v_on_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_on_elim(lean_object* v_Msg_1180_, lean_object* v_motive_1181_, lean_object* v_t_1182_, lean_object* v_h_1183_, lean_object* v_on_1184_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1182_, v_on_1184_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr___redArg(){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = ((lean_object*)(l_Lasm_UI_instInhabitedAttr___redArg___closed__0));
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr___redArg___boxed(lean_object* v___dummy_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lasm_UI_instInhabitedAttr___redArg();
return v_res_1191_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedAttr___closed__0(void){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = l_Lasm_UI_instInhabitedAttr___redArg();
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr(lean_object* v_Msg_1193_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = lean_obj_once(&l_Lasm_UI_instInhabitedAttr___closed__0, &l_Lasm_UI_instInhabitedAttr___closed__0_once, _init_l_Lasm_UI_instInhabitedAttr___closed__0);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx___impl(lean_object* v_x_1195_){
_start:
{
lean_object* v___x_1196_; 
v___x_1196_ = lean_obj_tag_nat(v_x_1195_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx___impl___boxed(lean_object* v_x_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_Lasm_UI_AttrKey_ctorIdx___impl(v_x_1197_);
lean_dec_ref(v_x_1197_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim___redArg(lean_object* v_t_1199_, lean_object* v_k_1200_){
_start:
{
lean_object* v_name_1201_; lean_object* v___x_1202_; 
v_name_1201_ = lean_ctor_get(v_t_1199_, 0);
lean_inc_ref(v_name_1201_);
lean_dec_ref(v_t_1199_);
v___x_1202_ = lean_apply_1(v_k_1200_, v_name_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim(lean_object* v_motive_1203_, lean_object* v_ctorIdx_1204_, lean_object* v_t_1205_, lean_object* v_h_1206_, lean_object* v_k_1207_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1205_, v_k_1207_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim___boxed(lean_object* v_motive_1209_, lean_object* v_ctorIdx_1210_, lean_object* v_t_1211_, lean_object* v_h_1212_, lean_object* v_k_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Lasm_UI_AttrKey_ctorElim(v_motive_1209_, v_ctorIdx_1210_, v_t_1211_, v_h_1212_, v_k_1213_);
lean_dec(v_ctorIdx_1210_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_attr_elim___redArg(lean_object* v_t_1215_, lean_object* v_attr_1216_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1215_, v_attr_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_attr_elim(lean_object* v_motive_1218_, lean_object* v_t_1219_, lean_object* v_h_1220_, lean_object* v_attr_1221_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1219_, v_attr_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_prop_elim___redArg(lean_object* v_t_1223_, lean_object* v_prop_1224_){
_start:
{
lean_object* v___x_1225_; 
v___x_1225_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1223_, v_prop_1224_);
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_prop_elim(lean_object* v_motive_1226_, lean_object* v_t_1227_, lean_object* v_h_1228_, lean_object* v_prop_1229_){
_start:
{
lean_object* v___x_1230_; 
v___x_1230_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1227_, v_prop_1229_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_style_elim___redArg(lean_object* v_t_1231_, lean_object* v_style_1232_){
_start:
{
lean_object* v___x_1233_; 
v___x_1233_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1231_, v_style_1232_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_style_elim(lean_object* v_motive_1234_, lean_object* v_t_1235_, lean_object* v_h_1236_, lean_object* v_style_1237_){
_start:
{
lean_object* v___x_1238_; 
v___x_1238_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1235_, v_style_1237_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_on_elim___redArg(lean_object* v_t_1239_, lean_object* v_on_1240_){
_start:
{
lean_object* v___x_1241_; 
v___x_1241_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1239_, v_on_1240_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_on_elim(lean_object* v_motive_1242_, lean_object* v_t_1243_, lean_object* v_h_1244_, lean_object* v_on_1245_){
_start:
{
lean_object* v___x_1246_; 
v___x_1246_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1243_, v_on_1245_);
return v___x_1246_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrKey_decEq(lean_object* v_x_1247_, lean_object* v_x_1248_){
_start:
{
switch(lean_obj_tag(v_x_1247_))
{
case 0:
{
if (lean_obj_tag(v_x_1248_) == 0)
{
lean_object* v_name_1249_; lean_object* v_name_1250_; uint8_t v___x_1251_; 
v_name_1249_ = lean_ctor_get(v_x_1247_, 0);
v_name_1250_ = lean_ctor_get(v_x_1248_, 0);
v___x_1251_ = lean_string_dec_eq(v_name_1249_, v_name_1250_);
return v___x_1251_;
}
else
{
uint8_t v___x_1252_; 
v___x_1252_ = 0;
return v___x_1252_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1248_) == 1)
{
lean_object* v_name_1253_; lean_object* v_name_1254_; uint8_t v___x_1255_; 
v_name_1253_ = lean_ctor_get(v_x_1247_, 0);
v_name_1254_ = lean_ctor_get(v_x_1248_, 0);
v___x_1255_ = lean_string_dec_eq(v_name_1253_, v_name_1254_);
return v___x_1255_;
}
else
{
uint8_t v___x_1256_; 
v___x_1256_ = 0;
return v___x_1256_;
}
}
case 2:
{
if (lean_obj_tag(v_x_1248_) == 2)
{
lean_object* v_name_1257_; lean_object* v_name_1258_; uint8_t v___x_1259_; 
v_name_1257_ = lean_ctor_get(v_x_1247_, 0);
v_name_1258_ = lean_ctor_get(v_x_1248_, 0);
v___x_1259_ = lean_string_dec_eq(v_name_1257_, v_name_1258_);
return v___x_1259_;
}
else
{
uint8_t v___x_1260_; 
v___x_1260_ = 0;
return v___x_1260_;
}
}
default: 
{
if (lean_obj_tag(v_x_1248_) == 3)
{
lean_object* v_event_1261_; lean_object* v_event_1262_; uint8_t v___x_1263_; 
v_event_1261_ = lean_ctor_get(v_x_1247_, 0);
v_event_1262_ = lean_ctor_get(v_x_1248_, 0);
v___x_1263_ = lean_string_dec_eq(v_event_1261_, v_event_1262_);
return v___x_1263_;
}
else
{
uint8_t v___x_1264_; 
v___x_1264_ = 0;
return v___x_1264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrKey_decEq___boxed(lean_object* v_x_1265_, lean_object* v_x_1266_){
_start:
{
uint8_t v_res_1267_; lean_object* v_r_1268_; 
v_res_1267_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_x_1265_, v_x_1266_);
lean_dec_ref(v_x_1266_);
lean_dec_ref(v_x_1265_);
v_r_1268_ = lean_box(v_res_1267_);
return v_r_1268_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrKey(lean_object* v_x_1269_, lean_object* v_x_1270_){
_start:
{
uint8_t v___x_1271_; 
v___x_1271_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_x_1269_, v_x_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrKey___boxed(lean_object* v_x_1272_, lean_object* v_x_1273_){
_start:
{
uint8_t v_res_1274_; lean_object* v_r_1275_; 
v_res_1274_ = l_Lasm_UI_instDecidableEqAttrKey(v_x_1272_, v_x_1273_);
lean_dec_ref(v_x_1273_);
lean_dec_ref(v_x_1272_);
v_r_1275_ = lean_box(v_res_1274_);
return v_r_1275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrKey_repr(lean_object* v_x_1300_, lean_object* v_prec_1301_){
_start:
{
switch(lean_obj_tag(v_x_1300_))
{
case 0:
{
lean_object* v_name_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1322_; 
v_name_1302_ = lean_ctor_get(v_x_1300_, 0);
v_isSharedCheck_1322_ = !lean_is_exclusive(v_x_1300_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1304_ = v_x_1300_;
v_isShared_1305_ = v_isSharedCheck_1322_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_name_1302_);
lean_dec(v_x_1300_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1322_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___y_1307_; lean_object* v___x_1318_; uint8_t v___x_1319_; 
v___x_1318_ = lean_unsigned_to_nat(1024u);
v___x_1319_ = lean_nat_dec_le(v___x_1318_, v_prec_1301_);
if (v___x_1319_ == 0)
{
lean_object* v___x_1320_; 
v___x_1320_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1307_ = v___x_1320_;
goto v___jp_1306_;
}
else
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1307_ = v___x_1321_;
goto v___jp_1306_;
}
v___jp_1306_:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1311_; 
v___x_1308_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__2));
v___x_1309_ = l_String_quote(v_name_1302_);
if (v_isShared_1305_ == 0)
{
lean_ctor_set_tag(v___x_1304_, 3);
lean_ctor_set(v___x_1304_, 0, v___x_1309_);
v___x_1311_ = v___x_1304_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v___x_1309_);
v___x_1311_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; uint8_t v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1308_);
lean_ctor_set(v___x_1312_, 1, v___x_1311_);
lean_inc(v___y_1307_);
v___x_1313_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___y_1307_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = 0;
v___x_1315_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1315_, 0, v___x_1313_);
lean_ctor_set_uint8(v___x_1315_, sizeof(void*)*1, v___x_1314_);
v___x_1316_ = l_Repr_addAppParen(v___x_1315_, v_prec_1301_);
return v___x_1316_;
}
}
}
}
case 1:
{
lean_object* v_name_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1343_; 
v_name_1323_ = lean_ctor_get(v_x_1300_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v_x_1300_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1325_ = v_x_1300_;
v_isShared_1326_ = v_isSharedCheck_1343_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_name_1323_);
lean_dec(v_x_1300_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1343_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___y_1328_; lean_object* v___x_1339_; uint8_t v___x_1340_; 
v___x_1339_ = lean_unsigned_to_nat(1024u);
v___x_1340_ = lean_nat_dec_le(v___x_1339_, v_prec_1301_);
if (v___x_1340_ == 0)
{
lean_object* v___x_1341_; 
v___x_1341_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1328_ = v___x_1341_;
goto v___jp_1327_;
}
else
{
lean_object* v___x_1342_; 
v___x_1342_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1328_ = v___x_1342_;
goto v___jp_1327_;
}
v___jp_1327_:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1332_; 
v___x_1329_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__5));
v___x_1330_ = l_String_quote(v_name_1323_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set_tag(v___x_1325_, 3);
lean_ctor_set(v___x_1325_, 0, v___x_1330_);
v___x_1332_ = v___x_1325_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1330_);
v___x_1332_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; uint8_t v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1329_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
lean_inc(v___y_1328_);
v___x_1334_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___y_1328_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = 0;
v___x_1336_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1336_, 0, v___x_1334_);
lean_ctor_set_uint8(v___x_1336_, sizeof(void*)*1, v___x_1335_);
v___x_1337_ = l_Repr_addAppParen(v___x_1336_, v_prec_1301_);
return v___x_1337_;
}
}
}
}
case 2:
{
lean_object* v_name_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1364_; 
v_name_1344_ = lean_ctor_get(v_x_1300_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_x_1300_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1346_ = v_x_1300_;
v_isShared_1347_ = v_isSharedCheck_1364_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_name_1344_);
lean_dec(v_x_1300_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1364_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___y_1349_; lean_object* v___x_1360_; uint8_t v___x_1361_; 
v___x_1360_ = lean_unsigned_to_nat(1024u);
v___x_1361_ = lean_nat_dec_le(v___x_1360_, v_prec_1301_);
if (v___x_1361_ == 0)
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1349_ = v___x_1362_;
goto v___jp_1348_;
}
else
{
lean_object* v___x_1363_; 
v___x_1363_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1349_ = v___x_1363_;
goto v___jp_1348_;
}
v___jp_1348_:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1353_; 
v___x_1350_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__8));
v___x_1351_ = l_String_quote(v_name_1344_);
if (v_isShared_1347_ == 0)
{
lean_ctor_set_tag(v___x_1346_, 3);
lean_ctor_set(v___x_1346_, 0, v___x_1351_);
v___x_1353_ = v___x_1346_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1354_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1350_);
lean_ctor_set(v___x_1354_, 1, v___x_1353_);
lean_inc(v___y_1349_);
v___x_1355_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___y_1349_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
v___x_1356_ = 0;
v___x_1357_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1357_, 0, v___x_1355_);
lean_ctor_set_uint8(v___x_1357_, sizeof(void*)*1, v___x_1356_);
v___x_1358_ = l_Repr_addAppParen(v___x_1357_, v_prec_1301_);
return v___x_1358_;
}
}
}
}
default: 
{
lean_object* v_event_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1385_; 
v_event_1365_ = lean_ctor_get(v_x_1300_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v_x_1300_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1367_ = v_x_1300_;
v_isShared_1368_ = v_isSharedCheck_1385_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_event_1365_);
lean_dec(v_x_1300_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1385_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___y_1370_; lean_object* v___x_1381_; uint8_t v___x_1382_; 
v___x_1381_ = lean_unsigned_to_nat(1024u);
v___x_1382_ = lean_nat_dec_le(v___x_1381_, v_prec_1301_);
if (v___x_1382_ == 0)
{
lean_object* v___x_1383_; 
v___x_1383_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1370_ = v___x_1383_;
goto v___jp_1369_;
}
else
{
lean_object* v___x_1384_; 
v___x_1384_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1370_ = v___x_1384_;
goto v___jp_1369_;
}
v___jp_1369_:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1374_; 
v___x_1371_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__11));
v___x_1372_ = l_String_quote(v_event_1365_);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 0, v___x_1372_);
v___x_1374_ = v___x_1367_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v___x_1372_);
v___x_1374_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1375_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1371_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
lean_inc(v___y_1370_);
v___x_1376_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___y_1370_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
v___x_1377_ = 0;
v___x_1378_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1378_, 0, v___x_1376_);
lean_ctor_set_uint8(v___x_1378_, sizeof(void*)*1, v___x_1377_);
v___x_1379_ = l_Repr_addAppParen(v___x_1378_, v_prec_1301_);
return v___x_1379_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrKey_repr___boxed(lean_object* v_x_1386_, lean_object* v_prec_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_Lasm_UI_instReprAttrKey_repr(v_x_1386_, v_prec_1387_);
lean_dec(v_prec_1387_);
return v_res_1388_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableAttrKey_hash(lean_object* v_x_1395_){
_start:
{
switch(lean_obj_tag(v_x_1395_))
{
case 0:
{
lean_object* v_name_1396_; uint64_t v___x_1397_; uint64_t v___x_1398_; uint64_t v___x_1399_; 
v_name_1396_ = lean_ctor_get(v_x_1395_, 0);
v___x_1397_ = 0ULL;
v___x_1398_ = lean_string_hash(v_name_1396_);
v___x_1399_ = lean_uint64_mix_hash(v___x_1397_, v___x_1398_);
return v___x_1399_;
}
case 1:
{
lean_object* v_name_1400_; uint64_t v___x_1401_; uint64_t v___x_1402_; uint64_t v___x_1403_; 
v_name_1400_ = lean_ctor_get(v_x_1395_, 0);
v___x_1401_ = 1ULL;
v___x_1402_ = lean_string_hash(v_name_1400_);
v___x_1403_ = lean_uint64_mix_hash(v___x_1401_, v___x_1402_);
return v___x_1403_;
}
case 2:
{
lean_object* v_name_1404_; uint64_t v___x_1405_; uint64_t v___x_1406_; uint64_t v___x_1407_; 
v_name_1404_ = lean_ctor_get(v_x_1395_, 0);
v___x_1405_ = 2ULL;
v___x_1406_ = lean_string_hash(v_name_1404_);
v___x_1407_ = lean_uint64_mix_hash(v___x_1405_, v___x_1406_);
return v___x_1407_;
}
default: 
{
lean_object* v_event_1408_; uint64_t v___x_1409_; uint64_t v___x_1410_; uint64_t v___x_1411_; 
v_event_1408_ = lean_ctor_get(v_x_1395_, 0);
v___x_1409_ = 3ULL;
v___x_1410_ = lean_string_hash(v_event_1408_);
v___x_1411_ = lean_uint64_mix_hash(v___x_1409_, v___x_1410_);
return v___x_1411_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableAttrKey_hash___boxed(lean_object* v_x_1412_){
_start:
{
uint64_t v_res_1413_; lean_object* v_r_1414_; 
v_res_1413_ = l_Lasm_UI_instHashableAttrKey_hash(v_x_1412_);
lean_dec_ref(v_x_1412_);
v_r_1414_ = lean_box_uint64(v_res_1413_);
return v_r_1414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx___impl(lean_object* v_x_1417_){
_start:
{
lean_object* v___x_1418_; 
v___x_1418_ = lean_obj_tag_nat(v_x_1417_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx___impl___boxed(lean_object* v_x_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = l_Lasm_UI_AttrVal_ctorIdx___impl(v_x_1419_);
lean_dec_ref(v_x_1419_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim___redArg(lean_object* v_t_1421_, lean_object* v_k_1422_){
_start:
{
lean_object* v_s_1423_; lean_object* v___x_1424_; 
v_s_1423_ = lean_ctor_get(v_t_1421_, 0);
lean_inc_ref(v_s_1423_);
lean_dec_ref(v_t_1421_);
v___x_1424_ = lean_apply_1(v_k_1422_, v_s_1423_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim(lean_object* v_motive_1425_, lean_object* v_ctorIdx_1426_, lean_object* v_t_1427_, lean_object* v_h_1428_, lean_object* v_k_1429_){
_start:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1427_, v_k_1429_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim___boxed(lean_object* v_motive_1431_, lean_object* v_ctorIdx_1432_, lean_object* v_t_1433_, lean_object* v_h_1434_, lean_object* v_k_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_Lasm_UI_AttrVal_ctorElim(v_motive_1431_, v_ctorIdx_1432_, v_t_1433_, v_h_1434_, v_k_1435_);
lean_dec(v_ctorIdx_1432_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_str_elim___redArg(lean_object* v_t_1437_, lean_object* v_str_1438_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1437_, v_str_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_str_elim(lean_object* v_motive_1440_, lean_object* v_t_1441_, lean_object* v_h_1442_, lean_object* v_str_1443_){
_start:
{
lean_object* v___x_1444_; 
v___x_1444_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1441_, v_str_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_prop_elim___redArg(lean_object* v_t_1445_, lean_object* v_prop_1446_){
_start:
{
lean_object* v___x_1447_; 
v___x_1447_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1445_, v_prop_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_prop_elim(lean_object* v_motive_1448_, lean_object* v_t_1449_, lean_object* v_h_1450_, lean_object* v_prop_1451_){
_start:
{
lean_object* v___x_1452_; 
v___x_1452_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1449_, v_prop_1451_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_listener_elim___redArg(lean_object* v_t_1453_, lean_object* v_listener_1454_){
_start:
{
lean_object* v___x_1455_; 
v___x_1455_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1453_, v_listener_1454_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_listener_elim(lean_object* v_motive_1456_, lean_object* v_t_1457_, lean_object* v_h_1458_, lean_object* v_listener_1459_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1457_, v_listener_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrVal_decEq(lean_object* v_x_1461_, lean_object* v_x_1462_){
_start:
{
switch(lean_obj_tag(v_x_1461_))
{
case 0:
{
if (lean_obj_tag(v_x_1462_) == 0)
{
lean_object* v_s_1463_; lean_object* v_s_1464_; uint8_t v___x_1465_; 
v_s_1463_ = lean_ctor_get(v_x_1461_, 0);
lean_inc_ref(v_s_1463_);
lean_dec_ref_known(v_x_1461_, 1);
v_s_1464_ = lean_ctor_get(v_x_1462_, 0);
lean_inc_ref(v_s_1464_);
lean_dec_ref_known(v_x_1462_, 1);
v___x_1465_ = lean_string_dec_eq(v_s_1463_, v_s_1464_);
lean_dec_ref(v_s_1464_);
lean_dec_ref(v_s_1463_);
return v___x_1465_;
}
else
{
uint8_t v___x_1466_; 
lean_dec_ref_known(v_x_1461_, 1);
lean_dec_ref(v_x_1462_);
v___x_1466_ = 0;
return v___x_1466_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1462_) == 1)
{
lean_object* v_v_1467_; lean_object* v_v_1468_; uint8_t v___x_1469_; 
v_v_1467_ = lean_ctor_get(v_x_1461_, 0);
lean_inc_ref(v_v_1467_);
lean_dec_ref_known(v_x_1461_, 1);
v_v_1468_ = lean_ctor_get(v_x_1462_, 0);
lean_inc_ref(v_v_1468_);
lean_dec_ref_known(v_x_1462_, 1);
v___x_1469_ = l_Lasm_UI_instDecidableEqPropVal_decEq(v_v_1467_, v_v_1468_);
lean_dec_ref(v_v_1468_);
lean_dec_ref(v_v_1467_);
return v___x_1469_;
}
else
{
uint8_t v___x_1470_; 
lean_dec_ref_known(v_x_1461_, 1);
lean_dec_ref(v_x_1462_);
v___x_1470_ = 0;
return v___x_1470_;
}
}
default: 
{
if (lean_obj_tag(v_x_1462_) == 2)
{
lean_object* v_l_1471_; lean_object* v_l_1472_; uint8_t v___x_1473_; 
v_l_1471_ = lean_ctor_get(v_x_1461_, 0);
lean_inc_ref(v_l_1471_);
lean_dec_ref_known(v_x_1461_, 1);
v_l_1472_ = lean_ctor_get(v_x_1462_, 0);
lean_inc_ref(v_l_1472_);
lean_dec_ref_known(v_x_1462_, 1);
v___x_1473_ = l_Lasm_UI_instDecidableEqListener_decEq(v_l_1471_, v_l_1472_);
return v___x_1473_;
}
else
{
uint8_t v___x_1474_; 
lean_dec_ref_known(v_x_1461_, 1);
lean_dec_ref(v_x_1462_);
v___x_1474_ = 0;
return v___x_1474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrVal_decEq___boxed(lean_object* v_x_1475_, lean_object* v_x_1476_){
_start:
{
uint8_t v_res_1477_; lean_object* v_r_1478_; 
v_res_1477_ = l_Lasm_UI_instDecidableEqAttrVal_decEq(v_x_1475_, v_x_1476_);
v_r_1478_ = lean_box(v_res_1477_);
return v_r_1478_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrVal(lean_object* v_x_1479_, lean_object* v_x_1480_){
_start:
{
uint8_t v___x_1481_; 
v___x_1481_ = l_Lasm_UI_instDecidableEqAttrVal_decEq(v_x_1479_, v_x_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrVal___boxed(lean_object* v_x_1482_, lean_object* v_x_1483_){
_start:
{
uint8_t v_res_1484_; lean_object* v_r_1485_; 
v_res_1484_ = l_Lasm_UI_instDecidableEqAttrVal(v_x_1482_, v_x_1483_);
v_r_1485_ = lean_box(v_res_1484_);
return v_r_1485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrVal_repr(lean_object* v_x_1504_, lean_object* v_prec_1505_){
_start:
{
switch(lean_obj_tag(v_x_1504_))
{
case 0:
{
lean_object* v_s_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1526_; 
v_s_1506_ = lean_ctor_get(v_x_1504_, 0);
v_isSharedCheck_1526_ = !lean_is_exclusive(v_x_1504_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1508_ = v_x_1504_;
v_isShared_1509_ = v_isSharedCheck_1526_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_s_1506_);
lean_dec(v_x_1504_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1526_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___y_1511_; lean_object* v___x_1522_; uint8_t v___x_1523_; 
v___x_1522_ = lean_unsigned_to_nat(1024u);
v___x_1523_ = lean_nat_dec_le(v___x_1522_, v_prec_1505_);
if (v___x_1523_ == 0)
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1511_ = v___x_1524_;
goto v___jp_1510_;
}
else
{
lean_object* v___x_1525_; 
v___x_1525_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1511_ = v___x_1525_;
goto v___jp_1510_;
}
v___jp_1510_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1515_; 
v___x_1512_ = ((lean_object*)(l_Lasm_UI_instReprAttrVal_repr___closed__2));
v___x_1513_ = l_String_quote(v_s_1506_);
if (v_isShared_1509_ == 0)
{
lean_ctor_set_tag(v___x_1508_, 3);
lean_ctor_set(v___x_1508_, 0, v___x_1513_);
v___x_1515_ = v___x_1508_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1513_);
v___x_1515_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; uint8_t v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1516_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1512_);
lean_ctor_set(v___x_1516_, 1, v___x_1515_);
lean_inc(v___y_1511_);
v___x_1517_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1517_, 0, v___y_1511_);
lean_ctor_set(v___x_1517_, 1, v___x_1516_);
v___x_1518_ = 0;
v___x_1519_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1519_, 0, v___x_1517_);
lean_ctor_set_uint8(v___x_1519_, sizeof(void*)*1, v___x_1518_);
v___x_1520_ = l_Repr_addAppParen(v___x_1519_, v_prec_1505_);
return v___x_1520_;
}
}
}
}
case 1:
{
lean_object* v_v_1527_; lean_object* v___y_1529_; lean_object* v___x_1538_; uint8_t v___x_1539_; 
v_v_1527_ = lean_ctor_get(v_x_1504_, 0);
lean_inc_ref(v_v_1527_);
lean_dec_ref_known(v_x_1504_, 1);
v___x_1538_ = lean_unsigned_to_nat(1024u);
v___x_1539_ = lean_nat_dec_le(v___x_1538_, v_prec_1505_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1529_ = v___x_1540_;
goto v___jp_1528_;
}
else
{
lean_object* v___x_1541_; 
v___x_1541_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1529_ = v___x_1541_;
goto v___jp_1528_;
}
v___jp_1528_:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; uint8_t v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1530_ = ((lean_object*)(l_Lasm_UI_instReprAttrVal_repr___closed__5));
v___x_1531_ = lean_unsigned_to_nat(1024u);
v___x_1532_ = l_Lasm_UI_instReprPropVal_repr(v_v_1527_, v___x_1531_);
v___x_1533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1530_);
lean_ctor_set(v___x_1533_, 1, v___x_1532_);
lean_inc(v___y_1529_);
v___x_1534_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1534_, 0, v___y_1529_);
lean_ctor_set(v___x_1534_, 1, v___x_1533_);
v___x_1535_ = 0;
v___x_1536_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1536_, 0, v___x_1534_);
lean_ctor_set_uint8(v___x_1536_, sizeof(void*)*1, v___x_1535_);
v___x_1537_ = l_Repr_addAppParen(v___x_1536_, v_prec_1505_);
return v___x_1537_;
}
}
default: 
{
lean_object* v_l_1542_; lean_object* v___y_1544_; lean_object* v___x_1552_; uint8_t v___x_1553_; 
v_l_1542_ = lean_ctor_get(v_x_1504_, 0);
lean_inc_ref(v_l_1542_);
lean_dec_ref_known(v_x_1504_, 1);
v___x_1552_ = lean_unsigned_to_nat(1024u);
v___x_1553_ = lean_nat_dec_le(v___x_1552_, v_prec_1505_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1554_; 
v___x_1554_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1544_ = v___x_1554_;
goto v___jp_1543_;
}
else
{
lean_object* v___x_1555_; 
v___x_1555_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1544_ = v___x_1555_;
goto v___jp_1543_;
}
v___jp_1543_:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; uint8_t v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1545_ = ((lean_object*)(l_Lasm_UI_instReprAttrVal_repr___closed__8));
v___x_1546_ = l_Lasm_UI_instReprListener_repr___redArg(v_l_1542_);
v___x_1547_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1545_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
lean_inc(v___y_1544_);
v___x_1548_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1548_, 0, v___y_1544_);
lean_ctor_set(v___x_1548_, 1, v___x_1547_);
v___x_1549_ = 0;
v___x_1550_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1550_, 0, v___x_1548_);
lean_ctor_set_uint8(v___x_1550_, sizeof(void*)*1, v___x_1549_);
v___x_1551_ = l_Repr_addAppParen(v___x_1550_, v_prec_1505_);
return v___x_1551_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrVal_repr___boxed(lean_object* v_x_1556_, lean_object* v_prec_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Lasm_UI_instReprAttrVal_repr(v_x_1556_, v_prec_1557_);
lean_dec(v_prec_1557_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___redArg(lean_object* v_x_1565_){
_start:
{
switch(lean_obj_tag(v_x_1565_))
{
case 0:
{
lean_object* v_name_1566_; lean_object* v___x_1567_; 
v_name_1566_ = lean_ctor_get(v_x_1565_, 0);
lean_inc_ref(v_name_1566_);
v___x_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1567_, 0, v_name_1566_);
return v___x_1567_;
}
case 1:
{
lean_object* v_name_1568_; lean_object* v___x_1569_; 
v_name_1568_ = lean_ctor_get(v_x_1565_, 0);
lean_inc_ref(v_name_1568_);
v___x_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1569_, 0, v_name_1568_);
return v___x_1569_;
}
case 2:
{
lean_object* v_name_1570_; lean_object* v___x_1571_; 
v_name_1570_ = lean_ctor_get(v_x_1565_, 0);
lean_inc_ref(v_name_1570_);
v___x_1571_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1571_, 0, v_name_1570_);
return v___x_1571_;
}
default: 
{
lean_object* v_listener_1572_; lean_object* v_event_1573_; lean_object* v___x_1574_; 
v_listener_1572_ = lean_ctor_get(v_x_1565_, 0);
v_event_1573_ = lean_ctor_get(v_listener_1572_, 0);
lean_inc_ref(v_event_1573_);
v___x_1574_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1574_, 0, v_event_1573_);
return v___x_1574_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___redArg___boxed(lean_object* v_x_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Lasm_UI_Attr_key___redArg(v_x_1575_);
lean_dec_ref(v_x_1575_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key(lean_object* v_Msg_1577_, lean_object* v_x_1578_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Lasm_UI_Attr_key___redArg(v_x_1578_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___boxed(lean_object* v_Msg_1580_, lean_object* v_x_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l_Lasm_UI_Attr_key(v_Msg_1580_, v_x_1581_);
lean_dec_ref(v_x_1581_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___redArg(lean_object* v_x_1583_){
_start:
{
switch(lean_obj_tag(v_x_1583_))
{
case 1:
{
lean_object* v_value_1584_; lean_object* v___x_1585_; 
v_value_1584_ = lean_ctor_get(v_x_1583_, 1);
lean_inc_ref(v_value_1584_);
v___x_1585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1585_, 0, v_value_1584_);
return v___x_1585_;
}
case 3:
{
lean_object* v_listener_1586_; lean_object* v___x_1587_; 
v_listener_1586_ = lean_ctor_get(v_x_1583_, 0);
lean_inc_ref(v_listener_1586_);
v___x_1587_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1587_, 0, v_listener_1586_);
return v___x_1587_;
}
default: 
{
lean_object* v_value_1588_; lean_object* v___x_1589_; 
v_value_1588_ = lean_ctor_get(v_x_1583_, 1);
lean_inc_ref(v_value_1588_);
v___x_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1589_, 0, v_value_1588_);
return v___x_1589_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___redArg___boxed(lean_object* v_x_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lasm_UI_Attr_val___redArg(v_x_1590_);
lean_dec_ref(v_x_1590_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val(lean_object* v_Msg_1592_, lean_object* v_x_1593_){
_start:
{
lean_object* v___x_1594_; 
v___x_1594_ = l_Lasm_UI_Attr_val___redArg(v_x_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___boxed(lean_object* v_Msg_1595_, lean_object* v_x_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l_Lasm_UI_Attr_val(v_Msg_1595_, v_x_1596_);
lean_dec_ref(v_x_1596_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map___redArg___lam__0(lean_object* v_handle_1598_, lean_object* v_f_1599_, lean_object* v_vs_1600_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = lean_apply_1(v_handle_1598_, v_vs_1600_);
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v___x_1602_; 
lean_dec(v_f_1599_);
v___x_1602_ = lean_box(0);
return v___x_1602_;
}
else
{
lean_object* v_val_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1611_; 
v_val_1603_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1605_ = v___x_1601_;
v_isShared_1606_ = v_isSharedCheck_1611_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_val_1603_);
lean_dec(v___x_1601_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1611_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1607_; lean_object* v___x_1609_; 
v___x_1607_ = l_Lasm_UI_Handled_map___redArg(v_f_1599_, v_val_1603_);
if (v_isShared_1606_ == 0)
{
lean_ctor_set(v___x_1605_, 0, v___x_1607_);
v___x_1609_ = v___x_1605_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v___x_1607_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map___redArg(lean_object* v_f_1612_, lean_object* v_x_1613_){
_start:
{
switch(lean_obj_tag(v_x_1613_))
{
case 0:
{
lean_object* v_name_1614_; lean_object* v_value_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1622_; 
lean_dec(v_f_1612_);
v_name_1614_ = lean_ctor_get(v_x_1613_, 0);
v_value_1615_ = lean_ctor_get(v_x_1613_, 1);
v_isSharedCheck_1622_ = !lean_is_exclusive(v_x_1613_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1617_ = v_x_1613_;
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_value_1615_);
lean_inc(v_name_1614_);
lean_dec(v_x_1613_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1620_; 
if (v_isShared_1618_ == 0)
{
v___x_1620_ = v___x_1617_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_name_1614_);
lean_ctor_set(v_reuseFailAlloc_1621_, 1, v_value_1615_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
}
case 1:
{
lean_object* v_name_1623_; lean_object* v_value_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
lean_dec(v_f_1612_);
v_name_1623_ = lean_ctor_get(v_x_1613_, 0);
v_value_1624_ = lean_ctor_get(v_x_1613_, 1);
v_isSharedCheck_1631_ = !lean_is_exclusive(v_x_1613_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v_x_1613_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_value_1624_);
lean_inc(v_name_1623_);
lean_dec(v_x_1613_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1629_; 
if (v_isShared_1627_ == 0)
{
v___x_1629_ = v___x_1626_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_name_1623_);
lean_ctor_set(v_reuseFailAlloc_1630_, 1, v_value_1624_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
case 2:
{
lean_object* v_name_1632_; lean_object* v_value_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1640_; 
lean_dec(v_f_1612_);
v_name_1632_ = lean_ctor_get(v_x_1613_, 0);
v_value_1633_ = lean_ctor_get(v_x_1613_, 1);
v_isSharedCheck_1640_ = !lean_is_exclusive(v_x_1613_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1635_ = v_x_1613_;
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_value_1633_);
lean_inc(v_name_1632_);
lean_dec(v_x_1613_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1638_; 
if (v_isShared_1636_ == 0)
{
v___x_1638_ = v___x_1635_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_name_1632_);
lean_ctor_set(v_reuseFailAlloc_1639_, 1, v_value_1633_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
default: 
{
lean_object* v_listener_1641_; lean_object* v_handle_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1650_; 
v_listener_1641_ = lean_ctor_get(v_x_1613_, 0);
v_handle_1642_ = lean_ctor_get(v_x_1613_, 1);
v_isSharedCheck_1650_ = !lean_is_exclusive(v_x_1613_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1644_ = v_x_1613_;
v_isShared_1645_ = v_isSharedCheck_1650_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_handle_1642_);
lean_inc(v_listener_1641_);
lean_dec(v_x_1613_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1650_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___f_1646_; lean_object* v___x_1648_; 
v___f_1646_ = lean_alloc_closure((void*)(l_Lasm_UI_Attr_map___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1646_, 0, v_handle_1642_);
lean_closure_set(v___f_1646_, 1, v_f_1612_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set(v___x_1644_, 1, v___f_1646_);
v___x_1648_ = v___x_1644_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_listener_1641_);
lean_ctor_set(v_reuseFailAlloc_1649_, 1, v___f_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map(lean_object* v_00_u03b1_1651_, lean_object* v_00_u03b2_1652_, lean_object* v_f_1653_, lean_object* v_x_1654_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l_Lasm_UI_Attr_map___redArg(v_f_1653_, v_x_1654_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_custom___redArg(lean_object* v_event_1656_, lean_object* v_d_1657_){
_start:
{
lean_object* v_paths_1658_; lean_object* v_run_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1667_; 
v_paths_1658_ = lean_ctor_get(v_d_1657_, 0);
v_run_1659_ = lean_ctor_get(v_d_1657_, 1);
v_isSharedCheck_1667_ = !lean_is_exclusive(v_d_1657_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1661_ = v_d_1657_;
v_isShared_1662_ = v_isSharedCheck_1667_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_run_1659_);
lean_inc(v_paths_1658_);
lean_dec(v_d_1657_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1667_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1664_; 
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 1, v_paths_1658_);
lean_ctor_set(v___x_1661_, 0, v_event_1656_);
v___x_1664_ = v___x_1661_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_event_1656_);
lean_ctor_set(v_reuseFailAlloc_1666_, 1, v_paths_1658_);
v___x_1664_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
lean_object* v___x_1665_; 
v___x_1665_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1664_);
lean_ctor_set(v___x_1665_, 1, v_run_1659_);
return v___x_1665_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_custom(lean_object* v_Msg_1668_, lean_object* v_event_1669_, lean_object* v_d_1670_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = l_Lasm_UI_Attr_custom___redArg(v_event_1669_, v_d_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl___redArg(lean_object* v_x_1672_){
_start:
{
lean_object* v___x_1673_; 
v___x_1673_ = lean_obj_tag_nat(v_x_1672_);
return v___x_1673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl___redArg___boxed(lean_object* v_x_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Lasm_UI_Html_ctorIdx___impl___redArg(v_x_1674_);
lean_dec_ref(v_x_1674_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl(lean_object* v_Msg_1676_, lean_object* v_x_1677_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = lean_obj_tag_nat(v_x_1677_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___impl___boxed(lean_object* v_Msg_1679_, lean_object* v_x_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_Lasm_UI_Html_ctorIdx___impl(v_Msg_1679_, v_x_1680_);
lean_dec_ref(v_x_1680_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim___redArg(lean_object* v_t_1682_, lean_object* v_k_1683_){
_start:
{
if (lean_obj_tag(v_t_1682_) == 0)
{
lean_object* v_s_1684_; lean_object* v___x_1685_; 
v_s_1684_ = lean_ctor_get(v_t_1682_, 0);
lean_inc_ref(v_s_1684_);
lean_dec_ref_known(v_t_1682_, 1);
v___x_1685_ = lean_apply_1(v_k_1683_, v_s_1684_);
return v___x_1685_;
}
else
{
uint8_t v_ns_1686_; lean_object* v_tag_1687_; lean_object* v_key_1688_; lean_object* v_attrs_1689_; lean_object* v_children_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v_ns_1686_ = lean_ctor_get_uint8(v_t_1682_, sizeof(void*)*4);
v_tag_1687_ = lean_ctor_get(v_t_1682_, 0);
lean_inc_ref(v_tag_1687_);
v_key_1688_ = lean_ctor_get(v_t_1682_, 1);
lean_inc(v_key_1688_);
v_attrs_1689_ = lean_ctor_get(v_t_1682_, 2);
lean_inc(v_attrs_1689_);
v_children_1690_ = lean_ctor_get(v_t_1682_, 3);
lean_inc(v_children_1690_);
lean_dec_ref_known(v_t_1682_, 4);
v___x_1691_ = lean_box(v_ns_1686_);
v___x_1692_ = lean_apply_5(v_k_1683_, v___x_1691_, v_tag_1687_, v_key_1688_, v_attrs_1689_, v_children_1690_);
return v___x_1692_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim(lean_object* v_Msg_1693_, lean_object* v_motive__1_1694_, lean_object* v_ctorIdx_1695_, lean_object* v_t_1696_, lean_object* v_h_1697_, lean_object* v_k_1698_){
_start:
{
lean_object* v___x_1699_; 
v___x_1699_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1696_, v_k_1698_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim___boxed(lean_object* v_Msg_1700_, lean_object* v_motive__1_1701_, lean_object* v_ctorIdx_1702_, lean_object* v_t_1703_, lean_object* v_h_1704_, lean_object* v_k_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l_Lasm_UI_Html_ctorElim(v_Msg_1700_, v_motive__1_1701_, v_ctorIdx_1702_, v_t_1703_, v_h_1704_, v_k_1705_);
lean_dec(v_ctorIdx_1702_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_text_elim___redArg(lean_object* v_t_1707_, lean_object* v_text_1708_){
_start:
{
lean_object* v___x_1709_; 
v___x_1709_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1707_, v_text_1708_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_text_elim(lean_object* v_Msg_1710_, lean_object* v_motive__1_1711_, lean_object* v_t_1712_, lean_object* v_h_1713_, lean_object* v_text_1714_){
_start:
{
lean_object* v___x_1715_; 
v___x_1715_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1712_, v_text_1714_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_elem_elim___redArg(lean_object* v_t_1716_, lean_object* v_elem_1717_){
_start:
{
lean_object* v___x_1718_; 
v___x_1718_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1716_, v_elem_1717_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_elem_elim(lean_object* v_Msg_1719_, lean_object* v_motive__1_1720_, lean_object* v_t_1721_, lean_object* v_h_1722_, lean_object* v_elem_1723_){
_start:
{
lean_object* v___x_1724_; 
v___x_1724_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1721_, v_elem_1723_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml___redArg(){
_start:
{
lean_object* v___x_1728_; 
v___x_1728_ = ((lean_object*)(l_Lasm_UI_instInhabitedHtml___redArg___closed__0));
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml___redArg___boxed(lean_object* v___dummy_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l_Lasm_UI_instInhabitedHtml___redArg();
return v_res_1730_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedHtml___closed__0(void){
_start:
{
lean_object* v___x_1731_; 
v___x_1731_ = l_Lasm_UI_instInhabitedHtml___redArg();
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml(lean_object* v_Msg_1732_){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = lean_obj_once(&l_Lasm_UI_instInhabitedHtml___closed__0, &l_Lasm_UI_instInhabitedHtml___closed__0_once, _init_l_Lasm_UI_instInhabitedHtml___closed__0);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_keyed___redArg(lean_object* v_k_1734_, lean_object* v_x_1735_){
_start:
{
if (lean_obj_tag(v_x_1735_) == 1)
{
uint8_t v_ns_1736_; lean_object* v_tag_1737_; lean_object* v_attrs_1738_; lean_object* v_children_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1747_; 
v_ns_1736_ = lean_ctor_get_uint8(v_x_1735_, sizeof(void*)*4);
v_tag_1737_ = lean_ctor_get(v_x_1735_, 0);
v_attrs_1738_ = lean_ctor_get(v_x_1735_, 2);
v_children_1739_ = lean_ctor_get(v_x_1735_, 3);
v_isSharedCheck_1747_ = !lean_is_exclusive(v_x_1735_);
if (v_isSharedCheck_1747_ == 0)
{
lean_object* v_unused_1748_; 
v_unused_1748_ = lean_ctor_get(v_x_1735_, 1);
lean_dec(v_unused_1748_);
v___x_1741_ = v_x_1735_;
v_isShared_1742_ = v_isSharedCheck_1747_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_children_1739_);
lean_inc(v_attrs_1738_);
lean_inc(v_tag_1737_);
lean_dec(v_x_1735_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1747_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1743_; lean_object* v___x_1745_; 
v___x_1743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1743_, 0, v_k_1734_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 1, v___x_1743_);
v___x_1745_ = v___x_1741_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_tag_1737_);
lean_ctor_set(v_reuseFailAlloc_1746_, 1, v___x_1743_);
lean_ctor_set(v_reuseFailAlloc_1746_, 2, v_attrs_1738_);
lean_ctor_set(v_reuseFailAlloc_1746_, 3, v_children_1739_);
lean_ctor_set_uint8(v_reuseFailAlloc_1746_, sizeof(void*)*4, v_ns_1736_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
else
{
lean_dec_ref(v_k_1734_);
return v_x_1735_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_keyed(lean_object* v_Msg_1749_, lean_object* v_k_1750_, lean_object* v_x_1751_){
_start:
{
lean_object* v___x_1752_; 
v___x_1752_ = l_Lasm_UI_Html_keyed___redArg(v_k_1750_, v_x_1751_);
return v___x_1752_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(lean_object* v_f_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_){
_start:
{
if (lean_obj_tag(v_a_1754_) == 0)
{
lean_object* v___x_1756_; 
lean_dec(v_f_1753_);
v___x_1756_ = l_List_reverse___redArg(v_a_1755_);
return v___x_1756_;
}
else
{
lean_object* v_head_1757_; lean_object* v_tail_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1767_; 
v_head_1757_ = lean_ctor_get(v_a_1754_, 0);
v_tail_1758_ = lean_ctor_get(v_a_1754_, 1);
v_isSharedCheck_1767_ = !lean_is_exclusive(v_a_1754_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1760_ = v_a_1754_;
v_isShared_1761_ = v_isSharedCheck_1767_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_tail_1758_);
lean_inc(v_head_1757_);
lean_dec(v_a_1754_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1767_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1762_; lean_object* v___x_1764_; 
lean_inc(v_f_1753_);
v___x_1762_ = l_Lasm_UI_Attr_map___redArg(v_f_1753_, v_head_1757_);
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 1, v_a_1755_);
lean_ctor_set(v___x_1760_, 0, v___x_1762_);
v___x_1764_ = v___x_1760_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v___x_1762_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v_a_1755_);
v___x_1764_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
v_a_1754_ = v_tail_1758_;
v_a_1755_ = v___x_1764_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_map___redArg(lean_object* v_f_1768_, lean_object* v_x_1769_){
_start:
{
if (lean_obj_tag(v_x_1769_) == 0)
{
lean_object* v_s_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1777_; 
lean_dec(v_f_1768_);
v_s_1770_ = lean_ctor_get(v_x_1769_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v_x_1769_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1772_ = v_x_1769_;
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_s_1770_);
lean_dec(v_x_1769_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1775_; 
if (v_isShared_1773_ == 0)
{
v___x_1775_ = v___x_1772_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_s_1770_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
else
{
uint8_t v_ns_1778_; lean_object* v_tag_1779_; lean_object* v_key_1780_; lean_object* v_attrs_1781_; lean_object* v_children_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1792_; 
v_ns_1778_ = lean_ctor_get_uint8(v_x_1769_, sizeof(void*)*4);
v_tag_1779_ = lean_ctor_get(v_x_1769_, 0);
v_key_1780_ = lean_ctor_get(v_x_1769_, 1);
v_attrs_1781_ = lean_ctor_get(v_x_1769_, 2);
v_children_1782_ = lean_ctor_get(v_x_1769_, 3);
v_isSharedCheck_1792_ = !lean_is_exclusive(v_x_1769_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1784_ = v_x_1769_;
v_isShared_1785_ = v_isSharedCheck_1792_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_children_1782_);
lean_inc(v_attrs_1781_);
lean_inc(v_key_1780_);
lean_inc(v_tag_1779_);
lean_dec(v_x_1769_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1792_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1790_; 
v___x_1786_ = lean_box(0);
lean_inc(v_f_1768_);
v___x_1787_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(v_f_1768_, v_attrs_1781_, v___x_1786_);
v___x_1788_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(v_f_1768_, v_children_1782_, v___x_1786_);
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 3, v___x_1788_);
lean_ctor_set(v___x_1784_, 2, v___x_1787_);
v___x_1790_ = v___x_1784_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_tag_1779_);
lean_ctor_set(v_reuseFailAlloc_1791_, 1, v_key_1780_);
lean_ctor_set(v_reuseFailAlloc_1791_, 2, v___x_1787_);
lean_ctor_set(v_reuseFailAlloc_1791_, 3, v___x_1788_);
lean_ctor_set_uint8(v_reuseFailAlloc_1791_, sizeof(void*)*4, v_ns_1778_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(lean_object* v_f_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_){
_start:
{
if (lean_obj_tag(v_a_1794_) == 0)
{
lean_object* v___x_1796_; 
lean_dec(v_f_1793_);
v___x_1796_ = l_List_reverse___redArg(v_a_1795_);
return v___x_1796_;
}
else
{
lean_object* v_head_1797_; lean_object* v_tail_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1807_; 
v_head_1797_ = lean_ctor_get(v_a_1794_, 0);
v_tail_1798_ = lean_ctor_get(v_a_1794_, 1);
v_isSharedCheck_1807_ = !lean_is_exclusive(v_a_1794_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1800_ = v_a_1794_;
v_isShared_1801_ = v_isSharedCheck_1807_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_tail_1798_);
lean_inc(v_head_1797_);
lean_dec(v_a_1794_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1807_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1802_; lean_object* v___x_1804_; 
lean_inc(v_f_1793_);
v___x_1802_ = l_Lasm_UI_Html_map___redArg(v_f_1793_, v_head_1797_);
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 1, v_a_1795_);
lean_ctor_set(v___x_1800_, 0, v___x_1802_);
v___x_1804_ = v___x_1800_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v___x_1802_);
lean_ctor_set(v_reuseFailAlloc_1806_, 1, v_a_1795_);
v___x_1804_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
v_a_1794_ = v_tail_1798_;
v_a_1795_ = v___x_1804_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_map(lean_object* v_00_u03b1_1808_, lean_object* v_00_u03b2_1809_, lean_object* v_f_1810_, lean_object* v_x_1811_){
_start:
{
lean_object* v___x_1812_; 
v___x_1812_ = l_Lasm_UI_Html_map___redArg(v_f_1810_, v_x_1811_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0(lean_object* v_00_u03b1_1813_, lean_object* v_00_u03b2_1814_, lean_object* v_f_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_){
_start:
{
lean_object* v___x_1818_; 
v___x_1818_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(v_f_1815_, v_a_1816_, v_a_1817_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1(lean_object* v_00_u03b1_1819_, lean_object* v_00_u03b2_1820_, lean_object* v_f_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_){
_start:
{
lean_object* v___x_1824_; 
v___x_1824_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(v_f_1821_, v_a_1822_, v_a_1823_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__3_splitter___redArg(lean_object* v_x_1825_, lean_object* v_h__1_1826_, lean_object* v_h__2_1827_){
_start:
{
if (lean_obj_tag(v_x_1825_) == 0)
{
lean_object* v_s_1828_; lean_object* v___x_1829_; 
lean_dec(v_h__2_1827_);
v_s_1828_ = lean_ctor_get(v_x_1825_, 0);
lean_inc_ref(v_s_1828_);
lean_dec_ref_known(v_x_1825_, 1);
v___x_1829_ = lean_apply_1(v_h__1_1826_, v_s_1828_);
return v___x_1829_;
}
else
{
uint8_t v_ns_1830_; lean_object* v_tag_1831_; lean_object* v_key_1832_; lean_object* v_attrs_1833_; lean_object* v_children_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
lean_dec(v_h__1_1826_);
v_ns_1830_ = lean_ctor_get_uint8(v_x_1825_, sizeof(void*)*4);
v_tag_1831_ = lean_ctor_get(v_x_1825_, 0);
lean_inc_ref(v_tag_1831_);
v_key_1832_ = lean_ctor_get(v_x_1825_, 1);
lean_inc(v_key_1832_);
v_attrs_1833_ = lean_ctor_get(v_x_1825_, 2);
lean_inc(v_attrs_1833_);
v_children_1834_ = lean_ctor_get(v_x_1825_, 3);
lean_inc(v_children_1834_);
lean_dec_ref_known(v_x_1825_, 4);
v___x_1835_ = lean_box(v_ns_1830_);
v___x_1836_ = lean_apply_5(v_h__2_1827_, v___x_1835_, v_tag_1831_, v_key_1832_, v_attrs_1833_, v_children_1834_);
return v___x_1836_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__3_splitter(lean_object* v_00_u03b1_1837_, lean_object* v_motive_1838_, lean_object* v_x_1839_, lean_object* v_h__1_1840_, lean_object* v_h__2_1841_){
_start:
{
if (lean_obj_tag(v_x_1839_) == 0)
{
lean_object* v_s_1842_; lean_object* v___x_1843_; 
lean_dec(v_h__2_1841_);
v_s_1842_ = lean_ctor_get(v_x_1839_, 0);
lean_inc_ref(v_s_1842_);
lean_dec_ref_known(v_x_1839_, 1);
v___x_1843_ = lean_apply_1(v_h__1_1840_, v_s_1842_);
return v___x_1843_;
}
else
{
uint8_t v_ns_1844_; lean_object* v_tag_1845_; lean_object* v_key_1846_; lean_object* v_attrs_1847_; lean_object* v_children_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
lean_dec(v_h__1_1840_);
v_ns_1844_ = lean_ctor_get_uint8(v_x_1839_, sizeof(void*)*4);
v_tag_1845_ = lean_ctor_get(v_x_1839_, 0);
lean_inc_ref(v_tag_1845_);
v_key_1846_ = lean_ctor_get(v_x_1839_, 1);
lean_inc(v_key_1846_);
v_attrs_1847_ = lean_ctor_get(v_x_1839_, 2);
lean_inc(v_attrs_1847_);
v_children_1848_ = lean_ctor_get(v_x_1839_, 3);
lean_inc(v_children_1848_);
lean_dec_ref_known(v_x_1839_, 4);
v___x_1849_ = lean_box(v_ns_1844_);
v___x_1850_ = lean_apply_5(v_h__2_1841_, v___x_1849_, v_tag_1845_, v_key_1846_, v_attrs_1847_, v_children_1848_);
return v___x_1850_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__List_map__unattach_match__1_splitter___redArg(lean_object* v_x_1851_, lean_object* v_h__1_1852_){
_start:
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_apply_2(v_h__1_1852_, v_x_1851_, lean_box(0));
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__List_map__unattach_match__1_splitter(lean_object* v_00_u03b1_1854_, lean_object* v_P_1855_, lean_object* v_motive_1856_, lean_object* v_x_1857_, lean_object* v_h__1_1858_){
_start:
{
lean_object* v___x_1859_; 
v___x_1859_ = lean_apply_2(v_h__1_1858_, v_x_1857_, lean_box(0));
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter___redArg(lean_object* v_x_1860_, lean_object* v_h__1_1861_){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = lean_apply_2(v_h__1_1861_, v_x_1860_, lean_box(0));
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter(lean_object* v_00_u03b1_1863_, lean_object* v_children_1864_, lean_object* v_motive_1865_, lean_object* v_x_1866_, lean_object* v_h__1_1867_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_apply_2(v_h__1_1867_, v_x_1866_, lean_box(0));
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter___boxed(lean_object* v_00_u03b1_1869_, lean_object* v_children_1870_, lean_object* v_motive_1871_, lean_object* v_x_1872_, lean_object* v_h__1_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter(v_00_u03b1_1869_, v_children_1870_, v_motive_1871_, v_x_1872_, v_h__1_1873_);
lean_dec(v_children_1870_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(lean_object* v_init_1875_, lean_object* v_x_1876_){
_start:
{
if (lean_obj_tag(v_x_1876_) == 0)
{
lean_inc(v_init_1875_);
return v_init_1875_;
}
else
{
lean_object* v_head_1877_; lean_object* v_tail_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v_head_1877_ = lean_ctor_get(v_x_1876_, 0);
v_tail_1878_ = lean_ctor_get(v_x_1876_, 1);
v___x_1879_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v_init_1875_, v_tail_1878_);
v___x_1880_ = lean_nat_add(v_head_1877_, v___x_1879_);
lean_dec(v___x_1879_);
return v___x_1880_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1___boxed(lean_object* v_init_1881_, lean_object* v_x_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v_init_1881_, v_x_1882_);
lean_dec(v_x_1882_);
lean_dec(v_init_1881_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l_List_sum___at___00Lasm_UI_Html_size_spec__1(lean_object* v_l_1884_){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = lean_unsigned_to_nat(0u);
v___x_1886_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v___x_1885_, v_l_1884_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_List_sum___at___00Lasm_UI_Html_size_spec__1___boxed(lean_object* v_l_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_List_sum___at___00Lasm_UI_Html_size_spec__1(v_l_1887_);
lean_dec(v_l_1887_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_size___redArg(lean_object* v_x_1889_){
_start:
{
if (lean_obj_tag(v_x_1889_) == 0)
{
lean_object* v___x_1890_; 
lean_dec_ref_known(v_x_1889_, 1);
v___x_1890_ = lean_unsigned_to_nat(1u);
return v___x_1890_;
}
else
{
lean_object* v_children_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v_children_1891_ = lean_ctor_get(v_x_1889_, 3);
lean_inc(v_children_1891_);
lean_dec_ref_known(v_x_1889_, 4);
v___x_1892_ = lean_box(0);
v___x_1893_ = l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(v_children_1891_, v___x_1892_);
v___x_1894_ = l_List_sum___at___00Lasm_UI_Html_size_spec__1(v___x_1893_);
lean_dec(v___x_1893_);
v___x_1895_ = lean_unsigned_to_nat(1u);
v___x_1896_ = lean_nat_add(v___x_1894_, v___x_1895_);
lean_dec(v___x_1894_);
return v___x_1896_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(lean_object* v_a_1897_, lean_object* v_a_1898_){
_start:
{
if (lean_obj_tag(v_a_1897_) == 0)
{
lean_object* v___x_1899_; 
v___x_1899_ = l_List_reverse___redArg(v_a_1898_);
return v___x_1899_;
}
else
{
lean_object* v_head_1900_; lean_object* v_tail_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1910_; 
v_head_1900_ = lean_ctor_get(v_a_1897_, 0);
v_tail_1901_ = lean_ctor_get(v_a_1897_, 1);
v_isSharedCheck_1910_ = !lean_is_exclusive(v_a_1897_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1903_ = v_a_1897_;
v_isShared_1904_ = v_isSharedCheck_1910_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_tail_1901_);
lean_inc(v_head_1900_);
lean_dec(v_a_1897_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1910_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1905_; lean_object* v___x_1907_; 
v___x_1905_ = l_Lasm_UI_Html_size___redArg(v_head_1900_);
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 1, v_a_1898_);
lean_ctor_set(v___x_1903_, 0, v___x_1905_);
v___x_1907_ = v___x_1903_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1905_);
lean_ctor_set(v_reuseFailAlloc_1909_, 1, v_a_1898_);
v___x_1907_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
v_a_1897_ = v_tail_1901_;
v_a_1898_ = v___x_1907_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_size(lean_object* v_Msg_1911_, lean_object* v_x_1912_){
_start:
{
lean_object* v___x_1913_; 
v___x_1913_ = l_Lasm_UI_Html_size___redArg(v_x_1912_);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0(lean_object* v_Msg_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(v_a_1915_, v_a_1916_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__0(lean_object* v_b_1918_, lean_object* v_x_1919_){
_start:
{
lean_inc(v_b_1918_);
return v_b_1918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__0___boxed(lean_object* v_b_1920_, lean_object* v_x_1921_){
_start:
{
lean_object* v_res_1922_; 
v_res_1922_ = l_Lasm_UI_instFunctorHtml___lam__0(v_b_1920_, v_x_1921_);
lean_dec(v_x_1921_);
lean_dec(v_b_1920_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__1(lean_object* v_00_u03b1_1923_, lean_object* v_00_u03b2_1924_, lean_object* v_b_1925_, lean_object* v_h_1926_){
_start:
{
lean_object* v___f_1927_; lean_object* v___x_1928_; 
v___f_1927_ = lean_alloc_closure((void*)(l_Lasm_UI_instFunctorHtml___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1927_, 0, v_b_1925_);
v___x_1928_ = l_Lasm_UI_Html_map___redArg(v___f_1927_, v_h_1926_);
return v___x_1928_;
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
l_Lasm_UI_Decoder_isComposing = _init_l_Lasm_UI_Decoder_isComposing();
lean_mark_persistent(l_Lasm_UI_Decoder_isComposing);
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
