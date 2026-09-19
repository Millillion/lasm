// A worker blocked inside a synchronous host call must see growth performed by
// another thread before copying host data into the newly allocated range.
#include <pthread.h>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <emscripten.h>

static uint64_t control[3] = {};
static void *reader(void *) {
    auto success = EM_ASM_INT({
        var pointer = Number($0);
        var initial = HEAPU8.length;
        Atomics.store(HEAP32, pointer / 4, 1);
        Atomics.notify(HEAP32, pointer / 4);
        while (!Atomics.load(HEAP32, pointer / 4 + 2))
            Atomics.wait(HEAP32, pointer / 4 + 2, 0);
        var destination = Number(HEAPU64[pointer / 8 + 2]);
        HEAPU8.set(new Uint8Array([173]), destination);
        return HEAPU8.length > initial && HEAPU8[destination] === 173;
    }, control);
    if (!success) std::abort();
    return nullptr;
}
int main() {
    pthread_t thread;
    if (pthread_create(&thread, nullptr, reader, nullptr)) return 2;
    while (!__atomic_load_n(&control[0], __ATOMIC_ACQUIRE)) {}
    constexpr size_t size = 256 * 1024 * 1024;
    auto *allocation = static_cast<uint8_t *>(std::malloc(size));
    if (!allocation) return 3;
    control[2] = reinterpret_cast<uintptr_t>(allocation + size - 1);
    __atomic_store_n(&control[1], UINT64_C(1), __ATOMIC_RELEASE);
    EM_ASM({ Atomics.notify(HEAP32, Number($0) / 4 + 2); }, control);
    if (pthread_join(thread, nullptr)) return 4;
    if (allocation[size - 1] != 173) return 5;
    std::free(allocation);
    std::puts("blocked worker observes shared memory growth");
}
