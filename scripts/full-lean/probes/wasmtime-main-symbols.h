// Main-module symbol resolution for the pinned memory64 libc ABI. A side-module
// loader is separate work: unsupported handles continue to trap explicitly.
// Included after the bridge's memory-range and nested-call helpers.
static main_function_t *main_function_slot(lean_probe_t *probe, void *identity) {
    uintptr_t hash = (uintptr_t)identity;
    hash ^= hash >> 33; hash *= UINT64_C(0xff51afd7ed558ccd); hash ^= hash >> 33;
    size_t index = (size_t)hash & (probe->main_function_capacity - 1);
    while (probe->main_functions[index].identity && probe->main_functions[index].identity != identity)
        index = (index + 1) & (probe->main_function_capacity - 1);
    return &probe->main_functions[index];
}

static int prepare_main_symbols(lean_probe_t *probe, char *error, size_t capacity) {
    wasmtime_context_t *context = probe_context(probe);
    wasmtime_extern_t table;
    const char *name = "__indirect_function_table";
    if (!wasmtime_instance_export_get(context, &probe->instance, name, strlen(name), &table)) {
        snprintf(error, capacity, "missing main-symbol function table"); return 1;
    }
    int status = 0;
    wasm_exporttype_vec_t exports = {0};
    wasmtime_func_t *pending = NULL;
    size_t pending_count = 0;
    if (table.kind != WASMTIME_EXTERN_TABLE) {
        snprintf(error, capacity, "invalid main-symbol function table"); status = 1; goto done;
    }
    const uint64_t size = wasmtime_table_size(context, &table.of.table);
    if (size > SIZE_MAX / 4 || probe->exports > SIZE_MAX / 4) {
        snprintf(error, capacity, "main-symbol index size overflow"); status = 1; goto done;
    }
    size_t entries = (size_t)(size + probe->exports), slots = 2;
    while (slots < entries * 2) {
        if (slots > SIZE_MAX / 2 / sizeof(main_function_t)) {
            snprintf(error, capacity, "main-symbol index allocation overflow"); status = 1; goto done;
        }
        slots *= 2;
    }
    probe->main_functions = calloc(slots, sizeof(main_function_t));
    if (!probe->main_functions) {
        snprintf(error, capacity, "main-symbol index allocation failed"); status = 1; goto done;
    }
    probe->main_function_capacity = slots;
    for (uint64_t index = 0; index < size; index++) {
        wasmtime_val_t value;
        if (!wasmtime_table_get(context, &table.of.table, index, &value)) {
            snprintf(error, capacity, "cannot inspect main-symbol table"); status = 1; goto done;
        }
        if (value.kind != WASMTIME_FUNCREF) {
            wasmtime_val_unroot(&value);
            snprintf(error, capacity, "main-symbol table requires function references"); status = 1; goto done;
        }
        if (!wasmtime_funcref_is_null(&value.of.funcref)) {
            void *identity = wasmtime_func_to_raw(context, &value.of.funcref);
            main_function_t *slot = main_function_slot(probe, identity);
            *slot = (main_function_t){identity, index}; // Match the SDK's last table entry for an alias.
        }
        wasmtime_val_unroot(&value);
    }
    // Reserve exported function pointers in deterministic export order in every
    // Store, before a pthread starts. A dlsym result can then cross guest threads
    // without unsynchronized table growth or JS function wrappers.
    // Enumerate metadata once. Repeated export_nth calls and one-slot table
    // growth made the real 27,312-export application take 21 seconds per Store.
    // Skip data exports and grow once, without changing any assigned pointer.
    wasmtime_module_exports(probe->module, &exports);
    if (exports.size != probe->exports || exports.size > SIZE_MAX / sizeof(*pending)) {
        snprintf(error, capacity, "invalid main export inventory"); status = 1; goto done;
    }
    pending = calloc(exports.size ? exports.size : 1, sizeof(*pending));
    if (!pending) { snprintf(error, capacity, "main function allocation failed"); status = 1; goto done; }
    for (size_t index = 0; index < exports.size; index++) {
        const wasm_exporttype_t *type = exports.data[index];
        const wasm_name_t *export_name = wasm_exporttype_name(type);
        if (wasm_externtype_kind(wasm_exporttype_type(type)) != WASM_EXTERN_FUNC ||
            memchr(export_name->data, 0, export_name->size)) continue;
        wasmtime_extern_t item;
        if (!wasmtime_instance_export_get(context, &probe->instance, export_name->data, export_name->size, &item)) {
            snprintf(error, capacity, "cannot resolve main export"); status = 1; goto done;
        }
        void *identity = wasmtime_func_to_raw(context, &item.of.func);
        main_function_t *slot = main_function_slot(probe, identity);
        if (!slot->identity) {
            *slot = (main_function_t){identity, size + pending_count};
            pending[pending_count++] = item.of.func;
        }
        wasmtime_extern_delete(&item);
    }
    if (pending_count) {
        wasmtime_val_t empty = {.kind = WASMTIME_FUNCREF}; wasmtime_funcref_set_null(&empty.of.funcref);
        uint64_t previous;
        status = failure(wasmtime_table_grow(context, &table.of.table, pending_count, &empty, &previous), NULL, error, capacity);
        if (status) goto done;
        if (previous != size) { snprintf(error, capacity, "main function table changed during initialization"); status = 1; goto done; }
        for (size_t index = 0; index < pending_count; index++) {
            wasmtime_val_t value = {.kind = WASMTIME_FUNCREF, .of.funcref = pending[index]};
            status = failure(wasmtime_table_set(context, &table.of.table, size + index, &value), NULL, error, capacity);
            if (status) goto done;
        }
    }
    probe->main_table_size = wasmtime_table_size(context, &table.of.table);
done:
    free(pending); wasm_exporttype_vec_delete(&exports);
    wasmtime_extern_delete(&table); return status;
}

static wasm_trap_t *main_symbol_error(lean_probe_t *probe, wasmtime_context_t *context,
    const char *name, size_t length) {
    const char *prefix = "Tried to lookup unknown symbol \"", *suffix = "\" in dynamic lib: __main__";
    size_t prefix_size = strlen(prefix), suffix_size = strlen(suffix);
    if (length > SIZE_MAX - prefix_size - suffix_size - 17)
        return wasmtime_trap_new("symbol error allocation overflow", sizeof("symbol error allocation overflow") - 1);
    size_t bytes = 16 + prefix_size + length + suffix_size + 1;
    wasmtime_val_t argument = {.kind = WASMTIME_I64, .of.i64 = (int64_t)bytes}, allocated;
    wasm_trap_t *trap = invoke_from_import(probe, context, "malloc", &argument, 1, &allocated, 1);
    if (trap) return trap;
    bool valid = allocated.kind == WASMTIME_I64;
    uint64_t address = valid ? (uint64_t)allocated.of.i64 : 0;
    wasmtime_val_unroot(&allocated);
    if (!address || !memory_range(probe, address, bytes))
        return wasmtime_trap_new("symbol error allocation failed", sizeof("symbol error allocation failed") - 1);
    uint8_t *memory = wasmtime_sharedmemory_data(probe->memory), *buffer = memory + address;
    memcpy(buffer, "%s\0", 3);
    uint64_t message = address + 16; memcpy(buffer + 8, &message, 8);
    memcpy(buffer + 16, prefix, prefix_size);
    memcpy(buffer + 16 + prefix_size, name, length);
    memcpy(buffer + 16 + prefix_size + length, suffix, suffix_size + 1);
    wasmtime_val_t args[2] = {{.kind = WASMTIME_I64, .of.i64 = (int64_t)address},
        {.kind = WASMTIME_I64, .of.i64 = (int64_t)(address + 8)}};
    trap = invoke_from_import(probe, context, "__dl_seterr", args, 2, NULL, 0);
    wasm_trap_t *freed = invoke_from_import(probe, context, "free", args, 1, NULL, 0);
    if (trap && freed) wasm_trap_delete(freed);
    return trap ? trap : freed;
}

static wasm_trap_t *main_dlsym_import(void *data, wasmtime_caller_t *caller,
    const wasmtime_val_t *args, size_t nargs, wasmtime_val_t *results, size_t nresults) {
    lean_probe_t *probe = data;
    if (nargs != 3 || nresults != 1 || args[0].kind != WASMTIME_I64 ||
        args[1].kind != WASMTIME_I64 || args[2].kind != WASMTIME_I64)
        return wasmtime_trap_new("unexpected memory64 dlsym ABI", sizeof("unexpected memory64 dlsym ABI") - 1);
    if (args[0].of.i64)
        return wasmtime_trap_new("UNIMPLEMENTED side-module dlsym handle", sizeof("UNIMPLEMENTED side-module dlsym handle") - 1);
    const uint64_t address = (uint64_t)args[1].of.i64;
    if (!probe->main_functions || !memory_range(probe, address, 1) ||
        !memory_range(probe, (uint64_t)args[2].of.i64, 4))
        return wasmtime_trap_new("invalid main-symbol lookup memory", sizeof("invalid main-symbol lookup memory") - 1);
    const uint8_t *memory = wasmtime_sharedmemory_data(probe->memory);
    const char *name = (const char *)memory + address;
    const char *end = memchr(name, 0, wasmtime_sharedmemory_data_size(probe->memory) - address);
    if (!end) return wasmtime_trap_new("unterminated main-symbol name", sizeof("unterminated main-symbol name") - 1);
    size_t length = (size_t)(end - name);
    wasmtime_context_t *context = wasmtime_caller_context(caller);
    wasmtime_extern_t item; uint64_t pointer = 0; bool found = false;
    if (wasmtime_instance_export_get(context, &probe->instance, name, length, &item)) {
        if (item.kind == WASMTIME_EXTERN_FUNC) {
            main_function_t *slot = main_function_slot(probe, wasmtime_func_to_raw(context, &item.of.func));
            if (slot->identity) { pointer = slot->pointer; found = true; }
        } else if (item.kind == WASMTIME_EXTERN_GLOBAL) {
            wasmtime_val_t value; wasmtime_global_get(context, &item.of.global, &value);
            if (value.kind == WASMTIME_I64) { pointer = (uint64_t)value.of.i64; found = true; }
            wasmtime_val_unroot(&value);
        }
        wasmtime_extern_delete(&item);
        if (!found) return wasmtime_trap_new("unsupported main-symbol export type", sizeof("unsupported main-symbol export type") - 1);
    } else if ((length >= 2 && name[0] == 'l' && name[1] == '_') ||
        (length >= 3 && name[0] == 'l' && name[1] == 'p' && name[2] == '_')) {
        wasmtime_val_t result;
        wasm_trap_t *trap = invoke_from_import(probe, context, "lasm_lookup_lean_symbol", args + 1, 1, &result, 1);
        if (trap) return trap;
        bool valid = result.kind == WASMTIME_I64;
        if (valid) { pointer = (uint64_t)result.of.i64; found = pointer != 0; }
        wasmtime_val_unroot(&result);
        if (!valid) return wasmtime_trap_new("invalid Lean symbol registry result", sizeof("invalid Lean symbol registry result") - 1);
    }
    if (!found) {
        // Copy the name before nested guest allocations can grow memory.
        char *owned = malloc(length + 1);
        if (!owned) return wasmtime_trap_new("symbol name allocation failed", sizeof("symbol name allocation failed") - 1);
        memcpy(owned, name, length); owned[length] = 0;
        wasm_trap_t *trap = main_symbol_error(probe, context, owned, length);
        free(owned); if (trap) return trap;
    }
    // sym_index is a guest int and stays -1: all main-module function slots
    // were installed in every Store during instantiation, so no catch-up event.
    results[0] = (wasmtime_val_t){.kind = WASMTIME_I64, .of.i64 = (int64_t)pointer};
    return NULL;
}
