// Lean compiler output
// Module: Lasm.Fastly.HttpReq
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
lean_object* lasm_fastly_http_req_body_downstream_get();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_bodyDownstreamGet___boxed(lean_object*);
lean_object* lasm_fastly_http_req_cache_override_set(uint32_t, uint32_t, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_cacheOverrideSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_cache_override_v2_set(uint32_t, uint32_t, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_cacheOverrideV2Set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_cache_override_v3_set(uint32_t, uint32_t, uint32_t, uint32_t, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpReq_0__Lasm_Fastly_HttpReq_cacheOverrideV3SetFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_cacheOverrideV3Set(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_cacheOverrideV3Set___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_downstream_client_ip_addr();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamClientIpAddr___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_server_ip_addr();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamServerIpAddr___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_client_h2_fingerprint();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamClientH2Fingerprint___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_client_request_id();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamClientRequestId___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_client_oh_fingerprint();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamClientOhFingerprint___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_client_ddos_detected();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamClientDdosDetected___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_tls_cipher_openssl_name();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsCipherOpensslName___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_tls_protocol();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsProtocol___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_tls_client_hello();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsClientHello___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_tls_raw_client_certificate();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsRawClientCertificate___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_tls_client_cert_verify_result();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsClientCertVerifyResult___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_tls_ja3_md5();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsJa3Md5___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_tls_ja4();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsJa4___boxed(lean_object*);
lean_object* lasm_fastly_http_req_downstream_compliance_region();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamComplianceRegion___boxed(lean_object*);
lean_object* lasm_fastly_http_req_new();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_new___boxed(lean_object*);
lean_object* lasm_fastly_http_req_header_names_get(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerNamesGet___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_original_header_names_get();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_originalHeaderNamesGet___boxed(lean_object*);
lean_object* lasm_fastly_http_req_original_header_count();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_originalHeaderCount___boxed(lean_object*);
lean_object* lasm_fastly_http_req_header_value_get(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerValueGet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_header_values_get(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerValuesGet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_header_values_set(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerValuesSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_header_insert(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerInsert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_header_append(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerAppend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_header_remove(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerRemove___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_method_get(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_methodGet___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_method_set(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_methodSet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_uri_get(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_uriGet___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_uri_set(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_uriSet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_version_get(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_versionGet___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_version_set(uint32_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_versionSet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_send(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_send_async(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_sendAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_send_async_v2(uint32_t, uint32_t, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_sendAsyncV2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_send_async_streaming(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_sendAsyncStreaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_pending_req_header_insert(uint32_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqHeaderInsert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_pending_req_header_append(uint32_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqHeaderAppend___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_pending_req_header_remove(uint32_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqHeaderRemove___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_pending_req_poll(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqPoll___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_pending_req_wait(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqWait___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_pending_req_select(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqSelect___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_fastly_key_is_valid();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_fastlyKeyIsValid___boxed(lean_object*);
lean_object* lasm_fastly_http_req_close(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_close___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_auto_decompress_response_set(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_autoDecompressResponseSet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_upgrade_websocket(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_upgradeWebsocket___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_redirect_to_websocket_proxy(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_redirectToWebsocketProxy___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_redirect_to_grip_proxy(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_redirectToGripProxy___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_redirect_to_websocket_proxy_v2(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_redirectToWebsocketProxyV2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_redirect_to_grip_proxy_v2(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_redirectToGripProxyV2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_framing_headers_mode_set(uint32_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_framingHeadersModeSet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_register_dynamic_backend(lean_object*, lean_object*, uint32_t, lean_object*, uint32_t, uint32_t, uint32_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint64_t, uint64_t, lean_object*, lean_object*, lean_object*, uint32_t, uint32_t, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpReq_0__Lasm_Fastly_HttpReq_registerDynamicBackendFlat___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_registerDynamicBackend(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_registerDynamicBackend___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_inspect(uint32_t, uint32_t, uint32_t, lean_object*, lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpReq_0__Lasm_Fastly_HttpReq_inspectFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_inspect(uint32_t, uint32_t, uint32_t, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_inspect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_req_on_behalf_of(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_onBehalfOf___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_bodyDownstreamGet___boxed(lean_object* v_a_00___x40___internal___hyg_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lasm_fastly_http_req_body_downstream_get();
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_cacheOverrideSet___boxed(lean_object* v_h_9_, lean_object* v_tag_10_, lean_object* v_ttl_11_, lean_object* v_staleWhileRevalidate_12_, lean_object* v_a_00___x40___internal___hyg_13_){
_start:
{
uint32_t v_h_boxed_14_; uint32_t v_tag_boxed_15_; uint32_t v_ttl_boxed_16_; uint32_t v_staleWhileRevalidate_boxed_17_; lean_object* v_res_18_; 
v_h_boxed_14_ = lean_unbox_uint32(v_h_9_);
lean_dec(v_h_9_);
v_tag_boxed_15_ = lean_unbox_uint32(v_tag_10_);
lean_dec(v_tag_10_);
v_ttl_boxed_16_ = lean_unbox_uint32(v_ttl_11_);
lean_dec(v_ttl_11_);
v_staleWhileRevalidate_boxed_17_ = lean_unbox_uint32(v_staleWhileRevalidate_12_);
lean_dec(v_staleWhileRevalidate_12_);
v_res_18_ = lasm_fastly_http_req_cache_override_set(v_h_boxed_14_, v_tag_boxed_15_, v_ttl_boxed_16_, v_staleWhileRevalidate_boxed_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_cacheOverrideV2Set___boxed(lean_object* v_h_25_, lean_object* v_tag_26_, lean_object* v_ttl_27_, lean_object* v_staleWhileRevalidate_28_, lean_object* v_sk_29_, lean_object* v_a_00___x40___internal___hyg_30_){
_start:
{
uint32_t v_h_boxed_31_; uint32_t v_tag_boxed_32_; uint32_t v_ttl_boxed_33_; uint32_t v_staleWhileRevalidate_boxed_34_; lean_object* v_res_35_; 
v_h_boxed_31_ = lean_unbox_uint32(v_h_25_);
lean_dec(v_h_25_);
v_tag_boxed_32_ = lean_unbox_uint32(v_tag_26_);
lean_dec(v_tag_26_);
v_ttl_boxed_33_ = lean_unbox_uint32(v_ttl_27_);
lean_dec(v_ttl_27_);
v_staleWhileRevalidate_boxed_34_ = lean_unbox_uint32(v_staleWhileRevalidate_28_);
lean_dec(v_staleWhileRevalidate_28_);
v_res_35_ = lasm_fastly_http_req_cache_override_v2_set(v_h_boxed_31_, v_tag_boxed_32_, v_ttl_boxed_33_, v_staleWhileRevalidate_boxed_34_, v_sk_29_);
lean_dec_ref(v_sk_29_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpReq_0__Lasm_Fastly_HttpReq_cacheOverrideV3SetFlat___boxed(lean_object* v_a0_43_, lean_object* v_a1_44_, lean_object* v_a3_45_, lean_object* v_a4_46_, lean_object* v_a5_47_, lean_object* v_a6_48_, lean_object* v_a_00___x40___internal___hyg_49_){
_start:
{
uint32_t v_a0_boxed_50_; uint32_t v_a1_boxed_51_; uint32_t v_a3_boxed_52_; uint32_t v_a4_boxed_53_; uint32_t v_a6_boxed_54_; lean_object* v_res_55_; 
v_a0_boxed_50_ = lean_unbox_uint32(v_a0_43_);
lean_dec(v_a0_43_);
v_a1_boxed_51_ = lean_unbox_uint32(v_a1_44_);
lean_dec(v_a1_44_);
v_a3_boxed_52_ = lean_unbox_uint32(v_a3_45_);
lean_dec(v_a3_45_);
v_a4_boxed_53_ = lean_unbox_uint32(v_a4_46_);
lean_dec(v_a4_46_);
v_a6_boxed_54_ = lean_unbox_uint32(v_a6_48_);
lean_dec(v_a6_48_);
v_res_55_ = lasm_fastly_http_req_cache_override_v3_set(v_a0_boxed_50_, v_a1_boxed_51_, v_a3_boxed_52_, v_a4_boxed_53_, v_a5_47_, v_a6_boxed_54_);
lean_dec_ref(v_a5_47_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_cacheOverrideV3Set(uint32_t v_h_56_, uint32_t v_tag_57_, lean_object* v_cacheOverridePtr_58_){
_start:
{
uint32_t v_ttl_60_; uint32_t v_staleWhileRevalidate_61_; lean_object* v_surrogateKeys_62_; uint32_t v_lookupTimeoutMs_63_; lean_object* v___x_64_; 
v_ttl_60_ = lean_ctor_get_uint32(v_cacheOverridePtr_58_, sizeof(void*)*1);
v_staleWhileRevalidate_61_ = lean_ctor_get_uint32(v_cacheOverridePtr_58_, sizeof(void*)*1 + 4);
v_surrogateKeys_62_ = lean_ctor_get(v_cacheOverridePtr_58_, 0);
v_lookupTimeoutMs_63_ = lean_ctor_get_uint32(v_cacheOverridePtr_58_, sizeof(void*)*1 + 8);
v___x_64_ = lasm_fastly_http_req_cache_override_v3_set(v_h_56_, v_tag_57_, v_ttl_60_, v_staleWhileRevalidate_61_, v_surrogateKeys_62_, v_lookupTimeoutMs_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_cacheOverrideV3Set___boxed(lean_object* v_h_65_, lean_object* v_tag_66_, lean_object* v_cacheOverridePtr_67_, lean_object* v_a_68_){
_start:
{
uint32_t v_h_boxed_69_; uint32_t v_tag_boxed_70_; lean_object* v_res_71_; 
v_h_boxed_69_ = lean_unbox_uint32(v_h_65_);
lean_dec(v_h_65_);
v_tag_boxed_70_ = lean_unbox_uint32(v_tag_66_);
lean_dec(v_tag_66_);
v_res_71_ = l_Lasm_Fastly_HttpReq_cacheOverrideV3Set(v_h_boxed_69_, v_tag_boxed_70_, v_cacheOverridePtr_67_);
lean_dec_ref(v_cacheOverridePtr_67_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamClientIpAddr___boxed(lean_object* v_a_00___x40___internal___hyg_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = lasm_fastly_http_req_downstream_client_ip_addr();
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamServerIpAddr___boxed(lean_object* v_a_00___x40___internal___hyg_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = lasm_fastly_http_req_downstream_server_ip_addr();
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamClientH2Fingerprint___boxed(lean_object* v_a_00___x40___internal___hyg_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = lasm_fastly_http_req_downstream_client_h2_fingerprint();
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamClientRequestId___boxed(lean_object* v_a_00___x40___internal___hyg_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = lasm_fastly_http_req_downstream_client_request_id();
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamClientOhFingerprint___boxed(lean_object* v_a_00___x40___internal___hyg_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = lasm_fastly_http_req_downstream_client_oh_fingerprint();
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamClientDdosDetected___boxed(lean_object* v_a_00___x40___internal___hyg_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = lasm_fastly_http_req_downstream_client_ddos_detected();
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsCipherOpensslName___boxed(lean_object* v_a_00___x40___internal___hyg_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = lasm_fastly_http_req_downstream_tls_cipher_openssl_name();
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsProtocol___boxed(lean_object* v_a_00___x40___internal___hyg_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = lasm_fastly_http_req_downstream_tls_protocol();
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsClientHello___boxed(lean_object* v_a_00___x40___internal___hyg_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = lasm_fastly_http_req_downstream_tls_client_hello();
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsRawClientCertificate___boxed(lean_object* v_a_00___x40___internal___hyg_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = lasm_fastly_http_req_downstream_tls_raw_client_certificate();
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsClientCertVerifyResult___boxed(lean_object* v_a_00___x40___internal___hyg_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = lasm_fastly_http_req_downstream_tls_client_cert_verify_result();
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsJa3Md5___boxed(lean_object* v_a_00___x40___internal___hyg_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = lasm_fastly_http_req_downstream_tls_ja3_md5();
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamTlsJa4___boxed(lean_object* v_a_00___x40___internal___hyg_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = lasm_fastly_http_req_downstream_tls_ja4();
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_downstreamComplianceRegion___boxed(lean_object* v_a_00___x40___internal___hyg_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = lasm_fastly_http_req_downstream_compliance_region();
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_new___boxed(lean_object* v_a_00___x40___internal___hyg_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = lasm_fastly_http_req_new();
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerNamesGet___boxed(lean_object* v_h_119_, lean_object* v_a_00___x40___internal___hyg_120_){
_start:
{
uint32_t v_h_boxed_121_; lean_object* v_res_122_; 
v_h_boxed_121_ = lean_unbox_uint32(v_h_119_);
lean_dec(v_h_119_);
v_res_122_ = lasm_fastly_http_req_header_names_get(v_h_boxed_121_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_originalHeaderNamesGet___boxed(lean_object* v_a_00___x40___internal___hyg_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = lasm_fastly_http_req_original_header_names_get();
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_originalHeaderCount___boxed(lean_object* v_a_00___x40___internal___hyg_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = lasm_fastly_http_req_original_header_count();
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerValueGet___boxed(lean_object* v_h_132_, lean_object* v_name_133_, lean_object* v_a_00___x40___internal___hyg_134_){
_start:
{
uint32_t v_h_boxed_135_; lean_object* v_res_136_; 
v_h_boxed_135_ = lean_unbox_uint32(v_h_132_);
lean_dec(v_h_132_);
v_res_136_ = lasm_fastly_http_req_header_value_get(v_h_boxed_135_, v_name_133_);
lean_dec_ref(v_name_133_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerValuesGet___boxed(lean_object* v_h_140_, lean_object* v_name_141_, lean_object* v_a_00___x40___internal___hyg_142_){
_start:
{
uint32_t v_h_boxed_143_; lean_object* v_res_144_; 
v_h_boxed_143_ = lean_unbox_uint32(v_h_140_);
lean_dec(v_h_140_);
v_res_144_ = lasm_fastly_http_req_header_values_get(v_h_boxed_143_, v_name_141_);
lean_dec_ref(v_name_141_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerValuesSet___boxed(lean_object* v_h_149_, lean_object* v_name_150_, lean_object* v_values_151_, lean_object* v_a_00___x40___internal___hyg_152_){
_start:
{
uint32_t v_h_boxed_153_; lean_object* v_res_154_; 
v_h_boxed_153_ = lean_unbox_uint32(v_h_149_);
lean_dec(v_h_149_);
v_res_154_ = lasm_fastly_http_req_header_values_set(v_h_boxed_153_, v_name_150_, v_values_151_);
lean_dec_ref(v_values_151_);
lean_dec_ref(v_name_150_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerInsert___boxed(lean_object* v_h_159_, lean_object* v_name_160_, lean_object* v_value_161_, lean_object* v_a_00___x40___internal___hyg_162_){
_start:
{
uint32_t v_h_boxed_163_; lean_object* v_res_164_; 
v_h_boxed_163_ = lean_unbox_uint32(v_h_159_);
lean_dec(v_h_159_);
v_res_164_ = lasm_fastly_http_req_header_insert(v_h_boxed_163_, v_name_160_, v_value_161_);
lean_dec_ref(v_value_161_);
lean_dec_ref(v_name_160_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerAppend___boxed(lean_object* v_h_169_, lean_object* v_name_170_, lean_object* v_value_171_, lean_object* v_a_00___x40___internal___hyg_172_){
_start:
{
uint32_t v_h_boxed_173_; lean_object* v_res_174_; 
v_h_boxed_173_ = lean_unbox_uint32(v_h_169_);
lean_dec(v_h_169_);
v_res_174_ = lasm_fastly_http_req_header_append(v_h_boxed_173_, v_name_170_, v_value_171_);
lean_dec_ref(v_value_171_);
lean_dec_ref(v_name_170_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_headerRemove___boxed(lean_object* v_h_178_, lean_object* v_name_179_, lean_object* v_a_00___x40___internal___hyg_180_){
_start:
{
uint32_t v_h_boxed_181_; lean_object* v_res_182_; 
v_h_boxed_181_ = lean_unbox_uint32(v_h_178_);
lean_dec(v_h_178_);
v_res_182_ = lasm_fastly_http_req_header_remove(v_h_boxed_181_, v_name_179_);
lean_dec_ref(v_name_179_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_methodGet___boxed(lean_object* v_h_185_, lean_object* v_a_00___x40___internal___hyg_186_){
_start:
{
uint32_t v_h_boxed_187_; lean_object* v_res_188_; 
v_h_boxed_187_ = lean_unbox_uint32(v_h_185_);
lean_dec(v_h_185_);
v_res_188_ = lasm_fastly_http_req_method_get(v_h_boxed_187_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_methodSet___boxed(lean_object* v_h_192_, lean_object* v_method_193_, lean_object* v_a_00___x40___internal___hyg_194_){
_start:
{
uint32_t v_h_boxed_195_; lean_object* v_res_196_; 
v_h_boxed_195_ = lean_unbox_uint32(v_h_192_);
lean_dec(v_h_192_);
v_res_196_ = lasm_fastly_http_req_method_set(v_h_boxed_195_, v_method_193_);
lean_dec_ref(v_method_193_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_uriGet___boxed(lean_object* v_h_199_, lean_object* v_a_00___x40___internal___hyg_200_){
_start:
{
uint32_t v_h_boxed_201_; lean_object* v_res_202_; 
v_h_boxed_201_ = lean_unbox_uint32(v_h_199_);
lean_dec(v_h_199_);
v_res_202_ = lasm_fastly_http_req_uri_get(v_h_boxed_201_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_uriSet___boxed(lean_object* v_h_206_, lean_object* v_uri_207_, lean_object* v_a_00___x40___internal___hyg_208_){
_start:
{
uint32_t v_h_boxed_209_; lean_object* v_res_210_; 
v_h_boxed_209_ = lean_unbox_uint32(v_h_206_);
lean_dec(v_h_206_);
v_res_210_ = lasm_fastly_http_req_uri_set(v_h_boxed_209_, v_uri_207_);
lean_dec_ref(v_uri_207_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_versionGet___boxed(lean_object* v_h_213_, lean_object* v_a_00___x40___internal___hyg_214_){
_start:
{
uint32_t v_h_boxed_215_; lean_object* v_res_216_; 
v_h_boxed_215_ = lean_unbox_uint32(v_h_213_);
lean_dec(v_h_213_);
v_res_216_ = lasm_fastly_http_req_version_get(v_h_boxed_215_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_versionSet___boxed(lean_object* v_h_220_, lean_object* v_version_221_, lean_object* v_a_00___x40___internal___hyg_222_){
_start:
{
uint32_t v_h_boxed_223_; uint8_t v_version_boxed_224_; lean_object* v_res_225_; 
v_h_boxed_223_ = lean_unbox_uint32(v_h_220_);
lean_dec(v_h_220_);
v_version_boxed_224_ = lean_unbox(v_version_221_);
v_res_225_ = lasm_fastly_http_req_version_set(v_h_boxed_223_, v_version_boxed_224_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_send___boxed(lean_object* v_h_230_, lean_object* v_b_231_, lean_object* v_backend_232_, lean_object* v_a_00___x40___internal___hyg_233_){
_start:
{
uint32_t v_h_boxed_234_; uint32_t v_b_boxed_235_; lean_object* v_res_236_; 
v_h_boxed_234_ = lean_unbox_uint32(v_h_230_);
lean_dec(v_h_230_);
v_b_boxed_235_ = lean_unbox_uint32(v_b_231_);
lean_dec(v_b_231_);
v_res_236_ = lasm_fastly_http_req_send(v_h_boxed_234_, v_b_boxed_235_, v_backend_232_);
lean_dec_ref(v_backend_232_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_sendAsync___boxed(lean_object* v_h_241_, lean_object* v_b_242_, lean_object* v_backend_243_, lean_object* v_a_00___x40___internal___hyg_244_){
_start:
{
uint32_t v_h_boxed_245_; uint32_t v_b_boxed_246_; lean_object* v_res_247_; 
v_h_boxed_245_ = lean_unbox_uint32(v_h_241_);
lean_dec(v_h_241_);
v_b_boxed_246_ = lean_unbox_uint32(v_b_242_);
lean_dec(v_b_242_);
v_res_247_ = lasm_fastly_http_req_send_async(v_h_boxed_245_, v_b_boxed_246_, v_backend_243_);
lean_dec_ref(v_backend_243_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_sendAsyncV2___boxed(lean_object* v_h_253_, lean_object* v_b_254_, lean_object* v_backend_255_, lean_object* v_streaming_256_, lean_object* v_a_00___x40___internal___hyg_257_){
_start:
{
uint32_t v_h_boxed_258_; uint32_t v_b_boxed_259_; uint32_t v_streaming_boxed_260_; lean_object* v_res_261_; 
v_h_boxed_258_ = lean_unbox_uint32(v_h_253_);
lean_dec(v_h_253_);
v_b_boxed_259_ = lean_unbox_uint32(v_b_254_);
lean_dec(v_b_254_);
v_streaming_boxed_260_ = lean_unbox_uint32(v_streaming_256_);
lean_dec(v_streaming_256_);
v_res_261_ = lasm_fastly_http_req_send_async_v2(v_h_boxed_258_, v_b_boxed_259_, v_backend_255_, v_streaming_boxed_260_);
lean_dec_ref(v_backend_255_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_sendAsyncStreaming___boxed(lean_object* v_h_266_, lean_object* v_b_267_, lean_object* v_backend_268_, lean_object* v_a_00___x40___internal___hyg_269_){
_start:
{
uint32_t v_h_boxed_270_; uint32_t v_b_boxed_271_; lean_object* v_res_272_; 
v_h_boxed_270_ = lean_unbox_uint32(v_h_266_);
lean_dec(v_h_266_);
v_b_boxed_271_ = lean_unbox_uint32(v_b_267_);
lean_dec(v_b_267_);
v_res_272_ = lasm_fastly_http_req_send_async_streaming(v_h_boxed_270_, v_b_boxed_271_, v_backend_268_);
lean_dec_ref(v_backend_268_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqHeaderInsert___boxed(lean_object* v_h_278_, lean_object* v_name_279_, lean_object* v_value_280_, lean_object* v_target_281_, lean_object* v_a_00___x40___internal___hyg_282_){
_start:
{
uint32_t v_h_boxed_283_; uint8_t v_target_boxed_284_; lean_object* v_res_285_; 
v_h_boxed_283_ = lean_unbox_uint32(v_h_278_);
lean_dec(v_h_278_);
v_target_boxed_284_ = lean_unbox(v_target_281_);
v_res_285_ = lasm_fastly_http_req_pending_req_header_insert(v_h_boxed_283_, v_name_279_, v_value_280_, v_target_boxed_284_);
lean_dec_ref(v_value_280_);
lean_dec_ref(v_name_279_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqHeaderAppend___boxed(lean_object* v_h_291_, lean_object* v_name_292_, lean_object* v_value_293_, lean_object* v_target_294_, lean_object* v_a_00___x40___internal___hyg_295_){
_start:
{
uint32_t v_h_boxed_296_; uint8_t v_target_boxed_297_; lean_object* v_res_298_; 
v_h_boxed_296_ = lean_unbox_uint32(v_h_291_);
lean_dec(v_h_291_);
v_target_boxed_297_ = lean_unbox(v_target_294_);
v_res_298_ = lasm_fastly_http_req_pending_req_header_append(v_h_boxed_296_, v_name_292_, v_value_293_, v_target_boxed_297_);
lean_dec_ref(v_value_293_);
lean_dec_ref(v_name_292_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqHeaderRemove___boxed(lean_object* v_h_303_, lean_object* v_name_304_, lean_object* v_target_305_, lean_object* v_a_00___x40___internal___hyg_306_){
_start:
{
uint32_t v_h_boxed_307_; uint8_t v_target_boxed_308_; lean_object* v_res_309_; 
v_h_boxed_307_ = lean_unbox_uint32(v_h_303_);
lean_dec(v_h_303_);
v_target_boxed_308_ = lean_unbox(v_target_305_);
v_res_309_ = lasm_fastly_http_req_pending_req_header_remove(v_h_boxed_307_, v_name_304_, v_target_boxed_308_);
lean_dec_ref(v_name_304_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqPoll___boxed(lean_object* v_h_312_, lean_object* v_a_00___x40___internal___hyg_313_){
_start:
{
uint32_t v_h_boxed_314_; lean_object* v_res_315_; 
v_h_boxed_314_ = lean_unbox_uint32(v_h_312_);
lean_dec(v_h_312_);
v_res_315_ = lasm_fastly_http_req_pending_req_poll(v_h_boxed_314_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqWait___boxed(lean_object* v_h_318_, lean_object* v_a_00___x40___internal___hyg_319_){
_start:
{
uint32_t v_h_boxed_320_; lean_object* v_res_321_; 
v_h_boxed_320_ = lean_unbox_uint32(v_h_318_);
lean_dec(v_h_318_);
v_res_321_ = lasm_fastly_http_req_pending_req_wait(v_h_boxed_320_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_pendingReqSelect___boxed(lean_object* v_hs_324_, lean_object* v_a_00___x40___internal___hyg_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = lasm_fastly_http_req_pending_req_select(v_hs_324_);
lean_dec_ref(v_hs_324_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_fastlyKeyIsValid___boxed(lean_object* v_a_00___x40___internal___hyg_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = lasm_fastly_http_req_fastly_key_is_valid();
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_close___boxed(lean_object* v_h_332_, lean_object* v_a_00___x40___internal___hyg_333_){
_start:
{
uint32_t v_h_boxed_334_; lean_object* v_res_335_; 
v_h_boxed_334_ = lean_unbox_uint32(v_h_332_);
lean_dec(v_h_332_);
v_res_335_ = lasm_fastly_http_req_close(v_h_boxed_334_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_autoDecompressResponseSet___boxed(lean_object* v_h_339_, lean_object* v_encodings_340_, lean_object* v_a_00___x40___internal___hyg_341_){
_start:
{
uint32_t v_h_boxed_342_; uint32_t v_encodings_boxed_343_; lean_object* v_res_344_; 
v_h_boxed_342_ = lean_unbox_uint32(v_h_339_);
lean_dec(v_h_339_);
v_encodings_boxed_343_ = lean_unbox_uint32(v_encodings_340_);
lean_dec(v_encodings_340_);
v_res_344_ = lasm_fastly_http_req_auto_decompress_response_set(v_h_boxed_342_, v_encodings_boxed_343_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_upgradeWebsocket___boxed(lean_object* v_backendName_347_, lean_object* v_a_00___x40___internal___hyg_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = lasm_fastly_http_req_upgrade_websocket(v_backendName_347_);
lean_dec_ref(v_backendName_347_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_redirectToWebsocketProxy___boxed(lean_object* v_backendName_352_, lean_object* v_a_00___x40___internal___hyg_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = lasm_fastly_http_req_redirect_to_websocket_proxy(v_backendName_352_);
lean_dec_ref(v_backendName_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_redirectToGripProxy___boxed(lean_object* v_backendName_357_, lean_object* v_a_00___x40___internal___hyg_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = lasm_fastly_http_req_redirect_to_grip_proxy(v_backendName_357_);
lean_dec_ref(v_backendName_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_redirectToWebsocketProxyV2___boxed(lean_object* v_h_363_, lean_object* v_backendName_364_, lean_object* v_a_00___x40___internal___hyg_365_){
_start:
{
uint32_t v_h_boxed_366_; lean_object* v_res_367_; 
v_h_boxed_366_ = lean_unbox_uint32(v_h_363_);
lean_dec(v_h_363_);
v_res_367_ = lasm_fastly_http_req_redirect_to_websocket_proxy_v2(v_h_boxed_366_, v_backendName_364_);
lean_dec_ref(v_backendName_364_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_redirectToGripProxyV2___boxed(lean_object* v_h_371_, lean_object* v_backendName_372_, lean_object* v_a_00___x40___internal___hyg_373_){
_start:
{
uint32_t v_h_boxed_374_; lean_object* v_res_375_; 
v_h_boxed_374_ = lean_unbox_uint32(v_h_371_);
lean_dec(v_h_371_);
v_res_375_ = lasm_fastly_http_req_redirect_to_grip_proxy_v2(v_h_boxed_374_, v_backendName_372_);
lean_dec_ref(v_backendName_372_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_framingHeadersModeSet___boxed(lean_object* v_h_379_, lean_object* v_mode_380_, lean_object* v_a_00___x40___internal___hyg_381_){
_start:
{
uint32_t v_h_boxed_382_; uint8_t v_mode_boxed_383_; lean_object* v_res_384_; 
v_h_boxed_382_ = lean_unbox_uint32(v_h_379_);
lean_dec(v_h_379_);
v_mode_boxed_383_ = lean_unbox(v_mode_380_);
v_res_384_ = lasm_fastly_http_req_framing_headers_mode_set(v_h_boxed_382_, v_mode_boxed_383_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpReq_0__Lasm_Fastly_HttpReq_registerDynamicBackendFlat___boxed(lean_object** _args){
lean_object* v_a0_418_ = _args[0];
lean_object* v_a1_419_ = _args[1];
lean_object* v_a2_420_ = _args[2];
lean_object* v_a4_421_ = _args[3];
lean_object* v_a5_422_ = _args[4];
lean_object* v_a6_423_ = _args[5];
lean_object* v_a7_424_ = _args[6];
lean_object* v_a8_425_ = _args[7];
lean_object* v_a9_426_ = _args[8];
lean_object* v_a10_427_ = _args[9];
lean_object* v_a11_428_ = _args[10];
lean_object* v_a12_429_ = _args[11];
lean_object* v_a13_430_ = _args[12];
lean_object* v_a14_431_ = _args[13];
lean_object* v_a15_432_ = _args[14];
lean_object* v_a16_433_ = _args[15];
lean_object* v_a17_434_ = _args[16];
lean_object* v_a18_435_ = _args[17];
lean_object* v_a19_436_ = _args[18];
lean_object* v_a20_437_ = _args[19];
lean_object* v_a21_438_ = _args[20];
lean_object* v_a22_439_ = _args[21];
lean_object* v_a23_440_ = _args[22];
lean_object* v_a25_441_ = _args[23];
lean_object* v_a26_442_ = _args[24];
lean_object* v_a27_443_ = _args[25];
lean_object* v_a28_444_ = _args[26];
lean_object* v_a29_445_ = _args[27];
lean_object* v_a30_446_ = _args[28];
lean_object* v_a31_447_ = _args[29];
lean_object* v_a32_448_ = _args[30];
lean_object* v_a33_449_ = _args[31];
lean_object* v_a_00___x40___internal___hyg_450_ = _args[32];
_start:
{
uint32_t v_a2_boxed_451_; uint32_t v_a5_boxed_452_; uint32_t v_a6_boxed_453_; uint32_t v_a7_boxed_454_; uint8_t v_a8_boxed_455_; uint8_t v_a9_boxed_456_; uint32_t v_a15_boxed_457_; uint32_t v_a16_boxed_458_; uint32_t v_a17_boxed_459_; uint32_t v_a18_boxed_460_; uint32_t v_a19_boxed_461_; uint32_t v_a20_boxed_462_; uint32_t v_a21_boxed_463_; uint32_t v_a22_boxed_464_; uint32_t v_a23_boxed_465_; uint64_t v_a25_boxed_466_; uint64_t v_a26_boxed_467_; uint32_t v_a30_boxed_468_; uint32_t v_a31_boxed_469_; uint32_t v_a32_boxed_470_; uint32_t v_a33_boxed_471_; lean_object* v_res_472_; 
v_a2_boxed_451_ = lean_unbox_uint32(v_a2_420_);
lean_dec(v_a2_420_);
v_a5_boxed_452_ = lean_unbox_uint32(v_a5_422_);
lean_dec(v_a5_422_);
v_a6_boxed_453_ = lean_unbox_uint32(v_a6_423_);
lean_dec(v_a6_423_);
v_a7_boxed_454_ = lean_unbox_uint32(v_a7_424_);
lean_dec(v_a7_424_);
v_a8_boxed_455_ = lean_unbox(v_a8_425_);
v_a9_boxed_456_ = lean_unbox(v_a9_426_);
v_a15_boxed_457_ = lean_unbox_uint32(v_a15_432_);
lean_dec(v_a15_432_);
v_a16_boxed_458_ = lean_unbox_uint32(v_a16_433_);
lean_dec(v_a16_433_);
v_a17_boxed_459_ = lean_unbox_uint32(v_a17_434_);
lean_dec(v_a17_434_);
v_a18_boxed_460_ = lean_unbox_uint32(v_a18_435_);
lean_dec(v_a18_435_);
v_a19_boxed_461_ = lean_unbox_uint32(v_a19_436_);
lean_dec(v_a19_436_);
v_a20_boxed_462_ = lean_unbox_uint32(v_a20_437_);
lean_dec(v_a20_437_);
v_a21_boxed_463_ = lean_unbox_uint32(v_a21_438_);
lean_dec(v_a21_438_);
v_a22_boxed_464_ = lean_unbox_uint32(v_a22_439_);
lean_dec(v_a22_439_);
v_a23_boxed_465_ = lean_unbox_uint32(v_a23_440_);
lean_dec(v_a23_440_);
v_a25_boxed_466_ = lean_unbox_uint64(v_a25_441_);
lean_dec_ref(v_a25_441_);
v_a26_boxed_467_ = lean_unbox_uint64(v_a26_442_);
lean_dec_ref(v_a26_442_);
v_a30_boxed_468_ = lean_unbox_uint32(v_a30_446_);
lean_dec(v_a30_446_);
v_a31_boxed_469_ = lean_unbox_uint32(v_a31_447_);
lean_dec(v_a31_447_);
v_a32_boxed_470_ = lean_unbox_uint32(v_a32_448_);
lean_dec(v_a32_448_);
v_a33_boxed_471_ = lean_unbox_uint32(v_a33_449_);
lean_dec(v_a33_449_);
v_res_472_ = lasm_fastly_http_req_register_dynamic_backend(v_a0_418_, v_a1_419_, v_a2_boxed_451_, v_a4_421_, v_a5_boxed_452_, v_a6_boxed_453_, v_a7_boxed_454_, v_a8_boxed_455_, v_a9_boxed_456_, v_a10_427_, v_a11_428_, v_a12_429_, v_a13_430_, v_a14_431_, v_a15_boxed_457_, v_a16_boxed_458_, v_a17_boxed_459_, v_a18_boxed_460_, v_a19_boxed_461_, v_a20_boxed_462_, v_a21_boxed_463_, v_a22_boxed_464_, v_a23_boxed_465_, v_a25_boxed_466_, v_a26_boxed_467_, v_a27_443_, v_a28_444_, v_a29_445_, v_a30_boxed_468_, v_a31_boxed_469_, v_a32_boxed_470_, v_a33_boxed_471_);
lean_dec_ref(v_a29_445_);
lean_dec_ref(v_a28_444_);
lean_dec_ref(v_a27_443_);
lean_dec_ref(v_a14_431_);
lean_dec_ref(v_a13_430_);
lean_dec_ref(v_a12_429_);
lean_dec_ref(v_a11_428_);
lean_dec_ref(v_a10_427_);
lean_dec_ref(v_a4_421_);
lean_dec_ref(v_a1_419_);
lean_dec_ref(v_a0_418_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_registerDynamicBackend(lean_object* v_namePrefix_473_, lean_object* v_target_474_, uint32_t v_backendConfigMask_475_, lean_object* v_backendConfiguration_476_){
_start:
{
lean_object* v_healthcheck_478_; lean_object* v_hostOverride_479_; uint32_t v_connectTimeoutMs_480_; uint32_t v_firstByteTimeoutMs_481_; uint32_t v_betweenBytesTimeoutMs_482_; uint8_t v_sslMinVersion_483_; uint8_t v_sslMaxVersion_484_; lean_object* v_certHostname_485_; lean_object* v_caCert_486_; lean_object* v_ciphers_487_; lean_object* v_sniHostname_488_; lean_object* v_clientCertificate_489_; uint32_t v_clientKey_490_; uint32_t v_httpKeepaliveTimeMs_491_; uint32_t v_tcpKeepaliveEnable_492_; uint32_t v_tcpKeepaliveIntervalSecs_493_; uint32_t v_tcpKeepaliveProbes_494_; uint32_t v_tcpKeepaliveTimeSecs_495_; uint32_t v_maxConnections_496_; uint32_t v_maxUse_497_; uint32_t v_maxLifetimeMs_498_; uint64_t v_intervalMs_499_; uint64_t v_timeoutMs_500_; lean_object* v_host_501_; lean_object* v_method_502_; lean_object* v_path_503_; uint32_t v_expectedStatus_504_; uint32_t v_window_505_; uint32_t v_threshold_506_; uint32_t v_initial_507_; lean_object* v___x_508_; 
v_healthcheck_478_ = lean_ctor_get(v_backendConfiguration_476_, 6);
v_hostOverride_479_ = lean_ctor_get(v_backendConfiguration_476_, 0);
v_connectTimeoutMs_480_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7);
v_firstByteTimeoutMs_481_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7 + 4);
v_betweenBytesTimeoutMs_482_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7 + 8);
v_sslMinVersion_483_ = lean_ctor_get_uint8(v_backendConfiguration_476_, sizeof(void*)*7 + 48);
v_sslMaxVersion_484_ = lean_ctor_get_uint8(v_backendConfiguration_476_, sizeof(void*)*7 + 49);
v_certHostname_485_ = lean_ctor_get(v_backendConfiguration_476_, 1);
v_caCert_486_ = lean_ctor_get(v_backendConfiguration_476_, 2);
v_ciphers_487_ = lean_ctor_get(v_backendConfiguration_476_, 3);
v_sniHostname_488_ = lean_ctor_get(v_backendConfiguration_476_, 4);
v_clientCertificate_489_ = lean_ctor_get(v_backendConfiguration_476_, 5);
v_clientKey_490_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7 + 12);
v_httpKeepaliveTimeMs_491_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7 + 16);
v_tcpKeepaliveEnable_492_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7 + 20);
v_tcpKeepaliveIntervalSecs_493_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7 + 24);
v_tcpKeepaliveProbes_494_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7 + 28);
v_tcpKeepaliveTimeSecs_495_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7 + 32);
v_maxConnections_496_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7 + 36);
v_maxUse_497_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7 + 40);
v_maxLifetimeMs_498_ = lean_ctor_get_uint32(v_backendConfiguration_476_, sizeof(void*)*7 + 44);
v_intervalMs_499_ = lean_ctor_get_uint64(v_healthcheck_478_, sizeof(void*)*3);
v_timeoutMs_500_ = lean_ctor_get_uint64(v_healthcheck_478_, sizeof(void*)*3 + 8);
v_host_501_ = lean_ctor_get(v_healthcheck_478_, 0);
v_method_502_ = lean_ctor_get(v_healthcheck_478_, 1);
v_path_503_ = lean_ctor_get(v_healthcheck_478_, 2);
v_expectedStatus_504_ = lean_ctor_get_uint32(v_healthcheck_478_, sizeof(void*)*3 + 16);
v_window_505_ = lean_ctor_get_uint32(v_healthcheck_478_, sizeof(void*)*3 + 20);
v_threshold_506_ = lean_ctor_get_uint32(v_healthcheck_478_, sizeof(void*)*3 + 24);
v_initial_507_ = lean_ctor_get_uint32(v_healthcheck_478_, sizeof(void*)*3 + 28);
v___x_508_ = lasm_fastly_http_req_register_dynamic_backend(v_namePrefix_473_, v_target_474_, v_backendConfigMask_475_, v_hostOverride_479_, v_connectTimeoutMs_480_, v_firstByteTimeoutMs_481_, v_betweenBytesTimeoutMs_482_, v_sslMinVersion_483_, v_sslMaxVersion_484_, v_certHostname_485_, v_caCert_486_, v_ciphers_487_, v_sniHostname_488_, v_clientCertificate_489_, v_clientKey_490_, v_httpKeepaliveTimeMs_491_, v_tcpKeepaliveEnable_492_, v_tcpKeepaliveIntervalSecs_493_, v_tcpKeepaliveProbes_494_, v_tcpKeepaliveTimeSecs_495_, v_maxConnections_496_, v_maxUse_497_, v_maxLifetimeMs_498_, v_intervalMs_499_, v_timeoutMs_500_, v_host_501_, v_method_502_, v_path_503_, v_expectedStatus_504_, v_window_505_, v_threshold_506_, v_initial_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_registerDynamicBackend___boxed(lean_object* v_namePrefix_509_, lean_object* v_target_510_, lean_object* v_backendConfigMask_511_, lean_object* v_backendConfiguration_512_, lean_object* v_a_513_){
_start:
{
uint32_t v_backendConfigMask_boxed_514_; lean_object* v_res_515_; 
v_backendConfigMask_boxed_514_ = lean_unbox_uint32(v_backendConfigMask_511_);
lean_dec(v_backendConfigMask_511_);
v_res_515_ = l_Lasm_Fastly_HttpReq_registerDynamicBackend(v_namePrefix_509_, v_target_510_, v_backendConfigMask_boxed_514_, v_backendConfiguration_512_);
lean_dec_ref(v_backendConfiguration_512_);
lean_dec_ref(v_target_510_);
lean_dec_ref(v_namePrefix_509_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpReq_0__Lasm_Fastly_HttpReq_inspectFlat___boxed(lean_object* v_a0_524_, lean_object* v_a1_525_, lean_object* v_a2_526_, lean_object* v_a4_527_, lean_object* v_a5_528_, lean_object* v_a6_529_, lean_object* v_a7_530_, lean_object* v_a_00___x40___internal___hyg_531_){
_start:
{
uint32_t v_a0_boxed_532_; uint32_t v_a1_boxed_533_; uint32_t v_a2_boxed_534_; uint32_t v_a7_boxed_535_; lean_object* v_res_536_; 
v_a0_boxed_532_ = lean_unbox_uint32(v_a0_524_);
lean_dec(v_a0_524_);
v_a1_boxed_533_ = lean_unbox_uint32(v_a1_525_);
lean_dec(v_a1_525_);
v_a2_boxed_534_ = lean_unbox_uint32(v_a2_526_);
lean_dec(v_a2_526_);
v_a7_boxed_535_ = lean_unbox_uint32(v_a7_530_);
lean_dec(v_a7_530_);
v_res_536_ = lasm_fastly_http_req_inspect(v_a0_boxed_532_, v_a1_boxed_533_, v_a2_boxed_534_, v_a4_527_, v_a5_528_, v_a6_529_, v_a7_boxed_535_);
lean_dec_ref(v_a6_529_);
lean_dec_ref(v_a5_528_);
lean_dec_ref(v_a4_527_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_inspect(uint32_t v_req_537_, uint32_t v_body_538_, uint32_t v_inspInfoMask_539_, lean_object* v_inspInfo_540_, uint32_t v_bufLen_541_){
_start:
{
lean_object* v_corp_543_; lean_object* v_workspace_544_; lean_object* v_overrideClientIp_545_; lean_object* v___x_546_; 
v_corp_543_ = lean_ctor_get(v_inspInfo_540_, 0);
v_workspace_544_ = lean_ctor_get(v_inspInfo_540_, 1);
v_overrideClientIp_545_ = lean_ctor_get(v_inspInfo_540_, 2);
v___x_546_ = lasm_fastly_http_req_inspect(v_req_537_, v_body_538_, v_inspInfoMask_539_, v_corp_543_, v_workspace_544_, v_overrideClientIp_545_, v_bufLen_541_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_inspect___boxed(lean_object* v_req_547_, lean_object* v_body_548_, lean_object* v_inspInfoMask_549_, lean_object* v_inspInfo_550_, lean_object* v_bufLen_551_, lean_object* v_a_552_){
_start:
{
uint32_t v_req_boxed_553_; uint32_t v_body_boxed_554_; uint32_t v_inspInfoMask_boxed_555_; uint32_t v_bufLen_boxed_556_; lean_object* v_res_557_; 
v_req_boxed_553_ = lean_unbox_uint32(v_req_547_);
lean_dec(v_req_547_);
v_body_boxed_554_ = lean_unbox_uint32(v_body_548_);
lean_dec(v_body_548_);
v_inspInfoMask_boxed_555_ = lean_unbox_uint32(v_inspInfoMask_549_);
lean_dec(v_inspInfoMask_549_);
v_bufLen_boxed_556_ = lean_unbox_uint32(v_bufLen_551_);
lean_dec(v_bufLen_551_);
v_res_557_ = l_Lasm_Fastly_HttpReq_inspect(v_req_boxed_553_, v_body_boxed_554_, v_inspInfoMask_boxed_555_, v_inspInfo_550_, v_bufLen_boxed_556_);
lean_dec_ref(v_inspInfo_550_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpReq_onBehalfOf___boxed(lean_object* v_req_561_, lean_object* v_service_562_, lean_object* v_a_00___x40___internal___hyg_563_){
_start:
{
uint32_t v_req_boxed_564_; lean_object* v_res_565_; 
v_req_boxed_564_ = lean_unbox_uint32(v_req_561_);
lean_dec(v_req_561_);
v_res_565_ = lasm_fastly_http_req_on_behalf_of(v_req_boxed_564_, v_service_562_);
lean_dec_ref(v_service_562_);
return v_res_565_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_HttpReq(uint8_t builtin) {
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
