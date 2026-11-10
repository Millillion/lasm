// Lean compiler output
// Module: Lasm.WASI.Clocks.MonotonicClock
// Imports: public import Init public meta import Init public import Lasm.WASI.Io.Poll
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
lean_object* lasm_wasi_clocks_monotonic_clock_now();
LEAN_EXPORT lean_object* l_Lasm_WASI_Clocks_MonotonicClock_now___boxed(lean_object*);
lean_object* lasm_wasi_clocks_monotonic_clock_resolution();
LEAN_EXPORT lean_object* l_Lasm_WASI_Clocks_MonotonicClock_resolution___boxed(lean_object*);
lean_object* lasm_wasi_clocks_monotonic_clock_subscribe_instant(uint64_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Clocks_MonotonicClock_subscribeInstant___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_clocks_monotonic_clock_subscribe_duration(uint64_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Clocks_MonotonicClock_subscribeDuration___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Clocks_MonotonicClock_now___boxed(lean_object* v_a_00___x40___internal___hyg_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lasm_wasi_clocks_monotonic_clock_now();
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Clocks_MonotonicClock_resolution___boxed(lean_object* v_a_00___x40___internal___hyg_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = lasm_wasi_clocks_monotonic_clock_resolution();
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Clocks_MonotonicClock_subscribeInstant___boxed(lean_object* v_when_9_, lean_object* v_a_00___x40___internal___hyg_10_){
_start:
{
uint64_t v_when_boxed_11_; lean_object* v_res_12_; 
v_when_boxed_11_ = lean_unbox_uint64(v_when_9_);
lean_dec_ref(v_when_9_);
v_res_12_ = lasm_wasi_clocks_monotonic_clock_subscribe_instant(v_when_boxed_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Clocks_MonotonicClock_subscribeDuration___boxed(lean_object* v_when_15_, lean_object* v_a_00___x40___internal___hyg_16_){
_start:
{
uint64_t v_when_boxed_17_; lean_object* v_res_18_; 
v_when_boxed_17_ = lean_unbox_uint64(v_when_15_);
lean_dec_ref(v_when_15_);
v_res_18_ = lasm_wasi_clocks_monotonic_clock_subscribe_duration(v_when_boxed_17_);
return v_res_18_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Io_Poll(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_WASI_Clocks_MonotonicClock(uint8_t builtin) {
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
res = initialize_Lasm_WASI_Io_Poll(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
