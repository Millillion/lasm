// This prelude is included only in full builds that link host-library.js.
if (!ENVIRONMENT_IS_PTHREAD) {
  var lasmFullHost;
  var lasmFullCompletions = [];
  var lasmFullCompletionWaiter;
  Module.lasmFullHostRequest = async function (request) {
    const { port, signalPointer } = request;
    const signal = new Int32Array(wasmMemory.buffer, signalPointer, 1);
    try {
      if (!lasmFullHost) {
        const path = process.env.LASM_FULL_HOST_MODULE;
        if (!path) throw new Error('LASM_FULL_HOST_MODULE must point to the Lasm host module');
        lasmFullHost = import(path).then(m => m.createNodeRuntimeHost({
          args: process.argv.slice(2), appPath: process.env.LASM_FULL_APP_PATH ?? __filename, propagateCwd: true,
        }));
      }
      const host = await lasmFullHost;
      let result;
      const args = [request.operation, request.handle, request.argument, request.bytes,
        { fiber: request.thread, nativeThreadId: request.nativeThreadId }];
      if (request.kind === 'start') result = { id: host.start(...args) };
      else if (request.kind === 'release') { host.release(request.handle); result = {}; }
      else if (request.operation === 91) {
        // Completion registration carries opaque Lean pointers. JavaScript only
        // queues their bytes; the dedicated Lean thread owns and resolves them.
        host.whenReady(request.handle).then(() => {
          const completion = { error: false, bytes: request.bytes };
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
      port.postMessage(result);
    } catch (error) {
      if (error.name === 'LeanExit') process.exit(error.code);
      port.postMessage({ failure: error.stack ?? String(error) });
    } finally {
      Atomics.store(signal, 0, 1);
      Atomics.notify(signal, 0);
      port.close();
    }
  };
}
