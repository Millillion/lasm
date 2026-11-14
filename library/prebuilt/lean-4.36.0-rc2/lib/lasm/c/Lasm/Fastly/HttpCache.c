// Lean compiler output
// Module: Lasm.Fastly.HttpCache
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
lean_object* lasm_fastly_http_cache_is_request_cacheable(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_isRequestCacheable___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_suggested_cache_key(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getSuggestedCacheKey___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_lookup(uint32_t, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_lookupFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_lookup(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_lookup___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_transaction_lookup(uint32_t, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionLookupFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionLookup(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionLookup___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_transaction_insert(uint32_t, uint32_t, uint32_t, uint64_t, lean_object*, uint64_t, uint64_t, lean_object*, uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionInsertFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionInsert(uint32_t, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionInsert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_transaction_insert_and_stream_back(uint32_t, uint32_t, uint32_t, uint64_t, lean_object*, uint64_t, uint64_t, lean_object*, uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionInsertAndStreamBackFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionInsertAndStreamBack(uint32_t, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionInsertAndStreamBack___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_transaction_update(uint32_t, uint32_t, uint32_t, uint64_t, lean_object*, uint64_t, uint64_t, lean_object*, uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionUpdateFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionUpdate(uint32_t, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionUpdate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_transaction_update_and_return_fresh(uint32_t, uint32_t, uint32_t, uint64_t, lean_object*, uint64_t, uint64_t, lean_object*, uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionUpdateAndReturnFreshFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionUpdateAndReturnFresh(uint32_t, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionUpdateAndReturnFresh___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_transaction_choose_stale(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionChooseStale___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_transaction_record_not_cacheable(uint32_t, uint32_t, uint64_t, lean_object*, uint64_t, uint64_t, lean_object*, uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionRecordNotCacheableFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionRecordNotCacheable(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionRecordNotCacheable___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_transaction_abandon(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionAbandon___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_close(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_close___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_suggested_backend_request(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getSuggestedBackendRequest___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_prepare_response_for_storage(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_prepareResponseForStorage___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_found_response(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getFoundResponse___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_state(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getState___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_length(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getLength___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_max_age_ns(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getMaxAgeNs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_stale_while_revalidate_ns(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getStaleWhileRevalidateNs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_stale_if_error_ns(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getStaleIfErrorNs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_age_ns(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getAgeNs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_hits(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getHits___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_sensitive_data(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getSensitiveData___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_surrogate_keys(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getSurrogateKeys___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_cache_get_vary_rule(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getVaryRule___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_isRequestCacheable___boxed(lean_object* v_reqHandle_3_, lean_object* v_a_00___x40___internal___hyg_4_){
_start:
{
uint32_t v_reqHandle_boxed_5_; lean_object* v_res_6_; 
v_reqHandle_boxed_5_ = lean_unbox_uint32(v_reqHandle_3_);
lean_dec(v_reqHandle_3_);
v_res_6_ = lasm_fastly_http_cache_is_request_cacheable(v_reqHandle_boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getSuggestedCacheKey___boxed(lean_object* v_reqHandle_9_, lean_object* v_a_00___x40___internal___hyg_10_){
_start:
{
uint32_t v_reqHandle_boxed_11_; lean_object* v_res_12_; 
v_reqHandle_boxed_11_ = lean_unbox_uint32(v_reqHandle_9_);
lean_dec(v_reqHandle_9_);
v_res_12_ = lasm_fastly_http_cache_get_suggested_cache_key(v_reqHandle_boxed_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_lookupFlat___boxed(lean_object* v_a0_18_, lean_object* v_a1_19_, lean_object* v_a3_20_, lean_object* v_a4_21_, lean_object* v_a_00___x40___internal___hyg_22_){
_start:
{
uint32_t v_a0_boxed_23_; uint32_t v_a1_boxed_24_; lean_object* v_res_25_; 
v_a0_boxed_23_ = lean_unbox_uint32(v_a0_18_);
lean_dec(v_a0_18_);
v_a1_boxed_24_ = lean_unbox_uint32(v_a1_19_);
lean_dec(v_a1_19_);
v_res_25_ = lasm_fastly_http_cache_lookup(v_a0_boxed_23_, v_a1_boxed_24_, v_a3_20_, v_a4_21_);
lean_dec_ref(v_a4_21_);
lean_dec_ref(v_a3_20_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_lookup(uint32_t v_reqHandle_26_, uint32_t v_optionsMask_27_, lean_object* v_options_28_){
_start:
{
lean_object* v_overrideKey_30_; lean_object* v_backendName_31_; lean_object* v___x_32_; 
v_overrideKey_30_ = lean_ctor_get(v_options_28_, 0);
v_backendName_31_ = lean_ctor_get(v_options_28_, 1);
v___x_32_ = lasm_fastly_http_cache_lookup(v_reqHandle_26_, v_optionsMask_27_, v_overrideKey_30_, v_backendName_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_lookup___boxed(lean_object* v_reqHandle_33_, lean_object* v_optionsMask_34_, lean_object* v_options_35_, lean_object* v_a_36_){
_start:
{
uint32_t v_reqHandle_boxed_37_; uint32_t v_optionsMask_boxed_38_; lean_object* v_res_39_; 
v_reqHandle_boxed_37_ = lean_unbox_uint32(v_reqHandle_33_);
lean_dec(v_reqHandle_33_);
v_optionsMask_boxed_38_ = lean_unbox_uint32(v_optionsMask_34_);
lean_dec(v_optionsMask_34_);
v_res_39_ = l_Lasm_Fastly_HttpCache_lookup(v_reqHandle_boxed_37_, v_optionsMask_boxed_38_, v_options_35_);
lean_dec_ref(v_options_35_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionLookupFlat___boxed(lean_object* v_a0_45_, lean_object* v_a1_46_, lean_object* v_a3_47_, lean_object* v_a4_48_, lean_object* v_a_00___x40___internal___hyg_49_){
_start:
{
uint32_t v_a0_boxed_50_; uint32_t v_a1_boxed_51_; lean_object* v_res_52_; 
v_a0_boxed_50_ = lean_unbox_uint32(v_a0_45_);
lean_dec(v_a0_45_);
v_a1_boxed_51_ = lean_unbox_uint32(v_a1_46_);
lean_dec(v_a1_46_);
v_res_52_ = lasm_fastly_http_cache_transaction_lookup(v_a0_boxed_50_, v_a1_boxed_51_, v_a3_47_, v_a4_48_);
lean_dec_ref(v_a4_48_);
lean_dec_ref(v_a3_47_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionLookup(uint32_t v_reqHandle_53_, uint32_t v_optionsMask_54_, lean_object* v_options_55_){
_start:
{
lean_object* v_overrideKey_57_; lean_object* v_backendName_58_; lean_object* v___x_59_; 
v_overrideKey_57_ = lean_ctor_get(v_options_55_, 0);
v_backendName_58_ = lean_ctor_get(v_options_55_, 1);
v___x_59_ = lasm_fastly_http_cache_transaction_lookup(v_reqHandle_53_, v_optionsMask_54_, v_overrideKey_57_, v_backendName_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionLookup___boxed(lean_object* v_reqHandle_60_, lean_object* v_optionsMask_61_, lean_object* v_options_62_, lean_object* v_a_63_){
_start:
{
uint32_t v_reqHandle_boxed_64_; uint32_t v_optionsMask_boxed_65_; lean_object* v_res_66_; 
v_reqHandle_boxed_64_ = lean_unbox_uint32(v_reqHandle_60_);
lean_dec(v_reqHandle_60_);
v_optionsMask_boxed_65_ = lean_unbox_uint32(v_optionsMask_61_);
lean_dec(v_optionsMask_61_);
v_res_66_ = l_Lasm_Fastly_HttpCache_transactionLookup(v_reqHandle_boxed_64_, v_optionsMask_boxed_65_, v_options_62_);
lean_dec_ref(v_options_62_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionInsertFlat___boxed(lean_object* v_a0_78_, lean_object* v_a1_79_, lean_object* v_a2_80_, lean_object* v_a4_81_, lean_object* v_a5_82_, lean_object* v_a6_83_, lean_object* v_a7_84_, lean_object* v_a8_85_, lean_object* v_a9_86_, lean_object* v_a10_87_, lean_object* v_a_00___x40___internal___hyg_88_){
_start:
{
uint32_t v_a0_boxed_89_; uint32_t v_a1_boxed_90_; uint32_t v_a2_boxed_91_; uint64_t v_a4_boxed_92_; uint64_t v_a6_boxed_93_; uint64_t v_a7_boxed_94_; uint64_t v_a9_boxed_95_; uint64_t v_a10_boxed_96_; lean_object* v_res_97_; 
v_a0_boxed_89_ = lean_unbox_uint32(v_a0_78_);
lean_dec(v_a0_78_);
v_a1_boxed_90_ = lean_unbox_uint32(v_a1_79_);
lean_dec(v_a1_79_);
v_a2_boxed_91_ = lean_unbox_uint32(v_a2_80_);
lean_dec(v_a2_80_);
v_a4_boxed_92_ = lean_unbox_uint64(v_a4_81_);
lean_dec_ref(v_a4_81_);
v_a6_boxed_93_ = lean_unbox_uint64(v_a6_83_);
lean_dec_ref(v_a6_83_);
v_a7_boxed_94_ = lean_unbox_uint64(v_a7_84_);
lean_dec_ref(v_a7_84_);
v_a9_boxed_95_ = lean_unbox_uint64(v_a9_86_);
lean_dec_ref(v_a9_86_);
v_a10_boxed_96_ = lean_unbox_uint64(v_a10_87_);
lean_dec_ref(v_a10_87_);
v_res_97_ = lasm_fastly_http_cache_transaction_insert(v_a0_boxed_89_, v_a1_boxed_90_, v_a2_boxed_91_, v_a4_boxed_92_, v_a5_82_, v_a6_boxed_93_, v_a7_boxed_94_, v_a8_85_, v_a9_boxed_95_, v_a10_boxed_96_);
lean_dec_ref(v_a8_85_);
lean_dec_ref(v_a5_82_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionInsert(uint32_t v_handle_98_, uint32_t v_respHandle_99_, uint32_t v_optionsMask_100_, lean_object* v_options_101_){
_start:
{
uint64_t v_maxAgeNs_103_; lean_object* v_varyRule_104_; uint64_t v_initialAgeNs_105_; uint64_t v_staleWhileRevalidateNs_106_; lean_object* v_surrogateKeys_107_; uint64_t v_length_108_; uint64_t v_staleIfErrorNs_109_; lean_object* v___x_110_; 
v_maxAgeNs_103_ = lean_ctor_get_uint64(v_options_101_, sizeof(void*)*2);
v_varyRule_104_ = lean_ctor_get(v_options_101_, 0);
v_initialAgeNs_105_ = lean_ctor_get_uint64(v_options_101_, sizeof(void*)*2 + 8);
v_staleWhileRevalidateNs_106_ = lean_ctor_get_uint64(v_options_101_, sizeof(void*)*2 + 16);
v_surrogateKeys_107_ = lean_ctor_get(v_options_101_, 1);
v_length_108_ = lean_ctor_get_uint64(v_options_101_, sizeof(void*)*2 + 24);
v_staleIfErrorNs_109_ = lean_ctor_get_uint64(v_options_101_, sizeof(void*)*2 + 32);
v___x_110_ = lasm_fastly_http_cache_transaction_insert(v_handle_98_, v_respHandle_99_, v_optionsMask_100_, v_maxAgeNs_103_, v_varyRule_104_, v_initialAgeNs_105_, v_staleWhileRevalidateNs_106_, v_surrogateKeys_107_, v_length_108_, v_staleIfErrorNs_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionInsert___boxed(lean_object* v_handle_111_, lean_object* v_respHandle_112_, lean_object* v_optionsMask_113_, lean_object* v_options_114_, lean_object* v_a_115_){
_start:
{
uint32_t v_handle_boxed_116_; uint32_t v_respHandle_boxed_117_; uint32_t v_optionsMask_boxed_118_; lean_object* v_res_119_; 
v_handle_boxed_116_ = lean_unbox_uint32(v_handle_111_);
lean_dec(v_handle_111_);
v_respHandle_boxed_117_ = lean_unbox_uint32(v_respHandle_112_);
lean_dec(v_respHandle_112_);
v_optionsMask_boxed_118_ = lean_unbox_uint32(v_optionsMask_113_);
lean_dec(v_optionsMask_113_);
v_res_119_ = l_Lasm_Fastly_HttpCache_transactionInsert(v_handle_boxed_116_, v_respHandle_boxed_117_, v_optionsMask_boxed_118_, v_options_114_);
lean_dec_ref(v_options_114_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionInsertAndStreamBackFlat___boxed(lean_object* v_a0_131_, lean_object* v_a1_132_, lean_object* v_a2_133_, lean_object* v_a4_134_, lean_object* v_a5_135_, lean_object* v_a6_136_, lean_object* v_a7_137_, lean_object* v_a8_138_, lean_object* v_a9_139_, lean_object* v_a10_140_, lean_object* v_a_00___x40___internal___hyg_141_){
_start:
{
uint32_t v_a0_boxed_142_; uint32_t v_a1_boxed_143_; uint32_t v_a2_boxed_144_; uint64_t v_a4_boxed_145_; uint64_t v_a6_boxed_146_; uint64_t v_a7_boxed_147_; uint64_t v_a9_boxed_148_; uint64_t v_a10_boxed_149_; lean_object* v_res_150_; 
v_a0_boxed_142_ = lean_unbox_uint32(v_a0_131_);
lean_dec(v_a0_131_);
v_a1_boxed_143_ = lean_unbox_uint32(v_a1_132_);
lean_dec(v_a1_132_);
v_a2_boxed_144_ = lean_unbox_uint32(v_a2_133_);
lean_dec(v_a2_133_);
v_a4_boxed_145_ = lean_unbox_uint64(v_a4_134_);
lean_dec_ref(v_a4_134_);
v_a6_boxed_146_ = lean_unbox_uint64(v_a6_136_);
lean_dec_ref(v_a6_136_);
v_a7_boxed_147_ = lean_unbox_uint64(v_a7_137_);
lean_dec_ref(v_a7_137_);
v_a9_boxed_148_ = lean_unbox_uint64(v_a9_139_);
lean_dec_ref(v_a9_139_);
v_a10_boxed_149_ = lean_unbox_uint64(v_a10_140_);
lean_dec_ref(v_a10_140_);
v_res_150_ = lasm_fastly_http_cache_transaction_insert_and_stream_back(v_a0_boxed_142_, v_a1_boxed_143_, v_a2_boxed_144_, v_a4_boxed_145_, v_a5_135_, v_a6_boxed_146_, v_a7_boxed_147_, v_a8_138_, v_a9_boxed_148_, v_a10_boxed_149_);
lean_dec_ref(v_a8_138_);
lean_dec_ref(v_a5_135_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionInsertAndStreamBack(uint32_t v_handle_151_, uint32_t v_respHandle_152_, uint32_t v_optionsMask_153_, lean_object* v_options_154_){
_start:
{
uint64_t v_maxAgeNs_156_; lean_object* v_varyRule_157_; uint64_t v_initialAgeNs_158_; uint64_t v_staleWhileRevalidateNs_159_; lean_object* v_surrogateKeys_160_; uint64_t v_length_161_; uint64_t v_staleIfErrorNs_162_; lean_object* v___x_163_; 
v_maxAgeNs_156_ = lean_ctor_get_uint64(v_options_154_, sizeof(void*)*2);
v_varyRule_157_ = lean_ctor_get(v_options_154_, 0);
v_initialAgeNs_158_ = lean_ctor_get_uint64(v_options_154_, sizeof(void*)*2 + 8);
v_staleWhileRevalidateNs_159_ = lean_ctor_get_uint64(v_options_154_, sizeof(void*)*2 + 16);
v_surrogateKeys_160_ = lean_ctor_get(v_options_154_, 1);
v_length_161_ = lean_ctor_get_uint64(v_options_154_, sizeof(void*)*2 + 24);
v_staleIfErrorNs_162_ = lean_ctor_get_uint64(v_options_154_, sizeof(void*)*2 + 32);
v___x_163_ = lasm_fastly_http_cache_transaction_insert_and_stream_back(v_handle_151_, v_respHandle_152_, v_optionsMask_153_, v_maxAgeNs_156_, v_varyRule_157_, v_initialAgeNs_158_, v_staleWhileRevalidateNs_159_, v_surrogateKeys_160_, v_length_161_, v_staleIfErrorNs_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionInsertAndStreamBack___boxed(lean_object* v_handle_164_, lean_object* v_respHandle_165_, lean_object* v_optionsMask_166_, lean_object* v_options_167_, lean_object* v_a_168_){
_start:
{
uint32_t v_handle_boxed_169_; uint32_t v_respHandle_boxed_170_; uint32_t v_optionsMask_boxed_171_; lean_object* v_res_172_; 
v_handle_boxed_169_ = lean_unbox_uint32(v_handle_164_);
lean_dec(v_handle_164_);
v_respHandle_boxed_170_ = lean_unbox_uint32(v_respHandle_165_);
lean_dec(v_respHandle_165_);
v_optionsMask_boxed_171_ = lean_unbox_uint32(v_optionsMask_166_);
lean_dec(v_optionsMask_166_);
v_res_172_ = l_Lasm_Fastly_HttpCache_transactionInsertAndStreamBack(v_handle_boxed_169_, v_respHandle_boxed_170_, v_optionsMask_boxed_171_, v_options_167_);
lean_dec_ref(v_options_167_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionUpdateFlat___boxed(lean_object* v_a0_184_, lean_object* v_a1_185_, lean_object* v_a2_186_, lean_object* v_a4_187_, lean_object* v_a5_188_, lean_object* v_a6_189_, lean_object* v_a7_190_, lean_object* v_a8_191_, lean_object* v_a9_192_, lean_object* v_a10_193_, lean_object* v_a_00___x40___internal___hyg_194_){
_start:
{
uint32_t v_a0_boxed_195_; uint32_t v_a1_boxed_196_; uint32_t v_a2_boxed_197_; uint64_t v_a4_boxed_198_; uint64_t v_a6_boxed_199_; uint64_t v_a7_boxed_200_; uint64_t v_a9_boxed_201_; uint64_t v_a10_boxed_202_; lean_object* v_res_203_; 
v_a0_boxed_195_ = lean_unbox_uint32(v_a0_184_);
lean_dec(v_a0_184_);
v_a1_boxed_196_ = lean_unbox_uint32(v_a1_185_);
lean_dec(v_a1_185_);
v_a2_boxed_197_ = lean_unbox_uint32(v_a2_186_);
lean_dec(v_a2_186_);
v_a4_boxed_198_ = lean_unbox_uint64(v_a4_187_);
lean_dec_ref(v_a4_187_);
v_a6_boxed_199_ = lean_unbox_uint64(v_a6_189_);
lean_dec_ref(v_a6_189_);
v_a7_boxed_200_ = lean_unbox_uint64(v_a7_190_);
lean_dec_ref(v_a7_190_);
v_a9_boxed_201_ = lean_unbox_uint64(v_a9_192_);
lean_dec_ref(v_a9_192_);
v_a10_boxed_202_ = lean_unbox_uint64(v_a10_193_);
lean_dec_ref(v_a10_193_);
v_res_203_ = lasm_fastly_http_cache_transaction_update(v_a0_boxed_195_, v_a1_boxed_196_, v_a2_boxed_197_, v_a4_boxed_198_, v_a5_188_, v_a6_boxed_199_, v_a7_boxed_200_, v_a8_191_, v_a9_boxed_201_, v_a10_boxed_202_);
lean_dec_ref(v_a8_191_);
lean_dec_ref(v_a5_188_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionUpdate(uint32_t v_handle_204_, uint32_t v_respHandle_205_, uint32_t v_optionsMask_206_, lean_object* v_options_207_){
_start:
{
uint64_t v_maxAgeNs_209_; lean_object* v_varyRule_210_; uint64_t v_initialAgeNs_211_; uint64_t v_staleWhileRevalidateNs_212_; lean_object* v_surrogateKeys_213_; uint64_t v_length_214_; uint64_t v_staleIfErrorNs_215_; lean_object* v___x_216_; 
v_maxAgeNs_209_ = lean_ctor_get_uint64(v_options_207_, sizeof(void*)*2);
v_varyRule_210_ = lean_ctor_get(v_options_207_, 0);
v_initialAgeNs_211_ = lean_ctor_get_uint64(v_options_207_, sizeof(void*)*2 + 8);
v_staleWhileRevalidateNs_212_ = lean_ctor_get_uint64(v_options_207_, sizeof(void*)*2 + 16);
v_surrogateKeys_213_ = lean_ctor_get(v_options_207_, 1);
v_length_214_ = lean_ctor_get_uint64(v_options_207_, sizeof(void*)*2 + 24);
v_staleIfErrorNs_215_ = lean_ctor_get_uint64(v_options_207_, sizeof(void*)*2 + 32);
v___x_216_ = lasm_fastly_http_cache_transaction_update(v_handle_204_, v_respHandle_205_, v_optionsMask_206_, v_maxAgeNs_209_, v_varyRule_210_, v_initialAgeNs_211_, v_staleWhileRevalidateNs_212_, v_surrogateKeys_213_, v_length_214_, v_staleIfErrorNs_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionUpdate___boxed(lean_object* v_handle_217_, lean_object* v_respHandle_218_, lean_object* v_optionsMask_219_, lean_object* v_options_220_, lean_object* v_a_221_){
_start:
{
uint32_t v_handle_boxed_222_; uint32_t v_respHandle_boxed_223_; uint32_t v_optionsMask_boxed_224_; lean_object* v_res_225_; 
v_handle_boxed_222_ = lean_unbox_uint32(v_handle_217_);
lean_dec(v_handle_217_);
v_respHandle_boxed_223_ = lean_unbox_uint32(v_respHandle_218_);
lean_dec(v_respHandle_218_);
v_optionsMask_boxed_224_ = lean_unbox_uint32(v_optionsMask_219_);
lean_dec(v_optionsMask_219_);
v_res_225_ = l_Lasm_Fastly_HttpCache_transactionUpdate(v_handle_boxed_222_, v_respHandle_boxed_223_, v_optionsMask_boxed_224_, v_options_220_);
lean_dec_ref(v_options_220_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionUpdateAndReturnFreshFlat___boxed(lean_object* v_a0_237_, lean_object* v_a1_238_, lean_object* v_a2_239_, lean_object* v_a4_240_, lean_object* v_a5_241_, lean_object* v_a6_242_, lean_object* v_a7_243_, lean_object* v_a8_244_, lean_object* v_a9_245_, lean_object* v_a10_246_, lean_object* v_a_00___x40___internal___hyg_247_){
_start:
{
uint32_t v_a0_boxed_248_; uint32_t v_a1_boxed_249_; uint32_t v_a2_boxed_250_; uint64_t v_a4_boxed_251_; uint64_t v_a6_boxed_252_; uint64_t v_a7_boxed_253_; uint64_t v_a9_boxed_254_; uint64_t v_a10_boxed_255_; lean_object* v_res_256_; 
v_a0_boxed_248_ = lean_unbox_uint32(v_a0_237_);
lean_dec(v_a0_237_);
v_a1_boxed_249_ = lean_unbox_uint32(v_a1_238_);
lean_dec(v_a1_238_);
v_a2_boxed_250_ = lean_unbox_uint32(v_a2_239_);
lean_dec(v_a2_239_);
v_a4_boxed_251_ = lean_unbox_uint64(v_a4_240_);
lean_dec_ref(v_a4_240_);
v_a6_boxed_252_ = lean_unbox_uint64(v_a6_242_);
lean_dec_ref(v_a6_242_);
v_a7_boxed_253_ = lean_unbox_uint64(v_a7_243_);
lean_dec_ref(v_a7_243_);
v_a9_boxed_254_ = lean_unbox_uint64(v_a9_245_);
lean_dec_ref(v_a9_245_);
v_a10_boxed_255_ = lean_unbox_uint64(v_a10_246_);
lean_dec_ref(v_a10_246_);
v_res_256_ = lasm_fastly_http_cache_transaction_update_and_return_fresh(v_a0_boxed_248_, v_a1_boxed_249_, v_a2_boxed_250_, v_a4_boxed_251_, v_a5_241_, v_a6_boxed_252_, v_a7_boxed_253_, v_a8_244_, v_a9_boxed_254_, v_a10_boxed_255_);
lean_dec_ref(v_a8_244_);
lean_dec_ref(v_a5_241_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionUpdateAndReturnFresh(uint32_t v_handle_257_, uint32_t v_respHandle_258_, uint32_t v_optionsMask_259_, lean_object* v_options_260_){
_start:
{
uint64_t v_maxAgeNs_262_; lean_object* v_varyRule_263_; uint64_t v_initialAgeNs_264_; uint64_t v_staleWhileRevalidateNs_265_; lean_object* v_surrogateKeys_266_; uint64_t v_length_267_; uint64_t v_staleIfErrorNs_268_; lean_object* v___x_269_; 
v_maxAgeNs_262_ = lean_ctor_get_uint64(v_options_260_, sizeof(void*)*2);
v_varyRule_263_ = lean_ctor_get(v_options_260_, 0);
v_initialAgeNs_264_ = lean_ctor_get_uint64(v_options_260_, sizeof(void*)*2 + 8);
v_staleWhileRevalidateNs_265_ = lean_ctor_get_uint64(v_options_260_, sizeof(void*)*2 + 16);
v_surrogateKeys_266_ = lean_ctor_get(v_options_260_, 1);
v_length_267_ = lean_ctor_get_uint64(v_options_260_, sizeof(void*)*2 + 24);
v_staleIfErrorNs_268_ = lean_ctor_get_uint64(v_options_260_, sizeof(void*)*2 + 32);
v___x_269_ = lasm_fastly_http_cache_transaction_update_and_return_fresh(v_handle_257_, v_respHandle_258_, v_optionsMask_259_, v_maxAgeNs_262_, v_varyRule_263_, v_initialAgeNs_264_, v_staleWhileRevalidateNs_265_, v_surrogateKeys_266_, v_length_267_, v_staleIfErrorNs_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionUpdateAndReturnFresh___boxed(lean_object* v_handle_270_, lean_object* v_respHandle_271_, lean_object* v_optionsMask_272_, lean_object* v_options_273_, lean_object* v_a_274_){
_start:
{
uint32_t v_handle_boxed_275_; uint32_t v_respHandle_boxed_276_; uint32_t v_optionsMask_boxed_277_; lean_object* v_res_278_; 
v_handle_boxed_275_ = lean_unbox_uint32(v_handle_270_);
lean_dec(v_handle_270_);
v_respHandle_boxed_276_ = lean_unbox_uint32(v_respHandle_271_);
lean_dec(v_respHandle_271_);
v_optionsMask_boxed_277_ = lean_unbox_uint32(v_optionsMask_272_);
lean_dec(v_optionsMask_272_);
v_res_278_ = l_Lasm_Fastly_HttpCache_transactionUpdateAndReturnFresh(v_handle_boxed_275_, v_respHandle_boxed_276_, v_optionsMask_boxed_277_, v_options_273_);
lean_dec_ref(v_options_273_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionChooseStale___boxed(lean_object* v_handle_281_, lean_object* v_a_00___x40___internal___hyg_282_){
_start:
{
uint32_t v_handle_boxed_283_; lean_object* v_res_284_; 
v_handle_boxed_283_ = lean_unbox_uint32(v_handle_281_);
lean_dec(v_handle_281_);
v_res_284_ = lasm_fastly_http_cache_transaction_choose_stale(v_handle_boxed_283_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpCache_0__Lasm_Fastly_HttpCache_transactionRecordNotCacheableFlat___boxed(lean_object* v_a0_295_, lean_object* v_a1_296_, lean_object* v_a3_297_, lean_object* v_a4_298_, lean_object* v_a5_299_, lean_object* v_a6_300_, lean_object* v_a7_301_, lean_object* v_a8_302_, lean_object* v_a9_303_, lean_object* v_a_00___x40___internal___hyg_304_){
_start:
{
uint32_t v_a0_boxed_305_; uint32_t v_a1_boxed_306_; uint64_t v_a3_boxed_307_; uint64_t v_a5_boxed_308_; uint64_t v_a6_boxed_309_; uint64_t v_a8_boxed_310_; uint64_t v_a9_boxed_311_; lean_object* v_res_312_; 
v_a0_boxed_305_ = lean_unbox_uint32(v_a0_295_);
lean_dec(v_a0_295_);
v_a1_boxed_306_ = lean_unbox_uint32(v_a1_296_);
lean_dec(v_a1_296_);
v_a3_boxed_307_ = lean_unbox_uint64(v_a3_297_);
lean_dec_ref(v_a3_297_);
v_a5_boxed_308_ = lean_unbox_uint64(v_a5_299_);
lean_dec_ref(v_a5_299_);
v_a6_boxed_309_ = lean_unbox_uint64(v_a6_300_);
lean_dec_ref(v_a6_300_);
v_a8_boxed_310_ = lean_unbox_uint64(v_a8_302_);
lean_dec_ref(v_a8_302_);
v_a9_boxed_311_ = lean_unbox_uint64(v_a9_303_);
lean_dec_ref(v_a9_303_);
v_res_312_ = lasm_fastly_http_cache_transaction_record_not_cacheable(v_a0_boxed_305_, v_a1_boxed_306_, v_a3_boxed_307_, v_a4_298_, v_a5_boxed_308_, v_a6_boxed_309_, v_a7_301_, v_a8_boxed_310_, v_a9_boxed_311_);
lean_dec_ref(v_a7_301_);
lean_dec_ref(v_a4_298_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionRecordNotCacheable(uint32_t v_handle_313_, uint32_t v_optionsMask_314_, lean_object* v_options_315_){
_start:
{
uint64_t v_maxAgeNs_317_; lean_object* v_varyRule_318_; uint64_t v_initialAgeNs_319_; uint64_t v_staleWhileRevalidateNs_320_; lean_object* v_surrogateKeys_321_; uint64_t v_length_322_; uint64_t v_staleIfErrorNs_323_; lean_object* v___x_324_; 
v_maxAgeNs_317_ = lean_ctor_get_uint64(v_options_315_, sizeof(void*)*2);
v_varyRule_318_ = lean_ctor_get(v_options_315_, 0);
v_initialAgeNs_319_ = lean_ctor_get_uint64(v_options_315_, sizeof(void*)*2 + 8);
v_staleWhileRevalidateNs_320_ = lean_ctor_get_uint64(v_options_315_, sizeof(void*)*2 + 16);
v_surrogateKeys_321_ = lean_ctor_get(v_options_315_, 1);
v_length_322_ = lean_ctor_get_uint64(v_options_315_, sizeof(void*)*2 + 24);
v_staleIfErrorNs_323_ = lean_ctor_get_uint64(v_options_315_, sizeof(void*)*2 + 32);
v___x_324_ = lasm_fastly_http_cache_transaction_record_not_cacheable(v_handle_313_, v_optionsMask_314_, v_maxAgeNs_317_, v_varyRule_318_, v_initialAgeNs_319_, v_staleWhileRevalidateNs_320_, v_surrogateKeys_321_, v_length_322_, v_staleIfErrorNs_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionRecordNotCacheable___boxed(lean_object* v_handle_325_, lean_object* v_optionsMask_326_, lean_object* v_options_327_, lean_object* v_a_328_){
_start:
{
uint32_t v_handle_boxed_329_; uint32_t v_optionsMask_boxed_330_; lean_object* v_res_331_; 
v_handle_boxed_329_ = lean_unbox_uint32(v_handle_325_);
lean_dec(v_handle_325_);
v_optionsMask_boxed_330_ = lean_unbox_uint32(v_optionsMask_326_);
lean_dec(v_optionsMask_326_);
v_res_331_ = l_Lasm_Fastly_HttpCache_transactionRecordNotCacheable(v_handle_boxed_329_, v_optionsMask_boxed_330_, v_options_327_);
lean_dec_ref(v_options_327_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_transactionAbandon___boxed(lean_object* v_handle_334_, lean_object* v_a_00___x40___internal___hyg_335_){
_start:
{
uint32_t v_handle_boxed_336_; lean_object* v_res_337_; 
v_handle_boxed_336_ = lean_unbox_uint32(v_handle_334_);
lean_dec(v_handle_334_);
v_res_337_ = lasm_fastly_http_cache_transaction_abandon(v_handle_boxed_336_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_close___boxed(lean_object* v_handle_340_, lean_object* v_a_00___x40___internal___hyg_341_){
_start:
{
uint32_t v_handle_boxed_342_; lean_object* v_res_343_; 
v_handle_boxed_342_ = lean_unbox_uint32(v_handle_340_);
lean_dec(v_handle_340_);
v_res_343_ = lasm_fastly_http_cache_close(v_handle_boxed_342_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getSuggestedBackendRequest___boxed(lean_object* v_handle_346_, lean_object* v_a_00___x40___internal___hyg_347_){
_start:
{
uint32_t v_handle_boxed_348_; lean_object* v_res_349_; 
v_handle_boxed_348_ = lean_unbox_uint32(v_handle_346_);
lean_dec(v_handle_346_);
v_res_349_ = lasm_fastly_http_cache_get_suggested_backend_request(v_handle_boxed_348_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_prepareResponseForStorage___boxed(lean_object* v_handle_353_, lean_object* v_response_354_, lean_object* v_a_00___x40___internal___hyg_355_){
_start:
{
uint32_t v_handle_boxed_356_; uint32_t v_response_boxed_357_; lean_object* v_res_358_; 
v_handle_boxed_356_ = lean_unbox_uint32(v_handle_353_);
lean_dec(v_handle_353_);
v_response_boxed_357_ = lean_unbox_uint32(v_response_354_);
lean_dec(v_response_354_);
v_res_358_ = lasm_fastly_http_cache_prepare_response_for_storage(v_handle_boxed_356_, v_response_boxed_357_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getFoundResponse___boxed(lean_object* v_handle_362_, lean_object* v_transformForClient_363_, lean_object* v_a_00___x40___internal___hyg_364_){
_start:
{
uint32_t v_handle_boxed_365_; uint32_t v_transformForClient_boxed_366_; lean_object* v_res_367_; 
v_handle_boxed_365_ = lean_unbox_uint32(v_handle_362_);
lean_dec(v_handle_362_);
v_transformForClient_boxed_366_ = lean_unbox_uint32(v_transformForClient_363_);
lean_dec(v_transformForClient_363_);
v_res_367_ = lasm_fastly_http_cache_get_found_response(v_handle_boxed_365_, v_transformForClient_boxed_366_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getState___boxed(lean_object* v_handle_370_, lean_object* v_a_00___x40___internal___hyg_371_){
_start:
{
uint32_t v_handle_boxed_372_; lean_object* v_res_373_; 
v_handle_boxed_372_ = lean_unbox_uint32(v_handle_370_);
lean_dec(v_handle_370_);
v_res_373_ = lasm_fastly_http_cache_get_state(v_handle_boxed_372_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getLength___boxed(lean_object* v_handle_376_, lean_object* v_a_00___x40___internal___hyg_377_){
_start:
{
uint32_t v_handle_boxed_378_; lean_object* v_res_379_; 
v_handle_boxed_378_ = lean_unbox_uint32(v_handle_376_);
lean_dec(v_handle_376_);
v_res_379_ = lasm_fastly_http_cache_get_length(v_handle_boxed_378_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getMaxAgeNs___boxed(lean_object* v_handle_382_, lean_object* v_a_00___x40___internal___hyg_383_){
_start:
{
uint32_t v_handle_boxed_384_; lean_object* v_res_385_; 
v_handle_boxed_384_ = lean_unbox_uint32(v_handle_382_);
lean_dec(v_handle_382_);
v_res_385_ = lasm_fastly_http_cache_get_max_age_ns(v_handle_boxed_384_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getStaleWhileRevalidateNs___boxed(lean_object* v_handle_388_, lean_object* v_a_00___x40___internal___hyg_389_){
_start:
{
uint32_t v_handle_boxed_390_; lean_object* v_res_391_; 
v_handle_boxed_390_ = lean_unbox_uint32(v_handle_388_);
lean_dec(v_handle_388_);
v_res_391_ = lasm_fastly_http_cache_get_stale_while_revalidate_ns(v_handle_boxed_390_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getStaleIfErrorNs___boxed(lean_object* v_handle_394_, lean_object* v_a_00___x40___internal___hyg_395_){
_start:
{
uint32_t v_handle_boxed_396_; lean_object* v_res_397_; 
v_handle_boxed_396_ = lean_unbox_uint32(v_handle_394_);
lean_dec(v_handle_394_);
v_res_397_ = lasm_fastly_http_cache_get_stale_if_error_ns(v_handle_boxed_396_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getAgeNs___boxed(lean_object* v_handle_400_, lean_object* v_a_00___x40___internal___hyg_401_){
_start:
{
uint32_t v_handle_boxed_402_; lean_object* v_res_403_; 
v_handle_boxed_402_ = lean_unbox_uint32(v_handle_400_);
lean_dec(v_handle_400_);
v_res_403_ = lasm_fastly_http_cache_get_age_ns(v_handle_boxed_402_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getHits___boxed(lean_object* v_handle_406_, lean_object* v_a_00___x40___internal___hyg_407_){
_start:
{
uint32_t v_handle_boxed_408_; lean_object* v_res_409_; 
v_handle_boxed_408_ = lean_unbox_uint32(v_handle_406_);
lean_dec(v_handle_406_);
v_res_409_ = lasm_fastly_http_cache_get_hits(v_handle_boxed_408_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getSensitiveData___boxed(lean_object* v_handle_412_, lean_object* v_a_00___x40___internal___hyg_413_){
_start:
{
uint32_t v_handle_boxed_414_; lean_object* v_res_415_; 
v_handle_boxed_414_ = lean_unbox_uint32(v_handle_412_);
lean_dec(v_handle_412_);
v_res_415_ = lasm_fastly_http_cache_get_sensitive_data(v_handle_boxed_414_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getSurrogateKeys___boxed(lean_object* v_handle_418_, lean_object* v_a_00___x40___internal___hyg_419_){
_start:
{
uint32_t v_handle_boxed_420_; lean_object* v_res_421_; 
v_handle_boxed_420_ = lean_unbox_uint32(v_handle_418_);
lean_dec(v_handle_418_);
v_res_421_ = lasm_fastly_http_cache_get_surrogate_keys(v_handle_boxed_420_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpCache_getVaryRule___boxed(lean_object* v_handle_424_, lean_object* v_a_00___x40___internal___hyg_425_){
_start:
{
uint32_t v_handle_boxed_426_; lean_object* v_res_427_; 
v_handle_boxed_426_ = lean_unbox_uint32(v_handle_424_);
lean_dec(v_handle_424_);
v_res_427_ = lasm_fastly_http_cache_get_vary_rule(v_handle_boxed_426_);
return v_res_427_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_HttpCache(uint8_t builtin) {
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
