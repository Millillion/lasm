#include "node.hpp"
#include "runtime/object.h"
#include <arpa/inet.h>
#ifdef LASM_FULL_NATIVE_THREADS
#include "runtime/thread.h"
#include <mutex>
#include <condition_variable>
#endif

extern "C" LASM_HOST_IMPORT("node_start")
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
O *socket_address_bytes(const uint8_t *data, size_t size) {
    if (size < 16) __builtin_trap();
    uint64_t family, port;
    memcpy(&family, data, 8); memcpy(&port, data + 8, 8);
    bool v6 = family == 6;
    std::string text((char*)data+16, size-16);
    uint8_t bytes[16];
    if (inet_pton(v6 ? AF_INET6 : AF_INET, text.c_str(), bytes) != 1) __builtin_trap();
    auto *address = lean_alloc_ctor(0, 1, 2);
    lean_ctor_set(address, 0, address_array(bytes, v6));
    lean_ctor_set_uint16(address, sizeof(void*), port);
    auto *outer = lean_alloc_ctor(v6 ? 1 : 0, 1, 0); lean_ctor_set(outer, 0, address); return outer;
}
O *socket_address(const Reply &r) { return socket_address_bytes(r.bytes.data(), r.bytes.size()); }
// response kind: Unit=0, socket=1, optional bytes=2, Bool=3, timer Unit=4,
// datagram=5, IP addresses=6, host/service names=7, bytes=8, signal=9.
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
            if (k == 5) {
                auto address_size = r.number();
                if (address_size > r.bytes.size() - 8) __builtin_trap();
                auto offset = 8 + address_size;
                auto count = r.bytes.size() - offset;
                auto *data = lean_alloc_sarray(1, count, count);
                if (count) memcpy(lean_sarray_cptr(data), r.bytes.data() + offset, count);
                value = pair(data, address_size ? some(socket_address_bytes(r.bytes.data() + 8, address_size)) : lean_box(0));
            }
            if (k == 6) {
                if (r.bytes.size() % 17) __builtin_trap();
                value = lean_mk_empty_array();
                for (size_t offset = 0; offset < r.bytes.size(); offset += 17) {
                    bool v6 = r.bytes[offset] == 6;
                    auto *ip = lean_alloc_ctor(v6 ? 1 : 0, 1, 0);
                    lean_ctor_set(ip, 0, address_array(r.bytes.data() + offset + 1, v6));
                    value = lean_array_push(value, ip);
                }
            }
            if (k == 7) {
                auto *data = (const char*)r.bytes.data();
                auto *separator = (const char*)memchr(data, 0, r.bytes.size());
                if (!separator) __builtin_trap();
                value = pair(lean_mk_string_from_bytes(data, separator - data), r.string(separator - data + 1));
            }
            if (k == 8) value = r.array();
            if (k == 9) value = lean_box(r.number()); // IO.Promise Int
            if (k != 4 && k != 9) value = except(false, value);
        }
        lean::lean_promise_resolve(value, promise);
    }
    lean_dec(promise); lean_dec(resource);
    return lean_box(0);
}
#ifdef LASM_FULL_NATIVE_THREADS
// Native libuv completes promises outside Lean's task pool. Preserve that
// property: pending socket reads must never occupy all ordinary Lean workers.
void ensure_completion_thread() {
    static std::once_flag initialized;
    std::call_once(initialized, [] {
        std::mutex mutex;
        std::condition_variable ready;
        bool started = false;
        lean::lthread worker([&] {
            // Load the host and complete worker startup before Lean application
            // timers begin. Native Lean also starts its UV loop at initialization.
            Reply startup(23);
            {
                std::lock_guard<std::mutex> guard(mutex);
                started = true; ready.notify_one();
            }
            for (;;) {
                Reply completion(92);
                if (completion.failed || completion.bytes.size() != 4 * sizeof(uint64_t)) {
                    lean_internal_panic("Invalid asynchronous completion packet");
                    __builtin_trap();
                }
                auto *promise = reinterpret_cast<O *>(completion.number());
                auto *resource = reinterpret_cast<O *>(completion.number(8));
                lean_dec(finish_request(promise, resource, lean_box(completion.number(16)),
                    lean_box(completion.number(24)), lean_box(0)));
            }
        }); // lthread detaches; Emscripten terminates it with the process runtime.
        std::unique_lock<std::mutex> lock(mutex);
        ready.wait(lock, [&] { return started; });
    });
}
#endif
O *start_request(uint32_t op, O *resource, uint64_t arg, const void *data, size_t size, unsigned kind) {
    auto id = lasm_node_start(op, lean_is_scalar(resource) ? 0 : handle_id(resource), arg, (const uint8_t*)data, size);
    auto *promise = lean::lean_promise_new();
    lean_inc(promise); lean_inc(resource);
#ifdef LASM_FULL_NATIVE_THREADS
    lean_mark_mt(promise); lean_mark_mt(resource);
    ensure_completion_thread();
    uint64_t packet[] = {reinterpret_cast<uintptr_t>(promise), reinterpret_cast<uintptr_t>(resource), id, kind};
    Reply registered(91, id, 0, packet, sizeof(packet));
    if (registered.failed) { lean_internal_panic("Cannot register asynchronous completion"); __builtin_trap(); }
#else
    auto *closure = lean_alloc_closure((void*)finish_request, 5, 4);
    lean_closure_set(closure, 0, promise); lean_closure_set(closure, 1, resource);
    lean_closure_set(closure, 2, lean_box(id)); lean_closure_set(closure, 3, lean_box(kind));
    lean_dec(lean_task_spawn_core(closure, 0, true));
#endif
    return promise;
}
O *unit_call(uint32_t op, O *h, uint64_t arg = 0) { return Reply(op, handle_id(h), arg).result(); }
O *lock_call(uint32_t op, O *h, uint64_t arg = 0) {
    auto r = Reply(op, handle_id(h), arg);
    if (r.failed) { lean_internal_panic("Invalid synchronization operation"); __builtin_trap(); }
    return lean_box(0);
}
struct Timer {
    uint32_t id; uint64_t generation = 0; O *promise = nullptr; O *handle;
#ifdef LASM_FULL_NATIVE_THREADS
    std::mutex mutex;
#endif
};
void timer_finalize(void *ptr) { auto *t = (Timer*)ptr; if (t->promise) lean_dec(t->promise); lean_dec(t->handle); delete t; }
void timer_foreach(void *ptr, O *fn) {
    auto *t = (Timer*)ptr;
#ifdef LASM_FULL_NATIVE_THREADS
    std::lock_guard<std::mutex> guard(t->mutex);
#endif
    if (t->promise) { lean_inc(fn); lean_inc(t->promise); lean_dec(lean_apply_1(fn, t->promise)); }
}
}
extern "C" {
O *lean_uv_interface_addresses() {
    Reply r(144);
    if (r.failed) return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(22, lean_mk_string("failed to get interface addresses")));
    auto *array = lean_mk_empty_array();
    size_t offset = 8;
    for (uint64_t i = 0, count = r.number(); i < count; i++) {
        auto length = r.number(offset); offset += 8;
        if (offset > r.bytes.size() || length > r.bytes.size() - offset || r.bytes.size() - offset - length < 41) __builtin_trap();
        auto *record = lean_alloc_ctor(0, 4, 1);
        lean_ctor_set(record, 0, lean_mk_string_from_bytes((const char*)r.bytes.data() + offset, length)); offset += length;
        auto *mac = lean_mk_empty_array();
        for (unsigned j = 0; j < 6; j++) mac = lean_array_push(mac, lean_box(r.bytes[offset++]));
        lean_ctor_set(record, 1, mac);
        lean_ctor_set_uint8(record, 4 * sizeof(void*), r.bytes[offset++]);
        for (unsigned j = 2; j < 4; j++) {
            bool v6 = r.bytes[offset++] == 6;
            auto *ip = lean_alloc_ctor(v6 ? 1 : 0, 1, 0);
            lean_ctor_set(ip, 0, address_array(r.bytes.data() + offset, v6)); offset += 16;
            lean_ctor_set(record, j, ip);
        }
        array = lean_array_push(array, record);
    }
    return ok(array);
}
#ifdef LASM_FULL_NATIVE_THREADS
void initialize_libuv() { ensure_completion_thread(); }
#endif
#ifndef LASM_FULL_NATIVE_THREADS
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
#endif
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
O *lean_uv_udp_new() { return ok(wrap_handle(Reply(100).number())); }
O *lean_uv_udp_bind(O *socket, O *addr) {
    auto bytes = address_bytes(addr); return Reply(101, handle_id(socket), 0, bytes.data(), bytes.size()).result();
}
O *lean_uv_udp_connect(O *socket, O *addr) {
    auto bytes = address_bytes(addr); return Reply(102, handle_id(socket), 0, bytes.data(), bytes.size()).result();
}
O *lean_uv_udp_send(O *socket, O *data, O *addr) {
    auto address = lean_is_scalar(addr) ? std::vector<uint8_t>() : address_bytes(lean_ctor_get(addr, 0));
    uint64_t address_size = address.size();
    std::vector<uint8_t> bytes(8);
    memcpy(bytes.data(), &address_size, 8);
    bytes.insert(bytes.end(), address.begin(), address.end());
    auto count = lean_array_size(data);
    for (size_t i = 0; i < count; i++) {
        auto *part = lean_array_uget(data, i);
        bytes.insert(bytes.end(), lean_sarray_cptr(part), lean_sarray_cptr(part) + lean_sarray_size(part));
    }
    auto *promise = start_request(103, socket, count, bytes.data(), bytes.size(), 0);
    lean_dec(data); return ok(promise);
}
O *lean_uv_udp_recv(O *socket, uint64_t size) { return ok(start_request(104, socket, size, nullptr, 0, 5)); }
O *lean_uv_udp_wait_readable(O *socket) { return ok(start_request(105, socket, 0, nullptr, 0, 0)); }
O *lean_uv_udp_cancel_recv(O *socket) { return unit_call(106, socket); }
O *lean_uv_udp_getpeername(O *socket) { auto r = Reply(107, handle_id(socket)); return r.failed ? r.result() : ok(socket_address(r)); }
O *lean_uv_udp_getsockname(O *socket) { auto r = Reply(108, handle_id(socket)); return r.failed ? r.result() : ok(socket_address(r)); }
O *lean_uv_udp_set_broadcast(O *socket, uint8_t enabled) { return unit_call(109, socket, enabled); }
O *lean_uv_udp_set_multicast_loop(O *socket, uint8_t enabled) { return unit_call(110, socket, enabled); }
O *lean_uv_udp_set_multicast_ttl(O *socket, uint32_t ttl) { return unit_call(111, socket, ttl); }
O *lean_uv_udp_set_membership(O *socket, O *group, O *interface, uint8_t membership) {
    auto text = ip_text(lean_ctor_get(group, 0), lean_obj_tag(group) == 1);
    text.push_back('\0');
    if (!lean_is_scalar(interface)) {
        auto *ip = lean_ctor_get(interface, 0);
        text += ip_text(lean_ctor_get(ip, 0), lean_obj_tag(ip) == 1);
    }
    return Reply(112, handle_id(socket), membership, text.data(), text.size()).result();
}
O *lean_uv_udp_set_multicast_interface(O *socket, O *interface) {
    auto text = ip_text(lean_ctor_get(interface, 0), lean_obj_tag(interface) == 1);
    return Reply(113, handle_id(socket), 0, text.data(), text.size()).result();
}
O *lean_uv_udp_set_ttl(O *socket, uint32_t ttl) { return unit_call(114, socket, ttl); }
O *lean_uv_dns_get_info(O *name, O *service, uint8_t family) {
    auto safe = [](O *value) {
        auto *s = lean_string_cstr(value);
        for (size_t i = 0; i < lean_string_size(value) - 1; i++) {
            unsigned char c = s[i];
            if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
                  (c >= '0' && c <= '9') || (c && strchr("-_.:/+~@=,%", c)))) return false;
        }
        return true;
    };
    if (!safe(name)) return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(22, lean_mk_string("name is not ASCII")));
    if (!safe(service)) return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(22, lean_mk_string("service is not ASCII")));
    std::string query(lean_string_cstr(name), lean_string_size(name));
    query.append(lean_string_cstr(service), lean_string_size(service) - 1);
    return ok(start_request(115, lean_box(0), family, query.data(), query.size(), 6));
}
O *lean_uv_dns_get_name(O *address) {
    auto bytes = address_bytes(address);
    return ok(start_request(116, lean_box(0), 0, bytes.data(), bytes.size(), 7));
}
O *lean_uv_random(uint64_t size) { return ok(start_request(143, lean_box(0), size, nullptr, 0, 8)); }
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
#ifdef LASM_FULL_NATIVE_THREADS
    std::lock_guard<std::mutex> guard(t->mutex);
#endif
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
#ifdef LASM_FULL_NATIVE_THREADS
    std::lock_guard<std::mutex> guard(t->mutex);
#endif
    auto r = Reply(op, t->id);
    if (!r.failed && r.number() && t->promise) { lean_dec(t->promise); t->promise = nullptr; }
    return r.result();
}
O *lean_uv_timer_stop(O *timer) { return stop_timer(timer, 74); }
O *lean_uv_timer_cancel(O *timer) { return stop_timer(timer, 75); }
O *lean_uv_signal_mk(uint32_t signum, uint8_t repeating) {
    auto r = Reply(160, signum, repeating); if (r.failed) return r.result();
    auto id = (uint32_t)r.number();
    auto *state = new Timer{id, 0, nullptr, wrap_handle(id)};
    static auto *cls = lean_register_external_class(timer_finalize, timer_foreach);
    return ok(lean_alloc_external(cls, state));
}
O *lean_uv_signal_next(O *signal) {
    auto *state = (Timer*)lean_get_external_data(signal);
#ifdef LASM_FULL_NATIVE_THREADS
    std::lock_guard<std::mutex> guard(state->mutex);
#endif
    auto r = Reply(161, state->id); if (r.failed) return r.result();
    auto generation = r.number();
    if (!state->promise || generation != state->generation) {
        if (state->promise) lean_dec(state->promise);
        state->promise = start_request(162, state->handle, generation, nullptr, 0, 9);
        state->generation = generation;
    }
    lean_inc(state->promise); return ok(state->promise);
}
O *lean_uv_signal_stop(O *signal) { return stop_timer(signal, 163); }
O *lean_uv_signal_cancel(O *signal) { return stop_timer(signal, 164); }
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
