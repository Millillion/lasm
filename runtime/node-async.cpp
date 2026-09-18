#include "node.hpp"
#include "runtime/object.h"
#include <arpa/inet.h>

extern "C" __attribute__((import_module("lasm"), import_name("node_start")))
uint32_t lasm_node_start(uint32_t op, uint32_t handle, uint64_t argument, const uint8_t *data, uint32_t length);
using namespace lasm;
namespace {
O *except(bool failed, O *value) {
    auto *result = lean_alloc_ctor(failed ? 0 : 1, 1, 0);
    lean_ctor_set(result, 0, value); return result;
}
O *address_array(const uint8_t *bytes, bool v6) {
    auto *array = lean_mk_empty_array();
    for (unsigned i = 0; i < (v6 ? 8u : 4u); i++)
        array = lean_array_push(array, lean_box(v6 ? (bytes[2*i] << 8) | bytes[2*i+1] : bytes[i]));
    return array;
}
std::string ip_text(O *array, bool v6) {
    uint8_t bytes[16] = {};
    for (unsigned i = 0; i < (v6 ? 8u : 4u); i++) {
        auto n = lean_unbox(lean_array_uget(array, i));
        if (v6) { bytes[2*i] = n >> 8; bytes[2*i+1] = n; } else bytes[i] = n;
    }
    char text[INET6_ADDRSTRLEN];
    if (!inet_ntop(v6 ? AF_INET6 : AF_INET, bytes, text, sizeof(text))) __builtin_trap();
    return text;
}
std::vector<uint8_t> address_bytes(O *addr) {
    auto *value = lean_ctor_get(addr, 0);
    uint64_t family = lean_obj_tag(addr) == 1 ? 6 : 4;
    uint64_t port = lean_ctor_get_uint16(value, sizeof(void*));
    auto ip = ip_text(lean_ctor_get(value, 0), family == 6);
    std::vector<uint8_t> bytes(16 + ip.size());
    memcpy(bytes.data(), &family, 8); memcpy(bytes.data()+8, &port, 8);
    memcpy(bytes.data()+16, ip.data(), ip.size()); return bytes;
}
O *socket_address(const Reply &r) {
    bool v6 = r.number() == 6;
    std::string text((char*)r.bytes.data()+16, r.bytes.size()-16);
    uint8_t bytes[16];
    if (inet_pton(v6 ? AF_INET6 : AF_INET, text.c_str(), bytes) != 1) __builtin_trap();
    auto *address = lean_alloc_ctor(0, 1, 2);
    lean_ctor_set(address, 0, address_array(bytes, v6));
    lean_ctor_set_uint16(address, sizeof(void*), r.number(8));
    auto *outer = lean_alloc_ctor(v6 ? 1 : 0, 1, 0); lean_ctor_set(outer, 0, address); return outer;
}
// response kind: Unit=0, socket=1, optional bytes=2, Bool=3, timer Unit=4.
O *finish_request(O *promise, O *resource, O *request, O *kind, O*) {
    Reply r(90, lean_unbox(request));
    const unsigned k = lean_unbox(kind);
    // Native UV cancellation drops its promise rather than resolving a value.
    if (!(r.failed && r.number() == 10)) {
        O *value;
        if (r.failed) value = except(true, r.error());
        else {
            value = k == 1 ? wrap_handle(r.number())
                : k == 2 ? (r.bytes.empty() ? lean_box(0) : some(r.array()))
                : k == 3 ? lean_box(r.number() != 0) : lean_box(0);
            if (k != 4) value = except(false, value);
        }
        lean::lean_promise_resolve(value, promise);
    }
    lean_dec(promise); lean_dec(resource);
    return lean_box(0);
}
O *start_request(uint32_t op, O *resource, uint64_t arg, const void *data, size_t size, unsigned kind) {
    auto id = lasm_node_start(op, handle_id(resource), arg, (const uint8_t*)data, size);
    auto *promise = lean::lean_promise_new();
    lean_inc(promise); lean_inc(resource);
    auto *closure = lean_alloc_closure((void*)finish_request, 5, 4);
    lean_closure_set(closure, 0, promise); lean_closure_set(closure, 1, resource);
    lean_closure_set(closure, 2, lean_box(id)); lean_closure_set(closure, 3, lean_box(kind));
    lean_dec(lean_task_spawn_core(closure, 0, true));
    return promise;
}
O *unit_call(uint32_t op, O *h, uint64_t arg = 0) { return Reply(op, handle_id(h), arg).result(); }
O *lock_call(uint32_t op, O *h, uint64_t arg = 0) {
    auto r = Reply(op, handle_id(h), arg);
    if (r.failed) { lean_internal_panic("Invalid synchronization operation"); __builtin_trap(); }
    return lean_box(0);
}
struct Timer { uint32_t id; uint64_t generation = 0; O *promise = nullptr; O *handle; };
void timer_finalize(void *ptr) { auto *t = (Timer*)ptr; if (t->promise) lean_dec(t->promise); lean_dec(t->handle); delete t; }
void timer_foreach(void *ptr, O *fn) {
    auto *t = (Timer*)ptr;
    if (t->promise) { lean_inc(fn); lean_inc(t->promise); lean_dec(lean_apply_1(fn, t->promise)); }
}
}
extern "C" {
O *lean_io_basemutex_new() { return wrap_handle(Reply(40).number()); }
O *lean_io_baserecmutex_new() { return wrap_handle(Reply(40, 0, 1).number()); }
O *lean_io_basemutex_lock(O *h) { return lock_call(41, h); }
O *lean_io_baserecmutex_lock(O *h) { return lock_call(41, h); }
O *lean_io_basemutex_unlock(O *h) { return lock_call(42, h); }
O *lean_io_baserecmutex_unlock(O *h) { return lock_call(42, h); }
uint8_t lean_io_basemutex_try_lock(O *h) { return Reply(43, handle_id(h)).number(); }
uint8_t lean_io_baserecmutex_try_lock(O *h) { return Reply(43, handle_id(h)).number(); }
O *lean_io_condvar_new() { return wrap_handle(Reply(44).number()); }
O *lean_io_condvar_wait(O *c, O *m) { return lock_call(45, c, handle_id(m)); }
O *lean_io_condvar_notify_one(O *h) { return lock_call(46, h); }
O *lean_io_condvar_notify_all(O *h) { return lock_call(47, h); }
O *lean_uv_tcp_new() { return ok(wrap_handle(Reply(50).number())); }
O *lean_uv_tcp_bind(O *socket, O *addr) {
    auto bytes = address_bytes(addr); return Reply(51, handle_id(socket), 0, bytes.data(), bytes.size()).result();
}
O *lean_uv_tcp_listen(O *socket, uint32_t backlog) { return unit_call(52, socket, backlog); }
O *lean_uv_tcp_accept(O *socket) { return ok(start_request(53, socket, 0, nullptr, 0, 1)); }
O *lean_uv_tcp_try_accept(O *socket) {
    auto r = Reply(54, handle_id(socket));
    return ok(r.failed ? except(true, r.error()) : except(false, r.number() ? some(wrap_handle(r.number())) : lean_box(0)));
}
O *lean_uv_tcp_cancel_accept(O *socket) { return unit_call(55, socket); }
O *lean_uv_tcp_recv(O *socket, uint64_t size) { return ok(start_request(56, socket, size, nullptr, 0, 2)); }
O *lean_uv_tcp_wait_readable(O *socket) { return ok(start_request(57, socket, 0, nullptr, 0, 3)); }
O *lean_uv_tcp_cancel_recv(O *socket) { return unit_call(58, socket); }
O *lean_uv_tcp_send(O *socket, O *data) {
    std::vector<uint8_t> bytes;
    for (size_t i = 0; i < lean_array_size(data); i++) {
        auto *part = lean_array_uget(data, i);
        bytes.insert(bytes.end(), lean_sarray_cptr(part), lean_sarray_cptr(part) + lean_sarray_size(part));
    }
    auto *promise = start_request(59, socket, 0, bytes.data(), bytes.size(), 0);
    lean_dec(data); return ok(promise);
}
O *lean_uv_tcp_shutdown(O *socket) { return ok(start_request(60, socket, 0, nullptr, 0, 0)); }
O *lean_uv_tcp_getpeername(O *socket) { auto r = Reply(61, handle_id(socket)); return r.failed ? r.result() : ok(socket_address(r)); }
O *lean_uv_tcp_getsockname(O *socket) { auto r = Reply(62, handle_id(socket)); return r.failed ? r.result() : ok(socket_address(r)); }
O *lean_uv_tcp_nodelay(O *socket) { return unit_call(63, socket); }
O *lean_uv_tcp_keepalive(O *socket, uint8_t enabled, uint32_t delay) { return unit_call(64, socket, ((uint64_t)delay << 1) | (enabled != 0)); }
O *lean_uv_tcp_connect(O *socket, O *addr) {
    auto bytes = address_bytes(addr); return ok(start_request(65, socket, 0, bytes.data(), bytes.size(), 0));
}
O *lean_uv_timer_mk(uint64_t timeout, uint8_t repeating) {
    auto r = Reply(70, repeating, timeout);
    if (r.failed) return r.result();
    auto id = (uint32_t)r.number();
    auto *timer = new Timer{id, 0, nullptr, wrap_handle(id)};
    static auto *cls = lean_register_external_class(timer_finalize, timer_foreach);
    return ok(lean_alloc_external(cls, timer));
}
O *lean_uv_timer_next(O *timer) {
    auto *t = (Timer*)lean_get_external_data(timer);
    auto generation = Reply(71, t->id).number();
    if (!t->promise || generation != t->generation) {
        if (t->promise) lean_dec(t->promise);
        t->promise = start_request(72, t->handle, generation, nullptr, 0, 4);
        t->generation = generation;
    }
    lean_inc(t->promise); return ok(t->promise);
}
O *lean_uv_timer_reset(O *timer) { return Reply(73, ((Timer*)lean_get_external_data(timer))->id).result(); }
static O *stop_timer(O *timer, unsigned op) {
    auto *t = (Timer*)lean_get_external_data(timer);
    auto r = Reply(op, t->id);
    if (!r.failed && r.number() && t->promise) { lean_dec(t->promise); t->promise = nullptr; }
    return r.result();
}
O *lean_uv_timer_stop(O *timer) { return stop_timer(timer, 74); }
O *lean_uv_timer_cancel(O *timer) { return stop_timer(timer, 75); }
O *lean_uv_ntop_v4(O *addr) { return lean_mk_string(ip_text(addr, false).c_str()); }
O *lean_uv_ntop_v6(O *addr) { return lean_mk_string(ip_text(addr, true).c_str()); }
static O *parse_ip(O *text, bool v6) {
    uint8_t bytes[16];
    const char *s = lean_string_cstr(text);
    if (strlen(s) != lean_string_size(text)-1 || inet_pton(v6 ? AF_INET6 : AF_INET, s, bytes) != 1) return lean_box(0);
    return some(address_array(bytes, v6));
}
O *lean_uv_pton_v4(O *s) { return parse_ip(s, false); }
O *lean_uv_pton_v6(O *s) { return parse_ip(s, true); }
O *lean_windows_get_next_transition(O *name, uint64_t timestamp, uint8_t initial) {
    // UTC is fixed and needs no OS timezone database. Std.Http.Server uses it
    // for Date headers; named Windows zones remain explicitly unsupported.
    if (strcmp(lean_string_cstr(name), "UTC") == 0 && lean_string_size(name) == 4) {
        if (!initial) return ok(lean_box(0));
        auto *zone = lean_alloc_ctor(0, 3, 1);
        lean_ctor_set(zone, 0, lean_box(0));
        lean_ctor_set(zone, 1, lean_mk_string("UTC"));
        lean_ctor_set(zone, 2, lean_mk_string("UTC"));
        lean_ctor_set_uint8(zone, 3 * sizeof(void*), 0);
        return ok(some(pair(lean_box_uint64(timestamp), zone)));
    }
    return lean_io_result_mk_error(lean_mk_io_error_unsupported_operation(0, lean_mk_string("Windows time zone transitions are not supported")));
}
}
