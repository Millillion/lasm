// Lean compiler output
// Module: Lasm.JS.Deno
// Imports: public import Init public meta import Init public import Lasm.JS.Deno.Runtime public import Lasm.JS.Deno.Permissions public import Lasm.JS.Deno.Io public import Lasm.JS.Deno.Fs public import Lasm.JS.Deno.Subprocess public import Lasm.JS.Deno.Net public import Lasm.JS.Deno.Serve public import Lasm.JS.Deno.WebSockets public import Lasm.JS.Deno.Fetch public import Lasm.JS.Deno.Kv
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
lean_object* initialize_Lasm_JS_Deno_Runtime(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Permissions(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Io(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Fs(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Subprocess(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Net(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Serve(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_WebSockets(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Fetch(uint8_t builtin);
lean_object* initialize_Lasm_JS_Deno_Kv(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Deno(uint8_t builtin) {
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
res = initialize_Lasm_JS_Deno_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_Permissions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_Io(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_Fs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_Subprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_Serve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_WebSockets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Deno_Kv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
