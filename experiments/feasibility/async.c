#include <stdint.h>

__attribute__((import_module("lasm"), import_name("read_number")))
extern int32_t read_number(int32_t input);

/* Two suspension points verify that resumption preserves local state. */
__attribute__((export_name("run")))
int32_t run(int32_t seed) {
    int32_t first = read_number(seed);
    return first + read_number(first + 1);
}

/* Fixed Asyncify storage, sufficient only for this tiny experiment. */
static uint32_t async_stack[4096];
static uint32_t async_data[2];

__attribute__((export_name("asyncify_data")))
uint32_t *get_asyncify_data(void) {
    async_data[0] = (uint32_t)(uintptr_t)async_stack;
    async_data[1] = (uint32_t)(uintptr_t)(async_stack + 4096);
    return async_data;
}
