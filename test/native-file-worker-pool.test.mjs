// The native file worker pool (src/native-file-worker-pool.mjs) with stand-in
// workers: leases, idle reuse and its bound, replies, and every way a worker
// can fail.
import test from 'node:test';
import assert from 'node:assert/strict';
import { registerHooks } from 'node:module';
import { EventEmitter } from 'node:events';
import { PassThrough } from 'node:stream';
import { fileURLToPath } from 'node:url';
import { encodeFileMessage, decodeFileMessage } from '../src/native-file-message.mjs';

// Stand-in Worker: each instance is handed to globalThis.__lasmPoolScript, which decides its replies.
class StandInWorker extends EventEmitter {
  constructor(url, options) {
    super();
    this.url = url; this.options = options; this.refs = 0; this.unrefs = 0; this.terminated = 0; this.posted = [];
    for (const name of ['stdout', 'stderr']) {
      const stream = new PassThrough();
      stream[Symbol('kIncrementsPortRef')] = true;
      stream[Symbol('kStartedReading')] = false;
      this[name] = stream;
    }
    globalThis.__lasmPoolWorkers.push(this);
    if (globalThis.__lasmPoolScript.construct) globalThis.__lasmPoolScript.construct(this);
  }
  postMessage(message, transfer) {
    this.posted.push({ message, transfer });
    globalThis.__lasmPoolScript.post(this, decodeFileMessage(message));
  }
  reply(value) { this.emit('message', encodeFileMessage(value).message); }
  ref() { this.refs++; }
  unref() { this.unrefs++; }
  terminate() { this.terminated++; return Promise.resolve(1); }
}
globalThis.__lasmStandInWorker = StandInWorker;
globalThis.__lasmPoolWorkers = [];
const fake = 'data:text/javascript,' + encodeURIComponent(`import * as real from 'node:worker_threads';
export const Worker = globalThis.__lasmStandInWorker; export const { MessageChannel, parentPort, workerData } = real; export default { ...real, Worker };`);
registerHooks({ resolve(specifier, context, next) {
  if (specifier === 'node:worker_threads' && context.parentURL?.includes('native-file-worker-pool.mjs')) return { url: fake, shortCircuit: true };
  return next(specifier, context);
} });
let instances = 0;
async function pool(script) {
  globalThis.__lasmPoolScript = script;
  globalThis.__lasmPoolWorkers = [];
  const module = await import(`../src/native-file-worker-pool.mjs?pool=${++instances}`);
  return { call: module.callNativeFile, workers: globalThis.__lasmPoolWorkers };
}
const tick = () => new Promise(resolve => setImmediate(resolve));
const echo = { post: (worker, { operation, args }) => setImmediate(() => worker.reply({ ok: true, value: { operation, args } })) };

test('a call leases a new file worker and resolves with its reply', async () => {
  const { call, workers } = await pool(echo);
  const input = Buffer.from([1, 2, 3]);
  assert.deepEqual(await call('read', [{ stream: 7n }, input]), { operation: 'read', args: [{ stream: 7n }, new Uint8Array([1, 2, 3])] });
  assert.equal(workers.length, 1);
  const [worker] = workers;
  assert.equal(fileURLToPath(worker.url), fileURLToPath(new URL('../src/native-file-worker.mjs', import.meta.url)));
  assert.equal(worker.options.name, 'lasm-file-io');
  assert.deepEqual([worker.options.stdout, worker.options.stderr], [true, true]);
  assert.deepEqual(worker.options.execArgv, ['--require', fileURLToPath(new URL('../src/native-worker-cwd.cjs', import.meta.url))]);
  // Requests are cloned: the caller keeps its bytes.
  assert.equal(worker.posted[0].transfer, undefined);
  assert.equal(input.length, 3);
  assert.equal(worker.refs, 1);
  assert.equal(worker.unrefs, 1);
  // Worker diagnostics are forwarded (and stop keeping the worker alive).
  assert.equal(worker.stdout[Object.getOwnPropertySymbols(worker.stdout).find(key => key.description === 'kIncrementsPortRef')], false);
});

test('an idle worker is reused; concurrent calls lease separate workers', async () => {
  const { call, workers } = await pool(echo);
  await call('flush', []);
  await call('flush', []);
  assert.equal(workers.length, 1);
  assert.equal(workers[0].refs, 2);
  await Promise.all([call('a', []), call('b', []), call('c', [])]);
  assert.equal(workers.length, 3);
  await Promise.all([call('a', []), call('b', []), call('c', [])]);
  assert.equal(workers.length, 3);
});

test('at most sixteen idle workers are kept; the rest are retired', async () => {
  const { call, workers } = await pool(echo);
  await Promise.all(Array.from({ length: 18 }, (_, i) => call('n', [i])));
  assert.equal(workers.length, 18);
  assert.equal(workers.filter(worker => worker.terminated).length, 2);
  assert.equal(workers.filter(worker => worker.unrefs).length, 16);
  await Promise.all(Array.from({ length: 16 }, (_, i) => call('n', [i])));
  assert.equal(workers.length, 18);
});

test('an error reply rejects with the worker\'s error fields', async () => {
  const { call, workers } = await pool({ post: worker => setImmediate(() => worker.reply({ ok: false,
    error: { message: 'No such file or directory', code: 'ENOENT', errno: 2, nativeMessage: true, errorOrigin: 'crt' } })) });
  await assert.rejects(call('open', ['/x', 0]), error => error instanceof Error && error.message === 'No such file or directory'
    && error.code === 'ENOENT' && error.errno === 2 && error.nativeMessage === true && error.errorOrigin === 'crt');
  // The worker itself is healthy and kept.
  assert.equal(workers[0].terminated, 0);
  await assert.rejects(call('open', ['/x', 0]));
  assert.equal(workers.length, 1);
});

test('a malformed reply rejects and retires the worker', async () => {
  const { call, workers } = await pool({ post: worker => setImmediate(() => worker.emit('message', { type: 'nonsense' })) });
  await assert.rejects(call('read', []), { message: 'Invalid native file worker message' });
  assert.equal(workers[0].terminated, 1);
  // A retired worker's later exit is expected, not a failure.
  workers[0].emit('exit', 0);
  await assert.rejects(call('read', []), { message: 'Invalid native file worker message' });
  assert.equal(workers.length, 2);
});

test('a reply without a pending call retires the worker', async () => {
  const { call, workers } = await pool(echo);
  await call('x', []);
  workers[0].reply({ ok: true, value: 'stray' });
  assert.equal(workers[0].terminated, 1);
  workers[0].emit('exit', 1);
  await call('x', []);
  assert.equal(workers.length, 2);
});

test('a worker error or an unexpected exit rejects the pending call', async () => {
  const failure = new Error('worker crashed');
  const { call, workers } = await pool({ post: worker => setImmediate(() => worker.emit('error', failure)) });
  await assert.rejects(call('read', []), failure);
  assert.equal(workers[0].terminated, 1);
  workers[0].emit('error', new Error('again'));
  assert.equal(workers[0].terminated, 1);
  const exiting = await pool({ post: worker => setImmediate(() => worker.emit('exit', 3)) });
  await assert.rejects(exiting.call('read', []), { message: 'Native file worker exited unexpectedly (3)' });
  // An idle worker that exits is dropped from the pool.
  const idle = await pool(echo);
  await idle.call('x', []);
  idle.workers[0].emit('exit', 9);
  await idle.call('x', []);
  assert.equal(idle.workers.length, 2);
  assert.equal(idle.workers[0].terminated, 1);
});

test('a worker that cannot be created or reached rejects the call', async () => {
  const unconstructed = await pool({ construct() { throw new Error('no worker'); }, post() {} });
  await assert.rejects(unconstructed.call('x', []), { message: 'no worker' });
  const unreachable = await pool({ post() { throw new Error('cannot post'); } });
  await assert.rejects(unreachable.call('x', []), { message: 'cannot post' });
  assert.equal(unreachable.workers[0].terminated, 1);
  await tick();
});
