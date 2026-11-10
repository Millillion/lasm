// Lean compiler output
// Module: Lasm.Fastly.HttpBody
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
lean_object* lasm_fastly_http_body_append(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_append___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_body_new();
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_new___boxed(lean_object*);
lean_object* lasm_fastly_http_body_read(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_read___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_body_write(uint32_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_write___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_body_close(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_close___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_body_abandon(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_abandon___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_body_trailer_append(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_trailerAppend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_body_trailer_names_get(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_trailerNamesGet___boxed(lean_object*, lean_object*);
lean_object* lasm_fastly_http_body_trailer_value_get(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_trailerValueGet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_body_trailer_values_get(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_trailerValuesGet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_http_body_known_length(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_knownLength___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_append___boxed(lean_object* v_dest_4_, lean_object* v_src_5_, lean_object* v_a_00___x40___internal___hyg_6_){
_start:
{
uint32_t v_dest_boxed_7_; uint32_t v_src_boxed_8_; lean_object* v_res_9_; 
v_dest_boxed_7_ = lean_unbox_uint32(v_dest_4_);
lean_dec(v_dest_4_);
v_src_boxed_8_ = lean_unbox_uint32(v_src_5_);
lean_dec(v_src_5_);
v_res_9_ = lasm_fastly_http_body_append(v_dest_boxed_7_, v_src_boxed_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_new___boxed(lean_object* v_a_00___x40___internal___hyg_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = lasm_fastly_http_body_new();
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_read___boxed(lean_object* v_h_16_, lean_object* v_bufLen_17_, lean_object* v_a_00___x40___internal___hyg_18_){
_start:
{
uint32_t v_h_boxed_19_; uint32_t v_bufLen_boxed_20_; lean_object* v_res_21_; 
v_h_boxed_19_ = lean_unbox_uint32(v_h_16_);
lean_dec(v_h_16_);
v_bufLen_boxed_20_ = lean_unbox_uint32(v_bufLen_17_);
lean_dec(v_bufLen_17_);
v_res_21_ = lasm_fastly_http_body_read(v_h_boxed_19_, v_bufLen_boxed_20_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_write___boxed(lean_object* v_h_26_, lean_object* v_buf_27_, lean_object* v_end_28_, lean_object* v_a_00___x40___internal___hyg_29_){
_start:
{
uint32_t v_h_boxed_30_; uint8_t v_end_boxed_31_; lean_object* v_res_32_; 
v_h_boxed_30_ = lean_unbox_uint32(v_h_26_);
lean_dec(v_h_26_);
v_end_boxed_31_ = lean_unbox(v_end_28_);
v_res_32_ = lasm_fastly_http_body_write(v_h_boxed_30_, v_buf_27_, v_end_boxed_31_);
lean_dec_ref(v_buf_27_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_close___boxed(lean_object* v_h_35_, lean_object* v_a_00___x40___internal___hyg_36_){
_start:
{
uint32_t v_h_boxed_37_; lean_object* v_res_38_; 
v_h_boxed_37_ = lean_unbox_uint32(v_h_35_);
lean_dec(v_h_35_);
v_res_38_ = lasm_fastly_http_body_close(v_h_boxed_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_abandon___boxed(lean_object* v_h_41_, lean_object* v_a_00___x40___internal___hyg_42_){
_start:
{
uint32_t v_h_boxed_43_; lean_object* v_res_44_; 
v_h_boxed_43_ = lean_unbox_uint32(v_h_41_);
lean_dec(v_h_41_);
v_res_44_ = lasm_fastly_http_body_abandon(v_h_boxed_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_trailerAppend___boxed(lean_object* v_h_49_, lean_object* v_name_50_, lean_object* v_value_51_, lean_object* v_a_00___x40___internal___hyg_52_){
_start:
{
uint32_t v_h_boxed_53_; lean_object* v_res_54_; 
v_h_boxed_53_ = lean_unbox_uint32(v_h_49_);
lean_dec(v_h_49_);
v_res_54_ = lasm_fastly_http_body_trailer_append(v_h_boxed_53_, v_name_50_, v_value_51_);
lean_dec_ref(v_value_51_);
lean_dec_ref(v_name_50_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_trailerNamesGet___boxed(lean_object* v_h_57_, lean_object* v_a_00___x40___internal___hyg_58_){
_start:
{
uint32_t v_h_boxed_59_; lean_object* v_res_60_; 
v_h_boxed_59_ = lean_unbox_uint32(v_h_57_);
lean_dec(v_h_57_);
v_res_60_ = lasm_fastly_http_body_trailer_names_get(v_h_boxed_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_trailerValueGet___boxed(lean_object* v_h_64_, lean_object* v_name_65_, lean_object* v_a_00___x40___internal___hyg_66_){
_start:
{
uint32_t v_h_boxed_67_; lean_object* v_res_68_; 
v_h_boxed_67_ = lean_unbox_uint32(v_h_64_);
lean_dec(v_h_64_);
v_res_68_ = lasm_fastly_http_body_trailer_value_get(v_h_boxed_67_, v_name_65_);
lean_dec_ref(v_name_65_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_trailerValuesGet___boxed(lean_object* v_h_72_, lean_object* v_name_73_, lean_object* v_a_00___x40___internal___hyg_74_){
_start:
{
uint32_t v_h_boxed_75_; lean_object* v_res_76_; 
v_h_boxed_75_ = lean_unbox_uint32(v_h_72_);
lean_dec(v_h_72_);
v_res_76_ = lasm_fastly_http_body_trailer_values_get(v_h_boxed_75_, v_name_73_);
lean_dec_ref(v_name_73_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_HttpBody_knownLength___boxed(lean_object* v_h_79_, lean_object* v_a_00___x40___internal___hyg_80_){
_start:
{
uint32_t v_h_boxed_81_; lean_object* v_res_82_; 
v_h_boxed_81_ = lean_unbox_uint32(v_h_79_);
lean_dec(v_h_79_);
v_res_82_ = lasm_fastly_http_body_known_length(v_h_boxed_81_);
return v_res_82_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly_HttpBody(uint8_t builtin) {
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
