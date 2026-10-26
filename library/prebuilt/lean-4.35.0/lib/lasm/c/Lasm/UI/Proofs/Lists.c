// Lean compiler output
// Module: Lasm.UI.Proofs.Lists
// Imports: public import Init public meta import Init public import Lasm.UI.Proofs.Basic
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_applyOps_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_applyOps_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_findId_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_findId_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_insertBefore_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_insertBefore_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_Proofs_slice___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Proofs_slice___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Proofs_slice___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_slice___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_slice___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_slice(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_slice___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_applyOps_match__1_splitter___redArg(lean_object* v_x_1_, lean_object* v_x_2_, lean_object* v_h__1_3_, lean_object* v_h__2_4_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_5_; 
lean_dec(v_h__2_4_);
v___x_5_ = lean_apply_1(v_h__1_3_, v_x_2_);
return v___x_5_;
}
else
{
lean_object* v_head_6_; lean_object* v_tail_7_; lean_object* v___x_8_; 
lean_dec(v_h__1_3_);
v_head_6_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_head_6_);
v_tail_7_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_tail_7_);
lean_dec_ref_known(v_x_1_, 2);
v___x_8_ = lean_apply_3(v_h__2_4_, v_head_6_, v_tail_7_, v_x_2_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_applyOps_match__1_splitter(lean_object* v_Msg_9_, lean_object* v_motive_10_, lean_object* v_x_11_, lean_object* v_x_12_, lean_object* v_h__1_13_, lean_object* v_h__2_14_){
_start:
{
if (lean_obj_tag(v_x_11_) == 0)
{
lean_object* v___x_15_; 
lean_dec(v_h__2_14_);
v___x_15_ = lean_apply_1(v_h__1_13_, v_x_12_);
return v___x_15_;
}
else
{
lean_object* v_head_16_; lean_object* v_tail_17_; lean_object* v___x_18_; 
lean_dec(v_h__1_13_);
v_head_16_ = lean_ctor_get(v_x_11_, 0);
lean_inc(v_head_16_);
v_tail_17_ = lean_ctor_get(v_x_11_, 1);
lean_inc(v_tail_17_);
lean_dec_ref_known(v_x_11_, 2);
v___x_18_ = lean_apply_3(v_h__2_14_, v_head_16_, v_tail_17_, v_x_12_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_findId_match__1_splitter___redArg(lean_object* v_x_19_, lean_object* v_h__1_20_, lean_object* v_h__2_21_){
_start:
{
if (lean_obj_tag(v_x_19_) == 0)
{
lean_object* v___x_22_; lean_object* v___x_23_; 
lean_dec(v_h__2_21_);
v___x_22_ = lean_box(0);
v___x_23_ = lean_apply_1(v_h__1_20_, v___x_22_);
return v___x_23_;
}
else
{
lean_object* v_head_24_; lean_object* v_tail_25_; lean_object* v___x_26_; 
lean_dec(v_h__1_20_);
v_head_24_ = lean_ctor_get(v_x_19_, 0);
lean_inc(v_head_24_);
v_tail_25_ = lean_ctor_get(v_x_19_, 1);
lean_inc(v_tail_25_);
lean_dec_ref_known(v_x_19_, 2);
v___x_26_ = lean_apply_2(v_h__2_21_, v_head_24_, v_tail_25_);
return v___x_26_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_findId_match__1_splitter(lean_object* v_motive_27_, lean_object* v_x_28_, lean_object* v_h__1_29_, lean_object* v_h__2_30_){
_start:
{
if (lean_obj_tag(v_x_28_) == 0)
{
lean_object* v___x_31_; lean_object* v___x_32_; 
lean_dec(v_h__2_30_);
v___x_31_ = lean_box(0);
v___x_32_ = lean_apply_1(v_h__1_29_, v___x_31_);
return v___x_32_;
}
else
{
lean_object* v_head_33_; lean_object* v_tail_34_; lean_object* v___x_35_; 
lean_dec(v_h__1_29_);
v_head_33_ = lean_ctor_get(v_x_28_, 0);
lean_inc(v_head_33_);
v_tail_34_ = lean_ctor_get(v_x_28_, 1);
lean_inc(v_tail_34_);
lean_dec_ref_known(v_x_28_, 2);
v___x_35_ = lean_apply_2(v_h__2_30_, v_head_33_, v_tail_34_);
return v___x_35_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_insertBefore_match__1_splitter___redArg(lean_object* v_x_36_, lean_object* v_x_37_, lean_object* v_h__1_38_, lean_object* v_h__2_39_, lean_object* v_h__3_40_){
_start:
{
if (lean_obj_tag(v_x_36_) == 0)
{
lean_object* v___x_41_; 
lean_dec(v_h__3_40_);
lean_dec(v_h__2_39_);
v___x_41_ = lean_apply_1(v_h__1_38_, v_x_37_);
return v___x_41_;
}
else
{
lean_dec(v_h__1_38_);
if (lean_obj_tag(v_x_37_) == 0)
{
lean_object* v_val_42_; lean_object* v___x_43_; 
lean_dec(v_h__3_40_);
v_val_42_ = lean_ctor_get(v_x_36_, 0);
lean_inc(v_val_42_);
lean_dec_ref_known(v_x_36_, 1);
v___x_43_ = lean_apply_1(v_h__2_39_, v_val_42_);
return v___x_43_;
}
else
{
lean_object* v_val_44_; lean_object* v_head_45_; lean_object* v_tail_46_; lean_object* v___x_47_; 
lean_dec(v_h__2_39_);
v_val_44_ = lean_ctor_get(v_x_36_, 0);
lean_inc(v_val_44_);
lean_dec_ref_known(v_x_36_, 1);
v_head_45_ = lean_ctor_get(v_x_37_, 0);
lean_inc(v_head_45_);
v_tail_46_ = lean_ctor_get(v_x_37_, 1);
lean_inc(v_tail_46_);
lean_dec_ref_known(v_x_37_, 2);
v___x_47_ = lean_apply_3(v_h__3_40_, v_val_44_, v_head_45_, v_tail_46_);
return v___x_47_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Lists_0__Lasm_UI_Model_insertBefore_match__1_splitter(lean_object* v_motive_48_, lean_object* v_x_49_, lean_object* v_x_50_, lean_object* v_h__1_51_, lean_object* v_h__2_52_, lean_object* v_h__3_53_){
_start:
{
if (lean_obj_tag(v_x_49_) == 0)
{
lean_object* v___x_54_; 
lean_dec(v_h__3_53_);
lean_dec(v_h__2_52_);
v___x_54_ = lean_apply_1(v_h__1_51_, v_x_50_);
return v___x_54_;
}
else
{
lean_dec(v_h__1_51_);
if (lean_obj_tag(v_x_50_) == 0)
{
lean_object* v_val_55_; lean_object* v___x_56_; 
lean_dec(v_h__3_53_);
v_val_55_ = lean_ctor_get(v_x_49_, 0);
lean_inc(v_val_55_);
lean_dec_ref_known(v_x_49_, 1);
v___x_56_ = lean_apply_1(v_h__2_52_, v_val_55_);
return v___x_56_;
}
else
{
lean_object* v_val_57_; lean_object* v_head_58_; lean_object* v_tail_59_; lean_object* v___x_60_; 
lean_dec(v_h__2_52_);
v_val_57_ = lean_ctor_get(v_x_49_, 0);
lean_inc(v_val_57_);
lean_dec_ref_known(v_x_49_, 1);
v_head_58_ = lean_ctor_get(v_x_50_, 0);
lean_inc(v_head_58_);
v_tail_59_ = lean_ctor_get(v_x_50_, 1);
lean_inc(v_tail_59_);
lean_dec_ref_known(v_x_50_, 2);
v___x_60_ = lean_apply_3(v_h__3_53_, v_val_57_, v_head_58_, v_tail_59_);
return v___x_60_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_slice___redArg(lean_object* v_l_63_, lean_object* v_lo_64_, lean_object* v_hi_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = lean_nat_sub(v_hi_65_, v_lo_64_);
v___x_67_ = l_List_drop___redArg(v_lo_64_, v_l_63_);
v___x_68_ = ((lean_object*)(l_Lasm_UI_Proofs_slice___redArg___closed__0));
lean_inc(v___x_67_);
v___x_69_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_67_, v___x_67_, v___x_66_, v___x_68_);
lean_dec(v___x_67_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_slice___redArg___boxed(lean_object* v_l_70_, lean_object* v_lo_71_, lean_object* v_hi_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lasm_UI_Proofs_slice___redArg(v_l_70_, v_lo_71_, v_hi_72_);
lean_dec(v_hi_72_);
lean_dec(v_l_70_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_slice(lean_object* v_00_u03b1_74_, lean_object* v_l_75_, lean_object* v_lo_76_, lean_object* v_hi_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lasm_UI_Proofs_slice___redArg(v_l_75_, v_lo_76_, v_hi_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_slice___boxed(lean_object* v_00_u03b1_79_, lean_object* v_l_80_, lean_object* v_lo_81_, lean_object* v_hi_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lasm_UI_Proofs_slice(v_00_u03b1_79_, v_l_80_, v_lo_81_, v_hi_82_);
lean_dec(v_hi_82_);
lean_dec(v_l_80_);
return v_res_83_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_UI_Proofs_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Proofs_Lists(uint8_t builtin) {
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
res = initialize_Lasm_UI_Proofs_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
