/*
 * Lasm.JS: JavaScript interop for Lean programs compiled by Lasm (Node.js).
 * Linked into every application whose Lean code imports Lasm.JS. The Lean side
 * is library/Lasm/JS/*.lean; the host side is src/node-js.mjs (host operations
 * 200-219 through the runtime's lasm_node_call ABI). Design: docs/JS_INTEROP.md.
 *
 * Threads (both created lazily, detached, like the runtime's completion thread):
 *   - the interop poller long-polls the host (op 209) for promise completions,
 *     which it resolves here, and for calls of Lean functions from JavaScript,
 *     which the Lean dispatcher runs as tasks. Each thread is a Node Worker
 *     (tens of milliseconds of CPU at start-up), so the poller is the thread
 *     running `main` when `main` ends in `waitForever` (lasm_js_park), and
 *     otherwise a thread started when Lean first waits for a JavaScript promise
 *     or when the host has queued an event and no Lean thread polls
 *     (lasm_js_spawn_poller, called by src/node-js.mjs);
 *   - the synchronous-callback thread runs Lean functions that JavaScript calls
 *     synchronously, while Node's main thread waits (op 211 channel).
 *
 * Waits inside synchronous callbacks: the link wraps Lean's task waits and
 * Emscripten's futex wait in these programs (src/application-link.mjs
 * lasmJsLinkFlags). A task wait on the callback's thread polls instead of
 * blocking, and every other thread's indefinite wait is listed in `waits`, so
 * Node's main thread can see when every Lean thread waits, which no thread can
 * end while the main thread waits for the callback: it then stops the callback
 * with an error (src/node-js.mjs syncFunction).
 */
#include <lean/lean.h>
#include <stdint.h>
#include <stddef.h>
#include <pthread.h>
#include <setjmp.h>

void *malloc(size_t size);
void free(void *pointer);
void *memcpy(void *destination, const void *source, size_t size);
int memcmp(const void *a, const void *b, size_t size);

#ifdef __EMSCRIPTEN__
extern int64_t lasm_node_call(uint32_t operation, uint32_t handle, uint64_t argument, const uint8_t *input, size_t length);
extern void lasm_node_copy(uint8_t *output, size_t length);
extern void lasm_node_release(uint32_t handle);
extern void *lasm_js_sync_setup(void *doorbell);
extern int emscripten_futex_wait(volatile void *address, uint32_t value, double maxWaitMilliseconds);
extern int emscripten_futex_wake(volatile void *address, int count);
extern int __real_emscripten_futex_wait(volatile void *address, uint32_t value, double maxWaitMilliseconds);
extern int emscripten_is_main_browser_thread(void);
extern lean_object *__real_lean_task_get(lean_object *task);
extern lean_object *__real_lean_io_wait_any_core(lean_object *tasks);
extern void lean_initialize_thread(void);
extern lean_object *lean_io_promise_resolve(lean_object *value, lean_object *promise);
/* Lasm's runtime (Lean's thread.cpp, patch node-threads): whether the calling
   thread runs the program's `main`. */
extern _Bool lasm_main_thread_is_current(void);

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
/* A request: [u32 count][count × u32 released handle][payload]. Small ones
   are built in `small` (the caller's stack), larger ones in a malloc'ed buffer. */
#define SMALL_REQUEST 1024
static uint8_t *build_request(uint8_t *small, const uint8_t *input, size_t length, size_t *size) {
    uint32_t ids[RELEASE_CAPACITY];
    uint32_t count = 0;
    pthread_mutex_lock(&released_mutex);
    count = (uint32_t)released_count;
    if (count) memcpy(ids, released, count * sizeof(uint32_t));
    released_count = 0;
    pthread_mutex_unlock(&released_mutex);
    size_t prefix = 4 + (size_t)count * 4;
    *size = prefix + length;
    uint8_t *request = *size <= SMALL_REQUEST ? small : (uint8_t *)malloc(*size + 1);
    memcpy(request, &count, 4);
    if (count) memcpy(request + 4, ids, (size_t)count * 4);
    if (length) memcpy(request + prefix, input, length);
    return request;
}
static reply_t host_call(uint32_t op, uint32_t handle, uint64_t arg, const uint8_t *input, size_t length) {
    uint8_t small[SMALL_REQUEST];
    size_t size;
    uint8_t *request = build_request(small, input, length, &size);
    reply_t r = host_call_raw(op, handle, arg, request, size);
    if (request != small) free(request);
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
    uint8_t small[SMALL_REQUEST];
    size_t size;
    uint8_t *request = build_request(small, lean_sarray_cptr(input), lean_sarray_size(input), &size);
    int64_t n = lasm_node_call(op, handle, arg, request, size);
    if (request != small) free(request);
    if (n < 0) {
        reply_t r = { 1, NULL, (size_t)(-(n + 1)) };
        r.bytes = (uint8_t *)malloc(r.size ? r.size : 1);
        lasm_node_copy(r.bytes, r.size);
        return reply_bytes(r);
    }
    /* The reply goes straight into the Lean ByteArray (one copy, no buffer of its own). */
    lean_object *o = lean_alloc_sarray(1, (size_t)n, (size_t)n);
    lasm_node_copy(lean_sarray_cptr(o), (size_t)n);
    return lean_io_result_mk_ok(o);
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

/* ---- the interop poller ---- */
static lean_object *dispatcher; /* UInt8 -> UInt32 -> UInt64 -> ByteArray -> IO Unit */
/* Set once, by the first thread that becomes the poller (a started thread or `main`). */
static int poller_claimed;
static uint64_t read_u64(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return v; }
static uint32_t read_u32(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v; }
static void fatal(const char *message) { lean_internal_panic(message); }
static int claim_poller(void) {
    int expected = 0;
    return __atomic_compare_exchange_n(&poller_claimed, &expected, 1, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
}
static void interop_loop(void) {
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
                lean_object *d = __atomic_load_n(&dispatcher, __ATOMIC_ACQUIRE);
                if (!d) fatal("Lasm.JS: a JavaScript event arrived before Lasm.JS started");
                lean_inc(d);
                lean_object *r = lean_apply_5(d, lean_box(kind), lean_box_uint32(fn), lean_box_uint64(call), args, lean_io_mk_world());
                lean_dec(r);
            } else fatal("Lasm.JS: unknown interop event");
        }
        free(batch.bytes);
    }
}
static void *interop_main(void *unused) {
    (void)unused;
    lean_initialize_thread();
    interop_loop();
    return NULL;
}
/* Starts the poller thread unless a thread already is (or will become) the poller. */
static void start_poller(void) {
    if (!claim_poller()) return;
    pthread_t thread;
    pthread_attr_t attributes;
    pthread_attr_init(&attributes);
    pthread_attr_setstacksize(&attributes, 8u << 20);
    if (pthread_create(&thread, &attributes, interop_main, NULL)) fatal("Lasm.JS: cannot start the interop thread");
    pthread_detach(thread);
    pthread_attr_destroy(&attributes);
}
/* The host (Node's main thread) asks for a poller: JavaScript queued an event
   and no Lean thread has polled. Exported to JavaScript (Module._lasm_js_spawn_poller). */
void lasm_js_spawn_poller(void) {
    if (__atomic_load_n(&dispatcher, __ATOMIC_ACQUIRE)) start_poller();
}
/* (dispatch : UInt8 → UInt32 → UInt64 → ByteArray → IO Unit) : IO Unit -- once.
   Registers the dispatcher; the poller starts on demand (above). */
LEAN_EXPORT lean_obj_res lasm_js_start(lean_obj_arg dispatch) {
    lean_object *expected = NULL;
    lean_mark_mt(dispatch);
    if (!__atomic_compare_exchange_n(&dispatcher, &expected, dispatch, 0, __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE)) lean_dec(dispatch);
    return lean_io_result_mk_ok(lean_box(0));
}
/* : IO Bool (no world argument in Lean 4.35's C) -- `waitForever` on the thread that runs `main`: unless
   a poller exists already, this thread becomes it and never returns. Elsewhere
   (a task, or a poller already started) it returns false at once, and the caller
   waits as before. */
LEAN_EXPORT lean_obj_res lasm_js_park(void) {
    if (!lasm_main_thread_is_current() || !claim_poller()) return lean_io_result_mk_ok(lean_box(0));
    interop_loop();
    return lean_io_result_mk_ok(lean_box(1));
}
/* (p : @& IO.Promise (Except String ByteArray)) (value : @& ByteArray) : IO Unit
   The host resolves p when the JavaScript value (a promise or not) settles. */
static _Thread_local int in_sync_callback; /* the synchronous-callback thread inside a callback */
/* `Value.await` marks its value (Data.ref, constructor 9, described "Value.await"). */
static int awaits(b_lean_obj_arg keep) {
    if (lean_is_scalar(keep) || lean_obj_tag(keep) != 9) return 0;
    lean_object *description = lean_ctor_get(keep, 1);
    static const char mark[] = "Value.await";
    return lean_string_size(description) == sizeof(mark) && memcmp(lean_string_cstr(description), mark, sizeof(mark)) == 0;
}
LEAN_EXPORT lean_obj_res lasm_js_await_into(b_lean_obj_arg promise, b_lean_obj_arg value, b_lean_obj_arg keep) {
    /* Inside a synchronous callback the promise can settle only after the callback
       returns: `Value.await` fails at once, as an error the callback can catch.
       `Value.toTask` registers it; waiting for its task is a task wait (sync_wait). */
    if (in_sync_callback && awaits(keep)) return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string(
        "Waiting for a JavaScript promise (Value.await) inside a synchronous callback can't finish, "
        "because the JavaScript thread is waiting for the callback; use Function.ofFn")));
    if (!dispatcher) return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string("Lasm.JS is not started (internal error)")));
    start_poller(); /* the host resolves p through the poller */
    lean_inc(promise); lean_mark_mt(promise);
    reply_t r = host_call(207, 0, (uint64_t)(uintptr_t)promise, lean_sarray_cptr(value), lean_sarray_size(value));
    if (r.failed) { lean_dec(promise); return lean_io_result_mk_error(lean_mk_io_user_error(failure_message(r))); }
    free(r.bytes);
    return lean_io_result_mk_ok(lean_box(0));
}

/* (p : @& IO.Promise (Except String ByteArray)) (op handle : UInt32) (arg : UInt64)
   (input : @& ByteArray) (keep : @& Data) : IO Unit
   A call (op 205) or typed binding (op 214) whose result resolves p when it
   settles (flag 16; the request starts with p), instead of a reply: the calling
   Lean thread does not wait for the promise. */
LEAN_EXPORT lean_obj_res lasm_js_call_into(b_lean_obj_arg promise, uint32_t op, uint32_t handle, uint64_t arg, b_lean_obj_arg input, b_lean_obj_arg keep) {
    (void)keep;
    if (!dispatcher) return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string("Lasm.JS is not started (internal error)")));
    if (op != 205 && op != 214) return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string("Invalid Lasm.JS operation")));
    size_t length = lean_sarray_size(input);
    uint8_t *request = (uint8_t *)malloc(8 + length);
    uint64_t pointer = (uint64_t)(uintptr_t)promise;
    memcpy(request, &pointer, 8);
    if (length) memcpy(request + 8, lean_sarray_cptr(input), length);
    start_poller(); /* the host resolves p through the poller */
    lean_inc(promise); lean_mark_mt(promise);
    reply_t r = host_call(op, handle, arg | 16, request, 8 + length);
    free(request);
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
    /* A task wait of the callback (generation << 2 | 0 none, 1 waiting, 2 stop
       asked by the main thread); whether the failure posted is a stopped wait's;
       the wait list; this thread (pthread_self). */
    volatile int32_t wait, stopped;
    uint64_t waits, thread;
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
    if (size) memcpy((void *)(uintptr_t)channel->buffer, data, size);
    channel->length = size;
    __atomic_store_n(&channel->state, state, __ATOMIC_SEQ_CST);
    __atomic_add_fetch(&channel->doorbell, 1, __ATOMIC_SEQ_CST);
    emscripten_futex_wake((void *)&channel->doorbell, 1);
}

/* ---- waits ----
   Every thread's indefinite futex wait, and every host call's wait for its
   reply, is listed here while it lasts (pthread_self; 0 is a free entry).
   `epoch` changes at each wait's start and end. Read by Node's main thread
   inside a synchronous callback. */
#define WAIT_SLOTS 256
typedef struct {
    volatile int32_t epoch, size;
    volatile uint64_t threads[WAIT_SLOTS];
} waits_t;
static waits_t waits = { 0, WAIT_SLOTS, {0} };
static int waits_enter(void) {
    uint64_t thread = (uint64_t)(uintptr_t)pthread_self();
    __atomic_add_fetch(&waits.epoch, 1, __ATOMIC_SEQ_CST);
    for (int i = 0, start = (int)((thread >> 4) % WAIT_SLOTS); i < WAIT_SLOTS; i++) {
        int k = (start + i) % WAIT_SLOTS;
        uint64_t empty = 0;
        if (__atomic_compare_exchange_n(&waits.threads[k], &empty, thread, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)) return k;
    }
    return -1; /* not listed: the thread counts as running */
}
static void waits_leave(int k) {
    if (k >= 0) __atomic_store_n(&waits.threads[k], 0, __ATOMIC_SEQ_CST);
    __atomic_add_fetch(&waits.epoch, 1, __ATOMIC_SEQ_CST);
}
/* Emscripten's futex wait (--wrap): an indefinite wait off Node's main thread
   is listed. Timed waits (sleeps, polls) end by themselves and are not. */
int __wrap_emscripten_futex_wait(volatile void *address, uint32_t value, double maxWaitMilliseconds) {
    if (maxWaitMilliseconds < 1e8 || emscripten_is_main_browser_thread())
        return __real_emscripten_futex_wait(address, value, maxWaitMilliseconds);
    int k = waits_enter();
    int result = __real_emscripten_futex_wait(address, value, maxWaitMilliseconds);
    waits_leave(k);
    return result;
}
/* One wait of a host call for its reply (scripts/full-lean/host-library.js
   exchange, which loops until `ready`, the slot's reply word at slot + 4, is set).
   Exported to JavaScript. */
void lasm_js_host_wait(volatile int32_t *ready) {
    int k = waits_enter();
    if (__atomic_load_n(ready, __ATOMIC_SEQ_CST) == 0) __real_emscripten_futex_wait(ready, 0, __builtin_inf());
    waits_leave(k);
}

/* The synchronous-callback thread inside a callback: its task waits poll
   (sync_wait), so that Node's main thread can stop the callback. */
static jmp_buf sync_stop;
static uint32_t wait_generation;
static int finished(lean_object *task) { return lean_to_task(task)->m_value != NULL; }
static int any_finished(lean_object *tasks) {
    for (lean_object *l = tasks; !lean_is_scalar(l); l = lean_ctor_get(l, 1))
        if (finished(lean_ctor_get(l, 0))) return 1;
    return 0;
}
/* Waits until the task (or one task of the list) finishes, or the main thread,
   having seen that every other Lean thread waits too, asks it to stop: then the
   callback ends with a failure (sync_main). */
static void sync_wait(lean_object *task, lean_object *list) {
    uint32_t generation = (++wait_generation) << 2;
    __atomic_store_n(&channel->wait, (int32_t)(generation | 1), __ATOMIC_SEQ_CST);
    double ms = 0.05;
    for (;;) {
        if (task ? finished(task) : any_finished(list)) break;
        if ((uint32_t)__atomic_load_n(&channel->wait, __ATOMIC_SEQ_CST) == (generation | 2)) {
            __atomic_store_n(&channel->wait, (int32_t)generation, __ATOMIC_SEQ_CST);
            longjmp(sync_stop, 1);
        }
        __real_emscripten_futex_wait(&channel->wait, generation | 1, ms);
        if (ms < 2) ms *= 2;
    }
    __atomic_store_n(&channel->wait, (int32_t)generation, __ATOMIC_SEQ_CST);
}
/* Lean's task waits (--wrap): `Task.get`, `IO.wait` (lean_io_wait calls
   lean_task_get), `IO.waitAny`. Elsewhere, and for a finished task, unchanged. */
lean_object *__wrap_lean_task_get(lean_object *task) {
    if (__builtin_expect(in_sync_callback, 0) && !finished(task)) sync_wait(task, NULL);
    return __real_lean_task_get(task);
}
lean_object *__wrap_lean_io_wait_any_core(lean_object *tasks) {
    if (__builtin_expect(in_sync_callback, 0) && !any_finished(tasks)) sync_wait(NULL, tasks);
    return __real_lean_io_wait_any_core(tasks);
}

static void *sync_main(void *unused) {
    (void)unused;
    lean_initialize_thread();
    channel->thread = (uint64_t)(uintptr_t)pthread_self();
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
        if (setjmp(sync_stop)) {
            /* A wait that cannot finish (sync_wait): the main thread has the
               reason. What the callback held is leaked. */
            in_sync_callback = 0;
            channel->stopped = 1;
            post(3, NULL, 0);
            continue;
        }
        in_sync_callback = 1;
        lean_object *result = lean_apply_3(sync_dispatcher, lean_box_uint32(channel->fn), args, lean_io_mk_world());
        in_sync_callback = 0;
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
    channel->wait = 0; channel->stopped = 0; channel->thread = 0;
    channel->waits = (uint64_t)(uintptr_t)&waits;
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
LEAN_EXPORT lean_obj_res lasm_js_park(void) { return lean_io_result_mk_ok(lean_box(0)); }
LEAN_EXPORT lean_obj_res lasm_js_await_into(b_lean_obj_arg p, b_lean_obj_arg v, b_lean_obj_arg k) { (void)p; (void)v; (void)k; return unavailable(); }
LEAN_EXPORT lean_obj_res lasm_js_call_into(b_lean_obj_arg p, uint32_t op, uint32_t handle, uint64_t arg, b_lean_obj_arg input, b_lean_obj_arg keep) {
    (void)p; (void)op; (void)handle; (void)arg; (void)input; (void)keep; return unavailable();
}
LEAN_EXPORT lean_obj_res lasm_js_sync_start(lean_obj_arg dispatch) { lean_dec(dispatch); return unavailable(); }
LEAN_EXPORT uint8_t lasm_js_available(lean_obj_arg unit) { (void)unit; return 0; }
#endif
