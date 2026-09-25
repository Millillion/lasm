// Deno's Node worker bootstrap queries cwd before user code. A small private
// factory keeps its own Linux filesystem context rooted at /, so a new pthread
// can start from a removed or non-UTF-8 cwd. The application and its other
// threads retain their actual cwd. Used only for those exceptional cases.
const { Worker, MessageChannel, MessagePort, parentPort, workerData } = require('node:worker_threads');
const { EventEmitter } = require('node:events');
const { existsSync } = require('node:fs');
const { join } = require('node:path');
const failure = error => ({ name: error?.name ?? 'Error', message: error?.message ?? String(error), stack: error?.stack });

function ports(value, output = [], seen = new Set()) {
  if (!value || typeof value !== 'object' || seen.has(value)) return output;
  seen.add(value);
  if (value instanceof MessagePort || typeof globalThis.MessagePort === 'function' && value instanceof globalThis.MessagePort) output.push(value);
  else if (ArrayBuffer.isView(value) || value instanceof ArrayBuffer || value instanceof SharedArrayBuffer) return output;
  else if (value instanceof Map) for (const [key, item] of value) { ports(key, output, seen); ports(item, output, seen); }
  else if (value instanceof Set) for (const item of value) ports(item, output, seen);
  else for (const item of Object.values(value)) ports(item, output, seen);
  return output;
}

function runCwdFactory(workerData, parentPort) {
  const ready = new Int32Array(workerData.ready, 0, 2);
  try {
    const bundled = join(__dirname, 'native/node_modules/koffi/index.cjs');
    const ffi = existsSync(bundled) ? require(bundled) : require('koffi');
    const libc = ffi.load(null);
    const unshare = libc.func('int unshare(int flags)'), chdir = libc.func('int chdir(str path)');
    if (unshare(0x200 /* CLONE_FS */) < 0) throw new Error(`private cwd context: errno ${ffi.errno()}`);
    if (chdir('/') < 0) throw new Error(`private cwd root: errno ${ffi.errno()}`);
    parentPort.on('message', ({ filename, filenameIsUrl, options, port }) => {
      let worker;
      try { worker = new Worker(filenameIsUrl ? new URL(filename) : filename, options); }
      catch (error) { port.postMessage({ event: 'error', data: failure(error) }); port.postMessage({ event: 'exit', data: 1 }); port.close(); return; }
      worker.on('online', () => port.postMessage({ event: 'online', data: worker.threadId }));
      worker.on('message', data => port.postMessage({ event: 'message', data }, ports(data)));
      worker.on('error', data => port.postMessage({ event: 'error', data: failure(data) }));
      worker.on('exit', data => { port.postMessage({ event: 'exit', data }); port.close(); });
      const received = message => {
        try {
          if (message.command === 'post') worker.postMessage(message.data, message.transfer);
          else if (message.command === 'terminate') void worker.terminate();
        } catch (error) { port.postMessage({ event: 'error', data: failure(error) }); }
      };
      if (typeof port.on === 'function') port.on('message', received);
      else { port.addEventListener('message', event => received(event.data)); port.start(); }
    });
    Atomics.store(ready, 0, 1);
  } catch (error) {
    const bytes = Buffer.from(error.message).subarray(0, workerData.ready.byteLength - 8);
    new Uint8Array(workerData.ready, 8, bytes.length).set(bytes);
    Atomics.store(ready, 1, bytes.length);
    Atomics.store(ready, 0, -1);
  } finally { Atomics.notify(ready, 0); }
}
module.exports.runCwdFactory = runCwdFactory;
if (workerData?.lasmPrivateCwdFactory) runCwdFactory(workerData, parentPort);
else {
  module.exports.createCwdWorkerFactory = function () {
    if (process.platform !== 'linux') throw new Error('Private cwd worker factory is Linux-only');
    const buffer = new SharedArrayBuffer(4096), ready = new Int32Array(buffer, 0, 2);
    const active = new Set();
    let exceptional = false;
    if (process.versions.deno) {
      try { Deno.cwd(); }
      catch (error) {
        if (error.name !== 'NotFound' && error.name !== 'InvalidData' && error.code !== 'ENOENT') throw error;
        exceptional = true;
      }
    }
    const data = { lasmPrivateCwdFactory: true, ready: buffer };
    const WebWorker = globalThis[Symbol.for('lasm.denoWebWorker')] ?? globalThis.Worker;
    const factory = exceptional
      ? new WebWorker(require('node:url').pathToFileURL(join(__dirname, 'native-pthread-factory-deno.mjs')), { type: 'module' })
      : new Worker(__filename, { workerData: data });
    let disposed = false, disposal, factoryFailure;
    const failed = error => {
      if (factoryFailure) return;
      factoryFailure = error;
      disposed = true;
      const workers = [...active];
      // Settle every owner before invoking user listeners, which may throw.
      for (const worker of workers) worker.finish(1);
      disposal = Promise.resolve(factory.terminate()).then(() => undefined);
      for (const worker of workers) queueMicrotask(() => {
        try { worker.emit('error', error); } finally { worker.emit('exit', 1); }
      });
    };
    if (exceptional) {
      factory.addEventListener('error', event => { event.preventDefault(); failed(new Error(event.message)); });
      factory.postMessage(data);
    } else {
      factory.on('error', failed);
      factory.on('exit', code => {
        if (!disposed || active.size) failed(new Error(`Private cwd worker factory exited unexpectedly (${code})`));
      });
    }
    Atomics.wait(ready, 0, 0, 15_000);
    if (Atomics.load(ready, 0) !== 1) {
      void factory.terminate();
      throw new Error('Private cwd worker factory failed: ' + (Atomics.load(ready, 0) === -1
        ? Buffer.from(buffer, 8, Atomics.load(ready, 1)).toString() : 'startup timeout'));
    }
    factory.unref?.();
    return class CwdWorker extends EventEmitter {
      static dispose() {
        if (disposal) return disposal;
        disposed = true;
        disposal = Promise.all([...active].map(worker => worker.terminate()))
          .then(() => factory.terminate()).then(() => undefined);
        return disposal;
      }
      constructor(filename, options = {}) {
        super();
        if (disposed) throw factoryFailure ?? new Error('Private cwd worker factory is disposed');
        const { port1, port2 } = new MessageChannel();
        this.control = port1;
        this.resourceLimits = options.resourceLimits ?? {};
        this.exit = new Promise(resolve => { this.resolveExit = resolve; });
        active.add(this);
        port1.on('message', ({ event, data }) => {
          if (event === 'error') {
            const constructors = { Error, RangeError, TypeError, SyntaxError, ReferenceError, URIError, EvalError };
            data = Object.assign(new (constructors[data.name] ?? Error)(data.message), data);
          }
          if (event === 'online') this.threadId = data;
          if (event === 'exit') this.finish(data);
          this.emit(event, data);
        });
        try {
          factory.postMessage({ filename: filename instanceof URL ? filename.href : filename,
            filenameIsUrl: filename instanceof URL, options, port: port2 }, [port2]);
        } catch (error) {
          this.finish(1); port2.close(); throw error;
        }
      }
      finish(code) {
        if (this.finished) return;
        active.delete(this); this.finished = true; this.resolveExit(code); this.control.close();
      }
      postMessage(data, transfer = []) {
        transfer = Array.isArray(transfer) ? transfer : transfer.transferList ?? [];
        this.control.postMessage({ command: 'post', data, transfer }, transfer);
      }
      terminate() {
        if (!this.finished) this.control.postMessage({ command: 'terminate' });
        return this.exit;
      }
      ref() { this.control.ref(); return this; }
      unref() { this.control.unref(); return this; }
    };
  };
}
