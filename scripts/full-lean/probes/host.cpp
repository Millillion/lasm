#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <pthread.h>

extern "C" int64_t lasm_node_call(uint32_t, uint32_t, uint64_t, const uint8_t *, size_t);
extern "C" void lasm_node_copy(uint8_t *, size_t);
extern "C" uint32_t lasm_node_start(uint32_t, uint32_t, uint64_t, const uint8_t *, size_t);

static void *run(void *) {
    // Sleep resolves asynchronously on the host while this pthread blocks.
    auto id = lasm_node_start(35, 0, 20, nullptr, 0);
    if (lasm_node_call(90, id, 0, nullptr, 0) != 0) std::abort();
    lasm_node_copy(nullptr, 0);
    const char *name = "LASM_PROBE_EMPTY";
    auto size = lasm_node_call(22, 0, 0, (const uint8_t *)name, std::strlen(name));
    if (size != 1) std::abort();
    uint8_t byte;
    lasm_node_copy(&byte, 1);
    return nullptr;
}

int main() {
    pthread_t threads[4];
    for (auto &thread : threads) if (pthread_create(&thread, nullptr, run, nullptr)) return 2;
    for (auto &thread : threads) if (pthread_join(thread, nullptr)) return 3;
    std::puts("asynchronous host bridge joined four threads");
}
