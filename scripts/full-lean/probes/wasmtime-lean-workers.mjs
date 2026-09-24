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
const mailboxType = ffi.proto('int32_t lasm_worker_mailbox(uint64_t target, uint64_t sender)');
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
const prepareMailbox = library.func('int lasm_lean_instance_mailbox_prepare(void *probe, uint64_t desired_function, _Out_ uint64_t *function, char *error, size_t capacity)');
const sendMailbox = library.func('int lasm_lean_instance_mailbox_send(void *probe, uint64_t target, uint64_t value, char *error, size_t capacity)');
const error = Buffer.alloc(8192), message = () => error.toString('utf8').split('\0')[0];
const workers = new Map(), timers = new Set(), registered = [];
let probe, closed = false, callbackError, exitNotification = false, activeGroup, ownPthread;
const mailboxRoutes = [];
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
function scheduleMailbox() {
  const timer = setTimeout(() => {
    timers.delete(timer);
    if (closed) return;
    try {
      if (invoke('pthread_self') !== 0n) invoke('_emscripten_check_mailbox', [], 0);
      if (!isMainThread && workerData.mailbox) {
        const state = snapshot();
        parentPort.postMessage({ kind: 'mailbox-state', count: String(state[12]), sum: String(state[13]) });
      }
    }
    catch (error) { callbackError = error; }
  });
  timers.add(timer);
}
function routeMailbox(target, sender) {
  target = BigInt(target); sender = BigInt(sender);
  mailboxRoutes.push({ sender: String(sender), target: String(target) });
  if (target === sender || target === ownPthread) { scheduleMailbox(); return 1; }
  if (!isMainThread) { parentPort.postMessage({ kind: 'mailbox-notify', target, sender }); return 1; }
  const record = workers.get(String(target));
  if (!record || record.exited || record.cleaned) return 0;
  record.worker.postMessage({ kind: 'mailbox-check' });
  return 1;
}
const mailbox = callback(routeMailbox, mailboxType);
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
      concurrent: activeGroup?.kind === 'concurrent' ? { barrier: activeGroup.barrier, mutex: activeGroup.mutex,
        counter: activeGroup.counter, index: activeGroup.next++ } : undefined,
      mailbox: activeGroup?.kind === 'mailbox' ? { callbackIndex: activeGroup.callbackIndex } : undefined,
    } });
    const record = { worker, completed: false, exited: false, cleaned: false };
    record.result = new Promise((resolve, reject) => {
      worker.on('message', value => {
        try {
          if (value.kind === 'mailbox-ready') record.mailboxReady = true;
          else if (value.kind === 'mailbox-state') record.mailboxState = value;
          else if (value.kind === 'mailbox-notify') {
            assert.equal(BigInt(value.sender), pthread);
            assert.equal(routeMailbox(value.target, value.sender), 1, 'Parent must route to a live guest thread');
          } else { assert.ok(!record.completed); record.completed = true; resolve(value); }
        } catch (error) { callbackError = error; reject(error); }
      });
      worker.once('error', error => { record.error = error; reject(error); });
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
    ownPthread = pthread;
    assert.equal(invoke('_emscripten_dlsync_self'), 1n);
    const pointer = [0];
    assert.equal(functionPointer(probe, 'lean_nat_log2', start, pointer, error, error.length), 0, message());
    assert.equal(BigInt(pointer[0]), start);
    const result = [0];
    assert.equal(callPointer(probe, start, argument, result, error, error.length), 0, message());
    const returned = BigInt(result[0]);
    assert.equal(returned, 13n, 'Guest log2(100) returns encoded Nat 6');
    let crossMailbox;
    if (workerData.mailbox) {
      const callbackIndex = [0];
      assert.equal(prepareMailbox(probe, workerData.mailbox.callbackIndex, callbackIndex, error, error.length), 0, message());
      assert.equal(BigInt(callbackIndex[0]), workerData.mailbox.callbackIndex);
      await new Promise((resolve, reject) => {
        const listener = value => {
          try {
            if (value.kind === 'mailbox-check') scheduleMailbox();
            else if (value.kind === 'mailbox-send')
              assert.equal(sendMailbox(probe, value.target, value.value, error, error.length), 0, message());
            else if (value.kind === 'mailbox-finish') { parentPort.off('message', listener); resolve(); }
            else throw new Error('Unknown mailbox worker command');
          } catch (error) { parentPort.off('message', listener); reject(error); }
        };
        parentPort.on('message', listener);
        parentPort.postMessage({ kind: 'mailbox-ready' });
      });
      const state = snapshot();
      assert.equal(timers.size, 0);
      crossMailbox = { delivered: String(state[12]), sum: String(state[13]),
        notificationsSent: String(state[9]), routes: mailboxRoutes };
      invoke('em_proxying_queue_destroy', [state[11]], 0);
    }
    let concurrent;
    if (workerData.concurrent) {
      const { mutex, counter, index } = workerData.concurrent;
      const barrier = new Int32Array(workerData.concurrent.barrier);
      Atomics.add(barrier, 0, 1);
      assert.notEqual(Atomics.wait(barrier, 1, 0, 10_000), 'timed-out');
      // Keep one real guest mutex held until the peer demonstrates contention.
      // The coordination buffer is ordinary host shared memory; the mutex and
      // protected counter are in the REAL guest memory shared by the Stores.
      let busyResult;
      if (index === 0) {
        assert.equal(invoke('pthread_mutex_lock', [mutex]), 0n);
        Atomics.store(barrier, 2, 1); Atomics.notify(barrier, 2);
        assert.notEqual(Atomics.wait(barrier, 3, 0, 5000), 'timed-out');
        Atomics.wait(barrier, 4, 0, 20);
        assert.equal(invoke('pthread_mutex_unlock', [mutex]), 0n);
      } else {
        assert.notEqual(Atomics.wait(barrier, 2, 0, 5000), 'timed-out');
        busyResult = invoke('pthread_mutex_trylock', [mutex]);
        assert.notEqual(busyResult, 0n, 'Held guest mutex excludes the other Wasm instance');
        Atomics.store(barrier, 3, 1); Atomics.notify(barrier, 3);
        assert.equal(invoke('pthread_mutex_lock', [mutex]), 0n);
        assert.equal(invoke('pthread_mutex_unlock', [mutex]), 0n);
      }
      for (let i = 0; i < 500; i++) {
        assert.equal(invoke('lean_nat_gcd', [49n, 37n]), 13n);
        assert.equal(invoke('pthread_mutex_lock', [mutex]), 0n);
        try {
          const value = view(counter).getBigUint64(0, true);
          view(counter).setBigUint64(0, value + 1n, true);
        } finally { assert.equal(invoke('pthread_mutex_unlock', [mutex]), 0n); }
      }
      concurrent = { index, guestGcdCalls: 500, protectedUpdates: 500,
        busyResult: busyResult === undefined ? undefined : String(busyResult) };
    }
    invoke('_emscripten_thread_exit', [returned], 0);
    assert.equal(invoke('pthread_self'), 0n);
    assert.ok(exitNotification, 'Real Wasm exit must notify its joinable state');
    const state = snapshot(); assert.equal(state[2], 0n); assert.equal(state[24], 1n);
    output = { pthread: String(pthread), stack: { top: String(top), bottom: String(bottom), size: String(size) },
      tls: String(tls), result: String(returned), realWasmExit: true, rejectedImports: 0,
      sharedBytes: String(state[3]), independentStore: true, concurrent, crossMailbox };
  } else {
    invoke('emscripten_stack_init', [], 0);
    invoke('__set_stack_limits', [invoke('emscripten_stack_get_base'), invoke('emscripten_stack_get_end')], 0);
    invoke('__wasm_call_ctors', [], 0);
    ownPthread = invoke('pthread_self');
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
    const mutex = invoke('malloc', [128n]), counter = invoke('malloc', [8n]);
    assert.ok(mutex > 0n && counter > 0n);
    assert.equal(invoke('pthread_mutex_init', [mutex, 0n]), 0n);
    view(counter).setBigUint64(0, 0n, true);
    activeGroup = { kind: 'concurrent', barrier: new SharedArrayBuffer(5 * 4), mutex, counter, next: 0 };
    const pair = [];
    for (const size of [2n * 1024n ** 2n, 4n * 1024n ** 3n]) {
      assert.equal(invoke('pthread_attr_init', [attr]), 0n);
      assert.equal(invoke('pthread_attr_setstacksize', [attr, size]), 0n);
      assert.equal(invoke('pthread_create', [slots, attr, threadEntry, 201n]), 0n);
      if (callbackError) throw callbackError;
      const pthread = view(slots).getBigUint64(0, true);
      pair.push({ pthread, size, record: workers.get(String(pthread)) });
      assert.equal(invoke('pthread_attr_destroy', [attr]), 0n);
    }
    const barrier = new Int32Array(activeGroup.barrier), readyDeadline = performance.now() + 10_000;
    while (Atomics.load(barrier, 0) !== 2 && performance.now() < readyDeadline)
      await new Promise(resolve => setTimeout(resolve, 1));
    assert.equal(Atomics.load(barrier, 0), 2, 'Both real guest threads must be alive together');
    Atomics.store(barrier, 1, 1); Atomics.notify(barrier, 1, 2);
    const concurrentResults = [];
    for (const { pthread, size, record } of pair) {
      let deadline;
      try {
        const [result] = await Promise.race([
          Promise.all([record.result, record.exit]),
          new Promise((_, reject) => { deadline = setTimeout(() => reject(new Error('concurrent pthread deadline')), 15_000); }),
        ]);
        assert.equal(result.stack.size, String(size));
        assert.equal(invoke('pthread_join', [pthread, slots + 8n]), 0n);
        assert.equal(view(slots + 8n).getBigUint64(0, true), 13n);
        assert.ok(record.cleaned);
        concurrentResults.push({ ...result, joinedResult: '13', cleanupVerified: true });
      } finally { clearTimeout(deadline); }
    }
    assert.equal(view(counter).getBigUint64(0, true), 1000n);
    assert.equal(invoke('pthread_mutex_destroy', [mutex]), 0n);
    invoke('free', [mutex], 0); invoke('free', [counter], 0);
    const mailboxIndex = [0];
    assert.equal(prepareMailbox(probe, 0xffffffffffffffffn, mailboxIndex, error, error.length), 0, message());
    activeGroup = { kind: 'mailbox', callbackIndex: BigInt(mailboxIndex[0]) };
    const mailboxPair = [];
    for (const size of [2n * 1024n ** 2n, 4n * 1024n ** 3n]) {
      assert.equal(invoke('pthread_attr_init', [attr]), 0n);
      assert.equal(invoke('pthread_attr_setstacksize', [attr, size]), 0n);
      assert.equal(invoke('pthread_create', [slots, attr, threadEntry, 201n]), 0n);
      if (callbackError) throw callbackError;
      const pthread = view(slots).getBigUint64(0, true);
      mailboxPair.push({ pthread, size, record: workers.get(String(pthread)) });
      assert.equal(invoke('pthread_attr_destroy', [attr]), 0n);
    }
    const waitForMailbox = async (condition, label) => {
      const deadline = performance.now() + 10_000;
      while (!condition() && performance.now() < deadline) {
        if (callbackError) throw callbackError;
        for (const { record } of mailboxPair) if (record.error) throw record.error;
        await new Promise(resolve => setTimeout(resolve, 1));
      }
      assert.ok(condition(), label);
    };
    await waitForMailbox(() => mailboxPair.every(({ record }) => record.mailboxReady), 'Worker mailboxes must be ready');
    const [first, second] = mailboxPair;
    for (const value of [3n, 5n])
      assert.equal(sendMailbox(probe, first.pthread, value, error, error.length), 0, message());
    for (const value of [7n, 11n])
      assert.equal(sendMailbox(probe, second.pthread, value, error, error.length), 0, message());
    await waitForMailbox(() => mailboxPair.every(({ record }) => record.mailboxState?.count === '2'), 'Main-to-worker tasks must arrive');
    assert.equal(first.record.mailboxState.sum, '8'); assert.equal(second.record.mailboxState.sum, '18');
    first.record.worker.postMessage({ kind: 'mailbox-send', target: ownPthread, value: 13n });
    await waitForMailbox(() => snapshot()[12] === 1n, 'Worker-to-main task must arrive');
    assert.equal(snapshot()[13], 13n);
    second.record.worker.postMessage({ kind: 'mailbox-send', target: first.pthread, value: 17n });
    await waitForMailbox(() => first.record.mailboxState?.count === '3', 'Worker-to-worker task must arrive');
    assert.equal(first.record.mailboxState.sum, '25');
    const mailboxResults = [];
    for (const { pthread, size, record } of mailboxPair) {
      record.worker.postMessage({ kind: 'mailbox-finish' });
      let deadline;
      try {
        const [result] = await Promise.race([
          Promise.all([record.result, record.exit]),
          new Promise((_, reject) => { deadline = setTimeout(() => reject(new Error('mailbox worker shutdown deadline')), 15_000); }),
        ]);
        assert.equal(result.stack.size, String(size));
        assert.equal(invoke('pthread_join', [pthread, slots + 8n]), 0n);
        assert.equal(view(slots + 8n).getBigUint64(0, true), 13n);
        assert.ok(record.cleaned);
        mailboxResults.push({ ...result, joinedResult: '13', cleanupVerified: true });
      } finally { clearTimeout(deadline); }
    }
    assert.equal(timers.size, 0);
    invoke('em_proxying_queue_destroy', [snapshot()[11]], 0);
    invoke('free', [attr], 0); invoke('free', [slots], 0);
    assert.equal(invoke('lean_nat_gcd', [49n, 37n]), 13n);
    const state = snapshot();
    assert.equal(state[2], 0n); assert.equal(state[22], 7n); assert.equal(state[23], 7n);
    assert.equal(state[25], 7n);
    output = { scope: 'Real guest pthread creation, separate JS worker Stores, TLS, guest entry execution, exit and join; no full Lean main or general scheduler acceptance',
      engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
      version: process.versions.bun ?? process.versions.deno ?? process.versions.node,
      results, concurrentResults, concurrentProtectedUpdates: 1000,
      mailboxResults, mailboxRoutes, mainMailbox: { delivered: String(state[12]), sum: String(state[13]) },
      sharedBytes: String(state[3]), created: 7, joined: 7, cleaned: 7,
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
