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
double round(double);
uint8_t lean_float_beq(double, double);
double lean_float_of_nat(lean_object*);
uint8_t lean_float_decLt(double, double);
uint64_t lean_float_to_uint64(double);
lean_object* lean_uint64_to_nat(uint64_t);
double lean_float_negate(double);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_float_isnan(double);
uint8_t lean_float_isinf(double);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Function_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Float_repr(double, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorIdx___boxed(lean_object*);
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
static lean_once_cell_t l_Lasm_UI_instHashablePropVal_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_UI_instHashablePropVal_hash___closed__0;
static lean_once_cell_t l_Lasm_UI_instHashablePropVal_hash___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_UI_instHashablePropVal_hash___closed__1;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lasm_UI_Ns_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lasm_UI_Ns_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lasm_UI_Ns_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim___redArg(lean_object* v_html_23_){
_start:
{
lean_inc(v_html_23_);
return v_html_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim___redArg___boxed(lean_object* v_html_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lasm_UI_Ns_html_elim___redArg(v_html_24_);
lean_dec(v_html_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_html_29_){
_start:
{
lean_inc(v_html_29_);
return v_html_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_html_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_html_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lasm_UI_Ns_html_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_html_33_);
lean_dec(v_html_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim___redArg(lean_object* v_svg_36_){
_start:
{
lean_inc(v_svg_36_);
return v_svg_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim___redArg___boxed(lean_object* v_svg_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lasm_UI_Ns_svg_elim___redArg(v_svg_37_);
lean_dec(v_svg_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_svg_42_){
_start:
{
lean_inc(v_svg_42_);
return v_svg_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_svg_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_svg_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lasm_UI_Ns_svg_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_svg_46_);
lean_dec(v_svg_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim___redArg(lean_object* v_mathml_49_){
_start:
{
lean_inc(v_mathml_49_);
return v_mathml_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim___redArg___boxed(lean_object* v_mathml_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lasm_UI_Ns_mathml_elim___redArg(v_mathml_50_);
lean_dec(v_mathml_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_mathml_55_){
_start:
{
lean_inc(v_mathml_55_);
return v_mathml_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_mathml_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_mathml_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lasm_UI_Ns_mathml_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_mathml_59_);
lean_dec(v_mathml_59_);
return v_res_61_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Ns_ofNat(lean_object* v_n_62_){
_start:
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = lean_unsigned_to_nat(0u);
v___x_64_ = lean_nat_dec_le(v_n_62_, v___x_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_65_ = lean_unsigned_to_nat(1u);
v___x_66_ = lean_nat_dec_le(v_n_62_, v___x_65_);
if (v___x_66_ == 0)
{
uint8_t v___x_67_; 
v___x_67_ = 2;
return v___x_67_;
}
else
{
uint8_t v___x_68_; 
v___x_68_ = 1;
return v___x_68_;
}
}
else
{
uint8_t v___x_69_; 
v___x_69_ = 0;
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Ns_ofNat___boxed(lean_object* v_n_70_){
_start:
{
uint8_t v_res_71_; lean_object* v_r_72_; 
v_res_71_ = l_Lasm_UI_Ns_ofNat(v_n_70_);
lean_dec(v_n_70_);
v_r_72_ = lean_box(v_res_71_);
return v_r_72_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqNs(uint8_t v_x_73_, uint8_t v_y_74_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_75_ = l_Lasm_UI_Ns_ctorIdx(v_x_73_);
v___x_76_ = l_Lasm_UI_Ns_ctorIdx(v_y_74_);
v___x_77_ = lean_nat_dec_eq(v___x_75_, v___x_76_);
lean_dec(v___x_76_);
lean_dec(v___x_75_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqNs___boxed(lean_object* v_x_78_, lean_object* v_y_79_){
_start:
{
uint8_t v_x_20__boxed_80_; uint8_t v_y_21__boxed_81_; uint8_t v_res_82_; lean_object* v_r_83_; 
v_x_20__boxed_80_ = lean_unbox(v_x_78_);
v_y_21__boxed_81_ = lean_unbox(v_y_79_);
v_res_82_ = l_Lasm_UI_instDecidableEqNs(v_x_20__boxed_80_, v_y_21__boxed_81_);
v_r_83_ = lean_box(v_res_82_);
return v_r_83_;
}
}
static lean_object* _init_l_Lasm_UI_instReprNs_repr___closed__6(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_unsigned_to_nat(2u);
v___x_94_ = lean_nat_to_int(v___x_93_);
return v___x_94_;
}
}
static lean_object* _init_l_Lasm_UI_instReprNs_repr___closed__7(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = lean_nat_to_int(v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprNs_repr(uint8_t v_x_97_, lean_object* v_prec_98_){
_start:
{
lean_object* v___y_100_; lean_object* v___y_107_; lean_object* v___y_114_; 
switch(v_x_97_)
{
case 0:
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = lean_unsigned_to_nat(1024u);
v___x_121_ = lean_nat_dec_le(v___x_120_, v_prec_98_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; 
v___x_122_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_100_ = v___x_122_;
goto v___jp_99_;
}
else
{
lean_object* v___x_123_; 
v___x_123_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_100_ = v___x_123_;
goto v___jp_99_;
}
}
case 1:
{
lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_124_ = lean_unsigned_to_nat(1024u);
v___x_125_ = lean_nat_dec_le(v___x_124_, v_prec_98_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; 
v___x_126_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_107_ = v___x_126_;
goto v___jp_106_;
}
else
{
lean_object* v___x_127_; 
v___x_127_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_107_ = v___x_127_;
goto v___jp_106_;
}
}
default: 
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_unsigned_to_nat(1024u);
v___x_129_ = lean_nat_dec_le(v___x_128_, v_prec_98_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_114_ = v___x_130_;
goto v___jp_113_;
}
else
{
lean_object* v___x_131_; 
v___x_131_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_114_ = v___x_131_;
goto v___jp_113_;
}
}
}
v___jp_99_:
{
lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_101_ = ((lean_object*)(l_Lasm_UI_instReprNs_repr___closed__1));
lean_inc(v___y_100_);
v___x_102_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_102_, 0, v___y_100_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = 0;
v___x_104_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_104_, 0, v___x_102_);
lean_ctor_set_uint8(v___x_104_, sizeof(void*)*1, v___x_103_);
v___x_105_ = l_Repr_addAppParen(v___x_104_, v_prec_98_);
return v___x_105_;
}
v___jp_106_:
{
lean_object* v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_108_ = ((lean_object*)(l_Lasm_UI_instReprNs_repr___closed__3));
lean_inc(v___y_107_);
v___x_109_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_109_, 0, v___y_107_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
v___x_110_ = 0;
v___x_111_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_111_, 0, v___x_109_);
lean_ctor_set_uint8(v___x_111_, sizeof(void*)*1, v___x_110_);
v___x_112_ = l_Repr_addAppParen(v___x_111_, v_prec_98_);
return v___x_112_;
}
v___jp_113_:
{
lean_object* v___x_115_; lean_object* v___x_116_; uint8_t v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_115_ = ((lean_object*)(l_Lasm_UI_instReprNs_repr___closed__5));
lean_inc(v___y_114_);
v___x_116_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_116_, 0, v___y_114_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v___x_117_ = 0;
v___x_118_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set_uint8(v___x_118_, sizeof(void*)*1, v___x_117_);
v___x_119_ = l_Repr_addAppParen(v___x_118_, v_prec_98_);
return v___x_119_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprNs_repr___boxed(lean_object* v_x_132_, lean_object* v_prec_133_){
_start:
{
uint8_t v_x_171__boxed_134_; lean_object* v_res_135_; 
v_x_171__boxed_134_ = lean_unbox(v_x_132_);
v_res_135_ = l_Lasm_UI_instReprNs_repr(v_x_171__boxed_134_, v_prec_133_);
lean_dec(v_prec_133_);
return v_res_135_;
}
}
static uint8_t _init_l_Lasm_UI_instInhabitedNs_default(void){
_start:
{
uint8_t v___x_138_; 
v___x_138_ = 0;
return v___x_138_;
}
}
static uint8_t _init_l_Lasm_UI_instInhabitedNs(void){
_start:
{
uint8_t v___x_139_; 
v___x_139_ = 0;
return v___x_139_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableNs_hash(uint8_t v_x_140_){
_start:
{
switch(v_x_140_)
{
case 0:
{
uint64_t v___x_141_; 
v___x_141_ = 0ULL;
return v___x_141_;
}
case 1:
{
uint64_t v___x_142_; 
v___x_142_ = 1ULL;
return v___x_142_;
}
default: 
{
uint64_t v___x_143_; 
v___x_143_ = 2ULL;
return v___x_143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableNs_hash___boxed(lean_object* v_x_144_){
_start:
{
uint8_t v_x_40__boxed_145_; uint64_t v_res_146_; lean_object* v_r_147_; 
v_x_40__boxed_145_ = lean_unbox(v_x_144_);
v_res_146_ = l_Lasm_UI_instHashableNs_hash(v_x_40__boxed_145_);
v_r_147_ = lean_box_uint64(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorIdx(lean_object* v_x_150_){
_start:
{
switch(lean_obj_tag(v_x_150_))
{
case 0:
{
lean_object* v___x_151_; 
v___x_151_ = lean_unsigned_to_nat(0u);
return v___x_151_;
}
case 1:
{
lean_object* v___x_152_; 
v___x_152_ = lean_unsigned_to_nat(1u);
return v___x_152_;
}
case 2:
{
lean_object* v___x_153_; 
v___x_153_ = lean_unsigned_to_nat(2u);
return v___x_153_;
}
case 3:
{
lean_object* v___x_154_; 
v___x_154_ = lean_unsigned_to_nat(3u);
return v___x_154_;
}
default: 
{
lean_object* v___x_155_; 
v___x_155_ = lean_unsigned_to_nat(4u);
return v___x_155_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorIdx___boxed(lean_object* v_x_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l_Lasm_UI_EvVal_ctorIdx(v_x_156_);
lean_dec(v_x_156_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorElim___redArg(lean_object* v_t_158_, lean_object* v_k_159_){
_start:
{
switch(lean_obj_tag(v_t_158_))
{
case 2:
{
uint8_t v_b_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v_b_160_ = lean_ctor_get_uint8(v_t_158_, 0);
lean_dec_ref_known(v_t_158_, 0);
v___x_161_ = lean_box(v_b_160_);
v___x_162_ = lean_apply_1(v_k_159_, v___x_161_);
return v___x_162_;
}
case 3:
{
double v_n_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v_n_163_ = lean_ctor_get_float(v_t_158_, 0);
lean_dec_ref_known(v_t_158_, 0);
v___x_164_ = lean_box_float(v_n_163_);
v___x_165_ = lean_apply_1(v_k_159_, v___x_164_);
return v___x_165_;
}
case 4:
{
lean_object* v_s_166_; lean_object* v___x_167_; 
v_s_166_ = lean_ctor_get(v_t_158_, 0);
lean_inc_ref(v_s_166_);
lean_dec_ref_known(v_t_158_, 1);
v___x_167_ = lean_apply_1(v_k_159_, v_s_166_);
return v___x_167_;
}
default: 
{
lean_dec(v_t_158_);
return v_k_159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorElim(lean_object* v_motive_168_, lean_object* v_ctorIdx_169_, lean_object* v_t_170_, lean_object* v_h_171_, lean_object* v_k_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_170_, v_k_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_ctorElim___boxed(lean_object* v_motive_174_, lean_object* v_ctorIdx_175_, lean_object* v_t_176_, lean_object* v_h_177_, lean_object* v_k_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lasm_UI_EvVal_ctorElim(v_motive_174_, v_ctorIdx_175_, v_t_176_, v_h_177_, v_k_178_);
lean_dec(v_ctorIdx_175_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_undefined_elim___redArg(lean_object* v_t_180_, lean_object* v_undefined_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_180_, v_undefined_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_undefined_elim(lean_object* v_motive_183_, lean_object* v_t_184_, lean_object* v_h_185_, lean_object* v_undefined_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_184_, v_undefined_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_null_elim___redArg(lean_object* v_t_188_, lean_object* v_null_189_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_188_, v_null_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_null_elim(lean_object* v_motive_191_, lean_object* v_t_192_, lean_object* v_h_193_, lean_object* v_null_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_192_, v_null_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_bool_elim___redArg(lean_object* v_t_196_, lean_object* v_bool_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_196_, v_bool_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_bool_elim(lean_object* v_motive_199_, lean_object* v_t_200_, lean_object* v_h_201_, lean_object* v_bool_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_200_, v_bool_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_num_elim___redArg(lean_object* v_t_204_, lean_object* v_num_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_204_, v_num_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_num_elim(lean_object* v_motive_207_, lean_object* v_t_208_, lean_object* v_h_209_, lean_object* v_num_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_208_, v_num_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_str_elim___redArg(lean_object* v_t_212_, lean_object* v_str_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_212_, v_str_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_str_elim(lean_object* v_motive_215_, lean_object* v_t_216_, lean_object* v_h_217_, lean_object* v_str_218_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = l_Lasm_UI_EvVal_ctorElim___redArg(v_t_216_, v_str_218_);
return v___x_219_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedEvVal_default(void){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = lean_box(0);
return v___x_220_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedEvVal(void){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_box(0);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprEvVal_repr(lean_object* v_x_246_, lean_object* v_prec_247_){
_start:
{
lean_object* v___y_249_; lean_object* v___y_256_; 
switch(lean_obj_tag(v_x_246_))
{
case 0:
{
lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_262_ = lean_unsigned_to_nat(1024u);
v___x_263_ = lean_nat_dec_le(v___x_262_, v_prec_247_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; 
v___x_264_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_256_ = v___x_264_;
goto v___jp_255_;
}
else
{
lean_object* v___x_265_; 
v___x_265_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_256_ = v___x_265_;
goto v___jp_255_;
}
}
case 1:
{
lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_266_ = lean_unsigned_to_nat(1024u);
v___x_267_ = lean_nat_dec_le(v___x_266_, v_prec_247_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; 
v___x_268_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_249_ = v___x_268_;
goto v___jp_248_;
}
else
{
lean_object* v___x_269_; 
v___x_269_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_249_ = v___x_269_;
goto v___jp_248_;
}
}
case 2:
{
uint8_t v_b_270_; lean_object* v___y_272_; lean_object* v___x_280_; uint8_t v___x_281_; 
v_b_270_ = lean_ctor_get_uint8(v_x_246_, 0);
lean_dec_ref_known(v_x_246_, 0);
v___x_280_ = lean_unsigned_to_nat(1024u);
v___x_281_ = lean_nat_dec_le(v___x_280_, v_prec_247_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; 
v___x_282_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_272_ = v___x_282_;
goto v___jp_271_;
}
else
{
lean_object* v___x_283_; 
v___x_283_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_272_ = v___x_283_;
goto v___jp_271_;
}
v___jp_271_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; uint8_t v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_273_ = ((lean_object*)(l_Lasm_UI_instReprEvVal_repr___closed__6));
v___x_274_ = l_Bool_repr___redArg(v_b_270_);
v___x_275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
lean_inc(v___y_272_);
v___x_276_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_276_, 0, v___y_272_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = 0;
v___x_278_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_278_, 0, v___x_276_);
lean_ctor_set_uint8(v___x_278_, sizeof(void*)*1, v___x_277_);
v___x_279_ = l_Repr_addAppParen(v___x_278_, v_prec_247_);
return v___x_279_;
}
}
case 3:
{
double v_n_284_; lean_object* v___y_286_; lean_object* v___x_295_; uint8_t v___x_296_; 
v_n_284_ = lean_ctor_get_float(v_x_246_, 0);
lean_dec_ref_known(v_x_246_, 0);
v___x_295_ = lean_unsigned_to_nat(1024u);
v___x_296_ = lean_nat_dec_le(v___x_295_, v_prec_247_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; 
v___x_297_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_286_ = v___x_297_;
goto v___jp_285_;
}
else
{
lean_object* v___x_298_; 
v___x_298_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_286_ = v___x_298_;
goto v___jp_285_;
}
v___jp_285_:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_287_ = ((lean_object*)(l_Lasm_UI_instReprEvVal_repr___closed__9));
v___x_288_ = lean_unsigned_to_nat(1024u);
v___x_289_ = l_Float_repr(v_n_284_, v___x_288_);
v___x_290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_287_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
lean_inc(v___y_286_);
v___x_291_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_291_, 0, v___y_286_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = 0;
v___x_293_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_293_, 0, v___x_291_);
lean_ctor_set_uint8(v___x_293_, sizeof(void*)*1, v___x_292_);
v___x_294_ = l_Repr_addAppParen(v___x_293_, v_prec_247_);
return v___x_294_;
}
}
default: 
{
lean_object* v_s_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_319_; 
v_s_299_ = lean_ctor_get(v_x_246_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v_x_246_);
if (v_isSharedCheck_319_ == 0)
{
v___x_301_ = v_x_246_;
v_isShared_302_ = v_isSharedCheck_319_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_s_299_);
lean_dec(v_x_246_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_319_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___y_304_; lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_315_ = lean_unsigned_to_nat(1024u);
v___x_316_ = lean_nat_dec_le(v___x_315_, v_prec_247_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; 
v___x_317_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_304_ = v___x_317_;
goto v___jp_303_;
}
else
{
lean_object* v___x_318_; 
v___x_318_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_304_ = v___x_318_;
goto v___jp_303_;
}
v___jp_303_:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
v___x_305_ = ((lean_object*)(l_Lasm_UI_instReprEvVal_repr___closed__12));
v___x_306_ = l_String_quote(v_s_299_);
if (v_isShared_302_ == 0)
{
lean_ctor_set_tag(v___x_301_, 3);
lean_ctor_set(v___x_301_, 0, v___x_306_);
v___x_308_ = v___x_301_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_306_);
v___x_308_ = v_reuseFailAlloc_314_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_305_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
lean_inc(v___y_304_);
v___x_310_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_310_, 0, v___y_304_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
v___x_311_ = 0;
v___x_312_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_312_, 0, v___x_310_);
lean_ctor_set_uint8(v___x_312_, sizeof(void*)*1, v___x_311_);
v___x_313_ = l_Repr_addAppParen(v___x_312_, v_prec_247_);
return v___x_313_;
}
}
}
}
}
v___jp_248_:
{
lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_250_ = ((lean_object*)(l_Lasm_UI_instReprEvVal_repr___closed__1));
lean_inc(v___y_249_);
v___x_251_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_251_, 0, v___y_249_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___x_252_ = 0;
v___x_253_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_253_, 0, v___x_251_);
lean_ctor_set_uint8(v___x_253_, sizeof(void*)*1, v___x_252_);
v___x_254_ = l_Repr_addAppParen(v___x_253_, v_prec_247_);
return v___x_254_;
}
v___jp_255_:
{
lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_257_ = ((lean_object*)(l_Lasm_UI_instReprEvVal_repr___closed__3));
lean_inc(v___y_256_);
v___x_258_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_258_, 0, v___y_256_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = 0;
v___x_260_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_260_, 0, v___x_258_);
lean_ctor_set_uint8(v___x_260_, sizeof(void*)*1, v___x_259_);
v___x_261_ = l_Repr_addAppParen(v___x_260_, v_prec_247_);
return v___x_261_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprEvVal_repr___boxed(lean_object* v_x_320_, lean_object* v_prec_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lasm_UI_instReprEvVal_repr(v_x_320_, v_prec_321_);
lean_dec(v_prec_321_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toString_x3f(lean_object* v_x_325_){
_start:
{
if (lean_obj_tag(v_x_325_) == 4)
{
lean_object* v_s_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
v_s_326_ = lean_ctor_get(v_x_325_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v_x_325_);
if (v_isSharedCheck_333_ == 0)
{
v___x_328_ = v_x_325_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_s_326_);
lean_dec(v_x_325_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
lean_ctor_set_tag(v___x_328_, 1);
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_s_326_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
else
{
lean_object* v___x_334_; 
lean_dec(v_x_325_);
v___x_334_ = lean_box(0);
return v___x_334_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toBool_x3f(lean_object* v_x_335_){
_start:
{
if (lean_obj_tag(v_x_335_) == 2)
{
uint8_t v_b_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_b_336_ = lean_ctor_get_uint8(v_x_335_, 0);
v___x_337_ = lean_box(v_b_336_);
v___x_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
return v___x_338_;
}
else
{
lean_object* v___x_339_; 
v___x_339_ = lean_box(0);
return v___x_339_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toBool_x3f___boxed(lean_object* v_x_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lasm_UI_EvVal_toBool_x3f(v_x_340_);
lean_dec(v_x_340_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toFloat_x3f(lean_object* v_x_342_){
_start:
{
if (lean_obj_tag(v_x_342_) == 3)
{
double v_n_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_n_343_ = lean_ctor_get_float(v_x_342_, 0);
v___x_344_ = lean_box_float(v_n_343_);
v___x_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
return v___x_345_;
}
else
{
lean_object* v___x_346_; 
v___x_346_ = lean_box(0);
return v___x_346_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toFloat_x3f___boxed(lean_object* v_x_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lasm_UI_EvVal_toFloat_x3f(v_x_347_);
lean_dec(v_x_347_);
return v_res_348_;
}
}
static double _init_l_Lasm_UI_EvVal_toInt_x3f___closed__0(void){
_start:
{
lean_object* v___x_349_; double v___x_350_; 
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = lean_float_of_nat(v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toInt_x3f(lean_object* v_x_351_){
_start:
{
if (lean_obj_tag(v_x_351_) == 3)
{
double v_n_352_; uint8_t v___y_354_; uint8_t v___x_371_; 
v_n_352_ = lean_ctor_get_float(v_x_351_, 0);
v___x_371_ = lean_float_isnan(v_n_352_);
if (v___x_371_ == 0)
{
uint8_t v___x_372_; 
v___x_372_ = lean_float_isinf(v_n_352_);
v___y_354_ = v___x_372_;
goto v___jp_353_;
}
else
{
v___y_354_ = v___x_371_;
goto v___jp_353_;
}
v___jp_353_:
{
if (v___y_354_ == 0)
{
double v___x_355_; uint8_t v___x_356_; 
v___x_355_ = round(v_n_352_);
v___x_356_ = lean_float_beq(v_n_352_, v___x_355_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; 
v___x_357_ = lean_box(0);
return v___x_357_;
}
else
{
double v___x_358_; uint8_t v___x_359_; 
v___x_358_ = lean_float_once(&l_Lasm_UI_EvVal_toInt_x3f___closed__0, &l_Lasm_UI_EvVal_toInt_x3f___closed__0_once, _init_l_Lasm_UI_EvVal_toInt_x3f___closed__0);
v___x_359_ = lean_float_decLt(v_n_352_, v___x_358_);
if (v___x_359_ == 0)
{
uint64_t v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_360_ = lean_float_to_uint64(v_n_352_);
v___x_361_ = lean_uint64_to_nat(v___x_360_);
v___x_362_ = lean_nat_to_int(v___x_361_);
v___x_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
return v___x_363_;
}
else
{
double v___x_364_; uint64_t v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_364_ = lean_float_negate(v_n_352_);
v___x_365_ = lean_float_to_uint64(v___x_364_);
v___x_366_ = lean_uint64_to_nat(v___x_365_);
v___x_367_ = lean_nat_to_int(v___x_366_);
v___x_368_ = lean_int_neg(v___x_367_);
lean_dec(v___x_367_);
v___x_369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
return v___x_369_;
}
}
}
else
{
lean_object* v___x_370_; 
v___x_370_ = lean_box(0);
return v___x_370_;
}
}
}
else
{
lean_object* v___x_373_; 
v___x_373_ = lean_box(0);
return v___x_373_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_EvVal_toInt_x3f___boxed(lean_object* v_x_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lasm_UI_EvVal_toInt_x3f(v_x_374_);
lean_dec(v_x_374_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorIdx(lean_object* v_x_376_){
_start:
{
if (lean_obj_tag(v_x_376_) == 0)
{
lean_object* v___x_377_; 
v___x_377_ = lean_unsigned_to_nat(0u);
return v___x_377_;
}
else
{
lean_object* v___x_378_; 
v___x_378_ = lean_unsigned_to_nat(1u);
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorIdx___boxed(lean_object* v_x_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lasm_UI_PropVal_ctorIdx(v_x_379_);
lean_dec_ref(v_x_379_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorElim___redArg(lean_object* v_t_381_, lean_object* v_k_382_){
_start:
{
if (lean_obj_tag(v_t_381_) == 0)
{
lean_object* v_s_383_; lean_object* v___x_384_; 
v_s_383_ = lean_ctor_get(v_t_381_, 0);
lean_inc_ref(v_s_383_);
lean_dec_ref_known(v_t_381_, 1);
v___x_384_ = lean_apply_1(v_k_382_, v_s_383_);
return v___x_384_;
}
else
{
uint8_t v_b_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v_b_385_ = lean_ctor_get_uint8(v_t_381_, 0);
lean_dec_ref_known(v_t_381_, 0);
v___x_386_ = lean_box(v_b_385_);
v___x_387_ = lean_apply_1(v_k_382_, v___x_386_);
return v___x_387_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorElim(lean_object* v_motive_388_, lean_object* v_ctorIdx_389_, lean_object* v_t_390_, lean_object* v_h_391_, lean_object* v_k_392_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = l_Lasm_UI_PropVal_ctorElim___redArg(v_t_390_, v_k_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_ctorElim___boxed(lean_object* v_motive_394_, lean_object* v_ctorIdx_395_, lean_object* v_t_396_, lean_object* v_h_397_, lean_object* v_k_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lasm_UI_PropVal_ctorElim(v_motive_394_, v_ctorIdx_395_, v_t_396_, v_h_397_, v_k_398_);
lean_dec(v_ctorIdx_395_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_str_elim___redArg(lean_object* v_t_400_, lean_object* v_str_401_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Lasm_UI_PropVal_ctorElim___redArg(v_t_400_, v_str_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_str_elim(lean_object* v_motive_403_, lean_object* v_t_404_, lean_object* v_h_405_, lean_object* v_str_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_Lasm_UI_PropVal_ctorElim___redArg(v_t_404_, v_str_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_bool_elim___redArg(lean_object* v_t_408_, lean_object* v_bool_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Lasm_UI_PropVal_ctorElim___redArg(v_t_408_, v_bool_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_PropVal_bool_elim(lean_object* v_motive_411_, lean_object* v_t_412_, lean_object* v_h_413_, lean_object* v_bool_414_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = l_Lasm_UI_PropVal_ctorElim___redArg(v_t_412_, v_bool_414_);
return v___x_415_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqPropVal_decEq(lean_object* v_x_416_, lean_object* v_x_417_){
_start:
{
if (lean_obj_tag(v_x_416_) == 0)
{
if (lean_obj_tag(v_x_417_) == 0)
{
lean_object* v_s_418_; lean_object* v_s_419_; uint8_t v___x_420_; 
v_s_418_ = lean_ctor_get(v_x_416_, 0);
v_s_419_ = lean_ctor_get(v_x_417_, 0);
v___x_420_ = lean_string_dec_eq(v_s_418_, v_s_419_);
return v___x_420_;
}
else
{
uint8_t v___x_421_; 
v___x_421_ = 0;
return v___x_421_;
}
}
else
{
if (lean_obj_tag(v_x_417_) == 0)
{
uint8_t v___x_422_; 
v___x_422_ = 0;
return v___x_422_;
}
else
{
uint8_t v_b_423_; 
v_b_423_ = lean_ctor_get_uint8(v_x_417_, 0);
if (v_b_423_ == 0)
{
uint8_t v_b_424_; 
v_b_424_ = lean_ctor_get_uint8(v_x_416_, 0);
if (v_b_424_ == 0)
{
uint8_t v___x_425_; 
v___x_425_ = 1;
return v___x_425_;
}
else
{
return v_b_423_;
}
}
else
{
uint8_t v_b_426_; 
v_b_426_ = lean_ctor_get_uint8(v_x_416_, 0);
return v_b_426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqPropVal_decEq___boxed(lean_object* v_x_427_, lean_object* v_x_428_){
_start:
{
uint8_t v_res_429_; lean_object* v_r_430_; 
v_res_429_ = l_Lasm_UI_instDecidableEqPropVal_decEq(v_x_427_, v_x_428_);
lean_dec_ref(v_x_428_);
lean_dec_ref(v_x_427_);
v_r_430_ = lean_box(v_res_429_);
return v_r_430_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqPropVal(lean_object* v_x_431_, lean_object* v_x_432_){
_start:
{
uint8_t v___x_433_; 
v___x_433_ = l_Lasm_UI_instDecidableEqPropVal_decEq(v_x_431_, v_x_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqPropVal___boxed(lean_object* v_x_434_, lean_object* v_x_435_){
_start:
{
uint8_t v_res_436_; lean_object* v_r_437_; 
v_res_436_ = l_Lasm_UI_instDecidableEqPropVal(v_x_434_, v_x_435_);
lean_dec_ref(v_x_435_);
lean_dec_ref(v_x_434_);
v_r_437_ = lean_box(v_res_436_);
return v_r_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprPropVal_repr(lean_object* v_x_450_, lean_object* v_prec_451_){
_start:
{
if (lean_obj_tag(v_x_450_) == 0)
{
lean_object* v_s_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_472_; 
v_s_452_ = lean_ctor_get(v_x_450_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v_x_450_);
if (v_isSharedCheck_472_ == 0)
{
v___x_454_ = v_x_450_;
v_isShared_455_ = v_isSharedCheck_472_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_s_452_);
lean_dec(v_x_450_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_472_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___y_457_; lean_object* v___x_468_; uint8_t v___x_469_; 
v___x_468_ = lean_unsigned_to_nat(1024u);
v___x_469_ = lean_nat_dec_le(v___x_468_, v_prec_451_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; 
v___x_470_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_457_ = v___x_470_;
goto v___jp_456_;
}
else
{
lean_object* v___x_471_; 
v___x_471_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_457_ = v___x_471_;
goto v___jp_456_;
}
v___jp_456_:
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_461_; 
v___x_458_ = ((lean_object*)(l_Lasm_UI_instReprPropVal_repr___closed__2));
v___x_459_ = l_String_quote(v_s_452_);
if (v_isShared_455_ == 0)
{
lean_ctor_set_tag(v___x_454_, 3);
lean_ctor_set(v___x_454_, 0, v___x_459_);
v___x_461_ = v___x_454_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v___x_459_);
v___x_461_ = v_reuseFailAlloc_467_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_462_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_458_);
lean_ctor_set(v___x_462_, 1, v___x_461_);
lean_inc(v___y_457_);
v___x_463_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_463_, 0, v___y_457_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = 0;
v___x_465_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_465_, 0, v___x_463_);
lean_ctor_set_uint8(v___x_465_, sizeof(void*)*1, v___x_464_);
v___x_466_ = l_Repr_addAppParen(v___x_465_, v_prec_451_);
return v___x_466_;
}
}
}
}
else
{
uint8_t v_b_473_; lean_object* v___y_475_; lean_object* v___x_483_; uint8_t v___x_484_; 
v_b_473_ = lean_ctor_get_uint8(v_x_450_, 0);
lean_dec_ref_known(v_x_450_, 0);
v___x_483_ = lean_unsigned_to_nat(1024u);
v___x_484_ = lean_nat_dec_le(v___x_483_, v_prec_451_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; 
v___x_485_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_475_ = v___x_485_;
goto v___jp_474_;
}
else
{
lean_object* v___x_486_; 
v___x_486_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_475_ = v___x_486_;
goto v___jp_474_;
}
v___jp_474_:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_476_ = ((lean_object*)(l_Lasm_UI_instReprPropVal_repr___closed__5));
v___x_477_ = l_Bool_repr___redArg(v_b_473_);
v___x_478_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_476_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
lean_inc(v___y_475_);
v___x_479_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_479_, 0, v___y_475_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = 0;
v___x_481_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set_uint8(v___x_481_, sizeof(void*)*1, v___x_480_);
v___x_482_ = l_Repr_addAppParen(v___x_481_, v_prec_451_);
return v___x_482_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprPropVal_repr___boxed(lean_object* v_x_487_, lean_object* v_prec_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lasm_UI_instReprPropVal_repr(v_x_487_, v_prec_488_);
lean_dec(v_prec_488_);
return v_res_489_;
}
}
static uint64_t _init_l_Lasm_UI_instHashablePropVal_hash___closed__0(void){
_start:
{
uint64_t v___x_497_; uint64_t v___x_498_; uint64_t v___x_499_; 
v___x_497_ = 13ULL;
v___x_498_ = 1ULL;
v___x_499_ = lean_uint64_mix_hash(v___x_498_, v___x_497_);
return v___x_499_;
}
}
static uint64_t _init_l_Lasm_UI_instHashablePropVal_hash___closed__1(void){
_start:
{
uint64_t v___x_500_; uint64_t v___x_501_; uint64_t v___x_502_; 
v___x_500_ = 11ULL;
v___x_501_ = 1ULL;
v___x_502_ = lean_uint64_mix_hash(v___x_501_, v___x_500_);
return v___x_502_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashablePropVal_hash(lean_object* v_x_503_){
_start:
{
if (lean_obj_tag(v_x_503_) == 0)
{
lean_object* v_s_504_; uint64_t v___x_505_; uint64_t v___x_506_; uint64_t v___x_507_; 
v_s_504_ = lean_ctor_get(v_x_503_, 0);
v___x_505_ = 0ULL;
v___x_506_ = lean_string_hash(v_s_504_);
v___x_507_ = lean_uint64_mix_hash(v___x_505_, v___x_506_);
return v___x_507_;
}
else
{
uint8_t v_b_508_; 
v_b_508_ = lean_ctor_get_uint8(v_x_503_, 0);
if (v_b_508_ == 0)
{
uint64_t v___x_509_; 
v___x_509_ = lean_uint64_once(&l_Lasm_UI_instHashablePropVal_hash___closed__0, &l_Lasm_UI_instHashablePropVal_hash___closed__0_once, _init_l_Lasm_UI_instHashablePropVal_hash___closed__0);
return v___x_509_;
}
else
{
uint64_t v___x_510_; 
v___x_510_ = lean_uint64_once(&l_Lasm_UI_instHashablePropVal_hash___closed__1, &l_Lasm_UI_instHashablePropVal_hash___closed__1_once, _init_l_Lasm_UI_instHashablePropVal_hash___closed__1);
return v___x_510_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashablePropVal_hash___boxed(lean_object* v_x_511_){
_start:
{
uint64_t v_res_512_; lean_object* v_r_513_; 
v_res_512_ = l_Lasm_UI_instHashablePropVal_hash(v_x_511_);
lean_dec_ref(v_x_511_);
v_r_513_ = lean_box_uint64(v_res_512_);
return v_r_513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed___redArg___lam__0(lean_object* v_a_516_, lean_object* v_x_517_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_518_, 0, v_a_516_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed___redArg___lam__0___boxed(lean_object* v_a_519_, lean_object* v_x_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lasm_UI_Decoder_succeed___redArg___lam__0(v_a_519_, v_x_520_);
lean_dec(v_x_520_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed___redArg(lean_object* v_a_522_){
_start:
{
lean_object* v___f_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___f_523_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_succeed___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_523_, 0, v_a_522_);
v___x_524_ = lean_box(0);
v___x_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
lean_ctor_set(v___x_525_, 1, v___f_523_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_succeed(lean_object* v_00_u03b1_526_, lean_object* v_a_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lasm_UI_Decoder_succeed___redArg(v_a_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg___lam__0(lean_object* v_x_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = lean_box(0);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg___lam__0___boxed(lean_object* v_x_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lasm_UI_Decoder_fail___redArg___lam__0(v_x_531_);
lean_dec(v_x_531_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg(){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = ((lean_object*)(l_Lasm_UI_Decoder_fail___redArg___closed__1));
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail___redArg___boxed(lean_object* v___dummy_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lasm_UI_Decoder_fail___redArg();
return v_res_540_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_fail___closed__0(void){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = l_Lasm_UI_Decoder_fail___redArg();
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_fail(lean_object* v_00_u03b1_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = lean_obj_once(&l_Lasm_UI_Decoder_fail___closed__0, &l_Lasm_UI_Decoder_fail___closed__0_once, _init_l_Lasm_UI_Decoder_fail___closed__0);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_field___redArg___lam__0(lean_object* v_f_544_, lean_object* v_x_545_){
_start:
{
if (lean_obj_tag(v_x_545_) == 0)
{
lean_object* v___x_546_; 
lean_dec_ref(v_f_544_);
v___x_546_ = lean_box(0);
return v___x_546_;
}
else
{
lean_object* v_head_547_; lean_object* v___x_548_; 
v_head_547_ = lean_ctor_get(v_x_545_, 0);
lean_inc(v_head_547_);
lean_dec_ref_known(v_x_545_, 2);
v___x_548_ = lean_apply_1(v_f_544_, v_head_547_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_field___redArg(lean_object* v_p_549_, lean_object* v_f_550_){
_start:
{
lean_object* v___f_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___f_551_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_field___redArg___lam__0), 2, 1);
lean_closure_set(v___f_551_, 0, v_f_550_);
v___x_552_ = lean_box(0);
v___x_553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_553_, 0, v_p_549_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
v___x_554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
lean_ctor_set(v___x_554_, 1, v___f_551_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_field(lean_object* v_00_u03b1_555_, lean_object* v_p_556_, lean_object* v_f_557_){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = l_Lasm_UI_Decoder_field___redArg(v_p_556_, v_f_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map___redArg___lam__0(lean_object* v_run_559_, lean_object* v_f_560_, lean_object* v_vs_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = lean_apply_1(v_run_559_, v_vs_561_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v___x_563_; 
lean_dec(v_f_560_);
v___x_563_ = lean_box(0);
return v___x_563_;
}
else
{
lean_object* v_val_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_572_; 
v_val_564_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_572_ == 0)
{
v___x_566_ = v___x_562_;
v_isShared_567_ = v_isSharedCheck_572_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_val_564_);
lean_dec(v___x_562_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_572_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_568_ = lean_apply_1(v_f_560_, v_val_564_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 0, v___x_568_);
v___x_570_ = v___x_566_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_568_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map___redArg(lean_object* v_f_573_, lean_object* v_d_574_){
_start:
{
lean_object* v_paths_575_; lean_object* v_run_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_584_; 
v_paths_575_ = lean_ctor_get(v_d_574_, 0);
v_run_576_ = lean_ctor_get(v_d_574_, 1);
v_isSharedCheck_584_ = !lean_is_exclusive(v_d_574_);
if (v_isSharedCheck_584_ == 0)
{
v___x_578_ = v_d_574_;
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_run_576_);
lean_inc(v_paths_575_);
lean_dec(v_d_574_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___f_580_; lean_object* v___x_582_; 
v___f_580_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_map___redArg___lam__0), 3, 2);
lean_closure_set(v___f_580_, 0, v_run_576_);
lean_closure_set(v___f_580_, 1, v_f_573_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 1, v___f_580_);
v___x_582_ = v___x_578_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_paths_575_);
lean_ctor_set(v_reuseFailAlloc_583_, 1, v___f_580_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map(lean_object* v_00_u03b1_585_, lean_object* v_00_u03b2_586_, lean_object* v_f_587_, lean_object* v_d_588_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_Lasm_UI_Decoder_map___redArg(v_f_587_, v_d_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2___redArg___lam__0(lean_object* v_paths_592_, lean_object* v_run_593_, lean_object* v_run_594_, lean_object* v_f_595_, lean_object* v_vs_596_){
_start:
{
lean_object* v_n_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v_n_597_ = l_List_lengthTR___redArg(v_paths_592_);
v___x_598_ = ((lean_object*)(l_Lasm_UI_Decoder_map2___redArg___lam__0___closed__0));
lean_inc(v_n_597_);
lean_inc(v_vs_596_);
v___x_599_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_vs_596_, v_vs_596_, v_n_597_, v___x_598_);
v___x_600_ = lean_apply_1(v_run_593_, v___x_599_);
if (lean_obj_tag(v___x_600_) == 1)
{
lean_object* v_val_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v_val_601_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_val_601_);
lean_dec_ref_known(v___x_600_, 1);
v___x_602_ = l_List_drop___redArg(v_n_597_, v_vs_596_);
lean_dec(v_vs_596_);
v___x_603_ = lean_apply_1(v_run_594_, v___x_602_);
if (lean_obj_tag(v___x_603_) == 1)
{
lean_object* v_val_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_612_; 
v_val_604_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_612_ == 0)
{
v___x_606_ = v___x_603_;
v_isShared_607_ = v_isSharedCheck_612_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_val_604_);
lean_dec(v___x_603_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_612_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_608_; lean_object* v___x_610_; 
v___x_608_ = lean_apply_2(v_f_595_, v_val_601_, v_val_604_);
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v___x_608_);
v___x_610_ = v___x_606_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
else
{
lean_object* v___x_613_; 
lean_dec(v___x_603_);
lean_dec(v_val_601_);
lean_dec(v_f_595_);
v___x_613_ = lean_box(0);
return v___x_613_;
}
}
else
{
lean_object* v___x_614_; 
lean_dec(v___x_600_);
lean_dec(v_n_597_);
lean_dec(v_vs_596_);
lean_dec(v_f_595_);
lean_dec_ref(v_run_594_);
v___x_614_ = lean_box(0);
return v___x_614_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2___redArg___lam__0___boxed(lean_object* v_paths_615_, lean_object* v_run_616_, lean_object* v_run_617_, lean_object* v_f_618_, lean_object* v_vs_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_Lasm_UI_Decoder_map2___redArg___lam__0(v_paths_615_, v_run_616_, v_run_617_, v_f_618_, v_vs_619_);
lean_dec(v_paths_615_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2___redArg(lean_object* v_f_621_, lean_object* v_d_u2081_622_, lean_object* v_d_u2082_623_){
_start:
{
lean_object* v_paths_624_; lean_object* v_run_625_; lean_object* v_paths_626_; lean_object* v_run_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_636_; 
v_paths_624_ = lean_ctor_get(v_d_u2081_622_, 0);
lean_inc(v_paths_624_);
v_run_625_ = lean_ctor_get(v_d_u2081_622_, 1);
lean_inc_ref(v_run_625_);
lean_dec_ref(v_d_u2081_622_);
v_paths_626_ = lean_ctor_get(v_d_u2082_623_, 0);
v_run_627_ = lean_ctor_get(v_d_u2082_623_, 1);
v_isSharedCheck_636_ = !lean_is_exclusive(v_d_u2082_623_);
if (v_isSharedCheck_636_ == 0)
{
v___x_629_ = v_d_u2082_623_;
v_isShared_630_ = v_isSharedCheck_636_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_run_627_);
lean_inc(v_paths_626_);
lean_dec(v_d_u2082_623_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_636_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___f_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
lean_inc(v_paths_624_);
v___f_631_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_map2___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_631_, 0, v_paths_624_);
lean_closure_set(v___f_631_, 1, v_run_625_);
lean_closure_set(v___f_631_, 2, v_run_627_);
lean_closure_set(v___f_631_, 3, v_f_621_);
v___x_632_ = l_List_appendTR___redArg(v_paths_624_, v_paths_626_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 1, v___f_631_);
lean_ctor_set(v___x_629_, 0, v___x_632_);
v___x_634_ = v___x_629_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_635_, 1, v___f_631_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_map2(lean_object* v_00_u03b1_637_, lean_object* v_00_u03b2_638_, lean_object* v_00_u03b3_639_, lean_object* v_f_640_, lean_object* v_d_u2081_641_, lean_object* v_d_u2082_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_Lasm_UI_Decoder_map2___redArg(v_f_640_, v_d_u2081_641_, v_d_u2082_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filterMap___redArg___lam__0(lean_object* v_run_644_, lean_object* v_f_645_, lean_object* v_vs_646_){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = lean_apply_1(v_run_644_, v_vs_646_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v___x_648_; 
lean_dec_ref(v_f_645_);
v___x_648_ = lean_box(0);
return v___x_648_;
}
else
{
lean_object* v_val_649_; lean_object* v___x_650_; 
v_val_649_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_val_649_);
lean_dec_ref_known(v___x_647_, 1);
v___x_650_ = lean_apply_1(v_f_645_, v_val_649_);
return v___x_650_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filterMap___redArg(lean_object* v_f_651_, lean_object* v_d_652_){
_start:
{
lean_object* v_paths_653_; lean_object* v_run_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_662_; 
v_paths_653_ = lean_ctor_get(v_d_652_, 0);
v_run_654_ = lean_ctor_get(v_d_652_, 1);
v_isSharedCheck_662_ = !lean_is_exclusive(v_d_652_);
if (v_isSharedCheck_662_ == 0)
{
v___x_656_ = v_d_652_;
v_isShared_657_ = v_isSharedCheck_662_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_run_654_);
lean_inc(v_paths_653_);
lean_dec(v_d_652_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_662_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___f_658_; lean_object* v___x_660_; 
v___f_658_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_filterMap___redArg___lam__0), 3, 2);
lean_closure_set(v___f_658_, 0, v_run_654_);
lean_closure_set(v___f_658_, 1, v_f_651_);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 1, v___f_658_);
v___x_660_ = v___x_656_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_paths_653_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v___f_658_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filterMap(lean_object* v_00_u03b1_663_, lean_object* v_00_u03b2_664_, lean_object* v_f_665_, lean_object* v_d_666_){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = l_Lasm_UI_Decoder_filterMap___redArg(v_f_665_, v_d_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filter___redArg___lam__0(lean_object* v_p_668_, lean_object* v_a_669_){
_start:
{
lean_object* v___x_670_; uint8_t v___x_671_; 
lean_inc(v_a_669_);
v___x_670_ = lean_apply_1(v_p_668_, v_a_669_);
v___x_671_ = lean_unbox(v___x_670_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; 
lean_dec(v_a_669_);
v___x_672_ = lean_box(0);
return v___x_672_;
}
else
{
lean_object* v___x_673_; 
v___x_673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_673_, 0, v_a_669_);
return v___x_673_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filter___redArg(lean_object* v_p_674_, lean_object* v_d_675_){
_start:
{
lean_object* v___f_676_; lean_object* v___x_677_; 
v___f_676_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_filter___redArg___lam__0), 2, 1);
lean_closure_set(v___f_676_, 0, v_p_674_);
v___x_677_ = l_Lasm_UI_Decoder_filterMap___redArg(v___f_676_, v_d_675_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_filter(lean_object* v_00_u03b1_678_, lean_object* v_p_679_, lean_object* v_d_680_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = l_Lasm_UI_Decoder_filter___redArg(v_p_679_, v_d_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instFunctor___lam__0(lean_object* v_a_682_, lean_object* v_x_683_){
_start:
{
lean_inc(v_a_682_);
return v_a_682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instFunctor___lam__0___boxed(lean_object* v_a_684_, lean_object* v_x_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lasm_UI_Decoder_instFunctor___lam__0(v_a_684_, v_x_685_);
lean_dec(v_x_685_);
lean_dec(v_a_684_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instFunctor___lam__1(lean_object* v_00_u03b1_687_, lean_object* v_00_u03b2_688_, lean_object* v_a_689_, lean_object* v_d_690_){
_start:
{
lean_object* v___f_691_; lean_object* v___x_692_; 
v___f_691_ = lean_alloc_closure((void*)(l_Lasm_UI_Decoder_instFunctor___lam__0___boxed), 2, 1);
lean_closure_set(v___f_691_, 0, v_a_689_);
v___x_692_ = l_Lasm_UI_Decoder_map___redArg(v___f_691_, v_d_690_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instSeq___lam__0(lean_object* v_x1_701_, lean_object* v_x2_702_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = lean_apply_1(v_x1_701_, v_x2_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instSeq___lam__1(lean_object* v___f_704_, lean_object* v_00_u03b1_705_, lean_object* v_00_u03b2_706_, lean_object* v_f_707_, lean_object* v_x_708_){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_709_ = lean_box(0);
v___x_710_ = lean_apply_1(v_x_708_, v___x_709_);
v___x_711_ = l_Lasm_UI_Decoder_map2___redArg(v___f_704_, v_f_707_, v___x_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instApplicative___lam__1(lean_object* v___f_717_, lean_object* v_00_u03b1_718_, lean_object* v_00_u03b2_719_, lean_object* v_a_720_, lean_object* v_b_721_){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_722_ = ((lean_object*)(l_Lasm_UI_Decoder_instApplicative___lam__1___closed__0));
v___x_723_ = l_Lasm_UI_Decoder_map___redArg(v___x_722_, v_a_720_);
v___x_724_ = lean_box(0);
v___x_725_ = lean_apply_1(v_b_721_, v___x_724_);
v___x_726_ = l_Lasm_UI_Decoder_map2___redArg(v___f_717_, v___x_723_, v___x_725_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_instApplicative___lam__2(lean_object* v___f_730_, lean_object* v_00_u03b1_731_, lean_object* v_00_u03b2_732_, lean_object* v_a_733_, lean_object* v_b_734_){
_start:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_735_ = ((lean_object*)(l_Lasm_UI_Decoder_instApplicative___lam__2___closed__1));
v___x_736_ = l_Lasm_UI_Decoder_map___redArg(v___x_735_, v_a_733_);
v___x_737_ = lean_box(0);
v___x_738_ = lean_apply_1(v_b_734_, v___x_737_);
v___x_739_ = l_Lasm_UI_Decoder_map2___redArg(v___f_730_, v___x_736_, v___x_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_string(lean_object* v_p_752_){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = ((lean_object*)(l_Lasm_UI_Decoder_string___closed__0));
v___x_754_ = l_Lasm_UI_Decoder_field___redArg(v_p_752_, v___x_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_bool(lean_object* v_p_756_){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = ((lean_object*)(l_Lasm_UI_Decoder_bool___closed__0));
v___x_758_ = l_Lasm_UI_Decoder_field___redArg(v_p_756_, v___x_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_float(lean_object* v_p_760_){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = ((lean_object*)(l_Lasm_UI_Decoder_float___closed__0));
v___x_762_ = l_Lasm_UI_Decoder_field___redArg(v_p_760_, v___x_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_int(lean_object* v_p_764_){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = ((lean_object*)(l_Lasm_UI_Decoder_int___closed__0));
v___x_766_ = l_Lasm_UI_Decoder_field___redArg(v_p_764_, v___x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_value___lam__0(lean_object* v_val_767_){
_start:
{
lean_object* v___x_768_; 
v___x_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_768_, 0, v_val_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_value(lean_object* v_p_770_){
_start:
{
lean_object* v___f_771_; lean_object* v___x_772_; 
v___f_771_ = ((lean_object*)(l_Lasm_UI_Decoder_value___closed__0));
v___x_772_ = l_Lasm_UI_Decoder_field___redArg(v_p_770_, v___f_771_);
return v___x_772_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_targetValue___closed__4(void){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_781_ = ((lean_object*)(l_Lasm_UI_Decoder_targetValue___closed__3));
v___x_782_ = l_Lasm_UI_Decoder_string(v___x_781_);
return v___x_782_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_targetValue(void){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = lean_obj_once(&l_Lasm_UI_Decoder_targetValue___closed__4, &l_Lasm_UI_Decoder_targetValue___closed__4_once, _init_l_Lasm_UI_Decoder_targetValue___closed__4);
return v___x_783_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_targetChecked___closed__3(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = ((lean_object*)(l_Lasm_UI_Decoder_targetChecked___closed__2));
v___x_792_ = l_Lasm_UI_Decoder_bool(v___x_791_);
return v___x_792_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_targetChecked(void){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = lean_obj_once(&l_Lasm_UI_Decoder_targetChecked___closed__3, &l_Lasm_UI_Decoder_targetChecked___closed__3_once, _init_l_Lasm_UI_Decoder_targetChecked___closed__3);
return v___x_793_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_key___closed__2(void){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_798_ = ((lean_object*)(l_Lasm_UI_Decoder_key___closed__1));
v___x_799_ = l_Lasm_UI_Decoder_string(v___x_798_);
return v___x_799_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_key(void){
_start:
{
lean_object* v___x_800_; 
v___x_800_ = lean_obj_once(&l_Lasm_UI_Decoder_key___closed__2, &l_Lasm_UI_Decoder_key___closed__2_once, _init_l_Lasm_UI_Decoder_key___closed__2);
return v___x_800_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_ctrlKey___closed__2(void){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = ((lean_object*)(l_Lasm_UI_Decoder_ctrlKey___closed__1));
v___x_806_ = l_Lasm_UI_Decoder_bool(v___x_805_);
return v___x_806_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_ctrlKey(void){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = lean_obj_once(&l_Lasm_UI_Decoder_ctrlKey___closed__2, &l_Lasm_UI_Decoder_ctrlKey___closed__2_once, _init_l_Lasm_UI_Decoder_ctrlKey___closed__2);
return v___x_807_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_shiftKey___closed__2(void){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = ((lean_object*)(l_Lasm_UI_Decoder_shiftKey___closed__1));
v___x_813_ = l_Lasm_UI_Decoder_bool(v___x_812_);
return v___x_813_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_shiftKey(void){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = lean_obj_once(&l_Lasm_UI_Decoder_shiftKey___closed__2, &l_Lasm_UI_Decoder_shiftKey___closed__2_once, _init_l_Lasm_UI_Decoder_shiftKey___closed__2);
return v___x_814_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_altKey___closed__2(void){
_start:
{
lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_819_ = ((lean_object*)(l_Lasm_UI_Decoder_altKey___closed__1));
v___x_820_ = l_Lasm_UI_Decoder_bool(v___x_819_);
return v___x_820_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_altKey(void){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = lean_obj_once(&l_Lasm_UI_Decoder_altKey___closed__2, &l_Lasm_UI_Decoder_altKey___closed__2_once, _init_l_Lasm_UI_Decoder_altKey___closed__2);
return v___x_821_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_metaKey___closed__2(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = ((lean_object*)(l_Lasm_UI_Decoder_metaKey___closed__1));
v___x_827_ = l_Lasm_UI_Decoder_bool(v___x_826_);
return v___x_827_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_metaKey(void){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = lean_obj_once(&l_Lasm_UI_Decoder_metaKey___closed__2, &l_Lasm_UI_Decoder_metaKey___closed__2_once, _init_l_Lasm_UI_Decoder_metaKey___closed__2);
return v___x_828_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_isComposing___closed__2(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = ((lean_object*)(l_Lasm_UI_Decoder_isComposing___closed__1));
v___x_834_ = l_Lasm_UI_Decoder_bool(v___x_833_);
return v___x_834_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_isComposing(void){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = lean_obj_once(&l_Lasm_UI_Decoder_isComposing___closed__2, &l_Lasm_UI_Decoder_isComposing___closed__2_once, _init_l_Lasm_UI_Decoder_isComposing___closed__2);
return v___x_835_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientX___closed__2(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = ((lean_object*)(l_Lasm_UI_Decoder_clientX___closed__1));
v___x_841_ = l_Lasm_UI_Decoder_float(v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientX(void){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = lean_obj_once(&l_Lasm_UI_Decoder_clientX___closed__2, &l_Lasm_UI_Decoder_clientX___closed__2_once, _init_l_Lasm_UI_Decoder_clientX___closed__2);
return v___x_842_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientY___closed__2(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = ((lean_object*)(l_Lasm_UI_Decoder_clientY___closed__1));
v___x_848_ = l_Lasm_UI_Decoder_float(v___x_847_);
return v___x_848_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientY(void){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = lean_obj_once(&l_Lasm_UI_Decoder_clientY___closed__2, &l_Lasm_UI_Decoder_clientY___closed__2_once, _init_l_Lasm_UI_Decoder_clientY___closed__2);
return v___x_849_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetX___closed__2(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = ((lean_object*)(l_Lasm_UI_Decoder_offsetX___closed__1));
v___x_855_ = l_Lasm_UI_Decoder_float(v___x_854_);
return v___x_855_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetX(void){
_start:
{
lean_object* v___x_856_; 
v___x_856_ = lean_obj_once(&l_Lasm_UI_Decoder_offsetX___closed__2, &l_Lasm_UI_Decoder_offsetX___closed__2_once, _init_l_Lasm_UI_Decoder_offsetX___closed__2);
return v___x_856_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetY___closed__2(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_861_ = ((lean_object*)(l_Lasm_UI_Decoder_offsetY___closed__1));
v___x_862_ = l_Lasm_UI_Decoder_float(v___x_861_);
return v___x_862_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetY(void){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = lean_obj_once(&l_Lasm_UI_Decoder_offsetY___closed__2, &l_Lasm_UI_Decoder_offsetY___closed__2_once, _init_l_Lasm_UI_Decoder_offsetY___closed__2);
return v___x_863_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_button___closed__2(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = ((lean_object*)(l_Lasm_UI_Decoder_button___closed__1));
v___x_869_ = l_Lasm_UI_Decoder_int(v___x_868_);
return v___x_869_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_button(void){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = lean_obj_once(&l_Lasm_UI_Decoder_button___closed__2, &l_Lasm_UI_Decoder_button___closed__2_once, _init_l_Lasm_UI_Decoder_button___closed__2);
return v___x_870_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_deltaY___closed__2(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(l_Lasm_UI_Decoder_deltaY___closed__1));
v___x_876_ = l_Lasm_UI_Decoder_float(v___x_875_);
return v___x_876_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_deltaY(void){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = lean_obj_once(&l_Lasm_UI_Decoder_deltaY___closed__2, &l_Lasm_UI_Decoder_deltaY___closed__2_once, _init_l_Lasm_UI_Decoder_deltaY___closed__2);
return v___x_877_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_timeStamp___closed__2(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = ((lean_object*)(l_Lasm_UI_Decoder_timeStamp___closed__1));
v___x_883_ = l_Lasm_UI_Decoder_float(v___x_882_);
return v___x_883_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_timeStamp(void){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = lean_obj_once(&l_Lasm_UI_Decoder_timeStamp___closed__2, &l_Lasm_UI_Decoder_timeStamp___closed__2_once, _init_l_Lasm_UI_Decoder_timeStamp___closed__2);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_dataset(lean_object* v_name_886_){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_887_ = ((lean_object*)(l_Lasm_UI_Decoder_targetValue___closed__0));
v___x_888_ = ((lean_object*)(l_Lasm_UI_Decoder_dataset___closed__0));
v___x_889_ = lean_box(0);
v___x_890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_890_, 0, v_name_886_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
v___x_891_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_888_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
v___x_892_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_892_, 0, v___x_887_);
lean_ctor_set(v___x_892_, 1, v___x_891_);
v___x_893_ = l_Lasm_UI_Decoder_string(v___x_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Handled_map___redArg(lean_object* v_f_894_, lean_object* v_h_895_){
_start:
{
lean_object* v_message_896_; uint8_t v_preventDefault_897_; uint8_t v_stopPropagation_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_906_; 
v_message_896_ = lean_ctor_get(v_h_895_, 0);
v_preventDefault_897_ = lean_ctor_get_uint8(v_h_895_, sizeof(void*)*1);
v_stopPropagation_898_ = lean_ctor_get_uint8(v_h_895_, sizeof(void*)*1 + 1);
v_isSharedCheck_906_ = !lean_is_exclusive(v_h_895_);
if (v_isSharedCheck_906_ == 0)
{
v___x_900_ = v_h_895_;
v_isShared_901_ = v_isSharedCheck_906_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_message_896_);
lean_dec(v_h_895_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_906_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_902_; lean_object* v___x_904_; 
v___x_902_ = lean_apply_1(v_f_894_, v_message_896_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 0, v___x_902_);
v___x_904_ = v___x_900_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v___x_902_);
lean_ctor_set_uint8(v_reuseFailAlloc_905_, sizeof(void*)*1, v_preventDefault_897_);
lean_ctor_set_uint8(v_reuseFailAlloc_905_, sizeof(void*)*1 + 1, v_stopPropagation_898_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Handled_map(lean_object* v_00_u03b1_907_, lean_object* v_00_u03b2_908_, lean_object* v_f_909_, lean_object* v_h_910_){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = l_Lasm_UI_Handled_map___redArg(v_f_909_, v_h_910_);
return v___x_911_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener_decEq___lam__0(lean_object* v_a_912_, lean_object* v_b_913_){
_start:
{
lean_object* v___x_914_; uint8_t v___x_915_; 
v___x_914_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___x_915_ = l_instDecidableEqList___redArg(v___x_914_, v_a_912_, v_b_913_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener_decEq___lam__0___boxed(lean_object* v_a_916_, lean_object* v_b_917_){
_start:
{
uint8_t v_res_918_; lean_object* v_r_919_; 
v_res_918_ = l_Lasm_UI_instDecidableEqListener_decEq___lam__0(v_a_916_, v_b_917_);
v_r_919_ = lean_box(v_res_918_);
return v_r_919_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener_decEq(lean_object* v_x_921_, lean_object* v_x_922_){
_start:
{
lean_object* v_event_923_; lean_object* v_paths_924_; lean_object* v_event_925_; lean_object* v_paths_926_; uint8_t v___x_927_; 
v_event_923_ = lean_ctor_get(v_x_921_, 0);
lean_inc_ref(v_event_923_);
v_paths_924_ = lean_ctor_get(v_x_921_, 1);
lean_inc(v_paths_924_);
lean_dec_ref(v_x_921_);
v_event_925_ = lean_ctor_get(v_x_922_, 0);
lean_inc_ref(v_event_925_);
v_paths_926_ = lean_ctor_get(v_x_922_, 1);
lean_inc(v_paths_926_);
lean_dec_ref(v_x_922_);
v___x_927_ = lean_string_dec_eq(v_event_923_, v_event_925_);
lean_dec_ref(v_event_925_);
lean_dec_ref(v_event_923_);
if (v___x_927_ == 0)
{
lean_dec(v_paths_926_);
lean_dec(v_paths_924_);
return v___x_927_;
}
else
{
lean_object* v___f_928_; uint8_t v___x_929_; 
v___f_928_ = ((lean_object*)(l_Lasm_UI_instDecidableEqListener_decEq___closed__0));
v___x_929_ = l_instDecidableEqList___redArg(v___f_928_, v_paths_924_, v_paths_926_);
return v___x_929_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener_decEq___boxed(lean_object* v_x_930_, lean_object* v_x_931_){
_start:
{
uint8_t v_res_932_; lean_object* v_r_933_; 
v_res_932_ = l_Lasm_UI_instDecidableEqListener_decEq(v_x_930_, v_x_931_);
v_r_933_ = lean_box(v_res_932_);
return v_r_933_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener(lean_object* v_x_934_, lean_object* v_x_935_){
_start:
{
uint8_t v___x_936_; 
v___x_936_ = l_Lasm_UI_instDecidableEqListener_decEq(v_x_934_, v_x_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener___boxed(lean_object* v_x_937_, lean_object* v_x_938_){
_start:
{
uint8_t v_res_939_; lean_object* v_r_940_; 
v_res_939_ = l_Lasm_UI_instDecidableEqListener(v_x_937_, v_x_938_);
v_r_940_ = lean_box(v_res_939_);
return v_r_940_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_941_, lean_object* v_x_942_, lean_object* v_x_943_){
_start:
{
if (lean_obj_tag(v_x_943_) == 0)
{
lean_dec(v_x_941_);
return v_x_942_;
}
else
{
lean_object* v_head_944_; lean_object* v_tail_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_955_; 
v_head_944_ = lean_ctor_get(v_x_943_, 0);
v_tail_945_ = lean_ctor_get(v_x_943_, 1);
v_isSharedCheck_955_ = !lean_is_exclusive(v_x_943_);
if (v_isSharedCheck_955_ == 0)
{
v___x_947_ = v_x_943_;
v_isShared_948_ = v_isSharedCheck_955_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_tail_945_);
lean_inc(v_head_944_);
lean_dec(v_x_943_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_955_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
lean_inc(v_x_941_);
if (v_isShared_948_ == 0)
{
lean_ctor_set_tag(v___x_947_, 5);
lean_ctor_set(v___x_947_, 1, v_x_941_);
lean_ctor_set(v___x_947_, 0, v_x_942_);
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_x_942_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_x_941_);
v___x_950_ = v_reuseFailAlloc_954_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_944_);
v___x_952_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v_x_942_ = v___x_952_;
v_x_943_ = v_tail_945_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1(lean_object* v_x_956_, lean_object* v_x_957_, lean_object* v_x_958_){
_start:
{
if (lean_obj_tag(v_x_958_) == 0)
{
lean_dec(v_x_956_);
return v_x_957_;
}
else
{
lean_object* v_head_959_; lean_object* v_tail_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_970_; 
v_head_959_ = lean_ctor_get(v_x_958_, 0);
v_tail_960_ = lean_ctor_get(v_x_958_, 1);
v_isSharedCheck_970_ = !lean_is_exclusive(v_x_958_);
if (v_isSharedCheck_970_ == 0)
{
v___x_962_ = v_x_958_;
v_isShared_963_ = v_isSharedCheck_970_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_tail_960_);
lean_inc(v_head_959_);
lean_dec(v_x_958_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_970_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
lean_inc(v_x_956_);
if (v_isShared_963_ == 0)
{
lean_ctor_set_tag(v___x_962_, 5);
lean_ctor_set(v___x_962_, 1, v_x_956_);
lean_ctor_set(v___x_962_, 0, v_x_957_);
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_x_957_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v_x_956_);
v___x_965_ = v_reuseFailAlloc_969_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_966_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_959_);
v___x_967_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_965_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
v___x_968_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1_spec__2(v_x_956_, v___x_967_, v_tail_960_);
return v___x_968_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0(lean_object* v_x_971_, lean_object* v_x_972_){
_start:
{
if (lean_obj_tag(v_x_971_) == 0)
{
lean_object* v___x_973_; 
lean_dec(v_x_972_);
v___x_973_ = lean_box(0);
return v___x_973_;
}
else
{
lean_object* v_tail_974_; 
v_tail_974_ = lean_ctor_get(v_x_971_, 1);
if (lean_obj_tag(v_tail_974_) == 0)
{
lean_object* v_head_975_; lean_object* v___x_976_; 
lean_dec(v_x_972_);
v_head_975_ = lean_ctor_get(v_x_971_, 0);
lean_inc(v_head_975_);
lean_dec_ref_known(v_x_971_, 2);
v___x_976_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_975_);
return v___x_976_;
}
else
{
lean_object* v_head_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
lean_inc(v_tail_974_);
v_head_977_ = lean_ctor_get(v_x_971_, 0);
lean_inc(v_head_977_);
lean_dec_ref_known(v_x_971_, 2);
v___x_978_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_977_);
v___x_979_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1(v_x_972_, v___x_978_, v_tail_974_);
return v___x_979_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__2));
v___x_992_ = lean_string_length(v___x_991_);
return v___x_992_;
}
}
static lean_object* _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = lean_obj_once(&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7, &l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7_once, _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7);
v___x_994_ = lean_nat_to_int(v___x_993_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(lean_object* v_a_999_){
_start:
{
if (lean_obj_tag(v_a_999_) == 0)
{
lean_object* v___x_1000_; 
v___x_1000_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__1));
return v___x_1000_;
}
else
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; uint8_t v___x_1009_; lean_object* v___x_1010_; 
v___x_1001_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__5));
v___x_1002_ = l_Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0(v_a_999_, v___x_1001_);
v___x_1003_ = lean_obj_once(&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8, &l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8_once, _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8);
v___x_1004_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__9));
v___x_1005_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
lean_ctor_set(v___x_1005_, 1, v___x_1002_);
v___x_1006_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__10));
v___x_1007_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1005_);
lean_ctor_set(v___x_1007_, 1, v___x_1006_);
v___x_1008_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1003_);
lean_ctor_set(v___x_1008_, 1, v___x_1007_);
v___x_1009_ = 0;
v___x_1010_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1010_, 0, v___x_1008_);
lean_ctor_set_uint8(v___x_1010_, sizeof(void*)*1, v___x_1009_);
return v___x_1010_;
}
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = lean_unsigned_to_nat(9u);
v___x_1025_ = lean_nat_to_int(v___x_1024_);
return v___x_1025_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__0));
v___x_1031_ = lean_string_length(v___x_1030_);
return v___x_1031_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1032_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__11, &l_Lasm_UI_instReprListener_repr___redArg___closed__11_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__11);
v___x_1033_ = lean_nat_to_int(v___x_1032_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___redArg(lean_object* v_x_1038_){
_start:
{
lean_object* v_event_1039_; lean_object* v_paths_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1073_; 
v_event_1039_ = lean_ctor_get(v_x_1038_, 0);
v_paths_1040_ = lean_ctor_get(v_x_1038_, 1);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_x_1038_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1042_ = v_x_1038_;
v_isShared_1043_ = v_isSharedCheck_1073_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_paths_1040_);
lean_inc(v_event_1039_);
lean_dec(v_x_1038_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1073_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1044_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__5));
v___x_1045_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__6));
v___x_1046_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__7, &l_Lasm_UI_instReprListener_repr___redArg___closed__7_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__7);
v___x_1047_ = l_String_quote(v_event_1039_);
v___x_1048_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1047_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set_tag(v___x_1042_, 4);
lean_ctor_set(v___x_1042_, 1, v___x_1048_);
lean_ctor_set(v___x_1042_, 0, v___x_1046_);
v___x_1050_ = v___x_1042_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1046_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
uint8_t v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1051_ = 0;
v___x_1052_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set_uint8(v___x_1052_, sizeof(void*)*1, v___x_1051_);
v___x_1053_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1045_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
v___x_1054_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__4));
v___x_1055_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1053_);
lean_ctor_set(v___x_1055_, 1, v___x_1054_);
v___x_1056_ = lean_box(1);
v___x_1057_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1055_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__9));
v___x_1059_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1057_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
lean_ctor_set(v___x_1060_, 1, v___x_1044_);
v___x_1061_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_paths_1040_);
v___x_1062_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1046_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
v___x_1063_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
lean_ctor_set_uint8(v___x_1063_, sizeof(void*)*1, v___x_1051_);
v___x_1064_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1060_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v___x_1065_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__12, &l_Lasm_UI_instReprListener_repr___redArg___closed__12_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__12);
v___x_1066_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__13));
v___x_1067_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
lean_ctor_set(v___x_1067_, 1, v___x_1064_);
v___x_1068_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__14));
v___x_1069_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1067_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1065_);
lean_ctor_set(v___x_1070_, 1, v___x_1069_);
v___x_1071_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
lean_ctor_set_uint8(v___x_1071_, sizeof(void*)*1, v___x_1051_);
return v___x_1071_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr(lean_object* v_x_1074_, lean_object* v_prec_1075_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lasm_UI_instReprListener_repr___redArg(v_x_1074_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___boxed(lean_object* v_x_1077_, lean_object* v_prec_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lasm_UI_instReprListener_repr(v_x_1077_, v_prec_1078_);
lean_dec(v_prec_1078_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0(lean_object* v_a_1080_, lean_object* v_n_1081_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_a_1080_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___boxed(lean_object* v_a_1083_, lean_object* v_n_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0(v_a_1083_, v_n_1084_);
lean_dec(v_n_1084_);
return v_res_1085_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(uint64_t v_x_1093_, lean_object* v_x_1094_){
_start:
{
if (lean_obj_tag(v_x_1094_) == 0)
{
return v_x_1093_;
}
else
{
lean_object* v_head_1095_; lean_object* v_tail_1096_; uint64_t v___x_1097_; uint64_t v___x_1098_; 
v_head_1095_ = lean_ctor_get(v_x_1094_, 0);
v_tail_1096_ = lean_ctor_get(v_x_1094_, 1);
v___x_1097_ = lean_string_hash(v_head_1095_);
v___x_1098_ = lean_uint64_mix_hash(v_x_1093_, v___x_1097_);
v_x_1093_ = v___x_1098_;
v_x_1094_ = v_tail_1096_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0___boxed(lean_object* v_x_1100_, lean_object* v_x_1101_){
_start:
{
uint64_t v_x_96__boxed_1102_; uint64_t v_res_1103_; lean_object* v_r_1104_; 
v_x_96__boxed_1102_ = lean_unbox_uint64(v_x_1100_);
lean_dec_ref(v_x_1100_);
v_res_1103_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(v_x_96__boxed_1102_, v_x_1101_);
lean_dec(v_x_1101_);
v_r_1104_ = lean_box_uint64(v_res_1103_);
return v_r_1104_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(uint64_t v_x_1105_, lean_object* v_x_1106_){
_start:
{
if (lean_obj_tag(v_x_1106_) == 0)
{
return v_x_1105_;
}
else
{
lean_object* v_head_1107_; lean_object* v_tail_1108_; uint64_t v___x_1109_; uint64_t v___x_1110_; uint64_t v___x_1111_; 
v_head_1107_ = lean_ctor_get(v_x_1106_, 0);
v_tail_1108_ = lean_ctor_get(v_x_1106_, 1);
v___x_1109_ = 7ULL;
v___x_1110_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(v___x_1109_, v_head_1107_);
v___x_1111_ = lean_uint64_mix_hash(v_x_1105_, v___x_1110_);
v_x_1105_ = v___x_1111_;
v_x_1106_ = v_tail_1108_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1___boxed(lean_object* v_x_1113_, lean_object* v_x_1114_){
_start:
{
uint64_t v_x_112__boxed_1115_; uint64_t v_res_1116_; lean_object* v_r_1117_; 
v_x_112__boxed_1115_ = lean_unbox_uint64(v_x_1113_);
lean_dec_ref(v_x_1113_);
v_res_1116_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v_x_112__boxed_1115_, v_x_1114_);
lean_dec(v_x_1114_);
v_r_1117_ = lean_box_uint64(v_res_1116_);
return v_r_1117_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableListener_hash(lean_object* v_x_1118_){
_start:
{
lean_object* v_event_1119_; lean_object* v_paths_1120_; uint64_t v___x_1121_; uint64_t v___x_1122_; uint64_t v___x_1123_; uint64_t v___x_1124_; uint64_t v___x_1125_; uint64_t v___x_1126_; 
v_event_1119_ = lean_ctor_get(v_x_1118_, 0);
v_paths_1120_ = lean_ctor_get(v_x_1118_, 1);
v___x_1121_ = 0ULL;
v___x_1122_ = lean_string_hash(v_event_1119_);
v___x_1123_ = lean_uint64_mix_hash(v___x_1121_, v___x_1122_);
v___x_1124_ = 7ULL;
v___x_1125_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_1124_, v_paths_1120_);
v___x_1126_ = lean_uint64_mix_hash(v___x_1123_, v___x_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableListener_hash___boxed(lean_object* v_x_1127_){
_start:
{
uint64_t v_res_1128_; lean_object* v_r_1129_; 
v_res_1128_ = l_Lasm_UI_instHashableListener_hash(v_x_1127_);
lean_dec_ref(v_x_1127_);
v_r_1129_ = lean_box_uint64(v_res_1128_);
return v_r_1129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___redArg(lean_object* v_x_1132_){
_start:
{
switch(lean_obj_tag(v_x_1132_))
{
case 0:
{
lean_object* v___x_1133_; 
v___x_1133_ = lean_unsigned_to_nat(0u);
return v___x_1133_;
}
case 1:
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_unsigned_to_nat(1u);
return v___x_1134_;
}
case 2:
{
lean_object* v___x_1135_; 
v___x_1135_ = lean_unsigned_to_nat(2u);
return v___x_1135_;
}
default: 
{
lean_object* v___x_1136_; 
v___x_1136_ = lean_unsigned_to_nat(3u);
return v___x_1136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___redArg___boxed(lean_object* v_x_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l_Lasm_UI_Attr_ctorIdx___redArg(v_x_1137_);
lean_dec_ref(v_x_1137_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx(lean_object* v_Msg_1139_, lean_object* v_x_1140_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lasm_UI_Attr_ctorIdx___redArg(v_x_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___boxed(lean_object* v_Msg_1142_, lean_object* v_x_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lasm_UI_Attr_ctorIdx(v_Msg_1142_, v_x_1143_);
lean_dec_ref(v_x_1143_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim___redArg(lean_object* v_t_1145_, lean_object* v_k_1146_){
_start:
{
lean_object* v_name_1147_; lean_object* v_value_1148_; lean_object* v___x_1149_; 
v_name_1147_ = lean_ctor_get(v_t_1145_, 0);
lean_inc_ref(v_name_1147_);
v_value_1148_ = lean_ctor_get(v_t_1145_, 1);
lean_inc_ref(v_value_1148_);
lean_dec_ref(v_t_1145_);
v___x_1149_ = lean_apply_2(v_k_1146_, v_name_1147_, v_value_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim(lean_object* v_Msg_1150_, lean_object* v_motive_1151_, lean_object* v_ctorIdx_1152_, lean_object* v_t_1153_, lean_object* v_h_1154_, lean_object* v_k_1155_){
_start:
{
lean_object* v___x_1156_; 
v___x_1156_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1153_, v_k_1155_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim___boxed(lean_object* v_Msg_1157_, lean_object* v_motive_1158_, lean_object* v_ctorIdx_1159_, lean_object* v_t_1160_, lean_object* v_h_1161_, lean_object* v_k_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_Lasm_UI_Attr_ctorElim(v_Msg_1157_, v_motive_1158_, v_ctorIdx_1159_, v_t_1160_, v_h_1161_, v_k_1162_);
lean_dec(v_ctorIdx_1159_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_attr_elim___redArg(lean_object* v_t_1164_, lean_object* v_attr_1165_){
_start:
{
lean_object* v___x_1166_; 
v___x_1166_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1164_, v_attr_1165_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_attr_elim(lean_object* v_Msg_1167_, lean_object* v_motive_1168_, lean_object* v_t_1169_, lean_object* v_h_1170_, lean_object* v_attr_1171_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1169_, v_attr_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_prop_elim___redArg(lean_object* v_t_1173_, lean_object* v_prop_1174_){
_start:
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1173_, v_prop_1174_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_prop_elim(lean_object* v_Msg_1176_, lean_object* v_motive_1177_, lean_object* v_t_1178_, lean_object* v_h_1179_, lean_object* v_prop_1180_){
_start:
{
lean_object* v___x_1181_; 
v___x_1181_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1178_, v_prop_1180_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_style_elim___redArg(lean_object* v_t_1182_, lean_object* v_style_1183_){
_start:
{
lean_object* v___x_1184_; 
v___x_1184_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1182_, v_style_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_style_elim(lean_object* v_Msg_1185_, lean_object* v_motive_1186_, lean_object* v_t_1187_, lean_object* v_h_1188_, lean_object* v_style_1189_){
_start:
{
lean_object* v___x_1190_; 
v___x_1190_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1187_, v_style_1189_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_on_elim___redArg(lean_object* v_t_1191_, lean_object* v_on_1192_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1191_, v_on_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_on_elim(lean_object* v_Msg_1194_, lean_object* v_motive_1195_, lean_object* v_t_1196_, lean_object* v_h_1197_, lean_object* v_on_1198_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1196_, v_on_1198_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr___redArg(){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = ((lean_object*)(l_Lasm_UI_instInhabitedAttr___redArg___closed__0));
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr___redArg___boxed(lean_object* v___dummy_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lasm_UI_instInhabitedAttr___redArg();
return v_res_1205_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedAttr___closed__0(void){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = l_Lasm_UI_instInhabitedAttr___redArg();
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr(lean_object* v_Msg_1207_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = lean_obj_once(&l_Lasm_UI_instInhabitedAttr___closed__0, &l_Lasm_UI_instInhabitedAttr___closed__0_once, _init_l_Lasm_UI_instInhabitedAttr___closed__0);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx(lean_object* v_x_1209_){
_start:
{
switch(lean_obj_tag(v_x_1209_))
{
case 0:
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_unsigned_to_nat(0u);
return v___x_1210_;
}
case 1:
{
lean_object* v___x_1211_; 
v___x_1211_ = lean_unsigned_to_nat(1u);
return v___x_1211_;
}
case 2:
{
lean_object* v___x_1212_; 
v___x_1212_ = lean_unsigned_to_nat(2u);
return v___x_1212_;
}
default: 
{
lean_object* v___x_1213_; 
v___x_1213_ = lean_unsigned_to_nat(3u);
return v___x_1213_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx___boxed(lean_object* v_x_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Lasm_UI_AttrKey_ctorIdx(v_x_1214_);
lean_dec_ref(v_x_1214_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim___redArg(lean_object* v_t_1216_, lean_object* v_k_1217_){
_start:
{
lean_object* v_name_1218_; lean_object* v___x_1219_; 
v_name_1218_ = lean_ctor_get(v_t_1216_, 0);
lean_inc_ref(v_name_1218_);
lean_dec_ref(v_t_1216_);
v___x_1219_ = lean_apply_1(v_k_1217_, v_name_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim(lean_object* v_motive_1220_, lean_object* v_ctorIdx_1221_, lean_object* v_t_1222_, lean_object* v_h_1223_, lean_object* v_k_1224_){
_start:
{
lean_object* v___x_1225_; 
v___x_1225_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1222_, v_k_1224_);
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim___boxed(lean_object* v_motive_1226_, lean_object* v_ctorIdx_1227_, lean_object* v_t_1228_, lean_object* v_h_1229_, lean_object* v_k_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lasm_UI_AttrKey_ctorElim(v_motive_1226_, v_ctorIdx_1227_, v_t_1228_, v_h_1229_, v_k_1230_);
lean_dec(v_ctorIdx_1227_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_attr_elim___redArg(lean_object* v_t_1232_, lean_object* v_attr_1233_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1232_, v_attr_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_attr_elim(lean_object* v_motive_1235_, lean_object* v_t_1236_, lean_object* v_h_1237_, lean_object* v_attr_1238_){
_start:
{
lean_object* v___x_1239_; 
v___x_1239_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1236_, v_attr_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_prop_elim___redArg(lean_object* v_t_1240_, lean_object* v_prop_1241_){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1240_, v_prop_1241_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_prop_elim(lean_object* v_motive_1243_, lean_object* v_t_1244_, lean_object* v_h_1245_, lean_object* v_prop_1246_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1244_, v_prop_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_style_elim___redArg(lean_object* v_t_1248_, lean_object* v_style_1249_){
_start:
{
lean_object* v___x_1250_; 
v___x_1250_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1248_, v_style_1249_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_style_elim(lean_object* v_motive_1251_, lean_object* v_t_1252_, lean_object* v_h_1253_, lean_object* v_style_1254_){
_start:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1252_, v_style_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_on_elim___redArg(lean_object* v_t_1256_, lean_object* v_on_1257_){
_start:
{
lean_object* v___x_1258_; 
v___x_1258_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1256_, v_on_1257_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_on_elim(lean_object* v_motive_1259_, lean_object* v_t_1260_, lean_object* v_h_1261_, lean_object* v_on_1262_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1260_, v_on_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrKey_decEq(lean_object* v_x_1264_, lean_object* v_x_1265_){
_start:
{
switch(lean_obj_tag(v_x_1264_))
{
case 0:
{
if (lean_obj_tag(v_x_1265_) == 0)
{
lean_object* v_name_1266_; lean_object* v_name_1267_; uint8_t v___x_1268_; 
v_name_1266_ = lean_ctor_get(v_x_1264_, 0);
v_name_1267_ = lean_ctor_get(v_x_1265_, 0);
v___x_1268_ = lean_string_dec_eq(v_name_1266_, v_name_1267_);
return v___x_1268_;
}
else
{
uint8_t v___x_1269_; 
v___x_1269_ = 0;
return v___x_1269_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1265_) == 1)
{
lean_object* v_name_1270_; lean_object* v_name_1271_; uint8_t v___x_1272_; 
v_name_1270_ = lean_ctor_get(v_x_1264_, 0);
v_name_1271_ = lean_ctor_get(v_x_1265_, 0);
v___x_1272_ = lean_string_dec_eq(v_name_1270_, v_name_1271_);
return v___x_1272_;
}
else
{
uint8_t v___x_1273_; 
v___x_1273_ = 0;
return v___x_1273_;
}
}
case 2:
{
if (lean_obj_tag(v_x_1265_) == 2)
{
lean_object* v_name_1274_; lean_object* v_name_1275_; uint8_t v___x_1276_; 
v_name_1274_ = lean_ctor_get(v_x_1264_, 0);
v_name_1275_ = lean_ctor_get(v_x_1265_, 0);
v___x_1276_ = lean_string_dec_eq(v_name_1274_, v_name_1275_);
return v___x_1276_;
}
else
{
uint8_t v___x_1277_; 
v___x_1277_ = 0;
return v___x_1277_;
}
}
default: 
{
if (lean_obj_tag(v_x_1265_) == 3)
{
lean_object* v_event_1278_; lean_object* v_event_1279_; uint8_t v___x_1280_; 
v_event_1278_ = lean_ctor_get(v_x_1264_, 0);
v_event_1279_ = lean_ctor_get(v_x_1265_, 0);
v___x_1280_ = lean_string_dec_eq(v_event_1278_, v_event_1279_);
return v___x_1280_;
}
else
{
uint8_t v___x_1281_; 
v___x_1281_ = 0;
return v___x_1281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrKey_decEq___boxed(lean_object* v_x_1282_, lean_object* v_x_1283_){
_start:
{
uint8_t v_res_1284_; lean_object* v_r_1285_; 
v_res_1284_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_x_1282_, v_x_1283_);
lean_dec_ref(v_x_1283_);
lean_dec_ref(v_x_1282_);
v_r_1285_ = lean_box(v_res_1284_);
return v_r_1285_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrKey(lean_object* v_x_1286_, lean_object* v_x_1287_){
_start:
{
uint8_t v___x_1288_; 
v___x_1288_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_x_1286_, v_x_1287_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrKey___boxed(lean_object* v_x_1289_, lean_object* v_x_1290_){
_start:
{
uint8_t v_res_1291_; lean_object* v_r_1292_; 
v_res_1291_ = l_Lasm_UI_instDecidableEqAttrKey(v_x_1289_, v_x_1290_);
lean_dec_ref(v_x_1290_);
lean_dec_ref(v_x_1289_);
v_r_1292_ = lean_box(v_res_1291_);
return v_r_1292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrKey_repr(lean_object* v_x_1317_, lean_object* v_prec_1318_){
_start:
{
switch(lean_obj_tag(v_x_1317_))
{
case 0:
{
lean_object* v_name_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1339_; 
v_name_1319_ = lean_ctor_get(v_x_1317_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_x_1317_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1321_ = v_x_1317_;
v_isShared_1322_ = v_isSharedCheck_1339_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_name_1319_);
lean_dec(v_x_1317_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1339_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___y_1324_; lean_object* v___x_1335_; uint8_t v___x_1336_; 
v___x_1335_ = lean_unsigned_to_nat(1024u);
v___x_1336_ = lean_nat_dec_le(v___x_1335_, v_prec_1318_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1324_ = v___x_1337_;
goto v___jp_1323_;
}
else
{
lean_object* v___x_1338_; 
v___x_1338_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1324_ = v___x_1338_;
goto v___jp_1323_;
}
v___jp_1323_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1328_; 
v___x_1325_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__2));
v___x_1326_ = l_String_quote(v_name_1319_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set_tag(v___x_1321_, 3);
lean_ctor_set(v___x_1321_, 0, v___x_1326_);
v___x_1328_ = v___x_1321_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1326_);
v___x_1328_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1329_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1325_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
lean_inc(v___y_1324_);
v___x_1330_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___y_1324_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = 0;
v___x_1332_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set_uint8(v___x_1332_, sizeof(void*)*1, v___x_1331_);
v___x_1333_ = l_Repr_addAppParen(v___x_1332_, v_prec_1318_);
return v___x_1333_;
}
}
}
}
case 1:
{
lean_object* v_name_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1360_; 
v_name_1340_ = lean_ctor_get(v_x_1317_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_x_1317_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1342_ = v_x_1317_;
v_isShared_1343_ = v_isSharedCheck_1360_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_name_1340_);
lean_dec(v_x_1317_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1360_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___y_1345_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v___x_1356_ = lean_unsigned_to_nat(1024u);
v___x_1357_ = lean_nat_dec_le(v___x_1356_, v_prec_1318_);
if (v___x_1357_ == 0)
{
lean_object* v___x_1358_; 
v___x_1358_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1345_ = v___x_1358_;
goto v___jp_1344_;
}
else
{
lean_object* v___x_1359_; 
v___x_1359_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1345_ = v___x_1359_;
goto v___jp_1344_;
}
v___jp_1344_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1349_; 
v___x_1346_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__5));
v___x_1347_ = l_String_quote(v_name_1340_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set_tag(v___x_1342_, 3);
lean_ctor_set(v___x_1342_, 0, v___x_1347_);
v___x_1349_ = v___x_1342_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; uint8_t v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1350_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1346_);
lean_ctor_set(v___x_1350_, 1, v___x_1349_);
lean_inc(v___y_1345_);
v___x_1351_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___y_1345_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
v___x_1352_ = 0;
v___x_1353_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1353_, 0, v___x_1351_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*1, v___x_1352_);
v___x_1354_ = l_Repr_addAppParen(v___x_1353_, v_prec_1318_);
return v___x_1354_;
}
}
}
}
case 2:
{
lean_object* v_name_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1381_; 
v_name_1361_ = lean_ctor_get(v_x_1317_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v_x_1317_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1363_ = v_x_1317_;
v_isShared_1364_ = v_isSharedCheck_1381_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_name_1361_);
lean_dec(v_x_1317_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1381_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___y_1366_; lean_object* v___x_1377_; uint8_t v___x_1378_; 
v___x_1377_ = lean_unsigned_to_nat(1024u);
v___x_1378_ = lean_nat_dec_le(v___x_1377_, v_prec_1318_);
if (v___x_1378_ == 0)
{
lean_object* v___x_1379_; 
v___x_1379_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1366_ = v___x_1379_;
goto v___jp_1365_;
}
else
{
lean_object* v___x_1380_; 
v___x_1380_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1366_ = v___x_1380_;
goto v___jp_1365_;
}
v___jp_1365_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1370_; 
v___x_1367_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__8));
v___x_1368_ = l_String_quote(v_name_1361_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set_tag(v___x_1363_, 3);
lean_ctor_set(v___x_1363_, 0, v___x_1368_);
v___x_1370_ = v___x_1363_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1368_);
v___x_1370_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1371_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1367_);
lean_ctor_set(v___x_1371_, 1, v___x_1370_);
lean_inc(v___y_1366_);
v___x_1372_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___y_1366_);
lean_ctor_set(v___x_1372_, 1, v___x_1371_);
v___x_1373_ = 0;
v___x_1374_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1374_, 0, v___x_1372_);
lean_ctor_set_uint8(v___x_1374_, sizeof(void*)*1, v___x_1373_);
v___x_1375_ = l_Repr_addAppParen(v___x_1374_, v_prec_1318_);
return v___x_1375_;
}
}
}
}
default: 
{
lean_object* v_event_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1402_; 
v_event_1382_ = lean_ctor_get(v_x_1317_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v_x_1317_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1384_ = v_x_1317_;
v_isShared_1385_ = v_isSharedCheck_1402_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_event_1382_);
lean_dec(v_x_1317_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1402_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___y_1387_; lean_object* v___x_1398_; uint8_t v___x_1399_; 
v___x_1398_ = lean_unsigned_to_nat(1024u);
v___x_1399_ = lean_nat_dec_le(v___x_1398_, v_prec_1318_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; 
v___x_1400_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1387_ = v___x_1400_;
goto v___jp_1386_;
}
else
{
lean_object* v___x_1401_; 
v___x_1401_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1387_ = v___x_1401_;
goto v___jp_1386_;
}
v___jp_1386_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1391_; 
v___x_1388_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__11));
v___x_1389_ = l_String_quote(v_event_1382_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 0, v___x_1389_);
v___x_1391_ = v___x_1384_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1389_);
v___x_1391_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; uint8_t v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1392_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1388_);
lean_ctor_set(v___x_1392_, 1, v___x_1391_);
lean_inc(v___y_1387_);
v___x_1393_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1393_, 0, v___y_1387_);
lean_ctor_set(v___x_1393_, 1, v___x_1392_);
v___x_1394_ = 0;
v___x_1395_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1395_, 0, v___x_1393_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*1, v___x_1394_);
v___x_1396_ = l_Repr_addAppParen(v___x_1395_, v_prec_1318_);
return v___x_1396_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrKey_repr___boxed(lean_object* v_x_1403_, lean_object* v_prec_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_Lasm_UI_instReprAttrKey_repr(v_x_1403_, v_prec_1404_);
lean_dec(v_prec_1404_);
return v_res_1405_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableAttrKey_hash(lean_object* v_x_1412_){
_start:
{
switch(lean_obj_tag(v_x_1412_))
{
case 0:
{
lean_object* v_name_1413_; uint64_t v___x_1414_; uint64_t v___x_1415_; uint64_t v___x_1416_; 
v_name_1413_ = lean_ctor_get(v_x_1412_, 0);
v___x_1414_ = 0ULL;
v___x_1415_ = lean_string_hash(v_name_1413_);
v___x_1416_ = lean_uint64_mix_hash(v___x_1414_, v___x_1415_);
return v___x_1416_;
}
case 1:
{
lean_object* v_name_1417_; uint64_t v___x_1418_; uint64_t v___x_1419_; uint64_t v___x_1420_; 
v_name_1417_ = lean_ctor_get(v_x_1412_, 0);
v___x_1418_ = 1ULL;
v___x_1419_ = lean_string_hash(v_name_1417_);
v___x_1420_ = lean_uint64_mix_hash(v___x_1418_, v___x_1419_);
return v___x_1420_;
}
case 2:
{
lean_object* v_name_1421_; uint64_t v___x_1422_; uint64_t v___x_1423_; uint64_t v___x_1424_; 
v_name_1421_ = lean_ctor_get(v_x_1412_, 0);
v___x_1422_ = 2ULL;
v___x_1423_ = lean_string_hash(v_name_1421_);
v___x_1424_ = lean_uint64_mix_hash(v___x_1422_, v___x_1423_);
return v___x_1424_;
}
default: 
{
lean_object* v_event_1425_; uint64_t v___x_1426_; uint64_t v___x_1427_; uint64_t v___x_1428_; 
v_event_1425_ = lean_ctor_get(v_x_1412_, 0);
v___x_1426_ = 3ULL;
v___x_1427_ = lean_string_hash(v_event_1425_);
v___x_1428_ = lean_uint64_mix_hash(v___x_1426_, v___x_1427_);
return v___x_1428_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableAttrKey_hash___boxed(lean_object* v_x_1429_){
_start:
{
uint64_t v_res_1430_; lean_object* v_r_1431_; 
v_res_1430_ = l_Lasm_UI_instHashableAttrKey_hash(v_x_1429_);
lean_dec_ref(v_x_1429_);
v_r_1431_ = lean_box_uint64(v_res_1430_);
return v_r_1431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx(lean_object* v_x_1434_){
_start:
{
switch(lean_obj_tag(v_x_1434_))
{
case 0:
{
lean_object* v___x_1435_; 
v___x_1435_ = lean_unsigned_to_nat(0u);
return v___x_1435_;
}
case 1:
{
lean_object* v___x_1436_; 
v___x_1436_ = lean_unsigned_to_nat(1u);
return v___x_1436_;
}
default: 
{
lean_object* v___x_1437_; 
v___x_1437_ = lean_unsigned_to_nat(2u);
return v___x_1437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx___boxed(lean_object* v_x_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l_Lasm_UI_AttrVal_ctorIdx(v_x_1438_);
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
v___x_1626_ = l_Lasm_UI_Handled_map___redArg(v_f_1618_, v_val_1622_);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_custom___redArg(lean_object* v_event_1675_, lean_object* v_d_1676_){
_start:
{
lean_object* v_paths_1677_; lean_object* v_run_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1686_; 
v_paths_1677_ = lean_ctor_get(v_d_1676_, 0);
v_run_1678_ = lean_ctor_get(v_d_1676_, 1);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_d_1676_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1680_ = v_d_1676_;
v_isShared_1681_ = v_isSharedCheck_1686_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_run_1678_);
lean_inc(v_paths_1677_);
lean_dec(v_d_1676_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1686_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v_paths_1677_);
lean_ctor_set(v___x_1680_, 0, v_event_1675_);
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_event_1675_);
lean_ctor_set(v_reuseFailAlloc_1685_, 1, v_paths_1677_);
v___x_1683_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
lean_object* v___x_1684_; 
v___x_1684_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1683_);
lean_ctor_set(v___x_1684_, 1, v_run_1678_);
return v___x_1684_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_custom(lean_object* v_Msg_1687_, lean_object* v_event_1688_, lean_object* v_d_1689_){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = l_Lasm_UI_Attr_custom___redArg(v_event_1688_, v_d_1689_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___redArg(lean_object* v_x_1691_){
_start:
{
if (lean_obj_tag(v_x_1691_) == 0)
{
lean_object* v___x_1692_; 
v___x_1692_ = lean_unsigned_to_nat(0u);
return v___x_1692_;
}
else
{
lean_object* v___x_1693_; 
v___x_1693_ = lean_unsigned_to_nat(1u);
return v___x_1693_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___redArg___boxed(lean_object* v_x_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_Lasm_UI_Html_ctorIdx___redArg(v_x_1694_);
lean_dec_ref(v_x_1694_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx(lean_object* v_Msg_1696_, lean_object* v_x_1697_){
_start:
{
lean_object* v___x_1698_; 
v___x_1698_ = l_Lasm_UI_Html_ctorIdx___redArg(v_x_1697_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___boxed(lean_object* v_Msg_1699_, lean_object* v_x_1700_){
_start:
{
lean_object* v_res_1701_; 
v_res_1701_ = l_Lasm_UI_Html_ctorIdx(v_Msg_1699_, v_x_1700_);
lean_dec_ref(v_x_1700_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim___redArg(lean_object* v_t_1702_, lean_object* v_k_1703_){
_start:
{
if (lean_obj_tag(v_t_1702_) == 0)
{
lean_object* v_s_1704_; lean_object* v___x_1705_; 
v_s_1704_ = lean_ctor_get(v_t_1702_, 0);
lean_inc_ref(v_s_1704_);
lean_dec_ref_known(v_t_1702_, 1);
v___x_1705_ = lean_apply_1(v_k_1703_, v_s_1704_);
return v___x_1705_;
}
else
{
uint8_t v_ns_1706_; lean_object* v_tag_1707_; lean_object* v_key_1708_; lean_object* v_attrs_1709_; lean_object* v_children_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
v_ns_1706_ = lean_ctor_get_uint8(v_t_1702_, sizeof(void*)*4);
v_tag_1707_ = lean_ctor_get(v_t_1702_, 0);
lean_inc_ref(v_tag_1707_);
v_key_1708_ = lean_ctor_get(v_t_1702_, 1);
lean_inc(v_key_1708_);
v_attrs_1709_ = lean_ctor_get(v_t_1702_, 2);
lean_inc(v_attrs_1709_);
v_children_1710_ = lean_ctor_get(v_t_1702_, 3);
lean_inc(v_children_1710_);
lean_dec_ref_known(v_t_1702_, 4);
v___x_1711_ = lean_box(v_ns_1706_);
v___x_1712_ = lean_apply_5(v_k_1703_, v___x_1711_, v_tag_1707_, v_key_1708_, v_attrs_1709_, v_children_1710_);
return v___x_1712_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim(lean_object* v_Msg_1713_, lean_object* v_motive__1_1714_, lean_object* v_ctorIdx_1715_, lean_object* v_t_1716_, lean_object* v_h_1717_, lean_object* v_k_1718_){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1716_, v_k_1718_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim___boxed(lean_object* v_Msg_1720_, lean_object* v_motive__1_1721_, lean_object* v_ctorIdx_1722_, lean_object* v_t_1723_, lean_object* v_h_1724_, lean_object* v_k_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lasm_UI_Html_ctorElim(v_Msg_1720_, v_motive__1_1721_, v_ctorIdx_1722_, v_t_1723_, v_h_1724_, v_k_1725_);
lean_dec(v_ctorIdx_1722_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_text_elim___redArg(lean_object* v_t_1727_, lean_object* v_text_1728_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1727_, v_text_1728_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_text_elim(lean_object* v_Msg_1730_, lean_object* v_motive__1_1731_, lean_object* v_t_1732_, lean_object* v_h_1733_, lean_object* v_text_1734_){
_start:
{
lean_object* v___x_1735_; 
v___x_1735_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1732_, v_text_1734_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_elem_elim___redArg(lean_object* v_t_1736_, lean_object* v_elem_1737_){
_start:
{
lean_object* v___x_1738_; 
v___x_1738_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1736_, v_elem_1737_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_elem_elim(lean_object* v_Msg_1739_, lean_object* v_motive__1_1740_, lean_object* v_t_1741_, lean_object* v_h_1742_, lean_object* v_elem_1743_){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1741_, v_elem_1743_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml___redArg(){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = ((lean_object*)(l_Lasm_UI_instInhabitedHtml___redArg___closed__0));
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml___redArg___boxed(lean_object* v___dummy_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l_Lasm_UI_instInhabitedHtml___redArg();
return v_res_1750_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedHtml___closed__0(void){
_start:
{
lean_object* v___x_1751_; 
v___x_1751_ = l_Lasm_UI_instInhabitedHtml___redArg();
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml(lean_object* v_Msg_1752_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_obj_once(&l_Lasm_UI_instInhabitedHtml___closed__0, &l_Lasm_UI_instInhabitedHtml___closed__0_once, _init_l_Lasm_UI_instInhabitedHtml___closed__0);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_keyed___redArg(lean_object* v_k_1754_, lean_object* v_x_1755_){
_start:
{
if (lean_obj_tag(v_x_1755_) == 1)
{
uint8_t v_ns_1756_; lean_object* v_tag_1757_; lean_object* v_attrs_1758_; lean_object* v_children_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1767_; 
v_ns_1756_ = lean_ctor_get_uint8(v_x_1755_, sizeof(void*)*4);
v_tag_1757_ = lean_ctor_get(v_x_1755_, 0);
v_attrs_1758_ = lean_ctor_get(v_x_1755_, 2);
v_children_1759_ = lean_ctor_get(v_x_1755_, 3);
v_isSharedCheck_1767_ = !lean_is_exclusive(v_x_1755_);
if (v_isSharedCheck_1767_ == 0)
{
lean_object* v_unused_1768_; 
v_unused_1768_ = lean_ctor_get(v_x_1755_, 1);
lean_dec(v_unused_1768_);
v___x_1761_ = v_x_1755_;
v_isShared_1762_ = v_isSharedCheck_1767_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_children_1759_);
lean_inc(v_attrs_1758_);
lean_inc(v_tag_1757_);
lean_dec(v_x_1755_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1767_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1763_; lean_object* v___x_1765_; 
v___x_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1763_, 0, v_k_1754_);
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 1, v___x_1763_);
v___x_1765_ = v___x_1761_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_tag_1757_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v___x_1763_);
lean_ctor_set(v_reuseFailAlloc_1766_, 2, v_attrs_1758_);
lean_ctor_set(v_reuseFailAlloc_1766_, 3, v_children_1759_);
lean_ctor_set_uint8(v_reuseFailAlloc_1766_, sizeof(void*)*4, v_ns_1756_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
return v___x_1765_;
}
}
}
else
{
lean_dec_ref(v_k_1754_);
return v_x_1755_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_keyed(lean_object* v_Msg_1769_, lean_object* v_k_1770_, lean_object* v_x_1771_){
_start:
{
lean_object* v___x_1772_; 
v___x_1772_ = l_Lasm_UI_Html_keyed___redArg(v_k_1770_, v_x_1771_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(lean_object* v_f_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_){
_start:
{
if (lean_obj_tag(v_a_1774_) == 0)
{
lean_object* v___x_1776_; 
lean_dec(v_f_1773_);
v___x_1776_ = l_List_reverse___redArg(v_a_1775_);
return v___x_1776_;
}
else
{
lean_object* v_head_1777_; lean_object* v_tail_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1787_; 
v_head_1777_ = lean_ctor_get(v_a_1774_, 0);
v_tail_1778_ = lean_ctor_get(v_a_1774_, 1);
v_isSharedCheck_1787_ = !lean_is_exclusive(v_a_1774_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1780_ = v_a_1774_;
v_isShared_1781_ = v_isSharedCheck_1787_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_tail_1778_);
lean_inc(v_head_1777_);
lean_dec(v_a_1774_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1787_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1782_; lean_object* v___x_1784_; 
lean_inc(v_f_1773_);
v___x_1782_ = l_Lasm_UI_Attr_map___redArg(v_f_1773_, v_head_1777_);
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 1, v_a_1775_);
lean_ctor_set(v___x_1780_, 0, v___x_1782_);
v___x_1784_ = v___x_1780_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v___x_1782_);
lean_ctor_set(v_reuseFailAlloc_1786_, 1, v_a_1775_);
v___x_1784_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
v_a_1774_ = v_tail_1778_;
v_a_1775_ = v___x_1784_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_map___redArg(lean_object* v_f_1788_, lean_object* v_x_1789_){
_start:
{
if (lean_obj_tag(v_x_1789_) == 0)
{
lean_object* v_s_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
lean_dec(v_f_1788_);
v_s_1790_ = lean_ctor_get(v_x_1789_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v_x_1789_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v_x_1789_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_s_1790_);
lean_dec(v_x_1789_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_s_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
else
{
uint8_t v_ns_1798_; lean_object* v_tag_1799_; lean_object* v_key_1800_; lean_object* v_attrs_1801_; lean_object* v_children_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1812_; 
v_ns_1798_ = lean_ctor_get_uint8(v_x_1789_, sizeof(void*)*4);
v_tag_1799_ = lean_ctor_get(v_x_1789_, 0);
v_key_1800_ = lean_ctor_get(v_x_1789_, 1);
v_attrs_1801_ = lean_ctor_get(v_x_1789_, 2);
v_children_1802_ = lean_ctor_get(v_x_1789_, 3);
v_isSharedCheck_1812_ = !lean_is_exclusive(v_x_1789_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1804_ = v_x_1789_;
v_isShared_1805_ = v_isSharedCheck_1812_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_children_1802_);
lean_inc(v_attrs_1801_);
lean_inc(v_key_1800_);
lean_inc(v_tag_1799_);
lean_dec(v_x_1789_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1812_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1810_; 
v___x_1806_ = lean_box(0);
lean_inc(v_f_1788_);
v___x_1807_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(v_f_1788_, v_attrs_1801_, v___x_1806_);
v___x_1808_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(v_f_1788_, v_children_1802_, v___x_1806_);
if (v_isShared_1805_ == 0)
{
lean_ctor_set(v___x_1804_, 3, v___x_1808_);
lean_ctor_set(v___x_1804_, 2, v___x_1807_);
v___x_1810_ = v___x_1804_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_tag_1799_);
lean_ctor_set(v_reuseFailAlloc_1811_, 1, v_key_1800_);
lean_ctor_set(v_reuseFailAlloc_1811_, 2, v___x_1807_);
lean_ctor_set(v_reuseFailAlloc_1811_, 3, v___x_1808_);
lean_ctor_set_uint8(v_reuseFailAlloc_1811_, sizeof(void*)*4, v_ns_1798_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(lean_object* v_f_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_){
_start:
{
if (lean_obj_tag(v_a_1814_) == 0)
{
lean_object* v___x_1816_; 
lean_dec(v_f_1813_);
v___x_1816_ = l_List_reverse___redArg(v_a_1815_);
return v___x_1816_;
}
else
{
lean_object* v_head_1817_; lean_object* v_tail_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1827_; 
v_head_1817_ = lean_ctor_get(v_a_1814_, 0);
v_tail_1818_ = lean_ctor_get(v_a_1814_, 1);
v_isSharedCheck_1827_ = !lean_is_exclusive(v_a_1814_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1820_ = v_a_1814_;
v_isShared_1821_ = v_isSharedCheck_1827_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_tail_1818_);
lean_inc(v_head_1817_);
lean_dec(v_a_1814_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1827_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1822_; lean_object* v___x_1824_; 
lean_inc(v_f_1813_);
v___x_1822_ = l_Lasm_UI_Html_map___redArg(v_f_1813_, v_head_1817_);
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 1, v_a_1815_);
lean_ctor_set(v___x_1820_, 0, v___x_1822_);
v___x_1824_ = v___x_1820_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v___x_1822_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v_a_1815_);
v___x_1824_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
v_a_1814_ = v_tail_1818_;
v_a_1815_ = v___x_1824_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_map(lean_object* v_00_u03b1_1828_, lean_object* v_00_u03b2_1829_, lean_object* v_f_1830_, lean_object* v_x_1831_){
_start:
{
lean_object* v___x_1832_; 
v___x_1832_ = l_Lasm_UI_Html_map___redArg(v_f_1830_, v_x_1831_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0(lean_object* v_00_u03b1_1833_, lean_object* v_00_u03b2_1834_, lean_object* v_f_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_){
_start:
{
lean_object* v___x_1838_; 
v___x_1838_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(v_f_1835_, v_a_1836_, v_a_1837_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1(lean_object* v_00_u03b1_1839_, lean_object* v_00_u03b2_1840_, lean_object* v_f_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_){
_start:
{
lean_object* v___x_1844_; 
v___x_1844_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(v_f_1841_, v_a_1842_, v_a_1843_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__3_splitter___redArg(lean_object* v_x_1845_, lean_object* v_h__1_1846_, lean_object* v_h__2_1847_){
_start:
{
if (lean_obj_tag(v_x_1845_) == 0)
{
lean_object* v_s_1848_; lean_object* v___x_1849_; 
lean_dec(v_h__2_1847_);
v_s_1848_ = lean_ctor_get(v_x_1845_, 0);
lean_inc_ref(v_s_1848_);
lean_dec_ref_known(v_x_1845_, 1);
v___x_1849_ = lean_apply_1(v_h__1_1846_, v_s_1848_);
return v___x_1849_;
}
else
{
uint8_t v_ns_1850_; lean_object* v_tag_1851_; lean_object* v_key_1852_; lean_object* v_attrs_1853_; lean_object* v_children_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
lean_dec(v_h__1_1846_);
v_ns_1850_ = lean_ctor_get_uint8(v_x_1845_, sizeof(void*)*4);
v_tag_1851_ = lean_ctor_get(v_x_1845_, 0);
lean_inc_ref(v_tag_1851_);
v_key_1852_ = lean_ctor_get(v_x_1845_, 1);
lean_inc(v_key_1852_);
v_attrs_1853_ = lean_ctor_get(v_x_1845_, 2);
lean_inc(v_attrs_1853_);
v_children_1854_ = lean_ctor_get(v_x_1845_, 3);
lean_inc(v_children_1854_);
lean_dec_ref_known(v_x_1845_, 4);
v___x_1855_ = lean_box(v_ns_1850_);
v___x_1856_ = lean_apply_5(v_h__2_1847_, v___x_1855_, v_tag_1851_, v_key_1852_, v_attrs_1853_, v_children_1854_);
return v___x_1856_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__3_splitter(lean_object* v_00_u03b1_1857_, lean_object* v_motive_1858_, lean_object* v_x_1859_, lean_object* v_h__1_1860_, lean_object* v_h__2_1861_){
_start:
{
if (lean_obj_tag(v_x_1859_) == 0)
{
lean_object* v_s_1862_; lean_object* v___x_1863_; 
lean_dec(v_h__2_1861_);
v_s_1862_ = lean_ctor_get(v_x_1859_, 0);
lean_inc_ref(v_s_1862_);
lean_dec_ref_known(v_x_1859_, 1);
v___x_1863_ = lean_apply_1(v_h__1_1860_, v_s_1862_);
return v___x_1863_;
}
else
{
uint8_t v_ns_1864_; lean_object* v_tag_1865_; lean_object* v_key_1866_; lean_object* v_attrs_1867_; lean_object* v_children_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; 
lean_dec(v_h__1_1860_);
v_ns_1864_ = lean_ctor_get_uint8(v_x_1859_, sizeof(void*)*4);
v_tag_1865_ = lean_ctor_get(v_x_1859_, 0);
lean_inc_ref(v_tag_1865_);
v_key_1866_ = lean_ctor_get(v_x_1859_, 1);
lean_inc(v_key_1866_);
v_attrs_1867_ = lean_ctor_get(v_x_1859_, 2);
lean_inc(v_attrs_1867_);
v_children_1868_ = lean_ctor_get(v_x_1859_, 3);
lean_inc(v_children_1868_);
lean_dec_ref_known(v_x_1859_, 4);
v___x_1869_ = lean_box(v_ns_1864_);
v___x_1870_ = lean_apply_5(v_h__2_1861_, v___x_1869_, v_tag_1865_, v_key_1866_, v_attrs_1867_, v_children_1868_);
return v___x_1870_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__List_map__unattach_match__1_splitter___redArg(lean_object* v_x_1871_, lean_object* v_h__1_1872_){
_start:
{
lean_object* v___x_1873_; 
v___x_1873_ = lean_apply_2(v_h__1_1872_, v_x_1871_, lean_box(0));
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__List_map__unattach_match__1_splitter(lean_object* v_00_u03b1_1874_, lean_object* v_P_1875_, lean_object* v_motive_1876_, lean_object* v_x_1877_, lean_object* v_h__1_1878_){
_start:
{
lean_object* v___x_1879_; 
v___x_1879_ = lean_apply_2(v_h__1_1878_, v_x_1877_, lean_box(0));
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter___redArg(lean_object* v_x_1880_, lean_object* v_h__1_1881_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = lean_apply_2(v_h__1_1881_, v_x_1880_, lean_box(0));
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter(lean_object* v_00_u03b1_1883_, lean_object* v_children_1884_, lean_object* v_motive_1885_, lean_object* v_x_1886_, lean_object* v_h__1_1887_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = lean_apply_2(v_h__1_1887_, v_x_1886_, lean_box(0));
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter___boxed(lean_object* v_00_u03b1_1889_, lean_object* v_children_1890_, lean_object* v_motive_1891_, lean_object* v_x_1892_, lean_object* v_h__1_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter(v_00_u03b1_1889_, v_children_1890_, v_motive_1891_, v_x_1892_, v_h__1_1893_);
lean_dec(v_children_1890_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(lean_object* v_init_1895_, lean_object* v_x_1896_){
_start:
{
if (lean_obj_tag(v_x_1896_) == 0)
{
lean_inc(v_init_1895_);
return v_init_1895_;
}
else
{
lean_object* v_head_1897_; lean_object* v_tail_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v_head_1897_ = lean_ctor_get(v_x_1896_, 0);
v_tail_1898_ = lean_ctor_get(v_x_1896_, 1);
v___x_1899_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v_init_1895_, v_tail_1898_);
v___x_1900_ = lean_nat_add(v_head_1897_, v___x_1899_);
lean_dec(v___x_1899_);
return v___x_1900_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1___boxed(lean_object* v_init_1901_, lean_object* v_x_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v_init_1901_, v_x_1902_);
lean_dec(v_x_1902_);
lean_dec(v_init_1901_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l_List_sum___at___00Lasm_UI_Html_size_spec__1(lean_object* v_l_1904_){
_start:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1905_ = lean_unsigned_to_nat(0u);
v___x_1906_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v___x_1905_, v_l_1904_);
return v___x_1906_;
}
}
LEAN_EXPORT lean_object* l_List_sum___at___00Lasm_UI_Html_size_spec__1___boxed(lean_object* v_l_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l_List_sum___at___00Lasm_UI_Html_size_spec__1(v_l_1907_);
lean_dec(v_l_1907_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_size___redArg(lean_object* v_x_1909_){
_start:
{
if (lean_obj_tag(v_x_1909_) == 0)
{
lean_object* v___x_1910_; 
lean_dec_ref_known(v_x_1909_, 1);
v___x_1910_ = lean_unsigned_to_nat(1u);
return v___x_1910_;
}
else
{
lean_object* v_children_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v_children_1911_ = lean_ctor_get(v_x_1909_, 3);
lean_inc(v_children_1911_);
lean_dec_ref_known(v_x_1909_, 4);
v___x_1912_ = lean_box(0);
v___x_1913_ = l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(v_children_1911_, v___x_1912_);
v___x_1914_ = l_List_sum___at___00Lasm_UI_Html_size_spec__1(v___x_1913_);
lean_dec(v___x_1913_);
v___x_1915_ = lean_unsigned_to_nat(1u);
v___x_1916_ = lean_nat_add(v___x_1914_, v___x_1915_);
lean_dec(v___x_1914_);
return v___x_1916_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(lean_object* v_a_1917_, lean_object* v_a_1918_){
_start:
{
if (lean_obj_tag(v_a_1917_) == 0)
{
lean_object* v___x_1919_; 
v___x_1919_ = l_List_reverse___redArg(v_a_1918_);
return v___x_1919_;
}
else
{
lean_object* v_head_1920_; lean_object* v_tail_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1930_; 
v_head_1920_ = lean_ctor_get(v_a_1917_, 0);
v_tail_1921_ = lean_ctor_get(v_a_1917_, 1);
v_isSharedCheck_1930_ = !lean_is_exclusive(v_a_1917_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1923_ = v_a_1917_;
v_isShared_1924_ = v_isSharedCheck_1930_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_tail_1921_);
lean_inc(v_head_1920_);
lean_dec(v_a_1917_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1930_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___x_1925_; lean_object* v___x_1927_; 
v___x_1925_ = l_Lasm_UI_Html_size___redArg(v_head_1920_);
if (v_isShared_1924_ == 0)
{
lean_ctor_set(v___x_1923_, 1, v_a_1918_);
lean_ctor_set(v___x_1923_, 0, v___x_1925_);
v___x_1927_ = v___x_1923_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v___x_1925_);
lean_ctor_set(v_reuseFailAlloc_1929_, 1, v_a_1918_);
v___x_1927_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
v_a_1917_ = v_tail_1921_;
v_a_1918_ = v___x_1927_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_size(lean_object* v_Msg_1931_, lean_object* v_x_1932_){
_start:
{
lean_object* v___x_1933_; 
v___x_1933_ = l_Lasm_UI_Html_size___redArg(v_x_1932_);
return v___x_1933_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0(lean_object* v_Msg_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_){
_start:
{
lean_object* v___x_1937_; 
v___x_1937_ = l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(v_a_1935_, v_a_1936_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__0(lean_object* v_b_1938_, lean_object* v_x_1939_){
_start:
{
lean_inc(v_b_1938_);
return v_b_1938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__0___boxed(lean_object* v_b_1940_, lean_object* v_x_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l_Lasm_UI_instFunctorHtml___lam__0(v_b_1940_, v_x_1941_);
lean_dec(v_x_1941_);
lean_dec(v_b_1940_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__1(lean_object* v_00_u03b1_1943_, lean_object* v_00_u03b2_1944_, lean_object* v_b_1945_, lean_object* v_h_1946_){
_start:
{
lean_object* v___f_1947_; lean_object* v___x_1948_; 
v___f_1947_ = lean_alloc_closure((void*)(l_Lasm_UI_instFunctorHtml___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1947_, 0, v_b_1945_);
v___x_1948_ = l_Lasm_UI_Html_map___redArg(v___f_1947_, v_h_1946_);
return v___x_1948_;
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
