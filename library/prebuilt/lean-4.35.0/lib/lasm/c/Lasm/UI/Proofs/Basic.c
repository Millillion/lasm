// Lean compiler output
// Module: Lasm.UI.Proofs.Basic
// Imports: public import Init public meta import Init public import Lasm.UI.Model
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
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_toDom_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_toDom_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Live_id_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Live_id_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_Dom_id_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_Dom_id_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_create_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_create_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_createAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_createAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_lastVal_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_lastVal_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_lastVal_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_lastVal_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_attrsEq_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_attrsEq_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_applyAttrOps_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_applyAttrOps_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_applyAttrOp_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_applyAttrOp_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_toDom_match__3_splitter___redArg(lean_object* v_x_1_, lean_object* v_h__1_2_, lean_object* v_h__2_3_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v_id_4_; lean_object* v_s_5_; lean_object* v___x_6_; 
lean_dec(v_h__2_3_);
v_id_4_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_id_4_);
v_s_5_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_s_5_);
lean_dec_ref_known(v_x_1_, 2);
v___x_6_ = lean_apply_2(v_h__1_2_, v_id_4_, v_s_5_);
return v___x_6_;
}
else
{
lean_object* v_id_7_; uint8_t v_ns_8_; lean_object* v_tag_9_; lean_object* v_key_10_; lean_object* v_attrs_11_; lean_object* v_children_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
lean_dec(v_h__1_2_);
v_id_7_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_id_7_);
v_ns_8_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*5);
v_tag_9_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_tag_9_);
v_key_10_ = lean_ctor_get(v_x_1_, 2);
lean_inc(v_key_10_);
v_attrs_11_ = lean_ctor_get(v_x_1_, 3);
lean_inc(v_attrs_11_);
v_children_12_ = lean_ctor_get(v_x_1_, 4);
lean_inc(v_children_12_);
lean_dec_ref_known(v_x_1_, 5);
v___x_13_ = lean_box(v_ns_8_);
v___x_14_ = lean_apply_6(v_h__2_3_, v_id_7_, v___x_13_, v_tag_9_, v_key_10_, v_attrs_11_, v_children_12_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_toDom_match__3_splitter(lean_object* v_Msg_15_, lean_object* v_motive_16_, lean_object* v_x_17_, lean_object* v_h__1_18_, lean_object* v_h__2_19_){
_start:
{
if (lean_obj_tag(v_x_17_) == 0)
{
lean_object* v_id_20_; lean_object* v_s_21_; lean_object* v___x_22_; 
lean_dec(v_h__2_19_);
v_id_20_ = lean_ctor_get(v_x_17_, 0);
lean_inc(v_id_20_);
v_s_21_ = lean_ctor_get(v_x_17_, 1);
lean_inc_ref(v_s_21_);
lean_dec_ref_known(v_x_17_, 2);
v___x_22_ = lean_apply_2(v_h__1_18_, v_id_20_, v_s_21_);
return v___x_22_;
}
else
{
lean_object* v_id_23_; uint8_t v_ns_24_; lean_object* v_tag_25_; lean_object* v_key_26_; lean_object* v_attrs_27_; lean_object* v_children_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
lean_dec(v_h__1_18_);
v_id_23_ = lean_ctor_get(v_x_17_, 0);
lean_inc(v_id_23_);
v_ns_24_ = lean_ctor_get_uint8(v_x_17_, sizeof(void*)*5);
v_tag_25_ = lean_ctor_get(v_x_17_, 1);
lean_inc_ref(v_tag_25_);
v_key_26_ = lean_ctor_get(v_x_17_, 2);
lean_inc(v_key_26_);
v_attrs_27_ = lean_ctor_get(v_x_17_, 3);
lean_inc(v_attrs_27_);
v_children_28_ = lean_ctor_get(v_x_17_, 4);
lean_inc(v_children_28_);
lean_dec_ref_known(v_x_17_, 5);
v___x_29_ = lean_box(v_ns_24_);
v___x_30_ = lean_apply_6(v_h__2_19_, v_id_23_, v___x_29_, v_tag_25_, v_key_26_, v_attrs_27_, v_children_28_);
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Live_id_match__1_splitter___redArg(lean_object* v_x_31_, lean_object* v_h__1_32_, lean_object* v_h__2_33_){
_start:
{
if (lean_obj_tag(v_x_31_) == 0)
{
lean_object* v_id_34_; lean_object* v_s_35_; lean_object* v___x_36_; 
lean_dec(v_h__2_33_);
v_id_34_ = lean_ctor_get(v_x_31_, 0);
lean_inc(v_id_34_);
v_s_35_ = lean_ctor_get(v_x_31_, 1);
lean_inc_ref(v_s_35_);
lean_dec_ref_known(v_x_31_, 2);
v___x_36_ = lean_apply_2(v_h__1_32_, v_id_34_, v_s_35_);
return v___x_36_;
}
else
{
lean_object* v_id_37_; uint8_t v_ns_38_; lean_object* v_tag_39_; lean_object* v_key_40_; lean_object* v_attrs_41_; lean_object* v_children_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
lean_dec(v_h__1_32_);
v_id_37_ = lean_ctor_get(v_x_31_, 0);
lean_inc(v_id_37_);
v_ns_38_ = lean_ctor_get_uint8(v_x_31_, sizeof(void*)*5);
v_tag_39_ = lean_ctor_get(v_x_31_, 1);
lean_inc_ref(v_tag_39_);
v_key_40_ = lean_ctor_get(v_x_31_, 2);
lean_inc(v_key_40_);
v_attrs_41_ = lean_ctor_get(v_x_31_, 3);
lean_inc(v_attrs_41_);
v_children_42_ = lean_ctor_get(v_x_31_, 4);
lean_inc(v_children_42_);
lean_dec_ref_known(v_x_31_, 5);
v___x_43_ = lean_box(v_ns_38_);
v___x_44_ = lean_apply_6(v_h__2_33_, v_id_37_, v___x_43_, v_tag_39_, v_key_40_, v_attrs_41_, v_children_42_);
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Live_id_match__1_splitter(lean_object* v_Msg_45_, lean_object* v_motive_46_, lean_object* v_x_47_, lean_object* v_h__1_48_, lean_object* v_h__2_49_){
_start:
{
if (lean_obj_tag(v_x_47_) == 0)
{
lean_object* v_id_50_; lean_object* v_s_51_; lean_object* v___x_52_; 
lean_dec(v_h__2_49_);
v_id_50_ = lean_ctor_get(v_x_47_, 0);
lean_inc(v_id_50_);
v_s_51_ = lean_ctor_get(v_x_47_, 1);
lean_inc_ref(v_s_51_);
lean_dec_ref_known(v_x_47_, 2);
v___x_52_ = lean_apply_2(v_h__1_48_, v_id_50_, v_s_51_);
return v___x_52_;
}
else
{
lean_object* v_id_53_; uint8_t v_ns_54_; lean_object* v_tag_55_; lean_object* v_key_56_; lean_object* v_attrs_57_; lean_object* v_children_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec(v_h__1_48_);
v_id_53_ = lean_ctor_get(v_x_47_, 0);
lean_inc(v_id_53_);
v_ns_54_ = lean_ctor_get_uint8(v_x_47_, sizeof(void*)*5);
v_tag_55_ = lean_ctor_get(v_x_47_, 1);
lean_inc_ref(v_tag_55_);
v_key_56_ = lean_ctor_get(v_x_47_, 2);
lean_inc(v_key_56_);
v_attrs_57_ = lean_ctor_get(v_x_47_, 3);
lean_inc(v_attrs_57_);
v_children_58_ = lean_ctor_get(v_x_47_, 4);
lean_inc(v_children_58_);
lean_dec_ref_known(v_x_47_, 5);
v___x_59_ = lean_box(v_ns_54_);
v___x_60_ = lean_apply_6(v_h__2_49_, v_id_53_, v___x_59_, v_tag_55_, v_key_56_, v_attrs_57_, v_children_58_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_Dom_id_match__1_splitter___redArg(lean_object* v_x_61_, lean_object* v_h__1_62_, lean_object* v_h__2_63_){
_start:
{
if (lean_obj_tag(v_x_61_) == 0)
{
lean_object* v_id_64_; lean_object* v_s_65_; lean_object* v___x_66_; 
lean_dec(v_h__2_63_);
v_id_64_ = lean_ctor_get(v_x_61_, 0);
lean_inc(v_id_64_);
v_s_65_ = lean_ctor_get(v_x_61_, 1);
lean_inc_ref(v_s_65_);
lean_dec_ref_known(v_x_61_, 2);
v___x_66_ = lean_apply_2(v_h__1_62_, v_id_64_, v_s_65_);
return v___x_66_;
}
else
{
lean_object* v_id_67_; uint8_t v_ns_68_; lean_object* v_tag_69_; lean_object* v_attrs_70_; lean_object* v_children_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
lean_dec(v_h__1_62_);
v_id_67_ = lean_ctor_get(v_x_61_, 0);
lean_inc(v_id_67_);
v_ns_68_ = lean_ctor_get_uint8(v_x_61_, sizeof(void*)*4);
v_tag_69_ = lean_ctor_get(v_x_61_, 1);
lean_inc_ref(v_tag_69_);
v_attrs_70_ = lean_ctor_get(v_x_61_, 2);
lean_inc_ref(v_attrs_70_);
v_children_71_ = lean_ctor_get(v_x_61_, 3);
lean_inc(v_children_71_);
lean_dec_ref_known(v_x_61_, 4);
v___x_72_ = lean_box(v_ns_68_);
v___x_73_ = lean_apply_5(v_h__2_63_, v_id_67_, v___x_72_, v_tag_69_, v_attrs_70_, v_children_71_);
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_Dom_id_match__1_splitter(lean_object* v_motive_74_, lean_object* v_x_75_, lean_object* v_h__1_76_, lean_object* v_h__2_77_){
_start:
{
if (lean_obj_tag(v_x_75_) == 0)
{
lean_object* v_id_78_; lean_object* v_s_79_; lean_object* v___x_80_; 
lean_dec(v_h__2_77_);
v_id_78_ = lean_ctor_get(v_x_75_, 0);
lean_inc(v_id_78_);
v_s_79_ = lean_ctor_get(v_x_75_, 1);
lean_inc_ref(v_s_79_);
lean_dec_ref_known(v_x_75_, 2);
v___x_80_ = lean_apply_2(v_h__1_76_, v_id_78_, v_s_79_);
return v___x_80_;
}
else
{
lean_object* v_id_81_; uint8_t v_ns_82_; lean_object* v_tag_83_; lean_object* v_attrs_84_; lean_object* v_children_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
lean_dec(v_h__1_76_);
v_id_81_ = lean_ctor_get(v_x_75_, 0);
lean_inc(v_id_81_);
v_ns_82_ = lean_ctor_get_uint8(v_x_75_, sizeof(void*)*4);
v_tag_83_ = lean_ctor_get(v_x_75_, 1);
lean_inc_ref(v_tag_83_);
v_attrs_84_ = lean_ctor_get(v_x_75_, 2);
lean_inc_ref(v_attrs_84_);
v_children_85_ = lean_ctor_get(v_x_75_, 3);
lean_inc(v_children_85_);
lean_dec_ref_known(v_x_75_, 4);
v___x_86_ = lean_box(v_ns_82_);
v___x_87_ = lean_apply_5(v_h__2_77_, v_id_81_, v___x_86_, v_tag_83_, v_attrs_84_, v_children_85_);
return v___x_87_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_create_match__1_splitter___redArg(lean_object* v_x_88_, lean_object* v_x_89_, lean_object* v_h__1_90_, lean_object* v_h__2_91_){
_start:
{
if (lean_obj_tag(v_x_88_) == 0)
{
lean_object* v_s_92_; lean_object* v___x_93_; 
lean_dec(v_h__2_91_);
v_s_92_ = lean_ctor_get(v_x_88_, 0);
lean_inc_ref(v_s_92_);
lean_dec_ref_known(v_x_88_, 1);
v___x_93_ = lean_apply_2(v_h__1_90_, v_s_92_, v_x_89_);
return v___x_93_;
}
else
{
uint8_t v_ns_94_; lean_object* v_tag_95_; lean_object* v_key_96_; lean_object* v_attrs_97_; lean_object* v_children_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
lean_dec(v_h__1_90_);
v_ns_94_ = lean_ctor_get_uint8(v_x_88_, sizeof(void*)*4);
v_tag_95_ = lean_ctor_get(v_x_88_, 0);
lean_inc_ref(v_tag_95_);
v_key_96_ = lean_ctor_get(v_x_88_, 1);
lean_inc(v_key_96_);
v_attrs_97_ = lean_ctor_get(v_x_88_, 2);
lean_inc(v_attrs_97_);
v_children_98_ = lean_ctor_get(v_x_88_, 3);
lean_inc(v_children_98_);
lean_dec_ref_known(v_x_88_, 4);
v___x_99_ = lean_box(v_ns_94_);
v___x_100_ = lean_apply_6(v_h__2_91_, v___x_99_, v_tag_95_, v_key_96_, v_attrs_97_, v_children_98_, v_x_89_);
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_create_match__1_splitter(lean_object* v_Msg_101_, lean_object* v_motive_102_, lean_object* v_x_103_, lean_object* v_x_104_, lean_object* v_h__1_105_, lean_object* v_h__2_106_){
_start:
{
if (lean_obj_tag(v_x_103_) == 0)
{
lean_object* v_s_107_; lean_object* v___x_108_; 
lean_dec(v_h__2_106_);
v_s_107_ = lean_ctor_get(v_x_103_, 0);
lean_inc_ref(v_s_107_);
lean_dec_ref_known(v_x_103_, 1);
v___x_108_ = lean_apply_2(v_h__1_105_, v_s_107_, v_x_104_);
return v___x_108_;
}
else
{
uint8_t v_ns_109_; lean_object* v_tag_110_; lean_object* v_key_111_; lean_object* v_attrs_112_; lean_object* v_children_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
lean_dec(v_h__1_105_);
v_ns_109_ = lean_ctor_get_uint8(v_x_103_, sizeof(void*)*4);
v_tag_110_ = lean_ctor_get(v_x_103_, 0);
lean_inc_ref(v_tag_110_);
v_key_111_ = lean_ctor_get(v_x_103_, 1);
lean_inc(v_key_111_);
v_attrs_112_ = lean_ctor_get(v_x_103_, 2);
lean_inc(v_attrs_112_);
v_children_113_ = lean_ctor_get(v_x_103_, 3);
lean_inc(v_children_113_);
lean_dec_ref_known(v_x_103_, 4);
v___x_114_ = lean_box(v_ns_109_);
v___x_115_ = lean_apply_6(v_h__2_106_, v___x_114_, v_tag_110_, v_key_111_, v_attrs_112_, v_children_113_, v_x_104_);
return v___x_115_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_createAux_match__1_splitter___redArg(lean_object* v_x_116_, lean_object* v_x_117_, lean_object* v_x_118_, lean_object* v_h__1_119_, lean_object* v_h__2_120_){
_start:
{
if (lean_obj_tag(v_x_116_) == 0)
{
lean_object* v___x_121_; 
lean_dec(v_h__2_120_);
v___x_121_ = lean_apply_2(v_h__1_119_, v_x_117_, v_x_118_);
return v___x_121_;
}
else
{
lean_object* v_head_122_; lean_object* v_tail_123_; lean_object* v___x_124_; 
lean_dec(v_h__1_119_);
v_head_122_ = lean_ctor_get(v_x_116_, 0);
lean_inc(v_head_122_);
v_tail_123_ = lean_ctor_get(v_x_116_, 1);
lean_inc(v_tail_123_);
lean_dec_ref_known(v_x_116_, 2);
v___x_124_ = lean_apply_4(v_h__2_120_, v_head_122_, v_tail_123_, v_x_117_, v_x_118_);
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_createAux_match__1_splitter(lean_object* v_Msg_125_, lean_object* v_motive_126_, lean_object* v_x_127_, lean_object* v_x_128_, lean_object* v_x_129_, lean_object* v_h__1_130_, lean_object* v_h__2_131_){
_start:
{
if (lean_obj_tag(v_x_127_) == 0)
{
lean_object* v___x_132_; 
lean_dec(v_h__2_131_);
v___x_132_ = lean_apply_2(v_h__1_130_, v_x_128_, v_x_129_);
return v___x_132_;
}
else
{
lean_object* v_head_133_; lean_object* v_tail_134_; lean_object* v___x_135_; 
lean_dec(v_h__1_130_);
v_head_133_ = lean_ctor_get(v_x_127_, 0);
lean_inc(v_head_133_);
v_tail_134_ = lean_ctor_get(v_x_127_, 1);
lean_inc(v_tail_134_);
lean_dec_ref_known(v_x_127_, 2);
v___x_135_ = lean_apply_4(v_h__2_131_, v_head_133_, v_tail_134_, v_x_128_, v_x_129_);
return v___x_135_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_lastVal_match__3_splitter___redArg(lean_object* v_x_136_, lean_object* v_h__1_137_, lean_object* v_h__2_138_){
_start:
{
if (lean_obj_tag(v_x_136_) == 0)
{
lean_object* v___x_139_; lean_object* v___x_140_; 
lean_dec(v_h__2_138_);
v___x_139_ = lean_box(0);
v___x_140_ = lean_apply_1(v_h__1_137_, v___x_139_);
return v___x_140_;
}
else
{
lean_object* v_head_141_; lean_object* v_tail_142_; lean_object* v___x_143_; 
lean_dec(v_h__1_137_);
v_head_141_ = lean_ctor_get(v_x_136_, 0);
lean_inc(v_head_141_);
v_tail_142_ = lean_ctor_get(v_x_136_, 1);
lean_inc(v_tail_142_);
lean_dec_ref_known(v_x_136_, 2);
v___x_143_ = lean_apply_2(v_h__2_138_, v_head_141_, v_tail_142_);
return v___x_143_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_lastVal_match__3_splitter(lean_object* v_Msg_144_, lean_object* v_motive_145_, lean_object* v_x_146_, lean_object* v_h__1_147_, lean_object* v_h__2_148_){
_start:
{
if (lean_obj_tag(v_x_146_) == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; 
lean_dec(v_h__2_148_);
v___x_149_ = lean_box(0);
v___x_150_ = lean_apply_1(v_h__1_147_, v___x_149_);
return v___x_150_;
}
else
{
lean_object* v_head_151_; lean_object* v_tail_152_; lean_object* v___x_153_; 
lean_dec(v_h__1_147_);
v_head_151_ = lean_ctor_get(v_x_146_, 0);
lean_inc(v_head_151_);
v_tail_152_ = lean_ctor_get(v_x_146_, 1);
lean_inc(v_tail_152_);
lean_dec_ref_known(v_x_146_, 2);
v___x_153_ = lean_apply_2(v_h__2_148_, v_head_151_, v_tail_152_);
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_lastVal_match__1_splitter___redArg(lean_object* v_x_154_, lean_object* v_h__1_155_, lean_object* v_h__2_156_){
_start:
{
if (lean_obj_tag(v_x_154_) == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; 
lean_dec(v_h__1_155_);
v___x_157_ = lean_box(0);
v___x_158_ = lean_apply_1(v_h__2_156_, v___x_157_);
return v___x_158_;
}
else
{
lean_object* v_val_159_; lean_object* v___x_160_; 
lean_dec(v_h__2_156_);
v_val_159_ = lean_ctor_get(v_x_154_, 0);
lean_inc(v_val_159_);
lean_dec_ref_known(v_x_154_, 1);
v___x_160_ = lean_apply_1(v_h__1_155_, v_val_159_);
return v___x_160_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_lastVal_match__1_splitter(lean_object* v_motive_161_, lean_object* v_x_162_, lean_object* v_h__1_163_, lean_object* v_h__2_164_){
_start:
{
if (lean_obj_tag(v_x_162_) == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
lean_dec(v_h__1_163_);
v___x_165_ = lean_box(0);
v___x_166_ = lean_apply_1(v_h__2_164_, v___x_165_);
return v___x_166_;
}
else
{
lean_object* v_val_167_; lean_object* v___x_168_; 
lean_dec(v_h__2_164_);
v_val_167_ = lean_ctor_get(v_x_162_, 0);
lean_inc(v_val_167_);
lean_dec_ref_known(v_x_162_, 1);
v___x_168_ = lean_apply_1(v_h__1_163_, v_val_167_);
return v___x_168_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_attrsEq_match__1_splitter___redArg(lean_object* v_x_169_, lean_object* v_x_170_, lean_object* v_h__1_171_, lean_object* v_h__2_172_, lean_object* v_h__3_173_){
_start:
{
if (lean_obj_tag(v_x_169_) == 0)
{
lean_dec(v_h__2_172_);
if (lean_obj_tag(v_x_170_) == 0)
{
lean_object* v___x_174_; lean_object* v___x_175_; 
lean_dec(v_h__3_173_);
v___x_174_ = lean_box(0);
v___x_175_ = lean_apply_1(v_h__1_171_, v___x_174_);
return v___x_175_;
}
else
{
lean_object* v___x_176_; 
lean_dec(v_h__1_171_);
v___x_176_ = lean_apply_4(v_h__3_173_, v_x_169_, v_x_170_, lean_box(0), lean_box(0));
return v___x_176_;
}
}
else
{
lean_dec(v_h__1_171_);
if (lean_obj_tag(v_x_170_) == 1)
{
lean_object* v_head_177_; lean_object* v_tail_178_; lean_object* v_head_179_; lean_object* v_tail_180_; lean_object* v___x_181_; 
lean_dec(v_h__3_173_);
v_head_177_ = lean_ctor_get(v_x_169_, 0);
lean_inc(v_head_177_);
v_tail_178_ = lean_ctor_get(v_x_169_, 1);
lean_inc(v_tail_178_);
lean_dec_ref_known(v_x_169_, 2);
v_head_179_ = lean_ctor_get(v_x_170_, 0);
lean_inc(v_head_179_);
v_tail_180_ = lean_ctor_get(v_x_170_, 1);
lean_inc(v_tail_180_);
lean_dec_ref_known(v_x_170_, 2);
v___x_181_ = lean_apply_4(v_h__2_172_, v_head_177_, v_tail_178_, v_head_179_, v_tail_180_);
return v___x_181_;
}
else
{
lean_object* v___x_182_; 
lean_dec(v_h__2_172_);
v___x_182_ = lean_apply_4(v_h__3_173_, v_x_169_, v_x_170_, lean_box(0), lean_box(0));
return v___x_182_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_attrsEq_match__1_splitter(lean_object* v_Msg_183_, lean_object* v_motive_184_, lean_object* v_x_185_, lean_object* v_x_186_, lean_object* v_h__1_187_, lean_object* v_h__2_188_, lean_object* v_h__3_189_){
_start:
{
if (lean_obj_tag(v_x_185_) == 0)
{
lean_dec(v_h__2_188_);
if (lean_obj_tag(v_x_186_) == 0)
{
lean_object* v___x_190_; lean_object* v___x_191_; 
lean_dec(v_h__3_189_);
v___x_190_ = lean_box(0);
v___x_191_ = lean_apply_1(v_h__1_187_, v___x_190_);
return v___x_191_;
}
else
{
lean_object* v___x_192_; 
lean_dec(v_h__1_187_);
v___x_192_ = lean_apply_4(v_h__3_189_, v_x_185_, v_x_186_, lean_box(0), lean_box(0));
return v___x_192_;
}
}
else
{
lean_dec(v_h__1_187_);
if (lean_obj_tag(v_x_186_) == 1)
{
lean_object* v_head_193_; lean_object* v_tail_194_; lean_object* v_head_195_; lean_object* v_tail_196_; lean_object* v___x_197_; 
lean_dec(v_h__3_189_);
v_head_193_ = lean_ctor_get(v_x_185_, 0);
lean_inc(v_head_193_);
v_tail_194_ = lean_ctor_get(v_x_185_, 1);
lean_inc(v_tail_194_);
lean_dec_ref_known(v_x_185_, 2);
v_head_195_ = lean_ctor_get(v_x_186_, 0);
lean_inc(v_head_195_);
v_tail_196_ = lean_ctor_get(v_x_186_, 1);
lean_inc(v_tail_196_);
lean_dec_ref_known(v_x_186_, 2);
v___x_197_ = lean_apply_4(v_h__2_188_, v_head_193_, v_tail_194_, v_head_195_, v_tail_196_);
return v___x_197_;
}
else
{
lean_object* v___x_198_; 
lean_dec(v_h__2_188_);
v___x_198_ = lean_apply_4(v_h__3_189_, v_x_185_, v_x_186_, lean_box(0), lean_box(0));
return v___x_198_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_applyAttrOps_match__1_splitter___redArg(lean_object* v_x_199_, lean_object* v_x_200_, lean_object* v_h__1_201_, lean_object* v_h__2_202_){
_start:
{
if (lean_obj_tag(v_x_199_) == 0)
{
lean_object* v___x_203_; 
lean_dec(v_h__2_202_);
v___x_203_ = lean_apply_1(v_h__1_201_, v_x_200_);
return v___x_203_;
}
else
{
lean_object* v_head_204_; lean_object* v_tail_205_; lean_object* v___x_206_; 
lean_dec(v_h__1_201_);
v_head_204_ = lean_ctor_get(v_x_199_, 0);
lean_inc(v_head_204_);
v_tail_205_ = lean_ctor_get(v_x_199_, 1);
lean_inc(v_tail_205_);
lean_dec_ref_known(v_x_199_, 2);
v___x_206_ = lean_apply_3(v_h__2_202_, v_head_204_, v_tail_205_, v_x_200_);
return v___x_206_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_applyAttrOps_match__1_splitter(lean_object* v_motive_207_, lean_object* v_x_208_, lean_object* v_x_209_, lean_object* v_h__1_210_, lean_object* v_h__2_211_){
_start:
{
if (lean_obj_tag(v_x_208_) == 0)
{
lean_object* v___x_212_; 
lean_dec(v_h__2_211_);
v___x_212_ = lean_apply_1(v_h__1_210_, v_x_209_);
return v___x_212_;
}
else
{
lean_object* v_head_213_; lean_object* v_tail_214_; lean_object* v___x_215_; 
lean_dec(v_h__1_210_);
v_head_213_ = lean_ctor_get(v_x_208_, 0);
lean_inc(v_head_213_);
v_tail_214_ = lean_ctor_get(v_x_208_, 1);
lean_inc(v_tail_214_);
lean_dec_ref_known(v_x_208_, 2);
v___x_215_ = lean_apply_3(v_h__2_211_, v_head_213_, v_tail_214_, v_x_209_);
return v___x_215_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_applyAttrOp_match__1_splitter___redArg(lean_object* v_x_216_, lean_object* v_x_217_, lean_object* v_h__1_218_, lean_object* v_h__2_219_){
_start:
{
if (lean_obj_tag(v_x_216_) == 0)
{
lean_object* v_k_220_; lean_object* v_v_221_; lean_object* v___x_222_; 
lean_dec(v_h__2_219_);
v_k_220_ = lean_ctor_get(v_x_216_, 0);
lean_inc_ref(v_k_220_);
v_v_221_ = lean_ctor_get(v_x_216_, 1);
lean_inc_ref(v_v_221_);
lean_dec_ref_known(v_x_216_, 2);
v___x_222_ = lean_apply_3(v_h__1_218_, v_k_220_, v_v_221_, v_x_217_);
return v___x_222_;
}
else
{
lean_object* v_k_223_; lean_object* v___x_224_; 
lean_dec(v_h__1_218_);
v_k_223_ = lean_ctor_get(v_x_216_, 0);
lean_inc_ref(v_k_223_);
lean_dec_ref_known(v_x_216_, 1);
v___x_224_ = lean_apply_2(v_h__2_219_, v_k_223_, v_x_217_);
return v___x_224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Basic_0__Lasm_UI_Model_applyAttrOp_match__1_splitter(lean_object* v_motive_225_, lean_object* v_x_226_, lean_object* v_x_227_, lean_object* v_h__1_228_, lean_object* v_h__2_229_){
_start:
{
if (lean_obj_tag(v_x_226_) == 0)
{
lean_object* v_k_230_; lean_object* v_v_231_; lean_object* v___x_232_; 
lean_dec(v_h__2_229_);
v_k_230_ = lean_ctor_get(v_x_226_, 0);
lean_inc_ref(v_k_230_);
v_v_231_ = lean_ctor_get(v_x_226_, 1);
lean_inc_ref(v_v_231_);
lean_dec_ref_known(v_x_226_, 2);
v___x_232_ = lean_apply_3(v_h__1_228_, v_k_230_, v_v_231_, v_x_227_);
return v___x_232_;
}
else
{
lean_object* v_k_233_; lean_object* v___x_234_; 
lean_dec(v_h__1_228_);
v_k_233_ = lean_ctor_get(v_x_226_, 0);
lean_inc_ref(v_k_233_);
lean_dec_ref_known(v_x_226_, 1);
v___x_234_ = lean_apply_2(v_h__2_229_, v_k_233_, v_x_227_);
return v___x_234_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_UI_Model(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Proofs_Basic(uint8_t builtin) {
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
res = initialize_Lasm_UI_Model(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
