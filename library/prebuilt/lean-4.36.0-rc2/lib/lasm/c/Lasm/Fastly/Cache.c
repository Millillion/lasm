// Lean compiler output
// Module: Lasm.Fastly.Cache
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
lean_object* lasm_fastly_cache_lookup(lean_object*, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_lookupFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_lookup(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_lookup___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_cache_insert(lean_object*, uint32_t, uint64_t, uint32_t, lean_object*, uint64_t, uint64_t, lean_object*, uint64_t, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_insertFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_insert(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_cache_replace(lean_object*, uint32_t, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_replaceFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replace(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_cache_replace_insert(uint32_t, uint32_t, uint64_t, uint32_t, lean_object*, uint64_t, uint64_t, lean_object*, uint64_t, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_replaceInsertFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceInsert(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceInsert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_cache_replace_get_age_ns(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetAgeNs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_replace_get_body(uint32_t, uint32_t, uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_replaceGetBodyFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetBody(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_cache_replace_get_hits(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetHits___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_replace_get_length(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetLength___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_replace_get_max_age_ns(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetMaxAgeNs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_replace_get_stale_while_revalidate_ns(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetStaleWhileRevalidateNs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_replace_get_state(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetState___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_replace_get_user_metadata(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetUserMetadata___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_transaction_lookup(lean_object*, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_transactionLookupFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionLookup(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionLookup___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_cache_transaction_lookup_async(lean_object*, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_transactionLookupAsyncFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionLookupAsync(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionLookupAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_cache_cache_busy_handle_wait(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_cacheBusyHandleWait___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_transaction_insert(uint32_t, uint32_t, uint64_t, uint32_t, lean_object*, uint64_t, uint64_t, lean_object*, uint64_t, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_transactionInsertFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionInsert(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionInsert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_cache_transaction_insert_and_stream_back(uint32_t, uint32_t, uint64_t, uint32_t, lean_object*, uint64_t, uint64_t, lean_object*, uint64_t, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_transactionInsertAndStreamBackFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionInsertAndStreamBack(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionInsertAndStreamBack___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_cache_transaction_update(uint32_t, uint32_t, uint64_t, uint32_t, lean_object*, uint64_t, uint64_t, lean_object*, uint64_t, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_transactionUpdateFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionUpdate(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionUpdate___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_cache_transaction_cancel(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionCancel___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_close_busy(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_closeBusy___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_close(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_close___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_get_state(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getState___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_get_user_metadata(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getUserMetadata___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_get_body(uint32_t, uint32_t, uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_getBodyFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getBody(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_cache_get_length(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getLength___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_get_max_age_ns(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getMaxAgeNs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_get_stale_while_revalidate_ns(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getStaleWhileRevalidateNs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_get_age_ns(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getAgeNs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_cache_get_hits(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getHits___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_lookupFlat___boxed(lean_object* v_a0_6_, lean_object* v_a1_7_, lean_object* v_a3_8_, lean_object* v_a4_9_, lean_object* v_a_00___x40___internal___hyg_10_){
_start:
{
uint32_t v_a1_boxed_11_; uint32_t v_a3_boxed_12_; lean_object* v_res_13_; 
v_a1_boxed_11_ = lean_unbox_uint32(v_a1_7_);
lean_dec(v_a1_7_);
v_a3_boxed_12_ = lean_unbox_uint32(v_a3_8_);
lean_dec(v_a3_8_);
v_res_13_ = lasm_fastly_cache_lookup(v_a0_6_, v_a1_boxed_11_, v_a3_boxed_12_, v_a4_9_);
lean_dec_ref(v_a4_9_);
lean_dec_ref(v_a0_6_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_lookup(lean_object* v_cacheKey_14_, uint32_t v_optionsMask_15_, lean_object* v_options_16_){
_start:
{
uint32_t v_requestHeaders_18_; lean_object* v_serviceId_19_; lean_object* v___x_20_; 
v_requestHeaders_18_ = lean_ctor_get_uint32(v_options_16_, sizeof(void*)*1);
v_serviceId_19_ = lean_ctor_get(v_options_16_, 0);
v___x_20_ = lasm_fastly_cache_lookup(v_cacheKey_14_, v_optionsMask_15_, v_requestHeaders_18_, v_serviceId_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_lookup___boxed(lean_object* v_cacheKey_21_, lean_object* v_optionsMask_22_, lean_object* v_options_23_, lean_object* v_a_24_){
_start:
{
uint32_t v_optionsMask_boxed_25_; lean_object* v_res_26_; 
v_optionsMask_boxed_25_ = lean_unbox_uint32(v_optionsMask_22_);
lean_dec(v_optionsMask_22_);
v_res_26_ = l_Lasm_Fastly_Cache_lookup(v_cacheKey_21_, v_optionsMask_boxed_25_, v_options_23_);
lean_dec_ref(v_options_23_);
lean_dec_ref(v_cacheKey_21_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_insertFlat___boxed(lean_object* v_a0_40_, lean_object* v_a1_41_, lean_object* v_a3_42_, lean_object* v_a4_43_, lean_object* v_a5_44_, lean_object* v_a6_45_, lean_object* v_a7_46_, lean_object* v_a8_47_, lean_object* v_a9_48_, lean_object* v_a10_49_, lean_object* v_a11_50_, lean_object* v_a12_51_, lean_object* v_a_00___x40___internal___hyg_52_){
_start:
{
uint32_t v_a1_boxed_53_; uint64_t v_a3_boxed_54_; uint32_t v_a4_boxed_55_; uint64_t v_a6_boxed_56_; uint64_t v_a7_boxed_57_; uint64_t v_a9_boxed_58_; uint64_t v_a11_boxed_59_; lean_object* v_res_60_; 
v_a1_boxed_53_ = lean_unbox_uint32(v_a1_41_);
lean_dec(v_a1_41_);
v_a3_boxed_54_ = lean_unbox_uint64(v_a3_42_);
lean_dec_ref(v_a3_42_);
v_a4_boxed_55_ = lean_unbox_uint32(v_a4_43_);
lean_dec(v_a4_43_);
v_a6_boxed_56_ = lean_unbox_uint64(v_a6_45_);
lean_dec_ref(v_a6_45_);
v_a7_boxed_57_ = lean_unbox_uint64(v_a7_46_);
lean_dec_ref(v_a7_46_);
v_a9_boxed_58_ = lean_unbox_uint64(v_a9_48_);
lean_dec_ref(v_a9_48_);
v_a11_boxed_59_ = lean_unbox_uint64(v_a11_50_);
lean_dec_ref(v_a11_50_);
v_res_60_ = lasm_fastly_cache_insert(v_a0_40_, v_a1_boxed_53_, v_a3_boxed_54_, v_a4_boxed_55_, v_a5_44_, v_a6_boxed_56_, v_a7_boxed_57_, v_a8_47_, v_a9_boxed_58_, v_a10_49_, v_a11_boxed_59_, v_a12_51_);
lean_dec_ref(v_a12_51_);
lean_dec_ref(v_a10_49_);
lean_dec_ref(v_a8_47_);
lean_dec_ref(v_a5_44_);
lean_dec_ref(v_a0_40_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_insert(lean_object* v_cacheKey_61_, uint32_t v_optionsMask_62_, lean_object* v_options_63_){
_start:
{
uint64_t v_maxAgeNs_65_; uint32_t v_requestHeaders_66_; lean_object* v_varyRule_67_; uint64_t v_initialAgeNs_68_; uint64_t v_staleWhileRevalidateNs_69_; lean_object* v_surrogateKeys_70_; uint64_t v_length_71_; lean_object* v_userMetadata_72_; uint64_t v_edgeMaxAgeNs_73_; lean_object* v_serviceId_74_; lean_object* v___x_75_; 
v_maxAgeNs_65_ = lean_ctor_get_uint64(v_options_63_, sizeof(void*)*4);
v_requestHeaders_66_ = lean_ctor_get_uint32(v_options_63_, sizeof(void*)*4 + 40);
v_varyRule_67_ = lean_ctor_get(v_options_63_, 0);
v_initialAgeNs_68_ = lean_ctor_get_uint64(v_options_63_, sizeof(void*)*4 + 8);
v_staleWhileRevalidateNs_69_ = lean_ctor_get_uint64(v_options_63_, sizeof(void*)*4 + 16);
v_surrogateKeys_70_ = lean_ctor_get(v_options_63_, 1);
v_length_71_ = lean_ctor_get_uint64(v_options_63_, sizeof(void*)*4 + 24);
v_userMetadata_72_ = lean_ctor_get(v_options_63_, 2);
v_edgeMaxAgeNs_73_ = lean_ctor_get_uint64(v_options_63_, sizeof(void*)*4 + 32);
v_serviceId_74_ = lean_ctor_get(v_options_63_, 3);
v___x_75_ = lasm_fastly_cache_insert(v_cacheKey_61_, v_optionsMask_62_, v_maxAgeNs_65_, v_requestHeaders_66_, v_varyRule_67_, v_initialAgeNs_68_, v_staleWhileRevalidateNs_69_, v_surrogateKeys_70_, v_length_71_, v_userMetadata_72_, v_edgeMaxAgeNs_73_, v_serviceId_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_insert___boxed(lean_object* v_cacheKey_76_, lean_object* v_optionsMask_77_, lean_object* v_options_78_, lean_object* v_a_79_){
_start:
{
uint32_t v_optionsMask_boxed_80_; lean_object* v_res_81_; 
v_optionsMask_boxed_80_ = lean_unbox_uint32(v_optionsMask_77_);
lean_dec(v_optionsMask_77_);
v_res_81_ = l_Lasm_Fastly_Cache_insert(v_cacheKey_76_, v_optionsMask_boxed_80_, v_options_78_);
lean_dec_ref(v_options_78_);
lean_dec_ref(v_cacheKey_76_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_replaceFlat___boxed(lean_object* v_a0_88_, lean_object* v_a1_89_, lean_object* v_a3_90_, lean_object* v_a4_91_, lean_object* v_a5_92_, lean_object* v_a_00___x40___internal___hyg_93_){
_start:
{
uint32_t v_a1_boxed_94_; uint32_t v_a3_boxed_95_; uint32_t v_a4_boxed_96_; lean_object* v_res_97_; 
v_a1_boxed_94_ = lean_unbox_uint32(v_a1_89_);
lean_dec(v_a1_89_);
v_a3_boxed_95_ = lean_unbox_uint32(v_a3_90_);
lean_dec(v_a3_90_);
v_a4_boxed_96_ = lean_unbox_uint32(v_a4_91_);
lean_dec(v_a4_91_);
v_res_97_ = lasm_fastly_cache_replace(v_a0_88_, v_a1_boxed_94_, v_a3_boxed_95_, v_a4_boxed_96_, v_a5_92_);
lean_dec_ref(v_a5_92_);
lean_dec_ref(v_a0_88_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replace(lean_object* v_cacheKey_98_, uint32_t v_optionsMask_99_, lean_object* v_options_100_){
_start:
{
uint32_t v_requestHeaders_102_; uint32_t v_replaceStrategy_103_; lean_object* v_serviceId_104_; lean_object* v___x_105_; 
v_requestHeaders_102_ = lean_ctor_get_uint32(v_options_100_, sizeof(void*)*1);
v_replaceStrategy_103_ = lean_ctor_get_uint32(v_options_100_, sizeof(void*)*1 + 4);
v_serviceId_104_ = lean_ctor_get(v_options_100_, 0);
v___x_105_ = lasm_fastly_cache_replace(v_cacheKey_98_, v_optionsMask_99_, v_requestHeaders_102_, v_replaceStrategy_103_, v_serviceId_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replace___boxed(lean_object* v_cacheKey_106_, lean_object* v_optionsMask_107_, lean_object* v_options_108_, lean_object* v_a_109_){
_start:
{
uint32_t v_optionsMask_boxed_110_; lean_object* v_res_111_; 
v_optionsMask_boxed_110_ = lean_unbox_uint32(v_optionsMask_107_);
lean_dec(v_optionsMask_107_);
v_res_111_ = l_Lasm_Fastly_Cache_replace(v_cacheKey_106_, v_optionsMask_boxed_110_, v_options_108_);
lean_dec_ref(v_options_108_);
lean_dec_ref(v_cacheKey_106_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_replaceInsertFlat___boxed(lean_object* v_a0_125_, lean_object* v_a1_126_, lean_object* v_a3_127_, lean_object* v_a4_128_, lean_object* v_a5_129_, lean_object* v_a6_130_, lean_object* v_a7_131_, lean_object* v_a8_132_, lean_object* v_a9_133_, lean_object* v_a10_134_, lean_object* v_a11_135_, lean_object* v_a12_136_, lean_object* v_a_00___x40___internal___hyg_137_){
_start:
{
uint32_t v_a0_boxed_138_; uint32_t v_a1_boxed_139_; uint64_t v_a3_boxed_140_; uint32_t v_a4_boxed_141_; uint64_t v_a6_boxed_142_; uint64_t v_a7_boxed_143_; uint64_t v_a9_boxed_144_; uint64_t v_a11_boxed_145_; lean_object* v_res_146_; 
v_a0_boxed_138_ = lean_unbox_uint32(v_a0_125_);
lean_dec(v_a0_125_);
v_a1_boxed_139_ = lean_unbox_uint32(v_a1_126_);
lean_dec(v_a1_126_);
v_a3_boxed_140_ = lean_unbox_uint64(v_a3_127_);
lean_dec_ref(v_a3_127_);
v_a4_boxed_141_ = lean_unbox_uint32(v_a4_128_);
lean_dec(v_a4_128_);
v_a6_boxed_142_ = lean_unbox_uint64(v_a6_130_);
lean_dec_ref(v_a6_130_);
v_a7_boxed_143_ = lean_unbox_uint64(v_a7_131_);
lean_dec_ref(v_a7_131_);
v_a9_boxed_144_ = lean_unbox_uint64(v_a9_133_);
lean_dec_ref(v_a9_133_);
v_a11_boxed_145_ = lean_unbox_uint64(v_a11_135_);
lean_dec_ref(v_a11_135_);
v_res_146_ = lasm_fastly_cache_replace_insert(v_a0_boxed_138_, v_a1_boxed_139_, v_a3_boxed_140_, v_a4_boxed_141_, v_a5_129_, v_a6_boxed_142_, v_a7_boxed_143_, v_a8_132_, v_a9_boxed_144_, v_a10_134_, v_a11_boxed_145_, v_a12_136_);
lean_dec_ref(v_a12_136_);
lean_dec_ref(v_a10_134_);
lean_dec_ref(v_a8_132_);
lean_dec_ref(v_a5_129_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceInsert(uint32_t v_handle_147_, uint32_t v_optionsMask_148_, lean_object* v_options_149_){
_start:
{
uint64_t v_maxAgeNs_151_; uint32_t v_requestHeaders_152_; lean_object* v_varyRule_153_; uint64_t v_initialAgeNs_154_; uint64_t v_staleWhileRevalidateNs_155_; lean_object* v_surrogateKeys_156_; uint64_t v_length_157_; lean_object* v_userMetadata_158_; uint64_t v_edgeMaxAgeNs_159_; lean_object* v_serviceId_160_; lean_object* v___x_161_; 
v_maxAgeNs_151_ = lean_ctor_get_uint64(v_options_149_, sizeof(void*)*4);
v_requestHeaders_152_ = lean_ctor_get_uint32(v_options_149_, sizeof(void*)*4 + 40);
v_varyRule_153_ = lean_ctor_get(v_options_149_, 0);
v_initialAgeNs_154_ = lean_ctor_get_uint64(v_options_149_, sizeof(void*)*4 + 8);
v_staleWhileRevalidateNs_155_ = lean_ctor_get_uint64(v_options_149_, sizeof(void*)*4 + 16);
v_surrogateKeys_156_ = lean_ctor_get(v_options_149_, 1);
v_length_157_ = lean_ctor_get_uint64(v_options_149_, sizeof(void*)*4 + 24);
v_userMetadata_158_ = lean_ctor_get(v_options_149_, 2);
v_edgeMaxAgeNs_159_ = lean_ctor_get_uint64(v_options_149_, sizeof(void*)*4 + 32);
v_serviceId_160_ = lean_ctor_get(v_options_149_, 3);
v___x_161_ = lasm_fastly_cache_replace_insert(v_handle_147_, v_optionsMask_148_, v_maxAgeNs_151_, v_requestHeaders_152_, v_varyRule_153_, v_initialAgeNs_154_, v_staleWhileRevalidateNs_155_, v_surrogateKeys_156_, v_length_157_, v_userMetadata_158_, v_edgeMaxAgeNs_159_, v_serviceId_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceInsert___boxed(lean_object* v_handle_162_, lean_object* v_optionsMask_163_, lean_object* v_options_164_, lean_object* v_a_165_){
_start:
{
uint32_t v_handle_boxed_166_; uint32_t v_optionsMask_boxed_167_; lean_object* v_res_168_; 
v_handle_boxed_166_ = lean_unbox_uint32(v_handle_162_);
lean_dec(v_handle_162_);
v_optionsMask_boxed_167_ = lean_unbox_uint32(v_optionsMask_163_);
lean_dec(v_optionsMask_163_);
v_res_168_ = l_Lasm_Fastly_Cache_replaceInsert(v_handle_boxed_166_, v_optionsMask_boxed_167_, v_options_164_);
lean_dec_ref(v_options_164_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetAgeNs___boxed(lean_object* v_handle_171_, lean_object* v_a_00___x40___internal___hyg_172_){
_start:
{
uint32_t v_handle_boxed_173_; lean_object* v_res_174_; 
v_handle_boxed_173_ = lean_unbox_uint32(v_handle_171_);
lean_dec(v_handle_171_);
v_res_174_ = lasm_fastly_cache_replace_get_age_ns(v_handle_boxed_173_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_replaceGetBodyFlat___boxed(lean_object* v_a0_180_, lean_object* v_a1_181_, lean_object* v_a3_182_, lean_object* v_a4_183_, lean_object* v_a_00___x40___internal___hyg_184_){
_start:
{
uint32_t v_a0_boxed_185_; uint32_t v_a1_boxed_186_; uint64_t v_a3_boxed_187_; uint64_t v_a4_boxed_188_; lean_object* v_res_189_; 
v_a0_boxed_185_ = lean_unbox_uint32(v_a0_180_);
lean_dec(v_a0_180_);
v_a1_boxed_186_ = lean_unbox_uint32(v_a1_181_);
lean_dec(v_a1_181_);
v_a3_boxed_187_ = lean_unbox_uint64(v_a3_182_);
lean_dec_ref(v_a3_182_);
v_a4_boxed_188_ = lean_unbox_uint64(v_a4_183_);
lean_dec_ref(v_a4_183_);
v_res_189_ = lasm_fastly_cache_replace_get_body(v_a0_boxed_185_, v_a1_boxed_186_, v_a3_boxed_187_, v_a4_boxed_188_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetBody(uint32_t v_handle_190_, uint32_t v_optionsMask_191_, lean_object* v_options_192_){
_start:
{
uint64_t v_from_194_; uint64_t v_to_195_; lean_object* v___x_196_; 
v_from_194_ = lean_ctor_get_uint64(v_options_192_, 0);
v_to_195_ = lean_ctor_get_uint64(v_options_192_, 8);
v___x_196_ = lasm_fastly_cache_replace_get_body(v_handle_190_, v_optionsMask_191_, v_from_194_, v_to_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetBody___boxed(lean_object* v_handle_197_, lean_object* v_optionsMask_198_, lean_object* v_options_199_, lean_object* v_a_200_){
_start:
{
uint32_t v_handle_boxed_201_; uint32_t v_optionsMask_boxed_202_; lean_object* v_res_203_; 
v_handle_boxed_201_ = lean_unbox_uint32(v_handle_197_);
lean_dec(v_handle_197_);
v_optionsMask_boxed_202_ = lean_unbox_uint32(v_optionsMask_198_);
lean_dec(v_optionsMask_198_);
v_res_203_ = l_Lasm_Fastly_Cache_replaceGetBody(v_handle_boxed_201_, v_optionsMask_boxed_202_, v_options_199_);
lean_dec_ref(v_options_199_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetHits___boxed(lean_object* v_handle_206_, lean_object* v_a_00___x40___internal___hyg_207_){
_start:
{
uint32_t v_handle_boxed_208_; lean_object* v_res_209_; 
v_handle_boxed_208_ = lean_unbox_uint32(v_handle_206_);
lean_dec(v_handle_206_);
v_res_209_ = lasm_fastly_cache_replace_get_hits(v_handle_boxed_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetLength___boxed(lean_object* v_handle_212_, lean_object* v_a_00___x40___internal___hyg_213_){
_start:
{
uint32_t v_handle_boxed_214_; lean_object* v_res_215_; 
v_handle_boxed_214_ = lean_unbox_uint32(v_handle_212_);
lean_dec(v_handle_212_);
v_res_215_ = lasm_fastly_cache_replace_get_length(v_handle_boxed_214_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetMaxAgeNs___boxed(lean_object* v_handle_218_, lean_object* v_a_00___x40___internal___hyg_219_){
_start:
{
uint32_t v_handle_boxed_220_; lean_object* v_res_221_; 
v_handle_boxed_220_ = lean_unbox_uint32(v_handle_218_);
lean_dec(v_handle_218_);
v_res_221_ = lasm_fastly_cache_replace_get_max_age_ns(v_handle_boxed_220_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetStaleWhileRevalidateNs___boxed(lean_object* v_handle_224_, lean_object* v_a_00___x40___internal___hyg_225_){
_start:
{
uint32_t v_handle_boxed_226_; lean_object* v_res_227_; 
v_handle_boxed_226_ = lean_unbox_uint32(v_handle_224_);
lean_dec(v_handle_224_);
v_res_227_ = lasm_fastly_cache_replace_get_stale_while_revalidate_ns(v_handle_boxed_226_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetState___boxed(lean_object* v_handle_230_, lean_object* v_a_00___x40___internal___hyg_231_){
_start:
{
uint32_t v_handle_boxed_232_; lean_object* v_res_233_; 
v_handle_boxed_232_ = lean_unbox_uint32(v_handle_230_);
lean_dec(v_handle_230_);
v_res_233_ = lasm_fastly_cache_replace_get_state(v_handle_boxed_232_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_replaceGetUserMetadata___boxed(lean_object* v_handle_236_, lean_object* v_a_00___x40___internal___hyg_237_){
_start:
{
uint32_t v_handle_boxed_238_; lean_object* v_res_239_; 
v_handle_boxed_238_ = lean_unbox_uint32(v_handle_236_);
lean_dec(v_handle_236_);
v_res_239_ = lasm_fastly_cache_replace_get_user_metadata(v_handle_boxed_238_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_transactionLookupFlat___boxed(lean_object* v_a0_245_, lean_object* v_a1_246_, lean_object* v_a3_247_, lean_object* v_a4_248_, lean_object* v_a_00___x40___internal___hyg_249_){
_start:
{
uint32_t v_a1_boxed_250_; uint32_t v_a3_boxed_251_; lean_object* v_res_252_; 
v_a1_boxed_250_ = lean_unbox_uint32(v_a1_246_);
lean_dec(v_a1_246_);
v_a3_boxed_251_ = lean_unbox_uint32(v_a3_247_);
lean_dec(v_a3_247_);
v_res_252_ = lasm_fastly_cache_transaction_lookup(v_a0_245_, v_a1_boxed_250_, v_a3_boxed_251_, v_a4_248_);
lean_dec_ref(v_a4_248_);
lean_dec_ref(v_a0_245_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionLookup(lean_object* v_cacheKey_253_, uint32_t v_optionsMask_254_, lean_object* v_options_255_){
_start:
{
uint32_t v_requestHeaders_257_; lean_object* v_serviceId_258_; lean_object* v___x_259_; 
v_requestHeaders_257_ = lean_ctor_get_uint32(v_options_255_, sizeof(void*)*1);
v_serviceId_258_ = lean_ctor_get(v_options_255_, 0);
v___x_259_ = lasm_fastly_cache_transaction_lookup(v_cacheKey_253_, v_optionsMask_254_, v_requestHeaders_257_, v_serviceId_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionLookup___boxed(lean_object* v_cacheKey_260_, lean_object* v_optionsMask_261_, lean_object* v_options_262_, lean_object* v_a_263_){
_start:
{
uint32_t v_optionsMask_boxed_264_; lean_object* v_res_265_; 
v_optionsMask_boxed_264_ = lean_unbox_uint32(v_optionsMask_261_);
lean_dec(v_optionsMask_261_);
v_res_265_ = l_Lasm_Fastly_Cache_transactionLookup(v_cacheKey_260_, v_optionsMask_boxed_264_, v_options_262_);
lean_dec_ref(v_options_262_);
lean_dec_ref(v_cacheKey_260_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_transactionLookupAsyncFlat___boxed(lean_object* v_a0_271_, lean_object* v_a1_272_, lean_object* v_a3_273_, lean_object* v_a4_274_, lean_object* v_a_00___x40___internal___hyg_275_){
_start:
{
uint32_t v_a1_boxed_276_; uint32_t v_a3_boxed_277_; lean_object* v_res_278_; 
v_a1_boxed_276_ = lean_unbox_uint32(v_a1_272_);
lean_dec(v_a1_272_);
v_a3_boxed_277_ = lean_unbox_uint32(v_a3_273_);
lean_dec(v_a3_273_);
v_res_278_ = lasm_fastly_cache_transaction_lookup_async(v_a0_271_, v_a1_boxed_276_, v_a3_boxed_277_, v_a4_274_);
lean_dec_ref(v_a4_274_);
lean_dec_ref(v_a0_271_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionLookupAsync(lean_object* v_cacheKey_279_, uint32_t v_optionsMask_280_, lean_object* v_options_281_){
_start:
{
uint32_t v_requestHeaders_283_; lean_object* v_serviceId_284_; lean_object* v___x_285_; 
v_requestHeaders_283_ = lean_ctor_get_uint32(v_options_281_, sizeof(void*)*1);
v_serviceId_284_ = lean_ctor_get(v_options_281_, 0);
v___x_285_ = lasm_fastly_cache_transaction_lookup_async(v_cacheKey_279_, v_optionsMask_280_, v_requestHeaders_283_, v_serviceId_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionLookupAsync___boxed(lean_object* v_cacheKey_286_, lean_object* v_optionsMask_287_, lean_object* v_options_288_, lean_object* v_a_289_){
_start:
{
uint32_t v_optionsMask_boxed_290_; lean_object* v_res_291_; 
v_optionsMask_boxed_290_ = lean_unbox_uint32(v_optionsMask_287_);
lean_dec(v_optionsMask_287_);
v_res_291_ = l_Lasm_Fastly_Cache_transactionLookupAsync(v_cacheKey_286_, v_optionsMask_boxed_290_, v_options_288_);
lean_dec_ref(v_options_288_);
lean_dec_ref(v_cacheKey_286_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_cacheBusyHandleWait___boxed(lean_object* v_busyHandle_294_, lean_object* v_a_00___x40___internal___hyg_295_){
_start:
{
uint32_t v_busyHandle_boxed_296_; lean_object* v_res_297_; 
v_busyHandle_boxed_296_ = lean_unbox_uint32(v_busyHandle_294_);
lean_dec(v_busyHandle_294_);
v_res_297_ = lasm_fastly_cache_cache_busy_handle_wait(v_busyHandle_boxed_296_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_transactionInsertFlat___boxed(lean_object* v_a0_311_, lean_object* v_a1_312_, lean_object* v_a3_313_, lean_object* v_a4_314_, lean_object* v_a5_315_, lean_object* v_a6_316_, lean_object* v_a7_317_, lean_object* v_a8_318_, lean_object* v_a9_319_, lean_object* v_a10_320_, lean_object* v_a11_321_, lean_object* v_a12_322_, lean_object* v_a_00___x40___internal___hyg_323_){
_start:
{
uint32_t v_a0_boxed_324_; uint32_t v_a1_boxed_325_; uint64_t v_a3_boxed_326_; uint32_t v_a4_boxed_327_; uint64_t v_a6_boxed_328_; uint64_t v_a7_boxed_329_; uint64_t v_a9_boxed_330_; uint64_t v_a11_boxed_331_; lean_object* v_res_332_; 
v_a0_boxed_324_ = lean_unbox_uint32(v_a0_311_);
lean_dec(v_a0_311_);
v_a1_boxed_325_ = lean_unbox_uint32(v_a1_312_);
lean_dec(v_a1_312_);
v_a3_boxed_326_ = lean_unbox_uint64(v_a3_313_);
lean_dec_ref(v_a3_313_);
v_a4_boxed_327_ = lean_unbox_uint32(v_a4_314_);
lean_dec(v_a4_314_);
v_a6_boxed_328_ = lean_unbox_uint64(v_a6_316_);
lean_dec_ref(v_a6_316_);
v_a7_boxed_329_ = lean_unbox_uint64(v_a7_317_);
lean_dec_ref(v_a7_317_);
v_a9_boxed_330_ = lean_unbox_uint64(v_a9_319_);
lean_dec_ref(v_a9_319_);
v_a11_boxed_331_ = lean_unbox_uint64(v_a11_321_);
lean_dec_ref(v_a11_321_);
v_res_332_ = lasm_fastly_cache_transaction_insert(v_a0_boxed_324_, v_a1_boxed_325_, v_a3_boxed_326_, v_a4_boxed_327_, v_a5_315_, v_a6_boxed_328_, v_a7_boxed_329_, v_a8_318_, v_a9_boxed_330_, v_a10_320_, v_a11_boxed_331_, v_a12_322_);
lean_dec_ref(v_a12_322_);
lean_dec_ref(v_a10_320_);
lean_dec_ref(v_a8_318_);
lean_dec_ref(v_a5_315_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionInsert(uint32_t v_handle_333_, uint32_t v_optionsMask_334_, lean_object* v_options_335_){
_start:
{
uint64_t v_maxAgeNs_337_; uint32_t v_requestHeaders_338_; lean_object* v_varyRule_339_; uint64_t v_initialAgeNs_340_; uint64_t v_staleWhileRevalidateNs_341_; lean_object* v_surrogateKeys_342_; uint64_t v_length_343_; lean_object* v_userMetadata_344_; uint64_t v_edgeMaxAgeNs_345_; lean_object* v_serviceId_346_; lean_object* v___x_347_; 
v_maxAgeNs_337_ = lean_ctor_get_uint64(v_options_335_, sizeof(void*)*4);
v_requestHeaders_338_ = lean_ctor_get_uint32(v_options_335_, sizeof(void*)*4 + 40);
v_varyRule_339_ = lean_ctor_get(v_options_335_, 0);
v_initialAgeNs_340_ = lean_ctor_get_uint64(v_options_335_, sizeof(void*)*4 + 8);
v_staleWhileRevalidateNs_341_ = lean_ctor_get_uint64(v_options_335_, sizeof(void*)*4 + 16);
v_surrogateKeys_342_ = lean_ctor_get(v_options_335_, 1);
v_length_343_ = lean_ctor_get_uint64(v_options_335_, sizeof(void*)*4 + 24);
v_userMetadata_344_ = lean_ctor_get(v_options_335_, 2);
v_edgeMaxAgeNs_345_ = lean_ctor_get_uint64(v_options_335_, sizeof(void*)*4 + 32);
v_serviceId_346_ = lean_ctor_get(v_options_335_, 3);
v___x_347_ = lasm_fastly_cache_transaction_insert(v_handle_333_, v_optionsMask_334_, v_maxAgeNs_337_, v_requestHeaders_338_, v_varyRule_339_, v_initialAgeNs_340_, v_staleWhileRevalidateNs_341_, v_surrogateKeys_342_, v_length_343_, v_userMetadata_344_, v_edgeMaxAgeNs_345_, v_serviceId_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionInsert___boxed(lean_object* v_handle_348_, lean_object* v_optionsMask_349_, lean_object* v_options_350_, lean_object* v_a_351_){
_start:
{
uint32_t v_handle_boxed_352_; uint32_t v_optionsMask_boxed_353_; lean_object* v_res_354_; 
v_handle_boxed_352_ = lean_unbox_uint32(v_handle_348_);
lean_dec(v_handle_348_);
v_optionsMask_boxed_353_ = lean_unbox_uint32(v_optionsMask_349_);
lean_dec(v_optionsMask_349_);
v_res_354_ = l_Lasm_Fastly_Cache_transactionInsert(v_handle_boxed_352_, v_optionsMask_boxed_353_, v_options_350_);
lean_dec_ref(v_options_350_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_transactionInsertAndStreamBackFlat___boxed(lean_object* v_a0_368_, lean_object* v_a1_369_, lean_object* v_a3_370_, lean_object* v_a4_371_, lean_object* v_a5_372_, lean_object* v_a6_373_, lean_object* v_a7_374_, lean_object* v_a8_375_, lean_object* v_a9_376_, lean_object* v_a10_377_, lean_object* v_a11_378_, lean_object* v_a12_379_, lean_object* v_a_00___x40___internal___hyg_380_){
_start:
{
uint32_t v_a0_boxed_381_; uint32_t v_a1_boxed_382_; uint64_t v_a3_boxed_383_; uint32_t v_a4_boxed_384_; uint64_t v_a6_boxed_385_; uint64_t v_a7_boxed_386_; uint64_t v_a9_boxed_387_; uint64_t v_a11_boxed_388_; lean_object* v_res_389_; 
v_a0_boxed_381_ = lean_unbox_uint32(v_a0_368_);
lean_dec(v_a0_368_);
v_a1_boxed_382_ = lean_unbox_uint32(v_a1_369_);
lean_dec(v_a1_369_);
v_a3_boxed_383_ = lean_unbox_uint64(v_a3_370_);
lean_dec_ref(v_a3_370_);
v_a4_boxed_384_ = lean_unbox_uint32(v_a4_371_);
lean_dec(v_a4_371_);
v_a6_boxed_385_ = lean_unbox_uint64(v_a6_373_);
lean_dec_ref(v_a6_373_);
v_a7_boxed_386_ = lean_unbox_uint64(v_a7_374_);
lean_dec_ref(v_a7_374_);
v_a9_boxed_387_ = lean_unbox_uint64(v_a9_376_);
lean_dec_ref(v_a9_376_);
v_a11_boxed_388_ = lean_unbox_uint64(v_a11_378_);
lean_dec_ref(v_a11_378_);
v_res_389_ = lasm_fastly_cache_transaction_insert_and_stream_back(v_a0_boxed_381_, v_a1_boxed_382_, v_a3_boxed_383_, v_a4_boxed_384_, v_a5_372_, v_a6_boxed_385_, v_a7_boxed_386_, v_a8_375_, v_a9_boxed_387_, v_a10_377_, v_a11_boxed_388_, v_a12_379_);
lean_dec_ref(v_a12_379_);
lean_dec_ref(v_a10_377_);
lean_dec_ref(v_a8_375_);
lean_dec_ref(v_a5_372_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionInsertAndStreamBack(uint32_t v_handle_390_, uint32_t v_optionsMask_391_, lean_object* v_options_392_){
_start:
{
uint64_t v_maxAgeNs_394_; uint32_t v_requestHeaders_395_; lean_object* v_varyRule_396_; uint64_t v_initialAgeNs_397_; uint64_t v_staleWhileRevalidateNs_398_; lean_object* v_surrogateKeys_399_; uint64_t v_length_400_; lean_object* v_userMetadata_401_; uint64_t v_edgeMaxAgeNs_402_; lean_object* v_serviceId_403_; lean_object* v___x_404_; 
v_maxAgeNs_394_ = lean_ctor_get_uint64(v_options_392_, sizeof(void*)*4);
v_requestHeaders_395_ = lean_ctor_get_uint32(v_options_392_, sizeof(void*)*4 + 40);
v_varyRule_396_ = lean_ctor_get(v_options_392_, 0);
v_initialAgeNs_397_ = lean_ctor_get_uint64(v_options_392_, sizeof(void*)*4 + 8);
v_staleWhileRevalidateNs_398_ = lean_ctor_get_uint64(v_options_392_, sizeof(void*)*4 + 16);
v_surrogateKeys_399_ = lean_ctor_get(v_options_392_, 1);
v_length_400_ = lean_ctor_get_uint64(v_options_392_, sizeof(void*)*4 + 24);
v_userMetadata_401_ = lean_ctor_get(v_options_392_, 2);
v_edgeMaxAgeNs_402_ = lean_ctor_get_uint64(v_options_392_, sizeof(void*)*4 + 32);
v_serviceId_403_ = lean_ctor_get(v_options_392_, 3);
v___x_404_ = lasm_fastly_cache_transaction_insert_and_stream_back(v_handle_390_, v_optionsMask_391_, v_maxAgeNs_394_, v_requestHeaders_395_, v_varyRule_396_, v_initialAgeNs_397_, v_staleWhileRevalidateNs_398_, v_surrogateKeys_399_, v_length_400_, v_userMetadata_401_, v_edgeMaxAgeNs_402_, v_serviceId_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionInsertAndStreamBack___boxed(lean_object* v_handle_405_, lean_object* v_optionsMask_406_, lean_object* v_options_407_, lean_object* v_a_408_){
_start:
{
uint32_t v_handle_boxed_409_; uint32_t v_optionsMask_boxed_410_; lean_object* v_res_411_; 
v_handle_boxed_409_ = lean_unbox_uint32(v_handle_405_);
lean_dec(v_handle_405_);
v_optionsMask_boxed_410_ = lean_unbox_uint32(v_optionsMask_406_);
lean_dec(v_optionsMask_406_);
v_res_411_ = l_Lasm_Fastly_Cache_transactionInsertAndStreamBack(v_handle_boxed_409_, v_optionsMask_boxed_410_, v_options_407_);
lean_dec_ref(v_options_407_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_transactionUpdateFlat___boxed(lean_object* v_a0_425_, lean_object* v_a1_426_, lean_object* v_a3_427_, lean_object* v_a4_428_, lean_object* v_a5_429_, lean_object* v_a6_430_, lean_object* v_a7_431_, lean_object* v_a8_432_, lean_object* v_a9_433_, lean_object* v_a10_434_, lean_object* v_a11_435_, lean_object* v_a12_436_, lean_object* v_a_00___x40___internal___hyg_437_){
_start:
{
uint32_t v_a0_boxed_438_; uint32_t v_a1_boxed_439_; uint64_t v_a3_boxed_440_; uint32_t v_a4_boxed_441_; uint64_t v_a6_boxed_442_; uint64_t v_a7_boxed_443_; uint64_t v_a9_boxed_444_; uint64_t v_a11_boxed_445_; lean_object* v_res_446_; 
v_a0_boxed_438_ = lean_unbox_uint32(v_a0_425_);
lean_dec(v_a0_425_);
v_a1_boxed_439_ = lean_unbox_uint32(v_a1_426_);
lean_dec(v_a1_426_);
v_a3_boxed_440_ = lean_unbox_uint64(v_a3_427_);
lean_dec_ref(v_a3_427_);
v_a4_boxed_441_ = lean_unbox_uint32(v_a4_428_);
lean_dec(v_a4_428_);
v_a6_boxed_442_ = lean_unbox_uint64(v_a6_430_);
lean_dec_ref(v_a6_430_);
v_a7_boxed_443_ = lean_unbox_uint64(v_a7_431_);
lean_dec_ref(v_a7_431_);
v_a9_boxed_444_ = lean_unbox_uint64(v_a9_433_);
lean_dec_ref(v_a9_433_);
v_a11_boxed_445_ = lean_unbox_uint64(v_a11_435_);
lean_dec_ref(v_a11_435_);
v_res_446_ = lasm_fastly_cache_transaction_update(v_a0_boxed_438_, v_a1_boxed_439_, v_a3_boxed_440_, v_a4_boxed_441_, v_a5_429_, v_a6_boxed_442_, v_a7_boxed_443_, v_a8_432_, v_a9_boxed_444_, v_a10_434_, v_a11_boxed_445_, v_a12_436_);
lean_dec_ref(v_a12_436_);
lean_dec_ref(v_a10_434_);
lean_dec_ref(v_a8_432_);
lean_dec_ref(v_a5_429_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionUpdate(uint32_t v_handle_447_, uint32_t v_optionsMask_448_, lean_object* v_options_449_){
_start:
{
uint64_t v_maxAgeNs_451_; uint32_t v_requestHeaders_452_; lean_object* v_varyRule_453_; uint64_t v_initialAgeNs_454_; uint64_t v_staleWhileRevalidateNs_455_; lean_object* v_surrogateKeys_456_; uint64_t v_length_457_; lean_object* v_userMetadata_458_; uint64_t v_edgeMaxAgeNs_459_; lean_object* v_serviceId_460_; lean_object* v___x_461_; 
v_maxAgeNs_451_ = lean_ctor_get_uint64(v_options_449_, sizeof(void*)*4);
v_requestHeaders_452_ = lean_ctor_get_uint32(v_options_449_, sizeof(void*)*4 + 40);
v_varyRule_453_ = lean_ctor_get(v_options_449_, 0);
v_initialAgeNs_454_ = lean_ctor_get_uint64(v_options_449_, sizeof(void*)*4 + 8);
v_staleWhileRevalidateNs_455_ = lean_ctor_get_uint64(v_options_449_, sizeof(void*)*4 + 16);
v_surrogateKeys_456_ = lean_ctor_get(v_options_449_, 1);
v_length_457_ = lean_ctor_get_uint64(v_options_449_, sizeof(void*)*4 + 24);
v_userMetadata_458_ = lean_ctor_get(v_options_449_, 2);
v_edgeMaxAgeNs_459_ = lean_ctor_get_uint64(v_options_449_, sizeof(void*)*4 + 32);
v_serviceId_460_ = lean_ctor_get(v_options_449_, 3);
v___x_461_ = lasm_fastly_cache_transaction_update(v_handle_447_, v_optionsMask_448_, v_maxAgeNs_451_, v_requestHeaders_452_, v_varyRule_453_, v_initialAgeNs_454_, v_staleWhileRevalidateNs_455_, v_surrogateKeys_456_, v_length_457_, v_userMetadata_458_, v_edgeMaxAgeNs_459_, v_serviceId_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionUpdate___boxed(lean_object* v_handle_462_, lean_object* v_optionsMask_463_, lean_object* v_options_464_, lean_object* v_a_465_){
_start:
{
uint32_t v_handle_boxed_466_; uint32_t v_optionsMask_boxed_467_; lean_object* v_res_468_; 
v_handle_boxed_466_ = lean_unbox_uint32(v_handle_462_);
lean_dec(v_handle_462_);
v_optionsMask_boxed_467_ = lean_unbox_uint32(v_optionsMask_463_);
lean_dec(v_optionsMask_463_);
v_res_468_ = l_Lasm_Fastly_Cache_transactionUpdate(v_handle_boxed_466_, v_optionsMask_boxed_467_, v_options_464_);
lean_dec_ref(v_options_464_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_transactionCancel___boxed(lean_object* v_handle_471_, lean_object* v_a_00___x40___internal___hyg_472_){
_start:
{
uint32_t v_handle_boxed_473_; lean_object* v_res_474_; 
v_handle_boxed_473_ = lean_unbox_uint32(v_handle_471_);
lean_dec(v_handle_471_);
v_res_474_ = lasm_fastly_cache_transaction_cancel(v_handle_boxed_473_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_closeBusy___boxed(lean_object* v_handle_477_, lean_object* v_a_00___x40___internal___hyg_478_){
_start:
{
uint32_t v_handle_boxed_479_; lean_object* v_res_480_; 
v_handle_boxed_479_ = lean_unbox_uint32(v_handle_477_);
lean_dec(v_handle_477_);
v_res_480_ = lasm_fastly_cache_close_busy(v_handle_boxed_479_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_close___boxed(lean_object* v_handle_483_, lean_object* v_a_00___x40___internal___hyg_484_){
_start:
{
uint32_t v_handle_boxed_485_; lean_object* v_res_486_; 
v_handle_boxed_485_ = lean_unbox_uint32(v_handle_483_);
lean_dec(v_handle_483_);
v_res_486_ = lasm_fastly_cache_close(v_handle_boxed_485_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getState___boxed(lean_object* v_handle_489_, lean_object* v_a_00___x40___internal___hyg_490_){
_start:
{
uint32_t v_handle_boxed_491_; lean_object* v_res_492_; 
v_handle_boxed_491_ = lean_unbox_uint32(v_handle_489_);
lean_dec(v_handle_489_);
v_res_492_ = lasm_fastly_cache_get_state(v_handle_boxed_491_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getUserMetadata___boxed(lean_object* v_handle_495_, lean_object* v_a_00___x40___internal___hyg_496_){
_start:
{
uint32_t v_handle_boxed_497_; lean_object* v_res_498_; 
v_handle_boxed_497_ = lean_unbox_uint32(v_handle_495_);
lean_dec(v_handle_495_);
v_res_498_ = lasm_fastly_cache_get_user_metadata(v_handle_boxed_497_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_Cache_0__Lasm_Fastly_Cache_getBodyFlat___boxed(lean_object* v_a0_504_, lean_object* v_a1_505_, lean_object* v_a3_506_, lean_object* v_a4_507_, lean_object* v_a_00___x40___internal___hyg_508_){
_start:
{
uint32_t v_a0_boxed_509_; uint32_t v_a1_boxed_510_; uint64_t v_a3_boxed_511_; uint64_t v_a4_boxed_512_; lean_object* v_res_513_; 
v_a0_boxed_509_ = lean_unbox_uint32(v_a0_504_);
lean_dec(v_a0_504_);
v_a1_boxed_510_ = lean_unbox_uint32(v_a1_505_);
lean_dec(v_a1_505_);
v_a3_boxed_511_ = lean_unbox_uint64(v_a3_506_);
lean_dec_ref(v_a3_506_);
v_a4_boxed_512_ = lean_unbox_uint64(v_a4_507_);
lean_dec_ref(v_a4_507_);
v_res_513_ = lasm_fastly_cache_get_body(v_a0_boxed_509_, v_a1_boxed_510_, v_a3_boxed_511_, v_a4_boxed_512_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getBody(uint32_t v_handle_514_, uint32_t v_optionsMask_515_, lean_object* v_options_516_){
_start:
{
uint64_t v_from_518_; uint64_t v_to_519_; lean_object* v___x_520_; 
v_from_518_ = lean_ctor_get_uint64(v_options_516_, 0);
v_to_519_ = lean_ctor_get_uint64(v_options_516_, 8);
v___x_520_ = lasm_fastly_cache_get_body(v_handle_514_, v_optionsMask_515_, v_from_518_, v_to_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getBody___boxed(lean_object* v_handle_521_, lean_object* v_optionsMask_522_, lean_object* v_options_523_, lean_object* v_a_524_){
_start:
{
uint32_t v_handle_boxed_525_; uint32_t v_optionsMask_boxed_526_; lean_object* v_res_527_; 
v_handle_boxed_525_ = lean_unbox_uint32(v_handle_521_);
lean_dec(v_handle_521_);
v_optionsMask_boxed_526_ = lean_unbox_uint32(v_optionsMask_522_);
lean_dec(v_optionsMask_522_);
v_res_527_ = l_Lasm_Fastly_Cache_getBody(v_handle_boxed_525_, v_optionsMask_boxed_526_, v_options_523_);
lean_dec_ref(v_options_523_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getLength___boxed(lean_object* v_handle_530_, lean_object* v_a_00___x40___internal___hyg_531_){
_start:
{
uint32_t v_handle_boxed_532_; lean_object* v_res_533_; 
v_handle_boxed_532_ = lean_unbox_uint32(v_handle_530_);
lean_dec(v_handle_530_);
v_res_533_ = lasm_fastly_cache_get_length(v_handle_boxed_532_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getMaxAgeNs___boxed(lean_object* v_handle_536_, lean_object* v_a_00___x40___internal___hyg_537_){
_start:
{
uint32_t v_handle_boxed_538_; lean_object* v_res_539_; 
v_handle_boxed_538_ = lean_unbox_uint32(v_handle_536_);
lean_dec(v_handle_536_);
v_res_539_ = lasm_fastly_cache_get_max_age_ns(v_handle_boxed_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getStaleWhileRevalidateNs___boxed(lean_object* v_handle_542_, lean_object* v_a_00___x40___internal___hyg_543_){
_start:
{
uint32_t v_handle_boxed_544_; lean_object* v_res_545_; 
v_handle_boxed_544_ = lean_unbox_uint32(v_handle_542_);
lean_dec(v_handle_542_);
v_res_545_ = lasm_fastly_cache_get_stale_while_revalidate_ns(v_handle_boxed_544_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getAgeNs___boxed(lean_object* v_handle_548_, lean_object* v_a_00___x40___internal___hyg_549_){
_start:
{
uint32_t v_handle_boxed_550_; lean_object* v_res_551_; 
v_handle_boxed_550_ = lean_unbox_uint32(v_handle_548_);
lean_dec(v_handle_548_);
v_res_551_ = lasm_fastly_cache_get_age_ns(v_handle_boxed_550_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Cache_getHits___boxed(lean_object* v_handle_554_, lean_object* v_a_00___x40___internal___hyg_555_){
_start:
{
uint32_t v_handle_boxed_556_; lean_object* v_res_557_; 
v_handle_boxed_556_ = lean_unbox_uint32(v_handle_554_);
lean_dec(v_handle_554_);
v_res_557_ = lasm_fastly_cache_get_hits(v_handle_boxed_556_);
return v_res_557_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_Cache(uint8_t builtin) {
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
