/*
 * Lasm's WASI host (docs/WASI.md): Lean's runtime primitives on WebAssembly
 * System Interface preview 1, with no JavaScript. Linked into the edge
 * runtime's single-threaded, cooperative Lean (runtime/edge.cpp) by
 * src/wasi/wasi-link.mjs for `lasm build --target wasi` and `--target fastly`.
 *
 * The program is compiled as wasm64 and its memory lowered to 32 bits
 * (Binaryen --memory64-lowering), so every address fits in 32 bits. This file
 * provides, in C:
 *   - the imports that Emscripten's libc expects from JavaScript
 *     (emscripten_get_now, _tzset_js, emscripten_resize_heap, exit, ...);
 *   - libc's WASI calls (__wasi_fd_write, ...), translated from wasm64
 *     structures to the standard 32-bit wasi_snapshot_preview1 ABI, which are
 *     the module's only imports (plus Fastly's on --target fastly);
 *   - the host operations of runtime/node.hpp (lasm_node_call): files through
 *     the preopened directories, clocks, randomness, environment, arguments,
 *     timers, sleeps and Std.Async completions;
 *   - the cooperative runtime's event loop (lasm_edge_wait): poll_oneoff on the
 *     earliest timer;
 *   - _start, the WASI command entry point.
 * C++ exceptions are compiled out of the module (wasm-opt --strip-eh); a throw
 * prints its message and exits with status 134, as an uncaught exception
 * aborts a native Lean program.
 */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <lean/lean.h>

#include "lasm_wasi.h"

/* WASI errno values (wasi_snapshot_preview1). */
enum { W_SUCCESS = 0, W_EACCES = 2, W_EAGAIN = 6, W_EBADF = 8, W_EBUSY = 10, W_EEXIST = 20, W_EINTR = 27, W_EINVAL = 28,
    W_EIO = 29, W_EISDIR = 31, W_ELOOP = 32, W_EMFILE = 33, W_ENAMETOOLONG = 37, W_ENOENT = 44, W_ENOMEM = 48,
    W_ENOSPC = 51, W_ENOSYS = 52, W_ENOTDIR = 54, W_ENOTEMPTY = 55, W_ENOTSUP = 58, W_EPERM = 63, W_EPIPE = 64,
    W_EROFS = 69, W_ESPIPE = 70, W_EXDEV = 75, W_ENOTCAPABLE = 76 };

static void write_all(uint32_t fd, const void *data, size_t size) {
    const uint8_t *p = data;
    while (size) {
        wiovec v = { P(p), (uint32_t)size };
        uint32_t written = 0;
        if (w_fd_write(fd, P(&v), 1, P(&written)) || !written) return;
        p += written; size -= written;
    }
}
static void write_text(uint32_t fd, const char *text) { write_all(fd, text, strlen(text)); }

_Noreturn void exit(int code) {
    fflush(NULL);
    w_proc_exit((uint32_t)code & 255);
}
_Noreturn void lasm_wasi_fail(const char *message) {
    fflush(NULL);
    write_text(2, message);
    write_text(2, "\n");
    w_proc_exit(134);
}

/* ---- Emscripten's JavaScript imports, implemented on WASI. ---- */
static double clock_ms(uint32_t id) {
    uint64_t t = 0;
    if (w_clock_time_get(id, 1000, P(&t))) return 0;
    return (double)t / 1e6;
}
double emscripten_get_now(void) { return clock_ms(1); }
double emscripten_date_now(void) { return clock_ms(0); }
void emscripten_err(const char *text) { write_text(2, text); write_text(2, "\n"); }
_Noreturn void _abort_js(void) { lasm_wasi_fail("Aborted()"); }
#ifndef LASM_WASI_MAXIMUM_MEMORY
#define LASM_WASI_MAXIMUM_MEMORY 2048
#endif
#define MAXIMUM_MEMORY ((size_t)LASM_WASI_MAXIMUM_MEMORY << 20)
size_t emscripten_get_heap_max(void) { return MAXIMUM_MEMORY; }
bool emscripten_resize_heap(size_t requested) {
    size_t old = __builtin_wasm_memory_size(0) * 65536;
    if (requested <= old) return true;
    if (requested > MAXIMUM_MEMORY) return false;
    size_t pages = (requested - old + 65535) / 65536;
    return __builtin_wasm_memory_grow(0, pages) != (size_t)-1;
}
/* Lean's time zone comes from /etc/localtime (Std.Time); libc's is UTC. */
void _tzset_js(long *timezone, int *daylight, char *std_name, char *dst_name) {
    *timezone = 0; *daylight = 0;
    strcpy(std_name, "UTC"); strcpy(dst_name, "UTC");
}

/* The process environment and arguments, read once. */
static char **env_entries; static size_t env_count;
static char **arg_entries; static size_t arg_count;
static void read_vector(bool environment, char ***out, size_t *count) {
    uint32_t n = 0, size = 0;
    if (environment ? w_environ_sizes_get(P(&n), P(&size)) : w_args_sizes_get(P(&n), P(&size))) { n = 0; size = 0; }
    uint32_t *small = malloc(sizeof(uint32_t) * (n + 1));
    char *buf = malloc(size + 1);
    char **vector = malloc(sizeof(char *) * (n + 1));
    if (!small || !buf || !vector) lasm_wasi_fail("Lasm WASI: out of memory reading the environment");
    if (n && (environment ? w_environ_get(P(small), P(buf)) : w_args_get(P(small), P(buf)))) n = 0;
    for (uint32_t i = 0; i < n; i++) vector[i] = (char *)(uintptr_t)small[i];
    vector[n] = NULL;
    free(small);
    *out = vector; *count = n;
}
/* For src/wasi/lasm_fetch_wasi.c. */
bool lasm_wasi_stdout_to_stderr;
static const char *env_lookup(const char *name, size_t length);
const char *lasm_wasi_getenv(const char *name) { return env_lookup(name, strlen(name)); }
size_t lasm_wasi_environment(const char *const **entries) { *entries = (const char *const *)env_entries; return env_count; }
static const char *env_lookup(const char *name, size_t length) {
    for (size_t i = 0; i < env_count; i++)
        if (!strncmp(env_entries[i], name, length) && env_entries[i][length] == '=') return env_entries[i] + length + 1;
    return NULL;
}

/* ---- Small helpers: growable byte buffers and the host response. ---- */
typedef struct { uint8_t *data; size_t size, capacity; } buffer;
static void put(buffer *b, const void *data, size_t size) {
    if (b->size + size > b->capacity) {
        size_t capacity = b->capacity ? b->capacity : 256;
        while (capacity < b->size + size) capacity *= 2;
        uint8_t *grown = realloc(b->data, capacity);
        if (!grown) lasm_wasi_fail("Lasm WASI: out of memory");
        b->data = grown; b->capacity = capacity;
    }
    if (size) memcpy(b->data + b->size, data, size);
    b->size += size;
}
static void put_u64(buffer *b, uint64_t v) { put(b, &v, 8); }
static void put_text(buffer *b, const char *s) { put(b, s, strlen(s)); }

static buffer response;
static bool response_failed;
static int64_t reply_result(void) { return response_failed ? -(int64_t)response.size - 1 : (int64_t)response.size; }
static int64_t reply_empty(void) { response.size = 0; response_failed = false; return 0; }
static int64_t reply_bytes(const void *data, size_t size) { response.size = 0; response_failed = false; put(&response, data, size); return reply_result(); }
static int64_t reply_numbers(size_t count, const uint64_t *values) { return reply_bytes(values, count * 8); }
static int64_t reply_number(uint64_t v) { return reply_numbers(1, &v); }
static int64_t reply_text(const char *s) { return reply_bytes(s, strlen(s)); }
/* Lean IO error: kind (runtime/node-io.cpp Reply::error), errno, message. */
static int64_t reply_error(uint64_t kind, uint64_t code, const char *message) {
    response.size = 0; response_failed = true;
    put_u64(&response, kind); put_u64(&response, code); put_text(&response, message);
    return reply_result();
}
static int64_t unsupported(const char *what) {
    char message[256];
    snprintf(message, sizeof(message), "%s is not available to WebAssembly System Interface programs (Lasm WASI)", what);
    return reply_error(8, 38, message);
}

/* WASI errno -> Lean's error kind, the Linux errno and libuv's message. */
static int64_t reply_wasi_error(uint32_t error) {
    struct { uint32_t wasi; uint64_t kind, code; const char *message; } table[] = {
        { W_ENOENT, 1, 2, "no such file or directory" }, { W_EACCES, 2, 13, "permission denied" },
        { W_EPERM, 2, 1, "operation not permitted" }, { W_EROFS, 2, 30, "read-only file system" },
        { W_ENOTCAPABLE, 2, 13, "permission denied (outside the directories the WASI host preopened)" },
        { W_EEXIST, 3, 17, "file already exists" }, { W_EINVAL, 4, 22, "invalid argument" }, { W_EBADF, 4, 9, "bad file descriptor" },
        { W_ELOOP, 4, 40, "too many symbolic links encountered" }, { W_ENAMETOOLONG, 4, 36, "name too long" },
        { W_EISDIR, 5, 21, "illegal operation on a directory" }, { W_ENOTDIR, 5, 20, "not a directory" },
        { W_EBUSY, 6, 16, "resource busy or locked" }, { W_ENOSYS, 8, 38, "function not implemented" },
        { W_ENOTSUP, 8, 95, "operation not supported on socket" }, { W_ESPIPE, 8, 29, "invalid seek" },
        { W_EXDEV, 8, 18, "cross-device link not permitted" }, { W_EPIPE, 9, 32, "broken pipe" },
        { W_EMFILE, 11, 24, "too many open files" }, { W_ENOSPC, 11, 28, "no space left on device" },
        { W_EAGAIN, 11, 11, "resource temporarily unavailable" }, { W_ENOMEM, 11, 12, "not enough memory" },
        { W_EIO, 13, 5, "i/o error" }, { W_ENOTEMPTY, 14, 39, "directory not empty" }, { W_EINTR, 17, 4, "interrupted system call" },
    };
    for (size_t i = 0; i < sizeof(table) / sizeof(table[0]); i++)
        if (table[i].wasi == error) return reply_error(table[i].kind, table[i].code, table[i].message);
    char message[64];
    snprintf(message, sizeof(message), "WASI error %u", (unsigned)error);
    return reply_error(0, error, message);
}

/* ---- Resources: files, directories and timers, by handle id. ---- */
enum { R_FILE = 1, R_TIMER = 2, R_SLEEP = 3 };
typedef struct {
    int type;
    /* files */
    uint32_t fd; bool owned; buffer pending; size_t pending_at; bool eof;
    /* timers (the semantics of src/edge/edge-host.mjs) */
    uint64_t timeout; bool repeating; int phase; /* 0 initial, 1 running, 2 finished */
    uint64_t generation; bool has_promise, done, armed; uint64_t due;
} resource;
static resource **resources; static size_t resource_capacity;
static uint32_t add_resource(resource *r) {
    for (uint32_t id = 10; ; id++) {
        if (id >= resource_capacity) {
            size_t capacity = resource_capacity ? resource_capacity * 2 : 64;
            resource **grown = realloc(resources, capacity * sizeof(*grown));
            if (!grown) lasm_wasi_fail("Lasm WASI: out of memory");
            memset(grown + resource_capacity, 0, (capacity - resource_capacity) * sizeof(*grown));
            resources = grown; resource_capacity = capacity;
        }
        if (!resources[id]) { resources[id] = r; return id; }
    }
}
static resource *get_resource(uint32_t id, int type) {
    resource *r = id < resource_capacity ? resources[id] : NULL;
    return r && r->type == type ? r : NULL;
}
static resource standard[3];
static resource *get_file(uint32_t id) { return id < 3 ? &standard[id] : get_resource(id, R_FILE); }

/* ---- Paths: a virtual working directory over the preopened directories. ---- */
typedef struct { uint32_t fd; bool absolute; char *name; /* normalized, without leading '/' or "./" */ } preopen;
static preopen *preopens; static size_t preopen_count;
static char *cwd; /* normalized: "/" + components, or "." + "/" + components */

static void read_preopens(void) {
    for (uint32_t fd = 3; fd < 1024; fd++) {
        struct { uint8_t tag; uint8_t pad[3]; uint32_t length; } prestat;
        if (w_fd_prestat_get(fd, P(&prestat))) break;
        if (prestat.tag != 0) continue;
        char *name = calloc(prestat.length + 1, 1);
        if (!name || w_fd_prestat_dir_name(fd, P(name), prestat.length)) { free(name); continue; }
        while (prestat.length && name[prestat.length - 1] == 0) prestat.length--;
        name[prestat.length] = 0;
        preopen p = { fd, name[0] == '/', NULL };
        /* Normalize: drop leading '/' and "./", trailing '/', and a lone ".". */
        char *s = name;
        while (*s == '/') s++;
        while (s[0] == '.' && (s[1] == '/' || s[1] == 0)) { s += s[1] ? 2 : 1; while (*s == '/') s++; }
        size_t n = strlen(s);
        while (n && s[n - 1] == '/') s[--n] = 0;
        p.name = strdup(s);
        free(name);
        preopen *grown = realloc(preopens, (preopen_count + 1) * sizeof(*grown));
        if (!grown) lasm_wasi_fail("Lasm WASI: out of memory");
        preopens = grown; preopens[preopen_count++] = p;
    }
    /* The working directory starts at the relative root when "." is preopened
       (wasmtime --dir ., node:wasi { '.': ... }), else at "/". */
    bool relative = false, root = false;
    for (size_t i = 0; i < preopen_count; i++) {
        if (!preopens[i].absolute) relative = true;
        else if (!preopens[i].name[0]) root = true;
    }
    cwd = strdup(relative || !root ? "." : "/");
}

/* Joins `path` to the working directory and normalizes it ("." and ".."). */
static char *normalize(const char *path, size_t length) {
    bool absolute = length && path[0] == '/';
    size_t base = absolute ? 0 : strlen(cwd);
    char *joined = malloc(base + length + 2), *out = malloc(base + length + 3);
    if (!joined || !out) lasm_wasi_fail("Lasm WASI: out of memory");
    size_t at = 0;
    if (!absolute) { memcpy(joined, cwd, base); joined[base] = '/'; at = base + 1; }
    memcpy(joined + at, path, length); joined[at + length] = 0;
    bool rooted = joined[0] == '/';
    size_t o = 0;
    out[o++] = rooted ? '/' : '.';
    char *save = NULL;
    for (char *part = strtok_r(joined, "/", &save); part; part = strtok_r(NULL, "/", &save)) {
        if (!strcmp(part, ".")) continue;
        if (!strcmp(part, "..")) {
            while (o > 1 && out[o - 1] != '/') o--;
            if (o > 1) o--;
            continue;
        }
        if (o > 1 || !rooted) out[o++] = '/';
        size_t n = strlen(part); memcpy(out + o, part, n); o += n;
    }
    out[o] = 0;
    free(joined);
    return out;
}
/* The preopened directory containing a normalized path, and the path inside it. */
static bool locate(const char *normal, uint32_t *dirfd, const char **inside) {
    bool absolute = normal[0] == '/';
    const char *rest = normal + 1;
    if (*rest == '/') rest++;
    size_t best = (size_t)-1;
    for (size_t i = 0; i < preopen_count; i++) {
        if (preopens[i].absolute != absolute) continue;
        size_t n = strlen(preopens[i].name);
        if (n && (strncmp(rest, preopens[i].name, n) || (rest[n] && rest[n] != '/'))) continue;
        if (best == (size_t)-1 || n > strlen(preopens[best].name)) best = i;
    }
    if (best == (size_t)-1) return false;
    size_t n = strlen(preopens[best].name);
    const char *tail = rest + n;
    while (*tail == '/') tail++;
    *dirfd = preopens[best].fd;
    *inside = *tail ? tail : ".";
    return true;
}
typedef struct { char *normal; uint32_t fd; const char *inside; bool found; } place;
static place resolve(const uint8_t *path, size_t length) {
    place p = { normalize((const char *)path, length), 0, NULL, false };
    p.found = locate(p.normal, &p.fd, &p.inside);
    return p;
}
static int64_t reply_unreachable(const place *p) {
    (void)p;
    return reply_error(1, 2, "no such file or directory (not inside a directory the WASI host preopened; for example, run wasmtime with --dir .)");
}
static uint64_t inherited_rights(uint32_t fd) {
    struct { uint8_t filetype; uint8_t pad; uint16_t flags; uint32_t pad2; uint64_t base, inheriting; } stat;
    return w_fd_fdstat_get(fd, P(&stat)) ? ~(uint64_t)0 : stat.inheriting;
}

/* The bundled UTC zone (public domain tz data), so that Std.Time's local zone
   (/etc/localtime) resolves when the host grants no access to it. */
static const uint8_t utc_zone[] = {
    'T','Z','i','f','2',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,4,0,0,0,0,0,0,'U','T','C',0,
    'T','Z','i','f','2',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,4,0,0,0,0,0,0,'U','T','C',0,
    '\n','U','T','C','0','\n' };
static bool is_zone_path(const char *normal) {
    return !strcmp(normal, "/etc/localtime") || !strcmp(normal, "/usr/share/zoneinfo/UTC") || !strcmp(normal, "/usr/share/zoneinfo/Etc/UTC");
}

/* ---- Files. ---- */
static int64_t open_file(const uint8_t *path, size_t length, uint64_t mode) {
    place p = resolve(path, length);
    int64_t result;
    resource *r = calloc(1, sizeof(resource));
    if (!r) lasm_wasi_fail("Lasm WASI: out of memory");
    r->type = R_FILE; r->owned = true;
    if (!p.found && mode == 0 && is_zone_path(p.normal)) {
        r->fd = (uint32_t)-1; put(&r->pending, utc_zone, sizeof(utc_zone)); r->eof = true;
        result = reply_number(add_resource(r));
        free(p.normal); return result;
    }
    if (!p.found) { free(r); result = reply_unreachable(&p); free(p.normal); return result; }
    /* IO.FS.Mode: read, write, writeNew, readWrite, append. */
    static const uint16_t oflags[] = { 0, 1 | 8, 1 | 4, 0, 1 };
    uint16_t fdflags = mode == 4 ? 1 : 0;
    uint32_t fd = 0;
    uint32_t error = mode > 4 ? W_EINVAL : w_path_open(p.fd, 1, P(p.inside), (uint32_t)strlen(p.inside), oflags[mode],
        inherited_rights(p.fd), inherited_rights(p.fd), fdflags, P(&fd));
    if (!error) {
        uint8_t stat[64];
        if (!w_fd_filestat_get(fd, P(stat)) && stat[16] == 3) { w_fd_close(fd); error = W_EISDIR; }
    }
    if (error == W_ENOENT && mode == 0 && is_zone_path(p.normal)) {
        r->fd = (uint32_t)-1; put(&r->pending, utc_zone, sizeof(utc_zone)); r->eof = true;
        free(p.normal); return reply_number(add_resource(r));
    }
    if (error) { free(r); free(p.normal); return reply_wasi_error(error); }
    r->fd = fd;
    free(p.normal);
    return reply_number(add_resource(r));
}
/* Reads into the file's pending buffer; false at end of file or on error. */
static uint32_t fill(resource *f) {
    if (f->eof) return 0;
    if (f->pending_at == f->pending.size) { f->pending.size = 0; f->pending_at = 0; }
    uint8_t chunk[4096];
    wiovec v = { P(chunk), sizeof(chunk) };
    uint32_t n = 0, error = w_fd_read(f->fd, P(&v), 1, P(&n));
    if (error) return error;
    if (!n) f->eof = true; else put(&f->pending, chunk, n);
    return 0;
}
static int64_t read_file(resource *f, uint64_t count) {
    response.size = 0; response_failed = false;
    size_t buffered = f->pending.size - f->pending_at;
    if (buffered) {
        size_t n = buffered < count ? buffered : (size_t)count;
        put(&response, f->pending.data + f->pending_at, n); f->pending_at += n;
        return reply_result();
    }
    if (f->eof || !count) return reply_result();
    size_t want = count > (1u << 30) ? (1u << 30) : (size_t)count;
    uint8_t *data = malloc(want);
    if (!data) return reply_error(11, 12, "not enough memory");
    wiovec v = { P(data), (uint32_t)want };
    uint32_t n = 0, error = w_fd_read(f->fd, P(&v), 1, P(&n));
    if (error) { free(data); return reply_wasi_error(error); }
    put(&response, data, n); free(data);
    return reply_result();
}
static int64_t get_line(resource *f) {
    for (;;) {
        uint8_t *start = f->pending.data + f->pending_at;
        size_t buffered = f->pending.size - f->pending_at;
        uint8_t *newline = buffered ? memchr(start, '\n', buffered) : NULL;
        if (newline || f->eof) {
            size_t n = newline ? (size_t)(newline - start) + 1 : buffered;
            int64_t result = reply_bytes(start, n);
            f->pending_at += n;
            return result;
        }
        uint32_t error = fill(f);
        if (error) return reply_wasi_error(error);
    }
}
static int64_t write_file(resource *f, const uint8_t *data, size_t size) {
    if (f->fd == (uint32_t)-1) return reply_error(2, 9, "bad file descriptor");
    /* While Lasm.Fetch answers a CGI request, standard output carries the
       response: Lean's own output goes to standard error. */
    uint32_t fd = f == &standard[1] && lasm_wasi_stdout_to_stderr ? 2 : f->fd;
    while (size) {
        wiovec v = { P(data), (uint32_t)(size > (1u << 30) ? (1u << 30) : size) };
        uint32_t written = 0, error = w_fd_write(fd, P(&v), 1, P(&written));
        if (error) return reply_wasi_error(error);
        if (!written) return reply_wasi_error(W_EIO);
        data += written; size -= written;
    }
    return reply_empty();
}
static void close_resource(resource *r) {
    if (r->type == R_FILE && r->owned && r->fd != (uint32_t)-1) w_fd_close(r->fd);
    free(r->pending.data);
    free(r);
}

/* Lean's stat record: atime, mtime (seconds, nanoseconds), size, links, type. */
static int64_t reply_stat(const uint8_t *stat) {
    uint64_t nlink, size, atim, mtim;
    memcpy(&nlink, stat + 24, 8); memcpy(&size, stat + 32, 8); memcpy(&atim, stat + 40, 8); memcpy(&mtim, stat + 48, 8);
    uint8_t type = stat[16];
    uint64_t kind = type == 3 ? 0 : type == 4 ? 1 : type == 7 ? 2 : 3;
    uint64_t values[] = { atim / 1000000000u, atim % 1000000000u, mtim / 1000000000u, mtim % 1000000000u, size, nlink, kind };
    return reply_numbers(7, values);
}
static int64_t path_stat(const uint8_t *path, size_t length, bool follow) {
    place p = resolve(path, length);
    int64_t result;
    if (!p.found) {
        if (is_zone_path(p.normal)) { uint64_t v[] = { 0, 0, 0, 0, sizeof(utc_zone), 1, 1 }; result = reply_numbers(7, v); }
        else result = reply_unreachable(&p);
        free(p.normal); return result;
    }
    uint8_t stat[64];
    uint32_t error = w_path_filestat_get(p.fd, follow ? 1 : 0, P(p.inside), (uint32_t)strlen(p.inside), P(stat));
    if (error == W_ENOENT && is_zone_path(p.normal)) { uint64_t v[] = { 0, 0, 0, 0, sizeof(utc_zone), 1, 1 }; result = reply_numbers(7, v); }
    else result = error ? reply_wasi_error(error) : reply_stat(stat);
    free(p.normal); return result;
}
static int64_t read_directory(const uint8_t *path, size_t length) {
    place p = resolve(path, length);
    if (!p.found) { int64_t r = reply_unreachable(&p); free(p.normal); return r; }
    uint32_t fd = 0;
    uint32_t error = w_path_open(p.fd, 1, P(p.inside), (uint32_t)strlen(p.inside), 2, inherited_rights(p.fd), inherited_rights(p.fd), 0, P(&fd));
    free(p.normal);
    if (error) return reply_wasi_error(error);
    buffer names = { 0 };
    uint8_t *chunk = malloc(65536);
    uint64_t cookie = 0;
    for (;;) {
        uint32_t used = 0;
        error = w_fd_readdir(fd, P(chunk), 65536, cookie, P(&used));
        if (error) break;
        size_t at = 0;
        bool progressed = false;
        while (at + 24 <= used) {
            uint64_t next; uint32_t namelen;
            memcpy(&next, chunk + at, 8); memcpy(&namelen, chunk + at + 16, 4);
            if (at + 24 + namelen > used) break;
            const char *name = (const char *)chunk + at + 24;
            if (!(namelen == 1 && name[0] == '.') && !(namelen == 2 && name[0] == '.' && name[1] == '.')) {
                put(&names, name, namelen); put(&names, "", 1);
            }
            cookie = next; at += 24 + namelen; progressed = true;
        }
        if (used < 65536 || !progressed) break;
    }
    free(chunk);
    w_fd_close(fd);
    int64_t result = error ? reply_wasi_error(error) : reply_bytes(names.data, names.size);
    free(names.data);
    return result;
}
typedef uint32_t (*path_operation)(uint32_t, uint32_t, uint32_t);
static int64_t path_call_once(path_operation operation, const uint8_t *path, size_t length) {
    place p = resolve(path, length);
    int64_t result;
    if (!p.found) result = reply_unreachable(&p);
    else {
        uint32_t error = operation(p.fd, P(p.inside), (uint32_t)strlen(p.inside));
        result = error ? reply_wasi_error(error) : reply_empty();
    }
    free(p.normal);
    return result;
}
static int64_t two_paths(bool rename, const uint8_t *bytes, size_t size, uint64_t split) {
    if (split > size) return reply_error(4, 22, "invalid argument");
    place a = resolve(bytes, (size_t)split), b = resolve(bytes + split + 1, size - (size_t)split - 1);
    int64_t result;
    if (!a.found || !b.found) result = reply_unreachable(&a);
    else {
        uint32_t error = rename
            ? w_path_rename(a.fd, P(a.inside), (uint32_t)strlen(a.inside), b.fd, P(b.inside), (uint32_t)strlen(b.inside))
            : w_path_link(a.fd, 0, P(a.inside), (uint32_t)strlen(a.inside), b.fd, P(b.inside), (uint32_t)strlen(b.inside));
        result = error ? reply_wasi_error(error) : reply_empty();
    }
    free(a.normal); free(b.normal);
    return result;
}
static uint64_t random_u64(void) { uint64_t v = 0; w_random_get(P(&v), 8); return v; }
static int64_t temporary(bool directory) {
    const char *base = env_lookup("TMPDIR", 6);
    if (!base || !*base) base = "/tmp";
    for (int attempt = 0; attempt < 16; attempt++) {
        char name[512];
        snprintf(name, sizeof(name), "%s%stmp.%08llx", base, base[strlen(base) - 1] == '/' ? "" : "/", (unsigned long long)(random_u64() & 0xffffffffu));
        if (directory) {
            int64_t r = path_call_once(w_path_create_directory, (const uint8_t *)name, strlen(name));
            if (r == 0) return reply_text(name);
            if (response_failed && response.size >= 8 && ((uint64_t *)response.data)[0] == 3) continue;
            return r;
        }
        int64_t r = open_file((const uint8_t *)name, strlen(name), 2);
        if (r >= 0) {
            uint64_t id; memcpy(&id, response.data, 8);
            response.size = 0; put_u64(&response, id); put_text(&response, name);
            return reply_result();
        }
        if (response.size >= 8 && ((uint64_t *)response.data)[0] == 3) continue;
        return r;
    }
    return reply_error(3, 17, "file already exists");
}

/* ---- Clocks, timers and the event loop. ---- */
static uint64_t now_ns(void) { uint64_t t = 0; w_clock_time_get(1, 1000, P(&t)); return t; }

/* Completions of asynchronous operations (op 94), taken by op 95: records of
   (u64 size, packet); packet: promise, resource, kind, failed, result bytes. */
static buffer completions;
static void complete(const uint8_t header[24], bool failed, const void *data, size_t size) {
    put_u64(&completions, 24 + 8 + size);
    put(&completions, header, 24);
    put_u64(&completions, failed ? 1 : 0);
    put(&completions, data, size);
}
/* Asynchronous waits for a timer's current promise (op 72 through op 94). */
typedef struct { uint8_t header[24]; uint32_t timer; uint64_t generation; } waiter;
static waiter *waiters; static size_t waiter_count;
static void settle_waiters(uint32_t timer, uint64_t generation, bool cancelled) {
    for (size_t i = 0; i < waiter_count;) {
        if (waiters[i].timer == timer && waiters[i].generation == generation) {
            if (cancelled) {
                uint64_t error[2] = { 10, 125 };
                buffer b = { 0 }; put(&b, error, 16); put_text(&b, "Timer cancelled");
                complete(waiters[i].header, true, b.data, b.size); free(b.data);
            } else complete(waiters[i].header, false, NULL, 0);
            waiters[i] = waiters[--waiter_count];
        } else i++;
    }
}
static void timer_arm(resource *t, uint64_t delay_ms) { t->armed = true; t->due = now_ns() + delay_ms * 1000000u; }
static void timer_fresh(resource *t) { t->generation++; t->done = false; t->has_promise = true; }
static void timer_drop(resource *t, uint32_t id) {
    if (t->has_promise && !t->done) settle_waiters(id, t->generation, true);
    t->has_promise = false; t->generation++;
}
static bool fire_timers(void) {
    bool any = false;
    uint64_t now = now_ns();
    for (uint32_t id = 10; id < resource_capacity; id++) {
        resource *t = resources[id];
        if (!t || t->type != R_TIMER || !t->armed || t->due > now) continue;
        if (t->has_promise && !t->done) { t->done = true; settle_waiters(id, t->generation, false); any = true; }
        if (t->repeating && t->timeout > 0) timer_arm(t, t->timeout);
        else { t->armed = false; t->phase = 2; }
    }
    return any;
}

/* Blocking host calls (IO.sleep, an awaited timer), innermost last. */
typedef struct { uint64_t due; uint32_t timer; uint64_t generation; } blocked;
static blocked *blocking; static size_t blocking_count;
static bool blocked_ready(const blocked *b) {
    if (b->timer) {
        resource *t = get_resource(b->timer, R_TIMER);
        return !t || t->generation != b->generation || t->done;
    }
    return now_ns() >= b->due;
}

/* The earliest moment something can happen; false when nothing is pending. */
static bool next_deadline(uint64_t *due) {
    bool any = false;
    uint64_t best = UINT64_MAX;
    for (uint32_t id = 10; id < resource_capacity; id++) {
        resource *t = resources[id];
        if (t && t->type == R_TIMER && t->armed) { any = true; if (t->due < best) best = t->due; }
    }
    for (size_t i = 0; i < blocking_count; i++)
        if (!blocking[i].timer) { any = true; if (blocking[i].due < best) best = blocking[i].due; }
    *due = best;
    return any;
}

/* Host: wait until an event can be processed (runtime/edge.cpp). */
int lasm_edge_can_wait(void) { return 1; }
int lasm_edge_wait(void) {
    for (;;) {
        if (completions.size || (blocking_count && blocked_ready(&blocking[blocking_count - 1]))) return 1;
        if (fire_timers()) return 1;
        uint64_t due;
        if (!next_deadline(&due))
            lasm_wasi_fail("Lasm WASI: Lean is waiting for an event that cannot happen (no timer or sleep is pending): "
                "a task waits for a promise or task that nothing will complete (deadlock)");
        uint64_t now = now_ns();
        if (due > now) {
            /* poll_oneoff: one relative monotonic clock subscription. */
            struct { uint64_t userdata; uint8_t tag; uint8_t pad[7]; uint32_t id; uint32_t pad2; uint64_t timeout, precision; uint16_t flags; uint8_t pad3[6]; } in;
            memset(&in, 0, sizeof(in));
            in.tag = 0; in.id = 1; in.timeout = due - now; in.precision = 0;
            uint8_t out[32];
            uint32_t events = 0;
            if (w_poll_oneoff(P(&in), P(out), 1, P(&events)))
                lasm_wasi_fail("Lasm WASI: the host's poll_oneoff failed; sleeps and timers need it");
        }
    }
}
int lasm_edge_call_ready(void) { return blocking_count && blocked_ready(&blocking[blocking_count - 1]); }
int64_t lasm_edge_take_call(void) {
    blocked b = blocking[--blocking_count];
    if (b.timer) {
        resource *t = get_resource(b.timer, R_TIMER);
        if (!t || t->generation != b.generation || !t->done) return reply_error(10, 125, "Timer cancelled");
    }
    return reply_empty();
}
_Noreturn void lasm_edge_fail(const char *message) { lasm_wasi_fail(message); }
void lasm_edge_initialized(void) {}
static int64_t block_until(uint64_t due, uint32_t timer, uint64_t generation) {
    blocked *grown = realloc(blocking, (blocking_count + 1) * sizeof(*grown));
    if (!grown) lasm_wasi_fail("Lasm WASI: out of memory");
    blocking = grown;
    blocking[blocking_count++] = (blocked){ due, timer, generation };
    return INT64_MIN; /* LASM_EDGE_PENDING: runtime/edge.cpp lasm_edge_await_call */
}

/* ---- Platform imports of the runtime (src/edge/edge-library.js on the edge). ---- */
int lasm_host_platform(void) { return 0; }
int lasm_fiber_current(void) { return 1; }
char *lasm_host_backtrace(void) { return strdup("(stack trace unavailable)"); }
void lasm_collect_loaded_libraries(void *context, void (*callback)(void *, void *, char *)) { callback(context, NULL, ""); }

static void copy_out(uint8_t *output, size_t length) {
    if (length != response.size) lasm_wasi_fail("Lasm WASI: mismatched Lean host response size");
    if (length) memcpy(output, response.data, length);
}
void lasm_node_copy(uint8_t *output, size_t length) { copy_out(output, length); response.size = 0; }
void lasm_node_release(uint32_t id) {
    if (id < 10 || id >= resource_capacity || !resources[id]) return;
    resource *r = resources[id];
    resources[id] = NULL;
    if (r->type == R_TIMER) {
        for (size_t i = 0; i < waiter_count;) if (waiters[i].timer == id) waiters[i] = waiters[--waiter_count]; else i++;
    }
    close_resource(r);
}

static int64_t dispatch(uint32_t op, uint32_t id, uint64_t arg, const uint8_t *bytes, size_t size);

int64_t lasm_node_call(uint32_t op, uint32_t id, uint64_t arg, const uint8_t *bytes, size_t size) {
    if (op == 94) {
        /* Start an asynchronous operation; its result completes into the queue.
           Header: promise, resource, kind, check, operation, argument. */
        if (size < 48) return reply_error(4, 22, "invalid asynchronous request");
        uint64_t header[6];
        memcpy(header, bytes, 48);
        uint32_t inner = (uint32_t)header[4];
        if (inner == 72) {
            resource *t = get_resource(id, R_TIMER);
            if (!t) return reply_error(4, 22, "Invalid or closed resource");
            if (t->has_promise) {
                if (t->done) complete(bytes, false, NULL, 0);
                else {
                    waiter *grown = realloc(waiters, (waiter_count + 1) * sizeof(*grown));
                    if (!grown) lasm_wasi_fail("Lasm WASI: out of memory");
                    waiters = grown;
                    memcpy(waiters[waiter_count].header, bytes, 24);
                    waiters[waiter_count].timer = id; waiters[waiter_count].generation = t->generation;
                    waiter_count++;
                }
            } /* A timer without a promise never completes, as on the edge. */
            return reply_empty();
        }
        int64_t started = dispatch(inner, id, header[5], bytes + 48, size - 48);
        if (started == INT64_MIN) {
            /* Blocking operations (IO.sleep) are not started asynchronously. */
            blocking_count--;
            reply_error(8, 38, "this operation cannot run asynchronously in Lasm WASI");
        }
        if (header[3] && response_failed) return reply_result();
        complete(bytes, response_failed, response.data, response.size);
        return reply_empty();
    }
    if (op == 95) {
        fire_timers();
        int64_t r = reply_bytes(completions.data, completions.size);
        completions.size = 0;
        return r;
    }
    return dispatch(op, id, arg, bytes, size);
}


static int64_t dispatch(uint32_t op, uint32_t id, uint64_t arg, const uint8_t *bytes, size_t size) {
    switch (op) {
    case 1: return open_file(bytes, size, arg);
    case 2: { resource *f = get_file(id); return f ? read_file(f, arg) : reply_error(4, 9, "bad file descriptor"); }
    case 3: { resource *f = get_file(id); return f ? write_file(f, bytes, size) : reply_error(4, 9, "bad file descriptor"); }
    case 4: return get_file(id) ? reply_empty() : reply_error(4, 9, "bad file descriptor");
    case 5: {
        resource *f = get_file(id);
        if (!f) return reply_error(4, 9, "bad file descriptor");
        if (f->fd == (uint32_t)-1) { f->pending_at = 0; return reply_empty(); }
        uint64_t at = 0; uint32_t error = w_fd_seek(f->fd, 0, 0, P(&at));
        if (error) return reply_wasi_error(error);
        f->pending.size = 0; f->pending_at = 0; f->eof = false;
        return reply_empty();
    }
    case 6: {
        resource *f = get_file(id);
        if (!f) return reply_error(4, 9, "bad file descriptor");
        uint64_t at = 0; uint32_t error = w_fd_seek(f->fd, 0, 1, P(&at));
        if (!error) error = w_fd_filestat_set_size(f->fd, at);
        return error ? reply_wasi_error(error) : reply_empty();
    }
    case 7: { resource *f = get_file(id); return f ? get_line(f) : reply_error(4, 9, "bad file descriptor"); }
    case 9: {
        resource *f = get_file(id);
        struct { uint8_t filetype; uint8_t pad[23]; } stat;
        return reply_number(f && f->fd != (uint32_t)-1 && !w_fd_fdstat_get(f->fd, P(&stat)) && stat.filetype == 2);
    }
    case 10: case 11: return path_stat(bytes, size, op == 10);
    case 12: {
        place p = resolve(bytes, size);
        int64_t r;
        uint8_t stat[64];
        if (p.found && !w_path_filestat_get(p.fd, 1, P(p.inside), (uint32_t)strlen(p.inside), P(stat))) r = reply_text(p.normal);
        else r = reply_error(1, 2, "no such file or directory");
        free(p.normal); return r;
    }
    case 13: return read_directory(bytes, size);
    case 14: return path_call_once(w_path_create_directory, bytes, size);
    case 15: return path_call_once(w_path_unlink_file, bytes, size);
    case 16: return path_call_once(w_path_remove_directory, bytes, size);
    case 17: case 18: return two_paths(op == 17, bytes, size, arg);
    case 19: return unsupported("Changing file permissions (IO.setAccessRights)");
    case 20: return temporary(false);
    case 21: return temporary(true);
    case 22: {
        if (memchr(bytes, 0, size)) return reply_empty();
        const char *value = env_lookup((const char *)bytes, size);
        if (!value) return reply_empty();
        response.size = 0; response_failed = false; put(&response, "\1", 1); put_text(&response, value);
        return reply_result();
    }
    case 23: return reply_text(cwd);
    case 24: return reply_text(arg_count ? arg_entries[0] : "main.wasm");
    case 25: return reply_number(now_ns() / 1000000u);
    case 26: return reply_number(now_ns());
    case 27: {
        uint64_t t = 0; w_clock_time_get(0, 1000, P(&t));
        uint64_t v[] = { t / 1000000000u, t % 1000000000u };
        return reply_numbers(2, v);
    }
    case 28: case 143: {
        size_t n = (size_t)arg;
        uint8_t *data = malloc(n ? n : 1);
        if (!data) return reply_error(11, 12, "not enough memory");
        if (__wasi_random_get(data, n)) { free(data); return reply_error(0, 5, "the WASI host's random_get failed"); }
        int64_t r = reply_bytes(data, n); free(data); return r;
    }
    case 29: {
        size_t n = size;
        const void *nul = memchr(bytes, 0, size);
        if (nul) n = (size_t)((const uint8_t *)nul - bytes);
        place p = resolve(bytes, n);
        uint8_t stat[64];
        int64_t r;
        if (!p.found) r = reply_unreachable(&p);
        else {
            uint32_t error = w_path_filestat_get(p.fd, 1, P(p.inside), (uint32_t)strlen(p.inside), P(stat));
            if (!error && stat[16] != 3) error = W_ENOTDIR;
            if (error) r = reply_wasi_error(error);
            else { free(cwd); cwd = p.normal; p.normal = NULL; r = reply_empty(); }
        }
        free(p.normal); return r;
    }
    case 30: exit((int)(arg & 255));
    case 31: {
        response.size = 0; response_failed = false;
        for (size_t i = 1; i < arg_count; i++) { put_text(&response, arg_entries[i]); put(&response, "", 1); }
        return reply_result();
    }
    case 35: return arg ? block_until(now_ns() + arg * 1000000u, 0, 0) : reply_empty();
    case 36: return reply_error(11, 12, "out of memory");
    case 37: return reply_number(1);
    case 70: {
        resource *t = calloc(1, sizeof(resource));
        if (!t) lasm_wasi_fail("Lasm WASI: out of memory");
        t->type = R_TIMER; t->timeout = arg; t->repeating = id != 0;
        return reply_number(add_resource(t));
    }
    case 71: {
        resource *t = get_resource(id, R_TIMER);
        if (!t) return reply_error(4, 22, "Invalid or closed resource");
        if (t->phase == 0) { timer_fresh(t); t->phase = 1; timer_arm(t, t->repeating ? 0 : t->timeout); }
        else if (t->repeating && t->phase == 1 && (t->done || !t->has_promise)) timer_fresh(t);
        return reply_number(t->generation);
    }
    case 72: {
        resource *t = get_resource(id, R_TIMER);
        if (!t) return reply_error(4, 22, "Invalid or closed resource");
        if (t->has_promise && t->done) return reply_empty();
        if (!t->has_promise) lasm_wasi_fail("Lasm WASI: a blocking wait for a timer that will never fire (deadlock)");
        return block_until(0, id, t->generation);
    }
    case 73: { resource *t = get_resource(id, R_TIMER); if (!t) return reply_error(4, 22, "Invalid or closed resource"); if (t->phase == 1) timer_arm(t, t->timeout); return reply_empty(); }
    case 74: {
        resource *t = get_resource(id, R_TIMER);
        if (!t) return reply_error(4, 22, "Invalid or closed resource");
        t->armed = false; timer_drop(t, id); t->phase = 2;
        return reply_number(1);
    }
    case 75: {
        resource *t = get_resource(id, R_TIMER);
        if (!t) return reply_error(4, 22, "Invalid or closed resource");
        if (t->phase != 1 || !t->has_promise) return reply_number(0);
        timer_drop(t, id);
        if (!t->repeating) { t->armed = false; t->phase = 0; }
        return reply_number(1);
    }
    case 32: case 34: return get_file(id) ? reply_empty() : reply_error(4, 9, "bad file descriptor");
    case 33: return get_file(id) ? reply_number(1) : reply_error(4, 9, "bad file descriptor");
    case 120: return reply_text("lasm-wasi");
    case 121: return reply_empty();
    case 122: return reply_number(now_ns() / 1000000000u);
    case 123: return reply_number(1);
    case 124: return reply_number(0);
    case 125: { uint64_t v[] = { 1, 4, 0x6d736177 /* "wasm" */, 0, 0, 0, 0, 0, 0 }; return reply_numbers(9, v); }
    case 126: { const char *home = env_lookup("HOME", 4); return reply_text(home && *home ? home : "/"); }
    case 127: { const char *tmp = env_lookup("TMPDIR", 6); return reply_text(tmp && *tmp ? tmp : "/tmp"); }
    case 130: {
        response.size = 0; response_failed = false;
        put_u64(&response, env_count);
        for (size_t i = 0; i < env_count; i++) {
            const char *eq = strchr(env_entries[i], '=');
            size_t k = eq ? (size_t)(eq - env_entries[i]) : strlen(env_entries[i]);
            put_u64(&response, k); put(&response, env_entries[i], k);
            const char *value = eq ? eq + 1 : "";
            put_u64(&response, strlen(value)); put_text(&response, value);
        }
        return reply_result();
    }
    case 132: case 133: {
        const uint8_t *nul = memchr(bytes, 0, size);
        size_t k = op == 132 && nul ? (size_t)(nul - bytes) : size;
        for (size_t i = 0; i < env_count; i++)
            if (!strncmp(env_entries[i], (const char *)bytes, k) && env_entries[i][k] == '=') { env_entries[i] = env_entries[--env_count]; break; }
        if (op == 132) {
            char *entry = malloc(size + 1);
            memcpy(entry, bytes, size); entry[size] = 0; entry[k] = '=';
            char **grown = realloc(env_entries, (env_count + 2) * sizeof(char *));
            if (!grown) lasm_wasi_fail("Lasm WASI: out of memory");
            env_entries = grown; env_entries[env_count++] = entry; env_entries[env_count] = NULL;
        }
        return reply_empty();
    }
    case 134: return reply_text("localhost");
    case 135: return reply_number(0);
    case 136: return reply_empty();
    case 137: {
        response.size = 0; response_failed = false;
        const char *fields[] = { "WASI", "preview1", "Lasm WASI", "wasm32" };
        for (int i = 0; i < 4; i++) { put_u64(&response, strlen(fields[i])); put_text(&response, fields[i]); }
        return reply_result();
    }
    case 138: { uint64_t v[16] = { 0 }; return reply_numbers(16, v); }
    case 139: case 142: return reply_number(MAXIMUM_MEMORY - __builtin_wasm_memory_size(0) * 65536);
    case 140: case 141: return reply_number(MAXIMUM_MEMORY);
    default: break;
    }
    if (op >= 50 && op <= 65) return unsupported("TCP sockets (Std.Net)");
    if (op >= 100 && op <= 116) return unsupported("UDP sockets and DNS (Std.Net)");
    if (op >= 80 && op <= 89) return unsupported("Processes (IO.Process)");
    if (op >= 160 && op <= 164) return unsupported("Signals (Std.Signal)");
    if (op >= 200 && op <= 219) return unsupported("Lasm.JS (JavaScript interop)");
    if (op == 128 || op == 129) return unsupported("User and group records");
    char what[64];
    snprintf(what, sizeof(what), "Lean runtime operation %u", (unsigned)op);
    return unsupported(what);
}

/* ---- Lasm.JS on WASI: available is false; every operation fails clearly. ---- */
static lean_obj_res js_unavailable(void) {
    return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string(
        "Lasm.JS: JavaScript interop is not available in a WebAssembly System Interface program (lasm build --target wasi|fastly)")));
}
LEAN_EXPORT lean_obj_res lasm_js_call(uint32_t op, uint32_t handle, uint64_t arg, b_lean_obj_arg input, b_lean_obj_arg keep) {
    (void)op; (void)handle; (void)arg; (void)input; (void)keep; return js_unavailable();
}
LEAN_EXPORT lean_obj_res lasm_js_value_of_handle(uint32_t handle) { (void)handle; return js_unavailable(); }
LEAN_EXPORT uint32_t lasm_js_value_handle(b_lean_obj_arg v) { (void)v; return 0; }
LEAN_EXPORT lean_obj_res lasm_js_start(lean_obj_arg dispatch) { lean_dec(dispatch); return js_unavailable(); }
LEAN_EXPORT lean_obj_res lasm_js_await_into(b_lean_obj_arg p, b_lean_obj_arg v, b_lean_obj_arg k) { (void)p; (void)v; (void)k; return js_unavailable(); }
LEAN_EXPORT lean_obj_res lasm_js_call_into(b_lean_obj_arg p, uint32_t op, uint32_t handle, uint64_t arg, b_lean_obj_arg input, b_lean_obj_arg keep) {
    (void)p; (void)op; (void)handle; (void)arg; (void)input; (void)keep; return js_unavailable();
}
LEAN_EXPORT lean_obj_res lasm_js_sync_start(lean_obj_arg dispatch) { lean_dec(dispatch); return js_unavailable(); }
LEAN_EXPORT uint8_t lasm_js_available(lean_obj_arg unit) { (void)unit; return 0; }

/* ---- C++ exceptions: the module has no exception handling (wasm-opt
   --strip-eh), so a throw ends the program like an uncaught exception. ---- */
void __wrap___cxa_throw(void *object, void *type, void (*destructor)(void *)) {
    (void)destructor;
    /* Itanium ABI: std::type_info is { vtable, const char *name }. */
    const char *name = type ? ((const char *const *)type)[1] : "unknown";
    const char *message = NULL;
    static const char *const known[] = { "N4lean9throwableE", "N4lean9exceptionE", "N4lean21stack_space_exceptionE",
        "N4lean16memory_exceptionE", "St9exception", "St9bad_alloc", "St20bad_array_new_length", "St11logic_error",
        "St13runtime_error", "St12length_error", "St12out_of_range", "St16invalid_argument", "St14overflow_error" };
    for (size_t i = 0; name && i < sizeof(known) / sizeof(known[0]); i++)
        if (!strcmp(name, known[i])) {
            /* std::exception's vtable: two destructors, then what(). */
            typedef const char *(*what_fn)(void *);
            what_fn what = (*(what_fn **)object)[2];
            message = what(object);
            break;
        }
    char text[1024];
    snprintf(text, sizeof(text), "INTERNAL PANIC: uncaught C++ exception %s%s%s (Lasm WASI programs stop on runtime exceptions)",
        name ? name : "", message ? ": " : "", message ? message : "");
    lasm_wasi_fail(text);
}

/* ---- The command entry point. ---- */
extern void __wasm_call_ctors(void);
extern int __main_argc_argv(int argc, char **argv);
static void initialize_host(void) {
    read_vector(true, &env_entries, &env_count);
    read_vector(false, &arg_entries, &arg_count);
    read_preopens();
    for (uint32_t fd = 0; fd < 3; fd++) { standard[fd].type = R_FILE; standard[fd].fd = fd; }
}
void lasm_fastly_initialize(void);
__attribute__((export_name("_start"))) void _start(void) {
    __wasm_call_ctors();
    initialize_host();
    lasm_fastly_initialize();
    exit(__main_argc_argv((int)arg_count, arg_entries));
}
