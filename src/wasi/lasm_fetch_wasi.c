/*
 * Lasm.Fetch on WASI (docs/FETCH.md): each run of the module answers one HTTP
 * request.
 *   --target wasi:   CGI (RFC 3875, as WAGI and Spin's wagi executor run it):
 *                    the request from REQUEST_METHOD, X_FULL_URL or
 *                    SCRIPT_NAME/PATH_INFO/QUERY_STRING, HTTP_* variables and
 *                    standard input; the response on standard output as CGI
 *                    headers (Status:, then the headers) and the body. While
 *                    a request is served, Lean's own standard output goes to
 *                    standard error, so logging cannot corrupt the response.
 *   --target fastly: Fastly Compute's host calls (compute-at-edge.witx, as
 *                    Viceroy v0.21 implements them): the downstream request
 *                    and response.
 */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <lean/lean.h>
#include "lasm_wasi.h"

/* From lasm_wasi.c. */
const char *lasm_wasi_getenv(const char *name);
size_t lasm_wasi_environment(const char *const **entries);
extern bool lasm_wasi_stdout_to_stderr;

static lean_obj_res fail(const char *message) {
    return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string(message)));
}
static lean_object *pair(lean_object *a, lean_object *b) {
    lean_object *o = lean_alloc_ctor(0, 2, 0); lean_ctor_set(o, 0, a); lean_ctor_set(o, 1, b); return o;
}
static lean_object *bytes_of(const uint8_t *data, size_t size) {
    lean_object *a = lean_alloc_sarray(1, size, size);
    if (size) memcpy(lean_sarray_cptr(a), data, size);
    return a;
}
static lean_object *string_of(const char *data, size_t size) { return lean_mk_string_from_bytes(data, size); }
/* (method, url, headers, body) */
static lean_obj_res request_result(lean_object *method, lean_object *url, lean_object *headers, lean_object *body) {
    return lean_io_result_mk_ok(pair(method, pair(url, pair(headers, body))));
}
typedef struct { uint8_t *data; size_t size, capacity; } growable;
static void grow_put(growable *g, const void *data, size_t size) {
    if (g->size + size > g->capacity) {
        size_t capacity = g->capacity ? g->capacity : 4096;
        while (capacity < g->size + size) capacity *= 2;
        uint8_t *next = realloc(g->data, capacity);
        if (!next) abort();
        g->data = next; g->capacity = capacity;
    }
    memcpy(g->data + g->size, data, size); g->size += size;
}
static const char *reason(unsigned status) {
    switch (status) {
    case 200: return "OK"; case 201: return "Created"; case 202: return "Accepted"; case 204: return "No Content";
    case 301: return "Moved Permanently"; case 302: return "Found"; case 303: return "See Other"; case 304: return "Not Modified";
    case 307: return "Temporary Redirect"; case 308: return "Permanent Redirect"; case 400: return "Bad Request";
    case 401: return "Unauthorized"; case 403: return "Forbidden"; case 404: return "Not Found"; case 405: return "Method Not Allowed";
    case 409: return "Conflict"; case 413: return "Content Too Large"; case 415: return "Unsupported Media Type";
    case 422: return "Unprocessable Content"; case 429: return "Too Many Requests"; case 500: return "Internal Server Error";
    case 501: return "Not Implemented"; case 502: return "Bad Gateway"; case 503: return "Service Unavailable"; default: return "Status";
    }
}
/* A header name or value, as text a header line can carry (no CR, LF or NUL). */
static void put_clean(growable *g, lean_object *s) {
    const char *p = lean_string_cstr(s);
    size_t n = lean_string_size(s) - 1;
    for (size_t i = 0; i < n; i++) { char c = p[i] == '\r' || p[i] == '\n' || p[i] == 0 ? ' ' : p[i]; grow_put(g, &c, 1); }
}

#ifndef LASM_WASI_FASTLY
/* ---- CGI ---- */
LEAN_EXPORT uint32_t lasm_fetch_platform(lean_obj_arg unit) { (void)unit; return 1; }

static uint32_t read_some(uint8_t *buf, uint32_t size) {
    wiovec v = { P(buf), size };
    uint32_t n = 0;
    return w_fd_read(0, P(&v), 1, P(&n)) ? 0 : n;
}
LEAN_EXPORT lean_obj_res lasm_fetch_take_request(void) {
    const char *method = lasm_wasi_getenv("REQUEST_METHOD");
    if (!method || !*method)
        return fail("Lasm.Fetch.serve: no HTTP request: this WASI program answers one CGI request per run (REQUEST_METHOD is not set). "
            "Run it under a CGI host such as Spin's wagi executor, or set the CGI variables, for example "
            "REQUEST_METHOD=GET X_FULL_URL=http://localhost/hello wasmtime run main.wasm");
    growable url = { 0 };
    const char *full = lasm_wasi_getenv("X_FULL_URL");
    if (full && *full) grow_put(&url, full, strlen(full));
    else {
        const char *https = lasm_wasi_getenv("HTTPS"), *host = lasm_wasi_getenv("HTTP_HOST");
        const char *scheme = https && (!strcmp(https, "on") || !strcmp(https, "1")) ? "https://" : "http://";
        grow_put(&url, scheme, strlen(scheme));
        if (host && *host) grow_put(&url, host, strlen(host));
        else {
            const char *name = lasm_wasi_getenv("SERVER_NAME"), *port = lasm_wasi_getenv("SERVER_PORT");
            name = name && *name ? name : "localhost";
            grow_put(&url, name, strlen(name));
            if (port && *port && strcmp(port, "80") && strcmp(port, "443")) { grow_put(&url, ":", 1); grow_put(&url, port, strlen(port)); }
        }
        const char *uri = lasm_wasi_getenv("REQUEST_URI");
        if (uri && *uri) grow_put(&url, uri, strlen(uri));
        else {
            const char *script = lasm_wasi_getenv("SCRIPT_NAME"), *info = lasm_wasi_getenv("PATH_INFO"), *query = lasm_wasi_getenv("QUERY_STRING");
            if (script) grow_put(&url, script, strlen(script));
            if (info) grow_put(&url, info, strlen(info));
            if ((!script || !*script) && (!info || !*info)) grow_put(&url, "/", 1);
            if (query && *query) { grow_put(&url, "?", 1); grow_put(&url, query, strlen(query)); }
        }
    }
    lean_object *headers = lean_mk_empty_array();
    const char *const *entries;
    size_t count = lasm_wasi_environment(&entries);
    for (size_t i = 0; i < count; i++) {
        const char *entry = entries[i], *eq = strchr(entry, '=');
        if (!eq) continue;
        size_t k = (size_t)(eq - entry);
        const char *name = NULL; size_t n = 0;
        if (k > 5 && !strncmp(entry, "HTTP_", 5)) { name = entry + 5; n = k - 5; }
        else if ((k == 12 && !strncmp(entry, "CONTENT_TYPE", 12)) || (k == 14 && !strncmp(entry, "CONTENT_LENGTH", 14))) { name = entry; n = k; }
        if (!name || !eq[1]) continue;
        char *lowered = malloc(n + 1);
        for (size_t j = 0; j < n; j++) lowered[j] = name[j] == '_' ? '-' : (name[j] >= 'A' && name[j] <= 'Z' ? name[j] + 32 : name[j]);
        headers = lean_array_push(headers, pair(string_of(lowered, n), lean_mk_string(eq + 1)));
        free(lowered);
    }
    /* The body: CONTENT_LENGTH bytes, or (without it) all of standard input
       except for GET and HEAD, which have none. */
    growable body = { 0 };
    const char *length = lasm_wasi_getenv("CONTENT_LENGTH");
    bool sized = length && *length;
    unsigned long long wanted = sized ? strtoull(length, NULL, 10) : 0;
    if (sized ? wanted > 0 : strcmp(method, "GET") && strcmp(method, "HEAD")) {
        uint8_t chunk[16384];
        for (;;) {
            uint32_t ask = sizeof(chunk);
            if (sized && wanted - body.size < ask) ask = (uint32_t)(wanted - body.size);
            if (!ask) break;
            uint32_t n = read_some(chunk, ask);
            if (!n) break;
            grow_put(&body, chunk, n);
        }
    }
    lasm_wasi_stdout_to_stderr = true;
    lean_object *result = request_result(lean_mk_string(method), string_of((const char *)url.data, url.size), headers,
        bytes_of(body.data, body.size));
    free(url.data); free(body.data);
    return result;
}
LEAN_EXPORT lean_obj_res lasm_fetch_send_response(uint16_t status, b_lean_obj_arg headers, b_lean_obj_arg body) {
    growable out = { 0 };
    char line[64];
    snprintf(line, sizeof(line), "Status: %u %s\r\n", (unsigned)status, reason(status));
    grow_put(&out, line, strlen(line));
    size_t n = lean_array_size(headers);
    for (size_t i = 0; i < n; i++) {
        lean_object *h = lean_array_get_core(headers, i);
        put_clean(&out, lean_ctor_get(h, 0)); grow_put(&out, ": ", 2); put_clean(&out, lean_ctor_get(h, 1)); grow_put(&out, "\r\n", 2);
    }
    grow_put(&out, "\r\n", 2);
    if (lean_sarray_size(body)) grow_put(&out, lean_sarray_cptr(body), lean_sarray_size(body));
    const uint8_t *p = out.data; size_t left = out.size;
    while (left) {
        wiovec v = { P(p), (uint32_t)left };
        uint32_t written = 0;
        if (w_fd_write(1, P(&v), 1, P(&written)) || !written) { free(out.data); return fail("Lasm.Fetch: writing the CGI response failed"); }
        p += written; left -= written;
    }
    free(out.data);
    return lean_io_result_mk_ok(lean_box(0));
}
void lasm_fastly_initialize(void) {}
#else
/* ---- Fastly Compute ---- */
#define FASTLY(module, name) __attribute__((import_module(#module), import_name(#name)))
FASTLY(fastly_abi, init) uint32_t f_abi_init(uint64_t version);
FASTLY(fastly_http_req, body_downstream_get) uint32_t f_req_body_downstream_get(uint32_t req_out, uint32_t body_out);
FASTLY(fastly_http_req, method_get) uint32_t f_req_method_get(uint32_t req, uint32_t buf, uint32_t length, uint32_t nwritten);
FASTLY(fastly_http_req, uri_get) uint32_t f_req_uri_get(uint32_t req, uint32_t buf, uint32_t length, uint32_t nwritten);
FASTLY(fastly_http_req, header_names_get) uint32_t f_req_header_names_get(uint32_t req, uint32_t buf, uint32_t length,
    uint32_t cursor, uint32_t ending_cursor, uint32_t nwritten);
FASTLY(fastly_http_req, header_values_get) uint32_t f_req_header_values_get(uint32_t req, uint32_t name, uint32_t name_length,
    uint32_t buf, uint32_t length, uint32_t cursor, uint32_t ending_cursor, uint32_t nwritten);
FASTLY(fastly_http_body, read) uint32_t f_body_read(uint32_t body, uint32_t buf, uint32_t length, uint32_t nread);
FASTLY(fastly_http_body, new) uint32_t f_body_new(uint32_t body_out);
FASTLY(fastly_http_body, write) uint32_t f_body_write(uint32_t body, uint32_t buf, uint32_t length, uint32_t end, uint32_t nwritten);
FASTLY(fastly_http_resp, new) uint32_t f_resp_new(uint32_t resp_out);
FASTLY(fastly_http_resp, status_set) uint32_t f_resp_status_set(uint32_t resp, uint32_t status);
FASTLY(fastly_http_resp, header_append) uint32_t f_resp_header_append(uint32_t resp, uint32_t name, uint32_t name_length,
    uint32_t value, uint32_t value_length);
FASTLY(fastly_http_resp, send_downstream) uint32_t f_resp_send_downstream(uint32_t resp, uint32_t body, uint32_t streaming);

enum { FASTLY_OK = 0, FASTLY_BUFLEN = 4 };
LEAN_EXPORT uint32_t lasm_fetch_platform(lean_obj_arg unit) { (void)unit; return 2; }
void lasm_fastly_initialize(void) { (void)f_abi_init(1); }

static lean_obj_res fastly_fail(const char *what, uint32_t status) {
    char message[160];
    snprintf(message, sizeof(message), "Lasm.Fetch on Fastly: %s failed (FastlyStatus %u)", what, (unsigned)status);
    return fail(message);
}
typedef uint32_t (*text_getter)(uint32_t, uint32_t, uint32_t, uint32_t);
/* A text host call, retried with the length the host asks for (BUFLEN). */
static uint32_t get_text(text_getter get, uint32_t handle, growable *out) {
    uint32_t size = 1024;
    for (int attempt = 0; attempt < 8; attempt++) {
        out->size = 0;
        if (out->capacity < size) { uint8_t *next = realloc(out->data, size); if (!next) abort(); out->data = next; out->capacity = size; }
        uint32_t written = 0, status = get(handle, P(out->data), size, P(&written));
        if (status == FASTLY_OK) { out->size = written; return 0; }
        if (status != FASTLY_BUFLEN) return status;
        size = written > size ? written : size * 4;
    }
    return FASTLY_BUFLEN;
}
static uint32_t request_handle, body_handle;
LEAN_EXPORT lean_obj_res lasm_fetch_take_request(void) {
    uint32_t status = f_req_body_downstream_get(P(&request_handle), P(&body_handle));
    if (status) return fastly_fail("reading the downstream request", status);
    growable method = { 0 }, url = { 0 }, names = { 0 }, values = { 0 }, body = { 0 };
    if ((status = get_text(f_req_method_get, request_handle, &method))) return fastly_fail("reading the method", status);
    if ((status = get_text(f_req_uri_get, request_handle, &url))) return fastly_fail("reading the URL", status);
    /* Header names: NUL-terminated, in pages (cursor), then each name's values. */
    lean_object *headers = lean_mk_empty_array();
    uint32_t cursor = 0;
    names.capacity = 16384; names.data = malloc(names.capacity);
    values.capacity = 65536; values.data = malloc(values.capacity);
    for (;;) {
        int64_t ending = -1; uint32_t written = 0;
        status = f_req_header_names_get(request_handle, P(names.data), (uint32_t)names.capacity, cursor, P(&ending), P(&written));
        if (status) { lean_dec(headers); return fastly_fail("reading header names", status); }
        for (uint32_t at = 0; at < written;) {
            const char *name = (const char *)names.data + at;
            size_t n = strnlen(name, written - at);
            uint32_t vcursor = 0;
            for (;;) {
                int64_t vending = -1; uint32_t vwritten = 0;
                status = f_req_header_values_get(request_handle, P(name), (uint32_t)n, P(values.data), (uint32_t)values.capacity, vcursor, P(&vending), P(&vwritten));
                if (status) { lean_dec(headers); return fastly_fail("reading header values", status); }
                for (uint32_t v = 0; v < vwritten;) {
                    const char *value = (const char *)values.data + v;
                    size_t m = strnlen(value, vwritten - v);
                    headers = lean_array_push(headers, pair(string_of(name, n), string_of(value, m)));
                    v += (uint32_t)m + 1;
                }
                if (vending < 0) break;
                vcursor = (uint32_t)vending;
            }
            at += (uint32_t)n + 1;
        }
        if (ending < 0) break;
        cursor = (uint32_t)ending;
    }
    uint8_t chunk[16384];
    for (;;) {
        uint32_t n = 0;
        status = f_body_read(body_handle, P(chunk), sizeof(chunk), P(&n));
        if (status) { lean_dec(headers); return fastly_fail("reading the request body", status); }
        if (!n) break;
        grow_put(&body, chunk, n);
    }
    lean_object *result = request_result(string_of((const char *)method.data, method.size), string_of((const char *)url.data, url.size),
        headers, bytes_of(body.data, body.size));
    free(method.data); free(url.data); free(names.data); free(values.data); free(body.data);
    return result;
}
LEAN_EXPORT lean_obj_res lasm_fetch_send_response(uint16_t code, b_lean_obj_arg headers, b_lean_obj_arg body) {
    uint32_t response = 0, out = 0, status;
    if ((status = f_resp_new(P(&response)))) return fastly_fail("creating the response", status);
    if ((status = f_resp_status_set(response, code))) return fastly_fail("setting the status", status);
    size_t n = lean_array_size(headers);
    for (size_t i = 0; i < n; i++) {
        lean_object *h = lean_array_get_core(headers, i), *name = lean_ctor_get(h, 0), *value = lean_ctor_get(h, 1);
        status = f_resp_header_append(response, P(lean_string_cstr(name)), (uint32_t)(lean_string_size(name) - 1),
            P(lean_string_cstr(value)), (uint32_t)(lean_string_size(value) - 1));
        if (status) return fastly_fail("setting a response header", status);
    }
    if ((status = f_body_new(P(&out)))) return fastly_fail("creating the response body", status);
    const uint8_t *p = lean_sarray_cptr(body);
    size_t left = lean_sarray_size(body);
    while (left) {
        uint32_t written = 0;
        status = f_body_write(out, P(p), (uint32_t)(left > (1u << 20) ? (1u << 20) : left), 0, P(&written));
        if (status) return fastly_fail("writing the response body", status);
        p += written; left -= written;
    }
    if ((status = f_resp_send_downstream(response, out, 0))) return fastly_fail("sending the response", status);
    return lean_io_result_mk_ok(lean_box(0));
}
#endif
