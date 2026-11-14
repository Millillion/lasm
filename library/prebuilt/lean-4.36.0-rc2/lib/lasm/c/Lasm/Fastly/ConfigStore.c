// Lean compiler output
// Module: Lasm.Fastly.ConfigStore
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
lean_object* lasm_fastly_config_store_open(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ConfigStore_open___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_config_store_get(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ConfigStore_get___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ConfigStore_open___boxed(lean_object* v_name_3_, lean_object* v_a_00___x40___internal___hyg_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = lasm_fastly_config_store_open(v_name_3_);
lean_dec_ref(v_name_3_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_ConfigStore_get___boxed(lean_object* v_h_9_, lean_object* v_key_10_, lean_object* v_a_00___x40___internal___hyg_11_){
_start:
{
uint32_t v_h_boxed_12_; lean_object* v_res_13_; 
v_h_boxed_12_ = lean_unbox_uint32(v_h_9_);
lean_dec(v_h_9_);
v_res_13_ = lasm_fastly_config_store_get(v_h_boxed_12_, v_key_10_);
lean_dec_ref(v_key_10_);
return v_res_13_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_ConfigStore(uint8_t builtin) {
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
