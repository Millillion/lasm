// Compare baseline/native compilation and execution on this CPU; no different-CPU claim.
#include <wasmtime.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "wasmtime-engine-config.h"

static void check(wasmtime_error_t *error, wasm_trap_t *trap) {
    if (!error && !trap) return;
    wasm_byte_vec_t message;
    if (error) wasmtime_error_message(error, &message); else wasm_trap_message(trap, &message);
    fprintf(stderr, "%.*s\n", (int)message.size, message.data); exit(1);
}
static wasm_engine_t *engine(int baseline) {
    if (baseline) {
        char error[8192];
        wasm_engine_t *result = create_engine(12 * 1024 * 1024, error, sizeof(error));
        if (!result) { fprintf(stderr, "%s\n", error); exit(1); }
        return result;
    }
    wasm_config_t *config = wasm_config_new();
    wasmtime_config_wasm_memory64_set(config, true);
    wasmtime_config_wasm_threads_set(config, true);
    wasmtime_config_shared_memory_set(config, true);
    wasmtime_config_wasm_exceptions_set(config, true);
    wasmtime_config_wasm_simd_set(config, true);
    wasmtime_config_strategy_set(config, WASMTIME_STRATEGY_CRANELIFT);
    wasmtime_config_parallel_compilation_set(config, false);
    wasmtime_config_cranelift_opt_level_set(config, WASMTIME_OPT_LEVEL_NONE);
    wasmtime_config_memory_reservation_set(config, UINT64_C(8589934592));
    wasmtime_config_max_wasm_stack_set(config, 12 * 1024 * 1024);
    wasmtime_config_async_stack_size_set(config, 80 * 1024 * 1024);
    return wasm_engine_new_with_config(config);
}
static void execute(wasm_engine_t *engine, wasmtime_module_t *module) {
    wasmtime_store_t *store = wasmtime_store_new(engine, NULL, NULL);
    wasmtime_context_t *context = wasmtime_store_context(store);
    wasmtime_instance_t instance;
    wasm_trap_t *trap = NULL;
    wasmtime_error_t *error = wasmtime_instance_new(context, module, NULL, 0, &instance, &trap);
    check(error, trap);
    wasmtime_extern_t item;
    assert(wasmtime_instance_export_get(context, &instance, "run", 3, &item) && item.kind == WASMTIME_EXTERN_FUNC);
    wasmtime_val_t result;
    error = wasmtime_func_call(context, &item.of.func, NULL, 0, &result, 1, &trap); check(error, trap);
    assert(result.kind == WASMTIME_I64 && result.of.i64 == 16);
    wasmtime_store_delete(store);
}
int main(void) {
    const char *wat = "(module (memory i64 1 1 shared) "
        "(func (export \"run\") (result i64) "
        "(drop (i64.atomic.rmw.add (i64.const 0) (i64.const 1))) "
        "(i64.add (i64.atomic.load (i64.const 0)) "
        "(i64.extend_i32_u (i8x16.extract_lane_u 0 (i8x16.swizzle "
        "(v128.const i8x16 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15) "
        "(v128.const i8x16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0)))))))";
    wasm_byte_vec_t wasm; check(wasmtime_wat2wasm(wat, strlen(wat), &wasm), NULL);
    unsigned baselineLoads = 0, nativeLoads = 0;
    for (int baseline = 0; baseline <= 1; baseline++) {
        wasm_engine_t *compiler = engine(baseline); assert(compiler);
        wasmtime_module_t *module;
        check(wasmtime_module_new(compiler, (uint8_t *)wasm.data, wasm.size, &module), NULL);
        execute(compiler, module);
        wasm_byte_vec_t cache; check(wasmtime_module_serialize(module, &cache), NULL);
        for (int target = 0; target <= 1; target++) {
            wasm_engine_t *loader = engine(target); assert(loader);
            wasmtime_module_t *loaded;
            wasmtime_error_t *error = wasmtime_module_deserialize(loader, (uint8_t *)cache.data, cache.size, &loaded);
            if (error) {
                wasm_byte_vec_t message; wasmtime_error_message(error, &message);
                fprintf(stderr, "native-inferred cache rejected by baseline engine: %.*s\n", (int)message.size, message.data);
                wasm_byte_vec_delete(&message); wasmtime_error_delete(error);
                assert(!baseline && target);
            } else {
                execute(loader, loaded); wasmtime_module_delete(loaded);
                if (baseline) baselineLoads++; else nativeLoads++;
            }
            wasm_engine_delete(loader);
        }
        wasm_byte_vec_delete(&cache); wasmtime_module_delete(module); wasm_engine_delete(compiler);
    }
    wasm_byte_vec_delete(&wasm);
    assert(baselineLoads == 2 && nativeLoads >= 1);
    printf("{\"passed\":true,\"cpuTarget\":\"%s\",\"baselineCacheExecutions\":%u,\"nativeCacheExecutions\":%u,\"sharedMemory64AtomicAndSimdResult\":16}\n", LASM_WASMTIME_CPU_TARGET, baselineLoads, nativeLoads);
}
