/*
 * Lasm.JS's framing between its C glue and the JavaScript host, shared by
 * library/c/lasm_js.c (Node) and src/edge/lasm_js_edge.c (edge):
 *
 *   - every host call's request: [u32 count][count × u32 released handle][payload]
 *     (lasm_js_frame_request); the payload of ops 205 and 214 with flag 16 is
 *     [u64 Lean promise][input] (lasm_js_frame_into);
 *   - the batch of interop events op 209 replies with: events back to back
 *     (lasm_js_read_event), each a kind byte and its fields:
 *       1 completion  [u64 promise][u8 failed][u32 size][size bytes]
 *       2 call        [u64 call][u32 fn][u32 size][size bytes]
 *       3 release     [u32 fn]
 *
 * Integers are little-endian (memcpy: WebAssembly is little-endian). The host
 * halves are src/node-js.mjs and src/edge/edge-js.mjs (encodeEvents,
 * splitRequest, intoPrefix). The Lean model is
 * verification/cli/Lasm/Cli/Model/JsFraming.lean; test/models/cli-differential.mjs
 * checks it against this header (test/models/js-framing-harness.c) and both hosts.
 *
 * The including file provides <stdint.h>, <stddef.h> and memcpy.
 */
#ifndef LASM_JS_FRAMING_H
#define LASM_JS_FRAMING_H

/* One interop event; `data` points into the batch. */
typedef struct {
    uint8_t kind;          /* 1 completion, 2 call, 3 release */
    uint8_t failed;        /* a completion's status byte: nonzero is a failure */
    uint64_t word;         /* a completion's promise, a call's id; 0 otherwise */
    uint32_t fn;           /* a call's or a release's Lean function; 0 otherwise */
    const uint8_t *data;
    uint32_t size;
} lasm_js_event_t;

static inline uint64_t lasm_js_read_u64(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return v; }
static inline uint32_t lasm_js_read_u32(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v; }

/* Reads the event at *offset (< size) of a batch into *event and moves *offset
   past it; NULL, or the message the glue panics with when the batch is malformed.
   Bounds are checked against what remains (size - at), never as at + n, which
   wraps where size_t is 32 bits wide (wasm32) for a size near 2^32. */
static inline const char *lasm_js_read_event(const uint8_t *batch, size_t size, size_t *offset, lasm_js_event_t *event) {
    size_t at = *offset;
    uint8_t kind = batch[at++];
    event->kind = kind; event->failed = 0; event->word = 0; event->fn = 0; event->size = 0;
    if (kind == 1) {
        if (size - at < 13) return "Lasm.JS: malformed completion";
        event->word = lasm_js_read_u64(batch + at);
        event->failed = batch[at + 8];
        event->size = lasm_js_read_u32(batch + at + 9);
        at += 13;
        if (event->size > size - at) return "Lasm.JS: malformed completion";
    } else if (kind == 2) {
        if (size - at < 16) return "Lasm.JS: malformed callback";
        event->word = lasm_js_read_u64(batch + at);
        event->fn = lasm_js_read_u32(batch + at + 8);
        event->size = lasm_js_read_u32(batch + at + 12);
        at += 16;
        if (event->size > size - at) return "Lasm.JS: malformed callback";
    } else if (kind == 3) {
        if (size - at < 4) return "Lasm.JS: malformed release";
        event->fn = lasm_js_read_u32(batch + at);
        at += 4;
    } else return "Lasm.JS: unknown interop event";
    event->data = batch + at;
    *offset = at + event->size;
    return NULL;
}

/* The size of a request releasing `count` handles, with a payload of `length` bytes. */
static inline size_t lasm_js_request_size(uint32_t count, size_t length) { return 4 + (size_t)count * 4 + length; }
/* Writes the request (lasm_js_request_size bytes) to `request`. */
static inline void lasm_js_frame_request(uint8_t *request, const uint32_t *released, uint32_t count, const uint8_t *input, size_t length) {
    size_t prefix = 4 + (size_t)count * 4;
    memcpy(request, &count, 4);
    if (count) memcpy(request + 4, released, (size_t)count * 4);
    if (length) memcpy(request + prefix, input, length);
}
/* Writes the payload of a call that settles `promise` (8 + length bytes) to `request`. */
static inline void lasm_js_frame_into(uint8_t *request, uint64_t promise, const uint8_t *input, size_t length) {
    memcpy(request, &promise, 8);
    if (length) memcpy(request + 8, input, length);
}

#endif
