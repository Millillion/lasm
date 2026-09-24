// Synthetic shared-memory bridge prerequisite; no application backend change.
#include <sys/resource.h>
#define lasm_probe_new lasm_probe_new_unchecked_core
#include "wasmtime-helper.c"
#undef lasm_probe_new

probe_t *lasm_probe_new(char *error, size_t capacity) {
    const struct rlimit no_core = {0, 0};
    if (setrlimit(RLIMIT_CORE, &no_core) != 0) {
        snprintf(error, capacity, "could not disable core dumps"); return NULL;
    }
    return lasm_probe_new_unchecked_core(error, capacity);
}

void *lasm_probe_memory_data(probe_t *probe) {
    return wasmtime_sharedmemory_data(probe->memory);
}

void *lasm_probe_memory_window(probe_t *probe, uint64_t offset, size_t length) {
    size_t size = wasmtime_sharedmemory_data_size(probe->memory);
    if (length > 65536 || offset > size || length > size - offset) return NULL;
    return wasmtime_sharedmemory_data(probe->memory) + offset;
}
