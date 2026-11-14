// Lean compiler output
// Module: Lasm.RPC.Client
// Imports: public import Init public meta import Init public import Lasm.RPC.Core public import Lasm.UI.Cmd
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
lean_object* l_Lasm_UI_Cmd_send___redArg(lean_object*);
lean_object* l_Lasm_RPC_Endpoint_path___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_RPC_Endpoint_encodeRequest___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Cmd_ofEffect___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__0 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__0_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "content-type"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__1 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__1_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "application/json"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__2 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_call___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__1_value),((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__2_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__3 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_call___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__4 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__4_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "same-origin"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__5 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__0(lean_object* v_handle_1_, lean_object* v_inst_2_, lean_object* v_x_3_){
_start:
{
if (lean_obj_tag(v_x_3_) == 0)
{
lean_object* v_a_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_13_; 
lean_dec_ref(v_inst_2_);
v_a_4_ = lean_ctor_get(v_x_3_, 0);
v_isSharedCheck_13_ = !lean_is_exclusive(v_x_3_);
if (v_isSharedCheck_13_ == 0)
{
v___x_6_ = v_x_3_;
v_isShared_7_ = v_isSharedCheck_13_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_a_4_);
lean_dec(v_x_3_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_13_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
lean_object* v___x_8_; lean_object* v___x_10_; 
v___x_8_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_8_, 0, v_a_4_);
if (v_isShared_7_ == 0)
{
lean_ctor_set(v___x_6_, 0, v___x_8_);
v___x_10_ = v___x_6_;
goto v_reusejp_9_;
}
else
{
lean_object* v_reuseFailAlloc_12_; 
v_reuseFailAlloc_12_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_12_, 0, v___x_8_);
v___x_10_ = v_reuseFailAlloc_12_;
goto v_reusejp_9_;
}
v_reusejp_9_:
{
lean_object* v___x_11_; 
v___x_11_ = lean_apply_1(v_handle_1_, v___x_10_);
return v___x_11_;
}
}
}
else
{
lean_object* v_a_14_; lean_object* v_status_15_; lean_object* v_body_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v_a_14_ = lean_ctor_get(v_x_3_, 0);
lean_inc(v_a_14_);
lean_dec_ref_known(v_x_3_, 1);
v_status_15_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_status_15_);
v_body_16_ = lean_ctor_get(v_a_14_, 3);
lean_inc_ref(v_body_16_);
lean_dec(v_a_14_);
v___x_17_ = l_Lasm_RPC_Endpoint_decodeResponse___redArg(v_inst_2_, v_status_15_, v_body_16_);
v___x_18_ = lean_apply_1(v_handle_1_, v___x_17_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg(lean_object* v_inst_29_, lean_object* v_inst_30_, lean_object* v_e_31_, lean_object* v_req_32_, lean_object* v_handle_33_, lean_object* v_base_34_){
_start:
{
lean_object* v_validate_35_; lean_object* v___x_36_; 
v_validate_35_ = lean_ctor_get(v_e_31_, 1);
lean_inc_ref(v_validate_35_);
lean_inc(v_req_32_);
v___x_36_ = lean_apply_1(v_validate_35_, v_req_32_);
if (lean_obj_tag(v___x_36_) == 0)
{
lean_object* v_a_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_47_; 
lean_dec_ref(v_base_34_);
lean_dec(v_req_32_);
lean_dec_ref(v_e_31_);
lean_dec_ref(v_inst_30_);
lean_dec_ref(v_inst_29_);
v_a_37_ = lean_ctor_get(v___x_36_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___x_36_);
if (v_isSharedCheck_47_ == 0)
{
v___x_39_ = v___x_36_;
v_isShared_40_ = v_isSharedCheck_47_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_a_37_);
lean_dec(v___x_36_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_47_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_41_; lean_object* v___x_43_; 
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v_a_37_);
if (v_isShared_40_ == 0)
{
lean_ctor_set(v___x_39_, 0, v___x_41_);
v___x_43_ = v___x_39_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_41_);
v___x_43_ = v_reuseFailAlloc_46_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_apply_1(v_handle_33_, v___x_43_);
v___x_45_ = l_Lasm_UI_Cmd_send___redArg(v___x_44_);
return v___x_45_;
}
}
}
else
{
lean_object* v___f_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_64_; 
lean_dec_ref_known(v___x_36_, 1);
v___f_48_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_call___redArg___lam__0), 3, 2);
lean_closure_set(v___f_48_, 0, v_handle_33_);
lean_closure_set(v___f_48_, 1, v_inst_30_);
v___x_49_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__0));
v___x_50_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_31_);
v_isSharedCheck_64_ = !lean_is_exclusive(v_e_31_);
if (v_isSharedCheck_64_ == 0)
{
lean_object* v_unused_65_; lean_object* v_unused_66_; 
v_unused_65_ = lean_ctor_get(v_e_31_, 1);
lean_dec(v_unused_65_);
v_unused_66_ = lean_ctor_get(v_e_31_, 0);
lean_dec(v_unused_66_);
v___x_52_ = v_e_31_;
v_isShared_53_ = v_isSharedCheck_64_;
goto v_resetjp_51_;
}
else
{
lean_dec(v_e_31_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_64_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v_request_59_; lean_object* v___x_61_; 
v___x_54_ = lean_string_append(v_base_34_, v___x_50_);
lean_dec_ref(v___x_50_);
v___x_55_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__4));
v___x_56_ = l_Lasm_RPC_Endpoint_encodeRequest___redArg(v_inst_29_, v_req_32_);
v___x_57_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
v___x_58_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__5));
v_request_59_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_request_59_, 0, v___x_49_);
lean_ctor_set(v_request_59_, 1, v___x_54_);
lean_ctor_set(v_request_59_, 2, v___x_55_);
lean_ctor_set(v_request_59_, 3, v___x_57_);
lean_ctor_set(v_request_59_, 4, v___x_58_);
if (v_isShared_53_ == 0)
{
lean_ctor_set_tag(v___x_52_, 2);
lean_ctor_set(v___x_52_, 1, v___f_48_);
lean_ctor_set(v___x_52_, 0, v_request_59_);
v___x_61_ = v___x_52_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_request_59_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v___f_48_);
v___x_61_ = v_reuseFailAlloc_63_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lasm_UI_Cmd_ofEffect___redArg(v___x_61_);
return v___x_62_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call(lean_object* v_Req_67_, lean_object* v_Res_68_, lean_object* v_Msg_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_e_72_, lean_object* v_req_73_, lean_object* v_handle_74_, lean_object* v_base_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lasm_RPC_Endpoint_call___redArg(v_inst_70_, v_inst_71_, v_e_72_, v_req_73_, v_handle_74_, v_base_75_);
return v___x_76_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_RPC_Core(uint8_t builtin);
lean_object* initialize_Lasm_UI_Cmd(uint8_t builtin);
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
