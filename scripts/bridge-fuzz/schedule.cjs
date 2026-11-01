'use strict';
// Schedule fuzzing and tracing of the host bridge (docs/TESTING.md). Test only:
// it is never packed or shipped, and a run loads it explicitly
// (NODE_OPTIONS=--require=<this file>), so published builds contain no hook.
// Node loads --require preloads into every worker thread too, so it runs in
// Node's main thread and in every Lean thread (Emscripten pthread worker).
//
// LASM_BRIDGE_SEED=<n>  wraps Atomics.{load,store,add,notify,wait,waitAsync}
//   for the Wasm memory: before and after each operation it may spin or sleep
//   (a yield at every handshake step and host-call boundary), a blocking wait
//   may return early ("ok", or "timed-out" as if its time had passed), and a
//   waitAsync may resolve late. Every decision comes from a generator seeded by
//   (seed, thread number), so a run's perturbations repeat from its seed.
//   LASM_BRIDGE_RATE (default 0.25) is the probability of a perturbation.
// LASM_BRIDGE_TRACE=<dir>  records every such operation, in one global order
//   (a lock taken around each), and at exit writes one trace per host-call
//   slot for the model's conformance check (verification/host-bridge,
//   `host-bridge trace`).
const seedText = process.env.LASM_BRIDGE_SEED;
const traceDir = process.env.LASM_BRIDGE_TRACE;
if ((seedText !== undefined && seedText !== '') || traceDir) install();

function install() {
  const { isMainThread, threadId, getEnvironmentData, setEnvironmentData } = require('node:worker_threads');
  const A = { load: Atomics.load, store: Atomics.store, add: Atomics.add, notify: Atomics.notify,
    wait: Atomics.wait, waitAsync: Atomics.waitAsync, compareExchange: Atomics.compareExchange };
  const fuzz = seedText !== undefined && seedText !== '';
  const rate = Number(process.env.LASM_BRIDGE_RATE ?? 0.25);
  // mulberry32 over (seed, thread number).
  let state = ((Number(seedText ?? 0) >>> 0) ^ Math.imul(threadId + 1, 0x9e3779b9)) >>> 0;
  const random = () => {
    state = (state + 0x6d2b79f5) >>> 0;
    let t = state;
    t = Math.imul(t ^ (t >>> 15), t | 1);
    t ^= t + Math.imul(t ^ (t >>> 7), t | 61);
    return ((t ^ (t >>> 14)) >>> 0) / 4294967296;
  };
  const nap = new Int32Array(new SharedArrayBuffer(4));
  function perturb() {
    if (!fuzz) return;
    const r = random();
    if (r >= rate) return;
    if (r < rate / 2) { const until = performance.now() + random() * 0.2; while (performance.now() < until); }
    else A.wait(nap, 0, 0, random() * 2);
  }

  // Trace buffer, shared by every thread: [lock, count, overflow, -], then
  // records [thread, op, byte address, value].
  const capacity = Number(process.env.LASM_BRIDGE_TRACE_EVENTS ?? 2_000_000);
  let trace = null;
  if (traceDir) {
    if (isMainThread) {
      trace = new Int32Array(new SharedArrayBuffer(16 + capacity * 16));
      setEnvironmentData('lasm.bridge.trace', trace.buffer);
    } else {
      const buffer = getEnvironmentData('lasm.bridge.trace');
      if (buffer) trace = new Int32Array(buffer);
    }
  }
  const OP = { load: 1, store: 2, add: 3, notify: 4, blocked: 5, notEqual: 6, wakeOk: 7, wakeTimedOut: 8, asyncWait: 9, asyncNotEqual: 10 };
  const lock = () => { while (A.compareExchange(trace, 0, 0, 1) !== 0); };
  const unlock = () => { A.store(trace, 0, 0); };
  function record(op, array, index, value) {
    const n = A.add(trace, 1, 1);
    if (n >= capacity) { A.store(trace, 2, 1); return; }
    const at = 4 + n * 4;
    trace[at] = threadId; trace[at + 1] = op; trace[at + 2] = array.byteOffset + index * 4; trace[at + 3] = value | 0;
  }
  const traceBuffer = trace?.buffer;
  const watched = array => array instanceof Int32Array && array.buffer instanceof SharedArrayBuffer
    && array.buffer !== traceBuffer && array.buffer.byteLength >= 1 << 20;
  // An operation done under the trace lock and recorded with its value.
  function traced(op, array, index, run, valueOf) {
    if (!trace) return run();
    lock();
    try {
      const result = run();
      record(typeof op === 'function' ? op(result) : op, array, index, valueOf(result));
      return result;
    } finally { unlock(); }
  }
  Atomics.load = function load(array, index) {
    if (!watched(array)) return A.load(array, index);
    perturb();
    const v = traced(OP.load, array, index, () => A.load(array, index), r => r);
    perturb();
    return v;
  };
  Atomics.store = function store(array, index, value) {
    if (!watched(array)) return A.store(array, index, value);
    perturb();
    const v = traced(OP.store, array, index, () => A.store(array, index, value), r => r);
    perturb();
    return v;
  };
  Atomics.add = function add(array, index, value) {
    if (!watched(array)) return A.add(array, index, value);
    perturb();
    const v = traced(OP.add, array, index, () => A.add(array, index, value), r => r);
    perturb();
    return v;
  };
  Atomics.notify = function notify(array, index, count) {
    if (!watched(array)) return A.notify(array, index, count);
    perturb();
    const v = traced(OP.notify, array, index, () => A.notify(array, index, count), () => 0);
    perturb();
    return v;
  };
  Atomics.wait = function wait(array, index, value, timeout) {
    if (!watched(array)) return A.wait(array, index, value, timeout);
    perturb();
    // The comparison is made under the trace lock, so the trace orders it.
    let blocked = true;
    if (trace) {
      lock();
      try { blocked = A.load(array, index) === value; record(blocked ? OP.blocked : OP.notEqual, array, index, value); }
      finally { unlock(); }
      if (!blocked) { perturb(); return 'not-equal'; }
    }
    let result;
    const r = fuzz ? random() : 1;
    if (r < rate / 4) result = 'ok';                 // a spurious (early) wake-up
    else if (r < rate / 2) result = 'timed-out';      // as if its time had passed
    else {
      result = A.wait(array, index, value, timeout);
      // Only an unchanged value blocks; with the comparison already traced, a
      // change since then reads as the notification that caused it.
      if (trace && result === 'not-equal') result = 'ok';
    }
    if (trace) {
      lock();
      try { record(result === 'timed-out' ? OP.wakeTimedOut : OP.wakeOk, array, index, 0); }
      finally { unlock(); }
    }
    perturb();
    return result;
  };
  if (A.waitAsync) Atomics.waitAsync = function waitAsync(array, index, value, timeout) {
    if (!watched(array)) return A.waitAsync(array, index, value, timeout);
    perturb();
    const result = traced(r => r.async ? OP.asyncWait : OP.asyncNotEqual, array, index,
      () => A.waitAsync(array, index, value, timeout), () => value);
    if (fuzz && result.async && random() < rate) {
      const delay = random() * 3;
      return { async: true, value: result.value.then(v => new Promise(done => setTimeout(() => done(v), delay))) };
    }
    return result;
  };

  if (isMainThread && trace) process.on('exit', () => writeTraces());

  // One trace per slot, in the format of verification/host-bridge (Main.lean).
  function writeTraces() {
    const { mkdirSync, writeFileSync } = require('node:fs');
    const { join } = require('node:path');
    let sync = null, slots = [];
    try { sync = globalThis[Symbol.for('lasm.js.sync')]?.() ?? null; } catch {}
    try { slots = globalThis[Symbol.for('lasm.full.slots')]?.().slots.map(s => s.pointer) ?? []; } catch {}
    const count = Math.min(A.load(trace, 1), capacity);
    const names = { [OP.load]: 'load', [OP.store]: 'store', [OP.add]: 'add', [OP.notify]: 'notify' };
    mkdirSync(traceDir, { recursive: true });
    const summary = { pid: process.pid, events: count, overflow: A.load(trace, 2) === 1, sync, slots: [] };
    for (const pointer of slots) {
      const isSync = sync?.slot === pointer;
      const words = new Map([[pointer, 'seq'], [pointer + 4, 'ready']]);
      if (isSync) { words.set(sync.channel, 'state'); words.set(sync.channel + 4, 'bell'); }
      const lines = [isSync ? 'slot sync' : 'slot generic'];
      let started = false, lean = new Set();
      for (let i = 0; i < count; i++) {
        const at = 4 + i * 4, thread = trace[at], op = trace[at + 1], address = trace[at + 2], value = trace[at + 3];
        const word = words.get(address);
        if (word === undefined) continue;
        const who = thread === 0 ? 'main' : 'lean';
        // From the slot's first use (the thread's first request, or the host's
        // first read once the slot is registered): the memory may have seen
        // other atomics before it was allocated.
        if (!started) {
          if (who === 'lean' && op === OP.store && word === 'ready' || who === 'main' && op === OP.load && word === 'seq') started = true;
          else continue;
        }
        if (who === 'lean') lean.add(thread);
        if (names[op]) lines.push(op === OP.notify ? `${who} notify ${word}` : `${who} ${names[op]} ${word} ${value}`);
        else if (op === OP.blocked || op === OP.notEqual) lines.push(`${who} wait ${word} ${value} ${op === OP.blocked ? 'blocked' : 'not-equal'}`);
        else if (op === OP.wakeOk || op === OP.wakeTimedOut) lines.push(`${who} wake ${word} ${op === OP.wakeOk ? 'ok' : 'timed-out'}`);
        else if (op === OP.asyncWait || op === OP.asyncNotEqual) lines.push(`${who} waitasync ${word} ${value} ${op === OP.asyncWait ? 'async' : 'not-equal'}`);
      }
      const file = `trace-${process.pid}-${pointer}.trace`;
      writeFileSync(join(traceDir, file), lines.join('\n') + '\n');
      summary.slots.push({ pointer, sync: isSync, file, events: lines.length - 1, leanThreads: lean.size });
    }
    writeFileSync(join(traceDir, `trace-${process.pid}.json`), JSON.stringify(summary, null, 2) + '\n');
  }
}
