// Lean compiler output
// Module: Lasm.Fastly.SecretStore
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
lean_object* lasm_fastly_secret_store_open(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_SecretStore_open___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_secret_store_get(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_SecretStore_get___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_secret_store_plaintext(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_SecretStore_plaintext___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_secret_store_from_bytes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_SecretStore_fromBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_SecretStore_open___boxed(lean_object* v_name_3_, lean_object* v_a_00___x40___internal___hyg_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = lasm_fastly_secret_store_open(v_name_3_);
lean_dec_ref(v_name_3_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_SecretStore_get___boxed(lean_object* v_store_9_, lean_object* v_key_10_, lean_object* v_a_00___x40___internal___hyg_11_){
_start:
{
uint32_t v_store_boxed_12_; lean_object* v_res_13_; 
v_store_boxed_12_ = lean_unbox_uint32(v_store_9_);
lean_dec(v_store_9_);
v_res_13_ = lasm_fastly_secret_store_get(v_store_boxed_12_, v_key_10_);
lean_dec_ref(v_key_10_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_SecretStore_plaintext___boxed(lean_object* v_secret_16_, lean_object* v_a_00___x40___internal___hyg_17_){
_start:
{
uint32_t v_secret_boxed_18_; lean_object* v_res_19_; 
v_secret_boxed_18_ = lean_unbox_uint32(v_secret_16_);
lean_dec(v_secret_16_);
v_res_19_ = lasm_fastly_secret_store_plaintext(v_secret_boxed_18_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_SecretStore_fromBytes___boxed(lean_object* v_buf_22_, lean_object* v_a_00___x40___internal___hyg_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lasm_fastly_secret_store_from_bytes(v_buf_22_);
lean_dec_ref(v_buf_22_);
return v_res_24_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_SecretStore(uint8_t builtin) {
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
