// `lasm dev`'s build service (src/dev-build-service.mjs) with stand-in build
// workers: requests and replies are matched by id, progress and log messages
// reach their own build, a crashed worker fails only its own builds and is
// replaced, slots keep their warm worker, and unref'd workers do not keep the
// process alive.
import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { mkdtempSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { createBuildService } from '../src/dev-build-service.mjs';

const directory = mkdtempSync(join(tmpdir(), 'lasm-build-service-'));
function worker(name, source) {
  const file = join(directory, name + '.mjs');
  writeFileSync(file, `import { parentPort, threadId } from 'node:worker_threads';\n${source}\n`);
  return pathToFileURL(file);
}
// Replies to each request as told by its options: { delay, fail, crash, exit, progress, log, foreign }.
const scripted = worker('scripted', `
let builds = 0;
parentPort.on('message', ({ id, file, options = {}, target }) => {
  builds++;
  if (options.crash) throw new Error('worker crashed');
  if (options.exit !== undefined) process.exit(options.exit);
  if (options.foreign) parentPort.postMessage({ id: 9999, type: 'result', result: 'not yours' });
  for (const event of options.progress ?? []) parentPort.postMessage({ id, type: 'progress', event });
  for (const text of options.log ?? []) parentPort.postMessage({ id, type: 'log', text });
  setTimeout(() => {
    if (options.fail) parentPort.postMessage({ id, type: 'failure', error: { name: 'BuildError', message: options.fail, code: 'ELEAN', stderr: 'details' } });
    else if (!options.hang) parentPort.postMessage({ id, type: 'result', result: { file, target, threadId, builds } });
  }, options.delay ?? 0);
});`);

test('a build resolves with its result; progress and log go to that build only', async () => {
  const service = createBuildService({ workerUrl: scripted });
  try {
    const seen = { a: [], b: [] };
    const a = service.build('A.lean', { delay: 30, progress: [{ stage: 'one' }, { stage: 'two' }], log: ['a log'] },
      { target: 'node', onProgress: e => seen.a.push(['progress', e]), onLog: t => seen.a.push(['log', t]) });
    const b = service.build('B.lean', { progress: [{ stage: 'b' }] }, { target: 'browser', onProgress: e => seen.b.push(e.stage) });
    // Replies arrive out of order (B first); each reaches its own promise.
    const [ra, rb] = await Promise.all([a, b]);
    assert.deepEqual([ra.file, ra.target, rb.file, rb.target], ['A.lean', 'node', 'B.lean', 'browser']);
    assert.equal(ra.threadId, rb.threadId, 'one slot, one worker');
    assert.deepEqual(seen.a, [['progress', { stage: 'one' }], ['progress', { stage: 'two' }], ['log', 'a log']]);
    assert.deepEqual(seen.b, ['b']);
    // Builds without callbacks still work, and replies for unknown ids are ignored.
    const c = await service.build('C.lean', { progress: [{ stage: 'x' }], log: ['y'], foreign: true });
    assert.equal(c.file, 'C.lean');
    assert.equal(c.builds, 3, 'the warm worker is reused');
  } finally { await service.close(); }
});

test('a failed build rejects with the worker error and its fields; the worker stays warm', async () => {
  const service = createBuildService({ workerUrl: scripted });
  try {
    await assert.rejects(service.build('A.lean', { fail: 'type mismatch' }), error => {
      assert.ok(error instanceof Error);
      assert.equal(error.message, 'type mismatch');
      assert.equal(error.name, 'BuildError');
      assert.equal(error.code, 'ELEAN');
      assert.equal(error.stderr, 'details');
      return true;
    });
    assert.equal((await service.build('B.lean', {})).builds, 2);
  } finally { await service.close(); }
});

test('a crashed worker fails its pending builds, and the next build starts a new worker', async () => {
  const service = createBuildService({ workerUrl: scripted });
  try {
    const first = await service.build('A.lean', {});
    const pending = service.build('slow.lean', { hang: true });
    await assert.rejects(service.build('B.lean', { crash: true }), /worker crashed/);
    await assert.rejects(pending, /worker crashed/);
    const next = await service.build('C.lean', {});
    assert.notEqual(next.threadId, first.threadId);
    assert.equal(next.builds, 1);
    // A worker that exits fails its builds with its exit status.
    await assert.rejects(service.build('D.lean', { exit: 3 }), { message: 'The Lasm build worker stopped (exit 3).' });
    assert.equal((await service.build('E.lean', {})).builds, 1);
  } finally { await service.close(); }
});

test('a crash in one slot leaves the builds of the other slots alone', async () => {
  const service = createBuildService({ workerUrl: scripted, workers: 2 });
  try {
    const other = service.build('slow.lean', { delay: 150 }, { slot: 1 });
    await assert.rejects(service.build('B.lean', { crash: true }, { slot: 0 }), /worker crashed/);
    assert.equal((await other).file, 'slow.lean');
  } finally { await service.close(); }
});

test('slots: each output keeps its own warm worker; slot numbers wrap; at least one worker', async () => {
  const service = createBuildService({ workerUrl: scripted, workers: 2 });
  try {
    assert.equal(service.workers, 2);
    const [s0, s1, s2, s3] = await Promise.all([0, 1, 2, 3].map(slot => service.build(`${slot}.lean`, {}, { slot })));
    assert.notEqual(s0.threadId, s1.threadId);
    assert.equal(s2.threadId, s0.threadId);
    assert.equal(s3.threadId, s1.threadId);
    assert.equal((await service.build('d.lean', {})).threadId, s0.threadId, 'the default slot is 0');
  } finally { await service.close(); }
  assert.equal(createBuildService({ workerUrl: scripted, workers: 0 }).workers, 1);
  assert.equal(createBuildService({ workerUrl: scripted }).workers, 1);
});

test('close terminates the workers; a later build starts a new one', async () => {
  const service = createBuildService({ workerUrl: scripted, workers: 2 });
  const before = await service.build('A.lean', {});
  const pending = service.build('slow.lean', { hang: true }, { slot: 1 });
  await service.close();
  await assert.rejects(pending, /^Error: The Lasm build worker stopped \(exit \d+\)\.$/);
  const after = await service.build('B.lean', {});
  assert.notEqual(after.threadId, before.threadId);
  assert.equal(after.builds, 1);
  await service.close();
  await service.close();
});

// In a separate process: whether the service lets it exit, and where worker output goes.
function run(source, timeout = 10_000) {
  const file = join(directory, `main-${Math.random().toString(36).slice(2)}.mjs`);
  writeFileSync(file, `import { createBuildService } from ${JSON.stringify(pathToFileURL(join(import.meta.dirname, '../src/dev-build-service.mjs')).href)};\n${source}`);
  return spawnSync(process.execPath, [file], { encoding: 'utf8', timeout });
}
const chatty = worker('chatty', `
parentPort.on('message', ({ id }) => { console.log('worker stdout'); console.error('worker stderr'); parentPort.postMessage({ id, type: 'result', result: 1 }); });`);

// Regression: the worker's stdout and stderr were read through pipes, which kept
// the process alive although the worker was unref'd (the Vite plugin's service,
// src/vite/index.mjs, under a server without an httpServer to close it).
test('unref: a pending build does not keep the process alive; without it, the worker does', () => {
  const hanging = worker('hanging', `parentPort.on('message', () => {});`);
  const unref = run(`createBuildService({ workerUrl: new URL(${JSON.stringify(hanging.href)}), unref: true }).build('A.lean', {}); console.log('started');`);
  assert.equal(unref.status, 0, unref.stderr);
  assert.equal(unref.stdout, 'started\n');
  const ref = run(`createBuildService({ workerUrl: new URL(${JSON.stringify(hanging.href)}) }).build('A.lean', {});`, 1500);
  assert.equal(ref.signal, 'SIGTERM', 'killed by the timeout');
});

test('worker stdout and stderr reach the process streams, which stay open', () => {
  const r = run(`const s = createBuildService({ workerUrl: new URL(${JSON.stringify(chatty.href)}) });
await s.build('A.lean', {}); await s.build('B.lean', {}); await s.close(); console.log('after');`);
  assert.equal(r.status, 0, r.stderr);
  assert.equal(r.stdout, 'worker stdout\nworker stdout\nafter\n');
  assert.equal(r.stderr, 'worker stderr\nworker stderr\n');
});
