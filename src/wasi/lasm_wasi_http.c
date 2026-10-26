/*
 * Lasm.Fetch as a wasi-http component (docs/WASI.md, `lasm build --target
 * wasi-http`): the module exports wasi:http/incoming-handler@0.2.12's
 * `handle`, which runs Lean's `main` once for the request, as `wasmtime serve`
 * and Spin's HTTP trigger call it (one instance per request). Lasm.Fetch.serve
 * reads the incoming request and answers through the response outparam;
 * Lasm.Fetch.fetch sends requests with wasi:http/outgoing-handler, completed
 * by the WASI event loop (wasi:io/poll).
 *
 * The bindings are hand-written for the canonical ABI's 32-bit layout (the
 * module is wasm64 code with 32-bit memory, so wit-bindgen's C, which uses
 * native pointers, does not apply); the layouts follow wit-bindgen 0.63's
 * output for wasi:http@0.2.12. The preview 1 calls of libc and lasm_wasi.c
 * reach the component model through Wasmtime's proxy adapter, which
 * src/wasi/wasi-component.mjs links in.
 */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <lean/lean.h>
#include "lasm_wasi.h"

#define WIT(module, name) __attribute__((import_module(module), import_name(name)))
#define TYPES "wasi:http/types@0.2.12"
#define STREAMS "wasi:io/streams@0.2.12"
#define POLL "wasi:io/poll@0.2.12"

WIT(TYPES, "[method]incoming-request.method") void h_request_method(uint32_t, uint32_t);
WIT(TYPES, "[method]incoming-request.path-with-query") void h_request_path(uint32_t, uint32_t);
WIT(TYPES, "[method]incoming-request.scheme") void h_request_scheme(uint32_t, uint32_t);
WIT(TYPES, "[method]incoming-request.authority") void h_request_authority(uint32_t, uint32_t);
WIT(TYPES, "[method]incoming-request.headers") uint32_t h_request_headers(uint32_t);
WIT(TYPES, "[method]incoming-request.consume") void h_request_consume(uint32_t, uint32_t);
WIT(TYPES, "[resource-drop]incoming-request") void h_drop_incoming_request(uint32_t);
WIT(TYPES, "[constructor]fields") uint32_t h_fields_new(void);
WIT(TYPES, "[method]fields.entries") void h_fields_entries(uint32_t, uint32_t);
WIT(TYPES, "[method]fields.append") void h_fields_append(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
WIT(TYPES, "[resource-drop]fields") void h_drop_fields(uint32_t);
WIT(TYPES, "[method]incoming-body.stream") void h_incoming_body_stream(uint32_t, uint32_t);
WIT(TYPES, "[static]incoming-body.finish") uint32_t h_incoming_body_finish(uint32_t);
WIT(TYPES, "[resource-drop]incoming-body") void h_drop_incoming_body(uint32_t);
WIT(TYPES, "[resource-drop]future-trailers") void h_drop_future_trailers(uint32_t);
WIT(TYPES, "[constructor]outgoing-response") uint32_t h_response_new(uint32_t);
WIT(TYPES, "[method]outgoing-response.set-status-code") uint32_t h_response_set_status(uint32_t, uint32_t);
WIT(TYPES, "[method]outgoing-response.body") void h_response_body(uint32_t, uint32_t);
WIT(TYPES, "[method]outgoing-body.write") void h_outgoing_body_write(uint32_t, uint32_t);
WIT(TYPES, "[static]outgoing-body.finish") void h_outgoing_body_finish(uint32_t, uint32_t, uint32_t, uint32_t);
WIT(TYPES, "[resource-drop]outgoing-body") void h_drop_outgoing_body(uint32_t);
WIT(TYPES, "[static]response-outparam.set") void h_outparam_set(uint32_t, uint32_t, uint32_t, uint32_t, int64_t, uint32_t, uint32_t, uint32_t, uint32_t);
WIT(TYPES, "[constructor]outgoing-request") uint32_t h_outgoing_request_new(uint32_t);
WIT(TYPES, "[method]outgoing-request.set-method") uint32_t h_outgoing_set_method(uint32_t, uint32_t, uint32_t, uint32_t);
WIT(TYPES, "[method]outgoing-request.set-path-with-query") uint32_t h_outgoing_set_path(uint32_t, uint32_t, uint32_t, uint32_t);
WIT(TYPES, "[method]outgoing-request.set-scheme") uint32_t h_outgoing_set_scheme(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
WIT(TYPES, "[method]outgoing-request.set-authority") uint32_t h_outgoing_set_authority(uint32_t, uint32_t, uint32_t, uint32_t);
WIT(TYPES, "[method]outgoing-request.body") void h_outgoing_request_body(uint32_t, uint32_t);
WIT(TYPES, "[resource-drop]outgoing-request") void h_drop_outgoing_request(uint32_t);
WIT(TYPES, "[method]future-incoming-response.subscribe") uint32_t h_future_subscribe(uint32_t);
WIT(TYPES, "[method]future-incoming-response.get") void h_future_get(uint32_t, uint32_t);
WIT(TYPES, "[resource-drop]future-incoming-response") void h_drop_future(uint32_t);
WIT(TYPES, "[method]incoming-response.status") uint32_t h_incoming_status(uint32_t);
WIT(TYPES, "[method]incoming-response.headers") uint32_t h_incoming_headers(uint32_t);
WIT(TYPES, "[method]incoming-response.consume") void h_incoming_consume(uint32_t, uint32_t);
WIT(TYPES, "[resource-drop]incoming-response") void h_drop_incoming_response(uint32_t);
WIT("wasi:http/outgoing-handler@0.2.12", "handle") void h_outgoing_handle(uint32_t, uint32_t, uint32_t, uint32_t);
WIT(STREAMS, "[method]input-stream.blocking-read") void s_blocking_read(uint32_t, int64_t, uint32_t);
WIT(STREAMS, "[method]output-stream.blocking-write-and-flush") void s_blocking_write(uint32_t, uint32_t, uint32_t, uint32_t);
WIT(STREAMS, "[resource-drop]input-stream") void s_drop_input(uint32_t);
WIT(STREAMS, "[resource-drop]output-stream") void s_drop_output(uint32_t);
WIT("wasi:io/error@0.2.12", "[resource-drop]error") void e_drop_error(uint32_t);
WIT(POLL, "poll") void p_poll(uint32_t, uint32_t, uint32_t);
WIT(POLL, "[resource-drop]pollable") void p_drop(uint32_t);
WIT("wasi:clocks/monotonic-clock@0.2.12", "subscribe-duration") uint32_t c_subscribe_duration(int64_t);

/* Every import, referenced, so that every program's module imports the same
   set (src/wasi/wasi-component.mjs splices it into one component template). */
__attribute__((used)) void *const lasm_wasi_http_imports[] = {
    (void *)h_request_method, (void *)h_request_path, (void *)h_request_scheme, (void *)h_request_authority, (void *)h_request_headers,
    (void *)h_request_consume, (void *)h_drop_incoming_request, (void *)h_fields_new, (void *)h_fields_entries, (void *)h_fields_append,
    (void *)h_drop_fields, (void *)h_incoming_body_stream, (void *)h_incoming_body_finish, (void *)h_drop_incoming_body,
    (void *)h_drop_future_trailers, (void *)h_response_new, (void *)h_response_set_status, (void *)h_response_body,
    (void *)h_outgoing_body_write, (void *)h_outgoing_body_finish, (void *)h_drop_outgoing_body, (void *)h_outparam_set, (void *)h_outgoing_request_new,
    (void *)h_outgoing_set_method, (void *)h_outgoing_set_path, (void *)h_outgoing_set_scheme, (void *)h_outgoing_set_authority,
    (void *)h_outgoing_request_body, (void *)h_drop_outgoing_request, (void *)h_future_subscribe, (void *)h_future_get,
    (void *)h_drop_future, (void *)h_incoming_status, (void *)h_incoming_headers, (void *)h_incoming_consume,
    (void *)h_drop_incoming_response, (void *)h_outgoing_handle, (void *)s_blocking_read, (void *)s_blocking_write,
    (void *)s_drop_input, (void *)s_drop_output, (void *)e_drop_error, (void *)p_poll, (void *)p_drop, (void *)c_subscribe_duration };

/* From lasm_wasi.c. */
int lasm_wasi_run_main(void);
void lasm_wasi_complete(const uint8_t header[24], bool failed, const void *data, size_t size);
void lasm_wasi_complete_error(const uint8_t header[24], uint64_t kind, uint64_t code, const char *message);
extern bool lasm_wasi_stdout_to_stderr;

/* The canonical ABI's allocator: lists the host returns land here, and the
   preview 1 adapter allocates its state and stack with it on its first call
   (from libc's static constructors). It must not call malloc then: mimalloc's
   initialization reads the clock through the adapter, which is not yet set
   up. So allocations come from a static arena first, and from malloc once it
   is used up. */
static _Alignas(16) uint8_t cabi_arena[256 * 1024];
static size_t cabi_used;
static bool in_arena(const void *p) { return (const uint8_t *)p >= cabi_arena && (const uint8_t *)p < cabi_arena + sizeof(cabi_arena); }
static void cabi_free(void *p) { if (p && !in_arena(p)) free(p); }
__attribute__((export_name("cabi_realloc"))) uint32_t cabi_realloc(uint32_t pointer, uint32_t old_size, uint32_t align, uint32_t size) {
    if (!size) return align;
    void *old = (void *)(uintptr_t)pointer;
    if (old && !in_arena(old)) {
        void *result = realloc(old, size);
        if (!result) abort();
        return P(result);
    }
    size_t a = align < 16 ? 16 : align, at = (cabi_used + a - 1) & ~(a - 1);
    void *result;
    if (at + size <= sizeof(cabi_arena)) { result = cabi_arena + at; cabi_used = at + size; }
    else { result = aligned_alloc(a, (size + a - 1) & ~(a - 1)); if (!result) abort(); }
    if (old && old_size) memcpy(result, old, old_size < size ? old_size : size);
    return P(result);
}

static uint32_t incoming_request, response_outparam;
static bool responded;
/* The export: one request per instance. */
__attribute__((export_name("wasi:http/incoming-handler@0.2.12#handle"))) void lasm_wasi_http_handle(uint32_t request, uint32_t outparam) {
    incoming_request = request; response_outparam = outparam;
    lasm_wasi_run_main();
    if (!responded) {
        /* main returned without answering: 500. */
        uint32_t response = h_response_new(h_fields_new());
        h_response_set_status(response, 500);
        h_outparam_set(response_outparam, 0, response, 0, 0, 0, 0, 0, 0);
    }
}

static lean_obj_res fail(const char *message) {
    return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string(message)));
}
static lean_object *pair(lean_object *a, lean_object *b) {
    lean_object *o = lean_alloc_ctor(0, 2, 0); lean_ctor_set(o, 0, a); lean_ctor_set(o, 1, b); return o;
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
    if (size) memcpy(g->data + g->size, data, size);
    g->size += size;
}
static uint32_t u32_at(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v; }
static void *at32(uint32_t address) { return (void *)(uintptr_t)address; }

/* An option<string> or string at (pointer, length) in a return area. */
static lean_object *string_at(const uint8_t *area, size_t offset) {
    const char *text = at32(u32_at(area + offset));
    uint32_t length = u32_at(area + offset + 4);
    lean_object *s = lean_mk_string_from_bytes(text, length);
    cabi_free((void *)text);
    return s;
}

/* Reads an input stream to its end, then drops it. */
static bool read_stream(uint32_t stream, growable *out) {
    _Alignas(8) uint8_t area[16];
    for (;;) {
        s_blocking_read(stream, 65536, P(area));
        if (area[0] == 0) {
            void *data = at32(u32_at(area + 4));
            grow_put(out, data, u32_at(area + 8));
            cabi_free(data);
            continue;
        }
        bool closed = area[4] == 1;
        if (!closed) e_drop_error(u32_at(area + 8));
        s_drop_input(stream);
        return closed;
    }
}
/* The body of an incoming request or response, read completely. */
static bool read_body(uint32_t body, growable *out) {
    _Alignas(8) uint8_t area[16];
    h_incoming_body_stream(body, P(area));
    if (area[0] != 0) { h_drop_incoming_body(body); return false; }
    bool ok = read_stream(u32_at(area + 4), out);
    h_drop_future_trailers(h_incoming_body_finish(body));
    return ok;
}
/* Writes bytes to an outgoing body and finishes it. */
static bool write_body(uint32_t body, const uint8_t *data, size_t size) {
    _Alignas(8) uint8_t area[64];
    h_outgoing_body_write(body, P(area));
    if (area[0] != 0) return false;
    uint32_t stream = u32_at(area + 4);
    bool ok = true;
    while (size && ok) {
        uint32_t n = size > 4096 ? 4096 : (uint32_t)size; /* blocking-write-and-flush takes at most 4096 bytes */
        s_blocking_write(stream, P(data), n, P(area));
        if (area[0] != 0) { if (area[4] == 0) e_drop_error(u32_at(area + 8)); ok = false; }
        data += n; size -= n;
    }
    s_drop_output(stream);
    h_outgoing_body_finish(body, 0, 0, P(area));
    return ok && area[0] == 0;
}
static lean_object *headers_of(uint32_t fields) {
    _Alignas(8) uint8_t area[16];
    h_fields_entries(fields, P(area));
    uint8_t *entries = at32(u32_at(area));
    uint32_t count = u32_at(area + 4);
    lean_object *headers = lean_mk_empty_array();
    for (uint32_t i = 0; i < count; i++) {
        uint8_t *e = entries + i * 16;
        lean_object *name = string_at(e, 0), *value = string_at(e, 8);
        headers = lean_array_push(headers, pair(name, value));
    }
    cabi_free(entries);
    h_drop_fields(fields);
    return headers;
}
static uint32_t fields_from(b_lean_obj_arg headers) {
    uint32_t fields = h_fields_new();
    _Alignas(8) uint8_t area[8];
    size_t n = lean_array_size(headers);
    for (size_t i = 0; i < n; i++) {
        lean_object *h = lean_array_get_core(headers, i), *name = lean_ctor_get(h, 0), *value = lean_ctor_get(h, 1);
        /* Forbidden or invalid headers (connection, …) are skipped, as hosts reject them. */
        h_fields_append(fields, P(lean_string_cstr(name)), (uint32_t)(lean_string_size(name) - 1),
            P(lean_string_cstr(value)), (uint32_t)(lean_string_size(value) - 1), P(area));
    }
    return fields;
}

LEAN_EXPORT uint32_t lasm_fetch_platform(lean_obj_arg unit) { (void)unit; return 4; }
void lasm_fastly_initialize(void) {}

static const char *const method_names[] = { "GET", "HEAD", "POST", "PUT", "DELETE", "CONNECT", "OPTIONS", "TRACE", "PATCH" };
/* The request's body stream, read on demand (Lasm.Fetch's streamRequestBody). */
static uint32_t request_body, request_stream;
static lean_obj_res request_head(lean_object **method_out, lean_object **url_out, lean_object **headers_out) {
    if (!incoming_request) return fail("Lasm.Fetch.serve: the request was already taken");
    uint32_t request = incoming_request;
    incoming_request = 0;
    _Alignas(8) uint8_t area[32];
    h_request_method(request, P(area));
    lean_object *method = area[0] < 9 ? lean_mk_string(method_names[area[0]]) : string_at(area, 4);
    growable url = { 0 };
    h_request_scheme(request, P(area));
    const char *scheme = "http";
    if (area[0] && area[4] == 1) scheme = "https";
    if (area[0] && area[4] == 2) cabi_free(at32(u32_at(area + 8)));
    grow_put(&url, scheme, strlen(scheme)); grow_put(&url, "://", 3);
    h_request_authority(request, P(area));
    if (area[0]) { void *p = at32(u32_at(area + 4)); grow_put(&url, p, u32_at(area + 8)); cabi_free(p); }
    else grow_put(&url, "localhost", 9);
    h_request_path(request, P(area));
    if (area[0]) { void *p = at32(u32_at(area + 4)); grow_put(&url, p, u32_at(area + 8)); cabi_free(p); }
    else grow_put(&url, "/", 1);
    *headers_out = headers_of(h_request_headers(request));
    h_request_consume(request, P(area));
    if (area[0] == 0) {
        request_body = u32_at(area + 4);
        h_incoming_body_stream(request_body, P(area));
        if (area[0] == 0) request_stream = u32_at(area + 4);
    }
    h_drop_incoming_request(request);
    *method_out = method;
    *url_out = lean_mk_string_from_bytes((const char *)url.data, url.size);
    free(url.data);
    return NULL;
}
/* Reads up to `max` bytes of the request body (0 at its end, which closes it). */
static size_t read_request(growable *out, uint32_t max) {
    if (!request_stream) return 0;
    _Alignas(8) uint8_t area[16];
    for (;;) {
        s_blocking_read(request_stream, max, P(area));
        if (area[0] == 0) {
            void *data = at32(u32_at(area + 4));
            uint32_t n = u32_at(area + 8);
            grow_put(out, data, n);
            cabi_free(data);
            if (n) return n;
            continue;
        }
        if (area[4] == 0) e_drop_error(u32_at(area + 8));
        s_drop_input(request_stream); request_stream = 0;
        h_drop_future_trailers(h_incoming_body_finish(request_body)); request_body = 0;
        return 0;
    }
}
LEAN_EXPORT lean_obj_res lasm_fetch_take_request(void) {
    lean_object *method, *url, *headers;
    lean_obj_res error = request_head(&method, &url, &headers);
    if (error) return error;
    growable body = { 0 };
    while (read_request(&body, 65536)) {}
    lean_object *bytes = lean_alloc_sarray(1, body.size, body.size);
    if (body.size) memcpy(lean_sarray_cptr(bytes), body.data, body.size);
    free(body.data);
    return lean_io_result_mk_ok(pair(method, pair(url, pair(headers, bytes))));
}
LEAN_EXPORT lean_obj_res lasm_fetch_take_request_head(void) {
    lean_object *method, *url, *headers;
    lean_obj_res error = request_head(&method, &url, &headers);
    if (error) return error;
    return lean_io_result_mk_ok(pair(method, pair(url, headers)));
}
LEAN_EXPORT lean_obj_res lasm_fetch_read(uint32_t max) {
    growable chunk = { 0 };
    read_request(&chunk, max ? max : 1);
    lean_object *bytes = lean_alloc_sarray(1, chunk.size, chunk.size);
    if (chunk.size) memcpy(lean_sarray_cptr(bytes), chunk.data, chunk.size);
    free(chunk.data);
    return lean_io_result_mk_ok(bytes);
}

/* The response: the outparam is set first, so the host sends the status and
   headers and then the body as it is written. */
static uint32_t response_body, response_stream;
static lean_obj_res start(uint16_t status, b_lean_obj_arg headers) {
    if (responded || !response_outparam) return fail("Lasm.Fetch: the response was already sent");
    uint32_t response = h_response_new(fields_from(headers));
    h_response_set_status(response, status);
    _Alignas(8) uint8_t area[8];
    h_response_body(response, P(area));
    if (area[0] != 0) return fail("Lasm.Fetch: the response body is unavailable");
    response_body = u32_at(area + 4);
    h_outparam_set(response_outparam, 0, response, 0, 0, 0, 0, 0, 0);
    responded = true;
    h_outgoing_body_write(response_body, P(area));
    if (area[0] != 0) return fail("Lasm.Fetch: the response body is unavailable");
    response_stream = u32_at(area + 4);
    return NULL;
}
static bool write_stream(uint32_t stream, const uint8_t *data, size_t size) {
    _Alignas(8) uint8_t area[16];
    while (size) {
        uint32_t n = size > 4096 ? 4096 : (uint32_t)size; /* blocking-write-and-flush takes at most 4096 bytes */
        s_blocking_write(stream, P(data), n, P(area));
        if (area[0] != 0) { if (area[4] == 0) e_drop_error(u32_at(area + 8)); return false; }
        data += n; size -= n;
    }
    return true;
}
static bool finish(bool ok) {
    _Alignas(8) uint8_t area[64];
    if (response_stream) { s_drop_output(response_stream); response_stream = 0; }
    if (!response_body) return false;
    uint32_t body = response_body;
    response_body = 0;
    /* Dropping the body without finishing it tells the host the body is incomplete. */
    if (!ok) { h_drop_outgoing_body(body); return true; }
    h_outgoing_body_finish(body, 0, 0, P(area));
    return area[0] == 0;
}
LEAN_EXPORT lean_obj_res lasm_fetch_send_response(uint16_t status, b_lean_obj_arg headers, b_lean_obj_arg body) {
    lean_obj_res error = start(status, headers);
    if (error) return error;
    bool ok = write_stream(response_stream, lean_sarray_cptr(body), lean_sarray_size(body));
    if (!finish(ok) || !ok) return fail("Lasm.Fetch: writing the response body failed");
    return lean_io_result_mk_ok(lean_box(0));
}
LEAN_EXPORT lean_obj_res lasm_fetch_start_response(uint16_t status, b_lean_obj_arg headers) {
    lean_obj_res error = start(status, headers);
    return error ? error : lean_io_result_mk_ok(lean_box(0));
}
LEAN_EXPORT lean_obj_res lasm_fetch_write(b_lean_obj_arg chunk) {
    return response_stream && write_stream(response_stream, lean_sarray_cptr(chunk), lean_sarray_size(chunk))
        ? lean_io_result_mk_ok(lean_box(0)) : fail("Lasm.Fetch: writing the response body failed");
}
LEAN_EXPORT lean_obj_res lasm_fetch_finish(uint8_t ok) {
    return finish(ok) ? lean_io_result_mk_ok(lean_box(0)) : fail("Lasm.Fetch: ending the response body failed");
}

/* ---- Outbound requests: wasi:http/outgoing-handler, completed by the event loop. ---- */
typedef struct { uint8_t header[24]; uint32_t future, pollable; bool active; } outbound;
static outbound *outbounds; static size_t outbound_count;

static int method_tag(const char *method) {
    for (int i = 0; i < 9; i++) if (!strcmp(method, method_names[i])) return i;
    return 9;
}
LEAN_EXPORT lean_obj_res lasm_fetch_send(b_lean_obj_arg promise, b_lean_obj_arg method, b_lean_obj_arg url, b_lean_obj_arg headers,
    b_lean_obj_arg body, b_lean_obj_arg backend) {
    (void)backend;
    const char *u = lean_string_cstr(url), *sep = strstr(u, "://");
    if (!sep) return fail("Lasm.Fetch.fetch: the URL must be absolute (scheme://host/path)");
    const char *authority = sep + 3, *path = authority;
    while (*path && *path != '/' && *path != '?') path++;
    uint32_t request = h_outgoing_request_new(fields_from(headers));
    const char *m = lean_string_cstr(method);
    int tag = method_tag(m);
    h_outgoing_set_method(request, (uint32_t)tag, tag == 9 ? P(m) : 0, tag == 9 ? (uint32_t)strlen(m) : 0);
    size_t scheme_length = (size_t)(sep - u);
    if (scheme_length == 4 && !strncmp(u, "http", 4)) h_outgoing_set_scheme(request, 1, 0, 0, 0);
    else if (scheme_length == 5 && !strncmp(u, "https", 5)) h_outgoing_set_scheme(request, 1, 1, 0, 0);
    else h_outgoing_set_scheme(request, 1, 2, P(u), (uint32_t)scheme_length);
    h_outgoing_set_authority(request, 1, P(authority), (uint32_t)(path - authority));
    if (*path) h_outgoing_set_path(request, 1, P(path), (uint32_t)strlen(path));
    else h_outgoing_set_path(request, 1, P("/"), 1);
    _Alignas(8) uint8_t area[64];
    h_outgoing_request_body(request, P(area));
    if (area[0] != 0) { h_drop_outgoing_request(request); return fail("Lasm.Fetch.fetch: the request body is unavailable"); }
    uint32_t out = u32_at(area + 4);
    h_outgoing_handle(request, 0, 0, P(area));
    if (area[0] != 0) {
        char message[128];
        snprintf(message, sizeof(message), "Lasm.Fetch.fetch: the host refused the request (wasi:http error-code %u)", (unsigned)area[8]);
        return fail(message);
    }
    uint32_t future = u32_at(area + 8);
    if (!write_body(out, lean_sarray_cptr(body), lean_sarray_size(body))) { h_drop_future(future); return fail("Lasm.Fetch.fetch: writing the request body failed"); }
    outbound o = { .future = future, .pollable = h_future_subscribe(future), .active = true };
    uint64_t header[3] = { (uint64_t)(uintptr_t)promise, (uint64_t)(uintptr_t)lean_box(0), 8 };
    memcpy(o.header, header, 24);
    lean_inc(promise);
    outbound *grown = realloc(outbounds, (outbound_count + 1) * sizeof(*grown));
    if (!grown) abort();
    outbounds = grown; outbounds[outbound_count++] = o;
    return lean_io_result_mk_ok(lean_box(0));
}
/* Completes one request if its response has arrived (future.get is non-blocking). */
static bool try_finish(outbound *o) {
    _Alignas(8) uint8_t area[64];
    h_future_get(o->future, P(area));
    if (area[0] == 0) return false;
    o->active = false;
    p_drop(o->pollable);
    char message[128];
    if (area[8] != 0 || area[16] != 0) {
        snprintf(message, sizeof(message), "Lasm.Fetch.fetch: the request failed (wasi:http error-code %u)", area[8] ? 255u : (unsigned)area[24]);
        h_drop_future(o->future);
        lasm_wasi_complete_error(o->header, 0, 5, message);
        return true;
    }
    uint32_t response = u32_at(area + 24);
    h_drop_future(o->future);
    growable out = { 0 };
    uint64_t status = h_incoming_status(response);
    grow_put(&out, &status, 8);
    lean_object *headers = headers_of(h_incoming_headers(response));
    uint64_t count = lean_array_size(headers);
    grow_put(&out, &count, 8);
    for (size_t i = 0; i < count; i++) {
        lean_object *h = lean_array_get_core(headers, i);
        for (int k = 0; k < 2; k++) {
            lean_object *s = lean_ctor_get(h, k);
            uint64_t n = lean_string_size(s) - 1;
            grow_put(&out, &n, 8); grow_put(&out, lean_string_cstr(s), n);
        }
    }
    lean_dec(headers);
    h_incoming_consume(response, P(area));
    if (area[0] == 0) read_body(u32_at(area + 4), &out);
    h_drop_incoming_response(response);
    lasm_wasi_complete(o->header, false, out.data, out.size);
    free(out.data);
    return true;
}
static void compact(void) {
    size_t k = 0;
    for (size_t i = 0; i < outbound_count; i++) if (outbounds[i].active) outbounds[k++] = outbounds[i];
    outbound_count = k;
}
bool lasm_wasi_io_poll(void) {
    bool any = false;
    for (size_t i = 0; i < outbound_count; i++) any = try_finish(&outbounds[i]) || any;
    compact();
    return any;
}
bool lasm_wasi_io_pending(void) { return outbound_count > 0; }
void lasm_wasi_io_wait(uint64_t timeout_ns, bool bounded) {
    if (!outbound_count) return;
    uint32_t *list = malloc((outbound_count + 1) * sizeof(uint32_t));
    size_t n = 0;
    for (size_t i = 0; i < outbound_count; i++) list[n++] = outbounds[i].pollable;
    uint32_t timer = 0;
    if (bounded) list[n++] = timer = c_subscribe_duration((int64_t)timeout_ns);
    _Alignas(8) uint8_t area[8];
    p_poll(P(list), (uint32_t)n, P(area));
    cabi_free(at32(u32_at(area)));
    if (timer) p_drop(timer);
    free(list);
    lasm_wasi_io_poll();
}
