#include <stdint.h>
#include <stdlib.h>

__attribute__((import_module("lasm"), import_name("double")))
extern uint32_t host_double(uint32_t value);

__attribute__((export_name("call_host")))
uint32_t call_host(uint32_t value) {
    return host_double(value) + 1;
}

/* Export allocator operations so malloc cannot be optimized away. */
__attribute__((export_name("allocate")))
void *allocate(uint32_t size) { return malloc(size); }

__attribute__((export_name("release")))
void release(void *ptr) { free(ptr); }
