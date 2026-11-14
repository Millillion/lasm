// Lean compiler output
// Module: Lasm.Fastly.AsyncIo
// Imports: public import Init public meta import Init public import Lasm.Fastly.Types
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
lean_object* lasm_fastly_async_io_select(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_AsyncIo_select___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_async_io_is_ready(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_AsyncIo_isReady___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_AsyncIo_select___boxed(lean_object* v_hs_4_, lean_object* v_timeoutMs_5_, lean_object* v_a_00___x40___internal___hyg_6_){
_start:
{
uint32_t v_timeoutMs_boxed_7_; lean_object* v_res_8_; 
v_timeoutMs_boxed_7_ = lean_unbox_uint32(v_timeoutMs_5_);
lean_dec(v_timeoutMs_5_);
v_res_8_ = lasm_fastly_async_io_select(v_hs_4_, v_timeoutMs_boxed_7_);
lean_dec_ref(v_hs_4_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_AsyncIo_isReady___boxed(lean_object* v_handle_11_, lean_object* v_a_00___x40___internal___hyg_12_){
_start:
{
uint32_t v_handle_boxed_13_; lean_object* v_res_14_; 
v_handle_boxed_13_ = lean_unbox_uint32(v_handle_11_);
lean_dec(v_handle_11_);
v_res_14_ = lasm_fastly_async_io_is_ready(v_handle_boxed_13_);
return v_res_14_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_AsyncIo(uint8_t builtin) {
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
res = initialize_Lasm_Fastly_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
