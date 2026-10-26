/*
 * Lasm.Fetch (library/Lasm/Fetch.lean, docs/FETCH.md): the C glue of Node,
 * edge and native builds. There requests arrive through JavaScript (Lasm.JS),
 * so only the platform query is implemented here. WASI and Fastly builds link
 * src/wasi/lasm_fetch_wasi.c instead, which reads and answers the request.
 */
#include <lean/lean.h>
#include <stdint.h>

#ifdef __EMSCRIPTEN__
LEAN_EXPORT uint32_t lasm_fetch_platform(lean_obj_arg unit) { (void)unit; return 0; }
#else
LEAN_EXPORT uint32_t lasm_fetch_platform(lean_obj_arg unit) { (void)unit; return 3; }
#endif

static lean_obj_res unavailable(void) {
    return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string(
        "Lasm.Fetch: this build receives requests through JavaScript; use Lasm.Fetch.serve")));
}
LEAN_EXPORT lean_obj_res lasm_fetch_take_request(void) { return unavailable(); }
LEAN_EXPORT lean_obj_res lasm_fetch_send_response(uint16_t status, b_lean_obj_arg headers, b_lean_obj_arg body) {
    (void)status; (void)headers; (void)body; return unavailable();
}
LEAN_EXPORT lean_obj_res lasm_fetch_send(b_lean_obj_arg promise, b_lean_obj_arg method, b_lean_obj_arg url, b_lean_obj_arg headers,
    b_lean_obj_arg body, b_lean_obj_arg backend) {
    (void)promise; (void)method; (void)url; (void)headers; (void)body; (void)backend; return unavailable();
}
LEAN_EXPORT lean_obj_res lasm_fetch_take_request_head(void) { return unavailable(); }
LEAN_EXPORT lean_obj_res lasm_fetch_read(uint32_t max) { (void)max; return unavailable(); }
LEAN_EXPORT lean_obj_res lasm_fetch_start_response(uint16_t status, b_lean_obj_arg headers) { (void)status; (void)headers; return unavailable(); }
LEAN_EXPORT lean_obj_res lasm_fetch_write(b_lean_obj_arg chunk) { (void)chunk; return unavailable(); }
LEAN_EXPORT lean_obj_res lasm_fetch_finish(uint8_t ok) { (void)ok; return unavailable(); }

/* Lasm.Fastly (library/Lasm/Fastly.lean): only on --target fastly. */
static lean_obj_res fastly_only(void) {
    return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string(
        "Lasm.Fastly: Fastly stores are available only in programs built with lasm build --target fastly")));
}
LEAN_EXPORT lean_obj_res lasm_fastly_config_get(b_lean_obj_arg store, b_lean_obj_arg key) { (void)store; (void)key; return fastly_only(); }
LEAN_EXPORT lean_obj_res lasm_fastly_secret_get(b_lean_obj_arg store, b_lean_obj_arg key) { (void)store; (void)key; return fastly_only(); }
LEAN_EXPORT lean_obj_res lasm_fastly_kv_get(b_lean_obj_arg store, b_lean_obj_arg key) { (void)store; (void)key; return fastly_only(); }
LEAN_EXPORT lean_obj_res lasm_fastly_kv_put(b_lean_obj_arg store, b_lean_obj_arg key, b_lean_obj_arg value) { (void)store; (void)key; (void)value; return fastly_only(); }
LEAN_EXPORT lean_obj_res lasm_fastly_kv_delete(b_lean_obj_arg store, b_lean_obj_arg key) { (void)store; (void)key; return fastly_only(); }
