// Lasm edge profile (Phase 7, docs/EDGE.md): the controller between the
// JavaScript host and the single-threaded Lean runtime. There is one Lean
// stack. States: idle (no Lean code on the stack), running, suspended (JSPI:
// Lean waits in lasm_edge_wait or lasm_edge_await_call). Events (completed
// host operations, Lasm.JS events) are queued by the host, which calls
// notify(); an idle runtime is pumped at once, a running one takes them at
// its next poll, a suspended one is resumed.
//
// Without JSPI (an engine that has none, such as Safari, or an embedder that
// asks for the sync behaviour, Module.lasmEdgeJspi false: the browser default)
// the JSPI-linked program runs as a plain one. Its Wasm is the same; only the
// glue wraps the one suspending import and the promising exports, so inside
// this module those wrappers become identities. Blocking waits then stop the
// instance with a message, as in a link without JSPI.
var WebAssembly = (() => {
  const engine = globalThis.WebAssembly;
  if (typeof engine.Suspending === 'function' && Module.lasmEdgeJspi) return engine;
  return Object.assign(Object.create(engine), { Suspending: function Suspending(fn) { return fn; }, promising: fn => fn });
})();
Module.lasmEdge = (() => {
  const INT64_MIN = -(2n ** 63n);
  // Whether Lean may suspend: Asyncify builds (ASYNCIFY=1, whose Asyncify has
  // no JSPI makeAsyncFunction; it is defined after this pre-js runs, so it is
  // checked at call time), or JSPI where the engine has it and the embedder
  // allows it.
  const asyncify = () => typeof Asyncify !== 'undefined' && typeof Asyncify.makeAsyncFunction !== 'function';
  const engineJspi = WebAssembly === globalThis.WebAssembly && typeof WebAssembly.Suspending === 'function' && !!Module.lasmEdgeJspi;
  const suspends = () => engineJspi || asyncify();
  let host, response = null, waking = null;
  // Pending host calls, innermost last (Lean's waits nest on its one stack).
  const pendingCalls = [];
  let state = 'idle', syncDepth = 0, poisoned = null, scheduled = false;
  // A JavaScript exception or trap that unwinds Lean's stack (Wasm stack
  // exhaustion, a blocking wait that cannot suspend, an abort) leaves the
  // runtime in an unknown state: no C++ cleanup ran and the task queue may be
  // mid-update. The instance is then stopped: pending and later calls fail
  // with the cause, and the embedder starts a fresh instance.
  const listeners = [];
  function poison(failure, sp) {
    if (sp !== undefined) { try { stackRestore(sp); } catch { /* best effort */ } }
    if (!poisoned) {
      poisoned = failure instanceof Error ? failure : new Error(String(failure));
      for (const listener of listeners) { try { listener(poisoned); } catch { /* keep going */ } }
    }
    state = 'idle';
    return poisoned;
  }
  const encoder = new TextEncoder();
  const hostError = message => {
    const bytes = new Uint8Array(16 + message.length * 3), view = new DataView(bytes.buffer);
    view.setBigUint64(0, 18n, true);
    const { written } = encoder.encodeInto(message, bytes.subarray(16));
    return { error: true, bytes: bytes.subarray(0, 16 + written) };
  };
  const length = result => { const n = BigInt(result.bytes.length); return result.error ? -n - 1n : n; };
  const canSuspend = () => suspends() && state === 'running' && syncDepth === 0;
  // Runs one Lean entry: a promising export returns a promise, a plain one its value.
  function enter(run) {
    if (poisoned) throw poisoned;
    state = 'running';
    const sp = stackSave();
    const done = () => { state = 'idle'; if (!poisoned && host.pending()) controller.pump(); };
    let result;
    try { result = run(); } catch (failure) { throw poison(failure, sp); }
    // Asyncify builds: an export that unwound (Lean waits) returns at once;
    // its completion is Asyncify.whenDone().
    if (asyncify() && Asyncify.currData) result = Asyncify.whenDone();
    if (result && typeof result.then === 'function')
      return result.then(value => { done(); return value; }, failure => { throw poison(failure, sp); });
    done(); return result;
  }
  const controller = {
    get jspi() { return suspends(); },
    attach(h) { host = h; },
    onStop(listener) { listeners.push(listener); },
    get stopped() { return poisoned; },
    // Ends the instance without reporting a failure (an unmounted browser app):
    // later events and calls fail with the reason.
    close(reason = 'The Lean instance was closed') {
      if (!poisoned) poisoned = new Error(reason);
      state = 'idle';
    },
    fail(message) { throw new Error(message); },
    initialized() { host.initialized?.(); },
    canSuspend,
    call(operation, handle, argument, input, size) {
      const bytes = size ? HEAPU8.slice(input, input + size) : new Uint8Array(0);
      let result = host.request(operation, handle, argument, bytes);
      if (result && typeof result.then === 'function') {
        if (canSuspend()) {
          const entry = { done: false, result: null };
          entry.promise = result.then(value => { entry.result = value; }, failure => { entry.result = hostError(String(failure?.message ?? failure)); })
            .then(() => { entry.done = true; controller.notify(); });
          pendingCalls.push(entry);
          return INT64_MIN;
        }
        result.catch(() => {});
        // Lasm.JS blocking awaits fail as Lean IO errors; other runtime
        // operations (IO.sleep, file reads, …) cannot report it, so they stop
        // the instance with the reason.
        if (operation < 200 || operation > 219)
          throw new Error(`Lean host operation ${operation} must wait, and this Lean code cannot suspend (${suspends() ? 'inside a synchronous JavaScript callback' : 'this Lean instance runs without JSPI'})`);
        result = hostError(`Lean host operation ${operation} completes asynchronously and cannot be waited for here (${suspends() ? 'inside a synchronous JavaScript callback' : 'this Lean instance runs without JSPI'}); await it in Async instead`);
      }
      response = result;
      return length(result);
    },
    copy(output, size) {
      const r = response; response = null;
      if (!r || size !== r.bytes.length) throw new Error('Mismatched Lean host response size');
      if (size) HEAPU8.set(r.bytes, output);
    },
    release(handle) { host.release(handle); },
    callReady() { return pendingCalls.length > 0 && pendingCalls[pendingCalls.length - 1].done; },
    takeCall() { response = pendingCalls.pop().result; return length(response); },
    wait() {
      state = 'suspended';
      return new Promise(resolve => { waking = resolve; if (host.pending() || controller.callReady()) controller.wake(); })
        .then(() => { state = 'running'; return 1; });
    },
    wake() { const w = waking; waking = null; w?.(); },
    notify() {
      if (state === 'idle') controller.pump();
      else if (state === 'suspended' && waking) controller.wake();
    },
    pump() {
      if (state !== 'idle' || poisoned) return;
      try {
        const result = enter(() => _lasm_edge_pump());
        if (result && typeof result.then === 'function') result.catch(() => {});
      } catch { /* reported to onStop listeners */ }
    },
    main(args = []) { return enter(() => callMain(args)); },
    // A synchronous JavaScript → Lean call (Lasm.JS ofSyncFn): runs on this
    // stack; Lean cannot suspend inside it.
    syncCall(fn, payload) {
      if (poisoned) throw poisoned;
      const previous = state, sp = stackSave();
      if (state === 'idle') state = 'running';
      syncDepth++;
      const input = _malloc(Math.max(1, payload.length)), size = _malloc(8);
      HEAPU8.set(payload, input);
      let pointer;
      try { pointer = Number(_lasm_js_edge_sync(fn, input, payload.length, size)); }
      catch (failure) { syncDepth--; throw poison(failure, sp); }
      const result = HEAPU8.slice(pointer, pointer + Number(HEAPU32[size >> 2]));
      _free(input); _free(size);
      syncDepth--; state = previous;
      // Lean tasks the callback queued (IO.asTask, Async work, settled
      // promises) run when the JavaScript that called it has returned.
      if (previous === 'idle' && !scheduled) { scheduled = true; queueMicrotask(() => { scheduled = false; controller.pump(); }); }
      return result;
    },
  };
  return controller;
})();
