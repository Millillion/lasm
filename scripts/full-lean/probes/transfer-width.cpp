#include "node.hpp"
#include "node-start-declaration.inc"
#include <cstdio>
#include <cinttypes>

extern "C" void lasm_probe_begin(uint64_t length, uint32_t failed);
extern "C" int64_t lasm_probe_input_length();

int main() {
    unsigned failures = 0;
    const uint64_t lengths[] = {0, 1, UINT64_C(0x7fffffff), UINT64_C(0x80000000),
                               UINT64_C(0xffffffff), UINT64_C(0x100000007)};
    for (auto length : lengths) {
        for (unsigned failed : {0u, 1u}) {
            lasm_probe_begin(length, failed);
            int64_t actual = lasm_node_call(2, 0, 0, nullptr, 0);
            int64_t expected = failed ? -int64_t(length) - 1 : int64_t(length);
            bool passed = actual == expected;
            failures += !passed;
            std::printf("{\"case\":\"response\",\"length\":%" PRIu64 ",\"error\":%u,\"expected\":%" PRId64 ",\"actual\":%" PRId64 ",\"passed\":%s}\n",
                        length, failed, expected, actual, passed ? "true" : "false");
        }
        lasm_probe_begin(0, 0);
        lasm_node_call(3, 0, 0, nullptr, static_cast<size_t>(length));
        int64_t actual = lasm_probe_input_length();
        bool passed = actual == int64_t(length);
        failures += !passed;
        std::printf("{\"case\":\"sync-input\",\"length\":%" PRIu64 ",\"actual\":%" PRId64 ",\"passed\":%s}\n",
                    length, actual, passed ? "true" : "false");
        lasm_probe_begin(0, 0);
        lasm_node_start(3, 0, 0, nullptr, static_cast<size_t>(length));
        actual = lasm_probe_input_length();
        passed = actual == int64_t(length);
        failures += !passed;
        std::printf("{\"case\":\"async-input\",\"length\":%" PRIu64 ",\"actual\":%" PRId64 ",\"passed\":%s}\n",
                    length, actual, passed ? "true" : "false");
    }
    return failures ? 1 : 0;
}
