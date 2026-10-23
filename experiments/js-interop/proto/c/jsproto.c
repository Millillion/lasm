/*
 * Phase 4 step 1 threading prototype (throwaway): Lean -> JavaScript calls for
 * Lasm. The same object is linked into two configurations:
 *   A (message passing): Lean runs on a pthread (PROXY_TO_PTHREAD); every call
 *     crosses to Node's main thread through the runtime's shared-memory slot RPC
 *     (lasm_node_call), served by experiments/js-interop/host/jsproto-host.mjs.
 *   B (JSPI): Lean main runs on Node's main thread; lasm_node_call is a direct,
 *     possibly suspending, import (experiments/js-interop/jspi/host-library-jspi.js).
 * Operations 200-229 are prototype-only and handled by jsproto-host.mjs.
 */
#include <lean/lean.h>
#include <stdint.h>
#include <stddef.h>

void *malloc(size_t size);
void free(void *pointer);
void *memcpy(void *destination, const void *source, size_t size);
void *memset(void *destination, int value, size_t size);

#ifdef __EMSCRIPTEN__
extern int64_t lasm_node_call(uint32_t operation, uint32_t handle, uint64_t argument, const uint8_t *input, size_t length);
extern void lasm_node_copy(uint8_t *output, size_t length);
extern void lasm_node_release(uint32_t handle);
extern int emscripten_futex_wait(volatile void *address, uint32_t value, double maxWaitMilliseconds);
extern int emscripten_futex_wake(volatile void *address, int count);
extern lean_object *lean_uv_random(uint64_t size);

typedef struct { int failed; uint8_t *bytes; size_t size; } reply_t;
static reply_t host_call(uint32_t op, uint32_t handle, uint64_t arg, const void *input, size_t length) {
    reply_t r;
    int64_t n = lasm_node_call(op, handle, arg, (const uint8_t *)input, length);
    r.failed = n < 0;
    r.size = r.failed ? (size_t)(-(n + 1)) : (size_t)n;
    r.bytes = (uint8_t *)malloc(r.size ? r.size : 1);
    lasm_node_copy(r.bytes, r.size);
    return r;
}
/* Host failures carry [u64 kind][u64 errno][message]. */
static lean_obj_res host_error(reply_t r) {
    lean_object *message = r.size >= 16 ? lean_mk_string_from_bytes((const char *)r.bytes + 16, r.size - 16)
                                        : lean_mk_string("JavaScript call failed");
    free(r.bytes);
    return lean_io_result_mk_error(lean_mk_io_user_error(message));
}
static lean_obj_res reply_string(reply_t r) {
    if (r.failed) return host_error(r);
    lean_object *s = lean_mk_string_from_bytes((const char *)r.bytes, r.size);
    free(r.bytes);
    return lean_io_result_mk_ok(s);
}
static lean_obj_res reply_unit(reply_t r) {
    if (r.failed) return host_error(r);
    free(r.bytes);
    return lean_io_result_mk_ok(lean_box(0));
}
static uint64_t reply_u64(reply_t r) { uint64_t v = 0; if (r.size >= 8) memcpy(&v, r.bytes, 8); return v; }

/* ---- JavaScript values as Lean external objects (handle table on the host) ---- */
static void js_value_finalize(void *p) { lasm_node_release((uint32_t)(uintptr_t)p); }
static void js_value_foreach(void *p, b_lean_obj_arg f) { (void)p; (void)f; }
static lean_external_class *js_value_class_ptr;
static lean_external_class *js_value_class(void) {
    if (!js_value_class_ptr) js_value_class_ptr = lean_register_external_class(js_value_finalize, js_value_foreach);
    return js_value_class_ptr;
}
static uint32_t js_handle(b_lean_obj_arg o) { return (uint32_t)(uintptr_t)lean_get_external_data(o); }

/* (u : Unit) : IO Unit -- op 200, a no-op round trip. */
LEAN_EXPORT lean_obj_res jsproto_noop(void) { return reply_unit(host_call(200, 0, 0, NULL, 0)); }
/* Math.random() -- op 201, 8 bytes of float64. */
LEAN_EXPORT lean_obj_res jsproto_random(void) {
    reply_t r = host_call(201, 0, 0, NULL, 0);
    if (r.failed) return host_error(r);
    double d = 0; if (r.size >= 8) memcpy(&d, r.bytes, 8); free(r.bytes);
    return lean_io_result_mk_ok(lean_box_float(d));
}
/* JS.global "a.b.c" : IO JSValue -- op 202 */
LEAN_EXPORT lean_obj_res jsproto_global(b_lean_obj_arg path) {
    reply_t r = host_call(202, 0, 0, (const uint8_t *)lean_string_cstr(path), lean_string_size(path) - 1);
    if (r.failed) return host_error(r);
    uint32_t h = (uint32_t)reply_u64(r); free(r.bytes);
    return lean_io_result_mk_ok(lean_alloc_external(js_value_class(), (void *)(uintptr_t)h));
}
/* call (f : @& JSValue) (argsJson : @& String) : IO String -- op 203: f(...JSON.parse(args)), JSON result.
   A promise result is awaited by the host before replying (blocking await). */
LEAN_EXPORT lean_obj_res jsproto_call_json(b_lean_obj_arg f, b_lean_obj_arg args) {
    return reply_string(host_call(203, js_handle(f), 0, (const uint8_t *)lean_string_cstr(args), lean_string_size(args) - 1));
}
/* Blocking await of an already-resolved promise -- op 204. */
LEAN_EXPORT lean_obj_res jsproto_await_block(b_lean_obj_arg s) {
    return reply_string(host_call(204, 0, 0, (const uint8_t *)lean_string_cstr(s), lean_string_size(s) - 1));
}
/* Await as a Lean promise -- op 94 (start + completion), inner op 205 returns Promise.resolve(bytes).
   (p : @& IO.Promise (Except IO.Error ByteArray)) (input : @& ByteArray) : IO Unit
   The runtime's completion thread resolves `p` with Except.ok bytes / Except.error. */
static int completion_started;
LEAN_EXPORT lean_obj_res jsproto_await_into(b_lean_obj_arg promise, uint32_t op, b_lean_obj_arg input) {
   
    if (!completion_started) { completion_started = 1; lean_dec(lean_uv_random(1)); } /* starts the runtime's completion thread */
    lean_inc(promise); lean_mark_mt(promise);
    size_t size = lean_sarray_size(input);
    uint64_t header[6] = { (uint64_t)(uintptr_t)promise, (uint64_t)(uintptr_t)lean_box(0), 8, 0, op, 0 };
    uint8_t *packet = (uint8_t *)malloc(sizeof(header) + size + 1);
    memcpy(packet, header, sizeof(header));
    if (size) memcpy(packet + sizeof(header), lean_sarray_cptr(input), size);
    reply_t r = host_call(94, 0, 0, packet, sizeof(header) + size);
    free(packet);
    return reply_unit(r);
}
/* Throws a JavaScript TypeError -- op 206 (error crossing JS -> Lean). */
LEAN_EXPORT lean_obj_res jsproto_throw(b_lean_obj_arg message) {
    return reply_unit(host_call(206, 0, 0, (const uint8_t *)lean_string_cstr(message), lean_string_size(message) - 1));
}
/* A fresh JavaScript object handle -- op 207; host statistics as JSON -- op 208. */
LEAN_EXPORT lean_obj_res jsproto_new_object(void) {
    reply_t r = host_call(207, 0, 0, NULL, 0);
    if (r.failed) return host_error(r);
    uint32_t h = (uint32_t)reply_u64(r); free(r.bytes);
    return lean_io_result_mk_ok(lean_alloc_external(js_value_class(), (void *)(uintptr_t)h));
}
LEAN_EXPORT lean_obj_res jsproto_stats(void) { return reply_string(host_call(208, 0, 0, NULL, 0)); }

/* ---- JS -> Lean asynchronous callbacks (configuration A: queued to the Lean side) ----
   op 210: start a Node http server (port) whose handler awaits a Lean callback per request.
   op 211: (replies) -> next batch of pending callback invocations, waiting while none.
     replies/batch encoding: repeated [u64 id][u32 status][u32 length][bytes]. */
LEAN_EXPORT lean_obj_res jsproto_serve(uint16_t port, uint32_t mode) {
    reply_t r = host_call(210, mode, port, NULL, 0);
    if (r.failed) return host_error(r);
    uint64_t p = reply_u64(r); free(r.bytes);
    return lean_io_result_mk_ok(lean_box((size_t)p));
}
LEAN_EXPORT lean_obj_res jsproto_exchange(b_lean_obj_arg replies) {
    reply_t r = host_call(211, 0, 0, lean_sarray_cptr(replies), lean_sarray_size(replies));
    if (r.failed) return host_error(r);
    lean_object *o = lean_alloc_sarray(1, r.size, r.size);
    if (r.size) memcpy(lean_sarray_cptr(o), r.bytes, r.size);
    free(r.bytes);
    return lean_io_result_mk_ok(o);
}

/* op 212: replies [(id, status, body)] without waiting for new callbacks (mode 3). */
LEAN_EXPORT lean_obj_res jsproto_reply(b_lean_obj_arg replies) {
    return reply_unit(host_call(212, 0, 0, lean_sarray_cptr(replies), lean_sarray_size(replies)));
}
/* op 209: a promise that resolves with the same bytes after a 0-1 ms timer. */
LEAN_EXPORT lean_obj_res jsproto_delay_echo(b_lean_obj_arg s) {
    return reply_string(host_call(209, 0, 0, (const uint8_t *)lean_string_cstr(s), lean_string_size(s) - 1));
}

/* ---- Synchronous JS -> Lean callback (Array.prototype.sort comparator) ----
   (A) The Lean thread asks the host to sort (op 220) and then serves comparator
   requests from a shared-memory slot until the host reports completion; the
   host's main thread blocks in Atomics.wait for each comparison.
   Slot: i32 state (0 idle, 1 compare request, 2 compare reply, 3 done), i32 result, f64 a, f64 b. */
typedef struct { volatile int32_t state; volatile int32_t result; double a; double b; } compare_slot;
/* (xs : @& FloatArray) (cmp : Float -> Float -> Int8 as UInt8) : IO FloatArray -- comparisons count in the host stats */
LEAN_EXPORT lean_obj_res jsproto_sort(b_lean_obj_arg xs, b_lean_obj_arg cmp) {
   
    compare_slot *slot = (compare_slot *)malloc(sizeof(compare_slot));
    memset(slot, 0, sizeof(*slot));
    size_t n = lean_sarray_size(xs);
    reply_t started = host_call(220, 0, (uint64_t)(uintptr_t)slot, (const uint8_t *)lean_float_array_cptr(xs), n * sizeof(double));
    if (started.failed) { free(slot); return host_error(started); }
    free(started.bytes);
    for (;;) {
        int32_t s = __atomic_load_n(&slot->state, __ATOMIC_SEQ_CST);
        if (s == 3) break;
        if (s != 1) { emscripten_futex_wait(&slot->state, (uint32_t)s, 1e9); continue; }
        lean_inc(cmp);
        lean_object *r = lean_apply_2(cmp, lean_box_float(slot->a), lean_box_float(slot->b));
        slot->result = (int32_t)(int8_t)lean_unbox(r);
        __atomic_store_n(&slot->state, 2, __ATOMIC_SEQ_CST);
        emscripten_futex_wake(&slot->state, 1);
    }
    free(slot);
    reply_t r = host_call(221, 0, 0, NULL, 0);
    if (r.failed) return host_error(r);
    size_t m = r.size / sizeof(double);
    lean_object *out = lean_alloc_sarray(sizeof(double), m, m);
    memcpy(lean_float_array_cptr(out), r.bytes, m * sizeof(double));
    free(r.bytes);
    return lean_io_result_mk_ok(out);
}

/* ---- Exports for configuration B (JSPI): JavaScript calls Lean closures directly ---- */
/* Apply a registered Lean closure (String -> IO String) to a C string; the result is a malloc'ed C string. */
static lean_object *registered[64];
LEAN_EXPORT lean_obj_res jsproto_register(uint32_t slot, lean_obj_arg f) {
    if (slot < 64) { if (registered[slot]) lean_dec(registered[slot]); lean_mark_mt(f); registered[slot] = f; }
    return lean_io_result_mk_ok(lean_box(0));
}
static char *invoke(uint32_t slot, const char *input, size_t length, int *failed) {
    lean_object *f = registered[slot];
    lean_inc(f);
    lean_object *r = lean_apply_2(f, lean_mk_string_from_bytes(input, length), lean_io_mk_world());
    lean_object *s;
    if (lean_io_result_is_ok(r)) { s = lean_io_result_get_value(r); lean_inc(s); *failed = 0; }
    else { s = lean_mk_string("Lean callback raised an IO error"); *failed = 1; }
    lean_dec(r);
    size_t n = lean_string_size(s) - 1;
    char *out = (char *)malloc(n + 1);
    memcpy(out, lean_string_cstr(s), n + 1);
    lean_dec(s);
    return out;
}
__attribute__((used, visibility("default"))) char *jsproto_invoke_async(uint32_t slot, const char *input, size_t length, int *failed) { return invoke(slot, input, length, failed); }
__attribute__((used, visibility("default"))) char *jsproto_invoke_sync(uint32_t slot, const char *input, size_t length, int *failed) { return invoke(slot, input, length, failed); }
/* B's comparator: (Float -> Float -> Int8) registered closure applied synchronously. */
static lean_object *comparator;
LEAN_EXPORT lean_obj_res jsproto_set_comparator(lean_obj_arg f) {
    if (comparator) lean_dec(comparator); comparator = f; return lean_io_result_mk_ok(lean_box(0));
}
__attribute__((used, visibility("default"))) int32_t jsproto_compare(double a, double b) {
    lean_inc(comparator);
    lean_object *r = lean_apply_2(comparator, lean_box_float(a), lean_box_float(b));
    return (int32_t)(int8_t)lean_unbox(r);
}
/* B's in-process sort: op 222 sorts on the calling (main) thread through jsproto_compare. */
LEAN_EXPORT lean_obj_res jsproto_sort_direct(b_lean_obj_arg xs, lean_obj_arg cmp) {
   
    if (comparator) lean_dec(comparator);
    comparator = cmp;
    size_t n = lean_sarray_size(xs);
    reply_t r = host_call(222, 0, 0, (const uint8_t *)lean_float_array_cptr(xs), n * sizeof(double));
    if (r.failed) return host_error(r);
    size_t m = r.size / sizeof(double);
    lean_object *out = lean_alloc_sarray(sizeof(double), m, m);
    memcpy(lean_float_array_cptr(out), r.bytes, m * sizeof(double));
    free(r.bytes);
    return lean_io_result_mk_ok(out);
}
#else
static lean_obj_res unsupported(void) { return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string("JavaScript interop requires Lasm"))); }
LEAN_EXPORT lean_obj_res jsproto_noop(void) { return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_random(void) { return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_global(b_lean_obj_arg p) { (void)p; return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_call_json(b_lean_obj_arg f, b_lean_obj_arg a) { (void)f; (void)a; return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_await_block(b_lean_obj_arg s) { (void)s; return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_await_into(b_lean_obj_arg p, uint32_t op, b_lean_obj_arg i) { (void)p; (void)op; (void)i; return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_throw(b_lean_obj_arg m) { (void)m; return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_new_object(void) { return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_stats(void) { return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_serve(uint16_t p, uint32_t m) { (void)p; (void)m; return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_exchange(b_lean_obj_arg r) { (void)r; return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_reply(b_lean_obj_arg r) { (void)r; return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_delay_echo(b_lean_obj_arg s) { (void)s; return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_sort(b_lean_obj_arg x, b_lean_obj_arg c) { (void)x; (void)c; return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_register(uint32_t s, lean_obj_arg f) { (void)s; lean_dec(f); return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_set_comparator(lean_obj_arg f) { lean_dec(f); return unsupported(); }
LEAN_EXPORT lean_obj_res jsproto_sort_direct(b_lean_obj_arg x, lean_obj_arg c) { (void)x; lean_dec(c); return unsupported(); }
#endif
