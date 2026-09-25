import { Worker } from 'node:worker_threads';
import { fileURLToPath } from 'node:url';
import forwardWorkerStdio from './worker-stdio.cjs';
import { encodeFileMessage, decodeFileMessage } from './native-file-message.mjs';
const DenoWebWorker = globalThis[Symbol.for('lasm.denoWebWorker')] ?? globalThis.Worker;

// Blocking stdio calls cannot use the shared N-API/libuv pool: enough reads
// would prevent their writers from ever starting. Lease an independent worker
// to each in-flight call, and retain at most two idle workers briefly. A busy
// worker never causes another operation to wait in a fixed-size worker queue.
const idle = [];
function removeIdle(state) {
  const i = idle.indexOf(state);
  if (i !== -1) idle.splice(i, 1);
  clearTimeout(state.timer);
}
function retire(state) {
  if (state.retired) return;
  state.retired = true;
  removeIdle(state);
  Promise.resolve(state.worker.terminate()).catch(() => {});
}
function failed(state, error) {
  const job = state.job;
  state.job = undefined;
  retire(state);
  job?.reject(error);
}
function create() {
  let removedDenoCwd = false;
  if (process.versions.deno) {
    try { Deno.cwd(); }
    catch (error) {
      if (error.name !== 'NotFound' && error.code !== 'ENOENT') throw error;
      removedDenoCwd = true;
    }
  }
  const worker = removedDenoCwd
    ? new DenoWebWorker(new URL('./native-file-worker-deno.mjs', import.meta.url), { type: 'module', name: 'lasm-file-io' })
    : new Worker(new URL('./native-file-worker.mjs', import.meta.url), {
      name: 'lasm-file-io',
      ...(!process.versions.deno && !process.versions.bun ? {
        stdout: true, stderr: true,
        execArgv: ['--require', fileURLToPath(new URL('./native-worker-cwd.cjs', import.meta.url))],
      } : {}),
    });
  if (!process.versions.deno && !process.versions.bun) forwardWorkerStdio(worker);
  const state = { worker };
  const received = encoded => {
    let message;
    try { message = decodeFileMessage(encoded); }
    catch (error) { failed(state, error); return; }
    const job = state.job;
    if (!job) return failed(state, new Error('Unexpected native file worker response'));
    state.job = undefined;
    if (!removedDenoCwd && idle.length < 2) {
      idle.push(state);
      worker.unref();
      state.timer = setTimeout(() => retire(state), 1000);
      state.timer.unref();
    } else retire(state);
    if (message.ok) job.resolve(message.value);
    else job.reject(Object.assign(new Error(message.error.message), message.error));
  };
  if (removedDenoCwd) {
    // Web Workers have no public unref method. Retire these exceptional workers
    // after each operation; keep the ordinary reusable pool on valid cwd paths.
    worker.addEventListener('message', event => received(event.data));
    worker.addEventListener('error', event => { event.preventDefault(); failed(state, new Error(event.message)); });
  } else {
    worker.on('message', received);
    worker.on('error', error => failed(state, error));
    worker.on('exit', code => {
      if (!state.retired) failed(state, new Error(`Native file worker exited unexpectedly (${code})`));
    });
  }
  return state;
}
export function callNativeFile(operation, args) {
  return new Promise((resolve, reject) => {
    let state;
    try {
      state = idle.pop() ?? create();
      clearTimeout(state.timer);
      state.worker.ref?.();
      state.job = { resolve, reject };
      // Requests are cloned, not transferred: callers retain their input bytes.
      state.worker.postMessage(encodeFileMessage({ operation, args }).message);
    } catch (error) {
      if (state) failed(state, error);
      else reject(error);
    }
  });
}
