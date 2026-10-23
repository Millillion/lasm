/*
 * Lasm.JS: JavaScript interop for Lean programs compiled by Lasm (Node.js).
 * Linked into every application whose Lean code imports Lasm.JS. The Lean side
 * is library/Lasm/JS/*.lean; the host side is src/node-js.mjs (host operations
 * 200-219 through the runtime's lasm_node_call ABI). Design: docs/JS_INTEROP.md.
 *
 * Threads (both created lazily, detached, like the runtime's completion thread):
 *   - the interop thread long-polls the host (op 209) for promise completions,
 *     which it resolves here, and for calls of Lean functions from JavaScript,
 *     which the Lean dispatcher runs as tasks;
 *   - the synchronous-callback thread runs Lean functions that JavaScript calls
 *     synchronously, while Node's main thread waits (op 211 channel).
 */
#include <lean/lean.h>
#include <stdint.h>
#include <stddef.h>
#include <pthread.h>

void *malloc(size_t size);
void free(void *pointer);
void *memcpy(void *destination, const void *source, size_t size);

#ifdef __EMSCRIPTEN__
extern int64_t lasm_node_call(uint32_t operation, uint32_t handle, uint64_t argument, const uint8_t *input, size_t length);
extern void lasm_node_copy(uint8_t *output, size_t length);
extern void lasm_node_release(uint32_t handle);
extern void *lasm_js_sync_setup(void *doorbell);
extern int emscripten_futex_wait(volatile void *address, uint32_t value, double maxWaitMilliseconds);
extern int emscripten_futex_wake(volatile void *address, int count);
extern void lean_initialize_thread(void);
extern lean_object *lean_io_promise_resolve(lean_object *value, lean_object *promise);

typedef struct { int failed; uint8_t *bytes; size_t size; } reply_t;
/* Handles of freed Values. Instead of one host call per finalizer, they travel
   ahead of the next Lasm.JS host call: every request is
   [u32 count][count × u32 handle][payload]. */
#define RELEASE_CAPACITY 1024
static uint32_t released[RELEASE_CAPACITY];
static size_t released_count;
static pthread_mutex_t released_mutex = PTHREAD_MUTEX_INITIALIZER;
static reply_t host_call_raw(uint32_t op, uint32_t handle, uint64_t arg, const uint8_t *input, size_t length) {
    reply_t r;
    int64_t n = lasm_node_call(op, handle, arg, input, length);
    r.failed = n < 0;
    r.size = r.failed ? (size_t)(-(n + 1)) : (size_t)n;
    r.bytes = (uint8_t *)malloc(r.size ? r.size : 1);
    lasm_node_copy(r.bytes, r.size);
    return r;
}
static reply_t host_call(uint32_t op, uint32_t handle, uint64_t arg, const uint8_t *input, size_t length) {
    uint32_t ids[RELEASE_CAPACITY];
    pthread_mutex_lock(&released_mutex);
    uint32_t count = (uint32_t)released_count;
    memcpy(ids, released, count * sizeof(uint32_t));
    released_count = 0;
    pthread_mutex_unlock(&released_mutex);
    size_t prefix = 4 + (size_t)count * 4;
    uint8_t *request = (uint8_t *)malloc(prefix + length + 1);
    memcpy(request, &count, 4);
    if (count) memcpy(request + 4, ids, (size_t)count * 4);
    if (length) memcpy(request + prefix, input, length);
    reply_t r = host_call_raw(op, handle, arg, request, prefix + length);
    free(request);
    return r;
}
/* Host failures carry [u64 kind][u64 errno][message]. */
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

/* (op handle : UInt32) (arg : UInt64) (input : @& ByteArray) (keep : @& Data) : IO ByteArray
   `keep` (unused here) keeps the values whose handles `input` mentions alive. */
LEAN_EXPORT lean_obj_res lasm_js_call(uint32_t op, uint32_t handle, uint64_t arg, b_lean_obj_arg input, b_lean_obj_arg keep) {
    (void)keep;
    if (op < 200 || op > 219) return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string("Invalid Lasm.JS operation")));
    return reply_bytes(host_call(op, handle, arg, lean_sarray_cptr(input), lean_sarray_size(input)));
}

/* ---- JavaScript values held by Lean ---- */
static void value_finalize(void *p) {
    pthread_mutex_lock(&released_mutex);
    int full = released_count == RELEASE_CAPACITY;
    if (!full) released[released_count++] = (uint32_t)(uintptr_t)p;
    pthread_mutex_unlock(&released_mutex);
    /* A full batch: release this one handle directly (as the runtime does). */
    if (full) lasm_node_release((uint32_t)(uintptr_t)p);
}
static void value_foreach(void *p, b_lean_obj_arg f) { (void)p; (void)f; }
static lean_external_class *value_class_ptr;
static pthread_once_t value_class_once = PTHREAD_ONCE_INIT;
static void value_class_init(void) { value_class_ptr = lean_register_external_class(value_finalize, value_foreach); }
/* (handle : UInt32) : IO Value -- takes ownership of a handle the host allocated. */
LEAN_EXPORT lean_obj_res lasm_js_value_of_handle(uint32_t handle) {
    pthread_once(&value_class_once, value_class_init);
    return lean_io_result_mk_ok(lean_alloc_external(value_class_ptr, (void *)(uintptr_t)handle));
}
/* (v : @& Value) : UInt32 */
LEAN_EXPORT uint32_t lasm_js_value_handle(b_lean_obj_arg v) { return (uint32_t)(uintptr_t)lean_get_external_data(v); }

/* ---- the interop thread ---- */
static lean_object *dispatcher; /* UInt8 -> UInt32 -> UInt64 -> ByteArray -> IO Unit */
static pthread_once_t interop_once = PTHREAD_ONCE_INIT;
static uint64_t read_u64(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return v; }
static uint32_t read_u32(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v; }
static void fatal(const char *message) { lean_internal_panic(message); }
static void *interop_main(void *unused) {
    (void)unused;
    lean_initialize_thread();
    for (;;) {
        reply_t batch = host_call(209, 0, 0, NULL, 0);
        if (batch.failed) fatal("Lasm.JS: the interop event queue failed");
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
                /* Except String ByteArray: error = constructor 0, ok = constructor 1. */
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
                lean_object *r = lean_apply_5(dispatcher, lean_box(kind), lean_box_uint32(fn), lean_box_uint64(call), args, lean_io_mk_world());
                lean_dec(r);
            } else fatal("Lasm.JS: unknown interop event");
        }
        free(batch.bytes);
    }
    return NULL;
}
static void interop_start(void) {
    pthread_t thread;
    pthread_attr_t attributes;
    pthread_attr_init(&attributes);
    pthread_attr_setstacksize(&attributes, 8u << 20);
    if (pthread_create(&thread, &attributes, interop_main, NULL)) fatal("Lasm.JS: cannot start the interop thread");
    pthread_detach(thread);
    pthread_attr_destroy(&attributes);
}
/* (dispatch : UInt8 → UInt32 → UInt64 → ByteArray → IO Unit) : IO Unit -- once. */
LEAN_EXPORT lean_obj_res lasm_js_start(lean_obj_arg dispatch) {
    if (!dispatcher) { lean_mark_mt(dispatch); dispatcher = dispatch; } else lean_dec(dispatch);
    pthread_once(&interop_once, interop_start);
    return lean_io_result_mk_ok(lean_box(0));
}
/* (p : @& IO.Promise (Except String ByteArray)) (value : @& ByteArray) : IO Unit
   The host resolves p when the JavaScript value (a promise or not) settles. */
LEAN_EXPORT lean_obj_res lasm_js_await_into(b_lean_obj_arg promise, b_lean_obj_arg value, b_lean_obj_arg keep) {
    (void)keep;
    if (!dispatcher) return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string("Lasm.JS is not started (internal error)")));
    lean_inc(promise); lean_mark_mt(promise);
    reply_t r = host_call(207, 0, (uint64_t)(uintptr_t)promise, lean_sarray_cptr(value), lean_sarray_size(value));
    if (r.failed) { lean_dec(promise); return lean_io_result_mk_error(lean_mk_io_user_error(failure_message(r))); }
    free(r.bytes);
    return lean_io_result_mk_ok(lean_box(0));
}

/* ---- synchronous callbacks ---- */
typedef struct {
    volatile int32_t state;     /* 0 idle, 1 call posted, 2 result, 3 failure */
    volatile int32_t doorbell;
    uint32_t fn, reserved;
    uint64_t buffer, capacity, length;
} channel_t;
static channel_t *channel;
static lean_object *sync_dispatcher; /* UInt32 -> ByteArray -> IO (ByteArray × Data) */
static pthread_once_t sync_once = PTHREAD_ONCE_INIT;
static pthread_mutex_t sync_ready_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t sync_ready_cond = PTHREAD_COND_INITIALIZER;
static int sync_ready;
static void post(int32_t state, const uint8_t *data, size_t size) {
    if (size > channel->capacity) {
        static const char message[] = "The result of a synchronous Lean callback is too large";
        state = 3; data = (const uint8_t *)message; size = sizeof(message) - 1;
    }
    memcpy((void *)(uintptr_t)channel->buffer, data, size);
    channel->length = size;
    __atomic_store_n(&channel->state, state, __ATOMIC_SEQ_CST);
    __atomic_add_fetch(&channel->doorbell, 1, __ATOMIC_SEQ_CST);
    emscripten_futex_wake((void *)&channel->doorbell, 1);
}
static void *sync_main(void *unused) {
    (void)unused;
    lean_initialize_thread();
    void *slot = lasm_js_sync_setup((void *)&channel->doorbell);
    uint64_t registration[2] = { (uint64_t)(uintptr_t)channel, (uint64_t)(uintptr_t)slot };
    reply_t r = host_call(211, 0, 0, (const uint8_t *)registration, sizeof(registration));
    if (r.failed) fatal("Lasm.JS: cannot register synchronous callbacks");
    free(r.bytes);
    pthread_mutex_lock(&sync_ready_mutex); sync_ready = 1; pthread_cond_broadcast(&sync_ready_cond); pthread_mutex_unlock(&sync_ready_mutex);
    for (;;) {
        int32_t state = __atomic_load_n(&channel->state, __ATOMIC_SEQ_CST);
        if (state != 1) { emscripten_futex_wait((void *)&channel->state, (uint32_t)state, 1e9); continue; }
        lean_object *args = bytes_of((const uint8_t *)(uintptr_t)channel->buffer, channel->length);
        lean_inc(sync_dispatcher);
        lean_object *result = lean_apply_3(sync_dispatcher, lean_box_uint32(channel->fn), args, lean_io_mk_world());
        /* The dispatcher answers [0, wire result] or [1, UTF-8 message]. */
        /* (reply, data): `data` (released with `result`, after the main thread
           has read the reply) holds the values the reply's handles refer to. */
        if (lean_io_result_is_ok(result) && lean_sarray_size(lean_ctor_get(lean_io_result_get_value(result), 0)) >= 1) {
            lean_object *bytes = lean_ctor_get(lean_io_result_get_value(result), 0);
            const uint8_t *data = lean_sarray_cptr(bytes);
            post(data[0] ? 3 : 2, data + 1, lean_sarray_size(bytes) - 1);
        } else {
            static const char message[] = "A synchronous Lean callback raised an IO error";
            post(3, (const uint8_t *)message, sizeof(message) - 1);
        }
        lean_dec(result);
    }
    return NULL;
}
static void sync_start(void) {
    channel = (channel_t *)malloc(sizeof(channel_t));
    channel->state = 0; channel->doorbell = 0; channel->fn = 0; channel->reserved = 0;
    channel->capacity = 1u << 20;
    channel->buffer = (uint64_t)(uintptr_t)malloc(channel->capacity);
    channel->length = 0;
    pthread_t thread;
    pthread_attr_t attributes;
    pthread_attr_init(&attributes);
    pthread_attr_setstacksize(&attributes, 64u << 20);
    if (pthread_create(&thread, &attributes, sync_main, NULL)) fatal("Lasm.JS: cannot start the synchronous-callback thread");
    pthread_detach(thread);
    pthread_attr_destroy(&attributes);
    pthread_mutex_lock(&sync_ready_mutex);
    while (!sync_ready) pthread_cond_wait(&sync_ready_cond, &sync_ready_mutex);
    pthread_mutex_unlock(&sync_ready_mutex);
}
/* (dispatch : UInt32 → ByteArray → IO (ByteArray × Data)) : IO Unit -- once. The
   dispatcher encodes Lean errors itself ([1, message]) and does not fail. */
LEAN_EXPORT lean_obj_res lasm_js_sync_start(lean_obj_arg dispatch) {
    if (!sync_dispatcher) { lean_mark_mt(dispatch); sync_dispatcher = dispatch; } else lean_dec(dispatch);
    pthread_once(&sync_once, sync_start);
    return lean_io_result_mk_ok(lean_box(0));
}
LEAN_EXPORT uint8_t lasm_js_available(lean_obj_arg unit) { (void)unit; return 1; }
#else
/* Natively (lake build, lean --run) every JavaScript operation fails clearly. */
static lean_obj_res unavailable(void) {
    return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string(
        "Lasm.JS: JavaScript interop is only available in programs compiled by Lasm and run on Node.js "
        "(npx lasm Main.lean); this program is running natively")));
}
LEAN_EXPORT lean_obj_res lasm_js_call(uint32_t op, uint32_t handle, uint64_t arg, b_lean_obj_arg input, b_lean_obj_arg keep) {
    (void)op; (void)handle; (void)arg; (void)input; (void)keep; return unavailable();
}
LEAN_EXPORT lean_obj_res lasm_js_value_of_handle(uint32_t handle) { (void)handle; return unavailable(); }
LEAN_EXPORT uint32_t lasm_js_value_handle(b_lean_obj_arg v) { (void)v; return 0; }
LEAN_EXPORT lean_obj_res lasm_js_start(lean_obj_arg dispatch) { lean_dec(dispatch); return unavailable(); }
LEAN_EXPORT lean_obj_res lasm_js_await_into(b_lean_obj_arg p, b_lean_obj_arg v, b_lean_obj_arg k) { (void)p; (void)v; (void)k; return unavailable(); }
LEAN_EXPORT lean_obj_res lasm_js_sync_start(lean_obj_arg dispatch) { lean_dec(dispatch); return unavailable(); }
LEAN_EXPORT uint8_t lasm_js_available(lean_obj_arg unit) { (void)unit; return 0; }
#endif
