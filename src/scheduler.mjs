// Internal cooperative scheduler. Every suspended invocation has its own C and
// Asyncify stacks; only one invocation executes Wasm instructions at a time.
export function createScheduler(getExports, mode) {
  const waiting = new Map();
  const tasks = new Map();
  const queue = [];
  const fibers = new Set();
  const calls = new Set();
  const drains = new Set();
  const pool = [];
  let current;
  let scheduled = false;
  let stopped;
  let nextId = 1;
  const stackBytes = 256 * 1024;
  const schedule = typeof setImmediate === 'function' ? setImmediate : callback => setTimeout(callback, 0);
  function exports() { return getExports(); }
  function enqueue(action) {
    if (stopped) return;
    queue.push(action);
    if (!scheduled) { scheduled = true; schedule(pump); }
  }
  function pump() {
    for (let i = 0; i < 32 && queue.length && !stopped; i++) queue.shift()();
    // Keep scheduled true while running: tasks spawned by this batch must not
    // create a chain of microtasks that starves Node's sockets and timers.
    if (queue.length && !stopped) schedule(pump);
    else scheduled = false;
    settleDrains();
  }
  function settleDrains() {
    if (queue.length || fibers.size) return;
    for (const waiter of drains) waiter.resolve();
    drains.clear();
  }
  function subscribe(task, callback) {
    let callbacks = waiting.get(task);
    if (!callbacks) waiting.set(task, callbacks = new Set());
    callbacks.add(callback);
    return () => {
      callbacks.delete(callback);
      if (!callbacks.size && waiting.get(task) === callbacks) waiting.delete(task);
    };
  }
  function allocate() {
    if (pool.length) return pool.pop();
    const e = exports();
    const pointer = e.lasm_alloc(stackBytes * 2 + 32);
    if (!pointer) throw new Error('Cannot allocate a Lean task stack');
    return { pointer, top: (pointer + stackBytes) & ~15, data: pointer + stackBytes + 16 };
  }
  function release(fiber) {
    if (fiber.task) exports().lasm_release_fiber_context(fiber.id);
    fibers.delete(fiber);
    if (pool.length < 8) pool.push(fiber.stack);
    else exports().lasm_free(fiber.stack.pointer);
  }
  function invoke(fiber, resume = false) {
    if (stopped) return;
    const e = exports();
    const originalStack = e.__stack_pointer.value;
    current = fiber;
    e.__stack_pointer.value = fiber.stack.top;
    e.lasm_stack_bounds(fiber.stack.pointer + 16, fiber.stack.top);
    try {
      if (resume) e.asyncify_start_rewind(fiber.stack.data);
      const value = fiber.fn(...fiber.args);
      if (mode === 'asyncify' && e.asyncify_get_state() === 1) {
        e.asyncify_stop_unwind();
        fiber.pending.then(value => {
          fiber.response = value;
          enqueue(() => invoke(fiber, true));
        }, error => fail(error));
      } else {
        e.__stack_pointer.value = originalStack;
        release(fiber);
        fiber.resolve(value);
      }
    } catch (error) { fail(error); }
    finally { e.__stack_pointer.value = originalStack; e.lasm_stack_bounds(0, 0); current = undefined; }
  }
  function fail(error) {
    if (stopped) return;
    stopped = error;
    queue.length = 0;
    waiting.clear();
    tasks.clear();
    for (const call of calls) call.reject(error);
    calls.clear();
    for (const waiter of drains) waiter.reject(error);
    drains.clear();
    fibers.clear();
  }
  function run(fn, args, task = 0, immediate = false) {
    if (stopped) return Promise.reject(stopped);
    return new Promise((resolve, reject) => {
      const call = { reject };
      calls.add(call);
      const done = value => { calls.delete(call); resolve(value); };
      const start = () => {
        try {
          const stack = allocate();
          const e = exports();
          const view = new DataView(e.memory.buffer);
          view.setUint32(stack.data, stack.data + 8, true);
          view.setUint32(stack.data + 4, stack.data + 8 + stackBytes, true);
          const fiber = { fn, args, task, stack, id: nextId++, resolve: done, reject };
          fibers.add(fiber);
          invoke(fiber);
        } catch (error) { reject(error); fail(error); }
      };
      if (immediate) start(); else enqueue(start);
    });
  }
  function suspend(start) {
    const e = exports();
    if (!current) throw new Error('This operation requires the asynchronous Lean runner');
    if (mode === 'asyncify' && e.asyncify_get_state() === 2) {
      e.asyncify_stop_rewind();
      return current.response;
    }
    const result = start();
    if (!result || typeof result.then !== 'function') return result;
    if (mode !== 'asyncify') throw new Error('Standard Lean async tasks require the Asyncify backend');
    current.pending = Promise.resolve(result);
    e.asyncify_start_unwind(current.stack.data);
    return 0;
  }
  const imports = {
    task_enqueue(task, dependency) {
      const registration = {};
      tasks.set(task, registration);
      const execute = () => {
        if (tasks.get(task) !== registration) return;
        tasks.delete(task);
        // Start in this queue action so a dropped pure task cannot be freed
        // between checking the registration and entering Wasm.
        run(exports().lasm_task_execute, [task], task, true).catch(fail);
      };
      if (dependency) registration.unsubscribe = subscribe(dependency, () => enqueue(execute));
      else enqueue(execute);
    },
    task_drop(task) { tasks.get(task)?.unsubscribe?.(); tasks.delete(task); },
    task_resolve(task) {
      const callbacks = waiting.get(task);
      waiting.delete(task);
      for (const callback of callbacks ?? []) callback();
    },
    task_wait(task) { return suspend(() => new Promise(resolve => subscribe(task, () => resolve(0)))); },
    task_wait_any(pointer, count) {
      return suspend(() => {
        const tasks = Array.from(new Uint32Array(exports().memory.buffer, pointer, count));
        if (!tasks.length) throw new Error('IO.waitAny requires at least one task');
        return new Promise(resolve => {
          const cleanups = tasks.map(task => subscribe(task, () => {
            for (const cleanup of cleanups) cleanup();
            resolve(task);
          }));
        });
      });
    },
    task_current() { return current?.task ?? 0; },
    fiber_current() { return current?.task ? current.id : 0; },
  };
  return { run, suspend, imports,
    // Native executable shutdown waits for runnable and running task workers.
    // A continuation registered only on an unresolved promise is not a worker.
    drain() {
      if (stopped) return Promise.reject(stopped);
      if (!queue.length && !fibers.size) return Promise.resolve();
      return new Promise((resolve, reject) => drains.add({ resolve, reject }));
    },
    get current() { return current; },
    get stopped() { return stopped; },
    stop(error = new Error('Lean runtime disposed')) { fail(error); },
    stats() { return { fibers: fibers.size, waitingTasks: waiting.size, queued: queue.length }; },
  };
}
