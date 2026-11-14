// Lean compiler output
// Module: Lasm.Fastly.Backend
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
lean_object* lasm_fastly_backend_exists(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_exists___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_is_healthy(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_isHealthy___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_is_dynamic(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_isDynamic___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_host(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getHost___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_override_host(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getOverrideHost___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_port(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getPort___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_connect_timeout_ms(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getConnectTimeoutMs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_first_byte_timeout_ms(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getFirstByteTimeoutMs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_between_bytes_timeout_ms(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getBetweenBytesTimeoutMs___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_http_keepalive_time(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getHttpKeepaliveTime___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_tcp_keepalive_enable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getTcpKeepaliveEnable___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_tcp_keepalive_interval(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getTcpKeepaliveInterval___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_tcp_keepalive_probes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getTcpKeepaliveProbes___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_tcp_keepalive_time(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getTcpKeepaliveTime___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_is_ssl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_isSsl___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_ssl_min_version(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getSslMinVersion___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_backend_get_ssl_max_version(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getSslMaxVersion___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_exists___boxed(lean_object* v_backend_3_, lean_object* v_a_00___x40___internal___hyg_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = lasm_fastly_backend_exists(v_backend_3_);
lean_dec_ref(v_backend_3_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_isHealthy___boxed(lean_object* v_backend_8_, lean_object* v_a_00___x40___internal___hyg_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = lasm_fastly_backend_is_healthy(v_backend_8_);
lean_dec_ref(v_backend_8_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_isDynamic___boxed(lean_object* v_backend_13_, lean_object* v_a_00___x40___internal___hyg_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = lasm_fastly_backend_is_dynamic(v_backend_13_);
lean_dec_ref(v_backend_13_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getHost___boxed(lean_object* v_backend_18_, lean_object* v_a_00___x40___internal___hyg_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = lasm_fastly_backend_get_host(v_backend_18_);
lean_dec_ref(v_backend_18_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getOverrideHost___boxed(lean_object* v_backend_23_, lean_object* v_a_00___x40___internal___hyg_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = lasm_fastly_backend_get_override_host(v_backend_23_);
lean_dec_ref(v_backend_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getPort___boxed(lean_object* v_backend_28_, lean_object* v_a_00___x40___internal___hyg_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = lasm_fastly_backend_get_port(v_backend_28_);
lean_dec_ref(v_backend_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getConnectTimeoutMs___boxed(lean_object* v_backend_33_, lean_object* v_a_00___x40___internal___hyg_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = lasm_fastly_backend_get_connect_timeout_ms(v_backend_33_);
lean_dec_ref(v_backend_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getFirstByteTimeoutMs___boxed(lean_object* v_backend_38_, lean_object* v_a_00___x40___internal___hyg_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = lasm_fastly_backend_get_first_byte_timeout_ms(v_backend_38_);
lean_dec_ref(v_backend_38_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getBetweenBytesTimeoutMs___boxed(lean_object* v_backend_43_, lean_object* v_a_00___x40___internal___hyg_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = lasm_fastly_backend_get_between_bytes_timeout_ms(v_backend_43_);
lean_dec_ref(v_backend_43_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getHttpKeepaliveTime___boxed(lean_object* v_backend_48_, lean_object* v_a_00___x40___internal___hyg_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lasm_fastly_backend_get_http_keepalive_time(v_backend_48_);
lean_dec_ref(v_backend_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getTcpKeepaliveEnable___boxed(lean_object* v_backend_53_, lean_object* v_a_00___x40___internal___hyg_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = lasm_fastly_backend_get_tcp_keepalive_enable(v_backend_53_);
lean_dec_ref(v_backend_53_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getTcpKeepaliveInterval___boxed(lean_object* v_backend_58_, lean_object* v_a_00___x40___internal___hyg_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = lasm_fastly_backend_get_tcp_keepalive_interval(v_backend_58_);
lean_dec_ref(v_backend_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getTcpKeepaliveProbes___boxed(lean_object* v_backend_63_, lean_object* v_a_00___x40___internal___hyg_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = lasm_fastly_backend_get_tcp_keepalive_probes(v_backend_63_);
lean_dec_ref(v_backend_63_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getTcpKeepaliveTime___boxed(lean_object* v_backend_68_, lean_object* v_a_00___x40___internal___hyg_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = lasm_fastly_backend_get_tcp_keepalive_time(v_backend_68_);
lean_dec_ref(v_backend_68_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_isSsl___boxed(lean_object* v_backend_73_, lean_object* v_a_00___x40___internal___hyg_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = lasm_fastly_backend_is_ssl(v_backend_73_);
lean_dec_ref(v_backend_73_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getSslMinVersion___boxed(lean_object* v_backend_78_, lean_object* v_a_00___x40___internal___hyg_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = lasm_fastly_backend_get_ssl_min_version(v_backend_78_);
lean_dec_ref(v_backend_78_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_Backend_getSslMaxVersion___boxed(lean_object* v_backend_83_, lean_object* v_a_00___x40___internal___hyg_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = lasm_fastly_backend_get_ssl_max_version(v_backend_83_);
lean_dec_ref(v_backend_83_);
return v_res_85_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_Backend(uint8_t builtin) {
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
