// Lean compiler output
// Module: Lasm.Fastly.HttpDownstream
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
lean_object* lasm_fastly_http_downstream_next_request(uint32_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpDownstream_0__Lasm_Fastly_HttpDownstream_nextRequestFlat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_nextRequest(uint32_t, uint64_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_nextRequest___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_next_request_wait(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_nextRequestWait___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_next_request_abandon(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_nextRequestAbandon___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_original_header_names(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamOriginalHeaderNames___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_original_header_count(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamOriginalHeaderCount___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_client_ip_addr(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamClientIpAddr___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_server_ip_addr(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamServerIpAddr___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_client_h2_fingerprint(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamClientH2Fingerprint___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_client_request_id(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamClientRequestId___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_client_oh_fingerprint(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamClientOhFingerprint___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_client_ddos_detected(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamClientDdosDetected___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_tls_cipher_openssl_name(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsCipherOpensslName___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_tls_protocol(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsProtocol___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_tls_client_hello(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsClientHello___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_tls_raw_client_certificate(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsRawClientCertificate___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_tls_client_cert_verify_result(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsClientCertVerifyResult___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_tls_client_servername(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsClientServername___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_tls_ja3_md5(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsJa3Md5___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_tls_ja4(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsJa4___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_compliance_region(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamComplianceRegion___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_fastly_key_is_valid(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_fastlyKeyIsValid___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_bot_analyzed(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotAnalyzed___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_bot_detected(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotDetected___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_bot_name(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotName___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_bot_category(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotCategory___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_bot_category_kind(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotCategoryKind___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_bot_verified(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotVerified___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_resvpnproxy_is_anonymous(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsAnonymous___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_resvpnproxy_is_anonymous_vpn(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsAnonymousVpn___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_resvpnproxy_is_hosting_provider(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsHostingProvider___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_resvpnproxy_is_proxy_over_vpn(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsProxyOverVpn___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_resvpnproxy_is_public_proxy(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsPublicProxy___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_resvpnproxy_is_relay_proxy(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsRelayProxy___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_resvpnproxy_is_residential_proxy(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsResidentialProxy___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_resvpnproxy_is_smart_dns_proxy(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsSmartDnsProxy___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_resvpnproxy_is_tor_exit_node(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsTorExitNode___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_resvpnproxy_is_vpn_datacenter(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsVpnDatacenter___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_resvpnproxy_vpn_service_name(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyVpnServiceName___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_visits_this_service();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamVisitsThisService___boxed(lean_object*);
lean_object* lasm_fastly_http_downstream_downstream_visits_this_pop();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamVisitsThisPop___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fastly_HttpDownstream_0__Lasm_Fastly_HttpDownstream_nextRequestFlat___boxed(lean_object* v_a0_4_, lean_object* v_a2_5_, lean_object* v_a_00___x40___internal___hyg_6_){
_start:
{
uint32_t v_a0_boxed_7_; uint64_t v_a2_boxed_8_; lean_object* v_res_9_; 
v_a0_boxed_7_ = lean_unbox_uint32(v_a0_4_);
lean_dec(v_a0_4_);
v_a2_boxed_8_ = lean_unbox_uint64(v_a2_5_);
lean_dec_ref(v_a2_5_);
v_res_9_ = lasm_fastly_http_downstream_next_request(v_a0_boxed_7_, v_a2_boxed_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_nextRequest(uint32_t v_optionsMask_10_, uint64_t v_options_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lasm_fastly_http_downstream_next_request(v_optionsMask_10_, v_options_11_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_nextRequest___boxed(lean_object* v_optionsMask_14_, lean_object* v_options_15_, lean_object* v_a_16_){
_start:
{
uint32_t v_optionsMask_boxed_17_; uint64_t v_options_boxed_18_; lean_object* v_res_19_; 
v_optionsMask_boxed_17_ = lean_unbox_uint32(v_optionsMask_14_);
lean_dec(v_optionsMask_14_);
v_options_boxed_18_ = lean_unbox_uint64(v_options_15_);
lean_dec_ref(v_options_15_);
v_res_19_ = l_Lasm_Fastly_HttpDownstream_nextRequest(v_optionsMask_boxed_17_, v_options_boxed_18_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_nextRequestWait___boxed(lean_object* v_handle_22_, lean_object* v_a_00___x40___internal___hyg_23_){
_start:
{
uint32_t v_handle_boxed_24_; lean_object* v_res_25_; 
v_handle_boxed_24_ = lean_unbox_uint32(v_handle_22_);
lean_dec(v_handle_22_);
v_res_25_ = lasm_fastly_http_downstream_next_request_wait(v_handle_boxed_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_nextRequestAbandon___boxed(lean_object* v_handle_28_, lean_object* v_a_00___x40___internal___hyg_29_){
_start:
{
uint32_t v_handle_boxed_30_; lean_object* v_res_31_; 
v_handle_boxed_30_ = lean_unbox_uint32(v_handle_28_);
lean_dec(v_handle_28_);
v_res_31_ = lasm_fastly_http_downstream_next_request_abandon(v_handle_boxed_30_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamOriginalHeaderNames___boxed(lean_object* v_req_34_, lean_object* v_a_00___x40___internal___hyg_35_){
_start:
{
uint32_t v_req_boxed_36_; lean_object* v_res_37_; 
v_req_boxed_36_ = lean_unbox_uint32(v_req_34_);
lean_dec(v_req_34_);
v_res_37_ = lasm_fastly_http_downstream_downstream_original_header_names(v_req_boxed_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamOriginalHeaderCount___boxed(lean_object* v_req_40_, lean_object* v_a_00___x40___internal___hyg_41_){
_start:
{
uint32_t v_req_boxed_42_; lean_object* v_res_43_; 
v_req_boxed_42_ = lean_unbox_uint32(v_req_40_);
lean_dec(v_req_40_);
v_res_43_ = lasm_fastly_http_downstream_downstream_original_header_count(v_req_boxed_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamClientIpAddr___boxed(lean_object* v_req_46_, lean_object* v_a_00___x40___internal___hyg_47_){
_start:
{
uint32_t v_req_boxed_48_; lean_object* v_res_49_; 
v_req_boxed_48_ = lean_unbox_uint32(v_req_46_);
lean_dec(v_req_46_);
v_res_49_ = lasm_fastly_http_downstream_downstream_client_ip_addr(v_req_boxed_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamServerIpAddr___boxed(lean_object* v_req_52_, lean_object* v_a_00___x40___internal___hyg_53_){
_start:
{
uint32_t v_req_boxed_54_; lean_object* v_res_55_; 
v_req_boxed_54_ = lean_unbox_uint32(v_req_52_);
lean_dec(v_req_52_);
v_res_55_ = lasm_fastly_http_downstream_downstream_server_ip_addr(v_req_boxed_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamClientH2Fingerprint___boxed(lean_object* v_req_58_, lean_object* v_a_00___x40___internal___hyg_59_){
_start:
{
uint32_t v_req_boxed_60_; lean_object* v_res_61_; 
v_req_boxed_60_ = lean_unbox_uint32(v_req_58_);
lean_dec(v_req_58_);
v_res_61_ = lasm_fastly_http_downstream_downstream_client_h2_fingerprint(v_req_boxed_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamClientRequestId___boxed(lean_object* v_req_64_, lean_object* v_a_00___x40___internal___hyg_65_){
_start:
{
uint32_t v_req_boxed_66_; lean_object* v_res_67_; 
v_req_boxed_66_ = lean_unbox_uint32(v_req_64_);
lean_dec(v_req_64_);
v_res_67_ = lasm_fastly_http_downstream_downstream_client_request_id(v_req_boxed_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamClientOhFingerprint___boxed(lean_object* v_req_70_, lean_object* v_a_00___x40___internal___hyg_71_){
_start:
{
uint32_t v_req_boxed_72_; lean_object* v_res_73_; 
v_req_boxed_72_ = lean_unbox_uint32(v_req_70_);
lean_dec(v_req_70_);
v_res_73_ = lasm_fastly_http_downstream_downstream_client_oh_fingerprint(v_req_boxed_72_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamClientDdosDetected___boxed(lean_object* v_req_76_, lean_object* v_a_00___x40___internal___hyg_77_){
_start:
{
uint32_t v_req_boxed_78_; lean_object* v_res_79_; 
v_req_boxed_78_ = lean_unbox_uint32(v_req_76_);
lean_dec(v_req_76_);
v_res_79_ = lasm_fastly_http_downstream_downstream_client_ddos_detected(v_req_boxed_78_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsCipherOpensslName___boxed(lean_object* v_req_82_, lean_object* v_a_00___x40___internal___hyg_83_){
_start:
{
uint32_t v_req_boxed_84_; lean_object* v_res_85_; 
v_req_boxed_84_ = lean_unbox_uint32(v_req_82_);
lean_dec(v_req_82_);
v_res_85_ = lasm_fastly_http_downstream_downstream_tls_cipher_openssl_name(v_req_boxed_84_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsProtocol___boxed(lean_object* v_req_88_, lean_object* v_a_00___x40___internal___hyg_89_){
_start:
{
uint32_t v_req_boxed_90_; lean_object* v_res_91_; 
v_req_boxed_90_ = lean_unbox_uint32(v_req_88_);
lean_dec(v_req_88_);
v_res_91_ = lasm_fastly_http_downstream_downstream_tls_protocol(v_req_boxed_90_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsClientHello___boxed(lean_object* v_req_94_, lean_object* v_a_00___x40___internal___hyg_95_){
_start:
{
uint32_t v_req_boxed_96_; lean_object* v_res_97_; 
v_req_boxed_96_ = lean_unbox_uint32(v_req_94_);
lean_dec(v_req_94_);
v_res_97_ = lasm_fastly_http_downstream_downstream_tls_client_hello(v_req_boxed_96_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsRawClientCertificate___boxed(lean_object* v_req_100_, lean_object* v_a_00___x40___internal___hyg_101_){
_start:
{
uint32_t v_req_boxed_102_; lean_object* v_res_103_; 
v_req_boxed_102_ = lean_unbox_uint32(v_req_100_);
lean_dec(v_req_100_);
v_res_103_ = lasm_fastly_http_downstream_downstream_tls_raw_client_certificate(v_req_boxed_102_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsClientCertVerifyResult___boxed(lean_object* v_req_106_, lean_object* v_a_00___x40___internal___hyg_107_){
_start:
{
uint32_t v_req_boxed_108_; lean_object* v_res_109_; 
v_req_boxed_108_ = lean_unbox_uint32(v_req_106_);
lean_dec(v_req_106_);
v_res_109_ = lasm_fastly_http_downstream_downstream_tls_client_cert_verify_result(v_req_boxed_108_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsClientServername___boxed(lean_object* v_req_112_, lean_object* v_a_00___x40___internal___hyg_113_){
_start:
{
uint32_t v_req_boxed_114_; lean_object* v_res_115_; 
v_req_boxed_114_ = lean_unbox_uint32(v_req_112_);
lean_dec(v_req_112_);
v_res_115_ = lasm_fastly_http_downstream_downstream_tls_client_servername(v_req_boxed_114_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsJa3Md5___boxed(lean_object* v_req_118_, lean_object* v_a_00___x40___internal___hyg_119_){
_start:
{
uint32_t v_req_boxed_120_; lean_object* v_res_121_; 
v_req_boxed_120_ = lean_unbox_uint32(v_req_118_);
lean_dec(v_req_118_);
v_res_121_ = lasm_fastly_http_downstream_downstream_tls_ja3_md5(v_req_boxed_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamTlsJa4___boxed(lean_object* v_req_124_, lean_object* v_a_00___x40___internal___hyg_125_){
_start:
{
uint32_t v_req_boxed_126_; lean_object* v_res_127_; 
v_req_boxed_126_ = lean_unbox_uint32(v_req_124_);
lean_dec(v_req_124_);
v_res_127_ = lasm_fastly_http_downstream_downstream_tls_ja4(v_req_boxed_126_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamComplianceRegion___boxed(lean_object* v_req_130_, lean_object* v_a_00___x40___internal___hyg_131_){
_start:
{
uint32_t v_req_boxed_132_; lean_object* v_res_133_; 
v_req_boxed_132_ = lean_unbox_uint32(v_req_130_);
lean_dec(v_req_130_);
v_res_133_ = lasm_fastly_http_downstream_downstream_compliance_region(v_req_boxed_132_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_fastlyKeyIsValid___boxed(lean_object* v_req_136_, lean_object* v_a_00___x40___internal___hyg_137_){
_start:
{
uint32_t v_req_boxed_138_; lean_object* v_res_139_; 
v_req_boxed_138_ = lean_unbox_uint32(v_req_136_);
lean_dec(v_req_136_);
v_res_139_ = lasm_fastly_http_downstream_fastly_key_is_valid(v_req_boxed_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotAnalyzed___boxed(lean_object* v_req_142_, lean_object* v_a_00___x40___internal___hyg_143_){
_start:
{
uint32_t v_req_boxed_144_; lean_object* v_res_145_; 
v_req_boxed_144_ = lean_unbox_uint32(v_req_142_);
lean_dec(v_req_142_);
v_res_145_ = lasm_fastly_http_downstream_downstream_bot_analyzed(v_req_boxed_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotDetected___boxed(lean_object* v_req_148_, lean_object* v_a_00___x40___internal___hyg_149_){
_start:
{
uint32_t v_req_boxed_150_; lean_object* v_res_151_; 
v_req_boxed_150_ = lean_unbox_uint32(v_req_148_);
lean_dec(v_req_148_);
v_res_151_ = lasm_fastly_http_downstream_downstream_bot_detected(v_req_boxed_150_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotName___boxed(lean_object* v_req_154_, lean_object* v_a_00___x40___internal___hyg_155_){
_start:
{
uint32_t v_req_boxed_156_; lean_object* v_res_157_; 
v_req_boxed_156_ = lean_unbox_uint32(v_req_154_);
lean_dec(v_req_154_);
v_res_157_ = lasm_fastly_http_downstream_downstream_bot_name(v_req_boxed_156_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotCategory___boxed(lean_object* v_req_160_, lean_object* v_a_00___x40___internal___hyg_161_){
_start:
{
uint32_t v_req_boxed_162_; lean_object* v_res_163_; 
v_req_boxed_162_ = lean_unbox_uint32(v_req_160_);
lean_dec(v_req_160_);
v_res_163_ = lasm_fastly_http_downstream_downstream_bot_category(v_req_boxed_162_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotCategoryKind___boxed(lean_object* v_req_166_, lean_object* v_a_00___x40___internal___hyg_167_){
_start:
{
uint32_t v_req_boxed_168_; lean_object* v_res_169_; 
v_req_boxed_168_ = lean_unbox_uint32(v_req_166_);
lean_dec(v_req_166_);
v_res_169_ = lasm_fastly_http_downstream_downstream_bot_category_kind(v_req_boxed_168_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamBotVerified___boxed(lean_object* v_req_172_, lean_object* v_a_00___x40___internal___hyg_173_){
_start:
{
uint32_t v_req_boxed_174_; lean_object* v_res_175_; 
v_req_boxed_174_ = lean_unbox_uint32(v_req_172_);
lean_dec(v_req_172_);
v_res_175_ = lasm_fastly_http_downstream_downstream_bot_verified(v_req_boxed_174_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsAnonymous___boxed(lean_object* v_req_178_, lean_object* v_a_00___x40___internal___hyg_179_){
_start:
{
uint32_t v_req_boxed_180_; lean_object* v_res_181_; 
v_req_boxed_180_ = lean_unbox_uint32(v_req_178_);
lean_dec(v_req_178_);
v_res_181_ = lasm_fastly_http_downstream_downstream_resvpnproxy_is_anonymous(v_req_boxed_180_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsAnonymousVpn___boxed(lean_object* v_req_184_, lean_object* v_a_00___x40___internal___hyg_185_){
_start:
{
uint32_t v_req_boxed_186_; lean_object* v_res_187_; 
v_req_boxed_186_ = lean_unbox_uint32(v_req_184_);
lean_dec(v_req_184_);
v_res_187_ = lasm_fastly_http_downstream_downstream_resvpnproxy_is_anonymous_vpn(v_req_boxed_186_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsHostingProvider___boxed(lean_object* v_req_190_, lean_object* v_a_00___x40___internal___hyg_191_){
_start:
{
uint32_t v_req_boxed_192_; lean_object* v_res_193_; 
v_req_boxed_192_ = lean_unbox_uint32(v_req_190_);
lean_dec(v_req_190_);
v_res_193_ = lasm_fastly_http_downstream_downstream_resvpnproxy_is_hosting_provider(v_req_boxed_192_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsProxyOverVpn___boxed(lean_object* v_req_196_, lean_object* v_a_00___x40___internal___hyg_197_){
_start:
{
uint32_t v_req_boxed_198_; lean_object* v_res_199_; 
v_req_boxed_198_ = lean_unbox_uint32(v_req_196_);
lean_dec(v_req_196_);
v_res_199_ = lasm_fastly_http_downstream_downstream_resvpnproxy_is_proxy_over_vpn(v_req_boxed_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsPublicProxy___boxed(lean_object* v_req_202_, lean_object* v_a_00___x40___internal___hyg_203_){
_start:
{
uint32_t v_req_boxed_204_; lean_object* v_res_205_; 
v_req_boxed_204_ = lean_unbox_uint32(v_req_202_);
lean_dec(v_req_202_);
v_res_205_ = lasm_fastly_http_downstream_downstream_resvpnproxy_is_public_proxy(v_req_boxed_204_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsRelayProxy___boxed(lean_object* v_req_208_, lean_object* v_a_00___x40___internal___hyg_209_){
_start:
{
uint32_t v_req_boxed_210_; lean_object* v_res_211_; 
v_req_boxed_210_ = lean_unbox_uint32(v_req_208_);
lean_dec(v_req_208_);
v_res_211_ = lasm_fastly_http_downstream_downstream_resvpnproxy_is_relay_proxy(v_req_boxed_210_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsResidentialProxy___boxed(lean_object* v_req_214_, lean_object* v_a_00___x40___internal___hyg_215_){
_start:
{
uint32_t v_req_boxed_216_; lean_object* v_res_217_; 
v_req_boxed_216_ = lean_unbox_uint32(v_req_214_);
lean_dec(v_req_214_);
v_res_217_ = lasm_fastly_http_downstream_downstream_resvpnproxy_is_residential_proxy(v_req_boxed_216_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsSmartDnsProxy___boxed(lean_object* v_req_220_, lean_object* v_a_00___x40___internal___hyg_221_){
_start:
{
uint32_t v_req_boxed_222_; lean_object* v_res_223_; 
v_req_boxed_222_ = lean_unbox_uint32(v_req_220_);
lean_dec(v_req_220_);
v_res_223_ = lasm_fastly_http_downstream_downstream_resvpnproxy_is_smart_dns_proxy(v_req_boxed_222_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsTorExitNode___boxed(lean_object* v_req_226_, lean_object* v_a_00___x40___internal___hyg_227_){
_start:
{
uint32_t v_req_boxed_228_; lean_object* v_res_229_; 
v_req_boxed_228_ = lean_unbox_uint32(v_req_226_);
lean_dec(v_req_226_);
v_res_229_ = lasm_fastly_http_downstream_downstream_resvpnproxy_is_tor_exit_node(v_req_boxed_228_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyIsVpnDatacenter___boxed(lean_object* v_req_232_, lean_object* v_a_00___x40___internal___hyg_233_){
_start:
{
uint32_t v_req_boxed_234_; lean_object* v_res_235_; 
v_req_boxed_234_ = lean_unbox_uint32(v_req_232_);
lean_dec(v_req_232_);
v_res_235_ = lasm_fastly_http_downstream_downstream_resvpnproxy_is_vpn_datacenter(v_req_boxed_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamResvpnproxyVpnServiceName___boxed(lean_object* v_req_238_, lean_object* v_a_00___x40___internal___hyg_239_){
_start:
{
uint32_t v_req_boxed_240_; lean_object* v_res_241_; 
v_req_boxed_240_ = lean_unbox_uint32(v_req_238_);
lean_dec(v_req_238_);
v_res_241_ = lasm_fastly_http_downstream_downstream_resvpnproxy_vpn_service_name(v_req_boxed_240_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamVisitsThisService___boxed(lean_object* v_a_00___x40___internal___hyg_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = lasm_fastly_http_downstream_downstream_visits_this_service();
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpDownstream_downstreamVisitsThisPop___boxed(lean_object* v_a_00___x40___internal___hyg_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = lasm_fastly_http_downstream_downstream_visits_this_pop();
return v_res_247_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_HttpDownstream(uint8_t builtin) {
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
