// Lean compiler output
// Module: Lasm.JS.Bun
// Imports: public import Init public meta import Init public import Lasm.JS.Bun.Core public import Lasm.JS.Bun.Serve public import Lasm.JS.Bun.Shell public import Lasm.JS.Bun.Sqlite public import Lasm.JS.Bun.Sql public import Lasm.JS.Bun.Redis public import Lasm.JS.Bun.S3
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
lean_object* initialize_Lasm_JS_Bun_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Bun_Serve(uint8_t builtin);
lean_object* initialize_Lasm_JS_Bun_Shell(uint8_t builtin);
lean_object* initialize_Lasm_JS_Bun_Sqlite(uint8_t builtin);
lean_object* initialize_Lasm_JS_Bun_Sql(uint8_t builtin);
lean_object* initialize_Lasm_JS_Bun_Redis(uint8_t builtin);
lean_object* initialize_Lasm_JS_Bun_S3(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Bun(uint8_t builtin) {
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
res = initialize_Lasm_JS_Bun_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Bun_Serve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Bun_Shell(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Bun_Sqlite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Bun_Sql(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Bun_Redis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Bun_S3(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
