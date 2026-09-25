#define NAPI_VERSION 8
#include <node_api.h>
#include <dlfcn.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// Private, typed entry points into the already byte-verified diagnostic helper.
// Node-API calls run on the OS stack; no FFI trampoline surrounds Wasmtime.
typedef struct {
    void *library;
    int (*check)(void *, char *, size_t);
    int (*call)(void *, const char *, const uint64_t *, size_t, uint32_t, uint64_t *, char *, size_t);
    int (*pointer)(void *, uint64_t, uint64_t, uint64_t *, char *, size_t);
    int (*wait)(void *, uint64_t, uint32_t, double, char *, size_t);
    int (*stack)(void *, char *, size_t);
} driver_t;
#define CHECK(expression) do { if ((expression) != napi_ok) { \
    napi_throw_error(env, NULL, "Node-API operation failed"); return NULL; } } while (0)

static bool integer(napi_env env, napi_value value, uint64_t *result) {
    bool lossless = false;
    if (napi_get_value_bigint_uint64(env, value, result, &lossless) != napi_ok || !lossless) {
        napi_throw_type_error(env, NULL, "Expected an unsigned 64-bit BigInt"); return false;
    }
    return true;
}
static napi_value entry(napi_env env, napi_callback_info info, unsigned operation) {
    napi_value args[4]; size_t argc = 4; void *data;
    CHECK(napi_get_cb_info(env, info, &argc, args, NULL, &data));
    if (argc != (operation == 2 ? 3 : operation == 4 ? 1 : 4)) {
        napi_throw_type_error(env, NULL, "Unexpected native entry arguments"); return NULL;
    }
    driver_t *driver = data;
    uint64_t address;
    if (!integer(env, args[0], &address)) return NULL;
    if (!address) { napi_throw_range_error(env, NULL, "Missing owned probe"); return NULL; }
    void *probe = (void *)(uintptr_t)address;
    char error[8192] = {0};
    if (driver->check(probe, error, sizeof(error))) { napi_throw_error(env, NULL, error); return NULL; }
    uint64_t result = 0;
    int status;
    if (operation == 1) {
        char name[512]; size_t length;
        CHECK(napi_get_value_string_utf8(env, args[1], NULL, 0, &length));
        if (!length || length >= sizeof(name)) { napi_throw_range_error(env, NULL, "Invalid export name"); return NULL; }
        CHECK(napi_get_value_string_utf8(env, args[1], name, sizeof(name), &length));
        if (strlen(name) != length) { napi_throw_range_error(env, NULL, "NUL in export name"); return NULL; }
        bool array; CHECK(napi_is_array(env, args[2], &array));
        if (!array) { napi_throw_type_error(env, NULL, "Expected argument array"); return NULL; }
        uint32_t count, returns; CHECK(napi_get_array_length(env, args[2], &count));
        CHECK(napi_get_value_uint32(env, args[3], &returns));
        if (count > 8 || returns > 1) { napi_throw_range_error(env, NULL, "Native signature bound"); return NULL; }
        uint64_t values[8];
        for (uint32_t i = 0; i < count; i++) {
            napi_value value; CHECK(napi_get_element(env, args[2], i, &value));
            if (!integer(env, value, &values[i])) return NULL;
        }
        status = driver->call(probe, name, values, count, returns, &result, error, sizeof(error));
    } else if (operation == 2) {
        uint64_t function, argument;
        if (!integer(env, args[1], &function) || !integer(env, args[2], &argument)) return NULL;
        status = driver->pointer(probe, function, argument, &result, error, sizeof(error));
    } else if (operation == 3) {
        uint64_t offset; uint32_t expected; double timeout;
        if (!integer(env, args[1], &offset)) return NULL;
        CHECK(napi_get_value_uint32(env, args[2], &expected));
        CHECK(napi_get_value_double(env, args[3], &timeout));
        status = driver->wait(probe, offset, expected, timeout, error, sizeof(error));
    } else status = driver->stack(probe, error, sizeof(error));
    bool pending; CHECK(napi_is_exception_pending(env, &pending));
    if (pending) return NULL;
    if (status) { napi_throw_error(env, NULL, error); return NULL; }
    napi_value value; CHECK(napi_create_bigint_uint64(env, result, &value));
    return value;
}
static napi_value call(napi_env env, napi_callback_info info) { return entry(env, info, 1); }
static napi_value pointer(napi_env env, napi_callback_info info) { return entry(env, info, 2); }
static napi_value wait_signal(napi_env env, napi_callback_info info) { return entry(env, info, 3); }
static napi_value stack_control(napi_env env, napi_callback_info info) { return entry(env, info, 4); }
static void cleanup(void *data) {
    driver_t *driver = data;
    dlclose(driver->library); free(driver);
}
static napi_value open_driver(napi_env env, napi_callback_info info) {
    napi_value args[1]; size_t argc = 1, length;
    CHECK(napi_get_cb_info(env, info, &argc, args, NULL, NULL));
    if (argc != 1) { napi_throw_type_error(env, NULL, "Expected verified helper path"); return NULL; }
    CHECK(napi_get_value_string_utf8(env, args[0], NULL, 0, &length));
    char path[4096];
    if (!length || length >= sizeof(path)) { napi_throw_range_error(env, NULL, "Invalid helper path"); return NULL; }
    CHECK(napi_get_value_string_utf8(env, args[0], path, sizeof(path), &length));
    if (strlen(path) != length) { napi_throw_range_error(env, NULL, "NUL in helper path"); return NULL; }
    driver_t *driver = calloc(1, sizeof(*driver));
    if (!driver) { napi_throw_error(env, NULL, "Driver allocation failed"); return NULL; }
    driver->library = dlopen(path, RTLD_NOW | RTLD_LOCAL);
    if (!driver->library) { free(driver); napi_throw_error(env, NULL, "Cannot open verified helper"); return NULL; }
    driver->check = dlsym(driver->library, "lasm_lean_native_entry_check");
    driver->call = dlsym(driver->library, "lasm_lean_instance_call");
    driver->pointer = dlsym(driver->library, "lasm_lean_instance_call_pointer");
    driver->wait = dlsym(driver->library, "lasm_lean_signal_wait");
    driver->stack = dlsym(driver->library, "lasm_lean_stack_control");
    if (!driver->check || !driver->call || !driver->pointer || !driver->wait || !driver->stack) {
        cleanup(driver); napi_throw_error(env, NULL, "Helper entry points missing"); return NULL;
    }
    // Keep the library alive for this entire isolate, including retained method
    // references. No process-global JS state or callback references are shared.
    if (napi_add_env_cleanup_hook(env, cleanup, driver) != napi_ok) {
        cleanup(driver); napi_throw_error(env, NULL, "Cannot retain native driver"); return NULL;
    }
    napi_value object; CHECK(napi_create_object(env, &object));
    const napi_property_descriptor methods[] = {
        { .utf8name = "call", .method = call, .data = driver, .attributes = napi_default },
        { .utf8name = "pointer", .method = pointer, .data = driver, .attributes = napi_default },
        { .utf8name = "wait", .method = wait_signal, .data = driver, .attributes = napi_default },
        { .utf8name = "stackControl", .method = stack_control, .data = driver, .attributes = napi_default },
    };
    CHECK(napi_define_properties(env, object, sizeof(methods) / sizeof(methods[0]), methods));
    return object;
}
NAPI_MODULE_INIT() {
    napi_property_descriptor property = { .utf8name = "open", .method = open_driver, .attributes = napi_default };
    CHECK(napi_define_properties(env, exports, 1, &property));
    return exports;
}
