// Sparse address-space regression: request bytes, response bytes, and the
// bridge's futex signal must all survive host calls above the address boundary.
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <pthread.h>

extern "C" int64_t lasm_node_call(uint32_t, uint32_t, uint64_t, const uint8_t *, size_t);
extern "C" void lasm_node_copy(uint8_t *, size_t);
extern "C" uint32_t lasm_node_start(uint32_t, uint32_t, uint64_t, const uint8_t *, size_t);

static void *run(void *argument) {
    auto *bytes = static_cast<uint8_t *>(argument);
    std::strcpy(reinterpret_cast<char *>(bytes), "LASM_PROBE_HIGH_VALUE");
    auto length = lasm_node_call(22, 0, 0, bytes, std::strlen(reinterpret_cast<char *>(bytes)));
    if (length != 16) std::abort();
    lasm_node_copy(bytes + 64, length);
    if (std::memcmp(bytes + 64, "\1host above heap", length)) std::abort();
    // An asynchronous completion must wake the same high-address signal.
    auto id = lasm_node_start(35, 0, 25, nullptr, 0);
    if (lasm_node_call(90, id, 0, nullptr, 0) != 0) std::abort();
    lasm_node_copy(nullptr, 0);
    return nullptr;
}

int main() {
    constexpr auto boundary = LASM_HIGH_MEMORY_BASE;
    auto *reservation = static_cast<uint8_t *>(std::malloc(boundary + UINT64_C(0x1000000)));
    if (!reservation) return 2;
    auto *high = reservation + boundary;
    run(high);
    pthread_t threads[4];
    for (unsigned i = 0; i < 4; i++)
        if (pthread_create(&threads[i], nullptr, run, high + (i + 1) * 256)) return 3;
    for (auto &thread : threads) if (pthread_join(thread, nullptr)) return 4;
    std::free(reservation);
    std::puts("high-memory synchronous and asynchronous host calls passed");
}
