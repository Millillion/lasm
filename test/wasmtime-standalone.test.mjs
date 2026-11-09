// The standalone Wasmtime supervisor (src/wasmtime-standalone.mjs): it
// verifies the application's native files, starts the runtime root's Worker
// (a stand-in here, test/fixtures/wasmtime-stand-ins), serves its host
// requests on the main thread with the real process host, and owns the
// process's termination (a stand-in _Exit). Real outputs run it in
// .github/workflows/wasmtime*.yml.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { pathToFileURL } from 'node:url';
import { MessageChannel, receiveMessageOnPort } from 'node:worker_threads';
import { installStandIns, importWithThread, standInKoffi, FakeWorker } from './fixtures/wasmtime-stand-ins/index.mjs';
import { hashWasmtimeFile, wasmtimeCpuTarget } from '../src/wasmtime-artifact.mjs';
import { encodeFileMessage, decodeFileMessage } from '../src/native-file-message.mjs';

installStandIns();
// The supervisor resets SIGUSR1 only when nothing listens to it.
const keepSignal = () => {};
process.on('SIGUSR1', keepSignal);
test.after(() => process.off('SIGUSR1', keepSignal));
const tick = (ms = 0) => new Promise(resolve => setTimeout(resolve, ms));
async function until(condition, what = 'condition') {
  for (let i = 0; i < 300 && !condition(); i++) await tick(2);
  assert.ok(condition(), what);
}

/** An application directory: the entry and the native files its manifest records. */
async function application(t, change = () => {}) {
  const root = mkdtempSync(join(tmpdir(), 'lasm-wasmtime-app-'));
  t.after(() => rmSync(root, { recursive: true, force: true }));
  mkdirSync(join(root, 'host'));
  const files = {};
  for (const name of ['program.cwasm', 'host/instance.so', 'host/native-api.node', 'host/libwasmtime.so']) {
    writeFileSync(join(root, name), 'bytes of ' + name);
    files[name] = { bytes: Buffer.byteLength('bytes of ' + name), sha256: await hashWasmtimeFile(join(root, name)) };
  }
  const manifest = { schema: 2, backend: 'wasmtime-49.0.0', platform: 'linux', arch: 'x64', cpuTarget: wasmtimeCpuTarget, cpuFeatures: 'baseline', leanVersion: '4.35.0', files };
  change(manifest);
  writeFileSync(join(root, 'wasmtime.json'), JSON.stringify(manifest));
  writeFileSync(join(root, 'main.mjs'), '// entry\n');
  return { root, manifest, entrypoint: pathToFileURL(join(root, 'main.mjs')).href };
}

async function supervise(t, { args = ['one', 'two'], thread = {} } = {}) {
  const app = await application(t);
  FakeWorker.started.length = 0;
  const exits = [];
  standInKoffi({ guestFor: () => null, libc: { _Exit: code => { exits.push(code); } } });
  const standalone = await importWithThread('wasmtime-standalone.mjs', { isMainThread: true, ...thread });
  await standalone.runWasmtimeApplication(app.entrypoint, args);
  return { app, exits, worker: FakeWorker.started[0] };
}
function hostRequest(worker, request, sender = 1n) {
  const channel = new MessageChannel();
  worker.emit('message', { kind: 'host-request', request: encodeFileMessage(request).message, sender, port: channel.port2 });
  return { async reply() { let packet; await until(() => (packet ??= receiveMessageOnPort(channel.port1)), 'a host reply to ' + JSON.stringify(request, (_, v) => typeof v === 'bigint' ? String(v) : v)); channel.port1.close(); return decodeFileMessage(packet.message); } };
}
const packet = (operation, handle = 0, argument = 0n) => ({ kind: 'host', mode: 'request', operation, handle, argument, byteBuffer: new ArrayBuffer(0), byteOffset: 0, byteLength: 0 });

test('standalone: verifies the application, starts the runtime root and serves its host requests', async t => {
  const s = await supervise(t);
  const { worker, app } = s;
  assert.match(worker.url, /\/src\/wasmtime-worker\.mjs$/);
  assert.deepEqual(Object.keys(worker.options).sort(), ['execArgv', 'resourceLimits', 'stderr', 'stdout', 'workerData']);
  assert.equal(worker.options.stdout, true);
  assert.equal(worker.options.stderr, true);
  assert.equal(worker.options.execArgv[0], '--require');
  assert.match(worker.options.execArgv[1], /native-worker-cwd\.cjs$/);
  assert.equal(worker.options.execArgv.length, 2);
  assert.deepEqual(worker.options.resourceLimits, { stackSizeMb: 96, maxOldGenerationSizeMb: 128 });
  assert.deepEqual(worker.options.workerData, { runtimeRoot: true, options: { helper: join(app.root, 'host/instance.so'), cache: join(app.root, 'program.cwasm'),
    cacheSha256: app.manifest.files['program.cwasm'].sha256, nativeApi: join(app.root, 'host/native-api.node'),
    programName: join(app.root, 'main.mjs'), leanVersion: '4.35.0', args: ['one', 'two'] } });
  // Requests run on this thread's process host: the program name and arguments it was given.
  const name = await hostRequest(worker, packet(24)).reply();
  assert.equal(Buffer.from(name.result.byteBuffer, name.result.byteOffset, name.result.byteLength).toString(), join(app.root, 'main.mjs'));
  assert.equal(name.result.error, false);
  const args = await hostRequest(worker, packet(31)).reply();
  assert.equal(Buffer.from(args.result.byteBuffer, args.result.byteOffset, args.result.byteLength).toString(), 'one\0two\0');
  // Lean's exit, as the runtime reports it.
  assert.deepEqual(await hostRequest(worker, packet(30, 1, 7n)).reply(), { exit: { code: 7, force: true } });
  assert.deepEqual(await hostRequest(worker, packet(30, 0, 3n)).reply(), { exit: { code: 3, force: false } });
  // Other failures are reported as such.
  const failed = await hostRequest(worker, { kind: 'nope' }).reply();
  assert.match(failed.failure, /AssertionError|Expected values/);
  // Notifications are served without a reply.
  worker.emit('message', { kind: 'host-notification', request: packet(24) });
  await tick(5);
  assert.deepEqual(s.exits, []);
  // The application's exit: the host flushes, then the process exits with C's int conversion of the code.
  worker.emit('message', { kind: 'application-exit', code: 0xffffffff, force: false });
  worker.emit('message', { kind: 'application-exit', code: 5, force: false });
  await until(() => s.exits.length);
  await tick(5);
  assert.deepEqual(s.exits, [-1], 'one exit, with the first code');
  // The Worker ending after completion is not a failure.
  worker.emit('exit', 0);
  await tick(5);
  assert.deepEqual(s.exits, [-1]);
});

test('standalone: a forced exit skips the flush and still exits with the code', async t => {
  const s = await supervise(t, { args: [] });
  s.worker.emit('message', { kind: 'application-exit', code: 2, force: true });
  await until(() => s.exits.length);
  assert.deepEqual(s.exits, [2]);
  assert.deepEqual(s.worker.options.workerData.options.args, []);
});

test('standalone: failures exit with status 1', async t => {
  for (const provoke of [
    w => w.emit('message', { kind: 'diagnostic-failure', result: { failure: 'runtime root failed' } }),
    w => w.emit('message', { kind: 'other' }),
    w => w.emit('message', { kind: 'application-exit', code: 1.5 }),
    w => w.emit('message', { kind: 'application-exit' }),
    w => w.emit('error', new Error('worker error')),
    w => w.emit('exit', 3),
  ]) {
    const s = await supervise(t);
    provoke(s.worker);
    await until(() => s.exits.length, String(provoke));
    assert.deepEqual(s.exits, [1], String(provoke));
  }
});

test('standalone: only on the main thread of Linux x64, and only a verified application', async t => {
  const app = await application(t);
  standInKoffi({ guestFor: () => null, libc: { _Exit: () => assert.fail('exit') } });
  const worker = await importWithThread('wasmtime-standalone.mjs', { isMainThread: false });
  await assert.rejects(worker.runWasmtimeApplication(app.entrypoint, []), { message: 'The standalone Wasmtime backend currently requires Linux x64' });
  for (const [property, value] of [['platform', 'darwin'], ['arch', 'arm64']]) {
    const original = Object.getOwnPropertyDescriptor(process, property);
    Object.defineProperty(process, property, { value });
    try {
      const main = await importWithThread('wasmtime-standalone.mjs', { isMainThread: true });
      await assert.rejects(main.runWasmtimeApplication(app.entrypoint, []), /requires Linux x64/);
    } finally { Object.defineProperty(process, property, original); }
  }
  const changed = await application(t, manifest => { manifest.leanVersion = 'main'; });
  FakeWorker.started.length = 0;
  const main = await importWithThread('wasmtime-standalone.mjs', { isMainThread: true });
  await assert.rejects(main.runWasmtimeApplication(changed.entrypoint, []), /does not match the current native platform/);
  assert.equal(FakeWorker.started.length, 0);
  // The default arguments are the process's own.
  const s = await (async () => {
    FakeWorker.started.length = 0;
    standInKoffi({ guestFor: () => null, libc: { _Exit: () => {} } });
    const m = await importWithThread('wasmtime-standalone.mjs', { isMainThread: true });
    await m.runWasmtimeApplication(app.entrypoint);
    return FakeWorker.started[0];
  })();
  assert.deepEqual(s.options.workerData.options.args, process.argv.slice(2));
});
