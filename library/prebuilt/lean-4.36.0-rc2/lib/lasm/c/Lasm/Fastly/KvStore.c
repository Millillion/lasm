// Lean compiler output
// Module: Lasm.Fastly.KvStore
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
lean_object* lasm_fastly_kv_store_open(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_open___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_kv_store_lookup(uint32_t, lean_object*, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_KvStore_0__Lasm_Fastly_KvStore_lookupFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_lookup(uint32_t, lean_object*, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_lookup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_kv_store_lookup_wait(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_lookupWait___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_kv_store_lookup_wait_v2(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_lookupWaitV2___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_kv_store_insert(uint32_t, lean_object*, uint32_t, uint32_t, uint8_t, uint32_t, lean_object*, uint32_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_KvStore_0__Lasm_Fastly_KvStore_insertFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_insert(uint32_t, lean_object*, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_kv_store_insert_wait(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_insertWait___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_kv_store_delete(uint32_t, lean_object*, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_KvStore_0__Lasm_Fastly_KvStore_deleteFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_delete(uint32_t, lean_object*, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_delete___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_kv_store_delete_wait(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_deleteWait___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_kv_store_list(uint32_t, uint32_t, uint8_t, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_KvStore_0__Lasm_Fastly_KvStore_listFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_list(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_list___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_kv_store_list_wait(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_listWait___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_open___boxed(lean_object* v_name_3_, lean_object* v_a_00___x40___internal___hyg_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = lasm_fastly_kv_store_open(v_name_3_);
lean_dec_ref(v_name_3_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_KvStore_0__Lasm_Fastly_KvStore_lookupFlat___boxed(lean_object* v_a0_11_, lean_object* v_a1_12_, lean_object* v_a2_13_, lean_object* v_a4_14_, lean_object* v_a_00___x40___internal___hyg_15_){
_start:
{
uint32_t v_a0_boxed_16_; uint32_t v_a2_boxed_17_; uint32_t v_a4_boxed_18_; lean_object* v_res_19_; 
v_a0_boxed_16_ = lean_unbox_uint32(v_a0_11_);
lean_dec(v_a0_11_);
v_a2_boxed_17_ = lean_unbox_uint32(v_a2_13_);
lean_dec(v_a2_13_);
v_a4_boxed_18_ = lean_unbox_uint32(v_a4_14_);
lean_dec(v_a4_14_);
v_res_19_ = lasm_fastly_kv_store_lookup(v_a0_boxed_16_, v_a1_12_, v_a2_boxed_17_, v_a4_boxed_18_);
lean_dec_ref(v_a1_12_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_lookup(uint32_t v_store_20_, lean_object* v_key_21_, uint32_t v_lookupConfigMask_22_, uint32_t v_lookupConfiguration_23_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lasm_fastly_kv_store_lookup(v_store_20_, v_key_21_, v_lookupConfigMask_22_, v_lookupConfiguration_23_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_lookup___boxed(lean_object* v_store_26_, lean_object* v_key_27_, lean_object* v_lookupConfigMask_28_, lean_object* v_lookupConfiguration_29_, lean_object* v_a_30_){
_start:
{
uint32_t v_store_boxed_31_; uint32_t v_lookupConfigMask_boxed_32_; uint32_t v_lookupConfiguration_boxed_33_; lean_object* v_res_34_; 
v_store_boxed_31_ = lean_unbox_uint32(v_store_26_);
lean_dec(v_store_26_);
v_lookupConfigMask_boxed_32_ = lean_unbox_uint32(v_lookupConfigMask_28_);
lean_dec(v_lookupConfigMask_28_);
v_lookupConfiguration_boxed_33_ = lean_unbox_uint32(v_lookupConfiguration_29_);
lean_dec(v_lookupConfiguration_29_);
v_res_34_ = l_Lasm_Fastly_KvStore_lookup(v_store_boxed_31_, v_key_27_, v_lookupConfigMask_boxed_32_, v_lookupConfiguration_boxed_33_);
lean_dec_ref(v_key_27_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_lookupWait___boxed(lean_object* v_handle_37_, lean_object* v_a_00___x40___internal___hyg_38_){
_start:
{
uint32_t v_handle_boxed_39_; lean_object* v_res_40_; 
v_handle_boxed_39_ = lean_unbox_uint32(v_handle_37_);
lean_dec(v_handle_37_);
v_res_40_ = lasm_fastly_kv_store_lookup_wait(v_handle_boxed_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_lookupWaitV2___boxed(lean_object* v_handle_43_, lean_object* v_a_00___x40___internal___hyg_44_){
_start:
{
uint32_t v_handle_boxed_45_; lean_object* v_res_46_; 
v_handle_boxed_45_ = lean_unbox_uint32(v_handle_43_);
lean_dec(v_handle_43_);
v_res_46_ = lasm_fastly_kv_store_lookup_wait_v2(v_handle_boxed_45_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_KvStore_0__Lasm_Fastly_KvStore_insertFlat___boxed(lean_object* v_a0_57_, lean_object* v_a1_58_, lean_object* v_a2_59_, lean_object* v_a3_60_, lean_object* v_a5_61_, lean_object* v_a6_62_, lean_object* v_a7_63_, lean_object* v_a8_64_, lean_object* v_a9_65_, lean_object* v_a_00___x40___internal___hyg_66_){
_start:
{
uint32_t v_a0_boxed_67_; uint32_t v_a2_boxed_68_; uint32_t v_a3_boxed_69_; uint8_t v_a5_boxed_70_; uint32_t v_a6_boxed_71_; uint32_t v_a8_boxed_72_; uint64_t v_a9_boxed_73_; lean_object* v_res_74_; 
v_a0_boxed_67_ = lean_unbox_uint32(v_a0_57_);
lean_dec(v_a0_57_);
v_a2_boxed_68_ = lean_unbox_uint32(v_a2_59_);
lean_dec(v_a2_59_);
v_a3_boxed_69_ = lean_unbox_uint32(v_a3_60_);
lean_dec(v_a3_60_);
v_a5_boxed_70_ = lean_unbox(v_a5_61_);
v_a6_boxed_71_ = lean_unbox_uint32(v_a6_62_);
lean_dec(v_a6_62_);
v_a8_boxed_72_ = lean_unbox_uint32(v_a8_64_);
lean_dec(v_a8_64_);
v_a9_boxed_73_ = lean_unbox_uint64(v_a9_65_);
lean_dec_ref(v_a9_65_);
v_res_74_ = lasm_fastly_kv_store_insert(v_a0_boxed_67_, v_a1_58_, v_a2_boxed_68_, v_a3_boxed_69_, v_a5_boxed_70_, v_a6_boxed_71_, v_a7_63_, v_a8_boxed_72_, v_a9_boxed_73_);
lean_dec_ref(v_a7_63_);
lean_dec_ref(v_a1_58_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_insert(uint32_t v_store_75_, lean_object* v_key_76_, uint32_t v_bodyHandle_77_, uint32_t v_insertConfigMask_78_, lean_object* v_insertConfiguration_79_){
_start:
{
uint8_t v_mode_81_; uint32_t v_unused_82_; lean_object* v_metadata_83_; uint32_t v_timeToLiveSec_84_; uint64_t v_ifGenerationMatch_85_; lean_object* v___x_86_; 
v_mode_81_ = lean_ctor_get_uint8(v_insertConfiguration_79_, sizeof(void*)*1 + 16);
v_unused_82_ = lean_ctor_get_uint32(v_insertConfiguration_79_, sizeof(void*)*1 + 8);
v_metadata_83_ = lean_ctor_get(v_insertConfiguration_79_, 0);
v_timeToLiveSec_84_ = lean_ctor_get_uint32(v_insertConfiguration_79_, sizeof(void*)*1 + 12);
v_ifGenerationMatch_85_ = lean_ctor_get_uint64(v_insertConfiguration_79_, sizeof(void*)*1);
v___x_86_ = lasm_fastly_kv_store_insert(v_store_75_, v_key_76_, v_bodyHandle_77_, v_insertConfigMask_78_, v_mode_81_, v_unused_82_, v_metadata_83_, v_timeToLiveSec_84_, v_ifGenerationMatch_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_insert___boxed(lean_object* v_store_87_, lean_object* v_key_88_, lean_object* v_bodyHandle_89_, lean_object* v_insertConfigMask_90_, lean_object* v_insertConfiguration_91_, lean_object* v_a_92_){
_start:
{
uint32_t v_store_boxed_93_; uint32_t v_bodyHandle_boxed_94_; uint32_t v_insertConfigMask_boxed_95_; lean_object* v_res_96_; 
v_store_boxed_93_ = lean_unbox_uint32(v_store_87_);
lean_dec(v_store_87_);
v_bodyHandle_boxed_94_ = lean_unbox_uint32(v_bodyHandle_89_);
lean_dec(v_bodyHandle_89_);
v_insertConfigMask_boxed_95_ = lean_unbox_uint32(v_insertConfigMask_90_);
lean_dec(v_insertConfigMask_90_);
v_res_96_ = l_Lasm_Fastly_KvStore_insert(v_store_boxed_93_, v_key_88_, v_bodyHandle_boxed_94_, v_insertConfigMask_boxed_95_, v_insertConfiguration_91_);
lean_dec_ref(v_insertConfiguration_91_);
lean_dec_ref(v_key_88_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_insertWait___boxed(lean_object* v_handle_99_, lean_object* v_a_00___x40___internal___hyg_100_){
_start:
{
uint32_t v_handle_boxed_101_; lean_object* v_res_102_; 
v_handle_boxed_101_ = lean_unbox_uint32(v_handle_99_);
lean_dec(v_handle_99_);
v_res_102_ = lasm_fastly_kv_store_insert_wait(v_handle_boxed_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_KvStore_0__Lasm_Fastly_KvStore_deleteFlat___boxed(lean_object* v_a0_108_, lean_object* v_a1_109_, lean_object* v_a2_110_, lean_object* v_a4_111_, lean_object* v_a_00___x40___internal___hyg_112_){
_start:
{
uint32_t v_a0_boxed_113_; uint32_t v_a2_boxed_114_; uint32_t v_a4_boxed_115_; lean_object* v_res_116_; 
v_a0_boxed_113_ = lean_unbox_uint32(v_a0_108_);
lean_dec(v_a0_108_);
v_a2_boxed_114_ = lean_unbox_uint32(v_a2_110_);
lean_dec(v_a2_110_);
v_a4_boxed_115_ = lean_unbox_uint32(v_a4_111_);
lean_dec(v_a4_111_);
v_res_116_ = lasm_fastly_kv_store_delete(v_a0_boxed_113_, v_a1_109_, v_a2_boxed_114_, v_a4_boxed_115_);
lean_dec_ref(v_a1_109_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_delete(uint32_t v_store_117_, lean_object* v_key_118_, uint32_t v_deleteConfigMask_119_, uint32_t v_deleteConfiguration_120_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lasm_fastly_kv_store_delete(v_store_117_, v_key_118_, v_deleteConfigMask_119_, v_deleteConfiguration_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_delete___boxed(lean_object* v_store_123_, lean_object* v_key_124_, lean_object* v_deleteConfigMask_125_, lean_object* v_deleteConfiguration_126_, lean_object* v_a_127_){
_start:
{
uint32_t v_store_boxed_128_; uint32_t v_deleteConfigMask_boxed_129_; uint32_t v_deleteConfiguration_boxed_130_; lean_object* v_res_131_; 
v_store_boxed_128_ = lean_unbox_uint32(v_store_123_);
lean_dec(v_store_123_);
v_deleteConfigMask_boxed_129_ = lean_unbox_uint32(v_deleteConfigMask_125_);
lean_dec(v_deleteConfigMask_125_);
v_deleteConfiguration_boxed_130_ = lean_unbox_uint32(v_deleteConfiguration_126_);
lean_dec(v_deleteConfiguration_126_);
v_res_131_ = l_Lasm_Fastly_KvStore_delete(v_store_boxed_128_, v_key_124_, v_deleteConfigMask_boxed_129_, v_deleteConfiguration_boxed_130_);
lean_dec_ref(v_key_124_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_deleteWait___boxed(lean_object* v_handle_134_, lean_object* v_a_00___x40___internal___hyg_135_){
_start:
{
uint32_t v_handle_boxed_136_; lean_object* v_res_137_; 
v_handle_boxed_136_ = lean_unbox_uint32(v_handle_134_);
lean_dec(v_handle_134_);
v_res_137_ = lasm_fastly_kv_store_delete_wait(v_handle_boxed_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_KvStore_0__Lasm_Fastly_KvStore_listFlat___boxed(lean_object* v_a0_145_, lean_object* v_a1_146_, lean_object* v_a3_147_, lean_object* v_a4_148_, lean_object* v_a5_149_, lean_object* v_a6_150_, lean_object* v_a_00___x40___internal___hyg_151_){
_start:
{
uint32_t v_a0_boxed_152_; uint32_t v_a1_boxed_153_; uint8_t v_a3_boxed_154_; uint32_t v_a5_boxed_155_; lean_object* v_res_156_; 
v_a0_boxed_152_ = lean_unbox_uint32(v_a0_145_);
lean_dec(v_a0_145_);
v_a1_boxed_153_ = lean_unbox_uint32(v_a1_146_);
lean_dec(v_a1_146_);
v_a3_boxed_154_ = lean_unbox(v_a3_147_);
v_a5_boxed_155_ = lean_unbox_uint32(v_a5_149_);
lean_dec(v_a5_149_);
v_res_156_ = lasm_fastly_kv_store_list(v_a0_boxed_152_, v_a1_boxed_153_, v_a3_boxed_154_, v_a4_148_, v_a5_boxed_155_, v_a6_150_);
lean_dec_ref(v_a6_150_);
lean_dec_ref(v_a4_148_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_list(uint32_t v_store_157_, uint32_t v_listConfigMask_158_, lean_object* v_listConfiguration_159_){
_start:
{
uint8_t v_mode_161_; lean_object* v_cursor_162_; uint32_t v_limit_163_; lean_object* v_prefix_164_; lean_object* v___x_165_; 
v_mode_161_ = lean_ctor_get_uint8(v_listConfiguration_159_, sizeof(void*)*2 + 4);
v_cursor_162_ = lean_ctor_get(v_listConfiguration_159_, 0);
v_limit_163_ = lean_ctor_get_uint32(v_listConfiguration_159_, sizeof(void*)*2);
v_prefix_164_ = lean_ctor_get(v_listConfiguration_159_, 1);
v___x_165_ = lasm_fastly_kv_store_list(v_store_157_, v_listConfigMask_158_, v_mode_161_, v_cursor_162_, v_limit_163_, v_prefix_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_list___boxed(lean_object* v_store_166_, lean_object* v_listConfigMask_167_, lean_object* v_listConfiguration_168_, lean_object* v_a_169_){
_start:
{
uint32_t v_store_boxed_170_; uint32_t v_listConfigMask_boxed_171_; lean_object* v_res_172_; 
v_store_boxed_170_ = lean_unbox_uint32(v_store_166_);
lean_dec(v_store_166_);
v_listConfigMask_boxed_171_ = lean_unbox_uint32(v_listConfigMask_167_);
lean_dec(v_listConfigMask_167_);
v_res_172_ = l_Lasm_Fastly_KvStore_list(v_store_boxed_170_, v_listConfigMask_boxed_171_, v_listConfiguration_168_);
lean_dec_ref(v_listConfiguration_168_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_KvStore_listWait___boxed(lean_object* v_handle_175_, lean_object* v_a_00___x40___internal___hyg_176_){
_start:
{
uint32_t v_handle_boxed_177_; lean_object* v_res_178_; 
v_handle_boxed_177_ = lean_unbox_uint32(v_handle_175_);
lean_dec(v_handle_175_);
v_res_178_ = lasm_fastly_kv_store_list_wait(v_handle_boxed_177_);
return v_res_178_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_KvStore(uint8_t builtin) {
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
