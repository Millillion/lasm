// Included inside namespace lean in the pinned object.cpp. Tasks retain Lean's
// object representation; the JavaScript scheduler supplies cooperative execution.
extern "C" __attribute__((import_module("lasm"), import_name("task_enqueue")))
void lasm_task_enqueue(uint32_t task, uint32_t dependency);
extern "C" __attribute__((import_module("lasm"), import_name("task_resolve")))
void lasm_task_resolve(uint32_t task);
extern "C" __attribute__((import_module("lasm"), import_name("task_drop")))
void lasm_task_drop(uint32_t task);
extern "C" __attribute__((import_module("lasm"), import_name("task_wait")))
void lasm_task_wait(uint32_t task);
extern "C" __attribute__((import_module("lasm"), import_name("task_current")))
uint32_t lasm_task_current();
extern "C" __attribute__((import_module("lasm"), import_name("fiber_current")))
uint32_t lasm_fiber_current();
extern "C" __attribute__((import_module("lasm"), import_name("task_wait_any")))
uint32_t lasm_task_wait_any(const uint32_t *tasks, uint32_t count);

extern "C" void lasm_task_execute(lean_object *task);
// Synchronous dependencies execute inside the resolving Wasm call. Reentering
// Wasm from a JS import would corrupt Asyncify when a callback suspends.
static std::unordered_map<lean_task_object*, std::vector<lean_task_object*>> sync_dependents;
static std::unordered_map<lean_task_object*, lean_task_object*> sync_registered;
static std::unordered_map<uint32_t, lean_task_object*> active_tasks;
static lean_task_object *current_task() {
    auto it = active_tasks.find(lasm_fiber_current());
    return it == active_tasks.end() ? nullptr : it->second;
}

static uint32_t task_id(lean_task_object *t) { return (uint32_t)(uintptr_t)t; }
static lean_task_object *alloc_task(obj_arg value) {
    auto *t = (lean_task_object*)lean_alloc_small_object(sizeof(lean_task_object));
    lean_set_st_header((object*)t, LeanTask, 0);
    t->m_value = value;
    t->m_imp = nullptr;
    return t;
}
static lean_task_object *pending_task(obj_arg closure = nullptr, bool keep_alive = false, bool sync = false) {
    auto *t = alloc_task(nullptr);
    t->m_imp = (lean_task_imp*)calloc(1, sizeof(lean_task_imp));
    if (!t->m_imp) lean_internal_panic_out_of_memory();
    t->m_imp->m_closure = closure;
    t->m_imp->m_keep_alive = keep_alive;
    t->m_imp->m_prio = sync ? 2 : 0; // bit 0: executing, bit 1: synchronous
    return t;
}
static void resolve_task(lean_task_object *t, obj_arg value) {
    if (t->m_value) { lean_dec(value); return; }
    t->m_value = value;
    if (t->m_imp) { free(t->m_imp); t->m_imp = nullptr; }
    auto found = sync_dependents.find(t);
    if (found != sync_dependents.end()) {
        auto dependents = std::move(found->second);
        sync_dependents.erase(found);
        for (auto *next : dependents) {
            auto registration = sync_registered.find(next);
            if (registration == sync_registered.end() || registration->second != t) continue;
            sync_registered.erase(registration);
            lasm_task_execute((object*)next);
        }
    }
    lasm_task_resolve(task_id(t));
}
static void deactivate_task(lean_task_object *t) {
    lasm_task_drop(task_id(t));
    sync_registered.erase(t);
    sync_dependents.erase(t);
    if (t->m_imp && (t->m_imp->m_prio & 1)) {
        // A running pure task can lose its last external reference while it is
        // suspended. Keep its storage until that invocation finishes.
        t->m_imp->m_deleted = true;
        t->m_imp->m_canceled = true;
        return;
    }
    if (t->m_value) lean_dec(t->m_value);
    if (t->m_imp) {
        if (t->m_imp->m_closure) lean_dec(t->m_imp->m_closure);
        free(t->m_imp);
    }
    lean_free_small_object((object*)t);
}
static void enqueue_task(lean_task_object *t) {
    auto *dependency = t->m_imp->m_next_dep;
    if (t->m_imp->m_prio & 2) {
        if (dependency && !dependency->m_value) {
            sync_registered[t] = dependency;
            sync_dependents[dependency].push_back(t);
        } else if (!(t->m_imp->m_prio & 1)) lasm_task_execute((object*)t);
    } else {
        lasm_task_enqueue(task_id(t), dependency && !dependency->m_value ? task_id(dependency) : 0);
    }
}
static void schedule_task(lean_task_object *t, lean_task_object *dependency = nullptr) {
    // IO tasks must complete even if discarded. Pure tasks may be reclaimed
    // while waiting; task_drop removes their weak scheduler registration.
    if (t->m_imp->m_keep_alive) lean_inc_ref((object*)t);
    // In this cooperative port m_next_dep records this task's own dependency.
    // Its closure owns the corresponding reference; the scheduler is weak.
    t->m_imp->m_next_dep = dependency;
    // A running synchronous bind resumes after its current closure returns.
    if (!(t->m_imp->m_prio & 1) || !(t->m_imp->m_prio & 2)) enqueue_task(t);
}
extern "C" LEAN_EXPORT void lean_init_task_manager_using(unsigned) {}
extern "C" LEAN_EXPORT void lean_init_task_manager() {}
extern "C" LEAN_EXPORT void lean_finalize_task_manager() {}
scoped_task_manager::scoped_task_manager(unsigned) {}
scoped_task_manager::~scoped_task_manager() {}
extern "C" LEAN_EXPORT uint32 lean_internal_get_hardware_concurrency(obj_arg) { return 1; }
LEAN_EXPORT void (*g_lean_report_task_get_blocked_time)(std::chrono::nanoseconds) = nullptr;

extern "C" LEAN_EXPORT obj_res lean_task_pure(obj_arg value) { return (object*)alloc_task(value); }
extern "C" LEAN_EXPORT b_obj_res lean_task_get(b_obj_arg task) {
    auto *t = lean_to_task(task);
    if (!t->m_value) lasm_task_wait(task_id(t));
    lean_always_assert(t->m_value);
    return t->m_value;
}
extern "C" LEAN_EXPORT obj_res lean_task_spawn_core(obj_arg closure, unsigned, bool keep_alive) {
    auto *t = pending_task(closure, keep_alive);
    schedule_task(t);
    return (object*)t;
}
static obj_res task_map_fn(obj_arg f, obj_arg t, obj_arg) {
    return lean_apply_1(f, lean_task_get_own(t));
}
extern "C" LEAN_EXPORT obj_res lean_task_map_core(obj_arg f, obj_arg t, unsigned,
                                                 bool sync, bool keep_alive) {
    if (sync && lean_to_task(t)->m_value)
        return lean_task_pure(lean_apply_1(f, lean_task_get_own(t)));
    auto *result = pending_task(mk_closure_3_2(task_map_fn, f, t), keep_alive, sync);
    schedule_task(result, lean_to_task(t));
    return (object*)result;
}
static obj_res task_bind_result(obj_arg t, obj_arg) { return lean_task_get_own(t); }
static obj_res task_bind_fn(obj_arg t, obj_arg f, obj_arg) {
    auto *next = lean_apply_1(f, lean_task_get_own(t));
    if (lean_to_task(next)->m_value) return lean_task_get_own(next);
    auto *current = current_task();
    lean_always_assert(current && current->m_imp);
    auto *nested = lean_to_task(next);
    auto *imp = nested->m_imp;
    // A uniquely owned, not-yet-running nested task can continue in the current
    // task. This avoids one retained forwarding task per iteration of an Async
    // accept loop. Shared tasks and running tasks keep their original identity.
    if (imp && imp->m_closure && !(imp->m_prio & 1)
        && next->m_rc == (imp->m_keep_alive ? 2 : 1)
        && (current->m_imp->m_keep_alive || !imp->m_keep_alive)) {
        bool held = imp->m_keep_alive;
        auto *dependency = imp->m_next_dep;
        current->m_imp->m_closure = imp->m_closure;
        current->m_imp->m_canceled |= imp->m_canceled;
        imp->m_closure = nullptr;
        lasm_task_drop(task_id(nested));
        sync_registered.erase(nested);
        if (held) lean_dec_ref(next);
        lean_dec_ref(next);
        schedule_task(current, dependency);
        return nullptr;
    }
    current->m_imp->m_closure = mk_closure_2_1(task_bind_result, next);
    schedule_task(current, lean_to_task(next));
    return nullptr;
}
extern "C" LEAN_EXPORT obj_res lean_task_bind_core(obj_arg t, obj_arg f, unsigned,
                                                  bool sync, bool keep_alive) {
    if (sync && lean_to_task(t)->m_value) return lean_apply_1(f, lean_task_get_own(t));
    auto *result = pending_task(mk_closure_3_2(task_bind_fn, t, f), keep_alive, sync);
    schedule_task(result, lean_to_task(t));
    return (object*)result;
}
extern "C" __attribute__((export_name("lasm_task_execute")))
void lasm_task_execute(lean_object *task) {
    auto *t = lean_to_task(task);
    auto fiber = lasm_fiber_current();
    auto *previous = current_task();
    active_tasks[fiber] = t;
    bool keep_alive = t->m_imp->m_keep_alive;
    t->m_imp->m_next_dep = nullptr;
    t->m_imp->m_prio |= 1;
    auto *closure = t->m_imp->m_closure;
    t->m_imp->m_closure = nullptr;
    auto *value = lean_apply_1(closure, lean_box(0));
    t->m_imp->m_prio &= ~1u;
    if (previous) active_tasks[fiber] = previous;
    else active_tasks.erase(fiber);
    if (t->m_imp->m_deleted) {
        if (value) lean_dec(value);
        deactivate_task(t);
        return;
    }
    if (value) resolve_task(t, value);
    else if (t->m_imp->m_prio & 2) enqueue_task(t);
    if (keep_alive) lean_dec_ref(task);
}
extern "C" LEAN_EXPORT bool lean_io_check_canceled_core() {
    auto *t = current_task();
    return t && t->m_imp && t->m_imp->m_canceled;
}
extern "C" LEAN_EXPORT void lean_io_cancel_core(b_obj_arg t) {
    if (lean_to_task(t)->m_imp) lean_to_task(t)->m_imp->m_canceled = true;
}
extern "C" LEAN_EXPORT uint8_t lean_io_get_task_state_core(b_obj_arg t) {
    auto *task = lean_to_task(t);
    return task->m_value ? 2 : task->m_imp->m_closure ? 0 : 1;
}
extern "C" LEAN_EXPORT b_obj_res lean_io_wait_any_core(b_obj_arg list) {
    // Registering one aggregate wait avoids keeping a stack per candidate.
    std::vector<uint32_t> tasks;
    while (!lean_is_scalar(list)) {
        auto *t = lean_to_task(lean_ctor_get(list, 0));
        if (t->m_value) return (object*)t;
        tasks.push_back(task_id(t));
        list = lean_ctor_get(list, 1);
    }
    return (object*)(uintptr_t)lasm_task_wait_any(tasks.data(), tasks.size());
}
obj_res lean_promise_new() {
    auto *p = (lean_promise_object*)lean_alloc_small_object(sizeof(lean_promise_object));
    lean_set_st_header((object*)p, LeanPromise, 0);
    p->m_result = pending_task();
    return (object*)p;
}
void lean_promise_resolve(obj_arg value, b_obj_arg promise) {
    resolve_task(lean_to_promise(promise)->m_result, mk_option_some(value));
}
extern "C" LEAN_EXPORT obj_res lean_io_promise_new() { return lean_promise_new(); }
extern "C" LEAN_EXPORT obj_res lean_io_promise_resolve(obj_arg value, b_obj_arg promise) {
    lean_promise_resolve(value, promise); return box(0);
}
extern "C" LEAN_EXPORT obj_res lean_io_promise_result_opt(b_obj_arg promise) {
    auto *t = (object*)lean_to_promise(promise)->m_result;
    lean_inc_ref(t); return t;
}
static void deactivate_promise(lean_promise_object *promise) {
    resolve_task(promise->m_result, mk_option_none());
    lean_dec_ref((object*)promise->m_result);
    lean_free_small_object((object*)promise);
}
