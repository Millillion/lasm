#include <cstdio>

__attribute__((noinline)) static unsigned recurse(unsigned value) {
    volatile unsigned next = value + 1;
    return recurse(next) + next;
}

int main() { std::printf("%u\n", recurse(0)); }
