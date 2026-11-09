// The standalone Wasmtime runner (src/wasmtime-runtime.mjs) in-process: the
// native instance is a stand-in (test/fixtures/wasmtime-stand-ins), so the
// runner's own logic runs here as it runs in an output's workers: the runtime
// root (the supervisor's Worker) starting Lean's main, guest threads entering
// their start routine, the RPCs between them, host requests to the
// supervisor, console output, file imports and both ways an application ends.
// Real outputs run it in .github/workflows/wasmtime*.yml.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir, cpus } from 'node:os';
import { createHash } from 'node:crypto';
import { MessageChannel, receiveMessageOnPort } from 'node:worker_threads';
import { installStandIns, importWithThread, standInKoffi, Guest, FakePort, FakeWorker } from './fixtures/wasmtime-stand-ins/index.mjs';
import { encodeFileMessage, decodeFileMessage } from '../src/native-file-message.mjs';

installStandIns();
const MiB = 1024 ** 2;
const directory = mkdtempSync(join(tmpdir(), 'lasm-wasmtime-runtime-'));
const cache = join(directory, 'program.cwasm');
writeFileSync(cache, 'compiled program');
const cacheSha256 = createHash('sha256').update('compiled program').digest('hex');
const nativeApi = new URL('./fixtures/wasmtime-stand-ins/native-api.cjs', import.meta.url).pathname;
test.after(() => rmSync(directory, { recursive: true, force: true }));
const options = (extra = {}) => ({ helper: '/stand-in/host/instance.so', cache, cacheSha256, programName: '/app/main.mjs', leanVersion: '4.35.0', args: ['a b', 'λ'], ...extra });
const globals = ['emscripten_console_log', 'emscripten_console_error', 'emscripten_console_warn', 'emscripten_console_trace', 'emscripten_out', 'emscripten_err'];
const tick = (ms = 0) => new Promise(resolve => setTimeout(resolve, ms));
async function until(condition, what = 'condition') {
  for (let i = 0; i < 200 && !condition(); i++) await tick(2);
  assert.ok(condition(), what);
}
/** process.exit while the runner owns it: recorded instead. */
function exits(t) {
  const original = process.exit, codes = [];
  process.exit = code => { codes.push(code); };
  t.after(() => { process.exit = original; });
  return codes;
}
/** console methods, captured. */
function consoleCalls(t) {
  const calls = [];
  for (const method of ['log', 'error', 'warn', 'trace']) {
    const original = console[method];
    console[method] = text => calls.push([method, text]);
    t.after(() => { console[method] = original; });
  }
  return calls;
}
const guestString = (guest, text) => { const bytes = Buffer.from(text + '\0'); const p = guest.invoke('malloc', [BigInt(bytes.length)]); guest.write(p, bytes); return p; };

/** The runtime root, as the standalone supervisor's Worker runs it. */
async function startRoot(t, { guest = new Guest(), extra = {}, supervise = () => {}, failure } = {}) {
  FakeWorker.started.length = 0;
  const koffi = standInKoffi({ guestFor: () => guest, failure });
  const supervisor = new FakePort(supervise);
  const runOptions = options(extra);
  const runtime = await importWithThread('wasmtime-runtime.mjs', { workerData: { runtimeRoot: true, options: runOptions }, parentPort: supervisor });
  const codes = exits(t);
  const run = runtime.runWasmtimeMain(runOptions);
  run.catch(() => {});
  return { koffi, guest, supervisor, codes, run, runOptions };
}
/** A guest thread's message to the root, as wasmtime-worker posts it. */
function rpc(worker, request) {
  const channel = new MessageChannel();
  const signal = 0x900n + BigInt(FakeWorker.started.indexOf(worker)) * 8n;
  worker.emit('message', { kind: 'rpc', request: encodeFileMessage(request).message, signal, port: channel.port2, sender: worker.options.workerData.pthread });
  return { channel, signal, async reply() { await until(() => (this.packet ??= receiveMessageOnPort(channel.port1)), 'an RPC reply'); channel.port1.close(); return decodeFileMessage(this.packet.message); } };
}

test('root: starts Lean main with the program name and arguments, then serves its first thread', async t => {
  const seen = {};
  const guest = new Guest({ exports: {
    _emscripten_proxy_main: ([argc, argv], g) => {
      seen.args = Array.from({ length: Number(argc) }, (_, i) => g.string(g.u64(argv + BigInt(i) * 8n)));
      seen.terminator = g.u64(argv + argc * 8n);
      seen.platform = g.runtimeCall(1); seen.self = g.runtimeCall(6); seen.cpus = g.runtimeCall(7); seen.keepalive = g.runtimeCall(8);
      seen.spawn = g.spawn.fn(0x3000n, 0x55n, 0x66n);
      seen.strong = g.events.fn(2, 0x3000n);
      return 0n;
    } }, self: 0x1_0000_2000n });
  const r = await startRoot(t, { guest });
  await until(() => FakeWorker.started.length === 1, 'the first thread');
  assert.deepEqual(r.koffi.loaded, ['/stand-in/host/instance.so']);
  assert.deepEqual(r.koffi.config, { sync_stack_size: 16 * MiB });
  assert.deepEqual(seen.args, ['/app/main.mjs', 'a b', 'λ']);
  assert.equal(seen.terminator, 0n, 'argv ends with a null pointer');
  assert.deepEqual(seen.platform, { status: 0, value: 0n });
  assert.deepEqual(seen.self, { status: 0, value: 0x2000n }, 'pthread_self as a 32-bit value');
  assert.deepEqual(seen.cpus, { status: 0, value: BigInt(cpus().length) });
  assert.deepEqual(seen.keepalive, { status: 0, value: 0n });
  assert.equal(seen.spawn, 0);
  assert.equal(seen.strong, 1);
  // The instance's startup, in order.
  const names = guest.calls.map(([name]) => name);
  assert.deepEqual(names.slice(0, 6), ['emscripten_stack_init', 'emscripten_stack_get_base', 'emscripten_stack_get_end', '__set_stack_limits', '__wasm_call_ctors', 'pthread_self']);
  assert.deepEqual(guest.calls[3], ['__set_stack_limits', 0x80000n, 0x40000n]);
  assert.deepEqual(names.slice(6), ['malloc', 'malloc', 'malloc', 'calloc', '_emscripten_proxy_main', 'pthread_self']);
  assert.deepEqual(guest.calls.find(([name]) => name === 'calloc'), ['calloc', 4n, 8n]);
  // The thread's Worker.
  const [worker] = FakeWorker.started;
  assert.match(worker.url, /\/src\/wasmtime-worker\.mjs$/);
  assert.equal(worker.options.stdout, true);
  assert.equal(worker.options.stderr, true);
  assert.equal(worker.options.execArgv.length, 2);
  assert.equal(worker.options.execArgv[0], '--require');
  assert.match(worker.options.execArgv[1], /native-worker-cwd\.cjs$/);
  assert.deepEqual(worker.options.resourceLimits, { stackSizeMb: 96, maxOldGenerationSizeMb: 128 });
  assert.deepEqual(worker.options.workerData, { options: r.runOptions, parent: guest.address, pthread: 0x3000n, start: 0x55n, argument: 0x66n });
  assert.equal(worker.refs, 1, 'a strong reference keeps the thread alive');
  // The callbacks it gave the instance, and the environment.
  assert.deepEqual(r.koffi.registered.map(p => p.type.pointerTo), ['double lasm_main_clock(void)', 'int32_t lasm_main_mailbox(uint64_t target, uint64_t sender)',
    'int32_t lasm_main_event(uint32_t event, uint64_t pthread)', 'int32_t lasm_main_spawn(uint64_t pthread, uint64_t start, uint64_t argument)',
    'int32_t lasm_main_runtime(uint32_t kind, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t *result)']);
  assert.ok(Math.abs(guest.clock.fn() - Date.now()) < 1000);
  assert.ok(r.koffi.signatures[0].includes('lasm_lean_instance_new('), 'the FFI instance');
  assert.equal(r.codes.length, 0);
});

test('root: the instance is created from the verified cache with the environment and program name', async t => {
  let created;
  process.env.LASM_RUNTIME_TEST = 'x=y';
  t.after(() => { delete process.env.LASM_RUNTIME_TEST; });
  const guest = new Guest({ exports: { _emscripten_proxy_main: () => 0n } });
  const koffi = standInKoffi({ guestFor: args => { created = args; return guest; } });
  const runOptions = options();
  const runtime = await importWithThread('wasmtime-runtime.mjs', { workerData: { runtimeRoot: true, options: runOptions }, parentPort: new FakePort() });
  void runtime.runWasmtimeMain(runOptions);
  await until(() => created);
  assert.equal(created.cache, cache);
  assert.equal(created.name, '/app/main.mjs');
  assert.equal(created.parent, null);
  const entries = created.environment.toString('latin1').split('\0');
  assert.equal(entries.pop(), '', 'each entry ends with NUL');
  assert.equal(entries.length, created.count);
  assert.equal(created.size, created.environment.length);
  assert.ok(entries.includes('LASM_RUNTIME_TEST=x=y'));
  assert.equal(koffi.guests.length, 1);
});

test('root: options are checked before anything native is loaded', async t => {
  const cases = [
    [{ programName: '' }, /./], [{ programName: 'a\0b' }, /./], [{ programName: 7 }, /./], [{ leanVersion: '4.35' }, /match/], [{ leanVersion: 'v4.35.0' }, /match/],
    [{ leanVersion: '4.35.0-rc1' }, /match/], [{ args: 'a' }, /./], [{ args: ['a', 3] }, /./], [{ args: ['a\0'] }, /./], [{ cacheSha256: 'A'.repeat(64) }, /match/],
    [{ cacheSha256: '0'.repeat(63) }, /match/], [{ cacheSha256: '0'.repeat(64) + '0' }, /match/], [{ cacheSha256: 'x' + '0'.repeat(64) }, /match/],
  ];
  for (const [extra, message] of cases) {
    const koffi = standInKoffi({ guestFor: () => assert.fail('created') });
    const runOptions = options(extra);
    const runtime = await importWithThread('wasmtime-runtime.mjs', { workerData: { runtimeRoot: true, options: runOptions }, parentPort: new FakePort() });
    await assert.rejects(runtime.runWasmtimeMain(runOptions), message, JSON.stringify(extra));
    assert.deepEqual(koffi.loaded, [], JSON.stringify(extra));
  }
  // A cache whose bytes differ from the recorded hash is not run.
  const koffi = standInKoffi({ guestFor: () => assert.fail('created') });
  const runOptions = options({ cacheSha256: '0'.repeat(64) });
  const runtime = await importWithThread('wasmtime-runtime.mjs', { workerData: { runtimeRoot: true, options: runOptions }, parentPort: new FakePort() });
  await assert.rejects(runtime.runWasmtimeMain(runOptions), /Expected values to be strictly equal/);
  assert.deepEqual(koffi.loaded, []);
  // A diagnostic's own description is checked instead.
  const diagnostic = { name: '/probe', lean: '4.35.0', args: ['x\0'] };
  const d = options({ diagnostic });
  standInKoffi({ guestFor: () => assert.fail('created') });
  const other = await importWithThread('wasmtime-runtime.mjs', { workerData: { runtimeRoot: true, options: d }, parentPort: new FakePort() });
  await assert.rejects(other.runWasmtimeMain(d));
  void t;
});


const resolvedGlobals = globals.map(name => ({ name, pointer: String(0x100 + name.length) }));
const spawning = (pthread = 0x3000n) => new Guest({ exports: { _emscripten_proxy_main: (_, g) => { g.spawn.fn(pthread, 0x55n, 0x66n); return 0n; } } });
const hostPacket = (operation, bytes = Buffer.alloc(0), mode = 'request', handle = 0) =>
  ({ kind: 'host', mode, operation, handle, argument: 9n, byteBuffer: bytes.buffer, byteOffset: bytes.byteOffset, byteLength: bytes.byteLength });

test('root: guest threads\' RPCs: spawns, host requests to the supervisor, mailboxes, cleanup and the application\'s exit', async t => {
  const forwarded = [];
  const r = await startRoot(t, { guest: spawning(), supervise: (message, port) => {
    if (message.kind !== 'host-request') return;
    const request = decodeFileMessage(message.request);
    forwarded.push({ request, sender: message.sender });
    const result = request.kind === 'host' ? { error: false, byteBuffer: Uint8Array.from(Buffer.from('reply')).buffer, byteOffset: 0, byteLength: 5 } : { errno: 0, written: 3 };
    message.port.postMessage(encodeFileMessage(request.operation === 30 ? { exit: { code: 3, force: true } } : { result }).message);
  } });
  await until(() => FakeWorker.started.length === 1);
  const [first] = FakeWorker.started;
  first.emit('message', { kind: 'thread-ready', pthread: '12288', resolvedFunctionGlobals: resolvedGlobals });
  // A thread starts another.
  const spawn = rpc(first, { kind: 'spawn', pthread: 0x4000n, start: 7n, argument: 8n });
  assert.deepEqual(await spawn.reply(), { status: 0 });
  assert.equal(FakeWorker.started.length, 2);
  const second = FakeWorker.started[1];
  assert.deepEqual(second.options.workerData, { options: r.runOptions, parent: r.guest.address, pthread: 0x4000n, start: 7n, argument: 8n });
  // The thread waiting on the RPC is woken: its signal is set and the futex woken.
  assert.equal(r.guest.u32(spawn.signal), 1);
  assert.deepEqual(r.guest.calls.filter(([name]) => name === 'emscripten_futex_wake').at(-1), ['emscripten_futex_wake', spawn.signal, 1n]);
  // Host requests and output go to the supervisor, and its answer back to the thread.
  const host = rpc(second, hostPacket(24, Buffer.from('in')));
  const answer = await host.reply();
  assert.equal(Buffer.from(answer.byteBuffer, answer.byteOffset, answer.byteLength).toString(), 'reply');
  assert.equal(answer.error, false);
  for (const request of [{ kind: 'wasi-stdio', fd: 1, byteBuffer: Buffer.from('out').buffer, byteOffset: 0, byteLength: 3 },
    { kind: 'emscripten-output', fd: 2, text: 'err' }, { kind: 'file-import', operation: 'close', fd: 3 }])
    assert.deepEqual(await rpc(first, request).reply(), { errno: 0, written: 3 });
  assert.deepEqual(forwarded.map(f => [f.request.kind, f.sender]), [['host', 0x4000n], ['wasi-stdio', 0x3000n], ['emscripten-output', 0x3000n], ['file-import', 0x3000n]]);
  assert.equal(Buffer.from(forwarded[0].request.byteBuffer, forwarded[0].request.byteOffset, forwarded[0].request.byteLength).toString(), 'in');
  // Mailboxes: the root's own is checked on its event loop; another thread's is posted to it.
  first.emit('message', { kind: 'mailbox', target: 0x2000n, sender: 0x3000n });
  first.emit('message', { kind: 'mailbox', target: 0x4000n, sender: 0x3000n });
  assert.deepEqual(second.sent, [{ kind: 'mailbox' }]);
  assert.equal(r.guest.mailbox.fn(0x4000n, 0x2000n), 1, 'from the instance itself');
  assert.equal(r.guest.mailbox.fn(0x9999n, 0x2000n), 0, 'an unknown thread');
  assert.equal(second.sent.length, 2);
  await until(() => r.guest.calls.some(([name]) => name === '_emscripten_check_mailbox'), 'the root mailbox check');
  // A finished thread is reclaimed once its Worker exited.
  second.emit('message', { kind: 'thread-result', pthread: '16384', result: '0' });
  second.emit('message', { kind: 'cleanup', pthread: 0x4000n });
  await tick(5);
  assert.ok(!r.guest.calls.some(([name]) => name === '_emscripten_thread_free_data'), 'not before its Worker exits');
  second.emit('exit', 0);
  await until(() => r.guest.calls.some(([name]) => name === '_emscripten_thread_free_data'));
  assert.deepEqual(r.guest.calls.find(([name]) => name === '_emscripten_thread_free_data'), ['_emscripten_thread_free_data', 0x4000n]);
  // The reclaimed thread number can start again.
  assert.deepEqual(await rpc(first, { kind: 'spawn', pthread: 0x4000n, start: 1n, argument: 1n }).reply(), { status: 0 });
  assert.equal(FakeWorker.started.length, 3);
  // Lean's exit through a host request (IO.Process.exit): the supervisor ends the application.
  const exit = rpc(first, hostPacket(30));
  await until(() => r.supervisor.posted.some(m => m.kind === 'application-exit'));
  assert.deepEqual(r.supervisor.posted.filter(m => m.kind === 'application-exit'), [{ kind: 'application-exit', code: 3, force: true }]);
  await tick(5);
  assert.equal(receiveMessageOnPort(exit.channel.port1), undefined, 'the exiting thread gets no reply');
  assert.equal(r.guest.u32(exit.signal), 1);
  // Later exits change nothing; Workers ending after the exit are not failures.
  first.emit('message', { kind: 'process-exit', pthread: '12288', code: 9 });
  first.emit('exit', 0);
  await tick(5);
  assert.equal(r.supervisor.posted.filter(m => m.kind === 'application-exit').length, 1);
  assert.deepEqual(r.codes, []);
  assert.ok(!r.supervisor.posted.some(m => m.kind === 'diagnostic-failure'));
});

test('root: a thread\'s process exit ends the application with its code', async t => {
  const r = await startRoot(t, { guest: spawning() });
  await until(() => FakeWorker.started.length === 1);
  const [worker] = FakeWorker.started;
  worker.emit('message', { kind: 'process-exit', pthread: '12288', code: 0xffffffff });
  await until(() => r.supervisor.posted.length);
  assert.deepEqual(r.supervisor.posted, [{ kind: 'application-exit', code: 0xffffffff, force: false }]);
  worker.emit('exit', 0);
  await tick(5);
  assert.deepEqual(r.codes, []);
});

/** Starts a root, provokes `provoke(root, firstWorker)`, and returns the supervisor's failure report. */
async function rootFailure(t, provoke, { guest = spawning(), label = String(provoke) } = {}) {
  const r = await startRoot(t, { guest });
  if (FakeWorker.started.length === 0 && guest.spawnsThread !== false) await until(() => FakeWorker.started.length === 1 || r.supervisor.posted.length);
  await provoke(r, FakeWorker.started[0]);
  await until(() => r.supervisor.posted.some(m => m.kind === 'diagnostic-failure'), 'a failure report: ' + label);
  const report = r.supervisor.posted.find(m => m.kind === 'diagnostic-failure');
  assert.deepEqual(Object.keys(report.result), ['failure'], 'no diagnostic trace outside diagnostics');
  assert.equal(r.codes[0], 1, 'the process exits with status 1');
  return report.result.failure;
}

test('root: failures end the whole process with the cause', async t => {
  const cases = [
    [(_, w) => w.emit('message', { kind: 'failure', message: 'thread trapped: out of bounds' }), /thread trapped: out of bounds/],
    [(_, w) => w.emit('exit', 7), /Application worker exited before completion: 7/],
    [(_, w) => w.emit('message', { kind: 'thread-ready', pthread: '12288', resolvedFunctionGlobals: resolvedGlobals.slice(1) }), /deep-equal|deepStrictEqual/],
    [(_, w) => w.emit('message', { kind: 'weird' }), /Unknown worker message weird/],
    [(_, w) => w.emit('message', { kind: 'mailbox', target: 0x7777n, sender: 1n }), /strictly equal|1 !== 0|0 !== 1/],
    [(_, w) => w.emit('message', { kind: 'rpc', request: encodeFileMessage({ kind: 'spawn' }).message, signal: 0x900n, port: new MessageChannel().port2, sender: 1n }), /strictly equal/],
    [(_, w) => w.emit('error', new Error('worker error event')), /worker error event/],
    [(_, w) => w.emit('message', { kind: 'cleanup', pthread: 0x5555n }), /Only one owner may reclaim a known thread/],
    [(_, w) => w.emit('message', { kind: 'process-exit', pthread: '1', code: 0 }), /strictly equal/],
  ];
  for (const [provoke, cause] of cases) assert.match(await rootFailure(t, provoke), cause);
  // An unknown RPC is answered with the failure, then the process fails.
  let channel;
  const unknown = await rootFailure(t, (_, w) => { channel = rpc(w, { kind: 'nope' }).channel; });
  assert.match(unknown, /Unknown RPC nope/);
  assert.match(decodeFileMessage(receiveMessageOnPort(channel.port1).message).failure, /Unknown RPC nope/);
  // A live thread cannot be started again; a supervisor's failure fails the process too.
  assert.match(await rootFailure(t, (_, w) => { rpc(w, { kind: 'spawn', pthread: 0x3000n, start: 1n, argument: 1n }); }), /Live thread cannot be replaced/);
  const supervisorFailure = await (async () => {
    const r = await startRoot(t, { guest: spawning(), supervise: m => { if (m.kind === 'host-request') m.port.postMessage(encodeFileMessage({ failure: 'supervisor said no' }).message); } });
    await until(() => FakeWorker.started.length === 1);
    rpc(FakeWorker.started[0], hostPacket(24));
    await until(() => r.supervisor.posted.some(m => m.kind === 'diagnostic-failure'));
    return r.supervisor.posted.find(m => m.kind === 'diagnostic-failure').result.failure;
  })();
  assert.match(supervisorFailure, /supervisor said no/);
});

test('root: the instance\'s own failures: startup, unknown callbacks, an exit request on the root, a failed main', async t => {
  const guests = [
    [new Guest({ exports: { _emscripten_proxy_main: () => 1n } }), /Expected values to be strictly equal/],
    [new Guest({ exports: { _emscripten_proxy_main: (_, g) => { assert.equal(g.runtimeCall(99).status, 1); return 0n; } } }), /Unknown runtime callback 99/],
    [new Guest({ exports: { _emscripten_proxy_main: (_, g) => { assert.equal(g.runtimeCall(9, 4n).status, 1); return 0n; } } }), /./],
    [new Guest({ exports: { _emscripten_proxy_main: (_, g) => { assert.equal(g.events.fn(2, 0x8888n), 0); return 0n; } } }), /./],
    [new Guest({ exports: { _emscripten_proxy_main: (_, g) => { assert.equal(g.runtimeCall(2, 24n, 0n, 0n, 0n, 0n).status, 1); return 0n; } } }), /./],
    [new Guest({ globals: 5 }), /Pinned Lean module imports six console function globals/],
    [Object.assign(new Guest(), { missingGlobal: 'emscripten_out' }), /no global emscripten_out/],
    [Object.assign(new Guest(), { globalPointers: { emscripten_err: 0 } }), /./],
    [new Guest({ exports: { malloc: () => 0n } }), /./],
    [new Guest({ exports: { emscripten_stack_init: () => { throw new Error('no stack'); } } }), /emscripten_stack_init: no stack/],
  ];
  for (const [guest, cause] of guests) {
    guest.spawnsThread = false;
    assert.match(await rootFailure(t, () => {}, { guest }), cause);
  }
  // An instance that cannot be created.
  const r = await startRoot(t, { guest: null, failure: 'cannot map the code' });
  await until(() => r.supervisor.posted.length);
  assert.match(r.supervisor.posted[0].result.failure, /cannot map the code/);
});

/** A guest thread's runner, as wasmtime-worker.mjs runs it; `answer(request)` plays the root. */
async function startThread(t, { thread, answer = () => ({}), extra = {}, guestOptions = {}, late = false, top = 0x70000n, size = 0x10000n } = {}) {
  const guest = new Guest({ self: 0x3000n, thread, ...guestOptions });
  guest.setU64(0x3000n + 80n, top);
  guest.setU64(0x3000n + 88n, size);
  const koffi = standInKoffi({ guestFor: () => guest });
  const requests = [];
  let pending;
  const reply = message => { message.port.postMessage(encodeFileMessage(answer(decodeFileMessage(message.request), message)).message); };
  const parentPort = new FakePort(message => {
    if (message.kind !== 'rpc') return;
    requests.push(decodeFileMessage(message.request));
    assert.equal(message.sender, 0x3000n);
    if (late) pending = message;
    else { reply(message); guest.setU32(message.signal, 1); }
  });
  guest.parentPort = parentPort;
  // Late replies: the root sets the signal while the thread waits, then the packet arrives during a second wait.
  guest.onWait = (signal, expected) => {
    if (!pending) return;
    if (expected === 0) guest.setU32(signal, 1);
    else { reply(pending); pending = undefined; }
  };
  const runOptions = options(extra);
  const workerData = { options: runOptions, parent: 0xabc0n, pthread: 0x3000n, start: 0x55n, argument: 0x66n };
  const runtime = await importWithThread('wasmtime-runtime.mjs', { workerData, parentPort });
  const run = runtime.runWasmtimeMain(runOptions);
  return { guest, koffi, parentPort, requests, run, runOptions };
}
const messages = (port, kind) => port.posted.filter(m => m.kind === kind);

test('thread: enters its start routine on its own stack and reports the result', async t => {
  let created;
  const th = await startThread(t, { thread: (start, argument) => { created = [start, argument]; return { status: 0, value: 7n }; } });
  await th.run;
  assert.deepEqual(created, [0x55n, 0x66n]);
  assert.equal(th.koffi.guests.length, 1);
  assert.deepEqual(th.guest.calls.map(c => c.map(String)), [
    ['emscripten_stack_set_limits', '458752', '393216'], ['__set_stack_limits', '458752', '393216'], ['_emscripten_stack_restore', '458752'],
    ['_emscripten_thread_init', '12288', '0', '0', '1', '0', '0'], ['_emscripten_tls_init'], ['pthread_self'], ['_emscripten_dlsync_self'], ['_emscripten_thread_exit', '7']]);
  assert.equal(th.guest.mailboxRegistered, 0x3000n);
  assert.deepEqual(th.parentPort.posted, [
    { kind: 'thread-ready', pthread: '12288', guestStackBytes: '65536', nativeStackBytes: 96 * MiB, ffiStackBytes: 16 * MiB, wasmControlStackBudget: 12 * MiB,
      wasmEntry: 'FFI', resolvedFunctionGlobals: resolvedGlobals },
    { kind: 'thread-result', pthread: '12288', result: '7', guestStackBytes: '65536', nativeStackBytes: 96 * MiB }]);
  // Everything is released: the instance, the callbacks and the port.
  assert.deepEqual(th.koffi.destroyed, [th.guest]);
  assert.deepEqual(th.koffi.unregistered, th.koffi.registered);
  assert.equal(th.koffi.registered.length, 5);
  assert.equal(th.parentPort.listenerCount('message'), 0);
  assert.equal(th.parentPort.closed, true);
  void t;
});

test('thread: a stack outside the instance, a foreign pthread or a short native stack fail the thread', async t => {
  for (const [settings, cause] of [[{ size: 0n }, /./], [{ top: 0x8000n, size: 0x10000n }, /./], [{ top: BigInt(1 << 21) }, /./],
    [{ guestOptions: { exports: { _emscripten_dlsync_self: () => 0n } } }, /./], [{ guestOptions: { self: 0x3001n } }, /./]]) {
    const th = await startThread(t, { thread: () => assert.fail('entered'), ...settings });
    if (settings.guestOptions?.self) th.guest.self = 0x3001n;
    await th.run;
    const [failure] = messages(th.parentPort, 'failure');
    assert.match(failure.message, cause, JSON.stringify(settings, (_, v) => typeof v === 'bigint' ? String(v) : v));
    assert.equal(messages(th.parentPort, 'thread-result').length, 0);
    assert.deepEqual(th.koffi.destroyed, [th.guest]);
  }
  const short = await (async () => {
    const guest = new Guest({ self: 0x3000n, thread: () => assert.fail('entered') });
    guest.setU64(0x3000n + 80n, 0x70000n); guest.setU64(0x3000n + 88n, 0x10000n);
    const koffi = standInKoffi({ guestFor: () => guest });
    koffi.nativeStack = 80 * MiB - 1;
    const parentPort = new FakePort();
    const runtime = await importWithThread('wasmtime-runtime.mjs', { workerData: { options: options(), parent: 1n, pthread: 0x3000n, start: 1n, argument: 1n }, parentPort });
    await runtime.runWasmtimeMain(options());
    return parentPort.posted;
  })();
  assert.match(short.find(m => m.kind === 'failure').message, new RegExp(`Native worker stack ${80 * MiB - 1} must preserve the JS callback reservation`));
});

test('thread: host requests, their responses, starts and releases go to the root as RPCs', async t => {
  const results = [];
  const th = await startThread(t, {
    answer: request => request.kind === 'host' && request.mode === 'start' ? { id: 12 }
      : request.kind === 'host' && request.mode === 'release' ? {}
        : request.operation === 7 ? { error: true, byteBuffer: Uint8Array.of(1, 2).buffer, byteOffset: 0, byteLength: 2 }
          : { error: false, byteBuffer: Uint8Array.from(Buffer.from('abc')).buffer, byteOffset: 0, byteLength: 3 },
    thread: (_, __, g) => {
      g.write(0x6000, Buffer.from('input'));
      results.push(g.runtimeCall(2, 24n, 3n, 5n, 0x6000n, 5n));
      results.push(g.runtimeCall(3, 0x6100n, 3n));
      results.push(g.runtimeCall(2, 7n, 0n, 0n, 0x6000n, 0n));
      results.push(g.runtimeCall(3, 0x6200n, 2n));
      results.push(g.runtimeCall(2, 37n, 0n, 0n, 0x6000n, 1n));
      results.push(g.runtimeCall(3, 0x6300n, 3n));
      results.push(g.runtimeCall(4, 35n, 1n, 2n, 0x6000n, 2n));
      results.push(g.runtimeCall(5, 12n, 0n, 6n));
      return { status: 0, value: 0n };
    } });
  await th.run;
  assert.deepEqual(results.map(r => r.status), [0, 0, 0, 0, 0, 0, 0, 0]);
  assert.deepEqual(results.map(r => r.value), [3n, 0n, BigInt.asUintN(64, -3n), 0n, 3n, 0n, 12n, 0n]);
  assert.equal(th.guest.bytesAt(0x6100, 4).toString('latin1'), 'abc\0');
  assert.deepEqual([...th.guest.bytesAt(0x6200, 3)], [1, 2, 0]);
  const shown = th.requests.map(({ byteBuffer, byteOffset, byteLength, nativeThreadId, ...rest }) =>
    ({ ...rest, bytes: Buffer.from(byteBuffer, byteOffset, byteLength).toString(), thread: typeof nativeThreadId }));
  assert.deepEqual(shown, [
    { kind: 'host', mode: 'request', operation: 24, handle: 3, argument: 5n, bytes: 'input', thread: 'undefined' },
    { kind: 'host', mode: 'request', operation: 7, handle: 0, argument: 0n, bytes: '', thread: 'undefined' },
    { kind: 'host', mode: 'request', operation: 37, handle: 0, argument: 0n, bytes: 'i', thread: 'bigint' },
    { kind: 'host', mode: 'start', operation: 35, handle: 1, argument: 2n, bytes: 'in', thread: 'undefined' },
    { kind: 'host', mode: 'release', operation: 0, handle: 12, argument: 6n, bytes: '', thread: 'undefined' }]);
  // Each RPC's signal word comes from the instance's heap and goes back to it.
  const mallocs = th.guest.calls.filter(([name]) => name === 'malloc');
  assert.equal(mallocs.length, 5);
  assert.ok(mallocs.every(([, n]) => n === 4n));
  assert.equal(th.guest.calls.filter(([name]) => name === 'free').length, 5);
  assert.equal(messages(th.parentPort, 'failure').length, 0);
});

test('thread: a response copied with the wrong size fails the application', async t => {
  const th = await startThread(t, { answer: () => ({ error: false, byteBuffer: new ArrayBuffer(3), byteOffset: 0, byteLength: 3 }),
    thread: (_, __, g) => { g.runtimeCall(2, 24n, 0n, 0n, 0n, 0n); assert.equal(g.runtimeCall(3, 0x6100n, 2n).status, 1); return { status: 1, message: 'trap' }; } });
  await th.run;
  const failures = messages(th.parentPort, 'failure');
  assert.match(failures[0].message, /Expected values to be strictly equal/);
  assert.match(failures[1].message, /trap/);
});

test('thread: WASI output, console output, file imports, spawns, mailboxes and thread events', async t => {
  const calls = consoleCalls(t);
  const results = {};
  const th = await startThread(t, {
    answer: request => request.kind === 'wasi-stdio' ? { errno: 0, written: request.byteLength - 1 } : request.kind === 'spawn' ? { status: 11 }
      : request.kind === 'file-import' ? (request.operation === 'openat' ? { errno: 0, fd: 5 } : { errno: 8 }) : {},
    thread: (_, __, g) => {
      g.write(0x6000, Buffer.from('hello world'));
      g.setU64(0x6100, 0x6000n); g.setU64(0x6108, 5n); g.setU64(0x6110, 0x6005n); g.setU64(0x6118, 6n);
      results.wasi = g.runtimeCall(10, 1n, 0x6100n, 2n, 0x6200n);
      results.written = g.u64(0x6200);
      results.platform = g.runtimeCall(1);
      results.self = g.runtimeCall(6);
      const text = guestString(g, 'to the console');
      for (const kind of [11, 12, 13, 14, 15, 16]) results['console' + kind] = g.runtimeCall(kind, text);
      results.empty = g.runtimeCall(15, 0n);
      const path = guestString(g, 'data/file.txt');
      results.open = g.runtimeCall(17, BigInt.asUintN(64, -100n), path, 0n, 0n);
      results.close = g.runtimeCall(21, 5n);
      results.spawn = g.spawn.fn(0x4000n, 1n, 2n);
      results.mailboxOther = g.mailbox.fn(0x4000n, 0x3000n);
      results.event0 = g.events.fn(0, 0x3000n);
      results.event0Other = g.events.fn(0, 0x4000n);
      results.event1 = g.events.fn(1, 0x4000n);
      results.event2 = g.events.fn(2, 0x4000n);
      results.event3 = g.events.fn(3, 0x3000n);
      g.self = 0n;
      results.event1Detached = g.events.fn(1, 0x5000n);
      g.self = 0x3000n;
      return { status: 0, value: 0n };
    } });
  await th.run;
  assert.deepEqual(results.wasi, { status: 0, value: 0n });
  assert.equal(results.written, 10n, 'the count the root reports');
  assert.deepEqual(results.platform, { status: 0, value: 0n });
  assert.deepEqual(results.self, { status: 0, value: 0x3000n });
  for (const kind of [11, 12, 13, 14, 15, 16]) assert.deepEqual(results['console' + kind], { status: 0, value: 0n });
  assert.deepEqual(calls, [['log', 'to the console'], ['error', 'to the console'], ['warn', 'to the console'], ['trace', 'to the console']]);
  assert.deepEqual(results.open, { status: 0, value: 5n });
  assert.deepEqual(results.close, { status: 0, value: 8n });
  assert.equal(results.spawn, 11);
  assert.equal(results.mailboxOther, 1);
  assert.deepEqual([results.event0, results.event0Other, results.event1, results.event2, results.event3, results.event1Detached], [1, 0, 1, 0, 0, 1]);
  const kinds = th.requests.map(r => r.kind === 'wasi-stdio' ? [r.kind, r.fd, Buffer.from(r.byteBuffer, r.byteOffset, r.byteLength).toString()]
    : r.kind === 'emscripten-output' ? [r.kind, r.fd, r.text] : r.kind === 'file-import' ? [r.kind, r.operation, r.directory ?? r.fd, r.path ? Buffer.from(r.path).toString() : undefined]
      : r.kind === 'spawn' ? [r.kind, r.pthread, r.start, r.argument] : [r.kind, r.pthread]);
  assert.deepEqual(kinds, [['wasi-stdio', 1, 'hello world'], ['emscripten-output', 1, 'to the console'], ['emscripten-output', 2, 'to the console'],
    ['emscripten-output', 1, ''], ['file-import', 'openat', -100, 'data/file.txt'], ['file-import', 'close', 5, undefined], ['spawn', 0x4000n, 1n, 2n], ['cleanup', 0x4000n]]);
  assert.deepEqual(messages(th.parentPort, 'mailbox'), [{ kind: 'mailbox', target: 0x4000n, sender: 0x3000n }]);
  assert.deepEqual(messages(th.parentPort, 'cleanup'), [{ kind: 'cleanup', pthread: 0x5000n }]);
  assert.equal(messages(th.parentPort, 'failure').length, 0);
});

test('thread: replies the root sends while the thread waits on its signal', async t => {
  const th = await startThread(t, { late: true, answer: () => ({ status: 3 }), thread: (_, __, g) => ({ status: 0, value: BigInt(g.spawn.fn(0x4000n, 1n, 2n)) }) });
  await th.run;
  assert.equal(messages(th.parentPort, 'thread-result')[0].result, '3');
  assert.equal(th.guest.waits, 2, 'one wait for the signal, one for the packet');
});

test('thread: a root failure answer or a thrown callback fails the application; a failed start routine too', async t => {
  const th = await startThread(t, { answer: () => ({ failure: 'root refused' }),
    thread: (_, __, g) => { assert.equal(g.spawn.fn(0x4000n, 1n, 2n), 6, 'spawn failures report EAGAIN'); assert.equal(g.mailbox.fn(0x4000n, 0x3000n), 1);
      return { status: 1, message: 'unreachable executed' }; } });
  await th.run;
  const failures = messages(th.parentPort, 'failure').map(m => m.message);
  assert.match(failures[0], /root refused/);
  assert.match(failures[1], /unreachable executed/);
  assert.equal(messages(th.parentPort, 'thread-result').length, 0);
  // Callbacks that throw report it and answer the instance with a failure.
  const seen = {};
  const other = await startThread(t, { thread: (_, __, g) => {
    seen.event = g.events.fn(1, 'not a number');
    seen.mailbox = g.mailbox.fn('x', 1n);
    return { status: 0, value: 0n };
  } });
  await other.run;
  assert.equal(seen.event, 0);
  assert.equal(seen.mailbox, 0);
  assert.equal(messages(other.parentPort, 'failure').length, 2);
});

test('thread: Lean\'s process exit from a thread unwinds its start routine and reports the code', async t => {
  const th = await startThread(t, { thread: (_, __, g) => { assert.deepEqual(g.runtimeCall(9, 4n), { status: 0, value: 0n }); return { status: 1, message: 'LASM_APPLICATION_EXIT' }; } });
  await th.run;
  assert.deepEqual(messages(th.parentPort, 'process-exit'), [{ kind: 'process-exit', pthread: '12288', code: 4 }]);
  assert.ok(!th.guest.calls.some(([name]) => name === '_emscripten_thread_exit'));
  // An exit request whose routine returns normally, or traps otherwise, is a failure.
  for (const outcome of [{ status: 0, value: 0n }, { status: 1, message: 'other trap' }]) {
    const other = await startThread(t, { thread: (_, __, g) => { g.runtimeCall(9, 4n); return outcome; } });
    await other.run;
    assert.equal(messages(other.parentPort, 'process-exit').length, 0);
    assert.equal(messages(other.parentPort, 'failure').length, 1);
  }
  // The root's messages to a thread: mailbox work only.
  const listening = await startThread(t, { thread: (_, __, g) => {
    const [listener] = g.parentPort.listeners('message');
    listener({ kind: 'mailbox' });
    listener({ kind: 'other' });
    return { status: 0, value: 0n };
  } });
  await listening.run;
  assert.match(messages(listening.parentPort, 'failure')[0].message, /Unknown thread command/);
});

// The diagnostic's 45-second deadline must not keep this test process alive.
const timeout = globalThis.setTimeout;
globalThis.setTimeout = (fn, ms, ...rest) => { const timer = timeout(fn, ms, ...rest); if (ms >= 15_000) timer.unref(); return timer; };

/** A diagnostic run of `name`: the root runs Lean's host itself and checks the application's output. */
async function startDiagnostic(t, { expected, extra = {}, nativeDriver } = {}) {
  FakeWorker.started.length = 0;
  const guest = spawning();
  const koffi = standInKoffi({ guestFor: () => guest, helper: { openat: () => 0, fstat: () => 0 } });
  if (nativeDriver) {
    globalThis.__lasmNativeApi = { open: library => { koffi.nativeLibrary = library; return nativeDriver(guest); } };
    extra = { nativeApi, ...extra };
  }
  const supervisor = new FakePort();
  const diagnostic = { name: '/probe/main', lean: '4.35.0', args: ['x'], expected, ...extra.diagnostic };
  const runOptions = options({ ...extra, diagnostic });
  const runtime = await importWithThread('wasmtime-runtime.mjs', { workerData: { runtimeRoot: true, options: runOptions }, parentPort: supervisor });
  const codes = exits(t);
  void runtime.runWasmtimeMain(runOptions).catch(() => {});
  await until(() => FakeWorker.started.length === 1 || supervisor.posted.length, 'the first thread');
  return { guest, koffi, supervisor, codes, worker: FakeWorker.started[0], runOptions };
}
/** A complete application run by its first thread: output, host operations, completion and exit. */
async function runDiagnosticThread(d, { code = 0 } = {}) {
  const { worker } = d;
  worker.emit('message', { kind: 'thread-ready', pthread: '12288', guestStackBytes: '65536', resolvedFunctionGlobals: resolvedGlobals });
  const out = Uint8Array.from(Buffer.from('hello\n'));
  assert.deepEqual(await rpc(worker, { kind: 'wasi-stdio', fd: 1, byteBuffer: out.buffer, byteOffset: 0, byteLength: out.length }).reply(), { errno: 0, written: 6 });
  assert.deepEqual(await rpc(worker, { kind: 'emscripten-output', fd: 2, text: 'warned' }).reply(), {});
  assert.deepEqual(await rpc(worker, { kind: 'emscripten-output', fd: 1, text: 'said' }).reply(), {});
  const path = await rpc(worker, hostPacket(24)).reply();
  assert.equal(Buffer.from(path.byteBuffer, path.byteOffset, path.byteLength).toString(), '/probe/main');
  // An asynchronous operation's start, readiness and completion (operations 91 and 92).
  const { id } = await rpc(worker, hostPacket(35, Buffer.alloc(0), 'start')).reply();
  assert.equal(typeof id, 'number');
  const completion = Uint8Array.from(Buffer.from('ready!!!'));
  const waiting = rpc(worker, hostPacket(92));
  const ready = await rpc(worker, { ...hostPacket(91, Buffer.from(completion)), handle: id }).reply();
  assert.equal(ready.byteLength, 0);
  const done = await waiting.reply();
  assert.equal(Buffer.from(done.byteBuffer, done.byteOffset, done.byteLength).toString(), 'ready!!!');
  assert.deepEqual(await rpc(worker, { ...hostPacket(0, Buffer.alloc(0), 'release'), handle: 99 }).reply(), {});
  assert.deepEqual(await rpc(worker, { kind: 'file-import', operation: 'close', fd: 77 }).reply(), { errno: 8 });
  worker.emit('message', { kind: 'thread-result', pthread: '12288', result: '0' });
  worker.emit('message', { kind: 'cleanup', pthread: 0x3000n });
  worker.emit('exit', 0);
  await until(() => d.guest.calls.some(([name]) => name === '_emscripten_thread_free_data'));
  worker.emit('message', { kind: 'process-exit', pthread: '12288', code });
}

test('diagnostic: the root serves Lean\'s host itself, then checks and reports the application\'s exact output', async t => {
  const d = await startDiagnostic(t, { expected: { code: 0, stdout: 'hello\nsaid\n', stderr: 'warned\n' }, extra: { diagnostic: { computationStackBytes: '65536' } } });
  await runDiagnosticThread(d);
  await until(() => d.supervisor.posted.length, 'the application result');
  const [message] = d.supervisor.posted;
  assert.equal(message.kind, 'application-result', JSON.stringify(message.result?.failure));
  const result = message.result;
  assert.equal(result.scope, 'Verified application main through a private Wasmtime host integration; not shipping acceptance');
  assert.deepEqual([result.application, result.lean, result.engine, result.version, result.args], ['/probe/main', '4.35.0', 'node', process.versions.node, ['x']]);
  assert.deepEqual([result.code, result.stdout, result.stderr], [0, 'hello\nsaid\n', 'warned\n']);
  assert.equal(result.stdoutBase64, Buffer.from('hello\nsaid\n').toString('base64'));
  assert.equal(result.stderrBase64, Buffer.from('warned\n').toString('base64'));
  assert.deepEqual(result.threads, [{ ready: { kind: 'thread-ready', pthread: '12288', guestStackBytes: '65536', resolvedFunctionGlobals: resolvedGlobals },
    result: { kind: 'thread-result', pthread: '12288', result: '0' }, cleaned: true, exited: true, strongref: false }]);
  assert.deepEqual(result.trace.map(e => e.kind), ['spawn', 'thread-ready', 'thread-result', 'cleanup']);
  assert.deepEqual(result.trace[0], { kind: 'spawn', pthread: '12288', start: '85' });
  assert.deepEqual(result.trace[3], { kind: 'cleanup', pthread: '12288' });
  assert.deepEqual(result.hostOperations.map(o => [o.wasi ?? o.operation, o.mode, o.inputBytes, o.thread]), [['fd_write', undefined, 6, '12288'],
    [24, 'request', 0, '12288'], [35, 'start', 0, '12288'], [92, 'request', 0, '12288'], [91, 'request', 8, '12288'], [0, 'release', 0, '12288']]);
  assert.equal(result.hostOperations[0].fd, 1);
  assert.equal(result.sharedBytes, String(1 << 20));
  assert.equal(result.wasmEntry, 'Koffi synchronous FFI');
  assert.equal(result.controlStackBytes, 12 * MiB);
  assert.equal(result.nativeStackOverflowControl, false);
  assert.equal(result.leanStackSizeKb, process.env.LEAN_STACK_SIZE_KB);
  assert.equal(result.termination, 'Native process exit reclaims remaining workers after host output is flushed');
  assert.deepEqual(result.resolvedFunctionGlobals, resolvedGlobals);
  assert.deepEqual(d.codes, []);
});

test('diagnostic: output, code or thread results that differ from the expectation fail with the trace', async t => {
  for (const [expected, extra, cause] of [
    [{ code: 0, stdout: 'other\n', stderr: 'warned\n' }, {}, /Expected values to be strictly equal/],
    [{ code: 0, stdout: 'hello\nsaid\n', stderr: '' }, {}, /Expected values to be strictly equal/],
    [{ code: 1, stdout: 'hello\nsaid\n', stderr: 'warned\n' }, {}, /Expected values to be strictly equal/],
    [{ code: 0, stdout: 'hello\nsaid\n', stderr: 'warned\n', stdoutBase64: Buffer.from('hello\nsaid!').toString('base64') }, {}, /stdout bytes differ/],
    [{ code: 0, stdout: 'hello\nsaid\n', stderr: 'warned\n', stderrBase64: 'AA==' }, {}, /stderr bytes differ/],
    [{ code: 0, stdout: 'hello\nsaid\n', stderr: 'warned\n' }, { diagnostic: { computationStackBytes: '1024' } }, /./],
  ]) {
    const d = await startDiagnostic(t, { expected, extra });
    await runDiagnosticThread(d);
    await until(() => d.supervisor.posted.length, 'a report');
    const [report] = d.supervisor.posted;
    assert.equal(report.kind, 'diagnostic-failure');
    assert.match(report.result.failure, cause);
    assert.ok(Array.isArray(report.result.trace) && Array.isArray(report.result.hostOperations), 'the diagnostic trace');
    assert.equal(d.codes[0], 1);
  }
  // LEAN_STACK_SIZE_KB must be what the diagnostic expects, before anything native is loaded.
  const koffi = standInKoffi({ guestFor: () => assert.fail('created') });
  const runOptions = options({ diagnostic: { name: '/probe/main', lean: '4.35.0', args: [], leanStackSizeKb: 'not-set-here' } });
  const runtime = await importWithThread('wasmtime-runtime.mjs', { workerData: { runtimeRoot: true, options: runOptions }, parentPort: new FakePort() });
  await assert.rejects(runtime.runWasmtimeMain(runOptions), /strictly equal/);
  assert.deepEqual(koffi.loaded, []);
});

/** The direct Node-API driver over a stand-in guest. */
const driverFor = (calls, { stack = 0n } = {}) => guest => ({
  call: (address, name, args, resultCount) => { assert.equal(address, guest.address); calls.push(['call', name, resultCount]); return guest.invoke(name, args); },
  wait: (address, signal, expected, timeout) => { calls.push(['wait', expected, timeout]); guest.onWait?.(signal, expected, timeout); },
  pointer: (address, start, argument) => { calls.push(['pointer', start, argument]); const outcome = guest.thread(start, argument, guest); if (outcome.status) throw new Error(outcome.message); return outcome.value; },
  stackControl: address => { calls.push(['stackControl']); return stack; },
});

test('native driver: calls, waits and thread entries go through the direct Node-API driver', async t => {
  const calls = [];
  const d = await startDiagnostic(t, { expected: { code: 0, stdout: 'hello\nsaid\n', stderr: 'warned\n' }, nativeDriver: driverFor(calls) });
  assert.equal(d.koffi.nativeLibrary, '/stand-in/host/instance.so');
  assert.ok(d.koffi.signatures[0].includes('lasm_lean_instance_new_large('));
  assert.deepEqual(calls.slice(0, 2), [['stackControl'], ['call', 'emscripten_stack_init', 0]]);
  await runDiagnosticThread(d);
  await until(() => d.supervisor.posted.length);
  const { result } = d.supervisor.posted[0];
  assert.equal(result.wasmEntry, 'direct Node-API on verified worker stacks');
  assert.equal(result.controlStackBytes, 64 * MiB);
  assert.equal(result.nativeStackOverflowControl, true);
  // A driver without stack-overflow control fails the diagnostic.
  const failing = await startDiagnostic(t, { expected: {}, nativeDriver: driverFor([], { stack: 1n }) });
  await until(() => failing.supervisor.posted.length);
  assert.equal(failing.supervisor.posted[0].kind, 'diagnostic-failure');
});

test('native driver: a guest thread enters through it, and Lean\'s exit unwinds it', async t => {
  const bound = [];
  const g2 = new Guest({ self: 0x3000n, thread: (_, __, g) => ({ status: 0, value: BigInt(g.spawn.fn(0x4000n, 1n, 1n)) }) });
  g2.setU64(0x3000n + 80n, 0x70000n); g2.setU64(0x3000n + 88n, 0x10000n);
  standInKoffi({ guestFor: () => g2 });
  globalThis.__lasmNativeApi = { open: () => driverFor(bound)(g2) };
  let pending;
  const parentPort = new FakePort(message => { if (message.kind === 'rpc') pending = message; });
  g2.onWait = (signal, expected) => {
    if (expected === 0) g2.setU32(signal, 1);
    else { pending.port.postMessage(encodeFileMessage({ status: 2 }).message); }
  };
  const runOptions = options({ nativeApi });
  const runtime = await importWithThread('wasmtime-runtime.mjs', { workerData: { options: runOptions, parent: 1n, pthread: 0x3000n, start: 0x55n, argument: 0x66n }, parentPort });
  await runtime.runWasmtimeMain(runOptions);
  const ready = parentPort.posted.find(m => m.kind === 'thread-ready');
  assert.equal(ready.wasmEntry, 'direct Node-API');
  assert.equal(ready.wasmControlStackBudget, 64 * MiB);
  assert.deepEqual(parentPort.posted.find(m => m.kind === 'thread-result').result, '2');
  assert.deepEqual(bound.filter(([kind]) => kind === 'wait'), [['wait', 0, 100], ['wait', 1, 1]]);
  assert.deepEqual(bound.find(([kind]) => kind === 'pointer'), ['pointer', 0x55n, 0x66n]);
  // Exit through the driver: the routine throws the exit trap.
  const g3 = new Guest({ self: 0x3000n, thread: (_, __, g) => { g.runtimeCall(9, 5n); return { status: 1, message: 'LASM_APPLICATION_EXIT: unwound' }; } });
  g3.setU64(0x3000n + 80n, 0x70000n); g3.setU64(0x3000n + 88n, 0x10000n);
  standInKoffi({ guestFor: () => g3 });
  globalThis.__lasmNativeApi = { open: () => driverFor([])(g3) };
  const port3 = new FakePort();
  const runtime3 = await importWithThread('wasmtime-runtime.mjs', { workerData: { options: runOptions, parent: 1n, pthread: 0x3000n, start: 1n, argument: 1n }, parentPort: port3 });
  await runtime3.runWasmtimeMain(runOptions);
  assert.deepEqual(port3.posted.find(m => m.kind === 'process-exit'), { kind: 'process-exit', pthread: '12288', code: 5 });
  void t;
});
