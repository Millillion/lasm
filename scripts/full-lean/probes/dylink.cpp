#include <cstdio>
#include <dlfcn.h>
extern "C" int (*shared_factory())();
int main(int argc, char **argv) {
    if (argc != 2 || shared_factory()() != 42) return 2;
    auto handle = dlopen(argv[1], RTLD_NOW | RTLD_GLOBAL);
    if (!handle) { std::puts(dlerror()); return 3; }
    auto factory = reinterpret_cast<int (*(*)())()>(dlsym(handle, "shared_factory"));
    if (!factory || factory()() != 42) return 4;
    if (dlclose(handle)) return 5;
    std::puts("shared module data and function pointers passed");
}
