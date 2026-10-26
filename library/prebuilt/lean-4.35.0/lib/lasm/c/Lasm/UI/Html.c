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
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___redArg(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_object* _init_l_Lasm_UI_Decoder_clientX___closed__2(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = ((lean_object*)(l_Lasm_UI_Decoder_clientX___closed__1));
v___x_834_ = l_Lasm_UI_Decoder_float(v___x_833_);
return v___x_834_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientX(void){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = lean_obj_once(&l_Lasm_UI_Decoder_clientX___closed__2, &l_Lasm_UI_Decoder_clientX___closed__2_once, _init_l_Lasm_UI_Decoder_clientX___closed__2);
return v___x_835_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientY___closed__2(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = ((lean_object*)(l_Lasm_UI_Decoder_clientY___closed__1));
v___x_841_ = l_Lasm_UI_Decoder_float(v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_clientY(void){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = lean_obj_once(&l_Lasm_UI_Decoder_clientY___closed__2, &l_Lasm_UI_Decoder_clientY___closed__2_once, _init_l_Lasm_UI_Decoder_clientY___closed__2);
return v___x_842_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetX___closed__2(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = ((lean_object*)(l_Lasm_UI_Decoder_offsetX___closed__1));
v___x_848_ = l_Lasm_UI_Decoder_float(v___x_847_);
return v___x_848_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetX(void){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = lean_obj_once(&l_Lasm_UI_Decoder_offsetX___closed__2, &l_Lasm_UI_Decoder_offsetX___closed__2_once, _init_l_Lasm_UI_Decoder_offsetX___closed__2);
return v___x_849_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetY___closed__2(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = ((lean_object*)(l_Lasm_UI_Decoder_offsetY___closed__1));
v___x_855_ = l_Lasm_UI_Decoder_float(v___x_854_);
return v___x_855_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_offsetY(void){
_start:
{
lean_object* v___x_856_; 
v___x_856_ = lean_obj_once(&l_Lasm_UI_Decoder_offsetY___closed__2, &l_Lasm_UI_Decoder_offsetY___closed__2_once, _init_l_Lasm_UI_Decoder_offsetY___closed__2);
return v___x_856_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_button___closed__2(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_861_ = ((lean_object*)(l_Lasm_UI_Decoder_button___closed__1));
v___x_862_ = l_Lasm_UI_Decoder_int(v___x_861_);
return v___x_862_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_button(void){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = lean_obj_once(&l_Lasm_UI_Decoder_button___closed__2, &l_Lasm_UI_Decoder_button___closed__2_once, _init_l_Lasm_UI_Decoder_button___closed__2);
return v___x_863_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_deltaY___closed__2(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = ((lean_object*)(l_Lasm_UI_Decoder_deltaY___closed__1));
v___x_869_ = l_Lasm_UI_Decoder_float(v___x_868_);
return v___x_869_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_deltaY(void){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = lean_obj_once(&l_Lasm_UI_Decoder_deltaY___closed__2, &l_Lasm_UI_Decoder_deltaY___closed__2_once, _init_l_Lasm_UI_Decoder_deltaY___closed__2);
return v___x_870_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_timeStamp___closed__2(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(l_Lasm_UI_Decoder_timeStamp___closed__1));
v___x_876_ = l_Lasm_UI_Decoder_float(v___x_875_);
return v___x_876_;
}
}
static lean_object* _init_l_Lasm_UI_Decoder_timeStamp(void){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = lean_obj_once(&l_Lasm_UI_Decoder_timeStamp___closed__2, &l_Lasm_UI_Decoder_timeStamp___closed__2_once, _init_l_Lasm_UI_Decoder_timeStamp___closed__2);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Decoder_dataset(lean_object* v_name_879_){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_880_ = ((lean_object*)(l_Lasm_UI_Decoder_targetValue___closed__0));
v___x_881_ = ((lean_object*)(l_Lasm_UI_Decoder_dataset___closed__0));
v___x_882_ = lean_box(0);
v___x_883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_883_, 0, v_name_879_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_881_);
lean_ctor_set(v___x_884_, 1, v___x_883_);
v___x_885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_880_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = l_Lasm_UI_Decoder_string(v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener_decEq___lam__0(lean_object* v_a_887_, lean_object* v_b_888_){
_start:
{
lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_889_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___x_890_ = l_instDecidableEqList___redArg(v___x_889_, v_a_887_, v_b_888_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener_decEq___lam__0___boxed(lean_object* v_a_891_, lean_object* v_b_892_){
_start:
{
uint8_t v_res_893_; lean_object* v_r_894_; 
v_res_893_ = l_Lasm_UI_instDecidableEqListener_decEq___lam__0(v_a_891_, v_b_892_);
v_r_894_ = lean_box(v_res_893_);
return v_r_894_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener_decEq(lean_object* v_x_896_, lean_object* v_x_897_){
_start:
{
lean_object* v_event_898_; lean_object* v_paths_899_; uint8_t v_preventDefault_900_; uint8_t v_stopPropagation_901_; lean_object* v_event_902_; lean_object* v_paths_903_; uint8_t v_preventDefault_904_; uint8_t v_stopPropagation_905_; uint8_t v___y_907_; uint8_t v___x_908_; 
v_event_898_ = lean_ctor_get(v_x_896_, 0);
lean_inc_ref(v_event_898_);
v_paths_899_ = lean_ctor_get(v_x_896_, 1);
lean_inc(v_paths_899_);
v_preventDefault_900_ = lean_ctor_get_uint8(v_x_896_, sizeof(void*)*2);
v_stopPropagation_901_ = lean_ctor_get_uint8(v_x_896_, sizeof(void*)*2 + 1);
lean_dec_ref(v_x_896_);
v_event_902_ = lean_ctor_get(v_x_897_, 0);
lean_inc_ref(v_event_902_);
v_paths_903_ = lean_ctor_get(v_x_897_, 1);
lean_inc(v_paths_903_);
v_preventDefault_904_ = lean_ctor_get_uint8(v_x_897_, sizeof(void*)*2);
v_stopPropagation_905_ = lean_ctor_get_uint8(v_x_897_, sizeof(void*)*2 + 1);
lean_dec_ref(v_x_897_);
v___x_908_ = lean_string_dec_eq(v_event_898_, v_event_902_);
lean_dec_ref(v_event_902_);
lean_dec_ref(v_event_898_);
if (v___x_908_ == 0)
{
lean_dec(v_paths_903_);
lean_dec(v_paths_899_);
return v___x_908_;
}
else
{
lean_object* v___f_909_; uint8_t v___x_910_; 
v___f_909_ = ((lean_object*)(l_Lasm_UI_instDecidableEqListener_decEq___closed__0));
v___x_910_ = l_instDecidableEqList___redArg(v___f_909_, v_paths_899_, v_paths_903_);
if (v___x_910_ == 0)
{
return v___x_910_;
}
else
{
if (v_preventDefault_904_ == 0)
{
if (v_preventDefault_900_ == 0)
{
v___y_907_ = v___x_910_;
goto v___jp_906_;
}
else
{
return v_preventDefault_904_;
}
}
else
{
v___y_907_ = v_preventDefault_900_;
goto v___jp_906_;
}
}
}
v___jp_906_:
{
if (v___y_907_ == 0)
{
return v___y_907_;
}
else
{
if (v_stopPropagation_905_ == 0)
{
if (v_stopPropagation_901_ == 0)
{
return v___y_907_;
}
else
{
return v_stopPropagation_905_;
}
}
else
{
return v_stopPropagation_901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener_decEq___boxed(lean_object* v_x_911_, lean_object* v_x_912_){
_start:
{
uint8_t v_res_913_; lean_object* v_r_914_; 
v_res_913_ = l_Lasm_UI_instDecidableEqListener_decEq(v_x_911_, v_x_912_);
v_r_914_ = lean_box(v_res_913_);
return v_r_914_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqListener(lean_object* v_x_915_, lean_object* v_x_916_){
_start:
{
uint8_t v___x_917_; 
v___x_917_ = l_Lasm_UI_instDecidableEqListener_decEq(v_x_915_, v_x_916_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqListener___boxed(lean_object* v_x_918_, lean_object* v_x_919_){
_start:
{
uint8_t v_res_920_; lean_object* v_r_921_; 
v_res_920_ = l_Lasm_UI_instDecidableEqListener(v_x_918_, v_x_919_);
v_r_921_ = lean_box(v_res_920_);
return v_r_921_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_922_, lean_object* v_x_923_, lean_object* v_x_924_){
_start:
{
if (lean_obj_tag(v_x_924_) == 0)
{
lean_dec(v_x_922_);
return v_x_923_;
}
else
{
lean_object* v_head_925_; lean_object* v_tail_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_936_; 
v_head_925_ = lean_ctor_get(v_x_924_, 0);
v_tail_926_ = lean_ctor_get(v_x_924_, 1);
v_isSharedCheck_936_ = !lean_is_exclusive(v_x_924_);
if (v_isSharedCheck_936_ == 0)
{
v___x_928_ = v_x_924_;
v_isShared_929_ = v_isSharedCheck_936_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_tail_926_);
lean_inc(v_head_925_);
lean_dec(v_x_924_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_936_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
lean_inc(v_x_922_);
if (v_isShared_929_ == 0)
{
lean_ctor_set_tag(v___x_928_, 5);
lean_ctor_set(v___x_928_, 1, v_x_922_);
lean_ctor_set(v___x_928_, 0, v_x_923_);
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_x_923_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v_x_922_);
v___x_931_ = v_reuseFailAlloc_935_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_932_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_925_);
v___x_933_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v_x_923_ = v___x_933_;
v_x_924_ = v_tail_926_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1(lean_object* v_x_937_, lean_object* v_x_938_, lean_object* v_x_939_){
_start:
{
if (lean_obj_tag(v_x_939_) == 0)
{
lean_dec(v_x_937_);
return v_x_938_;
}
else
{
lean_object* v_head_940_; lean_object* v_tail_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_951_; 
v_head_940_ = lean_ctor_get(v_x_939_, 0);
v_tail_941_ = lean_ctor_get(v_x_939_, 1);
v_isSharedCheck_951_ = !lean_is_exclusive(v_x_939_);
if (v_isSharedCheck_951_ == 0)
{
v___x_943_ = v_x_939_;
v_isShared_944_ = v_isSharedCheck_951_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_tail_941_);
lean_inc(v_head_940_);
lean_dec(v_x_939_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_951_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
lean_inc(v_x_937_);
if (v_isShared_944_ == 0)
{
lean_ctor_set_tag(v___x_943_, 5);
lean_ctor_set(v___x_943_, 1, v_x_937_);
lean_ctor_set(v___x_943_, 0, v_x_938_);
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_x_938_);
lean_ctor_set(v_reuseFailAlloc_950_, 1, v_x_937_);
v___x_946_ = v_reuseFailAlloc_950_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_947_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_940_);
v___x_948_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_946_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1_spec__2(v_x_937_, v___x_948_, v_tail_941_);
return v___x_949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0(lean_object* v_x_952_, lean_object* v_x_953_){
_start:
{
if (lean_obj_tag(v_x_952_) == 0)
{
lean_object* v___x_954_; 
lean_dec(v_x_953_);
v___x_954_ = lean_box(0);
return v___x_954_;
}
else
{
lean_object* v_tail_955_; 
v_tail_955_ = lean_ctor_get(v_x_952_, 1);
if (lean_obj_tag(v_tail_955_) == 0)
{
lean_object* v_head_956_; lean_object* v___x_957_; 
lean_dec(v_x_953_);
v_head_956_ = lean_ctor_get(v_x_952_, 0);
lean_inc(v_head_956_);
lean_dec_ref_known(v_x_952_, 2);
v___x_957_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_956_);
return v___x_957_;
}
else
{
lean_object* v_head_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
lean_inc(v_tail_955_);
v_head_958_ = lean_ctor_get(v_x_952_, 0);
lean_inc(v_head_958_);
lean_dec_ref_known(v_x_952_, 2);
v___x_959_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_head_958_);
v___x_960_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0_spec__1(v_x_953_, v___x_959_, v_tail_955_);
return v___x_960_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__2));
v___x_973_ = lean_string_length(v___x_972_);
return v___x_973_;
}
}
static lean_object* _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = lean_obj_once(&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7, &l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7_once, _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__7);
v___x_975_ = lean_nat_to_int(v___x_974_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(lean_object* v_a_980_){
_start:
{
if (lean_obj_tag(v_a_980_) == 0)
{
lean_object* v___x_981_; 
v___x_981_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__1));
return v___x_981_;
}
else
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; uint8_t v___x_990_; lean_object* v___x_991_; 
v___x_982_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__5));
v___x_983_ = l_Std_Format_joinSep___at___00List_repr___at___00Lasm_UI_instReprListener_repr_spec__0_spec__0(v_a_980_, v___x_982_);
v___x_984_ = lean_obj_once(&l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8, &l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8_once, _init_l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__8);
v___x_985_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__9));
v___x_986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
lean_ctor_set(v___x_986_, 1, v___x_983_);
v___x_987_ = ((lean_object*)(l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg___closed__10));
v___x_988_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_984_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = 0;
v___x_991_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_991_, 0, v___x_989_);
lean_ctor_set_uint8(v___x_991_, sizeof(void*)*1, v___x_990_);
return v___x_991_;
}
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_unsigned_to_nat(9u);
v___x_1006_ = lean_nat_to_int(v___x_1005_);
return v___x_1006_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_unsigned_to_nat(18u);
v___x_1014_ = lean_nat_to_int(v___x_1013_);
return v___x_1014_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = lean_unsigned_to_nat(19u);
v___x_1019_ = lean_nat_to_int(v___x_1018_);
return v___x_1019_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__0));
v___x_1022_ = lean_string_length(v___x_1021_);
return v___x_1022_;
}
}
static lean_object* _init_l_Lasm_UI_instReprListener_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__17, &l_Lasm_UI_instReprListener_repr___redArg___closed__17_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__17);
v___x_1024_ = lean_nat_to_int(v___x_1023_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___redArg(lean_object* v_x_1029_){
_start:
{
lean_object* v_event_1030_; lean_object* v_paths_1031_; uint8_t v_preventDefault_1032_; uint8_t v_stopPropagation_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; uint8_t v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v_event_1030_ = lean_ctor_get(v_x_1029_, 0);
lean_inc_ref(v_event_1030_);
v_paths_1031_ = lean_ctor_get(v_x_1029_, 1);
lean_inc(v_paths_1031_);
v_preventDefault_1032_ = lean_ctor_get_uint8(v_x_1029_, sizeof(void*)*2);
v_stopPropagation_1033_ = lean_ctor_get_uint8(v_x_1029_, sizeof(void*)*2 + 1);
lean_dec_ref(v_x_1029_);
v___x_1034_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__5));
v___x_1035_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__6));
v___x_1036_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__7, &l_Lasm_UI_instReprListener_repr___redArg___closed__7_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__7);
v___x_1037_ = l_String_quote(v_event_1030_);
v___x_1038_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
v___x_1039_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1036_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = 0;
v___x_1041_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1041_, 0, v___x_1039_);
lean_ctor_set_uint8(v___x_1041_, sizeof(void*)*1, v___x_1040_);
v___x_1042_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1035_);
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
lean_ctor_set(v___x_1049_, 1, v___x_1034_);
v___x_1050_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_paths_1031_);
v___x_1051_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1036_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
lean_ctor_set_uint8(v___x_1052_, sizeof(void*)*1, v___x_1040_);
v___x_1053_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1049_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
v___x_1054_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
lean_ctor_set(v___x_1054_, 1, v___x_1043_);
v___x_1055_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
lean_ctor_set(v___x_1055_, 1, v___x_1045_);
v___x_1056_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__11));
v___x_1057_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1055_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
lean_ctor_set(v___x_1058_, 1, v___x_1034_);
v___x_1059_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__12, &l_Lasm_UI_instReprListener_repr___redArg___closed__12_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__12);
v___x_1060_ = l_Bool_repr___redArg(v_preventDefault_1032_);
v___x_1061_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1059_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
v___x_1062_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
lean_ctor_set_uint8(v___x_1062_, sizeof(void*)*1, v___x_1040_);
v___x_1063_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1058_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
lean_ctor_set(v___x_1064_, 1, v___x_1043_);
v___x_1065_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
lean_ctor_set(v___x_1065_, 1, v___x_1045_);
v___x_1066_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__14));
v___x_1067_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1067_);
lean_ctor_set(v___x_1068_, 1, v___x_1034_);
v___x_1069_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__15, &l_Lasm_UI_instReprListener_repr___redArg___closed__15_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__15);
v___x_1070_ = l_Bool_repr___redArg(v_stopPropagation_1033_);
v___x_1071_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1069_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
lean_ctor_set_uint8(v___x_1072_, sizeof(void*)*1, v___x_1040_);
v___x_1073_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1068_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = lean_obj_once(&l_Lasm_UI_instReprListener_repr___redArg___closed__18, &l_Lasm_UI_instReprListener_repr___redArg___closed__18_once, _init_l_Lasm_UI_instReprListener_repr___redArg___closed__18);
v___x_1075_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__19));
v___x_1076_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
lean_ctor_set(v___x_1076_, 1, v___x_1073_);
v___x_1077_ = ((lean_object*)(l_Lasm_UI_instReprListener_repr___redArg___closed__20));
v___x_1078_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1076_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1074_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
lean_ctor_set_uint8(v___x_1080_, sizeof(void*)*1, v___x_1040_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr(lean_object* v_x_1081_, lean_object* v_prec_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lasm_UI_instReprListener_repr___redArg(v_x_1081_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprListener_repr___boxed(lean_object* v_x_1084_, lean_object* v_prec_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lasm_UI_instReprListener_repr(v_x_1084_, v_prec_1085_);
lean_dec(v_prec_1085_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0(lean_object* v_a_1087_, lean_object* v_n_1088_){
_start:
{
lean_object* v___x_1089_; 
v___x_1089_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_a_1087_);
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___boxed(lean_object* v_a_1090_, lean_object* v_n_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0(v_a_1090_, v_n_1091_);
lean_dec(v_n_1091_);
return v_res_1092_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(uint64_t v_x_1101_, lean_object* v_x_1102_){
_start:
{
if (lean_obj_tag(v_x_1102_) == 0)
{
return v_x_1101_;
}
else
{
lean_object* v_head_1103_; lean_object* v_tail_1104_; uint64_t v___x_1105_; uint64_t v___x_1106_; 
v_head_1103_ = lean_ctor_get(v_x_1102_, 0);
v_tail_1104_ = lean_ctor_get(v_x_1102_, 1);
v___x_1105_ = lean_string_hash(v_head_1103_);
v___x_1106_ = lean_uint64_mix_hash(v_x_1101_, v___x_1105_);
v_x_1101_ = v___x_1106_;
v_x_1102_ = v_tail_1104_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0___boxed(lean_object* v_x_1108_, lean_object* v_x_1109_){
_start:
{
uint64_t v_x_131__boxed_1110_; uint64_t v_res_1111_; lean_object* v_r_1112_; 
v_x_131__boxed_1110_ = lean_unbox_uint64(v_x_1108_);
lean_dec_ref(v_x_1108_);
v_res_1111_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(v_x_131__boxed_1110_, v_x_1109_);
lean_dec(v_x_1109_);
v_r_1112_ = lean_box_uint64(v_res_1111_);
return v_r_1112_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(uint64_t v_x_1113_, lean_object* v_x_1114_){
_start:
{
if (lean_obj_tag(v_x_1114_) == 0)
{
return v_x_1113_;
}
else
{
lean_object* v_head_1115_; lean_object* v_tail_1116_; uint64_t v___x_1117_; uint64_t v___x_1118_; uint64_t v___x_1119_; 
v_head_1115_ = lean_ctor_get(v_x_1114_, 0);
v_tail_1116_ = lean_ctor_get(v_x_1114_, 1);
v___x_1117_ = 7ULL;
v___x_1118_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__0(v___x_1117_, v_head_1115_);
v___x_1119_ = lean_uint64_mix_hash(v_x_1113_, v___x_1118_);
v_x_1113_ = v___x_1119_;
v_x_1114_ = v_tail_1116_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1___boxed(lean_object* v_x_1121_, lean_object* v_x_1122_){
_start:
{
uint64_t v_x_147__boxed_1123_; uint64_t v_res_1124_; lean_object* v_r_1125_; 
v_x_147__boxed_1123_ = lean_unbox_uint64(v_x_1121_);
lean_dec_ref(v_x_1121_);
v_res_1124_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v_x_147__boxed_1123_, v_x_1122_);
lean_dec(v_x_1122_);
v_r_1125_ = lean_box_uint64(v_res_1124_);
return v_r_1125_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableListener_hash(lean_object* v_x_1126_){
_start:
{
lean_object* v_event_1127_; lean_object* v_paths_1128_; uint8_t v_preventDefault_1129_; uint8_t v_stopPropagation_1130_; uint64_t v___x_1131_; uint64_t v___x_1132_; uint64_t v___x_1133_; uint64_t v___x_1134_; uint64_t v___x_1135_; uint64_t v___x_1136_; uint64_t v___y_1138_; 
v_event_1127_ = lean_ctor_get(v_x_1126_, 0);
v_paths_1128_ = lean_ctor_get(v_x_1126_, 1);
v_preventDefault_1129_ = lean_ctor_get_uint8(v_x_1126_, sizeof(void*)*2);
v_stopPropagation_1130_ = lean_ctor_get_uint8(v_x_1126_, sizeof(void*)*2 + 1);
v___x_1131_ = 0ULL;
v___x_1132_ = lean_string_hash(v_event_1127_);
v___x_1133_ = lean_uint64_mix_hash(v___x_1131_, v___x_1132_);
v___x_1134_ = 7ULL;
v___x_1135_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_1134_, v_paths_1128_);
v___x_1136_ = lean_uint64_mix_hash(v___x_1133_, v___x_1135_);
if (v_preventDefault_1129_ == 0)
{
uint64_t v___x_1144_; 
v___x_1144_ = 13ULL;
v___y_1138_ = v___x_1144_;
goto v___jp_1137_;
}
else
{
uint64_t v___x_1145_; 
v___x_1145_ = 11ULL;
v___y_1138_ = v___x_1145_;
goto v___jp_1137_;
}
v___jp_1137_:
{
uint64_t v___x_1139_; 
v___x_1139_ = lean_uint64_mix_hash(v___x_1136_, v___y_1138_);
if (v_stopPropagation_1130_ == 0)
{
uint64_t v___x_1140_; uint64_t v___x_1141_; 
v___x_1140_ = 13ULL;
v___x_1141_ = lean_uint64_mix_hash(v___x_1139_, v___x_1140_);
return v___x_1141_;
}
else
{
uint64_t v___x_1142_; uint64_t v___x_1143_; 
v___x_1142_ = 11ULL;
v___x_1143_ = lean_uint64_mix_hash(v___x_1139_, v___x_1142_);
return v___x_1143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableListener_hash___boxed(lean_object* v_x_1146_){
_start:
{
uint64_t v_res_1147_; lean_object* v_r_1148_; 
v_res_1147_ = l_Lasm_UI_instHashableListener_hash(v_x_1146_);
lean_dec_ref(v_x_1146_);
v_r_1148_ = lean_box_uint64(v_res_1147_);
return v_r_1148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___redArg(lean_object* v_x_1151_){
_start:
{
switch(lean_obj_tag(v_x_1151_))
{
case 0:
{
lean_object* v___x_1152_; 
v___x_1152_ = lean_unsigned_to_nat(0u);
return v___x_1152_;
}
case 1:
{
lean_object* v___x_1153_; 
v___x_1153_ = lean_unsigned_to_nat(1u);
return v___x_1153_;
}
case 2:
{
lean_object* v___x_1154_; 
v___x_1154_ = lean_unsigned_to_nat(2u);
return v___x_1154_;
}
default: 
{
lean_object* v___x_1155_; 
v___x_1155_ = lean_unsigned_to_nat(3u);
return v___x_1155_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___redArg___boxed(lean_object* v_x_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lasm_UI_Attr_ctorIdx___redArg(v_x_1156_);
lean_dec_ref(v_x_1156_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx(lean_object* v_Msg_1158_, lean_object* v_x_1159_){
_start:
{
lean_object* v___x_1160_; 
v___x_1160_ = l_Lasm_UI_Attr_ctorIdx___redArg(v_x_1159_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorIdx___boxed(lean_object* v_Msg_1161_, lean_object* v_x_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_Lasm_UI_Attr_ctorIdx(v_Msg_1161_, v_x_1162_);
lean_dec_ref(v_x_1162_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim___redArg(lean_object* v_t_1164_, lean_object* v_k_1165_){
_start:
{
lean_object* v_name_1166_; lean_object* v_value_1167_; lean_object* v___x_1168_; 
v_name_1166_ = lean_ctor_get(v_t_1164_, 0);
lean_inc_ref(v_name_1166_);
v_value_1167_ = lean_ctor_get(v_t_1164_, 1);
lean_inc_ref(v_value_1167_);
lean_dec_ref(v_t_1164_);
v___x_1168_ = lean_apply_2(v_k_1165_, v_name_1166_, v_value_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim(lean_object* v_Msg_1169_, lean_object* v_motive_1170_, lean_object* v_ctorIdx_1171_, lean_object* v_t_1172_, lean_object* v_h_1173_, lean_object* v_k_1174_){
_start:
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1172_, v_k_1174_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_ctorElim___boxed(lean_object* v_Msg_1176_, lean_object* v_motive_1177_, lean_object* v_ctorIdx_1178_, lean_object* v_t_1179_, lean_object* v_h_1180_, lean_object* v_k_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_Lasm_UI_Attr_ctorElim(v_Msg_1176_, v_motive_1177_, v_ctorIdx_1178_, v_t_1179_, v_h_1180_, v_k_1181_);
lean_dec(v_ctorIdx_1178_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_attr_elim___redArg(lean_object* v_t_1183_, lean_object* v_attr_1184_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1183_, v_attr_1184_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_attr_elim(lean_object* v_Msg_1186_, lean_object* v_motive_1187_, lean_object* v_t_1188_, lean_object* v_h_1189_, lean_object* v_attr_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1188_, v_attr_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_prop_elim___redArg(lean_object* v_t_1192_, lean_object* v_prop_1193_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1192_, v_prop_1193_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_prop_elim(lean_object* v_Msg_1195_, lean_object* v_motive_1196_, lean_object* v_t_1197_, lean_object* v_h_1198_, lean_object* v_prop_1199_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1197_, v_prop_1199_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_style_elim___redArg(lean_object* v_t_1201_, lean_object* v_style_1202_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1201_, v_style_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_style_elim(lean_object* v_Msg_1204_, lean_object* v_motive_1205_, lean_object* v_t_1206_, lean_object* v_h_1207_, lean_object* v_style_1208_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1206_, v_style_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_on_elim___redArg(lean_object* v_t_1210_, lean_object* v_on_1211_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1210_, v_on_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_on_elim(lean_object* v_Msg_1213_, lean_object* v_motive_1214_, lean_object* v_t_1215_, lean_object* v_h_1216_, lean_object* v_on_1217_){
_start:
{
lean_object* v___x_1218_; 
v___x_1218_ = l_Lasm_UI_Attr_ctorElim___redArg(v_t_1215_, v_on_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr___redArg(){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = ((lean_object*)(l_Lasm_UI_instInhabitedAttr___redArg___closed__0));
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr___redArg___boxed(lean_object* v___dummy_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lasm_UI_instInhabitedAttr___redArg();
return v_res_1224_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedAttr___closed__0(void){
_start:
{
lean_object* v___x_1225_; 
v___x_1225_ = l_Lasm_UI_instInhabitedAttr___redArg();
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttr(lean_object* v_Msg_1226_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = lean_obj_once(&l_Lasm_UI_instInhabitedAttr___closed__0, &l_Lasm_UI_instInhabitedAttr___closed__0_once, _init_l_Lasm_UI_instInhabitedAttr___closed__0);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx(lean_object* v_x_1228_){
_start:
{
switch(lean_obj_tag(v_x_1228_))
{
case 0:
{
lean_object* v___x_1229_; 
v___x_1229_ = lean_unsigned_to_nat(0u);
return v___x_1229_;
}
case 1:
{
lean_object* v___x_1230_; 
v___x_1230_ = lean_unsigned_to_nat(1u);
return v___x_1230_;
}
case 2:
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_unsigned_to_nat(2u);
return v___x_1231_;
}
default: 
{
lean_object* v___x_1232_; 
v___x_1232_ = lean_unsigned_to_nat(3u);
return v___x_1232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorIdx___boxed(lean_object* v_x_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_Lasm_UI_AttrKey_ctorIdx(v_x_1233_);
lean_dec_ref(v_x_1233_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim___redArg(lean_object* v_t_1235_, lean_object* v_k_1236_){
_start:
{
lean_object* v_name_1237_; lean_object* v___x_1238_; 
v_name_1237_ = lean_ctor_get(v_t_1235_, 0);
lean_inc_ref(v_name_1237_);
lean_dec_ref(v_t_1235_);
v___x_1238_ = lean_apply_1(v_k_1236_, v_name_1237_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim(lean_object* v_motive_1239_, lean_object* v_ctorIdx_1240_, lean_object* v_t_1241_, lean_object* v_h_1242_, lean_object* v_k_1243_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1241_, v_k_1243_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_ctorElim___boxed(lean_object* v_motive_1245_, lean_object* v_ctorIdx_1246_, lean_object* v_t_1247_, lean_object* v_h_1248_, lean_object* v_k_1249_){
_start:
{
lean_object* v_res_1250_; 
v_res_1250_ = l_Lasm_UI_AttrKey_ctorElim(v_motive_1245_, v_ctorIdx_1246_, v_t_1247_, v_h_1248_, v_k_1249_);
lean_dec(v_ctorIdx_1246_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_attr_elim___redArg(lean_object* v_t_1251_, lean_object* v_attr_1252_){
_start:
{
lean_object* v___x_1253_; 
v___x_1253_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1251_, v_attr_1252_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_attr_elim(lean_object* v_motive_1254_, lean_object* v_t_1255_, lean_object* v_h_1256_, lean_object* v_attr_1257_){
_start:
{
lean_object* v___x_1258_; 
v___x_1258_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1255_, v_attr_1257_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_prop_elim___redArg(lean_object* v_t_1259_, lean_object* v_prop_1260_){
_start:
{
lean_object* v___x_1261_; 
v___x_1261_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1259_, v_prop_1260_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_prop_elim(lean_object* v_motive_1262_, lean_object* v_t_1263_, lean_object* v_h_1264_, lean_object* v_prop_1265_){
_start:
{
lean_object* v___x_1266_; 
v___x_1266_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1263_, v_prop_1265_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_style_elim___redArg(lean_object* v_t_1267_, lean_object* v_style_1268_){
_start:
{
lean_object* v___x_1269_; 
v___x_1269_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1267_, v_style_1268_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_style_elim(lean_object* v_motive_1270_, lean_object* v_t_1271_, lean_object* v_h_1272_, lean_object* v_style_1273_){
_start:
{
lean_object* v___x_1274_; 
v___x_1274_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1271_, v_style_1273_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_on_elim___redArg(lean_object* v_t_1275_, lean_object* v_on_1276_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1275_, v_on_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrKey_on_elim(lean_object* v_motive_1278_, lean_object* v_t_1279_, lean_object* v_h_1280_, lean_object* v_on_1281_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lasm_UI_AttrKey_ctorElim___redArg(v_t_1279_, v_on_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrKey_decEq(lean_object* v_x_1283_, lean_object* v_x_1284_){
_start:
{
switch(lean_obj_tag(v_x_1283_))
{
case 0:
{
if (lean_obj_tag(v_x_1284_) == 0)
{
lean_object* v_name_1285_; lean_object* v_name_1286_; uint8_t v___x_1287_; 
v_name_1285_ = lean_ctor_get(v_x_1283_, 0);
v_name_1286_ = lean_ctor_get(v_x_1284_, 0);
v___x_1287_ = lean_string_dec_eq(v_name_1285_, v_name_1286_);
return v___x_1287_;
}
else
{
uint8_t v___x_1288_; 
v___x_1288_ = 0;
return v___x_1288_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1284_) == 1)
{
lean_object* v_name_1289_; lean_object* v_name_1290_; uint8_t v___x_1291_; 
v_name_1289_ = lean_ctor_get(v_x_1283_, 0);
v_name_1290_ = lean_ctor_get(v_x_1284_, 0);
v___x_1291_ = lean_string_dec_eq(v_name_1289_, v_name_1290_);
return v___x_1291_;
}
else
{
uint8_t v___x_1292_; 
v___x_1292_ = 0;
return v___x_1292_;
}
}
case 2:
{
if (lean_obj_tag(v_x_1284_) == 2)
{
lean_object* v_name_1293_; lean_object* v_name_1294_; uint8_t v___x_1295_; 
v_name_1293_ = lean_ctor_get(v_x_1283_, 0);
v_name_1294_ = lean_ctor_get(v_x_1284_, 0);
v___x_1295_ = lean_string_dec_eq(v_name_1293_, v_name_1294_);
return v___x_1295_;
}
else
{
uint8_t v___x_1296_; 
v___x_1296_ = 0;
return v___x_1296_;
}
}
default: 
{
if (lean_obj_tag(v_x_1284_) == 3)
{
lean_object* v_event_1297_; lean_object* v_event_1298_; uint8_t v___x_1299_; 
v_event_1297_ = lean_ctor_get(v_x_1283_, 0);
v_event_1298_ = lean_ctor_get(v_x_1284_, 0);
v___x_1299_ = lean_string_dec_eq(v_event_1297_, v_event_1298_);
return v___x_1299_;
}
else
{
uint8_t v___x_1300_; 
v___x_1300_ = 0;
return v___x_1300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrKey_decEq___boxed(lean_object* v_x_1301_, lean_object* v_x_1302_){
_start:
{
uint8_t v_res_1303_; lean_object* v_r_1304_; 
v_res_1303_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_x_1301_, v_x_1302_);
lean_dec_ref(v_x_1302_);
lean_dec_ref(v_x_1301_);
v_r_1304_ = lean_box(v_res_1303_);
return v_r_1304_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrKey(lean_object* v_x_1305_, lean_object* v_x_1306_){
_start:
{
uint8_t v___x_1307_; 
v___x_1307_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_x_1305_, v_x_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrKey___boxed(lean_object* v_x_1308_, lean_object* v_x_1309_){
_start:
{
uint8_t v_res_1310_; lean_object* v_r_1311_; 
v_res_1310_ = l_Lasm_UI_instDecidableEqAttrKey(v_x_1308_, v_x_1309_);
lean_dec_ref(v_x_1309_);
lean_dec_ref(v_x_1308_);
v_r_1311_ = lean_box(v_res_1310_);
return v_r_1311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrKey_repr(lean_object* v_x_1336_, lean_object* v_prec_1337_){
_start:
{
switch(lean_obj_tag(v_x_1336_))
{
case 0:
{
lean_object* v_name_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1358_; 
v_name_1338_ = lean_ctor_get(v_x_1336_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1340_ = v_x_1336_;
v_isShared_1341_ = v_isSharedCheck_1358_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_name_1338_);
lean_dec(v_x_1336_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1358_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___y_1343_; lean_object* v___x_1354_; uint8_t v___x_1355_; 
v___x_1354_ = lean_unsigned_to_nat(1024u);
v___x_1355_ = lean_nat_dec_le(v___x_1354_, v_prec_1337_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
v___x_1356_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1343_ = v___x_1356_;
goto v___jp_1342_;
}
else
{
lean_object* v___x_1357_; 
v___x_1357_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1343_ = v___x_1357_;
goto v___jp_1342_;
}
v___jp_1342_:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1347_; 
v___x_1344_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__2));
v___x_1345_ = l_String_quote(v_name_1338_);
if (v_isShared_1341_ == 0)
{
lean_ctor_set_tag(v___x_1340_, 3);
lean_ctor_set(v___x_1340_, 0, v___x_1345_);
v___x_1347_ = v___x_1340_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1345_);
v___x_1347_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; uint8_t v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1348_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1344_);
lean_ctor_set(v___x_1348_, 1, v___x_1347_);
lean_inc(v___y_1343_);
v___x_1349_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___y_1343_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = 0;
v___x_1351_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1351_, 0, v___x_1349_);
lean_ctor_set_uint8(v___x_1351_, sizeof(void*)*1, v___x_1350_);
v___x_1352_ = l_Repr_addAppParen(v___x_1351_, v_prec_1337_);
return v___x_1352_;
}
}
}
}
case 1:
{
lean_object* v_name_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1379_; 
v_name_1359_ = lean_ctor_get(v_x_1336_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1361_ = v_x_1336_;
v_isShared_1362_ = v_isSharedCheck_1379_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_name_1359_);
lean_dec(v_x_1336_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1379_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___y_1364_; lean_object* v___x_1375_; uint8_t v___x_1376_; 
v___x_1375_ = lean_unsigned_to_nat(1024u);
v___x_1376_ = lean_nat_dec_le(v___x_1375_, v_prec_1337_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1364_ = v___x_1377_;
goto v___jp_1363_;
}
else
{
lean_object* v___x_1378_; 
v___x_1378_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1364_ = v___x_1378_;
goto v___jp_1363_;
}
v___jp_1363_:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1368_; 
v___x_1365_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__5));
v___x_1366_ = l_String_quote(v_name_1359_);
if (v_isShared_1362_ == 0)
{
lean_ctor_set_tag(v___x_1361_, 3);
lean_ctor_set(v___x_1361_, 0, v___x_1366_);
v___x_1368_ = v___x_1361_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v___x_1366_);
v___x_1368_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; uint8_t v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1369_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1365_);
lean_ctor_set(v___x_1369_, 1, v___x_1368_);
lean_inc(v___y_1364_);
v___x_1370_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___y_1364_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
v___x_1371_ = 0;
v___x_1372_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1372_, 0, v___x_1370_);
lean_ctor_set_uint8(v___x_1372_, sizeof(void*)*1, v___x_1371_);
v___x_1373_ = l_Repr_addAppParen(v___x_1372_, v_prec_1337_);
return v___x_1373_;
}
}
}
}
case 2:
{
lean_object* v_name_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1400_; 
v_name_1380_ = lean_ctor_get(v_x_1336_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1382_ = v_x_1336_;
v_isShared_1383_ = v_isSharedCheck_1400_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_name_1380_);
lean_dec(v_x_1336_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1400_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___y_1385_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___x_1396_ = lean_unsigned_to_nat(1024u);
v___x_1397_ = lean_nat_dec_le(v___x_1396_, v_prec_1337_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; 
v___x_1398_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1385_ = v___x_1398_;
goto v___jp_1384_;
}
else
{
lean_object* v___x_1399_; 
v___x_1399_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1385_ = v___x_1399_;
goto v___jp_1384_;
}
v___jp_1384_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1389_; 
v___x_1386_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__8));
v___x_1387_ = l_String_quote(v_name_1380_);
if (v_isShared_1383_ == 0)
{
lean_ctor_set_tag(v___x_1382_, 3);
lean_ctor_set(v___x_1382_, 0, v___x_1387_);
v___x_1389_ = v___x_1382_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1387_);
v___x_1389_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; uint8_t v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1390_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1386_);
lean_ctor_set(v___x_1390_, 1, v___x_1389_);
lean_inc(v___y_1385_);
v___x_1391_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1391_, 0, v___y_1385_);
lean_ctor_set(v___x_1391_, 1, v___x_1390_);
v___x_1392_ = 0;
v___x_1393_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1393_, 0, v___x_1391_);
lean_ctor_set_uint8(v___x_1393_, sizeof(void*)*1, v___x_1392_);
v___x_1394_ = l_Repr_addAppParen(v___x_1393_, v_prec_1337_);
return v___x_1394_;
}
}
}
}
default: 
{
lean_object* v_event_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1421_; 
v_event_1401_ = lean_ctor_get(v_x_1336_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1403_ = v_x_1336_;
v_isShared_1404_ = v_isSharedCheck_1421_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_event_1401_);
lean_dec(v_x_1336_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1421_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___y_1406_; lean_object* v___x_1417_; uint8_t v___x_1418_; 
v___x_1417_ = lean_unsigned_to_nat(1024u);
v___x_1418_ = lean_nat_dec_le(v___x_1417_, v_prec_1337_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; 
v___x_1419_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1406_ = v___x_1419_;
goto v___jp_1405_;
}
else
{
lean_object* v___x_1420_; 
v___x_1420_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1406_ = v___x_1420_;
goto v___jp_1405_;
}
v___jp_1405_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1410_; 
v___x_1407_ = ((lean_object*)(l_Lasm_UI_instReprAttrKey_repr___closed__11));
v___x_1408_ = l_String_quote(v_event_1401_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 0, v___x_1408_);
v___x_1410_ = v___x_1403_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v___x_1408_);
v___x_1410_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; uint8_t v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1411_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1407_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
lean_inc(v___y_1406_);
v___x_1412_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1412_, 0, v___y_1406_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
v___x_1413_ = 0;
v___x_1414_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1414_, 0, v___x_1412_);
lean_ctor_set_uint8(v___x_1414_, sizeof(void*)*1, v___x_1413_);
v___x_1415_ = l_Repr_addAppParen(v___x_1414_, v_prec_1337_);
return v___x_1415_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrKey_repr___boxed(lean_object* v_x_1422_, lean_object* v_prec_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l_Lasm_UI_instReprAttrKey_repr(v_x_1422_, v_prec_1423_);
lean_dec(v_prec_1423_);
return v_res_1424_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableAttrKey_hash(lean_object* v_x_1431_){
_start:
{
switch(lean_obj_tag(v_x_1431_))
{
case 0:
{
lean_object* v_name_1432_; uint64_t v___x_1433_; uint64_t v___x_1434_; uint64_t v___x_1435_; 
v_name_1432_ = lean_ctor_get(v_x_1431_, 0);
v___x_1433_ = 0ULL;
v___x_1434_ = lean_string_hash(v_name_1432_);
v___x_1435_ = lean_uint64_mix_hash(v___x_1433_, v___x_1434_);
return v___x_1435_;
}
case 1:
{
lean_object* v_name_1436_; uint64_t v___x_1437_; uint64_t v___x_1438_; uint64_t v___x_1439_; 
v_name_1436_ = lean_ctor_get(v_x_1431_, 0);
v___x_1437_ = 1ULL;
v___x_1438_ = lean_string_hash(v_name_1436_);
v___x_1439_ = lean_uint64_mix_hash(v___x_1437_, v___x_1438_);
return v___x_1439_;
}
case 2:
{
lean_object* v_name_1440_; uint64_t v___x_1441_; uint64_t v___x_1442_; uint64_t v___x_1443_; 
v_name_1440_ = lean_ctor_get(v_x_1431_, 0);
v___x_1441_ = 2ULL;
v___x_1442_ = lean_string_hash(v_name_1440_);
v___x_1443_ = lean_uint64_mix_hash(v___x_1441_, v___x_1442_);
return v___x_1443_;
}
default: 
{
lean_object* v_event_1444_; uint64_t v___x_1445_; uint64_t v___x_1446_; uint64_t v___x_1447_; 
v_event_1444_ = lean_ctor_get(v_x_1431_, 0);
v___x_1445_ = 3ULL;
v___x_1446_ = lean_string_hash(v_event_1444_);
v___x_1447_ = lean_uint64_mix_hash(v___x_1445_, v___x_1446_);
return v___x_1447_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableAttrKey_hash___boxed(lean_object* v_x_1448_){
_start:
{
uint64_t v_res_1449_; lean_object* v_r_1450_; 
v_res_1449_ = l_Lasm_UI_instHashableAttrKey_hash(v_x_1448_);
lean_dec_ref(v_x_1448_);
v_r_1450_ = lean_box_uint64(v_res_1449_);
return v_r_1450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx(lean_object* v_x_1453_){
_start:
{
switch(lean_obj_tag(v_x_1453_))
{
case 0:
{
lean_object* v___x_1454_; 
v___x_1454_ = lean_unsigned_to_nat(0u);
return v___x_1454_;
}
case 1:
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_unsigned_to_nat(1u);
return v___x_1455_;
}
default: 
{
lean_object* v___x_1456_; 
v___x_1456_ = lean_unsigned_to_nat(2u);
return v___x_1456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorIdx___boxed(lean_object* v_x_1457_){
_start:
{
lean_object* v_res_1458_; 
v_res_1458_ = l_Lasm_UI_AttrVal_ctorIdx(v_x_1457_);
lean_dec_ref(v_x_1457_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim___redArg(lean_object* v_t_1459_, lean_object* v_k_1460_){
_start:
{
lean_object* v_s_1461_; lean_object* v___x_1462_; 
v_s_1461_ = lean_ctor_get(v_t_1459_, 0);
lean_inc_ref(v_s_1461_);
lean_dec_ref(v_t_1459_);
v___x_1462_ = lean_apply_1(v_k_1460_, v_s_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim(lean_object* v_motive_1463_, lean_object* v_ctorIdx_1464_, lean_object* v_t_1465_, lean_object* v_h_1466_, lean_object* v_k_1467_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1465_, v_k_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_ctorElim___boxed(lean_object* v_motive_1469_, lean_object* v_ctorIdx_1470_, lean_object* v_t_1471_, lean_object* v_h_1472_, lean_object* v_k_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l_Lasm_UI_AttrVal_ctorElim(v_motive_1469_, v_ctorIdx_1470_, v_t_1471_, v_h_1472_, v_k_1473_);
lean_dec(v_ctorIdx_1470_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_str_elim___redArg(lean_object* v_t_1475_, lean_object* v_str_1476_){
_start:
{
lean_object* v___x_1477_; 
v___x_1477_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1475_, v_str_1476_);
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_str_elim(lean_object* v_motive_1478_, lean_object* v_t_1479_, lean_object* v_h_1480_, lean_object* v_str_1481_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1479_, v_str_1481_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_prop_elim___redArg(lean_object* v_t_1483_, lean_object* v_prop_1484_){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1483_, v_prop_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_prop_elim(lean_object* v_motive_1486_, lean_object* v_t_1487_, lean_object* v_h_1488_, lean_object* v_prop_1489_){
_start:
{
lean_object* v___x_1490_; 
v___x_1490_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1487_, v_prop_1489_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_listener_elim___redArg(lean_object* v_t_1491_, lean_object* v_listener_1492_){
_start:
{
lean_object* v___x_1493_; 
v___x_1493_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1491_, v_listener_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrVal_listener_elim(lean_object* v_motive_1494_, lean_object* v_t_1495_, lean_object* v_h_1496_, lean_object* v_listener_1497_){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lasm_UI_AttrVal_ctorElim___redArg(v_t_1495_, v_listener_1497_);
return v___x_1498_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrVal_decEq(lean_object* v_x_1499_, lean_object* v_x_1500_){
_start:
{
switch(lean_obj_tag(v_x_1499_))
{
case 0:
{
if (lean_obj_tag(v_x_1500_) == 0)
{
lean_object* v_s_1501_; lean_object* v_s_1502_; uint8_t v___x_1503_; 
v_s_1501_ = lean_ctor_get(v_x_1499_, 0);
lean_inc_ref(v_s_1501_);
lean_dec_ref_known(v_x_1499_, 1);
v_s_1502_ = lean_ctor_get(v_x_1500_, 0);
lean_inc_ref(v_s_1502_);
lean_dec_ref_known(v_x_1500_, 1);
v___x_1503_ = lean_string_dec_eq(v_s_1501_, v_s_1502_);
lean_dec_ref(v_s_1502_);
lean_dec_ref(v_s_1501_);
return v___x_1503_;
}
else
{
uint8_t v___x_1504_; 
lean_dec_ref_known(v_x_1499_, 1);
lean_dec_ref(v_x_1500_);
v___x_1504_ = 0;
return v___x_1504_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1500_) == 1)
{
lean_object* v_v_1505_; lean_object* v_v_1506_; uint8_t v___x_1507_; 
v_v_1505_ = lean_ctor_get(v_x_1499_, 0);
lean_inc_ref(v_v_1505_);
lean_dec_ref_known(v_x_1499_, 1);
v_v_1506_ = lean_ctor_get(v_x_1500_, 0);
lean_inc_ref(v_v_1506_);
lean_dec_ref_known(v_x_1500_, 1);
v___x_1507_ = l_Lasm_UI_instDecidableEqPropVal_decEq(v_v_1505_, v_v_1506_);
lean_dec_ref(v_v_1506_);
lean_dec_ref(v_v_1505_);
return v___x_1507_;
}
else
{
uint8_t v___x_1508_; 
lean_dec_ref_known(v_x_1499_, 1);
lean_dec_ref(v_x_1500_);
v___x_1508_ = 0;
return v___x_1508_;
}
}
default: 
{
if (lean_obj_tag(v_x_1500_) == 2)
{
lean_object* v_l_1509_; lean_object* v_l_1510_; uint8_t v___x_1511_; 
v_l_1509_ = lean_ctor_get(v_x_1499_, 0);
lean_inc_ref(v_l_1509_);
lean_dec_ref_known(v_x_1499_, 1);
v_l_1510_ = lean_ctor_get(v_x_1500_, 0);
lean_inc_ref(v_l_1510_);
lean_dec_ref_known(v_x_1500_, 1);
v___x_1511_ = l_Lasm_UI_instDecidableEqListener_decEq(v_l_1509_, v_l_1510_);
return v___x_1511_;
}
else
{
uint8_t v___x_1512_; 
lean_dec_ref_known(v_x_1499_, 1);
lean_dec_ref(v_x_1500_);
v___x_1512_ = 0;
return v___x_1512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrVal_decEq___boxed(lean_object* v_x_1513_, lean_object* v_x_1514_){
_start:
{
uint8_t v_res_1515_; lean_object* v_r_1516_; 
v_res_1515_ = l_Lasm_UI_instDecidableEqAttrVal_decEq(v_x_1513_, v_x_1514_);
v_r_1516_ = lean_box(v_res_1515_);
return v_r_1516_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrVal(lean_object* v_x_1517_, lean_object* v_x_1518_){
_start:
{
uint8_t v___x_1519_; 
v___x_1519_ = l_Lasm_UI_instDecidableEqAttrVal_decEq(v_x_1517_, v_x_1518_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrVal___boxed(lean_object* v_x_1520_, lean_object* v_x_1521_){
_start:
{
uint8_t v_res_1522_; lean_object* v_r_1523_; 
v_res_1522_ = l_Lasm_UI_instDecidableEqAttrVal(v_x_1520_, v_x_1521_);
v_r_1523_ = lean_box(v_res_1522_);
return v_r_1523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrVal_repr(lean_object* v_x_1542_, lean_object* v_prec_1543_){
_start:
{
switch(lean_obj_tag(v_x_1542_))
{
case 0:
{
lean_object* v_s_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1564_; 
v_s_1544_ = lean_ctor_get(v_x_1542_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v_x_1542_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1546_ = v_x_1542_;
v_isShared_1547_ = v_isSharedCheck_1564_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_s_1544_);
lean_dec(v_x_1542_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1564_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___y_1549_; lean_object* v___x_1560_; uint8_t v___x_1561_; 
v___x_1560_ = lean_unsigned_to_nat(1024u);
v___x_1561_ = lean_nat_dec_le(v___x_1560_, v_prec_1543_);
if (v___x_1561_ == 0)
{
lean_object* v___x_1562_; 
v___x_1562_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1549_ = v___x_1562_;
goto v___jp_1548_;
}
else
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1549_ = v___x_1563_;
goto v___jp_1548_;
}
v___jp_1548_:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1550_ = ((lean_object*)(l_Lasm_UI_instReprAttrVal_repr___closed__2));
v___x_1551_ = l_String_quote(v_s_1544_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set_tag(v___x_1546_, 3);
lean_ctor_set(v___x_1546_, 0, v___x_1551_);
v___x_1553_ = v___x_1546_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v___x_1551_);
v___x_1553_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; uint8_t v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1554_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1550_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
lean_inc(v___y_1549_);
v___x_1555_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1555_, 0, v___y_1549_);
lean_ctor_set(v___x_1555_, 1, v___x_1554_);
v___x_1556_ = 0;
v___x_1557_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1557_, 0, v___x_1555_);
lean_ctor_set_uint8(v___x_1557_, sizeof(void*)*1, v___x_1556_);
v___x_1558_ = l_Repr_addAppParen(v___x_1557_, v_prec_1543_);
return v___x_1558_;
}
}
}
}
case 1:
{
lean_object* v_v_1565_; lean_object* v___y_1567_; lean_object* v___x_1576_; uint8_t v___x_1577_; 
v_v_1565_ = lean_ctor_get(v_x_1542_, 0);
lean_inc_ref(v_v_1565_);
lean_dec_ref_known(v_x_1542_, 1);
v___x_1576_ = lean_unsigned_to_nat(1024u);
v___x_1577_ = lean_nat_dec_le(v___x_1576_, v_prec_1543_);
if (v___x_1577_ == 0)
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1567_ = v___x_1578_;
goto v___jp_1566_;
}
else
{
lean_object* v___x_1579_; 
v___x_1579_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1567_ = v___x_1579_;
goto v___jp_1566_;
}
v___jp_1566_:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; uint8_t v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1568_ = ((lean_object*)(l_Lasm_UI_instReprAttrVal_repr___closed__5));
v___x_1569_ = lean_unsigned_to_nat(1024u);
v___x_1570_ = l_Lasm_UI_instReprPropVal_repr(v_v_1565_, v___x_1569_);
v___x_1571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1568_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
lean_inc(v___y_1567_);
v___x_1572_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___y_1567_);
lean_ctor_set(v___x_1572_, 1, v___x_1571_);
v___x_1573_ = 0;
v___x_1574_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1574_, 0, v___x_1572_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*1, v___x_1573_);
v___x_1575_ = l_Repr_addAppParen(v___x_1574_, v_prec_1543_);
return v___x_1575_;
}
}
default: 
{
lean_object* v_l_1580_; lean_object* v___y_1582_; lean_object* v___x_1590_; uint8_t v___x_1591_; 
v_l_1580_ = lean_ctor_get(v_x_1542_, 0);
lean_inc_ref(v_l_1580_);
lean_dec_ref_known(v_x_1542_, 1);
v___x_1590_ = lean_unsigned_to_nat(1024u);
v___x_1591_ = lean_nat_dec_le(v___x_1590_, v_prec_1543_);
if (v___x_1591_ == 0)
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__6, &l_Lasm_UI_instReprNs_repr___closed__6_once, _init_l_Lasm_UI_instReprNs_repr___closed__6);
v___y_1582_ = v___x_1592_;
goto v___jp_1581_;
}
else
{
lean_object* v___x_1593_; 
v___x_1593_ = lean_obj_once(&l_Lasm_UI_instReprNs_repr___closed__7, &l_Lasm_UI_instReprNs_repr___closed__7_once, _init_l_Lasm_UI_instReprNs_repr___closed__7);
v___y_1582_ = v___x_1593_;
goto v___jp_1581_;
}
v___jp_1581_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; uint8_t v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1583_ = ((lean_object*)(l_Lasm_UI_instReprAttrVal_repr___closed__8));
v___x_1584_ = l_Lasm_UI_instReprListener_repr___redArg(v_l_1580_);
v___x_1585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1583_);
lean_ctor_set(v___x_1585_, 1, v___x_1584_);
lean_inc(v___y_1582_);
v___x_1586_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1586_, 0, v___y_1582_);
lean_ctor_set(v___x_1586_, 1, v___x_1585_);
v___x_1587_ = 0;
v___x_1588_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1588_, 0, v___x_1586_);
lean_ctor_set_uint8(v___x_1588_, sizeof(void*)*1, v___x_1587_);
v___x_1589_ = l_Repr_addAppParen(v___x_1588_, v_prec_1543_);
return v___x_1589_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrVal_repr___boxed(lean_object* v_x_1594_, lean_object* v_prec_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l_Lasm_UI_instReprAttrVal_repr(v_x_1594_, v_prec_1595_);
lean_dec(v_prec_1595_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___redArg(lean_object* v_x_1603_){
_start:
{
switch(lean_obj_tag(v_x_1603_))
{
case 0:
{
lean_object* v_name_1604_; lean_object* v___x_1605_; 
v_name_1604_ = lean_ctor_get(v_x_1603_, 0);
lean_inc_ref(v_name_1604_);
v___x_1605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1605_, 0, v_name_1604_);
return v___x_1605_;
}
case 1:
{
lean_object* v_name_1606_; lean_object* v___x_1607_; 
v_name_1606_ = lean_ctor_get(v_x_1603_, 0);
lean_inc_ref(v_name_1606_);
v___x_1607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1607_, 0, v_name_1606_);
return v___x_1607_;
}
case 2:
{
lean_object* v_name_1608_; lean_object* v___x_1609_; 
v_name_1608_ = lean_ctor_get(v_x_1603_, 0);
lean_inc_ref(v_name_1608_);
v___x_1609_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1609_, 0, v_name_1608_);
return v___x_1609_;
}
default: 
{
lean_object* v_listener_1610_; lean_object* v_event_1611_; lean_object* v___x_1612_; 
v_listener_1610_ = lean_ctor_get(v_x_1603_, 0);
v_event_1611_ = lean_ctor_get(v_listener_1610_, 0);
lean_inc_ref(v_event_1611_);
v___x_1612_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1612_, 0, v_event_1611_);
return v___x_1612_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___redArg___boxed(lean_object* v_x_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l_Lasm_UI_Attr_key___redArg(v_x_1613_);
lean_dec_ref(v_x_1613_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key(lean_object* v_Msg_1615_, lean_object* v_x_1616_){
_start:
{
lean_object* v___x_1617_; 
v___x_1617_ = l_Lasm_UI_Attr_key___redArg(v_x_1616_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_key___boxed(lean_object* v_Msg_1618_, lean_object* v_x_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_Lasm_UI_Attr_key(v_Msg_1618_, v_x_1619_);
lean_dec_ref(v_x_1619_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___redArg(lean_object* v_x_1621_){
_start:
{
switch(lean_obj_tag(v_x_1621_))
{
case 1:
{
lean_object* v_value_1622_; lean_object* v___x_1623_; 
v_value_1622_ = lean_ctor_get(v_x_1621_, 1);
lean_inc_ref(v_value_1622_);
v___x_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1623_, 0, v_value_1622_);
return v___x_1623_;
}
case 3:
{
lean_object* v_listener_1624_; lean_object* v___x_1625_; 
v_listener_1624_ = lean_ctor_get(v_x_1621_, 0);
lean_inc_ref(v_listener_1624_);
v___x_1625_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1625_, 0, v_listener_1624_);
return v___x_1625_;
}
default: 
{
lean_object* v_value_1626_; lean_object* v___x_1627_; 
v_value_1626_ = lean_ctor_get(v_x_1621_, 1);
lean_inc_ref(v_value_1626_);
v___x_1627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1627_, 0, v_value_1626_);
return v___x_1627_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___redArg___boxed(lean_object* v_x_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l_Lasm_UI_Attr_val___redArg(v_x_1628_);
lean_dec_ref(v_x_1628_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val(lean_object* v_Msg_1630_, lean_object* v_x_1631_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Lasm_UI_Attr_val___redArg(v_x_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_val___boxed(lean_object* v_Msg_1633_, lean_object* v_x_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lasm_UI_Attr_val(v_Msg_1633_, v_x_1634_);
lean_dec_ref(v_x_1634_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map___redArg___lam__0(lean_object* v_handle_1636_, lean_object* v_f_1637_, lean_object* v_vs_1638_){
_start:
{
lean_object* v___x_1639_; 
v___x_1639_ = lean_apply_1(v_handle_1636_, v_vs_1638_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v___x_1640_; 
lean_dec(v_f_1637_);
v___x_1640_ = lean_box(0);
return v___x_1640_;
}
else
{
lean_object* v_val_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1649_; 
v_val_1641_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1643_ = v___x_1639_;
v_isShared_1644_ = v_isSharedCheck_1649_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_val_1641_);
lean_dec(v___x_1639_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1649_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1645_; lean_object* v___x_1647_; 
v___x_1645_ = lean_apply_1(v_f_1637_, v_val_1641_);
if (v_isShared_1644_ == 0)
{
lean_ctor_set(v___x_1643_, 0, v___x_1645_);
v___x_1647_ = v___x_1643_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v___x_1645_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map___redArg(lean_object* v_f_1650_, lean_object* v_x_1651_){
_start:
{
switch(lean_obj_tag(v_x_1651_))
{
case 0:
{
lean_object* v_name_1652_; lean_object* v_value_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1660_; 
lean_dec(v_f_1650_);
v_name_1652_ = lean_ctor_get(v_x_1651_, 0);
v_value_1653_ = lean_ctor_get(v_x_1651_, 1);
v_isSharedCheck_1660_ = !lean_is_exclusive(v_x_1651_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1655_ = v_x_1651_;
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_value_1653_);
lean_inc(v_name_1652_);
lean_dec(v_x_1651_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1658_; 
if (v_isShared_1656_ == 0)
{
v___x_1658_ = v___x_1655_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_name_1652_);
lean_ctor_set(v_reuseFailAlloc_1659_, 1, v_value_1653_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
case 1:
{
lean_object* v_name_1661_; lean_object* v_value_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec(v_f_1650_);
v_name_1661_ = lean_ctor_get(v_x_1651_, 0);
v_value_1662_ = lean_ctor_get(v_x_1651_, 1);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_x_1651_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v_x_1651_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_value_1662_);
lean_inc(v_name_1661_);
lean_dec(v_x_1651_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_name_1661_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v_value_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
case 2:
{
lean_object* v_name_1670_; lean_object* v_value_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1678_; 
lean_dec(v_f_1650_);
v_name_1670_ = lean_ctor_get(v_x_1651_, 0);
v_value_1671_ = lean_ctor_get(v_x_1651_, 1);
v_isSharedCheck_1678_ = !lean_is_exclusive(v_x_1651_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1673_ = v_x_1651_;
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_value_1671_);
lean_inc(v_name_1670_);
lean_dec(v_x_1651_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1676_; 
if (v_isShared_1674_ == 0)
{
v___x_1676_ = v___x_1673_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_name_1670_);
lean_ctor_set(v_reuseFailAlloc_1677_, 1, v_value_1671_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
default: 
{
lean_object* v_listener_1679_; lean_object* v_handle_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1688_; 
v_listener_1679_ = lean_ctor_get(v_x_1651_, 0);
v_handle_1680_ = lean_ctor_get(v_x_1651_, 1);
v_isSharedCheck_1688_ = !lean_is_exclusive(v_x_1651_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1682_ = v_x_1651_;
v_isShared_1683_ = v_isSharedCheck_1688_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_handle_1680_);
lean_inc(v_listener_1679_);
lean_dec(v_x_1651_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1688_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___f_1684_; lean_object* v___x_1686_; 
v___f_1684_ = lean_alloc_closure((void*)(l_Lasm_UI_Attr_map___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1684_, 0, v_handle_1680_);
lean_closure_set(v___f_1684_, 1, v_f_1650_);
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 1, v___f_1684_);
v___x_1686_ = v___x_1682_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v_listener_1679_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v___f_1684_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_map(lean_object* v_00_u03b1_1689_, lean_object* v_00_u03b2_1690_, lean_object* v_f_1691_, lean_object* v_x_1692_){
_start:
{
lean_object* v___x_1693_; 
v___x_1693_ = l_Lasm_UI_Attr_map___redArg(v_f_1691_, v_x_1692_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___redArg(lean_object* v_event_1694_, lean_object* v_d_1695_, uint8_t v_preventDefault_1696_, uint8_t v_stopPropagation_1697_){
_start:
{
lean_object* v_paths_1698_; lean_object* v_run_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1707_; 
v_paths_1698_ = lean_ctor_get(v_d_1695_, 0);
v_run_1699_ = lean_ctor_get(v_d_1695_, 1);
v_isSharedCheck_1707_ = !lean_is_exclusive(v_d_1695_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1701_ = v_d_1695_;
v_isShared_1702_ = v_isSharedCheck_1707_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_run_1699_);
lean_inc(v_paths_1698_);
lean_dec(v_d_1695_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1707_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1703_; lean_object* v___x_1705_; 
v___x_1703_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_1703_, 0, v_event_1694_);
lean_ctor_set(v___x_1703_, 1, v_paths_1698_);
lean_ctor_set_uint8(v___x_1703_, sizeof(void*)*2, v_preventDefault_1696_);
lean_ctor_set_uint8(v___x_1703_, sizeof(void*)*2 + 1, v_stopPropagation_1697_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set_tag(v___x_1701_, 3);
lean_ctor_set(v___x_1701_, 0, v___x_1703_);
v___x_1705_ = v___x_1701_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v___x_1703_);
lean_ctor_set(v_reuseFailAlloc_1706_, 1, v_run_1699_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___redArg___boxed(lean_object* v_event_1708_, lean_object* v_d_1709_, lean_object* v_preventDefault_1710_, lean_object* v_stopPropagation_1711_){
_start:
{
uint8_t v_preventDefault_boxed_1712_; uint8_t v_stopPropagation_boxed_1713_; lean_object* v_res_1714_; 
v_preventDefault_boxed_1712_ = lean_unbox(v_preventDefault_1710_);
v_stopPropagation_boxed_1713_ = lean_unbox(v_stopPropagation_1711_);
v_res_1714_ = l_Lasm_UI_Attr_onWith___redArg(v_event_1708_, v_d_1709_, v_preventDefault_boxed_1712_, v_stopPropagation_boxed_1713_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith(lean_object* v_Msg_1715_, lean_object* v_event_1716_, lean_object* v_d_1717_, uint8_t v_preventDefault_1718_, uint8_t v_stopPropagation_1719_){
_start:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Lasm_UI_Attr_onWith___redArg(v_event_1716_, v_d_1717_, v_preventDefault_1718_, v_stopPropagation_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_onWith___boxed(lean_object* v_Msg_1721_, lean_object* v_event_1722_, lean_object* v_d_1723_, lean_object* v_preventDefault_1724_, lean_object* v_stopPropagation_1725_){
_start:
{
uint8_t v_preventDefault_boxed_1726_; uint8_t v_stopPropagation_boxed_1727_; lean_object* v_res_1728_; 
v_preventDefault_boxed_1726_ = lean_unbox(v_preventDefault_1724_);
v_stopPropagation_boxed_1727_ = lean_unbox(v_stopPropagation_1725_);
v_res_1728_ = l_Lasm_UI_Attr_onWith(v_Msg_1721_, v_event_1722_, v_d_1723_, v_preventDefault_boxed_1726_, v_stopPropagation_boxed_1727_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___redArg(lean_object* v_x_1729_){
_start:
{
if (lean_obj_tag(v_x_1729_) == 0)
{
lean_object* v___x_1730_; 
v___x_1730_ = lean_unsigned_to_nat(0u);
return v___x_1730_;
}
else
{
lean_object* v___x_1731_; 
v___x_1731_ = lean_unsigned_to_nat(1u);
return v___x_1731_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___redArg___boxed(lean_object* v_x_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = l_Lasm_UI_Html_ctorIdx___redArg(v_x_1732_);
lean_dec_ref(v_x_1732_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx(lean_object* v_Msg_1734_, lean_object* v_x_1735_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = l_Lasm_UI_Html_ctorIdx___redArg(v_x_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorIdx___boxed(lean_object* v_Msg_1737_, lean_object* v_x_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Lasm_UI_Html_ctorIdx(v_Msg_1737_, v_x_1738_);
lean_dec_ref(v_x_1738_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim___redArg(lean_object* v_t_1740_, lean_object* v_k_1741_){
_start:
{
if (lean_obj_tag(v_t_1740_) == 0)
{
lean_object* v_s_1742_; lean_object* v___x_1743_; 
v_s_1742_ = lean_ctor_get(v_t_1740_, 0);
lean_inc_ref(v_s_1742_);
lean_dec_ref_known(v_t_1740_, 1);
v___x_1743_ = lean_apply_1(v_k_1741_, v_s_1742_);
return v___x_1743_;
}
else
{
uint8_t v_ns_1744_; lean_object* v_tag_1745_; lean_object* v_key_1746_; lean_object* v_attrs_1747_; lean_object* v_children_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v_ns_1744_ = lean_ctor_get_uint8(v_t_1740_, sizeof(void*)*4);
v_tag_1745_ = lean_ctor_get(v_t_1740_, 0);
lean_inc_ref(v_tag_1745_);
v_key_1746_ = lean_ctor_get(v_t_1740_, 1);
lean_inc(v_key_1746_);
v_attrs_1747_ = lean_ctor_get(v_t_1740_, 2);
lean_inc(v_attrs_1747_);
v_children_1748_ = lean_ctor_get(v_t_1740_, 3);
lean_inc(v_children_1748_);
lean_dec_ref_known(v_t_1740_, 4);
v___x_1749_ = lean_box(v_ns_1744_);
v___x_1750_ = lean_apply_5(v_k_1741_, v___x_1749_, v_tag_1745_, v_key_1746_, v_attrs_1747_, v_children_1748_);
return v___x_1750_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim(lean_object* v_Msg_1751_, lean_object* v_motive__1_1752_, lean_object* v_ctorIdx_1753_, lean_object* v_t_1754_, lean_object* v_h_1755_, lean_object* v_k_1756_){
_start:
{
lean_object* v___x_1757_; 
v___x_1757_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1754_, v_k_1756_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_ctorElim___boxed(lean_object* v_Msg_1758_, lean_object* v_motive__1_1759_, lean_object* v_ctorIdx_1760_, lean_object* v_t_1761_, lean_object* v_h_1762_, lean_object* v_k_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l_Lasm_UI_Html_ctorElim(v_Msg_1758_, v_motive__1_1759_, v_ctorIdx_1760_, v_t_1761_, v_h_1762_, v_k_1763_);
lean_dec(v_ctorIdx_1760_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_text_elim___redArg(lean_object* v_t_1765_, lean_object* v_text_1766_){
_start:
{
lean_object* v___x_1767_; 
v___x_1767_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1765_, v_text_1766_);
return v___x_1767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_text_elim(lean_object* v_Msg_1768_, lean_object* v_motive__1_1769_, lean_object* v_t_1770_, lean_object* v_h_1771_, lean_object* v_text_1772_){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1770_, v_text_1772_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_elem_elim___redArg(lean_object* v_t_1774_, lean_object* v_elem_1775_){
_start:
{
lean_object* v___x_1776_; 
v___x_1776_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1774_, v_elem_1775_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_elem_elim(lean_object* v_Msg_1777_, lean_object* v_motive__1_1778_, lean_object* v_t_1779_, lean_object* v_h_1780_, lean_object* v_elem_1781_){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = l_Lasm_UI_Html_ctorElim___redArg(v_t_1779_, v_elem_1781_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml___redArg(){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = ((lean_object*)(l_Lasm_UI_instInhabitedHtml___redArg___closed__0));
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml___redArg___boxed(lean_object* v___dummy_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lasm_UI_instInhabitedHtml___redArg();
return v_res_1788_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedHtml___closed__0(void){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = l_Lasm_UI_instInhabitedHtml___redArg();
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedHtml(lean_object* v_Msg_1790_){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = lean_obj_once(&l_Lasm_UI_instInhabitedHtml___closed__0, &l_Lasm_UI_instInhabitedHtml___closed__0_once, _init_l_Lasm_UI_instInhabitedHtml___closed__0);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_keyed___redArg(lean_object* v_k_1792_, lean_object* v_x_1793_){
_start:
{
if (lean_obj_tag(v_x_1793_) == 1)
{
uint8_t v_ns_1794_; lean_object* v_tag_1795_; lean_object* v_attrs_1796_; lean_object* v_children_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1805_; 
v_ns_1794_ = lean_ctor_get_uint8(v_x_1793_, sizeof(void*)*4);
v_tag_1795_ = lean_ctor_get(v_x_1793_, 0);
v_attrs_1796_ = lean_ctor_get(v_x_1793_, 2);
v_children_1797_ = lean_ctor_get(v_x_1793_, 3);
v_isSharedCheck_1805_ = !lean_is_exclusive(v_x_1793_);
if (v_isSharedCheck_1805_ == 0)
{
lean_object* v_unused_1806_; 
v_unused_1806_ = lean_ctor_get(v_x_1793_, 1);
lean_dec(v_unused_1806_);
v___x_1799_ = v_x_1793_;
v_isShared_1800_ = v_isSharedCheck_1805_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_children_1797_);
lean_inc(v_attrs_1796_);
lean_inc(v_tag_1795_);
lean_dec(v_x_1793_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1805_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v___x_1801_; lean_object* v___x_1803_; 
v___x_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1801_, 0, v_k_1792_);
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 1, v___x_1801_);
v___x_1803_ = v___x_1799_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_tag_1795_);
lean_ctor_set(v_reuseFailAlloc_1804_, 1, v___x_1801_);
lean_ctor_set(v_reuseFailAlloc_1804_, 2, v_attrs_1796_);
lean_ctor_set(v_reuseFailAlloc_1804_, 3, v_children_1797_);
lean_ctor_set_uint8(v_reuseFailAlloc_1804_, sizeof(void*)*4, v_ns_1794_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
else
{
lean_dec_ref(v_k_1792_);
return v_x_1793_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_keyed(lean_object* v_Msg_1807_, lean_object* v_k_1808_, lean_object* v_x_1809_){
_start:
{
lean_object* v___x_1810_; 
v___x_1810_ = l_Lasm_UI_Html_keyed___redArg(v_k_1808_, v_x_1809_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(lean_object* v_f_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_){
_start:
{
if (lean_obj_tag(v_a_1812_) == 0)
{
lean_object* v___x_1814_; 
lean_dec(v_f_1811_);
v___x_1814_ = l_List_reverse___redArg(v_a_1813_);
return v___x_1814_;
}
else
{
lean_object* v_head_1815_; lean_object* v_tail_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1825_; 
v_head_1815_ = lean_ctor_get(v_a_1812_, 0);
v_tail_1816_ = lean_ctor_get(v_a_1812_, 1);
v_isSharedCheck_1825_ = !lean_is_exclusive(v_a_1812_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1818_ = v_a_1812_;
v_isShared_1819_ = v_isSharedCheck_1825_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_tail_1816_);
lean_inc(v_head_1815_);
lean_dec(v_a_1812_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1825_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1820_; lean_object* v___x_1822_; 
lean_inc(v_f_1811_);
v___x_1820_ = l_Lasm_UI_Attr_map___redArg(v_f_1811_, v_head_1815_);
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 1, v_a_1813_);
lean_ctor_set(v___x_1818_, 0, v___x_1820_);
v___x_1822_ = v___x_1818_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1820_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v_a_1813_);
v___x_1822_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
v_a_1812_ = v_tail_1816_;
v_a_1813_ = v___x_1822_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_map___redArg(lean_object* v_f_1826_, lean_object* v_x_1827_){
_start:
{
if (lean_obj_tag(v_x_1827_) == 0)
{
lean_object* v_s_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1835_; 
lean_dec(v_f_1826_);
v_s_1828_ = lean_ctor_get(v_x_1827_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v_x_1827_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1830_ = v_x_1827_;
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_s_1828_);
lean_dec(v_x_1827_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1833_; 
if (v_isShared_1831_ == 0)
{
v___x_1833_ = v___x_1830_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_s_1828_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
}
else
{
uint8_t v_ns_1836_; lean_object* v_tag_1837_; lean_object* v_key_1838_; lean_object* v_attrs_1839_; lean_object* v_children_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1850_; 
v_ns_1836_ = lean_ctor_get_uint8(v_x_1827_, sizeof(void*)*4);
v_tag_1837_ = lean_ctor_get(v_x_1827_, 0);
v_key_1838_ = lean_ctor_get(v_x_1827_, 1);
v_attrs_1839_ = lean_ctor_get(v_x_1827_, 2);
v_children_1840_ = lean_ctor_get(v_x_1827_, 3);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_x_1827_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1842_ = v_x_1827_;
v_isShared_1843_ = v_isSharedCheck_1850_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_children_1840_);
lean_inc(v_attrs_1839_);
lean_inc(v_key_1838_);
lean_inc(v_tag_1837_);
lean_dec(v_x_1827_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1850_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1848_; 
v___x_1844_ = lean_box(0);
lean_inc(v_f_1826_);
v___x_1845_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(v_f_1826_, v_attrs_1839_, v___x_1844_);
v___x_1846_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(v_f_1826_, v_children_1840_, v___x_1844_);
if (v_isShared_1843_ == 0)
{
lean_ctor_set(v___x_1842_, 3, v___x_1846_);
lean_ctor_set(v___x_1842_, 2, v___x_1845_);
v___x_1848_ = v___x_1842_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_tag_1837_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v_key_1838_);
lean_ctor_set(v_reuseFailAlloc_1849_, 2, v___x_1845_);
lean_ctor_set(v_reuseFailAlloc_1849_, 3, v___x_1846_);
lean_ctor_set_uint8(v_reuseFailAlloc_1849_, sizeof(void*)*4, v_ns_1836_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(lean_object* v_f_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_){
_start:
{
if (lean_obj_tag(v_a_1852_) == 0)
{
lean_object* v___x_1854_; 
lean_dec(v_f_1851_);
v___x_1854_ = l_List_reverse___redArg(v_a_1853_);
return v___x_1854_;
}
else
{
lean_object* v_head_1855_; lean_object* v_tail_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1865_; 
v_head_1855_ = lean_ctor_get(v_a_1852_, 0);
v_tail_1856_ = lean_ctor_get(v_a_1852_, 1);
v_isSharedCheck_1865_ = !lean_is_exclusive(v_a_1852_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1858_ = v_a_1852_;
v_isShared_1859_ = v_isSharedCheck_1865_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_tail_1856_);
lean_inc(v_head_1855_);
lean_dec(v_a_1852_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1865_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1860_; lean_object* v___x_1862_; 
lean_inc(v_f_1851_);
v___x_1860_ = l_Lasm_UI_Html_map___redArg(v_f_1851_, v_head_1855_);
if (v_isShared_1859_ == 0)
{
lean_ctor_set(v___x_1858_, 1, v_a_1853_);
lean_ctor_set(v___x_1858_, 0, v___x_1860_);
v___x_1862_ = v___x_1858_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1860_);
lean_ctor_set(v_reuseFailAlloc_1864_, 1, v_a_1853_);
v___x_1862_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
v_a_1852_ = v_tail_1856_;
v_a_1853_ = v___x_1862_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_map(lean_object* v_00_u03b1_1866_, lean_object* v_00_u03b2_1867_, lean_object* v_f_1868_, lean_object* v_x_1869_){
_start:
{
lean_object* v___x_1870_; 
v___x_1870_ = l_Lasm_UI_Html_map___redArg(v_f_1868_, v_x_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0(lean_object* v_00_u03b1_1871_, lean_object* v_00_u03b2_1872_, lean_object* v_f_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_){
_start:
{
lean_object* v___x_1876_; 
v___x_1876_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__0___redArg(v_f_1873_, v_a_1874_, v_a_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1(lean_object* v_00_u03b1_1877_, lean_object* v_00_u03b2_1878_, lean_object* v_f_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = l_List_mapTR_loop___at___00Lasm_UI_Html_map_spec__1___redArg(v_f_1879_, v_a_1880_, v_a_1881_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__3_splitter___redArg(lean_object* v_x_1883_, lean_object* v_h__1_1884_, lean_object* v_h__2_1885_){
_start:
{
if (lean_obj_tag(v_x_1883_) == 0)
{
lean_object* v_s_1886_; lean_object* v___x_1887_; 
lean_dec(v_h__2_1885_);
v_s_1886_ = lean_ctor_get(v_x_1883_, 0);
lean_inc_ref(v_s_1886_);
lean_dec_ref_known(v_x_1883_, 1);
v___x_1887_ = lean_apply_1(v_h__1_1884_, v_s_1886_);
return v___x_1887_;
}
else
{
uint8_t v_ns_1888_; lean_object* v_tag_1889_; lean_object* v_key_1890_; lean_object* v_attrs_1891_; lean_object* v_children_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
lean_dec(v_h__1_1884_);
v_ns_1888_ = lean_ctor_get_uint8(v_x_1883_, sizeof(void*)*4);
v_tag_1889_ = lean_ctor_get(v_x_1883_, 0);
lean_inc_ref(v_tag_1889_);
v_key_1890_ = lean_ctor_get(v_x_1883_, 1);
lean_inc(v_key_1890_);
v_attrs_1891_ = lean_ctor_get(v_x_1883_, 2);
lean_inc(v_attrs_1891_);
v_children_1892_ = lean_ctor_get(v_x_1883_, 3);
lean_inc(v_children_1892_);
lean_dec_ref_known(v_x_1883_, 4);
v___x_1893_ = lean_box(v_ns_1888_);
v___x_1894_ = lean_apply_5(v_h__2_1885_, v___x_1893_, v_tag_1889_, v_key_1890_, v_attrs_1891_, v_children_1892_);
return v___x_1894_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__3_splitter(lean_object* v_00_u03b1_1895_, lean_object* v_motive_1896_, lean_object* v_x_1897_, lean_object* v_h__1_1898_, lean_object* v_h__2_1899_){
_start:
{
if (lean_obj_tag(v_x_1897_) == 0)
{
lean_object* v_s_1900_; lean_object* v___x_1901_; 
lean_dec(v_h__2_1899_);
v_s_1900_ = lean_ctor_get(v_x_1897_, 0);
lean_inc_ref(v_s_1900_);
lean_dec_ref_known(v_x_1897_, 1);
v___x_1901_ = lean_apply_1(v_h__1_1898_, v_s_1900_);
return v___x_1901_;
}
else
{
uint8_t v_ns_1902_; lean_object* v_tag_1903_; lean_object* v_key_1904_; lean_object* v_attrs_1905_; lean_object* v_children_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
lean_dec(v_h__1_1898_);
v_ns_1902_ = lean_ctor_get_uint8(v_x_1897_, sizeof(void*)*4);
v_tag_1903_ = lean_ctor_get(v_x_1897_, 0);
lean_inc_ref(v_tag_1903_);
v_key_1904_ = lean_ctor_get(v_x_1897_, 1);
lean_inc(v_key_1904_);
v_attrs_1905_ = lean_ctor_get(v_x_1897_, 2);
lean_inc(v_attrs_1905_);
v_children_1906_ = lean_ctor_get(v_x_1897_, 3);
lean_inc(v_children_1906_);
lean_dec_ref_known(v_x_1897_, 4);
v___x_1907_ = lean_box(v_ns_1902_);
v___x_1908_ = lean_apply_5(v_h__2_1899_, v___x_1907_, v_tag_1903_, v_key_1904_, v_attrs_1905_, v_children_1906_);
return v___x_1908_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__List_map__unattach_match__1_splitter___redArg(lean_object* v_x_1909_, lean_object* v_h__1_1910_){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = lean_apply_2(v_h__1_1910_, v_x_1909_, lean_box(0));
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__List_map__unattach_match__1_splitter(lean_object* v_00_u03b1_1912_, lean_object* v_P_1913_, lean_object* v_motive_1914_, lean_object* v_x_1915_, lean_object* v_h__1_1916_){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = lean_apply_2(v_h__1_1916_, v_x_1915_, lean_box(0));
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter___redArg(lean_object* v_x_1918_, lean_object* v_h__1_1919_){
_start:
{
lean_object* v___x_1920_; 
v___x_1920_ = lean_apply_2(v_h__1_1919_, v_x_1918_, lean_box(0));
return v___x_1920_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter(lean_object* v_00_u03b1_1921_, lean_object* v_children_1922_, lean_object* v_motive_1923_, lean_object* v_x_1924_, lean_object* v_h__1_1925_){
_start:
{
lean_object* v___x_1926_; 
v___x_1926_ = lean_apply_2(v_h__1_1925_, v_x_1924_, lean_box(0));
return v___x_1926_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter___boxed(lean_object* v_00_u03b1_1927_, lean_object* v_children_1928_, lean_object* v_motive_1929_, lean_object* v_x_1930_, lean_object* v_h__1_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l___private_Lasm_UI_Html_0__Lasm_UI_Html_map_match__1_splitter(v_00_u03b1_1927_, v_children_1928_, v_motive_1929_, v_x_1930_, v_h__1_1931_);
lean_dec(v_children_1928_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(lean_object* v_init_1933_, lean_object* v_x_1934_){
_start:
{
if (lean_obj_tag(v_x_1934_) == 0)
{
lean_inc(v_init_1933_);
return v_init_1933_;
}
else
{
lean_object* v_head_1935_; lean_object* v_tail_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v_head_1935_ = lean_ctor_get(v_x_1934_, 0);
v_tail_1936_ = lean_ctor_get(v_x_1934_, 1);
v___x_1937_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v_init_1933_, v_tail_1936_);
v___x_1938_ = lean_nat_add(v_head_1935_, v___x_1937_);
lean_dec(v___x_1937_);
return v___x_1938_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1___boxed(lean_object* v_init_1939_, lean_object* v_x_1940_){
_start:
{
lean_object* v_res_1941_; 
v_res_1941_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v_init_1939_, v_x_1940_);
lean_dec(v_x_1940_);
lean_dec(v_init_1939_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l_List_sum___at___00Lasm_UI_Html_size_spec__1(lean_object* v_l_1942_){
_start:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1943_ = lean_unsigned_to_nat(0u);
v___x_1944_ = l_List_foldr___at___00List_sum___at___00Lasm_UI_Html_size_spec__1_spec__1(v___x_1943_, v_l_1942_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* l_List_sum___at___00Lasm_UI_Html_size_spec__1___boxed(lean_object* v_l_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_List_sum___at___00Lasm_UI_Html_size_spec__1(v_l_1945_);
lean_dec(v_l_1945_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_size___redArg(lean_object* v_x_1947_){
_start:
{
if (lean_obj_tag(v_x_1947_) == 0)
{
lean_object* v___x_1948_; 
lean_dec_ref_known(v_x_1947_, 1);
v___x_1948_ = lean_unsigned_to_nat(1u);
return v___x_1948_;
}
else
{
lean_object* v_children_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v_children_1949_ = lean_ctor_get(v_x_1947_, 3);
lean_inc(v_children_1949_);
lean_dec_ref_known(v_x_1947_, 4);
v___x_1950_ = lean_box(0);
v___x_1951_ = l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(v_children_1949_, v___x_1950_);
v___x_1952_ = l_List_sum___at___00Lasm_UI_Html_size_spec__1(v___x_1951_);
lean_dec(v___x_1951_);
v___x_1953_ = lean_unsigned_to_nat(1u);
v___x_1954_ = lean_nat_add(v___x_1952_, v___x_1953_);
lean_dec(v___x_1952_);
return v___x_1954_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(lean_object* v_a_1955_, lean_object* v_a_1956_){
_start:
{
if (lean_obj_tag(v_a_1955_) == 0)
{
lean_object* v___x_1957_; 
v___x_1957_ = l_List_reverse___redArg(v_a_1956_);
return v___x_1957_;
}
else
{
lean_object* v_head_1958_; lean_object* v_tail_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1968_; 
v_head_1958_ = lean_ctor_get(v_a_1955_, 0);
v_tail_1959_ = lean_ctor_get(v_a_1955_, 1);
v_isSharedCheck_1968_ = !lean_is_exclusive(v_a_1955_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1961_ = v_a_1955_;
v_isShared_1962_ = v_isSharedCheck_1968_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_tail_1959_);
lean_inc(v_head_1958_);
lean_dec(v_a_1955_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1968_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1963_; lean_object* v___x_1965_; 
v___x_1963_ = l_Lasm_UI_Html_size___redArg(v_head_1958_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 1, v_a_1956_);
lean_ctor_set(v___x_1961_, 0, v___x_1963_);
v___x_1965_ = v___x_1961_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v___x_1963_);
lean_ctor_set(v_reuseFailAlloc_1967_, 1, v_a_1956_);
v___x_1965_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
v_a_1955_ = v_tail_1959_;
v_a_1956_ = v___x_1965_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_size(lean_object* v_Msg_1969_, lean_object* v_x_1970_){
_start:
{
lean_object* v___x_1971_; 
v___x_1971_ = l_Lasm_UI_Html_size___redArg(v_x_1970_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0(lean_object* v_Msg_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_){
_start:
{
lean_object* v___x_1975_; 
v___x_1975_ = l_List_mapTR_loop___at___00Lasm_UI_Html_size_spec__0___redArg(v_a_1973_, v_a_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__0(lean_object* v_b_1976_, lean_object* v_x_1977_){
_start:
{
lean_inc(v_b_1976_);
return v_b_1976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__0___boxed(lean_object* v_b_1978_, lean_object* v_x_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lasm_UI_instFunctorHtml___lam__0(v_b_1978_, v_x_1979_);
lean_dec(v_x_1979_);
lean_dec(v_b_1978_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instFunctorHtml___lam__1(lean_object* v_00_u03b1_1981_, lean_object* v_00_u03b2_1982_, lean_object* v_b_1983_, lean_object* v_h_1984_){
_start:
{
lean_object* v___f_1985_; lean_object* v___x_1986_; 
v___f_1985_ = lean_alloc_closure((void*)(l_Lasm_UI_instFunctorHtml___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1985_, 0, v_b_1983_);
v___x_1986_ = l_Lasm_UI_Html_map___redArg(v___f_1985_, v_h_1984_);
return v___x_1986_;
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
