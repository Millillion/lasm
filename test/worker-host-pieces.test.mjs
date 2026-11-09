// In-process checks of the small pieces every host worker uses: the cwd
// preload decision, the removed-cwd fallback it installs, and worker stdio
// forwarding's lifetime controls.
import test from 'node:test';
import assert from 'node:assert/strict';
import { PassThrough } from 'node:stream';
import { EventEmitter } from 'node:events';
import { mkdtempSync, rmSync, chmodSync, realpathSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, dirname } from 'node:path';
import { createRequire } from 'node:module';
import { fileURLToPath } from 'node:url';
import { workerCwdPreload } from '../src/native-file-worker-pool.mjs';

const require = createRequire(import.meta.url);
const source = fileURLToPath(new URL('../src/', import.meta.url));

test('a removed cwd needs the preload; an ordinary one keeps it', t => {
  assert.deepEqual(workerCwdPreload('/p.cjs'), ['--require', '/p.cjs']);
  t.mock.method(process, 'cwd', () => { throw Object.assign(new Error('gone'), { code: 'ENOENT' }); });
  assert.deepEqual(workerCwdPreload('/p.cjs'), ['--require', '/p.cjs']);
});

test('an unsearchable cwd leaves the preload out', { skip: process.platform === 'win32' || process.getuid?.() === 0 }, t => {
  const base = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-preload-')));
  const previous = process.cwd();
  t.after(() => { process.chdir(previous); chmodSync(base, 0o700); rmSync(base, { recursive: true, force: true }); });
  process.chdir(base);
  chmodSync(base, 0o600);
  assert.deepEqual(workerCwdPreload('/p.cjs'), []);
});

test('the worker cwd fallback answers the module directory only for a removed cwd', t => {
  const original = process.cwd;
  t.after(() => { process.cwd = original; });
  let failure;
  process.cwd = () => { if (failure) throw failure; return '/actual'; };
  const path = require.resolve('../src/native-worker-cwd.cjs');
  delete require.cache[path];
  require(path);
  assert.equal(process.cwd(), '/actual');
  failure = Object.assign(new Error('removed'), { code: 'ENOENT' });
  assert.equal(process.cwd(), dirname(path));
  assert.equal(join(dirname(path), 'x'), join(source, 'x'));
  failure = Object.assign(new Error('denied'), { code: 'EACCES' });
  assert.throws(() => process.cwd(), { message: 'denied' });
});

function fakeWorker({ ref = true, started = false, omit } = {}) {
  const worker = new EventEmitter();
  worker.terminated = 0;
  worker.terminate = () => { worker.terminated++; return Promise.resolve(); };
  for (const name of ['stdout', 'stderr']) {
    const stream = new PassThrough();
    if (omit !== 'ref') stream[Symbol('kIncrementsPortRef')] = ref;
    if (omit !== 'started') stream[Symbol('kStartedReading')] = started;
    worker[name] = stream;
  }
  return worker;
}
const flag = (stream, name) => stream[Object.getOwnPropertySymbols(stream).find(key => key.description === name)];

test('worker diagnostics stop keeping the worker referenced and end with their streams', async () => {
  const forward = require('../src/worker-stdio.cjs');
  const worker = fakeWorker();
  forward(worker);
  for (const name of ['stdout', 'stderr']) {
    assert.equal(flag(worker[name], 'kIncrementsPortRef'), false);
    assert.equal(worker[name].listenerCount('data') + worker[name].listenerCount('readable') > 0, true, name);
    assert.equal(worker[name].listenerCount('end') >= 1, true);
  }
  worker.stdout.end(); worker.stderr.end();
  await new Promise(resolve => setImmediate(resolve));
  assert.equal(worker.terminated, 0);
});

test('an unexpected Node stream layout terminates the worker instead of guessing', () => {
  const forward = require('../src/worker-stdio.cjs');
  for (const options of [{ omit: 'ref' }, { omit: 'started' }, { ref: false }, { ref: 1 }, { started: true }, { started: 0 }]) {
    const worker = fakeWorker(options);
    assert.throws(() => forward(worker), { message: 'Unsupported Node Worker diagnostic-stream lifetime controls' }, JSON.stringify(options));
    assert.equal(worker.terminated, 1);
  }
});

test('a failing diagnostic sink is reported as a worker error', async () => {
  const forward = require('../src/worker-stdio.cjs');
  const worker = fakeWorker();
  forward(worker);
  const errors = [];
  worker.on('error', error => errors.push(error));
  // The sink is piped from the stream; an error on it is forwarded to the worker.
  const sink = worker.stdout._readableState.pipes[0];
  sink.emit('error', new Error('sink failed'));
  assert.deepEqual(errors.map(error => error.message), ['sink failed']);
});
