// Lean compiler output
// Module: Lasm.WASI.Http.OutgoingHandler
// Imports: public import Init public meta import Init public import Lasm.WASI.Http.Types
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
lean_object* lasm_wasi_http_outgoing_handler_handle(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_OutgoingHandler_handle___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_OutgoingHandler_handle___boxed(lean_object* v_request_4_, lean_object* v_options_5_, lean_object* v_a_00___x40___internal___hyg_6_){
_start:
{
uint32_t v_request_boxed_7_; lean_object* v_res_8_; 
v_request_boxed_7_ = lean_unbox_uint32(v_request_4_);
lean_dec(v_request_4_);
v_res_8_ = lasm_wasi_http_outgoing_handler_handle(v_request_boxed_7_, v_options_5_);
lean_dec(v_options_5_);
return v_res_8_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Http_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_WASI_Http_OutgoingHandler(uint8_t builtin) {
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
res = initialize_Lasm_WASI_Http_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
