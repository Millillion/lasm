#include "node.hpp"
#include "runtime/object.h"
#include <cstdlib>

namespace lasm {
O *Reply::error(O *path) const {
    auto kind = number(0), code = number(8);
    auto *message = string(16);
    if (path) lean_inc(path);
    switch (kind) {
    case 1: return lean_mk_io_error_no_file_or_directory(path ? path : lean_mk_string(""), code, message);
    case 2: return path ? lean_mk_io_error_permission_denied_file(path, code, message) : lean_mk_io_error_permission_denied(code, message);
    case 3: return path ? lean_mk_io_error_already_exists_file(path, code, message) : lean_mk_io_error_already_exists(code, message);
    case 4: return path ? lean_mk_io_error_invalid_argument_file(path, code, message) : lean_mk_io_error_invalid_argument(code, message);
    case 5: return path ? lean_mk_io_error_inappropriate_type_file(path, code, message) : lean_mk_io_error_inappropriate_type(code, message);
    case 6: if (path) lean_dec(path); return lean_mk_io_error_resource_busy(code, message);
    case 7: if (path) lean_dec(path); return lean_mk_io_error_time_expired(code, message);
    case 8: if (path) lean_dec(path); return lean_mk_io_error_unsupported_operation(code, message);
    case 9: if (path) lean_dec(path); return lean_mk_io_error_resource_vanished(code, message);
    default: if (path) lean_dec(path); return lean_mk_io_error_other_error(code, message);
    }
}
static void finalize_handle(void *id) { lasm_node_release((uint32_t)(uintptr_t)id); }
static void foreach_handle(void*, O*) {}
O *wrap_handle(uint32_t id) {
    static lean_external_class *cls = lean_register_external_class(finalize_handle, foreach_handle);
    return lean_alloc_external(cls, (void*)(uintptr_t)id);
}
static O *metadata(O *path, uint32_t op) {
    auto r = path_call(op, path);
    if (r.failed) return r.result(lean_box(0), path);
    auto timestamp = [&](size_t offset) {
        auto *t = lean_alloc_ctor(0, 1, 4);
        lean_ctor_set(t, 0, lean_int64_to_int((int64_t)r.number(offset)));
        lean_ctor_set_uint32(t, sizeof(void*), r.number(offset + 8));
        return t;
    };
    auto *m = lean_alloc_ctor(0, 2, 17);
    lean_ctor_set(m, 0, timestamp(0)); lean_ctor_set(m, 1, timestamp(16));
    lean_ctor_set_uint64(m, 2 * sizeof(void*), r.number(32));
    lean_ctor_set_uint64(m, 2 * sizeof(void*) + 8, r.number(40));
    lean_ctor_set_uint8(m, 2 * sizeof(void*) + 16, r.number(48));
    return ok(m);
}
}
using namespace lasm;
extern "C" {
O *lean_io_prim_handle_mk(O *path, uint8_t mode) {
    auto r = path_call(1, path, mode);
    return r.failed ? r.result(lean_box(0), path) : ok(wrap_handle(r.number()));
}
O *lean_io_prim_handle_read(O *h, size_t n) {
    auto r = Reply(2, handle_id(h), n); return r.failed ? r.result() : ok(r.array());
}
O *lean_io_prim_handle_write(O *h, O *bytes) {
    return Reply(3, handle_id(h), 0, lean_sarray_cptr(bytes), lean_sarray_size(bytes)).result();
}
O *lean_io_prim_handle_put_str(O *h, O *text) {
    return Reply(3, handle_id(h), 0, lean_string_cstr(text), lean_string_size(text)-1).result();
}
O *lean_io_prim_handle_get_line(O *h) {
    auto r = Reply(7, handle_id(h)); return r.failed ? r.result() : ok(r.string());
}
O *lean_io_prim_handle_flush(O *h) { return Reply(4, handle_id(h)).result(); }
O *lean_io_prim_handle_rewind(O *h) { return Reply(5, handle_id(h)).result(); }
O *lean_io_prim_handle_truncate(O *h) { return Reply(6, handle_id(h)).result(); }
uint8_t lean_io_prim_handle_is_tty(O *h) { return Reply(9, handle_id(h)).number() != 0; }
O *lean_io_prim_handle_lock(O *h, uint8_t exclusive) { return Reply(32, handle_id(h), exclusive).result(); }
O *lean_io_prim_handle_try_lock(O *h, uint8_t exclusive) {
    auto r = Reply(33, handle_id(h), exclusive); return r.failed ? r.result() : ok(lean_box(r.number()));
}
O *lean_io_prim_handle_unlock(O *h) { return Reply(34, handle_id(h)).result(); }
O *lean_io_metadata(O *path) { return metadata(path, 10); }
O *lean_io_symlink_metadata(O *path) { return metadata(path, 11); }
O *lean_io_realpath(O *path) { auto r = path_call(12, path); return r.failed ? r.result(lean_box(0), path) : ok(r.string()); }
O *lean_io_read_dir(O *path) {
    auto r = path_call(13, path);
    if (r.failed) return r.result(lean_box(0), path);
    auto *array = lean_mk_empty_array();
    size_t start = 0;
    for (size_t i = 0; i < r.bytes.size(); i++) if (!r.bytes[i]) {
        lean_inc(path);
        array = lean_array_push(array, pair(path, lean_mk_string_from_bytes((char*)r.bytes.data()+start, i-start)));
        start = i+1;
    }
    return ok(array);
}
O *lean_io_create_dir(O *path) { return path_call(14, path).result(lean_box(0), path); }
O *lean_io_remove_file(O *path) { return path_call(15, path).result(lean_box(0), path); }
O *lean_io_remove_dir(O *path) { return path_call(16, path).result(lean_box(0), path); }
static O *two_paths(uint32_t op, O *a, O *b) {
    auto sizeA = lean_string_size(a), sizeB = lean_string_size(b);
    std::vector<uint8_t> bytes(sizeA + sizeB - 1);
    memcpy(bytes.data(), lean_string_cstr(a), sizeA);
    memcpy(bytes.data()+sizeA, lean_string_cstr(b), sizeB-1);
    // The separator offset makes embedded NULs distinguishable from the separator.
    return Reply(op, 0, sizeA - 1, bytes.data(), bytes.size()).result(lean_box(0), a);
}
O *lean_io_rename(O *a, O *b) { return two_paths(17, a, b); }
O *lean_io_hard_link(O *a, O *b) { return two_paths(18, a, b); }
O *lean_chmod(O *path, uint32_t mode) { return path_call(19, path, mode).result(lean_box(0), path); }
O *lean_io_create_tempfile() {
    auto r = Reply(20); return r.failed ? r.result() : ok(pair(wrap_handle(r.number()), r.string(8)));
}
O *lean_io_create_tempdir() { auto r = Reply(21); return r.failed ? r.result() : ok(r.string()); }
O *lean_io_getenv(O *name) {
    auto r = path_call(22, name); return r.bytes.empty() ? lean_box(0) : some(r.string(1));
}
O *lean_io_current_dir() { auto r = Reply(23); return r.failed ? r.result() : ok(r.string()); }
O *lean_io_process_get_current_dir() { return lean_io_current_dir(); }
O *lean_io_process_set_current_dir(O *path) { return path_call(29, path).result(lean_box(0), path); }
O *lean_io_app_path() { auto r = Reply(24); return r.failed ? r.result() : ok(r.string()); }
O *lean_io_mono_ms_now() { return lean_uint64_to_nat(Reply(25).number()); }
O *lean_io_mono_nanos_now() { return lean_uint64_to_nat(Reply(26).number()); }
O *lean_get_current_time() {
    auto r = Reply(27);
    return ok(pair(lean_int64_to_int((int64_t)r.number()), lean_int64_to_int((int64_t)r.number(8))));
}
O *lean_io_get_random_bytes(size_t n) { auto r = Reply(28, 0, n); return r.failed ? r.result() : ok(r.array()); }
O *lean_io_exit(uint8_t code) { Reply(30, 0, code); __builtin_trap(); }
O *lean_io_force_exit(uint8_t code) { return lean_io_exit(code); }
O *lean_io_sleep(uint32_t ms) { Reply(35, 0, ms); return lean_box(0); }
O *lasm_main_args() {
    auto r = Reply(31);
    if (r.failed) return r.result();
    O *list = lean_box(0);
    size_t end = r.bytes.size();
    while (end) {
        size_t start = end - 1;
        while (start && r.bytes[start-1] != 0) start--;
        auto *cell = lean_alloc_ctor(1, 2, 0);
        lean_ctor_set(cell, 0, lean_mk_string_from_bytes((char*)r.bytes.data()+start, end-start-1));
        lean_ctor_set(cell, 1, list); list = cell; end = start;
    }
    return ok(list);
}
O *lean_option_get_or_block(O *option) {
    if (lean_is_scalar(option)) { lean_internal_panic("Promise was dropped without being resolved"); __builtin_trap(); }
    auto *v = lean_ctor_get(option, 0); lean_inc(v); lean_dec(option); return v;
}
O *lean_stream_of_handle(O *h);
static O *streams[3] = {nullptr, nullptr, nullptr};
static O *get_stream(uint32_t id) {
    if (!streams[id]) streams[id] = lean_stream_of_handle(wrap_handle(id));
    lean_inc(streams[id]); return streams[id];
}
static O *set_stream(uint32_t id, O *stream) {
    auto *old = get_stream(id); lean_dec(streams[id]); streams[id] = stream; return old;
}
O *lean_get_stdin() { return get_stream(0); }
O *lean_get_stdout() { return get_stream(1); }
O *lean_get_stderr() { return get_stream(2); }
O *lean_get_set_stdin(O *s) { return set_stream(0, s); }
O *lean_get_set_stdout(O *s) { return set_stream(1, s); }
O *lean_get_set_stderr(O *s) { return set_stream(2, s); }
}
