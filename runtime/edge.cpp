// Lasm edge profile (Phase 7): the event pump of the single-threaded,
// cooperative Lean runtime for edge isolates (Cloudflare Workers, Deno, Bun).
// There are no threads: the host calls lasm_edge_pump after it queues events
// (completed host operations, Lasm.JS promise settlements and calls of Lean
// functions); the pump resolves their Lean promises and runs queued Lean tasks
// until nothing is left. Lean code that blocks (Task.get, IO.wait, a blocking
// JavaScript await) runs other queued tasks first; when nothing is runnable,
// lasm_coop_block asks the host to wait for an event, which suspends the Wasm
// stack with JSPI. Only one Lean stack exists at a time: while it is
// suspended, events queue in the host and this stack processes them when it
// resumes, so suspended stacks never share the C shadow stack.
#include "node.hpp"
#include <lean/lean.h>
#include <cstdio>

extern "C" {
bool lasm_coop_run_one();
bool lasm_edge_poll_completions();
// Lasm.JS (library/c/lasm_js.c, edge build): its queued events. Weak: programs
// that do not import Lasm.JS do not link it.
__attribute__((weak)) bool lasm_js_edge_poll();
// Host: wait until an event is queued. 1 after waiting; 0 when this build or
// context cannot suspend (no JSPI, or inside a synchronous JavaScript callback).
int lasm_edge_wait(void);
// Host: whether lasm_edge_wait may be called now (a plain import).
int lasm_edge_can_wait(void);
// Host: whether the innermost pending host call has settled; then its result
// becomes the response (lasm_node_copy) and its signed length is returned.
int lasm_edge_call_ready(void);
LasmHostResult lasm_edge_take_call(void);
// Host: stops this instance with a message (throws; does not return).
[[noreturn]] void lasm_edge_fail(const char *message);

// Host: Lean's module initializers have finished (main's own code starts).
void lasm_edge_initialized(void);
void __real_lean_io_mark_end_initialization(void);
void __wrap_lean_io_mark_end_initialization(void) {
    __real_lean_io_mark_end_initialization();
    lasm_edge_initialized();
}

static bool poll_events() {
    bool any = lasm_edge_poll_completions();
    if (lasm_js_edge_poll) any = lasm_js_edge_poll() || any;
    return any;
}

void lasm_coop_block(const char *reason) {
    if (poll_events()) return;
    if (!lasm_edge_can_wait() || !lasm_edge_wait()) {
        static char message[512];
        snprintf(message, sizeof(message),
            "Lasm edge runtime: %s waits for an event that has not happened, and this Lean code cannot suspend "
            "(the build has no JSPI, or the code runs inside a synchronous JavaScript callback). "
            "Await in Async (Std.Async) instead of blocking.", reason);
        lasm_edge_fail(message);
    }
    poll_events();
}

// A host call returned LASM_EDGE_PENDING (node.hpp): its operation completes
// asynchronously. Like a blocking task wait, run other queued Lean work and
// host events until it settles; suspend (JSPI) when there is nothing to do.
LasmHostResult lasm_edge_await_call(void) {
    for (;;) {
        if (lasm_edge_call_ready()) return lasm_edge_take_call();
        if (lasm_coop_run_one()) continue;
        if (poll_events()) continue;
        if (!lasm_edge_can_wait() || !lasm_edge_wait())
            lasm_edge_fail("Lasm edge runtime: a blocking host operation must wait, and this Lean code cannot suspend "
                "(the build has no JSPI, or the code runs inside a synchronous JavaScript callback). Await in Async instead.");
    }
}

// IO.sleep (lean_dbg_sleep in the edge patch): a host timer; other Lean work runs meanwhile.
void lasm_coop_sleep(uint32_t ms) {
    lasm::Reply sleep(35, 0, ms);
}

__attribute__((used)) void lasm_edge_pump(void) {
    for (;;) {
        bool any = poll_events();
        if (lasm_coop_run_one()) continue;
        if (!any) break;
    }
}
}
