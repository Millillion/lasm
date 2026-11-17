// Lean compiler output
// Module: Lasm.JS.Node.Buffer
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Types.FileAPI
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSlowBuffer___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSSlowBuffer_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSSlowBuffer___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSSlowBuffer = (const lean_object*)&l_Lasm_JS_Node_instToJSSlowBuffer_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8Array_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8Array_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSSlowBuffer___lam__0(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_mk_string_unchecked("", 0, 0);
v___x_3_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3_, 0, v_x_1_);
lean_ctor_set(v___x_3_, 1, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0(lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 9)
{
lean_object* v_value_6_; lean_object* v___x_7_; 
v_value_6_ = lean_ctor_get(v_x_5_, 0);
lean_inc(v_value_6_);
v___x_7_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7_, 0, v_value_6_);
return v___x_7_;
}
else
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_mk_string_unchecked("", 0, 0);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSSlowBuffer(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSSlowBuffer___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Node.SlowBuffer", 23, 23);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx(lean_object* v_x_16_){
_start:
{
switch(lean_obj_tag(v_x_16_))
{
case 0:
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(0u);
return v___x_17_;
}
case 1:
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(1u);
return v___x_18_;
}
default: 
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(2u);
return v___x_19_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx___boxed(lean_object* v_x_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx(v_x_20_);
lean_dec_ref(v_x_20_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(lean_object* v_t_22_, lean_object* v_k_23_){
_start:
{
if (lean_obj_tag(v_t_22_) == 2)
{
lean_object* v_value_24_; lean_object* v___x_25_; 
v_value_24_ = lean_ctor_get(v_t_22_, 0);
lean_inc(v_value_24_);
lean_dec_ref_known(v_t_22_, 1);
v___x_25_ = lean_apply_1(v_k_23_, v_value_24_);
return v___x_25_;
}
else
{
lean_object* v_value_26_; lean_object* v___x_27_; 
v_value_26_ = lean_ctor_get(v_t_22_, 0);
lean_inc_ref(v_value_26_);
lean_dec_ref(v_t_22_);
v___x_27_ = lean_apply_1(v_k_23_, v_value_26_);
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim(lean_object* v_motive_28_, lean_object* v_ctorIdx_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_k_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_30_, v_k_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___boxed(lean_object* v_motive_34_, lean_object* v_ctorIdx_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_k_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim(v_motive_34_, v_ctorIdx_35_, v_t_36_, v_h_37_, v_k_38_);
lean_dec(v_ctorIdx_35_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim___redArg(lean_object* v_t_40_, lean_object* v_domString_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_40_, v_domString_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_domString_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_44_, v_domString_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim___redArg(lean_object* v_t_48_, lean_object* v_uint8Array_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_48_, v_uint8Array_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim(lean_object* v_motive_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_uint8Array_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_52_, v_uint8Array_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim___redArg(lean_object* v_t_56_, lean_object* v_longLong_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_56_, v_longLong_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim(lean_object* v_motive_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_longLong_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_60_, v_longLong_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_x_64_){
_start:
{
switch(lean_obj_tag(v_x_64_))
{
case 0:
{
lean_object* v_value_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_72_; 
v_value_65_ = lean_ctor_get(v_x_64_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v_x_64_);
if (v_isSharedCheck_72_ == 0)
{
v___x_67_ = v_x_64_;
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_value_65_);
lean_dec(v_x_64_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_70_; 
if (v_isShared_68_ == 0)
{
lean_ctor_set_tag(v___x_67_, 4);
v___x_70_ = v___x_67_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_value_65_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
case 1:
{
lean_object* v_value_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_80_; 
v_value_73_ = lean_ctor_get(v_x_64_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v_x_64_);
if (v_isSharedCheck_80_ == 0)
{
v___x_75_ = v_x_64_;
v_isShared_76_ = v_isSharedCheck_80_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_value_73_);
lean_dec(v_x_64_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_80_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_78_; 
if (v_isShared_76_ == 0)
{
lean_ctor_set_tag(v___x_75_, 6);
v___x_78_ = v___x_75_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_value_73_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
default: 
{
lean_object* v_value_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_93_; 
v_value_81_ = lean_ctor_get(v_x_64_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v_x_64_);
if (v_isSharedCheck_93_ == 0)
{
v___x_83_ = v_x_64_;
v_isShared_84_ = v_isSharedCheck_93_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_value_81_);
lean_dec(v_x_64_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_93_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_85_ = lean_nat_abs(v_value_81_);
v___x_86_ = lean_cstr_to_nat("9007199254740991");
v___x_87_ = lean_nat_dec_le(v___x_85_, v___x_86_);
lean_dec(v___x_85_);
if (v___x_87_ == 0)
{
lean_object* v___x_89_; 
if (v_isShared_84_ == 0)
{
lean_ctor_set_tag(v___x_83_, 5);
v___x_89_ = v___x_83_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_value_81_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
else
{
double v___x_91_; lean_object* v___x_92_; 
lean_del_object(v___x_83_);
v___x_91_ = l_Float_ofInt(v_value_81_);
lean_dec(v_value_81_);
v___x_92_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_96_, 0, v_value_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_99_, 0, v_value_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_102_, 0, v_value_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx(lean_object* v_x_104_){
_start:
{
if (lean_obj_tag(v_x_104_) == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lean_unsigned_to_nat(0u);
return v___x_105_;
}
else
{
lean_object* v___x_106_; 
v___x_106_ = lean_unsigned_to_nat(1u);
return v___x_106_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx___boxed(lean_object* v_x_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx(v_x_107_);
lean_dec_ref(v_x_107_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(lean_object* v_t_109_, lean_object* v_k_110_){
_start:
{
lean_object* v_value_111_; lean_object* v___x_112_; 
v_value_111_ = lean_ctor_get(v_t_109_, 0);
lean_inc_ref(v_value_111_);
lean_dec_ref(v_t_109_);
v___x_112_ = lean_apply_1(v_k_110_, v_value_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim(lean_object* v_motive_113_, lean_object* v_ctorIdx_114_, lean_object* v_t_115_, lean_object* v_h_116_, lean_object* v_k_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_115_, v_k_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___boxed(lean_object* v_motive_119_, lean_object* v_ctorIdx_120_, lean_object* v_t_121_, lean_object* v_h_122_, lean_object* v_k_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim(v_motive_119_, v_ctorIdx_120_, v_t_121_, v_h_122_, v_k_123_);
lean_dec(v_ctorIdx_120_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim___redArg(lean_object* v_t_125_, lean_object* v_domString_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_125_, v_domString_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim(lean_object* v_motive_128_, lean_object* v_t_129_, lean_object* v_h_130_, lean_object* v_domString_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_129_, v_domString_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim___redArg(lean_object* v_t_133_, lean_object* v_uint8Array_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_133_, v_uint8Array_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim(lean_object* v_motive_136_, lean_object* v_t_137_, lean_object* v_h_138_, lean_object* v_uint8Array_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_137_, v_uint8Array_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0(lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_141_) == 0)
{
lean_object* v_value_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_149_; 
v_value_142_ = lean_ctor_get(v_x_141_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v_x_141_);
if (v_isSharedCheck_149_ == 0)
{
v___x_144_ = v_x_141_;
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_value_142_);
lean_dec(v_x_141_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
lean_ctor_set_tag(v___x_144_, 4);
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_value_142_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
lean_object* v_value_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_157_; 
v_value_150_ = lean_ctor_get(v_x_141_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v_x_141_);
if (v_isSharedCheck_157_ == 0)
{
v___x_152_ = v_x_141_;
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_value_150_);
lean_dec(v_x_141_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
lean_ctor_set_tag(v___x_152_, 6);
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_value_150_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___lam__0(lean_object* v_value_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_160_, 0, v_value_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___lam__0(lean_object* v_value_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_163_, 0, v_value_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0(lean_object* v_x_165_){
_start:
{
switch(lean_obj_tag(v_x_165_))
{
case 4:
{
lean_object* v_s_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_174_; 
v_s_166_ = lean_ctor_get(v_x_165_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v_x_165_);
if (v_isSharedCheck_174_ == 0)
{
v___x_168_ = v_x_165_;
v_isShared_169_ = v_isSharedCheck_174_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_s_166_);
lean_dec(v_x_165_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_174_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_171_; 
if (v_isShared_169_ == 0)
{
lean_ctor_set_tag(v___x_168_, 0);
v___x_171_ = v___x_168_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_s_166_);
v___x_171_ = v_reuseFailAlloc_173_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
lean_object* v___x_172_; 
v___x_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
return v___x_172_;
}
}
}
case 6:
{
lean_object* v_b_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_183_; 
v_b_175_ = lean_ctor_get(v_x_165_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v_x_165_);
if (v_isSharedCheck_183_ == 0)
{
v___x_177_ = v_x_165_;
v_isShared_178_ = v_isSharedCheck_183_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_b_175_);
lean_dec(v_x_165_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_183_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_180_; 
if (v_isShared_178_ == 0)
{
lean_ctor_set_tag(v___x_177_, 1);
v___x_180_ = v___x_177_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_b_175_);
v___x_180_ = v_reuseFailAlloc_182_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
lean_object* v___x_181_; 
v___x_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
return v___x_181_;
}
}
}
default: 
{
lean_object* v___x_184_; lean_object* v___x_185_; 
lean_dec(v_x_165_);
v___x_184_ = lean_mk_string_unchecked("", 0, 0);
v___x_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
return v___x_185_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array(void){
_start:
{
lean_object* v___f_186_; lean_object* v___x_187_; uint8_t v___x_188_; lean_object* v___x_189_; 
v___f_186_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0), 1, 0);
v___x_187_ = lean_mk_string_unchecked("Lasm.JS.Node.DOMStringOrUint8Array", 34, 34);
v___x_188_ = 0;
v___x_189_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_189_, 0, v___f_186_);
lean_ctor_set(v___x_189_, 1, v___x_187_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*2, v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx(lean_object* v_x_190_){
_start:
{
if (lean_obj_tag(v_x_190_) == 0)
{
lean_object* v___x_191_; 
v___x_191_ = lean_unsigned_to_nat(0u);
return v___x_191_;
}
else
{
lean_object* v___x_192_; 
v___x_192_ = lean_unsigned_to_nat(1u);
return v___x_192_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___boxed(lean_object* v_x_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx(v_x_193_);
lean_dec_ref(v_x_193_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(lean_object* v_t_195_, lean_object* v_k_196_){
_start:
{
if (lean_obj_tag(v_t_195_) == 0)
{
lean_object* v_value_197_; lean_object* v___x_198_; 
v_value_197_ = lean_ctor_get(v_t_195_, 0);
lean_inc(v_value_197_);
lean_dec_ref_known(v_t_195_, 1);
v___x_198_ = lean_apply_1(v_k_196_, v_value_197_);
return v___x_198_;
}
else
{
lean_object* v_value_199_; lean_object* v___x_200_; 
v_value_199_ = lean_ctor_get(v_t_195_, 0);
lean_inc_ref(v_value_199_);
lean_dec_ref_known(v_t_195_, 1);
v___x_200_ = lean_apply_1(v_k_196_, v_value_199_);
return v___x_200_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(lean_object* v_motive_201_, lean_object* v_ctorIdx_202_, lean_object* v_t_203_, lean_object* v_h_204_, lean_object* v_k_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_203_, v_k_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___boxed(lean_object* v_motive_207_, lean_object* v_ctorIdx_208_, lean_object* v_t_209_, lean_object* v_h_210_, lean_object* v_k_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(v_motive_207_, v_ctorIdx_208_, v_t_209_, v_h_210_, v_k_211_);
lean_dec(v_ctorIdx_208_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim___redArg(lean_object* v_t_213_, lean_object* v_longLong_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_213_, v_longLong_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim(lean_object* v_motive_216_, lean_object* v_t_217_, lean_object* v_h_218_, lean_object* v_longLong_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_217_, v_longLong_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim___redArg(lean_object* v_t_221_, lean_object* v_domString_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_221_, v_domString_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim(lean_object* v_motive_224_, lean_object* v_t_225_, lean_object* v_h_226_, lean_object* v_domString_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_225_, v_domString_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString___lam__0(lean_object* v_x_229_){
_start:
{
if (lean_obj_tag(v_x_229_) == 0)
{
lean_object* v_value_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_242_; 
v_value_230_ = lean_ctor_get(v_x_229_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v_x_229_);
if (v_isSharedCheck_242_ == 0)
{
v___x_232_ = v_x_229_;
v_isShared_233_ = v_isSharedCheck_242_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_value_230_);
lean_dec(v_x_229_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_242_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_234_ = lean_nat_abs(v_value_230_);
v___x_235_ = lean_cstr_to_nat("9007199254740991");
v___x_236_ = lean_nat_dec_le(v___x_234_, v___x_235_);
lean_dec(v___x_234_);
if (v___x_236_ == 0)
{
lean_object* v___x_238_; 
if (v_isShared_233_ == 0)
{
lean_ctor_set_tag(v___x_232_, 5);
v___x_238_ = v___x_232_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_value_230_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
else
{
double v___x_240_; lean_object* v___x_241_; 
lean_del_object(v___x_232_);
v___x_240_ = l_Float_ofInt(v_value_230_);
lean_dec(v_value_230_);
v___x_241_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_241_, 0, v___x_240_);
return v___x_241_;
}
}
}
else
{
lean_object* v_value_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_250_; 
v_value_243_ = lean_ctor_get(v_x_229_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v_x_229_);
if (v_isSharedCheck_250_ == 0)
{
v___x_245_ = v_x_229_;
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_value_243_);
lean_dec(v_x_229_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_248_; 
if (v_isShared_246_ == 0)
{
lean_ctor_set_tag(v___x_245_, 4);
v___x_248_ = v___x_245_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_value_243_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___lam__0(lean_object* v_value_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v_value_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___lam__0(lean_object* v_value_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_256_, 0, v_value_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0(lean_object* v_x_258_){
_start:
{
switch(lean_obj_tag(v_x_258_))
{
case 3:
{
double v_n_259_; lean_object* v___x_260_; 
v_n_259_ = lean_ctor_get_float(v_x_258_, 0);
lean_dec_ref_known(v_x_258_, 0);
v___x_260_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_259_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = lean_mk_string_unchecked("not an integer", 14, 14);
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
return v___x_262_;
}
else
{
lean_object* v_val_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_271_; 
v_val_263_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_271_ == 0)
{
v___x_265_ = v___x_260_;
v_isShared_266_ = v_isSharedCheck_271_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_val_263_);
lean_dec(v___x_260_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_271_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
lean_ctor_set_tag(v___x_265_, 0);
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_val_263_);
v___x_268_ = v_reuseFailAlloc_270_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_269_; 
v___x_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
return v___x_269_;
}
}
}
}
case 4:
{
lean_object* v_s_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_280_; 
v_s_272_ = lean_ctor_get(v_x_258_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v_x_258_);
if (v_isSharedCheck_280_ == 0)
{
v___x_274_ = v_x_258_;
v_isShared_275_ = v_isSharedCheck_280_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_s_272_);
lean_dec(v_x_258_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_280_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
lean_ctor_set_tag(v___x_274_, 1);
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_s_272_);
v___x_277_ = v_reuseFailAlloc_279_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
lean_object* v___x_278_; 
v___x_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
return v___x_278_;
}
}
}
default: 
{
lean_object* v___x_281_; lean_object* v___x_282_; 
lean_dec(v_x_258_);
v___x_281_ = lean_mk_string_unchecked("", 0, 0);
v___x_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
return v___x_282_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSLongLongOrDOMString(void){
_start:
{
lean_object* v___f_283_; lean_object* v___x_284_; uint8_t v___x_285_; lean_object* v___x_286_; 
v___f_283_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0), 1, 0);
v___x_284_ = lean_mk_string_unchecked("Lasm.JS.Node.LongLongOrDOMString", 32, 32);
v___x_285_ = 0;
v___x_286_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_286_, 0, v___f_283_);
lean_ctor_set(v___x_286_, 1, v___x_284_);
lean_ctor_set_uint8(v___x_286_, sizeof(void*)*2, v___x_285_);
return v___x_286_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_FileAPI(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Buffer(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_FileAPI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instFromJSSlowBuffer = _init_l_Lasm_JS_Node_instFromJSSlowBuffer();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSSlowBuffer);
l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array = _init_l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array);
l_Lasm_JS_Node_instFromJSLongLongOrDOMString = _init_l_Lasm_JS_Node_instFromJSLongLongOrDOMString();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSLongLongOrDOMString);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
