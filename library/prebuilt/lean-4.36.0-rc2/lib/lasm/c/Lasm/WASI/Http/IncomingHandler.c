// Lean compiler output
// Module: Lasm.WASI.Http.IncomingHandler
// Imports: public import Init public meta import Init public import Lasm.WASI.Http.Types
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
lean_object* lasm_wasi_http_incoming_handler_take();
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_IncomingHandler_take___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_IncomingHandler_serve(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_IncomingHandler_serve___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_IncomingHandler_take___boxed(lean_object* v_a_00___x40___internal___hyg_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lasm_wasi_http_incoming_handler_take();
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_IncomingHandler_serve(lean_object* v_handler_4_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lasm_wasi_http_incoming_handler_take();
if (lean_obj_tag(v___x_6_) == 0)
{
lean_object* v_a_7_; lean_object* v_fst_8_; lean_object* v_snd_9_; lean_object* v___x_10_; 
v_a_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_a_7_);
lean_dec_ref_known(v___x_6_, 1);
v_fst_8_ = lean_ctor_get(v_a_7_, 0);
lean_inc(v_fst_8_);
v_snd_9_ = lean_ctor_get(v_a_7_, 1);
lean_inc(v_snd_9_);
lean_dec(v_a_7_);
v___x_10_ = lean_apply_3(v_handler_4_, v_fst_8_, v_snd_9_, lean_box(0));
return v___x_10_;
}
else
{
lean_object* v_a_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_18_; 
lean_dec_ref(v_handler_4_);
v_a_11_ = lean_ctor_get(v___x_6_, 0);
v_isSharedCheck_18_ = !lean_is_exclusive(v___x_6_);
if (v_isSharedCheck_18_ == 0)
{
v___x_13_ = v___x_6_;
v_isShared_14_ = v_isSharedCheck_18_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_a_11_);
lean_dec(v___x_6_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_18_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_16_; 
if (v_isShared_14_ == 0)
{
v___x_16_ = v___x_13_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v_a_11_);
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
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_IncomingHandler_serve___boxed(lean_object* v_handler_19_, lean_object* v_a_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lasm_WASI_Http_IncomingHandler_serve(v_handler_19_);
return v_res_21_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Http_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_WASI_Http_IncomingHandler(uint8_t builtin) {
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
res = initialize_Lasm_WASI_Http_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
