/*
 * The wasi-http host (docs/WASI.md, `lasm build --target wasi-http`): the
 * module exports wasi:http/incoming-handler@0.2.12's `handle`, which runs
 * Lean's `main` once for the request, as `wasmtime serve` and Spin's HTTP
 * trigger call it (one instance per request). The program takes the request
 * and the response outparam with Lasm.WASI.Http.IncomingHandler.take (or
 * `serve`) and answers through Lasm.WASI.Http's generated bindings
 * (library/c/lasm_wasi_http_bindings.c); when main returns without taking
 * them, the host answers 500.
 *
 * This file also holds the canonical ABI's allocator (`cabi_realloc`), which
 * the generated bindings arm around each host call that returns lists. The
 * module is wasm64 code with 32-bit memory, so wit-bindgen's C, which uses
 * native pointers, does not apply. The preview 1 calls of libc and
 * lasm_wasi.c reach the component model through Wasmtime's proxy adapter,
 * which src/wasi/wasi-component.mjs links in.
 */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <lean/lean.h>
#include "lasm_wasi.h"

/* The host imports: generated with Lasm.WASI.Http (scripts/bindings/generate-wasi-http.mjs), whose
   glue (library/c/lasm_wasi_http_bindings.c, linked into every wasi-http program) references
   every one of them, so that every program's module imports the same set. The names below are
   this file's own for them. */
#include "lasm_wasi_http_imports.h"
#define h_fields_new lasm_wit_http_types__constructor_fields
#define h_response_new lasm_wit_http_types__constructor_outgoing_response
#define h_response_set_status lasm_wit_http_types__method_outgoing_response_set_status_code
#define h_outparam_set lasm_wit_http_types__static_response_outparam_set

/* From lasm_wasi.c. */
_Noreturn void lasm_wasi_fail(const char *message);
int lasm_wasi_run_main(void);

/* The canonical ABI's allocator. The host calls it while it lifts a list or
   string into the module (and the preview 1 adapter calls it for its state on
   its first call), when the module may not call out of the component; so it
   must never reach malloc, whose mimalloc reads the clock through the adapter.
   It bumps memory that is set aside beforehand instead:
   - before every host call that can return lists, `armed` selects a scratch
     buffer (2 MiB, from malloc, made before the call), reset at each call:
     callers copy what they need before the next host call;
   - otherwise (the adapter's own allocations) a static arena that is never
     reused. */
#define SCRATCH_SIZE ((size_t)2 << 20)
static _Alignas(16) uint8_t cabi_arena[256 * 1024];
static size_t cabi_used;
static uint8_t *scratch; static size_t scratch_used; static bool armed;
void lasm_wasi_http_arm(void) {
    if (!scratch && !(scratch = malloc(SCRATCH_SIZE))) abort();
    scratch_used = 0; armed = true;
}
void lasm_wasi_http_disarm(void) { armed = false; }
__attribute__((export_name("cabi_realloc"))) uint32_t cabi_realloc(uint32_t pointer, uint32_t old_size, uint32_t align, uint32_t size) {
    if (!size) return align;
    size_t a = align < 8 ? 8 : align;
    uint8_t *base = armed ? scratch : cabi_arena;
    size_t *used = armed ? &scratch_used : &cabi_used, capacity = armed ? SCRATCH_SIZE : sizeof(cabi_arena);
    size_t at = (*used + a - 1) & ~(a - 1);
    if (at + size > capacity) lasm_wasi_fail(armed ? "Lasm wasi-http: a value from the host exceeds the 2 MiB buffer for it"
        : "Lasm wasi-http: the preview 1 adapter's state exceeds its 256 KiB arena");
    *used = at + size;
    void *old = (void *)(uintptr_t)pointer;
    if (old && old_size) memcpy(base + at, old, old_size < size ? old_size : size);
    return P(base + at);
}

static uint32_t incoming_request, response_outparam;
/* The export: one request per instance. */
__attribute__((export_name("wasi:http/incoming-handler@0.2.12#handle"))) void lasm_wasi_http_handle(uint32_t request, uint32_t outparam) {
    incoming_request = request; response_outparam = outparam;
    lasm_wasi_run_main();
    if (response_outparam) {
        /* main returned without answering: 500. */
        uint32_t response = h_response_new(h_fields_new());
        h_response_set_status(response, 500);
        h_outparam_set(response_outparam, 0, response, 0, 0, 0, 0, 0, 0);
    }
}

/* Lasm.WASI.Http.IncomingHandler.take: the program takes both handles (no 500 is sent for
   it when main returns). */
bool lasm_wasi_http_take(uint32_t *request, uint32_t *response_out) {
    if (!incoming_request || !response_outparam) return false;
    *request = incoming_request; *response_out = response_outparam;
    incoming_request = 0; response_outparam = 0;
    return true;
}
