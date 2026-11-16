// Lean compiler output
// Module: Lasm.RPC.Web
// Imports: public import Init public meta import Init public import Lasm.RPC.Server public import Lasm.JS.Web
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
lean_object* l_Lasm_RPC_dispatch(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_URL_pathname(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Web_Response_new(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_URL_new(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Request_text(lean_object*);
lean_object* l_Lasm_RPC_endpointName_x3f(lean_object*);
lean_object* l_Lasm_JS_Web_Request_method(lean_object*);
lean_object* l_Lasm_JS_Web_Request_url(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_Answer_toResponse_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_Answer_toResponse_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_toResponse(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_toResponse___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__1(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_RPC_webHandler___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_RPC_webHandler___lam__2___closed__0 = (const lean_object*)&l_Lasm_RPC_webHandler___lam__2___closed__0_value;
static const lean_ctor_object l_Lasm_RPC_webHandler___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_webHandler___lam__2___closed__0_value)}};
static const lean_object* l_Lasm_RPC_webHandler___lam__2___closed__1 = (const lean_object*)&l_Lasm_RPC_webHandler___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_webHandler___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l_Lasm_RPC_webHandler___lam__5___closed__0 = (const lean_object*)&l_Lasm_RPC_webHandler___lam__5___closed__0_value;
static const lean_string_object l_Lasm_RPC_webHandler___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_RPC_webHandler___lam__5___closed__1 = (const lean_object*)&l_Lasm_RPC_webHandler___lam__5___closed__1_value;
static const lean_ctor_object l_Lasm_RPC_webHandler___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_RPC_webHandler___lam__5___closed__1_value)}};
static const lean_object* l_Lasm_RPC_webHandler___lam__5___closed__2 = (const lean_object*)&l_Lasm_RPC_webHandler___lam__5___closed__2_value;
static const lean_ctor_object l_Lasm_RPC_webHandler___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_webHandler___lam__5___closed__2_value)}};
static const lean_object* l_Lasm_RPC_webHandler___lam__5___closed__3 = (const lean_object*)&l_Lasm_RPC_webHandler___lam__5___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_RPC_webHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_webHandler___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_webHandler___closed__0 = (const lean_object*)&l_Lasm_RPC_webHandler___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_Answer_toResponse_spec__0(size_t v_sz_1_, size_t v_i_2_, lean_object* v_bs_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = lean_usize_dec_lt(v_i_2_, v_sz_1_);
if (v___x_4_ == 0)
{
return v_bs_3_;
}
else
{
lean_object* v_v_5_; lean_object* v_fst_6_; lean_object* v_snd_7_; lean_object* v___x_8_; lean_object* v_bs_x27_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; size_t v___x_14_; size_t v___x_15_; lean_object* v___x_16_; 
v_v_5_ = lean_array_uget_borrowed(v_bs_3_, v_i_2_);
v_fst_6_ = lean_ctor_get(v_v_5_, 0);
lean_inc(v_fst_6_);
v_snd_7_ = lean_ctor_get(v_v_5_, 1);
lean_inc(v_snd_7_);
v___x_8_ = lean_unsigned_to_nat(0u);
v_bs_x27_9_ = lean_array_uset(v_bs_3_, v_i_2_, v___x_8_);
v___x_10_ = lean_unsigned_to_nat(2u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
v___x_12_ = lean_array_push(v___x_11_, v_fst_6_);
v___x_13_ = lean_array_push(v___x_12_, v_snd_7_);
v___x_14_ = ((size_t)1ULL);
v___x_15_ = lean_usize_add(v_i_2_, v___x_14_);
v___x_16_ = lean_array_uset(v_bs_x27_9_, v_i_2_, v___x_13_);
v_i_2_ = v___x_15_;
v_bs_3_ = v___x_16_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_Answer_toResponse_spec__0___boxed(lean_object* v_sz_18_, lean_object* v_i_19_, lean_object* v_bs_20_){
_start:
{
size_t v_sz_boxed_21_; size_t v_i_boxed_22_; lean_object* v_res_23_; 
v_sz_boxed_21_ = lean_unbox_usize(v_sz_18_);
lean_dec(v_sz_18_);
v_i_boxed_22_ = lean_unbox_usize(v_i_19_);
lean_dec(v_i_19_);
v_res_23_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_Answer_toResponse_spec__0(v_sz_boxed_21_, v_i_boxed_22_, v_bs_20_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_toResponse(lean_object* v_a_24_){
_start:
{
uint16_t v_status_26_; lean_object* v_headers_27_; lean_object* v_body_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; size_t v_sz_34_; size_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v_status_26_ = lean_ctor_get_uint16(v_a_24_, sizeof(void*)*2);
v_headers_27_ = lean_ctor_get(v_a_24_, 0);
lean_inc_ref(v_headers_27_);
v_body_28_ = lean_ctor_get(v_a_24_, 1);
lean_inc_ref(v_body_28_);
lean_dec_ref(v_a_24_);
v___x_29_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_29_, 0, v_body_28_);
v___x_30_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
v___x_31_ = lean_uint16_to_nat(v_status_26_);
v___x_32_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
v___x_33_ = lean_box(0);
v_sz_34_ = lean_array_size(v_headers_27_);
v___x_35_ = ((size_t)0ULL);
v___x_36_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_Answer_toResponse_spec__0(v_sz_34_, v___x_35_, v_headers_27_);
v___x_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
v___x_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
v___x_39_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_39_, 0, v___x_32_);
lean_ctor_set(v___x_39_, 1, v___x_33_);
lean_ctor_set(v___x_39_, 2, v___x_38_);
v___x_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
v___x_41_ = l_Lasm_JS_Web_Response_new(v___x_30_, v___x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_toResponse___boxed(lean_object* v_a_42_, lean_object* v_a_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lasm_RPC_Answer_toResponse(v_a_42_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__0(lean_object* v_x_45_){
_start:
{
if (lean_obj_tag(v_x_45_) == 0)
{
lean_object* v_a_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_55_; 
v_a_47_ = lean_ctor_get(v_x_45_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v_x_45_);
if (v_isSharedCheck_55_ == 0)
{
v___x_49_ = v_x_45_;
v_isShared_50_ = v_isSharedCheck_55_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_a_47_);
lean_dec(v_x_45_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_55_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_52_; 
if (v_isShared_50_ == 0)
{
v___x_52_ = v___x_49_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_a_47_);
v___x_52_ = v_reuseFailAlloc_54_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
lean_object* v___x_53_; 
v___x_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
}
else
{
lean_object* v_a_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_65_; 
v_a_56_ = lean_ctor_get(v_x_45_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v_x_45_);
if (v_isSharedCheck_65_ == 0)
{
v___x_58_ = v_x_45_;
v_isShared_59_ = v_isSharedCheck_65_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_a_56_);
lean_dec(v_x_45_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_65_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v___x_62_; 
v___x_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_60_, 0, v_a_56_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 0, v___x_60_);
v___x_62_ = v___x_58_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v___x_60_);
v___x_62_ = v_reuseFailAlloc_64_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
lean_object* v___x_63_; 
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
return v___x_63_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__0___boxed(lean_object* v_x_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lasm_RPC_webHandler___lam__0(v_x_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__1(uint8_t v___x_69_, lean_object* v___f_70_, lean_object* v_x_71_){
_start:
{
if (lean_obj_tag(v_x_71_) == 0)
{
lean_object* v_a_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_81_; 
lean_dec_ref(v___f_70_);
v_a_73_ = lean_ctor_get(v_x_71_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v_x_71_);
if (v_isSharedCheck_81_ == 0)
{
v___x_75_ = v_x_71_;
v_isShared_76_ = v_isSharedCheck_81_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_a_73_);
lean_dec(v_x_71_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_81_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_78_; 
if (v_isShared_76_ == 0)
{
v___x_78_ = v___x_75_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_a_73_);
v___x_78_ = v_reuseFailAlloc_80_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
lean_object* v___x_79_; 
v___x_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
return v___x_79_;
}
}
}
else
{
lean_object* v_a_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_100_; 
v_a_82_ = lean_ctor_get(v_x_71_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v_x_71_);
if (v_isSharedCheck_100_ == 0)
{
v___x_84_ = v_x_71_;
v_isShared_85_ = v_isSharedCheck_100_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_a_82_);
lean_dec(v_x_71_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_100_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; lean_object* v_val_88_; lean_object* v___x_91_; 
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_91_ = l_Lasm_RPC_Answer_toResponse(v_a_82_);
if (lean_obj_tag(v___x_91_) == 0)
{
lean_object* v_a_92_; lean_object* v___x_94_; 
v_a_92_ = lean_ctor_get(v___x_91_, 0);
lean_inc(v_a_92_);
lean_dec_ref_known(v___x_91_, 1);
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 0, v_a_92_);
v___x_94_ = v___x_84_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_a_92_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
v_val_88_ = v___x_94_;
goto v___jp_87_;
}
}
else
{
lean_object* v_a_96_; lean_object* v___x_98_; 
v_a_96_ = lean_ctor_get(v___x_91_, 0);
lean_inc(v_a_96_);
lean_dec_ref_known(v___x_91_, 1);
if (v_isShared_85_ == 0)
{
lean_ctor_set_tag(v___x_84_, 0);
lean_ctor_set(v___x_84_, 0, v_a_96_);
v___x_98_ = v___x_84_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_a_96_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
v_val_88_ = v___x_98_;
goto v___jp_87_;
}
}
v___jp_87_:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_89_, 0, v_val_88_);
v___x_90_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_86_, v___x_69_, v___x_89_, v___f_70_);
return v___x_90_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__1___boxed(lean_object* v___x_101_, lean_object* v___f_102_, lean_object* v_x_103_, lean_object* v___y_104_){
_start:
{
uint8_t v___x_2224__boxed_105_; lean_object* v_res_106_; 
v___x_2224__boxed_105_ = lean_unbox(v___x_101_);
v_res_106_ = l_Lasm_RPC_webHandler___lam__1(v___x_2224__boxed_105_, v___f_102_, v_x_103_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__2(lean_object* v_routes_111_, lean_object* v_a_112_, lean_object* v_a_113_, uint8_t v___x_114_, lean_object* v___f_115_, lean_object* v_body_116_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Lasm_RPC_dispatch(v_routes_111_, v_a_112_, v_a_113_, v_body_116_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v___x_119_; 
lean_dec_ref(v___f_115_);
v___x_119_ = ((lean_object*)(l_Lasm_RPC_webHandler___lam__2___closed__1));
return v___x_119_;
}
else
{
lean_object* v_val_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v_val_120_ = lean_ctor_get(v___x_118_, 0);
lean_inc(v_val_120_);
lean_dec_ref_known(v___x_118_, 1);
v___x_121_ = lean_unsigned_to_nat(0u);
v___x_122_ = lean_apply_1(v_val_120_, lean_box(0));
v___x_123_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_121_, v___x_114_, v___x_122_, v___f_115_);
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__2___boxed(lean_object* v_routes_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v___x_127_, lean_object* v___f_128_, lean_object* v_body_129_, lean_object* v___y_130_){
_start:
{
uint8_t v___x_2302__boxed_131_; lean_object* v_res_132_; 
v___x_2302__boxed_131_ = lean_unbox(v___x_127_);
v_res_132_ = l_Lasm_RPC_webHandler___lam__2(v_routes_124_, v_a_125_, v_a_126_, v___x_2302__boxed_131_, v___f_128_, v_body_129_);
lean_dec_ref(v_a_126_);
lean_dec_ref(v_a_125_);
lean_dec(v_routes_124_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__3(lean_object* v___f_133_, lean_object* v_x_134_){
_start:
{
if (lean_obj_tag(v_x_134_) == 0)
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_144_; 
lean_dec_ref(v___f_133_);
v_a_136_ = lean_ctor_get(v_x_134_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v_x_134_);
if (v_isSharedCheck_144_ == 0)
{
v___x_138_ = v_x_134_;
v_isShared_139_ = v_isSharedCheck_144_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v_x_134_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_144_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_143_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
lean_object* v___x_142_; 
v___x_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
}
}
else
{
lean_object* v_a_145_; lean_object* v___x_146_; 
v_a_145_ = lean_ctor_get(v_x_134_, 0);
lean_inc(v_a_145_);
lean_dec_ref_known(v_x_134_, 1);
v___x_146_ = lean_apply_2(v___f_133_, v_a_145_, lean_box(0));
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__3___boxed(lean_object* v___f_147_, lean_object* v_x_148_, lean_object* v___y_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lasm_RPC_webHandler___lam__3(v___f_147_, v_x_148_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__5(lean_object* v_routes_157_, lean_object* v_a_158_, uint8_t v___x_159_, lean_object* v___f_160_, lean_object* v_request_161_, lean_object* v_x_162_){
_start:
{
if (lean_obj_tag(v_x_162_) == 0)
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_172_; 
lean_dec(v_request_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v_a_158_);
lean_dec(v_routes_157_);
v_a_164_ = lean_ctor_get(v_x_162_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v_x_162_);
if (v_isSharedCheck_172_ == 0)
{
v___x_166_ = v_x_162_;
v_isShared_167_ = v_isSharedCheck_172_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v_x_162_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_172_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_171_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
lean_object* v___x_170_; 
v___x_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
return v___x_170_;
}
}
}
else
{
lean_object* v_a_173_; lean_object* v___x_174_; lean_object* v___f_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
v_a_173_ = lean_ctor_get(v_x_162_, 0);
lean_inc_n(v_a_173_, 2);
lean_dec_ref_known(v_x_162_, 1);
v___x_174_ = lean_box(v___x_159_);
v___f_175_ = lean_alloc_closure((void*)(l_Lasm_RPC_webHandler___lam__2___boxed), 7, 5);
lean_closure_set(v___f_175_, 0, v_routes_157_);
lean_closure_set(v___f_175_, 1, v_a_173_);
lean_closure_set(v___f_175_, 2, v_a_158_);
lean_closure_set(v___f_175_, 3, v___x_174_);
lean_closure_set(v___f_175_, 4, v___f_160_);
v___x_176_ = ((lean_object*)(l_Lasm_RPC_webHandler___lam__5___closed__0));
v___x_177_ = lean_string_dec_eq(v_a_173_, v___x_176_);
lean_dec(v_a_173_);
if (v___x_177_ == 0)
{
lean_object* v___f_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec(v_request_161_);
v___f_178_ = lean_alloc_closure((void*)(l_Lasm_RPC_webHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_178_, 0, v___f_175_);
v___x_179_ = lean_unsigned_to_nat(0u);
v___x_180_ = ((lean_object*)(l_Lasm_RPC_webHandler___lam__5___closed__3));
v___x_181_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_179_, v___x_177_, v___x_180_, v___f_178_);
return v___x_181_;
}
else
{
lean_object* v___f_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___f_182_ = lean_alloc_closure((void*)(l_Lasm_RPC_webHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_182_, 0, v___f_175_);
v___x_183_ = lean_unsigned_to_nat(0u);
v___x_184_ = l_Lasm_JS_Web_Request_text(v_request_161_);
v___x_185_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_183_, v___x_159_, v___x_184_, v___f_182_);
return v___x_185_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__5___boxed(lean_object* v_routes_186_, lean_object* v_a_187_, lean_object* v___x_188_, lean_object* v___f_189_, lean_object* v_request_190_, lean_object* v_x_191_, lean_object* v___y_192_){
_start:
{
uint8_t v___x_2375__boxed_193_; lean_object* v_res_194_; 
v___x_2375__boxed_193_ = lean_unbox(v___x_188_);
v_res_194_ = l_Lasm_RPC_webHandler___lam__5(v_routes_186_, v_a_187_, v___x_2375__boxed_193_, v___f_189_, v_request_190_, v_x_191_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__4(lean_object* v___f_195_, lean_object* v_routes_196_, lean_object* v_request_197_, lean_object* v_x_198_){
_start:
{
if (lean_obj_tag(v_x_198_) == 0)
{
lean_object* v_a_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_208_; 
lean_dec(v_request_197_);
lean_dec(v_routes_196_);
lean_dec_ref(v___f_195_);
v_a_200_ = lean_ctor_get(v_x_198_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v_x_198_);
if (v_isSharedCheck_208_ == 0)
{
v___x_202_ = v_x_198_;
v_isShared_203_ = v_isSharedCheck_208_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_a_200_);
lean_dec(v_x_198_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_208_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_205_; 
if (v_isShared_203_ == 0)
{
v___x_205_ = v___x_202_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_a_200_);
v___x_205_ = v_reuseFailAlloc_207_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
lean_object* v___x_206_; 
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
return v___x_206_;
}
}
}
else
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_241_; 
v_a_209_ = lean_ctor_get(v_x_198_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v_x_198_);
if (v_isSharedCheck_241_ == 0)
{
v___x_211_ = v_x_198_;
v_isShared_212_ = v_isSharedCheck_241_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v_x_198_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_241_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lasm_RPC_endpointName_x3f(v_a_209_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v___x_214_; 
lean_del_object(v___x_211_);
lean_dec(v_a_209_);
lean_dec(v_request_197_);
lean_dec(v_routes_196_);
lean_dec_ref(v___f_195_);
v___x_214_ = ((lean_object*)(l_Lasm_RPC_webHandler___lam__2___closed__1));
return v___x_214_;
}
else
{
lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_239_; 
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_239_ == 0)
{
lean_object* v_unused_240_; 
v_unused_240_ = lean_ctor_get(v___x_213_, 0);
lean_dec(v_unused_240_);
v___x_216_ = v___x_213_;
v_isShared_217_ = v_isSharedCheck_239_;
goto v_resetjp_215_;
}
else
{
lean_dec(v___x_213_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_239_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
uint8_t v___x_218_; lean_object* v___x_219_; lean_object* v___f_220_; lean_object* v___x_221_; lean_object* v___f_222_; lean_object* v___x_223_; lean_object* v_val_225_; lean_object* v___x_230_; 
v___x_218_ = 0;
v___x_219_ = lean_box(v___x_218_);
v___f_220_ = lean_alloc_closure((void*)(l_Lasm_RPC_webHandler___lam__1___boxed), 4, 2);
lean_closure_set(v___f_220_, 0, v___x_219_);
lean_closure_set(v___f_220_, 1, v___f_195_);
v___x_221_ = lean_box(v___x_218_);
lean_inc(v_request_197_);
v___f_222_ = lean_alloc_closure((void*)(l_Lasm_RPC_webHandler___lam__5___boxed), 7, 5);
lean_closure_set(v___f_222_, 0, v_routes_196_);
lean_closure_set(v___f_222_, 1, v_a_209_);
lean_closure_set(v___f_222_, 2, v___x_221_);
lean_closure_set(v___f_222_, 3, v___f_220_);
lean_closure_set(v___f_222_, 4, v_request_197_);
v___x_223_ = lean_unsigned_to_nat(0u);
v___x_230_ = l_Lasm_JS_Web_Request_method(v_request_197_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_a_231_; lean_object* v___x_233_; 
v_a_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_a_231_);
lean_dec_ref_known(v___x_230_, 1);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 0, v_a_231_);
v___x_233_ = v___x_211_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_a_231_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
v_val_225_ = v___x_233_;
goto v___jp_224_;
}
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; 
v_a_235_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_a_235_);
lean_dec_ref_known(v___x_230_, 1);
if (v_isShared_212_ == 0)
{
lean_ctor_set_tag(v___x_211_, 0);
lean_ctor_set(v___x_211_, 0, v_a_235_);
v___x_237_ = v___x_211_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_a_235_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
v_val_225_ = v___x_237_;
goto v___jp_224_;
}
}
v___jp_224_:
{
lean_object* v___x_227_; 
if (v_isShared_217_ == 0)
{
lean_ctor_set_tag(v___x_216_, 0);
lean_ctor_set(v___x_216_, 0, v_val_225_);
v___x_227_ = v___x_216_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_val_225_);
v___x_227_ = v_reuseFailAlloc_229_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
lean_object* v___x_228_; 
v___x_228_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_223_, v___x_218_, v___x_227_, v___f_222_);
return v___x_228_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__4___boxed(lean_object* v___f_242_, lean_object* v_routes_243_, lean_object* v_request_244_, lean_object* v_x_245_, lean_object* v___y_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lasm_RPC_webHandler___lam__4(v___f_242_, v_routes_243_, v_request_244_, v_x_245_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__6(lean_object* v___f_248_, lean_object* v_x_249_){
_start:
{
if (lean_obj_tag(v_x_249_) == 0)
{
lean_object* v_a_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_259_; 
lean_dec_ref(v___f_248_);
v_a_251_ = lean_ctor_get(v_x_249_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v_x_249_);
if (v_isSharedCheck_259_ == 0)
{
v___x_253_ = v_x_249_;
v_isShared_254_ = v_isSharedCheck_259_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_a_251_);
lean_dec(v_x_249_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_259_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_256_; 
if (v_isShared_254_ == 0)
{
v___x_256_ = v___x_253_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_a_251_);
v___x_256_ = v_reuseFailAlloc_258_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
lean_object* v___x_257_; 
v___x_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
return v___x_257_;
}
}
}
else
{
lean_object* v_a_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_279_; 
v_a_260_ = lean_ctor_get(v_x_249_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v_x_249_);
if (v_isSharedCheck_279_ == 0)
{
v___x_262_ = v_x_249_;
v_isShared_263_ = v_isSharedCheck_279_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_a_260_);
lean_dec(v_x_249_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_279_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_264_; uint8_t v___x_265_; lean_object* v_val_267_; lean_object* v___x_270_; 
v___x_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = 0;
v___x_270_ = l_Lasm_JS_Web_URL_pathname(v_a_260_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v_a_271_; lean_object* v___x_273_; 
v_a_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_a_271_);
lean_dec_ref_known(v___x_270_, 1);
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 0, v_a_271_);
v___x_273_ = v___x_262_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_271_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
v_val_267_ = v___x_273_;
goto v___jp_266_;
}
}
else
{
lean_object* v_a_275_; lean_object* v___x_277_; 
v_a_275_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_a_275_);
lean_dec_ref_known(v___x_270_, 1);
if (v_isShared_263_ == 0)
{
lean_ctor_set_tag(v___x_262_, 0);
lean_ctor_set(v___x_262_, 0, v_a_275_);
v___x_277_ = v___x_262_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_275_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
v_val_267_ = v___x_277_;
goto v___jp_266_;
}
}
v___jp_266_:
{
lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_268_, 0, v_val_267_);
v___x_269_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_264_, v___x_265_, v___x_268_, v___f_248_);
return v___x_269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__6___boxed(lean_object* v___f_280_, lean_object* v_x_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lasm_RPC_webHandler___lam__6(v___f_280_, v_x_281_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__7(lean_object* v___f_284_, lean_object* v_x_285_){
_start:
{
if (lean_obj_tag(v_x_285_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_295_; 
lean_dec_ref(v___f_284_);
v_a_287_ = lean_ctor_get(v_x_285_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v_x_285_);
if (v_isSharedCheck_295_ == 0)
{
v___x_289_ = v_x_285_;
v_isShared_290_ = v_isSharedCheck_295_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v_x_285_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_295_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_294_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
lean_object* v___x_293_; 
v___x_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
return v___x_293_;
}
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_316_; 
v_a_296_ = lean_ctor_get(v_x_285_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v_x_285_);
if (v_isSharedCheck_316_ == 0)
{
v___x_298_ = v_x_285_;
v_isShared_299_ = v_isSharedCheck_316_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v_x_285_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_316_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; lean_object* v_val_304_; lean_object* v___x_307_; 
v___x_300_ = lean_box(0);
v___x_301_ = lean_unsigned_to_nat(0u);
v___x_302_ = 0;
v___x_307_ = l_Lasm_JS_Web_URL_new(v_a_296_, v___x_300_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; lean_object* v___x_310_; 
v_a_308_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_a_308_);
lean_dec_ref_known(v___x_307_, 1);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 0, v_a_308_);
v___x_310_ = v___x_298_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_308_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
v_val_304_ = v___x_310_;
goto v___jp_303_;
}
}
else
{
lean_object* v_a_312_; lean_object* v___x_314_; 
v_a_312_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_307_, 1);
if (v_isShared_299_ == 0)
{
lean_ctor_set_tag(v___x_298_, 0);
lean_ctor_set(v___x_298_, 0, v_a_312_);
v___x_314_ = v___x_298_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_312_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
v_val_304_ = v___x_314_;
goto v___jp_303_;
}
}
v___jp_303_:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_305_, 0, v_val_304_);
v___x_306_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_301_, v___x_302_, v___x_305_, v___f_284_);
return v___x_306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___lam__7___boxed(lean_object* v___f_317_, lean_object* v_x_318_, lean_object* v___y_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lasm_RPC_webHandler___lam__7(v___f_317_, v_x_318_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler(lean_object* v_routes_322_, lean_object* v_request_323_){
_start:
{
lean_object* v___f_325_; lean_object* v___f_326_; lean_object* v___f_327_; lean_object* v___f_328_; lean_object* v___x_329_; uint8_t v___x_330_; lean_object* v_val_332_; lean_object* v___x_335_; 
v___f_325_ = ((lean_object*)(l_Lasm_RPC_webHandler___closed__0));
lean_inc(v_request_323_);
v___f_326_ = lean_alloc_closure((void*)(l_Lasm_RPC_webHandler___lam__4___boxed), 5, 3);
lean_closure_set(v___f_326_, 0, v___f_325_);
lean_closure_set(v___f_326_, 1, v_routes_322_);
lean_closure_set(v___f_326_, 2, v_request_323_);
v___f_327_ = lean_alloc_closure((void*)(l_Lasm_RPC_webHandler___lam__6___boxed), 3, 1);
lean_closure_set(v___f_327_, 0, v___f_326_);
v___f_328_ = lean_alloc_closure((void*)(l_Lasm_RPC_webHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_328_, 0, v___f_327_);
v___x_329_ = lean_unsigned_to_nat(0u);
v___x_330_ = 0;
v___x_335_ = l_Lasm_JS_Web_Request_url(v_request_323_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_335_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_335_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
lean_ctor_set_tag(v___x_338_, 1);
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
v_val_332_ = v___x_341_;
goto v___jp_331_;
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_344_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_335_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_335_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
lean_ctor_set_tag(v___x_346_, 0);
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
v_val_332_ = v___x_349_;
goto v___jp_331_;
}
}
}
v___jp_331_:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_333_, 0, v_val_332_);
v___x_334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_329_, v___x_330_, v___x_333_, v___f_328_);
return v___x_334_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_webHandler___boxed(lean_object* v_routes_352_, lean_object* v_request_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lasm_RPC_webHandler(v_routes_352_, v_request_353_);
return v_res_355_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_RPC_Server(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_RPC_Web(uint8_t builtin) {
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
res = initialize_Lasm_RPC_Server(builtin);
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
