// Lean compiler output
// Module: Lasm.UI.Cmd
// Imports: public import Init public meta import Init public import Lasm.JS.Core public import Std.Async.Basic
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
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_msg_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_msg_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_delay_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_delay_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_navigate_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_navigate_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_task_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_task_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_none___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_none___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_none(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_ofEffect___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_ofEffect(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Cmd_batch_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_Cmd_batch___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Cmd_batch___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Cmd_batch___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_batch___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_batch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Cmd_batch_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_Cmd_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_appendTR___redArg, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Cmd_instAppend___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Cmd_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instAppend___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Cmd_map_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Cmd_map_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Cmd_isNone___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_isNone___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Cmd_isNone(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_isNone___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_send___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_send(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_delay___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_delay(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_pushUrl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_pushUrl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_replaceUrl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_replaceUrl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorIdx___redArg(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
default: 
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorIdx___redArg___boxed(lean_object* v_x_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lasm_UI_Effect_ctorIdx___redArg(v_x_6_);
lean_dec_ref(v_x_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorIdx(lean_object* v_Msg_8_, lean_object* v_x_9_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lasm_UI_Effect_ctorIdx___redArg(v_x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorIdx___boxed(lean_object* v_Msg_11_, lean_object* v_x_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lasm_UI_Effect_ctorIdx(v_Msg_11_, v_x_12_);
lean_dec_ref(v_x_12_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorElim___redArg(lean_object* v_t_14_, lean_object* v_k_15_){
_start:
{
switch(lean_obj_tag(v_t_14_))
{
case 0:
{
lean_object* v_msg_16_; lean_object* v___x_17_; 
v_msg_16_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_msg_16_);
lean_dec_ref_known(v_t_14_, 1);
v___x_17_ = lean_apply_1(v_k_15_, v_msg_16_);
return v___x_17_;
}
case 1:
{
lean_object* v_ms_18_; lean_object* v_msg_19_; lean_object* v___x_20_; 
v_ms_18_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_ms_18_);
v_msg_19_ = lean_ctor_get(v_t_14_, 1);
lean_inc(v_msg_19_);
lean_dec_ref_known(v_t_14_, 2);
v___x_20_ = lean_apply_2(v_k_15_, v_ms_18_, v_msg_19_);
return v___x_20_;
}
case 2:
{
lean_object* v_url_21_; uint8_t v_replace_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_url_21_ = lean_ctor_get(v_t_14_, 0);
lean_inc_ref(v_url_21_);
v_replace_22_ = lean_ctor_get_uint8(v_t_14_, sizeof(void*)*1);
lean_dec_ref_known(v_t_14_, 1);
v___x_23_ = lean_box(v_replace_22_);
v___x_24_ = lean_apply_2(v_k_15_, v_url_21_, v___x_23_);
return v___x_24_;
}
default: 
{
lean_object* v_run_25_; lean_object* v___x_26_; 
v_run_25_ = lean_ctor_get(v_t_14_, 0);
lean_inc_ref(v_run_25_);
lean_dec_ref_known(v_t_14_, 1);
v___x_26_ = lean_apply_1(v_k_15_, v_run_25_);
return v___x_26_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorElim(lean_object* v_Msg_27_, lean_object* v_motive_28_, lean_object* v_ctorIdx_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_k_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lasm_UI_Effect_ctorElim___redArg(v_t_30_, v_k_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_ctorElim___boxed(lean_object* v_Msg_34_, lean_object* v_motive_35_, lean_object* v_ctorIdx_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_k_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lasm_UI_Effect_ctorElim(v_Msg_34_, v_motive_35_, v_ctorIdx_36_, v_t_37_, v_h_38_, v_k_39_);
lean_dec(v_ctorIdx_36_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_msg_elim___redArg(lean_object* v_t_41_, lean_object* v_msg_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lasm_UI_Effect_ctorElim___redArg(v_t_41_, v_msg_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_msg_elim(lean_object* v_Msg_44_, lean_object* v_motive_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_msg_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lasm_UI_Effect_ctorElim___redArg(v_t_46_, v_msg_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_delay_elim___redArg(lean_object* v_t_50_, lean_object* v_delay_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lasm_UI_Effect_ctorElim___redArg(v_t_50_, v_delay_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_delay_elim(lean_object* v_Msg_53_, lean_object* v_motive_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_delay_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lasm_UI_Effect_ctorElim___redArg(v_t_55_, v_delay_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_navigate_elim___redArg(lean_object* v_t_59_, lean_object* v_navigate_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lasm_UI_Effect_ctorElim___redArg(v_t_59_, v_navigate_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_navigate_elim(lean_object* v_Msg_62_, lean_object* v_motive_63_, lean_object* v_t_64_, lean_object* v_h_65_, lean_object* v_navigate_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lasm_UI_Effect_ctorElim___redArg(v_t_64_, v_navigate_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_task_elim___redArg(lean_object* v_t_68_, lean_object* v_task_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lasm_UI_Effect_ctorElim___redArg(v_t_68_, v_task_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_task_elim(lean_object* v_Msg_71_, lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_task_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lasm_UI_Effect_ctorElim___redArg(v_t_73_, v_task_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map___redArg___lam__0(lean_object* v_f_77_, lean_object* v_deliver_78_, lean_object* v___y_79_){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_apply_1(v_f_77_, v___y_79_);
v___x_82_ = lean_apply_2(v_deliver_78_, v___x_81_, lean_box(0));
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map___redArg___lam__0___boxed(lean_object* v_f_83_, lean_object* v_deliver_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lasm_UI_Effect_map___redArg___lam__0(v_f_83_, v_deliver_84_, v___y_85_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map___redArg___lam__1(lean_object* v_f_88_, lean_object* v_run_89_, lean_object* v_deliver_90_){
_start:
{
lean_object* v___f_92_; lean_object* v___x_93_; 
v___f_92_ = lean_alloc_closure((void*)(l_Lasm_UI_Effect_map___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_92_, 0, v_f_88_);
lean_closure_set(v___f_92_, 1, v_deliver_90_);
v___x_93_ = lean_apply_2(v_run_89_, v___f_92_, lean_box(0));
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map___redArg___lam__1___boxed(lean_object* v_f_94_, lean_object* v_run_95_, lean_object* v_deliver_96_, lean_object* v___y_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Lasm_UI_Effect_map___redArg___lam__1(v_f_94_, v_run_95_, v_deliver_96_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map___redArg(lean_object* v_f_99_, lean_object* v_x_100_){
_start:
{
switch(lean_obj_tag(v_x_100_))
{
case 0:
{
lean_object* v_msg_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_109_; 
v_msg_101_ = lean_ctor_get(v_x_100_, 0);
v_isSharedCheck_109_ = !lean_is_exclusive(v_x_100_);
if (v_isSharedCheck_109_ == 0)
{
v___x_103_ = v_x_100_;
v_isShared_104_ = v_isSharedCheck_109_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_msg_101_);
lean_dec(v_x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_109_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_105_; lean_object* v___x_107_; 
v___x_105_ = lean_apply_1(v_f_99_, v_msg_101_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 0, v___x_105_);
v___x_107_ = v___x_103_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v___x_105_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
case 1:
{
lean_object* v_ms_110_; lean_object* v_msg_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_119_; 
v_ms_110_ = lean_ctor_get(v_x_100_, 0);
v_msg_111_ = lean_ctor_get(v_x_100_, 1);
v_isSharedCheck_119_ = !lean_is_exclusive(v_x_100_);
if (v_isSharedCheck_119_ == 0)
{
v___x_113_ = v_x_100_;
v_isShared_114_ = v_isSharedCheck_119_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_msg_111_);
lean_inc(v_ms_110_);
lean_dec(v_x_100_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_119_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_117_; 
v___x_115_ = lean_apply_1(v_f_99_, v_msg_111_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v___x_115_);
v___x_117_ = v___x_113_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_ms_110_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___x_115_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
case 2:
{
lean_object* v_url_120_; uint8_t v_replace_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
lean_dec(v_f_99_);
v_url_120_ = lean_ctor_get(v_x_100_, 0);
v_replace_121_ = lean_ctor_get_uint8(v_x_100_, sizeof(void*)*1);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_100_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v_x_100_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_url_120_);
lean_dec(v_x_100_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_url_120_);
lean_ctor_set_uint8(v_reuseFailAlloc_127_, sizeof(void*)*1, v_replace_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
default: 
{
lean_object* v_run_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_137_; 
v_run_129_ = lean_ctor_get(v_x_100_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v_x_100_);
if (v_isSharedCheck_137_ == 0)
{
v___x_131_ = v_x_100_;
v_isShared_132_ = v_isSharedCheck_137_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_run_129_);
lean_dec(v_x_100_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_137_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___f_133_; lean_object* v___x_135_; 
v___f_133_ = lean_alloc_closure((void*)(l_Lasm_UI_Effect_map___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_133_, 0, v_f_99_);
lean_closure_set(v___f_133_, 1, v_run_129_);
if (v_isShared_132_ == 0)
{
lean_ctor_set(v___x_131_, 0, v___f_133_);
v___x_135_ = v___x_131_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v___f_133_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Effect_map(lean_object* v_00_u03b1_138_, lean_object* v_00_u03b2_139_, lean_object* v_f_140_, lean_object* v_x_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l_Lasm_UI_Effect_map___redArg(v_f_140_, v_x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_none___redArg(){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lean_box(0);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_none___redArg___boxed(lean_object* v___dummy_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lasm_UI_Cmd_none___redArg();
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_none(lean_object* v_Msg_147_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_box(0);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instInhabited___redArg(){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_box(0);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instInhabited___redArg___boxed(lean_object* v___dummy_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lasm_UI_Cmd_instInhabited___redArg();
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instInhabited(lean_object* v_Msg_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_box(0);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_ofEffect___redArg(lean_object* v_e_155_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_box(0);
v___x_157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_157_, 0, v_e_155_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_ofEffect(lean_object* v_Msg_158_, lean_object* v_e_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l_Lasm_UI_Cmd_ofEffect___redArg(v_e_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Cmd_batch_spec__0___redArg(lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
if (lean_obj_tag(v_a_161_) == 0)
{
lean_object* v___x_163_; 
v___x_163_ = lean_array_to_list(v_a_162_);
return v___x_163_;
}
else
{
lean_object* v_head_164_; lean_object* v_tail_165_; lean_object* v___x_166_; 
v_head_164_ = lean_ctor_get(v_a_161_, 0);
lean_inc(v_head_164_);
v_tail_165_ = lean_ctor_get(v_a_161_, 1);
lean_inc(v_tail_165_);
lean_dec_ref_known(v_a_161_, 2);
v___x_166_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_162_, v_head_164_);
v_a_161_ = v_tail_165_;
v_a_162_ = v___x_166_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_batch___redArg(lean_object* v_cmds_170_){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = ((lean_object*)(l_Lasm_UI_Cmd_batch___redArg___closed__0));
v___x_172_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Cmd_batch_spec__0___redArg(v_cmds_170_, v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_batch(lean_object* v_Msg_173_, lean_object* v_cmds_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l_Lasm_UI_Cmd_batch___redArg(v_cmds_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Cmd_batch_spec__0(lean_object* v_Msg_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Cmd_batch_spec__0___redArg(v_a_177_, v_a_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instAppend___redArg(){
_start:
{
lean_object* v___f_182_; 
v___f_182_ = ((lean_object*)(l_Lasm_UI_Cmd_instAppend___redArg___closed__0));
return v___f_182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instAppend___redArg___boxed(lean_object* v___dummy_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lasm_UI_Cmd_instAppend___redArg();
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_instAppend(lean_object* v_Msg_185_){
_start:
{
lean_object* v___f_186_; 
v___f_186_ = ((lean_object*)(l_Lasm_UI_Cmd_instAppend___redArg___closed__0));
return v___f_186_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Cmd_map_spec__0___redArg(lean_object* v_f_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
if (lean_obj_tag(v_a_188_) == 0)
{
lean_object* v___x_190_; 
lean_dec(v_f_187_);
v___x_190_ = l_List_reverse___redArg(v_a_189_);
return v___x_190_;
}
else
{
lean_object* v_head_191_; lean_object* v_tail_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_201_; 
v_head_191_ = lean_ctor_get(v_a_188_, 0);
v_tail_192_ = lean_ctor_get(v_a_188_, 1);
v_isSharedCheck_201_ = !lean_is_exclusive(v_a_188_);
if (v_isSharedCheck_201_ == 0)
{
v___x_194_ = v_a_188_;
v_isShared_195_ = v_isSharedCheck_201_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_tail_192_);
lean_inc(v_head_191_);
lean_dec(v_a_188_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_201_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_196_; lean_object* v___x_198_; 
lean_inc(v_f_187_);
v___x_196_ = l_Lasm_UI_Effect_map___redArg(v_f_187_, v_head_191_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 1, v_a_189_);
lean_ctor_set(v___x_194_, 0, v___x_196_);
v___x_198_ = v___x_194_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_196_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_a_189_);
v___x_198_ = v_reuseFailAlloc_200_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
v_a_188_ = v_tail_192_;
v_a_189_ = v___x_198_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_map___redArg(lean_object* v_f_202_, lean_object* v_c_203_){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = lean_box(0);
v___x_205_ = l_List_mapTR_loop___at___00Lasm_UI_Cmd_map_spec__0___redArg(v_f_202_, v_c_203_, v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_map(lean_object* v_00_u03b1_206_, lean_object* v_00_u03b2_207_, lean_object* v_f_208_, lean_object* v_c_209_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Lasm_UI_Cmd_map___redArg(v_f_208_, v_c_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Cmd_map_spec__0(lean_object* v_00_u03b1_211_, lean_object* v_00_u03b2_212_, lean_object* v_f_213_, lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_List_mapTR_loop___at___00Lasm_UI_Cmd_map_spec__0___redArg(v_f_213_, v_a_214_, v_a_215_);
return v___x_216_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Cmd_isNone___redArg(lean_object* v_c_217_){
_start:
{
uint8_t v___x_218_; 
v___x_218_ = l_List_isEmpty___redArg(v_c_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_isNone___redArg___boxed(lean_object* v_c_219_){
_start:
{
uint8_t v_res_220_; lean_object* v_r_221_; 
v_res_220_ = l_Lasm_UI_Cmd_isNone___redArg(v_c_219_);
lean_dec(v_c_219_);
v_r_221_ = lean_box(v_res_220_);
return v_r_221_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Cmd_isNone(lean_object* v_Msg_222_, lean_object* v_c_223_){
_start:
{
uint8_t v___x_224_; 
v___x_224_ = l_List_isEmpty___redArg(v_c_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_isNone___boxed(lean_object* v_Msg_225_, lean_object* v_c_226_){
_start:
{
uint8_t v_res_227_; lean_object* v_r_228_; 
v_res_227_ = l_Lasm_UI_Cmd_isNone(v_Msg_225_, v_c_226_);
lean_dec(v_c_226_);
v_r_228_ = lean_box(v_res_227_);
return v_r_228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_send___redArg(lean_object* v_msg_229_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_230_, 0, v_msg_229_);
v___x_231_ = l_Lasm_UI_Cmd_ofEffect___redArg(v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_send(lean_object* v_Msg_232_, lean_object* v_msg_233_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = l_Lasm_UI_Cmd_send___redArg(v_msg_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_delay___redArg(lean_object* v_ms_235_, lean_object* v_msg_236_){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_237_, 0, v_ms_235_);
lean_ctor_set(v___x_237_, 1, v_msg_236_);
v___x_238_ = l_Lasm_UI_Cmd_ofEffect___redArg(v___x_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_delay(lean_object* v_Msg_239_, lean_object* v_ms_240_, lean_object* v_msg_241_){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = l_Lasm_UI_Cmd_delay___redArg(v_ms_240_, v_msg_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_pushUrl___redArg(lean_object* v_url_243_){
_start:
{
uint8_t v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_244_ = 0;
v___x_245_ = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(v___x_245_, 0, v_url_243_);
lean_ctor_set_uint8(v___x_245_, sizeof(void*)*1, v___x_244_);
v___x_246_ = l_Lasm_UI_Cmd_ofEffect___redArg(v___x_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_pushUrl(lean_object* v_Msg_247_, lean_object* v_url_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_Lasm_UI_Cmd_pushUrl___redArg(v_url_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_replaceUrl___redArg(lean_object* v_url_250_){
_start:
{
uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_251_ = 1;
v___x_252_ = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(v___x_252_, 0, v_url_250_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*1, v___x_251_);
v___x_253_ = l_Lasm_UI_Cmd_ofEffect___redArg(v___x_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_replaceUrl(lean_object* v_Msg_254_, lean_object* v_url_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lasm_UI_Cmd_replaceUrl___redArg(v_url_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task___redArg___lam__0(lean_object* v_deliver_257_, lean_object* v_x_258_){
_start:
{
lean_object* v_val_261_; 
if (lean_obj_tag(v_x_258_) == 0)
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_271_; 
lean_dec_ref(v_deliver_257_);
v_a_263_ = lean_ctor_get(v_x_258_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v_x_258_);
if (v_isSharedCheck_271_ == 0)
{
v___x_265_ = v_x_258_;
v_isShared_266_ = v_isSharedCheck_271_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v_x_258_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_271_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_263_);
v___x_268_ = v_reuseFailAlloc_270_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_269_; 
v___x_269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
return v___x_269_;
}
}
}
else
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_285_; 
v_a_272_ = lean_ctor_get(v_x_258_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v_x_258_);
if (v_isSharedCheck_285_ == 0)
{
v___x_274_ = v_x_258_;
v_isShared_275_ = v_isSharedCheck_285_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v_x_258_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_285_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; 
v___x_276_ = lean_apply_2(v_deliver_257_, v_a_272_, lean_box(0));
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_277_);
lean_dec_ref_known(v___x_276_, 1);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 0, v_a_277_);
v___x_279_ = v___x_274_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_277_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
v_val_261_ = v___x_279_;
goto v___jp_260_;
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; 
v_a_281_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_276_, 1);
if (v_isShared_275_ == 0)
{
lean_ctor_set_tag(v___x_274_, 0);
lean_ctor_set(v___x_274_, 0, v_a_281_);
v___x_283_ = v___x_274_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_281_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
v_val_261_ = v___x_283_;
goto v___jp_260_;
}
}
}
}
v___jp_260_:
{
lean_object* v___x_262_; 
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v_val_261_);
return v___x_262_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task___redArg___lam__0___boxed(lean_object* v_deliver_286_, lean_object* v_x_287_, lean_object* v___y_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lasm_UI_Cmd_task___redArg___lam__0(v_deliver_286_, v_x_287_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task___redArg___lam__1(lean_object* v_run_290_, lean_object* v_deliver_291_){
_start:
{
lean_object* v___f_293_; lean_object* v___x_294_; uint8_t v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___f_293_ = lean_alloc_closure((void*)(l_Lasm_UI_Cmd_task___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_293_, 0, v_deliver_291_);
v___x_294_ = lean_unsigned_to_nat(0u);
v___x_295_ = 0;
v___x_296_ = lean_apply_1(v_run_290_, lean_box(0));
v___x_297_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_294_, v___x_295_, v___x_296_, v___f_293_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task___redArg___lam__1___boxed(lean_object* v_run_298_, lean_object* v_deliver_299_, lean_object* v___y_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Lasm_UI_Cmd_task___redArg___lam__1(v_run_298_, v_deliver_299_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task___redArg(lean_object* v_run_302_){
_start:
{
lean_object* v___f_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___f_303_ = lean_alloc_closure((void*)(l_Lasm_UI_Cmd_task___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_303_, 0, v_run_302_);
v___x_304_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_304_, 0, v___f_303_);
v___x_305_ = l_Lasm_UI_Cmd_ofEffect___redArg(v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Cmd_task(lean_object* v_Msg_306_, lean_object* v_run_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lasm_UI_Cmd_task___redArg(v_run_307_);
return v___x_308_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Std_Async_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Cmd(uint8_t builtin) {
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
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
