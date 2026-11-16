// library/c/lasm_js_framing.h, the framing Lasm.JS's C glues share, run on
// the model differential's inputs (test/models/cli-differential.mjs):
//
//   harness events            reads an op 209 batch on stdin as the glues do
//                             and prints each event, then `fatal <message>`
//                             where the glues would panic;
//   harness request ID…       prints the hex of the request releasing the
//                             handles ID… with the payload on stdin;
//   harness into PROMISE      prints the hex of the payload settling PROMISE
//                             with the input on stdin.
//
// Compiled twice: as is, and with -DLASM_JS_SIZE32, where size_t is 32 bits
// wide as in WebAssembly (wasm32), where the glues run.
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef LASM_JS_SIZE32
#define size_t uint32_t
#endif
#include "../../library/c/lasm_js_framing.h"
#undef size_t

static void hex(const uint8_t *bytes, uint64_t size) {
    for (uint64_t i = 0; i < size; i++) printf("%02x", bytes[i]);
}
static uint8_t *read_all(uint64_t *size) {
    uint64_t capacity = 4096, length = 0;
    uint8_t *bytes = malloc(capacity);
    for (size_t n; (n = fread(bytes + length, 1, capacity - length, stdin)) > 0;) {
        length += n;
        if (length == capacity) bytes = realloc(bytes, capacity *= 2);
    }
    *size = length;
    return bytes;
}
int main(int argc, char **argv) {
    if (argc < 2) return 2;
    uint64_t size;
    uint8_t *input = read_all(&size);
    if (!strcmp(argv[1], "events")) {
#ifdef LASM_JS_SIZE32
        uint32_t offset = 0;
#else
        size_t offset = 0;
#endif
        while (offset < size) {
            lasm_js_event_t event;
            const char *malformed = lasm_js_read_event(input, size, &offset, &event);
            if (malformed) { printf("fatal %s\n", malformed); break; }
            if (event.kind == 1) printf("completion %llu %u ", (unsigned long long)event.word, (unsigned)event.failed);
            else if (event.kind == 2) printf("call %llu %u ", (unsigned long long)event.word, (unsigned)event.fn);
            else printf("release %u ", (unsigned)event.fn);
            hex(event.data, event.size);
            printf("\n");
        }
    } else if (!strcmp(argv[1], "request")) {
        uint32_t count = (uint32_t)(argc - 2);
        uint32_t *ids = malloc((count ? count : 1) * sizeof(uint32_t));
        for (uint32_t i = 0; i < count; i++) ids[i] = (uint32_t)strtoul(argv[2 + i], NULL, 10);
        uint64_t total = lasm_js_request_size(count, size);
        uint8_t *request = malloc(total + 1);
        lasm_js_frame_request(request, ids, count, input, size);
        hex(request, total);
        printf("\n");
    } else if (!strcmp(argv[1], "into") && argc == 3) {
        uint8_t *request = malloc(size + 8);
        lasm_js_frame_into(request, strtoull(argv[2], NULL, 10), input, size);
        hex(request, size + 8);
        printf("\n");
    } else return 2;
    return 0;
}
