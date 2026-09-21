// The C++ driver must preserve its ordinary treatment of a .c input.
#ifndef __cplusplus
#error The selected C++ driver must use C++ semantics
#endif
#include <cstdio>
#include <vector>

extern "C" int answer(void);

int main() {
    std::vector<int> expected = {40, 2};
    int value = answer();
    std::printf("%d\n", value);
    return value != expected[0] + expected[1];
}
