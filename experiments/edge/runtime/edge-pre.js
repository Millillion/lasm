// Lasm edge profile (Phase 7, docs/EDGE.md): the controller between the
// JavaScript host and the single-threaded Lean runtime. There is one Lean
// stack. States: idle (no Lean code on the stack), running, suspended (JSPI:
// Lean waits in lasm_edge_wait or lasm_edge_await_call). Events (completed
// host operations, Lasm.JS events) are queued by the host, which calls
// notify(); an idle runtime is pumped at once, a running one takes them at
// its next poll, a suspended one is resumed.
Module.lasmEdge = (() => {
  const INT64_MIN = -(2n ** 63n);
  const jspi = typeof WebAssembly.Suspending === 'function' && !!Module.lasmEdgeJspi;
  let host, response = null, pending = null, waking = null;
  let state = 'idle', syncDepth = 0;
  const encoder = new TextEncoder();
  const hostError = message => {
    const bytes = new Uint8Array(16 + message.length * 3), view = new DataView(bytes.buffer);
    view.setBigUint64(0, 18n, true);
    const { written } = encoder.encodeInto(message, bytes.subarray(16));
    return { error: true, bytes: bytes.subarray(0, 16 + written) };
  };
  const length = result => { const n = BigInt(result.bytes.length); return result.error ? -n - 1n : n; };
  const canSuspend = () => jspi && state === 'running' && syncDepth === 0;
  function finished(promise) {
    // A promising entry returns a promise; a plain one returns its value.
    const done = () => { state = 'idle'; if (host.pending()) controller.pump(); };
    if (promise && typeof promise.then === 'function') return promise.then(value => { done(); return value; }, failure => { state = 'idle'; throw failure; });
    done(); return promise;
  }
  const controller = {
    jspi,
    attach(h) { host = h; },
    initialized() { host.initialized?.(); },
    canSuspend,
    call(operation, handle, argument, input, size) {
      const bytes = size ? HEAPU8.slice(input, input + size) : new Uint8Array(0);
      let result = host.request(operation, handle, argument, bytes);
      if (result && typeof result.then === 'function') {
        if (canSuspend()) { pending = result; return INT64_MIN; }
        result.catch(() => {});
        result = hostError(`Lean host operation ${operation} completes asynchronously and cannot be waited for here (${jspi ? 'inside a synchronous JavaScript callback' : 'this edge build has no JSPI'}); await it in Async instead`);
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
    cannotAwait() { throw new Error('lasm_edge_await_call without JSPI'); },
    async awaitCall() {
      state = 'suspended';
      try { response = await pending; } finally { pending = null; state = 'running'; }
      return length(response);
    },
    wait() {
      state = 'suspended';
      return new Promise(resolve => { waking = resolve; if (host.pending()) controller.wake(); })
        .then(() => { state = 'running'; return 1; });
    },
    wake() { const w = waking; waking = null; w?.(); },
    notify() {
      if (state === 'idle') controller.pump();
      else if (state === 'suspended' && waking) controller.wake();
    },
    pump() {
      if (state !== 'idle') return;
      state = 'running';
      try { return finished(_lasm_edge_pump()); } catch (failure) { state = 'idle'; throw failure; }
    },
    main(args = []) {
      state = 'running';
      try { return finished(callMain(args)); } catch (failure) { state = 'idle'; throw failure; }
    },
    // A synchronous JavaScript → Lean call (Lasm.JS ofSyncFn): runs on this
    // stack; Lean cannot suspend inside it.
    syncCall(fn, payload) {
      const previous = state;
      if (state === 'idle') state = 'running';
      syncDepth++;
      const input = _malloc(Math.max(1, payload.length)), size = _malloc(8);
      try {
        HEAPU8.set(payload, input);
        const pointer = Number(_lasm_js_edge_sync(fn, input, payload.length, size));
        const n = Number(HEAPU32[size >> 2]);
        return HEAPU8.slice(pointer, pointer + n);
      } finally { _free(input); _free(size); syncDepth--; state = previous; }
    },
  };
  return controller;
})();
