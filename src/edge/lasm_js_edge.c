/*
 * Lasm.JS C glue for the edge profile (Phase 7, docs/EDGE.md): the same Lean ABI
 * as library/c/lasm_js.c (the Lean library is unchanged), on one thread.
 *   - Host calls are direct JavaScript calls (edge-library.js). A call whose
 *     result is a promise (a blocking `IO` await) is pending: the runtime's
 *     lasm_edge_await_call waits for it, suspending with JSPI.
 *   - There is no interop thread: the edge pump (runtime/edge.cpp) calls
 *     lasm_js_edge_poll, which takes the host's queued events (op 209 replies
 *     at once, empty when none is queued): promise settlements, calls of Lean
 *     functions (run as tasks by the Lean dispatcher) and releases.
 *   - Synchronous callbacks are a direct export call (lasm_js_edge_sync).
 */
#include <lean/lean.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

void *malloc(size_t size);
void free(void *pointer);
void *memcpy(void *destination, const void *source, size_t size);

#define LASM_EDGE_PENDING INT64_MIN
extern int64_t lasm_node_call(uint32_t operation, uint32_t handle, uint64_t argument, const uint8_t *input, size_t length);
extern int64_t lasm_edge_await_call(void);
extern void lasm_node_copy(uint8_t *output, size_t length);
extern void lasm_node_release(uint32_t handle);
extern lean_object *lean_io_promise_resolve(lean_object *value, lean_object *promise);

typedef struct { int failed; uint8_t *bytes; size_t size; } reply_t;
#define RELEASE_CAPACITY 1024
static uint32_t released[RELEASE_CAPACITY];
static size_t released_count;
static reply_t host_call_raw(uint32_t op, uint32_t handle, uint64_t arg, const uint8_t *input, size_t length) {
    reply_t r;
    int64_t n = lasm_node_call(op, handle, arg, input, length);
    if (n == LASM_EDGE_PENDING) n = lasm_edge_await_call();
    r.failed = n < 0;
    r.size = r.failed ? (size_t)(-(n + 1)) : (size_t)n;
    r.bytes = (uint8_t *)malloc(r.size ? r.size : 1);
    lasm_node_copy(r.bytes, r.size);
    return r;
}
static reply_t host_call(uint32_t op, uint32_t handle, uint64_t arg, const uint8_t *input, size_t length) {
    uint32_t count = (uint32_t)released_count;
    size_t prefix = 4 + (size_t)count * 4;
    uint8_t *request = (uint8_t *)malloc(prefix + length + 1);
    memcpy(request, &count, 4);
    if (count) memcpy(request + 4, released, (size_t)count * 4);
    released_count = 0;
    if (length) memcpy(request + prefix, input, length);
    reply_t r = host_call_raw(op, handle, arg, request, prefix + length);
    free(request);
    return r;
}
static lean_object *failure_message(reply_t r) {
    lean_object *message = r.size >= 16 ? lean_mk_string_from_bytes((const char *)r.bytes + 16, r.size - 16)
                                        : lean_mk_string("JavaScript call failed");
    free(r.bytes);
    return message;
}
static lean_object *bytes_of(const uint8_t *data, size_t size) {
    lean_object *o = lean_alloc_sarray(1, size, size);
    if (size) memcpy(lean_sarray_cptr(o), data, size);
    return o;
}
static lean_obj_res reply_bytes(reply_t r) {
    if (r.failed) return lean_io_result_mk_error(lean_mk_io_user_error(failure_message(r)));
    lean_object *o = bytes_of(r.bytes, r.size);
    free(r.bytes);
    return lean_io_result_mk_ok(o);
}
LEAN_EXPORT lean_obj_res lasm_js_call(uint32_t op, uint32_t handle, uint64_t arg, b_lean_obj_arg input, b_lean_obj_arg keep) {
    (void)keep;
    if (op < 200 || op > 219) return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string("Invalid Lasm.JS operation")));
    return reply_bytes(host_call(op, handle, arg, lean_sarray_cptr(input), lean_sarray_size(input)));
}
static void value_finalize(void *p) {
    if (released_count == RELEASE_CAPACITY) { lasm_node_release((uint32_t)(uintptr_t)p); return; }
    released[released_count++] = (uint32_t)(uintptr_t)p;
}
static void value_foreach(void *p, b_lean_obj_arg f) { (void)p; (void)f; }
static lean_external_class *value_class_ptr;
LEAN_EXPORT lean_obj_res lasm_js_value_of_handle(uint32_t handle) {
    if (!value_class_ptr) value_class_ptr = lean_register_external_class(value_finalize, value_foreach);
    return lean_io_result_mk_ok(lean_alloc_external(value_class_ptr, (void *)(uintptr_t)handle));
}
LEAN_EXPORT uint32_t lasm_js_value_handle(b_lean_obj_arg v) { return (uint32_t)(uintptr_t)lean_get_external_data(v); }

static lean_object *dispatcher; /* UInt8 -> UInt32 -> UInt64 -> ByteArray -> IO Unit */
static uint64_t read_u64(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return v; }
static uint32_t read_u32(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v; }
static void fatal(const char *message) { lean_internal_panic(message); }
/* The pump's poll: processes every queued interop event; false when none. */
bool lasm_js_edge_poll(void) {
    if (!dispatcher) return false;
    reply_t batch = host_call(209, 0, 0, NULL, 0);
    if (batch.failed) fatal("Lasm.JS: the interop event queue failed");
    bool any = batch.size != 0;
    size_t offset = 0;
    while (offset < batch.size) {
        uint8_t kind = batch.bytes[offset++];
        if (kind == 1) {
            if (offset + 13 > batch.size) fatal("Lasm.JS: malformed completion");
            lean_object *promise = (lean_object *)(uintptr_t)read_u64(batch.bytes + offset);
            int failed = batch.bytes[offset + 8];
            uint32_t size = read_u32(batch.bytes + offset + 9);
            offset += 13;
            if (offset + size > batch.size) fatal("Lasm.JS: malformed completion");
            lean_object *value = lean_alloc_ctor(failed ? 0 : 1, 1, 0);
            lean_ctor_set(value, 0, failed ? lean_mk_string_from_bytes((const char *)batch.bytes + offset, size)
                                           : bytes_of(batch.bytes + offset, size));
            offset += size;
            lean_dec(lean_io_promise_resolve(value, promise));
            lean_dec(promise);
        } else if (kind == 2 || kind == 3) {
            uint64_t call = 0; uint32_t fn, size = 0;
            if (kind == 2) {
                if (offset + 16 > batch.size) fatal("Lasm.JS: malformed callback");
                call = read_u64(batch.bytes + offset); fn = read_u32(batch.bytes + offset + 8);
                size = read_u32(batch.bytes + offset + 12); offset += 16;
            } else {
                if (offset + 4 > batch.size) fatal("Lasm.JS: malformed release");
                fn = read_u32(batch.bytes + offset); offset += 4;
            }
            if (offset + size > batch.size) fatal("Lasm.JS: malformed callback");
            lean_object *args = bytes_of(batch.bytes + offset, size);
            offset += size;
            lean_inc(dispatcher);
            lean_dec(lean_apply_5(dispatcher, lean_box(kind), lean_box_uint32(fn), lean_box_uint64(call), args, lean_io_mk_world()));
        } else fatal("Lasm.JS: unknown interop event");
    }
    free(batch.bytes);
    return any;
}
LEAN_EXPORT lean_obj_res lasm_js_start(lean_obj_arg dispatch) {
    if (!dispatcher) dispatcher = dispatch; else lean_dec(dispatch);
    return lean_io_result_mk_ok(lean_box(0));
}
LEAN_EXPORT lean_obj_res lasm_js_await_into(b_lean_obj_arg promise, b_lean_obj_arg value, b_lean_obj_arg keep) {
    (void)keep;
    lean_inc(promise);
    reply_t r = host_call(207, 0, (uint64_t)(uintptr_t)promise, lean_sarray_cptr(value), lean_sarray_size(value));
    if (r.failed) { lean_dec(promise); return lean_io_result_mk_error(lean_mk_io_user_error(failure_message(r))); }
    free(r.bytes);
    return lean_io_result_mk_ok(lean_box(0));
}
LEAN_EXPORT lean_obj_res lasm_js_call_into(b_lean_obj_arg promise, uint32_t op, uint32_t handle, uint64_t arg, b_lean_obj_arg input, b_lean_obj_arg keep) {
    (void)keep;
    if (op != 205 && op != 214) return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string("Invalid Lasm.JS operation")));
    size_t length = lean_sarray_size(input);
    uint8_t *request = (uint8_t *)malloc(8 + length);
    uint64_t pointer = (uint64_t)(uintptr_t)promise;
    memcpy(request, &pointer, 8);
    if (length) memcpy(request + 8, lean_sarray_cptr(input), length);
    lean_inc(promise);
    reply_t r = host_call(op, handle, arg | 16, request, 8 + length);
    free(request);
    if (r.failed) { lean_dec(promise); return lean_io_result_mk_error(lean_mk_io_user_error(failure_message(r))); }
    free(r.bytes);
    return lean_io_result_mk_ok(lean_box(0));
}
/* Synchronous callbacks: JavaScript calls this export directly. The result
   buffer ([0 ok | 1 failure][wire value or UTF-8 message]) stays valid until
   the next call; its length is in *size. */
static lean_object *sync_dispatcher; /* UInt32 -> ByteArray -> IO (ByteArray × Data) */
static lean_object *sync_last;
__attribute__((used)) const uint8_t *lasm_js_edge_sync(uint32_t fn, const uint8_t *data, size_t length, size_t *size) {
    static const char message[] = "\1A synchronous Lean callback raised an IO error";
    if (sync_last) { lean_dec(sync_last); sync_last = NULL; }
    if (!sync_dispatcher) { *size = sizeof(message) - 1; return (const uint8_t *)message; }
    lean_inc(sync_dispatcher);
    lean_object *result = lean_apply_3(sync_dispatcher, lean_box_uint32(fn), bytes_of(data, length), lean_io_mk_world());
    if (lean_io_result_is_ok(result) && lean_sarray_size(lean_ctor_get(lean_io_result_get_value(result), 0)) >= 1) {
        sync_last = result; /* keeps the reply bytes and the data its handles mention */
        lean_object *bytes = lean_ctor_get(lean_io_result_get_value(result), 0);
        *size = lean_sarray_size(bytes);
        return lean_sarray_cptr(bytes);
    }
    lean_dec(result);
    *size = sizeof(message) - 1;
    return (const uint8_t *)message;
}
LEAN_EXPORT lean_obj_res lasm_js_sync_start(lean_obj_arg dispatch) {
    if (!sync_dispatcher) sync_dispatcher = dispatch; else lean_dec(dispatch);
    return lean_io_result_mk_ok(lean_box(0));
}
LEAN_EXPORT uint8_t lasm_js_available(lean_obj_arg unit) { (void)unit; return 1; }
/* waitForever: no interop poller to become here (it returns before on edge). */
LEAN_EXPORT lean_obj_res lasm_js_park(void) { return lean_io_result_mk_ok(lean_box(0)); }
