// This prelude is included only in full builds that link host-library.js.
if (!ENVIRONMENT_IS_PTHREAD) {
  var lasmFullHost;
  var lasmFullCompletions = [];
  var lasmFullCompletionWaiter;
  var lasmPreviousOnExit = Module["onExit"];
  Module["onExit"] = function (code) {
    lasmPreviousOnExit?.(code);
    // Native process exit releases descriptors even when a Lean value remains
    // reachable from a background task. Emscripten lets the host loop drain;
    // leaving a TCP listener alive here can otherwise prevent the host from exiting.
    // Flush first, without blocking pipe readers, then close remaining handles.
    var disposeWorkers = () => Module.lasmDisposeCwdWorkers?.();
    if (!lasmFullHost) return disposeWorkers();
    return lasmFullHost.then(async host => {
      try { await host.flushStdIO(); }
      finally { host.close(); }
    }).catch(() => {}).finally(disposeWorkers);
  };
  // Completions go to the dedicated Lean completion thread's long poll (op 92).
  var lasmFullComplete = function (completion) {
    if (lasmFullCompletionWaiter) {
      const resolve = lasmFullCompletionWaiter;
      lasmFullCompletionWaiter = undefined;
      resolve(completion);
    } else lasmFullCompletions.push(completion);
  };
  var lasmFullExit = async function (error) {
    await lasmFullHost?.then(host => host.flushStdIO()).catch(() => {});
    process.exit(error.code);
  };
  var lasmFullHostValue;
  var lasmFullLoadHost = function () {
    if (!lasmFullHost) {
      const path = process.env.LASM_FULL_HOST_MODULE;
      if (!path) return Promise.reject(new Error('LASM_FULL_HOST_MODULE must point to the Lasm host module'));
      lasmFullHost = import(path).then(m => m.createNodeRuntimeHost({
        leanVersion: Module.lasmLeanVersion,
        args: process.argv.slice(2), appPath: process.env.LASM_FULL_APP_PATH ?? __filename, propagateCwd: true, processExit: true,
        // Lasm.JS synchronous callbacks: the Wasm memory and inline serving of
        // one thread's slot while the main thread waits in a JS callback.
        wasmMemory: () => wasmMemory, serveSync: pointer => lasmFullServeSync(pointer),
        // Lasm.JS: start the interop poller thread (library/c/lasm_js.c) when an
        // event waits and Lean makes no progress (host calls served) meanwhile.
        spawnPoller: () => Module._lasm_js_spawn_poller?.(), progress: () => lasmFullServed,
        applicationCommand: process.env.LASM_FULL_APP_PATH ? {
          executable: process.execPath,
          arguments: [],
        } : undefined,
      }));
    }
    return lasmFullHost.then(host => (lasmFullHostValue = host));
  };
  // One host call: returns its result synchronously when the operation is
  // synchronous, otherwise a promise. Results: { error, bytes }, {} (release),
  // or { failure } for an internal host defect.
  var lasmFullDispatch = function (host, kind, operation, handle, argument, bytes, context) {
    if (kind === 2) return { error: false, bytes: Buffer.from(new BigUint64Array([BigInt(host.start(operation, handle, argument, bytes, context))]).buffer) };
    if (kind === 1) return Promise.resolve(host.releaseAsync(handle)).then(() => ({}));
    if (operation === 91) {
      // Completion registration carries opaque Lean pointers. JavaScript only
      // queues their bytes; the dedicated Lean thread owns and resolves them.
      host.whenReady(handle).then(() => lasmFullComplete({ error: false, bytes }));
      return { error: false, bytes: new Uint8Array(0) };
    }
    if (operation === 94) {
      // Start an asynchronous operation and register its completion in one
      // call. Header: promise, resource, kind (opaque, echoed), check,
      // operation, argument; then the operation's input. The completion
      // carries the result (failed flag, bytes), so no separate finish call.
      // With check, a synchronous startup failure is returned instead and
      // nothing is registered (the former start-check, op 93).
      const input = Buffer.from(bytes.buffer, bytes.byteOffset, bytes.byteLength);
      const header = Buffer.from(input.subarray(0, 24));
      const started = host.request(Number(input.readBigUInt64LE(32)), handle, input.readBigUInt64LE(40),
        input.subarray(48), context);
      if (input.readBigUInt64LE(24) !== 0n && !started.then && started.error) return started;
      Promise.resolve(started).then(done => lasmFullComplete({ error: false,
        bytes: Buffer.concat([header, Buffer.from([done.error ? 1 : 0, 0, 0, 0, 0, 0, 0, 0]), done.bytes]) }),
      error => error?.name === 'LeanExit' ? lasmFullExit(error)
        : lasmFullComplete({ failure: error?.stack ?? String(error) }));
      return { error: false, bytes: new Uint8Array(0) };
    }
    if (operation === 92) {
      return lasmFullCompletions.length ? lasmFullCompletions.shift()
        : new Promise(resolve => { lasmFullCompletionWaiter = resolve; });
    }
    if (operation === 95) {
      // Every queued completion in one reply, in order: (u64 size, packet)
      // records. A host failure is delivered alone, after earlier packets.
      const batch = () => {
        const parts = [];
        while (lasmFullCompletions.length && parts.length < 512 && lasmFullCompletions[0].failure === undefined) {
          const { bytes } = lasmFullCompletions.shift();
          const size = Buffer.alloc(8);
          size.writeBigUInt64LE(BigInt(bytes.length));
          parts.push(size, bytes);
        }
        return parts.length ? { error: false, bytes: Buffer.concat(parts) } : lasmFullCompletions.shift();
      };
      if (lasmFullCompletions.length) return batch();
      return new Promise(resolve => { lasmFullCompletionWaiter = completion => {
        lasmFullCompletions.unshift(completion);
        resolve(batch());
      }; });
    }
    return host.request(operation, handle, argument, bytes, context);
  };
  // Shared-memory slots (layout in host-library.js $lasmFullRPC). Views are
  // rebuilt when memory growth replaces wasmMemory.buffer.
  var lasmFullMemory = { buffer: null, i32: null, view: null, u8: null };
  var lasmFullViews = function () {
    const buffer = wasmMemory.buffer;
    if (lasmFullMemory.buffer !== buffer) lasmFullMemory = { buffer, i32: new Int32Array(buffer),
      view: new DataView(buffer), u8: new Uint8Array(buffer) };
    return lasmFullMemory;
  };
  var lasmFullReply = function (slot, result) {
    const { i32, view, u8 } = lasmFullViews(), p = slot.pointer;
    let status = 0, bytes = result.bytes ?? new Uint8Array(0);
    if (result.failure !== undefined) { status = 2; bytes = Buffer.from(String(result.failure)); }
    else if (result.error) status = 1;
    view.setBigUint64(p + 64, BigInt(bytes.length), true);
    if (bytes.length > Number(view.getBigUint64(p + 56, true))) {
      // The calling thread grows its buffer and asks again (kind 3).
      slot.large = { status, bytes };
      status = 3;
    } else if (bytes.length) u8.set(bytes, Number(view.getBigUint64(p + 48, true)));
    view.setInt32(p + 20, status, true);
    slot.pending = undefined;
    Atomics.store(i32, (p + 4) / 4, 1);
    Atomics.notify(i32, (p + 4) / 4);
  };
  var lasmFullFail = async function (slot, error) {
    if (error?.name === 'LeanExit') await lasmFullExit(error);
    lasmFullReply(slot, { failure: error?.stack ?? String(error) });
  };
  // Serve one request. Undefined when it was answered synchronously,
  // otherwise a promise that settles after the reply.
  var lasmFullServed = 0;
  var lasmFullServeOne = function (slot) {
    lasmFullServed++;
    const { view, u8 } = lasmFullViews(), p = slot.pointer;
    const kind = view.getInt32(p + 8, true);
    if (kind === 3) {
      const large = slot.large;
      slot.large = undefined;
      return lasmFullReply(slot, large.status === 2 ? { failure: Buffer.from(large.bytes).toString() }
        : { error: large.status === 1, bytes: large.bytes });
    }
    const operation = view.getInt32(p + 12, true), handle = view.getUint32(p + 16, true);
    const argument = view.getBigUint64(p + 24, true);
    const input = Number(view.getBigUint64(p + 32, true)), length = Number(view.getBigUint64(p + 40, true));
    slot.pending = { kind, operation, since: Date.now() };
    // Copy: hosts and completion queues may retain request bytes.
    const bytes = length ? u8.slice(input, input + length) : new Uint8Array(0);
    const context = { fiber: Number(view.getBigUint64(p + 72, true)),
      nativeThreadId: view.getInt32(p + 88, true) ? view.getBigUint64(p + 80, true) : undefined };
    const run = host => {
      let result;
      try { result = lasmFullDispatch(host, kind, operation, handle, argument, bytes, context); }
      catch (error) { return lasmFullFail(slot, error); }
      if (!result?.then) return lasmFullReply(slot, result);
      return result.then(value => lasmFullReply(slot, value), error => lasmFullFail(slot, error));
    };
    return lasmFullHostValue ? run(lasmFullHostValue)
      : lasmFullLoadHost().then(run, error => lasmFullFail(slot, error));
  };
  var lasmFullServe = function (slot) {
    for (;;) {
      const { i32 } = lasmFullViews(), index = slot.pointer / 4;
      const sequence = Atomics.load(i32, index);
      if (sequence === slot.sequence) {
        const wait = Atomics.waitAsync(i32, index, sequence);
        if (wait.async) { wait.value.then(() => lasmFullServe(slot)); return; }
        continue;
      }
      slot.sequence = sequence;
      const pending = lasmFullServeOne(slot);
      if (pending) { pending.then(() => lasmFullServe(slot)); return; }
    }
  };
  // Serve one pending request of a slot now, on this thread, while the main
  // thread waits inside a synchronous Lasm.JS callback for the Lean thread that
  // owns the slot. Only synchronously completing operations can be answered:
  // an operation that returns a promise is answered with a failure (its result,
  // when it settles, is discarded), except writes, which are queued.
  var lasmFullServeSync = function (pointer) {
    const slot = lasmFullSlots.get(pointer);
    if (!slot || !lasmFullHostValue) return;
    const { i32, view } = lasmFullViews();
    const sequence = Atomics.load(i32, pointer / 4);
    if (sequence === slot.sequence) return;
    slot.sequence = sequence;
    const kind = view.getInt32(pointer + 8, true);
    if (kind === 3) { lasmFullServeOne(slot); return; }
    const operation = view.getInt32(pointer + 12, true), handle = view.getUint32(pointer + 16, true);
    const argument = view.getBigUint64(pointer + 24, true);
    const input = Number(view.getBigUint64(pointer + 32, true)), length = Number(view.getBigUint64(pointer + 40, true));
    const { u8 } = lasmFullViews();
    const bytes = length ? u8.slice(input, input + length) : new Uint8Array(0);
    const context = { fiber: Number(view.getBigUint64(pointer + 72, true)), synchronous: true };
    let result;
    try { result = lasmFullDispatch(lasmFullHostValue, kind, operation, handle, argument, bytes, context); }
    catch (error) { lasmFullReply(slot, { failure: error?.stack ?? String(error) }); return; }
    if (result?.then) {
      result.catch(() => {});
      // Writes and flushes (ops 3, 4) are queued in order on their stream;
      // report them as done so console output works in synchronous callbacks.
      if (kind === 0 && (operation === 3 || operation === 4)) { lasmFullReply(slot, { error: false, bytes: new Uint8Array(0) }); return; }
      lasmFullReply(slot, { error: true, bytes: Buffer.concat([Buffer.from(new BigUint64Array([18n, 0n]).buffer),
        Buffer.from(`Lean host operation ${operation} completes asynchronously and cannot run inside a synchronous JavaScript callback (Lasm.JS.Function.ofSyncFn); use an asynchronous callback (ofFn)`)]) });
      return;
    }
    lasmFullReply(slot, result);
  };
  var lasmFullSlots = new Map();
  // Diagnostics (scripts/ci/lasm-js-stress.mjs): every Lean thread's host slot
  // and the request it waits on, if any.
  globalThis[Symbol.for('lasm.full.slots')] = () => ({ served: lasmFullServed, completionsQueued: lasmFullCompletions.length,
    completionWaiter: !!lasmFullCompletionWaiter, slots: [...lasmFullSlots.values()].map(s => ({ pointer: s.pointer, sequence: s.sequence, pending: s.pending ?? null })) });
  // CMD_CALL_HANDLER from a Lean thread's first call at a nesting depth.
  Module.lasmFullHostSlot = function (pointer) {
    const slot = { pointer, sequence: 0 };
    lasmFullSlots.set(pointer, slot);
    lasmFullServe(slot);
  };
}
