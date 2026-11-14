// Lean compiler output
// Module: Lasm.Fastly.Erl
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
lean_object* lasm_fastly_erl_check_rate(lean_object*, lean_object*, uint32_t, uint32_t, uint32_t, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_checkRate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_erl_ratecounter_increment(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_ratecounterIncrement___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_erl_ratecounter_lookup_rate(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_ratecounterLookupRate___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_erl_ratecounter_lookup_count(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_ratecounterLookupCount___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_erl_penaltybox_add(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_penaltyboxAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_erl_penaltybox_has(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_penaltyboxHas___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_checkRate___boxed(lean_object* v_rc_9_, lean_object* v_entry_10_, lean_object* v_delta_11_, lean_object* v_window_12_, lean_object* v_limit_13_, lean_object* v_pb_14_, lean_object* v_ttl_15_, lean_object* v_a_00___x40___internal___hyg_16_){
_start:
{
uint32_t v_delta_boxed_17_; uint32_t v_window_boxed_18_; uint32_t v_limit_boxed_19_; uint32_t v_ttl_boxed_20_; lean_object* v_res_21_; 
v_delta_boxed_17_ = lean_unbox_uint32(v_delta_11_);
lean_dec(v_delta_11_);
v_window_boxed_18_ = lean_unbox_uint32(v_window_12_);
lean_dec(v_window_12_);
v_limit_boxed_19_ = lean_unbox_uint32(v_limit_13_);
lean_dec(v_limit_13_);
v_ttl_boxed_20_ = lean_unbox_uint32(v_ttl_15_);
lean_dec(v_ttl_15_);
v_res_21_ = lasm_fastly_erl_check_rate(v_rc_9_, v_entry_10_, v_delta_boxed_17_, v_window_boxed_18_, v_limit_boxed_19_, v_pb_14_, v_ttl_boxed_20_);
lean_dec_ref(v_pb_14_);
lean_dec_ref(v_entry_10_);
lean_dec_ref(v_rc_9_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_ratecounterIncrement___boxed(lean_object* v_rc_26_, lean_object* v_entry_27_, lean_object* v_delta_28_, lean_object* v_a_00___x40___internal___hyg_29_){
_start:
{
uint32_t v_delta_boxed_30_; lean_object* v_res_31_; 
v_delta_boxed_30_ = lean_unbox_uint32(v_delta_28_);
lean_dec(v_delta_28_);
v_res_31_ = lasm_fastly_erl_ratecounter_increment(v_rc_26_, v_entry_27_, v_delta_boxed_30_);
lean_dec_ref(v_entry_27_);
lean_dec_ref(v_rc_26_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_ratecounterLookupRate___boxed(lean_object* v_rc_36_, lean_object* v_entry_37_, lean_object* v_window_38_, lean_object* v_a_00___x40___internal___hyg_39_){
_start:
{
uint32_t v_window_boxed_40_; lean_object* v_res_41_; 
v_window_boxed_40_ = lean_unbox_uint32(v_window_38_);
lean_dec(v_window_38_);
v_res_41_ = lasm_fastly_erl_ratecounter_lookup_rate(v_rc_36_, v_entry_37_, v_window_boxed_40_);
lean_dec_ref(v_entry_37_);
lean_dec_ref(v_rc_36_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_ratecounterLookupCount___boxed(lean_object* v_rc_46_, lean_object* v_entry_47_, lean_object* v_duration_48_, lean_object* v_a_00___x40___internal___hyg_49_){
_start:
{
uint32_t v_duration_boxed_50_; lean_object* v_res_51_; 
v_duration_boxed_50_ = lean_unbox_uint32(v_duration_48_);
lean_dec(v_duration_48_);
v_res_51_ = lasm_fastly_erl_ratecounter_lookup_count(v_rc_46_, v_entry_47_, v_duration_boxed_50_);
lean_dec_ref(v_entry_47_);
lean_dec_ref(v_rc_46_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_penaltyboxAdd___boxed(lean_object* v_pb_56_, lean_object* v_entry_57_, lean_object* v_ttl_58_, lean_object* v_a_00___x40___internal___hyg_59_){
_start:
{
uint32_t v_ttl_boxed_60_; lean_object* v_res_61_; 
v_ttl_boxed_60_ = lean_unbox_uint32(v_ttl_58_);
lean_dec(v_ttl_58_);
v_res_61_ = lasm_fastly_erl_penaltybox_add(v_pb_56_, v_entry_57_, v_ttl_boxed_60_);
lean_dec_ref(v_entry_57_);
lean_dec_ref(v_pb_56_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Erl_penaltyboxHas___boxed(lean_object* v_pb_65_, lean_object* v_entry_66_, lean_object* v_a_00___x40___internal___hyg_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = lasm_fastly_erl_penaltybox_has(v_pb_65_, v_entry_66_);
lean_dec_ref(v_entry_66_);
lean_dec_ref(v_pb_65_);
return v_res_68_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_Erl(uint8_t builtin) {
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
