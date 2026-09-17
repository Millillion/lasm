// WebAssembly stack bounds are supplied by wasm-ld, not by a native OS API.
#include <cstddef>
#include <cstdint>
#include "runtime/stackinfo.h"
#include "runtime/thread.h"

extern "C" unsigned char __stack_low;
extern "C" unsigned char __stack_high;

namespace lean {
static uintptr_t stack_pointer() { return reinterpret_cast<uintptr_t>(__builtin_frame_address(0)); }
size_t get_stack_size(bool) { return &__stack_high - &__stack_low; }
void save_stack_info(bool) { /* Bounds are fixed linker symbols for this single thread. */ }
size_t get_used_stack_size() { return reinterpret_cast<uintptr_t>(&__stack_high) - stack_pointer(); }
size_t get_available_stack_size() {
    const auto pointer = stack_pointer();
    const auto low = reinterpret_cast<uintptr_t>(&__stack_low);
    return pointer > low ? pointer - low : 0;
}
void check_stack(char const *) {
    if (get_available_stack_size() < LEAN_STACK_BUFFER_SPACE) __builtin_trap();
}
}
