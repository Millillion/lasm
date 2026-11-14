// Lean compiler output
// Module: Lasm.Fastly.Shielding
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
lean_object* lasm_fastly_shielding_shield_info(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Shielding_shieldInfo___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_shielding_backend_for_shield(lean_object*, uint32_t, lean_object*, uint32_t, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Shielding_0__Lasm_Fastly_Shielding_backendForShieldFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Shielding_backendForShield(lean_object*, uint32_t, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Shielding_backendForShield___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Shielding_shieldInfo___boxed(lean_object* v_name_4_, lean_object* v_infoBlockMaxLen_5_, lean_object* v_a_00___x40___internal___hyg_6_){
_start:
{
uint32_t v_infoBlockMaxLen_boxed_7_; lean_object* v_res_8_; 
v_infoBlockMaxLen_boxed_7_ = lean_unbox_uint32(v_infoBlockMaxLen_5_);
lean_dec(v_infoBlockMaxLen_5_);
v_res_8_ = lasm_fastly_shielding_shield_info(v_name_4_, v_infoBlockMaxLen_boxed_7_);
lean_dec_ref(v_name_4_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Shielding_0__Lasm_Fastly_Shielding_backendForShieldFlat___boxed(lean_object* v_a0_16_, lean_object* v_a1_17_, lean_object* v_a3_18_, lean_object* v_a4_19_, lean_object* v_a5_20_, lean_object* v_a6_21_, lean_object* v_a_00___x40___internal___hyg_22_){
_start:
{
uint32_t v_a1_boxed_23_; uint32_t v_a4_boxed_24_; uint32_t v_a5_boxed_25_; uint32_t v_a6_boxed_26_; lean_object* v_res_27_; 
v_a1_boxed_23_ = lean_unbox_uint32(v_a1_17_);
lean_dec(v_a1_17_);
v_a4_boxed_24_ = lean_unbox_uint32(v_a4_19_);
lean_dec(v_a4_19_);
v_a5_boxed_25_ = lean_unbox_uint32(v_a5_20_);
lean_dec(v_a5_20_);
v_a6_boxed_26_ = lean_unbox_uint32(v_a6_21_);
lean_dec(v_a6_21_);
v_res_27_ = lasm_fastly_shielding_backend_for_shield(v_a0_16_, v_a1_boxed_23_, v_a3_18_, v_a4_boxed_24_, v_a5_boxed_25_, v_a6_boxed_26_);
lean_dec_ref(v_a3_18_);
lean_dec_ref(v_a0_16_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Shielding_backendForShield(lean_object* v_shieldName_28_, uint32_t v_backendConfigMask_29_, lean_object* v_backendConfiguration_30_, uint32_t v_backendNameMaxLen_31_){
_start:
{
lean_object* v_cacheKey_33_; uint32_t v_firstByteTimeoutMs_34_; uint32_t v_betweenBytesTimeoutMs_35_; lean_object* v___x_36_; 
v_cacheKey_33_ = lean_ctor_get(v_backendConfiguration_30_, 0);
v_firstByteTimeoutMs_34_ = lean_ctor_get_uint32(v_backendConfiguration_30_, sizeof(void*)*1);
v_betweenBytesTimeoutMs_35_ = lean_ctor_get_uint32(v_backendConfiguration_30_, sizeof(void*)*1 + 4);
v___x_36_ = lasm_fastly_shielding_backend_for_shield(v_shieldName_28_, v_backendConfigMask_29_, v_cacheKey_33_, v_firstByteTimeoutMs_34_, v_betweenBytesTimeoutMs_35_, v_backendNameMaxLen_31_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Shielding_backendForShield___boxed(lean_object* v_shieldName_37_, lean_object* v_backendConfigMask_38_, lean_object* v_backendConfiguration_39_, lean_object* v_backendNameMaxLen_40_, lean_object* v_a_41_){
_start:
{
uint32_t v_backendConfigMask_boxed_42_; uint32_t v_backendNameMaxLen_boxed_43_; lean_object* v_res_44_; 
v_backendConfigMask_boxed_42_ = lean_unbox_uint32(v_backendConfigMask_38_);
lean_dec(v_backendConfigMask_38_);
v_backendNameMaxLen_boxed_43_ = lean_unbox_uint32(v_backendNameMaxLen_40_);
lean_dec(v_backendNameMaxLen_40_);
v_res_44_ = l_Lasm_Fastly_Shielding_backendForShield(v_shieldName_37_, v_backendConfigMask_boxed_42_, v_backendConfiguration_39_, v_backendNameMaxLen_boxed_43_);
lean_dec_ref(v_backendConfiguration_39_);
lean_dec_ref(v_shieldName_37_);
return v_res_44_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_Shielding(uint8_t builtin) {
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
