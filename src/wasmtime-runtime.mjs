// Shared standalone memory64 runner under acceptance. Unknown imports fail
// explicitly. Managed CLI selection and reusable instance disposal remain separate.
import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { Worker, MessageChannel, receiveMessageOnPort, isMainThread, parentPort, workerData } from 'node:worker_threads';
import { fileURLToPath } from 'node:url';
import { existsSync, writeSync } from 'node:fs';
import { cpus } from 'node:os';
import { hashWasmtimeFile as hashFile } from './wasmtime-artifact.mjs';
import { createNodeRuntimeHost, LeanExit } from './node-host.mjs';
import nativeThreadId from './thread-id.cjs';
import forwardWorkerStdio from './worker-stdio.cjs';
import { writeWasiStdio } from './wasmtime-wasi-stdio.mjs';
import { nativeFiles } from './native-files.mjs';
import { readGuestBytes, writeGuestBytes } from './wasmtime-guest-memory.mjs';
import { invokeConsoleImport } from './wasmtime-console.mjs';
import cwdFactory from './native-pthread-factory.cjs';

export async function runWasmtimeMain(options) {
const { helper: libraryPath, cache, cacheSha256: expectedHash, nativeApi: nativeApiPath,
  programName, leanVersion, args, diagnostic } = options;
const check = diagnostic ?? { name: programName, lean: leanVersion, args };
assert.equal(typeof check.name, 'string'); assert.ok(check.name && !check.name.includes('\0'));
assert.match(check.lean, /^\d+\.\d+\.\d+$/);
assert.ok(Array.isArray(check.args) && check.args.every(arg => typeof arg === 'string' && !arg.includes('\0')));
assert.match(expectedHash, /^[0-9a-f]{64}$/);
const require = createRequire(import.meta.url);
const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
const ffi = require(existsSync(bundled) ? fileURLToPath(bundled) : 'koffi');
ffi.config({ sync_stack_size: 16 * 1024 ** 2 });
const isRuntimeRoot = isMainThread || workerData?.runtimeRoot === true;
const nativeDriver = nativeApiPath ? createRequire(import.meta.url)(nativeApiPath).open(libraryPath) : null;
const controlStackBytes = (nativeDriver ? 64 : 12) * 1024 ** 2;
if (isRuntimeRoot) assert.equal(await hashFile(cache), expectedHash);
if (check.leanStackSizeKb !== undefined) assert.equal(process.env.LEAN_STACK_SIZE_KB, check.leanStackSizeKb);
assert.equal(Atomics.wait(new Int32Array(new SharedArrayBuffer(4)), 0, 1, 0), 'not-equal');
const library = ffi.load(libraryPath);
const clockType = ffi.proto('double lasm_main_clock(void)');
const mailboxType = ffi.proto('int32_t lasm_main_mailbox(uint64_t target, uint64_t sender)');
const spawnType = ffi.proto('int32_t lasm_main_spawn(uint64_t pthread, uint64_t start, uint64_t argument)');
const eventType = ffi.proto('int32_t lasm_main_event(uint32_t event, uint64_t pthread)');
const runtimeType = ffi.proto('int32_t lasm_main_runtime(uint32_t kind, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t *result)');
const create = library.func(`void *${nativeDriver ? 'lasm_lean_instance_new_large' : 'lasm_lean_instance_new'}(str trusted_cache, void *clock, void *mailbox, const uint8_t *environment, size_t environment_size, size_t environment_count, str program_name, void *parent, void *spawn, void *thread_event, char *error, size_t capacity)`);
const destroy = library.func('void lasm_lean_instance_delete(void *probe)');
const call = library.func('int lasm_lean_instance_call(void *probe, str name, const uint64_t *args, size_t nargs, uint32_t result_count, _Out_ uint64_t *result, char *error, size_t capacity)');
const details = library.func('void lasm_lean_instance_details(void *probe, _Out_ uint64_t *values)');
const window = library.func('void *lasm_lean_instance_memory_window(void *probe, uint64_t offset, size_t length)');
const registerMailbox = library.func('int lasm_lean_instance_mailbox_register(void *probe, uint64_t pthread, char *error, size_t capacity)');
const callPointer = library.func('int lasm_lean_instance_call_pointer(void *probe, uint64_t pointer, uint64_t argument, _Out_ uint64_t *result, char *error, size_t capacity)');
const nativeStack = library.func('uint64_t lasm_lean_native_stack_bytes(void)');
const setRuntime = library.func('void lasm_lean_instance_set_runtime(void *probe, void *callback)');
const countGlobals = library.func('uint64_t lasm_lean_instance_function_global_count(void *probe)');
const getGlobal = library.func('int lasm_lean_instance_function_global(void *probe, str name, _Out_ uint64_t *pointer, char *error, size_t capacity)');
const signalLoad = library.func('uint32_t lasm_lean_signal_load(void *probe, uint64_t offset)');
const signalStore = library.func('int lasm_lean_signal_store(void *probe, uint64_t offset, uint32_t value)');
const signalWait = library.func('int lasm_lean_signal_wait(void *probe, uint64_t offset, uint32_t expected, double timeout, char *error, size_t capacity)');
const error = Buffer.alloc(8192), message = () => error.toString('utf8').split('\0')[0];
const quiet = { push() {} };
const workers = new Map(), timers = new Set(), registered = [], trace = diagnostic ? [] : quiet;
const stdout = [], stderr = [], hostOperations = diagnostic ? [] : quiet, completions = [];
let completionWaiter, response = new Uint8Array(0), requestedExit;
let workerMessageListener;
let cwdWorker;
const host = isRuntimeRoot && diagnostic ? createNodeRuntimeHost({ leanVersion: check.lean, args: check.args, appPath: check.name,
  stdio: { stdout: bytes => stdout.push(Buffer.from(bytes)), stderr: bytes => stderr.push(Buffer.from(bytes)) } }) : null;
let probe, resolvedFunctionGlobals, closed = false, ownPthread, callbackError, settled = false;
let resolveOutcome, rejectOutcome;
const outcome = new Promise((resolve, reject) => { resolveOutcome = resolve; rejectOutcome = reject; });
outcome.catch(() => {});
function fail(error) {
  callbackError = error;
  if (isRuntimeRoot) {
    // A blocked native Wasm call cannot be interrupted by Worker.terminate().
    // This diagnostic owns its child process: fail the whole process and let
    // the OS reclaim its threads, without deleting Stores still in use.
    const result = { failure: error.stack ?? String(error), ...(diagnostic ? { trace, hostOperations } : {}) };
    if (isMainThread) writeSync(2, JSON.stringify(result) + '\n');
    else parentPort.postMessage({ kind: 'diagnostic-failure', result });
    process.exit(1);
  }
  parentPort.postMessage({ kind: 'failure', message: error.stack ?? String(error) });
  if (!settled) { settled = true; rejectOutcome(error); }
}
function callback(fn, type) { const pointer = ffi.register(fn, ffi.pointer(type)); registered.push(pointer); return pointer; }
function invoke(name, args = [], resultCount = 1) {
  if (nativeDriver) return nativeDriver.call(ffi.address(probe), name, args.map(BigInt), resultCount);
  const result = [0];
  assert.equal(call(probe, name, args, args.length, resultCount, result, error, error.length), 0, `${name}: ${message()}`);
  return BigInt(result[0]);
}
function waitSignal(signal, expected, timeout) {
  if (nativeDriver) nativeDriver.wait(ffi.address(probe), signal, expected, timeout);
  else assert.equal(signalWait(probe, signal, expected, timeout, error, error.length), 0, message());
}
function view(offset, size = 8) {
  const pointer = window(probe, offset, size); assert.ok(pointer, 'Guest view must be bounded');
  return new DataView(ffi.view(pointer, size));
}
function snapshot() { const values = Array(26).fill(0); details(probe, values); return values.map(BigInt); }
function readGuest(offset, length) {
  return readGuestBytes({ offset, length, memoryBytes: snapshot()[3], view });
}
function writeGuest(offset, bytes) {
  writeGuestBytes({ offset, bytes, memoryBytes: snapshot()[3], view });
}
function rpc(request) {
  assert.ok(!isRuntimeRoot);
  const signal = invoke('malloc', [4n]); assert.ok(signal);
  const channel = new MessageChannel();
  try {
    assert.equal(signalStore(probe, signal, 0), 0);
    parentPort.postMessage({ kind: 'rpc', request, signal, port: channel.port2, sender: ownPthread }, [channel.port2]);
    const deadline = diagnostic ? Date.now() + 15_000 : Infinity;
    while (signalLoad(probe, signal) === 0) {
      assert.ok(Date.now() < deadline, 'Guest RPC deadline');
      // Real guest futex waiting services Wasm mailbox work while JS is blocked.
      waitSignal(signal, 0, 100);
    }
    let packet;
    while (!(packet = receiveMessageOnPort(channel.port1))) {
      assert.ok(Date.now() < deadline, 'RPC packet deadline');
      waitSignal(signal, 1, 1);
    }
    if (packet.message.failure) throw new Error(packet.message.failure);
    return packet.message;
  } finally { channel.port1.close(); invoke('free', [signal], 0); }
}
async function cleanupThread(pthread) {
  const record = workers.get(String(pthread));
  assert.ok(record && !record.cleaned && !record.cleaning, 'Only one owner may reclaim a known thread');
  record.cleaning = true;
  await record.exit;
  assert.ok(record.result, 'Thread must complete its guest exit before reclamation');
  invoke('_emscripten_thread_free_data', [pthread], 0);
  record.cleaned = true;
  trace.push({ kind: 'cleanup', pthread: String(pthread) });
  if (!diagnostic) workers.delete(String(pthread));
}
async function handleRpc({ request, signal, port, sender }) {
  try {
    assert.ok(workers.has(String(sender)), 'RPC sender must be a known guest thread');
    let result;
    if (request.kind === 'spawn') result = { status: spawnWorker(request.pthread, request.start, request.argument) };
    else if (request.kind === 'cleanup') { await cleanupThread(request.pthread); result = {}; }
    else if (!diagnostic && ['wasi-stdio', 'emscripten-output', 'host'].includes(request.kind)) {
      const channel = new MessageChannel();
      try {
        const response = new Promise((resolve, reject) => {
          channel.port1.once('message', packet => {
            if (packet.exit) reject(new LeanExit(packet.exit.code, packet.exit.force));
            else if (packet.failure) reject(new Error(packet.failure));
            else resolve(packet.result);
          });
          channel.port1.once('messageerror', reject);
        });
        parentPort.postMessage({ kind: 'host-request', request, sender, port: channel.port2 }, [channel.port2]);
        result = await response;
      } finally { channel.port1.close(); }
    }
    else if (request.kind === 'wasi-stdio') {
      assert.ok(request.fd === 1 || request.fd === 2);
      const bytes = new Uint8Array(request.byteBuffer, request.byteOffset, request.byteLength);
      hostOperations.push({ wasi: 'fd_write', fd: request.fd, inputBytes: bytes.length, thread: String(sender) });
      const captured = await host.request(3, request.fd, 0n, bytes, { fiber: Number(sender) });
      assert.equal(captured.error, false); assert.equal(captured.bytes.length, 0);
      result = { errno: 0, written: bytes.length };
    }
    else if (request.kind === 'emscripten-output') {
      assert.ok(request.fd === 1 || request.fd === 2);
      assert.equal(typeof request.text, 'string');
      (request.fd === 1 ? stdout : stderr).push(Buffer.from(request.text + '\n'));
      result = {};
    }
    else if (request.kind === 'host') {
      const { operation, handle, argument, mode } = request;
      const bytes = new Uint8Array(request.byteBuffer, request.byteOffset, request.byteLength);
      hostOperations.push({ operation, handle, mode, inputBytes: bytes.length, thread: String(sender) });
      const args = [operation, handle, argument, bytes, { fiber: Number(sender), nativeThreadId: request.nativeThreadId }];
      if (mode === 'start') result = { id: host.start(...args) };
      else if (mode === 'release') { await host.releaseAsync(handle); result = {}; }
      else if (operation === 91) {
        host.whenReady(handle).then(() => {
          const entry = { error: false, bytes };
          if (completionWaiter) { const resolve = completionWaiter; completionWaiter = undefined; resolve(entry); }
          else completions.push(entry);
        }).catch(fail);
        result = { error: false, bytes: new Uint8Array(0) };
      } else if (operation === 92) result = completions.length ? completions.shift()
        : await new Promise(resolve => { assert.ok(!completionWaiter); completionWaiter = resolve; });
      else result = await host.request(...args);
      if (result.bytes !== undefined) result = { error: result.error, byteBuffer: result.bytes.buffer,
        byteOffset: result.bytes.byteOffset, byteLength: result.bytes.byteLength };
    }
    else throw new Error(`Unknown RPC ${request.kind}`);
    port.postMessage(result);
  } catch (error) {
    if (error instanceof LeanExit && !diagnostic) { void finishApplication(error.code, error.force).catch(fail); return; }
    port.postMessage({ failure: error.stack ?? String(error) }); fail(error);
  }
  finally {
    assert.equal(signalStore(probe, signal, 1), 0);
    invoke('emscripten_futex_wake', [signal, 1n]); port.close();
  }
}
function scheduleMailbox() {
  const timer = setTimeout(() => {
    timers.delete(timer);
    if (closed) return;
    try { if (invoke('pthread_self')) invoke('_emscripten_check_mailbox', [], 0); }
    catch (error) { fail(error); }
  });
  timers.add(timer);
}
function routeMailbox(target, sender) {
  target = BigInt(target); sender = BigInt(sender);
  if (target === ownPthread) { scheduleMailbox(); return 1; }
  if (!isRuntimeRoot) { parentPort.postMessage({ kind: 'mailbox', target, sender }); return 1; }
  const record = workers.get(String(target));
  if (!record || record.exited) return 0;
  record.worker.postMessage({ kind: 'mailbox' }); return 1;
}
function spawnWorker(pthread, start, argument) {
  const key = String(pthread);
  assert.ok(!workers.has(key) || workers.get(key).cleaned, 'Live thread cannot be replaced');
  const nodeStdio = !process.versions.deno && !process.versions.bun;
  let RuntimeWorker = Worker;
  if (process.versions.deno) {
    try { Deno.cwd(); }
    catch (error) {
      if (error.name !== 'NotFound' && error.name !== 'InvalidData' && error.code !== 'ENOENT') throw error;
      cwdWorker ??= cwdFactory.createCwdWorkerFactory();
      RuntimeWorker = cwdWorker;
    }
  }
  const worker = new RuntimeWorker(new URL('./wasmtime-worker.mjs', import.meta.url), {
    ...(nodeStdio ? { stdout: true, stderr: true,
      // Internal workers have their own resourceLimits. Explicitly replaying
      // parent V8 flags (such as --max-old-space-size) is invalid in Node.
      execArgv: ['--require', fileURLToPath(new URL('./native-worker-cwd.cjs', import.meta.url))] } : {}), resourceLimits: {
    stackSizeMb: 96, maxOldGenerationSizeMb: 128,
  }, workerData: { options, parent: ffi.address(probe), pthread, start, argument } });
  const record = { worker, pthread, start, argument, exited: false };
  workers.set(key, record);
  trace.push({ kind: 'spawn', pthread: key, start: String(start) });
  worker.on('message', value => {
    try {
      if (value.kind === 'failure') throw new Error(value.message);
      if (value.kind === 'mailbox') assert.equal(routeMailbox(value.target, value.sender), 1);
      else if (value.kind === 'rpc') { assert.equal(value.sender, pthread); handleRpc(value).catch(fail); }
      else if (value.kind === 'cleanup') cleanupThread(value.pthread).catch(fail);
      else if (value.kind === 'process-exit') {
        assert.equal(value.pthread, String(pthread));
        record.processExit = value.code;
        finishApplication(value.code).catch(fail);
      } else if (value.kind === 'thread-ready') {
        assert.deepEqual(value.resolvedFunctionGlobals, resolvedFunctionGlobals);
        record.ready = value; trace.push(value);
      }
      else if (value.kind === 'thread-result') {
        record.result = value; trace.push(value);
      } else if (value.kind !== 'mailbox') throw new Error(`Unknown worker message ${value.kind}`);
    } catch (error) { fail(error); }
  });
  worker.on('error', fail);
  if (nodeStdio) forwardWorkerStdio(worker);
  record.exit = new Promise(resolve => worker.once('exit', code => {
    record.exited = true; record.code = code; resolve();
    if (!closed && !record.result && record.processExit === undefined) fail(new Error(`Application worker exited before completion: ${code}`));
  }));
  return 0;
}
const clock = callback(() => Date.now(), clockType);
const mailbox = callback((target, sender) => {
  try { return routeMailbox(target, sender); } catch (error) { fail(error); return 0; }
}, mailboxType);
const events = callback((kind, pthread) => {
  try {
    pthread = BigInt(pthread);
    if (isRuntimeRoot && kind === 2) {
      const record = workers.get(String(pthread)); assert.ok(record && !record.exited);
      record.worker.ref(); record.strongref = true; return 1;
    }
    if (!isRuntimeRoot && kind === 0 && pthread === workerData.pthread) return 1;
    if (!isRuntimeRoot && kind === 1) {
      if (invoke('pthread_self')) rpc({ kind: 'cleanup', pthread });
      else parentPort.postMessage({ kind: 'cleanup', pthread });
      return 1;
    }
    return 0;
  } catch (error) { fail(error); return 0; }
}, eventType);
const spawn = callback((pthread, start, argument) => {
  try {
    pthread = BigInt(pthread); start = BigInt(start); argument = BigInt(argument);
    return isRuntimeRoot ? spawnWorker(pthread, start, argument) : rpc({ kind: 'spawn', pthread, start, argument }).status;
  }
  catch (error) { fail(error); return 6; }
}, spawnType);
const runtime = callback((kind, a, b, c, d, e, output) => {
  try {
    let result = 0n;
    if (kind === 1) result = BigInt(process.platform === 'win32' ? 1 : process.platform === 'darwin' ? 2 : 0);
    else if (kind === 2 || kind === 4 || kind === 5) {
      const input = kind === 5 ? new Uint8Array(0) : readGuest(d, e);
      const packet = rpc({ kind: 'host', mode: kind === 2 ? 'request' : kind === 4 ? 'start' : 'release',
        operation: kind === 5 ? 0 : Number(a), handle: Number(kind === 5 ? a : b), argument: BigInt(c),
        nativeThreadId: kind !== 5 && Number(a) === 37 ? nativeThreadId() : undefined,
        byteBuffer: input.buffer, byteOffset: input.byteOffset, byteLength: input.byteLength });
      if (kind === 2) {
        response = new Uint8Array(packet.byteBuffer, packet.byteOffset, packet.byteLength);
        result = packet.error ? -BigInt(response.length) - 1n : BigInt(response.length);
      } else if (kind === 4) result = BigInt(packet.id);
    } else if (kind === 3) {
      assert.equal(Number(b), response.length); writeGuest(a, response); response = new Uint8Array(0);
    } else if (kind === 6) result = BigInt.asUintN(32, invoke('pthread_self'));
    else if (kind === 7) result = BigInt(cpus().length);
    else if (kind === 8) {
      // This private driver installs no JS keepalive callbacks. General event
      // loop integration is a separate acceptance gate.
      result = 0n;
    } else if (kind === 9) { assert.ok(!isRuntimeRoot); requestedExit = Number(a); }
    else if (kind === 10) result = BigInt(writeWasiStdio({ fd: Number(a), iovs: b, count: c, nwritten: d,
      memoryBytes: snapshot()[3], read: readGuest, write: writeGuest,
      sink: (fd, bytes) => rpc({ kind: 'wasi-stdio', fd,
        byteBuffer: bytes.buffer, byteOffset: bytes.byteOffset, byteLength: bytes.byteLength }) }));
    else if (kind >= 11 && kind <= 16) invokeConsoleImport({ kind, pointer: a, memoryBytes: snapshot()[3], view,
      out: text => isRuntimeRoot ? diagnostic ? stdout.push(Buffer.from(text + '\n'))
        : parentPort.postMessage({ kind: 'host-notification', request: { kind: 'emscripten-output', fd: 1, text } })
        : rpc({ kind: 'emscripten-output', fd: 1, text }),
      err: text => isRuntimeRoot ? diagnostic ? stderr.push(Buffer.from(text + '\n'))
        : parentPort.postMessage({ kind: 'host-notification', request: { kind: 'emscripten-output', fd: 2, text } })
        : rpc({ kind: 'emscripten-output', fd: 2, text }) });
    else throw new Error(`Unknown runtime callback ${kind}`);
    ffi.encode(output, 'uint64_t', BigInt.asUintN(64, result));
    return 0;
  } catch (error) { fail(error); return 1; }
}, runtimeType);
async function finishApplication(code, force = false) {
  if (settled) return;
  settled = true;
  if (!diagnostic) {
    parentPort.postMessage({ kind: 'application-exit', code, force });
    await new Promise(() => {}); // The supervisor flushes and exits its process.
  }
  if (!force) {
    await host.flushStdIO();
  }
  host.close(force ? new LeanExit(code, true) : undefined);
  assert.equal(code, check.expected.code);
  const buffers = { stdout: Buffer.concat(stdout), stderr: Buffer.concat(stderr) };
  const observed = { code, stdout: buffers.stdout.toString(), stderr: buffers.stderr.toString(),
    stdoutBase64: buffers.stdout.toString('base64'), stderrBase64: buffers.stderr.toString('base64') };
  assert.equal(observed.stdout, check.expected.stdout); assert.equal(observed.stderr, check.expected.stderr);
  // Older UTF-8-only probe descriptions remain usable. New native oracles
  // carry raw bytes so different invalid UTF-8 sequences cannot compare equal.
  for (const stream of ['stdout', 'stderr']) {
    const expected = check.expected[stream + 'Base64'] ?? Buffer.from(check.expected[stream], 'utf8').toString('base64');
    assert.equal(observed[stream + 'Base64'], expected, stream + ' bytes differ');
  }
  const threadResults = [...workers.values()].map(record => ({ ready: record.ready, result: record.result,
    cleaned: !!record.cleaned, exited: record.exited, strongref: !!record.strongref }));
  // Lean 4.34 runtime/thread.cpp adds LEAN_STACK_BUFFER_SPACE (128 KiB) to
  // LEAN_STACK_SIZE_KB. Verify its exact real allocation, without reducing it.
  assert.ok(threadResults.some(record => (!check.computationStackBytes || record.ready?.guestStackBytes === check.computationStackBytes)
    && record.cleaned && record.exited && record.result?.result === '0'));
  const output = { scope: 'Verified application main through a private Wasmtime host integration; not shipping acceptance',
    application: check.name, lean: check.lean,
    engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
    version: process.versions.bun ?? process.versions.deno ?? process.versions.node,
    args: check.args, leanStackSizeKb: process.env.LEAN_STACK_SIZE_KB, ...observed,
    threads: threadResults, trace, hostOperations, sharedBytes: String(snapshot()[3]),
    wasmEntry: nativeDriver ? 'direct Node-API on verified worker stacks' : 'Koffi synchronous FFI',
    controlStackBytes, nativeStackOverflowControl: !!nativeDriver, resolvedFunctionGlobals,
    termination: 'Native process exit reclaims remaining workers after host output is flushed' };
  if (!isMainThread) {
    parentPort.postMessage({ kind: 'application-result', result: output });
    await new Promise(() => {}); // Supervisor owns whole-process termination.
  }
  writeSync(1, JSON.stringify(output) + '\n');
  process.exit(0);
}
const environment = nativeFiles().environmentEntries().map(([key, value]) =>
  Buffer.concat([key, Buffer.from('='), value, Buffer.from([0])]));
const bytes = Buffer.concat(environment);
probe = create(isRuntimeRoot ? cache : null, clock, mailbox, bytes, bytes.length, environment.length,
  check.name, isRuntimeRoot ? null : workerData.parent, spawn, events, error, error.length);
try {
  assert.ok(probe, message());
  setRuntime(probe, runtime);
  assert.equal(BigInt(countGlobals(probe)), 6n, 'Pinned Lean module imports six console function globals');
  resolvedFunctionGlobals = ['emscripten_console_log', 'emscripten_console_error', 'emscripten_console_warn',
    'emscripten_console_trace', 'emscripten_out', 'emscripten_err'].map(name => {
    const pointer = [0]; assert.equal(getGlobal(probe, name, pointer, error, error.length), 0, message());
    assert.ok(BigInt(pointer[0]) > 0n);
    return { name, pointer: String(pointer[0]) };
  });
  if (!isRuntimeRoot) {
    const stackBytes = Number(nativeStack());
    assert.ok(stackBytes >= 80 * 1024 ** 2, `Native worker stack ${stackBytes} must preserve the JS callback reservation`);
    assert.equal(ffi.config().sync_stack_size, 16 * 1024 ** 2);
    const { pthread, start, argument } = workerData;
    const top = view(pthread + 80n).getBigUint64(0, true), size = view(pthread + 88n).getBigUint64(0, true);
    assert.ok(size && top > size && top <= snapshot()[3]);
    invoke('emscripten_stack_set_limits', [top, top - size], 0);
    invoke('__set_stack_limits', [top, top - size], 0);
    invoke('_emscripten_stack_restore', [top], 0);
    invoke('_emscripten_thread_init', [pthread, 0n, 0n, 1n, 0n, 0n], 0);
    invoke('_emscripten_tls_init');
    assert.equal(invoke('pthread_self'), pthread);
    assert.equal(registerMailbox(probe, pthread, error, error.length), 0, message());
    ownPthread = pthread;
    assert.equal(invoke('_emscripten_dlsync_self'), 1n);
    parentPort.postMessage({ kind: 'thread-ready', pthread: String(pthread),
      guestStackBytes: String(size), nativeStackBytes: stackBytes,
      ffiStackBytes: ffi.config().sync_stack_size, wasmControlStackBudget: controlStackBytes,
      wasmEntry: nativeDriver ? 'direct Node-API' : 'FFI', resolvedFunctionGlobals });
    workerMessageListener = value => {
      if (value.kind === 'mailbox') scheduleMailbox(); else fail(new Error('Unknown thread command'));
    };
    parentPort.on('message', workerMessageListener);
    const result = [0];
    let status = 0, trapMessage;
    if (nativeDriver) {
      try { result[0] = nativeDriver.pointer(ffi.address(probe), start, argument); }
      catch (failure) { status = 1; trapMessage = failure.message; }
    } else status = callPointer(probe, start, argument, result, error, error.length);
    if (requestedExit !== undefined) {
      assert.equal(status, 1); assert.match(trapMessage ?? message(), /LASM_APPLICATION_EXIT/);
      parentPort.postMessage({ kind: 'process-exit', pthread: String(pthread), code: requestedExit });
    } else {
      assert.equal(status, 0, trapMessage ?? message()); invoke('_emscripten_thread_exit', [BigInt(result[0])], 0);
      parentPort.postMessage({ kind: 'thread-result', pthread: String(pthread), result: String(result[0]),
        guestStackBytes: String(size), nativeStackBytes: stackBytes });
    }
  } else {
    if (nativeDriver) {
      assert.ok(Number(nativeStack()) >= 80 * 1024 ** 2);
      if (diagnostic) assert.equal(nativeDriver.stackControl(ffi.address(probe)), 0n);
    }
    invoke('emscripten_stack_init', [], 0);
    invoke('__set_stack_limits', [invoke('emscripten_stack_get_base'), invoke('emscripten_stack_get_end')], 0);
    invoke('__wasm_call_ctors', [], 0);
    ownPthread = invoke('pthread_self');
    const args = [check.name, ...check.args], pointers = [];
    for (const arg of args) {
      const text = Buffer.from(arg + '\0'), pointer = invoke('malloc', [BigInt(text.length)]);
      assert.ok(pointer); writeGuest(pointer, text); pointers.push(pointer);
    }
    const argv = invoke('calloc', [BigInt(args.length + 1), 8n]); assert.ok(argv);
    for (const [index, pointer] of pointers.entries()) view(argv + BigInt(index * 8)).setBigUint64(0, pointer, true);
    assert.equal(invoke('_emscripten_proxy_main', [BigInt(args.length), argv]), 0n);
    if (callbackError) throw callbackError;
    const timer = diagnostic ? setTimeout(() => fail(new Error('Application main diagnostic deadline')), 45_000) : undefined;
    try { await outcome; } finally { clearTimeout(timer); }
  }
} catch (error) {
  if (!isRuntimeRoot) parentPort.postMessage({ kind: 'failure', message: error.stack ?? String(error) });
  else fail(error);
} finally {
  closed = true;
  for (const timer of timers) clearTimeout(timer);
  for (const record of workers.values()) if (!record.exited) { await record.worker.terminate(); await record.exit; }
  if (probe) destroy(probe);
  host?.close();
  await cwdWorker?.dispose();
  for (const pointer of registered) ffi.unregister(pointer);
  if (!isRuntimeRoot) {
    if (workerMessageListener) parentPort.off('message', workerMessageListener);
    parentPort.close?.();
    // Deno's Node parentPort is an EventEmitter without MessagePort.close.
    // Its underlying worker supplies the standard WorkerGlobalScope.close.
    globalThis.close?.();
  }
}

}
