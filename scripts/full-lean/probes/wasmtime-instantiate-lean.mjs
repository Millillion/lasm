import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { hashFile } from '../../../src/managed-artifacts.mjs';

const [libraryPath, cache, expectedHash, oracle] = process.argv.slice(2);
// Deserialization loads trusted native code, so verify again inside EACH engine.
assert.equal(await hashFile(cache), expectedHash);
const ffi = createRequire(import.meta.url)('koffi'), library = ffi.load(libraryPath);
const clockType = ffi.proto('double lasm_probe_date_now(void)');
const mailboxType = ffi.proto('void lasm_probe_schedule_mailbox(void)');
const create = library.func('void *lasm_lean_instance_new(str trusted_cache, lasm_probe_date_now *date_now, lasm_probe_schedule_mailbox *schedule_mailbox, const uint8_t *environment, size_t environment_size, size_t environment_count, str program_name, char *error, size_t capacity)');
const destroy = library.func('void lasm_lean_instance_delete(void *probe)');
const call = library.func('int lasm_lean_instance_call(void *probe, str name, const uint64_t *args, size_t nargs, uint32_t result_count, _Out_ uint64_t *result, char *error, size_t capacity)');
const details = library.func('void lasm_lean_instance_details(void *probe, _Out_ uint64_t *details)');
const rejection = library.func('int lasm_lean_instance_rejection_control(void *probe, char *error, size_t capacity)');
const enqueue = library.func('int lasm_lean_instance_mailbox_enqueue(void *probe, uint64_t value, char *error, size_t capacity)');
const checkEnvironment = library.func('int lasm_lean_instance_environment_check(void *probe, char *error, size_t capacity)');
const error = Buffer.alloc(8192), message = () => error.toString('utf8').split('\0')[0];
let clockCalls = 0;
assert.equal(Atomics.wait(new Int32Array(new SharedArrayBuffer(4)), 0, 1, 0), 'not-equal',
  'This main-thread probe requires the actual host to allow blocking');
const clock = ffi.register(() => { clockCalls++; return Date.now(); }, ffi.pointer(clockType));
const timers = new Set();
let closed = false, mailboxError, mailboxChecks = 0;
const mailbox = ffi.register(() => {
  const timer = setTimeout(() => {
    timers.delete(timer);
    if (closed) return;
    try {
      // This is Emscripten's own postmessage fallback for the main thread.
      // Execute the REAL Wasm mailbox on a later JS turn, never inside send().
      if (invoke('pthread_self') === 0n) return;
      invoke('_emscripten_check_mailbox', [], 0);
      mailboxChecks++;
    } catch (error) { mailboxError = error; }
  });
  timers.add(timer);
}, ffi.pointer(mailboxType));
process.env.LASM_WASMTIME_ENV_CONTROL = 'λ-雪 😀 =value';
const environment = Object.entries(process.env).map(([key, value]) => `${key}=${value}`);
const environmentBytes = Buffer.from(environment.join('\0') + '\0');
const probe = create(cache, clock, mailbox, environmentBytes, environmentBytes.length,
  environment.length, process.argv[1], error, error.length);
if (!probe) { ffi.unregister(clock); ffi.unregister(mailbox); assert.fail(message()); }
const results = [], observed = Array(19).fill(0);
function invoke(name, args = [], resultCount = 1) {
  const result = [0];
  assert.equal(call(probe, name, args, args.length, resultCount, result, error, error.length), 0, message());
  return BigInt(result[0]);
}
try {
  // Same stack bootstrap as stackCheckInit()/setStackLimits() in the original
  // generated loader. Keep the compiled stack-overflow checks active.
  invoke('emscripten_stack_init', [], 0);
  const base = invoke('emscripten_stack_get_base'), end = invoke('emscripten_stack_get_end');
  assert.ok(end > 0n && end < base && base <= 128n * 1024n * 1024n);
  invoke('__set_stack_limits', [base, end], 0);
  // emmalloc's free-list state is initialized by the module constructors.
  // Calling allocation before this ordinary loader step is invalid.
  invoke('__wasm_call_ctors', [], 0);
  assert.equal(checkEnvironment(probe, error, error.length), 0, message());
  for (const line of readFileSync(oracle, 'utf8').trim().split('\n')) {
    const [operation, ...text] = line.split(' '), values = text.map(BigInt), expected = values.pop();
    const args = values.map(value => value * 2n + 1n);
    const name = operation === 'gcd' ? 'lean_nat_gcd' : 'lean_nat_log2';
    const encoded = invoke(name, args);
    assert.equal(encoded & 1n, 1n, 'Expected a scalar Lean Nat, not an allocated object');
    assert.equal(encoded >> 1n, expected, line);
    results.push({ operation, inputs: values.map(String), result: String(encoded >> 1n) });
  }
  details(probe, observed);
  assert.deepEqual(observed.slice(0, 4).map(Number), [139, 27181, 0, 128 * 1024 * 1024]);
  assert.equal(Number(observed[4]), clockCalls); assert.ok(clockCalls > 0);
  assert.ok(Number(observed[5]) > 0);
  assert.equal(Number(observed[6]), 1); assert.ok(Number(observed[7]) > 0);
  assert.equal(Number(observed[8]), 1); assert.ok(Number(observed[10]) > 0);
  assert.ok(Number(observed[14]) > 0 && Number(observed[15]) > 0);
  assert.ok(Number(observed[16]) > 0 && Number(observed[17]) > 0);
  assert.ok(Number(observed[18]) > 0);
  const send = value => assert.equal(enqueue(probe, value, error, error.length), 0, message());
  const drain = async () => {
    await new Promise(resolve => setTimeout(resolve, 20));
    if (mailboxError) throw mailboxError;
    assert.equal(timers.size, 0); details(probe, observed);
  };
  for (const value of [3, 5, 7]) send(value);
  details(probe, observed);
  assert.equal(Number(observed[12]), 0, 'Mailbox tasks must run asynchronously');
  assert.equal(Number(observed[9]), 1, 'Real Wasm queue coalesces pending notifications');
  await drain();
  assert.deepEqual(observed.slice(12, 14).map(Number), [3, 15]);
  assert.equal(mailboxChecks, 1);
  send(11); await drain();
  assert.deepEqual(observed.slice(12, 14).map(Number), [4, 26]);
  assert.equal(mailboxChecks, 2); assert.equal(Number(observed[9]), 2);
  invoke('em_proxying_queue_destroy', [BigInt(observed[11])], 0);
  assert.equal(rejection(probe, error, error.length), 1);
  assert.match(message(), /UNIMPLEMENTED IMPORT env\.lasm_host_platform/);
  const control = message(); details(probe, observed); assert.equal(Number(observed[2]), 1);
  console.log(JSON.stringify({ scope: 'Real compiled Lean module instantiated; pure runtime exports with actual startup, clock and memory metadata, other function imports reject, no main/API acceptance',
    engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
    version: process.versions.bun ?? process.versions.deno ?? process.versions.node,
    imports: 139, exports: 27181, accessibleMemoryBytes: Number(observed[3]),
    stack: { base: String(base), end: String(end), compiledBoundsCheckRetained: true },
    implementedImports: { emscripten_date_now: { source: 'Date.now()', calls: clockCalls },
      emscripten_get_heap_max: { source: 'Actual Wasmtime memory type maximum', calls: Number(observed[5]) },
      _emscripten_init_main_thread_js: { source: 'Generated loader flags, real Wasm thread/TLS initialization',
        calls: Number(observed[6]), tlsBase: Number(observed[7]) },
      _emscripten_thread_mailbox_await: { source: 'Upstream postmessage fallback; waiting_async remains zero',
        registrations: Number(observed[8]), pthread: Number(observed[10]) },
      _emscripten_notify_mailbox_postmessage: { source: 'setTimeout runs real Wasm mailbox on the JS main thread',
        notifications: Number(observed[9]), mailboxChecks, asynchronousTasks: Number(observed[12]),
        deliveredSum: Number(observed[13]), queueDestroyed: true },
      environ_sizes_get: { source: 'Actual JS process.env snapshot encoded as UTF-8', calls: Number(observed[14]) },
      environ_get: { calls: Number(observed[15]), getenvComparisons: environment.length,
        unicodeAndEqualsControl: true, environmentValuesRecorded: false },
      random_get: { source: 'Linux getrandom with EINTR and partial-read handling',
        calls: Number(observed[16]), bytes: Number(observed[17]) },
      _emscripten_get_progname: { source: 'Actual JS entry point encoded as UTF-8', calls: Number(observed[18]) } },
    unimplementedImportCallsDuringPureOperations: 0, rejectionControl: control, results }));
} finally {
  closed = true;
  for (const timer of timers) clearTimeout(timer);
  timers.clear(); destroy(probe); ffi.unregister(clock); ffi.unregister(mailbox);
}
