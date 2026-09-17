#include <lean/lean.h>
#include <cstdint>

// request suspends, then returns the response length. Errors are -(length + 1).
// copy_response runs only after the guest has resumed and allocated its result;
// the JS host never reenters a suspended guest to allocate memory.
extern "C" __attribute__((import_module("lasm"), import_name("request")))
int32_t lasm_host_request(uint32_t operation, const char *key, uint32_t key_length,
                         const uint8_t *body, uint32_t body_length);
extern "C" __attribute__((import_module("lasm"), import_name("copy_response")))
void lasm_host_copy_response(uint8_t *destination, uint32_t length);

extern "C" lean_obj_res lasm_io_request(uint32_t operation, lean_obj_arg key, lean_obj_arg body) {
    const int32_t response = lasm_host_request(operation, lean_string_cstr(key), lean_string_size(key) - 1,
                                              lean_sarray_cptr(body), lean_sarray_size(body));
    lean_dec(key);
    lean_dec(body);
    const bool error = response < 0;
    const uint32_t length = error ? static_cast<uint32_t>(-(response + 1)) : static_cast<uint32_t>(response);
    if (length > 16 * 1024 * 1024) __builtin_trap();
    lean_object *bytes = lean_alloc_sarray(1, length, length);
    lasm_host_copy_response(lean_sarray_cptr(bytes), length);
    if (!error) return lean_io_result_mk_ok(bytes);
    lean_object *message = lean_mk_string_from_bytes(reinterpret_cast<char *>(lean_sarray_cptr(bytes)), length);
    lean_dec(bytes);
    return lean_io_result_mk_error(lean_mk_io_user_error(message));
}
