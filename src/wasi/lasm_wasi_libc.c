/*
 * Emscripten libc's WASI calls (src/wasi/lasm_wasi.c): libc is compiled for
 * wasm64, so its __wasi_* functions take 64-bit pointers and structures. These
 * definitions replace its imports and call the standard 32-bit
 * wasi_snapshot_preview1 functions. This file includes no libc header, whose
 * declarations of the same functions carry the import attributes.
 */
#include "lasm_wasi.h"

/* ---- libc's WASI calls (wasm64 layout) translated to preview 1 (32-bit). ---- */
typedef struct { const uint8_t *buf; size_t len; } iovec64;
static uint16_t vectored(bool reading, uint32_t fd, const iovec64 *iovs, size_t count, size_t *done) {
    wiovec small[16];
    size_t total = 0;
    while (count) {
        size_t n = count < 16 ? count : 16;
        for (size_t i = 0; i < n; i++) { small[i].buf = P(iovs[i].buf); small[i].len = (uint32_t)iovs[i].len; }
        uint32_t moved = 0;
        uint32_t error = reading ? w_fd_read(fd, P(small), (uint32_t)n, P(&moved)) : w_fd_write(fd, P(small), (uint32_t)n, P(&moved));
        if (error) { *done = total; return (uint16_t)error; }
        total += moved;
        size_t wanted = 0;
        for (size_t i = 0; i < n; i++) wanted += iovs[i].len;
        if (moved < wanted) break;
        iovs += n; count -= n;
    }
    *done = total;
    return 0;
}
uint16_t __wasi_fd_write(uint32_t fd, const iovec64 *iovs, size_t count, size_t *written) { return vectored(false, fd, iovs, count, written); }
uint16_t __wasi_fd_read(uint32_t fd, const iovec64 *iovs, size_t count, size_t *read) { return vectored(true, fd, iovs, count, read); }
uint16_t __wasi_fd_close(uint32_t fd) { return (uint16_t)w_fd_close(fd); }
uint16_t __wasi_fd_seek(uint32_t fd, int64_t offset, uint32_t whence, uint64_t *result) {
    uint64_t r = 0; uint16_t e = (uint16_t)w_fd_seek(fd, offset, whence & 255, P(&r)); *result = r; return e;
}
uint16_t __wasi_clock_time_get(uint32_t id, uint64_t precision, uint64_t *time) {
    uint64_t t = 0; uint16_t e = (uint16_t)w_clock_time_get(id, precision, P(&t)); *time = t; return e;
}
uint16_t __wasi_random_get(uint8_t *buf, size_t length) {
    while (length) {
        uint32_t n = length > 65536 ? 65536 : (uint32_t)length;
        uint16_t e = (uint16_t)w_random_get(P(buf), n);
        if (e) return e;
        buf += n; length -= n;
    }
    return 0;
}

/* libc reads the environment in a static constructor, before malloc may be
   used: pass through, widening the 32-bit pointers in place. The host writes
   uint32_t offsets into the char * array, so both views alias: every access goes
   through memcpy (char-typed), and the widening runs from the last entry down so
   that no offset is overwritten before it is read. Typed loads and stores here
   let clang -O2 reorder them (strict aliasing): from the fourth variable on,
   libc's getenv lost entries (LEAN_BACKTRACE, LEAN_ABORT_ON_PANIC, TZ...).
   Found by differential testing (docs/TESTING.md). */
uint16_t __wasi_environ_sizes_get(size_t *count, size_t *size) {
    uint32_t n = 0, bytes = 0;
    uint16_t e = (uint16_t)w_environ_sizes_get(P(&n), P(&bytes));
    *count = n; *size = bytes; return e;
}
uint16_t __wasi_environ_get(char **environ, char *buf) {
    size_t count = 0, size = 0;
    (void)__wasi_environ_sizes_get(&count, &size);
    uint32_t *small = (uint32_t *)environ;
    uint16_t e = (uint16_t)w_environ_get(P(small), P(buf));
    if (e) return e;
    (void)small;
    for (size_t i = count; i-- > 0;) {
        uint32_t offset;
        __builtin_memcpy(&offset, (char *)environ + 4 * i, 4);
        char *pointer = (char *)(uintptr_t)offset;
        __builtin_memcpy((char *)environ + sizeof(char *) * i, &pointer, sizeof pointer);
    }
    return 0;
}
