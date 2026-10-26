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
