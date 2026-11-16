// Lean compiler output
// Module: Lasm.JS.Cloudflare
// Imports: public import Init public meta import Init public import Lasm.JS.Cloudflare.Kv public import Lasm.JS.Cloudflare.D1 public import Lasm.JS.Cloudflare.R2 public import Lasm.JS.Cloudflare.Queues public import Lasm.JS.Cloudflare.Cache public import Lasm.JS.Cloudflare.Sockets public import Lasm.JS.Cloudflare.DurableObjects public import Lasm.JS.Cloudflare.Workers
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
lean_object* initialize_Lasm_JS_Cloudflare_Kv(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_D1(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_R2(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Queues(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Cache(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Sockets(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_DurableObjects(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Workers(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Cloudflare(uint8_t builtin) {
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
res = initialize_Lasm_JS_Cloudflare_Kv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Cloudflare_D1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Cloudflare_R2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Cloudflare_Queues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Cloudflare_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Cloudflare_Sockets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Cloudflare_DurableObjects(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Cloudflare_Workers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
