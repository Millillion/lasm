// Lean compiler output
// Module: Lasm.Fastly.HttpResp
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
lean_object* lasm_fastly_http_resp_new();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_new___boxed(lean_object*);
lean_object* lasm_fastly_http_resp_header_names_get(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerNamesGet___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_header_value_get(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerValueGet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_header_values_get(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerValuesGet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_header_values_set(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerValuesSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_header_insert(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerInsert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_header_append(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerAppend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_header_remove(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerRemove___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_version_get(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_versionGet___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_version_set(uint32_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_versionSet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_send_downstream(uint32_t, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_sendDownstream___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_send_downstream_pending(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_sendDownstreamPending___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_status_get(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_statusGet___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_status_set(uint32_t, uint16_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_statusSet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_close(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_close___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_framing_headers_mode_set(uint32_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_framingHeadersModeSet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_http_keepalive_mode_set(uint32_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_httpKeepaliveModeSet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_get_addr_dest_ip(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_getAddrDestIp___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_resp_get_addr_dest_port(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_getAddrDestPort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_new___boxed(lean_object* v_a_00___x40___internal___hyg_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lasm_fastly_http_resp_new();
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerNamesGet___boxed(lean_object* v_h_6_, lean_object* v_a_00___x40___internal___hyg_7_){
_start:
{
uint32_t v_h_boxed_8_; lean_object* v_res_9_; 
v_h_boxed_8_ = lean_unbox_uint32(v_h_6_);
lean_dec(v_h_6_);
v_res_9_ = lasm_fastly_http_resp_header_names_get(v_h_boxed_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerValueGet___boxed(lean_object* v_h_13_, lean_object* v_name_14_, lean_object* v_a_00___x40___internal___hyg_15_){
_start:
{
uint32_t v_h_boxed_16_; lean_object* v_res_17_; 
v_h_boxed_16_ = lean_unbox_uint32(v_h_13_);
lean_dec(v_h_13_);
v_res_17_ = lasm_fastly_http_resp_header_value_get(v_h_boxed_16_, v_name_14_);
lean_dec_ref(v_name_14_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerValuesGet___boxed(lean_object* v_h_21_, lean_object* v_name_22_, lean_object* v_a_00___x40___internal___hyg_23_){
_start:
{
uint32_t v_h_boxed_24_; lean_object* v_res_25_; 
v_h_boxed_24_ = lean_unbox_uint32(v_h_21_);
lean_dec(v_h_21_);
v_res_25_ = lasm_fastly_http_resp_header_values_get(v_h_boxed_24_, v_name_22_);
lean_dec_ref(v_name_22_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerValuesSet___boxed(lean_object* v_h_30_, lean_object* v_name_31_, lean_object* v_values_32_, lean_object* v_a_00___x40___internal___hyg_33_){
_start:
{
uint32_t v_h_boxed_34_; lean_object* v_res_35_; 
v_h_boxed_34_ = lean_unbox_uint32(v_h_30_);
lean_dec(v_h_30_);
v_res_35_ = lasm_fastly_http_resp_header_values_set(v_h_boxed_34_, v_name_31_, v_values_32_);
lean_dec_ref(v_values_32_);
lean_dec_ref(v_name_31_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerInsert___boxed(lean_object* v_h_40_, lean_object* v_name_41_, lean_object* v_value_42_, lean_object* v_a_00___x40___internal___hyg_43_){
_start:
{
uint32_t v_h_boxed_44_; lean_object* v_res_45_; 
v_h_boxed_44_ = lean_unbox_uint32(v_h_40_);
lean_dec(v_h_40_);
v_res_45_ = lasm_fastly_http_resp_header_insert(v_h_boxed_44_, v_name_41_, v_value_42_);
lean_dec_ref(v_value_42_);
lean_dec_ref(v_name_41_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerAppend___boxed(lean_object* v_h_50_, lean_object* v_name_51_, lean_object* v_value_52_, lean_object* v_a_00___x40___internal___hyg_53_){
_start:
{
uint32_t v_h_boxed_54_; lean_object* v_res_55_; 
v_h_boxed_54_ = lean_unbox_uint32(v_h_50_);
lean_dec(v_h_50_);
v_res_55_ = lasm_fastly_http_resp_header_append(v_h_boxed_54_, v_name_51_, v_value_52_);
lean_dec_ref(v_value_52_);
lean_dec_ref(v_name_51_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_headerRemove___boxed(lean_object* v_h_59_, lean_object* v_name_60_, lean_object* v_a_00___x40___internal___hyg_61_){
_start:
{
uint32_t v_h_boxed_62_; lean_object* v_res_63_; 
v_h_boxed_62_ = lean_unbox_uint32(v_h_59_);
lean_dec(v_h_59_);
v_res_63_ = lasm_fastly_http_resp_header_remove(v_h_boxed_62_, v_name_60_);
lean_dec_ref(v_name_60_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_versionGet___boxed(lean_object* v_h_66_, lean_object* v_a_00___x40___internal___hyg_67_){
_start:
{
uint32_t v_h_boxed_68_; lean_object* v_res_69_; 
v_h_boxed_68_ = lean_unbox_uint32(v_h_66_);
lean_dec(v_h_66_);
v_res_69_ = lasm_fastly_http_resp_version_get(v_h_boxed_68_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_versionSet___boxed(lean_object* v_h_73_, lean_object* v_version_74_, lean_object* v_a_00___x40___internal___hyg_75_){
_start:
{
uint32_t v_h_boxed_76_; uint8_t v_version_boxed_77_; lean_object* v_res_78_; 
v_h_boxed_76_ = lean_unbox_uint32(v_h_73_);
lean_dec(v_h_73_);
v_version_boxed_77_ = lean_unbox(v_version_74_);
v_res_78_ = lasm_fastly_http_resp_version_set(v_h_boxed_76_, v_version_boxed_77_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_sendDownstream___boxed(lean_object* v_h_83_, lean_object* v_b_84_, lean_object* v_streaming_85_, lean_object* v_a_00___x40___internal___hyg_86_){
_start:
{
uint32_t v_h_boxed_87_; uint32_t v_b_boxed_88_; uint32_t v_streaming_boxed_89_; lean_object* v_res_90_; 
v_h_boxed_87_ = lean_unbox_uint32(v_h_83_);
lean_dec(v_h_83_);
v_b_boxed_88_ = lean_unbox_uint32(v_b_84_);
lean_dec(v_b_84_);
v_streaming_boxed_89_ = lean_unbox_uint32(v_streaming_85_);
lean_dec(v_streaming_85_);
v_res_90_ = lasm_fastly_http_resp_send_downstream(v_h_boxed_87_, v_b_boxed_88_, v_streaming_boxed_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_sendDownstreamPending___boxed(lean_object* v_handle_93_, lean_object* v_a_00___x40___internal___hyg_94_){
_start:
{
uint32_t v_handle_boxed_95_; lean_object* v_res_96_; 
v_handle_boxed_95_ = lean_unbox_uint32(v_handle_93_);
lean_dec(v_handle_93_);
v_res_96_ = lasm_fastly_http_resp_send_downstream_pending(v_handle_boxed_95_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_statusGet___boxed(lean_object* v_h_99_, lean_object* v_a_00___x40___internal___hyg_100_){
_start:
{
uint32_t v_h_boxed_101_; lean_object* v_res_102_; 
v_h_boxed_101_ = lean_unbox_uint32(v_h_99_);
lean_dec(v_h_99_);
v_res_102_ = lasm_fastly_http_resp_status_get(v_h_boxed_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_statusSet___boxed(lean_object* v_h_106_, lean_object* v_status_107_, lean_object* v_a_00___x40___internal___hyg_108_){
_start:
{
uint32_t v_h_boxed_109_; uint16_t v_status_boxed_110_; lean_object* v_res_111_; 
v_h_boxed_109_ = lean_unbox_uint32(v_h_106_);
lean_dec(v_h_106_);
v_status_boxed_110_ = lean_unbox(v_status_107_);
v_res_111_ = lasm_fastly_http_resp_status_set(v_h_boxed_109_, v_status_boxed_110_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_close___boxed(lean_object* v_h_114_, lean_object* v_a_00___x40___internal___hyg_115_){
_start:
{
uint32_t v_h_boxed_116_; lean_object* v_res_117_; 
v_h_boxed_116_ = lean_unbox_uint32(v_h_114_);
lean_dec(v_h_114_);
v_res_117_ = lasm_fastly_http_resp_close(v_h_boxed_116_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_framingHeadersModeSet___boxed(lean_object* v_h_121_, lean_object* v_mode_122_, lean_object* v_a_00___x40___internal___hyg_123_){
_start:
{
uint32_t v_h_boxed_124_; uint8_t v_mode_boxed_125_; lean_object* v_res_126_; 
v_h_boxed_124_ = lean_unbox_uint32(v_h_121_);
lean_dec(v_h_121_);
v_mode_boxed_125_ = lean_unbox(v_mode_122_);
v_res_126_ = lasm_fastly_http_resp_framing_headers_mode_set(v_h_boxed_124_, v_mode_boxed_125_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_httpKeepaliveModeSet___boxed(lean_object* v_h_130_, lean_object* v_mode_131_, lean_object* v_a_00___x40___internal___hyg_132_){
_start:
{
uint32_t v_h_boxed_133_; uint8_t v_mode_boxed_134_; lean_object* v_res_135_; 
v_h_boxed_133_ = lean_unbox_uint32(v_h_130_);
lean_dec(v_h_130_);
v_mode_boxed_134_ = lean_unbox(v_mode_131_);
v_res_135_ = lasm_fastly_http_resp_http_keepalive_mode_set(v_h_boxed_133_, v_mode_boxed_134_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_getAddrDestIp___boxed(lean_object* v_h_138_, lean_object* v_a_00___x40___internal___hyg_139_){
_start:
{
uint32_t v_h_boxed_140_; lean_object* v_res_141_; 
v_h_boxed_140_ = lean_unbox_uint32(v_h_138_);
lean_dec(v_h_138_);
v_res_141_ = lasm_fastly_http_resp_get_addr_dest_ip(v_h_boxed_140_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpResp_getAddrDestPort___boxed(lean_object* v_h_144_, lean_object* v_a_00___x40___internal___hyg_145_){
_start:
{
uint32_t v_h_boxed_146_; lean_object* v_res_147_; 
v_h_boxed_146_ = lean_unbox_uint32(v_h_144_);
lean_dec(v_h_144_);
v_res_147_ = lasm_fastly_http_resp_get_addr_dest_port(v_h_boxed_146_);
return v_res_147_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_HttpResp(uint8_t builtin) {
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
