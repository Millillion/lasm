#pragma once
#include <lean/lean.h>
#include <cstdint>
#include <cstring>
#include <vector>
#include <string>

#ifdef __EMSCRIPTEN__
#define LASM_HOST_IMPORT(name)
// The full memory64 runtime can transfer more than 2 GiB in one call. Keep
// lengths pointer-sized and leave a separate sign bit for the error envelope.
using LasmHostSize = size_t;
using LasmHostResult = int64_t;
#else
#define LASM_HOST_IMPORT(name) __attribute__((import_module("lasm"), import_name(name)))
// The packaged Wasm32 runtime retains its existing ABI and 1 GiB heap limit.
using LasmHostSize = uint32_t;
using LasmHostResult = int32_t;
#endif

extern "C" LASM_HOST_IMPORT("node_call")
LasmHostResult lasm_node_call(uint32_t operation, uint32_t handle, uint64_t argument,
                            const uint8_t *input, LasmHostSize length);
extern "C" LASM_HOST_IMPORT("node_copy")
void lasm_node_copy(uint8_t *output, LasmHostSize length);
extern "C" LASM_HOST_IMPORT("node_release")
void lasm_node_release(uint32_t handle);

namespace lasm {
using O = lean_object;
inline O *ok(O *v = lean_box(0)) { return lean_io_result_mk_ok(v); }
inline O *some(O *v) { auto *o = lean_alloc_ctor(1, 1, 0); lean_ctor_set(o, 0, v); return o; }
inline O *pair(O *a, O *b) { auto *o = lean_alloc_ctor(0, 2, 0); lean_ctor_set(o, 0, a); lean_ctor_set(o, 1, b); return o; }
struct Reply {
    bool failed;
    std::vector<uint8_t> bytes;
    Reply(uint32_t op, uint32_t handle = 0, uint64_t arg = 0, const void *data = nullptr, LasmHostSize size = 0) {
        LasmHostResult n = lasm_node_call(op, handle, arg, (const uint8_t*)data, size);
        failed = n < 0;
        LasmHostSize length = failed ? LasmHostSize(-(n + 1)) : LasmHostSize(n);
        bytes.resize(length);
        lasm_node_copy(bytes.data(), length);
    }
    uint64_t number(size_t offset = 0) const {
        uint64_t n = 0;
        if (offset + 8 > bytes.size()) __builtin_trap();
        memcpy(&n, bytes.data() + offset, 8); return n;
    }
    O *string(size_t offset = 0) const { return lean_mk_string_from_bytes((const char*)bytes.data() + offset, bytes.size() - offset); }
    O *array() const {
        auto *o = lean_alloc_sarray(1, bytes.size(), bytes.size());
        if (!bytes.empty()) memcpy(lean_sarray_cptr(o), bytes.data(), bytes.size());
        return o;
    }
    O *error(O *path = nullptr) const;
    O *result(O *value = lean_box(0), O *path = nullptr) const {
        if (failed) { lean_dec(value); return lean_io_result_mk_error(error(path)); }
        return ok(value);
    }
};
inline Reply path_call(uint32_t op, O *path, uint64_t arg = 0) {
    return Reply(op, 0, arg, lean_string_cstr(path), lean_string_size(path) - 1);
}
O *wrap_handle(uint32_t id);
inline uint32_t handle_id(O *o) { return (uint32_t)(uintptr_t)lean_get_external_data(o); }
}
