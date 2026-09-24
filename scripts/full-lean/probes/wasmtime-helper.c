// Feasibility probe only: not linked into any shipping Lasm runtime.
#include <wasmtime.h>
#include <stdint.h>
#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    wasm_engine_t *engine;
    wasmtime_sharedmemory_t *memory;
    wasmtime_module_t *module;
} probe_t;
typedef int64_t (*probe_callback_t)(int64_t);

static int error_text(wasmtime_error_t *error, wasm_trap_t *trap, char *out, size_t size) {
    if (!error && !trap) return 0;
    wasm_byte_vec_t message;
    if (error) wasmtime_error_message(error, &message);
    else wasm_trap_message(trap, &message);
    if (size) snprintf(out, size, "%.*s", (int)message.size, message.data);
    wasm_byte_vec_delete(&message);
    if (error) wasmtime_error_delete(error);
    if (trap) wasm_trap_delete(trap);
    return 1;
}

void lasm_probe_delete(probe_t *probe) {
    if (!probe) return;
    if (probe->module) wasmtime_module_delete(probe->module);
    if (probe->memory) wasmtime_sharedmemory_delete(probe->memory);
    if (probe->engine) wasm_engine_delete(probe->engine);
    free(probe);
}

probe_t *lasm_probe_new(char *error, size_t size) {
    probe_t *probe = calloc(1, sizeof(*probe));
    if (!probe) { snprintf(error, size, "probe allocation failed"); return NULL; }
    wasm_config_t *config = wasm_config_new();
    wasmtime_config_wasm_memory64_set(config, true);
    wasmtime_config_wasm_threads_set(config, true);
    wasmtime_config_shared_memory_set(config, true);
    wasmtime_config_wasm_exceptions_set(config, true);
    wasmtime_config_parallel_compilation_set(config, false);
    wasmtime_config_max_wasm_stack_set(config, 1024 * 1024);
    probe->engine = wasm_engine_new_with_config(config);
    if (!probe->engine) { snprintf(error, size, "engine creation failed"); goto fail; }
    wasm_memorytype_t *type = NULL;
    if (error_text(wasmtime_memorytype_new(1, true, 131072, true, true, 16, &type), NULL, error, size)) goto fail;
    wasmtime_error_t *memory_error = wasmtime_sharedmemory_new(probe->engine, type, &probe->memory);
    wasm_memorytype_delete(type);
    if (error_text(memory_error, NULL, error, size)) goto fail;
    // A standardized exception and a host callback execute on actual memory64.
    // The declared maximum is 8 GiB; only one page is initially allocated.
    const char *wat =
        "(module (import \"env\" \"memory\" (memory i64 1 131072 shared))"
        " (import \"env\" \"next\" (func $next (param i64) (result i64)))"
        " (tag $error (param i64))"
        " (func (export \"run\") (param $value i64) (result i64)"
        "  local.get $value call $next local.set $value"
        "  i64.const 0 local.get $value i64.atomic.store"
        "  (block $caught (result i64)"
        "   (try_table (result i64) (catch $error $caught)"
        "    local.get $value throw $error))"
        "  i64.const 0 i64.atomic.load i64.add)"
        " (func (export \"wait\") (result i64)"
        "  i64.const 8 i32.const 0 i64.const 5000000000 memory.atomic.wait32 i64.extend_i32_u)"
        " (func (export \"notify\") (result i64)"
        "  i64.const 8 i32.const 1 memory.atomic.notify i64.extend_i32_u))";
    wasm_byte_vec_t bytes;
    if (error_text(wasmtime_wat2wasm(wat, strlen(wat), &bytes), NULL, error, size)) goto fail;
    wasmtime_error_t *module_error = wasmtime_module_new(probe->engine, (uint8_t *)bytes.data, bytes.size, &probe->module);
    wasm_byte_vec_delete(&bytes);
    if (error_text(module_error, NULL, error, size)) goto fail;
    return probe;
fail:
    lasm_probe_delete(probe);
    return NULL;
}

static wasm_trap_t *invoke(void *env, wasmtime_caller_t *caller,
                           const wasmtime_val_t *args, size_t nargs,
                           wasmtime_val_t *results, size_t nresults) {
    (void)caller;
    if (nargs != 1 || nresults != 1 || args[0].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected callback ABI", 23);
    probe_callback_t callback = *(probe_callback_t *)env;
    results[0].kind = WASMTIME_I64;
    results[0].of.i64 = callback(args[0].of.i64);
    return NULL;
}

static int execute(probe_t *probe, const char *name, int64_t value, probe_callback_t callback,
                   int64_t *result, char *error, size_t size) {
    // Every caller owns a distinct Store. The engine/module/shared memory are
    // the only values shared between the independent JavaScript worker threads.
    wasmtime_store_t *store = wasmtime_store_new(probe->engine, NULL, NULL);
    wasmtime_context_t *context = wasmtime_store_context(store);
    wasmtime_sharedmemory_t *memory = wasmtime_sharedmemory_clone(probe->memory);
    wasm_functype_t *type = wasm_functype_new_1_1(wasm_valtype_new_i64(), wasm_valtype_new_i64());
    wasmtime_extern_t imports[2] = {0};
    imports[0].kind = WASMTIME_EXTERN_SHAREDMEMORY;
    imports[0].of.sharedmemory = memory;
    imports[1].kind = WASMTIME_EXTERN_FUNC;
    wasmtime_func_new(context, type, invoke, &callback, NULL, &imports[1].of.func);
    wasm_functype_delete(type);
    wasmtime_instance_t instance;
    wasm_trap_t *trap = NULL;
    wasmtime_error_t *instance_error = wasmtime_instance_new(context, probe->module, imports, 2, &instance, &trap);
    int status = error_text(instance_error, trap, error, size);
    if (!status) {
        wasmtime_extern_t item;
        if (!wasmtime_instance_export_get(context, &instance, name, strlen(name), &item) || item.kind != WASMTIME_EXTERN_FUNC) {
            snprintf(error, size, "missing probe function"); status = 1;
        } else {
            wasmtime_val_t input = { .kind = WASMTIME_I64, .of.i64 = value }, output;
            trap = NULL;
            size_t ninputs = strcmp(name, "run") == 0 ? 1 : 0;
            wasmtime_error_t *call_error = wasmtime_func_call(context, &item.of.func, &input, ninputs, &output, 1, &trap);
            status = error_text(call_error, trap, error, size);
            if (!status) {
                if (output.kind != WASMTIME_I64) { snprintf(error, size, "incorrect result type"); status = 1; }
                else *result = output.of.i64;
                wasmtime_val_unroot(&output);
            }
            wasmtime_extern_delete(&item);
        }
    }
    wasmtime_sharedmemory_delete(memory);
    wasmtime_store_delete(store);
    return status;
}

int lasm_probe_run(probe_t *probe, int64_t value, probe_callback_t callback,
                   int64_t *result, char *error, size_t size) {
    return execute(probe, "run", value, callback, result, error, size);
}

int lasm_probe_wait(probe_t *probe, int64_t *result, char *error, size_t size) {
    return execute(probe, "wait", 0, NULL, result, error, size);
}

int lasm_probe_notify(probe_t *probe, int64_t *result, char *error, size_t size) {
    return execute(probe, "notify", 0, NULL, result, error, size);
}

int lasm_probe_legacy_exception(probe_t *probe, char *error, size_t size) {
    const char *wat = "(module (tag $error (param i64))"
        " (func (export \"run\") (result i64)"
        "  (try (result i64) (do (i64.const 7) (throw $error)) (catch $error))))";
    wasm_byte_vec_t bytes;
    if (error_text(wasmtime_wat2wasm(wat, strlen(wat), &bytes), NULL, error, size)) return 2;
    wasmtime_module_t *module = NULL;
    wasmtime_error_t *validation = wasmtime_module_new(probe->engine, (uint8_t *)bytes.data, bytes.size, &module);
    wasm_byte_vec_delete(&bytes);
    int status = error_text(validation, NULL, error, size);
    if (module) wasmtime_module_delete(module);
    return status;
}

uint64_t lasm_probe_peek(probe_t *probe) {
    return atomic_load((_Atomic uint64_t *)wasmtime_sharedmemory_data(probe->memory));
}

int lasm_probe_memory(probe_t *probe, uint64_t *fields) {
    wasm_memorytype_t *type = wasmtime_sharedmemory_type(probe->memory);
    fields[0] = wasmtime_memorytype_is64(type);
    fields[1] = wasmtime_memorytype_isshared(type);
    fields[2] = 0;
    bool maximum = wasmtime_memorytype_maximum(type, &fields[2]);
    fields[3] = wasmtime_sharedmemory_data_size(probe->memory);
    wasm_memorytype_delete(type);
    return maximum ? 0 : 1;
}

int lasm_probe_grow_one_page(probe_t *probe, char *error, size_t size) {
    // Explicitly cap this experiment at two pages. It must never allocate the
    // declared maximum just to check that the engine accepts its address range.
    if (wasmtime_sharedmemory_size(probe->memory) != 1) {
        snprintf(error, size, "probe growth is restricted to exactly one page"); return 1;
    }
    uint64_t previous;
    return error_text(wasmtime_sharedmemory_grow(probe->memory, 1, &previous), NULL, error, size);
}
