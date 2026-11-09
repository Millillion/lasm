/*
 * Std.Async loops of steps that complete at once (issue #90, docs/JS_BINDINGS.md
 * "Async loops"). Linked into every program that imports Lasm's library, on
 * Node and in the edge, browser and WASI links (which keep this object).
 *
 * `Std.Async.BaseAsync.bind` runs a step that is already done (`MaybeTask.pure`:
 * a synchronous host call, an `IO` action, `pure`) by calling the continuation at
 * once, inside the bind. A loop of N such steps therefore nests N binds on the
 * WebAssembly stack, which the JavaScript engine bounds: on the single-threaded
 * runtime (Deno, Bun, workerd, browsers) a loop overflowed after about 1,900 to
 * 8,100 steps. Every bind outside Std's own module goes through
 * `bindAsyncTask`, which the link wraps (-Wl,--wrap, src/application-link.mjs
 * asyncLinkFlags). This wrapper counts the binds nested on the current thread;
 * past a limit it runs the continuation as if the step had been an awaited,
 * finished task (`.ofTask (Task.pure a)`): the continuation is queued as a
 * Lean task and the nested binds return, so it starts from a shallow stack.
 * The result, its order of effects and its errors are those of the direct call;
 * only where the rest of the loop runs differs (a queued task, as after any
 * await), every `limit` steps.
 *
 * Limits: on the single-threaded runtime 128 nested binds, a small part of the
 * smallest engine stack measured (workerd, about 3,700 binds). On Node, where
 * Lean runs on threads with large stacks (100,000 steps passed before this
 * change), 16,384, so a loop rarely pays for a queued task; inside a
 * synchronous callback never (its task waits cannot run a task that calls
 * JavaScript, library/c/lasm_js.c). The Node glue defines
 * lasm_js_sync_callback_active; the other links replace that glue, which is
 * how this object tells them apart.
 */
#include <lean/lean.h>
#include <stdint.h>

#ifdef __EMSCRIPTEN__
#define BIND l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg
#define WRAP3(prefix, name) prefix##name
#define WRAP2(prefix, name) WRAP3(prefix, name)

/* bindAsyncTask (prio : Task.Priority) (sync : Bool) (t : MaybeTask α) (f : α → BaseAsync β) : BaseAsync β,
   every argument owned (its IR, Lean 4.35.0). */
lean_object *WRAP2(__real_, BIND)(lean_object *prio, uint8_t sync, lean_object *t, lean_object *f);

/* Node's glue (library/c/lasm_js.c): nonzero on the thread running a synchronous callback. */
__attribute__((weak)) int lasm_js_sync_callback_active(void);

static _Thread_local uint32_t nested;

enum { single_thread_limit = 128, node_limit = 16384 };

static uint32_t limit(void) {
    if (!lasm_js_sync_callback_active) return single_thread_limit;
    return lasm_js_sync_callback_active() ? UINT32_MAX : node_limit;
}

lean_object *WRAP2(__wrap_, BIND)(lean_object *prio, uint8_t sync, lean_object *t, lean_object *f) {
    /* MaybeTask.ofTask: Std binds the task, nothing nests. */
    if (lean_obj_tag(t) != 0) return WRAP2(__real_, BIND)(prio, sync, t, f);
    if (nested >= single_thread_limit && nested >= limit()) {
        lean_object *value = lean_ctor_get(t, 0);
        lean_inc(value);
        lean_dec(t);
        lean_object *task = lean_alloc_ctor(1, 1, 0);
        lean_ctor_set(task, 0, lean_task_pure(value));
        /* Not `sync`: a synchronous bind of a finished task would run at once, nested. */
        return WRAP2(__real_, BIND)(prio, 0, task, f);
    }
    nested++;
    lean_object *result = WRAP2(__real_, BIND)(prio, sync, t, f);
    nested--;
    return result;
}
#endif
