#include <cstdio>
#include <cstring>
#include <stdexcept>
#include <cstdint>
#include <dlfcn.h>
int main(int argc, char **argv) {
    if (argc != 2) return 2;
    auto library = dlopen(argv[1], RTLD_NOW | RTLD_GLOBAL);
    if (!library) { std::puts(dlerror()); return 3; }
    auto function = reinterpret_cast<int (*)(int)>(dlsym(library, "shared_exception"));
    if (!function || function(7) != 8) return 4;
    bool caught = false;
    try { function(42); }
    catch (const std::runtime_error &error) { caught = std::strcmp(error.what(), "shared exception") == 0; }
    if (!caught) return 5;
    // Later-loaded C++ code can also depend on compiler-rt's wide arithmetic,
    // even when the main executable itself never uses those instructions.
    auto multiply = reinterpret_cast<uint64_t (*)(uint64_t, uint64_t)>(dlsym(library, "shared_wide_product"));
    if (!multiply || multiply(UINT64_MAX, UINT64_MAX) != UINT64_MAX - 1) return 7;
    if (dlclose(library)) return 6;
    std::puts("C++ exceptions cross dynamically loaded module boundaries");
}
