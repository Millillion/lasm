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
/* Queues a completion for the cooperative runtime (header: promise, resource, kind). */
void lasm_wasi_complete(const uint8_t header[24], bool failed, const void *data, size_t size);
void lasm_wasi_complete_error(const uint8_t header[24], uint64_t kind, uint64_t code, const char *message);

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
__attribute__((unused)) static const char *reason(unsigned status) {
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
__attribute__((unused)) static void put_clean(growable *g, lean_object *s) {
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
/* The body still to read: CONTENT_LENGTH bytes, or (without it) all of
   standard input except for GET and HEAD, which have none. */
static bool body_sized, body_open;
static unsigned long long body_left;
static uint32_t read_body_chunk(uint8_t *buf, uint32_t size) {
    if (!body_open) return 0;
    if (body_sized && body_left < size) size = (uint32_t)body_left;
    uint32_t n = size ? read_some(buf, size) : 0;
    if (!n) { body_open = false; return 0; }
    if (body_sized) body_left -= n;
    return n;
}
static lean_object *request_head(const char **method_out, lean_object **url_out, lean_object **headers_out);
LEAN_EXPORT lean_obj_res lasm_fetch_take_request(void) {
    const char *method; lean_object *url, *headers;
    lean_object *error = request_head(&method, &url, &headers);
    if (error) return error;
    growable body = { 0 };
    uint8_t chunk[16384];
    for (uint32_t n; (n = read_body_chunk(chunk, sizeof(chunk)));) grow_put(&body, chunk, n);
    lean_object *result = request_result(lean_mk_string(method), url, headers, bytes_of(body.data, body.size));
    free(body.data);
    return result;
}
LEAN_EXPORT lean_obj_res lasm_fetch_take_request_head(void) {
    const char *method; lean_object *url, *headers;
    lean_object *error = request_head(&method, &url, &headers);
    if (error) return error;
    return lean_io_result_mk_ok(pair(lean_mk_string(method), pair(url, headers)));
}
LEAN_EXPORT lean_obj_res lasm_fetch_read(uint32_t max) {
    uint8_t *buf = malloc(max ? max : 1);
    uint32_t n = read_body_chunk(buf, max);
    lean_object *chunk = bytes_of(buf, n);
    free(buf);
    return lean_io_result_mk_ok(chunk);
}
static lean_object *request_head(const char **method_out, lean_object **url_out, lean_object **headers_out) {
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
    const char *length = lasm_wasi_getenv("CONTENT_LENGTH");
    body_sized = length && *length;
    body_left = body_sized ? strtoull(length, NULL, 10) : 0;
    body_open = body_sized ? body_left > 0 : strcmp(method, "GET") && strcmp(method, "HEAD");
    lasm_wasi_stdout_to_stderr = true;
    *method_out = method;
    *url_out = string_of((const char *)url.data, url.size);
    *headers_out = headers;
    free(url.data);
    return NULL;
}
static bool write_stdout(const uint8_t *p, size_t left) {
    while (left) {
        wiovec v = { P(p), (uint32_t)left };
        uint32_t written = 0;
        if (w_fd_write(1, P(&v), 1, P(&written)) || !written) return false;
        p += written; left -= written;
    }
    return true;
}
static void cgi_head(growable *out, uint16_t status, b_lean_obj_arg headers) {
    char line[64];
    snprintf(line, sizeof(line), "Status: %u %s\r\n", (unsigned)status, reason(status));
    grow_put(out, line, strlen(line));
    size_t n = lean_array_size(headers);
    for (size_t i = 0; i < n; i++) {
        lean_object *h = lean_array_get_core(headers, i);
        put_clean(out, lean_ctor_get(h, 0)); grow_put(out, ": ", 2); put_clean(out, lean_ctor_get(h, 1)); grow_put(out, "\r\n", 2);
    }
    grow_put(out, "\r\n", 2);
}
LEAN_EXPORT lean_obj_res lasm_fetch_send_response(uint16_t status, b_lean_obj_arg headers, b_lean_obj_arg body) {
    growable out = { 0 };
    cgi_head(&out, status, headers);
    if (lean_sarray_size(body)) grow_put(&out, lean_sarray_cptr(body), lean_sarray_size(body));
    bool ok = write_stdout(out.data, out.size);
    free(out.data);
    return ok ? lean_io_result_mk_ok(lean_box(0)) : fail("Lasm.Fetch: writing the CGI response failed");
}
LEAN_EXPORT lean_obj_res lasm_fetch_start_response(uint16_t status, b_lean_obj_arg headers) {
    growable out = { 0 };
    cgi_head(&out, status, headers);
    bool ok = write_stdout(out.data, out.size);
    free(out.data);
    return ok ? lean_io_result_mk_ok(lean_box(0)) : fail("Lasm.Fetch: writing the CGI response failed");
}
LEAN_EXPORT lean_obj_res lasm_fetch_write(b_lean_obj_arg chunk) {
    return write_stdout(lean_sarray_cptr(chunk), lean_sarray_size(chunk)) ? lean_io_result_mk_ok(lean_box(0))
        : fail("Lasm.Fetch: writing the CGI response failed");
}
LEAN_EXPORT lean_obj_res lasm_fetch_finish(uint8_t ok) { (void)ok; return lean_io_result_mk_ok(lean_box(0)); }
void lasm_fastly_initialize(void) {}
LEAN_EXPORT lean_obj_res lasm_fetch_send(b_lean_obj_arg promise, b_lean_obj_arg method, b_lean_obj_arg url, b_lean_obj_arg headers,
    b_lean_obj_arg body, b_lean_obj_arg backend) {
    (void)promise; (void)method; (void)url; (void)headers; (void)body; (void)backend;
    return fail("Lasm.Fetch.fetch: outbound HTTP is not available in a WASI preview 1 program (it has no sockets)");
}
/* The event loop's hooks for host I/O (Fastly: pending backend requests). */
bool lasm_wasi_io_poll(void) { return false; }
bool lasm_wasi_io_pending(void) { return false; }
void lasm_wasi_io_wait(uint64_t timeout_ns, bool bounded) { (void)timeout_ns; (void)bounded; }
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
FASTLY(fastly_http_body, close) uint32_t f_body_close(uint32_t body);
FASTLY(fastly_http_body, abandon) uint32_t f_body_abandon(uint32_t body);
FASTLY(fastly_http_body, write) uint32_t f_body_write(uint32_t body, uint32_t buf, uint32_t length, uint32_t end, uint32_t nwritten);
FASTLY(fastly_http_resp, new) uint32_t f_resp_new(uint32_t resp_out);
FASTLY(fastly_http_resp, status_set) uint32_t f_resp_status_set(uint32_t resp, uint32_t status);
FASTLY(fastly_http_resp, header_append) uint32_t f_resp_header_append(uint32_t resp, uint32_t name, uint32_t name_length,
    uint32_t value, uint32_t value_length);
FASTLY(fastly_http_resp, send_downstream) uint32_t f_resp_send_downstream(uint32_t resp, uint32_t body, uint32_t streaming);
FASTLY(fastly_http_req, new) uint32_t f_req_new(uint32_t req_out);
FASTLY(fastly_http_req, method_set) uint32_t f_req_method_set(uint32_t req, uint32_t method, uint32_t length);
FASTLY(fastly_http_req, uri_set) uint32_t f_req_uri_set(uint32_t req, uint32_t uri, uint32_t length);
FASTLY(fastly_http_req, header_append) uint32_t f_req_header_append(uint32_t req, uint32_t name, uint32_t name_length, uint32_t value, uint32_t value_length);
FASTLY(fastly_http_req, send_async) uint32_t f_req_send_async(uint32_t req, uint32_t body, uint32_t backend, uint32_t backend_length, uint32_t pending_out);
FASTLY(fastly_http_req, pending_req_wait) uint32_t f_req_pending_wait(uint32_t pending, uint32_t resp_out, uint32_t body_out);
FASTLY(fastly_http_req, register_dynamic_backend) uint32_t f_req_register_dynamic_backend(uint32_t name, uint32_t name_length,
    uint32_t target, uint32_t target_length, uint32_t mask, uint32_t config);
FASTLY(fastly_http_resp, status_get) uint32_t f_resp_status_get(uint32_t resp, uint32_t status_out);
FASTLY(fastly_http_resp, header_names_get) uint32_t f_resp_header_names_get(uint32_t resp, uint32_t buf, uint32_t length,
    uint32_t cursor, uint32_t ending_cursor, uint32_t nwritten);
FASTLY(fastly_http_resp, header_values_get) uint32_t f_resp_header_values_get(uint32_t resp, uint32_t name, uint32_t name_length,
    uint32_t buf, uint32_t length, uint32_t cursor, uint32_t ending_cursor, uint32_t nwritten);
FASTLY(fastly_async_io, select) uint32_t f_async_select(uint32_t handles, uint32_t count, uint32_t timeout_ms, uint32_t ready_out);
FASTLY(fastly_async_io, is_ready) uint32_t f_async_is_ready(uint32_t handle, uint32_t ready_out);

enum { FASTLY_OK = 0, FASTLY_BUFLEN = 4 };
typedef uint32_t (*names_getter)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
typedef uint32_t (*values_getter)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
/* Every (name, value) header of a request or response, calling `each` per value. */
static uint32_t each_header(names_getter names_get, values_getter values_get, uint32_t handle,
    void (*each)(void *, const char *, size_t, const char *, size_t), void *context) {
    uint32_t names_capacity = 16384, values_capacity = 65536, cursor = 0, status = 0;
    char *names = malloc(names_capacity), *values = malloc(values_capacity);
    for (;;) {
        int64_t ending = -1; uint32_t written = 0;
        status = names_get(handle, P(names), names_capacity, cursor, P(&ending), P(&written));
        if (status) break;
        for (uint32_t at = 0; at < written;) {
            const char *name = names + at;
            size_t n = strnlen(name, written - at);
            uint32_t vcursor = 0;
            for (;;) {
                int64_t vending = -1; uint32_t vwritten = 0;
                status = values_get(handle, P(name), (uint32_t)n, P(values), values_capacity, vcursor, P(&vending), P(&vwritten));
                if (status) goto done;
                for (uint32_t v = 0; v < vwritten;) {
                    size_t m = strnlen(values + v, vwritten - v);
                    each(context, name, n, values + v, m);
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
done:
    free(names); free(values);
    return status;
}
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
static uint32_t request_handle, body_handle, response_body;
static void push_header(void *context, const char *name, size_t n, const char *value, size_t m) {
    lean_object **headers = context;
    *headers = lean_array_push(*headers, pair(string_of(name, n), string_of(value, m)));
}
static lean_obj_res request_head(lean_object **method, lean_object **url, lean_object **headers) {
    uint32_t status = f_req_body_downstream_get(P(&request_handle), P(&body_handle));
    if (status) return fastly_fail("reading the downstream request", status);
    growable m = { 0 }, u = { 0 };
    if ((status = get_text(f_req_method_get, request_handle, &m))) return fastly_fail("reading the method", status);
    if ((status = get_text(f_req_uri_get, request_handle, &u))) return fastly_fail("reading the URL", status);
    *headers = lean_mk_empty_array();
    if ((status = each_header(f_req_header_names_get, f_req_header_values_get, request_handle, push_header, headers))) {
        lean_dec(*headers); return fastly_fail("reading the request headers", status);
    }
    *method = string_of((const char *)m.data, m.size);
    *url = string_of((const char *)u.data, u.size);
    free(m.data); free(u.data);
    return NULL;
}
LEAN_EXPORT lean_obj_res lasm_fetch_take_request(void) {
    lean_object *method, *url, *headers;
    lean_obj_res error = request_head(&method, &url, &headers);
    if (error) return error;
    growable body = { 0 };
    uint8_t chunk[16384];
    for (;;) {
        uint32_t n = 0, status = f_body_read(body_handle, P(chunk), sizeof(chunk), P(&n));
        if (status) { lean_dec(method); lean_dec(url); lean_dec(headers); free(body.data); return fastly_fail("reading the request body", status); }
        if (!n) break;
        grow_put(&body, chunk, n);
    }
    lean_object *result = request_result(method, url, headers, bytes_of(body.data, body.size));
    free(body.data);
    return result;
}
LEAN_EXPORT lean_obj_res lasm_fetch_take_request_head(void) {
    lean_object *method, *url, *headers;
    lean_obj_res error = request_head(&method, &url, &headers);
    if (error) return error;
    return lean_io_result_mk_ok(pair(method, pair(url, headers)));
}
LEAN_EXPORT lean_obj_res lasm_fetch_read(uint32_t max) {
    uint8_t *buf = malloc(max ? max : 1);
    uint32_t n = 0, status = max ? f_body_read(body_handle, P(buf), max, P(&n)) : 0;
    if (status) { free(buf); return fastly_fail("reading the request body", status); }
    lean_object *chunk = bytes_of(buf, n);
    free(buf);
    return lean_io_result_mk_ok(chunk);
}
static uint32_t write_all_body(uint32_t body, const uint8_t *p, size_t left) {
    while (left) {
        uint32_t written = 0, status = f_body_write(body, P(p), (uint32_t)(left > (1u << 20) ? (1u << 20) : left), 0, P(&written));
        if (status) return status;
        p += written; left -= written;
    }
    return 0;
}
/* A response with its status and headers, and a new body. */
static lean_obj_res new_response(uint16_t code, b_lean_obj_arg headers, uint32_t *response, uint32_t *body) {
    uint32_t status;
    if ((status = f_resp_new(P(response)))) return fastly_fail("creating the response", status);
    if ((status = f_resp_status_set(*response, code))) return fastly_fail("setting the status", status);
    size_t n = lean_array_size(headers);
    for (size_t i = 0; i < n; i++) {
        lean_object *h = lean_array_get_core(headers, i), *name = lean_ctor_get(h, 0), *value = lean_ctor_get(h, 1);
        status = f_resp_header_append(*response, P(lean_string_cstr(name)), (uint32_t)(lean_string_size(name) - 1),
            P(lean_string_cstr(value)), (uint32_t)(lean_string_size(value) - 1));
        if (status) return fastly_fail("setting a response header", status);
    }
    if ((status = f_body_new(P(body)))) return fastly_fail("creating the response body", status);
    return NULL;
}
LEAN_EXPORT lean_obj_res lasm_fetch_send_response(uint16_t code, b_lean_obj_arg headers, b_lean_obj_arg body) {
    uint32_t response = 0, out = 0, status;
    lean_obj_res error = new_response(code, headers, &response, &out);
    if (error) return error;
    if ((status = write_all_body(out, lean_sarray_cptr(body), lean_sarray_size(body)))) return fastly_fail("writing the response body", status);
    if ((status = f_resp_send_downstream(response, out, 0))) return fastly_fail("sending the response", status);
    return lean_io_result_mk_ok(lean_box(0));
}
LEAN_EXPORT lean_obj_res lasm_fetch_start_response(uint16_t code, b_lean_obj_arg headers) {
    uint32_t response = 0, status;
    lean_obj_res error = new_response(code, headers, &response, &response_body);
    if (error) return error;
    /* Streaming: the client receives each chunk as it is written. */
    if ((status = f_resp_send_downstream(response, response_body, 1))) return fastly_fail("sending the response", status);
    return lean_io_result_mk_ok(lean_box(0));
}
LEAN_EXPORT lean_obj_res lasm_fetch_write(b_lean_obj_arg chunk) {
    uint32_t status = write_all_body(response_body, lean_sarray_cptr(chunk), lean_sarray_size(chunk));
    return status ? fastly_fail("writing the response body", status) : lean_io_result_mk_ok(lean_box(0));
}
LEAN_EXPORT lean_obj_res lasm_fetch_finish(uint8_t ok) {
    uint32_t status = ok ? f_body_close(response_body) : f_body_abandon(response_body);
    return status ? fastly_fail("ending the response body", status) : lean_io_result_mk_ok(lean_box(0));
}
#endif

#ifdef LASM_WASI_FASTLY
/* ---- Outbound requests: send_async, completed by the event loop. ---- */
typedef struct { uint8_t header[24]; uint32_t pending; bool active; } outbound;
static outbound *outbounds; static size_t outbound_count;
static char **dynamic_backends; static size_t dynamic_count;

/* A dynamic backend named for the URL's scheme, host and port. */
static uint32_t dynamic_backend(const char *url, size_t url_length, char *name, size_t name_size) {
    const char *scheme_end = strstr(url, "://");
    if (!scheme_end || (size_t)(scheme_end - url) > url_length) return 2;
    bool tls = scheme_end - url == 5 && !strncmp(url, "https", 5);
    const char *host = scheme_end + 3, *end = host;
    while (*end && *end != '/' && *end != '?' && *end != '#') end++;
    const char *at = memchr(host, '@', (size_t)(end - host));
    if (at) host = at + 1;
    char authority[512];
    size_t n = (size_t)(end - host);
    if (!n || n >= sizeof(authority) - 8) return 2;
    memcpy(authority, host, n); authority[n] = 0;
    char hostname[512];
    strcpy(hostname, authority);
    char *colon = hostname[0] == '[' ? strchr(hostname, ']') : strrchr(hostname, ':');
    if (colon && *colon == ']') colon = colon[1] == ':' ? colon + 1 : NULL;
    if (colon) *colon = 0; else strcat(authority, tls ? ":443" : ":80");
    if (hostname[0] == '[') { memmove(hostname, hostname + 1, strlen(hostname)); char *close = strchr(hostname, ']'); if (close) *close = 0; }
    snprintf(name, name_size, "lasm-%s-", tls ? "tls" : "tcp");
    for (const char *p = authority; *p && strlen(name) + 1 < name_size; p++) {
        char c = (*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '-' || *p == '.' ? *p : '_';
        size_t len = strlen(name); name[len] = c; name[len + 1] = 0;
    }
    for (size_t i = 0; i < dynamic_count; i++) if (!strcmp(dynamic_backends[i], name)) return 0;
    /* dynamic_backend_config (compute-at-edge typenames.witx): 108 bytes. */
    uint8_t config[128];
    memset(config, 0, sizeof(config));
    uint32_t host_length = (uint32_t)strlen(hostname);
    uint32_t pointer = P(hostname);
    uint32_t mask = 1u << 1; /* host_override */
    memcpy(config + 0, &pointer, 4); memcpy(config + 4, &host_length, 4);
    if (tls) {
        mask |= (1u << 5) | (1u << 8) | (1u << 11); /* use_ssl, cert_hostname, sni_hostname */
        memcpy(config + 28, &pointer, 4); memcpy(config + 32, &host_length, 4);
        memcpy(config + 52, &pointer, 4); memcpy(config + 56, &host_length, 4);
    }
    uint32_t status = f_req_register_dynamic_backend(P(name), (uint32_t)strlen(name), P(authority), (uint32_t)strlen(authority), mask, P(config));
    if (status) return status;
    char **grown = realloc(dynamic_backends, (dynamic_count + 1) * sizeof(char *));
    if (!grown) abort();
    dynamic_backends = grown; dynamic_backends[dynamic_count++] = strdup(name);
    return 0;
}

LEAN_EXPORT lean_obj_res lasm_fetch_send(b_lean_obj_arg promise, b_lean_obj_arg method, b_lean_obj_arg url, b_lean_obj_arg headers,
    b_lean_obj_arg body, b_lean_obj_arg backend) {
    uint32_t request = 0, out = 0, pending = 0, status;
    if ((status = f_req_new(P(&request)))) return fastly_fail("creating a backend request", status);
    if ((status = f_req_method_set(request, P(lean_string_cstr(method)), (uint32_t)(lean_string_size(method) - 1))))
        return fastly_fail("setting the request method", status);
    if ((status = f_req_uri_set(request, P(lean_string_cstr(url)), (uint32_t)(lean_string_size(url) - 1))))
        return fastly_fail("setting the request URL", status);
    size_t n = lean_array_size(headers);
    for (size_t i = 0; i < n; i++) {
        lean_object *h = lean_array_get_core(headers, i), *name = lean_ctor_get(h, 0), *value = lean_ctor_get(h, 1);
        status = f_req_header_append(request, P(lean_string_cstr(name)), (uint32_t)(lean_string_size(name) - 1),
            P(lean_string_cstr(value)), (uint32_t)(lean_string_size(value) - 1));
        if (status) return fastly_fail("setting a request header", status);
    }
    if ((status = f_body_new(P(&out)))) return fastly_fail("creating the request body", status);
    const uint8_t *p = lean_sarray_cptr(body);
    size_t left = lean_sarray_size(body);
    while (left) {
        uint32_t written = 0;
        status = f_body_write(out, P(p), (uint32_t)(left > (1u << 20) ? (1u << 20) : left), 0, P(&written));
        if (status) return fastly_fail("writing the request body", status);
        p += written; left -= written;
    }
    char name[600];
    if (lean_string_size(backend) > 1) snprintf(name, sizeof(name), "%s", lean_string_cstr(backend));
    else if ((status = dynamic_backend(lean_string_cstr(url), lean_string_size(url) - 1, name, sizeof(name)))) {
        char message[200];
        snprintf(message, sizeof(message), "Lasm.Fetch.fetch on Fastly: registering a dynamic backend for this URL failed (FastlyStatus %u); "
            "enable dynamic backends for the service or pass FetchOptions.backend", (unsigned)status);
        return fail(message);
    }
    status = f_req_send_async(request, out, P(name), (uint32_t)strlen(name), P(&pending));
    if (status) return fastly_fail("sending the backend request", status);
    outbound o = { .pending = pending, .active = true };
    uint64_t header[3] = { (uint64_t)(uintptr_t)promise, (uint64_t)(uintptr_t)lean_box(0), 8 };
    memcpy(o.header, header, 24);
    lean_inc(promise);
    outbound *grown = realloc(outbounds, (outbound_count + 1) * sizeof(*grown));
    if (!grown) abort();
    outbounds = grown; outbounds[outbound_count++] = o;
    return lean_io_result_mk_ok(lean_box(0));
}

typedef struct { growable *out; uint64_t count; } header_sink;
static void add_header(void *context, const char *name, size_t n, const char *value, size_t m) {
    header_sink *sink = context;
    uint64_t length = n;
    grow_put(sink->out, &length, 8); grow_put(sink->out, name, n);
    length = m;
    grow_put(sink->out, &length, 8); grow_put(sink->out, value, m);
    sink->count++;
}
/* Finishes a ready pending request: status, headers and the whole body. */
static void finish_outbound(outbound *o) {
    uint32_t response = 0, body = 0, status = f_req_pending_wait(o->pending, P(&response), P(&body));
    o->active = false;
    char message[160];
    if (status) {
        snprintf(message, sizeof(message), "Lasm.Fetch.fetch on Fastly: the backend request failed (FastlyStatus %u)", (unsigned)status);
        lasm_wasi_complete_error(o->header, 0, 5, message);
        return;
    }
    uint16_t code = 0;
    f_resp_status_get(response, P(&code));
    growable headers = { 0 };
    header_sink sink = { &headers, 0 };
    each_header(f_resp_header_names_get, f_resp_header_values_get, response, add_header, &sink);
    growable out = { 0 };
    uint64_t value = code;
    grow_put(&out, &value, 8); grow_put(&out, &sink.count, 8);
    if (headers.size) grow_put(&out, headers.data, headers.size);
    uint8_t chunk[16384];
    for (;;) {
        uint32_t n = 0;
        status = f_body_read(body, P(chunk), sizeof(chunk), P(&n));
        if (status) {
            snprintf(message, sizeof(message), "Lasm.Fetch.fetch on Fastly: reading the response body failed (FastlyStatus %u)", (unsigned)status);
            lasm_wasi_complete_error(o->header, 0, 5, message);
            free(headers.data); free(out.data);
            return;
        }
        if (!n) break;
        grow_put(&out, chunk, n);
    }
    lasm_wasi_complete(o->header, false, out.data, out.size);
    free(headers.data); free(out.data);
}
static void compact(void) {
    size_t k = 0;
    for (size_t i = 0; i < outbound_count; i++) if (outbounds[i].active) outbounds[k++] = outbounds[i];
    outbound_count = k;
}
/* Completes the requests that are ready, without waiting. */
bool lasm_wasi_io_poll(void) {
    bool any = false;
    for (size_t i = 0; i < outbound_count; i++) {
        uint32_t ready = 0;
        if (!f_async_is_ready(outbounds[i].pending, P(&ready)) && ready) { finish_outbound(&outbounds[i]); any = true; }
    }
    compact();
    return any;
}
bool lasm_wasi_io_pending(void) { return outbound_count > 0; }
/* Waits until a request is ready or the timeout (a timer's) passes. */
void lasm_wasi_io_wait(uint64_t timeout_ns, bool bounded) {
    if (!outbound_count) return;
    uint32_t *handles = malloc(outbound_count * sizeof(uint32_t));
    for (size_t i = 0; i < outbound_count; i++) handles[i] = outbounds[i].pending;
    uint64_t ms = bounded ? (timeout_ns + 999999) / 1000000 : 0;
    if (bounded && !ms) ms = 1;
    if (ms > 0xfffffffeu) ms = 0xfffffffeu;
    uint32_t ready = 0;
    (void)f_async_select(P(handles), (uint32_t)outbound_count, (uint32_t)ms, P(&ready));
    free(handles);
    lasm_wasi_io_poll();
}
#endif
