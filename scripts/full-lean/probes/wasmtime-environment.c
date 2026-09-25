// Exercise the deployed C bridge with real Wasm imports and guest memory.
#define LASM_CANONICAL_IMPORTS_IMPLEMENTATION
#include "wasmtime-instantiate-lean.c"
#include <assert.h>
#include <limits.h>

static char diagnostic[8192];
static unsigned accepted, rejected, bounds;
static double clock_callback(void) { return 0; }
static int32_t mailbox_callback(uint64_t a, uint64_t b) { (void)a; (void)b; return 0; }
static void check(int status) {
    if (status) { fprintf(stderr, "%s\n", diagnostic); exit(1); }
}
static void compile_fixture(const char *path) {
    const char *wat = "(module "
        "(import \"env\" \"memory\" (memory i64 2048 2048 shared)) "
        "(import \"wasi_snapshot_preview1\" \"environ_sizes_get\" (func $sizes (param i64 i64) (result i32))) "
        "(import \"wasi_snapshot_preview1\" \"environ_get\" (func $get (param i64 i64) (result i32))) "
        "(func (export \"sizes\") (param i64 i64) (result i32) (call $sizes (local.get 0) (local.get 1))) "
        "(func (export \"get\") (param i64 i64) (result i32) (call $get (local.get 0) (local.get 1))))";
    wasm_byte_vec_t bytes, serialized;
    check(failure(wasmtime_wat2wasm(wat, strlen(wat), &bytes), NULL, diagnostic, sizeof(diagnostic)));
    wasm_engine_t *engine = create_engine(12 * 1024 * 1024); assert(engine);
    wasmtime_module_t *module;
    uint8_t *canonical = NULL; size_t canonical_size = 0; uint32_t added;
    check(lasm_canonicalize_imports((uint8_t *)bytes.data, bytes.size,
        &canonical, &canonical_size, &added, diagnostic, sizeof(diagnostic)));
    assert(added == 2);
    check(failure(wasmtime_module_new(engine, canonical, canonical_size, &module),
        NULL, diagnostic, sizeof(diagnostic)));
    free(canonical);
    check(failure(wasmtime_module_serialize(module, &serialized), NULL, diagnostic, sizeof(diagnostic)));
    FILE *file = fopen(path, "wbx"); assert(file);
    assert(fwrite(serialized.data, 1, serialized.size, file) == serialized.size); assert(!fclose(file));
    wasm_byte_vec_delete(&serialized); wasm_byte_vec_delete(&bytes);
    wasmtime_module_delete(module); wasm_engine_delete(engine);
}
static lean_probe_t *create(const char *path, const uint8_t *bytes, size_t size, size_t count) {
    return lasm_lean_instance_new(path, clock_callback, mailbox_callback, bytes, size, count,
        "environment-control", NULL, NULL, NULL, diagnostic, sizeof(diagnostic));
}
static uint64_t number(const uint8_t *memory, size_t offset) {
    uint64_t value; memcpy(&value, memory + offset, sizeof(value)); return value;
}
static int call(lean_probe_t *probe, const char *name, uint64_t first, uint64_t second) {
    uint64_t args[] = {first, second}, result = UINT64_MAX;
    int status = lasm_lean_instance_call(probe, name, args, 2, 1, &result, diagnostic, sizeof(diagnostic));
    if (!status) assert(result == 0);
    return status;
}
static void valid(const char *path, const uint8_t *bytes, size_t size, size_t count) {
    lean_probe_t *probe = create(path, bytes, size, count);
    if (!probe) { fprintf(stderr, "%s\n", diagnostic); exit(1); }
    uint8_t *memory = wasmtime_sharedmemory_data(probe->memory);
    size_t limit = wasmtime_sharedmemory_data_size(probe->memory);
    check(call(probe, "sizes", 8, 16));
    assert(number(memory, 8) == count && number(memory, 16) == size);
    memset(memory + 4096, 0x7b, size + 1);
    check(call(probe, "get", 64, 4096));
    if (size) assert(!memcmp(memory + 4096, bytes, size));
    assert(memory[4096 + size] == 0x7b);
    size_t offset = 0;
    for (size_t i = 0; i < count; i++) {
        assert(number(memory, 64 + i * 8) == 4096 + offset);
        offset += strlen((const char *)bytes + offset) + 1;
    }
    assert(offset == size);
    assert(call(probe, "sizes", limit - 4, 16));
    assert(strstr(diagnostic, "environment pointer outside memory")); bounds++;
    if (count) {
        assert(call(probe, "get", limit - count * 8 + 1, 4096));
        assert(strstr(diagnostic, "environment pointer outside memory")); bounds++;
        assert(call(probe, "get", 64, limit - size + 1));
        assert(strstr(diagnostic, "environment pointer outside memory")); bounds++;
    } else {
        // Empty ranges may point exactly one past guest memory. No host
        // memcpy may receive a null source, even for a zero-length snapshot.
        check(call(probe, "get", limit, limit)); bounds++;
    }
    lasm_lean_instance_delete(probe); accepted++;
}
static void invalid(const char *path, const uint8_t *bytes, size_t size, size_t count, const char *message) {
    lean_probe_t *probe = create(path, bytes, size, count);
    assert(!probe); assert(strstr(diagnostic, message)); rejected++;
}
int main(int argc, char **argv) {
    assert(argc == 2);
    char path[PATH_MAX]; assert(snprintf(path, sizeof(path), "%s/environment.cwasm", argv[1]) < (int)sizeof(path));
    compile_fixture(path);
    const uint8_t empty = 0, simple[] = "EMPTY=", raw[] = "RAW=\xff\x80\n", pair[] = "A=1\0B=2";
    valid(path, NULL, 0, 0); valid(path, &empty, 0, 0);
    valid(path, simple, sizeof(simple), 1); valid(path, raw, sizeof(raw), 1);
    valid(path, pair, sizeof(pair), 2);
    const size_t large_size = 20 * 61440;
    uint8_t *large = malloc(large_size); assert(large);
    for (size_t i = 0; i < 20; i++) {
        uint8_t *entry = large + i * 61440;
        memset(entry, (int)('A' + i), 61440); entry[1] = '='; entry[61440 - 1] = 0;
    }
    valid(path, large, large_size, 20); free(large);
    invalid(path, NULL, 1, 1, "invalid environment snapshot");
    invalid(path, &empty, 0, 1, "invalid environment snapshot");
    invalid(path, &empty, 1, 0, "invalid environment snapshot");
    invalid(path, &empty, 1, 2, "invalid environment snapshot");
    invalid(path, simple, sizeof(simple) - 1, 1, "invalid environment snapshot");
    invalid(path, pair, sizeof(pair), 1, "environment snapshot count mismatch");
    invalid(path, &empty, 1, SIZE_MAX / sizeof(uint64_t) + 1, "invalid environment snapshot");
    printf("{\"passed\":true,\"validSnapshots\":%u,\"malformedSnapshots\":%u,\"guestBoundaryChecks\":%u,\"largeSnapshotBytes\":%zu}\n",
        accepted, rejected, bounds, large_size);
}
