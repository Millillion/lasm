// Lean compiler output
// Module: Lasm.UI.Proofs
// Imports: public import Init public meta import Init public import Lasm.UI.Proofs.Diff
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
lean_object* l_Lasm_UI_diff___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lasm_UI_Model_applyOps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_Session_step___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_Session_step(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_UI_Proofs_Session_empty___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Proofs_Session_empty___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Proofs_Session_empty___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_Session_empty___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_Session_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lasm_UI_Proofs_Session_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Proofs_Session_empty___closed__0;
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_Session_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_Session_step___redArg(lean_object* v_s_1_, lean_object* v_view_2_){
_start:
{
lean_object* v_dom_3_; lean_object* v_live_4_; lean_object* v_next_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_18_; 
v_dom_3_ = lean_ctor_get(v_s_1_, 0);
v_live_4_ = lean_ctor_get(v_s_1_, 1);
v_next_5_ = lean_ctor_get(v_s_1_, 2);
v_isSharedCheck_18_ = !lean_is_exclusive(v_s_1_);
if (v_isSharedCheck_18_ == 0)
{
v___x_7_ = v_s_1_;
v_isShared_8_ = v_isSharedCheck_18_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_next_5_);
lean_inc(v_live_4_);
lean_inc(v_dom_3_);
lean_dec(v_s_1_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_18_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v_r_9_; lean_object* v_ops_10_; lean_object* v_live_11_; lean_object* v_next_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_16_; 
v_r_9_ = l_Lasm_UI_diff___redArg(v_live_4_, v_view_2_, v_next_5_);
v_ops_10_ = lean_ctor_get(v_r_9_, 0);
lean_inc_ref(v_ops_10_);
v_live_11_ = lean_ctor_get(v_r_9_, 1);
lean_inc(v_live_11_);
v_next_12_ = lean_ctor_get(v_r_9_, 2);
lean_inc(v_next_12_);
lean_dec_ref(v_r_9_);
v___x_13_ = lean_array_to_list(v_ops_10_);
v___x_14_ = l_Lasm_UI_Model_applyOps___redArg(v___x_13_, v_dom_3_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 2, v_next_12_);
lean_ctor_set(v___x_7_, 1, v_live_11_);
lean_ctor_set(v___x_7_, 0, v___x_14_);
v___x_16_ = v___x_7_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v___x_14_);
lean_ctor_set(v_reuseFailAlloc_17_, 1, v_live_11_);
lean_ctor_set(v_reuseFailAlloc_17_, 2, v_next_12_);
v___x_16_ = v_reuseFailAlloc_17_;
goto v_reusejp_15_;
}
v_reusejp_15_:
{
return v___x_16_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_Session_step(lean_object* v_Msg_19_, lean_object* v_s_20_, lean_object* v_view_21_){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = l_Lasm_UI_Proofs_Session_step___redArg(v_s_20_, v_view_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_Session_empty___redArg(){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = ((lean_object*)(l_Lasm_UI_Proofs_Session_empty___redArg___closed__0));
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_Session_empty___redArg___boxed(lean_object* v___dummy_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lasm_UI_Proofs_Session_empty___redArg();
return v_res_29_;
}
}
static lean_object* _init_l_Lasm_UI_Proofs_Session_empty___closed__0(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lasm_UI_Proofs_Session_empty___redArg();
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Proofs_Session_empty(lean_object* v_Msg_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_obj_once(&l_Lasm_UI_Proofs_Session_empty___closed__0, &l_Lasm_UI_Proofs_Session_empty___closed__0_once, _init_l_Lasm_UI_Proofs_Session_empty___closed__0);
return v___x_32_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_UI_Proofs_Diff(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Proofs(uint8_t builtin) {
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
res = initialize_Lasm_UI_Proofs_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
