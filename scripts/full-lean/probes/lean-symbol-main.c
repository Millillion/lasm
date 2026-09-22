#include <dlfcn.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int l_shared_data = 37;
int l_registry_add(int n) { return n + 5; }
void *lasm_lookup_lean_symbol(const char *name) {
    return strcmp(name, "l_registry_add") == 0 ? (void *)&l_registry_add : NULL;
}

static void *check(void *path) {
    void *handle = dlopen(path, RTLD_NOW | RTLD_GLOBAL);
    if (!handle) { puts(dlerror()); return (void *)1; }
    int (*direct)(void) = dlsym(handle, "plugin_direct");
    int (*indirect)(void) = dlsym(handle, "plugin_indirect");
    int (*missing)(void) = dlsym(handle, "plugin_missing");
    if (!direct || !indirect || !missing || direct() != 42 || indirect() != 42 || missing() != 1)
        return (void *)2;
    return (void *)(intptr_t)(dlclose(handle) != 0);
}

int main(int argc, char **argv) {
    if (argc != 2) return 3;
    // First load on a worker exercises lazy global resolution and table sharing.
    pthread_t worker;
    void *result;
    if (pthread_create(&worker, NULL, check, argv[1]) || pthread_join(worker, &result) || result) return 4;
    if (check(argv[1])) return 5;
    if (pthread_create(&worker, NULL, check, argv[1]) || pthread_join(worker, &result) || result) return 6;
    puts("Lean registry plugin calls, pointers, data and worker loading passed");
    return 0;
}
