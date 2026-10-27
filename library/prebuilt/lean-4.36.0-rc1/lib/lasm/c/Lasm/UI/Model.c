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
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lasm_UI_Model_Dom_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
lean_object* v_id_7_; lean_object* v_s_8_; lean_object* v___x_9_; 
v_id_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_id_7_);
v_s_8_ = lean_ctor_get(v_t_5_, 1);
lean_inc_ref(v_s_8_);
lean_dec_ref_known(v_t_5_, 2);
v___x_9_ = lean_apply_2(v_k_6_, v_id_7_, v_s_8_);
return v___x_9_;
}
else
{
lean_object* v_id_10_; uint8_t v_ns_11_; lean_object* v_tag_12_; lean_object* v_attrs_13_; lean_object* v_children_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v_id_10_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_id_10_);
v_ns_11_ = lean_ctor_get_uint8(v_t_5_, sizeof(void*)*4);
v_tag_12_ = lean_ctor_get(v_t_5_, 1);
lean_inc_ref(v_tag_12_);
v_attrs_13_ = lean_ctor_get(v_t_5_, 2);
lean_inc_ref(v_attrs_13_);
v_children_14_ = lean_ctor_get(v_t_5_, 3);
lean_inc(v_children_14_);
lean_dec_ref_known(v_t_5_, 4);
v___x_15_ = lean_box(v_ns_11_);
v___x_16_ = lean_apply_5(v_k_6_, v_id_10_, v___x_15_, v_tag_12_, v_attrs_13_, v_children_14_);
return v___x_16_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorElim(lean_object* v_motive__1_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = l_Lasm_UI_Model_Dom_ctorElim___redArg(v_t_19_, v_k_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_ctorElim___boxed(lean_object* v_motive__1_23_, lean_object* v_ctorIdx_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_k_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lasm_UI_Model_Dom_ctorElim(v_motive__1_23_, v_ctorIdx_24_, v_t_25_, v_h_26_, v_k_27_);
lean_dec(v_ctorIdx_24_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_text_elim___redArg(lean_object* v_t_29_, lean_object* v_text_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lasm_UI_Model_Dom_ctorElim___redArg(v_t_29_, v_text_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_text_elim(lean_object* v_motive__1_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_text_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lasm_UI_Model_Dom_ctorElim___redArg(v_t_33_, v_text_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_elem_elim___redArg(lean_object* v_t_37_, lean_object* v_elem_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lasm_UI_Model_Dom_ctorElim___redArg(v_t_37_, v_elem_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_elem_elim(lean_object* v_motive__1_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_elem_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lasm_UI_Model_Dom_ctorElim___redArg(v_t_41_, v_elem_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_id(lean_object* v_x_45_){
_start:
{
lean_object* v_id_46_; 
v_id_46_ = lean_ctor_get(v_x_45_, 0);
lean_inc(v_id_46_);
return v_id_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_id___boxed(lean_object* v_x_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lasm_UI_Model_Dom_id(v_x_47_);
lean_dec_ref(v_x_47_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_setText(lean_object* v_s_49_, lean_object* v_x_50_){
_start:
{
if (lean_obj_tag(v_x_50_) == 0)
{
lean_object* v_id_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_58_; 
v_id_51_ = lean_ctor_get(v_x_50_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v_x_50_);
if (v_isSharedCheck_58_ == 0)
{
lean_object* v_unused_59_; 
v_unused_59_ = lean_ctor_get(v_x_50_, 1);
lean_dec(v_unused_59_);
v___x_53_ = v_x_50_;
v_isShared_54_ = v_isSharedCheck_58_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_id_51_);
lean_dec(v_x_50_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_58_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v___x_56_; 
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 1, v_s_49_);
v___x_56_ = v___x_53_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v_id_51_);
lean_ctor_set(v_reuseFailAlloc_57_, 1, v_s_49_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
else
{
lean_dec_ref(v_s_49_);
return v_x_50_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_modAttrs(lean_object* v_g_60_, lean_object* v_x_61_){
_start:
{
if (lean_obj_tag(v_x_61_) == 1)
{
lean_object* v_id_62_; uint8_t v_ns_63_; lean_object* v_tag_64_; lean_object* v_attrs_65_; lean_object* v_children_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_74_; 
v_id_62_ = lean_ctor_get(v_x_61_, 0);
v_ns_63_ = lean_ctor_get_uint8(v_x_61_, sizeof(void*)*4);
v_tag_64_ = lean_ctor_get(v_x_61_, 1);
v_attrs_65_ = lean_ctor_get(v_x_61_, 2);
v_children_66_ = lean_ctor_get(v_x_61_, 3);
v_isSharedCheck_74_ = !lean_is_exclusive(v_x_61_);
if (v_isSharedCheck_74_ == 0)
{
v___x_68_ = v_x_61_;
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_children_66_);
lean_inc(v_attrs_65_);
lean_inc(v_tag_64_);
lean_inc(v_id_62_);
lean_dec(v_x_61_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___x_70_; lean_object* v___x_72_; 
v___x_70_ = lean_apply_1(v_g_60_, v_attrs_65_);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 2, v___x_70_);
v___x_72_ = v___x_68_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_id_62_);
lean_ctor_set(v_reuseFailAlloc_73_, 1, v_tag_64_);
lean_ctor_set(v_reuseFailAlloc_73_, 2, v___x_70_);
lean_ctor_set(v_reuseFailAlloc_73_, 3, v_children_66_);
lean_ctor_set_uint8(v_reuseFailAlloc_73_, sizeof(void*)*4, v_ns_63_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
return v___x_72_;
}
}
}
else
{
lean_dec_ref(v_g_60_);
return v_x_61_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_Dom_modChildren(lean_object* v_g_75_, lean_object* v_x_76_){
_start:
{
if (lean_obj_tag(v_x_76_) == 1)
{
lean_object* v_id_77_; uint8_t v_ns_78_; lean_object* v_tag_79_; lean_object* v_attrs_80_; lean_object* v_children_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_89_; 
v_id_77_ = lean_ctor_get(v_x_76_, 0);
v_ns_78_ = lean_ctor_get_uint8(v_x_76_, sizeof(void*)*4);
v_tag_79_ = lean_ctor_get(v_x_76_, 1);
v_attrs_80_ = lean_ctor_get(v_x_76_, 2);
v_children_81_ = lean_ctor_get(v_x_76_, 3);
v_isSharedCheck_89_ = !lean_is_exclusive(v_x_76_);
if (v_isSharedCheck_89_ == 0)
{
v___x_83_ = v_x_76_;
v_isShared_84_ = v_isSharedCheck_89_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_children_81_);
lean_inc(v_attrs_80_);
lean_inc(v_tag_79_);
lean_inc(v_id_77_);
lean_dec(v_x_76_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_89_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_85_; lean_object* v___x_87_; 
v___x_85_ = lean_apply_1(v_g_75_, v_children_81_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 3, v___x_85_);
v___x_87_ = v___x_83_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_id_77_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v_tag_79_);
lean_ctor_set(v_reuseFailAlloc_88_, 2, v_attrs_80_);
lean_ctor_set(v_reuseFailAlloc_88_, 3, v___x_85_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*4, v_ns_78_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
else
{
lean_dec_ref(v_g_75_);
return v_x_76_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf___redArg(lean_object* v_l_90_, lean_object* v_k_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lasm_UI_lastVal___redArg(v_k_91_, v_l_90_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf___redArg___boxed(lean_object* v_l_93_, lean_object* v_k_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lasm_UI_Model_attrsOf___redArg(v_l_93_, v_k_94_);
lean_dec_ref(v_k_94_);
lean_dec(v_l_93_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf(lean_object* v_Msg_96_, lean_object* v_l_97_, lean_object* v_k_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lasm_UI_lastVal___redArg(v_k_98_, v_l_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_attrsOf___boxed(lean_object* v_Msg_100_, lean_object* v_l_101_, lean_object* v_k_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lasm_UI_Model_attrsOf(v_Msg_100_, v_l_101_, v_k_102_);
lean_dec_ref(v_k_102_);
lean_dec(v_l_101_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom___redArg___lam__0(lean_object* v_attrs_104_, lean_object* v___y_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lasm_UI_lastVal___redArg(v___y_105_, v_attrs_104_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom___redArg___lam__0___boxed(lean_object* v_attrs_107_, lean_object* v___y_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lasm_UI_Model_toDom___redArg___lam__0(v_attrs_107_, v___y_108_);
lean_dec_ref(v___y_108_);
lean_dec(v_attrs_107_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom___redArg(lean_object* v_x_110_){
_start:
{
if (lean_obj_tag(v_x_110_) == 0)
{
lean_object* v_id_111_; lean_object* v_s_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
v_id_111_ = lean_ctor_get(v_x_110_, 0);
v_s_112_ = lean_ctor_get(v_x_110_, 1);
v_isSharedCheck_119_ = !lean_is_exclusive(v_x_110_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v_x_110_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_s_112_);
lean_inc(v_id_111_);
lean_dec(v_x_110_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_id_111_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v_s_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
else
{
lean_object* v_id_120_; uint8_t v_ns_121_; lean_object* v_tag_122_; lean_object* v_attrs_123_; lean_object* v_children_124_; lean_object* v___f_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v_id_120_ = lean_ctor_get(v_x_110_, 0);
lean_inc(v_id_120_);
v_ns_121_ = lean_ctor_get_uint8(v_x_110_, sizeof(void*)*5);
v_tag_122_ = lean_ctor_get(v_x_110_, 1);
lean_inc_ref(v_tag_122_);
v_attrs_123_ = lean_ctor_get(v_x_110_, 3);
lean_inc(v_attrs_123_);
v_children_124_ = lean_ctor_get(v_x_110_, 4);
lean_inc(v_children_124_);
lean_dec_ref_known(v_x_110_, 5);
v___f_125_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_toDom___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_125_, 0, v_attrs_123_);
v___x_126_ = lean_box(0);
v___x_127_ = l_List_mapTR_loop___at___00Lasm_UI_Model_toDom_spec__0___redArg(v_children_124_, v___x_126_);
v___x_128_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_128_, 0, v_id_120_);
lean_ctor_set(v___x_128_, 1, v_tag_122_);
lean_ctor_set(v___x_128_, 2, v___f_125_);
lean_ctor_set(v___x_128_, 3, v___x_127_);
lean_ctor_set_uint8(v___x_128_, sizeof(void*)*4, v_ns_121_);
return v___x_128_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_toDom_spec__0___redArg(lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
if (lean_obj_tag(v_a_129_) == 0)
{
lean_object* v___x_131_; 
v___x_131_ = l_List_reverse___redArg(v_a_130_);
return v___x_131_;
}
else
{
lean_object* v_head_132_; lean_object* v_tail_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_142_; 
v_head_132_ = lean_ctor_get(v_a_129_, 0);
v_tail_133_ = lean_ctor_get(v_a_129_, 1);
v_isSharedCheck_142_ = !lean_is_exclusive(v_a_129_);
if (v_isSharedCheck_142_ == 0)
{
v___x_135_ = v_a_129_;
v_isShared_136_ = v_isSharedCheck_142_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_tail_133_);
lean_inc(v_head_132_);
lean_dec(v_a_129_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_142_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_139_; 
v___x_137_ = l_Lasm_UI_Model_toDom___redArg(v_head_132_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 1, v_a_130_);
lean_ctor_set(v___x_135_, 0, v___x_137_);
v___x_139_ = v___x_135_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_137_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v_a_130_);
v___x_139_ = v_reuseFailAlloc_141_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
v_a_129_ = v_tail_133_;
v_a_130_ = v___x_139_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_toDom(lean_object* v_Msg_143_, lean_object* v_x_144_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l_Lasm_UI_Model_toDom___redArg(v_x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_toDom_spec__0(lean_object* v_Msg_146_, lean_object* v_a_147_, lean_object* v_a_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_List_mapTR_loop___at___00Lasm_UI_Model_toDom_spec__0___redArg(v_a_147_, v_a_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__3_splitter___redArg(lean_object* v_x_150_, lean_object* v_h__1_151_, lean_object* v_h__2_152_){
_start:
{
if (lean_obj_tag(v_x_150_) == 0)
{
lean_object* v_id_153_; lean_object* v_s_154_; lean_object* v___x_155_; 
lean_dec(v_h__2_152_);
v_id_153_ = lean_ctor_get(v_x_150_, 0);
lean_inc(v_id_153_);
v_s_154_ = lean_ctor_get(v_x_150_, 1);
lean_inc_ref(v_s_154_);
lean_dec_ref_known(v_x_150_, 2);
v___x_155_ = lean_apply_2(v_h__1_151_, v_id_153_, v_s_154_);
return v___x_155_;
}
else
{
lean_object* v_id_156_; uint8_t v_ns_157_; lean_object* v_tag_158_; lean_object* v_key_159_; lean_object* v_attrs_160_; lean_object* v_children_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
lean_dec(v_h__1_151_);
v_id_156_ = lean_ctor_get(v_x_150_, 0);
lean_inc(v_id_156_);
v_ns_157_ = lean_ctor_get_uint8(v_x_150_, sizeof(void*)*5);
v_tag_158_ = lean_ctor_get(v_x_150_, 1);
lean_inc_ref(v_tag_158_);
v_key_159_ = lean_ctor_get(v_x_150_, 2);
lean_inc(v_key_159_);
v_attrs_160_ = lean_ctor_get(v_x_150_, 3);
lean_inc(v_attrs_160_);
v_children_161_ = lean_ctor_get(v_x_150_, 4);
lean_inc(v_children_161_);
lean_dec_ref_known(v_x_150_, 5);
v___x_162_ = lean_box(v_ns_157_);
v___x_163_ = lean_apply_6(v_h__2_152_, v_id_156_, v___x_162_, v_tag_158_, v_key_159_, v_attrs_160_, v_children_161_);
return v___x_163_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__3_splitter(lean_object* v_Msg_164_, lean_object* v_motive_165_, lean_object* v_x_166_, lean_object* v_h__1_167_, lean_object* v_h__2_168_){
_start:
{
if (lean_obj_tag(v_x_166_) == 0)
{
lean_object* v_id_169_; lean_object* v_s_170_; lean_object* v___x_171_; 
lean_dec(v_h__2_168_);
v_id_169_ = lean_ctor_get(v_x_166_, 0);
lean_inc(v_id_169_);
v_s_170_ = lean_ctor_get(v_x_166_, 1);
lean_inc_ref(v_s_170_);
lean_dec_ref_known(v_x_166_, 2);
v___x_171_ = lean_apply_2(v_h__1_167_, v_id_169_, v_s_170_);
return v___x_171_;
}
else
{
lean_object* v_id_172_; uint8_t v_ns_173_; lean_object* v_tag_174_; lean_object* v_key_175_; lean_object* v_attrs_176_; lean_object* v_children_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
lean_dec(v_h__1_167_);
v_id_172_ = lean_ctor_get(v_x_166_, 0);
lean_inc(v_id_172_);
v_ns_173_ = lean_ctor_get_uint8(v_x_166_, sizeof(void*)*5);
v_tag_174_ = lean_ctor_get(v_x_166_, 1);
lean_inc_ref(v_tag_174_);
v_key_175_ = lean_ctor_get(v_x_166_, 2);
lean_inc(v_key_175_);
v_attrs_176_ = lean_ctor_get(v_x_166_, 3);
lean_inc(v_attrs_176_);
v_children_177_ = lean_ctor_get(v_x_166_, 4);
lean_inc(v_children_177_);
lean_dec_ref_known(v_x_166_, 5);
v___x_178_ = lean_box(v_ns_173_);
v___x_179_ = lean_apply_6(v_h__2_168_, v_id_172_, v___x_178_, v_tag_174_, v_key_175_, v_attrs_176_, v_children_177_);
return v___x_179_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__1_splitter___redArg(lean_object* v_x_180_, lean_object* v_h__1_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = lean_apply_2(v_h__1_181_, v_x_180_, lean_box(0));
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__1_splitter(lean_object* v_Msg_183_, lean_object* v_cs_184_, lean_object* v_motive_185_, lean_object* v_x_186_, lean_object* v_h__1_187_){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = lean_apply_2(v_h__1_187_, v_x_186_, lean_box(0));
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__1_splitter___boxed(lean_object* v_Msg_189_, lean_object* v_cs_190_, lean_object* v_motive_191_, lean_object* v_x_192_, lean_object* v_h__1_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lasm_UI_Model_0__Lasm_UI_Model_toDom_match__1_splitter(v_Msg_189_, v_cs_190_, v_motive_191_, v_x_192_, v_h__1_193_);
lean_dec(v_cs_190_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyAttrOp(lean_object* v_x_195_, lean_object* v_x_196_, lean_object* v_a_197_){
_start:
{
if (lean_obj_tag(v_x_195_) == 0)
{
lean_object* v_k_198_; lean_object* v_v_199_; uint8_t v___x_200_; 
v_k_198_ = lean_ctor_get(v_x_195_, 0);
v_v_199_ = lean_ctor_get(v_x_195_, 1);
v___x_200_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_a_197_, v_k_198_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; 
v___x_201_ = lean_apply_1(v_x_196_, v_a_197_);
return v___x_201_;
}
else
{
lean_object* v___x_202_; 
lean_dec_ref(v_a_197_);
lean_dec_ref(v_x_196_);
lean_inc_ref(v_v_199_);
v___x_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_202_, 0, v_v_199_);
return v___x_202_;
}
}
else
{
lean_object* v_k_203_; uint8_t v___x_204_; 
v_k_203_ = lean_ctor_get(v_x_195_, 0);
v___x_204_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_a_197_, v_k_203_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; 
v___x_205_ = lean_apply_1(v_x_196_, v_a_197_);
return v___x_205_;
}
else
{
lean_object* v___x_206_; 
lean_dec_ref(v_a_197_);
lean_dec_ref(v_x_196_);
v___x_206_ = lean_box(0);
return v___x_206_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyAttrOp___boxed(lean_object* v_x_207_, lean_object* v_x_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lasm_UI_Model_applyAttrOp(v_x_207_, v_x_208_, v_a_209_);
lean_dec_ref(v_x_207_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyAttrOps(lean_object* v_x_211_, lean_object* v_x_212_, lean_object* v_a_213_){
_start:
{
if (lean_obj_tag(v_x_211_) == 0)
{
lean_object* v___x_214_; 
v___x_214_ = lean_apply_1(v_x_212_, v_a_213_);
return v___x_214_;
}
else
{
lean_object* v_head_215_; lean_object* v_tail_216_; lean_object* v___x_217_; 
v_head_215_ = lean_ctor_get(v_x_211_, 0);
lean_inc(v_head_215_);
v_tail_216_ = lean_ctor_get(v_x_211_, 1);
lean_inc(v_tail_216_);
lean_dec_ref_known(v_x_211_, 2);
v___x_217_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_applyAttrOp___boxed), 3, 2);
lean_closure_set(v___x_217_, 0, v_head_215_);
lean_closure_set(v___x_217_, 1, v_x_212_);
v_x_211_ = v_tail_216_;
v_x_212_ = v___x_217_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_insertBefore(lean_object* v_d_219_, lean_object* v_x_220_, lean_object* v_x_221_){
_start:
{
if (lean_obj_tag(v_x_220_) == 0)
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_222_ = lean_box(0);
v___x_223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_223_, 0, v_d_219_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
v___x_224_ = l_List_appendTR___redArg(v_x_221_, v___x_223_);
return v___x_224_;
}
else
{
if (lean_obj_tag(v_x_221_) == 0)
{
lean_object* v___x_225_; 
v___x_225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_225_, 0, v_d_219_);
lean_ctor_set(v___x_225_, 1, v_x_221_);
return v___x_225_;
}
else
{
lean_object* v_val_226_; lean_object* v_head_227_; lean_object* v_tail_228_; lean_object* v___y_230_; lean_object* v_id_243_; 
v_val_226_ = lean_ctor_get(v_x_220_, 0);
v_head_227_ = lean_ctor_get(v_x_221_, 0);
v_tail_228_ = lean_ctor_get(v_x_221_, 1);
v_id_243_ = lean_ctor_get(v_head_227_, 0);
lean_inc(v_id_243_);
v___y_230_ = v_id_243_;
goto v___jp_229_;
v___jp_229_:
{
uint8_t v___x_231_; 
v___x_231_ = lean_nat_dec_eq(v___y_230_, v_val_226_);
lean_dec(v___y_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_239_; 
lean_inc(v_tail_228_);
lean_inc(v_head_227_);
v_isSharedCheck_239_ = !lean_is_exclusive(v_x_221_);
if (v_isSharedCheck_239_ == 0)
{
lean_object* v_unused_240_; lean_object* v_unused_241_; 
v_unused_240_ = lean_ctor_get(v_x_221_, 1);
lean_dec(v_unused_240_);
v_unused_241_ = lean_ctor_get(v_x_221_, 0);
lean_dec(v_unused_241_);
v___x_233_ = v_x_221_;
v_isShared_234_ = v_isSharedCheck_239_;
goto v_resetjp_232_;
}
else
{
lean_dec(v_x_221_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_239_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; lean_object* v___x_237_; 
v___x_235_ = l_Lasm_UI_Model_insertBefore(v_d_219_, v_x_220_, v_tail_228_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 1, v___x_235_);
v___x_237_ = v___x_233_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_head_227_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v___x_235_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
else
{
lean_object* v___x_242_; 
v___x_242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_242_, 0, v_d_219_);
lean_ctor_set(v___x_242_, 1, v_x_221_);
return v___x_242_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_insertBefore___boxed(lean_object* v_d_244_, lean_object* v_x_245_, lean_object* v_x_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lasm_UI_Model_insertBefore(v_d_244_, v_x_245_, v_x_246_);
lean_dec(v_x_245_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_findId(lean_object* v_i_248_, lean_object* v_x_249_){
_start:
{
if (lean_obj_tag(v_x_249_) == 0)
{
lean_object* v___x_250_; 
v___x_250_ = lean_box(0);
return v___x_250_;
}
else
{
lean_object* v_head_251_; lean_object* v_tail_252_; lean_object* v___y_254_; lean_object* v_id_258_; 
v_head_251_ = lean_ctor_get(v_x_249_, 0);
v_tail_252_ = lean_ctor_get(v_x_249_, 1);
v_id_258_ = lean_ctor_get(v_head_251_, 0);
v___y_254_ = v_id_258_;
goto v___jp_253_;
v___jp_253_:
{
uint8_t v___x_255_; 
v___x_255_ = lean_nat_dec_eq(v___y_254_, v_i_248_);
if (v___x_255_ == 0)
{
v_x_249_ = v_tail_252_;
goto _start;
}
else
{
lean_object* v___x_257_; 
lean_inc(v_head_251_);
v___x_257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_257_, 0, v_head_251_);
return v___x_257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_findId___boxed(lean_object* v_i_259_, lean_object* v_x_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lasm_UI_Model_findId(v_i_259_, v_x_260_);
lean_dec(v_x_260_);
lean_dec(v_i_259_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Model_removeId_spec__0(lean_object* v_i_262_, lean_object* v_a_263_, lean_object* v_a_264_){
_start:
{
if (lean_obj_tag(v_a_263_) == 0)
{
lean_object* v___x_265_; 
v___x_265_ = l_List_reverse___redArg(v_a_264_);
return v___x_265_;
}
else
{
lean_object* v_head_266_; lean_object* v_tail_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_280_; 
v_head_266_ = lean_ctor_get(v_a_263_, 0);
v_tail_267_ = lean_ctor_get(v_a_263_, 1);
v_isSharedCheck_280_ = !lean_is_exclusive(v_a_263_);
if (v_isSharedCheck_280_ == 0)
{
v___x_269_ = v_a_263_;
v_isShared_270_ = v_isSharedCheck_280_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_tail_267_);
lean_inc(v_head_266_);
lean_dec(v_a_263_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_280_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___y_272_; lean_object* v_id_279_; 
v_id_279_ = lean_ctor_get(v_head_266_, 0);
lean_inc(v_id_279_);
v___y_272_ = v_id_279_;
goto v___jp_271_;
v___jp_271_:
{
uint8_t v___x_273_; 
v___x_273_ = lean_nat_dec_eq(v___y_272_, v_i_262_);
lean_dec(v___y_272_);
if (v___x_273_ == 0)
{
lean_object* v___x_275_; 
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 1, v_a_264_);
v___x_275_ = v___x_269_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_head_266_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v_a_264_);
v___x_275_ = v_reuseFailAlloc_277_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
v_a_263_ = v_tail_267_;
v_a_264_ = v___x_275_;
goto _start;
}
}
else
{
lean_del_object(v___x_269_);
lean_dec(v_head_266_);
v_a_263_ = v_tail_267_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Model_removeId_spec__0___boxed(lean_object* v_i_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_List_filterTR_loop___at___00Lasm_UI_Model_removeId_spec__0(v_i_281_, v_a_282_, v_a_283_);
lean_dec(v_i_281_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_removeId(lean_object* v_i_285_, lean_object* v_l_286_){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_box(0);
v___x_288_ = l_List_filterTR_loop___at___00Lasm_UI_Model_removeId_spec__0(v_i_285_, v_l_286_, v___x_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_removeId___boxed(lean_object* v_i_289_, lean_object* v_l_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lasm_UI_Model_removeId(v_i_289_, v_l_290_);
lean_dec(v_i_289_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_modId_spec__0(lean_object* v_i_292_, lean_object* v_g_293_, lean_object* v_a_294_, lean_object* v_a_295_){
_start:
{
if (lean_obj_tag(v_a_294_) == 0)
{
lean_object* v___x_296_; 
lean_dec_ref(v_g_293_);
v___x_296_ = l_List_reverse___redArg(v_a_295_);
return v___x_296_;
}
else
{
lean_object* v_head_297_; lean_object* v_tail_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_313_; 
v_head_297_ = lean_ctor_get(v_a_294_, 0);
v_tail_298_ = lean_ctor_get(v_a_294_, 1);
v_isSharedCheck_313_ = !lean_is_exclusive(v_a_294_);
if (v_isSharedCheck_313_ == 0)
{
v___x_300_ = v_a_294_;
v_isShared_301_ = v_isSharedCheck_313_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_tail_298_);
lean_inc(v_head_297_);
lean_dec(v_a_294_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_313_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___y_303_; lean_object* v___y_309_; lean_object* v_id_312_; 
v_id_312_ = lean_ctor_get(v_head_297_, 0);
lean_inc(v_id_312_);
v___y_309_ = v_id_312_;
goto v___jp_308_;
v___jp_302_:
{
lean_object* v___x_305_; 
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 1, v_a_295_);
lean_ctor_set(v___x_300_, 0, v___y_303_);
v___x_305_ = v___x_300_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___y_303_);
lean_ctor_set(v_reuseFailAlloc_307_, 1, v_a_295_);
v___x_305_ = v_reuseFailAlloc_307_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
v_a_294_ = v_tail_298_;
v_a_295_ = v___x_305_;
goto _start;
}
}
v___jp_308_:
{
uint8_t v___x_310_; 
v___x_310_ = lean_nat_dec_eq(v___y_309_, v_i_292_);
lean_dec(v___y_309_);
if (v___x_310_ == 0)
{
v___y_303_ = v_head_297_;
goto v___jp_302_;
}
else
{
lean_object* v___x_311_; 
lean_inc_ref(v_g_293_);
v___x_311_ = lean_apply_1(v_g_293_, v_head_297_);
v___y_303_ = v___x_311_;
goto v___jp_302_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Model_modId_spec__0___boxed(lean_object* v_i_314_, lean_object* v_g_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_List_mapTR_loop___at___00Lasm_UI_Model_modId_spec__0(v_i_314_, v_g_315_, v_a_316_, v_a_317_);
lean_dec(v_i_314_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_modId(lean_object* v_i_319_, lean_object* v_g_320_, lean_object* v_l_321_){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = lean_box(0);
v___x_323_ = l_List_mapTR_loop___at___00Lasm_UI_Model_modId_spec__0(v_i_319_, v_g_320_, v_l_321_, v___x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_modId___boxed(lean_object* v_i_324_, lean_object* v_g_325_, lean_object* v_l_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lasm_UI_Model_modId(v_i_324_, v_g_325_, v_l_326_);
lean_dec(v_i_324_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOp___redArg(lean_object* v_x_328_, lean_object* v_x_329_){
_start:
{
switch(lean_obj_tag(v_x_328_))
{
case 0:
{
lean_object* v_node_330_; lean_object* v_before_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_node_330_ = lean_ctor_get(v_x_328_, 0);
lean_inc_ref(v_node_330_);
v_before_331_ = lean_ctor_get(v_x_328_, 1);
lean_inc(v_before_331_);
lean_dec_ref_known(v_x_328_, 2);
v___x_332_ = l_Lasm_UI_Model_toDom___redArg(v_node_330_);
v___x_333_ = l_Lasm_UI_Model_insertBefore(v___x_332_, v_before_331_, v_x_329_);
lean_dec(v_before_331_);
return v___x_333_;
}
case 1:
{
lean_object* v_id_334_; lean_object* v_before_335_; lean_object* v___x_336_; 
v_id_334_ = lean_ctor_get(v_x_328_, 0);
lean_inc(v_id_334_);
v_before_335_ = lean_ctor_get(v_x_328_, 1);
lean_inc(v_before_335_);
lean_dec_ref_known(v_x_328_, 2);
v___x_336_ = l_Lasm_UI_Model_findId(v_id_334_, v_x_329_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_dec(v_before_335_);
lean_dec(v_id_334_);
return v_x_329_;
}
else
{
lean_object* v_val_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v_val_337_ = lean_ctor_get(v___x_336_, 0);
lean_inc(v_val_337_);
lean_dec_ref_known(v___x_336_, 1);
v___x_338_ = l_Lasm_UI_Model_removeId(v_id_334_, v_x_329_);
lean_dec(v_id_334_);
v___x_339_ = l_Lasm_UI_Model_insertBefore(v_val_337_, v_before_335_, v___x_338_);
lean_dec(v_before_335_);
return v___x_339_;
}
}
case 2:
{
lean_object* v_id_340_; lean_object* v___x_341_; 
v_id_340_ = lean_ctor_get(v_x_328_, 0);
lean_inc(v_id_340_);
lean_dec_ref_known(v_x_328_, 1);
v___x_341_ = l_Lasm_UI_Model_removeId(v_id_340_, v_x_329_);
lean_dec(v_id_340_);
return v___x_341_;
}
case 3:
{
lean_object* v___x_342_; 
lean_dec(v_x_329_);
v___x_342_ = lean_box(0);
return v___x_342_;
}
case 4:
{
lean_object* v_id_343_; lean_object* v_s_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_id_343_ = lean_ctor_get(v_x_328_, 0);
lean_inc(v_id_343_);
v_s_344_ = lean_ctor_get(v_x_328_, 1);
lean_inc_ref(v_s_344_);
lean_dec_ref_known(v_x_328_, 2);
v___x_345_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_Dom_setText), 2, 1);
lean_closure_set(v___x_345_, 0, v_s_344_);
v___x_346_ = l_Lasm_UI_Model_modId(v_id_343_, v___x_345_, v_x_329_);
lean_dec(v_id_343_);
return v___x_346_;
}
case 5:
{
lean_object* v_id_347_; lean_object* v_ops_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_id_347_ = lean_ctor_get(v_x_328_, 0);
lean_inc(v_id_347_);
v_ops_348_ = lean_ctor_get(v_x_328_, 1);
lean_inc(v_ops_348_);
lean_dec_ref_known(v_x_328_, 2);
v___x_349_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_applyAttrOps), 3, 1);
lean_closure_set(v___x_349_, 0, v_ops_348_);
v___x_350_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_Dom_modAttrs), 2, 1);
lean_closure_set(v___x_350_, 0, v___x_349_);
v___x_351_ = l_Lasm_UI_Model_modId(v_id_347_, v___x_350_, v_x_329_);
lean_dec(v_id_347_);
return v___x_351_;
}
default: 
{
lean_object* v_id_352_; lean_object* v_ops_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v_id_352_ = lean_ctor_get(v_x_328_, 0);
lean_inc(v_id_352_);
v_ops_353_ = lean_ctor_get(v_x_328_, 1);
lean_inc(v_ops_353_);
lean_dec_ref_known(v_x_328_, 2);
v___x_354_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_applyOps), 3, 2);
lean_closure_set(v___x_354_, 0, lean_box(0));
lean_closure_set(v___x_354_, 1, v_ops_353_);
v___x_355_ = lean_alloc_closure((void*)(l_Lasm_UI_Model_Dom_modChildren), 2, 1);
lean_closure_set(v___x_355_, 0, v___x_354_);
v___x_356_ = l_Lasm_UI_Model_modId(v_id_352_, v___x_355_, v_x_329_);
lean_dec(v_id_352_);
return v___x_356_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOps___redArg(lean_object* v_x_357_, lean_object* v_x_358_){
_start:
{
if (lean_obj_tag(v_x_357_) == 0)
{
return v_x_358_;
}
else
{
lean_object* v_head_359_; lean_object* v_tail_360_; lean_object* v___x_361_; 
v_head_359_ = lean_ctor_get(v_x_357_, 0);
lean_inc(v_head_359_);
v_tail_360_ = lean_ctor_get(v_x_357_, 1);
lean_inc(v_tail_360_);
lean_dec_ref_known(v_x_357_, 2);
v___x_361_ = l_Lasm_UI_Model_applyOp___redArg(v_head_359_, v_x_358_);
v_x_357_ = v_tail_360_;
v_x_358_ = v___x_361_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOps(lean_object* v_Msg_363_, lean_object* v_x_364_, lean_object* v_x_365_){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = l_Lasm_UI_Model_applyOps___redArg(v_x_364_, v_x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Model_applyOp(lean_object* v_Msg_367_, lean_object* v_x_368_, lean_object* v_x_369_){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = l_Lasm_UI_Model_applyOp___redArg(v_x_368_, v_x_369_);
return v___x_370_;
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
