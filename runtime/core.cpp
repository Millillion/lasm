#include <cstdio>
#include <cstdlib>
#include <lean/lean.h>
#include "runtime/alloc.h"
#include "runtime/object.h"
#include "runtime/thread.h"

// This port initializes the supported single-threaded object runtime. OS
// processes, libuv, native sockets and native signal handlers are not included.
namespace lean {
void notify_assertion_violation(char const *file, int line, char const *condition) {
    fprintf(stderr, "Lean runtime assertion at %s:%d: %s\n", file, line, condition);
}
extern "C" lean_obj_res lasm_runtime_eprintln(lean_obj_arg text) {
    const size_t length = lean_string_size(text) - 1;
    const bool failed = fwrite(lean_string_cstr(text), 1, length, stderr) != length
        || fputc('\n', stderr) == EOF;
    lean_dec(text);
    if (failed) std::abort();
    return lean_io_result_mk_ok(lean_box(0));
}
}

extern "C" {
// The WASI guest uses host adapters, without native libuv or OpenSSL. These
// match upstream's metadata for builds without those libraries. The full
// Emscripten compiler retains the upstream implementations instead.
lean_obj_res lean_libuv_version(lean_obj_arg) { return lean_box(0); }
lean_obj_res lean_openssl_version(lean_obj_arg) { return lean_box(0); }

__attribute__((export_name("lasm_runtime_initialize")))
void lasm_runtime_initialize() {
    static bool initialized = false;
    if (initialized) return;
    lean::initialize_alloc();
    lean::initialize_object();
    lean::initialize_thread();
    lean_set_exit_on_panic(true);
    initialized = true;
}

__attribute__((export_name("lasm_runtime_finish_initialization")))
void lasm_runtime_finish_initialization() { lean_io_mark_end_initialization(); }

__attribute__((export_name("lasm_alloc")))
void *lasm_alloc(size_t bytes) { return malloc(bytes); }
__attribute__((export_name("lasm_free")))
void lasm_free(void *ptr) { free(ptr); }
__attribute__((export_name("lasm_release")))
void lasm_release(lean_object *value) { lean_dec(value); }
__attribute__((export_name("lasm_string_new")))
lean_object *lasm_string_new(const char *bytes, size_t length) {
    return lean_mk_string_from_bytes(bytes, length);
}
__attribute__((export_name("lasm_string_data")))
const char *lasm_string_data(lean_object *value) { return lean_string_cstr(value); }
__attribute__((export_name("lasm_string_size")))
size_t lasm_string_size(lean_object *value) { return lean_string_size(value) - 1; }
__attribute__((export_name("lasm_nat_new")))
lean_object *lasm_nat_new(const char *decimal) { return lean_cstr_to_nat(decimal); }
__attribute__((export_name("lasm_nat_string")))
lean_object *lasm_nat_string(lean_object *value) {
    std::string decimal = lean_is_scalar(value)
        ? std::to_string(lean_unbox(value)) : lean::mpz_value(value).to_string();
    return lean_mk_string_from_bytes(decimal.data(), decimal.size());
}
__attribute__((export_name("lasm_int_new")))
lean_object *lasm_int_new(const char *decimal) { return lean_cstr_to_int(decimal); }
__attribute__((export_name("lasm_int_string")))
lean_object *lasm_int_string(lean_object *value) {
    std::string decimal = lean_is_scalar(value)
        ? std::to_string(lean_scalar_to_int(value)) : lean::mpz_value(value).to_string();
    return lean_mk_string_from_bytes(decimal.data(), decimal.size());
}
__attribute__((export_name("lasm_bytes_new")))
lean_object *lasm_bytes_new(const uint8_t *bytes, size_t length) {
    lean_object *array = lean_alloc_sarray(1, length, length);
    if (length) memcpy(lean_sarray_cptr(array), bytes, length);
    return array;
}
__attribute__((export_name("lasm_bytes_data")))
const uint8_t *lasm_bytes_data(lean_object *value) { return lean_sarray_cptr(value); }
__attribute__((export_name("lasm_bytes_size")))
size_t lasm_bytes_size(lean_object *value) { return lean_sarray_size(value); }
__attribute__((export_name("lasm_io_is_error")))
uint32_t lasm_io_is_error(lean_object *result) { return lean_io_result_is_error(result); }
__attribute__((export_name("lasm_io_value")))
lean_object *lasm_io_value(lean_object *result) {
    lean_object *value = lean_ctor_get(result, 0);
    lean_inc(value);
    lean_dec(result);
    return value;
}
__attribute__((export_name("lasm_unbox_u32")))
uint32_t lasm_unbox_u32(lean_object *value) {
    uint32_t result = lean_unbox_uint32(value);
    lean_dec(value);
    return result;
}
__attribute__((export_name("lasm_unbox_scalar")))
uint32_t lasm_unbox_scalar(lean_object *value) { return lean_unbox(value); }
}
