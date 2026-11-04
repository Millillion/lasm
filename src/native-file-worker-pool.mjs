import { Worker } from 'node:worker_threads';
import { accessSync, constants } from 'node:fs';
import { fileURLToPath } from 'node:url';
import forwardWorkerStdio from './worker-stdio.cjs';
import { encodeFileMessage, decodeFileMessage } from './native-file-message.mjs';

// Blocking stdio calls cannot use the shared N-API/libuv pool: enough reads
// would prevent their writers from ever starting. Lease an independent worker
// to each in-flight call. A busy worker never causes another operation to wait
// in a fixed-size worker queue.
// Keep idle workers for the life of the host (unref'd, so they never keep it
// alive) instead of retiring them. Koffi 3.3.0 does not release a worker's FFI
// memory when the worker exits: every create/terminate cycle leaked about
// 50-100 KiB and one 2-4 MiB mapping. Std.Http reads /etc/localtime for each
// response's Date header, so the earlier policy (at most two idle workers,
// retired after 1 s) leaked about 1.3 KiB per request on Linux and macOS.
const maxIdle = 16;
const idle = [];
function removeIdle(state) {
  const i = idle.indexOf(state);
  if (i !== -1) idle.splice(i, 1);
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
/** The execArgv that preloads `preload` (native-worker-cwd.cjs) into a new
 * Worker, or none. Node resolves a `--require` preload from the working
 * directory and first reads the cwd's package.json: an existing cwd without
 * search permission fails that read (EACCES, ERR_INVALID_PACKAGE_CONFIG) and
 * the Worker never starts. The preload is needed only for a removed cwd, where
 * process.cwd() fails; an unsearchable one still reports its path. The same
 * rule is in scripts/full-lean/emscripten-pre.js for Lean's threads. */
export function workerCwdPreload(preload) {
  try { process.cwd(); } catch { return ['--require', preload]; }
  try { accessSync('.', constants.X_OK); } catch (error) { if (error?.code === 'EACCES' || error?.code === 'EPERM') return []; }
  return ['--require', preload];
}
function create() {
  const worker = new Worker(new URL('./native-file-worker.mjs', import.meta.url), {
    name: 'lasm-file-io', stdout: true, stderr: true,
    execArgv: workerCwdPreload(fileURLToPath(new URL('./native-worker-cwd.cjs', import.meta.url))),
  });
  forwardWorkerStdio(worker);
  const state = { worker };
  const received = encoded => {
    let message;
    try { message = decodeFileMessage(encoded); }
    catch (error) { failed(state, error); return; }
    const job = state.job;
    if (!job) return failed(state, new Error('Unexpected native file worker response'));
    state.job = undefined;
    if (idle.length < maxIdle) {
      idle.push(state);
      worker.unref();
    } else retire(state);
    if (message.ok) job.resolve(message.value);
    else job.reject(Object.assign(new Error(message.error.message), message.error));
  };
  worker.on('message', received);
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
