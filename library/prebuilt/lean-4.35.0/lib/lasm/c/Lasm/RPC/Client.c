// Lean compiler output
// Module: Lasm.RPC.Client
// Imports: public import Init public meta import Init public import Lasm.RPC.Core public import Lasm.UI.Cmd public import Lasm.JS.Web
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
lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Response_text(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Response_status(lean_object*);
lean_object* l_Lasm_JS_Web_fetch(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_UI_Cmd_send___redArg(lean_object*);
lean_object* l_Lasm_RPC_Endpoint_path___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_RPC_Endpoint_encodeRequest___redArg(lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_UI_Cmd_task___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_RPC_Endpoint_call___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_Endpoint_call___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__0 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__0_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__1 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_call___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__1_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__2 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__2_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "content-type"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__3 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__3_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "application/json"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__4 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_call___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__3_value),((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__4_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__5 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__5_value;
static const lean_array_object l_Lasm_RPC_Endpoint_call___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__5_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__6 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__6_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_call___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__6_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__7 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__7_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_call___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__7_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__8 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__0(lean_object* v_handle_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v_a_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_17_; 
v_a_4_ = lean_ctor_get(v_x_2_, 0);
v_isSharedCheck_17_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_17_ == 0)
{
v___x_6_ = v_x_2_;
v_isShared_7_ = v_isSharedCheck_17_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_a_4_);
lean_dec(v_x_2_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_17_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_11_; 
v___x_8_ = lean_io_error_to_string(v_a_4_);
v___x_9_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
if (v_isShared_7_ == 0)
{
lean_ctor_set(v___x_6_, 0, v___x_9_);
v___x_11_ = v___x_6_;
goto v_reusejp_10_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v___x_9_);
v___x_11_ = v_reuseFailAlloc_16_;
goto v_reusejp_10_;
}
v_reusejp_10_:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_12_ = lean_apply_1(v_handle_1_, v___x_11_);
v___x_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
v___x_14_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
}
}
else
{
lean_object* v___x_18_; 
lean_dec(v_handle_1_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v_x_2_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__0___boxed(lean_object* v_handle_19_, lean_object* v_x_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lasm_RPC_Endpoint_call___redArg___lam__0(v_handle_19_, v_x_20_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__1(lean_object* v_inst_23_, lean_object* v_a_24_, lean_object* v_handle_25_, lean_object* v_x_26_){
_start:
{
if (lean_obj_tag(v_x_26_) == 0)
{
lean_object* v_a_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_36_; 
lean_dec(v_handle_25_);
lean_dec(v_a_24_);
lean_dec_ref(v_inst_23_);
v_a_28_ = lean_ctor_get(v_x_26_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v_x_26_);
if (v_isSharedCheck_36_ == 0)
{
v___x_30_ = v_x_26_;
v_isShared_31_ = v_isSharedCheck_36_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_a_28_);
lean_dec(v_x_26_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_36_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_33_; 
if (v_isShared_31_ == 0)
{
v___x_33_ = v___x_30_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v_a_28_);
v___x_33_ = v_reuseFailAlloc_35_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
lean_object* v___x_34_; 
v___x_34_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
return v___x_34_;
}
}
}
else
{
lean_object* v_a_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_48_; 
v_a_37_ = lean_ctor_get(v_x_26_, 0);
v_isSharedCheck_48_ = !lean_is_exclusive(v_x_26_);
if (v_isSharedCheck_48_ == 0)
{
v___x_39_ = v_x_26_;
v_isShared_40_ = v_isSharedCheck_48_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_a_37_);
lean_dec(v_x_26_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_48_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_44_; 
v___x_41_ = l_Lasm_RPC_Endpoint_decodeResponse___redArg(v_inst_23_, v_a_24_, v_a_37_);
v___x_42_ = lean_apply_1(v_handle_25_, v___x_41_);
if (v_isShared_40_ == 0)
{
lean_ctor_set_tag(v___x_39_, 0);
lean_ctor_set(v___x_39_, 0, v___x_42_);
v___x_44_ = v___x_39_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v___x_42_);
v___x_44_ = v_reuseFailAlloc_47_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
return v___x_46_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__1___boxed(lean_object* v_inst_49_, lean_object* v_a_50_, lean_object* v_handle_51_, lean_object* v_x_52_, lean_object* v___y_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lasm_RPC_Endpoint_call___redArg___lam__1(v_inst_49_, v_a_50_, v_handle_51_, v_x_52_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__2(lean_object* v_inst_55_, lean_object* v_handle_56_, lean_object* v_a_57_, lean_object* v_x_58_){
_start:
{
if (lean_obj_tag(v_x_58_) == 0)
{
lean_object* v_a_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_68_; 
lean_dec(v_a_57_);
lean_dec(v_handle_56_);
lean_dec_ref(v_inst_55_);
v_a_60_ = lean_ctor_get(v_x_58_, 0);
v_isSharedCheck_68_ = !lean_is_exclusive(v_x_58_);
if (v_isSharedCheck_68_ == 0)
{
v___x_62_ = v_x_58_;
v_isShared_63_ = v_isSharedCheck_68_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_a_60_);
lean_dec(v_x_58_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_68_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_65_; 
if (v_isShared_63_ == 0)
{
v___x_65_ = v___x_62_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v_a_60_);
v___x_65_ = v_reuseFailAlloc_67_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
lean_object* v___x_66_; 
v___x_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
}
else
{
lean_object* v_a_69_; lean_object* v___f_70_; lean_object* v___x_71_; uint8_t v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v_a_69_ = lean_ctor_get(v_x_58_, 0);
lean_inc(v_a_69_);
lean_dec_ref_known(v_x_58_, 1);
v___f_70_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_call___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_70_, 0, v_inst_55_);
lean_closure_set(v___f_70_, 1, v_a_69_);
lean_closure_set(v___f_70_, 2, v_handle_56_);
v___x_71_ = lean_unsigned_to_nat(0u);
v___x_72_ = 0;
v___x_73_ = l_Lasm_JS_Web_Response_text(v_a_57_);
v___x_74_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_71_, v___x_72_, v___x_73_, v___f_70_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__2___boxed(lean_object* v_inst_75_, lean_object* v_handle_76_, lean_object* v_a_77_, lean_object* v_x_78_, lean_object* v___y_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lasm_RPC_Endpoint_call___redArg___lam__2(v_inst_75_, v_handle_76_, v_a_77_, v_x_78_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__3(lean_object* v_inst_81_, lean_object* v_handle_82_, lean_object* v_x_83_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
lean_object* v_a_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_93_; 
lean_dec(v_handle_82_);
lean_dec_ref(v_inst_81_);
v_a_85_ = lean_ctor_get(v_x_83_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v_x_83_);
if (v_isSharedCheck_93_ == 0)
{
v___x_87_ = v_x_83_;
v_isShared_88_ = v_isSharedCheck_93_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_a_85_);
lean_dec(v_x_83_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_93_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_90_; 
if (v_isShared_88_ == 0)
{
v___x_90_ = v___x_87_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_a_85_);
v___x_90_ = v_reuseFailAlloc_92_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
lean_object* v___x_91_; 
v___x_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
return v___x_91_;
}
}
}
else
{
lean_object* v_a_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_114_; 
v_a_94_ = lean_ctor_get(v_x_83_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v_x_83_);
if (v_isSharedCheck_114_ == 0)
{
v___x_96_ = v_x_83_;
v_isShared_97_ = v_isSharedCheck_114_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_a_94_);
lean_dec(v_x_83_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_114_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___f_98_; lean_object* v___x_99_; uint8_t v___x_100_; lean_object* v_val_102_; lean_object* v___x_105_; 
lean_inc(v_a_94_);
v___f_98_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_call___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_98_, 0, v_inst_81_);
lean_closure_set(v___f_98_, 1, v_handle_82_);
lean_closure_set(v___f_98_, 2, v_a_94_);
v___x_99_ = lean_unsigned_to_nat(0u);
v___x_100_ = 0;
v___x_105_ = l_Lasm_JS_Web_Response_status(v_a_94_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v___x_108_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_105_, 1);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 0, v_a_106_);
v___x_108_ = v___x_96_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_a_106_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
v_val_102_ = v___x_108_;
goto v___jp_101_;
}
}
else
{
lean_object* v_a_110_; lean_object* v___x_112_; 
v_a_110_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_110_);
lean_dec_ref_known(v___x_105_, 1);
if (v_isShared_97_ == 0)
{
lean_ctor_set_tag(v___x_96_, 0);
lean_ctor_set(v___x_96_, 0, v_a_110_);
v___x_112_ = v___x_96_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_110_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
v_val_102_ = v___x_112_;
goto v___jp_101_;
}
}
v___jp_101_:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_103_, 0, v_val_102_);
v___x_104_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_99_, v___x_100_, v___x_103_, v___f_98_);
return v___x_104_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__3___boxed(lean_object* v_inst_115_, lean_object* v_handle_116_, lean_object* v_x_117_, lean_object* v___y_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lasm_RPC_Endpoint_call___redArg___lam__3(v_inst_115_, v_handle_116_, v_x_117_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__4(lean_object* v_e_120_){
_start:
{
lean_object* v_r_123_; lean_object* v_a_126_; 
v_a_126_ = lean_ctor_get(v_e_120_, 0);
lean_inc(v_a_126_);
lean_dec_ref(v_e_120_);
v_r_123_ = v_a_126_;
goto v___jp_122_;
v___jp_122_:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_124_, 0, v_r_123_);
v___x_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
return v___x_125_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__4___boxed(lean_object* v_e_127_, lean_object* v___y_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lasm_RPC_Endpoint_call___redArg___lam__4(v_e_127_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__5(lean_object* v___x_130_, lean_object* v___x_131_, lean_object* v___f_132_, lean_object* v___f_133_){
_start:
{
lean_object* v___x_135_; uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_135_ = lean_unsigned_to_nat(0u);
v___x_136_ = 0;
v___x_137_ = l_Lasm_JS_Web_fetch(v___x_130_, v___x_131_);
v___x_138_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_135_, v___x_136_, v___x_137_, v___f_132_);
v___x_139_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_135_, v___x_136_, v___x_138_, v___f_133_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__5___boxed(lean_object* v___x_140_, lean_object* v___x_141_, lean_object* v___f_142_, lean_object* v___f_143_, lean_object* v___y_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lasm_RPC_Endpoint_call___redArg___lam__5(v___x_140_, v___x_141_, v___f_142_, v___f_143_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg(lean_object* v_inst_163_, lean_object* v_inst_164_, lean_object* v_e_165_, lean_object* v_req_166_, lean_object* v_handle_167_, lean_object* v_base_168_){
_start:
{
lean_object* v_validate_169_; lean_object* v___x_170_; 
v_validate_169_ = lean_ctor_get(v_e_165_, 1);
lean_inc_ref(v_validate_169_);
lean_inc(v_req_166_);
v___x_170_ = lean_apply_1(v_validate_169_, v_req_166_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_181_; 
lean_dec_ref(v_base_168_);
lean_dec(v_req_166_);
lean_dec_ref(v_e_165_);
lean_dec_ref(v_inst_164_);
lean_dec_ref(v_inst_163_);
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_181_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_181_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_181_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_175_, 0, v_a_171_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_175_);
v___x_177_ = v___x_173_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_180_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_apply_1(v_handle_167_, v___x_177_);
v___x_179_ = l_Lasm_UI_Cmd_send___redArg(v___x_178_);
return v___x_179_;
}
}
}
else
{
lean_object* v___f_182_; lean_object* v___f_183_; lean_object* v___f_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___f_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
lean_dec_ref_known(v___x_170_, 1);
lean_inc(v_handle_167_);
v___f_182_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_call___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_182_, 0, v_handle_167_);
v___f_183_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_call___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_183_, 0, v_inst_164_);
lean_closure_set(v___f_183_, 1, v_handle_167_);
v___f_184_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__0));
v___x_185_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_165_);
lean_dec_ref(v_e_165_);
v___x_186_ = lean_string_append(v_base_168_, v___x_185_);
lean_dec_ref(v___x_185_);
v___x_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
v___x_188_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__2));
v___x_189_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__8));
v___x_190_ = l_Lasm_RPC_Endpoint_encodeRequest___redArg(v_inst_163_, v_req_166_);
v___x_191_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
v___x_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
v___x_193_ = lean_box(0);
v___x_194_ = lean_box(0);
v___x_195_ = lean_alloc_ctor(0, 15, 0);
lean_ctor_set(v___x_195_, 0, v___x_188_);
lean_ctor_set(v___x_195_, 1, v___x_189_);
lean_ctor_set(v___x_195_, 2, v___x_192_);
lean_ctor_set(v___x_195_, 3, v___x_193_);
lean_ctor_set(v___x_195_, 4, v___x_193_);
lean_ctor_set(v___x_195_, 5, v___x_193_);
lean_ctor_set(v___x_195_, 6, v___x_193_);
lean_ctor_set(v___x_195_, 7, v___x_193_);
lean_ctor_set(v___x_195_, 8, v___x_193_);
lean_ctor_set(v___x_195_, 9, v___x_193_);
lean_ctor_set(v___x_195_, 10, v___x_193_);
lean_ctor_set(v___x_195_, 11, v___x_193_);
lean_ctor_set(v___x_195_, 12, v___x_193_);
lean_ctor_set(v___x_195_, 13, v___x_193_);
lean_ctor_set(v___x_195_, 14, v___x_194_);
v___x_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
v___f_197_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_call___redArg___lam__5___boxed), 5, 4);
lean_closure_set(v___f_197_, 0, v___x_187_);
lean_closure_set(v___f_197_, 1, v___x_196_);
lean_closure_set(v___f_197_, 2, v___f_183_);
lean_closure_set(v___f_197_, 3, v___f_182_);
v___x_198_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___boxed), 6, 5);
lean_closure_set(v___x_198_, 0, lean_box(0));
lean_closure_set(v___x_198_, 1, lean_box(0));
lean_closure_set(v___x_198_, 2, lean_box(0));
lean_closure_set(v___x_198_, 3, v___f_197_);
lean_closure_set(v___x_198_, 4, v___f_184_);
v___x_199_ = l_Lasm_UI_Cmd_task___redArg(v___x_198_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call(lean_object* v_Req_200_, lean_object* v_Res_201_, lean_object* v_Msg_202_, lean_object* v_inst_203_, lean_object* v_inst_204_, lean_object* v_e_205_, lean_object* v_req_206_, lean_object* v_handle_207_, lean_object* v_base_208_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lasm_RPC_Endpoint_call___redArg(v_inst_203_, v_inst_204_, v_e_205_, v_req_206_, v_handle_207_, v_base_208_);
return v___x_209_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_RPC_Core(uint8_t builtin);
lean_object* initialize_Lasm_UI_Cmd(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_RPC_Client(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_RPC_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Cmd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
