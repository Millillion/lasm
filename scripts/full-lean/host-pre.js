// This prelude is included only in full builds that link host-library.js.
if (!ENVIRONMENT_IS_PTHREAD) {
  var lasmFullHost;
  var lasmFullCompletions = [];
  var lasmFullCompletionWaiter;
  var lasmPreviousOnExit = Module["onExit"];
  Module["onExit"] = function (code) {
    lasmPreviousOnExit?.(code);
    // Emscripten records the exit status and lets the host event loop drain.
    // Native file workers keep these final flushes alive without blocking it.
    lasmFullHost?.then(host => host.flushStdIO()).catch(() => {});
  };
  Module.lasmFullHostRequest = async function (request) {
    const { port, signalPointer } = request;
    const signal = new Int32Array(wasmMemory.buffer, signalPointer, 1);
    try {
      if (!lasmFullHost) {
        const path = process.env.LASM_FULL_HOST_MODULE;
        if (!path) throw new Error('LASM_FULL_HOST_MODULE must point to the Lasm host module');
        lasmFullHost = import(path).then(m => m.createNodeRuntimeHost({
          args: process.argv.slice(2), appPath: process.env.LASM_FULL_APP_PATH ?? __filename, propagateCwd: true, processExit: true,
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
        host.whenReady(request.handle).then(() => {
          const completion = { error: false, bytes };
          if (lasmFullCompletionWaiter) {
            const resolve = lasmFullCompletionWaiter;
            lasmFullCompletionWaiter = undefined;
            resolve(completion);
          } else lasmFullCompletions.push(completion);
        });
        result = { error: false, bytes: new Uint8Array(0) };
      } else if (request.operation === 92) {
        result = lasmFullCompletions.length ? lasmFullCompletions.shift()
          : await new Promise(resolve => { lasmFullCompletionWaiter = resolve; });
      }
      else result = await host.request(...args);
      // Keep typed-array indices out of Deno's recursive MessagePort patcher.
      // Responses may alias retained host buffers, so preserve cloning here.
      port.postMessage(result.bytes === undefined ? result : {
        error: result.error, byteBuffer: result.bytes.buffer,
        byteOffset: result.bytes.byteOffset, byteLength: result.bytes.byteLength,
      });
    } catch (error) {
      if (error.name === 'LeanExit') {
        await lasmFullHost?.then(host => host.flushStdIO()).catch(() => {});
        process.exit(error.code);
      }
      port.postMessage({ failure: error.stack ?? String(error) });
    } finally {
      Atomics.store(signal, 0, 1);
      Atomics.notify(signal, 0);
      port.close();
    }
  };
}
