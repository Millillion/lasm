// Lean compiler output
// Module: Lasm.Fastly.ObjectStore
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
lean_object* lasm_fastly_object_store_open(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_open___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_object_store_lookup(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_lookup___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_object_store_lookup_async(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_lookupAsync___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_object_store_pending_lookup_wait(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_pendingLookupWait___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_object_store_insert(uint32_t, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_object_store_insert_async(uint32_t, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_insertAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_object_store_pending_insert_wait(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_pendingInsertWait___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_object_store_delete_async(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_deleteAsync___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_object_store_pending_delete_wait(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_pendingDeleteWait___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_open___boxed(lean_object* v_name_3_, lean_object* v_a_00___x40___internal___hyg_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = lasm_fastly_object_store_open(v_name_3_);
lean_dec_ref(v_name_3_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_lookup___boxed(lean_object* v_store_9_, lean_object* v_key_10_, lean_object* v_a_00___x40___internal___hyg_11_){
_start:
{
uint32_t v_store_boxed_12_; lean_object* v_res_13_; 
v_store_boxed_12_ = lean_unbox_uint32(v_store_9_);
lean_dec(v_store_9_);
v_res_13_ = lasm_fastly_object_store_lookup(v_store_boxed_12_, v_key_10_);
lean_dec_ref(v_key_10_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_lookupAsync___boxed(lean_object* v_store_17_, lean_object* v_key_18_, lean_object* v_a_00___x40___internal___hyg_19_){
_start:
{
uint32_t v_store_boxed_20_; lean_object* v_res_21_; 
v_store_boxed_20_ = lean_unbox_uint32(v_store_17_);
lean_dec(v_store_17_);
v_res_21_ = lasm_fastly_object_store_lookup_async(v_store_boxed_20_, v_key_18_);
lean_dec_ref(v_key_18_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_pendingLookupWait___boxed(lean_object* v_pendingObjstrHandle_24_, lean_object* v_a_00___x40___internal___hyg_25_){
_start:
{
uint32_t v_pendingObjstrHandle_boxed_26_; lean_object* v_res_27_; 
v_pendingObjstrHandle_boxed_26_ = lean_unbox_uint32(v_pendingObjstrHandle_24_);
lean_dec(v_pendingObjstrHandle_24_);
v_res_27_ = lasm_fastly_object_store_pending_lookup_wait(v_pendingObjstrHandle_boxed_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_insert___boxed(lean_object* v_store_32_, lean_object* v_key_33_, lean_object* v_bodyHandle_34_, lean_object* v_a_00___x40___internal___hyg_35_){
_start:
{
uint32_t v_store_boxed_36_; uint32_t v_bodyHandle_boxed_37_; lean_object* v_res_38_; 
v_store_boxed_36_ = lean_unbox_uint32(v_store_32_);
lean_dec(v_store_32_);
v_bodyHandle_boxed_37_ = lean_unbox_uint32(v_bodyHandle_34_);
lean_dec(v_bodyHandle_34_);
v_res_38_ = lasm_fastly_object_store_insert(v_store_boxed_36_, v_key_33_, v_bodyHandle_boxed_37_);
lean_dec_ref(v_key_33_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_insertAsync___boxed(lean_object* v_store_43_, lean_object* v_key_44_, lean_object* v_bodyHandle_45_, lean_object* v_a_00___x40___internal___hyg_46_){
_start:
{
uint32_t v_store_boxed_47_; uint32_t v_bodyHandle_boxed_48_; lean_object* v_res_49_; 
v_store_boxed_47_ = lean_unbox_uint32(v_store_43_);
lean_dec(v_store_43_);
v_bodyHandle_boxed_48_ = lean_unbox_uint32(v_bodyHandle_45_);
lean_dec(v_bodyHandle_45_);
v_res_49_ = lasm_fastly_object_store_insert_async(v_store_boxed_47_, v_key_44_, v_bodyHandle_boxed_48_);
lean_dec_ref(v_key_44_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_pendingInsertWait___boxed(lean_object* v_pendingObjstrHandle_52_, lean_object* v_a_00___x40___internal___hyg_53_){
_start:
{
uint32_t v_pendingObjstrHandle_boxed_54_; lean_object* v_res_55_; 
v_pendingObjstrHandle_boxed_54_ = lean_unbox_uint32(v_pendingObjstrHandle_52_);
lean_dec(v_pendingObjstrHandle_52_);
v_res_55_ = lasm_fastly_object_store_pending_insert_wait(v_pendingObjstrHandle_boxed_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_deleteAsync___boxed(lean_object* v_store_59_, lean_object* v_key_60_, lean_object* v_a_00___x40___internal___hyg_61_){
_start:
{
uint32_t v_store_boxed_62_; lean_object* v_res_63_; 
v_store_boxed_62_ = lean_unbox_uint32(v_store_59_);
lean_dec(v_store_59_);
v_res_63_ = lasm_fastly_object_store_delete_async(v_store_boxed_62_, v_key_60_);
lean_dec_ref(v_key_60_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_ObjectStore_pendingDeleteWait___boxed(lean_object* v_pendingObjstrHandle_66_, lean_object* v_a_00___x40___internal___hyg_67_){
_start:
{
uint32_t v_pendingObjstrHandle_boxed_68_; lean_object* v_res_69_; 
v_pendingObjstrHandle_boxed_68_ = lean_unbox_uint32(v_pendingObjstrHandle_66_);
lean_dec(v_pendingObjstrHandle_66_);
v_res_69_ = lasm_fastly_object_store_pending_delete_wait(v_pendingObjstrHandle_boxed_68_);
return v_res_69_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_ObjectStore(uint8_t builtin) {
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
