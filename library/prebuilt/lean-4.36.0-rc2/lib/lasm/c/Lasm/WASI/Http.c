// Lean compiler output
// Module: Lasm.WASI.Http
// Imports: public import Init public meta import Init public import Lasm.WASI.Io.Error public import Lasm.WASI.Io.Poll public import Lasm.WASI.Io.Streams public import Lasm.WASI.Clocks.MonotonicClock public import Lasm.WASI.Http.Types public import Lasm.WASI.Http.OutgoingHandler public import Lasm.WASI.Http.IncomingHandler
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Io_Error(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Io_Poll(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Io_Streams(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Clocks_MonotonicClock(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Http_Types(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Http_OutgoingHandler(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Http_IncomingHandler(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_WASI_Http(uint8_t builtin) {
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
res = initialize_Lasm_WASI_Io_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_WASI_Io_Poll(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_WASI_Io_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_WASI_Clocks_MonotonicClock(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_WASI_Http_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_WASI_Http_OutgoingHandler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_WASI_Http_IncomingHandler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
