// Lean compiler output
// Module: Lasm.UI.Proofs.Children
// Imports: public import Init public meta import Init public import Lasm.UI.Proofs.Lists
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
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Proofs_slice___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_Model_applyOp_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_Model_applyOp_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_Model_applyOp_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_Model_applyOp_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_insertAll_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_insertAll_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_removeAll_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_removeAll_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Proofs_win_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_Proofs_win___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Proofs_win___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Proofs_win___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_win___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_win___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_win(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_win___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Proofs_win_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_removeRange_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_removeRange_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_Model_applyOp_match__3_splitter___redArg(lean_object* v_x_1_, lean_object* v_x_2_, lean_object* v_h__1_3_, lean_object* v_h__2_4_, lean_object* v_h__3_5_, lean_object* v_h__4_6_, lean_object* v_h__5_7_, lean_object* v_h__6_8_, lean_object* v_h__7_9_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v_node_10_; lean_object* v_before_11_; lean_object* v___x_12_; 
lean_dec(v_h__7_9_);
lean_dec(v_h__6_8_);
lean_dec(v_h__5_7_);
lean_dec(v_h__4_6_);
lean_dec(v_h__3_5_);
lean_dec(v_h__2_4_);
v_node_10_ = lean_ctor_get(v_x_1_, 0);
lean_inc_ref(v_node_10_);
v_before_11_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_before_11_);
lean_dec_ref_known(v_x_1_, 2);
v___x_12_ = lean_apply_3(v_h__1_3_, v_node_10_, v_before_11_, v_x_2_);
return v___x_12_;
}
case 1:
{
lean_object* v_id_13_; lean_object* v_before_14_; lean_object* v___x_15_; 
lean_dec(v_h__7_9_);
lean_dec(v_h__6_8_);
lean_dec(v_h__5_7_);
lean_dec(v_h__4_6_);
lean_dec(v_h__3_5_);
lean_dec(v_h__1_3_);
v_id_13_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_id_13_);
v_before_14_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_before_14_);
lean_dec_ref_known(v_x_1_, 2);
v___x_15_ = lean_apply_3(v_h__2_4_, v_id_13_, v_before_14_, v_x_2_);
return v___x_15_;
}
case 2:
{
lean_object* v_id_16_; lean_object* v___x_17_; 
lean_dec(v_h__7_9_);
lean_dec(v_h__6_8_);
lean_dec(v_h__5_7_);
lean_dec(v_h__4_6_);
lean_dec(v_h__2_4_);
lean_dec(v_h__1_3_);
v_id_16_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_id_16_);
lean_dec_ref_known(v_x_1_, 1);
v___x_17_ = lean_apply_2(v_h__3_5_, v_id_16_, v_x_2_);
return v___x_17_;
}
case 3:
{
lean_object* v___x_18_; 
lean_dec(v_h__7_9_);
lean_dec(v_h__6_8_);
lean_dec(v_h__5_7_);
lean_dec(v_h__3_5_);
lean_dec(v_h__2_4_);
lean_dec(v_h__1_3_);
v___x_18_ = lean_apply_1(v_h__4_6_, v_x_2_);
return v___x_18_;
}
case 4:
{
lean_object* v_id_19_; lean_object* v_s_20_; lean_object* v___x_21_; 
lean_dec(v_h__7_9_);
lean_dec(v_h__6_8_);
lean_dec(v_h__4_6_);
lean_dec(v_h__3_5_);
lean_dec(v_h__2_4_);
lean_dec(v_h__1_3_);
v_id_19_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_id_19_);
v_s_20_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_s_20_);
lean_dec_ref_known(v_x_1_, 2);
v___x_21_ = lean_apply_3(v_h__5_7_, v_id_19_, v_s_20_, v_x_2_);
return v___x_21_;
}
case 5:
{
lean_object* v_id_22_; lean_object* v_ops_23_; lean_object* v___x_24_; 
lean_dec(v_h__7_9_);
lean_dec(v_h__5_7_);
lean_dec(v_h__4_6_);
lean_dec(v_h__3_5_);
lean_dec(v_h__2_4_);
lean_dec(v_h__1_3_);
v_id_22_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_id_22_);
v_ops_23_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_ops_23_);
lean_dec_ref_known(v_x_1_, 2);
v___x_24_ = lean_apply_3(v_h__6_8_, v_id_22_, v_ops_23_, v_x_2_);
return v___x_24_;
}
default: 
{
lean_object* v_id_25_; lean_object* v_ops_26_; lean_object* v___x_27_; 
lean_dec(v_h__6_8_);
lean_dec(v_h__5_7_);
lean_dec(v_h__4_6_);
lean_dec(v_h__3_5_);
lean_dec(v_h__2_4_);
lean_dec(v_h__1_3_);
v_id_25_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_id_25_);
v_ops_26_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_ops_26_);
lean_dec_ref_known(v_x_1_, 2);
v___x_27_ = lean_apply_3(v_h__7_9_, v_id_25_, v_ops_26_, v_x_2_);
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_Model_applyOp_match__3_splitter(lean_object* v_Msg_28_, lean_object* v_motive_29_, lean_object* v_x_30_, lean_object* v_x_31_, lean_object* v_h__1_32_, lean_object* v_h__2_33_, lean_object* v_h__3_34_, lean_object* v_h__4_35_, lean_object* v_h__5_36_, lean_object* v_h__6_37_, lean_object* v_h__7_38_){
_start:
{
switch(lean_obj_tag(v_x_30_))
{
case 0:
{
lean_object* v_node_39_; lean_object* v_before_40_; lean_object* v___x_41_; 
lean_dec(v_h__7_38_);
lean_dec(v_h__6_37_);
lean_dec(v_h__5_36_);
lean_dec(v_h__4_35_);
lean_dec(v_h__3_34_);
lean_dec(v_h__2_33_);
v_node_39_ = lean_ctor_get(v_x_30_, 0);
lean_inc_ref(v_node_39_);
v_before_40_ = lean_ctor_get(v_x_30_, 1);
lean_inc(v_before_40_);
lean_dec_ref_known(v_x_30_, 2);
v___x_41_ = lean_apply_3(v_h__1_32_, v_node_39_, v_before_40_, v_x_31_);
return v___x_41_;
}
case 1:
{
lean_object* v_id_42_; lean_object* v_before_43_; lean_object* v___x_44_; 
lean_dec(v_h__7_38_);
lean_dec(v_h__6_37_);
lean_dec(v_h__5_36_);
lean_dec(v_h__4_35_);
lean_dec(v_h__3_34_);
lean_dec(v_h__1_32_);
v_id_42_ = lean_ctor_get(v_x_30_, 0);
lean_inc(v_id_42_);
v_before_43_ = lean_ctor_get(v_x_30_, 1);
lean_inc(v_before_43_);
lean_dec_ref_known(v_x_30_, 2);
v___x_44_ = lean_apply_3(v_h__2_33_, v_id_42_, v_before_43_, v_x_31_);
return v___x_44_;
}
case 2:
{
lean_object* v_id_45_; lean_object* v___x_46_; 
lean_dec(v_h__7_38_);
lean_dec(v_h__6_37_);
lean_dec(v_h__5_36_);
lean_dec(v_h__4_35_);
lean_dec(v_h__2_33_);
lean_dec(v_h__1_32_);
v_id_45_ = lean_ctor_get(v_x_30_, 0);
lean_inc(v_id_45_);
lean_dec_ref_known(v_x_30_, 1);
v___x_46_ = lean_apply_2(v_h__3_34_, v_id_45_, v_x_31_);
return v___x_46_;
}
case 3:
{
lean_object* v___x_47_; 
lean_dec(v_h__7_38_);
lean_dec(v_h__6_37_);
lean_dec(v_h__5_36_);
lean_dec(v_h__3_34_);
lean_dec(v_h__2_33_);
lean_dec(v_h__1_32_);
v___x_47_ = lean_apply_1(v_h__4_35_, v_x_31_);
return v___x_47_;
}
case 4:
{
lean_object* v_id_48_; lean_object* v_s_49_; lean_object* v___x_50_; 
lean_dec(v_h__7_38_);
lean_dec(v_h__6_37_);
lean_dec(v_h__4_35_);
lean_dec(v_h__3_34_);
lean_dec(v_h__2_33_);
lean_dec(v_h__1_32_);
v_id_48_ = lean_ctor_get(v_x_30_, 0);
lean_inc(v_id_48_);
v_s_49_ = lean_ctor_get(v_x_30_, 1);
lean_inc_ref(v_s_49_);
lean_dec_ref_known(v_x_30_, 2);
v___x_50_ = lean_apply_3(v_h__5_36_, v_id_48_, v_s_49_, v_x_31_);
return v___x_50_;
}
case 5:
{
lean_object* v_id_51_; lean_object* v_ops_52_; lean_object* v___x_53_; 
lean_dec(v_h__7_38_);
lean_dec(v_h__5_36_);
lean_dec(v_h__4_35_);
lean_dec(v_h__3_34_);
lean_dec(v_h__2_33_);
lean_dec(v_h__1_32_);
v_id_51_ = lean_ctor_get(v_x_30_, 0);
lean_inc(v_id_51_);
v_ops_52_ = lean_ctor_get(v_x_30_, 1);
lean_inc(v_ops_52_);
lean_dec_ref_known(v_x_30_, 2);
v___x_53_ = lean_apply_3(v_h__6_37_, v_id_51_, v_ops_52_, v_x_31_);
return v___x_53_;
}
default: 
{
lean_object* v_id_54_; lean_object* v_ops_55_; lean_object* v___x_56_; 
lean_dec(v_h__6_37_);
lean_dec(v_h__5_36_);
lean_dec(v_h__4_35_);
lean_dec(v_h__3_34_);
lean_dec(v_h__2_33_);
lean_dec(v_h__1_32_);
v_id_54_ = lean_ctor_get(v_x_30_, 0);
lean_inc(v_id_54_);
v_ops_55_ = lean_ctor_get(v_x_30_, 1);
lean_inc(v_ops_55_);
lean_dec_ref_known(v_x_30_, 2);
v___x_56_ = lean_apply_3(v_h__7_38_, v_id_54_, v_ops_55_, v_x_31_);
return v___x_56_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_Model_applyOp_match__1_splitter___redArg(lean_object* v_x_57_, lean_object* v_h__1_58_, lean_object* v_h__2_59_){
_start:
{
if (lean_obj_tag(v_x_57_) == 0)
{
lean_object* v___x_60_; lean_object* v___x_61_; 
lean_dec(v_h__1_58_);
v___x_60_ = lean_box(0);
v___x_61_ = lean_apply_1(v_h__2_59_, v___x_60_);
return v___x_61_;
}
else
{
lean_object* v_val_62_; lean_object* v___x_63_; 
lean_dec(v_h__2_59_);
v_val_62_ = lean_ctor_get(v_x_57_, 0);
lean_inc(v_val_62_);
lean_dec_ref_known(v_x_57_, 1);
v___x_63_ = lean_apply_1(v_h__1_58_, v_val_62_);
return v___x_63_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_Model_applyOp_match__1_splitter(lean_object* v_motive_64_, lean_object* v_x_65_, lean_object* v_h__1_66_, lean_object* v_h__2_67_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; 
lean_dec(v_h__1_66_);
v___x_68_ = lean_box(0);
v___x_69_ = lean_apply_1(v_h__2_67_, v___x_68_);
return v___x_69_;
}
else
{
lean_object* v_val_70_; lean_object* v___x_71_; 
lean_dec(v_h__2_67_);
v_val_70_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_val_70_);
lean_dec_ref_known(v_x_65_, 1);
v___x_71_ = lean_apply_1(v_h__1_66_, v_val_70_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_insertAll_match__1_splitter___redArg(lean_object* v_x_72_, lean_object* v_x_73_, lean_object* v_x_74_, lean_object* v_x_75_, lean_object* v_h__1_76_, lean_object* v_h__2_77_){
_start:
{
if (lean_obj_tag(v_x_72_) == 0)
{
lean_object* v___x_78_; 
lean_dec(v_h__2_77_);
v___x_78_ = lean_apply_3(v_h__1_76_, v_x_73_, v_x_74_, v_x_75_);
return v___x_78_;
}
else
{
lean_object* v_head_79_; lean_object* v_tail_80_; lean_object* v___x_81_; 
lean_dec(v_h__1_76_);
v_head_79_ = lean_ctor_get(v_x_72_, 0);
lean_inc(v_head_79_);
v_tail_80_ = lean_ctor_get(v_x_72_, 1);
lean_inc(v_tail_80_);
lean_dec_ref_known(v_x_72_, 2);
v___x_81_ = lean_apply_5(v_h__2_77_, v_head_79_, v_tail_80_, v_x_73_, v_x_74_, v_x_75_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_insertAll_match__1_splitter(lean_object* v_Msg_82_, lean_object* v_00_u03b2_83_, lean_object* v_motive_84_, lean_object* v_x_85_, lean_object* v_x_86_, lean_object* v_x_87_, lean_object* v_x_88_, lean_object* v_h__1_89_, lean_object* v_h__2_90_){
_start:
{
if (lean_obj_tag(v_x_85_) == 0)
{
lean_object* v___x_91_; 
lean_dec(v_h__2_90_);
v___x_91_ = lean_apply_3(v_h__1_89_, v_x_86_, v_x_87_, v_x_88_);
return v___x_91_;
}
else
{
lean_object* v_head_92_; lean_object* v_tail_93_; lean_object* v___x_94_; 
lean_dec(v_h__1_89_);
v_head_92_ = lean_ctor_get(v_x_85_, 0);
lean_inc(v_head_92_);
v_tail_93_ = lean_ctor_get(v_x_85_, 1);
lean_inc(v_tail_93_);
lean_dec_ref_known(v_x_85_, 2);
v___x_94_ = lean_apply_5(v_h__2_90_, v_head_92_, v_tail_93_, v_x_86_, v_x_87_, v_x_88_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_removeAll_match__1_splitter___redArg(lean_object* v_x_95_, lean_object* v_x_96_, lean_object* v_h__1_97_, lean_object* v_h__2_98_){
_start:
{
if (lean_obj_tag(v_x_95_) == 0)
{
lean_object* v___x_99_; 
lean_dec(v_h__2_98_);
v___x_99_ = lean_apply_1(v_h__1_97_, v_x_96_);
return v___x_99_;
}
else
{
lean_object* v_head_100_; lean_object* v_tail_101_; lean_object* v___x_102_; 
lean_dec(v_h__1_97_);
v_head_100_ = lean_ctor_get(v_x_95_, 0);
lean_inc(v_head_100_);
v_tail_101_ = lean_ctor_get(v_x_95_, 1);
lean_inc(v_tail_101_);
lean_dec_ref_known(v_x_95_, 2);
v___x_102_ = lean_apply_3(v_h__2_98_, v_head_100_, v_tail_101_, v_x_96_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_removeAll_match__1_splitter(lean_object* v_Msg_103_, lean_object* v_motive_104_, lean_object* v_x_105_, lean_object* v_x_106_, lean_object* v_h__1_107_, lean_object* v_h__2_108_){
_start:
{
if (lean_obj_tag(v_x_105_) == 0)
{
lean_object* v___x_109_; 
lean_dec(v_h__2_108_);
v___x_109_ = lean_apply_1(v_h__1_107_, v_x_106_);
return v___x_109_;
}
else
{
lean_object* v_head_110_; lean_object* v_tail_111_; lean_object* v___x_112_; 
lean_dec(v_h__1_107_);
v_head_110_ = lean_ctor_get(v_x_105_, 0);
lean_inc(v_head_110_);
v_tail_111_ = lean_ctor_get(v_x_105_, 1);
lean_inc(v_tail_111_);
lean_dec_ref_known(v_x_105_, 2);
v___x_112_ = lean_apply_3(v_h__2_108_, v_head_110_, v_tail_111_, v_x_106_);
return v___x_112_;
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Proofs_win_spec__0___redArg(lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
if (lean_obj_tag(v_a_113_) == 0)
{
lean_object* v___x_115_; 
v___x_115_ = lean_array_to_list(v_a_114_);
return v___x_115_;
}
else
{
lean_object* v_head_116_; 
v_head_116_ = lean_ctor_get(v_a_113_, 0);
if (lean_obj_tag(v_head_116_) == 0)
{
lean_object* v_tail_117_; 
v_tail_117_ = lean_ctor_get(v_a_113_, 1);
lean_inc(v_tail_117_);
lean_dec_ref_known(v_a_113_, 2);
v_a_113_ = v_tail_117_;
goto _start;
}
else
{
lean_object* v_tail_119_; lean_object* v_val_120_; lean_object* v___x_121_; 
lean_inc_ref(v_head_116_);
v_tail_119_ = lean_ctor_get(v_a_113_, 1);
lean_inc(v_tail_119_);
lean_dec_ref_known(v_a_113_, 2);
v_val_120_ = lean_ctor_get(v_head_116_, 0);
lean_inc(v_val_120_);
lean_dec_ref_known(v_head_116_, 1);
v___x_121_ = lean_array_push(v_a_114_, v_val_120_);
v_a_113_ = v_tail_119_;
v_a_114_ = v___x_121_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_win___redArg(lean_object* v_oa_125_, lean_object* v_lo_126_, lean_object* v_hi_127_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_128_ = lean_array_to_list(v_oa_125_);
v___x_129_ = l_Lasm_UI_Proofs_slice___redArg(v___x_128_, v_lo_126_, v_hi_127_);
lean_dec(v___x_128_);
v___x_130_ = ((lean_object*)(l_Lasm_UI_Proofs_win___redArg___closed__0));
v___x_131_ = l_List_filterMapTR_go___at___00Lasm_UI_Proofs_win_spec__0___redArg(v___x_129_, v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_win___redArg___boxed(lean_object* v_oa_132_, lean_object* v_lo_133_, lean_object* v_hi_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_Lasm_UI_Proofs_win___redArg(v_oa_132_, v_lo_133_, v_hi_134_);
lean_dec(v_hi_134_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_win(lean_object* v_Msg_136_, lean_object* v_oa_137_, lean_object* v_lo_138_, lean_object* v_hi_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Lasm_UI_Proofs_win___redArg(v_oa_137_, v_lo_138_, v_hi_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_win___boxed(lean_object* v_Msg_141_, lean_object* v_oa_142_, lean_object* v_lo_143_, lean_object* v_hi_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lasm_UI_Proofs_win(v_Msg_141_, v_oa_142_, v_lo_143_, v_hi_144_);
lean_dec(v_hi_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lasm_UI_Proofs_win_spec__0(lean_object* v_Msg_146_, lean_object* v_a_147_, lean_object* v_a_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_List_filterMapTR_go___at___00Lasm_UI_Proofs_win_spec__0___redArg(v_a_147_, v_a_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_removeRange_match__1_splitter___redArg(lean_object* v_x_150_, lean_object* v_h__1_151_, lean_object* v_h__2_152_){
_start:
{
if (lean_obj_tag(v_x_150_) == 1)
{
lean_object* v_val_153_; 
v_val_153_ = lean_ctor_get(v_x_150_, 0);
if (lean_obj_tag(v_val_153_) == 1)
{
lean_object* v_val_154_; lean_object* v___x_155_; 
lean_inc_ref(v_val_153_);
lean_dec_ref_known(v_x_150_, 1);
lean_dec(v_h__2_152_);
v_val_154_ = lean_ctor_get(v_val_153_, 0);
lean_inc(v_val_154_);
lean_dec_ref_known(v_val_153_, 1);
v___x_155_ = lean_apply_1(v_h__1_151_, v_val_154_);
return v___x_155_;
}
else
{
lean_object* v___x_156_; 
lean_dec(v_h__1_151_);
v___x_156_ = lean_apply_2(v_h__2_152_, v_x_150_, lean_box(0));
return v___x_156_;
}
}
else
{
lean_object* v___x_157_; 
lean_dec(v_h__1_151_);
v___x_157_ = lean_apply_2(v_h__2_152_, v_x_150_, lean_box(0));
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Children_0__Lasm_UI_removeRange_match__1_splitter(lean_object* v_Msg_158_, lean_object* v_motive_159_, lean_object* v_x_160_, lean_object* v_h__1_161_, lean_object* v_h__2_162_){
_start:
{
if (lean_obj_tag(v_x_160_) == 1)
{
lean_object* v_val_163_; 
v_val_163_ = lean_ctor_get(v_x_160_, 0);
if (lean_obj_tag(v_val_163_) == 1)
{
lean_object* v_val_164_; lean_object* v___x_165_; 
lean_inc_ref(v_val_163_);
lean_dec_ref_known(v_x_160_, 1);
lean_dec(v_h__2_162_);
v_val_164_ = lean_ctor_get(v_val_163_, 0);
lean_inc(v_val_164_);
lean_dec_ref_known(v_val_163_, 1);
v___x_165_ = lean_apply_1(v_h__1_161_, v_val_164_);
return v___x_165_;
}
else
{
lean_object* v___x_166_; 
lean_dec(v_h__1_161_);
v___x_166_ = lean_apply_2(v_h__2_162_, v_x_160_, lean_box(0));
return v___x_166_;
}
}
else
{
lean_object* v___x_167_; 
lean_dec(v_h__1_161_);
v___x_167_ = lean_apply_2(v_h__2_162_, v_x_160_, lean_box(0));
return v___x_167_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_UI_Proofs_Lists(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Proofs_Children(uint8_t builtin) {
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
res = initialize_Lasm_UI_Proofs_Lists(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
