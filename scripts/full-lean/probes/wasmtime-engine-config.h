#ifndef LASM_WASMTIME_ENGINE_CONFIG_H
#define LASM_WASMTIME_ENGINE_CONFIG_H
#include <wasmtime.h>
#include <stdint.h>
#include <stdio.h>

// This preview currently builds Linux x64 native helpers only. An explicit
// target disables Wasmtime's inference of optional build-host CPU features.
// Compilation and loading must share these settings; a fresh cache records
// this target rather than relabeling a cache made with native inference.
#define LASM_WASMTIME_CPU_TARGET "x86_64-unknown-linux-gnu"
static wasm_engine_t *create_engine(size_t wasm_stack_budget, char *error, size_t capacity) {
    wasm_config_t *config = wasm_config_new();
    if (!config) { snprintf(error, capacity, "engine config allocation failed"); return NULL; }
    wasmtime_error_t *target_error = wasmtime_config_target_set(config, LASM_WASMTIME_CPU_TARGET);
    if (target_error) {
        wasm_byte_vec_t message;
        wasmtime_error_message(target_error, &message);
        snprintf(error, capacity, "baseline CPU target: %.*s", (int)message.size, message.data);
        wasm_byte_vec_delete(&message); wasmtime_error_delete(target_error); wasm_config_delete(config);
        return NULL;
    }
    wasmtime_config_wasm_memory64_set(config, true);
    wasmtime_config_wasm_threads_set(config, true);
    wasmtime_config_shared_memory_set(config, true);
    wasmtime_config_wasm_exceptions_set(config, true);
    wasmtime_config_strategy_set(config, WASMTIME_STRATEGY_CRANELIFT);
    wasmtime_config_parallel_compilation_set(config, false);
    wasmtime_config_cranelift_opt_level_set(config, WASMTIME_OPT_LEVEL_NONE);
    wasmtime_config_memory_reservation_set(config, UINT64_C(8589934592));
    wasmtime_config_max_wasm_stack_set(config, wasm_stack_budget);
    wasmtime_config_async_stack_size_set(config, 80 * 1024 * 1024);
    wasm_engine_t *engine = wasm_engine_new_with_config(config);
    if (!engine) snprintf(error, capacity, "engine allocation failed");
    return engine;
}
#endif
