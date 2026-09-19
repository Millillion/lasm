#include <stdexcept>
#include <cstdint>
extern "C" int shared_exception(int value) {
    if (value == 42) throw std::runtime_error("shared exception");
    return value + 1;
}

extern "C" uint64_t shared_wide_product(uint64_t left, uint64_t right) {
    return (static_cast<unsigned __int128>(left) * right) >> 64;
}
