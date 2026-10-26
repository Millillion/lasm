// Lean compiler output
// Module: Lasm.UI.Proofs.Diff
// Imports: public import Init public meta import Init public import Lasm.UI.Proofs.TwoEnded
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
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_prefixPhase_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_prefixPhase_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_diffChildren_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_diffChildren_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_Live_same_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_Live_same_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_Model_Dom_modAttrs_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_Model_Dom_modAttrs_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_prefixPhase_match__1_splitter___redArg(lean_object* v_x_1_, lean_object* v_x_2_, lean_object* v_x_3_, lean_object* v_x_4_, lean_object* v_x_5_, lean_object* v_h__1_6_, lean_object* v_h__2_7_, lean_object* v_h__3_8_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_9_; 
lean_dec(v_h__3_8_);
lean_dec(v_h__2_7_);
v___x_9_ = lean_apply_4(v_h__1_6_, v_x_2_, v_x_3_, v_x_4_, v_x_5_);
return v___x_9_;
}
else
{
lean_dec(v_h__1_6_);
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v_head_10_; lean_object* v_tail_11_; lean_object* v___x_12_; 
lean_dec(v_h__3_8_);
v_head_10_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_head_10_);
v_tail_11_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_tail_11_);
lean_dec_ref_known(v_x_1_, 2);
v___x_12_ = lean_apply_5(v_h__2_7_, v_head_10_, v_tail_11_, v_x_3_, v_x_4_, v_x_5_);
return v___x_12_;
}
else
{
lean_object* v_head_13_; lean_object* v_tail_14_; lean_object* v_head_15_; lean_object* v_tail_16_; lean_object* v___x_17_; 
lean_dec(v_h__2_7_);
v_head_13_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_head_13_);
v_tail_14_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_tail_14_);
lean_dec_ref_known(v_x_1_, 2);
v_head_15_ = lean_ctor_get(v_x_2_, 0);
lean_inc(v_head_15_);
v_tail_16_ = lean_ctor_get(v_x_2_, 1);
lean_inc(v_tail_16_);
lean_dec_ref_known(v_x_2_, 2);
v___x_17_ = lean_apply_7(v_h__3_8_, v_head_13_, v_tail_14_, v_head_15_, v_tail_16_, v_x_3_, v_x_4_, v_x_5_);
return v___x_17_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_prefixPhase_match__1_splitter(lean_object* v_Msg_18_, lean_object* v_00_u03b2_19_, lean_object* v_motive_20_, lean_object* v_x_21_, lean_object* v_x_22_, lean_object* v_x_23_, lean_object* v_x_24_, lean_object* v_x_25_, lean_object* v_h__1_26_, lean_object* v_h__2_27_, lean_object* v_h__3_28_){
_start:
{
if (lean_obj_tag(v_x_21_) == 0)
{
lean_object* v___x_29_; 
lean_dec(v_h__3_28_);
lean_dec(v_h__2_27_);
v___x_29_ = lean_apply_4(v_h__1_26_, v_x_22_, v_x_23_, v_x_24_, v_x_25_);
return v___x_29_;
}
else
{
lean_dec(v_h__1_26_);
if (lean_obj_tag(v_x_22_) == 0)
{
lean_object* v_head_30_; lean_object* v_tail_31_; lean_object* v___x_32_; 
lean_dec(v_h__3_28_);
v_head_30_ = lean_ctor_get(v_x_21_, 0);
lean_inc(v_head_30_);
v_tail_31_ = lean_ctor_get(v_x_21_, 1);
lean_inc(v_tail_31_);
lean_dec_ref_known(v_x_21_, 2);
v___x_32_ = lean_apply_5(v_h__2_27_, v_head_30_, v_tail_31_, v_x_23_, v_x_24_, v_x_25_);
return v___x_32_;
}
else
{
lean_object* v_head_33_; lean_object* v_tail_34_; lean_object* v_head_35_; lean_object* v_tail_36_; lean_object* v___x_37_; 
lean_dec(v_h__2_27_);
v_head_33_ = lean_ctor_get(v_x_21_, 0);
lean_inc(v_head_33_);
v_tail_34_ = lean_ctor_get(v_x_21_, 1);
lean_inc(v_tail_34_);
lean_dec_ref_known(v_x_21_, 2);
v_head_35_ = lean_ctor_get(v_x_22_, 0);
lean_inc(v_head_35_);
v_tail_36_ = lean_ctor_get(v_x_22_, 1);
lean_inc(v_tail_36_);
lean_dec_ref_known(v_x_22_, 2);
v___x_37_ = lean_apply_7(v_h__3_28_, v_head_33_, v_tail_34_, v_head_35_, v_tail_36_, v_x_23_, v_x_24_, v_x_25_);
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_diffChildren_match__1_splitter___redArg(lean_object* v_old_38_, lean_object* v_new_39_, lean_object* v_h__1_40_, lean_object* v_h__2_41_, lean_object* v_h__3_42_){
_start:
{
if (lean_obj_tag(v_old_38_) == 0)
{
lean_dec(v_h__2_41_);
if (lean_obj_tag(v_new_39_) == 0)
{
lean_object* v___x_43_; lean_object* v___x_44_; 
lean_dec(v_h__3_42_);
v___x_43_ = lean_box(0);
v___x_44_ = lean_apply_1(v_h__1_40_, v___x_43_);
return v___x_44_;
}
else
{
lean_object* v___x_45_; 
lean_dec(v_h__1_40_);
v___x_45_ = lean_apply_4(v_h__3_42_, v_old_38_, v_new_39_, lean_box(0), lean_box(0));
return v___x_45_;
}
}
else
{
lean_dec(v_h__1_40_);
if (lean_obj_tag(v_new_39_) == 0)
{
lean_object* v_head_46_; lean_object* v_tail_47_; lean_object* v___x_48_; 
lean_dec(v_h__3_42_);
v_head_46_ = lean_ctor_get(v_old_38_, 0);
lean_inc(v_head_46_);
v_tail_47_ = lean_ctor_get(v_old_38_, 1);
lean_inc(v_tail_47_);
lean_dec_ref_known(v_old_38_, 2);
v___x_48_ = lean_apply_2(v_h__2_41_, v_head_46_, v_tail_47_);
return v___x_48_;
}
else
{
lean_object* v___x_49_; 
lean_dec(v_h__2_41_);
v___x_49_ = lean_apply_4(v_h__3_42_, v_old_38_, v_new_39_, lean_box(0), lean_box(0));
return v___x_49_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_diffChildren_match__1_splitter(lean_object* v_Msg_50_, lean_object* v_00_u03b2_51_, lean_object* v_motive_52_, lean_object* v_old_53_, lean_object* v_new_54_, lean_object* v_h__1_55_, lean_object* v_h__2_56_, lean_object* v_h__3_57_){
_start:
{
if (lean_obj_tag(v_old_53_) == 0)
{
lean_dec(v_h__2_56_);
if (lean_obj_tag(v_new_54_) == 0)
{
lean_object* v___x_58_; lean_object* v___x_59_; 
lean_dec(v_h__3_57_);
v___x_58_ = lean_box(0);
v___x_59_ = lean_apply_1(v_h__1_55_, v___x_58_);
return v___x_59_;
}
else
{
lean_object* v___x_60_; 
lean_dec(v_h__1_55_);
v___x_60_ = lean_apply_4(v_h__3_57_, v_old_53_, v_new_54_, lean_box(0), lean_box(0));
return v___x_60_;
}
}
else
{
lean_dec(v_h__1_55_);
if (lean_obj_tag(v_new_54_) == 0)
{
lean_object* v_head_61_; lean_object* v_tail_62_; lean_object* v___x_63_; 
lean_dec(v_h__3_57_);
v_head_61_ = lean_ctor_get(v_old_53_, 0);
lean_inc(v_head_61_);
v_tail_62_ = lean_ctor_get(v_old_53_, 1);
lean_inc(v_tail_62_);
lean_dec_ref_known(v_old_53_, 2);
v___x_63_ = lean_apply_2(v_h__2_56_, v_head_61_, v_tail_62_);
return v___x_63_;
}
else
{
lean_object* v___x_64_; 
lean_dec(v_h__2_56_);
v___x_64_ = lean_apply_4(v_h__3_57_, v_old_53_, v_new_54_, lean_box(0), lean_box(0));
return v___x_64_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_Live_same_match__1_splitter___redArg(lean_object* v_x_65_, lean_object* v_x_66_, lean_object* v_h__1_67_, lean_object* v_h__2_68_, lean_object* v_h__3_69_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
lean_dec(v_h__2_68_);
if (lean_obj_tag(v_x_66_) == 0)
{
lean_object* v_id_70_; lean_object* v_s_71_; lean_object* v_s_72_; lean_object* v___x_73_; 
lean_dec(v_h__3_69_);
v_id_70_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_id_70_);
v_s_71_ = lean_ctor_get(v_x_65_, 1);
lean_inc_ref(v_s_71_);
lean_dec_ref_known(v_x_65_, 2);
v_s_72_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_s_72_);
lean_dec_ref_known(v_x_66_, 1);
v___x_73_ = lean_apply_3(v_h__1_67_, v_id_70_, v_s_71_, v_s_72_);
return v___x_73_;
}
else
{
lean_object* v___x_74_; 
lean_dec(v_h__1_67_);
v___x_74_ = lean_apply_4(v_h__3_69_, v_x_65_, v_x_66_, lean_box(0), lean_box(0));
return v___x_74_;
}
}
else
{
lean_dec(v_h__1_67_);
if (lean_obj_tag(v_x_66_) == 1)
{
lean_object* v_id_75_; uint8_t v_ns_76_; lean_object* v_tag_77_; lean_object* v_key_78_; lean_object* v_attrs_79_; lean_object* v_children_80_; uint8_t v_ns_81_; lean_object* v_tag_82_; lean_object* v_key_83_; lean_object* v_attrs_84_; lean_object* v_children_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
lean_dec(v_h__3_69_);
v_id_75_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_id_75_);
v_ns_76_ = lean_ctor_get_uint8(v_x_65_, sizeof(void*)*5);
v_tag_77_ = lean_ctor_get(v_x_65_, 1);
lean_inc_ref(v_tag_77_);
v_key_78_ = lean_ctor_get(v_x_65_, 2);
lean_inc(v_key_78_);
v_attrs_79_ = lean_ctor_get(v_x_65_, 3);
lean_inc(v_attrs_79_);
v_children_80_ = lean_ctor_get(v_x_65_, 4);
lean_inc(v_children_80_);
lean_dec_ref_known(v_x_65_, 5);
v_ns_81_ = lean_ctor_get_uint8(v_x_66_, sizeof(void*)*4);
v_tag_82_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_tag_82_);
v_key_83_ = lean_ctor_get(v_x_66_, 1);
lean_inc(v_key_83_);
v_attrs_84_ = lean_ctor_get(v_x_66_, 2);
lean_inc(v_attrs_84_);
v_children_85_ = lean_ctor_get(v_x_66_, 3);
lean_inc(v_children_85_);
lean_dec_ref_known(v_x_66_, 4);
v___x_86_ = lean_box(v_ns_76_);
v___x_87_ = lean_box(v_ns_81_);
v___x_88_ = lean_apply_11(v_h__2_68_, v_id_75_, v___x_86_, v_tag_77_, v_key_78_, v_attrs_79_, v_children_80_, v___x_87_, v_tag_82_, v_key_83_, v_attrs_84_, v_children_85_);
return v___x_88_;
}
else
{
lean_object* v___x_89_; 
lean_dec(v_h__2_68_);
v___x_89_ = lean_apply_4(v_h__3_69_, v_x_65_, v_x_66_, lean_box(0), lean_box(0));
return v___x_89_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_Live_same_match__1_splitter(lean_object* v_Msg_90_, lean_object* v_motive_91_, lean_object* v_x_92_, lean_object* v_x_93_, lean_object* v_h__1_94_, lean_object* v_h__2_95_, lean_object* v_h__3_96_){
_start:
{
if (lean_obj_tag(v_x_92_) == 0)
{
lean_dec(v_h__2_95_);
if (lean_obj_tag(v_x_93_) == 0)
{
lean_object* v_id_97_; lean_object* v_s_98_; lean_object* v_s_99_; lean_object* v___x_100_; 
lean_dec(v_h__3_96_);
v_id_97_ = lean_ctor_get(v_x_92_, 0);
lean_inc(v_id_97_);
v_s_98_ = lean_ctor_get(v_x_92_, 1);
lean_inc_ref(v_s_98_);
lean_dec_ref_known(v_x_92_, 2);
v_s_99_ = lean_ctor_get(v_x_93_, 0);
lean_inc_ref(v_s_99_);
lean_dec_ref_known(v_x_93_, 1);
v___x_100_ = lean_apply_3(v_h__1_94_, v_id_97_, v_s_98_, v_s_99_);
return v___x_100_;
}
else
{
lean_object* v___x_101_; 
lean_dec(v_h__1_94_);
v___x_101_ = lean_apply_4(v_h__3_96_, v_x_92_, v_x_93_, lean_box(0), lean_box(0));
return v___x_101_;
}
}
else
{
lean_dec(v_h__1_94_);
if (lean_obj_tag(v_x_93_) == 1)
{
lean_object* v_id_102_; uint8_t v_ns_103_; lean_object* v_tag_104_; lean_object* v_key_105_; lean_object* v_attrs_106_; lean_object* v_children_107_; uint8_t v_ns_108_; lean_object* v_tag_109_; lean_object* v_key_110_; lean_object* v_attrs_111_; lean_object* v_children_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
lean_dec(v_h__3_96_);
v_id_102_ = lean_ctor_get(v_x_92_, 0);
lean_inc(v_id_102_);
v_ns_103_ = lean_ctor_get_uint8(v_x_92_, sizeof(void*)*5);
v_tag_104_ = lean_ctor_get(v_x_92_, 1);
lean_inc_ref(v_tag_104_);
v_key_105_ = lean_ctor_get(v_x_92_, 2);
lean_inc(v_key_105_);
v_attrs_106_ = lean_ctor_get(v_x_92_, 3);
lean_inc(v_attrs_106_);
v_children_107_ = lean_ctor_get(v_x_92_, 4);
lean_inc(v_children_107_);
lean_dec_ref_known(v_x_92_, 5);
v_ns_108_ = lean_ctor_get_uint8(v_x_93_, sizeof(void*)*4);
v_tag_109_ = lean_ctor_get(v_x_93_, 0);
lean_inc_ref(v_tag_109_);
v_key_110_ = lean_ctor_get(v_x_93_, 1);
lean_inc(v_key_110_);
v_attrs_111_ = lean_ctor_get(v_x_93_, 2);
lean_inc(v_attrs_111_);
v_children_112_ = lean_ctor_get(v_x_93_, 3);
lean_inc(v_children_112_);
lean_dec_ref_known(v_x_93_, 4);
v___x_113_ = lean_box(v_ns_103_);
v___x_114_ = lean_box(v_ns_108_);
v___x_115_ = lean_apply_11(v_h__2_95_, v_id_102_, v___x_113_, v_tag_104_, v_key_105_, v_attrs_106_, v_children_107_, v___x_114_, v_tag_109_, v_key_110_, v_attrs_111_, v_children_112_);
return v___x_115_;
}
else
{
lean_object* v___x_116_; 
lean_dec(v_h__2_95_);
v___x_116_ = lean_apply_4(v_h__3_96_, v_x_92_, v_x_93_, lean_box(0), lean_box(0));
return v___x_116_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_Model_Dom_modAttrs_match__1_splitter___redArg(lean_object* v_x_117_, lean_object* v_h__1_118_, lean_object* v_h__2_119_){
_start:
{
if (lean_obj_tag(v_x_117_) == 1)
{
lean_object* v_id_120_; uint8_t v_ns_121_; lean_object* v_tag_122_; lean_object* v_attrs_123_; lean_object* v_children_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
lean_dec(v_h__2_119_);
v_id_120_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_id_120_);
v_ns_121_ = lean_ctor_get_uint8(v_x_117_, sizeof(void*)*4);
v_tag_122_ = lean_ctor_get(v_x_117_, 1);
lean_inc_ref(v_tag_122_);
v_attrs_123_ = lean_ctor_get(v_x_117_, 2);
lean_inc_ref(v_attrs_123_);
v_children_124_ = lean_ctor_get(v_x_117_, 3);
lean_inc(v_children_124_);
lean_dec_ref_known(v_x_117_, 4);
v___x_125_ = lean_box(v_ns_121_);
v___x_126_ = lean_apply_5(v_h__1_118_, v_id_120_, v___x_125_, v_tag_122_, v_attrs_123_, v_children_124_);
return v___x_126_;
}
else
{
lean_object* v___x_127_; 
lean_dec(v_h__1_118_);
v___x_127_ = lean_apply_2(v_h__2_119_, v_x_117_, lean_box(0));
return v___x_127_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Proofs_Diff_0__Lasm_UI_Model_Dom_modAttrs_match__1_splitter(lean_object* v_motive_128_, lean_object* v_x_129_, lean_object* v_h__1_130_, lean_object* v_h__2_131_){
_start:
{
if (lean_obj_tag(v_x_129_) == 1)
{
lean_object* v_id_132_; uint8_t v_ns_133_; lean_object* v_tag_134_; lean_object* v_attrs_135_; lean_object* v_children_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
lean_dec(v_h__2_131_);
v_id_132_ = lean_ctor_get(v_x_129_, 0);
lean_inc(v_id_132_);
v_ns_133_ = lean_ctor_get_uint8(v_x_129_, sizeof(void*)*4);
v_tag_134_ = lean_ctor_get(v_x_129_, 1);
lean_inc_ref(v_tag_134_);
v_attrs_135_ = lean_ctor_get(v_x_129_, 2);
lean_inc_ref(v_attrs_135_);
v_children_136_ = lean_ctor_get(v_x_129_, 3);
lean_inc(v_children_136_);
lean_dec_ref_known(v_x_129_, 4);
v___x_137_ = lean_box(v_ns_133_);
v___x_138_ = lean_apply_5(v_h__1_130_, v_id_132_, v___x_137_, v_tag_134_, v_attrs_135_, v_children_136_);
return v___x_138_;
}
else
{
lean_object* v___x_139_; 
lean_dec(v_h__1_130_);
v___x_139_ = lean_apply_2(v_h__2_131_, v_x_129_, lean_box(0));
return v___x_139_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_UI_Proofs_TwoEnded(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Proofs_Diff(uint8_t builtin) {
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
res = initialize_Lasm_UI_Proofs_TwoEnded(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
