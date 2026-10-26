// Lean compiler output
// Module: Lasm.UI.Model
// Imports: public import Init public meta import Init public import Lasm.UI.Diff
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lasm_UI_instDecidableEqAttrKey_decEq(lean_object*, lean_object*);
lean_object* l_Lasm_UI_lastVal___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_text_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_elem_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_elem_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_id(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_id___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_setText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_modAttrs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_modChildren(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_toDom_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_toDom_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyAttrOp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyAttrOp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyAttrOps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_insertBefore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_insertBefore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_findId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_findId___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Model_removeId_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Model_removeId_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_removeId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_removeId___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_modId_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_modId_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_modId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_modId___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorIdx(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lasm_UI_Model_Dom_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_id_8_; lean_object* v_s_9_; lean_object* v___x_10_; 
v_id_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_id_8_);
v_s_9_ = lean_ctor_get(v_t_6_, 1);
lean_inc_ref(v_s_9_);
lean_dec_ref_known(v_t_6_, 2);
v___x_10_ = lean_apply_2(v_k_7_, v_id_8_, v_s_9_);
return v___x_10_;
}
else
{
lean_object* v_id_11_; uint8_t v_ns_12_; lean_object* v_tag_13_; lean_object* v_attrs_14_; lean_object* v_children_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v_id_11_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_id_11_);
v_ns_12_ = lean_ctor_get_uint8(v_t_6_, sizeof(void*)*4);
v_tag_13_ = lean_ctor_get(v_t_6_, 1);
lean_inc_ref(v_tag_13_);
v_attrs_14_ = lean_ctor_get(v_t_6_, 2);
lean_inc_ref(v_attrs_14_);
v_children_15_ = lean_ctor_get(v_t_6_, 3);
lean_inc(v_children_15_);
lean_dec_ref_known(v_t_6_, 4);
v___x_16_ = lean_box(v_ns_12_);
v___x_17_ = lean_apply_5(v_k_7_, v_id_11_, v___x_16_, v_tag_13_, v_attrs_14_, v_children_15_);
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorElim(lean_object* v_motive__1_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lasm_UI_Model_Dom_ctorElim___redArg(v_t_20_, v_k_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorElim___boxed(lean_object* v_motive__1_24_, lean_object* v_ctorIdx_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lasm_UI_Model_Dom_ctorElim(v_motive__1_24_, v_ctorIdx_25_, v_t_26_, v_h_27_, v_k_28_);
lean_dec(v_ctorIdx_25_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_text_elim___redArg(lean_object* v_t_30_, lean_object* v_text_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lasm_UI_Model_Dom_ctorElim___redArg(v_t_30_, v_text_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_text_elim(lean_object* v_motive__1_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_text_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lasm_UI_Model_Dom_ctorElim___redArg(v_t_34_, v_text_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_elem_elim___redArg(lean_object* v_t_38_, lean_object* v_elem_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lasm_UI_Model_Dom_ctorElim___redArg(v_t_38_, v_elem_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_elem_elim(lean_object* v_motive__1_41_, lean_object* v_t_42_, lean_object* v_h_43_, lean_object* v_elem_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lasm_UI_Model_Dom_ctorElim___redArg(v_t_42_, v_elem_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_id(lean_object* v_x_46_){
_start:
{
lean_object* v_id_47_; 
v_id_47_ = lean_ctor_get(v_x_46_, 0);
lean_inc(v_id_47_);
return v_id_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_id___boxed(lean_object* v_x_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lasm_UI_Model_Dom_id(v_x_48_);
lean_dec_ref(v_x_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_setText(lean_object* v_s_50_, lean_object* v_x_51_){
_start:
{
if (lean_obj_tag(v_x_51_) == 0)
{
lean_object* v_id_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_59_; 
v_id_52_ = lean_ctor_get(v_x_51_, 0);
v_isSharedCheck_59_ = !lean_is_exclusive(v_x_51_);
if (v_isSharedCheck_59_ == 0)
{
lean_object* v_unused_60_; 
v_unused_60_ = lean_ctor_get(v_x_51_, 1);
lean_dec(v_unused_60_);
v___x_54_ = v_x_51_;
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_id_52_);
lean_dec(v_x_51_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_57_; 
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 1, v_s_50_);
v___x_57_ = v___x_54_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_id_52_);
lean_ctor_set(v_reuseFailAlloc_58_, 1, v_s_50_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
}
else
{
lean_dec_ref(v_s_50_);
return v_x_51_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_modAttrs(lean_object* v_g_61_, lean_object* v_x_62_){
_start:
{
if (lean_obj_tag(v_x_62_) == 1)
{
lean_object* v_id_63_; uint8_t v_ns_64_; lean_object* v_tag_65_; lean_object* v_attrs_66_; lean_object* v_children_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_75_; 
v_id_63_ = lean_ctor_get(v_x_62_, 0);
v_ns_64_ = lean_ctor_get_uint8(v_x_62_, sizeof(void*)*4);
v_tag_65_ = lean_ctor_get(v_x_62_, 1);
v_attrs_66_ = lean_ctor_get(v_x_62_, 2);
v_children_67_ = lean_ctor_get(v_x_62_, 3);
v_isSharedCheck_75_ = !lean_is_exclusive(v_x_62_);
if (v_isSharedCheck_75_ == 0)
{
v___x_69_ = v_x_62_;
v_isShared_70_ = v_isSharedCheck_75_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_children_67_);
lean_inc(v_attrs_66_);
lean_inc(v_tag_65_);
lean_inc(v_id_63_);
lean_dec(v_x_62_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_75_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_71_ = lean_apply_1(v_g_61_, v_attrs_66_);
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 2, v___x_71_);
v___x_73_ = v___x_69_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_id_63_);
lean_ctor_set(v_reuseFailAlloc_74_, 1, v_tag_65_);
lean_ctor_set(v_reuseFailAlloc_74_, 2, v___x_71_);
lean_ctor_set(v_reuseFailAlloc_74_, 3, v_children_67_);
lean_ctor_set_uint8(v_reuseFailAlloc_74_, sizeof(void*)*4, v_ns_64_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
else
{
lean_dec_ref(v_g_61_);
return v_x_62_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_modChildren(lean_object* v_g_76_, lean_object* v_x_77_){
_start:
{
if (lean_obj_tag(v_x_77_) == 1)
{
lean_object* v_id_78_; uint8_t v_ns_79_; lean_object* v_tag_80_; lean_object* v_attrs_81_; lean_object* v_children_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_90_; 
v_id_78_ = lean_ctor_get(v_x_77_, 0);
v_ns_79_ = lean_ctor_get_uint8(v_x_77_, sizeof(void*)*4);
v_tag_80_ = lean_ctor_get(v_x_77_, 1);
v_attrs_81_ = lean_ctor_get(v_x_77_, 2);
v_children_82_ = lean_ctor_get(v_x_77_, 3);
v_isSharedCheck_90_ = !lean_is_exclusive(v_x_77_);
if (v_isSharedCheck_90_ == 0)
{
v___x_84_ = v_x_77_;
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_children_82_);
lean_inc(v_attrs_81_);
lean_inc(v_tag_80_);
lean_inc(v_id_78_);
lean_dec(v_x_77_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; lean_object* v___x_88_; 
v___x_86_ = lean_apply_1(v_g_76_, v_children_82_);
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 3, v___x_86_);
v___x_88_ = v___x_84_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_id_78_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v_tag_80_);
lean_ctor_set(v_reuseFailAlloc_89_, 2, v_attrs_81_);
lean_ctor_set(v_reuseFailAlloc_89_, 3, v___x_86_);
lean_ctor_set_uint8(v_reuseFailAlloc_89_, sizeof(void*)*4, v_ns_79_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
else
{
lean_dec_ref(v_g_76_);
return v_x_77_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf___redArg(lean_object* v_l_91_, lean_object* v_k_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = l_Lasm_UI_lastVal___redArg(v_k_92_, v_l_91_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf___redArg___boxed(lean_object* v_l_94_, lean_object* v_k_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Lasm_UI_Model_attrsOf___redArg(v_l_94_, v_k_95_);
lean_dec_ref(v_k_95_);
lean_dec(v_l_94_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf(lean_object* v_Msg_97_, lean_object* v_l_98_, lean_object* v_k_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = l_Lasm_UI_lastVal___redArg(v_k_99_, v_l_98_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf___boxed(lean_object* v_Msg_101_, lean_object* v_l_102_, lean_object* v_k_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lasm_UI_Model_attrsOf(v_Msg_101_, v_l_102_, v_k_103_);
lean_dec_ref(v_k_103_);
lean_dec(v_l_102_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom___redArg___lam__0(lean_object* v_attrs_105_, lean_object* v___y_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l_Lasm_UI_lastVal___redArg(v___y_106_, v_attrs_105_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom___redArg___lam__0___boxed(lean_object* v_attrs_108_, lean_object* v___y_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lasm_UI_Model_toDom___redArg___lam__0(v_attrs_108_, v___y_109_);
lean_dec_ref(v___y_109_);
lean_dec(v_attrs_108_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom___redArg(lean_object* v_x_111_){
_start:
{
if (lean_obj_tag(v_x_111_) == 0)
{
lean_object* v_id_112_; lean_object* v_s_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_120_; 
v_id_112_ = lean_ctor_get(v_x_111_, 0);
v_s_113_ = lean_ctor_get(v_x_111_, 1);
v_isSharedCheck_120_ = !lean_is_exclusive(v_x_111_);
if (v_isSharedCheck_120_ == 0)
{
v___x_115_ = v_x_111_;
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_s_113_);
lean_inc(v_id_112_);
lean_dec(v_x_111_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_118_; 
if (v_isShared_116_ == 0)
{
v___x_118_ = v___x_115_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_id_112_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v_s_113_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
else
{
lean_object* v_id_121_; uint8_t v_ns_122_; lean_object* v_tag_123_; lean_object* v_attrs_124_; lean_object* v_children_125_; lean_object* v___f_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v_id_121_ = lean_ctor_get(v_x_111_, 0);
lean_inc(v_id_121_);
v_ns_122_ = lean_ctor_get_uint8(v_x_111_, sizeof(void*)*5);
v_tag_123_ = lean_ctor_get(v_x_111_, 1);
lean_inc_ref(v_tag_123_);
v_attrs_124_ = lean_ctor_get(v_x_111_, 3);
lean_inc(v_attrs_124_);
v_children_125_ = lean_ctor_get(v_x_111_, 4);
lean_inc(v_children_125_);
lean_dec_ref_known(v_x_111_, 5);
v___f_126_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_toDom___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_126_, 0, v_attrs_124_);
v___x_127_ = lean_box(0);
v___x_128_ = l_List_mapTR_loop___at___00Lasm_UI_Model_toDom_spec__0___redArg(v_children_125_, v___x_127_);
v___x_129_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_129_, 0, v_id_121_);
lean_ctor_set(v___x_129_, 1, v_tag_123_);
lean_ctor_set(v___x_129_, 2, v___f_126_);
lean_ctor_set(v___x_129_, 3, v___x_128_);
lean_ctor_set_uint8(v___x_129_, sizeof(void*)*4, v_ns_122_);
return v___x_129_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_toDom_spec__0___redArg(lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
if (lean_obj_tag(v_a_130_) == 0)
{
lean_object* v___x_132_; 
v___x_132_ = l_List_reverse___redArg(v_a_131_);
return v___x_132_;
}
else
{
lean_object* v_head_133_; lean_object* v_tail_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_143_; 
v_head_133_ = lean_ctor_get(v_a_130_, 0);
v_tail_134_ = lean_ctor_get(v_a_130_, 1);
v_isSharedCheck_143_ = !lean_is_exclusive(v_a_130_);
if (v_isSharedCheck_143_ == 0)
{
v___x_136_ = v_a_130_;
v_isShared_137_ = v_isSharedCheck_143_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_tail_134_);
lean_inc(v_head_133_);
lean_dec(v_a_130_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_143_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_138_ = l_Lasm_UI_Model_toDom___redArg(v_head_133_);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 1, v_a_131_);
lean_ctor_set(v___x_136_, 0, v___x_138_);
v___x_140_ = v___x_136_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_138_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v_a_131_);
v___x_140_ = v_reuseFailAlloc_142_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
v_a_130_ = v_tail_134_;
v_a_131_ = v___x_140_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom(lean_object* v_Msg_144_, lean_object* v_x_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lasm_UI_Model_toDom___redArg(v_x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_toDom_spec__0(lean_object* v_Msg_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = l_List_mapTR_loop___at___00Lasm_UI_Model_toDom_spec__0___redArg(v_a_148_, v_a_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__3_splitter___redArg(lean_object* v_x_151_, lean_object* v_h__1_152_, lean_object* v_h__2_153_){
_start:
{
if (lean_obj_tag(v_x_151_) == 0)
{
lean_object* v_id_154_; lean_object* v_s_155_; lean_object* v___x_156_; 
lean_dec(v_h__2_153_);
v_id_154_ = lean_ctor_get(v_x_151_, 0);
lean_inc(v_id_154_);
v_s_155_ = lean_ctor_get(v_x_151_, 1);
lean_inc_ref(v_s_155_);
lean_dec_ref_known(v_x_151_, 2);
v___x_156_ = lean_apply_2(v_h__1_152_, v_id_154_, v_s_155_);
return v___x_156_;
}
else
{
lean_object* v_id_157_; uint8_t v_ns_158_; lean_object* v_tag_159_; lean_object* v_key_160_; lean_object* v_attrs_161_; lean_object* v_children_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
lean_dec(v_h__1_152_);
v_id_157_ = lean_ctor_get(v_x_151_, 0);
lean_inc(v_id_157_);
v_ns_158_ = lean_ctor_get_uint8(v_x_151_, sizeof(void*)*5);
v_tag_159_ = lean_ctor_get(v_x_151_, 1);
lean_inc_ref(v_tag_159_);
v_key_160_ = lean_ctor_get(v_x_151_, 2);
lean_inc(v_key_160_);
v_attrs_161_ = lean_ctor_get(v_x_151_, 3);
lean_inc(v_attrs_161_);
v_children_162_ = lean_ctor_get(v_x_151_, 4);
lean_inc(v_children_162_);
lean_dec_ref_known(v_x_151_, 5);
v___x_163_ = lean_box(v_ns_158_);
v___x_164_ = lean_apply_6(v_h__2_153_, v_id_157_, v___x_163_, v_tag_159_, v_key_160_, v_attrs_161_, v_children_162_);
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__3_splitter(lean_object* v_Msg_165_, lean_object* v_motive_166_, lean_object* v_x_167_, lean_object* v_h__1_168_, lean_object* v_h__2_169_){
_start:
{
if (lean_obj_tag(v_x_167_) == 0)
{
lean_object* v_id_170_; lean_object* v_s_171_; lean_object* v___x_172_; 
lean_dec(v_h__2_169_);
v_id_170_ = lean_ctor_get(v_x_167_, 0);
lean_inc(v_id_170_);
v_s_171_ = lean_ctor_get(v_x_167_, 1);
lean_inc_ref(v_s_171_);
lean_dec_ref_known(v_x_167_, 2);
v___x_172_ = lean_apply_2(v_h__1_168_, v_id_170_, v_s_171_);
return v___x_172_;
}
else
{
lean_object* v_id_173_; uint8_t v_ns_174_; lean_object* v_tag_175_; lean_object* v_key_176_; lean_object* v_attrs_177_; lean_object* v_children_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
lean_dec(v_h__1_168_);
v_id_173_ = lean_ctor_get(v_x_167_, 0);
lean_inc(v_id_173_);
v_ns_174_ = lean_ctor_get_uint8(v_x_167_, sizeof(void*)*5);
v_tag_175_ = lean_ctor_get(v_x_167_, 1);
lean_inc_ref(v_tag_175_);
v_key_176_ = lean_ctor_get(v_x_167_, 2);
lean_inc(v_key_176_);
v_attrs_177_ = lean_ctor_get(v_x_167_, 3);
lean_inc(v_attrs_177_);
v_children_178_ = lean_ctor_get(v_x_167_, 4);
lean_inc(v_children_178_);
lean_dec_ref_known(v_x_167_, 5);
v___x_179_ = lean_box(v_ns_174_);
v___x_180_ = lean_apply_6(v_h__2_169_, v_id_173_, v___x_179_, v_tag_175_, v_key_176_, v_attrs_177_, v_children_178_);
return v___x_180_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__1_splitter___redArg(lean_object* v_x_181_, lean_object* v_h__1_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = lean_apply_2(v_h__1_182_, v_x_181_, lean_box(0));
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__1_splitter(lean_object* v_Msg_184_, lean_object* v_cs_185_, lean_object* v_motive_186_, lean_object* v_x_187_, lean_object* v_h__1_188_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lean_apply_2(v_h__1_188_, v_x_187_, lean_box(0));
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__1_splitter___boxed(lean_object* v_Msg_190_, lean_object* v_cs_191_, lean_object* v_motive_192_, lean_object* v_x_193_, lean_object* v_h__1_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__1_splitter(v_Msg_190_, v_cs_191_, v_motive_192_, v_x_193_, v_h__1_194_);
lean_dec(v_cs_191_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyAttrOp(lean_object* v_x_196_, lean_object* v_x_197_, lean_object* v_a_198_){
_start:
{
if (lean_obj_tag(v_x_196_) == 0)
{
lean_object* v_k_199_; lean_object* v_v_200_; uint8_t v___x_201_; 
v_k_199_ = lean_ctor_get(v_x_196_, 0);
v_v_200_ = lean_ctor_get(v_x_196_, 1);
v___x_201_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_a_198_, v_k_199_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; 
v___x_202_ = lean_apply_1(v_x_197_, v_a_198_);
return v___x_202_;
}
else
{
lean_object* v___x_203_; 
lean_dec_ref(v_a_198_);
lean_dec_ref(v_x_197_);
lean_inc_ref(v_v_200_);
v___x_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_203_, 0, v_v_200_);
return v___x_203_;
}
}
else
{
lean_object* v_k_204_; uint8_t v___x_205_; 
v_k_204_ = lean_ctor_get(v_x_196_, 0);
v___x_205_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_a_198_, v_k_204_);
if (v___x_205_ == 0)
{
lean_object* v___x_206_; 
v___x_206_ = lean_apply_1(v_x_197_, v_a_198_);
return v___x_206_;
}
else
{
lean_object* v___x_207_; 
lean_dec_ref(v_a_198_);
lean_dec_ref(v_x_197_);
v___x_207_ = lean_box(0);
return v___x_207_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyAttrOp___boxed(lean_object* v_x_208_, lean_object* v_x_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lasm_UI_Model_applyAttrOp(v_x_208_, v_x_209_, v_a_210_);
lean_dec_ref(v_x_208_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyAttrOps(lean_object* v_x_212_, lean_object* v_x_213_, lean_object* v_a_214_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
lean_object* v___x_215_; 
v___x_215_ = lean_apply_1(v_x_213_, v_a_214_);
return v___x_215_;
}
else
{
lean_object* v_head_216_; lean_object* v_tail_217_; lean_object* v___x_218_; 
v_head_216_ = lean_ctor_get(v_x_212_, 0);
lean_inc(v_head_216_);
v_tail_217_ = lean_ctor_get(v_x_212_, 1);
lean_inc(v_tail_217_);
lean_dec_ref_known(v_x_212_, 2);
v___x_218_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_applyAttrOp___boxed), 3, 2);
lean_closure_set(v___x_218_, 0, v_head_216_);
lean_closure_set(v___x_218_, 1, v_x_213_);
v_x_212_ = v_tail_217_;
v_x_213_ = v___x_218_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_insertBefore(lean_object* v_d_220_, lean_object* v_x_221_, lean_object* v_x_222_){
_start:
{
if (lean_obj_tag(v_x_221_) == 0)
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_223_ = lean_box(0);
v___x_224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_224_, 0, v_d_220_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = l_List_appendTR___redArg(v_x_222_, v___x_224_);
return v___x_225_;
}
else
{
if (lean_obj_tag(v_x_222_) == 0)
{
lean_object* v___x_226_; 
v___x_226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_226_, 0, v_d_220_);
lean_ctor_set(v___x_226_, 1, v_x_222_);
return v___x_226_;
}
else
{
lean_object* v_val_227_; lean_object* v_head_228_; lean_object* v_tail_229_; lean_object* v___y_231_; lean_object* v_id_244_; 
v_val_227_ = lean_ctor_get(v_x_221_, 0);
v_head_228_ = lean_ctor_get(v_x_222_, 0);
v_tail_229_ = lean_ctor_get(v_x_222_, 1);
v_id_244_ = lean_ctor_get(v_head_228_, 0);
lean_inc(v_id_244_);
v___y_231_ = v_id_244_;
goto v___jp_230_;
v___jp_230_:
{
uint8_t v___x_232_; 
v___x_232_ = lean_nat_dec_eq(v___y_231_, v_val_227_);
lean_dec(v___y_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_240_; 
lean_inc(v_tail_229_);
lean_inc(v_head_228_);
v_isSharedCheck_240_ = !lean_is_exclusive(v_x_222_);
if (v_isSharedCheck_240_ == 0)
{
lean_object* v_unused_241_; lean_object* v_unused_242_; 
v_unused_241_ = lean_ctor_get(v_x_222_, 1);
lean_dec(v_unused_241_);
v_unused_242_ = lean_ctor_get(v_x_222_, 0);
lean_dec(v_unused_242_);
v___x_234_ = v_x_222_;
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
else
{
lean_dec(v_x_222_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_236_ = l_Lasm_UI_Model_insertBefore(v_d_220_, v_x_221_, v_tail_229_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 1, v___x_236_);
v___x_238_ = v___x_234_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_head_228_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
else
{
lean_object* v___x_243_; 
v___x_243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_243_, 0, v_d_220_);
lean_ctor_set(v___x_243_, 1, v_x_222_);
return v___x_243_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_insertBefore___boxed(lean_object* v_d_245_, lean_object* v_x_246_, lean_object* v_x_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lasm_UI_Model_insertBefore(v_d_245_, v_x_246_, v_x_247_);
lean_dec(v_x_246_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_findId(lean_object* v_i_249_, lean_object* v_x_250_){
_start:
{
if (lean_obj_tag(v_x_250_) == 0)
{
lean_object* v___x_251_; 
v___x_251_ = lean_box(0);
return v___x_251_;
}
else
{
lean_object* v_head_252_; lean_object* v_tail_253_; lean_object* v___y_255_; lean_object* v_id_259_; 
v_head_252_ = lean_ctor_get(v_x_250_, 0);
v_tail_253_ = lean_ctor_get(v_x_250_, 1);
v_id_259_ = lean_ctor_get(v_head_252_, 0);
v___y_255_ = v_id_259_;
goto v___jp_254_;
v___jp_254_:
{
uint8_t v___x_256_; 
v___x_256_ = lean_nat_dec_eq(v___y_255_, v_i_249_);
if (v___x_256_ == 0)
{
v_x_250_ = v_tail_253_;
goto _start;
}
else
{
lean_object* v___x_258_; 
lean_inc(v_head_252_);
v___x_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_258_, 0, v_head_252_);
return v___x_258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_findId___boxed(lean_object* v_i_260_, lean_object* v_x_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lasm_UI_Model_findId(v_i_260_, v_x_261_);
lean_dec(v_x_261_);
lean_dec(v_i_260_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Model_removeId_spec__0(lean_object* v_i_263_, lean_object* v_a_264_, lean_object* v_a_265_){
_start:
{
if (lean_obj_tag(v_a_264_) == 0)
{
lean_object* v___x_266_; 
v___x_266_ = l_List_reverse___redArg(v_a_265_);
return v___x_266_;
}
else
{
lean_object* v_head_267_; lean_object* v_tail_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_281_; 
v_head_267_ = lean_ctor_get(v_a_264_, 0);
v_tail_268_ = lean_ctor_get(v_a_264_, 1);
v_isSharedCheck_281_ = !lean_is_exclusive(v_a_264_);
if (v_isSharedCheck_281_ == 0)
{
v___x_270_ = v_a_264_;
v_isShared_271_ = v_isSharedCheck_281_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_tail_268_);
lean_inc(v_head_267_);
lean_dec(v_a_264_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_281_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___y_273_; lean_object* v_id_280_; 
v_id_280_ = lean_ctor_get(v_head_267_, 0);
lean_inc(v_id_280_);
v___y_273_ = v_id_280_;
goto v___jp_272_;
v___jp_272_:
{
uint8_t v___x_274_; 
v___x_274_ = lean_nat_dec_eq(v___y_273_, v_i_263_);
lean_dec(v___y_273_);
if (v___x_274_ == 0)
{
lean_object* v___x_276_; 
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 1, v_a_265_);
v___x_276_ = v___x_270_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_head_267_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_a_265_);
v___x_276_ = v_reuseFailAlloc_278_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
v_a_264_ = v_tail_268_;
v_a_265_ = v___x_276_;
goto _start;
}
}
else
{
lean_del_object(v___x_270_);
lean_dec(v_head_267_);
v_a_264_ = v_tail_268_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Model_removeId_spec__0___boxed(lean_object* v_i_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_List_filterTR_loop___at___00Lasm_UI_Model_removeId_spec__0(v_i_282_, v_a_283_, v_a_284_);
lean_dec(v_i_282_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_removeId(lean_object* v_i_286_, lean_object* v_l_287_){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_box(0);
v___x_289_ = l_List_filterTR_loop___at___00Lasm_UI_Model_removeId_spec__0(v_i_286_, v_l_287_, v___x_288_);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_removeId___boxed(lean_object* v_i_290_, lean_object* v_l_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lasm_UI_Model_removeId(v_i_290_, v_l_291_);
lean_dec(v_i_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_modId_spec__0(lean_object* v_i_293_, lean_object* v_g_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
if (lean_obj_tag(v_a_295_) == 0)
{
lean_object* v___x_297_; 
lean_dec_ref(v_g_294_);
v___x_297_ = l_List_reverse___redArg(v_a_296_);
return v___x_297_;
}
else
{
lean_object* v_head_298_; lean_object* v_tail_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_314_; 
v_head_298_ = lean_ctor_get(v_a_295_, 0);
v_tail_299_ = lean_ctor_get(v_a_295_, 1);
v_isSharedCheck_314_ = !lean_is_exclusive(v_a_295_);
if (v_isSharedCheck_314_ == 0)
{
v___x_301_ = v_a_295_;
v_isShared_302_ = v_isSharedCheck_314_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_tail_299_);
lean_inc(v_head_298_);
lean_dec(v_a_295_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_314_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___y_304_; lean_object* v___y_310_; lean_object* v_id_313_; 
v_id_313_ = lean_ctor_get(v_head_298_, 0);
lean_inc(v_id_313_);
v___y_310_ = v_id_313_;
goto v___jp_309_;
v___jp_303_:
{
lean_object* v___x_306_; 
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 1, v_a_296_);
lean_ctor_set(v___x_301_, 0, v___y_304_);
v___x_306_ = v___x_301_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___y_304_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v_a_296_);
v___x_306_ = v_reuseFailAlloc_308_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
v_a_295_ = v_tail_299_;
v_a_296_ = v___x_306_;
goto _start;
}
}
v___jp_309_:
{
uint8_t v___x_311_; 
v___x_311_ = lean_nat_dec_eq(v___y_310_, v_i_293_);
lean_dec(v___y_310_);
if (v___x_311_ == 0)
{
v___y_304_ = v_head_298_;
goto v___jp_303_;
}
else
{
lean_object* v___x_312_; 
lean_inc_ref(v_g_294_);
v___x_312_ = lean_apply_1(v_g_294_, v_head_298_);
v___y_304_ = v___x_312_;
goto v___jp_303_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_modId_spec__0___boxed(lean_object* v_i_315_, lean_object* v_g_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_List_mapTR_loop___at___00Lasm_UI_Model_modId_spec__0(v_i_315_, v_g_316_, v_a_317_, v_a_318_);
lean_dec(v_i_315_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_modId(lean_object* v_i_320_, lean_object* v_g_321_, lean_object* v_l_322_){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_323_ = lean_box(0);
v___x_324_ = l_List_mapTR_loop___at___00Lasm_UI_Model_modId_spec__0(v_i_320_, v_g_321_, v_l_322_, v___x_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_modId___boxed(lean_object* v_i_325_, lean_object* v_g_326_, lean_object* v_l_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lasm_UI_Model_modId(v_i_325_, v_g_326_, v_l_327_);
lean_dec(v_i_325_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOp___redArg(lean_object* v_x_329_, lean_object* v_x_330_){
_start:
{
switch(lean_obj_tag(v_x_329_))
{
case 0:
{
lean_object* v_node_331_; lean_object* v_before_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v_node_331_ = lean_ctor_get(v_x_329_, 0);
lean_inc_ref(v_node_331_);
v_before_332_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_before_332_);
lean_dec_ref_known(v_x_329_, 2);
v___x_333_ = l_Lasm_UI_Model_toDom___redArg(v_node_331_);
v___x_334_ = l_Lasm_UI_Model_insertBefore(v___x_333_, v_before_332_, v_x_330_);
lean_dec(v_before_332_);
return v___x_334_;
}
case 1:
{
lean_object* v_id_335_; lean_object* v_before_336_; lean_object* v___x_337_; 
v_id_335_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_id_335_);
v_before_336_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_before_336_);
lean_dec_ref_known(v_x_329_, 2);
v___x_337_ = l_Lasm_UI_Model_findId(v_id_335_, v_x_330_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_dec(v_before_336_);
lean_dec(v_id_335_);
return v_x_330_;
}
else
{
lean_object* v_val_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_val_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_val_338_);
lean_dec_ref_known(v___x_337_, 1);
v___x_339_ = l_Lasm_UI_Model_removeId(v_id_335_, v_x_330_);
lean_dec(v_id_335_);
v___x_340_ = l_Lasm_UI_Model_insertBefore(v_val_338_, v_before_336_, v___x_339_);
lean_dec(v_before_336_);
return v___x_340_;
}
}
case 2:
{
lean_object* v_id_341_; lean_object* v___x_342_; 
v_id_341_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_id_341_);
lean_dec_ref_known(v_x_329_, 1);
v___x_342_ = l_Lasm_UI_Model_removeId(v_id_341_, v_x_330_);
lean_dec(v_id_341_);
return v___x_342_;
}
case 3:
{
lean_object* v___x_343_; 
lean_dec(v_x_330_);
v___x_343_ = lean_box(0);
return v___x_343_;
}
case 4:
{
lean_object* v_id_344_; lean_object* v_s_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_id_344_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_id_344_);
v_s_345_ = lean_ctor_get(v_x_329_, 1);
lean_inc_ref(v_s_345_);
lean_dec_ref_known(v_x_329_, 2);
v___x_346_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_Dom_setText), 2, 1);
lean_closure_set(v___x_346_, 0, v_s_345_);
v___x_347_ = l_Lasm_UI_Model_modId(v_id_344_, v___x_346_, v_x_330_);
lean_dec(v_id_344_);
return v___x_347_;
}
case 5:
{
lean_object* v_id_348_; lean_object* v_ops_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v_id_348_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_id_348_);
v_ops_349_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_ops_349_);
lean_dec_ref_known(v_x_329_, 2);
v___x_350_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_applyAttrOps), 3, 1);
lean_closure_set(v___x_350_, 0, v_ops_349_);
v___x_351_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_Dom_modAttrs), 2, 1);
lean_closure_set(v___x_351_, 0, v___x_350_);
v___x_352_ = l_Lasm_UI_Model_modId(v_id_348_, v___x_351_, v_x_330_);
lean_dec(v_id_348_);
return v___x_352_;
}
default: 
{
lean_object* v_id_353_; lean_object* v_ops_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v_id_353_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_id_353_);
v_ops_354_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_ops_354_);
lean_dec_ref_known(v_x_329_, 2);
v___x_355_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_applyOps), 3, 2);
lean_closure_set(v___x_355_, 0, lean_box(0));
lean_closure_set(v___x_355_, 1, v_ops_354_);
v___x_356_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_Dom_modChildren), 2, 1);
lean_closure_set(v___x_356_, 0, v___x_355_);
v___x_357_ = l_Lasm_UI_Model_modId(v_id_353_, v___x_356_, v_x_330_);
lean_dec(v_id_353_);
return v___x_357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOps___redArg(lean_object* v_x_358_, lean_object* v_x_359_){
_start:
{
if (lean_obj_tag(v_x_358_) == 0)
{
return v_x_359_;
}
else
{
lean_object* v_head_360_; lean_object* v_tail_361_; lean_object* v___x_362_; 
v_head_360_ = lean_ctor_get(v_x_358_, 0);
lean_inc(v_head_360_);
v_tail_361_ = lean_ctor_get(v_x_358_, 1);
lean_inc(v_tail_361_);
lean_dec_ref_known(v_x_358_, 2);
v___x_362_ = l_Lasm_UI_Model_applyOp___redArg(v_head_360_, v_x_359_);
v_x_358_ = v_tail_361_;
v_x_359_ = v___x_362_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOps(lean_object* v_Msg_364_, lean_object* v_x_365_, lean_object* v_x_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l_Lasm_UI_Model_applyOps___redArg(v_x_365_, v_x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOp(lean_object* v_Msg_368_, lean_object* v_x_369_, lean_object* v_x_370_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lasm_UI_Model_applyOp___redArg(v_x_369_, v_x_370_);
return v___x_371_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_UI_Diff(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Model(uint8_t builtin) {
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
res = initialize_Lasm_UI_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
