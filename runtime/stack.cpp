// WebAssembly stack bounds are supplied by wasm-ld, not by a native OS API.
#include <cstddef>
#include <cstdint>
#include "runtime/stackinfo.h"
#include "runtime/thread.h"

extern "C" unsigned char __stack_low;
extern "C" unsigned char __stack_high;
static uintptr_t fiber_low = 0;
static uintptr_t fiber_high = 0;
extern "C" __attribute__((export_name("lasm_stack_bounds")))
void lasm_stack_bounds(uint32_t low, uint32_t high) { fiber_low = low; fiber_high = high; }

namespace lean {
static uintptr_t stack_pointer() { return reinterpret_cast<uintptr_t>(__builtin_frame_address(0)); }
static uintptr_t low() { return fiber_low ? fiber_low : reinterpret_cast<uintptr_t>(&__stack_low); }
static uintptr_t high() { return fiber_high ? fiber_high : reinterpret_cast<uintptr_t>(&__stack_high); }
size_t get_stack_size(bool) { return high() - low(); }
void save_stack_info(bool) { /* The scheduler sets bounds for the active fiber. */ }
size_t get_used_stack_size() { return high() - stack_pointer(); }
size_t get_available_stack_size() {
    const auto pointer = stack_pointer();
    return pointer > low() ? pointer - low() : 0;
}
void check_stack(char const *) {
    if (get_available_stack_size() < LEAN_STACK_BUFFER_SPACE) __builtin_trap();
}
}
