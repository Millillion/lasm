#include "node.hpp"
#include "runtime/object.h"
#include <cstdlib>

using namespace lasm;
namespace {
struct Reader {
    const Reply &reply; size_t offset = 0;
    uint64_t number() { auto n = reply.number(offset); offset += 8; return n; }
    O *string() {
        auto n = number();
        if (n > reply.bytes.size() - offset) __builtin_trap();
        auto *value = lean_mk_string_from_bytes((const char*)reply.bytes.data() + offset, n);
        offset += n; return value;
    }
    O *optional_string() { return number() ? some(string()) : lean_box(0); }
};
O *number_call(unsigned op, uint64_t argument = 0) {
    Reply r(op, 0, argument); return r.failed ? r.result() : ok(lean_box_uint64(r.number()));
}
O *string_call(unsigned op) { Reply r(op); return r.failed ? r.result() : ok(r.string()); }
O *nul_error(O *s) {
    if (strlen(lean_string_cstr(s)) == lean_string_size(s) - 1) return nullptr;
    lean_inc(s);
    return lean_io_result_mk_error(lean_mk_io_error_invalid_argument_file(s, 22, lean_mk_string("string contains NUL bytes")));
}
}
extern "C" {
// The private host implements the API version of the pinned libuv dependency.
O *lean_libuv_version(O*) { return lean_unsigned_to_nat(0x013000); }
O *lean_uv_get_process_title() { return string_call(120); }
O *lean_uv_set_process_title(O *value) { if (auto *error = nul_error(value)) return error; return path_call(121, value).result(); }
O *lean_uv_uptime() { return number_call(122); }
O *lean_uv_os_getpid() { return number_call(123); }
O *lean_uv_os_getppid() { return number_call(124); }
O *lean_uv_cpu_info() {
    Reply r(125); if (r.failed) return r.result(); Reader input{r};
    auto count = input.number(); auto *array = lean_mk_empty_array();
    for (uint64_t i = 0; i < count; i++) {
        auto *model = input.string(); auto speed = input.number();
        auto *times = lean_alloc_ctor(0, 0, 40);
        for (size_t j = 0; j < 5; j++) lean_ctor_set_uint64(times, j * 8, input.number());
        auto *cpu = lean_alloc_ctor(0, 2, 8);
        lean_ctor_set(cpu, 0, model); lean_ctor_set(cpu, 1, times);
        lean_ctor_set_uint64(cpu, 2 * sizeof(void*), speed);
        array = lean_array_push(array, cpu);
    }
    return ok(array);
}
O *lean_uv_cwd() { return string_call(23); }
O *lean_uv_chdir(O *path) {
    if (auto *error = nul_error(path)) return error;
    return path_call(29, path).result(lean_box(0), path);
}
O *lean_uv_os_homedir() { return string_call(126); }
O *lean_uv_os_tmpdir() { return string_call(127); }
O *lean_uv_os_get_passwd() {
    Reply r(128); if (r.failed) return r.result(); Reader input{r};
    auto *record = lean_alloc_ctor(0, 5, 0);
    lean_ctor_set(record, 0, input.string());
    auto uid = input.number(), gid = input.number();
    lean_ctor_set(record, 1, uid == UINT64_MAX ? lean_box(0) : some(lean_box_uint64(uid)));
    // Preserve native Lean's uid sentinel check for both fields.
    lean_ctor_set(record, 2, uid == UINT64_MAX ? lean_box(0) : some(lean_box_uint64(gid)));
    lean_ctor_set(record, 3, input.optional_string());
    lean_ctor_set(record, 4, input.optional_string());
    return ok(record);
}
O *lean_uv_os_get_group(uint64_t gid) {
    Reply r(129, 0, gid);
    if (r.failed) {
        auto *path = lean_mk_string("group"); auto *error = r.result(lean_box(0), path); lean_dec(path); return error;
    }
    Reader input{r}; if (!input.number()) return ok(lean_box(0));
    auto *name = input.string(); auto group_id = input.number(), count = input.number();
    auto *members = lean_mk_empty_array();
    for (uint64_t i = 0; i < count; i++) members = lean_array_push(members, input.string());
    auto *group = lean_alloc_ctor(0, 2, 8);
    lean_ctor_set(group, 0, name); lean_ctor_set(group, 1, members);
    lean_ctor_set_uint64(group, 2 * sizeof(void*), group_id); return ok(some(group));
}
O *lean_uv_os_environ() {
    Reply r(130); if (r.failed) return r.result(); Reader input{r};
    auto count = input.number(); auto *array = lean_mk_empty_array();
    for (uint64_t i = 0; i < count; i++) {
        auto *key = input.string(); auto *value = input.string();
        array = lean_array_push(array, pair(key, value));
    }
    return ok(array);
}
O *lean_uv_os_getenv(O *name) {
    if (strlen(lean_string_cstr(name)) != lean_string_size(name) - 1) return ok(lean_box(0));
    Reply r = path_call(22, name); if (r.failed) return r.result();
    return ok(r.bytes.empty() ? lean_box(0) : some(r.string(1)));
}
O *lean_uv_os_setenv(O *name, O *value) {
    if (auto *error = nul_error(name)) return error;
    if (auto *error = nul_error(value)) return error;
    std::string data(lean_string_cstr(name), lean_string_size(name));
    data.append(lean_string_cstr(value), lean_string_size(value) - 1);
    auto response = Reply(132, 0, 0, data.data(), data.size());
#ifdef __EMSCRIPTEN__
    if (!response.failed) setenv(lean_string_cstr(name), lean_string_cstr(value), 1);
#endif
    return response.result();
}
O *lean_uv_os_unsetenv(O *name) {
    if (auto *error = nul_error(name)) return error;
    auto response = path_call(133, name);
#ifdef __EMSCRIPTEN__
    if (!response.failed) unsetenv(lean_string_cstr(name));
#endif
    return response.result();
}
O *lean_uv_os_gethostname() { return string_call(134); }
O *lean_uv_os_getpriority(uint64_t pid) { return number_call(135, pid); }
O *lean_uv_os_setpriority(uint64_t pid, int64_t priority) { return Reply(136, 0, pid, &priority, 8).result(); }
O *lean_uv_os_uname() {
    Reply r(137); if (r.failed) return r.result(); Reader input{r};
    auto *record = lean_alloc_ctor(0, 4, 0);
    for (size_t i = 0; i < 4; i++) lean_ctor_set(record, i, input.string());
    return ok(record);
}
O *lean_uv_hrtime() { return number_call(26); }
O *lean_uv_getrusage() {
    Reply r(138); if (r.failed) return r.result();
    auto *record = lean_alloc_ctor(0, 0, 16 * 8);
    for (size_t i = 0; i < 16; i++) lean_ctor_set_uint64(record, i * 8, r.number(i * 8));
    return ok(record);
}
O *lean_uv_exepath() { return string_call(24); }
O *lean_uv_get_free_memory() { return number_call(139); }
O *lean_uv_get_total_memory() { return number_call(140); }
O *lean_uv_get_constrained_memory() { return number_call(141); }
O *lean_uv_get_available_memory() { return number_call(142); }
}
