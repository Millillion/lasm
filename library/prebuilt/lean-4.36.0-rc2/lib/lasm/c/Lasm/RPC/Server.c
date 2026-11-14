// Lean compiler output
// Module: Lasm.RPC.Server
// Imports: public import Init public meta import Init public import Lasm.RPC.Core public import Lasm.Fetch
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
lean_object* l_Lasm_Fetch_Response_json(lean_object*, uint16_t);
lean_object* l_Lasm_Fetch_Response_withHeader(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_Fetch_Response_text(lean_object*, uint16_t);
lean_object* l_Lasm_RPC_Endpoint_encodeResponse___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_RPC_Endpoint_decodeRequest___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_RPC_Error_toString(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_Fetch_Request_segments(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Lasm_Fetch_Request_text(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_handler___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cache-control"};
static const lean_object* l_Lasm_RPC_handler___lam__0___closed__0 = (const lean_object*)&l_Lasm_RPC_handler___lam__0___closed__0_value;
static const lean_string_object l_Lasm_RPC_handler___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no-store"};
static const lean_object* l_Lasm_RPC_handler___lam__0___closed__1 = (const lean_object*)&l_Lasm_RPC_handler___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_handler_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_handler_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_handler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l_Lasm_RPC_handler___closed__0 = (const lean_object*)&l_Lasm_RPC_handler___closed__0_value;
static const lean_string_object l_Lasm_RPC_handler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rpc"};
static const lean_object* l_Lasm_RPC_handler___closed__1 = (const lean_object*)&l_Lasm_RPC_handler___closed__1_value;
static const lean_string_object l_Lasm_RPC_handler___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Use POST\n"};
static const lean_object* l_Lasm_RPC_handler___closed__2 = (const lean_object*)&l_Lasm_RPC_handler___closed__2_value;
static lean_once_cell_t l_Lasm_RPC_handler___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_handler___closed__3;
static const lean_string_object l_Lasm_RPC_handler___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "allow"};
static const lean_object* l_Lasm_RPC_handler___closed__4 = (const lean_object*)&l_Lasm_RPC_handler___closed__4_value;
static lean_once_cell_t l_Lasm_RPC_handler___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_handler___closed__5;
static lean_once_cell_t l_Lasm_RPC_handler___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_handler___closed__6;
static lean_once_cell_t l_Lasm_RPC_handler___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_handler___closed__7;
static const lean_string_object l_Lasm_RPC_handler___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_RPC_handler___closed__8 = (const lean_object*)&l_Lasm_RPC_handler___closed__8_value;
static const lean_string_object l_Lasm_RPC_handler___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "no endpoint "};
static const lean_object* l_Lasm_RPC_handler___closed__9 = (const lean_object*)&l_Lasm_RPC_handler___closed__9_value;
static const lean_closure_object l_Lasm_RPC_handler___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_handler___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_handler___closed__10 = (const lean_object*)&l_Lasm_RPC_handler___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_handler(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v_a_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_12_; 
lean_dec_ref(v_inst_1_);
v_a_4_ = lean_ctor_get(v_x_2_, 0);
v_isSharedCheck_12_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_12_ == 0)
{
v___x_6_ = v_x_2_;
v_isShared_7_ = v_isSharedCheck_12_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_a_4_);
lean_dec(v_x_2_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_12_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
lean_object* v___x_9_; 
if (v_isShared_7_ == 0)
{
v___x_9_ = v___x_6_;
goto v_reusejp_8_;
}
else
{
lean_object* v_reuseFailAlloc_11_; 
v_reuseFailAlloc_11_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_11_, 0, v_a_4_);
v___x_9_ = v_reuseFailAlloc_11_;
goto v_reusejp_8_;
}
v_reusejp_8_:
{
lean_object* v___x_10_; 
v___x_10_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
return v___x_10_;
}
}
}
else
{
lean_object* v_a_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_28_; 
v_a_13_ = lean_ctor_get(v_x_2_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_28_ == 0)
{
v___x_15_ = v_x_2_;
v_isShared_16_ = v_isSharedCheck_28_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_a_13_);
lean_dec(v_x_2_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_28_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
uint16_t v___y_18_; 
if (lean_obj_tag(v_a_13_) == 1)
{
uint16_t v___x_26_; 
v___x_26_ = 200;
v___y_18_ = v___x_26_;
goto v___jp_17_;
}
else
{
uint16_t v___x_27_; 
v___x_27_ = 500;
v___y_18_ = v___x_27_;
goto v___jp_17_;
}
v___jp_17_:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_23_; 
v___x_19_ = l_Lasm_RPC_Endpoint_encodeResponse___redArg(v_inst_1_, v_a_13_);
v___x_20_ = lean_box(v___y_18_);
v___x_21_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
lean_ctor_set(v___x_21_, 1, v___x_19_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 0, v___x_21_);
v___x_23_ = v___x_15_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v___x_21_);
v___x_23_ = v_reuseFailAlloc_25_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
lean_object* v___x_24_; 
v___x_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0___boxed(lean_object* v_inst_29_, lean_object* v_x_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lasm_RPC_Endpoint_serve___redArg___lam__0(v_inst_29_, v_x_30_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1(lean_object* v_inst_33_, lean_object* v_e_34_, lean_object* v_inst_35_, lean_object* v_handler_36_, lean_object* v___f_37_, lean_object* v_body_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lasm_RPC_Endpoint_decodeRequest___redArg(v_inst_33_, v_e_34_, v_body_38_);
if (lean_obj_tag(v___x_40_) == 0)
{
lean_object* v_a_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_55_; 
lean_dec_ref(v___f_37_);
lean_dec_ref(v_handler_36_);
v_a_41_ = lean_ctor_get(v___x_40_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_55_ == 0)
{
v___x_43_ = v___x_40_;
v_isShared_44_ = v_isSharedCheck_55_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_a_41_);
lean_dec(v___x_40_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_55_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
uint16_t v___x_45_; lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_45_ = 400;
v___x_46_ = l_Lasm_RPC_Error_toString(v_a_41_);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 0, v___x_46_);
v___x_48_ = v___x_43_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v___x_46_);
v___x_48_ = v_reuseFailAlloc_54_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_49_ = l_Lasm_RPC_Endpoint_encodeResponse___redArg(v_inst_35_, v___x_48_);
v___x_50_ = lean_box(v___x_45_);
v___x_51_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v___x_49_);
v___x_52_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
v___x_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
}
else
{
lean_object* v_a_56_; lean_object* v___x_57_; uint8_t v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec_ref(v_inst_35_);
v_a_56_ = lean_ctor_get(v___x_40_, 0);
lean_inc(v_a_56_);
lean_dec_ref_known(v___x_40_, 1);
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = 0;
v___x_59_ = lean_apply_3(v_handler_36_, v_a_56_, lean_box(0), lean_box(0));
v___x_60_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_57_, v___x_58_, v___x_59_, v___f_37_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1___boxed(lean_object* v_inst_61_, lean_object* v_e_62_, lean_object* v_inst_63_, lean_object* v_handler_64_, lean_object* v___f_65_, lean_object* v_body_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lasm_RPC_Endpoint_serve___redArg___lam__1(v_inst_61_, v_e_62_, v_inst_63_, v_handler_64_, v___f_65_, v_body_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg(lean_object* v_inst_69_, lean_object* v_inst_70_, lean_object* v_e_71_, lean_object* v_handler_72_){
_start:
{
lean_object* v_name_73_; lean_object* v___f_74_; lean_object* v___f_75_; lean_object* v___x_76_; 
v_name_73_ = lean_ctor_get(v_e_71_, 0);
lean_inc_ref(v_name_73_);
lean_inc_ref(v_inst_70_);
v___f_74_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_serve___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_74_, 0, v_inst_70_);
v___f_75_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_serve___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_75_, 0, v_inst_69_);
lean_closure_set(v___f_75_, 1, v_e_71_);
lean_closure_set(v___f_75_, 2, v_inst_70_);
lean_closure_set(v___f_75_, 3, v_handler_72_);
lean_closure_set(v___f_75_, 4, v___f_74_);
v___x_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_76_, 0, v_name_73_);
lean_ctor_set(v___x_76_, 1, v___f_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve(lean_object* v_Req_77_, lean_object* v_Res_78_, lean_object* v_inst_79_, lean_object* v_inst_80_, lean_object* v_e_81_, lean_object* v_handler_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lasm_RPC_Endpoint_serve___redArg(v_inst_79_, v_inst_80_, v_e_81_, v_handler_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0(lean_object* v_handler_84_, lean_object* v_r_85_, lean_object* v_x_86_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_apply_2(v_handler_84_, v_r_85_, lean_box(0));
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0___boxed(lean_object* v_handler_89_, lean_object* v_r_90_, lean_object* v_x_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0(v_handler_89_, v_r_90_, v_x_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg(lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v_e_96_, lean_object* v_handler_97_){
_start:
{
lean_object* v___f_98_; lean_object* v___x_99_; 
v___f_98_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_98_, 0, v_handler_97_);
v___x_99_ = l_Lasm_RPC_Endpoint_serve___redArg(v_inst_94_, v_inst_95_, v_e_96_, v___f_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27(lean_object* v_Req_100_, lean_object* v_Res_101_, lean_object* v_inst_102_, lean_object* v_inst_103_, lean_object* v_e_104_, lean_object* v_handler_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lasm_RPC_Endpoint_serve_x27___redArg(v_inst_102_, v_inst_103_, v_e_104_, v_handler_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___lam__0(lean_object* v_x_109_){
_start:
{
if (lean_obj_tag(v_x_109_) == 0)
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_119_; 
v_a_111_ = lean_ctor_get(v_x_109_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v_x_109_);
if (v_isSharedCheck_119_ == 0)
{
v___x_113_ = v_x_109_;
v_isShared_114_ = v_isSharedCheck_119_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v_x_109_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_119_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_118_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
lean_object* v___x_117_; 
v___x_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
return v___x_117_;
}
}
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_135_; 
v_a_120_ = lean_ctor_get(v_x_109_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v_x_109_);
if (v_isSharedCheck_135_ == 0)
{
v___x_122_ = v_x_109_;
v_isShared_123_ = v_isSharedCheck_135_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v_x_109_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_135_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v_fst_124_; lean_object* v_snd_125_; uint16_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_132_; 
v_fst_124_ = lean_ctor_get(v_a_120_, 0);
lean_inc(v_fst_124_);
v_snd_125_ = lean_ctor_get(v_a_120_, 1);
lean_inc(v_snd_125_);
lean_dec(v_a_120_);
v___x_126_ = lean_unbox(v_fst_124_);
lean_dec(v_fst_124_);
v___x_127_ = l_Lasm_Fetch_Response_json(v_snd_125_, v___x_126_);
v___x_128_ = ((lean_object*)(l_Lasm_RPC_handler___lam__0___closed__0));
v___x_129_ = ((lean_object*)(l_Lasm_RPC_handler___lam__0___closed__1));
v___x_130_ = l_Lasm_Fetch_Response_withHeader(v___x_127_, v___x_128_, v___x_129_);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 0, v___x_130_);
v___x_132_ = v___x_122_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_134_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
lean_object* v___x_133_; 
v___x_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
return v___x_133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___lam__0___boxed(lean_object* v_x_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lasm_RPC_handler___lam__0(v_x_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_handler_spec__0(lean_object* v_head_139_, lean_object* v_x_140_){
_start:
{
if (lean_obj_tag(v_x_140_) == 0)
{
lean_object* v___x_141_; 
v___x_141_ = lean_box(0);
return v___x_141_;
}
else
{
lean_object* v_head_142_; lean_object* v_tail_143_; lean_object* v_name_144_; uint8_t v___x_145_; 
v_head_142_ = lean_ctor_get(v_x_140_, 0);
v_tail_143_ = lean_ctor_get(v_x_140_, 1);
v_name_144_ = lean_ctor_get(v_head_142_, 0);
v___x_145_ = lean_string_dec_eq(v_name_144_, v_head_139_);
if (v___x_145_ == 0)
{
v_x_140_ = v_tail_143_;
goto _start;
}
else
{
lean_object* v___x_147_; 
lean_inc(v_head_142_);
v___x_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_147_, 0, v_head_142_);
return v___x_147_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_handler_spec__0___boxed(lean_object* v_head_148_, lean_object* v_x_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_List_find_x3f___at___00Lasm_RPC_handler_spec__0(v_head_148_, v_x_149_);
lean_dec(v_x_149_);
lean_dec_ref(v_head_148_);
return v_res_150_;
}
}
static lean_object* _init_l_Lasm_RPC_handler___closed__3(void){
_start:
{
uint16_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = 405;
v___x_155_ = ((lean_object*)(l_Lasm_RPC_handler___closed__2));
v___x_156_ = l_Lasm_Fetch_Response_text(v___x_155_, v___x_154_);
return v___x_156_;
}
}
static lean_object* _init_l_Lasm_RPC_handler___closed__5(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_158_ = ((lean_object*)(l_Lasm_RPC_handler___closed__0));
v___x_159_ = ((lean_object*)(l_Lasm_RPC_handler___closed__4));
v___x_160_ = lean_obj_once(&l_Lasm_RPC_handler___closed__3, &l_Lasm_RPC_handler___closed__3_once, _init_l_Lasm_RPC_handler___closed__3);
v___x_161_ = l_Lasm_Fetch_Response_withHeader(v___x_160_, v___x_159_, v___x_158_);
return v___x_161_;
}
}
static lean_object* _init_l_Lasm_RPC_handler___closed__6(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_obj_once(&l_Lasm_RPC_handler___closed__5, &l_Lasm_RPC_handler___closed__5_once, _init_l_Lasm_RPC_handler___closed__5);
v___x_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
return v___x_163_;
}
}
static lean_object* _init_l_Lasm_RPC_handler___closed__7(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_obj_once(&l_Lasm_RPC_handler___closed__6, &l_Lasm_RPC_handler___closed__6_once, _init_l_Lasm_RPC_handler___closed__6);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_handler(lean_object* v_routes_169_, lean_object* v_fallback_170_, lean_object* v_req_171_){
_start:
{
lean_object* v_method_173_; lean_object* v___x_174_; uint8_t v___x_175_; 
v_method_173_ = lean_ctor_get(v_req_171_, 0);
v___x_174_ = ((lean_object*)(l_Lasm_RPC_handler___closed__0));
v___x_175_ = lean_string_dec_eq(v_method_173_, v___x_174_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; 
lean_inc_ref(v_req_171_);
v___x_176_ = l_Lasm_Fetch_Request_segments(v_req_171_);
if (lean_obj_tag(v___x_176_) == 1)
{
lean_object* v_head_177_; lean_object* v_tail_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v_head_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_head_177_);
v_tail_178_ = lean_ctor_get(v___x_176_, 1);
lean_inc(v_tail_178_);
lean_dec_ref_known(v___x_176_, 2);
v___x_179_ = ((lean_object*)(l_Lasm_RPC_handler___closed__1));
v___x_180_ = lean_string_dec_eq(v_head_177_, v___x_179_);
lean_dec(v_head_177_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; 
lean_dec(v_tail_178_);
v___x_181_ = lean_apply_2(v_fallback_170_, v_req_171_, lean_box(0));
return v___x_181_;
}
else
{
if (lean_obj_tag(v_tail_178_) == 1)
{
lean_object* v_tail_182_; 
v_tail_182_ = lean_ctor_get(v_tail_178_, 1);
lean_inc(v_tail_182_);
lean_dec_ref_known(v_tail_178_, 2);
if (lean_obj_tag(v_tail_182_) == 0)
{
lean_object* v___x_183_; 
lean_dec_ref(v_req_171_);
lean_dec_ref(v_fallback_170_);
v___x_183_ = lean_obj_once(&l_Lasm_RPC_handler___closed__7, &l_Lasm_RPC_handler___closed__7_once, _init_l_Lasm_RPC_handler___closed__7);
return v___x_183_;
}
else
{
lean_object* v___x_184_; 
lean_dec(v_tail_182_);
v___x_184_ = lean_apply_2(v_fallback_170_, v_req_171_, lean_box(0));
return v___x_184_;
}
}
else
{
lean_object* v___x_185_; 
lean_dec(v_tail_178_);
v___x_185_ = lean_apply_2(v_fallback_170_, v_req_171_, lean_box(0));
return v___x_185_;
}
}
}
else
{
lean_object* v___x_186_; 
lean_dec(v___x_176_);
v___x_186_ = lean_apply_2(v_fallback_170_, v_req_171_, lean_box(0));
return v___x_186_;
}
}
else
{
lean_object* v___x_187_; 
lean_inc_ref(v_req_171_);
v___x_187_ = l_Lasm_Fetch_Request_segments(v_req_171_);
if (lean_obj_tag(v___x_187_) == 1)
{
lean_object* v_head_188_; lean_object* v_tail_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_231_; 
v_head_188_ = lean_ctor_get(v___x_187_, 0);
v_tail_189_ = lean_ctor_get(v___x_187_, 1);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_231_ == 0)
{
v___x_191_ = v___x_187_;
v_isShared_192_ = v_isSharedCheck_231_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_tail_189_);
lean_inc(v_head_188_);
lean_dec(v___x_187_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_231_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_193_ = ((lean_object*)(l_Lasm_RPC_handler___closed__1));
v___x_194_ = lean_string_dec_eq(v_head_188_, v___x_193_);
lean_dec(v_head_188_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
lean_del_object(v___x_191_);
lean_dec(v_tail_189_);
v___x_195_ = lean_apply_2(v_fallback_170_, v_req_171_, lean_box(0));
return v___x_195_;
}
else
{
if (lean_obj_tag(v_tail_189_) == 1)
{
lean_object* v_tail_196_; 
v_tail_196_ = lean_ctor_get(v_tail_189_, 1);
if (lean_obj_tag(v_tail_196_) == 0)
{
lean_object* v_head_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_227_; 
lean_dec_ref(v_fallback_170_);
v_head_197_ = lean_ctor_get(v_tail_189_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v_tail_189_);
if (v_isSharedCheck_227_ == 0)
{
lean_object* v_unused_228_; 
v_unused_228_ = lean_ctor_get(v_tail_189_, 1);
lean_dec(v_unused_228_);
v___x_199_ = v_tail_189_;
v_isShared_200_ = v_isSharedCheck_227_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_head_197_);
lean_dec(v_tail_189_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_227_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; 
v___x_201_ = l_List_find_x3f___at___00Lasm_RPC_handler_spec__0(v_head_197_, v_routes_169_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_207_; 
lean_dec_ref(v_req_171_);
v___x_202_ = ((lean_object*)(l_Lasm_RPC_handler___closed__8));
v___x_203_ = ((lean_object*)(l_Lasm_RPC_handler___closed__9));
v___x_204_ = lean_string_append(v___x_203_, v_head_197_);
lean_dec(v_head_197_);
v___x_205_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
if (v_isShared_192_ == 0)
{
lean_ctor_set_tag(v___x_191_, 0);
lean_ctor_set(v___x_191_, 1, v___x_205_);
lean_ctor_set(v___x_191_, 0, v___x_202_);
v___x_207_ = v___x_191_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_202_);
lean_ctor_set(v_reuseFailAlloc_218_, 1, v___x_205_);
v___x_207_ = v_reuseFailAlloc_218_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_208_ = lean_box(0);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v___x_208_);
lean_ctor_set(v___x_199_, 0, v___x_207_);
v___x_210_ = v___x_199_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_207_);
lean_ctor_set(v_reuseFailAlloc_217_, 1, v___x_208_);
v___x_210_ = v_reuseFailAlloc_217_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
lean_object* v___x_211_; lean_object* v___x_212_; uint16_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_211_ = l_Lean_Json_mkObj(v___x_210_);
lean_dec_ref(v___x_210_);
v___x_212_ = l_Lean_Json_compress(v___x_211_);
v___x_213_ = 404;
v___x_214_ = l_Lasm_Fetch_Response_json(v___x_212_, v___x_213_);
v___x_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
}
}
else
{
lean_object* v_val_219_; lean_object* v_run_220_; lean_object* v___f_221_; lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
lean_del_object(v___x_199_);
lean_dec(v_head_197_);
lean_del_object(v___x_191_);
v_val_219_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_val_219_);
lean_dec_ref_known(v___x_201_, 1);
v_run_220_ = lean_ctor_get(v_val_219_, 1);
lean_inc_ref(v_run_220_);
lean_dec(v_val_219_);
v___f_221_ = ((lean_object*)(l_Lasm_RPC_handler___closed__10));
v___x_222_ = l_Lasm_Fetch_Request_text(v_req_171_);
v___x_223_ = lean_unsigned_to_nat(0u);
v___x_224_ = 0;
v___x_225_ = lean_apply_2(v_run_220_, v___x_222_, lean_box(0));
v___x_226_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_223_, v___x_224_, v___x_225_, v___f_221_);
return v___x_226_;
}
}
}
else
{
lean_object* v___x_229_; 
lean_dec_ref_known(v_tail_189_, 2);
lean_del_object(v___x_191_);
v___x_229_ = lean_apply_2(v_fallback_170_, v_req_171_, lean_box(0));
return v___x_229_;
}
}
else
{
lean_object* v___x_230_; 
lean_del_object(v___x_191_);
lean_dec(v_tail_189_);
v___x_230_ = lean_apply_2(v_fallback_170_, v_req_171_, lean_box(0));
return v___x_230_;
}
}
}
}
else
{
lean_object* v___x_232_; 
lean_dec(v___x_187_);
v___x_232_ = lean_apply_2(v_fallback_170_, v_req_171_, lean_box(0));
return v___x_232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___boxed(lean_object* v_routes_233_, lean_object* v_fallback_234_, lean_object* v_req_235_, lean_object* v_a_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lasm_RPC_handler(v_routes_233_, v_fallback_234_, v_req_235_);
lean_dec(v_routes_233_);
return v_res_237_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_RPC_Core(uint8_t builtin);
lean_object* initialize_Lasm_Fetch(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_RPC_Server(uint8_t builtin) {
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
res = initialize_Lasm_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
