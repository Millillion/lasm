#include <vector>

extern "C" int answer(void) {
    std::vector<int> values = {17, 25};
    return values[0] + values[1];
}
