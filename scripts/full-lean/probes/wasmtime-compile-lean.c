// Compile/serialize a real module for the private helper investigation.
// No imports are supplied and no application is instantiated or executed.
#include <wasmtime.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/resource.h>
#define LASM_CANONICAL_IMPORTS_IMPLEMENTATION
#include "wasmtime-canonical-imports.h"
#include "wasmtime-engine-config.h"

const char *lasm_wasmtime_compilation_cpu_target(void) {
    return LASM_WASMTIME_CPU_TARGET;
}

static int describe(wasmtime_error_t *failure, char *error, size_t capacity) {
    if (!failure) return 0;
    wasm_byte_vec_t message;
    wasmtime_error_message(failure, &message);
    if (capacity) snprintf(error, capacity, "%.*s", (int)message.size, message.data);
    wasm_byte_vec_delete(&message);
    wasmtime_error_delete(failure);
    return 1;
}

int lasm_compile_lean_module(const uint8_t *bytes, size_t length, const char *cache_file,
                             uint64_t *details, char *error, size_t capacity) {
    const struct rlimit no_core = {0, 0};
    if (setrlimit(RLIMIT_CORE, &no_core) != 0) {
        snprintf(error, capacity, "could not disable probe core dumps"); return 1;
    }
    if (length > 512 * 1024 * 1024) {
        snprintf(error, capacity, "module exceeds reviewed 512 MiB input bound"); return 2;
    }
    wasm_engine_t *engine = create_engine(64 * 1024 * 1024, error, capacity);
    if (!engine) return 1;
    wasmtime_module_t *module = NULL, *restored = NULL;
    uint8_t *canonical = NULL; size_t canonical_length = 0; uint32_t added = 0;
    int status = lasm_canonicalize_imports(bytes, length, &canonical, &canonical_length, &added, error, capacity);
    if (!status) status = describe(wasmtime_module_new(engine, canonical ? canonical : bytes,
        canonical ? canonical_length : length, &module), error, capacity);
    free(canonical);
    if (status) goto done;
    wasm_importtype_vec_t imports;
    wasm_exporttype_vec_t exports;
    wasmtime_module_imports(module, &imports);
    wasmtime_module_exports(module, &exports);
    details[0] = imports.size;
    details[1] = exports.size;
    wasm_importtype_vec_delete(&imports);
    wasm_exporttype_vec_delete(&exports);
    wasm_byte_vec_t serialized;
    status = describe(wasmtime_module_serialize(module, &serialized), error, capacity);
    if (status) goto done;
    details[2] = serialized.size;
    if (serialized.size > 640 * 1024 * 1024) {
        snprintf(error, capacity, "serialized module exceeds reviewed 640 MiB disk bound"); status = 2;
    } else {
        // Exclusive creation preserves previous evidence. A short write remains
        // a failed experiment; its partial output is never deserialized.
        FILE *file = fopen(cache_file, "wbx");
        if (!file) { snprintf(error, capacity, "cannot create new serialized module"); status = 1; }
        else {
            size_t written = fwrite(serialized.data, 1, serialized.size, file);
            int closed = fclose(file);
            if (written != serialized.size || closed != 0) {
                snprintf(error, capacity, "serialized module write failed"); status = 1;
            }
        }
    }
    wasm_byte_vec_delete(&serialized);
    if (status) goto done;
    wasmtime_module_delete(module); module = NULL;
    // Only the trusted bytes just produced by this engine may reach the unsafe
    // deserializer. This probe never accepts an external compiled-code cache.
    status = describe(wasmtime_module_deserialize_file(engine, cache_file, &restored), error, capacity);
    if (status) goto done;
    wasmtime_module_imports(restored, &imports);
    wasmtime_module_exports(restored, &exports);
    details[3] = imports.size;
    details[4] = exports.size;
    wasm_importtype_vec_delete(&imports);
    wasm_exporttype_vec_delete(&exports);
done:
    if (restored) wasmtime_module_delete(restored);
    if (module) wasmtime_module_delete(module);
    wasm_engine_delete(engine);
    return status;
}
