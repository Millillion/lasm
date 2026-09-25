// Focused native controls exercise the same private bridge as real Lean modules.
// Compile/run only under run-bounded with base pages; each tiny module is local.
#define LASM_CANONICAL_IMPORTS_IMPLEMENTATION
#include "wasmtime-instantiate-lean.c"
#include <assert.h>
#include <limits.h>

#define MEMORY "(import \"env\" \"memory\" (memory i64 2048 4096 shared)) "
#define GOT(name, symbol) "(import \"GOT.func\" \"" symbol "\" (global $" name " (mut i64))) "
#define EMIT(name) "(func (export \"emit_" name "\") (param i64) " \
    "(call_indirect (type $console) (local.get 0) (i32.wrap_i64 (global.get $" name ")))) "

static const char *positive = "(module (type $console (func (param i64))) " MEMORY
    "(import \"env\" \"emscripten_console_log\" (func $log (type $console))) "
    GOT("log", "emscripten_console_log") GOT("error", "emscripten_console_error")
    GOT("warn", "emscripten_console_warn") GOT("trace", "emscripten_console_trace")
    GOT("out", "emscripten_out") GOT("err", "emscripten_err") GOT("duplicate", "emscripten_out")
    GOT("compiled", "compiled_target") GOT("alias", "compiled_alias")
    "(table (export \"__indirect_function_table\") 3 12 funcref) "
    "(func $compiled (export \"compiled_target\") (export \"compiled_alias\") (param i64) "
    "(i64.store (i64.const 40) (local.get 0))) "
    "(elem (i32.const 1) $compiled $log) "
    EMIT("log") EMIT("error") EMIT("warn") EMIT("trace") EMIT("out") EMIT("err")
    EMIT("duplicate") EMIT("compiled") EMIT("alias") ")";

static char diagnostic[8192];
static uint32_t last_kind;
static uint64_t last_argument, calls;
static double clock_callback(void) { return 0; }
static int32_t mailbox_callback(uint64_t a, uint64_t b) { (void)a; (void)b; return 0; }
static int32_t console_callback(uint32_t kind, uint64_t a, uint64_t b, uint64_t c,
    uint64_t d, uint64_t e, uint64_t *result) {
    assert(kind >= 11 && kind <= 16); assert(!b && !c && !d && !e);
    last_kind = kind; last_argument = a; calls++; *result = 0; return 0;
}
static void check(int status) {
    if (status) { fprintf(stderr, "%s\n", diagnostic); exit(1); }
}
static void unchanged_sections(const uint8_t *before, size_t before_size,
    const uint8_t *after, size_t after_size) {
    assert(before_size >= 8 && after_size >= 8 && !memcmp(before, after, 8));
    lasm_wasm_reader original = {before + 8, before + before_size};
    lasm_wasm_reader transformed = {after + 8, after + after_size};
    while (original.at != original.end) {
        const uint8_t *first = original.at; uint8_t kind = *original.at++; uint64_t size;
        assert(lasm_read_integer(&original, 32, &size));
        assert(size <= (size_t)(original.end - original.at)); original.at += size;
        if (kind == 7) continue;
        const uint8_t *second; uint8_t actual;
        do {
            assert(transformed.at != transformed.end); second = transformed.at;
            actual = *transformed.at++; assert(lasm_read_integer(&transformed, 32, &size));
            assert(size <= (size_t)(transformed.end - transformed.at)); transformed.at += size;
        } while (actual == 7);
        assert(kind == actual && original.at - first == transformed.at - second);
        assert(!memcmp(first, second, (size_t)(original.at - first)));
    }
    while (transformed.at != transformed.end) {
        assert(*transformed.at++ == 7); uint64_t size;
        assert(lasm_read_integer(&transformed, 32, &size));
        assert(size <= (size_t)(transformed.end - transformed.at)); transformed.at += size;
    }
}
static void canonical_control(const char *wat, uint32_t expected, const char *rejected) {
    wasm_byte_vec_t bytes;
    check(failure(wasmtime_wat2wasm(wat, strlen(wat), &bytes), NULL, diagnostic, sizeof(diagnostic)));
    uint8_t *canonical = NULL; size_t length = 0; uint32_t added;
    int status = lasm_canonicalize_imports((uint8_t *)bytes.data, bytes.size,
        &canonical, &length, &added, diagnostic, sizeof(diagnostic));
    if (rejected) {
        assert(status && !canonical && !length && !added && strstr(diagnostic, rejected));
    } else {
        check(status); assert(added == expected);
        if (added) unchanged_sections((uint8_t *)bytes.data, bytes.size, canonical, length);
        wasm_engine_t *engine = create_engine(12 * 1024 * 1024); assert(engine);
        wasmtime_module_t *module;
        check(failure(wasmtime_module_new(engine, canonical ? canonical : (uint8_t *)bytes.data,
            canonical ? length : bytes.size, &module), NULL, diagnostic, sizeof(diagnostic)));
        wasm_exporttype_vec_t exports; wasmtime_module_exports(module, &exports);
        uint32_t observed = 0;
        for (size_t i = 0; i < exports.size; i++) {
            const wasm_name_t *name = wasm_exporttype_name(exports.data[i]);
            if (name->size >= sizeof(LASM_CANONICAL_IMPORT_PREFIX) - 1 &&
                !memcmp(name->data, LASM_CANONICAL_IMPORT_PREFIX, sizeof(LASM_CANONICAL_IMPORT_PREFIX) - 1)) {
                assert(wasm_externtype_kind(wasm_exporttype_type(exports.data[i])) == WASM_EXTERN_FUNC); observed++;
            }
        }
        assert(observed == expected);
        wasm_exporttype_vec_delete(&exports); wasmtime_module_delete(module); wasm_engine_delete(engine);
    }
    free(canonical); wasm_byte_vec_delete(&bytes);
}
static void canonical_controls(void) {
    canonical_control("(module (func (export \"ordinary\")))", 0, NULL);
    canonical_control("(module (import \"env\" \"f\" (func $f)) (func $entry (call $f)) (start $entry))", 1, NULL);
    canonical_control("(module (type $void (func)) (import \"other\" \"g\" (global i32)) "
        "(import \"env\" \"table\" (table 1 funcref)) (import \"env\" \"f\" (func $f)) "
        "(memory 1) (tag (type $void)) (global i32 (i32.const 0)) (func (call $f)))", 1, NULL);
    canonical_control("(module (import \"env\" \"f\" (func $f)) "
        "(export \"\\00lasm.import.0\" (func $f)))", 0, "reserved canonical-import");
    // Cross the count/name/index LEB boundaries without changing definitions,
    // element initializers or the original exports' binary encoding.
    char wat[32768]; size_t used = (size_t)snprintf(wat, sizeof(wat), "(module ");
    for (unsigned i = 0; i < 130; i++)
        used += (size_t)snprintf(wat + used, sizeof(wat) - used, "(import \"env\" \"f%u\" (func $f%u)) ", i, i);
    for (unsigned i = 0; i < 127; i++)
        used += (size_t)snprintf(wat + used, sizeof(wat) - used, "(export \"f%u\" (func $f%u)) ", i, i);
    assert(used + 2 < sizeof(wat)); strcpy(wat + used, ")");
    canonical_control(wat, 130, NULL);
    const uint8_t truncated[] = {0,97,115,109,1,0,0,0,2,5,1,0};
    uint8_t *output; size_t length; uint32_t added;
    assert(lasm_canonicalize_imports(truncated, sizeof(truncated), &output, &length,
        &added, diagnostic, sizeof(diagnostic)) && !output && !length && !added);
}
static void compile_fixture(const char *wat, const char *path) {
    wasm_byte_vec_t bytes, serialized;
    check(failure(wasmtime_wat2wasm(wat, strlen(wat), &bytes), NULL, diagnostic, sizeof(diagnostic)));
    wasm_engine_t *engine = create_engine(12 * 1024 * 1024);
    assert(engine);
    wasmtime_module_t *module;
    uint8_t *canonical = NULL; size_t canonical_length = 0; uint32_t added;
    check(lasm_canonicalize_imports((uint8_t *)bytes.data, bytes.size,
        &canonical, &canonical_length, &added, diagnostic, sizeof(diagnostic)));
    check(failure(wasmtime_module_new(engine, canonical ? canonical : (uint8_t *)bytes.data,
        canonical ? canonical_length : bytes.size, &module),
        NULL, diagnostic, sizeof(diagnostic)));
    free(canonical);
    check(failure(wasmtime_module_serialize(module, &serialized), NULL, diagnostic, sizeof(diagnostic)));
    FILE *file = fopen(path, "wb"); assert(file);
    assert(fwrite(serialized.data, 1, serialized.size, file) == serialized.size);
    assert(!fclose(file));
    wasm_byte_vec_delete(&serialized); wasm_byte_vec_delete(&bytes);
    wasmtime_module_delete(module); wasm_engine_delete(engine);
}
static lean_probe_t *create_fixture(const char *path, lean_probe_t *parent) {
    const uint8_t environment[] = "LASM_GOT_CONTROL=1";
    return lasm_lean_instance_new(path, clock_callback, mailbox_callback,
        environment, sizeof(environment), 1, "function-global-control", parent,
        NULL, NULL, diagnostic, sizeof(diagnostic));
}
static void emit(lean_probe_t *probe, const char *name, uint64_t argument) {
    uint64_t unused;
    check(lasm_lean_instance_call(probe, name, &argument, 1, 0, &unused, diagnostic, sizeof(diagnostic)));
}
static void rejection(const char *output, unsigned id, const char *wat, const char *expected) {
    char path[PATH_MAX];
    assert(snprintf(path, sizeof(path), "%s/rejection-%u.cwasm", output, id) < (int)sizeof(path));
    compile_fixture(wat, path);
    lean_probe_t *probe = create_fixture(path, NULL);
    if (probe) { lasm_lean_instance_delete(probe); fprintf(stderr, "accepted rejection %u\n", id); exit(1); }
    if (!strstr(diagnostic, expected)) { fprintf(stderr, "rejection %u: %s\n", id, diagnostic); exit(1); }
}
int main(int argc, char **argv) {
    assert(argc == 2);
    canonical_controls();
    char path[PATH_MAX];
    assert(snprintf(path, sizeof(path), "%s/positive.cwasm", argv[1]) < (int)sizeof(path));
    compile_fixture(positive, path);
    lean_probe_t *probe = create_fixture(path, NULL);
    if (!probe) { fprintf(stderr, "%s\n", diagnostic); return 1; }
    assert(lasm_lean_instance_function_global_count(probe) == 9);
    const char *names[] = { "emscripten_console_log", "emscripten_console_error", "emscripten_console_warn",
        "emscripten_console_trace", "emscripten_out", "emscripten_err", "compiled_target", "compiled_alias" };
    const uint64_t expected[] = {2, 3, 4, 5, 6, 7, 1, 1};
    for (size_t i = 0; i < sizeof(expected) / sizeof(expected[0]); i++) {
        uint64_t pointer;
        check(lasm_lean_instance_function_global(probe, names[i], &pointer, diagnostic, sizeof(diagnostic)));
        if (pointer != expected[i]) fprintf(stderr, "%s: pointer %llu, expected %llu\n", names[i],
            (unsigned long long)pointer, (unsigned long long)expected[i]);
        assert(pointer == expected[i]);
    }
    uint64_t argument = UINT64_C(0x10000002a), unused;
    assert(lasm_lean_instance_call(probe, "emit_out", &argument, 1, 0, &unused,
        diagnostic, sizeof(diagnostic)) == 1);
    assert(strstr(diagnostic, "UNIMPLEMENTED IMPORT env.emscripten_out"));
    assert(probe->rejected_calls == 1);
    lasm_lean_instance_set_runtime(probe, console_callback);
    const char *emitters[] = { "emit_log", "emit_error", "emit_warn", "emit_trace", "emit_out", "emit_err" };
    for (uint32_t i = 0; i < 6; i++) {
        emit(probe, emitters[i], argument + i);
        assert(last_kind == i + 11 && last_argument == argument + i);
    }
    emit(probe, "emit_duplicate", argument + 6);
    assert(last_kind == 15 && last_argument == argument + 6);
    for (unsigned i = 0; i < 2; i++) {
        emit(probe, i ? "emit_alias" : "emit_compiled", argument + i);
        uint64_t stored;
        memcpy(&stored, wasmtime_sharedmemory_data(probe->memory) + 40, 8);
        assert(stored == argument + i);
    }
    lean_probe_t *worker = create_fixture(NULL, probe);
    if (!worker) { fprintf(stderr, "%s\n", diagnostic); return 1; }
    assert(worker->function_global_count == probe->function_global_count);
    lasm_lean_instance_set_runtime(worker, console_callback);
    for (uint32_t i = 0; i < 6; i++) {
        emit(worker, emitters[i], argument + 100 + i);
        assert(last_kind == i + 11 && last_argument == argument + 100 + i);
    }
    assert(calls == 13);
    uint64_t pointer;
    assert(lasm_lean_instance_function_global(probe, "unknown", &pointer, diagnostic, sizeof(diagnostic)) == 1);
    wasmtime_val_t altered = { .kind = WASMTIME_I64, .of.i64 = 0 };
    check(failure(wasmtime_global_set(probe_context(probe), &probe->function_globals[0].global, &altered),
        NULL, diagnostic, sizeof(diagnostic)));
    assert(lasm_lean_instance_function_global(probe, names[0], &pointer, diagnostic, sizeof(diagnostic)) == 1);
    assert(strstr(diagnostic, "binding was changed"));
    lasm_lean_instance_delete(worker); lasm_lean_instance_delete(probe);
    rejection(argv[1], 1, "(module " MEMORY GOT("missing", "unimplemented_symbol")
        "(table (export \"__indirect_function_table\") 1 funcref))", "unresolved GOT.func import: unimplemented_symbol");
    rejection(argv[1], 2, "(module " MEMORY GOT("log", "emscripten_console_log")
        "(table (export \"__indirect_function_table\") 1 1 funcref))", "grow");
    rejection(argv[1], 3, "(module " MEMORY
        "(import \"GOT.func\" \"emscripten_out\" (global i64)) "
        "(table (export \"__indirect_function_table\") 1 funcref))", "unexpected global import");
    rejection(argv[1], 4, "(module " MEMORY
        "(import \"GOT.func\" \"emscripten_out\" (global (mut i32))) "
        "(table (export \"__indirect_function_table\") 1 funcref))", "unexpected global import");
    rejection(argv[1], 5, "(module " MEMORY GOT("log", "emscripten_console_log") ")", "missing GOT.func function table");
    rejection(argv[1], 6, "(module " MEMORY GOT("bad", "not_a_function")
        "(global (export \"not_a_function\") i64 (i64.const 0)) "
        "(table (export \"__indirect_function_table\") 1 funcref))", "symbol is not a function");
    rejection(argv[1], 7, "(module " MEMORY
        "(import \"env\" \"emscripten_console_log\" (func (param i32))))", "unexpected memory64 console signature");
    rejection(argv[1], 8, "(module " MEMORY GOT("log", "emscripten_console_log")
        "(table (export \"__indirect_function_table\") 1 externref))", "requires a function table");
    rejection(argv[1], 9, "(module " MEMORY GOT("log", "emscripten_console_log")
        "(global (export \"__indirect_function_table\") i64 (i64.const 0)))", "export is not a table");
    printf("{\"passed\":true,\"bindings\":9,\"existingTableAddressesPreserved\":true,"
        "\"duplicateAndExportAliasesRetainPointerEquality\":true,\"indirectConsoleCalls\":13,"
        "\"argumentsAbove4GiB\":true,\"compiledIndirectCalls\":2,\"workerPointersMatch\":true,"
        "\"missingCallbackTrapsAndRecovers\":true,\"modifiedBindingRejected\":true,\"negativeModules\":9,"
        "\"canonicalTransformControls\":6,\"nonExportSectionsUnchanged\":true}\n");
    return 0;
}
