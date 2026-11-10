// Lean compiler output
// Module: Lasm.WASI.Io.Poll
// Imports: public import Init public meta import Init
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
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint64_t lean_uint32_to_uint64(uint32_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
LEAN_EXPORT uint32_t l_Lasm_WASI_Io_Poll_instInhabitedPollable_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Io_Poll_instInhabitedPollable;
LEAN_EXPORT uint8_t l_Lasm_WASI_Io_Poll_instBEqPollable_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instBEqPollable_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Io_Poll_instBEqPollable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Io_Poll_instBEqPollable_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Io_Poll_instBEqPollable___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instBEqPollable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Poll_instBEqPollable = (const lean_object*)&l_Lasm_WASI_Io_Poll_instBEqPollable___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Io_Poll_instHashablePollable_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instHashablePollable_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Io_Poll_instHashablePollable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Io_Poll_instHashablePollable_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Io_Poll_instHashablePollable___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instHashablePollable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Poll_instHashablePollable = (const lean_object*)&l_Lasm_WASI_Io_Poll_instHashablePollable___closed__0_value;
static const lean_string_object l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__0_value;
static const lean_string_object l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "handle"};
static const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__2_value)}};
static const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__3_value;
static const lean_string_object l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__3_value),((lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__7;
static const lean_string_object l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__9;
static lean_once_cell_t l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__10;
static const lean_ctor_object l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__8_value)}};
static const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__12 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Io_Poll_instReprPollable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Io_Poll_instReprPollable_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Poll_instReprPollable = (const lean_object*)&l_Lasm_WASI_Io_Poll_instReprPollable___closed__0_value;
lean_object* lasm_wasi_io_poll_pollable_ready(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_Pollable_ready___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_io_poll_pollable_block(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_Pollable_block___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_io_poll_pollable_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_Pollable_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_io_poll_poll(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_poll___boxed(lean_object*, lean_object*);
static uint32_t _init_l_Lasm_WASI_Io_Poll_instInhabitedPollable_default(void){
_start:
{
uint32_t v___x_1_; 
v___x_1_ = 0;
return v___x_1_;
}
}
static uint32_t _init_l_Lasm_WASI_Io_Poll_instInhabitedPollable(void){
_start:
{
uint32_t v___x_2_; 
v___x_2_ = 0;
return v___x_2_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Io_Poll_instBEqPollable_beq(uint32_t v_x_3_, uint32_t v_x_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_uint32_dec_eq(v_x_3_, v_x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instBEqPollable_beq___boxed(lean_object* v_x_6_, lean_object* v_x_7_){
_start:
{
uint32_t v_x_45__boxed_8_; uint32_t v_x_46__boxed_9_; uint8_t v_res_10_; lean_object* v_r_11_; 
v_x_45__boxed_8_ = lean_unbox_uint32(v_x_6_);
lean_dec(v_x_6_);
v_x_46__boxed_9_ = lean_unbox_uint32(v_x_7_);
lean_dec(v_x_7_);
v_res_10_ = l_Lasm_WASI_Io_Poll_instBEqPollable_beq(v_x_45__boxed_8_, v_x_46__boxed_9_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Io_Poll_instHashablePollable_hash(uint32_t v_x_14_){
_start:
{
uint64_t v___x_15_; uint64_t v___x_16_; uint64_t v___x_17_; 
v___x_15_ = 0ULL;
v___x_16_ = lean_uint32_to_uint64(v_x_14_);
v___x_17_ = lean_uint64_mix_hash(v___x_15_, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instHashablePollable_hash___boxed(lean_object* v_x_18_){
_start:
{
uint32_t v_x_26__boxed_19_; uint64_t v_res_20_; lean_object* v_r_21_; 
v_x_26__boxed_19_ = lean_unbox_uint32(v_x_18_);
lean_dec(v_x_18_);
v_res_20_ = l_Lasm_WASI_Io_Poll_instHashablePollable_hash(v_x_26__boxed_19_);
v_r_21_ = lean_box_uint64(v_res_20_);
return v_r_21_;
}
}
static lean_object* _init_l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_unsigned_to_nat(10u);
v___x_38_ = lean_nat_to_int(v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = ((lean_object*)(l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__0));
v___x_41_ = lean_string_length(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__9, &l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__9_once, _init_l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__9);
v___x_43_ = lean_nat_to_int(v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg(uint32_t v_x_48_){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; uint8_t v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_49_ = ((lean_object*)(l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__6));
v___x_50_ = lean_obj_once(&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__7, &l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__7);
v___x_51_ = lean_uint32_to_nat(v_x_48_);
v___x_52_ = l_Nat_reprFast(v___x_51_);
v___x_53_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
v___x_54_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_50_);
lean_ctor_set(v___x_54_, 1, v___x_53_);
v___x_55_ = 0;
v___x_56_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_56_, 0, v___x_54_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*1, v___x_55_);
v___x_57_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_49_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = lean_obj_once(&l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__10, &l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__10);
v___x_59_ = ((lean_object*)(l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__11));
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___x_57_);
v___x_61_ = ((lean_object*)(l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___closed__12));
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_58_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set_uint8(v___x_64_, sizeof(void*)*1, v___x_55_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg___boxed(lean_object* v_x_65_){
_start:
{
uint32_t v_x_131__boxed_66_; lean_object* v_res_67_; 
v_x_131__boxed_66_ = lean_unbox_uint32(v_x_65_);
lean_dec(v_x_65_);
v_res_67_ = l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg(v_x_131__boxed_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr(uint32_t v_x_68_, lean_object* v_prec_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lasm_WASI_Io_Poll_instReprPollable_repr___redArg(v_x_68_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_instReprPollable_repr___boxed(lean_object* v_x_71_, lean_object* v_prec_72_){
_start:
{
uint32_t v_x_190__boxed_73_; lean_object* v_res_74_; 
v_x_190__boxed_73_ = lean_unbox_uint32(v_x_71_);
lean_dec(v_x_71_);
v_res_74_ = l_Lasm_WASI_Io_Poll_instReprPollable_repr(v_x_190__boxed_73_, v_prec_72_);
lean_dec(v_prec_72_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_Pollable_ready___boxed(lean_object* v_self_79_, lean_object* v_a_00___x40___internal___hyg_80_){
_start:
{
uint32_t v_self_boxed_81_; lean_object* v_res_82_; 
v_self_boxed_81_ = lean_unbox_uint32(v_self_79_);
lean_dec(v_self_79_);
v_res_82_ = lasm_wasi_io_poll_pollable_ready(v_self_boxed_81_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_Pollable_block___boxed(lean_object* v_self_85_, lean_object* v_a_00___x40___internal___hyg_86_){
_start:
{
uint32_t v_self_boxed_87_; lean_object* v_res_88_; 
v_self_boxed_87_ = lean_unbox_uint32(v_self_85_);
lean_dec(v_self_85_);
v_res_88_ = lasm_wasi_io_poll_pollable_block(v_self_boxed_87_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_Pollable_drop___boxed(lean_object* v_self_91_, lean_object* v_a_00___x40___internal___hyg_92_){
_start:
{
uint32_t v_self_boxed_93_; lean_object* v_res_94_; 
v_self_boxed_93_ = lean_unbox_uint32(v_self_91_);
lean_dec(v_self_91_);
v_res_94_ = lasm_wasi_io_poll_pollable_drop(v_self_boxed_93_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Poll_poll___boxed(lean_object* v_in_97_, lean_object* v_a_00___x40___internal___hyg_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = lasm_wasi_io_poll_poll(v_in_97_);
lean_dec_ref(v_in_97_);
return v_res_99_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_WASI_Io_Poll(uint8_t builtin) {
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
l_Lasm_WASI_Io_Poll_instInhabitedPollable_default = _init_l_Lasm_WASI_Io_Poll_instInhabitedPollable_default();
l_Lasm_WASI_Io_Poll_instInhabitedPollable = _init_l_Lasm_WASI_Io_Poll_instInhabitedPollable();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
