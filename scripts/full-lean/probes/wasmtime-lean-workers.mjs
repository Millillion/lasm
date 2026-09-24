// Real guest pthread lifecycle on separate Wasmtime Stores in JS workers.
// Diagnostic only: no general worker pool, nested spawning or dynamic linker.
import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { Worker, isMainThread, parentPort, workerData } from 'node:worker_threads';
import { fileURLToPath } from 'node:url';
import { hashFile } from '../../../src/managed-artifacts.mjs';

const [libraryPath, cache, expectedHash] = isMainThread ? process.argv.slice(2) : workerData.arguments;
if (isMainThread) assert.equal(await hashFile(cache), expectedHash);
assert.equal(Atomics.wait(new Int32Array(new SharedArrayBuffer(4)), 0, 1, 0), 'not-equal');
const ffi = createRequire(import.meta.url)('koffi'), library = ffi.load(libraryPath);
const clockType = ffi.proto('double lasm_worker_clock(void)');
const mailboxType = ffi.proto('void lasm_worker_mailbox(void)');
const spawnType = ffi.proto('int32_t lasm_worker_spawn(uint64_t pthread, uint64_t start, uint64_t argument)');
const eventType = ffi.proto('int32_t lasm_worker_event(uint32_t event, uint64_t pthread)');
const create = library.func('void *lasm_lean_instance_new(str trusted_cache, void *clock, void *mailbox, const uint8_t *environment, size_t environment_size, size_t environment_count, str program_name, void *parent, void *spawn, void *thread_event, char *error, size_t capacity)');
const destroy = library.func('void lasm_lean_instance_delete(void *probe)');
const call = library.func('int lasm_lean_instance_call(void *probe, str name, const uint64_t *args, size_t nargs, uint32_t result_count, _Out_ uint64_t *result, char *error, size_t capacity)');
const details = library.func('void lasm_lean_instance_details(void *probe, _Out_ uint64_t *values)');
const window = library.func('void *lasm_lean_instance_memory_window(void *probe, uint64_t offset, size_t length)');
const registerMailbox = library.func('int lasm_lean_instance_mailbox_register(void *probe, uint64_t pthread, char *error, size_t capacity)');
const functionPointer = library.func('int lasm_lean_instance_function_pointer(void *probe, str name, uint64_t requested, _Out_ uint64_t *pointer, char *error, size_t capacity)');
const callPointer = library.func('int lasm_lean_instance_call_pointer(void *probe, uint64_t pointer, uint64_t argument, _Out_ uint64_t *result, char *error, size_t capacity)');
const error = Buffer.alloc(8192), message = () => error.toString('utf8').split('\0')[0];
const workers = new Map(), timers = new Set(), registered = [];
let probe, closed = false, callbackError, exitNotification = false;
function callback(fn, type) { const value = ffi.register(fn, ffi.pointer(type)); registered.push(value); return value; }
function invoke(name, args = [], resultCount = 1) {
  const result = [0];
  assert.equal(call(probe, name, args, args.length, resultCount, result, error, error.length), 0, message());
  return BigInt(result[0]);
}
function view(offset, size = 8) {
  const pointer = window(probe, offset, size);
  assert.ok(pointer, 'Every host view is bounded by actual shared memory');
  return new DataView(ffi.view(pointer, size));
}
function snapshot() { const values = Array(26).fill(0); details(probe, values); return values.map(BigInt); }
const clock = callback(() => Date.now(), clockType);
const mailbox = callback(() => {
  const timer = setTimeout(() => {
    timers.delete(timer);
    if (closed) return;
    try { if (invoke('pthread_self') !== 0n) invoke('_emscripten_check_mailbox', [], 0); }
    catch (error) { callbackError = error; }
  });
  timers.add(timer);
}, mailboxType);
const events = callback((kind, pthread) => {
  pthread = BigInt(pthread);
  if (!isMainThread && kind === 0 && pthread === workerData.pthread && !exitNotification) {
    exitNotification = true; return 1;
  }
  const record = workers.get(String(pthread));
  if (isMainThread && kind === 1 && record?.exited && record.completed && !record.cleaned) {
    record.cleaned = true; return 1;
  }
  return 0;
}, eventType);
const spawn = isMainThread ? callback((pthread, start, argument) => {
  try {
    pthread = BigInt(pthread); start = BigInt(start); argument = BigInt(argument);
    const key = String(pthread), previous = workers.get(key);
    assert.ok(!previous || previous.cleaned, 'Live thread address cannot be reused');
    const worker = new Worker(fileURLToPath(import.meta.url), { workerData: {
      arguments: [libraryPath, cache, expectedHash], parent: ffi.address(probe), pthread, start, argument,
    } });
    const record = { worker, completed: false, exited: false, cleaned: false };
    record.result = new Promise((resolve, reject) => {
      worker.once('message', value => { record.completed = true; resolve(value); });
      worker.once('error', reject);
      worker.once('exit', code => { if (!record.completed) reject(new Error(`Worker exited before response: ${code}`)); });
    });
    record.exit = new Promise((resolve, reject) => {
      worker.once('exit', code => { record.exited = true; code === 0 ? resolve() : reject(new Error(`Worker exit ${code}`)); });
      worker.once('error', reject);
    });
    record.result.catch(() => {}); record.exit.catch(() => {});
    workers.set(key, record);
    return 0;
  } catch (error) { callbackError = error; return 6; } // Real Emscripten EAGAIN.
}, spawnType) : null;
const environment = Object.entries(process.env).map(([key, value]) => `${key}=${value}`);
const bytes = Buffer.from(environment.join('\0') + '\0');
probe = create(isMainThread ? cache : null, clock, mailbox, bytes, bytes.length, environment.length,
  fileURLToPath(import.meta.url), isMainThread ? null : workerData.parent, spawn, events, error, error.length);
let output;
try {
  assert.ok(probe, message());
  if (!isMainThread) {
    const { pthread, start, argument } = workerData;
    // Read the guest's actual pthread structure, allocated by pthread_create.
    // The offsets come from the frozen module's original generated loader.
    const top = view(pthread + 80n).getBigUint64(0, true);
    const size = view(pthread + 88n).getBigUint64(0, true), bottom = top - size;
    assert.ok(size > 0n && bottom > 0n && top <= snapshot()[3]);
    invoke('emscripten_stack_set_limits', [top, bottom], 0);
    invoke('__set_stack_limits', [top, bottom], 0);
    invoke('_emscripten_stack_restore', [top], 0);
    invoke('_emscripten_thread_init', [pthread, 0n, 0n, 1n, 0n, 0n], 0);
    const tls = invoke('_emscripten_tls_init');
    assert.ok(tls > 0n); assert.equal(invoke('pthread_self'), pthread);
    assert.equal(registerMailbox(probe, pthread, error, error.length), 0, message());
    assert.equal(invoke('_emscripten_dlsync_self'), 1n);
    const pointer = [0];
    assert.equal(functionPointer(probe, 'lean_nat_log2', start, pointer, error, error.length), 0, message());
    assert.equal(BigInt(pointer[0]), start);
    const result = [0];
    assert.equal(callPointer(probe, start, argument, result, error, error.length), 0, message());
    const returned = BigInt(result[0]);
    assert.equal(returned, 13n, 'Guest log2(100) returns encoded Nat 6');
    invoke('_emscripten_thread_exit', [returned], 0);
    assert.equal(invoke('pthread_self'), 0n);
    assert.ok(exitNotification, 'Real Wasm exit must notify its joinable state');
    const state = snapshot(); assert.equal(state[2], 0n); assert.equal(state[24], 1n);
    output = { pthread: String(pthread), stack: { top: String(top), bottom: String(bottom), size: String(size) },
      tls: String(tls), result: String(returned), realWasmExit: true, rejectedImports: 0,
      sharedBytes: String(state[3]), independentStore: true };
  } else {
    invoke('emscripten_stack_init', [], 0);
    invoke('__set_stack_limits', [invoke('emscripten_stack_get_base'), invoke('emscripten_stack_get_end')], 0);
    invoke('__wasm_call_ctors', [], 0);
    const pointer = [0];
    assert.equal(functionPointer(probe, 'lean_nat_log2', 0xffffffffffffffffn, pointer, error, error.length), 0, message());
    const threadEntry = BigInt(pointer[0]), attr = invoke('malloc', [256n]), slots = invoke('malloc', [16n]);
    assert.ok(attr > 0n && slots > 0n);
    const results = [];
    for (const stackSize of [2n * 1024n ** 2n, 4n * 1024n ** 3n, 4n * 1024n ** 3n]) {
      assert.equal(invoke('pthread_attr_init', [attr]), 0n);
      assert.equal(invoke('pthread_attr_setstacksize', [attr, stackSize]), 0n);
      assert.equal(invoke('pthread_create', [slots, attr, threadEntry, 201n]), 0n);
      if (callbackError) throw callbackError;
      const pthread = view(slots).getBigUint64(0, true), record = workers.get(String(pthread));
      assert.ok(record);
      let deadline;
      try {
        const [result] = await Promise.race([
          Promise.all([record.result, record.exit]),
          new Promise((_, reject) => { deadline = setTimeout(() => reject(new Error('pthread worker deadline')), 15_000); }),
        ]);
        assert.equal(result.stack.size, String(stackSize));
        assert.equal(invoke('pthread_join', [pthread, slots + 8n]), 0n);
        assert.equal(view(slots + 8n).getBigUint64(0, true), 13n);
        assert.ok(record.cleaned);
        assert.notEqual(view(pthread).getBigUint64(0, true), pthread, 'Freed thread cannot retain its valid self identity');
        assert.equal(invoke('pthread_attr_destroy', [attr]), 0n);
        results.push({ ...result, joinedResult: '13', cleanupVerified: true });
      } finally { clearTimeout(deadline); }
    }
    invoke('free', [attr], 0); invoke('free', [slots], 0);
    assert.equal(invoke('lean_nat_gcd', [49n, 37n]), 13n);
    const state = snapshot();
    assert.equal(state[2], 0n); assert.equal(state[22], 3n); assert.equal(state[23], 3n);
    assert.equal(state[25], 3n);
    output = { scope: 'Real guest pthread creation, separate JS worker Stores, TLS, guest entry execution, exit and join; no full Lean main or general scheduler acceptance',
      engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
      version: process.versions.bun ?? process.versions.deno ?? process.versions.node,
      results, sharedBytes: String(state[3]), created: 3, joined: 3, cleaned: 3,
      postJoinArithmeticPassed: true, rejectedImports: 0 };
  }
} finally {
  closed = true;
  for (const timer of timers) clearTimeout(timer);
  for (const record of workers.values()) if (!record.exited) await record.worker.terminate();
  if (probe) destroy(probe);
  for (const pointer of registered) ffi.unregister(pointer);
}
if (callbackError) throw callbackError;
if (isMainThread) console.log(JSON.stringify(output)); else parentPort.postMessage(output);
