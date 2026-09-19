#include <pthread.h>
#include <cstdio>
#include <stdexcept>
#include <cstdlib>
#include <cstring>
#include <unistd.h>

static const char *file_path;

static void *run(void *) {
    auto file = std::fopen(file_path, "wb+");
    if (!file) std::abort();
    const unsigned char expected[] = {0, 255, 128, 13, 10};
    unsigned char actual[sizeof(expected)];
    if (std::fwrite(expected, 1, sizeof(expected), file) != sizeof(expected)) std::abort();
    std::rewind(file);
    if (std::fread(actual, 1, sizeof(actual), file) != sizeof(actual)) std::abort();
    if (std::memcmp(expected, actual, sizeof(expected)) != 0) std::abort();
    if (std::fclose(file) || unlink(file_path)) std::abort();
    const char *empty = std::getenv("LASM_PROBE_EMPTY");
    if (!empty || *empty) std::abort();
    try {
        throw std::runtime_error("caught exception");
    } catch (const std::exception &error) {
        std::puts(error.what());
    }
    return nullptr;
}

int main(int argc, char **argv) {
    if (argc != 2) return 4;
    file_path = argv[1];
    pthread_t thread;
    if (pthread_create(&thread, nullptr, run, nullptr)) return 2;
    if (pthread_join(thread, nullptr)) return 3;
    std::puts("pthread joined");
}
