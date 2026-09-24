// Private diagnostic only. Startup/clock/metadata are real; other imports trap. No
// application-main/API acceptance may be inferred from pure export calls.
#include <wasmtime.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/prctl.h>
#include <sys/resource.h>
#include <sys/random.h>
#include <errno.h>

typedef double (*date_callback_t)(void);
typedef int32_t (*mailbox_callback_t)(uint64_t, uint64_t);
typedef int32_t (*spawn_callback_t)(uint64_t, uint64_t, uint64_t);
typedef int32_t (*thread_event_callback_t)(uint32_t, uint64_t);
typedef struct {
    wasm_engine_t *engine;
    wasmtime_module_t *module;
    wasmtime_store_t *store;
    wasmtime_sharedmemory_t *memory;
    wasmtime_instance_t instance;
    wasmtime_func_t control;
    uint64_t imports, exports, rejected_calls;
    uint64_t clock_calls;
    uint64_t heap_max_calls;
    uint64_t thread_init_calls, tls_base;
    uint64_t mailbox_registrations, mailbox_notifications, main_pthread;
    uint64_t proxy_queue, proxy_function, delivered_tasks, delivered_sum;
    uint64_t environment_sizes_calls, environment_get_calls;
    uint64_t random_calls, random_bytes;
    uint64_t program_name_calls;
    uint64_t growth_requests, growth_successes, largest_growth_request;
    uint64_t pthread_creations, pthread_cleanups, pthread_exits, blocking_checks;
    bool is_worker;
    char *program_name;
    size_t environment_size, environment_count;
    uint8_t *environment;
    date_callback_t date_now;
    mailbox_callback_t schedule_mailbox;
    spawn_callback_t spawn;
    thread_event_callback_t thread_event;
} lean_probe_t;
typedef struct { lean_probe_t *owner; char name[256]; } rejected_import_t;

static int failure(wasmtime_error_t *error, wasm_trap_t *trap, char *out, size_t capacity) {
    if (!error && !trap) return 0;
    wasm_byte_vec_t message;
    if (error) wasmtime_error_message(error, &message); else wasm_trap_message(trap, &message);
    if (capacity) snprintf(out, capacity, "%.*s", (int)message.size, message.data);
    wasm_byte_vec_delete(&message);
    if (error) wasmtime_error_delete(error);
    if (trap) wasm_trap_delete(trap);
    return 1;
}
static wasm_trap_t *reject_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller; (void)args; (void)nargs; (void)results; (void)nresults;
    rejected_import_t *item = data;
    item->owner->rejected_calls++;
    return wasmtime_trap_new(item->name, strlen(item->name));
}
static wasm_trap_t *clock_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller; (void)args;
    if (nargs || nresults != 1) return wasmtime_trap_new("unexpected clock ABI", 20);
    lean_probe_t *probe = data;
    probe->clock_calls++;
    results[0] = (wasmtime_val_t){ .kind = WASMTIME_F64, .of.f64 = probe->date_now() };
    return NULL;
}
static wasm_trap_t *heap_max_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller; (void)args;
    if (nargs || nresults != 1) return wasmtime_trap_new("unexpected heap ABI", 19);
    lean_probe_t *probe = data;
    wasm_memorytype_t *type = wasmtime_sharedmemory_type(probe->memory);
    uint64_t maximum = 0, page = wasmtime_memorytype_page_size(type);
    bool present = wasmtime_memorytype_maximum(type, &maximum);
    wasm_memorytype_delete(type);
    if (!present || !page || maximum > UINT64_MAX / page)
        return wasmtime_trap_new("invalid memory maximum", 22);
    probe->heap_max_calls++;
    results[0] = (wasmtime_val_t){ .kind = WASMTIME_I64, .of.i64 = (int64_t)(maximum * page) };
    return NULL;
}
static wasm_trap_t *heap_resize_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller;
    lean_probe_t *probe = data;
    if (nargs != 1 || nresults != 1 || args[0].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected heap resize ABI", 26);
    uint64_t requested = (uint64_t)args[0].of.i64;
    uint64_t old = wasmtime_sharedmemory_data_size(probe->memory);
    wasm_memorytype_t *type = wasmtime_sharedmemory_type(probe->memory);
    uint64_t maximum = 0, page = wasmtime_memorytype_page_size(type);
    bool present = wasmtime_memorytype_maximum(type, &maximum);
    wasm_memorytype_delete(type);
    if (!present || page != 65536 || maximum > UINT64_MAX / page)
        return wasmtime_trap_new("invalid growth memory type", 26);
    maximum *= page;
    probe->growth_requests++;
    if (requested > probe->largest_growth_request) probe->largest_growth_request = requested;
    results[0] = (wasmtime_val_t){ .kind = WASMTIME_I32, .of.i32 = 0 };
    if (requested <= old || requested > maximum) return NULL;
    // Preserve this module's Emscripten growth policy, including geometric
    // over-allocation, its 96 MiB cap and three progressively smaller attempts.
    for (unsigned cut_down = 1; cut_down <= 4; cut_down *= 2) {
        double candidate = (double)old * (1 + .2 / cut_down);
        if (candidate > (double)requested + 100663296) candidate = (double)requested + 100663296;
        if (candidate < (double)requested) candidate = (double)requested;
        uint64_t desired = (uint64_t)candidate;
        if ((double)desired < candidate) desired++;
        desired = (desired + page - 1) / page * page;
        if (desired > maximum) desired = maximum;
        uint64_t current = wasmtime_sharedmemory_size(probe->memory), previous;
        if (desired / page <= current) return NULL; // Caller retries concurrent growth.
        wasmtime_error_t *error = wasmtime_sharedmemory_grow(probe->memory, desired / page - current, &previous);
        if (error) { wasmtime_error_delete(error); continue; }
        probe->growth_successes++; results[0].of.i32 = 1; return NULL;
    }
    return NULL;
}
static bool memory_range(lean_probe_t *probe, uint64_t offset, uint64_t length) {
    size_t size = wasmtime_sharedmemory_data_size(probe->memory);
    return offset <= size && length <= size - offset;
}
static wasm_trap_t *program_name_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller; (void)results;
    lean_probe_t *probe = data;
    if (nargs != 2 || nresults || args[0].kind != WASMTIME_I64 || args[1].kind != WASMTIME_I32)
        return wasmtime_trap_new("unexpected program name ABI", 27);
    uint64_t offset = (uint64_t)args[0].of.i64;
    int32_t length = args[1].of.i32;
    if (length < 0 || !memory_range(probe, offset, (uint32_t)length))
        return wasmtime_trap_new("program name outside memory", 27);
    probe->program_name_calls++;
    if (!length) return NULL;
    size_t bytes = strlen(probe->program_name), copied = bytes;
    if (copied >= (size_t)length) copied = (size_t)length - 1;
    // Match stringToUTF8: never split a multibyte code point at the boundary.
    while (copied < bytes && copied && ((uint8_t)probe->program_name[copied] & 0xc0) == 0x80) copied--;
    uint8_t *memory = wasmtime_sharedmemory_data(probe->memory);
    memcpy(memory + offset, probe->program_name, copied); memory[offset + copied] = 0;
    return NULL;
}
static wasm_trap_t *random_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller;
    lean_probe_t *probe = data;
    if (nargs != 2 || nresults != 1 || args[0].kind != WASMTIME_I64 || args[1].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected random ABI", 21);
    uint64_t offset = (uint64_t)args[0].of.i64, length = (uint64_t)args[1].of.i64;
    if (!memory_range(probe, offset, length))
        return wasmtime_trap_new("random pointer outside memory", 29);
    uint8_t *memory = wasmtime_sharedmemory_data(probe->memory);
    uint64_t filled = 0;
    while (filled < length) {
        size_t amount = (size_t)(length - filled);
        if (amount > 256 * 1024) amount = 256 * 1024;
        ssize_t obtained = getrandom(memory + offset + filled, amount, 0);
        if (obtained < 0 && errno == EINTR) continue;
        if (obtained <= 0) return wasmtime_trap_new("OS secure random source failed", 30);
        filled += (uint64_t)obtained;
    }
    probe->random_calls++; probe->random_bytes += length;
    results[0] = (wasmtime_val_t){ .kind = WASMTIME_I32, .of.i32 = 0 };
    return NULL;
}
static wasm_trap_t *environment_sizes_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller;
    lean_probe_t *probe = data;
    if (nargs != 2 || nresults != 1 || args[0].kind != WASMTIME_I64 || args[1].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected environment ABI", 26);
    uint64_t count = (uint64_t)args[0].of.i64, size = (uint64_t)args[1].of.i64;
    if (!memory_range(probe, count, 8) || !memory_range(probe, size, 8))
        return wasmtime_trap_new("environment pointer outside memory", 34);
    uint8_t *memory = wasmtime_sharedmemory_data(probe->memory);
    uint64_t entries = probe->environment_count, bytes = probe->environment_size;
    memcpy(memory + count, &entries, 8); memcpy(memory + size, &bytes, 8);
    probe->environment_sizes_calls++;
    results[0] = (wasmtime_val_t){ .kind = WASMTIME_I32, .of.i32 = 0 };
    return NULL;
}
static wasm_trap_t *environment_get_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller;
    lean_probe_t *probe = data;
    if (nargs != 2 || nresults != 1 || args[0].kind != WASMTIME_I64 || args[1].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected environment ABI", 26);
    uint64_t table = (uint64_t)args[0].of.i64, strings = (uint64_t)args[1].of.i64;
    if (!memory_range(probe, table, probe->environment_count * 8) ||
        !memory_range(probe, strings, probe->environment_size))
        return wasmtime_trap_new("environment pointer outside memory", 34);
    uint8_t *memory = wasmtime_sharedmemory_data(probe->memory);
    memcpy(memory + strings, probe->environment, probe->environment_size);
    size_t offset = 0;
    for (size_t i = 0; i < probe->environment_count; i++) {
        uint64_t address = strings + offset;
        memcpy(memory + table + i * 8, &address, 8);
        offset += strlen((char *)probe->environment + offset) + 1;
    }
    probe->environment_get_calls++;
    results[0] = (wasmtime_val_t){ .kind = WASMTIME_I32, .of.i32 = 0 };
    return NULL;
}
static wasm_trap_t *invoke_from_import(lean_probe_t *probe, wasmtime_context_t *context,
    const char *name, const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    wasmtime_extern_t item;
    if (!wasmtime_instance_export_get(context, &probe->instance, name, strlen(name), &item))
        return wasmtime_trap_new("missing startup export", 22);
    if (item.kind != WASMTIME_EXTERN_FUNC) {
        wasmtime_extern_delete(&item); return wasmtime_trap_new("invalid startup export", 22);
    }
    wasm_trap_t *trap = NULL;
    wasmtime_error_t *error = wasmtime_func_call(context, &item.of.func, args, nargs, results, nresults, &trap);
    wasmtime_extern_delete(&item);
    if (!error) return trap;
    char message[1024]; failure(error, trap, message, sizeof(message));
    return wasmtime_trap_new(message, strlen(message));
}
static wasm_trap_t *main_thread_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)results;
    if (nargs != 1 || nresults || args[0].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected main thread ABI", 26);
    lean_probe_t *probe = data;
    probe->thread_init_calls++;
    // Exact generated-loader setup for this frozen module: JS main thread,
    // runtime thread, blocking allowed, 64 MiB default pthread stack, no profiler.
    // These flags set real Wasm TLS/runtime state; they are not a no-op import.
    wasmtime_val_t inputs[6] = { args[0],
        { .kind = WASMTIME_I32, .of.i32 = 1 },
        { .kind = WASMTIME_I32, .of.i32 = 1 },
        { .kind = WASMTIME_I32, .of.i32 = 1 },
        { .kind = WASMTIME_I32, .of.i32 = 64 * 1024 * 1024 },
        { .kind = WASMTIME_I32, .of.i32 = 0 } };
    wasmtime_context_t *context = wasmtime_caller_context(caller);
    wasm_trap_t *trap = invoke_from_import(probe, context, "_emscripten_thread_init", inputs, 6, NULL, 0);
    if (trap) return trap;
    wasmtime_val_t tls;
    trap = invoke_from_import(probe, context, "_emscripten_tls_init", NULL, 0, &tls, 1);
    if (trap) return trap;
    bool valid = tls.kind == WASMTIME_I64;
    if (valid) probe->tls_base = (uint64_t)tls.of.i64;
    wasmtime_val_unroot(&tls);
    if (!valid) return wasmtime_trap_new("unexpected TLS result", 21);
    return NULL;
}
static wasm_trap_t *mailbox_await_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller; (void)results;
    if (nargs != 1 || nresults || args[0].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected mailbox ABI", 22);
    lean_probe_t *probe = data;
    uint64_t address = (uint64_t)args[0].of.i64;
    size_t size = wasmtime_sharedmemory_data_size(probe->memory);
    if (!address || address % 8 || address > size || size - address < 208)
        return wasmtime_trap_new("invalid pthread address", 23);
    uint8_t *bytes = wasmtime_sharedmemory_data(probe->memory) + address;
    // Use Emscripten's existing postmessage path when no native waitAsync
    // adapter is available. The actual mailbox initializer sets waiting_async
    // to zero; its sender then calls the implemented notification import below.
    // The offset is verified against THIS frozen module's generated loader.
    if (__atomic_load_n((uint64_t *)bytes, __ATOMIC_SEQ_CST) != address ||
        __atomic_load_n((uint32_t *)(bytes + 204), __ATOMIC_SEQ_CST) != 0 ||
        (probe->main_pthread && probe->main_pthread != address))
        return wasmtime_trap_new("mailbox fallback state mismatch", 31);
    probe->main_pthread = address;
    probe->mailbox_registrations++;
    return NULL;
}
static wasm_trap_t *mailbox_notify_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller; (void)results;
    lean_probe_t *probe = data;
    if (nargs != 2 || nresults || args[0].kind != WASMTIME_I64 || args[1].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected notification ABI", 27);
    // The sender must be the current guest thread. The JS adapter owns actual
    // message routing; reject notifications it cannot accept.
    if (!probe->main_pthread || !args[0].of.i64 ||
        (uint64_t)args[1].of.i64 != probe->main_pthread)
        return wasmtime_trap_new("invalid mailbox notification sender", 35);
    if (!probe->schedule_mailbox((uint64_t)args[0].of.i64, (uint64_t)args[1].of.i64))
        return wasmtime_trap_new("mailbox notification was rejected", 33);
    probe->mailbox_notifications++;
    return NULL;
}
static wasm_trap_t *pthread_create_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller;
    lean_probe_t *probe = data;
    if (nargs != 4 || nresults != 1) return wasmtime_trap_new("unexpected pthread create ABI", 29);
    for (size_t i = 0; i < nargs; i++)
        if (args[i].kind != WASMTIME_I64) return wasmtime_trap_new("unexpected pthread pointer ABI", 30);
    if (!probe->spawn || probe->is_worker)
        return wasmtime_trap_new("UNIMPLEMENTED nested pthread creation", 37);
    int32_t status = probe->spawn((uint64_t)args[0].of.i64, (uint64_t)args[2].of.i64, (uint64_t)args[3].of.i64);
    if (!status) probe->pthread_creations++;
    results[0] = (wasmtime_val_t){ .kind = WASMTIME_I32, .of.i32 = status };
    return NULL;
}
static wasm_trap_t *pthread_exit_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller; (void)results;
    lean_probe_t *probe = data;
    if (nargs != 1 || nresults || args[0].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected pthread exit ABI", 27);
    if (!probe->is_worker || !probe->thread_event ||
        !probe->thread_event(0, (uint64_t)args[0].of.i64))
        return wasmtime_trap_new("pthread exit notification rejected", 34);
    probe->pthread_exits++;
    return NULL;
}
static wasm_trap_t *pthread_cleanup_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)results;
    lean_probe_t *probe = data;
    if (nargs != 1 || nresults || args[0].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected pthread cleanup ABI", 30);
    if (probe->is_worker || !probe->thread_event ||
        !probe->thread_event(1, (uint64_t)args[0].of.i64))
        return wasmtime_trap_new("pthread cleanup notification rejected", 37);
    wasm_trap_t *trap = invoke_from_import(probe, wasmtime_caller_context(caller),
        "_emscripten_thread_free_data", args, 1, NULL, 0);
    if (!trap) probe->pthread_cleanups++;
    return trap;
}
static wasm_trap_t *blocking_allowed_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller; (void)args; (void)results;
    lean_probe_t *probe = data;
    // Every creating JS isolate verifies actual blocking permission before
    // constructing this helper. The Wasm thread must also be initialized.
    if (nargs || nresults || !probe->main_pthread)
        return wasmtime_trap_new("blocking requires an initialized thread", 39);
    probe->blocking_checks++;
    return NULL;
}
void lasm_lean_instance_delete(lean_probe_t *probe) {
    if (!probe) return;
    if (probe->store) wasmtime_store_delete(probe->store);
    if (probe->memory) wasmtime_sharedmemory_delete(probe->memory);
    if (probe->module) wasmtime_module_delete(probe->module);
    if (probe->engine) wasm_engine_delete(probe->engine);
    free(probe->environment);
    free(probe->program_name);
    free(probe);
}

lean_probe_t *lasm_lean_instance_new(const char *trusted_cache, date_callback_t date_now,
    mailbox_callback_t schedule_mailbox,
    const uint8_t *environment, size_t environment_size, size_t environment_count,
    const char *program_name,
    lean_probe_t *parent, spawn_callback_t spawn, thread_event_callback_t thread_event,
    char *error, size_t capacity) {
    const struct rlimit no_core = {0, 0};
    if (!date_now || !schedule_mailbox || setrlimit(RLIMIT_CORE, &no_core) != 0 || prctl(PR_GET_THP_DISABLE, 0, 0, 0, 0) != 1) {
        snprintf(error, capacity, "requires core suppression and guarded base pages"); return NULL;
    }
    lean_probe_t *probe = calloc(1, sizeof(*probe));
    if (!probe) { snprintf(error, capacity, "probe allocation failed"); return NULL; }
    if (!program_name || strlen(program_name) > 65536) {
        snprintf(error, capacity, "invalid program name"); goto failed;
    }
    probe->program_name = malloc(strlen(program_name) + 1);
    if (!probe->program_name) { snprintf(error, capacity, "program name allocation failed"); goto failed; }
    strcpy(probe->program_name, program_name);
    if (!environment || !environment_size || environment_size > 1024 * 1024 ||
        environment[environment_size - 1] != 0 || !environment_count ||
        environment_count > environment_size) {
        snprintf(error, capacity, "invalid environment snapshot"); goto failed;
    }
    size_t terminators = 0;
    for (size_t i = 0; i < environment_size; i++) if (!environment[i]) terminators++;
    if (terminators != environment_count) {
        snprintf(error, capacity, "environment snapshot count mismatch"); goto failed;
    }
    probe->environment = malloc(environment_size);
    if (!probe->environment) { snprintf(error, capacity, "environment allocation failed"); goto failed; }
    memcpy(probe->environment, environment, environment_size);
    probe->environment_size = environment_size; probe->environment_count = environment_count;
    probe->date_now = date_now;
    probe->schedule_mailbox = schedule_mailbox;
    probe->spawn = spawn; probe->thread_event = thread_event;
    probe->is_worker = parent != NULL;
    if (parent) {
        // Clone reference-counted immutable/shared values only. Each JS isolate
        // owns its new Store and Instance; no Store crosses a thread boundary.
        probe->engine = wasmtime_engine_clone(parent->engine);
        probe->module = wasmtime_module_clone(parent->module);
        probe->memory = wasmtime_sharedmemory_clone(parent->memory);
    } else {
    wasm_config_t *config = wasm_config_new();
    wasmtime_config_wasm_memory64_set(config, true);
    wasmtime_config_wasm_threads_set(config, true);
    wasmtime_config_shared_memory_set(config, true);
    wasmtime_config_wasm_exceptions_set(config, true);
    wasmtime_config_strategy_set(config, WASMTIME_STRATEGY_CRANELIFT);
    wasmtime_config_parallel_compilation_set(config, false);
    wasmtime_config_cranelift_opt_level_set(config, WASMTIME_OPT_LEVEL_NONE);
    wasmtime_config_memory_reservation_set(config, UINT64_C(8589934592));
    wasmtime_config_max_wasm_stack_set(config, 64 * 1024 * 1024);
    wasmtime_config_async_stack_size_set(config, 80 * 1024 * 1024);
    probe->engine = wasm_engine_new_with_config(config);
    if (!probe->engine) { snprintf(error, capacity, "engine allocation failed"); goto failed; }
    // The JS harness verifies the locally-produced cache and its SDK before
    // this unsafe native-code deserializer. Never accept external cache bytes.
    if (failure(wasmtime_module_deserialize_file(probe->engine, trusted_cache, &probe->module),
        NULL, error, capacity)) goto failed;
    }
    probe->store = wasmtime_store_new(probe->engine, NULL, NULL);
    if (!probe->store) { snprintf(error, capacity, "store allocation failed"); goto failed; }
    wasmtime_context_t *context = wasmtime_store_context(probe->store);
    wasm_importtype_vec_t types;
    wasm_exporttype_vec_t exports;
    wasmtime_module_imports(probe->module, &types);
    wasmtime_module_exports(probe->module, &exports);
    probe->imports = types.size; probe->exports = exports.size;
    wasm_exporttype_vec_delete(&exports);
    wasmtime_extern_t *imports = calloc(types.size, sizeof(*imports));
    if (!imports) { wasm_importtype_vec_delete(&types); snprintf(error, capacity, "import allocation failed"); goto failed; }
    size_t created = 0;
    int status = 0;
    for (size_t i = 0; i < types.size; i++) {
        const wasm_externtype_t *type = wasm_importtype_type(types.data[i]);
        const wasm_name_t *module = wasm_importtype_module(types.data[i]);
        const wasm_name_t *name = wasm_importtype_name(types.data[i]);
        switch (wasm_externtype_kind(type)) {
        case WASM_EXTERN_FUNC: {
            if (module->size == 3 && !memcmp(module->data, "env", 3)) {
                wasmtime_func_callback_t callback = NULL;
                if (name->size == strlen("__pthread_create_js") && !memcmp(name->data, "__pthread_create_js", name->size))
                    callback = pthread_create_import;
                if (name->size == strlen("_emscripten_thread_exit_joinable") && !memcmp(name->data, "_emscripten_thread_exit_joinable", name->size))
                    callback = pthread_exit_import;
                if (name->size == strlen("_emscripten_thread_cleanup") && !memcmp(name->data, "_emscripten_thread_cleanup", name->size))
                    callback = pthread_cleanup_import;
                if (name->size == strlen("emscripten_check_blocking_allowed") && !memcmp(name->data, "emscripten_check_blocking_allowed", name->size))
                    callback = blocking_allowed_import;
                if (callback) {
                    imports[i].kind = WASMTIME_EXTERN_FUNC;
                    wasmtime_func_new(context, wasm_externtype_as_functype_const(type),
                        callback, probe, NULL, &imports[i].of.func);
                    break;
                }
            }
            if (module->size == 3 && !memcmp(module->data, "env", 3) &&
                name->size == strlen("emscripten_resize_heap") &&
                !memcmp(name->data, "emscripten_resize_heap", name->size)) {
                imports[i].kind = WASMTIME_EXTERN_FUNC;
                wasmtime_func_new(context, wasm_externtype_as_functype_const(type),
                    heap_resize_import, probe, NULL, &imports[i].of.func);
                break;
            }
            if (module->size == 3 && !memcmp(module->data, "env", 3) &&
                name->size == strlen("_emscripten_get_progname") &&
                !memcmp(name->data, "_emscripten_get_progname", name->size)) {
                imports[i].kind = WASMTIME_EXTERN_FUNC;
                wasmtime_func_new(context, wasm_externtype_as_functype_const(type),
                    program_name_import, probe, NULL, &imports[i].of.func);
                break;
            }
            if (module->size == strlen("wasi_snapshot_preview1") &&
                !memcmp(module->data, "wasi_snapshot_preview1", module->size)) {
                wasmtime_func_callback_t callback = NULL;
                if (name->size == strlen("environ_sizes_get") && !memcmp(name->data, "environ_sizes_get", name->size))
                    callback = environment_sizes_import;
                if (name->size == strlen("environ_get") && !memcmp(name->data, "environ_get", name->size))
                    callback = environment_get_import;
                if (name->size == strlen("random_get") && !memcmp(name->data, "random_get", name->size))
                    callback = random_import;
                if (callback) {
                    imports[i].kind = WASMTIME_EXTERN_FUNC;
                    wasmtime_func_new(context, wasm_externtype_as_functype_const(type),
                        callback, probe, NULL, &imports[i].of.func);
                    break;
                }
            }
            if (module->size == 3 && !memcmp(module->data, "env", 3) &&
                name->size == strlen("_emscripten_thread_mailbox_await") &&
                !memcmp(name->data, "_emscripten_thread_mailbox_await", name->size)) {
                imports[i].kind = WASMTIME_EXTERN_FUNC;
                wasmtime_func_new(context, wasm_externtype_as_functype_const(type),
                    mailbox_await_import, probe, NULL, &imports[i].of.func);
                break;
            }
            if (module->size == 3 && !memcmp(module->data, "env", 3) &&
                name->size == strlen("_emscripten_notify_mailbox_postmessage") &&
                !memcmp(name->data, "_emscripten_notify_mailbox_postmessage", name->size)) {
                imports[i].kind = WASMTIME_EXTERN_FUNC;
                wasmtime_func_new(context, wasm_externtype_as_functype_const(type),
                    mailbox_notify_import, probe, NULL, &imports[i].of.func);
                break;
            }
            if (module->size == 3 && !memcmp(module->data, "env", 3) &&
                name->size == strlen("_emscripten_init_main_thread_js") &&
                !memcmp(name->data, "_emscripten_init_main_thread_js", name->size)) {
                imports[i].kind = WASMTIME_EXTERN_FUNC;
                wasmtime_func_new(context, wasm_externtype_as_functype_const(type),
                    main_thread_import, probe, NULL, &imports[i].of.func);
                break;
            }
            if (module->size == 3 && !memcmp(module->data, "env", 3) &&
                name->size == strlen("emscripten_get_heap_max") && !memcmp(name->data, "emscripten_get_heap_max", name->size)) {
                const wasm_functype_t *heap_type = wasm_externtype_as_functype_const(type);
                const wasm_valtype_vec_t *returns = wasm_functype_results(heap_type);
                if (wasm_functype_params(heap_type)->size || returns->size != 1 ||
                    wasm_valtype_kind(returns->data[0]) != WASM_I64) {
                    snprintf(error, capacity, "unexpected heap maximum signature"); status = 1; break;
                }
                imports[i].kind = WASMTIME_EXTERN_FUNC;
                wasmtime_func_new(context, heap_type, heap_max_import, probe, NULL, &imports[i].of.func);
                break;
            }
            if (module->size == 3 && !memcmp(module->data, "env", 3) &&
                name->size == strlen("emscripten_date_now") && !memcmp(name->data, "emscripten_date_now", name->size)) {
                const wasm_functype_t *clock_type = wasm_externtype_as_functype_const(type);
                const wasm_valtype_vec_t *returns = wasm_functype_results(clock_type);
                if (wasm_functype_params(clock_type)->size || returns->size != 1 ||
                    wasm_valtype_kind(returns->data[0]) != WASM_F64) {
                    snprintf(error, capacity, "unexpected wall-clock import signature"); status = 1; break;
                }
                imports[i].kind = WASMTIME_EXTERN_FUNC;
                wasmtime_func_new(context, clock_type, clock_import, probe, NULL, &imports[i].of.func);
                break;
            }
            rejected_import_t *item = calloc(1, sizeof(*item));
            if (!item) { snprintf(error, capacity, "callback allocation failed"); status = 1; break; }
            item->owner = probe;
            snprintf(item->name, sizeof(item->name), "UNIMPLEMENTED IMPORT %.*s.%.*s",
                (int)module->size, module->data, (int)name->size, name->data);
            imports[i].kind = WASMTIME_EXTERN_FUNC;
            wasmtime_func_new(context, wasm_externtype_as_functype_const(type), reject_import,
                item, free, &imports[i].of.func);
            if (name->size == strlen("lasm_host_platform") &&
                memcmp(name->data, "lasm_host_platform", name->size) == 0) probe->control = imports[i].of.func;
            break;
        }
        case WASM_EXTERN_GLOBAL: {
            const wasm_globaltype_t *global = wasm_externtype_as_globaltype_const(type);
            if (module->size != 8 || memcmp(module->data, "GOT.func", 8) ||
                wasm_valtype_kind(wasm_globaltype_content(global)) != WASM_I64) {
                snprintf(error, capacity, "unexpected global import"); status = 1; break;
            }
            // Unresolved function-table globals are explicit invalid indices;
            // pure operations must not inspect or call any of them.
            wasmtime_val_t value = { .kind = WASMTIME_I64, .of.i64 = -1 };
            imports[i].kind = WASMTIME_EXTERN_GLOBAL;
            status = failure(wasmtime_global_new(context, global, &value, &imports[i].of.global), NULL, error, capacity);
            break;
        }
        case WASM_EXTERN_MEMORY: {
            const wasm_memorytype_t *memory = wasm_externtype_as_memorytype_const(type);
            if (!wasmtime_memorytype_isshared(memory) || !wasmtime_memorytype_is64(memory)
                || wasmtime_memorytype_minimum(memory) != 2048) {
                snprintf(error, capacity, "unexpected memory import"); status = 1; break;
            }
            if (!probe->memory)
                status = failure(wasmtime_sharedmemory_new(probe->engine, memory, &probe->memory), NULL, error, capacity);
            if (status) break;
            imports[i].kind = WASMTIME_EXTERN_SHAREDMEMORY;
            imports[i].of.sharedmemory = wasmtime_sharedmemory_clone(probe->memory);
            break;
        }
        default: snprintf(error, capacity, "unsupported import kind"); status = 1;
        }
        if (status) break;
        created++;
    }
    if (!status) {
        wasm_trap_t *trap = NULL;
        wasmtime_error_t *instance_error = wasmtime_instance_new(context, probe->module, imports,
            types.size, &probe->instance, &trap);
        status = failure(instance_error, trap, error, capacity);
    }
    for (size_t i = 0; i < created; i++) wasmtime_extern_delete(&imports[i]);
    free(imports); wasm_importtype_vec_delete(&types);
    if (status) goto failed;
    return probe;
failed:
    lasm_lean_instance_delete(probe); return NULL;
}

int lasm_lean_instance_call(lean_probe_t *probe, const char *name, const uint64_t *args,
    size_t nargs, uint32_t result_count, uint64_t *result, char *error, size_t capacity) {
    if (nargs > 8 || result_count > 1) { snprintf(error, capacity, "signature bound"); return 2; }
    wasmtime_context_t *context = wasmtime_store_context(probe->store);
    wasmtime_extern_t item;
    if (!wasmtime_instance_export_get(context, &probe->instance, name, strlen(name), &item)) {
        snprintf(error, capacity, "missing export: %s", name); return 2;
    }
    int status = 0;
    if (item.kind != WASMTIME_EXTERN_FUNC) { snprintf(error, capacity, "export is not a function"); status = 2; goto done; }
    wasm_functype_t *type = wasmtime_func_type(context, &item.of.func);
    const wasm_valtype_vec_t *parameters = wasm_functype_params(type), *returns = wasm_functype_results(type);
    if (parameters->size != nargs || returns->size != result_count ||
        (result_count && wasm_valtype_kind(returns->data[0]) != WASM_I64 &&
            wasm_valtype_kind(returns->data[0]) != WASM_I32)) {
        snprintf(error, capacity, "unexpected integer-export signature"); status = 2;
    }
    wasmtime_val_t inputs[8], returned;
    for (size_t i = 0; !status && i < nargs; i++) {
        wasm_valkind_t kind = wasm_valtype_kind(parameters->data[i]);
        if (kind != WASM_I64 && (kind != WASM_I32 || args[i] > UINT32_MAX)) {
            snprintf(error, capacity, "expected matching integer parameter"); status = 2; break;
        }
        if (kind == WASM_I64) inputs[i] = (wasmtime_val_t){ .kind = WASMTIME_I64, .of.i64 = (int64_t)args[i] };
        else inputs[i] = (wasmtime_val_t){ .kind = WASMTIME_I32, .of.i32 = (int32_t)(uint32_t)args[i] };
    }
    wasm_functype_delete(type);
    if (!status) {
        wasm_trap_t *trap = NULL;
        wasmtime_error_t *called = wasmtime_func_call(context, &item.of.func, inputs, nargs,
            result_count ? &returned : NULL, result_count, &trap);
        status = failure(called, trap, error, capacity);
        if (!status && result_count) {
            *result = returned.kind == WASMTIME_I64 ? (uint64_t)returned.of.i64 : (uint32_t)returned.of.i32;
            wasmtime_val_unroot(&returned);
        }
    }
done:
    wasmtime_extern_delete(&item); return status;
}
void lasm_lean_instance_details(lean_probe_t *probe, uint64_t *details) {
    details[0] = probe->imports; details[1] = probe->exports;
    details[2] = probe->rejected_calls;
    details[3] = wasmtime_sharedmemory_data_size(probe->memory);
    details[4] = probe->clock_calls;
    details[5] = probe->heap_max_calls;
    details[6] = probe->thread_init_calls;
    details[7] = probe->tls_base;
    details[8] = probe->mailbox_registrations;
    details[9] = probe->mailbox_notifications;
    details[10] = probe->main_pthread;
    details[11] = probe->proxy_queue;
    details[12] = probe->delivered_tasks;
    details[13] = probe->delivered_sum;
    details[14] = probe->environment_sizes_calls;
    details[15] = probe->environment_get_calls;
    details[16] = probe->random_calls;
    details[17] = probe->random_bytes;
    details[18] = probe->program_name_calls;
    details[19] = probe->growth_requests;
    details[20] = probe->growth_successes;
    details[21] = probe->largest_growth_request;
    details[22] = probe->pthread_creations;
    details[23] = probe->pthread_cleanups;
    details[24] = probe->pthread_exits;
    details[25] = probe->blocking_checks;
}
void *lasm_lean_instance_memory_window(lean_probe_t *probe, uint64_t offset, size_t length) {
    if (length > 65536 || !memory_range(probe, offset, length)) return NULL;
    return wasmtime_sharedmemory_data(probe->memory) + offset;
}
int lasm_lean_instance_mailbox_register(lean_probe_t *probe, uint64_t pthread, char *error, size_t capacity) {
    wasmtime_val_t arg = { .kind = WASMTIME_I64, .of.i64 = (int64_t)pthread };
    return failure(NULL, mailbox_await_import(probe, NULL, &arg, 1, NULL, 0), error, capacity);
}
int lasm_lean_instance_function_pointer(lean_probe_t *probe, const char *name, uint64_t requested,
    uint64_t *pointer, char *error, size_t capacity) {
    wasmtime_context_t *context = wasmtime_store_context(probe->store);
    wasmtime_extern_t table, function;
    const char *table_name = "__indirect_function_table";
    if (!wasmtime_instance_export_get(context, &probe->instance, table_name, strlen(table_name), &table)) {
        snprintf(error, capacity, "missing function table"); return 1;
    }
    if (!wasmtime_instance_export_get(context, &probe->instance, name, strlen(name), &function)) {
        wasmtime_extern_delete(&table); snprintf(error, capacity, "missing function pointer export"); return 1;
    }
    int status = 0;
    if (table.kind != WASMTIME_EXTERN_TABLE || function.kind != WASMTIME_EXTERN_FUNC) {
        snprintf(error, capacity, "invalid function pointer exports"); status = 1; goto done;
    }
    uint64_t size = wasmtime_table_size(context, &table.of.table);
    if (requested == UINT64_MAX) requested = size;
    // Only add a small diagnostic export entry. Never replace the module's
    // compiled entries or pretend to implement general dynamic linking.
    if (requested < size || requested - size > 16) {
        snprintf(error, capacity, "function pointer must append a bounded table entry"); status = 1; goto done;
    }
    wasmtime_val_t empty = { .kind = WASMTIME_FUNCREF };
    wasmtime_funcref_set_null(&empty.of.funcref);
    uint64_t previous;
    status = failure(wasmtime_table_grow(context, &table.of.table, requested - size + 1,
        &empty, &previous), NULL, error, capacity);
    if (status) goto done;
    wasmtime_val_t value = { .kind = WASMTIME_FUNCREF, .of.funcref = function.of.func };
    status = failure(wasmtime_table_set(context, &table.of.table, requested, &value), NULL, error, capacity);
    if (!status) *pointer = requested;
done:
    wasmtime_extern_delete(&table); wasmtime_extern_delete(&function); return status;
}
int lasm_lean_instance_call_pointer(lean_probe_t *probe, uint64_t pointer, uint64_t argument,
    uint64_t *result, char *error, size_t capacity) {
    wasmtime_context_t *context = wasmtime_store_context(probe->store);
    const char *name = "__indirect_function_table";
    wasmtime_extern_t table;
    if (!wasmtime_instance_export_get(context, &probe->instance, name, strlen(name), &table)) {
        snprintf(error, capacity, "missing function table"); return 1;
    }
    wasmtime_val_t function;
    bool found = table.kind == WASMTIME_EXTERN_TABLE && wasmtime_table_get(context, &table.of.table, pointer, &function);
    wasmtime_extern_delete(&table);
    if (!found) { snprintf(error, capacity, "missing function pointer"); return 1; }
    if (function.kind != WASMTIME_FUNCREF || wasmtime_funcref_is_null(&function.of.funcref)) {
        wasmtime_val_unroot(&function); snprintf(error, capacity, "null function pointer"); return 1;
    }
    wasmtime_val_t arg = { .kind = WASMTIME_I64, .of.i64 = (int64_t)argument }, returned;
    wasm_trap_t *trap = NULL;
    wasmtime_error_t *called = wasmtime_func_call(context, &function.of.funcref, &arg, 1, &returned, 1, &trap);
    int status = failure(called, trap, error, capacity);
    wasmtime_val_unroot(&function);
    if (!status) {
        if (returned.kind != WASMTIME_I64) { snprintf(error, capacity, "unexpected thread entry result"); status = 1; }
        else *result = (uint64_t)returned.of.i64;
        wasmtime_val_unroot(&returned);
    }
    return status;
}
int lasm_lean_instance_environment_check(lean_probe_t *probe, char *error, size_t capacity) {
    size_t offset = 0;
    for (size_t i = 0; i < probe->environment_count; i++) {
        const char *entry = (const char *)probe->environment + offset;
        const char *equal = strchr(entry, '=');
        if (!equal || equal == entry) { snprintf(error, capacity, "invalid environment key"); return 2; }
        uint64_t length = (uint64_t)(equal - entry), allocation = length + 1, key, found, unused;
        if (lasm_lean_instance_call(probe, "malloc", &allocation, 1, 1, &key, error, capacity)) return 1;
        if (!key || !memory_range(probe, key, allocation)) {
            snprintf(error, capacity, "invalid environment key allocation"); return 1;
        }
        uint8_t *memory = wasmtime_sharedmemory_data(probe->memory);
        memcpy(memory + key, entry, length); memory[key + length] = 0;
        int status = lasm_lean_instance_call(probe, "getenv", &key, 1, 1, &found, error, capacity);
        if (lasm_lean_instance_call(probe, "free", &key, 1, 0, &unused, error, capacity)) return 1;
        if (status) return status;
        size_t value_length = strlen(equal + 1) + 1;
        memory = wasmtime_sharedmemory_data(probe->memory);
        if (!found || !memory_range(probe, found, value_length) || memcmp(memory + found, equal + 1, value_length)) {
            snprintf(error, capacity, "guest getenv differs from host snapshot at entry %zu", i); return 1;
        }
        offset += strlen(entry) + 1;
    }
    return 0;
}
static wasm_trap_t *proxy_task(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    (void)caller; (void)results;
    if (nargs != 1 || nresults || args[0].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected proxy task ABI", 25);
    lean_probe_t *probe = data;
    probe->delivered_tasks++;
    probe->delivered_sum += (uint64_t)args[0].of.i64;
    return NULL;
}
int lasm_lean_instance_mailbox_prepare(lean_probe_t *probe, uint64_t desired_function,
    uint64_t *function, char *error, size_t capacity) {
    wasmtime_context_t *context = wasmtime_store_context(probe->store);
    if (!probe->main_pthread) { snprintf(error, capacity, "mailbox is not registered"); return 2; }
    if (!probe->proxy_queue) {
        wasmtime_val_t queue;
        wasm_trap_t *trap = invoke_from_import(probe, context, "em_proxying_queue_create", NULL, 0, &queue, 1);
        if (failure(NULL, trap, error, capacity)) return 1;
        if (queue.kind != WASMTIME_I64 || !queue.of.i64) {
            wasmtime_val_unroot(&queue); snprintf(error, capacity, "queue allocation failed"); return 1;
        }
        probe->proxy_queue = (uint64_t)queue.of.i64;
        wasmtime_val_unroot(&queue);
        wasmtime_extern_t table;
        const char *name = "__indirect_function_table";
        if (!wasmtime_instance_export_get(context, &probe->instance, name, strlen(name), &table)) {
            snprintf(error, capacity, "missing function table"); return 1;
        }
        if (table.kind != WASMTIME_EXTERN_TABLE) {
            wasmtime_extern_delete(&table); snprintf(error, capacity, "invalid function table"); return 1;
        }
        wasm_functype_t *type = wasm_functype_new_1_0(wasm_valtype_new_i64());
        wasmtime_val_t callback = { .kind = WASMTIME_FUNCREF };
        wasmtime_func_new(context, type, proxy_task, probe, NULL, &callback.of.funcref);
        wasm_functype_delete(type);
        uint64_t next = wasmtime_table_size(context, &table.of.table);
        if (desired_function != UINT64_MAX && desired_function != next) {
            wasmtime_extern_delete(&table); wasmtime_val_unroot(&callback);
            snprintf(error, capacity, "mailbox callback table index mismatch"); return 1;
        }
        int failed = failure(wasmtime_table_grow(context, &table.of.table, 1, &callback,
            &probe->proxy_function), NULL, error, capacity);
        wasmtime_extern_delete(&table); wasmtime_val_unroot(&callback);
        if (failed) return failed;
    }
    if (desired_function != UINT64_MAX && desired_function != probe->proxy_function) {
        snprintf(error, capacity, "mailbox callback does not match the peer"); return 1;
    }
    *function = probe->proxy_function;
    return 0;
}
int lasm_lean_instance_mailbox_send(lean_probe_t *probe, uint64_t target, uint64_t value,
    char *error, size_t capacity) {
    uint64_t function;
    if (lasm_lean_instance_mailbox_prepare(probe, UINT64_MAX, &function, error, capacity)) return 1;
    wasmtime_context_t *context = wasmtime_store_context(probe->store);
    wasmtime_val_t args[4] = {
        { .kind = WASMTIME_I64, .of.i64 = (int64_t)probe->proxy_queue },
        { .kind = WASMTIME_I64, .of.i64 = (int64_t)target },
        { .kind = WASMTIME_I64, .of.i64 = (int64_t)function },
        { .kind = WASMTIME_I64, .of.i64 = (int64_t)value } }, result;
    wasm_trap_t *trap = invoke_from_import(probe, context, "emscripten_proxy_async", args, 4, &result, 1);
    if (failure(NULL, trap, error, capacity)) return 1;
    bool accepted = result.kind == WASMTIME_I32 && result.of.i32 == 1;
    wasmtime_val_unroot(&result);
    if (!accepted) { snprintf(error, capacity, "proxy task was not accepted"); return 1; }
    return 0;
}
int lasm_lean_instance_mailbox_enqueue(lean_probe_t *probe, uint64_t value, char *error, size_t capacity) {
    return lasm_lean_instance_mailbox_send(probe, probe->main_pthread, value, error, capacity);
}
int lasm_lean_instance_rejection_control(lean_probe_t *probe, char *error, size_t capacity) {
    if (!probe->control.store_id) { snprintf(error, capacity, "missing control import"); return 2; }
    wasmtime_val_t result;
    wasm_trap_t *trap = NULL;
    wasmtime_error_t *called = wasmtime_func_call(wasmtime_store_context(probe->store),
        &probe->control, NULL, 0, &result, 1, &trap);
    int status = failure(called, trap, error, capacity);
    if (!status) wasmtime_val_unroot(&result);
    return status;
}
