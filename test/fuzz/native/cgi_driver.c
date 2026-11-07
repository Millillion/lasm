/*
 * libFuzzer driver for the WASI C host's HTTP boundary (src/wasi/lasm_fetch_wasi.c,
 * --target wasi: a CGI request in, a CGI response out), compiled natively with
 * ASan and UBSan against Lean's runtime. The WASI imports are stubs; the
 * environment comes from the input.
 *
 * Input: environment entries (NAME=value) separated by 0x00 up to an empty
 * field, then a status byte pair and response header names and values.
 * Properties: request_head answers with a clean error or with a method, a
 * URL and headers that are valid UTF-8 strings (Lean's strings must be); the
 * method is REQUEST_METHOD; header names are lowercase with `-` for `_`; when
 * the URL is built from the Host and REQUEST_URI, its authority holds none of
 * / ? # \ @ or whitespace (a client's Host cannot move the path); and the CGI
 * response head is the status line, one line per header and an empty line,
 * with no CR, LF or NUL inside a line.
 */
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <lean/lean.h>

void lean_initialize_runtime_module(void);

/* The WASI host pieces lasm_fetch_wasi.c uses, from lasm_wasi.c on Wasm. */
static const char *env_entries[256];
static size_t env_count;
const char *lasm_wasi_getenv(const char *name) {
    size_t n = strlen(name);
    for (size_t i = 0; i < env_count; i++)
        if (!strncmp(env_entries[i], name, n) && env_entries[i][n] == '=') return env_entries[i] + n + 1;
    return NULL;
}
size_t lasm_wasi_environment(const char *const **entries) { *entries = env_entries; return env_count; }
bool lasm_wasi_stdout_to_stderr;
void lasm_wasi_complete(const uint8_t header[24], bool failed, const void *data, size_t size) { (void)header; (void)failed; (void)data; (void)size; }
void lasm_wasi_complete_error(const uint8_t header[24], uint64_t kind, uint64_t code, const char *message) { (void)header; (void)kind; (void)code; (void)message; }

#include "lasm_fetch_wasi.c"

/* Standard input is empty and writes fail: request_head and cgi_head never do I/O. */
uint32_t w_fd_read(uint32_t fd, uint32_t iovs, uint32_t count, uint32_t nread) { (void)fd; (void)iovs; (void)count; (void)nread; return 8; }
uint32_t w_fd_write(uint32_t fd, uint32_t iovs, uint32_t count, uint32_t nwritten) { (void)fd; (void)iovs; (void)count; (void)nwritten; return 8; }

static bool valid_utf8(const unsigned char *s, size_t n) {
    for (size_t i = 0; i < n;) {
        unsigned c = s[i];
        size_t k = c < 0x80 ? 1 : (c >> 5) == 6 ? 2 : (c >> 4) == 14 ? 3 : (c >> 3) == 30 ? 4 : 0;
        if (!k || i + k > n) return false;
        unsigned cp = k == 1 ? c : k == 2 ? c & 31 : k == 3 ? c & 15 : c & 7;
        for (size_t j = 1; j < k; j++) { if ((s[i + j] & 0xc0) != 0x80) return false; cp = cp << 6 | (s[i + j] & 63); }
        if ((k == 2 && cp < 0x80) || (k == 3 && cp < 0x800) || (k == 4 && (cp < 0x10000 || cp > 0x10ffff)) || (cp >= 0xd800 && cp <= 0xdfff)) return false;
        i += k;
    }
    return true;
}
static void check_string(lean_object *s, const char *what) {
    if (!valid_utf8((const unsigned char *)lean_string_cstr(s), lean_string_size(s) - 1)) {
        fprintf(stderr, "\nLasm fuzz property failed: the %s is not valid UTF-8\n", what);
        exit(77);
    }
}
#define FAIL(...) do { fprintf(stderr, "\nLasm fuzz property failed: " __VA_ARGS__); fputc('\n', stderr); exit(77); } while (0)

int LLVMFuzzerInitialize(int *argc, char ***argv) {
    (void)argc; (void)argv;
    lean_initialize_runtime_module();
    lean_io_mark_end_initialization();
    return 0;
}

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    /* NUL-separated fields, copied so each is a C string. */
    char *copy = malloc(size + 1);
    memcpy(copy, data, size); copy[size] = 0;
    char *fields[512]; size_t nfields = 0;
    for (char *p = copy; nfields < 512;) {
        fields[nfields++] = p;
        char *end = memchr(p, 0, (size_t)(copy + size - p) + 1);
        if (end >= copy + size) break;
        p = end + 1;
    }
    size_t f = 0;
    env_count = 0;
    for (; f < nfields && fields[f][0] && env_count < 256; f++) env_entries[env_count++] = fields[f];
    f++; /* the empty field */

    const char *method; lean_object *url, *headers;
    lean_object *error = request_head(&method, &url, &headers);
    if (error) lean_dec(error);
    else {
        const char *expected = lasm_wasi_getenv("REQUEST_METHOD");
        if (!expected || strcmp(method, expected)) FAIL("the method is not REQUEST_METHOD");
        check_string(url, "URL");
        lean_object *method_string = lean_mk_string(method); /* as lasm_fetch_take_request makes it */
        check_string(method_string, "method");
        lean_dec(method_string);
        size_t n = lean_array_size(headers);
        for (size_t i = 0; i < n; i++) {
            lean_object *h = lean_array_get_core(headers, i);
            lean_object *name = lean_ctor_get(h, 0);
            check_string(name, "header name");
            check_string(lean_ctor_get(h, 1), "header value");
            for (const char *c = lean_string_cstr(name); *c; c++)
                if ((*c >= 'A' && *c <= 'Z') || *c == '_') FAIL("header name %s is not lowercase with -", lean_string_cstr(name));
        }
        const char *full = lasm_wasi_getenv("X_FULL_URL"), *uri = lasm_wasi_getenv("REQUEST_URI");
        const char *host_env = lasm_wasi_getenv("HTTP_HOST");
        /* Bytes that are not UTF-8 become U+FFFD in Lean's strings, so compare valid text only. */
        if (!(full && *full) && uri && uri[0] == '/' && valid_utf8((const unsigned char *)uri, strlen(uri))
            && (!host_env || valid_utf8((const unsigned char *)host_env, strlen(host_env)))) {
            const char *u = lean_string_cstr(url), *authority = strstr(u, "://");
            if (!authority) FAIL("the URL %s has no scheme", u);
            authority += 3;
            const char *path = strstr(authority, uri);
            /* The authority is everything before REQUEST_URI, which ends the URL. */
            size_t ulen = strlen(u), rlen = strlen(uri);
            if (ulen < rlen || strcmp(u + ulen - rlen, uri)) FAIL("the URL %s does not end with REQUEST_URI", u);
            (void)path;
            for (const char *c = authority; c < u + ulen - rlen; c++)
                if (strchr("/?#\\@ \t\r\n", *c) || (unsigned char)*c < 32) FAIL("the URL %s has a Host that moves its path", u);
        }
        lean_dec(url); lean_dec(headers);
    }

    /* The response head. */
    uint16_t status = f < nfields ? (uint16_t)(100 + (unsigned char)fields[f++][0] * 2) : 200;
    lean_object *out_headers = lean_mk_empty_array();
    size_t count = 0;
    for (; f + 1 < nfields; f += 2, count++) {
        lean_object *pair = lean_alloc_ctor(0, 2, 0);
        lean_ctor_set(pair, 0, lean_mk_string_from_bytes(fields[f], strlen(fields[f])));
        lean_ctor_set(pair, 1, lean_mk_string_from_bytes(fields[f + 1], strlen(fields[f + 1])));
        out_headers = lean_array_push(out_headers, pair);
    }
    growable head = { 0 };
    cgi_head(&head, status, out_headers);
    size_t lines = 0;
    for (size_t i = 0; i < head.size; i++) {
        if (head.data[i] == 0) FAIL("a NUL in the response head");
        if (head.data[i] == '\n' && (i == 0 || head.data[i - 1] != '\r')) FAIL("a bare LF in the response head");
        if (head.data[i] == '\r' && (i + 1 >= head.size || head.data[i + 1] != '\n')) FAIL("a bare CR in the response head");
        if (head.data[i] == '\n') lines++;
    }
    if (lines != count + 2) FAIL("the response head has %zu lines for %zu headers", lines, count);
    free(head.data);
    lean_dec(out_headers);
    free(copy);
    return 0;
}
