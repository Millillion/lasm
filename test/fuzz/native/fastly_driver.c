/*
 * libFuzzer driver for the Fastly Compute host (src/wasi/lasm_fetch_wasi.c built
 * with -DLASM_WASI_FASTLY: the downstream request in, the response out, and
 * the dynamic backend a fetch registers), compiled natively with ASan and
 * UBSan against Lean's runtime. Fastly's host ABI is played by this file: an
 * honest host that holds the request the input describes, and answers each
 * call as the ABI allows, choosing (from the input) how many header names or
 * values one call returns, how much of the body one read returns and how much
 * of a write one call takes, and answering BUFLEN with the length it needs
 * when a buffer is too small. Pointers cross the ABI as 32-bit handles into a
 * table (the Wasm build's P() is a plain cast, which a 64-bit process cannot
 * use).
 *
 * Input: a mode byte, four schedule bytes, then fields separated by 0x00.
 *   0, request: method, URI, header name and value pairs up to an empty
 *      field, then the body (the rest, raw); the request is taken whole
 *      (lasm_fetch_take_request) or as its head and reads of chosen sizes.
 *   1, response: a status byte, header name and value pairs up to an empty
 *      field, then the body; sent whole or streamed in chosen chunks.
 *   2, backend: scheme, userinfo, host, port and path parts of an http(s)
 *      URL, each mapped onto the characters RFC 3986 allows there.
 * Properties (names the propositions below; any failure exits with 77):
 * Proposition: Lasm.Fetch.Candidates.fastly_request_read
 *   ∀ (s : FastlySchedule) (r : FastlyRequest), r.Representable →
 *     fastlyTakeRequest s r = .ok (r.method, r.uri, groupedHeaders r.headers, r.body)
 * Proposition: Lasm.Fetch.Candidates.fastly_response_written
 *   ∀ (s : FastlySchedule) (status : UInt16) (headers : List (String × String)) (body : ByteArray),
 *     fastlySendResponse s status headers body = .ok (status, headers, body)
 * Proposition: Lasm.Fetch.Candidates.fastly_backend_authority
 *   ∀ (u : HttpUrl), u.Valid →
 *     fastlyBackend u.text = some (u.host ++ ":" ++ u.portOrDefault, u.hostName)
 */
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <lean/lean.h>
#include "lasm_wasi.h"

void lean_initialize_runtime_module(void);

/* Pointers as 32-bit handles: an index into a ring of recent pointers. */
#define RING 65536u
static const void *ring[RING];
static uint32_t ring_next = 1;
static uint32_t lasm_fuzz_ptr(const void *p) {
    uint32_t h = ring_next;
    ring[h % RING] = p;
    ring_next = ring_next % (RING - 1) + 1;
    return h;
}
static void *ptr(uint32_t h) { return (void *)ring[h % RING]; }
#undef P
#define P(x) lasm_fuzz_ptr((const void *)(x))

/* The WASI host pieces lasm_fetch_wasi.c uses, from lasm_wasi.c on Wasm. */
const char *lasm_wasi_getenv(const char *name) { (void)name; return NULL; }
size_t lasm_wasi_environment(const char *const **entries) { *entries = NULL; return 0; }
bool lasm_wasi_stdout_to_stderr;
void lasm_wasi_complete(const uint8_t header[24], bool failed, const void *data, size_t size) { (void)header; (void)failed; (void)data; (void)size; }
void lasm_wasi_complete_error(const uint8_t header[24], uint64_t kind, uint64_t code, const char *message) { (void)header; (void)kind; (void)code; (void)message; }

#include "lasm_fetch_wasi.c"

#define FAIL(...) do { fprintf(stderr, "\nLasm fuzz property failed: " __VA_ARGS__); fputc('\n', stderr); exit(77); } while (0)

/* ---- The schedule: the host's choices, from four input bytes. ---- */
static uint32_t schedule;
static uint32_t choose(uint32_t n) { /* in [1, n] for n >= 1 */
    schedule = schedule * 1103515245u + 12345u;
    return n ? 1 + (schedule >> 8) % n : 0;
}

/* ---- The downstream request Fastly's host holds. ---- */
typedef struct { const uint8_t *p; size_t n; } span;
static span req_method, req_uri, req_body;
static span hnames[256], hvalues[256];
static size_t hcount;
static size_t body_at;
static span distinct[256];
static size_t distinct_count;
static bool same(span a, const uint8_t *b, size_t n) { return a.n == n && !memcmp(a.p, b, n); }

static uint32_t give_text(span s, uint32_t buf, uint32_t length, uint32_t nwritten) {
    uint32_t *out = ptr(nwritten);
    if (s.n > length) { *out = (uint32_t)s.n; return FASTLY_BUFLEN; }
    memcpy(ptr(buf), s.p, s.n); *out = (uint32_t)s.n;
    return FASTLY_OK;
}
/* A multi-value answer: items from `cursor`, as many as fit, at most a chosen number. */
static uint32_t give_items(const span *items, size_t count, uint32_t buf, uint32_t length, uint32_t cursor, uint32_t ending, uint32_t nwritten) {
    int64_t *end = ptr(ending); uint32_t *out = ptr(nwritten);
    *out = 0; *end = -1;
    if (cursor >= count) return FASTLY_OK;
    if (items[cursor].n + 1 > length) { *out = (uint32_t)items[cursor].n + 1; return FASTLY_BUFLEN; }
    uint32_t most = choose((uint32_t)(count - cursor)), used = 0, i = cursor;
    uint8_t *b = ptr(buf);
    for (; i < count && i - cursor < most && used + items[i].n + 1 <= length; i++) {
        memcpy(b + used, items[i].p, items[i].n); b[used + items[i].n] = 0; used += (uint32_t)items[i].n + 1;
    }
    *out = used;
    if (i < count) *end = i;
    return FASTLY_OK;
}

uint32_t f_abi_init(uint64_t version) { (void)version; return 0; }
uint32_t f_req_body_downstream_get(uint32_t req_out, uint32_t body_out) {
    *(uint32_t *)ptr(req_out) = 1; *(uint32_t *)ptr(body_out) = 2; return 0;
}
uint32_t f_req_method_get(uint32_t req, uint32_t buf, uint32_t length, uint32_t nwritten) {
    if (req != 1) FAIL("method_get of handle %u", req);
    return give_text(req_method, buf, length, nwritten);
}
uint32_t f_req_uri_get(uint32_t req, uint32_t buf, uint32_t length, uint32_t nwritten) {
    if (req != 1) FAIL("uri_get of handle %u", req);
    return give_text(req_uri, buf, length, nwritten);
}
uint32_t f_req_header_names_get(uint32_t req, uint32_t buf, uint32_t length, uint32_t cursor, uint32_t ending, uint32_t nwritten) {
    if (req != 1) FAIL("header_names_get of handle %u", req);
    return give_items(distinct, distinct_count, buf, length, cursor, ending, nwritten);
}
uint32_t f_req_header_values_get(uint32_t req, uint32_t name, uint32_t name_length, uint32_t buf, uint32_t length,
    uint32_t cursor, uint32_t ending, uint32_t nwritten) {
    if (req != 1) FAIL("header_values_get of handle %u", req);
    span values[256]; size_t n = 0;
    for (size_t i = 0; i < hcount; i++) if (same(hnames[i], ptr(name), name_length)) values[n++] = hvalues[i];
    if (!n) FAIL("header_values_get of a name the host never gave");
    return give_items(values, n, buf, length, cursor, ending, nwritten);
}
uint32_t f_body_read(uint32_t body, uint32_t buf, uint32_t length, uint32_t nread) {
    if (body != 2) FAIL("body read of handle %u", body);
    size_t left = req_body.n - body_at, n = left < length ? left : length;
    if (n) n = choose((uint32_t)n);
    memcpy(ptr(buf), req_body.p + body_at, n); body_at += n;
    *(uint32_t *)ptr(nread) = (uint32_t)n;
    return 0;
}

/* ---- What the response sends Fastly's host. ---- */
static uint32_t sent_status;
static uint8_t *sent_headers; static size_t sent_headers_size;
static uint8_t *sent_body; static size_t sent_body_size;
static int sent_downstream, body_closed, body_abandoned;
static void record(uint8_t **to, size_t *size, const void *p, size_t n) {
    *to = realloc(*to, *size + n + 1); if (!*to) abort();
    memcpy(*to + *size, p, n); *size += n;
}
uint32_t f_resp_new(uint32_t out) { *(uint32_t *)ptr(out) = 3; return 0; }
uint32_t f_resp_status_set(uint32_t resp, uint32_t status) { if (resp != 3) FAIL("status_set of handle %u", resp); sent_status = status; return 0; }
uint32_t f_resp_header_append(uint32_t resp, uint32_t name, uint32_t name_length, uint32_t value, uint32_t value_length) {
    if (resp != 3) FAIL("header_append of handle %u", resp);
    uint64_t n = name_length, m = value_length;
    record(&sent_headers, &sent_headers_size, &n, 8); record(&sent_headers, &sent_headers_size, ptr(name), name_length);
    record(&sent_headers, &sent_headers_size, &m, 8); record(&sent_headers, &sent_headers_size, ptr(value), value_length);
    return 0;
}
uint32_t f_body_new(uint32_t out) { *(uint32_t *)ptr(out) = 4; return 0; }
uint32_t f_body_write(uint32_t body, uint32_t buf, uint32_t length, uint32_t end, uint32_t nwritten) {
    (void)end;
    if (body != 4) FAIL("body write of handle %u", body);
    if (body_closed || body_abandoned) FAIL("a write after the body ended");
    uint32_t n = length ? choose(length) : 0;
    record(&sent_body, &sent_body_size, ptr(buf), n);
    *(uint32_t *)ptr(nwritten) = n;
    return 0;
}
uint32_t f_body_close(uint32_t body) { if (body != 4) FAIL("close of handle %u", body); body_closed++; return 0; }
uint32_t f_body_abandon(uint32_t body) { if (body != 4) FAIL("abandon of handle %u", body); body_abandoned++; return 0; }
uint32_t f_resp_send_downstream(uint32_t resp, uint32_t body, uint32_t streaming) {
    (void)streaming;
    if (resp != 3 || body != 4) FAIL("send_downstream of handles %u, %u", resp, body);
    sent_downstream++; return 0;
}

/* ---- Outbound requests: only the dynamic backend is fuzzed. ---- */
static char backend_target[1024], backend_host[1024];
static int backends_registered;
uint32_t f_req_register_dynamic_backend(uint32_t name, uint32_t name_length, uint32_t target, uint32_t target_length, uint32_t mask, uint32_t config) {
    (void)name; (void)name_length;
    if (target_length >= sizeof(backend_target)) FAIL("a backend target of %u bytes", target_length);
    memcpy(backend_target, ptr(target), target_length); backend_target[target_length] = 0;
    uint32_t host = 0, host_length = 0;
    memcpy(&host, (uint8_t *)ptr(config), 4); memcpy(&host_length, (uint8_t *)ptr(config) + 4, 4);
    if (!(mask & 2)) FAIL("no host override");
    if (host_length >= sizeof(backend_host)) FAIL("a host override of %u bytes", host_length);
    memcpy(backend_host, ptr(host), host_length); backend_host[host_length] = 0;
    backends_registered++;
    return 0;
}
#define UNUSED(name, ...) uint32_t name(__VA_ARGS__) { FAIL(#name " called"); }
UNUSED(f_req_new, uint32_t a)
UNUSED(f_req_method_set, uint32_t a, uint32_t b, uint32_t c)
UNUSED(f_req_uri_set, uint32_t a, uint32_t b, uint32_t c)
UNUSED(f_req_header_append, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
UNUSED(f_req_send_async, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
UNUSED(f_req_pending_wait, uint32_t a, uint32_t b, uint32_t c)
UNUSED(f_resp_status_get, uint32_t a, uint32_t b)
UNUSED(f_resp_header_names_get, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
UNUSED(f_resp_header_values_get, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h)
UNUSED(f_async_select, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
UNUSED(f_async_is_ready, uint32_t a, uint32_t b)

/* ---- Checks ---- */
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
/* A Lean string read from `s`: valid UTF-8 always, and `s` itself when `s` is. */
static void check_text(lean_object *string, span s, const char *what) {
    const unsigned char *p = (const unsigned char *)lean_string_cstr(string);
    size_t n = lean_string_size(string) - 1;
    if (!valid_utf8(p, n)) FAIL("the %s is not valid UTF-8", what);
    if (valid_utf8(s.p, s.n) && (n != s.n || memcmp(p, s.p, n))) FAIL("the %s changed: %.*s became %.*s", what, (int)s.n, s.p, (int)n, p);
}
static void check_headers(lean_object *headers) {
    /* grouped by name, names in first-appearance order, values in order */
    size_t k = 0;
    for (size_t d = 0; d < distinct_count; d++)
        for (size_t i = 0; i < hcount; i++) {
            if (!same(hnames[i], distinct[d].p, distinct[d].n)) continue;
            if (k >= lean_array_size(headers)) FAIL("a header is missing (%zu of %zu)", k, hcount);
            lean_object *h = lean_array_get_core(headers, k++);
            check_text(lean_ctor_get(h, 0), hnames[i], "header name");
            check_text(lean_ctor_get(h, 1), hvalues[i], "header value");
        }
    if (k != lean_array_size(headers)) FAIL("%zu headers for %zu", lean_array_size(headers), k);
}
static void check_bytes(const uint8_t *p, size_t n, span expected, const char *what) {
    if (n != expected.n || (n && memcmp(p, expected.p, n))) FAIL("the %s changed (%zu bytes for %zu)", what, n, expected.n);
}

/* NUL-separated fields of the input. */
static const uint8_t *in, *in_end;
static span field(void) {
    span s = { in, 0 };
    while (in < in_end && *in) in++;
    s.n = (size_t)(in - s.p);
    if (in < in_end) in++;
    return s;
}

static void request_mode(void) {
    req_method = field(); req_uri = field();
    hcount = 0; distinct_count = 0;
    while (in < in_end && hcount < 256) {
        span name = field();
        if (!name.n) break;
        span value = field();
        hnames[hcount] = name; hvalues[hcount] = value; hcount++;
        bool seen = false;
        for (size_t d = 0; d < distinct_count; d++) if (same(distinct[d], name.p, name.n)) seen = true;
        if (!seen) distinct[distinct_count++] = name;
    }
    req_body.p = in; req_body.n = (size_t)(in_end - in); body_at = 0;
    if (choose(2) == 1) {
        lean_object *r = lasm_fetch_take_request();
        if (!lean_io_result_is_ok(r)) FAIL("an honest host's request was refused");
        lean_object *v = lean_io_result_get_value(r), *rest = lean_ctor_get(v, 1), *rest2 = lean_ctor_get(rest, 1);
        check_text(lean_ctor_get(v, 0), req_method, "method");
        check_text(lean_ctor_get(rest, 0), req_uri, "URL");
        check_headers(lean_ctor_get(rest2, 0));
        lean_object *body = lean_ctor_get(rest2, 1);
        check_bytes(lean_sarray_cptr(body), lean_sarray_size(body), req_body, "body");
        lean_dec(r);
    } else {
        lean_object *r = lasm_fetch_take_request_head();
        if (!lean_io_result_is_ok(r)) FAIL("an honest host's request head was refused");
        lean_object *v = lean_io_result_get_value(r), *rest = lean_ctor_get(v, 1);
        check_text(lean_ctor_get(v, 0), req_method, "method");
        check_text(lean_ctor_get(rest, 0), req_uri, "URL");
        check_headers(lean_ctor_get(rest, 1));
        lean_dec(r);
        uint8_t *got = NULL; size_t got_size = 0;
        for (int reads = 0;; reads++) {
            if (reads > 100000) FAIL("the body never ends");
            uint32_t max = choose(3) == 1 ? 0 : choose(70000);
            lean_object *c = lasm_fetch_read(max);
            if (!lean_io_result_is_ok(c)) FAIL("a body read was refused");
            lean_object *chunk = lean_io_result_get_value(c);
            size_t n = lean_sarray_size(chunk);
            if (n > max) FAIL("a read of at most %u bytes gave %zu", max, n);
            record(&got, &got_size, lean_sarray_cptr(chunk), n);
            lean_dec(c);
            if (!n && max) break;
        }
        check_bytes(got, got_size, req_body, "body");
        free(got);
    }
}

static void response_mode(void) {
    span status_field = field();
    uint16_t status = (uint16_t)(100 + (status_field.n ? status_field.p[0] * 2 : 100));
    lean_object *headers = lean_mk_empty_array();
    uint8_t *expected = NULL; size_t expected_size = 0;
    while (in < in_end) {
        span name = field();
        if (!name.n) break;
        span value = field();
        lean_object *n = lean_mk_string_from_bytes((const char *)name.p, name.n), *v = lean_mk_string_from_bytes((const char *)value.p, value.n);
        uint64_t nn = lean_string_size(n) - 1, vn = lean_string_size(v) - 1;
        record(&expected, &expected_size, &nn, 8); record(&expected, &expected_size, lean_string_cstr(n), nn);
        record(&expected, &expected_size, &vn, 8); record(&expected, &expected_size, lean_string_cstr(v), vn);
        headers = lean_array_push(headers, pair(n, v));
    }
    span body = { in, (size_t)(in_end - in) };
    sent_status = 0; sent_headers_size = 0; sent_body_size = 0; sent_downstream = body_closed = body_abandoned = 0;
    bool streamed = choose(2) == 1, ok = true;
    if (!streamed) {
        lean_object *b = bytes_of(body.p, body.n);
        lean_object *r = lasm_fetch_send_response(status, headers, b);
        if (!lean_io_result_is_ok(r)) FAIL("an honest host refused the response");
        lean_dec(r); lean_dec(b);
    } else {
        lean_object *r = lasm_fetch_start_response(status, headers);
        if (!lean_io_result_is_ok(r)) FAIL("an honest host refused the response head");
        lean_dec(r);
        for (size_t at = 0; at < body.n;) {
            size_t n = choose((uint32_t)(body.n - at));
            lean_object *b = bytes_of(body.p + at, n);
            lean_object *w = lasm_fetch_write(b);
            if (!lean_io_result_is_ok(w)) FAIL("an honest host refused a body write");
            lean_dec(w); lean_dec(b); at += n;
        }
        ok = choose(4) != 1;
        lean_object *f = lasm_fetch_finish(ok);
        if (!lean_io_result_is_ok(f)) FAIL("an honest host refused the end of the body");
        lean_dec(f);
        if (ok ? body_closed != 1 || body_abandoned : body_abandoned != 1 || body_closed) FAIL("the body was not ended as the program asked");
    }
    lean_dec(headers);
    if (sent_downstream != 1) FAIL("the response was sent %d times", sent_downstream);
    if (sent_status != status) FAIL("the status %u became %u", status, sent_status);
    if (sent_headers_size != expected_size || (expected_size && memcmp(sent_headers, expected, expected_size))) FAIL("the response headers changed");
    check_bytes(sent_body, sent_body_size, body, "response body");
    free(expected);
}

/* An http(s) URL from parts, each mapped onto what RFC 3986 allows there. */
static void map_onto(char *out, span s, const char *alphabet, size_t limit) {
    size_t a = strlen(alphabet), n = s.n < limit ? s.n : limit;
    for (size_t i = 0; i < n; i++) out[i] = alphabet[s.p[i] % a];
    out[n] = 0;
}
static void backend_mode(void) {
    bool tls = choose(2) == 1;
    span user = field(), host = field(), port = field(), path = field();
    char userinfo[64], hostname[200], portText[8], pathText[128], url[512], authority[256];
    map_onto(userinfo, user, "abcxyz0189-._~!$&'()*+,;=:%", 40);
    int kind = (int)choose(3);
    if (kind == 1) map_onto(hostname, host, "abcdefghijklmnopqrstuvwxyz0123456789.-", 60);
    else if (kind == 2) snprintf(hostname, sizeof(hostname), "%u.%u.%u.%u", host.n > 0 ? host.p[0] : 1, host.n > 1 ? host.p[1] : 2, host.n > 2 ? host.p[2] : 3, host.n > 3 ? host.p[3] : 4);
    else { char v6[64]; map_onto(v6, host, "0123456789abcdef:", 39); snprintf(hostname, sizeof(hostname), "[%s]", v6[0] ? v6 : "::1"); }
    if (!hostname[0]) strcpy(hostname, "example.com");
    /* A port of up to five digits, or none after the colon (`host:`, the default port). */
    span digits = { port.p + (port.n ? 1 : 0), port.n ? port.n - 1 : 0 };
    map_onto(portText, digits, "0123456789", port.n ? port.p[0] % 6 : 0);
    map_onto(pathText, path, "abcxyz0189-._~!$&'()*+,;=:@/%?#", 100);
    if (pathText[0] && pathText[0] != '/' && pathText[0] != '?' && pathText[0] != '#') memmove(pathText + 1, pathText, strlen(pathText) + 1), pathText[0] = '/';
    bool withUser = user.n > 0, withPort = port.n > 0;
    snprintf(url, sizeof(url), "%s://%s%s%s%s%s%s", tls ? "https" : "http", withUser ? userinfo : "", withUser ? "@" : "",
        hostname, withPort ? ":" : "", withPort ? portText : "", pathText);
    snprintf(authority, sizeof(authority), "%s:%s", hostname, withPort && portText[0] ? portText : tls ? "443" : "80");
    char bare[200];
    strcpy(bare, hostname[0] == '[' ? hostname + 1 : hostname);
    if (hostname[0] == '[') bare[strlen(bare) - 1] = 0;
    for (size_t i = 0; i < dynamic_count; i++) free(dynamic_backends[i]);
    dynamic_count = 0; backends_registered = 0;
    char name[600];
    uint32_t status = dynamic_backend(url, strlen(url), name, sizeof(name));
    if (status) FAIL("no backend for %s", url);
    if (backends_registered != 1) FAIL("%d backends registered for %s", backends_registered, url);
    if (strcmp(backend_target, authority)) FAIL("the backend for %s targets %s, not %s", url, backend_target, authority);
    if (strcmp(backend_host, bare)) FAIL("the backend for %s overrides the host as %s, not %s", url, backend_host, bare);
    if (strncmp(name, tls ? "lasm-tls-" : "lasm-tcp-", 9)) FAIL("the backend name %s", name);
    for (const char *c = name; *c; c++)
        if (!((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z') || (*c >= '0' && *c <= '9') || *c == '-' || *c == '.' || *c == '_')) FAIL("the backend name %s", name);
}

int LLVMFuzzerInitialize(int *argc, char ***argv) {
    (void)argc; (void)argv;
    lean_initialize_runtime_module();
    lean_io_mark_end_initialization();
    return 0;
}

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    if (size < 5) return 0;
    in = data + 5; in_end = data + size;
    schedule = (uint32_t)data[1] | (uint32_t)data[2] << 8 | (uint32_t)data[3] << 16 | (uint32_t)data[4] << 24;
    switch (data[0] % 3) {
    case 0: request_mode(); break;
    case 1: response_mode(); break;
    default: backend_mode(); break;
    }
    return 0;
}
