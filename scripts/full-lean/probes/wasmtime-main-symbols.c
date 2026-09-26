// Tiny controls for the same native symbol resolver used by Lean applications.
#define LASM_CANONICAL_IMPORTS_IMPLEMENTATION
#include "wasmtime-instantiate-lean.c"
#include <assert.h>

static char diagnostic[8192];
static double clock_callback(void) { return 0; }
static int32_t mailbox_callback(uint64_t a, uint64_t b) { (void)a; (void)b; return 0; }
static void check(int status) {
    if (status) { fprintf(stderr, "%s\n", diagnostic); exit(1); }
}
static const char *fixture = "(module "
    "(type $unary (func (param i64) (result i64))) "
    "(import \"env\" \"memory\" (memory i64 2048 131072 shared)) "
    "(import \"env\" \"_dlsym_js\" (func $lookup (param i64 i64 i64) (result i64))) "
    "(table (export \"__indirect_function_table\") 3 funcref) "
    "(func $known (export \"known\") (export \"alias\") (type $unary) (i64.add (local.get 0) (i64.const 7))) "
    "(func (export \"appended\") (export \"appended_alias\") (type $unary) (i64.add (local.get 0) (i64.const 11))) "
    "(elem (i32.const 1) $known $known) "
    "(global (export \"l_data\") i64 (i64.const 4294967456)) "
    "(global (export \"bad_type\") f64 (f64.const 1)) "
    "(global $allocation (mut i64) (i64.const 65536)) "
    "(func (export \"malloc\") (param i64) (result i64) (local $base i64) "
      "(local.set $base (global.get $allocation)) (global.set $allocation (i64.add (global.get $allocation) (local.get 0))) (local.get $base)) "
    "(func (export \"free\") (param i64) (i32.store (i64.const 60) (i32.add (i32.load (i64.const 60)) (i32.const 1)))) "
    "(func (export \"__dl_seterr\") (param $format i64) (param $args i64) (local $p i64) (local $i i64) (local $c i32) "
      "(if (i32.ne (i32.load16_u (local.get $format)) (i32.const 29477)) (then unreachable)) "
      "(local.set $p (i64.load (local.get $args))) "
      "(block $end (loop $copy (local.set $c (i32.load8_u (i64.add (local.get $p) (local.get $i)))) "
        "(i32.store8 (i64.add (i64.const 2048) (local.get $i)) (local.get $c)) "
        "(br_if $end (i32.eqz (local.get $c))) (local.set $i (i64.add (local.get $i) (i64.const 1))) (br $copy)))) "
    "(func (export \"lasm_lookup_lean_symbol\") (param i64) (result i64) "
      "(select (i64.const 2) (i64.const 0) (i32.eq (i32.load8_u (i64.add (local.get 0) (i64.const 2))) (i32.const 107)))) "
    "(func (export \"lookup\") (param i64 i64 i64) (result i64) (call $lookup (local.get 0) (local.get 1) (local.get 2))))";

static void compile_fixture(const char *path) {
    wasm_byte_vec_t bytes, serialized;
    check(failure(wasmtime_wat2wasm(fixture, strlen(fixture), &bytes), NULL, diagnostic, sizeof(diagnostic)));
    wasm_engine_t *engine = create_engine(12 * 1024 * 1024, diagnostic, sizeof(diagnostic)); assert(engine);
    uint8_t *canonical = NULL; size_t length = 0; uint32_t added;
    check(lasm_canonicalize_imports((uint8_t *)bytes.data, bytes.size, &canonical, &length, &added, diagnostic, sizeof(diagnostic)));
    wasmtime_module_t *module;
    check(failure(wasmtime_module_new(engine, canonical, length, &module), NULL, diagnostic, sizeof(diagnostic))); free(canonical);
    check(failure(wasmtime_module_serialize(module, &serialized), NULL, diagnostic, sizeof(diagnostic)));
    FILE *file = fopen(path, "wbx"); assert(file);
    assert(fwrite(serialized.data, 1, serialized.size, file) == serialized.size); assert(!fclose(file));
    wasm_byte_vec_delete(&serialized); wasm_byte_vec_delete(&bytes); wasmtime_module_delete(module); wasm_engine_delete(engine);
}
static lean_probe_t *create(const char *path, lean_probe_t *parent) {
    lean_probe_t *probe = lasm_lean_instance_new(path, clock_callback, mailbox_callback,
        NULL, 0, 0, "symbol-control", parent, NULL, NULL, diagnostic, sizeof(diagnostic));
    if (!probe) { fprintf(stderr, "%s\n", diagnostic); exit(1); } return probe;
}
static uint64_t lookup(lean_probe_t *probe, uint64_t address, const char *name) {
    uint8_t *memory = wasmtime_sharedmemory_data(probe->memory);
    strcpy((char *)memory + address, name); memset(memory + address + 1024, 0xa5, 16);
    memset(memory + address + 1024, 0xff, 4);
    uint64_t args[] = {0, address, address + 1024}, result;
    check(lasm_lean_instance_call(probe, "lookup", args, 3, 1, &result, diagnostic, sizeof(diagnostic)));
    for (size_t i = 0; i < 16; i++) assert(memory[address + 1024 + i] == (i < 4 ? 0xff : 0xa5));
    return result;
}
static void rejects(lean_probe_t *probe, uint64_t handle, uint64_t name, uint64_t out, const char *message) {
    uint64_t args[] = {handle, name, out}, result;
    assert(lasm_lean_instance_call(probe, "lookup", args, 3, 1, &result, diagnostic, sizeof(diagnostic)));
    assert(strstr(diagnostic, message));
}
int main(int argc, char **argv) {
    assert(argc == 2); char path[4096]; assert(snprintf(path, sizeof(path), "%s/symbols.cwasm", argv[1]) < (int)sizeof(path));
    compile_fixture(path); lean_probe_t *probe = create(path, NULL);
    assert(lookup(probe, 8192, "known") == 2); assert(lookup(probe, 8192, "alias") == 2);
    uint64_t appended = lookup(probe, 8192, "appended"); assert(appended >= 3);
    assert(lookup(probe, 8192, "appended_alias") == appended);
    assert(lookup(probe, 8192, "l_data") == UINT64_C(4294967456));
    assert(lookup(probe, 8192, "l_known") == 2);
    assert(lookup(probe, 8192, "missing_%s") == 0);
    uint8_t *memory = wasmtime_sharedmemory_data(probe->memory);
    assert(!strcmp((char *)memory + 2048, "Tried to lookup unknown symbol \"missing_%s\" in dynamic lib: __main__"));
    assert(lookup(probe, 8192, "l_missing") == 0);
    assert(*(uint32_t *)(memory + 60) == 2);
    rejects(probe, 1, 8192, 9216, "side-module dlsym handle");
    size_t size = wasmtime_sharedmemory_data_size(probe->memory);
    rejects(probe, 0, size, 9216, "lookup memory");
    rejects(probe, 0, 8192, size - 2, "lookup memory");
    memory[size - 1] = 255; rejects(probe, 0, size - 1, 9216, "unterminated");
    strcpy((char *)memory + 8192, "bad_type"); rejects(probe, 0, 8192, 9216, "export type");
    uint64_t before;
    check(failure(wasmtime_sharedmemory_grow(probe->memory, 65537 - 2048, &before), NULL, diagnostic, sizeof(diagnostic)));
    assert(lookup(probe, UINT64_C(4294967296) + 8192, "known") == 2);
    lean_probe_t *worker = create(path, probe);
    assert(lookup(worker, 8192, "appended") == appended);
    uint64_t result;
    check(lasm_lean_instance_call_pointer(worker, appended, 31, &result, diagnostic, sizeof(diagnostic))); assert(result == 42);
    check(lasm_lean_instance_call_pointer(worker, 2, 35, &result, diagnostic, sizeof(diagnostic))); assert(result == 42);
    lasm_lean_instance_delete(worker); lasm_lean_instance_delete(probe);
    puts("{\"passed\":true,\"existingAndAliasPointers\":true,\"preseededWorkerPointers\":true,\"dataAbove4GiB\":true,\"registryLookup\":true,\"missingSymbolErrors\":2,\"invalidLookups\":5,\"guestNamesAbove4GiB\":true,\"workerIndirectCalls\":2}");
    return 0;
}
