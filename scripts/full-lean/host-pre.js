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
  // Each worker isolate transfers its reply port once (see $lasmFullRPC).
  var lasmFullReplyPorts = new Map();
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
  Module.lasmFullHostRequest = async function (request) {
    const { signalPointer, sequence } = request;
    if (request.port) {
      lasmFullReplyPorts.set(request.channelId, request.port);
      // Never let a retained reply port keep the host process alive.
      request.port.unref?.();
      request.port.once('close', () => {
        if (lasmFullReplyPorts.get(request.channelId) === request.port) lasmFullReplyPorts.delete(request.channelId);
      });
    }
    const port = lasmFullReplyPorts.get(request.channelId);
    const reply = message => port?.postMessage({ ...message, sequence });
    const signal = new Int32Array(wasmMemory.buffer, signalPointer, 1);
    try {
      if (!lasmFullHost) {
        const path = process.env.LASM_FULL_HOST_MODULE;
        if (!path) throw new Error('LASM_FULL_HOST_MODULE must point to the Lasm host module');
        lasmFullHost = import(path).then(m => m.createNodeRuntimeHost({
          leanVersion: Module.lasmLeanVersion,
          args: process.argv.slice(2), appPath: process.env.LASM_FULL_APP_PATH ?? __filename, propagateCwd: true, processExit: true,
          applicationCommand: process.env.LASM_FULL_APP_PATH ? {
            executable: process.execPath,
            arguments: [],
          } : undefined,
        }));
      }
      const host = await lasmFullHost;
      let result;
      const bytes = new Uint8Array(request.byteBuffer, request.byteOffset, request.byteLength);
      const args = [request.operation, request.handle, request.argument, bytes,
        { fiber: request.thread, nativeThreadId: request.nativeThreadId }];
      if (request.kind === 'start') result = { id: host.start(...args) };
      else if (request.kind === 'release') { await host.releaseAsync(request.handle); result = {}; }
      else if (request.operation === 91) {
        // Completion registration carries opaque Lean pointers. JavaScript only
        // queues their bytes; the dedicated Lean thread owns and resolves them.
        host.whenReady(request.handle).then(() => lasmFullComplete({ error: false, bytes }));
        result = { error: false, bytes: new Uint8Array(0) };
      } else if (request.operation === 94) {
        // Start an asynchronous operation and register its completion in one
        // call. Header: promise, resource, kind (opaque, echoed), check,
        // operation, argument; then the operation's input. The completion
        // carries the result (failed flag, bytes), so no separate finish call.
        // With check, a synchronous startup failure is returned instead and
        // nothing is registered (the former start-check, op 93).
        const input = Buffer.from(bytes.buffer, bytes.byteOffset, bytes.byteLength);
        const header = Buffer.from(input.subarray(0, 24));
        const started = host.request(Number(input.readBigUInt64LE(32)), request.handle, input.readBigUInt64LE(40),
          input.subarray(48), args[4]);
        if (input.readBigUInt64LE(24) !== 0n && !started.then && started.error) result = started;
        else {
          Promise.resolve(started).then(done => lasmFullComplete({ error: false,
            bytes: Buffer.concat([header, Buffer.from([done.error ? 1 : 0, 0, 0, 0, 0, 0, 0, 0]), done.bytes]) }),
          error => error?.name === 'LeanExit' ? lasmFullExit(error)
            : lasmFullComplete({ failure: error?.stack ?? String(error) }));
          result = { error: false, bytes: new Uint8Array(0) };
        }
      } else if (request.operation === 92) {
        result = lasmFullCompletions.length ? lasmFullCompletions.shift()
          : await new Promise(resolve => { lasmFullCompletionWaiter = resolve; });
      }
      else result = await host.request(...args);
      // Responses may alias retained host buffers, so preserve cloning here.
      reply(result.bytes === undefined ? result : {
        error: result.error, byteBuffer: result.bytes.buffer,
        byteOffset: result.bytes.byteOffset, byteLength: result.bytes.byteLength,
      });
    } catch (error) {
      if (error.name === 'LeanExit') await lasmFullExit(error);
      reply({ failure: error.stack ?? String(error) });
    } finally {
      Atomics.store(signal, 0, 1);
      Atomics.notify(signal, 0);
    }
  };
}
