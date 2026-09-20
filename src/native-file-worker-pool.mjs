import { Worker } from 'node:worker_threads';

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
  state.worker.terminate().catch(() => {});
}
function failed(state, error) {
  const job = state.job;
  state.job = undefined;
  retire(state);
  job?.reject(error);
}
function create() {
  const worker = new Worker(new URL('./native-file-worker.mjs', import.meta.url), { name: 'lasm-file-io' });
  const state = { worker };
  worker.on('message', message => {
    const job = state.job;
    if (!job) return failed(state, new Error('Unexpected native file worker response'));
    state.job = undefined;
    if (idle.length < 2) {
      idle.push(state);
      worker.unref();
      state.timer = setTimeout(() => retire(state), 1000);
      state.timer.unref();
    } else retire(state);
    if (message.ok) job.resolve(message.value);
    else job.reject(Object.assign(new Error(message.error.message), message.error));
  });
  worker.on('error', error => failed(state, error));
  worker.on('exit', code => {
    if (!state.retired) failed(state, new Error(`Native file worker exited unexpectedly (${code})`));
  });
  return state;
}
export function callNativeFile(operation, args) {
  return new Promise((resolve, reject) => {
    let state;
    try {
      state = idle.pop() ?? create();
      clearTimeout(state.timer);
      state.worker.ref();
      state.job = { resolve, reject };
      state.worker.postMessage({ operation, args });
    } catch (error) {
      if (state) failed(state, error);
      else reject(error);
    }
  });
}
