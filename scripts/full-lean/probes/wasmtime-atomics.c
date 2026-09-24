// Bridge prerequisite only. No shipping application uses this probe.
#include "wasmtime-memory-view.c"

static int atomic_address(probe_t *probe, uint64_t offset, uint32_t width, void **address) {
    if (width != 1 && width != 2 && width != 4 && width != 8) return 2;
    size_t size = wasmtime_sharedmemory_data_size(probe->memory);
    if (offset % width || offset > size || width > size - offset) return 2;
    *address = wasmtime_sharedmemory_data(probe->memory) + offset;
    return 0;
}

// Sequentially consistent integer operations on the SAME native backing as
// Wasm atomics. External ArrayBuffers are not SharedArrayBuffers; calling JS
// Atomics on those views is not a substitute for this native boundary.
// Operations: load, store, add, sub, and, or, xor, exchange, compareExchange.
// Bitwise RMW uses an explicit CAS loop: the system GCC 13.3 -O2 compiled the
// combined fetch-and/or/xor dispatch incorrectly in the preserved native-only
// control. The same control passed at -O0; all semantics remain tested at -O2.
int lasm_probe_atomic(probe_t *probe, uint64_t offset, uint32_t width, uint32_t operation,
                      uint64_t value, uint64_t comparison, uint64_t *result) {
    void *address;
    if (operation > 8 || atomic_address(probe, offset, width, &address)) return 2;
#define ACCESS(TYPE) do { \
    _Atomic(TYPE) *cell = address; \
    if (!atomic_is_lock_free(cell)) return 3; \
    TYPE before = 0; \
    switch (operation) { \
        case 0: before = atomic_load_explicit(cell, memory_order_seq_cst); break; \
        case 1: atomic_store_explicit(cell, (TYPE)value, memory_order_seq_cst); before = (TYPE)value; break; \
        case 2: before = atomic_fetch_add_explicit(cell, (TYPE)value, memory_order_seq_cst); break; \
        case 3: before = atomic_fetch_sub_explicit(cell, (TYPE)value, memory_order_seq_cst); break; \
        case 4: case 5: case 6: { \
            before = atomic_load_explicit(cell, memory_order_seq_cst); \
            TYPE desired; \
            do { desired = operation == 4 ? before & (TYPE)value \
                    : operation == 5 ? before | (TYPE)value : before ^ (TYPE)value; \
            } while (!atomic_compare_exchange_weak_explicit(cell, &before, desired, memory_order_seq_cst, memory_order_seq_cst)); \
            break; \
        } \
        case 7: before = atomic_exchange_explicit(cell, (TYPE)value, memory_order_seq_cst); break; \
        case 8: before = (TYPE)comparison; \
            atomic_compare_exchange_strong_explicit(cell, &before, (TYPE)value, memory_order_seq_cst, memory_order_seq_cst); break; \
    } \
    *result = before; return 0; \
} while (0)
    switch (width) { case 1: ACCESS(uint8_t); case 2: ACCESS(uint16_t);
        case 4: ACCESS(uint32_t); case 8: ACCESS(uint64_t); }
#undef ACCESS
    return 2;
}

probe_t *lasm_probe_atomics_new(char *error, size_t capacity) {
    probe_t *probe = lasm_probe_new(error, capacity);
    if (!probe) return NULL;
#define READ(BITS, SUFFIX) \
    " (func (export \"read" #BITS "\") (param i64 i64 i64) (result i64)" \
    " local.get 0 i64.atomic.load" SUFFIX ")"
    const char *wat =
        "(module (import \"env\" \"memory\" (memory i64 1 131072 shared))"
        READ(8, "8_u") READ(16, "16_u") READ(32, "32_u") READ(64, "")
        " (func (export \"add32\") (param $p i64) (param $n i64) (param i64) (result i64)"
        " (local $i i64) (block $done local.get $n i64.eqz br_if $done"
        " (loop $loop local.get $p i64.const 1 i64.atomic.rmw32.add_u drop"
        " local.get $i i64.const 1 i64.add local.tee $i local.get $n i64.lt_u br_if $loop))"
        " local.get $p i64.atomic.load32_u)"
        " (func (export \"add64\") (param $p i64) (param $n i64) (param i64) (result i64)"
        " (local $i i64) (block $done local.get $n i64.eqz br_if $done"
        " (loop $loop local.get $p i64.const 1 i64.atomic.rmw.add drop"
        " local.get $i i64.const 1 i64.add local.tee $i local.get $n i64.lt_u br_if $loop))"
        " local.get $p i64.atomic.load)"
        " (func (export \"wait32\") (param i64 i64 i64) (result i64)"
        " local.get 0 local.get 1 i32.wrap_i64 local.get 2 memory.atomic.wait32 i64.extend_i32_u)"
        " (func (export \"wait64\") (param i64 i64 i64) (result i64)"
        " local.get 0 local.get 1 local.get 2 memory.atomic.wait64 i64.extend_i32_u)"
        " (func (export \"notify\") (param i64 i64 i64) (result i64)"
        " local.get 0 local.get 1 i32.wrap_i64 memory.atomic.notify i64.extend_i32_u))";
#undef READ
    wasm_byte_vec_t bytes;
    if (error_text(wasmtime_wat2wasm(wat, strlen(wat), &bytes), NULL, error, capacity)) goto fail;
    wasmtime_module_t *module = NULL;
    wasmtime_error_t *compiled = wasmtime_module_new(probe->engine, (uint8_t *)bytes.data, bytes.size, &module);
    wasm_byte_vec_delete(&bytes);
    if (error_text(compiled, NULL, error, capacity)) goto fail;
    wasmtime_module_delete(probe->module); probe->module = module;
    return probe;
fail:
    lasm_probe_delete(probe); return NULL;
}

static int atomic_wasm(probe_t *probe, const char *name, uint64_t offset, uint64_t value,
                       int64_t timeout, uint64_t *result, char *error, size_t capacity, bool bounded) {
    uint32_t width = strstr(name, "64") ? 8 : strstr(name, "16") ? 2 : strstr(name, "read8") ? 1 : 4;
    void *address;
    if (atomic_address(probe, offset, width, &address)) return 2;
    if (strncmp(name, "add", 3) == 0 && value > 200000) return 2;
    if (bounded && strncmp(name, "wait", 4) == 0 && (timeout < 0 || timeout > INT64_C(5000000000))) return 2;
    wasmtime_store_t *store = wasmtime_store_new(probe->engine, NULL, NULL);
    if (!store) { snprintf(error, capacity, "store allocation failed"); return 1; }
    wasmtime_context_t *context = wasmtime_store_context(store);
    wasmtime_sharedmemory_t *memory = wasmtime_sharedmemory_clone(probe->memory);
    wasmtime_extern_t imported = { .kind = WASMTIME_EXTERN_SHAREDMEMORY, .of.sharedmemory = memory };
    wasmtime_instance_t instance;
    wasm_trap_t *trap = NULL;
    wasmtime_error_t *instance_error = wasmtime_instance_new(context, probe->module, &imported, 1, &instance, &trap);
    int status = error_text(instance_error, trap, error, capacity);
    if (!status) {
        wasmtime_extern_t item;
        if (!wasmtime_instance_export_get(context, &instance, name, strlen(name), &item)) {
            snprintf(error, capacity, "unknown atomic operation"); status = 2;
        } else {
            if (item.kind != WASMTIME_EXTERN_FUNC) {
                snprintf(error, capacity, "atomic export is not a function");
                wasmtime_extern_delete(&item); status = 2; goto cleanup;
            }
            wasmtime_val_t inputs[3] = {
                { .kind = WASMTIME_I64, .of.i64 = (int64_t)offset },
                { .kind = WASMTIME_I64, .of.i64 = (int64_t)value },
                { .kind = WASMTIME_I64, .of.i64 = timeout },
            }, returned;
            trap = NULL;
            wasmtime_error_t *called = wasmtime_func_call(context, &item.of.func, inputs, 3, &returned, 1, &trap);
            status = error_text(called, trap, error, capacity);
            if (!status) {
                if (returned.kind != WASMTIME_I64) {
                    snprintf(error, capacity, "atomic result is not i64"); status = 2;
                } else *result = (uint64_t)returned.of.i64;
                wasmtime_val_unroot(&returned);
            }
            wasmtime_extern_delete(&item);
        }
    }
cleanup:
    wasmtime_sharedmemory_delete(memory); wasmtime_store_delete(store);
    return status;
}

// Preserve the original bounded probe contract and its invalid-input controls.
int lasm_probe_atomic_wasm(probe_t *probe, const char *name, uint64_t offset, uint64_t value,
                           int64_t timeout, uint64_t *result, char *error, size_t capacity) {
    return atomic_wasm(probe, name, offset, value, timeout, result, error, capacity, true);
}

// Blocking adapter boundary. -1 is Wasm's infinite timeout; all exercised equal
// waits remain bounded by a finite deadline. Invalid-address checks still apply.
int lasm_probe_atomic_wait(probe_t *probe, uint64_t offset, uint32_t width, uint64_t value,
                           int64_t timeout, uint64_t *result, char *error, size_t capacity) {
    if ((width != 4 && width != 8) || timeout < -1) return 2;
    return atomic_wasm(probe, width == 8 ? "wait64" : "wait32", offset, value,
                       timeout, result, error, capacity, false);
}
