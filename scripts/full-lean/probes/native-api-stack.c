#define _GNU_SOURCE
#define NAPI_VERSION 8
#include <node_api.h>
#include <pthread.h>
#include <stdint.h>
#include <sys/resource.h>

// Private Linux diagnostic. All callback pointers come from registered Koffi
// functions retained by this same JS isolate for the duration of the call.
#define CHECK(expression) do { if ((expression) != napi_ok) { \
    napi_throw_error(env, NULL, "Node-API operation failed"); return NULL; } } while (0)

static int region(uint64_t *values) {
    pthread_attr_t attr;
    void *base = NULL; size_t size = 0;
    if (pthread_getattr_np(pthread_self(), &attr)) return 1;
    int status = pthread_attr_getstack(&attr, &base, &size);
    pthread_attr_destroy(&attr);
    values[0] = (uintptr_t)&attr; values[1] = (uintptr_t)base; values[2] = size;
    return status;
}
uint64_t lasm_probe_stack_frame(void) {
    volatile unsigned marker = 1;
    return (uintptr_t)&marker;
}
uint64_t lasm_probe_callback(uint64_t pointer, uint64_t argument) {
    return ((uint64_t (*)(uint64_t))(uintptr_t)pointer)(argument);
}
static napi_value stack(napi_env env, napi_callback_info info) {
    (void)info;
    uint64_t values[3];
    if (region(values)) { napi_throw_error(env, NULL, "Cannot inspect native stack"); return NULL; }
    napi_value array; CHECK(napi_create_array_with_length(env, 3, &array));
    for (uint32_t i = 0; i < 3; i++) {
        napi_value value; CHECK(napi_create_bigint_uint64(env, values[i], &value));
        CHECK(napi_set_element(env, array, i, value));
    }
    return array;
}
static napi_value invoke(napi_env env, napi_callback_info info) {
    napi_value args[2]; size_t argc = 2; uint64_t pointer, argument; bool lossless;
    CHECK(napi_get_cb_info(env, info, &argc, args, NULL, NULL));
    if (argc != 2) { napi_throw_type_error(env, NULL, "Expected callback pointer and argument"); return NULL; }
    CHECK(napi_get_value_bigint_uint64(env, args[0], &pointer, &lossless));
    if (!lossless || !pointer) { napi_throw_range_error(env, NULL, "Invalid callback pointer"); return NULL; }
    CHECK(napi_get_value_bigint_uint64(env, args[1], &argument, &lossless));
    if (!lossless) { napi_throw_range_error(env, NULL, "Argument exceeds uint64"); return NULL; }
    uint64_t result = lasm_probe_callback(pointer, argument);
    bool pending; CHECK(napi_is_exception_pending(env, &pending));
    if (pending) return NULL;
    napi_value value; CHECK(napi_create_bigint_uint64(env, result, &value));
    return value;
}
__attribute__((noinline)) static uint64_t consume_stack(uint32_t depth) {
    volatile uint8_t page[4096];
    page[0] = (uint8_t)depth; page[4095] = (uint8_t)(depth >> 8);
    uint64_t result = depth ? consume_stack(depth - 1) : 0;
    return result + page[0] + page[4095];
}
static napi_value deep(napi_env env, napi_callback_info info) {
    (void)info;
    uint64_t values[3];
    // The workload touches about 24 MiB. Require 48 MiB of actual descending
    // native stack headroom before entering it; never probe an overflow here.
    if (region(values) || values[0] < values[1] || values[0] - values[1] < 48 * 1024 * 1024) {
        napi_throw_range_error(env, NULL, "Insufficient native stack headroom"); return NULL;
    }
    uint64_t result = consume_stack(6144);
    napi_value value; CHECK(napi_create_bigint_uint64(env, result, &value));
    return value;
}
NAPI_MODULE_INIT() {
    const struct rlimit limit = {0, 0};
    if (setrlimit(RLIMIT_CORE, &limit)) { napi_throw_error(env, NULL, "Cannot suppress diagnostic core files"); return NULL; }
    const napi_property_descriptor methods[] = {
        { .utf8name = "stack", .method = stack, .attributes = napi_default },
        { .utf8name = "invoke", .method = invoke, .attributes = napi_default },
        { .utf8name = "deep", .method = deep, .attributes = napi_default },
    };
    CHECK(napi_define_properties(env, exports, sizeof(methods) / sizeof(methods[0]), methods));
    return exports;
}
