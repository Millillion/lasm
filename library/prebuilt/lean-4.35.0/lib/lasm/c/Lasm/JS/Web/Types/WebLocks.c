// Lean compiler output
// Module: Lasm.JS.Web.Types.WebLocks
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSLock___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSLock_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSLock___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSLock = (const lean_object*)&l_Lasm_JS_Web_instToJSLock_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSLock___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSLock___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSLock;
static const lean_closure_object l_Lasm_JS_Web_instToJSLockManager_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSLock___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSLockManager = (const lean_object*)&l_Lasm_JS_Web_instToJSLockManager_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSLockManager;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqLockMode_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqLockMode_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqLockMode_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqLockMode_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqLockMode = (const lean_object*)&l_Lasm_JS_Web_instBEqLockMode_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprLockMode_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprLockMode_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprLockMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprLockMode_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprLockMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprLockMode = (const lean_object*)&l_Lasm_JS_Web_instReprLockMode_value;
static const lean_string_object l_Lasm_JS_Web_instInhabitedLockMode_default_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instInhabitedLockMode_default = (const lean_object*)&l_Lasm_JS_Web_instInhabitedLockMode_default_value;
static const lean_string_object l_Lasm_JS_Web_instInhabitedLockMode_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instInhabitedLockMode = (const lean_object*)&l_Lasm_JS_Web_instInhabitedLockMode_value;
static const lean_string_object l_Lasm_JS_Web_LockMode_shared_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "shared"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_LockMode_shared = (const lean_object*)&l_Lasm_JS_Web_LockMode_shared_value;
static const lean_string_object l_Lasm_JS_Web_LockMode_exclusive_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "exclusive"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_LockMode_exclusive = (const lean_object*)&l_Lasm_JS_Web_LockMode_exclusive_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSLockMode___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSLockMode_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSLockMode___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSLockMode = (const lean_object*)&l_Lasm_JS_Web_instToJSLockMode_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSLockMode___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSLockMode;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSLock___lam__0(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_mk_string_unchecked("", 0, 0);
v___x_3_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3_, 0, v_x_1_);
lean_ctor_set(v___x_3_, 1, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSLock___lam__0(lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 9)
{
lean_object* v_value_6_; lean_object* v___x_7_; 
v_value_6_ = lean_ctor_get(v_x_5_, 0);
lean_inc(v_value_6_);
v___x_7_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7_, 0, v_value_6_);
return v___x_7_;
}
else
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_mk_string_unchecked("", 0, 0);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSLock___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Web_instFromJSLock___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSLock(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSLock___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Web.Lock", 16, 16);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSLockManager(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; 
v___f_17_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSLock___lam__0___boxed), 1, 0);
v___x_18_ = lean_mk_string_unchecked("Lasm.JS.Web.LockManager", 23, 23);
v___x_19_ = 0;
v___x_20_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_20_, 0, v___f_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqLockMode_beq(lean_object* v_x_21_, lean_object* v_x_22_){
_start:
{
uint8_t v___x_23_; 
v___x_23_ = lean_string_dec_eq(v_x_21_, v_x_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqLockMode_beq___boxed(lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = l_Lasm_JS_Web_instBEqLockMode_beq(v_x_24_, v_x_25_);
lean_dec_ref(v_x_25_);
lean_dec_ref(v_x_24_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprLockMode_repr___redArg(lean_object* v_x_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; uint8_t v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_30_ = lean_mk_string_unchecked("{ ", 2, 2);
v___x_31_ = lean_box(0);
v___x_32_ = lean_mk_string_unchecked("val", 3, 3);
v___x_33_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
v___x_34_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_31_);
lean_ctor_set(v___x_34_, 1, v___x_33_);
v___x_35_ = lean_mk_string_unchecked(" := ", 4, 4);
v___x_36_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
v___x_37_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_37_, 0, v___x_34_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
v___x_38_ = lean_unsigned_to_nat(7u);
v___x_39_ = lean_nat_to_int(v___x_38_);
v___x_40_ = l_String_quote(v_x_29_);
v___x_41_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
v___x_42_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_39_);
lean_ctor_set(v___x_42_, 1, v___x_41_);
v___x_43_ = 0;
v___x_44_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_44_, 0, v___x_42_);
lean_ctor_set_uint8(v___x_44_, sizeof(void*)*1, v___x_43_);
v___x_45_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_45_, 0, v___x_37_);
lean_ctor_set(v___x_45_, 1, v___x_44_);
v___x_46_ = lean_mk_string_unchecked(" }", 2, 2);
v___x_47_ = lean_string_length(v___x_30_);
v___x_48_ = lean_nat_to_int(v___x_47_);
v___x_49_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_49_, 0, v___x_30_);
v___x_50_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
lean_ctor_set(v___x_50_, 1, v___x_45_);
v___x_51_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_46_);
v___x_52_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_50_);
lean_ctor_set(v___x_52_, 1, v___x_51_);
v___x_53_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_48_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set_uint8(v___x_54_, sizeof(void*)*1, v___x_43_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprLockMode_repr(lean_object* v_x_55_, lean_object* v_prec_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lasm_JS_Web_instReprLockMode_repr___redArg(v_x_55_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprLockMode_repr___boxed(lean_object* v_x_58_, lean_object* v_prec_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lasm_JS_Web_instReprLockMode_repr(v_x_58_, v_prec_59_);
lean_dec(v_prec_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSLockMode___lam__0(lean_object* v_x_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_67_, 0, v_x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSLockMode___lam__0(lean_object* v_x_69_){
_start:
{
if (lean_obj_tag(v_x_69_) == 4)
{
lean_object* v_s_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_77_; 
v_s_70_ = lean_ctor_get(v_x_69_, 0);
v_isSharedCheck_77_ = !lean_is_exclusive(v_x_69_);
if (v_isSharedCheck_77_ == 0)
{
v___x_72_ = v_x_69_;
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_s_70_);
lean_dec(v_x_69_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_75_; 
if (v_isShared_73_ == 0)
{
lean_ctor_set_tag(v___x_72_, 1);
v___x_75_ = v___x_72_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_s_70_);
v___x_75_ = v_reuseFailAlloc_76_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
return v___x_75_;
}
}
}
else
{
lean_object* v___x_78_; lean_object* v___x_79_; 
lean_dec(v_x_69_);
v___x_78_ = lean_mk_string_unchecked("not a string", 12, 12);
v___x_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
return v___x_79_;
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSLockMode(void){
_start:
{
lean_object* v___f_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; 
v___f_80_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSLockMode___lam__0), 1, 0);
v___x_81_ = lean_mk_string_unchecked("Lasm.JS.Web.LockMode", 20, 20);
v___x_82_ = 0;
v___x_83_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_83_, 0, v___f_80_);
lean_ctor_set(v___x_83_, 1, v___x_81_);
lean_ctor_set_uint8(v___x_83_, sizeof(void*)*2, v___x_82_);
return v___x_83_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Types_WebLocks(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instFromJSLock = _init_l_Lasm_JS_Web_instFromJSLock();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSLock);
l_Lasm_JS_Web_instFromJSLockManager = _init_l_Lasm_JS_Web_instFromJSLockManager();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSLockManager);
l_Lasm_JS_Web_instFromJSLockMode = _init_l_Lasm_JS_Web_instFromJSLockMode();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSLockMode);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
