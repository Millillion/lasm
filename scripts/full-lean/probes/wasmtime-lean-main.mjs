// Diagnostic integration of a verified compiled application's ordinary main.
// Unknown imports must fail explicitly; this is not the shipping backend.
import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { Worker, MessageChannel, receiveMessageOnPort, isMainThread, parentPort, workerData } from 'node:worker_threads';
import { fileURLToPath } from 'node:url';
import { readFileSync, writeSync } from 'node:fs';
import { cpus } from 'node:os';
import { hashFile } from '../../../src/managed-artifacts.mjs';
import { prepareBunStack } from '../../../src/bun-stack.mjs';
import { createNodeRuntimeHost } from '../../../src/node-host.mjs';
import nativeThreadId from '../../../src/thread-id.cjs';
import { writeWasiStdio } from './wasmtime-wasi-stdio.mjs';
import { processOutput } from '../../../integration/process-output.mjs';

const ffi = createRequire(import.meta.url)('koffi');
ffi.config({ sync_stack_size: 16 * 1024 ** 2 });
prepareBunStack(import.meta.url);
const isRuntimeRoot = isMainThread || workerData?.runtimeRoot === true;
const [libraryPath, cache, expectedHash, nativeApiPath, checkPath] = isMainThread ? process.argv.slice(2) : workerData.arguments;
const check = checkPath ? JSON.parse(readFileSync(checkPath, 'utf8')) : {
  name: 'const_fold', lean: '4.34.0', args: ['15'], leanStackSizeKb: '4194304',
  expected: { stdout: '93011 93011\n', stderr: '', code: 0 },
  computationStackBytes: String(4 * 1024 ** 3 + 128 * 1024),
};
assert.equal(typeof check.name, 'string'); assert.ok(check.name && !check.name.includes('\0'));
assert.match(check.lean, /^\d+\.\d+\.\d+$/);
assert.ok(Array.isArray(check.args) && check.args.every(arg => typeof arg === 'string' && !arg.includes('\0')));
assert.equal(typeof check.expected.stdout, 'string'); assert.equal(typeof check.expected.stderr, 'string');
assert.ok(Number.isInteger(check.expected.code) && check.expected.code >= 0 && check.expected.code <= 255);
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
const signalLoad = library.func('uint32_t lasm_lean_signal_load(void *probe, uint64_t offset)');
const signalStore = library.func('int lasm_lean_signal_store(void *probe, uint64_t offset, uint32_t value)');
const signalWait = library.func('int lasm_lean_signal_wait(void *probe, uint64_t offset, uint32_t expected, double timeout, char *error, size_t capacity)');
const error = Buffer.alloc(8192), message = () => error.toString('utf8').split('\0')[0];
const workers = new Map(), timers = new Set(), registered = [], trace = [];
const stdout = [], stderr = [], hostOperations = [], completions = [];
let completionWaiter, response = new Uint8Array(0), requestedExit;
let workerMessageListener;
const host = isRuntimeRoot ? createNodeRuntimeHost({ leanVersion: check.lean, args: check.args, appPath: check.name,
  stdio: { stdout: bytes => stdout.push(Buffer.from(bytes)), stderr: bytes => stderr.push(Buffer.from(bytes)) } }) : null;
let probe, closed = false, ownPthread, callbackError, settled = false;
let resolveOutcome, rejectOutcome;
const outcome = new Promise((resolve, reject) => { resolveOutcome = resolve; rejectOutcome = reject; });
outcome.catch(() => {});
function fail(error) {
  callbackError = error;
  if (isRuntimeRoot) {
    // A blocked native Wasm call cannot be interrupted by Worker.terminate().
    // This diagnostic owns its child process: fail the whole process and let
    // the OS reclaim its threads, without deleting Stores still in use.
    const result = { failure: error.stack ?? String(error), trace, hostOperations };
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
  offset = BigInt(offset); length = Number(length);
  assert.ok(Number.isSafeInteger(length) && length >= 0 && length <= 64 * 1024 ** 2,
    'Diagnostic host transfer is bounded to 64 MiB');
  const bytes = Buffer.alloc(length);
  for (let cursor = 0; cursor < length; cursor += 65536) {
    const size = Math.min(65536, length - cursor);
    bytes.set(new Uint8Array(view(offset + BigInt(cursor), size).buffer), cursor);
  }
  return bytes;
}
function writeGuest(offset, bytes) {
  offset = BigInt(offset);
  for (let cursor = 0; cursor < bytes.length; cursor += 65536) {
    const size = Math.min(65536, bytes.length - cursor);
    new Uint8Array(view(offset + BigInt(cursor), size).buffer).set(bytes.subarray(cursor, cursor + size));
  }
}
function rpc(request) {
  assert.ok(!isRuntimeRoot);
  const signal = invoke('malloc', [4n]); assert.ok(signal);
  const channel = new MessageChannel();
  try {
    assert.equal(signalStore(probe, signal, 0), 0);
    parentPort.postMessage({ kind: 'rpc', request, signal, port: channel.port2, sender: ownPthread }, [channel.port2]);
    const deadline = Date.now() + 15_000;
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
}
async function handleRpc({ request, signal, port, sender }) {
  try {
    assert.ok(workers.has(String(sender)), 'RPC sender must be a known guest thread');
    let result;
    if (request.kind === 'spawn') result = { status: spawnWorker(request.pthread, request.start, request.argument) };
    else if (request.kind === 'cleanup') { await cleanupThread(request.pthread); result = {}; }
    else if (request.kind === 'wasi-stdio') {
      assert.ok(request.fd === 1 || request.fd === 2);
      const bytes = new Uint8Array(request.byteBuffer, request.byteOffset, request.byteLength);
      hostOperations.push({ wasi: 'fd_write', fd: request.fd, inputBytes: bytes.length, thread: String(sender) });
      // This diagnostic installs infallible byte-capturing sinks in node-host.
      // Do not map Lean file handles to WASI descriptors or pretend that this
      // proves real descriptor redirection, partial writes or native errors.
      const captured = await host.request(3, request.fd, 0n, bytes, { fiber: Number(sender) });
      assert.equal(captured.error, false); assert.equal(captured.bytes.length, 0);
      result = { errno: 0, written: bytes.length };
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
  } catch (error) { port.postMessage({ failure: error.stack ?? String(error) }); fail(error); }
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
  const worker = new Worker(fileURLToPath(import.meta.url), { resourceLimits: {
    stackSizeMb: 96, maxOldGenerationSizeMb: 128,
  }, workerData: { arguments: [libraryPath, cache, expectedHash, nativeApiPath, checkPath], parent: ffi.address(probe), pthread, start, argument } });
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
      } else if (value.kind === 'thread-ready') { record.ready = value; trace.push(value); }
      else if (value.kind === 'thread-result') {
        record.result = value; trace.push(value);
      } else if (value.kind !== 'mailbox') throw new Error(`Unknown worker message ${value.kind}`);
    } catch (error) { fail(error); }
  });
  worker.on('error', fail);
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
    else throw new Error(`Unknown runtime callback ${kind}`);
    ffi.encode(output, 'uint64_t', BigInt.asUintN(64, result));
    return 0;
  } catch (error) { fail(error); return 1; }
}, runtimeType);
async function finishApplication(code) {
  assert.equal(code, check.expected.code); assert.ok(!settled); settled = true;
  await host.flushStdIO(); host.close();
  const observed = processOutput({ status: code, stdout: Buffer.concat(stdout), stderr: Buffer.concat(stderr) });
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
    controlStackBytes, nativeStackOverflowControl: !!nativeDriver,
    termination: 'Native process exit reclaims remaining workers after host output is flushed' };
  if (!isMainThread) {
    parentPort.postMessage({ kind: 'application-result', result: output });
    await new Promise(() => {}); // Supervisor owns whole-process termination.
  }
  writeSync(1, JSON.stringify(output) + '\n');
  process.exit(0);
}
const environment = Object.entries(process.env).map(([key, value]) => `${key}=${value}`);
const bytes = Buffer.from(environment.join('\0') + '\0');
probe = create(isRuntimeRoot ? cache : null, clock, mailbox, bytes, bytes.length, environment.length,
  check.name, isRuntimeRoot ? null : workerData.parent, spawn, events, error, error.length);
try {
  assert.ok(probe, message());
  setRuntime(probe, runtime);
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
      wasmEntry: nativeDriver ? 'direct Node-API' : 'FFI' });
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
      assert.equal(nativeDriver.stackControl(ffi.address(probe)), 0n);
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
    const timer = setTimeout(() => fail(new Error('Application main diagnostic deadline')), 45_000);
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
  for (const pointer of registered) ffi.unregister(pointer);
  if (!isRuntimeRoot) {
    if (workerMessageListener) parentPort.off('message', workerMessageListener);
    parentPort.close?.();
    // Deno's Node parentPort is an EventEmitter without MessagePort.close.
    // Its underlying worker supplies the standard WorkerGlobalScope.close.
    globalThis.close?.();
  }
}
