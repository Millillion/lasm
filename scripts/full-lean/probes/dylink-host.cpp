#include <atomic>
#include <cstdint>
#include <cstdio>
#include <pthread.h>
#include <unistd.h>
#include <dlfcn.h>
#include <emscripten/emscripten.h>

extern "C" int64_t lasm_node_call(uint32_t, uint32_t, uint64_t, const uint8_t *, size_t);
extern "C" void lasm_node_copy(uint8_t *, size_t);
static std::atomic<bool> waiting{false};
static void *wait_on_host(void *) {
    waiting.store(true);
    if (lasm_node_call(35, 0, 2000, nullptr, 0) != 0) return (void*)1;
    lasm_node_copy(nullptr, 0);
    return nullptr;
}
int main(int argc, char **argv) {
    if (argc != 2) return 2;
    // Finish host initialization before the measured concurrent operation.
    if (lasm_node_call(35, 0, 0, nullptr, 0) != 0) return 3;
    lasm_node_copy(nullptr, 0);
    pthread_t thread;
    if (pthread_create(&thread, nullptr, wait_on_host, nullptr)) return 4;
    while (!waiting.load()) usleep(1000);
    usleep(50 * 1000);
    double start = emscripten_get_now();
    auto library = dlopen(argv[1], RTLD_NOW | RTLD_GLOBAL);
    double elapsed = emscripten_get_now() - start;
    if (!library) { std::puts(dlerror()); return 5; }
    if (elapsed > 1000) {
        std::fprintf(stderr, "dlopen waited %.0f ms for unrelated host IO\n", elapsed);
        return 6;
    }
    auto factory = reinterpret_cast<int (*(*)())()>(dlsym(library, "shared_factory"));
    if (!factory || factory()() != 42) return 7;
    void *result;
    if (pthread_join(thread, &result) || result) return 8;
    if (dlclose(library)) return 9;
    std::puts("dynamic loading progresses while a worker waits on host IO");
}
