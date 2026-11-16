// Lean compiler output
// Module: Lasm.JS.Node.Process
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support
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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSLongLongOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSLongLongOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSLongLongOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntLongLongOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeIntLongLongOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringLongLongOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringLongLongOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_value_8_; lean_object* v___x_9_; 
v_value_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_value_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_value_8_);
return v___x_9_;
}
else
{
lean_object* v_value_10_; lean_object* v___x_11_; 
v_value_10_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_value_10_);
lean_dec_ref_known(v_t_6_, 1);
v___x_11_ = lean_apply_1(v_k_7_, v_value_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim___redArg(lean_object* v_t_24_, lean_object* v_longLong_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_24_, v_longLong_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_longLong_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_28_, v_longLong_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim___redArg(lean_object* v_t_32_, lean_object* v_domString_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_32_, v_domString_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_domString_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_36_, v_domString_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString___lam__0(lean_object* v_x_40_){
_start:
{
if (lean_obj_tag(v_x_40_) == 0)
{
lean_object* v_value_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_53_; 
v_value_41_ = lean_ctor_get(v_x_40_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v_x_40_);
if (v_isSharedCheck_53_ == 0)
{
v___x_43_ = v_x_40_;
v_isShared_44_ = v_isSharedCheck_53_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_value_41_);
lean_dec(v_x_40_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_53_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v___x_45_; lean_object* v___x_46_; uint8_t v___x_47_; 
v___x_45_ = lean_nat_abs(v_value_41_);
v___x_46_ = lean_cstr_to_nat("9007199254740991");
v___x_47_ = lean_nat_dec_le(v___x_45_, v___x_46_);
lean_dec(v___x_45_);
if (v___x_47_ == 0)
{
lean_object* v___x_49_; 
if (v_isShared_44_ == 0)
{
lean_ctor_set_tag(v___x_43_, 5);
v___x_49_ = v___x_43_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_value_41_);
v___x_49_ = v_reuseFailAlloc_50_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
return v___x_49_;
}
}
else
{
double v___x_51_; lean_object* v___x_52_; 
lean_del_object(v___x_43_);
v___x_51_ = l_Float_ofInt(v_value_41_);
lean_dec(v_value_41_);
v___x_52_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_52_, 0, v___x_51_);
return v___x_52_;
}
}
}
else
{
lean_object* v_value_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
v_value_54_ = lean_ctor_get(v_x_40_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v_x_40_);
if (v_isSharedCheck_61_ == 0)
{
v___x_56_ = v_x_40_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_value_54_);
lean_dec(v_x_40_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
lean_ctor_set_tag(v___x_56_, 4);
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_value_54_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___lam__0(lean_object* v_value_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v_value_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___lam__0(lean_object* v_value_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_67_, 0, v_value_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0(lean_object* v_x_69_){
_start:
{
switch(lean_obj_tag(v_x_69_))
{
case 3:
{
double v_n_70_; lean_object* v___x_71_; 
v_n_70_ = lean_ctor_get_float(v_x_69_, 0);
lean_dec_ref_known(v_x_69_, 0);
v___x_71_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_70_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_mk_string_unchecked("not an integer", 14, 14);
v___x_73_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
return v___x_73_;
}
else
{
lean_object* v_val_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_82_; 
v_val_74_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_82_ == 0)
{
v___x_76_ = v___x_71_;
v_isShared_77_ = v_isSharedCheck_82_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_val_74_);
lean_dec(v___x_71_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_82_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_79_; 
if (v_isShared_77_ == 0)
{
lean_ctor_set_tag(v___x_76_, 0);
v___x_79_ = v___x_76_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_val_74_);
v___x_79_ = v_reuseFailAlloc_81_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
lean_object* v___x_80_; 
v___x_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
return v___x_80_;
}
}
}
}
case 4:
{
lean_object* v_s_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_91_; 
v_s_83_ = lean_ctor_get(v_x_69_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v_x_69_);
if (v_isSharedCheck_91_ == 0)
{
v___x_85_ = v_x_69_;
v_isShared_86_ = v_isSharedCheck_91_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_s_83_);
lean_dec(v_x_69_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_91_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_88_; 
if (v_isShared_86_ == 0)
{
lean_ctor_set_tag(v___x_85_, 1);
v___x_88_ = v___x_85_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_s_83_);
v___x_88_ = v_reuseFailAlloc_90_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
lean_object* v___x_89_; 
v___x_89_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
return v___x_89_;
}
}
}
default: 
{
lean_object* v___x_92_; lean_object* v___x_93_; 
lean_dec(v_x_69_);
v___x_92_ = lean_mk_string_unchecked("", 0, 0);
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSLongLongOrDOMString(void){
_start:
{
lean_object* v___f_94_; lean_object* v___x_95_; uint8_t v___x_96_; lean_object* v___x_97_; 
v___f_94_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0), 1, 0);
v___x_95_ = lean_mk_string_unchecked("Lasm.JS.Node.LongLongOrDOMString", 32, 32);
v___x_96_ = 0;
v___x_97_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_97_, 0, v___f_94_);
lean_ctor_set(v___x_97_, 1, v___x_95_);
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*2, v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(lean_object* v_x_98_){
_start:
{
if (lean_obj_tag(v_x_98_) == 0)
{
lean_object* v___x_99_; 
v___x_99_ = lean_unsigned_to_nat(0u);
return v___x_99_;
}
else
{
lean_object* v___x_100_; 
v___x_100_ = lean_unsigned_to_nat(1u);
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___boxed(lean_object* v_x_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(v_x_101_);
lean_dec_ref(v_x_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(lean_object* v_t_103_, lean_object* v_k_104_){
_start:
{
if (lean_obj_tag(v_t_103_) == 0)
{
lean_object* v_value_105_; lean_object* v___x_106_; 
v_value_105_ = lean_ctor_get(v_t_103_, 0);
lean_inc_ref(v_value_105_);
lean_dec_ref_known(v_t_103_, 1);
v___x_106_ = lean_apply_1(v_k_104_, v_value_105_);
return v___x_106_;
}
else
{
double v_value_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v_value_107_ = lean_ctor_get_float(v_t_103_, 0);
lean_dec_ref_known(v_t_103_, 0);
v___x_108_ = lean_box_float(v_value_107_);
v___x_109_ = lean_apply_1(v_k_104_, v___x_108_);
return v___x_109_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(lean_object* v_motive_110_, lean_object* v_ctorIdx_111_, lean_object* v_t_112_, lean_object* v_h_113_, lean_object* v_k_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_112_, v_k_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___boxed(lean_object* v_motive_116_, lean_object* v_ctorIdx_117_, lean_object* v_t_118_, lean_object* v_h_119_, lean_object* v_k_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(v_motive_116_, v_ctorIdx_117_, v_t_118_, v_h_119_, v_k_120_);
lean_dec(v_ctorIdx_117_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim___redArg(lean_object* v_t_122_, lean_object* v_domString_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_122_, v_domString_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim(lean_object* v_motive_125_, lean_object* v_t_126_, lean_object* v_h_127_, lean_object* v_domString_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_126_, v_domString_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim___redArg(lean_object* v_t_130_, lean_object* v_double_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_130_, v_double_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim(lean_object* v_motive_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_double_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_134_, v_double_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0(lean_object* v_x_138_){
_start:
{
if (lean_obj_tag(v_x_138_) == 0)
{
lean_object* v_value_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
v_value_139_ = lean_ctor_get(v_x_138_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v_x_138_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v_x_138_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_value_139_);
lean_dec(v_x_138_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
lean_ctor_set_tag(v___x_141_, 4);
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_value_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
else
{
double v_value_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
v_value_147_ = lean_ctor_get_float(v_x_138_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v_x_138_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v_x_138_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_dec(v_x_138_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
lean_ctor_set_tag(v___x_149_, 3);
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_153_, 0, v_value_147_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0(lean_object* v_value_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_157_, 0, v_value_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(double v_value_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v___x_160_, 0, v_value_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object* v_value_161_){
_start:
{
double v_value_boxed_162_; lean_object* v_res_163_; 
v_value_boxed_162_ = lean_unbox_float(v_value_161_);
lean_dec_ref(v_value_161_);
v_res_163_ = l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(v_value_boxed_162_);
return v_res_163_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Process(uint8_t builtin) {
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
res = initialize_Lasm_JS_Node_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instFromJSLongLongOrDOMString = _init_l_Lasm_JS_Node_instFromJSLongLongOrDOMString();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSLongLongOrDOMString);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
