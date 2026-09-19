// Regression for MEMORY64=2 JavaScript heap indexing above 2 GiB. Allocating
// address space does not require touching two GiB of physical memory.
#include <pthread.h>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <emscripten.h>

static void *run(void *argument) {
    auto *value = static_cast<uint64_t *>(argument);
    if (reinterpret_cast<uintptr_t>(value) < UINT64_C(0x80000000)) std::abort();
    *value = UINT64_C(0x123456789abcdef0);
    const auto matched = EM_ASM_INT({
        return HEAPU64[Number($0) / 8] === 0x123456789abcdef0n;
    }, value);
    if (!matched) std::abort();
    auto *now = reinterpret_cast<timespec *>(value + 2);
    if (clock_gettime(CLOCK_REALTIME, now) || now->tv_sec < 1'700'000'000) std::abort();
    auto *message = reinterpret_cast<char *>(value + 8);
    std::strcpy(message, "pthread and host access above 2 GiB passed");
    std::puts(message);
    return nullptr;
}

int main() {
    auto *reservation = static_cast<char *>(std::malloc(UINT64_C(0x81000000)));
    if (!reservation) return 2;
    // Keep the reservation alive while libc allocates the next thread's stack
    // and pthread metadata above the signed 32-bit boundary.
    pthread_t thread;
    pthread_attr_t attributes;
    if (pthread_attr_init(&attributes) || pthread_attr_setstack(&attributes,
        reservation + UINT64_C(0x80000000), 8 * 1024 * 1024)) return 3;
    if (pthread_create(&thread, &attributes, run, reservation + UINT64_C(0x80800000))) return 3;
    if (pthread_join(thread, nullptr)) return 4;
    pthread_attr_destroy(&attributes);
    std::free(reservation);
}
